#include "figure.h"
#include "demodulator.h"

Figure::Figure(Demodulator *demod, QWidget *parent)
	: QCustomPlot(parent),
	m_demod(demod)
{
	initFigure();
}

Figure::~Figure()
{
	updateFigureBufThread.quit();
	updateFigureBufThread.wait();
}

void Figure::startRedrawing()
{
	startUpdateFigureBuf();
	redrawingFigureTimer->start(0);
}

void Figure::stopRedrawing()
{
	redrawingFigureTimer->stop();
}

void Figure::initFigure()
{
	m_figureBufLen = 2000;
	/*figure = new QCustomPlot;*/
	this->addGraph();
	//this->graph(0)->setLineStyle(QCPGraph::lsStepCenter);
	//this->graph(0)->setBrush(QBrush(QColor(0, 200, 150)));
	this->graph(0)->setPen(QPen(QColor(0, 200, 150)));
	this->xAxis->setLabel(tr("time"));
	this->yAxis->setLabel(tr("signal"));
	this->xAxis->setRange(0, m_figureBufLen);
	this->yAxis->setRange(-150.0, 150.0);
	QVector<qreal> x;
	QVector<qreal> y;
	QVector<qreal> z;
	for (int i = 0; i < 2000; i++) {
		x.append(i);
		y.append(127);
		z.append(-128);
	}

	this->addGraph();
	this->graph(1)->setData(x, y);
	this->addGraph();
	this->graph(2)->setData(x, z);

	// 更新figure buffer的线程
	updateFigureBufWorker = new UpdateFigureBufWorker();
	updateFigureBufWorker->moveToThread(&updateFigureBufThread);
	connect(&updateFigureBufThread, &QThread::finished, updateFigureBufWorker, &QObject::deleteLater);
	connect(this, &Figure::updateFigureBufSignal, updateFigureBufWorker, &UpdateFigureBufWorker::doWork);
	updateFigureBufThread.start();

	// 初始化更新绘图的timer
	redrawingFigureTimer = new QTimer();
	connect(redrawingFigureTimer, SIGNAL(timeout()), this, SLOT(updatePsdWave()));
}

void Figure::startUpdateFigureBuf()
{
	emit updateFigureBufSignal(this);
}

void Figure::m_updateFigureBuf()
{
	QVector<qreal> data;
	quint32 step = 1;

	while (true)
	{
		// 在这里放置停止工作结束线程的条件
		if (m_demod->isRunning() == false)
		{
			break;
		}
		// 这里可以进行优化
		m_demod->getData(data);	// 此函数会被锁阻塞,getData是锁安全的

		for (int i = 0; i < data.count(); i = i + step)
		{
			m_figureBufY.enqueue(data[i]);
		}

		for (int i = m_figureBufY.count(); i > m_figureBufLen; i--)
		{
			m_figureBufY.removeFirst();
		}

		if (m_figureBufX.isEmpty() || m_figureBufX.count() != m_figureBufY.count())
		{
			for (int i = m_figureBufX.count(); i < m_figureBufY.count(); i++)
			{
				m_figureBufX.enqueue(i);
			}
		}
		m_figLock.lockForWrite();
		m_figureX = m_figureBufX.toVector();
		m_figureY = m_figureBufY.toVector();
		m_figLock.unlock();
	}


}

void Figure::updatePsdWave()
{
	m_figLock.lockForRead();
	//qDebug() << "plot len = " << m_figureBufY.length();
	this->graph(0)->setData(m_figureX, m_figureY, true);
	m_figLock.unlock();
	this->replot();
}

void UpdateFigureBufWorker::doWork(Figure *fig)
{
	qDebug() << "start doing work(update figure buffer)";
	fig->m_updateFigureBuf();
}
 //****************************************APT*******************************\\
 // kaiser
 int FIR_48000_TO_12480_LEN = 959;
 double FIR_48000_TO_12480[959] = {
 -0.000426114637600091,
 -0.000424494030021996,
 -0.000422249604947186,
 -0.000419383773800726,
 -0.000415900548700315,
 -0.000411805552829712,
 -0.000407106026895720,
 -0.000401810831606238,
 -0.000395930446116219,
 -0.000389476962398020,
 -0.000382464075502449,
 -0.000374907069686801,
 -0.000366822800396390,
 -0.000358229672096403,
 -0.000349147611961319,
 -0.000339598039439713,
 -0.000329603831722834,
 -0.000319189285156027,
 -0.000308380072642673,
 -0.000297203197101059,
 -0.000285686941045088,
 -0.000273860812370384,
 -0.000261755486437717,
 -0.000249402744556047,
 -0.000236835408977658,
 -0.000224087274527810,
 -0.000211193037001231,
 -0.000198188218467216,
 -0.000185109089634544,
 -0.000171992589436341,
 -0.000158876242003831,
 -0.000145798071206247,
 -0.000132796512942242,
 -0.000119910325375783,
 -0.000107178497316746,
 -9.46401549532989e-05,
 -8.23344671494610e-05,
 -7.03005495272103e-05,
 -5.85773675578784e-05,
 -4.72036388925118e-05,
 -3.62177351652469e-05,
 -2.56575835076294e-05,
 -1.55605680150614e-05,
 -5.96343140933264e-06,
 3.09782285670357e-06,
 1.15880278046652e-05,
 1.94729491977958e-05,
 2.67193806208223e-05,
 3.32952371238408e-05,
 3.91696471824922e-05,
 4.43130427281639e-05,
 4.86972470041585e-05,
 5.22955600065006e-05,
 5.50828412714982e-05,
 5.70355897761876e-05,
 5.81320207224626e-05,
 5.83521389809544e-05,
 5.76778089766151e-05,
 5.60928208044449e-05,
 5.35829523708764e-05,
 5.01360273639847e-05,
 4.57419688639146e-05,
 4.03928484136844e-05,
 3.40829303798368e-05,
 2.68087114422178e-05,
 1.85689550625035e-05,
 9.36472079186928e-06,
 -8.00611710544533e-07,
 -1.19213240650242e-05,
 -2.39893460691318e-05,
 -3.69942481980964e-05,
 -5.09232397870705e-05,
 -6.57611729613646e-05,
 -8.14905523674088e-05,
 -9.80915507433944e-05,
 -0.000115542030354709,
 -0.000133817570305059,
 -0.000152891499719898,
 -0.000172734936784348,
 -0.000193316833603214,
 -0.000214604026836142,
 -0.000236561294046255,
 -0.000259151415686050,
 -0.000282335242629652,
 -0.000306071769146104,
 -0.000330318211193871,
 -0.000355030089902542,
 -0.000380161320093667,
 -0.000405664303678717,
 -0.000431490027758732,
 -0.000457588167236754,
 -0.000483907191741351,
 -0.000510394476646802,
 -0.000536996417963426,
 -0.000563658550859697,
 -0.000590325671566554,
 -0.000616941962403467,
 -0.000643451119655571,
 -0.000669796484021494,
 -0.000695921173342321,
 -0.000721768217313707,
 -0.000747280693875207,
 -0.000772401866963781,
 -0.000797075325311831,
 -0.000821245121964432,
 -0.000844855914185269,
 -0.000867853103416587,
 -0.000890182974954815,
 -0.000911792837000898,
 -0.000932631158742324,
 -0.000952647707122765,
 -0.000971793681954937,
 -0.000990021849032758,
 -0.00100728667090033,
 -0.00102354443493736,
 -0.00103875337842388,
 -0.00105287381025069,
 -0.00106586822894713,
 -0.00107770143670296,
 -0.00108834064906780,
 -0.00109775560001869,
 -0.00110591864209448,
 -0.00111280484130460,
 -0.00111839206652930,
 -0.00112266107313912,
 -0.00112559558057231,
 -0.00112718234362096,
 -0.00112741121718924,
 -0.00112627521430042,
 -0.00112377055714340,
 -0.00111989672096412,
 -0.00111465647062234,
 -0.00110805588965037,
 -0.00110010440166632,
 -0.00109081478401165,
 -0.00108020317350000,
 -0.00106828906418206,
 -0.00105509529704945,
 -0.00104064804161913,
 -0.00102497676935877,
 -0.00100811421893243,
 -0.000990096353265667,
 -0.000970962308448245,
 -0.000950754334512764,
 -0.000929517728147009,
 -0.000907300757417839,
 -0.000884154578604158,
 -0.000860133145256431,
 -0.000835293109619776,
 -0.000809693716577366,
 -0.000783396690290135,
 -0.000756466113727997,
 -0.000728968301306626,
 -0.000700971664862346,
 -0.000672546573215855,
 -0.000643765205593217,
 -0.000614701399189798,
 -0.000585430491179578,
 -0.000556029155488415,
 -0.000526575234665422,
 -0.000497147567201540,
 -0.000467825810658611,
 -0.000438690260985774,
 -0.000409821668412734,
 -0.000381301050321396,
 -0.000353209501508455,
 -0.000325628002261752,
 -0.000298637224682505,
 -0.000272317337693970,
 -0.000246747811184425,
 -0.000222007219738874,
 -0.000198173046419244,
 -0.000175321487057259,
 -0.000153527255527478,
 -0.000132863390470285,
 -0.000113401063935749,
 -9.52093924193728e-05,
 -7.83552507597215e-05,
 -6.29030893657445e-05,
 -4.89147552383672e-05,
 -3.64493172465203e-05,
 -2.55628961122640e-05,
 -1.63084995530324e-05,
 -8.73586302128423e-06,
 -2.89129647298112e-06,
 1.18246241361126e-06,
 3.44638815834131e-06,
 3.86530014042883e-06,
 2.40798761532240e-06,
 -9.52673283940518e-07,
 -6.23961091680268e-06,
 -1.34714582165030e-05,
 -2.26624618053811e-05,
 -3.38224004489440e-05,
 -4.69565131346058e-05,
 -6.20654370413143e-05,
 -7.91451556457984e-05,
 -9.81869571898887e-05,
 -0.000119177403711403,
 -0.000142098310818445,
 -0.000166926738363672,
 -0.000193634992151247,
 -0.000222190636784817,
 -0.000252556519740000,
 -0.000284690806719578,
 -0.000318547028323978,
 -0.000354074138043662,
 -0.000391216581553815,
 -0.000429914377265396,
 -0.000470103208060000,
 -0.000511714524109468,
 -0.000554675656654458,
 -0.000598909942589744,
 -0.000644336859677441,
 -0.000690872172183144,
 -0.000738428086703888,
 -0.000786913417931081,
 -0.000836233764066184,
 -0.000886291691581892,
 -0.000936986928997144,
 -0.000988216569310282,
 -0.00103987528071133,
 -0.00109185552517171,
 -0.00114404778448766,
 -0.00119634079333257,
 -0.00124862177885282,
 -0.00130077670632248,
 -0.00135269053035363,
 -0.00140424745114115,
 -0.00145533117520492,
 -0.00150582518007628,
 -0.00155561298236165,
 -0.00160457840860294,
 -0.00165260586834240,
 -0.00169958062878881,
 -0.00174538909047256,
 -0.00178991906326895,
 -0.00183306004216234,
 -0.00187470348211818,
 -0.00191474307142615,
 -0.00195307500287481,
 -0.00198959824211707,
 -0.00202421479258593,
 -0.00205682995632181,
 -0.00208735259007570,
 -0.00211569535605715,
 -0.00214177496670218,
 -0.00216551242284369,
 -0.00218683324467596,
 -0.00220566769491540,
 -0.00222195099357133,
 -0.00223562352375430,
 -0.00224663102796384,
 -0.00225492479431375,
 -0.00226046183217063,
 -0.00226320503669985,
 -0.00226312334183371,
 -0.00226019186119732,
 -0.00225439201655092,
 -0.00224571165333054,
 -0.00223414514289435,
 -0.00221969347110761,
 -0.00220236431292635,
 -0.00218217209266815,
 -0.00215913802968679,
 -0.00213329016919811,
 -0.00210466339803444,
 -0.00207329944513685,
 -0.00203924686662621,
 -0.00200256101532718,
 -0.00196330399465209,
 -0.00192154459678597,
 -0.00187735822514765,
 -0.00183082680113691,
 -0.00178203865521202,
 -0.00173108840237737,
 -0.00167807680219580,
 -0.00162311060347552,
 -0.00156630237381653,
 -0.00150777031423664,
 -0.00144763805913178,
 -0.00138603446186005,
 -0.00132309336627305,
 -0.00125895336455185,
 -0.00119375754173807,
 -0.00112765320738359,
 -0.00106079161477397,
 -0.000993327668212276,
 -0.000925419618880368,
 -0.000857228749824355,
 -0.000788919050639434,
 -0.000720656882457126,
 -0.000652610633864323,
 -0.000584950368408991,
 -0.000517847464371472,
 -0.000451474247503257,
 -0.000386003617456549,
 -0.000321608668648123,
 -0.000258462306319603,
 -0.000196736858573485,
 -0.000136603685179795,
 -7.82327839623533e-05,
 -2.17923955858992e-05,
 3.25513924238960e-05,
 8.46350415865554e-05,
 0.000134297957450870,
 0.000181382882803219,
 0.000225736288242792,
 0.000267208759264550,
 0.000305655378990685,
 0.000340936105693214,
 0.000372916144254010,
 0.000401466310714125,
 0.000426463389071656,
 0.000447790479496668,
 0.000465337337142811,
 0.000479000700748204,
 0.000488684610232927,
 0.000494300712517039,
 0.000495768554801392,
 0.000493015864573622,
 0.000485978815623480,
 0.000474602279375225,
 0.000458840060869890,
 0.000438655118757031,
 0.000414019768683820,
 0.000384915869499195,
 0.000351334991721982,
 0.000313278567754582,
 0.000270758023357759,
 0.000223794889937336,
 0.000172420897229976,
 0.000116678046012885,
 5.66186605007672e-05,
 -7.69457986693951e-06,
 -7.61886295050820e-05,
 -0.000148780086843268,
 -0.000225375225740970,
 -0.000305870048287692,
 -0.000390150359075401,
 -0.000478091860986705,
 -0.000569560272498028,
 -0.000664411466452762,
 -0.000762491630214623,
 -0.000863637447066766,
 -0.000967676298677453,
 -0.00107442648840842,
 -0.00118369748519753,
 -0.00129529018770317,
 -0.00140899720835389,
 -0.00152460317690349,
 -0.00164188506304879,
 -0.00176061251762522,
 -0.00188054823185390,
 -0.00200144831407309,
 -0.00212306268334752,
 -0.00224513547930998,
 -0.00236740548755227,
 -0.00248960657984610,
 -0.00261146816843930,
 -0.00273271567363894,
 -0.00285307100386054,
 -0.00297225304729175,
 -0.00308997817428938,
 -0.00320596074960114,
 -0.00331991365347729,
 -0.00343154881071350,
 -0.00354057772664337,
 -0.00364671202907904,
 -0.00374966401517937,
 -0.00384914720220892,
 -0.00394487688113603,
 -0.00403657067200632,
 -0.00412394908001698,
 -0.00420673605120949,
 -0.00428465952669199,
 -0.00435745199429881,
 -0.00442485103659299,
 -0.00448659987411797,
 -0.00454244790280768,
 -0.00459215122446906,
 -0.00463547316925824,
 -0.00467218480908134,
 -0.00470206546086218,
 -0.00472490317863328,
 -0.00474049523342261,
 -0.00474864857992667,
 -0.00474918030898089,
 -0.00474191808486076,
 -0.00472670056647185,
 -0.00470337781151291,
 -0.00467181166272550,
 -0.00463187611537318,
 -0.00458345766512641,
 -0.00452645563556289,
 -0.00446078248452912,
 -0.00438636408864647,
 -0.00430314000528441,
 -0.00421106371136377,
 -0.00411010281839555,
 -0.00400023926320409,
 -0.00388146947382810,
 -0.00375380451013941,
 -0.00361727017876610,
 -0.00347190712195499,
 -0.00331777088005762,
 -0.00315493192737355,
 -0.00298347568113571,
 -0.00280350248347360,
 -0.00261512755624204,
 -0.00241848092865550,
 -0.00221370733772027,
 -0.00200096610150987,
 -0.00178043096538177,
 -0.00155228992128623,
 -0.00131674500037114,
 -0.00107401203913897,
 -0.000824320419464346,
 -0.000567912782832384,
 -0.000305044719209283,
 -3.59844310072430e-05,
 0.000238987627344535,
 0.000519579133661803,
 0.000805486305491322,
 0.00109639433016524,
 0.00139197781672203,
 0.00169190126894776,
 0.00199581957874840,
 0.00230337853902164,
 0.00261421537515703,
 0.00292795929425405,
 0.00324423205111113,
 0.00356264853000330,
 0.00388281734123275,
 0.00420434143140533,
 0.00452681870635647,
 0.00484984266562245,
 0.00517300304732816,
 0.00549588648233878,
 0.00581807715650224,
 0.00613915747979080,
 0.00645870876113340,
 0.00677631188771676,
 0.00709154800752145,
 0.00740399921384993,
 0.00771324923059696,
 0.00801888409700819,
 0.00832049285067102,
 0.00861766820748243,
 0.00891000723734149,
 0.00919711203431961,
 0.00947859038007004,
 0.00975405639924801,
 0.0100231312057261,
 0.0102854435384046,
 0.0105406303854342,
 0.0107883375956890,
 0.0110282204763478,
 0.0112599443754705,
 0.0114831852484783,
 0.0116976302074792,
 0.0119029780524090,
 0.0120989397829928,
 0.0122852390905647,
 0.0124616128288246,
 0.0126278114626445,
 0.0127835994940822,
 0.0129287558647988,
 0.0130630743341244,
 0.0131863638320568,
 0.0132984487865293,
 0.0133991694243308,
 0.0134883820451078,
 0.0135659592679336,
 0.0136317902499777,
 0.0136857808768620,
 0.0137278539243454,
 0.0137579491910290,
 0.0137760236018335,
 0.0137820512820513,
 0.0137760236018335,
 0.0137579491910290,
 0.0137278539243454,
 0.0136857808768620,
 0.0136317902499777,
 0.0135659592679336,
 0.0134883820451078,
 0.0133991694243308,
 0.0132984487865293,
 0.0131863638320568,
 0.0130630743341244,
 0.0129287558647988,
 0.0127835994940822,
 0.0126278114626445,
 0.0124616128288246,
 0.0122852390905647,
 0.0120989397829928,
 0.0119029780524090,
 0.0116976302074792,
 0.0114831852484783,
 0.0112599443754705,
 0.0110282204763478,
 0.0107883375956890,
 0.0105406303854342,
 0.0102854435384046,
 0.0100231312057261,
 0.00975405639924801,
 0.00947859038007004,
 0.00919711203431961,
 0.00891000723734149,
 0.00861766820748243,
 0.00832049285067102,
 0.00801888409700819,
 0.00771324923059696,
 0.00740399921384993,
 0.00709154800752145,
 0.00677631188771676,
 0.00645870876113340,
 0.00613915747979080,
 0.00581807715650224,
 0.00549588648233878,
 0.00517300304732816,
 0.00484984266562245,
 0.00452681870635647,
 0.00420434143140533,
 0.00388281734123275,
 0.00356264853000330,
 0.00324423205111113,
 0.00292795929425405,
 0.00261421537515703,
 0.00230337853902164,
 0.00199581957874840,
 0.00169190126894776,
 0.00139197781672203,
 0.00109639433016524,
 0.000805486305491322,
 0.000519579133661803,
 0.000238987627344535,
 -3.59844310072430e-05,
 -0.000305044719209283,
 -0.000567912782832384,
 -0.000824320419464346,
 -0.00107401203913897,
 -0.00131674500037114,
 -0.00155228992128623,
 -0.00178043096538177,
 -0.00200096610150987,
 -0.00221370733772027,
 -0.00241848092865550,
 -0.00261512755624204,
 -0.00280350248347360,
 -0.00298347568113571,
 -0.00315493192737355,
 -0.00331777088005762,
 -0.00347190712195499,
 -0.00361727017876610,
 -0.00375380451013941,
 -0.00388146947382810,
 -0.00400023926320409,
 -0.00411010281839555,
 -0.00421106371136377,
 -0.00430314000528441,
 -0.00438636408864647,
 -0.00446078248452912,
 -0.00452645563556289,
 -0.00458345766512641,
 -0.00463187611537318,
 -0.00467181166272550,
 -0.00470337781151291,
 -0.00472670056647185,
 -0.00474191808486076,
 -0.00474918030898089,
 -0.00474864857992667,
 -0.00474049523342261,
 -0.00472490317863328,
 -0.00470206546086218,
 -0.00467218480908134,
 -0.00463547316925824,
 -0.00459215122446906,
 -0.00454244790280768,
 -0.00448659987411797,
 -0.00442485103659299,
 -0.00435745199429881,
 -0.00428465952669199,
 -0.00420673605120949,
 -0.00412394908001698,
 -0.00403657067200632,
 -0.00394487688113603,
 -0.00384914720220892,
 -0.00374966401517937,
 -0.00364671202907904,
 -0.00354057772664337,
 -0.00343154881071350,
 -0.00331991365347729,
 -0.00320596074960114,
 -0.00308997817428938,
 -0.00297225304729175,
 -0.00285307100386054,
 -0.00273271567363894,
 -0.00261146816843930,
 -0.00248960657984610,
 -0.00236740548755227,
 -0.00224513547930998,
 -0.00212306268334752,
 -0.00200144831407309,
 -0.00188054823185390,
 -0.00176061251762522,
 -0.00164188506304879,
 -0.00152460317690349,
 -0.00140899720835389,
 -0.00129529018770317,
 -0.00118369748519753,
 -0.00107442648840842,
 -0.000967676298677453,
 -0.000863637447066766,
 -0.000762491630214623,
 -0.000664411466452762,
 -0.000569560272498028,
 -0.000478091860986705,
 -0.000390150359075401,
 -0.000305870048287692,
 -0.000225375225740970,
 -0.000148780086843268,
 -7.61886295050820e-05,
 -7.69457986693951e-06,
 5.66186605007672e-05,
 0.000116678046012885,
 0.000172420897229976,
 0.000223794889937336,
 0.000270758023357759,
 0.000313278567754582,
 0.000351334991721982,
 0.000384915869499195,
 0.000414019768683820,
 0.000438655118757031,
 0.000458840060869890,
 0.000474602279375225,
 0.000485978815623480,
 0.000493015864573622,
 0.000495768554801392,
 0.000494300712517039,
 0.000488684610232927,
 0.000479000700748204,
 0.000465337337142811,
 0.000447790479496668,
 0.000426463389071656,
 0.000401466310714125,
 0.000372916144254010,
 0.000340936105693214,
 0.000305655378990685,
 0.000267208759264550,
 0.000225736288242792,
 0.000181382882803219,
 0.000134297957450870,
 8.46350415865554e-05,
 3.25513924238960e-05,
 -2.17923955858992e-05,
 -7.82327839623533e-05,
 -0.000136603685179795,
 -0.000196736858573485,
 -0.000258462306319603,
 -0.000321608668648123,
 -0.000386003617456549,
 -0.000451474247503257,
 -0.000517847464371472,
 -0.000584950368408991,
 -0.000652610633864323,
 -0.000720656882457126,
 -0.000788919050639434,
 -0.000857228749824355,
 -0.000925419618880368,
 -0.000993327668212276,
 -0.00106079161477397,
 -0.00112765320738359,
 -0.00119375754173807,
 -0.00125895336455185,
 -0.00132309336627305,
 -0.00138603446186005,
 -0.00144763805913178,
 -0.00150777031423664,
 -0.00156630237381653,
 -0.00162311060347552,
 -0.00167807680219580,
 -0.00173108840237737,
 -0.00178203865521202,
 -0.00183082680113691,
 -0.00187735822514765,
 -0.00192154459678597,
 -0.00196330399465209,
 -0.00200256101532718,
 -0.00203924686662621,
 -0.00207329944513685,
 -0.00210466339803444,
 -0.00213329016919811,
 -0.00215913802968679,
 -0.00218217209266815,
 -0.00220236431292635,
 -0.00221969347110761,
 -0.00223414514289435,
 -0.00224571165333054,
 -0.00225439201655092,
 -0.00226019186119732,
 -0.00226312334183371,
 -0.00226320503669985,
 -0.00226046183217063,
 -0.00225492479431375,
 -0.00224663102796384,
 -0.00223562352375430,
 -0.00222195099357133,
 -0.00220566769491540,
 -0.00218683324467596,
 -0.00216551242284369,
 -0.00214177496670218,
 -0.00211569535605715,
 -0.00208735259007570,
 -0.00205682995632181,
 -0.00202421479258593,
 -0.00198959824211707,
 -0.00195307500287481,
 -0.00191474307142615,
 -0.00187470348211818,
 -0.00183306004216234,
 -0.00178991906326895,
 -0.00174538909047256,
 -0.00169958062878881,
 -0.00165260586834240,
 -0.00160457840860294,
 -0.00155561298236165,
 -0.00150582518007628,
 -0.00145533117520492,
 -0.00140424745114115,
 -0.00135269053035363,
 -0.00130077670632248,
 -0.00124862177885282,
 -0.00119634079333257,
 -0.00114404778448766,
 -0.00109185552517171,
 -0.00103987528071133,
 -0.000988216569310282,
 -0.000936986928997144,
 -0.000886291691581892,
 -0.000836233764066184,
 -0.000786913417931081,
 -0.000738428086703888,
 -0.000690872172183144,
 -0.000644336859677441,
 -0.000598909942589744,
 -0.000554675656654458,
 -0.000511714524109468,
 -0.000470103208060000,
 -0.000429914377265396,
 -0.000391216581553815,
 -0.000354074138043662,
 -0.000318547028323978,
 -0.000284690806719578,
 -0.000252556519740000,
 -0.000222190636784817,
 -0.000193634992151247,
 -0.000166926738363672,
 -0.000142098310818445,
 -0.000119177403711403,
 -9.81869571898887e-05,
 -7.91451556457984e-05,
 -6.20654370413143e-05,
 -4.69565131346058e-05,
 -3.38224004489440e-05,
 -2.26624618053811e-05,
 -1.34714582165030e-05,
 -6.23961091680268e-06,
 -9.52673283940518e-07,
 2.40798761532240e-06,
 3.86530014042883e-06,
 3.44638815834131e-06,
 1.18246241361126e-06,
 -2.89129647298112e-06,
 -8.73586302128423e-06,
 -1.63084995530324e-05,
 -2.55628961122640e-05,
 -3.64493172465203e-05,
 -4.89147552383672e-05,
 -6.29030893657445e-05,
 -7.83552507597215e-05,
 -9.52093924193728e-05,
 -0.000113401063935749,
 -0.000132863390470285,
 -0.000153527255527478,
 -0.000175321487057259,
 -0.000198173046419244,
 -0.000222007219738874,
 -0.000246747811184425,
 -0.000272317337693970,
 -0.000298637224682505,
 -0.000325628002261752,
 -0.000353209501508455,
 -0.000381301050321396,
 -0.000409821668412734,
 -0.000438690260985774,
 -0.000467825810658611,
 -0.000497147567201540,
 -0.000526575234665422,
 -0.000556029155488415,
 -0.000585430491179578,
 -0.000614701399189798,
 -0.000643765205593217,
 -0.000672546573215855,
 -0.000700971664862346,
 -0.000728968301306626,
 -0.000756466113727997,
 -0.000783396690290135,
 -0.000809693716577366,
 -0.000835293109619776,
 -0.000860133145256431,
 -0.000884154578604158,
 -0.000907300757417839,
 -0.000929517728147009,
 -0.000950754334512764,
 -0.000970962308448245,
 -0.000990096353265667,
 -0.00100811421893243,
 -0.00102497676935877,
 -0.00104064804161913,
 -0.00105509529704945,
 -0.00106828906418206,
 -0.00108020317350000,
 -0.00109081478401165,
 -0.00110010440166632,
 -0.00110805588965037,
 -0.00111465647062234,
 -0.00111989672096412,
 -0.00112377055714340,
 -0.00112627521430042,
 -0.00112741121718924,
 -0.00112718234362096,
 -0.00112559558057231,
 -0.00112266107313912,
 -0.00111839206652930,
 -0.00111280484130460,
 -0.00110591864209448,
 -0.00109775560001869,
 -0.00108834064906780,
 -0.00107770143670296,
 -0.00106586822894713,
 -0.00105287381025069,
 -0.00103875337842388,
 -0.00102354443493736,
 -0.00100728667090033,
 -0.000990021849032758,
 -0.000971793681954937,
 -0.000952647707122765,
 -0.000932631158742324,
 -0.000911792837000898,
 -0.000890182974954815,
 -0.000867853103416587,
 -0.000844855914185269,
 -0.000821245121964432,
 -0.000797075325311831,
 -0.000772401866963781,
 -0.000747280693875207,
 -0.000721768217313707,
 -0.000695921173342321,
 -0.000669796484021494,
 -0.000643451119655571,
 -0.000616941962403467,
 -0.000590325671566554,
 -0.000563658550859697,
 -0.000536996417963426,
 -0.000510394476646802,
 -0.000483907191741351,
 -0.000457588167236754,
 -0.000431490027758732,
 -0.000405664303678717,
 -0.000380161320093667,
 -0.000355030089902542,
 -0.000330318211193871,
 -0.000306071769146104,
 -0.000282335242629652,
 -0.000259151415686050,
 -0.000236561294046255,
 -0.000214604026836142,
 -0.000193316833603214,
 -0.000172734936784348,
 -0.000152891499719898,
 -0.000133817570305059,
 -0.000115542030354709,
 -9.80915507433944e-05,
 -8.14905523674088e-05,
 -6.57611729613646e-05,
 -5.09232397870705e-05,
 -3.69942481980964e-05,
 -2.39893460691318e-05,
 -1.19213240650242e-05,
 -8.00611710544533e-07,
 9.36472079186928e-06,
 1.85689550625035e-05,
 2.68087114422178e-05,
 3.40829303798368e-05,
 4.03928484136844e-05,
 4.57419688639146e-05,
 5.01360273639847e-05,
 5.35829523708764e-05,
 5.60928208044449e-05,
 5.76778089766151e-05,
 5.83521389809544e-05,
 5.81320207224626e-05,
 5.70355897761876e-05,
 5.50828412714982e-05,
 5.22955600065006e-05,
 4.86972470041585e-05,
 4.43130427281639e-05,
 3.91696471824922e-05,
 3.32952371238408e-05,
 2.67193806208223e-05,
 1.94729491977958e-05,
 1.15880278046652e-05,
 3.09782285670357e-06,
 -5.96343140933264e-06,
 -1.55605680150614e-05,
 -2.56575835076294e-05,
 -3.62177351652469e-05,
 -4.72036388925118e-05,
 -5.85773675578784e-05,
 -7.03005495272103e-05,
 -8.23344671494610e-05,
 -9.46401549532989e-05,
 -0.000107178497316746,
 -0.000119910325375783,
 -0.000132796512942242,
 -0.000145798071206247,
 -0.000158876242003831,
 -0.000171992589436341,
 -0.000185109089634544,
 -0.000198188218467216,
 -0.000211193037001231,
 -0.000224087274527810,
 -0.000236835408977658,
 -0.000249402744556047,
 -0.000261755486437717,
 -0.000273860812370384,
 -0.000285686941045088,
 -0.000297203197101059,
 -0.000308380072642673,
 -0.000319189285156027,
 -0.000329603831722834,
 -0.000339598039439713,
 -0.000349147611961319,
 -0.000358229672096403,
 -0.000366822800396390,
 -0.000374907069686801,
 -0.000382464075502449,
 -0.000389476962398020,
 -0.000395930446116219,
 -0.000401810831606238,
 -0.000407106026895720,
 -0.000411805552829712,
 -0.000415900548700315,
 -0.000419383773800726,
 -0.000422249604947186,
 -0.000424494030021996,
 -0.000426114637600091
 };
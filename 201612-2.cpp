/*
	note:	csp201612-2
	date:	2018/2/13
	tag:	��٣��ռ任ʱ�䣬ֱ�ӵ�ӳ�� �������ļ���������� 
*/
#include <iostream>
using namespace std;

int T[] = {0,3,6,9,12,15,18,21,24,27,30,33,36,39,42,45,55,65,75,85,95,105,115,125,135,145,155,165,175,185,195,205,215,225,235,245,255,265,275,285,295,305,315,325,335,345,365,385,405,425,445,465,485,505,525,545,565,585,605,625,645,665,685,705,725,745,765,785,805,825,845,865,885,905,925,945,965,985,1005,1025,1045,1065,1085,1105,1125,1145,1165,1185,1205,1225,1245,1270,1295,1320,1345,1370,1395,1420,1445,1470,1495,1520,1545,1570,1595,1620,1645,1670,1695,1720,1745,1770,1795,1820,1845,1870,1895,1920,1945,1970,1995,2020,2045,2070,2095,2120,2145,2170,2195,2220,2245,2270,2295,2320,2345,2370,2395,2420,2445,2470,2495,2520,2545,2570,2595,2620,2645,2670,2695,2720,2745,2770,2795,2820,2845,2870,2895,2920,2945,2970,2995,3020,3045,3070,3095,3120,3145,3170,3195,3220,3245,3270,3295,3320,3345,3370,3395,3420,3445,3470,3495,3520,3545,3570,3595,3620,3645,3670,3695,3720,3745,3770,3795,3820,3845,3870,3895,3920,3945,3970,3995,4020,4045,4070,4095,4120,4145,4170,4195,4220,4245,4270,4295,4320,4345,4370,4395,4420,4445,4470,4495,4520,4545,4570,4595,4620,4645,4670,4695,4720,4745,4770,4795,4820,4845,4870,4895,4920,4945,4970,4995,5020,5045,5070,5095,5120,5145,5170,5195,5220,5245,5270,5295,5320,5345,5370,5395,5420,5445,5470,5495,5520,5545,5570,5595,5620,5645,5670,5695,5720,5745,5770,5795,5820,5845,5870,5895,5920,5945,5970,5995,6020,6045,6070,6095,6120,6145,6170,6195,6220,6245,6270,6295,6320,6345,6370,6395,6420,6445,6470,6495,6520,6545,6570,6595,6620,6645,6670,6695,6720,6745,6770,6795,6820,6845,6870,6895,6920,6945,6970,6995,7020,7045,7070,7095,7120,7145,7170,7195,7220,7245,7270,7295,7320,7345,7370,7395,7420,7445,7470,7495,7520,7545,7570,7595,7620,7645,7670,7695,7720,7745,7775,7805,7835,7865,7895,7925,7955,7985,8015,8045,8075,8105,8135,8165,8195,8225,8255,8285,8315,8345,8375,8405,8435,8465,8495,8525,8555,8585,8615,8645,8675,8705,8735,8765,8795,8825,8855,8885,8915,8945,8975,9005,9035,9065,9095,9125,9155,9185,9215,9245,9275,9305,9335,9365,9395,9425,9455,9485,9515,9545,9575,9605,9635,9665,9695,9725,9755,9785,9815,9845,9875,9905,9935,9965,9995,10025,10055,10085,10115,10145,10175,10205,10235,10265,10295,10325,10355,10385,10415,10445,10475,10505,10535,10565,10595,10625,10655,10685,10715,10745,10775,10805,10835,10865,10895,10925,10955,10985,11015,11045,11075,11105,11135,11165,11195,11225,11255,11285,11315,11345,11375,11405,11435,11465,11495,11525,11555,11585,11615,11645,11675,11705,11735,11765,11795,11825,11855,11885,11915,11945,11975,12005,12035,12065,12095,12125,12155,12185,12215,12245,12275,12305,12335,12365,12395,12425,12455,12485,12515,12545,12575,12605,12635,12665,12695,12725,12755,12785,12815,12845,12875,12905,12935,12965,12995,13025,13055,13085,13115,13145,13175,13205,13235,13265,13295,13325,13355,13385,13415,13445,13475,13505,13535,13565,13595,13625,13655,13685,13715,13745,13780,13815,13850,13885,13920,13955,13990,14025,14060,14095,14130,14165,14200,14235,14270,14305,14340,14375,14410,14445,14480,14515,14550,14585,14620,14655,14690,14725,14760,14795,14830,14865,14900,14935,14970,15005,15040,15075,15110,15145,15180,15215,15250,15285,15320,15355,15390,15425,15460,15495,15530,15565,15600,15635,15670,15705,15740,15775,15810,15845,15880,15915,15950,15985,16020,16055,16090,16125,16160,16195,16230,16265,16300,16335,16370,16405,16440,16475,16510,16545,16580,16615,16650,16685,16720,16755,16790,16825,16860,16895,16930,16965,17000,17035,17070,17105,17140,17175,17210,17245,17280,17315,17350,17385,17420,17455,17490,17525,17560,17595,17630,17665,17700,17735,17770,17805,17840,17875,17910,17945,17980,18015,18050,18085,18120,18155,18190,18225,18260,18295,18330,18365,18400,18435,18470,18505,18540,18575,18610,18645,18680,18715,18750,18785,18820,18855,18890,18925,18960,18995,19030,19065,19100,19135,19170,19205,19240,19275,19310,19345,19380,19415,19450,19485,19520,19555,19590,19625,19660,19695,19730,19765,19800,19835,19870,19905,19940,19975,20010,20045,20080,20115,20150,20185,20220,20255,20290,20325,20360,20395,20430,20465,20500,20535,20570,20605,20640,20675,20710,20745,20780,20815,20850,20885,20920,20955,20990,21025,21060,21095,21130,21165,21200,21235,21270,21305,21340,21375,21410,21445,21480,21515,21550,21585,21620,21655,21690,21725,21760,21795,21830,21865,21900,21935,21970,22005,22040,22075,22110,22145,22180,22215,22250,22285,22320,22355,22390,22425,22460,22495,};
int S[] = {3500,3600,3700,3800,3900,4000,4100,4200,4300,4400,4500,4600,4700,4800,4900,5000,5100,5200,5300,5400,5500,5600,5700,5800,5900,6000,6100,6200,6300,6400,6500,6600,6700,6800,6900,7000,7100,7200,7300,7400,7500,7600,7700,7800,7900,8000,8100,8200,8300,8400,8500,8600,8700,8800,8900,9000,9100,9200,9300,9400,9500,9600,9700,9800,9900,10000,10100,10200,10300,10400,10500,10600,10700,10800,10900,11000,11100,11200,11300,11400,11500,11600,11700,11800,11900,12000,12100,12200,12300,12400,12500,12600,12700,12800,12900,13000,13100,13200,13300,13400,13500,13600,13700,13800,13900,14000,14100,14200,14300,14400,14500,14600,14700,14800,14900,15000,15100,15200,15300,15400,15500,15600,15700,15800,15900,16000,16100,16200,16300,16400,16500,16600,16700,16800,16900,17000,17100,17200,17300,17400,17500,17600,17700,17800,17900,18000,18100,18200,18300,18400,18500,18600,18700,18800,18900,19000,19100,19200,19300,19400,19500,19600,19700,19800,19900,20000,20100,20200,20300,20400,20500,20600,20700,20800,20900,21000,21100,21200,21300,21400,21500,21600,21700,21800,21900,22000,22100,22200,22300,22400,22500,22600,22700,22800,22900,23000,23100,23200,23300,23400,23500,23600,23700,23800,23900,24000,24100,24200,24300,24400,24500,24600,24700,24800,24900,25000,25100,25200,25300,25400,25500,25600,25700,25800,25900,26000,26100,26200,26300,26400,26500,26600,26700,26800,26900,27000,27100,27200,27300,27400,27500,27600,27700,27800,27900,28000,28100,28200,28300,28400,28500,28600,28700,28800,28900,29000,29100,29200,29300,29400,29500,29600,29700,29800,29900,30000,30100,30200,30300,30400,30500,30600,30700,30800,30900,31000,31100,31200,31300,31400,31500,31600,31700,31800,31900,32000,32100,32200,32300,32400,32500,32600,32700,32800,32900,33000,33100,33200,33300,33400,33500,33600,33700,33800,33900,34000,34100,34200,34300,34400,34500,34600,34700,34800,34900,35000,35100,35200,35300,35400,35500,35600,35700,35800,35900,36000,36100,36200,36300,36400,36500,36600,36700,36800,36900,37000,37100,37200,37300,37400,37500,37600,37700,37800,37900,38000,38100,38200,38300,38400,38500,38600,38700,38800,38900,39000,39100,39200,39300,39400,39500,39600,39700,39800,39900,40000,40100,40200,40300,40400,40500,40600,40700,40800,40900,41000,41100,41200,41300,41400,41500,41600,41700,41800,41900,42000,42100,42200,42300,42400,42500,42600,42700,42800,42900,43000,43100,43200,43300,43400,43500,43600,43700,43800,43900,44000,44100,44200,44300,44400,44500,44600,44700,44800,44900,45000,45100,45200,45300,45400,45500,45600,45700,45800,45900,46000,46100,46200,46300,46400,46500,46600,46700,46800,46900,47000,47100,47200,47300,47400,47500,47600,47700,47800,47900,48000,48100,48200,48300,48400,48500,48600,48700,48800,48900,49000,49100,49200,49300,49400,49500,49600,49700,49800,49900,50000,50100,50200,50300,50400,50500,50600,50700,50800,50900,51000,51100,51200,51300,51400,51500,51600,51700,51800,51900,52000,52100,52200,52300,52400,52500,52600,52700,52800,52900,53000,53100,53200,53300,53400,53500,53600,53700,53800,53900,54000,54100,54200,54300,54400,54500,54600,54700,54800,54900,55000,55100,55200,55300,55400,55500,55600,55700,55800,55900,56000,56100,56200,56300,56400,56500,56600,56700,56800,56900,57000,57100,57200,57300,57400,57500,57600,57700,57800,57900,58000,58100,58200,58300,58400,58500,58600,58700,58800,58900,59000,59100,59200,59300,59400,59500,59600,59700,59800,59900,60000,60100,60200,60300,60400,60500,60600,60700,60800,60900,61000,61100,61200,61300,61400,61500,61600,61700,61800,61900,62000,62100,62200,62300,62400,62500,62600,62700,62800,62900,63000,63100,63200,63300,63400,63500,63600,63700,63800,63900,64000,64100,64200,64300,64400,64500,64600,64700,64800,64900,65000,65100,65200,65300,65400,65500,65600,65700,65800,65900,66000,66100,66200,66300,66400,66500,66600,66700,66800,66900,67000,67100,67200,67300,67400,67500,67600,67700,67800,67900,68000,68100,68200,68300,68400,68500,68600,68700,68800,68900,69000,69100,69200,69300,69400,69500,69600,69700,69800,69900,70000,70100,70200,70300,70400,70500,70600,70700,70800,70900,71000,71100,71200,71300,71400,71500,71600,71700,71800,71900,72000,72100,72200,72300,72400,72500,72600,72700,72800,72900,73000,73100,73200,73300,73400,73500,73600,73700,73800,73900,74000,74100,74200,74300,74400,74500,74600,74700,74800,74900,75000,75100,75200,75300,75400,75500,75600,75700,75800,75900,76000,76100,76200,76300,76400,76500,76600,76700,76800,76900,77000,77100,77200,77300,77400,77500,77600,77700,77800,77900,78000,78100,78200,78300,78400,78500,78600,78700,78800,78900,79000,79100,79200,79300,79400,79500,79600,79700,79800,79900,80000,80100,80200,80300,80400,80500,80600,80700,80800,80900,81000,81100,81200,81300,81400,81500,81600,81700,81800,81900,82000,82100,82200,82300,82400,82500,82600,82700,82800,82900,83000,83100,83200,83300,83400,83500,};
int AFT[] = {3500,3597,3694,3791,3888,3985,4082,4179,4276,4373,4470,4567,4664,4761,4858,4955,5045,5135,5225,5315,5405,5495,5585,5675,5765,5855,5945,6035,6125,6215,6305,6395,6485,6575,6665,6755,6845,6935,7025,7115,7205,7295,7385,7475,7565,7655,7735,7815,7895,7975,8055,8135,8215,8295,8375,8455,8535,8615,8695,8775,8855,8935,9015,9095,9175,9255,9335,9415,9495,9575,9655,9735,9815,9895,9975,10055,10135,10215,10295,10375,10455,10535,10615,10695,10775,10855,10935,11015,11095,11175,11255,11330,11405,11480,11555,11630,11705,11780,11855,11930,12005,12080,12155,12230,12305,12380,12455,12530,12605,12680,12755,12830,12905,12980,13055,13130,13205,13280,13355,13430,13505,13580,13655,13730,13805,13880,13955,14030,14105,14180,14255,14330,14405,14480,14555,14630,14705,14780,14855,14930,15005,15080,15155,15230,15305,15380,15455,15530,15605,15680,15755,15830,15905,15980,16055,16130,16205,16280,16355,16430,16505,16580,16655,16730,16805,16880,16955,17030,17105,17180,17255,17330,17405,17480,17555,17630,17705,17780,17855,17930,18005,18080,18155,18230,18305,18380,18455,18530,18605,18680,18755,18830,18905,18980,19055,19130,19205,19280,19355,19430,19505,19580,19655,19730,19805,19880,19955,20030,20105,20180,20255,20330,20405,20480,20555,20630,20705,20780,20855,20930,21005,21080,21155,21230,21305,21380,21455,21530,21605,21680,21755,21830,21905,21980,22055,22130,22205,22280,22355,22430,22505,22580,22655,22730,22805,22880,22955,23030,23105,23180,23255,23330,23405,23480,23555,23630,23705,23780,23855,23930,24005,24080,24155,24230,24305,24380,24455,24530,24605,24680,24755,24830,24905,24980,25055,25130,25205,25280,25355,25430,25505,25580,25655,25730,25805,25880,25955,26030,26105,26180,26255,26330,26405,26480,26555,26630,26705,26780,26855,26930,27005,27080,27155,27230,27305,27380,27455,27530,27605,27680,27755,27830,27905,27980,28055,28130,28205,28280,28355,28430,28505,28580,28655,28730,28805,28880,28955,29030,29105,29180,29255,29330,29405,29480,29555,29630,29705,29780,29855,29930,30005,30080,30155,30230,30305,30380,30455,30530,30605,30680,30755,30825,30895,30965,31035,31105,31175,31245,31315,31385,31455,31525,31595,31665,31735,31805,31875,31945,32015,32085,32155,32225,32295,32365,32435,32505,32575,32645,32715,32785,32855,32925,32995,33065,33135,33205,33275,33345,33415,33485,33555,33625,33695,33765,33835,33905,33975,34045,34115,34185,34255,34325,34395,34465,34535,34605,34675,34745,34815,34885,34955,35025,35095,35165,35235,35305,35375,35445,35515,35585,35655,35725,35795,35865,35935,36005,36075,36145,36215,36285,36355,36425,36495,36565,36635,36705,36775,36845,36915,36985,37055,37125,37195,37265,37335,37405,37475,37545,37615,37685,37755,37825,37895,37965,38035,38105,38175,38245,38315,38385,38455,38525,38595,38665,38735,38805,38875,38945,39015,39085,39155,39225,39295,39365,39435,39505,39575,39645,39715,39785,39855,39925,39995,40065,40135,40205,40275,40345,40415,40485,40555,40625,40695,40765,40835,40905,40975,41045,41115,41185,41255,41325,41395,41465,41535,41605,41675,41745,41815,41885,41955,42025,42095,42165,42235,42305,42375,42445,42515,42585,42655,42725,42795,42865,42935,43005,43075,43145,43215,43285,43355,43425,43495,43565,43635,43705,43775,43845,43915,43985,44055,44125,44195,44265,44335,44405,44475,44545,44615,44685,44755,44820,44885,44950,45015,45080,45145,45210,45275,45340,45405,45470,45535,45600,45665,45730,45795,45860,45925,45990,46055,46120,46185,46250,46315,46380,46445,46510,46575,46640,46705,46770,46835,46900,46965,47030,47095,47160,47225,47290,47355,47420,47485,47550,47615,47680,47745,47810,47875,47940,48005,48070,48135,48200,48265,48330,48395,48460,48525,48590,48655,48720,48785,48850,48915,48980,49045,49110,49175,49240,49305,49370,49435,49500,49565,49630,49695,49760,49825,49890,49955,50020,50085,50150,50215,50280,50345,50410,50475,50540,50605,50670,50735,50800,50865,50930,50995,51060,51125,51190,51255,51320,51385,51450,51515,51580,51645,51710,51775,51840,51905,51970,52035,52100,52165,52230,52295,52360,52425,52490,52555,52620,52685,52750,52815,52880,52945,53010,53075,53140,53205,53270,53335,53400,53465,53530,53595,53660,53725,53790,53855,53920,53985,54050,54115,54180,54245,54310,54375,54440,54505,54570,54635,54700,54765,54830,54895,54960,55025,55090,55155,55220,55285,55350,55415,55480,55545,55610,55675,55740,55805,55870,55935,56000,56065,56130,56195,56260,56325,56390,56455,56520,56585,56650,56715,56780,56845,56910,56975,57040,57105,57170,57235,57300,57365,57430,57495,57560,57625,57690,57755,57820,57885,57950,58015,58080,58145,58210,58275,58340,58405,58470,58535,58600,58665,58730,58795,58860,58925,58990,59055,59120,59185,59250,59315,59380,59445,59510,59575,59640,59705,59770,59835,59900,59965,60030,60095,60160,60225,60290,60355,60420,60485,60550,60615,60680,60745,60810,60875,60940,61005,};

int main()
{
	int aft;
	cin >> aft;
	
	if (aft <= AFT[0])
	{
		cout << aft;
	}
	else if (aft > AFT[800])
	{
		int i;
		i=(aft - AFT[800])/55;
		cout << S[800] + 100*i;
	}
	else
	{
	
		for (int i=0; i<=800; ++i)
			if (AFT[i] == aft)
			{
				cout << S[i];
				break;
			}
	}
	
	return 0;
}
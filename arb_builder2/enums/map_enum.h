#// ミニマップ用ページ番号	// 2011/11/29現在	最大約1900
enum{
	PAGE_NOMINIMAP = -1,			// ミニマップが無い。もしくはミニマップの開封処理を行わない

	PAGE_FIELD = 0,					// フィールド専用ページ番号（0番だけ特殊）

	//
	// 新規領域の追加は、必ず後ろに追加してください。
	// ページを挿入するとセーブデータのミニマップ開封状況が壊れます。
	// また、マップ開封率に影響しないマップ（イベントマップや過去編マップ）は PAGE_NOMESUARE_MAP の後に追加して下さい。
	//
	PAGE_F001,					// フィールド南部：南西部_13
	PAGE_F001_02,					//
	PAGE_F001_03,					//
	PAGE_F001_04,					//
	PAGE_F001_05,					//
	PAGE_F001_06,					//
	PAGE_F001_07,					//
	PAGE_F001_08,					//
	PAGE_F001_09,					//
	PAGE_F001_10,					//
	PAGE_F001_11,					//
	PAGE_F001_12,					//
	PAGE_F001_13,					//
	
	PAGE_F002,					// フィールド南部：南中央部_12*2
	PAGE_F002_02,					//
	PAGE_F002_03,					//
	PAGE_F002_04,					//
	PAGE_F002_05,					//
	PAGE_F002_06,					//
	PAGE_F002_07,					//
	PAGE_F002_08,					//
	PAGE_F002_09,					//
	PAGE_F002_10,					//
	PAGE_F002_11,					//
	PAGE_F002_12,					//
	PAGE_F002_13,					//
	PAGE_F002_14,					//
	PAGE_F002_15,					//
	PAGE_F002_16,					//
	PAGE_F002_17,					//
	PAGE_F002_18,					//
	PAGE_F002_19,					//
	PAGE_F002_20,					//
	PAGE_F002_21,					//
	PAGE_F002_22,					//
	PAGE_F002_23,					//
	PAGE_F002_24,					//
	
	PAGE_F003,					// フィールド南部：南東部_13
	PAGE_F003_02,					//
	PAGE_F003_03,					//
	PAGE_F003_04,					//
	PAGE_F003_05,					//
	PAGE_F003_06,					//
	PAGE_F003_07,					//
	PAGE_F003_08,					//
	PAGE_F003_09,					//
	PAGE_F003_10,					//
	PAGE_F003_11,					//
	PAGE_F003_12,					//
	PAGE_F003_13,					//

	PAGE_F004,					// フィールド南部：東部・南端_4
	PAGE_F004_02,					//
	PAGE_F004_03,					//
	PAGE_F004_04,					//

	PAGE_F005,					// フィールド南部：西部・南端_5
	PAGE_F005_02,					//
	PAGE_F005_03,					//
	PAGE_F005_04,					//
	PAGE_F005_05,					//
	
	PAGE_F006,					// フィールド南部：西部・高原
	PAGE_F006_02,					//
	PAGE_F006_03,					//
	PAGE_F006_04,					//
	PAGE_F006_05,					//
	PAGE_F006_06,					//

	PAGE_F007,					// フィールド南部：南中央部・高原
	PAGE_F007_02,					//
	PAGE_F007_03,					//

	PAGE_F008,					// フィールド南部：西の浜辺_5*2
	PAGE_F008_02,					//
	PAGE_F008_03,					//
	PAGE_F008_04,					//
	PAGE_F008_05,					//
	PAGE_F008_06,					//
	PAGE_F008_07,					//
	PAGE_F008_08,					//
	PAGE_F008_09,					//
	PAGE_F008_10,					//

	PAGE_F009,						// フィールド南部：北東の浜辺
	PAGE_F009_02,					//

	PAGE_F010,						// フィールド南部：東の浜辺_3
	PAGE_F010_02,					//
	PAGE_F010_03,					//

	PAGE_F011,						/// フィールド：濃霧の森
	PAGE_F011_02,					/// 
	PAGE_F011_03,					/// 
	PAGE_F011_04,					/// 
	PAGE_F011_05,					/// 
	PAGE_F011_06,					/// 
	PAGE_F011_07,					/// 
	PAGE_F011_08,					/// 

	PAGE_F012,						/// フィールド：霞の海岸_6
	PAGE_F012_02,					/// 
	PAGE_F012_03,					/// 
	PAGE_F012_04,					/// 
	PAGE_F012_05,					/// 
	PAGE_F012_06,					/// 

	PAGE_F013,						/// フィールド：離れ島_2
	PAGE_F013_02,					/// 

	PAGE_F014,						/// フィールド：ジャンダルム麓
	PAGE_F014_02,					/// 
	PAGE_F014_03,					/// 
	PAGE_F014_04,					/// 
	PAGE_F014_05,					/// 
	PAGE_F014_06,					/// 
	PAGE_F014_07,					/// 
	PAGE_F014_08,					/// 
	PAGE_F014_09,					/// 

	PAGE_F031,					//風雲山道 11*4
	PAGE_F031_02,
	PAGE_F031_03,
	PAGE_F031_04,
	PAGE_F031_05,
	PAGE_F031_06,
	PAGE_F031_07,
	PAGE_F031_08,
	PAGE_F031_09,
	PAGE_F031_10,
	PAGE_F031_11,
	PAGE_F031_12,
	PAGE_F031_13,
	PAGE_F031_14,
	PAGE_F031_15,
	PAGE_F031_16,
	PAGE_F031_17,
	PAGE_F031_18,
	PAGE_F031_19,
	PAGE_F031_20,
	PAGE_F031_21,
	PAGE_F031_22,
	PAGE_F031_23,
	PAGE_F031_24,
	PAGE_F031_25,
	PAGE_F031_26,
	PAGE_F031_27,
	PAGE_F031_28,
	PAGE_F031_29,
	PAGE_F031_30,
	PAGE_F031_31,
	PAGE_F031_32,
	PAGE_F031_33,
	PAGE_F031_34,
	PAGE_F031_35,
	PAGE_F031_36,
	PAGE_F031_37,
	PAGE_F031_38,
	PAGE_F031_39,
	PAGE_F031_40,
	PAGE_F031_41,
	PAGE_F031_42,
	PAGE_F031_43,
	PAGE_F031_44,

	PAGE_F032,					//王都
	PAGE_F032_02,
	PAGE_F032_03,
	PAGE_F032_04,
	PAGE_F032_05,
	PAGE_F032_06,
	PAGE_F032_07,
	PAGE_F032_08,
	PAGE_F032_09,

	PAGE_F033,					//原生林
	PAGE_F033_02,
	PAGE_F033_03,
	PAGE_F033_04,
	PAGE_F033_05,
	PAGE_F033_06,
	PAGE_F033_07,

	PAGE_F034,					//太古の大平原
	PAGE_F034_02,
	PAGE_F034_03,
	PAGE_F034_04,
	PAGE_F034_05,
	PAGE_F034_06,
	PAGE_F034_07,
	PAGE_F034_08,
	PAGE_F034_09,
	PAGE_F034_10,
	PAGE_F034_11,

	PAGE_F035,					//トワル街道
	PAGE_F035_02,
	PAGE_F035_03,
	PAGE_F035_04,
	PAGE_F035_05,
	PAGE_F035_06,
	PAGE_F035_07,

	PAGE_F036,					//天涯丘陵
	PAGE_F036_02,
	PAGE_F036_03,
	PAGE_F036_04,
	PAGE_F036_05,

	PAGE_F037,					//湿原地帯
	PAGE_F037_02,
	PAGE_F037_03,
	PAGE_F037_04,
	PAGE_F037_05,
	PAGE_F037_06,
	PAGE_F037_07,
	PAGE_F037_08,
	PAGE_F037_09,
	PAGE_F037_10,
	PAGE_F037_11,
	PAGE_F037_12,
	PAGE_F037_13,
	PAGE_F037_14,

	PAGE_F038,					//悠久の丘
	PAGE_F038_02,
	PAGE_F038_03,
	
	PAGE_F039,					//聖域への山道_7*2
	PAGE_F039_02,
	PAGE_F039_03,
	PAGE_F039_04,
	PAGE_F039_05,
	PAGE_F039_06,
	PAGE_F039_07,
	PAGE_F039_08,
	PAGE_F039_09,
	PAGE_F039_10,
	PAGE_F039_11,
	PAGE_F039_12,
	PAGE_F039_13,
	PAGE_F039_14,

	PAGE_MP040x,					//サブダンジョン：幽霊船_2x10
	PAGE_MP040x_02,					//
	PAGE_MP040x_03,					//
	PAGE_MP040x_04,					//
	PAGE_MP040x_05,					//
	PAGE_MP040x_06,					//
	PAGE_MP040x_07,					//
	PAGE_MP040x_08,					// 
	PAGE_MP040x_09,					// 
	PAGE_MP040x_10,					// 
	PAGE_MP040x_11,					// 
	PAGE_MP040x_12,					// 
	PAGE_MP040x_13,					// 
	PAGE_MP040x_14,					// 
	PAGE_MP040x_15,					// 
	PAGE_MP040x_16,					// 
	PAGE_MP040x_17,					// 
	PAGE_MP040x_18,					// 
	PAGE_MP040x_19,					// 
	PAGE_MP040x_20,					// 

	PAGE_MP120x,					//拠点
	PAGE_MP120x_02,					//

	PAGE_MP1301,					// ダンジョン：珊瑚の森_8x2
	PAGE_MP1301_02,				// 上層2
	PAGE_MP1301_03,				// 上層3
	PAGE_MP1301_04,				// 上層4
	PAGE_MP1301_05,				// 上層5
	PAGE_MP1301_06,				// 上層6
	PAGE_MP1301_07,				// 上層7
	PAGE_MP1301_08,				// 下層1
	PAGE_MP1301_09,				// 下層2
	PAGE_MP1301_10,				// 下層3
	PAGE_MP1301_11,				// 下層4
	PAGE_MP1301_12,				// 下層5
	PAGE_MP1301_13,				// 下層6
	PAGE_MP1301_14,				// 下層7
	PAGE_MP1301_15,				// 下層7
	PAGE_MP1301_16,				// 下層7
	
	PAGE_MP230x,					// ダンジョン：密林_10
	PAGE_MP230x_02,					//
	PAGE_MP230x_03,					//
	PAGE_MP230x_04,					//
	PAGE_MP230x_05,					//
	PAGE_MP230x_06,					//
	PAGE_MP230x_07,					//
	PAGE_MP230x_08,					//

	PAGE_MP4301,					// ダンジョン：浸食谷_12
	PAGE_MP4301_02,					//
	PAGE_MP4301_03,					//
	PAGE_MP4301_04,					//
	PAGE_MP4301_05,					//
	PAGE_MP4301_06,					//
	PAGE_MP4301_07,					//
	PAGE_MP4301_08,					//
	PAGE_MP4301_09,					//
	PAGE_MP4301_10,					//
	PAGE_MP4301_11,					//
	PAGE_MP4301_12,					//

	PAGE_MP433x,					// ダンジョン：ジャンダルム_11x5 // レイヤー1
	PAGE_MP433x_02,					//
	PAGE_MP433x_03,					//
	PAGE_MP433x_04,					//
	PAGE_MP433x_05,					//
	PAGE_MP433x_06,					//
	PAGE_MP433x_07,					//
	PAGE_MP433x_08,					//
	PAGE_MP433x_09,					//
	PAGE_MP433x_10,					//
	PAGE_MP433x_11,					//
	PAGE_MP433x_12,					//
	PAGE_MP433x_13,					//
	PAGE_MP433x_14,					//
	PAGE_MP433x_15,					//
	PAGE_MP433x_16,					//
	PAGE_MP433x_17,					//
	PAGE_MP433x_18,					//
	PAGE_MP433x_19,					//
	PAGE_MP433x_20,					//
	PAGE_MP433x_21,					//
	PAGE_MP433x_22,					//
	PAGE_MP433x_23,					//
	PAGE_MP433x_24,					//
	PAGE_MP433x_25,					//
	PAGE_MP433x_26,					//
	PAGE_MP433x_27,					//
	PAGE_MP433x_28,					//
	PAGE_MP433x_29,					//
	PAGE_MP433x_30,					//
	PAGE_MP433x_31,					//
	PAGE_MP433x_32,					//
	PAGE_MP433x_33,					//
	PAGE_MP433x_34,					//
	PAGE_MP433x_35,					//
	PAGE_MP433x_36,					//
	PAGE_MP433x_37,					//
	PAGE_MP433x_38,					//
	PAGE_MP433x_39,					//
	PAGE_MP433x_40,					//
	PAGE_MP433x_41,					//
	PAGE_MP433x_42,					//
	PAGE_MP433x_43,					//
	PAGE_MP433x_44,					//
	PAGE_MP433x_45,					//
	PAGE_MP433x_46,					//
	PAGE_MP433x_47,					//
	PAGE_MP433x_48,					//
	PAGE_MP433x_49,					//
	PAGE_MP433x_50,					//
	PAGE_MP433x_51,					//
	PAGE_MP433x_52,					//
	PAGE_MP433x_53,					//
	PAGE_MP433x_54,					//
	PAGE_MP433x_55,					//

	PAGE_MP540x,					// ダンジョン：古代種の住処

	PAGE_MP6301,					// ラスダン・共通部分_6(x4)
	PAGE_MP6301_02,					//
	PAGE_MP6301_03,					//
	PAGE_MP6301_04,					//
	PAGE_MP6301_05,					//
	PAGE_MP6301_06,					//
	PAGE_MP6301_07,					//
	PAGE_MP6301_08,					//
	PAGE_MP6301_09,					//
	PAGE_MP6301_10,					//
	PAGE_MP6301_11,					//
	PAGE_MP6301_12,					//
	PAGE_MP6301_13,					//
	PAGE_MP6301_14,					//
	PAGE_MP6301_15,					//
	PAGE_MP6301_16,					//
	PAGE_MP6301_17,					//
	PAGE_MP6301_18,					//
	PAGE_MP6301_19,					//
	PAGE_MP6301_20,					//
	PAGE_MP6301_21,					//
	PAGE_MP6301_22,					//
	PAGE_MP6301_23,					//
	PAGE_MP6301_24,					//

	PAGE_MP6305,					// ラスダン・海エリア_2
	PAGE_MP6305_02,					//

	PAGE_MP6306,					// ラスダン・氷エリア_3
	PAGE_MP6306_02,					//
	PAGE_MP6306_03,					//

	PAGE_MP6307,					// ラスダン・蟲エリア_2
	PAGE_MP6307_02,					//

	PAGE_MP6308,					// ラスダン・天エリア_3
	PAGE_MP6308_02,					//
	PAGE_MP6308_03,					//

	PAGE_MP6310,					// ラスダン・ラスボスエリア_5x4
	PAGE_MP6310_02,					//
	PAGE_MP6310_03,					//
	PAGE_MP6310_04,					//
	
	PAGE_MP632x,					// ダンジョン：バハの斜塔_2x14
	PAGE_MP632x_02,					//
	PAGE_MP632x_03,					//
	PAGE_MP632x_04,					//
	PAGE_MP632x_05,					//
	PAGE_MP632x_06,					//
	PAGE_MP632x_07,					//
	PAGE_MP632x_08,					//
	PAGE_MP632x_09,					//
	PAGE_MP632x_10,					//
	PAGE_MP632x_11,					//
	PAGE_MP632x_12,					//
	PAGE_MP632x_13,					//
	PAGE_MP632x_14,					//
	PAGE_MP632x_15,					//
	PAGE_MP632x_16,					//
	PAGE_MP632x_17,					//
	PAGE_MP632x_18,					//
	PAGE_MP632x_19,					//
	PAGE_MP632x_20,					//
	PAGE_MP632x_21,					//
	PAGE_MP632x_22,					//
	PAGE_MP632x_23,					//
	PAGE_MP632x_24,					//
	PAGE_MP632x_25,					//
	PAGE_MP632x_26,					//
	PAGE_MP632x_27,					//
	PAGE_MP632x_28,					//

	PAGE_MP634x,					// ダンジョン：王家の谷_24x4
	PAGE_MP634x_02,					//
	PAGE_MP634x_03,					//
	PAGE_MP634x_04,					//
	PAGE_MP634x_05,					//
	PAGE_MP634x_06,					//
	PAGE_MP634x_07,					//
	PAGE_MP634x_08,					//
	PAGE_MP634x_09,					//
	PAGE_MP634x_10,					//
	PAGE_MP634x_11,					//
	PAGE_MP634x_12,					//
	PAGE_MP634x_13,					//
	PAGE_MP634x_14,					//
	PAGE_MP634x_15,					//
	PAGE_MP634x_16,					//
	PAGE_MP634x_17,					//
	PAGE_MP634x_18,					//
	PAGE_MP634x_19,					//
	PAGE_MP634x_20,					//
	PAGE_MP634x_21,					//
	PAGE_MP634x_22,					//
	PAGE_MP634x_23,					//
	PAGE_MP634x_24,					//
	PAGE_MP634x_25,					//
	PAGE_MP634x_26,					//
	PAGE_MP634x_27,					//
	PAGE_MP634x_28,					//
	PAGE_MP634x_29,					//
	PAGE_MP634x_30,					//
	PAGE_MP634x_31,					//
	PAGE_MP634x_32,					//
	PAGE_MP634x_33,					//
	PAGE_MP634x_34,					//
	PAGE_MP634x_35,					//
	PAGE_MP634x_36,					//
	PAGE_MP634x_37,					//
	PAGE_MP634x_38,					//
	PAGE_MP634x_39,					//
	PAGE_MP634x_40,					//
	PAGE_MP634x_41,					//
	PAGE_MP634x_42,					//
	PAGE_MP634x_43,					//
	PAGE_MP634x_44,					//
	PAGE_MP634x_45,					//
	PAGE_MP634x_46,					//
	PAGE_MP634x_47,					//
	PAGE_MP634x_48,					//
	PAGE_MP634x_49,					//
	PAGE_MP634x_50,					//
	PAGE_MP634x_51,					//
	PAGE_MP634x_52,					//
	PAGE_MP634x_53,					//
	PAGE_MP634x_54,					//
	PAGE_MP634x_55,					//
	PAGE_MP634x_56,					//
	PAGE_MP634x_57,					//
	PAGE_MP634x_58,					//
	PAGE_MP634x_59,					//
	PAGE_MP634x_60,					//
	PAGE_MP634x_61,					//
	PAGE_MP634x_62,					//
	PAGE_MP634x_63,					//
	PAGE_MP634x_64,					//
	PAGE_MP634x_65,					//
	PAGE_MP634x_66,					//
	PAGE_MP634x_67,					//
	PAGE_MP634x_68,					//
	PAGE_MP634x_69,					//
	PAGE_MP634x_70,					//
	PAGE_MP634x_71,					//
	PAGE_MP634x_72,					//
	PAGE_MP634x_73,					//
	PAGE_MP634x_74,					//
	PAGE_MP634x_75,					//
	PAGE_MP634x_76,					//
	PAGE_MP634x_77,					//
	PAGE_MP634x_78,					//
	PAGE_MP634x_79,					//
	PAGE_MP634x_80,					//
	PAGE_MP634x_81,					//
	PAGE_MP634x_82,					//
	PAGE_MP634x_83,					//
	PAGE_MP634x_84,					//
	PAGE_MP634x_85,					//
	PAGE_MP634x_86,					//
	PAGE_MP634x_87,					//
	PAGE_MP634x_88,					//
	PAGE_MP634x_89,					//
	PAGE_MP634x_90,					//
	PAGE_MP634x_91,					//
	PAGE_MP634x_92,					//
	PAGE_MP634x_93,					//
	PAGE_MP634x_94,					//
	PAGE_MP634x_95,					//
	PAGE_MP634x_96,					//

	PAGE_MP636x,					//ダンジョン：始世代の大穴_14x3
	PAGE_MP636x_02,					//
	PAGE_MP636x_03,					//
	PAGE_MP636x_04,					//
	PAGE_MP636x_05,					//
	PAGE_MP636x_06,					//
	PAGE_MP636x_07,					//
	PAGE_MP636x_08,					//
	PAGE_MP636x_09,					//
	PAGE_MP636x_10,					//
	PAGE_MP636x_11,					//
	PAGE_MP636x_12,					//
	PAGE_MP636x_13,					//
	PAGE_MP636x_14,					//
	PAGE_MP636x_15,					//
	PAGE_MP636x_16,					//
	PAGE_MP636x_17,					//
	PAGE_MP636x_18,					//
	PAGE_MP636x_19,					//
	PAGE_MP636x_20,					//
	PAGE_MP636x_21,					//
	PAGE_MP636x_22,					//
	PAGE_MP636x_23,					//
	PAGE_MP636x_24,					//
	PAGE_MP636x_25,					//
	PAGE_MP636x_26,					//
	PAGE_MP636x_27,					//
	PAGE_MP636x_28,					//
	PAGE_MP636x_29,					//
	PAGE_MP636x_30,					//
	PAGE_MP636x_31,					//
	PAGE_MP636x_32,					//
	PAGE_MP636x_33,					//
	PAGE_MP636x_34,					//
	PAGE_MP636x_35,					//
	PAGE_MP636x_36,					//
	PAGE_MP636x_37,					//
	PAGE_MP636x_38,					//
	PAGE_MP636x_39,					//
	PAGE_MP636x_40,					//
	PAGE_MP636x_41,					//
	PAGE_MP636x_42,					//
	
	PAGE_MP6401,					// 大樹寺院内部現在_2*2
	PAGE_MP6401_02,				// 
	PAGE_MP6401_03,				// 
	PAGE_MP6401_04,				// 
		
	PAGE_MP6409,					// 大樹寺院入口/中庭

	PAGE_MP641x,					//ダンジョン：埋没した塔
	PAGE_MP641x_02,					//
	PAGE_MP641x_03,					//
	PAGE_MP641x_04,					//
	PAGE_MP641x_05,					//
	
	PAGE_MP642x,					//ダンジョン：大僧院_2x3
	PAGE_MP642x_02,					//
	PAGE_MP642x_03,					//
	PAGE_MP642x_04,					//
	PAGE_MP642x_05,					//
	PAGE_MP642x_06,					//

	PAGE_MP730x,					//チュートリアルダンジョン_3
	PAGE_MP730x_02,					//
	PAGE_MP730x_03,					//

	PAGE_MP740x,					//ダンジョン：古代洞窟
	PAGE_MP740x_02,					//

	PAGE_MP741x,					//ダンジョン：海岸洞窟
	PAGE_MP741x_02,					//
	PAGE_MP741x_03,					//
	PAGE_MP741x_04,					//

	PAGE_MP745x,					// ダンジョン：水源地

	PAGE_MP746x,					// ダンジョン：地下水脈_2*2
	PAGE_MP746x_02,					//
	PAGE_MP746x_03,					//
	PAGE_MP746x_04,					//

	PAGE_MP747x,					//ダンジョン：鍾乳洞
	PAGE_MP747x_02,					//

	PAGE_MP748x,					//ダンジョン：水没墓地
	PAGE_MP748x_02,					//

	PAGE_MP749x,					//ダンジョン：大石柱の風穴
	PAGE_MP749x_02,					//ダンジョン：大石柱の風穴

	// ここから下はマップ開封率にカウントしないマップ
	PAGE_NOMESUARE_MAP,

	PAGE_MP1301t2,					// ダンジョン：珊瑚の森_9x2
	PAGE_MP1301t2_02,				// 夜版_上層2
	PAGE_MP1301t2_03,				// 夜版_上層3
	PAGE_MP1301t2_04,				// 夜版_上層4
	PAGE_MP1301t2_05,				// 夜版_上層5
	PAGE_MP1301t2_06,				// 夜版_上層6
	PAGE_MP1301t2_07,				// 夜版_上層7
	PAGE_MP1301t2_08,				// 夜版_下層1
	PAGE_MP1301t2_09,				// 夜版_下層2
	PAGE_MP1301t2_10,				// 夜版_下層3
	PAGE_MP1301t2_11,				// 夜版_下層4
	PAGE_MP1301t2_12,				// 夜版_下層5
	PAGE_MP1301t2_13,				// 夜版_下層6
	PAGE_MP1301t2_14,				// 夜版_下層7
	PAGE_MP1301t2_15,				// 夜版_下層7
	PAGE_MP1301t2_16,				// 夜版_下層7
	PAGE_MP1301t2_17,				// 夜版_下層7
	PAGE_MP1301t2_18,				// 夜版_下層7
	PAGE_MP1301t2_19,				// 夜版_下層7
	PAGE_MP1301t2_20,				// 夜版_下層7

	PAGE_MP433xt2,					// ダンジョン：ジャンダルム_夜版　13x5
	PAGE_MP433xt2_02,					//
	PAGE_MP433xt2_03,					//
	PAGE_MP433xt2_04,					//
	PAGE_MP433xt2_05,					//
	PAGE_MP433xt2_06,					//
	PAGE_MP433xt2_07,					//
	PAGE_MP433xt2_08,					//
	PAGE_MP433xt2_09,					//
	PAGE_MP433xt2_10,					//
	PAGE_MP433xt2_11,					//
	PAGE_MP433xt2_12,					//
	PAGE_MP433xt2_13,					//
	PAGE_MP433xt2_14,					//
	PAGE_MP433xt2_15,					//
	PAGE_MP433xt2_16,					//
	PAGE_MP433xt2_17,					//
	PAGE_MP433xt2_18,					//
	PAGE_MP433xt2_19,					//
	PAGE_MP433xt2_20,					//
	PAGE_MP433xt2_21,					//
	PAGE_MP433xt2_22,					//
	PAGE_MP433xt2_23,					//
	PAGE_MP433xt2_24,					//
	PAGE_MP433xt2_25,					//
	PAGE_MP433xt2_26,					//
	PAGE_MP433xt2_27,					//
	PAGE_MP433xt2_28,					//
	PAGE_MP433xt2_29,					//
	PAGE_MP433xt2_30,					//
	PAGE_MP433xt2_31,					//
	PAGE_MP433xt2_32,					//
	PAGE_MP433xt2_33,					//
	PAGE_MP433xt2_34,					//
	PAGE_MP433xt2_35,					//
	PAGE_MP433xt2_36,					//
	PAGE_MP433xt2_37,					//
	PAGE_MP433xt2_38,					//
	PAGE_MP433xt2_39,					//
	PAGE_MP433xt2_40,					//
	PAGE_MP433xt2_41,					//
	PAGE_MP433xt2_42,					//
	PAGE_MP433xt2_43,					//
	PAGE_MP433xt2_44,					//
	PAGE_MP433xt2_45,					//
	PAGE_MP433xt2_46,					//
	PAGE_MP433xt2_47,					//
	PAGE_MP433xt2_48,					//
	PAGE_MP433xt2_49,					//
	PAGE_MP433xt2_50,					//
	PAGE_MP433xt2_51,					//
	PAGE_MP433xt2_52,					//
	PAGE_MP433xt2_53,					//
	PAGE_MP433xt2_54,					//
	PAGE_MP433xt2_55,					//
	PAGE_MP433xt2_56,					//
	PAGE_MP433xt2_57,					//
	PAGE_MP433xt2_58,					//
	PAGE_MP433xt2_59,					//
	PAGE_MP433xt2_60,					//
	PAGE_MP433xt2_61,					//
	PAGE_MP433xt2_62,					//
	PAGE_MP433xt2_63,					//
	PAGE_MP433xt2_64,					//
	PAGE_MP433xt2_65,					//
	PAGE_MP433xt2_66,					//
	PAGE_MP433xt2_67,					//
	PAGE_MP433xt2_68,					//
	PAGE_MP433xt2_69,					//
	PAGE_MP433xt2_70,					//
	PAGE_MP433xt2_71,					//
	PAGE_MP433xt2_72,					//
	PAGE_MP433xt2_73,					//
	PAGE_MP433xt2_74,					//
	PAGE_MP433xt2_75,					//
	PAGE_MP433xt2_76,					//
	PAGE_MP433xt2_77,					//
	PAGE_MP433xt2_78,					//
	PAGE_MP433xt2_79,					//
	PAGE_MP433xt2_80,					//
		
	PAGE_F034t2,					//太古の大平原_夜版
	PAGE_F034t2_02,
	PAGE_F034t2_03,
	PAGE_F034t2_04,
	PAGE_F034t2_05,
	PAGE_F034t2_06,
	PAGE_F034t2_07,
	PAGE_F034t2_08,
	PAGE_F034t2_09,
	PAGE_F034t2_10,
	PAGE_F034t2_11,

	PAGE_MP6511M,					//ダンジョン：地下聖堂
	PAGE_MP6511M_02,				//ダンジョン：地下聖堂
	PAGE_MP6511M_03,				//ダンジョン：地下聖堂
	PAGE_MP6511M_04,				//ダンジョン：地下聖堂
	PAGE_MP6511M_05,				//ダンジョン：地下聖堂
	PAGE_MP6511M_06,				//ダンジョン：地下聖堂
	PAGE_MP6511M_07,				//ダンジョン：地下聖堂
	PAGE_MP6511M_08,				//ダンジョン：地下聖堂
	PAGE_MP6511M_09,				//ダンジョン：地下聖堂
	PAGE_MP6511M_10,				//ダンジョン：地下聖堂
	PAGE_MP6521M,					//ダンジョン：地下聖堂
	PAGE_MP6521M_02,				//ダンジョン：地下聖堂
	PAGE_MP6521M_03,				//ダンジョン：地下聖堂
	PAGE_MP6521M_04,				//ダンジョン：地下聖堂
	PAGE_MP6521M_05,				//ダンジョン：地下聖堂
	PAGE_MP6521M_06,				//ダンジョン：地下聖堂
	PAGE_MP6521M_07,				//ダンジョン：地下聖堂
	PAGE_MP6521M_08,				//ダンジョン：地下聖堂
	PAGE_MP6521M_09,				//ダンジョン：地下聖堂
	PAGE_MP6521M_10,				//ダンジョン：地下聖堂
	PAGE_MP6531M,					//ダンジョン：地下聖堂
	PAGE_MP6531M_02,				//ダンジョン：地下聖堂
	PAGE_MP6531M_03,				//ダンジョン：地下聖堂
	PAGE_MP6531M_04,				//ダンジョン：地下聖堂
	PAGE_MP6531M_05,				//ダンジョン：地下聖堂
	PAGE_MP6531M_06,				//ダンジョン：地下聖堂
	PAGE_MP6531M_07,				//ダンジョン：地下聖堂
	PAGE_MP6531M_08,				//ダンジョン：地下聖堂
	PAGE_MP6531M_09,				//ダンジョン：地下聖堂
	PAGE_MP6531M_10,				//ダンジョン：地下聖堂
	PAGE_MP6531M_11,				//ダンジョン：地下聖堂
	PAGE_MP6531M_12,				//ダンジョン：地下聖堂
	PAGE_MP6531M_13,				//ダンジョン：地下聖堂
	PAGE_MP6531M_14,				//ダンジョン：地下聖堂
	PAGE_MP6531M_15,				//ダンジョン：地下聖堂
	PAGE_MP6541M,					//ダンジョン：地下聖堂
	PAGE_MP6541M_02,				//ダンジョン：地下聖堂
	PAGE_MP6541M_03,				//ダンジョン：地下聖堂
	PAGE_MP6541M_04,				//ダンジョン：地下聖堂
	PAGE_MP6541M_05,				//ダンジョン：地下聖堂
	PAGE_MP6541M_06,				//ダンジョン：地下聖堂
	PAGE_MP6541M_07,				//ダンジョン：地下聖堂
	PAGE_MP6541M_08,				//ダンジョン：地下聖堂
	PAGE_MP6541M_09,				//ダンジョン：地下聖堂
	PAGE_MP6541M_10,				//ダンジョン：地下聖堂
	PAGE_MP6551M,					//ダンジョン：地下聖堂
	PAGE_MP6551M_02,				//ダンジョン：地下聖堂
	PAGE_MP6551M_03,				//ダンジョン：地下聖堂
	PAGE_MP6551M_04,				//ダンジョン：地下聖堂
	PAGE_MP6551M_05,				//ダンジョン：地下聖堂
	PAGE_MP6551M_06,				//ダンジョン：地下聖堂
	PAGE_MP6551M_07,				//ダンジョン：地下聖堂
	PAGE_MP6551M_08,				//ダンジョン：地下聖堂
	PAGE_MP6551M_09,				//ダンジョン：地下聖堂
	PAGE_MP6551M_10,				//ダンジョン：地下聖堂
	PAGE_MP6561M,					//ダンジョン：地下聖堂
	PAGE_MP6561M_02,				//ダンジョン：地下聖堂
	PAGE_MP6561M_03,				//ダンジョン：地下聖堂
	PAGE_MP6561M_04,				//ダンジョン：地下聖堂
	PAGE_MP6561M_05,				//ダンジョン：地下聖堂
	PAGE_MP6561M_06,				//ダンジョン：地下聖堂
	PAGE_MP6561M_07,				//ダンジョン：地下聖堂
	PAGE_MP6561M_08,				//ダンジョン：地下聖堂
	PAGE_MP6561M_09,				//ダンジョン：地下聖堂
	PAGE_MP6561M_10,				//ダンジョン：地下聖堂

	PAGE_MP0011,					// イベント：ロンバルディア号・甲板
	PAGE_MP0011b,					// イベント：ロンバルディア号・ボスマップ
	PAGE_MP0012,					// イベント：ロンバルディア号・客室
	PAGE_MP0013,					// イベント：ロンバルディア号・船室
	PAGE_MP0014,					// イベント：ロンバルディア号・船倉
	PAGE_MP0015,					// イベント：ロンバルディア号・操舵室
	PAGE_MP0016,					// イベント：ロンバルディア号・船長室
	PAGE_MP0017,					// イベント：ロンバルディア号・厨房
	PAGE_MP0018,					// イベント：ロンバルディア号・大ホール

	PAGE_MP4202,					// イベント：タナトスの小屋・内部

	PAGE_MF001,					// 過去編フィールド：ティティス参道
	PAGE_MF001_02,					//
	PAGE_MF001_03,					//
	PAGE_MF001_04,					//
	PAGE_MF001_05,					//
	PAGE_MF001_06,					//

	PAGE_MF002,					// 過去編フィールド：エタニア市街地
	PAGE_MF002_02,					//
	PAGE_MF002_03,					//
	PAGE_MF002_04,					//
	PAGE_MF002_05,					//
	PAGE_MF002_06,					//
	PAGE_MF002_07,					//
	PAGE_MF002_08,					//
	PAGE_MF002_09,					//
	PAGE_MF002_10,					//
	PAGE_MF002_11,					//
	PAGE_MF002_12,					//

	PAGE_MF003,					// 過去編フィールド：トワル街道
	PAGE_MF003_02,					//
	PAGE_MF003_03,					//
	PAGE_MF003_04,					//
	PAGE_MF003_05,					//
	PAGE_MF003_06,					//

	PAGE_MF004,					// 過去編フィールド：古ガンナ参道
	PAGE_MF004_02,					//
	PAGE_MF004_03,					//
	PAGE_MF004_04,					//
	PAGE_MF004_05,					//
	PAGE_MF004_06,					//

	PAGE_MF005,					// 過去編フィールド：ロディニア街道
	PAGE_MF005_02,					//
	PAGE_MF005_03,					//
	PAGE_MF005_04,					//
	PAGE_MF005_05,					//
	PAGE_MF005_06,					//

	PAGE_MF006,					// 過去編フィールド：王家私有道
	PAGE_MF006_02,					//
	PAGE_MF006_03,					//
	PAGE_MF006_04,					//
	PAGE_MF006_05,					//
	PAGE_MF006_06,					//

	PAGE_F039M,					//過去編_聖域への山道_2
	PAGE_F039M_02,
	PAGE_F039M_03,
	PAGE_F039M_04,
	
	PAGE_MP1212,					//迎撃戦_浜
	
	PAGE_MP1214,					//迎撃戦_丘
	PAGE_MP1214_02,					//

	PAGE_MP6108m,					//過去編_王家の谷
	PAGE_MP6350m,					//過去編_セレンの園

	PAGE_MP832x,					// ダンジョン：はじまりの深淵
	PAGE_MP832x_02,					// ダンジョン：はじまりの深淵
	PAGE_MP832x_03,					// ダンジョン：はじまりの深淵

	PAGE_MP3109M,					//ダーナ編・大峡谷
	PAGE_MP3109M_02,
	PAGE_MP3109M_03,

	PAGE_MP6401m,					// 大樹寺院内部過去_2*2
	PAGE_MP6401m_02,				// 
	PAGE_MP6401m_03,				// 
	PAGE_MP6401m_04,				// 
	
	PAGE_MP6409m,					// 大樹寺院入口/中庭
	PAGE_MP6409v1,					// 大樹寺院/濃霧イベント
	PAGE_MP6409v2,					// 大樹寺院跡/エピローグ

	PAGE_MP6214m,					// 王都室内：タナトス民家(過去）
	PAGE_MP6214m_02,				// 王都室内：タナトス民家(過去）
	PAGE_MP6214m_03,				// 王都室内：タナトス民家(過去）
	
	PAGE_MP6222m,					// 王宮内部(過去：エントランス/謁見の間）
	PAGE_MP6222m2,					// 王宮内部寒冷版(過去：エントランス/謁見の間）

	PAGE_MP65xx,					//ダンジョン：地下聖堂_現代編
	PAGE_MP65xx_02,					//
	PAGE_MP65xx_03,					//
	PAGE_MP65xx_04,					//
	PAGE_MP65xx_05,					//
	PAGE_MP65xx_06,					//
	PAGE_MP65xx_07,					//
	PAGE_MP65xx_08,					//
	PAGE_MP65xx_09,					//
	PAGE_MP65xx_10,					//
	PAGE_MP65xx_11,					//
	PAGE_MP65xx_12,					//
	PAGE_MP65xx_13,					//
	PAGE_MP65xx_14,					//
	PAGE_MP65xx_15,					//
	PAGE_MP65xx_16,					//
	PAGE_MP65xx_17,					//
	PAGE_MP65xx_18,					//
	PAGE_MP65xx_19,					//
	PAGE_MP65xx_20,					//
	PAGE_MP65xx_21,					//
	PAGE_MP65xx_22,					//
	PAGE_MP65xx_23,					//
	PAGE_MP65xx_24,					//
	PAGE_MP65xx_25,					//
	PAGE_MP65xx_26,					//
	PAGE_MP65xx_27,					//
	PAGE_MP65xx_28,					//
	PAGE_MP65xx_29,					//
	PAGE_MP65xx_30,					//
	PAGE_MP65xx_31,					//
	PAGE_MP65xx_32,					//
	PAGE_MP65xx_33,					//
	PAGE_MP65xx_34,					//
	PAGE_MP65xx_35,					//
	PAGE_MP65xx_36,					//
	PAGE_MP65xx_37,					//
	PAGE_MP65xx_38,					//
	PAGE_MP65xx_39,					//
	PAGE_MP65xx_40,					//
	PAGE_MP65xx_41,					//
	PAGE_MP65xx_42,					//
	PAGE_MP65xx_43,					//
	PAGE_MP65xx_44,					//
	PAGE_MP65xx_45,					//
	PAGE_MP65xx_46,					//
	PAGE_MP65xx_47,					//
	PAGE_MP65xx_48,					//
	PAGE_MP65xx_49,					//
	PAGE_MP65xx_50,					//
	PAGE_MP65xx_51,					//
	PAGE_MP65xx_52,					//
	PAGE_MP65xx_53,					//
	PAGE_MP65xx_54,					//
	PAGE_MP65xx_55,					//
	PAGE_MP65xx_56,					//
	PAGE_MP65xx_57,					//
	PAGE_MP65xx_58,					//
	PAGE_MP65xx_59,					//
	PAGE_MP65xx_60,					//
	PAGE_MP65xx_61,					//
	PAGE_MP65xx_62,					//
	PAGE_MP65xx_63,					//
	PAGE_MP65xx_64,					//
	PAGE_MP65xx_65,					//
	PAGE_MP65xx_66,					//
	PAGE_MP65xx_67,					//
	PAGE_MP65xx_68,					//
	PAGE_MP65xx_69,					//
	PAGE_MP65xx_70,					//
	PAGE_MP65xx_71,					//
	PAGE_MP65xx_72,					//
	PAGE_MP65xx_73,					//
	PAGE_MP65xx_74,					//
	PAGE_MP65xx_75,					//
	PAGE_MP65xx_76,					//
	PAGE_MP65xx_77,					//
	PAGE_MP65xx_78,					//
	PAGE_MP65xx_79,					//
	PAGE_MP65xx_80,					//
	
	// 制圧戦
		// ステージ３１：密林１
	PAGE_MP2301C,					// 制圧戦１：密林１
	PAGE_MP2301C_02,				// 制圧戦１：密林１
		// ステージ３２：密林２
	PAGE_MP2302C,					// 制圧戦２：密林１
	PAGE_MP2302C_02,				// 制圧戦２：密林１
		// ステージ３３：侵食谷１
	PAGE_MP4301C,					// 制圧戦３：浸食谷_1
	PAGE_MP4301C_02,				// 制圧戦３：浸食谷_1
		// ステージ３４：侵食谷２
	PAGE_MP4305C,					// 制圧戦４：侵食谷２
		// ステージ３５：王家の谷１
	PAGE_MP6108C,					// 制圧戦５：侵食谷３
		// ステージ３６：王家の谷２
	PAGE_MP6341C,					// 制圧戦６：王家の谷２
	PAGE_MP6341C_02,				// 制圧戦６：王家の谷２
		// ステージ３７：密林３
	PAGE_MP2306C,					// 制圧戦７：密林３
		// ステージ３８：侵食谷３
	PAGE_MP4308C,					// 制圧戦８：侵食谷３
		// ステージ３９：王家の谷３
	PAGE_MP6346C,					// 制圧戦９：王家の谷３
	
	
	PAGE_MAX,	// バッファチェック用

	PAGE_FXXXM = 1,			 		//仮　（過去編マップとりあえずビルド通す用）※マーカー設定を終えるまで削除しないで下さい
	//
	// 以下は全体地図向けの定義
	//
	MAP_SEAL_START = 0x00100000,	// 全体地図、開封済みビットフラグ始端

	// 西部
	MAP_SEAL_MP1110,				// mp1110 で開封される領域定義用
	MAP_SEAL_MP1102,				// mp1102 で開封される領域定義用
	MAP_SEAL_MP1101,				// mp1101 で開封される領域定義用
	MAP_SEAL_MP1131,				// mp1131 で開封される領域定義用
	MAP_SEAL_MP1111,				// mp1111 で開封される領域定義用
	MAP_SEAL_MP1103,				// mp1103 で開封される領域定義用
	MAP_SEAL_MP1104,				// mp1104 で開封される領域定義用
	MAP_SEAL_MP1112,				// mp1112 で開封される領域定義用
	MAP_SEAL_MP2101,				// mp2101 で開封される領域定義用
	MAP_SEAL_MP1105,				// mp1105 で開封される領域定義用
	MAP_SEAL_MP1106,				// mp1106 で開封される領域定義用

	// 漂流村
	MAP_SEAL_MP1201,				// mp1201 で開封される領域定義用
	MAP_SEAL_MP1202,				// mp1202 で開封される領域定義用

	// 水音の洞窟
	MAP_SEAL_MP7301,				// mp7301 で開封される領域定義用
	MAP_SEAL_MP7302,				// mp7302 で開封される領域定義用
	MAP_SEAL_MP7303,				// mp7303 で開封される領域定義用
	MAP_SEAL_MP7304,				// mp7304 で開封される領域定義用
	MAP_SEAL_MP7305,				// mp7305 で開封される領域定義用

	// 珊瑚の森
	MAP_SEAL_MP1301,				// mp1301 で開封される領域定義用
	MAP_SEAL_MP1302,				// mp1302 で開封される領域定義用
	MAP_SEAL_MP1303,				// mp1303 で開封される領域定義用
	MAP_SEAL_MP1304,				// mp1304 で開封される領域定義用
	MAP_SEAL_MP1305,				// mp1305 で開封される領域定義用
	MAP_SEAL_MP1306,				// mp1306 で開封される領域定義用
	MAP_SEAL_MP1307,				// mp1307 で開封される領域定義用
	MAP_SEAL_MP1308,				// mp1308 で開封される領域定義用
	MAP_SEAL_MP1309,				// mp1309 で開封される領域定義用

	// 巨木の密林
	MAP_SEAL_MP2301,				// mp2301 で開封される領域定義用
	MAP_SEAL_MP2302,				// mp2302 で開封される領域定義用
	MAP_SEAL_MP2303,				// mp2303 で開封される領域定義用
	MAP_SEAL_MP2304,				// mp2304 で開封される領域定義用
	MAP_SEAL_MP2305,				// mp2305 で開封される領域定義用
	MAP_SEAL_MP2306,				// mp2306 で開封される領域定義用
	MAP_SEAL_MP2307,				// mp2307 で開封される領域定義用
	MAP_SEAL_MP2308,				// mp2308 で開封される領域定義用

	// 浸食谷
	MAP_SEAL_MP4301,				// mp4301 で開封される領域定義用
	MAP_SEAL_MP4302,				// mp4302 で開封される領域定義用
	MAP_SEAL_MP4303,				// mp4303 で開封される領域定義用
	MAP_SEAL_MP4304,				// mp4304 で開封される領域定義用
	MAP_SEAL_MP4305,				// mp4305 で開封される領域定義用
	MAP_SEAL_MP4306,				// mp4306 で開封される領域定義用
	MAP_SEAL_MP4307,				// mp4307 で開封される領域定義用
	MAP_SEAL_MP4308,				// mp4308 で開封される領域定義用
	MAP_SEAL_MP4309,				// mp4309 で開封される領域定義用

	//ジャンダルム
	MAP_SEAL_MP4331,				// mp4331 で開封される領域定義用
	MAP_SEAL_MP4332,				// mp4332 で開封される領域定義用
	MAP_SEAL_MP4333,				// mp4333 で開封される領域定義用
	MAP_SEAL_MP4334,				// mp4334 で開封される領域定義用
	MAP_SEAL_MP4335,				// mp4335 で開封される領域定義用
	MAP_SEAL_MP4336,				// mp4336 で開封される領域定義用
	MAP_SEAL_MP4337,				// mp4337 で開封される領域定義用
	MAP_SEAL_MP4338,				// mp4338 で開封される領域定義用
	MAP_SEAL_MP4339,				// mp4339 で開封される領域定義用
	MAP_SEAL_MP4340,				// mp4340 で開封される領域定義用
	MAP_SEAL_MP4341,				// mp4341 で開封される領域定義用
	MAP_SEAL_MP4202,				// mp4202 で開封される領域定義用	// 小屋
	MAP_SEAL_MP4107,				// mp4107 で開封される領域定義用
	MAP_SEAL_MP4342,				// mp4342 で開封される領域定義用

	// 中央部
	MAP_SEAL_MP1120,				// mp1120 で開封される領域定義用
	MAP_SEAL_MP1121,				// mp1121 で開封される領域定義用
	MAP_SEAL_MP1107,				// mp1107 で開封される領域定義用
	MAP_SEAL_MP3103,				// mp3103 で開封される領域定義用
	MAP_SEAL_MP3104,				// mp3104 で開封される領域定義用
	MAP_SEAL_MP2102,				// mp2102 で開封される領域定義用

	// 東部
	MAP_SEAL_MP1108,				// mp1108 で開封される領域定義用
	MAP_SEAL_MP1109,				// mp1109 で開封される領域定義用
	MAP_SEAL_MP4102,				// mp4102 で開封される領域定義用
	MAP_SEAL_MP2103,				// mp2103 で開封される領域定義用

	// 東部
	MAP_SEAL_MP1116,				// mp1116 で開封される領域定義用

	// 西部・南端（珊瑚礁）
	MAP_SEAL_MP1113,				// mp1113 で開封される領域定義用
	MAP_SEAL_MP1132,				// mp1132 で開封される領域定義用
	MAP_SEAL_MP1133,				// mp1133 で開封される領域定義用
	MAP_SEAL_MP1134,				// mp1134 で開封される領域定義用

	// 西部高原
	MAP_SEAL_MP3101,				// mp3101 で開封される領域定義用
	MAP_SEAL_MP3102,				// mp3102 で開封される領域定義用

	// 中央高原
	MAP_SEAL_MP3105,				// mp3105 で開封される領域定義用
	MAP_SEAL_MP3109,				// mp3109 で開封される領域定義用
	MAP_SEAL_MP4101,				// mp4101 で開封される領域定義用

	// 大峡谷（植樹祭）
	MAP_SEAL_MP3109m,				// mp3109m で開封される領域定義用	以下ps4追加分
	MAP_SEAL_MP3110m,				// mp3110m で開封される領域定義用
	MAP_SEAL_MP3111m,				// mp3111m で開封される領域定義用

	// 遠鳴り浜
	MAP_SEAL_MP1117,				// mp1117 で開封される領域定義用
	MAP_SEAL_MP1135,				// mp1135 で開封される領域定義用

	// 奇岩浜
	MAP_SEAL_MP1118,				// mp1118 で開封される領域定義用

	// 日の出浜
	MAP_SEAL_MP1119,				// mp1119 で開封される領域定義用

	// 濃霧の森
	MAP_SEAL_MP2104,				// mp2104 で開封される領域定義用
	MAP_SEAL_MP2105,				// mp2105 で開封される領域定義用
	MAP_SEAL_MP2106,				// mp2106 で開封される領域定義用

	// 霞の海岸
	MAP_SEAL_MP1114,				// mp1114 で開封される領域定義用
	MAP_SEAL_MP1115,				// mp1115 で開封される領域定義用

	// 離れ島
	MAP_SEAL_MP1122,				// mp1122 で開封される領域定義用
	//MAP_SEAL_MP1123,				// mp1123 で開封される領域定義用	<-何故かMAP_SEAL_MP1122

	// 西麓高原
	MAP_SEAL_MP3106,				// mp3106 で開封される領域定義用
	MAP_SEAL_MP3107,				// mp3107 で開封される領域定義用
	MAP_SEAL_MP3108,				// mp3108 で開封される領域定義用

	// 風雲山道
	MAP_SEAL_MP4103,				// mp4103 で開封される領域定義用
	MAP_SEAL_MP4104,				// mp4104 で開封される領域定義用
	MAP_SEAL_MP4106,				// mp4106 で開封される領域定義用
	MAP_SEAL_MP4108,				// mp4108 で開封される領域定義用
	MAP_SEAL_MP7101,				// mp7101 で開封される領域定義用
	MAP_SEAL_MP7102,				// mp7102 で開封される領域定義用

	// 王都
	MAP_SEAL_MP6201,				// mp6201 で開封される領域定義用
	MAP_SEAL_MP6202,				// mp6202 で開封される領域定義用
	MAP_SEAL_MP6203,				// mp6203 で開封される領域定義用
	MAP_SEAL_MP6204,				// mp6204 で開封される領域定義用
	MAP_SEAL_MP6211,				// mp6211 で開封される領域定義用
	MAP_SEAL_MP6212,				// mp6212 で開封される領域定義用
	MAP_SEAL_MP6213,				// mp6213 で開封される領域定義用
	MAP_SEAL_MP6214,				// mp6214 で開封される領域定義用
	MAP_SEAL_MP6215,				// mp6215 で開封される領域定義用

	// 原生林
	MAP_SEAL_MP5101,				// mp5401 で開封される領域定義用
	MAP_SEAL_MP5102,				// mp5402 で開封される領域定義用
	MAP_SEAL_MP5103,				// mp5403 で開封される領域定義用

	// 太古の大草原
	MAP_SEAL_MP6101,				// mp6101 で開封される領域定義用
	MAP_SEAL_MP6102,				// mp6102 で開封される領域定義用
	MAP_SEAL_MP6111,				// mp6111 で開封される領域定義用
	MAP_SEAL_MP6112,				// mp6112 で開封される領域定義用
	MAP_SEAL_MP6116,				// mp6115 で開封される領域定義用

	// トワル街道
	MAP_SEAL_MP6103,				// mp6103 で開封される領域定義用
	MAP_SEAL_MP6104,				// mp6104 で開封される領域定義用
	MAP_SEAL_MP6110,				// mp6110 で開封される領域定義用
	MAP_SEAL_MP6115,				// mp6115 で開封される領域定義用

	// 天涯丘陵
	MAP_SEAL_MP4110,				// mp4110 で開封される領域定義用
	MAP_SEAL_MP5104,				// mp5404 で開封される領域定義用

	// 湿原地帯
	MAP_SEAL_MP6105,				// mp6105 で開封される領域定義用
	MAP_SEAL_MP6106,				// mp6106 で開封される領域定義用
	MAP_SEAL_MP6107,				// mp6107 で開封される領域定義用
	MAP_SEAL_MP6108,				// mp6108 で開封される領域定義用	// 野営地
	MAP_SEAL_MP6113,				// mp6113 で開封される領域定義用
	MAP_SEAL_MP6114,				// mp6114 で開封される領域定義用

	//悠久の丘
	MAP_SEAL_MP6109,				// mp6109 で開封される領域定義用

	// 西域への山道
	MAP_SEAL_MP4105,				// mp4105 で開封される領域定義用
	MAP_SEAL_MP4109,				// mp4109 で開封される領域定義用
	MAP_SEAL_MP4111,				// mp4111 で開封される領域定義用

	// 大樹の寺院（過去）
	MAP_SEAL_MP6401m,				// mp6401m で開封される領域定義用
	MAP_SEAL_MP6402m,				// mp6402m で開封される領域定義用
	MAP_SEAL_MP6408m,				// mp6408m で開封される領域定義用
	MAP_SEAL_MP6409m,				// mp6409m で開封される領域定義用
	MAP_SEAL_MP6410m,				// mp6410m で開封される領域定義用
	//MAP_SEAL_MP6409v2,			// mp6409v2 で開封される領域定義用	// エピローグ用 <- SEAL設定なし
	
	// 大樹の寺院
	MAP_SEAL_MP6401,				// mp6401 で開封される領域定義用
	MAP_SEAL_MP6402,				// mp6402 で開封される領域定義用
	MAP_SEAL_MP6408,				// mp6408 で開封される領域定義用
	MAP_SEAL_MP6409,				// mp6409 で開封される領域定義用
	MAP_SEAL_MP6410,				// mp6410 で開封される領域定義用
	//MAP_SEAL_MP6409b,				// mp6409b で開封される領域定義用	<- 何故かMAP_SEAL_MP6408

	// 王都室内過去
	MAP_SEAL_MP6211m,				// mp6211m で開封される領域定義用
	MAP_SEAL_MP6214m,				// mp6214m で開封される領域定義用
	MAP_SEAL_MP6222m,				// mp6222m で開封される領域定義用
	MAP_SEAL_MP6222m2,				// mp6222m2で開封される領域定義用

	// ロンバルディア号
	//MAP_SEAL_MP0011,				// mp0011 で開封される領域定義用	<- SEAL設定なし
	//MAP_SEAL_MP0012,				// mp0012 で開封される領域定義用	<- SEAL設定なし
	//MAP_SEAL_MP0013,				// mp0013 で開封される領域定義用	<- SEAL設定なし
	//MAP_SEAL_MP0014,				// mp0014 で開封される領域定義用	<- SEAL設定なし
	//MAP_SEAL_MP0015,				// mp0015 で開封される領域定義用	<- SEAL設定なし
	//MAP_SEAL_MP0016,				// mp0016 で開封される領域定義用	<- SEAL設定なし
	//MAP_SEAL_MP0017,				// mp0017 で開封される領域定義用	<- SEAL設定なし
	//MAP_SEAL_MP0018,				// mp0018 で開封される領域定義用	<- SEAL設定なし

	// 幽霊船
	MAP_SEAL_MP0401,				// mp0401 で開封される領域定義用
	MAP_SEAL_MP0402,				// mp0402 で開封される領域定義用
	MAP_SEAL_MP0403,				// mp0403 で開封される領域定義用
	MAP_SEAL_MP0404,				// mp0404 で開封される領域定義用
	MAP_SEAL_MP0405,				// mp0405 で開封される領域定義用
	MAP_SEAL_MP0406,				// mp0406 で開封される領域定義用
	MAP_SEAL_MP0407,				// mp0407 で開封される領域定義用
	MAP_SEAL_MP0408,				// mp0408 で開封される領域定義用

	// 王家の谷
	MAP_SEAL_MP6341,				// mp6341 で開封される領域定義用
	MAP_SEAL_MP6342,				// mp6342 で開封される領域定義用
	MAP_SEAL_MP6343,				// mp6343 で開封される領域定義用
	MAP_SEAL_MP6344,				// mp6344 で開封される領域定義用
	MAP_SEAL_MP6345,				// mp6345 で開封される領域定義用
	MAP_SEAL_MP6346,				// mp6346 で開封される領域定義用
	MAP_SEAL_MP6347,				// mp6347 で開封される領域定義用
	MAP_SEAL_MP6349,				// mp6349 で開封される領域定義用
	MAP_SEAL_MP6350,				// mp6350 で開封される領域定義用
	MAP_SEAL_MP6351,				// mp6351 で開封される領域定義用

	// ラスダン・共通部分
	MAP_SEAL_MP6301,				// mp6301 で開封される領域定義用
	MAP_SEAL_MP6302,				// mp6302 で開封される領域定義用
	MAP_SEAL_MP6303,				// mp6303 で開封される領域定義用
	MAP_SEAL_MP6304,				// mp6304 で開封される領域定義用
	MAP_SEAL_MP6305,				// mp6305 で開封される領域定義用
	MAP_SEAL_MP6306,				// mp6306 で開封される領域定義用
	MAP_SEAL_MP6307,				// mp6307 で開封される領域定義用
	MAP_SEAL_MP6308,				// mp6308 で開封される領域定義用
	MAP_SEAL_MP6310,				// mp6310 で開封される領域定義用

	// バハの斜塔
	MAP_SEAL_MP6321,				// mp6321 で開封される領域定義用
	MAP_SEAL_MP6322,				// mp6322 で開封される領域定義用
	MAP_SEAL_MP6323,				// mp6323 で開封される領域定義用
	MAP_SEAL_MP6324,				// mp6324 で開封される領域定義用
	MAP_SEAL_MP6325,				// mp6325 で開封される領域定義用
	MAP_SEAL_MP6326,				// mp6326 で開封される領域定義用
	MAP_SEAL_MP6327,				// mp6327 で開封される領域定義用
	MAP_SEAL_MP6328,				// mp6328 で開封される領域定義用
	MAP_SEAL_MP6329,				// mp6329 で開封される領域定義用
	MAP_SEAL_MP6330,				// mp6330 で開封される領域定義用

	// 始生代の大穴
	MAP_SEAL_MP6361,				// mp6361 で開封される領域定義用
	MAP_SEAL_MP6362,				// mp6362 で開封される領域定義用
	MAP_SEAL_MP6363,				// mp6363 で開封される領域定義用
	MAP_SEAL_MP6364,				// mp6364 で開封される領域定義用
	MAP_SEAL_MP6365,				// mp6365 で開封される領域定義用
	MAP_SEAL_MP6366,				// mp6366 で開封される領域定義用
	MAP_SEAL_MP6367,				// mp6367 で開封される領域定義用
	MAP_SEAL_MP6368,				// mp6368 で開封される領域定義用
	MAP_SEAL_MP6369,				// mp6369 で開封される領域定義用
	MAP_SEAL_MP6370,				// mp6370 で開封される領域定義用

	// 埋没した塔
	MAP_SEAL_MP6411,				// mp6411 で開封される領域定義用
	MAP_SEAL_MP6412,				// mp6412 で開封される領域定義用
	MAP_SEAL_MP6413,				// mp6413 で開封される領域定義用

	// 大僧院
	MAP_SEAL_MP6421,				// mp6421 で開封される領域定義用
	MAP_SEAL_MP6422,				// mp6422 で開封される領域定義用

	// 古代種の住処
	MAP_SEAL_MP5401,				// mp5401 で開封される領域定義用

	// 古代の洞窟      
	MAP_SEAL_MP7401,				// mp7401 で開封される領域定義用

	// 沖の洞窟
	MAP_SEAL_MP7411,				// mp7411 で開封される領域定義用

	// 水源地
	MAP_SEAL_MP7451,				// mp7451 で開封される領域定義用
	MAP_SEAL_MP7452,				// mp7452 で開封される領域定義用

	// 地下水脈
	MAP_SEAL_MP7461,				// mp7461 で開封される領域定義用
	MAP_SEAL_MP7462,				// mp7462 で開封される領域定義用

	// 鍾乳洞      
	MAP_SEAL_MP7471,				// mp7471 で開封される領域定義用
	MAP_SEAL_MP7472,				// mp7472 で開封される領域定義用

	// 水没墓地
	MAP_SEAL_MP7481,				// mp7481 で開封される領域定義用
	MAP_SEAL_MP7482,				// mp7482 で開封される領域定義用

	// 大石柱の風穴
	MAP_SEAL_MP7491,				// mp7491 で開封される領域定義用
	MAP_SEAL_MP7492,				// mp7492 で開封される領域定義用

	// 始まりの深遠
	MAP_SEAL_MP8321,				// mp8321 で開封される領域定義用
	MAP_SEAL_MP8322,				// mp8322 で開封される領域定義用
	MAP_SEAL_MP8323,				// mp8323 で開封される領域定義用

	// 脱出船
	//MAP_SEAL_MP0021,				// mp0021 で開封される領域定義用	<- SEAL設定なし

	// 過去編フィールド
	MAP_SEAL_MP4105m,				// mp4105m で開封される領域定義用
	MAP_SEAL_MP5103m,				// mp5103m で開封される領域定義用
	MAP_SEAL_MP5104m,				// mp5104m で開封される領域定義用
	MAP_SEAL_MP6101m,				// mp6101m で開封される領域定義用
	MAP_SEAL_MP6103m,				// mp6103m で開封される領域定義用
	MAP_SEAL_MP6104m,				// mp6104m で開封される領域定義用
	MAP_SEAL_MP6106m,				// mp6106m で開封される領域定義用
	MAP_SEAL_MP6107m,				// mp6107m で開封される領域定義用
	MAP_SEAL_MP6108m,				// mp6108m で開封される領域定義用
	MAP_SEAL_MP6110m,				// mp6110m で開封される領域定義用
	MAP_SEAL_MP6112m,				// mp6112m で開封される領域定義用
	MAP_SEAL_MP6113m,				// mp6113m で開封される領域定義用
	MAP_SEAL_MP6114m,				// mp6114m で開封される領域定義用
	MAP_SEAL_MP6201m,				// mp6201m で開封される領域定義用
	MAP_SEAL_MP6202m,				// mp6202m で開封される領域定義用
	MAP_SEAL_MP6203m,				// mp6203m で開封される領域定義用
	MAP_SEAL_MP6204m,				// mp6204m で開封される領域定義用

	// 過去編屋内
	MAP_SEAL_MP6350m,				// mp6350m で開封される領域定義用
	MAP_SEAL_MP6212m,				// mp6212m で開封される領域定義用
	MAP_SEAL_MP6213m,				// mp6213m で開封される領域定義用
	MAP_SEAL_MP6215m,				// mp6215m で開封される領域定義用
	//MAP_SEAL_MP6216m,				// mp6216m で開封される領域定義用	<- SEAL設定なし
	//MAP_SEAL_MP6231m,				// mp6231m で開封される領域定義用	<- SEAL設定なし

	// 手帳Aボイス用のでっち上げマップ名

	//追加ダンジョン
	MAP_SEAL_MP6511m,				// mp6511m で開封される領域定義用
	MAP_SEAL_MP6512m,				// mp6512m で開封される領域定義用
	MAP_SEAL_MP6513m,				// mp6513m で開封される領域定義用
	MAP_SEAL_MP6514m,				// mp6514m で開封される領域定義用
	MAP_SEAL_MP6515m,				// mp6515m で開封される領域定義用
	MAP_SEAL_MP6519m,				// mp6519m で開封される領域定義用
	MAP_SEAL_MP6521m,				// mp6521m で開封される領域定義用
	MAP_SEAL_MP6522m,				// mp6522m で開封される領域定義用
	MAP_SEAL_MP6523m,				// mp6523m で開封される領域定義用
	MAP_SEAL_MP6524m,				// mp6524m で開封される領域定義用
	MAP_SEAL_MP6529m,				// mp6529m で開封される領域定義用
	MAP_SEAL_MP6531m,				// mp6531m で開封される領域定義用
	MAP_SEAL_MP6532m,				// mp6532m で開封される領域定義用
	MAP_SEAL_MP6539m,				// mp6539m で開封される領域定義用
	MAP_SEAL_MP6541m,				// mp6541m で開封される領域定義用
	MAP_SEAL_MP6542m,				// mp6542m で開封される領域定義用
	MAP_SEAL_MP6549m,				// mp6549m で開封される領域定義用
	MAP_SEAL_MP6551m,				// mp6551m で開封される領域定義用
	MAP_SEAL_MP6552m,				// mp6552m で開封される領域定義用
	MAP_SEAL_MP6553m,				// mp6553m で開封される領域定義用
	MAP_SEAL_MP6554m,				// mp6554m で開封される領域定義用
	MAP_SEAL_MP6559m,				// mp6559m で開封される領域定義用
	MAP_SEAL_MP6561m,				// mp6561m で開封される領域定義用
	MAP_SEAL_MP6569m,				// mp6569m で開封される領域定義用
	
	MAP_SEAL_MP6511,				// mp6511 で開封される領域定義用
	MAP_SEAL_MP6512,				// mp6512 で開封される領域定義用
	MAP_SEAL_MP6513,				// mp6513 で開封される領域定義用
	MAP_SEAL_MP6519,				// mp6519 で開封される領域定義用
	MAP_SEAL_MP6521,				// mp6521 で開封される領域定義用
	MAP_SEAL_MP6522,				// mp6522 で開封される領域定義用
	MAP_SEAL_MP6529,				// mp6529 で開封される領域定義用
	MAP_SEAL_MP6531,				// mp6531 で開封される領域定義用
	MAP_SEAL_MP6532,				// mp6532 で開封される領域定義用
	MAP_SEAL_MP6539,				// mp6539 で開封される領域定義用
	MAP_SEAL_MP6541,				// mp6541 で開封される領域定義用
	MAP_SEAL_MP6542,				// mp6542 で開封される領域定義用
	MAP_SEAL_MP6549,				// mp6549 で開封される領域定義用
	MAP_SEAL_MP6551,				// mp6551 で開封される領域定義用
	MAP_SEAL_MP6552,				// mp6552 で開封される領域定義用
	MAP_SEAL_MP6553,				// mp6553 で開封される領域定義用
	MAP_SEAL_MP6554,				// mp6554 で開封される領域定義用
	MAP_SEAL_MP6555,				// mp6555 で開封される領域定義用
	MAP_SEAL_MP6559,				// mp6559 で開封される領域定義用
	MAP_SEAL_MP6561,				// mp6561 で開封される領域定義用
	MAP_SEAL_MP6569,				// mp6569 で開封される領域定義用

	// 夜ダンジョン
	// 珊瑚の森
	MAP_SEAL_MP1301T2,				// mp1301t2 で開封される領域定義用
	MAP_SEAL_MP1302T2,				// mp1302t2 で開封される領域定義用
	MAP_SEAL_MP1303T2,				// mp1303t2 で開封される領域定義用
	MAP_SEAL_MP1304T2,				// mp1304t2 で開封される領域定義用
	MAP_SEAL_MP1305T2,				// mp1305t2 で開封される領域定義用
	MAP_SEAL_MP1306T2,				// mp1306t2 で開封される領域定義用
	MAP_SEAL_MP1307T2,				// mp1307t2 で開封される領域定義用
	MAP_SEAL_MP1308T2,				// mp1308t2 で開封される領域定義用
	MAP_SEAL_MP1309T2,				// mp1309t2 で開封される領域定義用

	// ジャンダルム
	MAP_SEAL_MP4331T2,				// mp4331t2 で開封される領域定義用
	MAP_SEAL_MP4332T2,				// mp4332t2 で開封される領域定義用
	MAP_SEAL_MP4333T2,				// mp4333t2 で開封される領域定義用
	MAP_SEAL_MP4334T2,				// mp4334t2 で開封される領域定義用
	MAP_SEAL_MP4335T2,				// mp4335t2 で開封される領域定義用
	MAP_SEAL_MP4336T2,				// mp4336t2 で開封される領域定義用
	MAP_SEAL_MP4337T2,				// mp4337t2 で開封される領域定義用
	MAP_SEAL_MP4338T2,				// mp4338t2 で開封される領域定義用
	MAP_SEAL_MP4339T2,				// mp4339t2 で開封される領域定義用
	MAP_SEAL_MP4340T2,				// mp4340t2 で開封される領域定義用
	MAP_SEAL_MP4341T2,				// mp4341t2 で開封される領域定義用
	MAP_SEAL_MP4342T2,				// mp4342t2 で開封される領域定義用

	// 太古の大平原
	MAP_SEAL_MP6111T2,				// mp6111t2 で開封される領域定義用
	MAP_SEAL_MP6112T2,				// mp6112t2 で開封される領域定義用
	MAP_SEAL_MP6116T2,				// mp6115t2 で開封される領域定義用
	MAP_SEAL_MP6101T2,				// mp6101t2 で開封される領域定義用

	// 設定なし
	MAP_SEAL_MP6309,				// mp6309 で開封される領域定義用
	MAP_SEAL_MP6348,				// mp6348 で開封される領域定義用

	MAP_SEAL_END,					// 全体地図、開封済みビットフラグ終端（1024までＯＫ）　※リザーブ分を超えた場合はプログラムがリビルドされるまでMAP_SEAL_ENDを超えた警告が出ます。
};

// マップ名定義ファイルの定義用
enum{
	MN_NONE = 0,				// 未登録用に置いてある

	// F001：セイレン島・西部
	MN_F_SOUTHWEST_PLANE_MP1101,	// 南西部
	MN_F_SOUTHWEST_PLANE_MP1102,	// 南西部
	MN_F_SOUTHWEST_PLANE_MP1103,	// 南西部
	MN_F_SOUTHWEST_PLANE_MP1104,	// 南西部
	MN_F_SOUTHWEST_PLANE_MP1110,	// 南西部
	MN_F_SOUTHWEST_PLANE_MP1111,	// 南西部
	MN_F_SOUTHWEST_PLANE_MP1131,	// 南西部
	MN_F_SOUTHWEST_PLANE_MP1112,	// 南西部
	MN_F_SOUTHWEST_PLANE_MP2101,	// 南西部
	MN_F_SOUTHWEST_PLANE_MP1105,	// 南西部
	MN_F_SOUTHWEST_PLANE_MP1106,	// 南西部

	// MP120x：漂流村
	MN_T_VILLAGE_MP1201,			// 拠点
	MN_T_VILLAGE_MP1202,			// 拠点
	MN_T_VILLAGE_MP1201_2,			// 拠点（名前変更後）
	MN_T_VILLAGE_MP1202_2,			// 拠点（名前変更後）

	// MP730x：朽ちた穴倉
	MN_D_CELLAR_MP7301,				// 穴倉１
	MN_D_CELLAR_MP7302,				// 穴倉２
	MN_D_CELLAR_MP7303,				// 穴倉３
	MN_D_CELLAR_MP7304,				// 穴倉４
	MN_D_CELLAR_MP7305,				// 穴倉・嘆きの断崖

	//MP130x：珊瑚の森
	MN_D_MP1301,		// 珊瑚の森
	MN_D_MP1302,		// 珊瑚の森
	MN_D_MP1303,		// 珊瑚の森
	MN_D_MP1304,		// 珊瑚の森
	MN_D_MP1305,		// 珊瑚の森
	MN_D_MP1306,		// 珊瑚の森
	MN_D_MP1307,		// 珊瑚の森
	MN_D_MP1308,		// 珊瑚の森
	MN_D_MP1309,		// 珊瑚の森

	//MP230x：密林
	MN_D_MP2301,		// 密林 
	MN_D_MP2302,		// 密林 
	MN_D_MP2303,		// 密林 
	MN_D_MP2304,		// 密林 
	MN_D_MP2305,		// 密林 
	MN_D_MP2306,		// 密林 
	MN_D_MP2307,		// 密林 
	MN_D_MP2308,		// 密林 

	//MP430x：浸食谷
	MN_D_MP4301,		// 浸食谷
	MN_D_MP4302,		// 浸食谷
	MN_D_MP4303,		// 浸食谷
	MN_D_MP4304,		// 浸食谷
	MN_D_MP4305,		// 浸食谷
	MN_D_MP4306,		// 浸食谷
	MN_D_MP4307,		// 浸食谷
	MN_D_MP4308,		// 浸食谷

	// ◆F002：中央部
	MN_F_MP1120,
	MN_F_MP1121,
	MN_F_MP1107,		// 吊り橋　※スクリプトで使用済み。変更するときは一緒に変更。
	MN_F_MP3103,
	MN_F_MP3104,
	MN_F_MP2102,
	
	// ◆F003：東部
	MN_F_MP1108,
	MN_F_MP1109,
	MN_F_MP4102,
	MN_F_MP2103,
	
	// ◆F004：喜望峰
	MN_F_MP1116,
	
	// ◆F005：西部・南端（珊瑚礁）
	MN_F_MP1113,
	MN_F_MP1132,
	MN_F_MP1133,
	MN_F_MP1134,
	
	// F006：西部高原・(風見の高原)
	MN_F_MP3101,
	MN_F_MP3102,
	
	// F007：中央高原
	MN_F_MP3105,
	MN_F_MP3106,
	MN_F_MP3107,
	MN_F_MP3108,
	MN_F_MP3109,
	MN_F_MP4101,

	// 大峡谷(植樹祭)
	MN_F_MP3109m,
	MN_F_MP3110m,
	MN_F_MP3111m,

	// ◆F008：遠鳴り浜
	MN_F_MP1117,
	MN_F_MP1135,
	
	// ◆F009：漂流浜
	MN_F_MP1118,
	
	// ◆F010：漂流浜
	MN_F_MP1119,

	// ◆F011：濃霧の森
	MN_F_MP2104,
	MN_F_MP2105,
	MN_F_MP2106,
	
	// ◆F012：霞の海岸
	MN_F_MP1114,
	MN_F_MP1115,

	// ◆F013：離れ島
	MN_F_MP1122,
	MN_F_MP1123,

	// ◆F031：風雲山道
	MN_F_MP4103,
	MN_F_MP4104,
	MN_F_MP4106,
	MN_F_MP4108,
	MN_F_MP7101,
	MN_F_MP7102,

	// ◆F032：王都
	MN_F_MP6201,
	MN_F_MP6202,
	MN_F_MP6203,
	MN_F_MP6204,
	MN_F_MP6211,
	MN_F_MP6212,
	MN_F_MP6213,
	MN_F_MP6214,
	MN_F_MP6215,


	// ◆F033：原生林
	MN_F_MP5101,
	MN_F_MP5102,
	MN_F_MP5103,

	// ◆F034：太古の大平原
	MN_F_MP6101,
	MN_F_MP6102,
	MN_F_MP6111,
	MN_F_MP6112,
	MN_F_MP6116,

	// ◆F035：トワル街道
	MN_F_MP6103,
	MN_F_MP6104,
	MN_F_MP6110,
	MN_F_MP6115,

	// ◆F036：天涯丘陵
	MN_F_MP4110,
	MN_F_MP5104,

	// ◆F037：湿原地帯
	MN_F_MP6105,
	MN_F_MP6106,
	MN_F_MP6107,
	MN_F_MP6108,
	MN_F_MP6113,
	MN_F_MP6114,
	
	// ◆F038：悠久の丘
	MN_F_MP6109,

	// ◆F039：聖域への山道
	MN_F_MP4105,
	MN_F_MP4109,
	MN_F_MP4111,

	//MP433x：ジャンダルム
	MN_D_MP4331,
	MN_D_MP4332,
	MN_D_MP4333,
	MN_D_MP4334,
	MN_D_MP4335,
	MN_D_MP4336,
	MN_D_MP4337,
	MN_D_MP4338,
	MN_D_MP4339,
	MN_D_MP4340,
	MN_D_MP4341,
	MN_F_MP4107,
	MN_D_MP4342,
	
	MN_F_MP4202,	//小屋

	// ◆FXXXM：過去編フィールド
	MN_F_MPXXXM,


	// ◆大樹寺院(過去）
	MN_F_MP6401m,
	MN_F_MP6402m,
	MN_F_MP6408m,
	MN_F_MP6409m,
	MN_F_MP6410m,


	// ◆大樹寺院(現在）
	MN_D_MP6401,
	MN_D_MP6402,
	MN_D_MP6408,
	MN_D_MP6409,
	MN_D_MP6410,


	// ◆大樹寺院(過去）
	MN_F_MP6409v2,
	
	
	// ◆王都室内(現在）
	MN_D_MP6211,
	MN_D_MP6214,

	// ◆王都室内(過去）
	MN_F_MP6211m,
	MN_F_MP6212m,
	MN_F_MP6213m,
	MN_F_MP6214m,
	MN_F_MP6215m,
	MN_F_MP6216m,
	MN_F_MP6222m,
	MN_F_MP6222m2,
	MN_F_MP6231m,

	// ◆ロンバルディア号
	MN_F_MP0011,
	MN_F_MP0012,
	MN_F_MP0013,
	MN_F_MP0014,
	MN_F_MP0015,
	MN_F_MP0016,
	MN_F_MP0017,
	MN_F_MP0018,

	// ◆幽霊船
	MN_D_MP0401,
	MN_D_MP0402,
	MN_D_MP0403,
	MN_D_MP0404,
	MN_D_MP0405,
	MN_D_MP0406,
	MN_D_MP0407,
	MN_D_MP0408,
	
	// ◆王家の谷
	MN_D_MP6341,		// 王家の谷・複層広間
	MN_D_MP6342,		// 王家の谷・小部屋１
	MN_D_MP6343,		// 王家の谷・小部屋２
	MN_D_MP6344,		// 王家の谷・小部屋３
	MN_D_MP6345,		// 王家の谷・中ボス部屋
	MN_D_MP6346,		// 王家の谷・後半大部屋１
	MN_D_MP6347,		// 王家の谷・後半大部屋２
	MN_D_MP6349,		// 王家の谷・大ボス部屋
	MN_D_MP6350,		// 王家の谷・剣安置部屋・復活前
	MN_D_MP6350m,		// 王家の谷・剣安置部屋・過去
	MN_D_MP6350v1,		// 王家の谷・剣安置部屋・復活後
	MN_D_MP6351,		// 王家の谷・壁画部屋

	// ◆ラスダン・共通部分
	MN_D_MP6301,		// ラスダン・大空間（天ｴﾘｱ）
	MN_D_MP6302,		// ラスダン・大空間（海ｴﾘｱ）
	MN_D_MP6303,		// ラスダン・大空間（氷ｴﾘｱ）
	MN_D_MP6304,		// ラスダン・大空間（蟲ｴﾘｱ）

	// ◆ラスダン・海エリア
	MN_D_MP6305,		// 海エリア・攻略
	MN_D_MP6305b,		// 海エリア・ボス

	// ◆ラスダン・氷エリア
	MN_D_MP6306,		// 氷エリア・攻略
	MN_D_MP6306b,		// 氷エリア・ボス

	// ◆ラスダン・蟲エリア
	MN_D_MP6307,		// 蟲エリア・攻略
	MN_D_MP6307b,		// 蟲エリア・ボス

	// ◆ラスダン・天エリア
	MN_D_MP6308,		// 天エリア・攻略
	MN_D_MP6308b,		// 天エリア・ボス

	// ◆ラスダン・ラスボスエリア
	MN_D_MP6310,		// ラスボスエリア・攻略
	MN_D_MP6310b,		// ラスボスエリア・ボス

	// ◆バハの斜塔
	MN_D_MP6321,		// バハの斜塔・下層１
	MN_D_MP6322,		// バハの斜塔・下層２
	MN_D_MP6323,		// バハの斜塔・下層３
	MN_D_MP6324,		// バハの斜塔・回廊１
	MN_D_MP6325,		// バハの斜塔・中ボス部屋
	MN_D_MP6326,		// バハの斜塔・上層１
	MN_D_MP6327,		// バハの斜塔・回廊２
	MN_D_MP6328,		// バハの斜塔・上層２
	MN_D_MP6329,		// バハの斜塔・ボス部屋
	MN_D_MP6330,		// バハの斜塔・最上階

	// ◆始生代の大穴
	MN_D_MP6361,		// 始生代の大穴・王宮跡１
	MN_D_MP6362,		// 始生代の大穴・外観
	MN_D_MP6363,		// 始生代の大穴・洞窟１
	MN_D_MP6364,		// 始生代の大穴・洞窟２
	MN_D_MP6365,		// 始生代の大穴・洞窟３
	MN_D_MP6366,		// 始生代の大穴・中ボスマップ
	MN_D_MP6367,		// 始生代の大穴・洞窟４
	MN_D_MP6368,		// 始生代の大穴・王宮跡２
	MN_D_MP6369,		// 始生代の大穴・王宮跡３
	MN_D_MP6370,		// 始生代の大穴・ボスマップ

	// ◆浸食谷
	MN_D_EROSIONVALLEY_MP4301,		// 浸食谷
	MN_D_EROSIONVALLEY_MP4302,		// 浸食谷
	MN_D_EROSIONVALLEY_MP4303,		// 浸食谷
	MN_D_EROSIONVALLEY_MP4304,		// 浸食谷
	MN_D_EROSIONVALLEY_MP4305,		// 浸食谷
	MN_D_EROSIONVALLEY_MP4306,		// 浸食谷
	MN_D_EROSIONVALLEY_MP4307,		// 浸食谷
	MN_D_EROSIONVALLEY_MP4308,		// 浸食谷
	MN_D_EROSIONVALLEY_MP4309,		// 浸食谷
		
	// ◆埋没した塔
	MN_D_MP6411,					// 埋没した塔
	MN_D_MP6412,					// 埋没した塔
	MN_D_MP6413,					// 埋没した塔
	
	// ◆MP832x：はじまりの深淵
	MN_D_MP8321,					// はじまりの深淵入口
	MN_D_MP8322,					// はじまりの深淵通路
	MN_D_MP8323,					// はじまりの深淵ボスマップ

	// ◆大僧院
	MN_D_MP6421,
	MN_D_MP6422,

	// ◆古代種の住処
	MN_D_MP5401,	

	// ◆古代の洞窟
	MN_D_MP7401,	

	// ◆沖の洞窟
	MN_D_MP7411,

	// ◆水源地
	MN_D_MP7451,
	MN_D_MP7452,

	// ◆地下水脈
	MN_D_MP7461,
	MN_D_MP7462,

	// ◆鍾乳洞
	MN_D_MP7471,
	MN_D_MP7472,

	// ◆水没墓地
	MN_D_MP7481,
	MN_D_MP7482,

	// ◆大石柱の風穴
	MN_D_MP7491,
	MN_D_MP7492,

	// ◆脱出船
	MN_F_MP0021,


	// ◆過去編フィールド
	MN_F_MP4105M,
	MN_F_MP5103M,
	MN_F_MP5104M,
	MN_F_MP6101M,
	MN_F_MP6103M,
	MN_F_MP6104M,
	MN_F_MP6106M,
	MN_F_MP6107M,
	MN_F_MP6108M,
	MN_F_MP6110M,
	MN_F_MP6112M,
	MN_F_MP6113M,
	MN_F_MP6114M,
	MN_F_MP6201M,
	MN_F_MP6202M,
	MN_F_MP6203M,
	MN_F_MP6204M,

	MN_DIARY_OTHER,		// 植樹祭			過去編・ダーナ①
	MN_DIARY_OTHER2,	// 謁見と再会と		過去編・ダーナ③
	MN_DIARY_OTHER3,	// 赤毛の剣士		過去編Ⅰ
	MN_DIARY_OTHER4,	// 導きの苗木		過去編Ⅱ
	MN_DIARY_OTHER5,	// お転婆巫女の一日	過去編Ⅲ
	MN_DIARY_OTHER6,	// 冥暗				過去編Ⅳ
	MN_DIARY_OTHER7,	// 運命の日			過去編Ⅳ－２
	MN_DIARY_OTHER8,	// 昏き空の下で		過去編Ⅴ
	MN_DIARY_OTHER9,	// 悲壮なる決意		過去編Ⅵ

//追加分
	MN_D_MP6409B,

// ◆過去編追加ダンジョン
	MN_D_MP6511M,
	MN_D_MP6512M,
	MN_D_MP6513M,
	MN_D_MP6514M,
	MN_D_MP6515M,
	MN_D_MP6519M,
	MN_D_MP6521M,
	MN_D_MP6522M,
	MN_D_MP6523M,
	MN_D_MP6524M,
	MN_D_MP6529M,
	MN_D_MP6531M,
	MN_D_MP6532M,
	MN_D_MP6539M,
	MN_D_MP6541M,
	MN_D_MP6542M,
	MN_D_MP6549M,
	MN_D_MP6551M,
	MN_D_MP6552M,
	MN_D_MP6553M,
	MN_D_MP6554M,
	MN_D_MP6559M,
	MN_D_MP6561M,
	MN_D_MP6569M,

	MN_D_MP6511,
	MN_D_MP6512,
	MN_D_MP6513,
	MN_D_MP6519,
	MN_D_MP6521,
	MN_D_MP6522,
	MN_D_MP6529,
	MN_D_MP6531,
	MN_D_MP6532,
	MN_D_MP6539,
	MN_D_MP6541,
	MN_D_MP6542,
	MN_D_MP6549,
	MN_D_MP6551,
	MN_D_MP6552,
	MN_D_MP6553,
	MN_D_MP6554,
	MN_D_MP6555,
	MN_D_MP6559,
	MN_D_MP6561,
	MN_D_MP6569,
	
// ◆夜ダンジョン
	//MP130x：珊瑚の森
	MN_D_MP1301T2,		// 珊瑚の森
	MN_D_MP1302T2,		// 珊瑚の森
	MN_D_MP1303T2,		// 珊瑚の森
	MN_D_MP1304T2,		// 珊瑚の森
	MN_D_MP1305T2,		// 珊瑚の森
	MN_D_MP1306T2,		// 珊瑚の森
	MN_D_MP1307T2,		// 珊瑚の森
	MN_D_MP1308T2,		// 珊瑚の森
	MN_D_MP1309T2,		// 珊瑚の森

	//MP433x：ジャンダルム
	MN_D_MP4331T2,
	MN_D_MP4332T2,
	MN_D_MP4333T2,
	MN_D_MP4334T2,
	MN_D_MP4335T2,
	MN_D_MP4336T2,
	MN_D_MP4337T2,
	MN_D_MP4338T2,
	MN_D_MP4339T2,
	MN_D_MP4340T2,
	MN_D_MP4341T2,
	MN_D_MP4342T2,

	// ◆F034：太古の大平原
	MN_F_MP6101T2,
	MN_F_MP6102T2,
	MN_F_MP6111T2,
	MN_F_MP6112T2,
	MN_F_MP6116T2,

	//過去編アクティブボイスでっちあげ定義：過去編Ⅶ用
	MN_DIARY_OTHER10,			//過去編Ⅶ用
	MN_DIARY_OTHER11,			//過去編・地下聖堂用



	//// ▼ys8 マップ名ＩＤ定義はここまで ////
	//////////////////////////////////////////







	MN_MAX,							// マップ名定義、最大値
};
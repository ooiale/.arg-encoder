enum {
	// 拠点・野営地
	
	CP_CRYSTAL_START = 0,			// 水晶石ここから
	
	CP_MP1201_01 = 0,				// 00:凪の入り江
	CP_MP1201_02,					// 01:漂流村
	CP_MP1105,						// 02:名もなき海岸・野営地
	CP_MP1121,						// 03:大河流域・野営地
	CP_MP4102,						// 04:霞の丘陵・北の野営地
	CP_MP2103,						// 05:霞の丘陵・南の野営地
	CP_MP2106,						// 06:濃霧の森・野営地
	CP_MP3105,						// 07:中央高原・野営地

	// 水晶石のみ
	CP_MP7303,						// 08:水音の洞窟
	CP_MP1111,						// 09:名もなき海岸・白砂の浜
	CP_MP1113,						// 10:碧の珊瑚礁
	CP_MP1305,						// 11:珊瑚の森・中間
	CP_MP1307,						// 12:珊瑚の森・最奥
	CP_MP7451,						// 13:水源地
	CP_MP2102,						// 14:大河流域
	CP_MP7471,						// 15:鍾乳洞
	CP_MP4305,						// 16:浸食谷・中間
	CP_MP4308,						// 17:浸食谷・最奥
	CP_MP2303,						// 18:巨木の密林・中間
	CP_MP2307,						// 19:巨木の密林・最奥
	CP_MP1114,						// 20:霞の海岸
	CP_MP4336,						// 21:ジャンダルム・中腹
	CP_MP3108,						// 22:西麓高原
	CP_MP7401,						// 23:古代の洞窟
	CP_MP4340,						// 24:ジャンダルム・最奥
	CP_MP7411,						// 25:沖の洞窟
	CP_MP0404,						// 26:海賊船・第２デッキ
	CP_MP0408,						// 27:海賊船・甲板室
	CP_MP6411,						// 28:埋没した塔
	
	CP_SOUTHGROUP = CP_MP6411,		// ここまで南側
	CP_NORTHSTART,					// ここから北側

	CP_MP4111 = CP_NORTHSTART,		// 29:聖域への山道・野営地
	CP_MP6101,						// 30:太古の大平原・野営地
	CP_MP6110,						// 31:トワル街道・野営地
	CP_MP6108,						// 32:王家の谷・野営地
	
	CP_MP4103,						// 33:風雲山道
	CP_MP5102,						// 34:原生林（古代種の住処前）
	CP_MP7491,						// 35:大石柱の風穴
	CP_MP6201,						// 36:エタニア市街地跡・中央区
	CP_MP6409_1,					// 37:大樹の寺院・前
	CP_MP6409_2,					// 38:大樹の寺院・前
	CP_MP6409_3,					// 39:大樹の寺院・前
	CP_MP6409_4,					// 40:大樹の寺院・前（エピローグ版
	CP_MP6401,						// 41:大樹の寺院・最奥
	CP_MP6324,						// 42:バハの斜塔・中腹
	CP_MP6328,						// 43:バハの斜塔・最奥
	CP_MP6204,						// 44:エタニア市街地跡・王宮前
	CP_MP6365,						// 45:始生代の大穴・中腹
	CP_MP6369,						// 46:始生代の大穴・最奥
	CP_MP4110,						// 47:天崖丘陵
	CP_MP6105,						// 48:湿原地帯
	CP_MP6421,						// 49:大僧院
	CP_MP7481,						// 50:水没寺院
	CP_MP6341,						// 51:王家の谷・中腹
	CP_MP6347,						// 52:王家の谷・最奥
	CP_MP6350_1,					// 53:セレンの園
	CP_MP6350_2,					// 54:セレンの園
	CP_MP6301,						// 55:オクトゥス
	CP_MP6305,						// 56:オクトゥス・海の回廊
	CP_MP6306,						// 57:オクトゥス・氷の回廊
	CP_MP6307,						// 58:オクトゥス・蟲の回廊
	CP_MP6308,						// 59:オクトゥス・天の回廊
	CP_MP6310,						// 60:オクトゥス・選択の間

	CP_NORTHGROUP = CP_MP6310,		// ここまで北側

	CP_MP4335,						// 61:追加分：ジャンダルム・タナトスの小屋
	CP_MP1116,						// 62:追加分：望郷岬

	CP_CRYSTAL_MAX = CP_MP1116,		// 水晶石はここまで

//	AddWarpDisableList(CP_CRYSTAL_START, CP_SOUTHGROUP)		// 南側は全部禁止
//	AddWarpDisableList(CP_NORTHSTART, CP_NORTHGROUP)		// 北側は全部禁止
//	AddWarpDisableList(CP_CRYSTAL_START, CP_CRYSTAL_MAX)	// 水晶石は全部禁止
//	DelWarpDisableList(CP_MP6350_1, CP_MP6350_1)			// セレンの園だけ禁止解除

	// 水晶石リザーブ
	CP_RESERVE_63,					// 63:

	// ロケーションポイント
	CP_L_MP1112,					// 64:鳥鳴き岩				01:
	CP_L_MP1132,					// 65:碧岩					02:
	CP_L_MP1304,					// 66:七色の滝				03:
	CP_L_MP1117,					// 67:メタボリカレス		04:
	CP_L_MP1135,					// 68:パラセコイア			05:
	CP_L_MP2102,					// 69:粗暴な残骸跡			06:ボツ
	CP_L_MP1120,					// 70:漂着溜まり			07:ボツ
	CP_L_MP3104,					// 71:煙突岩				08:
	CP_L_MP4303,					// 72:藍色の鉱脈			09:
	CP_L_MP1119,					// 73:打ち上げられた遺骸	10:
	CP_L_MP2306,					// 74:薬草の群生地			11:
	CP_L_MP1118,					// 75:大奇岩				12:ボツ
	CP_L_MP3107,					// 76:エアーズロックケルン	13:
	CP_L_MP4335,					// 77:山小屋				14:ボツ
//	CP_L_MP4107,					// //78:シュナベルク		15:ボツ
	CP_L_MP3102,					// 78:清風の丘				16:
	CP_L_MP7462,					// 79:瑠璃色の鉱脈			17:
	CP_L_MP7471,					// 80:乳白色の鉱脈			18:
	CP_L_MP1114,					// 81:蜂塚					19:
	CP_L_MP2105,					// 82:無残な残骸跡			20:ボツ
	CP_L_MP1116,					// 83:船の墓場				21:
	CP_L_MP7411,					// 84:隠し倉				22:
	CP_L_MP1122,					// 85:マングローダ			23:
	
	CP_L_MP7102,					// 86:虹色の鉱脈			24:
	CP_L_MP5102,					// 87:ユニカラミテス		25:
	CP_L_MP5401,					// 88:陽だまりのねぐら		26:ボツ
	CP_L_MP6116,					// 89:実りの丘				27:
	CP_L_MP6112,					// 90:老竜樹				28:
	CP_L_MP6115,					// 91:古き聖者の墓碑		29:ボツ
	CP_L_MP6365,					// 92:水没した双杯の像		30:
	CP_L_MP4110,					// 93:奇妙な残骸跡			31:ボツ
	CP_L_MP6114,					// 94:スカイガーデン		32:
	CP_L_MP7481,					// 95:静寂の間				33:
	CP_L_MP6109,					// 96:古き勇士達の墓碑		34:

	CP_RESERVE_97,					// 97:

	CP_LOCATION_MAX = CP_L_MP6109,	// ロケーションはここまで

	/////////////////////////////
	// はじまりの深淵の分
	CP_MP8321,						// 98:はじまりの深淵		// ワープ機能無しなので、このＩＤは無意味
	CP_MP8322,						// 99:はじまりの深淵・最奥	// ワープ機能無しなので、このＩＤは無意味

	//PS4追加
	CP_MP6561,						// 100:現代編地下聖堂・ボス前
	CP_MP6511,						// 101:現代編地下聖堂・第一層

	//過去編地下聖堂
	CP_MP6511M,						// 102:過去編地下聖堂・第一層



	CHECK_POINT_MAX,				// チェックポイントの最大数。これが124以上だとアウト
};

enum{
	COOPEVID_MP1110 = 0,		// mp1110：名も無き海岸		瓦礫撤去	必須・チュートリアル
	COOPEVID_MP1111,			// mp1111：名も無き海岸		大岩撤去
	COOPEVID_MP2101,			// mp2101：名も無き海岸		土砂撤去
	COOPEVID_MP1120,			// mp1120：大河流域			
	COOPEVID_MP2105,			// mp2105：濃霧の森			
	COOPEVID_MP1131,			// mp1131：名も無き海岸		大岩撤去
	COOPEVID_MP1117,			// mp1117：遠鳴り浜			
	COOPEVID_MP1107,			// mp1107：大河流域			吊り橋修復	必須
	COOPEVID_MP1109,			// mp1109：霞の丘陵			
	COOPEVID_MP1116,			// mp1116：希望峰			
	COOPEVID_MP6102,			// mp6102：太古の大平原		
	COOPEVID_MP1132,			// mp1132：碧の珊瑚礁		
	COOPEVID_MP4110,			// mp4110：始生代の大穴		
	COOPEVID_MP6107,			// mp6107：湿原地帯			土砂撤去
	COOPEVID_MP6362,			// mp6362：エタニア市街		
	COOPEVID_MP2104,			// mp2104：濃霧の森			土砂撤去

	COOPEVID_MAX,				// 協力イベント最大数
};

enum
{
	MAPEFX_SCREEN = 0,		// 常に原点でエフェクトを再生する
	MAPEFX_NODE,				// 指定ノードからのオフセットでエフェクトを再生する
	MAPEFX_PLAYER,				// 操作キャラのオフセット（角度有効）でエフェクトを再生する
	MAPEFX_CAMERA,				// カメラ注視点のオフセット（角度有効）でエフェクトを再生する
};

enum{
	// ※SetMapMarkerでparam1に指定できる物については○印を付けています。
	SMI_PLAYER = -7,		// 0_0 // プレイヤー
	SMI_RESERVED_0_1,		// 0_1 // 予約
	SMI_ENTRYIN,			// 0_2 // 入ってきたエントリー
	SMI_COMPASS,			// 0_3 // コンパス
	SMI_FILTER_ALL,			// 0_4 // アイコンフィルター「全て」
	SMI_PLAYER2,			// 0_5 // プレイヤーアイコン２（ダーナ）
	SMI_RESERVED_0_6,		// 0_6 // 予約15
	SMI_RESERVED_0_7,		// 0_7 // 予約15

	SMI_NONE = 0,			// 1_x // 何も無い

	SMI_TBOX,				// 1_0 // 宝箱
	SMI_ROCK,				// 1_1 // ○採集オブジェクト（鉱石）
	SMI_FLOWER,				// 1_2 // ○採集オブジェクト（花）
	SMI_SYMBOL,				// 1_3 // ○シナリオ目的地
	SMI_GREENS,				// 1_4 // ○採集オブジェクト（野菜）
	SMI_WOOD,				// 1_5 // ○採集オブジェクト（木材）
	SMI_CAMP,				// 1_6 // 野営地（エリア地図とミニマップでのみ表示される）
	SMI_FISHING_SPOT,		// 1_7 // 釣り穴場ポイント

	SMI_DANA_SYMBOL,		// 2_0 // ○ダーナ編シナリオ目的地
	SMI_DANA_QUEST,			// 2_1 // ○ダーナ編クエスト
	SMI_QUEST,				// 2_2 // ○クエスト
	SMI_WARPPT,				// 2_3 // 水晶石（未チェック）
	SMI_CHECKED_WARPPT,		// 2_4 // ○水晶石（プログラム用領域）	※これに指定すると、実際のアイコンがSMI_WARPPT_ON_0～SMI_WARPPT_ON_9の中から自動で選ばれて描画する
	SMI_LOCATION,			// 2_5 // ○ロケーションポイント
	SMI_COOPEVENT,			// 2_6 // ○協力イベント
	SMI_FRUIT,				// 2_7 // ○採集オブジェクト（果実）

	SMI_WARPPT_ON_0,		// 3_0 // 開封済みワープポイント１	// 通常の水晶石
	SMI_WARPPT_ON_1,		// 3_1 // 開封済みワープポイント２	// 拠点の水晶石
	SMI_WARPPT_ON_2,		// 3_2 // 開封済みワープポイント３	// 野営地のテント付き水晶石
	SMI_WARPPT_ON_3,		// 3_3 // 開封済みワープポイント４	// 過去に飛べる水晶石
	SMI_WARPPT_ON_4,		// 3_4 // 開封済みワープポイント５	// 野営地のテント隙過去に飛べる水晶石
	SMI_WARPPT_ON_5,		// 3_5 // 開封済みワープポイント６
	SMI_WARPPT_ON_6,		// 3_6 // 開封済みワープポイント７
	SMI_WARPPT_ON_7,		// 3_7 // 開封済みワープポイント８

	SMI_WARPPT_ON_8,		// 4_0 // 開封済みワープポイント９
	SMI_WARPPT_ON_9,		// 4_1 // 開封済みワープポイント１０
	SMI_OPENED_TBOX,		// 4_2 // 開けた宝箱
	SMI_EVENTPT_MAIN,		// 4_3 // ○メインイベントマーカー		// SetEventNPCで設定すると自動的にミニマップに表示される
	SMI_EVENTPT_QUEST,		// 4_4 // ○クエストイベントマーカー	// SetEventNPCで設定すると自動的にミニマップに表示される
	SMI_NPC_MARKER,			// 4_5 // NPCマーカー
	SMI_LP_MARKER,			// 4_6 // ルックポイントマーカー
	SMI_SUBEVENT,			// 4_7 // ○サブイベントマーカー（SMI_SYMBOLやSMI_QUESTの仲間）

	SMI_HIVE,				// 5_0 // ○クノスマーカー（SMI_SYMBOLやSMI_QUESTの仲間）
	SMI_USER1,				// 5_1 // ユーザーマーカー1
	SMI_USER2,				// 5_2 // ユーザーマーカー2
	SMI_USER3,				// 5_3 // ユーザーマーカー3
	SMI_USER4,				// 5_4 // ユーザーマーカー4
	SMI_USER5,				// 5_5 // ユーザーマーカー5
	SMI_USER6,				// 5_6 // ユーザーマーカー6
	SMI_USER7,				// 5_7 // ユーザーマーカー7
	
	SMI_USER8,				// 6_0 // ユーザーマーカー8
	SMI_RESERVED_6_1,		// 6_1 // 予約15
	SMI_LANTERN_OFF,		// 6_2 // 地下聖堂、水ギミック燭台、火が消えている
	SMI_LANTERN_ON,			// 6_3 // 地下聖堂、水ギミック燭台、火が着いている
	SMI_DANA_CHECKED_WARPPT,// 6_4 // ○ダーナ編水晶石（プログラム用領域）	※これに指定すると、実際のアイコンがSMI_WARPPT_ON_0～SMI_WARPPT_ON_9の中から自動で選ばれて描画する
	SMI_DCRYSTAL,			// 6_5 // ダミークリスタル				パラメータ無し
	SMI_NIGHT_QUEST,		// 6_6 // ○アドル編夜クエスト
	SMI_DANA_SUBEVENT,		// 6_7 // ○ダーナ編サブイベントマーカー（SMI_SYMBOLやSMI_QUESTの仲間）

	SMI_RESERVED_7_0,		// 7_0 // 予約15
	SMI_EVENTPT_ITC,		// 7_1 // 迎撃戦受付ＮＰＣマーカー
	SMI_ITC_BOSS,			// 7_2 // 迎撃戦、ボスアイコン
	SMI_ITC_DMGGATE,		// 7_3 // 迎撃戦、防衛柵がダメージを受けた
	SMI_ITC_DMGOBJ,			// 7_4 // 迎撃戦、デコイやバリケードがダメージを受けた
	SMI_GOAL_DIRECTION,		// 7_5 // 目的地方向
	SMI_GOAL_POINT,			// 7_6 // 目的地ポインター
	SMI_RESERVED_FOOTPRINT,	// 7_7 // 足跡用領域

	SMI_3DICON_START,		// ここから３Ｄのオブジェクト

	SMI_3DICON_CASNAN,		// キャスナンオブジェクト
	SMI_3DICON_COMODO,		// コモドオブジェクト
	SMI_3DICON_SELRAY,		// セルレイオブジェクト
	SMI_3DICON_HIGHLAND,	// ハイランドオブジェクト
	SMI_3DICON_DANAN,		// ダナンオブジェクト
	SMI_3DICON_ELDUKE,		// エルドゥークオブジェクト

	SMI_3DICON_CAMP,		// キャンプオブジェクト
	SMI_3DICON_DUNGEON,		// ダンジョンオブジェクト

	SMI_3DICON_RIVER,		// 大河オブジェクト
	SMI_3DICON_TREE,		// 大河オブジェクト
	SMI_3DICON_LAKE,		// 大河オブジェクト

	SMI_3DICON_TOWER,		// 雷雨の塔オブジェクト
	SMI_3DICON_IRIS,		// イリスオブジェクト

	SMI_3DICON_OBJ,			// 目的地

	SMI_3DICON_MAX,			// ３Ｄオブジェクト最大数
};

enum {
	//イベントマーカー（メイン）	SetEventNPCで登録するアイコン用
	MARKER_EV_M01S010 = 1,		// mp1110	錆びた剣
	MARKER_EV_M01S050,			// mp1201	ラクシャと会話
	MARKER_EV_M01S060,			// mp1201	漂着物
	MARKER_EV_M01S070,			// mp1201	水晶石
	MARKER_EV_M01S120,			// mp7302	ショートソード
	MARKER_EV_M01S130,			// mp7302	鎧
	MARKER_EV_M01S135,			// mp7302	ポーション
	MARKER_EV_M02S020,			// mp1201	サハドとドギ
	MARKER_EV_M02S021,			// mp1203	釣りチュートリアル
	MARKER_EV_M02S023,			// mp1201	武器強化チュートリアル
	MARKER_EV_M02S024,			// mp1201	トレードチュートリアル
	MARKER_EV_M02S025,			// mp1201	調薬チュートリアル
	MARKER_EV_M02S030,			// mp1201	ドギ
	MARKER_EV_M02S040,			// mp1201	バルバロス
	MARKER_EV_M02S095,			// mp1202	アリスン
	MARKER_EV_M02S100,			// mp1105	珊瑚の森前野営地
	MARKER_EV_M02S130,			// mp1301	珊瑚の森
	MARKER_EV_M02S160B,			// mp1201	迎撃戦開始：ドギ
	MARKER_EV_M02S190,			// mp1303	グリップグローブ
	MARKER_EV_M02S200,			// mp1307	漂流者二人と出会う
	MARKER_EV_M02S270,			// mp1121	mp1121野営地
	MARKER_EV_M02S300,			// mp3103	見張り台
	MARKER_EV_M02S330,			// mp4102	浸食谷前野営地
	MARKER_EV_M02S701,			// mp1119	ディナ
	MARKER_EV_M02S380,			// mp2103	密林前野営地
	MARKER_EV_M02S390,			// MP2301	エアランに会う
	MARKER_EV_M02S400,			// mp2302	リヒト逃走	◆マーカー検証
	MARKER_EV_M02S430,			// mp1118	リヒト	◆マーカー検証
	MARKER_EV_M02S452,			// mp1201	カーラン卿襲われる
	MARKER_EV_M02S520,			// mp1201	サハド
	MARKER_EV_M02S580_LI,		// mp1201	リヒト
	MARKER_EV_M02S580_HU,		// mp1201	ヒュンメル
	MARKER_EV_M02S580_BA,		// mp1201	バルバロス
	MARKER_EV_M02S580_KI,		// mp1201	キルゴール
	MARKER_EV_M02S610,			// mp1101	鋼線
	MARKER_EV_M02S620,			// mp1201	キルゴール見つける
	MARKER_EV_M02S650,			// mp1111	バルバロス負傷
	MARKER_EV_M02S660,			// mp1103	キルゴール戦闘
	MARKER_EV_M02S680,			// mp1201	バルバロス

	//プロローグ
	MARKER_EV_M00S010,			// mp0011	バルバロスの部屋
	MARKER_EV_M00S040,			// mp0011	バルバロスの部屋

	//５部
	MARKER_EV_M05S272,			// mp1201	ドギ	//５部 オケアノス準備
	MARKER_EV_M05S310,			// mp1201t2	ダーナ	//５部 高台でダーナと話す
	//６部
	MARKER_EV_M06S010,			// mp1201	ドギ	//６部 迎撃戦準備

	//プロローグ
	MARKER_EV_KITCHEN,			// mp0012	厨房入り口

	// メイン用フラグ 200～　CHECK_POINT_EV_hoge	SetMapMarkerで登録する旗アイコン用
	MARKER_EV_M01S180 = 200,	// mp1103	地図作りを開始した		サハド合流イベントが目的地
	MARKER_EV_M01S190,			// mp1201	拠点に戻ってドギと再会
	MARKER_EV_M02S080,			// mp1133	アリスンを発見する	
	MARKER_EV_M02S160,			// mp1201	迎撃戦開始				ドギに話しかける	NPC用だけでいいので未使用
	MARKER_EV_M02S220,			// mp1117	カトリーンに出会う
	MARKER_EV_M02S260,			// mp1120	ヒュンメルに出会う		◆マーカー検証
	MARKER_EV_M02S320,			// mp1108	ヒュンメル合流			◆マーカー検証
	
	MARKER_EV_M02S470,			// mp1201	異形の獣を迎え撃つ
	MARKER_EV_M02S550,			// mp1113	カーラン卿の救出に向かう

	MARKER_EV_M03S080,			// mp3104	ジャンダルム前の峡谷
	MARKER_EV_M03S100,			// mp3105	ジャンダルム野営地
	MARKER_EV_M03S130,			// mp4335	タナトスの小屋
	MARKER_EV_M03S150,			// mp4336	ジャンダルムで大型古代種に遭遇
	MARKER_EV_M03S180,			// mp1201	カトリーンに相談する
	MARKER_EV_M03S220,			// mp7401	化石を調べる
	MARKER_EV_M03S230,			// mp1201	ヒイロカネの武器が完成する
	MARKER_EV_M03S270,			// mp4341	翼竜型古代種登場

	MARKER_EV_M04S020,			// mp4111	寺院前の野営地
	MARKER_EV_M04S050,			// mp6204m	ダーナ③ ダーナが王城へ入る
	MARKER_EV_M04S120,			// mp6101	王都前の野営地
	MARKER_EV_M04S083,			// mp5401	リコッタを救出する
	MARKER_EV_M04S132,			// mp6101m	過去Ⅰ 初めて水晶石前に植樹
	MARKER_EV_M04S170,			// mp6204	橋の上でタナトスに出会う
	MARKER_EV_M04S180,			// mp6201	参道の障害で立ち往生する
	MARKER_EV_M04S181,			// mp6201	水晶石に手をかざすⅡ
	MARKER_EV_M04S191,			// mp6201m	過去Ⅱ ダーナが参道に着く
	MARKER_EV_M04S260,			// mp6409	ダーナを発見する

	MARKER_EV_M05S042,			// mp6103	バハの塔を眺める
	MARKER_EV_M05S060,			// mp6110	バハの塔前で水晶石を見つける
	MARKER_EV_M05S080,			// mp6103m	過去Ⅲ　ダーナが塔に到着する
	MARKER_EV_M05S130,			// mp6330	ダーナがモノリスを起動する
	MARKER_EV_M05S142,			// mp1201	幽霊船を目撃する
	MARKER_EV_M05S147,			// mp7411	エレフセリア号が出航する
	MARKER_EV_M05S180,			// mp1201	大空洞へ向かうことになる
	MARKER_EV_M05S201,			// mp6204	水晶石に手をかざすⅣ
	MARKER_EV_M05S220,			// mp6204m	過去Ⅳ　空中回廊に苗木を植える
	MARKER_EV_M05S260,			// mp6370	オケアノスの住処に到達する
	MARKER_EV_M05S370,			// mp4105	寺院の山門を西側へ抜ける
	MARKER_EV_M05S380,			// mp6105	ダーナに追いつく
	MARKER_EV_M05S401,			// mp6106m	衛士たちに誰何を受ける２
	MARKER_EV_M05S420,			// mp6108t1	墓所前に野営地を築く
	MARKER_EV_M05S460,			// mp6351	壁画の間にたどり着く

	MARKER_EV_M06S030,			// mp4107	大樹の異変を目撃する
	MARKER_EV_M06S043,			// mp6409v1	山門前で護り人たちに遭遇する
	MARKER_EV_M06S061,			// mp6350m	過去Ⅵ　セレンの園に到着する２
	MARKER_EV_M06S100,			// mp6350	護り人たちが転移してくる
	MARKER_EV_M06S120,			// mp6409	オクトゥスへ侵入する
	MARKER_EV_M06S210,			// mp6350v1	想剣ミストルティンを入手する
	MARKER_EV_M06S230,			// mp6301	《選択の間》への扉を開く
	MARKER_EV_M06S231,			// mp6310	《選択の間》に突入する

	//追加
	MARKER_SUBEV_03SWAMP,		// mp2102	古代の洞窟への途中。沼地を超える
	MARKER_EV_M07S001,			// mp1201	村から出るとワープメニューを開く

	//障害物用
	MARKER_REMOVE_START = 900,

	REMOVE_OBJ_1110,				// mp1110障害物：名も無き海岸		
	REMOVE_OBJ_1110CE,				// mp1110障害物：名も無き海岸		　協力イベントマーカー用
	REMOVE_OBJ_1111,				// mp1111障害物：名も無き海岸		
	REMOVE_OBJ_1111CE,				// mp1111障害物：名も無き海岸		　協力イベントマーカー用
	REMOVE_OBJ_2101,				// mp2101障害物：名も無き海岸		
	REMOVE_OBJ_2101CE,				// mp2101障害物：名も無き海岸		　協力イベントマーカー用
	REMOVE_OBJ_1120,				// mp1120障害物：大河流域			
	REMOVE_OBJ_1120CE,				// mp1120障害物：大河流域			　協力イベントマーカー用
	REMOVE_OBJ_2105,				// mp2105障害物：濃霧の森			
	REMOVE_OBJ_2105CE,				// mp2105障害物：濃霧の森			　協力イベントマーカー用
	REMOVE_OBJ_1131,				// mp1131障害物：名も無き海岸		
	REMOVE_OBJ_1131CE,				// mp1131障害物：名も無き海岸		　協力イベントマーカー用
	REMOVE_OBJ_1117,				// mp1117障害物：遠鳴り浜			
	REMOVE_OBJ_1117CE,				// mp1117障害物：遠鳴り浜			　協力イベントマーカー用
	REMOVE_OBJ_1107,				// mp1107障害物：吊り橋				
	REMOVE_OBJ_1107CE,				// mp1107障害物：吊り橋				　協力イベントマーカー用
	REMOVE_OBJ_1109,				// mp1109障害物：霞の丘陵			
	REMOVE_OBJ_1109CE,				// mp1109障害物：霞の丘陵			　協力イベントマーカー用
	REMOVE_OBJ_1116,				// mp1116障害物：希望峰				
	REMOVE_OBJ_1116CE,				// mp1116障害物：希望峰				　協力イベントマーカー用
	REMOVE_OBJ_6102,				// mp6102障害物：太古の大平原		
	REMOVE_OBJ_6102CE,				// mp6102障害物：太古の大平原		　協力イベントマーカー用
	REMOVE_OBJ_1132,				// mp1132障害物：碧の珊瑚礁			
	REMOVE_OBJ_1132CE,				// mp1132障害物：碧の珊瑚礁			　協力イベントマーカー用
	REMOVE_OBJ_4110,				// mp4110障害物：始生代の大穴		
	REMOVE_OBJ_4110CE,				// mp4110障害物：始生代の大穴		　協力イベントマーカー用
	REMOVE_OBJ_6107,				// mp6107障害物：湿原地帯			
	REMOVE_OBJ_6107CE,				// mp6107障害物：湿原地帯			　協力イベントマーカー用
	REMOVE_OBJ_6362,				// mp6362障害物：エタニア市街		
	REMOVE_OBJ_6362CE,				// mp6362障害物：エタニア市街		　協力イベントマーカー用
	REMOVE_OBJ_2104,				// mp2104障害物：濃霧の森			
	REMOVE_OBJ_2104CE,				// mp2104障害物：濃霧の森			　協力イベントマーカー用

	REMOVE_OBJ_1111_MAIN,			// mp1111障害物：名も無き海岸		メイン変化後
	REMOVE_OBJ_2101_MAIN,			// mp2101障害物：名も無き海岸		メイン変化後

	//漂流者用
	MARKER_PERSON_START = 950,

	MARKER_PERSON_NIA,			// 漂流者シスター・ニア
	MARKER_PERSON_MIRALDA,		// 漂流者ミラルダ
	MARKER_PERSON_REJA,			// 漂流者レーヤ
	MARKER_PERSON_AUSTEN,		// 漂流者オースティン
	MARKER_PERSON_FRANZ,		// 漂流者フランツ
	MARKER_PERSON_GRISELDA,		// 漂流者グリゼルダ
	MARKER_PERSON_KASHU,		// 漂流者カシュー
	MARKER_PERSON_SILVIA,		// 漂流者シルビア
	MARKER_PERSON_ED,			// 漂流者エド

	// ロケーション用・発見後の本体
	MARKER_LOCATION_START = 1000,

	MARKER_LC_MP1112,			//	鳥鳴き岩						海鳥の巣が密集する岩
	MARKER_LC_MP1132,			//	碧岩							サンゴが固まった大岩
	MARKER_LC_MP1304,			//	七色の滝						既存地形
	MARKER_LC_MP1117,			//	メタボリカレス					極太のヤシ
	MARKER_LC_MP1135,			//	パラセコイア					巨大な一本杉
	MARKER_LC_MP2102,			//	粗暴な残骸跡			ボツ	食い散らかされた残骸
	MARKER_LC_MP1120,			//	漂着溜まり				ボツ	漂着物密集地帯
	MARKER_LC_MP3104,			//	煙突岩							蒸気が吹き出る鉱泉
	MARKER_LC_MP4303,			//	藍色の鉱脈						鉱脈シリーズ
	MARKER_LC_MP1119,			//	打ち上げられた遺骸				鯨の巨大骨格
	MARKER_LC_MP2306,			//	薬草の群生地					薬草が沢山
	MARKER_LC_MP1118,			//	大奇岩					ボツ	沢山の穴場がある大きな奇岩
	MARKER_LC_MP3107,			//	エアーズロックケルン			巨大な詰み石
	MARKER_LC_MP4335,			//	山小屋					ボツ	タナトスの小屋
	MARKER_LC_MP4107,			//	シュナベルク			ボツ	くちばしのような山頂		//必要なくなったので削除
	MARKER_LC_MP3102,			//	清風の丘						岩+花+清風
	MARKER_LC_MP7462,			//	瑠璃色の鉱脈					鉱脈シリーズ
	MARKER_LC_MP7471,			//	乳白色の鉱脈					鉱脈シリーズ
	MARKER_LC_MP1114,			//	蜂塚							蜂の巣が密集した樹のようなもの
	MARKER_LC_MP2105,			//	無残な残骸跡			ボツ	食い散らかされた残骸
	MARKER_LC_MP1116,			//	船の墓場						漂着物密集地帯
	MARKER_LC_MP7411,			//	隠し倉							海賊の隠し倉
	MARKER_LC_MP1122,			//	マングローダ					既存地形

	MARKER_LC_MP7102,			//	虹色の鉱脈						鉱脈シリーズ
	MARKER_LC_MP5102,			//	ユニカラミテス					巨大な古代ツクシ
	MARKER_LC_MP5401,			//	陽だまりのねぐら		ボツ	既存地形
	MARKER_LC_MP6116,			//	実りの丘						果実群生地
	MARKER_LC_MP6112,			//	老竜樹							巨大な竜樹
	MARKER_LC_MP6115,			//	古き聖者の墓碑			ボツ	墓碑シリーズ
	MARKER_LC_MP6365,			//	水没した双杯の像		ボツ	水中にある杯を持った像
	MARKER_LC_MP4110,			//	奇妙な残骸跡			ボツ	食い散らかされた残骸
	MARKER_LC_MP6114,			//	スカイガーデン					高層傘の果実園
	MARKER_LC_MP7481,			//	静寂の間						棺と財宝
	MARKER_LC_MP6109,			//	古き勇士達の墓碑				墓碑シリーズ

	// ロケーション用・発見イベント用
	MARKER_LOCATION_EV_START = 1050,

	MARKER_EV_LC_MP1112,		//	鳥鳴き岩						海鳥の巣が密集する岩
	MARKER_EV_LC_MP1132,		//	碧岩							サンゴが固まった大岩
	MARKER_EV_LC_MP1304,		//	七色の滝						既存地形
	MARKER_EV_LC_MP1117,		//	メタボリカレス					極太のヤシ
	MARKER_EV_LC_MP1135,		//	パラセコイア					巨大な一本杉
	MARKER_EV_LC_MP2102,		//	粗暴な残骸跡			ボツ	食い散らかされた残骸
	MARKER_EV_LC_MP1120,		//	漂着溜まり				ボツ	漂着物密集地帯
	MARKER_EV_LC_MP3104,		//	煙突岩							蒸気が吹き出る鉱泉
	MARKER_EV_LC_MP4303,		//	藍色の鉱脈						鉱脈シリーズ
	MARKER_EV_LC_MP1119,		//	打ち上げられた遺骸				鯨の巨大骨格
	MARKER_EV_LC_MP2306,		//	薬草の群生地					薬草が沢山
	MARKER_EV_LC_MP1118,		//	大奇岩					ボツ	沢山の穴場がある大きな奇岩
	MARKER_EV_LC_MP3107,		//	エアーズロックケルン			巨大な詰み石
	MARKER_EV_LC_MP4335,		//	山小屋					ボツ	タナトスの小屋
	MARKER_EV_LC_MP4107,		//	シュナベルク			ボツ	くちばしのような山頂		//必要なくなったので削除
	MARKER_EV_LC_MP3102,		//	清風の丘						岩+花+清風
	MARKER_EV_LC_MP7462,		//	瑠璃色の鉱脈					鉱脈シリーズ
	MARKER_EV_LC_MP7471,		//	乳白色の鉱脈					鉱脈シリーズ
	MARKER_EV_LC_MP1114,		//	蜂塚							蜂の巣が密集した樹のようなもの
	MARKER_EV_LC_MP2105,		//	無残な残骸跡			ボツ	食い散らかされた残骸
	MARKER_EV_LC_MP1116,		//	船の墓場						漂着物密集地帯
	MARKER_EV_LC_MP7411,		//	隠し倉							海賊の隠し倉
	MARKER_EV_LC_MP1122,		//	マングローダ					既存地形

	MARKER_EV_LC_MP7102,		//	虹色の鉱脈						鉱脈シリーズ
	MARKER_EV_LC_MP5102,		//	ユニカラミテス					巨大な古代ツクシ
	MARKER_EV_LC_MP5401,		//	陽だまりのねぐら		ボツ	既存地形
	MARKER_EV_LC_MP6116,		//	実りの丘						果実群生地
	MARKER_EV_LC_MP6112,		//	老竜樹							巨大な竜樹
	MARKER_EV_LC_MP6115,		//	古き聖者の墓碑			ボツ	墓碑シリーズ
	MARKER_EV_LC_MP6365,		//	水没した双杯の像		ボツ	水中にある杯を持った像
	MARKER_EV_LC_MP4110,		//	奇妙な残骸跡			ボツ	食い散らかされた残骸
	MARKER_EV_LC_MP6114,		//	スカイガーデン					高層傘の果実園
	MARKER_EV_LC_MP7481,		//	静寂の間						棺と財宝
	MARKER_EV_LC_MP6109,		//	古き勇士達の墓碑				墓碑シリーズ

	// 水晶石用
	MARKER_CHECKPOINT_START = 1100,
		// 野営地
	MARKER_CP_MP1201_01,
	MARKER_CP_MP1201_02,
	MARKER_CP_MP1105,
	MARKER_CP_MP1121,
	MARKER_CP_MP4102,
	MARKER_CP_MP2103,
	MARKER_CP_MP2106,
	MARKER_CP_MP3105,
	MARKER_CP_MP4111,
	MARKER_CP_MP6101,
	MARKER_CP_MP6110,
	MARKER_CP_MP6108,
		// 水晶石
	MARKER_CP_MP7303,
	MARKER_CP_MP1111,
	MARKER_CP_MP1113,
	MARKER_CP_MP1305,
	MARKER_CP_MP1307,
	MARKER_CP_MP7451,
	MARKER_CP_MP2102,
	MARKER_CP_MP7471,
	MARKER_CP_MP4305,
	MARKER_CP_MP4308,
	MARKER_CP_MP2303,
	MARKER_CP_MP2307,
	MARKER_CP_MP1114,
	MARKER_CP_MP3108,
	MARKER_CP_MP7401,
	MARKER_CP_MP4336,
	MARKER_CP_MP4340,
	MARKER_CP_MP4103,
	MARKER_CP_MP5102,
	MARKER_CP_MP7491,
	MARKER_CP_MP6201,
	MARKER_CP_MP6409_1,
	MARKER_CP_MP6409_2,
	MARKER_CP_MP6409_3,
	MARKER_CP_MP6409_4,
	MARKER_CP_MP6401,
	MARKER_CP_MP6324,
	MARKER_CP_MP6328,
	MARKER_CP_MP7411,
	MARKER_CP_MP0404,
	MARKER_CP_MP0408,
	MARKER_CP_MP6204,
	MARKER_CP_MP6365,
	MARKER_CP_MP6369,
	MARKER_CP_MP4110,
	MARKER_CP_MP6105,
	MARKER_CP_MP6421,
	MARKER_CP_MP7481,
	MARKER_CP_MP6341,
	MARKER_CP_MP6347,
	MARKER_CP_MP6350_1,
	MARKER_CP_MP6350_2,
	MARKER_CP_MP6411,
	MARKER_CP_MP6301,
	MARKER_CP_MP6305,
	MARKER_CP_MP6306,
	MARKER_CP_MP6307,
	MARKER_CP_MP6308,
	MARKER_CP_MP6310,

	MARKER_CP_MP4335,		// 追加分：ジャンダルム・タナトスの小屋
	MARKER_CP_MP1116,		// 追加分：望郷岬
	
	// 夜
	MARKER_CP_MP1309T2,		// 夜：珊瑚の森・野営地
	MARKER_CP_MP1301T2,		// 夜：珊瑚の森・入り口
	MARKER_CP_MP1305T2,		// 夜：珊瑚の森・中ボス前
	MARKER_CP_MP1307T2,		// 夜：珊瑚の森・ボス前
	MARKER_CP_MP4342T2,		// 夜：ジャンダルム・野営地
	MARKER_CP_MP4335T2,		// 夜：ジャンダルム・タナトス小屋
	MARKER_CP_MP4336T2,		// 夜：ジャンダルム・中ボス前
	MARKER_CP_MP4340T2,		// 夜：ジャンダルム・ボス前
	MARKER_CP_MP6101T2,		// 夜：パンガイア大平原・野営地

	// クノス用
	MARKER_HIVE_START = 1300,
	
	MARKER_HIVE_1108_01,	// クノス mp1108:密林前野営地（mp2103）への道
	MARKER_HIVE_1108_02,	// クノス mp1108:ロングフォーン海岸（mp1109）への道
	MARKER_HIVE_2301,		// クノス mp2301:袋小路塞ぐ
	MARKER_HIVE_2306,		// クノス mp2306:袋小路塞ぐ

	MARKER_HIVE_1114,		// クノス mp1114:ハチの巣丘への道	▼PS4追加
	MARKER_HIVE_7451,		// クノス mp7451:袋小路への道	▼PS4追加
	MARKER_HIVE_6201,		// クノス mp6201:袋小路への道	▼PS4追加
	MARKER_HIVE_6108,		// クノス mp6108:袋小路への道	▼PS4追加
	MARKER_HIVE_3103,		// クノス mp3103:袋小路への道	▼PS4追加

//▼以下セルセタ時代のもの。quest.csvで使われているようなので消せない
	CHECK_POINT_QS_101 = 1400,		//QS_101【ファバロスの乳搾り】
	CHECK_POINT_QS_102,				//QS_102【ハニーなポーション】
	CHECK_POINT_QS_103,				//QS_103【鉄鉱石の買い取り】
	CHECK_POINT_QS_104,				//QS_104【平原の巨大熊】
	CHECK_POINT_QS_105,				//QS_105【ちょうせんじょー！】★キー
	CHECK_POINT_QS_106,				//QS_106【急募、助っ人採掘員】★キー
	CHECK_POINT_QS_107,				//QS_107【酔いどれの介抱】
	CHECK_POINT_QS_108,				//QS_108【究極の消臭素材】
	CHECK_POINT_QS_109,				//QS_109【闇駆りの大蝙蝠】
	CHECK_POINT_QS_201,				//QS_201【剣術稽古志願】
	CHECK_POINT_QS_202,				//QS_202【みずみずしい食事】
	CHECK_POINT_QS_203,				//QS_203【彷徨える猿帝】
	CHECK_POINT_QS_204,				//QS_204【新たな細工素材】
	CHECK_POINT_QS_205,				//QS_205【家出鶏の捕獲】
	CHECK_POINT_QS_206,				//QS_206【腕白雛の捕獲】
	CHECK_POINT_QS_207,				//QS_207【新たな細工素材・其の二】
	CHECK_POINT_QS_208,				//QS_208【新たな細工素材・其の三】
	CHECK_POINT_QS_209,				//QS_209【湖水の暴君蛙】
	CHECK_POINT_QS_210,				//QS_210【放浪鶏の捕獲】
	CHECK_POINT_QS_301,				//QS_301【臨時店番の募集】
	CHECK_POINT_QS_302,				//QS_302【乾燥肌に潤いを】
	CHECK_POINT_QS_303,				//QS_303【群がる漆黒】
	CHECK_POINT_QS_304,				//QS_304【スーパーな武器のテスト】
	CHECK_POINT_QS_305,				//QS_305【ミラクルな武器のテスト】
	CHECK_POINT_QS_306,				//QS_306【ハイパーな武器のテスト】
	CHECK_POINT_QS_307,				//QS_307【群がる鮮紅】
	CHECK_POINT_QS_308,				//QS_308【えがおのプレゼント】
	CHECK_POINT_QS_309,				//QS_309【伝説の装備】
	CHECK_POINT_QS_401,				//QS_401【魔法具の開放】
	CHECK_POINT_QS_402,				//QS_402【銀の買い取り】
	CHECK_POINT_QS_403,				//QS_403【迷える守護獣】
	CHECK_POINT_QS_404,				//QS_404【埋まらないサイン帳】
	CHECK_POINT_QS_405,				//QS_405【冥界よりの呼び声】
	CHECK_POINT_QS_501,				//QS_501【とある秘薬の材料調達】
	CHECK_POINT_QS_502,				//QS_502【幸運の御守り】
	CHECK_POINT_QS_503,				//QS_503【闇咲きの妖花】
	CHECK_POINT_QS_504,				//QS_504【ラビットの捜索】
	CHECK_POINT_QS_505,				//QS_505【縛られた怨念】

	CHECK_POINT_QS_403_B,			//QS_403【迷える守護獣】その２（特殊ダンジョン用２重定義）

	// クエスト用
	MARKER_QS_220_LP1,		// 【QS220】見張り台の建設（バルバロス）「▼ＬＰ発見イベントＡ」が発生するポイント用
	MARKER_QS_220_LP2,		// 【QS220】見張り台の建設（バルバロス）「▼ＬＰ発見イベントＢ」が発生するポイント用
	MARKER_QS_220_LP3,		// 【QS220】見張り台の建設（バルバロス）「▼ＬＰ発見イベントＣ」が発生するポイント用
	MARKER_QS_223_LP,		// 【QS223】ヒュッパーの掃討　モンスターの居場所用
	MARKER_QS_230_LP1,		// 【QS230】海賊のお宝探し（ディナ）「▼ヒントイベント」が発生するポイント用
	MARKER_QS_230_LP2,		// 【QS230】海賊のお宝探し（ディナ）「▼お宝発見イベント」が発生するポイント用
	MARKER_QS_300_LP,		// 【QS300】祈願の木（サハド）「▼木を入手する」が発生するポイント用
	MARKER_QS_302_LP,		// 【QS302】アギアギラの討伐　モンスターの居場所用
	MARKER_QS_311_LP1,		// 【QS311】神に祈りを（シスター・ニア）「▼クエストイベント」が発生するポイント用
	MARKER_QS_311_LP2,		// 【QS311】神に祈りを（シスター・ニア）「▼クエスト達成イベント」が発生するポイント用
	MARKER_QS_400_LP,		// 【QS400】ししょーへの献上（リコッタ）スキル猿が居る場所用
	MARKER_QS_401_LP1,		// 【QS401】新入りはいずこ（レーヤ）「▼ピッカード捕獲イベント（浜辺）」ポイント用
	MARKER_QS_401_LP2,		// 【QS401】新入りはいずこ（レーヤ）「▼ピッカード捕獲イベント（集会所）」ポイント用
	MARKER_QS_401_LP3,		// 【QS401】新入りはいずこ（レーヤ）「▼ピッカード捕獲イベント（屋内Ａ）」ポイント用
	MARKER_QS_401_LP4,		// 【QS401】新入りはいずこ（レーヤ）「▼ピッカード捕獲イベント（屋内Ｂ）」ポイント用
	MARKER_QS_401_LP5,		// 【QS401】新入りはいずこ（レーヤ）「▼ピッカード捕獲イベント（屋内Ｃ）」ポイント用
	MARKER_QS_501_LP,		// 【QS501】卵の配達（ヒュンメル）巣穴の場所用
	MARKER_QS_503_LP,		// 【QS503】グラドングゥの掃討　モンスターの居場所用
	MARKER_QS_510_LP,		// 【QS510】故郷の花　紫鈴草の場所用
	MARKER_QS_521_LP,		// 【QS521】巨大な怨敵（タナトス）　巨大ピラルクの釣り場用
	MARKER_QS_530_LP,		// 【QS530】アルシャコウの討伐　モンスターの居場所用
	MARKER_QS_602_LP1,		// 【QS602】▽タナトスに聞く を見た場合に付く発酵樹液のポイント用
	MARKER_QS_602_LP2,		// 【QS602】▽タナトスに聞く を見た場合に付く発酵樹液のポイント用
	MARKER_QS_602_LP3,		// 【QS602】▽タナトスに聞く を見た場合に付く発酵樹液のポイント用

	// サブ・やり込み用
	MARKER_SPEEDRUN_SKILL1,		// やり込みスキル習得：日の出ヶ浜に居るマスターコング用
	MARKER_SPEEDRUN_SKILL2,		// やり込みスキル習得：奇岩浜に居るマスターコング用
	MARKER_SPEEDRUN_SKILL3,		// やり込みスキル習得：ジャンダルムに居るマスターコング用
	MARKER_SPEEDRUN_SKILL4,		// やり込みスキル習得：パンガイア大平原に居るマスターコング用
	MARKER_SPEEDRUN_SKILL5,		// やり込みスキル習得：見晴らし峠に居るマスターコング用

	// クエスト用追加分
	MARKER_QS_522_LP1,		// 【QS522】奮起の演奏会（オースティン）「詩人セパ」の居場所用（◆ラステルの位置が固定ではないので３人共に設定していません）
	MARKER_QS_522_LP2,		// 【QS522】奮起の演奏会（オースティン）「カジュラ」の居場所用（◆ラステルの位置が固定ではないので３人共に設定していません）
	MARKER_QS_522_LP3,		// 【QS522】奮起の演奏会（オースティン）「ラステル」の居場所用（◆ラステルの位置が固定ではないので３人共に設定していません）
	MARKER_QS_522_LP4,		// 【QS522】奮起の演奏会（オースティン）「▼楽譜入手イベント」の場所用
	MARKER_QS_610_LP1,		// 【QS610】親友の遺言（ダーナ）「▽ダーナの部屋の棚を調べる」の場所用
	MARKER_QS_610_LP2,		// 【QS610】親友の遺言（ダーナ）「▽中央書架の棚を調べる」の場所用１
	MARKER_QS_610_LP3,		// 【QS610】親友の遺言（ダーナ）「▽中央書架の棚を調べる」の場所用２
	MARKER_QS_610_LP4,		// 【QS610】親友の遺言（ダーナ）「▽中央書架の棚を調べる」の場所用３
	MARKER_QS_610_LP5,		// 【QS610】親友の遺言（ダーナ）「▽中央書架の棚を調べる」の場所用４
	MARKER_QS_610_LP6,		// 【QS610】親友の遺言（ダーナ）「▼中央書架の机を調べる」の場所用
	MARKER_QS_610_LP7,		// 【QS610】親友の遺言（ダーナ）「▼バハの塔の石碑を調べる」の場所用
	MARKER_QS_610_LP8,		// 【QS610】親友の遺言（ダーナ）「▼クエスト達成イベント」の場所用

	// サブ・やり込み用追加分
	MARKER_JOIN_SILVIA,		// 合流イベント（シルヴィア）：「▼合流イベント③(mp6102)」が発生する場所用
	MARKER_JOIN_REJA,		// 合流イベント（レーヤ）：「▼合流イベント②・ピッカードを発見」に登場するピッカードの居場所用
	MARKER_SUBEV_PAST01,	// 過去編Ⅰ：「【過去ギミック①：現代編への反映】」の場所用
	MARKER_SUBEV_PAST02_1,	// 過去編Ⅱ：「【過去クエスト②Ｂ：子供を見つける】」に登場するミーアの居場所用	◆ミーアが過去編Ⅱ以外では出現しなくなるためマップには設定していません
	MARKER_SUBEV_PAST02_2,	// 過去編Ⅱ：過去編で鍵を見つけてあげた後、現代編の倉庫の扉が開くので、現代の扉にマーカーを付ける。
	MARKER_SUBEV_PAST02_3,	// 過去編Ⅱ：mp6213の扉の場所用

	MARKER_SUBEV_PAST03_1,	// 過去編Ⅲ：出現したモンスターの居場所用
	MARKER_SUBEV_PAST03_2,	// 過去編Ⅲ：「【過去ギミック③：現代編への反映】」の場所用	◆ロケーションポイントのマーカーと被るので設定していません
	MARKER_SUBEV_PAST04,	// 過去編Ⅳ：現代編、大僧院の扉の場所用
	MARKER_SUBEV_PAST05_1,	// 過去編Ⅴ：「【過去クエスト⑤Ｂ：はぐれた娘を発見】」に登場するユカの居場所用	◆ユカが過去編Ⅴ以外では出現しなくなるためマップには設定していません
	MARKER_SUBEV_PAST05_2,	// 過去編Ⅴ：出現したモンスターの居場所用
	MARKER_SUBEV_PAST06_1,	// 過去編Ⅵ：「【サブイベント：東街区でダリオス執政官と会う】」の場所用
	MARKER_SUBEV_PAST06_2,	// 過去編Ⅵ：「【サブイベント：中央区を突破する】」の場所用
	MARKER_SUBEV_PAST06_3,	// 過去編Ⅵ：出現したモンスターの居場所用
	MARKER_SUBEV_PAST06_4,	// 過去編Ⅵ：「【過去ギミック⑥：隕石片を撤去する】」の場所用
	MARKER_SUBEV_PAST06_5,	// 過去編Ⅵ：「【過去ギミック⑥：現代編への反映】」の場所用
	MARKER_SUBEV_PAST06_6,	// 過去編Ⅵ：「【サブイベント：中央区を突破する】」の場所用②
	MARKER_SUBEV_CURRAN,	// サブイベント：「【カーラン卿を発見する】」に登場するカーラン卿の居場所用
	MARKER_SUBEV_BOAT,		// サブイベント：「【カーラン卿を発見する】」に登場する小舟の場所

	//PS4追加分（過去
	MARKER_SUBEV_PAST_D3_1,	// ダーナ編③：サブイベント：東街区に入った
	MARKER_SUBEV_PAST_D3_2,	// ダーナ編③：サブイベント：ラステル・衛士トラキルと会う
	MARKER_SUBEV_PAST_D3_3,	// ダーナ編③：サブイベント：ダリオス執行官と話す

	MARKER_SUBEV_PAST_D1_1,	// ダーナ編①：サブイベント：シェンナと話す
	MARKER_SUBEV_PAST_D1_2,	// ダーナ編①：サブイベント：セシルと話す
	MARKER_SUBEV_PAST_D1_3,	// ダーナ編①：サブイベント：ウルグナータと話す
	MARKER_SUBEV_PAST_D1_4,	// ダーナ編①：サブイベント：アトラのところへ戻る
	MARKER_SUBEV_PAST_D1_5,	// ダーナ編①：サブイベント：大峡谷最奥

	MARKER_SUBEV_PAST_1_Q1,	// ダーナ編①：サブイベント：精霊救出A
	MARKER_SUBEV_PAST_1_Q2,	// ダーナ編①：サブイベント：水路の修理

	MARKER_SUBEV_PAST02_4,	// 過去編Ⅱ：塔堂の水晶柱を見る(迷子クエスト)
	MARKER_SUBEV_PAST02_5,	// 過去編Ⅱ：子供を見つける(迷子クエスト)
	MARKER_SUBEV_PAST02_6,	// 過去編Ⅱ：塔堂を調べる(迷子クエスト)
	MARKER_SUBEV_PAST02_7,	// 過去編Ⅱ：地下聖堂を探索する(迷子クエスト)
	MARKER_SUBEV_PAST02_8,	// 過去編Ⅱ：地上へ戻る(迷子クエスト)

	MARKER_SUBEV_PAST_2_Q1,	// 過去編Ⅱ：クエスト：「水底に消えた鍵」

	MARKER_SUBEV_PAST_3_Q0,	// 過去編Ⅲ：巫女の施し（開封前）
	MARKER_SUBEV_PAST_3_Q1,	// 過去編Ⅲ：巫女の施し（開封後）
	MARKER_SUBEV_PAST_3_Q2,	// 過去編Ⅲ：精霊救出D(リンデル)

	MARKER_SUBEV_PAST_4_Q1,	// 過去編Ⅳ：古き祝福の大扉
	MARKER_SUBEV_PAST_4_Q2,	// 過去編Ⅳ：精霊救出E(プラウ)
	MARKER_SUBEV_PAST_4_Q3,	// 過去編Ⅳ：精霊救出F(エルド)

	MARKER_SUBEV_PAST_5_Q1,	// 過去編Ⅴ：はぐれた避難民
	MARKER_SUBEV_PAST_5_Q2,	// 過去編Ⅴ：はぐれた避難民２
	MARKER_SUBEV_PAST_5_Q3,	// 過去編Ⅴ：はぐれた避難民３
	MARKER_SUBEV_PAST_5_Q4,	// 過去編Ⅴ：竜種討伐②
	MARKER_SUBEV_PAST_5_Q5,	// 過去編Ⅴ：精霊救出H(オリヴィス)
	MARKER_SUBEV_PAST_5_Q6,	// 過去編Ⅴ：精霊救出I(クシュナ)

	MARKER_SUBEV_PAST_6_Q1,	// 過去編Ⅵ：竜種討伐③
	MARKER_SUBEV_PAST_6_Q2,	// 過去編Ⅵ：枯れゆく大地に恵みを
	MARKER_SUBEV_PAST_6_Q3,	// 過去編Ⅵ：精霊救出J(セレネ)
	MARKER_SUBEV_PAST_6_Q4,	// 過去編Ⅵ：精霊救出J(セレネ)	※バトル開始している

	MARKER_SUBEV_PAST_7_1,	// 過去編Ⅶ：オルガに報告する
	MARKER_SUBEV_PAST_7_2,	// 過去編Ⅶ：イオを発見する
	MARKER_SUBEV_PAST_7_3,	// 過去編Ⅶ：地下聖堂を調べてみる
	MARKER_SUBEV_PAST_7_4,	// 過去編Ⅶ：地下聖堂エレベーター
	MARKER_SUBEV_PAST_7_5,	// 過去編Ⅶ：地下聖堂最奥

	MARKER_SUBEV_PAST_7_Q0,	// 過去編Ⅶ：【過去クエスト⑦：理術士オドの遺体を見る】クエストの場所
	MARKER_SUBEV_PAST_7_Q1,	// 過去編Ⅶ：【過去クエスト⑦：理術士オドの遺体を見る】凍える花の場所
	MARKER_SUBEV_PAST_7_Q2,	// 過去編Ⅶ：【過去クエスト⑦：理術士オドの遺体を見る】アトラの元へ戻る

	//PS4追加分（現代
	MARKER_QS_232_0,		// 【QS232】闇夜の怪（テント常設）
	MARKER_QS_232_1,		// 【QS232】闇夜の怪（最終イベント）

	MARKER_QS_505_0,		// 【QS505】月光草の採取（テント常設）
	MARKER_QS_505_1,		// 【QS505】月光草の採取（採取ＬＰ）
	MARKER_QS_505_2,		// 【QS505】月光草の採取（採取ＬＰ）
	MARKER_QS_505_3,		// 【QS505】月光草の採取（採取ＬＰ）
	MARKER_QS_505_4,		// 【QS505】月光草の採取（採取ＬＰ）
	MARKER_QS_505_5,		// 【QS505】月光草の採取（採取ＬＰ）
	MARKER_QS_505_6,		// 【QS505】月光草の採取（タナトス小屋）

	MARKER_QS_613_0,		// 【QS613】卵の奪還（テント常設）
	MARKER_QS_613_1,		// 【QS613】卵の奪還（異形竜の巣）
	MARKER_QS_613_2,		// 【QS613】卵の奪還（野営地）
	MARKER_QS_613_3,		// 【QS613】卵の奪還（異形竜の巣）※ハズレ
	MARKER_QS_613_4,		// 【QS613】卵の奪還（異形竜の巣）※ハズレ

	MARKER_SUBEV_CRYPT,		// 現代編地下聖堂（入り口）
	MARKER_SUBEV_CRYPT2,	// 現代編地下聖堂（宝箱）

	//PS4追加分
	MARKER_SUBEV_PAST_B2,	// 地下聖堂B2開放
	MARKER_SUBEV_PAST_B3,	// 地下聖堂B3開放
	MARKER_SUBEV_PAST_B4,	// 地下聖堂B4開放
	MARKER_SUBEV_PAST_B5,	// 地下聖堂B5開放

	MARKER_SUBEV_PAST_B2M,	// 地下聖堂B2モノリス
	MARKER_SUBEV_PAST_B3M,	// 地下聖堂B3モノリス
	MARKER_SUBEV_PAST_B4M,	// 地下聖堂B4モノリス
	MARKER_SUBEV_PAST_B5M,	// 地下聖堂B5モノリス

	MARKER_SUBEV_PAST_D1_I,	// ダーナ編①：サブイベント：イオと話す


};
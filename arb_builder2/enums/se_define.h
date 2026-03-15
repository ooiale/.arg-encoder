//--------------------------------------------------------------------
//Ys8
///////////////////////////////////////////////////////////////////////////////
//エフェクトプリセット
///////////////////////////////////////////////////////////////////////////////
#define	SEFX_NONE		SEFX_PRESET_NONE			// エフェクト無し

#define	SEFX_DEFAULT	SEFX_PRESET_RESERVE02		// 通常用
#define	SEFX_CAVE_L		SEFX_PRESET_RESERVE03		// 洞窟 大
#define	SEFX_CAVE_M		SEFX_PRESET_RESERVE04		// 洞窟 中
#define	SEFX_CAVE_S		SEFX_PRESET_RESERVE05		// 洞窟 小
#define	SEFX_HILL		SEFX_PRESET_RESERVE06		// 丘
#define	SEFX_VALLEY		SEFX_PRESET_RESERVE07		// 谷
#define	SEFX_FOREST		SEFX_PRESET_RESERVE08		// 森
#define	SEFX_SCFI		SEFX_PRESET_RESERVE09		// フシギ系

// イベント用にリバーブ量を押さえたもの。(RoomVol) エフェクト設定自体は同じ
#define	SEFX_EV_DEFAULT		SEFX_PRESET_RESERVE10		// イベント用 通常用
#define	SEFX_EV_CAVE_L		SEFX_PRESET_RESERVE11		// イベント用 洞窟 大
#define	SEFX_EV_CAVE_M		SEFX_PRESET_RESERVE12		// イベント用 洞窟 中
#define	SEFX_EV_CAVE_S		SEFX_PRESET_RESERVE13		// イベント用 洞窟 小
#define	SEFX_EV_HILL		SEFX_PRESET_RESERVE14		// イベント用 丘
#define	SEFX_EV_VALLEY		SEFX_PRESET_RESERVE15		// イベント用 谷
#define	SEFX_EV_FOREST		SEFX_PRESET_RESERVE16		// イベント用 森
#define	SEFX_EV_SCFI		SEFX_PRESET_RESERVE17		// イベント用 フシギ系

///////////////////////////////////////////////////////////////////////////////
//システムSE
///////////////////////////////////////////////////////////////////////////////
// Ys8 使用ラベル範囲
//		SE_Y000～Y099 (100)
//		SE_Y780～Y799 (20)
#define	SE_NONE					SE_DUMMY		//ミュート

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//NOTE システム系はリロード対応のため、ラベルを固定してテーブル側で切り替える
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#define	SE_T1					SE_Y799		//test

//--------------------------------------------------------------
//プログラム内
//--------------------------------------------------------------
#define SE_DECIDE					SE_Y000	//	SE_000	// 決定音				
#define SE_CANCEL					SE_Y001	//XXX	SE_001	// キャンセル				
#define SE_MENU_CURSOR				SE_Y002	//	SE_002	// メニュー選択肢移動				
#define SE_MESSAGE					SE_Y003	//	SE_003	// メッセージ音				
#define SE_MESSAGE2					SE_Y004	//	SE_004	// メッセージ送り音				
#define SE_MENU_TABSELECT			SE_Y005	//	SE_002	// タブ切り替え音				
#define SE_BOOBOO					SE_Y006	//	SE_006	// ブッブー				
#define SE_SYSWARP					SE_Y425	//	地図ワープ

#define SE_CAMPMENU					SE_Y007	//	SE_051	// キャンプメニュー開いた				
#define SE_MENUEXIT					SE_Y008	//XXX	SE_001	// メニュー閉じた				

#define SE_CAMPMENU_ITEM			SE_Y009	//	SE_051	// NEW!アイテムメニューを直接開いた				

#define SE_CHANGE_MINIMAP			SE_Y010	//	SE_051	// ミニマップの拡大表示切替音				
#define SE_MINIMAP_SHOWCHANGE		SE_Y011	//	SE_000	// NEW!○：表示切り替え				
#define SE_MINIMAP_SETNORTHDIR		SE_Y012	//	SE_000	// NEW!△：北に向ける				
#define SE_MINIMAP_CHANGELAYER		SE_Y013	//	SE_000	// NEW!□：階層切り替え				

#define SE_TARGET_ON				SE_Y014	//	SE_700	// ターゲットオン				
#define SE_TARGET_OFF				SE_Y015	//	SE_001	// ターゲット解除				
#define SE_TARGET_CHANGE			SE_Y016	//	SE_700	// ターゲット変更				

#define SE_CHANGE_AUTOMSG_ON		SE_Y017	//	SE_000	// 自動メッセージ送りオン（イベント中　□を押した）				
#define SE_CHANGE_AUTOMSG_OFF		SE_Y018	//	SE_001	// 自動メッセージ送りオフ（イベント中　□を押した）

#define SE_EMOTION01				SE_Y019	//	SE_027	// エモーション音（！等のピッ）				
#define SE_EMOTION02				SE_Y020	//	SE_028	// エモーション音（？等のぽよん）				
#define SE_EMOTION03				SE_Y021	//	SE_029	// エモーション音（もやもや等のもにょもにょ）				
#define SE_EMOTION04				SE_Y096	//	エモーション音（キラキラ

#define SE_DRUMROLL					SE_Y022	//	SE_003	// ドラムロールの数字変更音				

//-----------------------------------------------------------------------------								
//操作・マップ								
//-----------------------------------------------------------------------------								
#define SE_MAP_OPEN					SE_Y025	//	SE_051	// 地図メニューをタッチで開く音				
#define SE_MAP_CHANGEWORLDMODE		SE_Y026	//	SE_000	// 地図メニューで広域地図へ移行する際の音				
#define SE_MAP_CHANGEAREAMODE		SE_Y027	//	SE_000	// 地図メニューで詳細地図へ移行する際の音				
#define SE_MAP_SELECTMARKER			SE_Y028	//	SE_002	// NEW!地図メニューでマーカーを選択した				
#define SE_MAP_SETGOAL				SE_Y029	//	SE_000	// NEW!目的地設定				
#define SE_MAP_RESETGOAL			SE_Y030	//	SE_001	// NEW!目的地解除				
#define SE_MAP_CHANGELAYER			SE_Y031	//	SE_000	// NEW!エリア地図：階層切り替え				
#define SE_MAP_CHANGEAREA			SE_Y032	//	SE_045	// NEW!広域地図：エリア表示が切り替わった				

#define SE_MAP_SETDESTINATION		SE_Y033	//	SE_016	// 目的地の設定				
#define SE_MAP_RESETDESTINATION		SE_Y034	//	SE_001	// 目的地の解除				
#define SE_MAP_SELECTPOINT			SE_Y035	//	SE_015	//TODO ycse_002				
#define SE_SETWINGMARKER			SE_Y036	//	SE_016	// ウィングマーカーセットした★NEW音				

//-----------------------------------------------------------------------------								
//ショップ系								
//-----------------------------------------------------------------------------								
#define SE_TRADE					SE_Y040	//	SE_012	// ys8ショップ：交換した（ディナ屋）
#define SE_SCRAP					SE_Y045	//	SE_014	// ys8ショップ：分解･引き取りした
#define SE_CREATE					SE_Y045	//	SE_014	// ys8ショップ：作成した（ｱｸｾｻﾘ･衣装･薬など）
#define SE_CREATE_WEAPON			SE_Y045	//	SE_014	// ys8ショップ：完成した（武器進化練成･拠点強化）
#define SE_COOKED					SE_Y045	//	SE_014	// ys8ショップ：料理できた
#define SE_KAJI						SE_Y420	//			// ys8ショップ：鍛冶演出
#define SE_KAJI_CREATE				SE_Y1008	//		// ys8ショップ：鍛冶演出：生成背景音
#define SE_KAJI_REINFORCE			SE_Y1009	//		// ys8ショップ：鍛冶演出：強化背景音
#define SE_COOKING					SE_Y099	//SE_Y396	//	SE_Y681		// ys8ショップ：料理演出
#define SE_EQUIP					SE_Y041	//	SE_013	// 装備音				

#define SE_BUY						SE_Y040	//	SE_012	// 購入音
#define SE_SELL						SE_Y042	//	SE_012	// 売却				
#define SE_ACREATE					SE_Y043	//	SE_014	// アクセサリ作成音				
#define SE_GOUSEI					SE_Y044	//	SE_014	// 武器・防具強化音				
#define SE_REFINE					SE_Y045	//	SE_014	// 精錬音				
#define SE_EXCHANGE					SE_Y046	//	SE_014	// 交換音				
#define SE_ENCHANT					SE_Y047	//	SE_014	// 魔法具強化音				
#define SE_COMPOUND					SE_Y048	//	SE_014	// 調合音				

#define SE_GET_GOLD					SE_Y049	//	SE_052	// クエストなどでお金をもらう				

//-----------------------------------------------------------------------------								
//ステータス系								
//-----------------------------------------------------------------------------								
#define SE_LEVELUP					SE_Y050	//	SE_005	// レベルアップ				
#define SE_HEAL						SE_Y051	//	SE_007	// ＨＰ回復音				
#define SYSSE_SYSHEAL				SE_Y052	//	SE_007	// ワープポイントでの回復ＳＥ				
#define SE_CURE						SE_Y053	//	SE_008	// 異常回復音				
#define SE_PARTY_CHANGE				SE_Y054	//	SE_009	// 操作キャラ変更				
#define SE_GET_COIN					SE_Y055	//	SE_010	// 金拾い				
#define SE_SKILLUP					SE_Y056	//	SE_011	// スキルアップ				
#define SE_SKILLLEARN				SE_Y057	//	SE_011	// スキル習得				
#define SE_PERSONAL_LOOK			SE_Y058	//	SE_027	//パーソナルアクションが表示された				

#define SE_HP_DANGER				SE_Y059	//	SE_010	// NEW!瀕死になったら定期的に鳴らす音				
#define SE_EXTRAPOWER_MAX			SE_Y060	//	SE_016	// EX満タンになった				
//#define SE_C008_HEAL				SE_Y061	//	SE_007	// リーザＨＰ回復音				

//状態異常								
#define SE_SYS_DARK					SE_Y070	//	SE_280	// 状態異常(暗闇)				
#define SE_SYS_BLOODLOSS			SE_Y071	//	SE_280	// 状態異常(失血)				
#define SE_SYS_HEAVY				SE_Y072	//	SE_280	// 状態異常(加重)				
#define SE_SYS_FREEZE				SE_Y073	//	SE_281	// 状態異常(氷結)				
//氷結解除時の割れる音 efx_sys.ite:100245:768
#define SE_SYS_FLAME				SE_Y074	//	SE_282	// 状態異常(やけど)				
#define SE_SYS_PARALYZE				SE_Y075	//	SE_283	// 状態異常(麻痺)				
#define SE_SYS_POISON				SE_Y076	//	SE_284	// 状態異常(毒)				
//	#define SE_SYS_WEAKDMG_SLASH	SE_Y077	//SE_281	// 状態異常：弱点ダメージによる破壊＿斬			<-- balance.csvに移った		
//	#define SE_SYS_WEAKDMG_SHOOT	SE_Y077	//SE_281	// 状態異常：弱点ダメージによる破壊＿射（突）   <-- balance.csvに移った					
//	#define SE_SYS_WEAKDMG_CRASH	SE_Y077	//SE_281	// 状態異常：弱点ダメージによる破壊＿打			<-- balance.csvに移った		

//-----------------------------------------------------------------------------								
//マップ・フィールド系								
//-----------------------------------------------------------------------------								
#define SYSSE_SWIM					SE_Y080	//	SE_030	// 泳ぐ（仮）；つかわれていない				
#define SYSSE_SWIMING				SE_Y081	//	SE_031	// ycse_030 泳ぐ加速泳ぐの軽く				
#define SYSSE_SWIMING2				SE_Y082	//	SE_031	// ycse_030 水面からもぐるとき				
#define SYSSE_SPLASHDOWN			SE_Y083	//	new	//prog 着水				

#define SE_OPEN_THE_BOX01			SE_Y084	//	SE_032	// 宝箱開閉音（木箱）				
#define SE_OPEN_THE_BOX02			SE_Y085	//	SE_033	// 宝箱開閉音（鉄箱）				
#define SE_OPEN_THE_BOX03			SE_Y086	//	SE_034	// 宝箱開閉音（装飾箱）				
#define SE_OPEN_THE_BOX04			SE_Y540				// 漂流物 袋
#define SE_LOCK_THE_BOX				SE_Y087	//	SE_035	// 鍵がかかっている(宝箱)				
#define SE_GET_THE_BOX01			SE_Y088	//	SE_036	// 木箱に入っていた物ゲット（貧相）	ITEMMSG_SE_NORMAL
#define SE_GET_THE_BOX02			SE_Y089	//	SE_821	// いい物ゲット（普通）				ITEMMSG_SE_BETTER
#define SE_GET_THE_BOX03			SE_Y090	//	SE_037	// いい物ゲット（例のジングル）		ITEMMSG_SE_JINGLE			
#define SE_UNLOCK					SE_Y091	//	SE_039	// カギあけ				

#define SE_LOCK_THE_DOOR			SE_Y092	//	SE_035	// 鍵がかかっている(扉)				
#define SYSSE_ITEM_MAT				SE_Y093	//	ファイルなかった→SE_042	// ycse_072	アイテム・つるはし★NEW音			
		//							
#define SE_RU_STEP					SE_Y094	//	ファイルなかった→SE_704	// ycse_643 ルーステップ音				
#define SE_RU_WALK					SE_Y095	//	ファイルなかった→SE_704	// ycse_643 ルー足音				

//-----------------------------------------------------------------------------								
//戦闘系								
//-----------------------------------------------------------------------------								
#define SE_CHARGE_FINISH			SE_Y850	//	SE_019	// チャージ終了				
#define SE_HIT						SE_Y851	//	SE_020	// ヒット音				
#define SE_HITCRITICAL				SE_Y852	//	SE_021	// クリティカルヒット音				
#define SE_GUARD					SE_Y853	//	SE_022	// ガード音				
#define SE_STEP						SE_Y854	//	SE_023	// ステップ音				

#define SE_DISABLESKILL				SE_Y855	//	SE_024	// スキル使えんかった				
#define SYSSE_SKILL_START			SE_Y856	//	SE_025	// スキル発動				
#define SYSSE_BOM_START				SE_Y857	//	SE_026	// EX発動				
#define SYSSE_FLASHGUARD			SE_Y858	//	SE_025	// フラッシュガード成功				
#define SYSSE_DOWN_STEP				SE_Y859	//	SE_023	// ダウン回避				

#define SE_FLASHMOVE				SE_Y860	//	SE_058	// ycse_025	フラッシュムーブ成功			

//-----------------------------------------------------------------------------								
//追加								
//-----------------------------------------------------------------------------								
#define SE_HOTEL_JINGLE			SE_Y870	//			// 宿ジングル	★NEW音			
#define SE_ITEM_WING			SE_Y871	//	SE_044	// ウィング(ワープ？)※？				
#define SE_PAGE					SE_Y872	//	SE_045	// ページめくり				
#define SE_TUTORIAL				SE_Y873	//	SE_046	// チュートリアル★NEW音				
#define SE_PARTYIN				SE_Y874	//	SE_047	// 仲間に加わる				
#define SE_QUEST_END			SE_Y875	//	SE_048	// クエスト達成				
#define SE_QUEST_START			SE_Y876	//	SE_049	// クエスト開始した				
#define SE_QUEST_FALSE			SE_Y877	//	SE_050	// クエスト失敗★NEW音				
#define SE_QUEST_ADD			SE_Y878	//	SE_046	// クエスト追加★チュートリアル音と一緒				

//	追加ラベル							
//	QUEST_{ADD,END}と共用になっていたラベルを分離							
#define SE_QUEST_ITEM			SE_Y879	//	SE_820	// クエスト中のイベント用 クエストアイテムゲットなど				
#define SE_QUEST_CLEAR			SE_Y880	//	SE_821	// クエスト中のイベント用 条件クリアなど				
#define SE_DIARY_ADD			SE_Y881	//	SE_822	// 冒険日誌 追加				

//#define SE_SOULLEVELUP			SE_055	// ソウルレベルアップ				
#define SE_CG_FORMATION			SE_Y882	//	SE_056	// メニュー画面隊列切り替え				

//汎用イベント系
#define SE_QUIST			SE_Y239	// ＹＳ８・装備しまう(一般)
#define SE_QUIST_C003		SE_Y215	// ＹＳ８・装備しまう(銃・ヒュンメル)
#define SE_QUIST_C002		SE_Y239	// ＹＳ８・装備しまう(ラクシャ)
#define SE_QUIST_C004		SE_Y239	// 装備しまう

//旧ラベル
//;;;	#define SE_BREAK_HIT			SE_544			// 岩ヒット時
//;;;	//#define SE_BREAK_STONE			SE_501			// 岩破壊
//;;;	#define SE_BREAK_SANGO_HIT		SE_546			// さんごヒット時
//;;;	#define SE_BREAK_SANGO			SE_546			// さんご破壊
//;;;	#define SE_BREAK_011_HIT		SE_574			// 雪だまヒット時
//;;;	#define SE_BREAK_011			SE_574			// 雪だま破壊
//;;;	#define SE_BREAK_041			SE_521			// つぼ破壊//

#define SE_BREAK_WALL			SE_NONE		//scp,mtd には無かった	//SE_501		// 壁壊れ		mp3309で鳴っている模様？

#define SE_INTERCEPT_GONG		SE_Y545		//SE_389		// 迎撃戦、スタン銅鑼叩いた
//#define SE_INTERCEPT_CATAPULT	SE_Y546		// 迎撃戦、投石器岩落下音

// アイテム
#define SE_ITEM_SEIREI				SE_Y062	//SE_553		//精霊の首飾り※未作成
#define SE_ITEM_KOBITO				SE_Y063	//SE_554		//小人の腕輪
#define SE_ITEM_SEIMA				SE_Y064	//SE_555		//聖魔の首輪
#define SE_ITEM_SHIPPUU1			SE_Y065	//SE_556		//疾風の靴
#define SE_ITEM_SHIPPUU2			SE_Y066	//SE_557		//疾風の靴
#define SE_ITEM_JUUOU				SE_Y067	//SE_558		//獣王の小手
#define SE_ITEM_SERUSETA			SE_Y062	//SE_553		//セルセタの秘薬
// ポーション系						SE_HEAL
// トローチ系・状態回復薬系			SE_CURE			//ステータスアップはスキルと同じ音で分けたほうがよいかも
#define SE_ITEM_MAP					SE_PAGE		// マップページめくり

//-----------------------------------------------------------------------------								
// 釣り								
//-----------------------------------------------------------------------------								
#define SE_FISHING_ENTER		SE_Y780	//o	SE_051	// 釣りモードへ移行				
#define SE_FISHING_ERR_MES		SE_Y781	//x	SE_006	// 釣りでエラーメッセージを表示				
#define SE_FISHING_CANCEL		SE_Y782	//o	SE_001	// 釣りキャンセル				
#define SE_FISHING_CAST_OK		SE_Y000	//o	SE_000	// 釣りでキャスト地点を選んだ (有効地点)				
#define SE_FISHING_CAST_NG		SE_Y784	//x	SE_006	// 釣りでキャスト地点を選んだ (無効地点)				
#define SE_FISHING_CAST_MISS	SE_Y785	//	SE_050	// J 釣りでキャストしたけど着水失敗 (陸上に落下したとか)				
#define SE_FISHING_HOOK_BOUND	SE_Y786	//o	SE_700	// 釣りでキャストしたときに釣り針＆餌がマップにあたってバウンド				
#define SE_FISHING_HOOK_LAND	SE_Y787	//o	SE_701	// 釣りでキャストしたときに釣り針＆餌が着陸して停止				
#define SE_FISHING_HOOK_INWATER	SE_Y788	//o	SE_140	// 釣りでキャストしたときに釣り針＆餌が着水して停止				
#define SE_FISHING_FOUNDSPOT	SE_Y789	//	SE_047	// J 釣りで新しい穴場を発見				
#define SE_FISHING_INSPOT		SE_Y790	//	SE_047	// J 釣りで釣り針が発見済み穴場に入った				
#define SE_FISHING_MISS			SE_Y791	//	SE_050	// J 釣り失敗 (魚が釣れなかった、逃げられた等)				
#define SE_FISHING_STRIKE_WATER	SE_Y792	//o	SE_139	// 釣りで魚が食いついて釣り針＆餌が引っ張られてチャポチャポ				
#define SE_FISHING_HIT			SE_Y793	//	SE_049	// J 釣りで魚がヒットした				
#define SE_FISHING_FISH_SPLASH	SE_Y794	//o	SE_321	// 釣りで大物魚が抵抗してバシャバシャ				
#define SE_FISHING_LANDING		SE_Y795	//o	SE_306	// 釣りで魚を釣り上げる（水中から引き上げるときの水音）				
#define SE_FISHING_RANKUP		SE_Y796	//	SE_005	// J 釣りでランクアップした				

//未割当
#define	SE_FISHING_SAO			SE_Y797		//o 竿振る 
#define	SE_FISHING_RESULT_1		SE_Y799		//J リザルト 魚釣った後のリザルト画面表示時 (魚グラフィックが出たときのタイミング
#define	SE_FISHING_RESULT_2		SE_Y798		//o リザルト 魚の大きさ表示音（ピピピ・・・）
#define	SE_FISHING_RESULT_3		SE_Y098		//リザルト 魚の大きさのカウント後にでるランク？表示のタイミング (Good とかの表示のとき
#define	SE_FISHING_RESULT_4		SE_Y097		//リザルト アイテム入手 ※複数個出る場合は1回目に表示のときのみ再生

//#define SYSSE_PUZZLE_SET			SE_017	// パズルはめた★NEW音未確認				
//#define SYSSE_PUZZLE_CLEAR			SE_018	// パズルクリア★NEW音未確認				
//#define SYSSE_PUZZLE_CLOSE			SE_001	// パズル画面からユーザーが任意で抜けた				
//#define SYSSE_PUZZLE3_LIGHT			SE_700	// パズル３（岩扉）くぼみをタッチした				
//#define SYSSE_PUZZLE3_CLEAR			SE_018	// パズル３（岩扉）クリア				
//#define SYSSE_PUZZLE4_SET1			SE_701	// パズル４（ゲロコ）石を置く				
//#define SYSSE_PUZZLE4_SET2			SE_702	// パズル４（ゲロコ）柱が沈む				
//#define SYSSE_PUZZLE4_CLEAR			SE_018	// パズル４（ゲロコ）クリア				
//#define SYSSE_PUZZLE5_45DEGREE			SE_703	// ycse_519	パズル５（ラスダンギミック）４５度単位でカチカチ音SE_035			

///////////////////////////////////////////////////////////////////////////////
// 足音（内容未確定）
///////////////////////////////////////////////////////////////////////////////
// Ys8 使用ラベル範囲
//		SE_Y100～Y149 (50)
//		SE_Y800～Y819 (20)
#define SE_FOOTSE_NORMAL_1		SE_Y100	// 足音 土 デフォルト
#define SE_FOOTSE_NORMAL_2		SE_Y101	// 足音 土 デフォルト
#define SE_FOOTSE_NORMAL_3		SE_Y102	// 足音 土 デフォルト
#define SE_FOOTSE_NORMAL_4		SE_Y103	// 足音 土 デフォルト

#define SE_FOOTSE_BUSH_1		SE_Y104	// 足音 草地
#define SE_FOOTSE_BUSH_2		SE_Y105	// 足音 草地
#define SE_FOOTSE_BUSH_3		SE_Y106	// 足音 草地
#define SE_FOOTSE_BUSH_4		SE_Y107	// 足音 草地

#define SE_FOOTSE_HARD_1		SE_Y108	// 足音 硬い床
#define SE_FOOTSE_HARD_2		SE_Y109	// 足音 硬い床
#define SE_FOOTSE_HARD_3		SE_Y110	// 足音 硬い床
#define SE_FOOTSE_HARD_4		SE_Y111	// 足音 硬い床

#define SE_FOOTSE_CARPET_1		SE_Y112	// 足音 じゅうたん
#define SE_FOOTSE_CARPET_2		SE_Y113	// 足音 じゅうたん
#define SE_FOOTSE_CARPET_3		SE_Y114	// 足音 じゅうたん
#define SE_FOOTSE_CARPET_4		SE_Y115	// 足音 じゅうたん

#define SE_FOOTSE_LEAF_1		SE_Y116	// 足音 枯葉・枯枝
#define SE_FOOTSE_LEAF_2		SE_Y117	// 足音 枯葉・枯枝
#define SE_FOOTSE_LEAF_3		SE_Y118	// 足音 枯葉・枯枝
#define SE_FOOTSE_LEAF_4		SE_Y119	// 足音 枯葉・枯枝

#define SE_FOOTSE_WOOD_1		SE_Y120	// 足音 古い木の床
#define SE_FOOTSE_WOOD_2		SE_Y121	// 足音 古い木の床
#define SE_FOOTSE_WOOD_3		SE_Y122	// 足音 古い木の床
#define SE_FOOTSE_WOOD_4		SE_Y123	// 足音 古い木の床

#define SE_FOOTSE_SAND_1		SE_Y124	// 足音 砂地
#define SE_FOOTSE_SAND_2		SE_Y125	// 足音 砂地
#define SE_FOOTSE_SAND_3		SE_Y126	// 足音 砂地
#define SE_FOOTSE_SAND_4		SE_Y127	// 足音 砂地

#define SE_FOOTSE_PUDDLE_1		SE_Y128	// 足音 水たまり
#define SE_FOOTSE_PUDDLE_2		SE_Y129	// 足音 水たまり
#define SE_FOOTSE_PUDDLE_3		SE_Y130	// 足音 水たまり
#define SE_FOOTSE_PUDDLE_4		SE_Y131	// 足音 水たまり

#define SE_FOOTSE_METAL_1		SE_Y132	// 足音 金属
#define SE_FOOTSE_METAL_2		SE_Y133	// 足音 金属
#define SE_FOOTSE_METAL_3		SE_Y134	// 足音 金属
#define SE_FOOTSE_METAL_4		SE_Y135	// 足音 金属

#define SE_FOOTSE_LAVA_1		SE_Y136	// 足音 溶岩 TODO 未変更
#define SE_FOOTSE_LAVA_2		SE_Y137	// 足音 溶岩 TODO 未変更
#define SE_FOOTSE_LAVA_3		SE_Y138	// 足音 溶岩 TODO 未変更
#define SE_FOOTSE_LAVA_4		SE_Y139	// 足音 溶岩 TODO 未変更

#define SE_FOOTSE_SNOW_1		SE_Y140	// 足音 雪★NEW音
#define SE_FOOTSE_SNOW_2		SE_Y141	// 足音 雪★NEW音
#define SE_FOOTSE_SNOW_3		SE_Y142	// 足音 雪★NEW音
#define SE_FOOTSE_SNOW_4		SE_Y143	// 足音 雪★NEW音

#define SE_FOOTSE_ICE_1			SE_Y144	// 足音 氷
#define SE_FOOTSE_ICE_2			SE_Y145	// 足音 氷
#define SE_FOOTSE_ICE_3			SE_Y146	// 足音 氷
#define SE_FOOTSE_ICE_4			SE_Y147	// 足音 氷

#define SE_FOOTSE_BOG_1			SE_Y800	// 足音 沼、湿地
#define SE_FOOTSE_BOG_2			SE_Y801	// 足音 沼、湿地
#define SE_FOOTSE_BOG_3			SE_Y802	// 足音 沼、湿地
#define SE_FOOTSE_BOG_4			SE_Y803	// 足音 沼、湿地

#define SE_FOOTSE_MAGIC_1			SE_Y804	// 足音 ラスダン系 魔法床
#define SE_FOOTSE_MAGIC_2			SE_Y805	// 足音 ラスダン系 魔法床
#define SE_FOOTSE_MAGIC_3			SE_Y806	// 足音 ラスダン系 魔法床
#define SE_FOOTSE_MAGIC_4			SE_Y807	// 足音 ラスダン系 魔法床

#define SE_FOOTSE_SPORE_1			SE_Y808	// 足音 胞子
#define SE_FOOTSE_SPORE_2			SE_Y809	// 足音 胞子
#define SE_FOOTSE_SPORE_3			SE_Y810	// 足音 胞子
#define SE_FOOTSE_SPORE_4			SE_Y811	// 足音 胞子

#define SE_FOOTSE_STRAW_1			SE_Y812	// 足音 わら、干し草
#define SE_FOOTSE_STRAW_2			SE_Y813	// 足音 わら、干し草
#define SE_FOOTSE_STRAW_3			SE_Y814	// 足音 わら、干し草
#define SE_FOOTSE_STRAW_4			SE_Y815	// 足音 わら、干し草

#define SE_FOOTSE_BRIGHTMOSS_1		SE_Y816	// 足音 光る苔 →胞子と同じ
#define SE_FOOTSE_BRIGHTMOSS_2		SE_Y817	// 足音 光る苔 →胞子と同じ
#define SE_FOOTSE_BRIGHTMOSS_3		SE_Y818	// 足音 光る苔 →胞子と同じ
#define SE_FOOTSE_BRIGHTMOSS_4		SE_Y819	// 足音 光る苔 →胞子と同じ

///////////////////////////////////////////////////////////////////////////////
//プレイヤー
///////////////////////////////////////////////////////////////////////////////
// Ys8 使用ラベル範囲
//		SE_Y600～Y629 (30)
//		SE_Y650～Y779 (130)

#define SE_ATTACK_START			SE_Y600	//	SE_078	//ＹＳ８・アタックスタート
#define SE_S_ATTACK				SE_Y601	//	SE_095	//ＹＳ８・衝撃派
#define SE_SLIDE_S				SE_Y602	//	SE_708	// すべる
#define SE_JUMP					SE_Y603	//	SE_900	//ＹＳ８・ジャンプ
#define SE_JUMP_N				SE_Y625	//	SE_900	//ＹＳ８・ジャンプ 沼
#define SE_JUMP_2				SE_Y624	//	SE_900	//ＹＳ８・ジャンプ 2段
#define SE_JUMP_D				SE_Y624	//	SE_900	//ＹＳ８・ジャンプ ダッシュ

#define SE_EX_CUTIN				SE_Y604	//	SE_089	//ＥＸカットイン
#define SE_BOM_1				SE_Y605	//	SE_275	//ＥＸ前半にぎやかし（仮）
#define SE_BOM_2				SE_Y606	//	SE_273	//ＥＸ後半にぎやかし（仮）

#define SE_STAB_LO				SE_Y608	// 下 差す
#define SE_PC_SPLASH			SE_Y681	// 水系
#define SE_PC_IMPACT_1			SE_Y609	// 衝撃 1
#define SE_PC_IMPACT_2			SE_Y682	// 衝撃 2
#define SE_PC_JUMP_UP			SE_Y610	// ジャンプ系 UP
#define SE_PC_JUMP_UP_2			SE_Y611	// ジャンプ系 UP fast
#define SE_PC_JUMP_DOWN			SE_Y612	// ジャンプ系 DOWN
#define SE_PC_JUMP_DOWN_2		SE_Y613	// ジャンプ系 DOWN fast
#define SE_PC_CHARGE_1		SE_Y684	// ため
#define SE_PC_CHARGE_2		SE_Y618	// ため 2 st
#define SE_PC_CHARGE_3		SE_Y621	// ため 3
#define SE_PC_CHARGE_4		SE_Y622	// ため 4
#define SE_PC_CHARGE_5		SE_Y623	// ため 5
#define SE_PC_STEP_1		SE_Y686	// giant step x4
#define SE_PC_STEP_2		SE_Y687	// giant step x1
#define SE_PC_STEP_3		SE_Y620	// norm step x1

#define SE_PC_EXPL_1		SE_Y615	// w/delay
#define SE_PC_EXPL_2		SE_Y616	// w/flanger
#define SE_PC_EXPL_3		SE_Y617	// norm short
#define SE_PC_EXPL_4		SE_Y614	// stereo

#define	SE_PC_RUMBLE_1		SE_Y743	// lo
#define	SE_PC_RUMBLE_2		SE_Y744	// hi

#define SE_CLIMB_JUMP		SE_JUMP		//ツタ ジャンプ (共通

//━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
//■アドル　C000
//━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

#define SE_C000_JUMP			SE_JUMP			//ＹＳ８・ジャンプ
#define SE_C000_JUMP_NUMA		SE_JUMP_N		//ＹＳ８・沼ジャンプ
#define SE_C000_JUMP_2ND		SE_JUMP_2		//ＹＳ８・2段ジャンプ
#define SE_C000_JUMP_DASH		SE_JUMP_D		//ＹＳ８・ダッシュジャンプ

#define SE_C000_ATK1_1			SE_Y650		//SE_060			// ＹＳ８・通常攻撃①
#define SE_C000_ATK2_1			SE_Y651		//SE_060			// ＹＳ８・通常攻撃②
#define SE_C000_ATK3_1			SE_Y652		//SE_061			// ＹＳ８・通常攻撃③
#define SE_C000_ATK4_1			SE_Y653		//SE_062			// ＹＳ８・通常攻撃④
#define SE_C000_TAME1_1A		SE_Y651			// ＹＳ８・溜め攻撃Ａ
#define SE_C000_TAME1_1B		SE_ATTACK_START	// ＹＳ８・溜め攻撃Ｂ

#define SE_C000_AIRLOW_ATK		SE_STAB_LO		//SE_079			// ＹＳ８・下突き：跳躍
#define SE_C000_AIRLOW_ATK2A	SE_PC_IMPACT_1	//SE_S_ATTACK		// ＹＳ８・下突き：衝撃Ａ
#define SE_C000_AIRLOW_ATK2B	SE_ATTACK_START		//SE_213			// ＹＳ８・下突き：衝撃Ｂ
#define SE_C000_AIRLOW_DOWN		SE_PC_JUMP_DOWN_2		//下降
#define SE_C000_AIRUP_ATK1		SE_Y654		//SE_080			// ＹＳ８・切り上げ
#define SE_C000_AIRUP_ATK2		SE_Y654		//SE_080			// ＹＳ８・切り上げ
#define SE_C000_AIRUP_ATK3		SE_Y655		//SE_080			// ＹＳ８・切り上げ
#define SE_C000_DISARM			SE_QUIST		// ＹＳ８・武器しまう
//#define SE_C000_SPSW_1			SE_Y656		// スキル共通 斬り

#define SE_C000_DASH_L			SE_ITEM_SHIPPUU1	// ＹＳ８・ダッシュ
#define SE_C000_DASH_E			SE_ITEM_SHIPPUU2	// ＹＳ８・ダッシュブレーキ

//■スキル
//ＹＳ８・ソニックスライド
//ＹＳ８・飛び道具
//ＹＳ８・フォースエッジ

//---------------------------------------------------------------------

#define SE_C000_STEP2			SE_ITEM_JUUOU	// 獣王の小手
#define SE_C000_SMALL			SE_ITEM_KOBITO	// 小さくなる
#define SE_C000_BIG				SE_ITEM_KOBITO	// 大きくなる

//ys8
#define SE_C000_SPATK_C1_1A		SE_ATTACK_START			// スキル・ダッシュ斬りＡ
#define SE_C000_SPATK_C1_1B		SE_Y652		//SE_079	// スキル・ダッシュ斬りＢ
#define SE_C000_SPATK_C1_1C		SE_STAB_LO	//SE_202	// スキル・ダッシュ斬りＣ +Lv3

#define SE_C000_SPATK_C2_1A		SE_Y652	//SE_061			// スキル・ソニックブームＡ
#define SE_C000_SPATK_C2_1B		SE_Y657			// スキル・ソニックブームB
#define SE_C000_SPATK_C2_1C		SE_STAB_LO			// スキル・ソニックブームC +Lv3

#define SE_C000_SPATK_C3_1A		SE_STAB_LO		//SE_081			// スキル・切り上げＡ
#define SE_C000_SPATK_C3_1B		SE_Y661		//SE_080			// スキル・切り上げＢ
#define SE_C000_SPATK_C3_1C		SE_PC_JUMP_UP		//SE_083			// スキル・切り上げＣ +Lv3

#define SE_C000_SPATK_C4_1		SE_STAB_LO		//SE_Y658			// ソードインパクト
#define SE_C000_SPATK_C4_2		SE_Y665	//SE_Y775	//SE_Y660			// ソードインパクト
#define SE_C000_SPATK_C4_3		SE_Y659			// ソードインパクト Lv3

#define SE_C000_SPATK_B1_1		SE_Y652			// フォースエッジ
#define SE_C000_SPATK_B1_2		SE_Y658			// フォースエッジ
#define SE_C000_SPATK_B1_3		SE_STAB_LO			// フォースエッジ +Lv3

#define SE_C000_SPATK_B2_1		SE_ATTACK_START			// エアリアルスピン
#define SE_C000_SPATK_B2_1A		SE_PC_JUMP_UP			// エアリアルスピン
#define SE_C000_SPATK_B2_2		SE_Y658			// エアリアルスピン 着地
#define SE_C000_SPATK_B2_3		SE_STAB_LO			// エアリアルスピン Lv3

#define SE_C000_SPATK_B3_0		SE_PC_JUMP_UP			// スカイドライブ jump
#define SE_C000_SPATK_B3_1		SE_ATTACK_START			// スカイドライブ 初回斬り
#define SE_C000_SPATK_B3_2		SE_ATTACK_START			// スカイドライブ ぐるぐる
#define SE_C000_SPATK_B3_2A		SE_Y653			// スカイドライブ ぐるぐる
#define SE_C000_SPATK_B3_3		SE_STAB_LO			// スカイドライブ 着地
#define SE_C000_SPATK_B3_3A		SE_Y660			// スカイドライブ 着地
#define SE_C000_SPATK_B3_4		SE_Y662			// スカイドライブ 着地 lv3

#define SE_C000_SPATK_B4_1		SE_Y652				// トルネードソード sword
#define SE_C000_SPATK_B4_1A		SE_PC_JUMP_UP		// トルネードソード wind
#define SE_C000_SPATK_B4_2		SE_ATTACK_START		// トルネードソード
#define SE_C000_SPATK_B4_2A		SE_Y652				// トルネードソード
#define SE_C000_SPATK_B4_3		SE_Y663				// トルネードソード
#define SE_C000_SPATK_B4_3A		SE_Y664				// トルネードソード
#define SE_C000_SPATK_B4_4		SE_STAB_LO			// トルネードソード lv3

#define SE_C000_SPATK_B5_1		SE_Y658				//オーラブレード
#define SE_C000_SPATK_B5_1A		SE_Y659				//オーラブレード
#define SE_C000_SPATK_B5_2		SE_Y666				//オーラブレード
#define SE_C000_SPATK_B5_3		SE_STAB_LO			//オーラブレード
#define SE_C000_SPATK_B5_4		SE_ATTACK_START			//オーラブレード air 1st sword

#define SE_C000_SPATK_A1_1		SE_Y667	//PC_JUMP_UP			// ブレードラッシュ １撃目 dash
#define SE_C000_SPATK_A1_2		SE_ATTACK_START			// ブレードラッシュ ２撃目
#define SE_C000_SPATK_A1_2A		SE_STAB_LO			// ブレードラッシュ ２撃目
#define SE_C000_SPATK_A1_3		SE_ATTACK_START			// ブレードラッシュ ３撃目Ａ
#define SE_C000_SPATK_A1_3A		SE_Y661		// ブレードラッシュ ３撃目Ｂ
#define SE_C000_SPATK_A1_4		SE_Y658			// ブレードラッシュ ４撃目Ａ
#define SE_C000_SPATK_A1_4A		SE_Y662		// ブレードラッシュ ４撃目Ｂ
#define SE_C000_SPATK_A1_5		SE_STAB_LO			// ブレードラッシュ lv3

#define SE_C000_SPATK_A2_1		SE_Y669			//スラストレイン 連打
#define SE_C000_SPATK_A2_1A		SE_ATTACK_START			//スラストレイン
#define SE_C000_SPATK_A2_2		SE_PC_JUMP_UP			//スラストレイン
#define SE_C000_SPATK_A2_3		SE_Y671	//SE_Y658			//スラストレイン
#define SE_C000_SPATK_A2_3A		SE_Y694	//SE_Y666			//スラストレイン
#define SE_C000_SPATK_A2_4		SE_Y661	//SE_STAB_LO			//スラストレイン lv3
//#define SE_C000_SPATK_A2_5A		SE_091			//スラストレイン
//#define SE_C000_SPATK_A2_5B		SE_S_ATTACK		//スラストレイン

#define SE_C000_SPATK_A3_1		SE_PC_JUMP_UP			//ブレイブチャージ
#define SE_C000_SPATK_A3_2		SE_Y658			//ブレイブチャージ
#define SE_C000_SPATK_A3_2A		SE_Y662			//ブレイブチャージ
#define SE_C000_SPATK_A3_2B		SE_Y656			//ブレイブチャージ
#define SE_C000_SPATK_A3_3		SE_STAB_LO			//ブレイブチャージ lv3
#define SE_C000_SPATK_A3_4		SE_Y622			//tame
//#define SE_C000_SPATK_A3_4		SE_244			//ブレイブチャージ

//※爆発はエフェクト
#define SE_C000_EXATK1_1		SE_Y675			// 回転
#define SE_C000_EXATK1_2		SE_Y659			// 構え
#define SE_C000_EXATK1_3		SE_Y671			// 斬り 連続
#define SE_C000_EXATK1_3A		SE_Y672			// 斬り 連続
#define SE_C000_EXATK1_4		SE_PC_JUMP_UP_2			// バックステップ
#define SE_C000_EXATK1_4A		SE_ATTACK_START			// バックステップ
#define SE_C000_EXATK1_5		SE_Y699	//SE_PC_CHARGE_1	//SE_Y665			// 溜め
#define SE_C000_EXATK1_5A		SE_PC_CHARGE_2			// 溜め
#define SE_C000_EXATK1_6		SE_Y658			// 斬り ラスト
#define SE_C000_EXATK1_6A		SE_Y674			// 斬り ラスト
#define SE_C000_EXATK1_7		SE_Y614			// 爆発
#define SE_C000_EXATK1_7A		SE_Y666			// 爆発

//#define SE_C000_EXATK2_1A		SE_QUIST			// ＥＸ・県掲げる
//#define SE_C000_EXATK2_1B		SE_103				// ＥＸ・県掲げる
//#define SE_C000_EXATK2_2A		SE_344				// ＥＸ・炎弾
//#define SE_C000_EXATK2_2B		SE_104				// ＥＸ・炎弾
//#define SE_C000_EXATK2_3		SE_088				// ＥＸ・跳躍
//#define SE_C000_EXATK2_4		SE_089				// ＥＸ・溜め
//#define SE_C000_EXATK2_5		SE_095				// ＥＸ・投げる
////※爆発はエフェクト
//#define SE_C000_EXATK2_6		SE_095				// 着地

////ガルヴァ＝ドールにトドメ（仮）
//#define SE_C000_PA_00			SE_261				//剣だし
//#define SE_C000_PA_01			SE_STEP				//ジャンプ
//#define SE_C000_PA_02			SE_060				//振り下ろし
//#define SE_C000_PA_03			SE_086				//ズシャァ

//━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
//■サハド　C001
//━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

#define SE_C001_JUMP			SE_JUMP			//ＹＳ８・ジャンプ
#define SE_C001_JUMP_NUMA		SE_JUMP_N		//ＹＳ８・沼ジャンプ
#define SE_C001_JUMP_2ND		SE_JUMP_2		//ＹＳ８・2段ジャンプ
#define SE_C001_JUMP_DASH		SE_JUMP_D		//ＹＳ８・ダッシュジャンプ

#define SE_C001_ATK1_1			SE_Y676		//SE_072			// ＹＳ８・通常攻撃①
#define SE_C001_ATK2_1			SE_Y677		//SE_073			// ＹＳ８・通常攻撃②
#define SE_C001_ATK3_1			SE_Y678		//SE_074			// ＹＳ８・通常攻撃③
#define SE_C001_ATK3_2			SE_PC_IMPACT_1	//SE_190			// ＹＳ８・通常攻撃③ 地面
#define SE_C001_ATK3_2A			SE_Y679		// ＹＳ８・通常攻撃③ 地面 
#define SE_C001_TAME1_1A		SE_Y677		//SE_189			// ＹＳ８・溜め攻撃Ａ
#define SE_C001_TAME1_1B		SE_ATTACK_START	// ＹＳ８・溜め攻撃Ｂ

#define SE_C001_AIRLOW_ATK		SE_PC_IMPACT_1	//SE_083			// ＹＳ８・ヒップドロップ
#define SE_C001_AIRLOW_ATK_2	SE_Y657	// ＹＳ８・ヒップドロップ 落下中
#define SE_C001_AIRUP_ATK1		SE_Y680		//SE_202			// ＹＳ８・錨振り回し
#define SE_C001_AIRUP_ATK1A		SE_ATTACK_START		// ＹＳ８・錨振り回し
#define SE_C001_DISARM			SE_QUIST		// ＹＳ８・武器しまう

#define SE_C001_DASH_L			SE_ITEM_SHIPPUU1	// ＹＳ８・ダッシュ
#define SE_C001_DASH_E			SE_ITEM_SHIPPUU2	// ＹＳ８・ダッシュブレーキ

//■スキル
//ＹＳ８・打ち上げ攻撃
//ＹＳ８・渦潮
//ＹＳ８・タックル



//---------------------------------------------------------------------

#define SE_C001_STEP2			SE_ITEM_JUUOU	// 獣王の小手
#define SE_C001_SMALL			SE_ITEM_KOBITO	// 小さくなる
#define SE_C001_BIG				SE_ITEM_KOBITO	// 大きくなる

#define SE_C001_SPATK_C1_1		SE_Y676		//
#define SE_C001_SPATK_C1_2		SE_Y666		//
#define SE_C001_SPATK_C1_2A		SE_PC_SPLASH		//

#define SE_C001_SPATK_C2_1		SE_Y676			//
#define SE_C001_SPATK_C2_2		SE_Y665			//
#define SE_C001_SPATK_C2_3		SE_PC_IMPACT_2			//
#define SE_C001_SPATK_C2_4		SE_Y657			// air 落下中

#define SE_C001_SPATK_C3_1		SE_Y682	//
#define SE_C001_SPATK_C3_1A		SE_Y662	//

#define SE_C001_SPATK_C4_1		SE_PC_CHARGE_1			// kamae
#define SE_C001_SPATK_C4_2		SE_Y666			//
#define SE_C001_SPATK_C4_2A		SE_Y683			//

#define SE_C001_SPATK_B1_1		SE_Y680				//
#define SE_C001_SPATK_B1_2		SE_Y665				//
#define SE_C001_SPATK_B1_3		SE_PC_IMPACT_2		//

#define SE_C001_SPATK_B2_1		SE_PC_STEP_1	// foot
#define SE_C001_SPATK_B2_1A		SE_PC_IMPACT_1	// dash
#define SE_C001_SPATK_B2_1B		SE_Y667			// air dash
#define SE_C001_SPATK_B2_2		SE_Y685			// brake
#define SE_C001_SPATK_B2_2A		SE_PC_STEP_2	// brake
#define SE_C001_SPATK_B2_3		SE_PC_JUMP_UP	// air landing

#define SE_C001_SPATK_B3_1		SE_Y657			//
#define SE_C001_SPATK_B3_2		SE_Y683			//

#define SE_C001_SPATK_B4_1		SE_Y680			// te
#define SE_C001_SPATK_B4_1A		SE_Y685			// ami
#define SE_C001_SPATK_B4_2		SE_PC_IMPACT_1			//
#define SE_C001_SPATK_B4_2A		SE_Y685			//

#define SE_C001_SPATK_B5_1		SE_Y666			// upper
#define SE_C001_SPATK_B5_1A		SE_Y685			// upper
#define SE_C001_SPATK_B5_2		SE_Y676			// roll
#define SE_C001_SPATK_B5_2A		SE_PC_IMPACT_1			// roll w

#define SE_C001_SPATK_A1_1		SE_PC_EXPL_3	//
#define SE_C001_SPATK_A1_1A		SE_Y678			//
#define SE_C001_SPATK_A1_2		SE_PC_EXPL_1			//
#define SE_C001_SPATK_A1_2A		SE_Y666			//
#define SE_C001_SPATK_A1_3		SE_Y657			// air 落下中

#define SE_C001_SPATK_A2_1		SE_PC_CHARGE_1			// tame
#define SE_C001_SPATK_A2_1A		SE_Y683			// tame
#define SE_C001_SPATK_A2_2		SE_Y681			// fire
#define SE_C001_SPATK_A2_2A		SE_Y666			//

#define SE_C001_SPATK_A3_1		SE_Y680			//
#define SE_C001_SPATK_A3_1A		SE_PC_IMPACT_1			//
#define SE_C001_SPATK_A3_2		SE_Y658			//
#define SE_C001_SPATK_A3_2A		SE_Y681			//
#define SE_C001_SPATK_A3_2B		SE_PC_EXPL_2			//
#define SE_C001_SPATK_A3_3		SE_Y664			// roll
#define SE_C001_SPATK_A3_4		SE_PC_JUMP_UP			// jump

#define SE_C001_EXATK1_0		SE_Y675			// roll
#define SE_C001_EXATK1_0A		SE_PC_STEP_2	//SE_PC_EXPL_3			// 足かまえ
#define SE_C001_EXATK1_1		SE_Y680			// furi
#define SE_C001_EXATK1_1A		SE_Y619		//SE_Y664			// 台風
#define SE_C001_EXATK1_2		SE_Y658			// 一回目斬り
#define SE_C001_EXATK1_3	   	SE_PC_EXPL_3	//SE_PC_STEP_2			//jump
#define SE_C001_EXATK1_3A	   	SE_Y667			//jump
#define SE_C001_EXATK1_4	   	SE_PC_CHARGE_1			// tamel
#define SE_C001_EXATK1_4A	   	SE_PC_CHARGE_2			// tamel
#define SE_C001_EXATK1_5		SE_Y657		// イカリ投げる
#define SE_C001_EXATK1_6		SE_PC_IMPACT_2		// イカリささる
#define SE_C001_EXATK1_6A		SE_PC_EXPL_3		// イカリささる
#define SE_C001_EXATK1_7		SE_PC_EXPL_1			//
#define SE_C001_EXATK1_8		SE_Y670		//SE_Y681			//

//#define SE_C001_EXATK2_1A		SE_072		// ＥＸ・乱舞ＡSE_060
//#define SE_C001_EXATK2_1B		SE_081		// ＥＸ・乱舞Ｂ
//#define SE_C001_EXATK2_1C		SE_073		// ＥＸ・乱舞Ｂ
//#define SE_C001_EXATK2_2A		SE_336		// ＥＸ・多重けり
//#define SE_C001_EXATK2_2B1		SE_072		// ＥＸ・多重けり連打
//#define SE_C001_EXATK2_2B2		SE_073		// ＥＸ・多重けり連打
//#define SE_C001_EXATK2_2B3		SE_074		// ＥＸ・多重けり連打
//#define SE_C001_EXATK2_3		SE_105		// ＥＸ・闇オーラ
//#define SE_C001_EXATK2_3B		SE_566		// ＥＸ・闇オーラ
//#define SE_C001_EXATK2_4		SE_088		// ＥＸ・跳躍
//#define SE_C001_EXATK2_5		SE_089		// ＥＸ・溜め途中
//#define SE_C001_EXATK2_6		SE_019		// ＥＸ・溜めＭＡＸ
//#define SE_C001_EXATK2_7A		SE_081		// ＥＸ・発射
//#define SE_C001_EXATK2_7B		SE_S_ATTACK	// ＥＸ・発射
//#define SE_C001_EXATK2_8A		SE_270		// ＥＸ・最後の爆発
//#define SE_C001_EXATK2_8B		SE_107		// ＥＸ・最後の爆発
//#define SE_C001_EXATK2_8C		SE_273		// ＥＸ・最後の爆発SE_317

//━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
//■ラクシャ　C002
//━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
//eff 埋め込み ycseからSE移植
//eff 113280:776 (ycse567)
//eff 113290:774 (ycse562)

#define SE_C002_JUMP			SE_JUMP			//ＹＳ８・ジャンプ
#define SE_C002_JUMP_NUMA		SE_JUMP_N		//ＹＳ８・沼ジャンプ
#define SE_C002_JUMP_2ND		SE_JUMP_2		//ＹＳ８・2段ジャンプ
#define SE_C002_JUMP_DASH		SE_JUMP_D		//ＹＳ８・ダッシュジャンプ

#define SE_C002_ATK1_1			SE_Y688		//SE_075			//ＹＳ８・ 通常攻撃①
#define SE_C002_ATK2_1			SE_Y688		//SE_075			//ＹＳ８・ 通常攻撃②
#define SE_C002_ATK2_2			SE_Y690		//SE_076			//ＹＳ８・ 通常攻撃②
#define SE_C002_ATK3_1			SE_Y688	//			//ＹＳ８・ 通常攻撃③-1
#define SE_C002_ATK3_2			SE_ATTACK_START	//SE_088			//ＹＳ８・ 通常攻撃③-2

#define SE_C002_TAME1_1A		SE_ATTACK_START		//SE_063			//ＹＳ８・ 溜め攻撃Ａ
#define SE_C002_TAME1_1B		SE_Y668	//ＹＳ８・ 溜め攻撃Ｂ

#define SE_C002_AIRLOW_ATK_1		SE_Y668		//SE_086			// ＹＳ８・ジャンプ下攻撃
#define SE_C002_AIRLOW_ATK_1A		SE_Y667		//SE_086			// ＹＳ８・ジャンプ下攻撃
#define SE_C002_AIRLOW_ATK_2		SE_STAB_LO		//.SE_S_ATTACK		// ＹＳ８・ジャンプ下攻撃
#define SE_C002_AIRLOW_ATK_2A		SE_PC_IMPACT_1		//.SE_S_ATTACK		// ＹＳ８・ジャンプ下攻撃

#define SE_C002_AIRUP_ATK1A		SE_ATTACK_START	//SE_087			// ＹＳ８・ジャンプ上攻撃
#define SE_C002_AIRUP_ATK1B		SE_Y688		// ＹＳ８・ジャンプ上攻撃
#define SE_C002_AIRUP_ATK1C		SE_Y661		// 斜め上

#define SE_C002_DISARM			SE_QUIST_C002	// ＹＳ８・武器しまう

#define SE_C002_DASH_L			SE_ITEM_SHIPPUU1	// ＹＳ８・ダッシュ
#define SE_C002_DASH_E			SE_ITEM_SHIPPUU2	// ＹＳ８・ダッシュブレーキ

//■スキル
//ＹＳ８・３連突き
//ＹＳ８・スタンスラスト
//ＹＳ８・浮かせ突き

#define SE_C002_STEP2			SE_ITEM_JUUOU	// 獣王の小手
#define SE_C002_SMALL			SE_ITEM_KOBITO	// 小さくなる
#define SE_C002_BIG				SE_ITEM_KOBITO	// 大きくなる

//---------------------------------------------------------------------

#define SE_C002_SPATK_C1_1		SE_Y688			//
#define SE_C002_SPATK_C1_2		SE_Y695			//
#define SE_C002_SPATK_C1_2A		SE_Y679			//

#define SE_C002_SPATK_C2_1		SE_Y661			//
#define SE_C002_SPATK_C2_2		SE_Y617			//

#define SE_C002_SPATK_C3_1		SE_Y691			// 連打
#define SE_C002_SPATK_C3_2		SE_Y688			// 通常
#define SE_C002_SPATK_C3_3		SE_Y692			// ハッタリ lv3
#define SE_C002_SPATK_C3_3A		SE_Y692			// ハッタリ lv1,2

#define SE_C002_SPATK_C4_1		SE_Y695			//
#define SE_C002_SPATK_C4_1A		SE_Y666			//
#define SE_C002_SPATK_C4_1B		SE_PC_IMPACT_1			//
#define SE_C002_SPATK_C4_2		SE_Y700			// pika-

//レベル２以降着弾ＳＥとわけるかは検討

#define SE_C002_SPATK_B1_1		SE_Y696			// biribiri tame
#define SE_C002_SPATK_B1_1A		SE_PC_CHARGE_1	//
#define SE_C002_SPATK_B1_2		SE_Y665			//
#define SE_C002_SPATK_B1_2A		SE_Y697			// biribiri2

#define SE_C002_SPATK_B2_1		SE_PC_JUMP_UP	//
#define SE_C002_SPATK_B2_1A		SE_Y696			//
#define SE_C002_SPATK_B2_2		SE_Y662			//
#define SE_C002_SPATK_B2_2A		SE_Y661			//

#define SE_C002_SPATK_B3_1		SE_Y658			//
#define SE_C002_SPATK_B3_1A		SE_Y664			//
#define SE_C002_SPATK_B3_1B		SE_PC_IMPACT_1			//
#define SE_C002_SPATK_B3_2		SE_Y734			// 

#define SE_C002_SPATK_B4_1		SE_Y696			//
#define SE_C002_SPATK_B4_1A		SE_PC_JUMP_DOWN			//
#define SE_C002_SPATK_B4_2		SE_Y665			//
#define SE_C002_SPATK_B4_2A		SE_Y697			//
#define SE_C002_SPATK_B4_3		SE_Y734			// 

//着弾 eff:113310
#define SE_C002_SPATK_B5_1		SE_PC_JUMP_UP			//
#define SE_C002_SPATK_B5_2		SE_Y698			//
#define SE_C002_SPATK_B5_3		SE_Y658			//
#define SE_C002_SPATK_B5_3A		SE_Y692			//
#define SE_C002_SPATK_B5_4		SE_Y712			//

#define SE_C002_SPATK_A1_1		SE_Y684			// 1st
#define SE_C002_SPATK_A1_1A		SE_Y667			//
#define SE_C002_SPATK_A1_2		SE_Y688		// atk1 x1
#define SE_C002_SPATK_A1_2A		SE_Y691		// x2
#define SE_C002_SPATK_A1_3		SE_Y696			// tame
#define SE_C002_SPATK_A1_3A		SE_PC_JUMP_UP_2			// tame
#define SE_C002_SPATK_A1_4		SE_Y666			// hit
#define SE_C002_SPATK_A1_4A		SE_Y699		// hit
#define SE_C002_SPATK_A1_5		SE_Y776		// lv3

//着弾 eff:113425-113431	se:108,95
#define SE_C002_SPATK_A2_1		SE_PC_JUMP_UP			// jump
#define SE_C002_SPATK_A2_2		SE_Y680			// kamae
#define SE_C002_SPATK_A2_3		SE_Y694			// pika-
#define SE_C002_SPATK_A2_4		SE_Y702			// land
#define SE_C002_SPATK_A2_4A		SE_Y615			//
#define SE_C002_SPATK_A2_5		SE_PC_JUMP_DOWN			//落下中

#define SE_C002_SPATK_A3_1		SE_Y668			// dash
#define SE_C002_SPATK_A3_1A		SE_PC_JUMP_UP			// dash
#define SE_C002_SPATK_A3_2		SE_Y672			// sasu
#define SE_C002_SPATK_A3_2A		SE_STAB_LO			// sasu
#define SE_C002_SPATK_A3_3		SE_PC_CHARGE_1			// tame
#define SE_C002_SPATK_A3_4		SE_Y666			// age
#define SE_C002_SPATK_A3_4A		SE_Y703			// age
#define SE_C002_SPATK_A3_4B		SE_Y734			// age

#define SE_C002_EXATK1_1		SE_Y675				// kaiten
#define SE_C002_EXATK1_2		SE_Y667	//SE_Y699				// ue
#define SE_C002_EXATK1_2A		SE_Y697	// ue
#define SE_C002_EXATK1_3		SE_PC_JUMP_UP				// jump
#define SE_C002_EXATK1_3A		SE_ATTACK_START				// jump
#define SE_C002_EXATK1_4		SE_PC_CHARGE_1				// tame
#define SE_C002_EXATK1_4A		SE_Y699				// tame
#define SE_C002_EXATK1_4B		SE_Y698				// tame
#define SE_C002_EXATK1_5		SE_Y695				// sasu x?
#define SE_C002_EXATK1_5A		SE_STAB_LO				// sasu x?
#define SE_C002_EXATK1_5B		SE_Y696				// sasu x?
#define SE_C002_EXATK1_6		SE_PC_CHARGE_2				// tame2
#define SE_C002_EXATK1_6A		SE_Y699				// tame2
#define SE_C002_EXATK1_7		SE_Y668				// dive
#define SE_C002_EXATK1_7A		SE_Y614				// dive
#define SE_C002_EXATK1_7B		SE_Y615				// dive
#define SE_C002_EXATK1_8		SE_Y704				// iiyumewo
//最後の爆発はループにしたほうがよいかも？

//#define SE_C002_EXATK2_1A		SE_232				// ＥＸ２・ダッシュ
//#define SE_C002_EXATK2_1B		SE_235				// ＥＸ２・ダッシュ
//#define SE_C002_EXATK2_2A		SE_084				// ＥＸ２・投擲Ａ連打★NEW音予定
//#define SE_C002_EXATK2_2B		SE_098				// ＥＸ２・投擲Ｂ連打★NEW音予定
//#define SE_C002_EXATK2_3		SE_092				// ＥＸ２・着火
//#define SE_C002_EXATK2_4		SE_088				// ＥＸ２・ジャンプ
//#define SE_C002_EXATK2_5		SE_089				// ＥＸ２・力溜め
//#define SE_C002_EXATK2_6A		SE_086				// ＥＸ２・爆発ナイフ：投擲Ｂ
//#define SE_C002_EXATK2_6B		SE_S_ATTACK			// ＥＸ２・爆発ナイフ：投擲Ｃ
////爆発はエフェクト

//━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
//■ヒュンメル	c003
//━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
#define SE_C003_JUMP			SE_JUMP		//ＹＳ８・ジャンプ
#define SE_C003_JUMP_NUMA		SE_JUMP_N	//ＹＳ８・沼ジャンプ
#define SE_C003_JUMP_2ND		SE_JUMP_2	//ＹＳ８・2段ジャンプ
#define SE_C003_JUMP_DASH		SE_JUMP_D	//ＹＳ８・ダッシュジャンプ

#define SE_C003_ATK_1			SE_Y707	//SE_065	//ＹＳ８・通常攻撃①
#define SE_C003_ATK_2			SE_Y708	//SE_063	//ＹＳ８・通常攻撃②
#define SE_C003_ATK_3			SE_Y709	//SE_064	//ＹＳ８・通常攻撃③
#define SE_C003_ATK_4			SE_Y711				//
#define SE_C003_ATK_4A			SE_ATTACK_START		//


#define SE_C003_TAME1_1A		SE_Y711	//SE_902	//ＹＳ８・ため攻撃（銃発射）
#define SE_C003_TAME1_1B		SE_ATTACK_START	//ＹＳ８・ため攻撃

#define SE_C003_AIRLOW_ATKA		SE_Y712	//SE_086			// ＹＳ８・ジャンプ下攻撃
#define SE_C003_AIRLOW_ATKB		SE_PC_IMPACT_1	//SE_238			// ＹＳ８・ジャンプ下攻撃
#define SE_C003_AIRUP_ATK1A		SE_Y695	//SE_084			// ＹＳ８・ジャンプ上攻撃
#define SE_C003_AIRUP_ATK1B		SE_S_ATTACK		// ＹＳ８・ジャンプ上攻撃
#define SE_C003_AIRUP_ATK1C		SE_PC_JUMP_DOWN		//落下中

#define SE_C003_DISARM			SE_QUIST_C003	//ＹＳ８・武器しまう

#define SE_C003_DASH_L			SE_ITEM_SHIPPUU1	// ＹＳ８・ダッシュ
#define SE_C003_DASH_E			SE_ITEM_SHIPPUU2	// ＹＳ８・ダッシュブレーキ

//■スキル


//---------------------------------------------------------------------

#define SE_C003_STEP2			SE_ITEM_JUUOU	// 獣王の小手
#define SE_C003_SMALL			SE_ITEM_KOBITO	// 小さくなる
#define SE_C003_BIG				SE_ITEM_KOBITO	// 大きくなる

//#define SE_C003_GIMMICK_1		SE_081	// 叩きつけ

#define SE_C003_SPATK_C1_1		SE_Y706		//SE_238	//
#define SE_C003_SPATK_C1_1A		SE_Y666	//SE_083	//
//#define SE_C003_SPATK_C1_2		SE_315	//

#define SE_C003_SPATK_C2_1		SE_Y706	//
#define SE_C003_SPATK_C2_2		SE_Y682	//
#define SE_C003_SPATK_C2_2A		SE_Y681	//
#define SE_C003_SPATK_C2_3		SE_Y666	// lv3

#define SE_C003_SPATK_C3_1		SE_Y694	//
#define SE_C003_SPATK_C3_1A		SE_Y666	//
#define SE_C003_SPATK_C3_2		SE_Y698	//

#define SE_C003_SPATK_C4_1		SE_STAB_LO	//
#define SE_C003_SPATK_C4_1A		SE_Y694	//
#define SE_C003_SPATK_C4_2		SE_Y705	//
#define SE_C003_SPATK_C4_2A		SE_PC_EXPL_1	//

#define SE_C003_SPATK_B1_1		SE_Y668	// dash
#define SE_C003_SPATK_B1_1A		SE_PC_JUMP_UP	// dash
#define SE_C003_SPATK_B1_2		SE_Y671	//
#define SE_C003_SPATK_B1_2A		SE_Y694	//
#define SE_C003_SPATK_B1_3		SE_Y705	//
#define SE_C003_SPATK_B1_3A		SE_Y703	//

#define SE_C003_SPATK_B2_1		SE_Y711	//
#define SE_C003_SPATK_B2_1A		SE_Y714	//
//#define SE_C003_SPATK_B2_2		SE_Y715	// efx_c003:114235:715

#define SE_C003_SPATK_B3_1		SE_PC_CHARGE_1	// tame
#define SE_C003_SPATK_B3_2		SE_Y706	// fire
#define SE_C003_SPATK_B3_2A		SE_Y715	//

#define SE_C003_SPATK_B4_1		SE_Y700	//SE_Y612	// warp
#define SE_C003_SPATK_B4_2		SE_Y705		// fire
#define SE_C003_SPATK_B4_2A		SE_Y703		//

#define SE_C003_SPATK_B5_1		SE_PC_JUMP_UP		// jump
#define SE_C003_SPATK_B5_1A		SE_Y600		// jump
#define SE_C003_SPATK_B5_2		SE_Y705		// fire
#define SE_C003_SPATK_B5_2A		SE_Y658		//

#define SE_C003_SPATK_A1_1		SE_PC_CHARGE_1	//
#define SE_C003_SPATK_A1_2		SE_Y666	//
#define SE_C003_SPATK_A1_2A		SE_Y706	//
#define SE_C003_SPATK_A1_2B		SE_Y703	//

#define SE_C003_SPATK_A2_1		SE_PC_CHARGE_1	// tame
#define SE_C003_SPATK_A2_1A		SE_PC_CHARGE_3	// tame
#define SE_C003_SPATK_A2_2		SE_Y666	//
#define SE_C003_SPATK_A2_2A		SE_Y711	//
//#define SE_C003_SPATK_A2_3		SE_079	// eff 114430

#define SE_C003_SPATK_A3_1		SE_Y717	// fire
#define SE_C003_SPATK_A3_1A		SE_Y675	// 
#define SE_C003_SPATK_A3_2		SE_Y658	// shot
#define SE_C003_SPATK_A3_2A		SE_Y706	//
#define SE_C003_SPATK_A3_3		SE_Y718	// explo

#define SE_C003_EXATK1_1		SE_Y675	// roll
#define SE_C003_EXATK1_2		SE_PC_JUMP_DOWN	// jump
#define SE_C003_EXATK1_2A		SE_Y612	// jump
#define SE_C003_EXATK1_3		SE_PC_CHARGE_4	// tame
#define SE_C003_EXATK1_4		SE_Y706	//
#define SE_C003_EXATK1_4A		SE_Y705	//
#define SE_C003_EXATK1_5		SE_Y714	//
#define SE_C003_EXATK1_5A		SE_Y615	//
#define SE_C003_EXATK1_6		SE_Y667	// dash
#define SE_C003_EXATK1_7		SE_Y658	// stab
#define SE_C003_EXATK1_7A		SE_STAB_LO	//
#define SE_C003_EXATK1_8		SE_PC_CHARGE_2	// charge
#define SE_C003_EXATK1_9		SE_Y614	// explo
#define SE_C003_EXATK1_9A		SE_Y615	// 
#define SE_C003_EXATK1_10		SE_Y668	// 
//eff 114970:666 着弾

//#define SE_C003_EXATK2_1A		SE_083	//Ex技2・溜め構え
//#define SE_C003_EXATK2_1B		SE_089	//Ex技2・溜め
//#define SE_C003_EXATK2_2		SE_088	//Ex技2・ジャンプ
//#define SE_C003_EXATK2_3		SE_103	//Ex技2・ジャンプ構え
//#define SE_C003_EXATK2_4A		SE_078	//Ex技2・突きA
//#define SE_C003_EXATK2_4B		SE_080	//Ex技2・突きB
//#define SE_C003_EXATK2_5A		SE_083	//Ex技2・衝撃A
//#define SE_C003_EXATK2_5B		SE_270	//Ex技2・衝撃B
//#define SE_C003_EXATK2_6A		SE_271	//Ex技2・水トルネード
//#define SE_C003_EXATK2_6B		SE_321	//Ex技2・水トルネード
//#define SE_C003_EXATK2_7A		SE_391	//Ex技・ジャンプ
//#define SE_C003_EXATK2_7B		SE_562	//Ex技・ジャンプ衝撃SE_335
//#define SE_C003_EXATK2_7C		SE_357	//Ex技・ジャンプ衝撃水しぶき
//#define SE_C003_EXATK2_8		SE_306	//Ex技・ジャンプ衝撃水しぶき２

//━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
//■リコッタ	c004
//━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
//c004.mtd
#define SE_C004_JUMP			SE_JUMP		//ＹＳ８・ジャンプ
#define SE_C004_JUMP_NUMA		SE_JUMP_N	//ＹＳ８・沼ジャンプ
#define SE_C004_JUMP_2ND		SE_JUMP_2	//ＹＳ８・2段ジャンプ
#define SE_C004_JUMP_DASH		SE_JUMP_D	//ＹＳ８・ダッシュジャンプ

#define SE_C004_ATK1_1			SE_Y720		// whoos1
#define SE_C004_ATK1_2			SE_Y721		// whoos1
#define SE_C004_ATK1_3			SE_Y722		// whoos1
#define SE_C004_ATK1_4			SE_Y723		// whoos1
#define SE_C004_ATK1_5			SE_Y724		// whoos1
#define SE_C004_ATK1_6			SE_Y722		// whoos1
#define SE_C004_ATK1_7			SE_Y726		// whoos1
#define SE_C004_ATK1_A			SE_Y727		// whoos2
#define SE_C004_ATK1_B			SE_Y725		// whoos2/dl
#define SE_C004_ATK1_C			SE_ATTACK_START	//SE_Y697		// biribiri

#define SE_C004_AIRLOW_1		SE_Y729			// kurukuru
#define SE_C004_AIRLOW_2		SE_PC_IMPACT_1	//
#define SE_C004_AIRUP_1			SE_Y730				//
#define SE_C004_AIRUP_2			SE_ATTACK_START		//

//#define SE_C004_ATK7_1			SE_023	// 通常攻撃⑦最後の一撃ステップ
//#define SE_C004_ATK7_2			SE_081	// 通常攻撃⑦アタック
//#define SE_C004_ATK7_3			SE_205	// 通常攻撃⑦衝撃SE_S_ATTACK	

#define SE_C004_TAME1_1A		SE_Y728		//SE_075			//
#define SE_C004_TAME1_1B		SE_ATTACK_START	//

//■スキル

//---------------------------------------------------------------------

#define SE_C004_DISARM			SE_QUIST_C004	// 武器しまう
#define SE_C004_STEP2			SE_ITEM_JUUOU	// 獣王の小手
#define SE_C004_SMALL			SE_ITEM_KOBITO	// 小さくなる
#define SE_C004_BIG				SE_ITEM_KOBITO	// 大きくなる
#define SE_C004_DASH_L			SE_ITEM_SHIPPUU1	// ダッシュ
#define SE_C004_DASH_E			SE_ITEM_SHIPPUU2	// ダッシュブレーキ

#define SE_C004_SPATK_C1_0		SE_Y721			// huri
#define SE_C004_SPATK_C1_1		SE_Y731			//
#define SE_C004_SPATK_C1_1A		SE_Y696			//
#define SE_C004_SPATK_C1_1B		SE_Y697			//
//雷のエフェクト	埋め込み	★NEW音予定？

#define SE_C004_SPATK_C2_1		SE_Y738			//poi
//地雷 eff 埋め込み
//設置 115315,115615,115625：732
//発動 115319(lv1,2),115629(lv3)：733

#define SE_C004_SPATK_C3_1		SE_Y728			//
#define SE_C004_SPATK_C3_1A		SE_Y731			//
#define SE_C004_SPATK_C3_2		SE_Y609			//
#define SE_C004_SPATK_C3_2A		SE_Y666			//

//消滅は埋め込み
#define SE_C004_SPATK_C4_1		SE_Y734			//
#define SE_C004_SPATK_C4_1A		SE_Y735			//

#define SE_C004_SPATK_B1_1		SE_Y680			//
#define SE_C004_SPATK_B1_2		SE_Y683			// fire
#define SE_C004_SPATK_B1_2A		SE_Y717			//

#define SE_C004_SPATK_B2_1		SE_Y725		//
#define SE_C004_SPATK_B2_2		SE_Y734			//
#define SE_C004_SPATK_B2_2A		SE_Y664			//
#define SE_C004_SPATK_B2_3		SE_Y726			//
#define SE_C004_SPATK_B2_3A		SE_Y736			//
#define SE_C004_SPATK_B2_4		SE_Y666			// land

#define SE_C004_SPATK_B3_1		SE_PC_JUMP_UP			// jump
#define SE_C004_SPATK_B3_2		SE_PC_CHARGE_4			// charge
#define SE_C004_SPATK_B3_3		SE_Y731			// whoo
#define SE_C004_SPATK_B3_3A		SE_Y738			// whoo
//eff  115435:737
//eff  115640:739 (lv3
//eff 115430:775 (旧ycse561)

#define SE_C004_SPATK_B4_1		SE_Y734			// dash
#define SE_C004_SPATK_B4_1A		SE_Y667			// dash
#define SE_C004_SPATK_B4_2		SE_Y686		// foot
#define SE_C004_SPATK_B4_2A		SE_Y741		// kamae
#define SE_C004_SPATK_B4_2B		SE_Y725		// kamae air
#define SE_C004_SPATK_B4_3		SE_Y736			// whoo
#define SE_C004_SPATK_B4_3A		SE_Y740			// whoo
#define SE_C004_SPATK_B4_4		SE_Y717			// lv3

#define SE_C004_SPATK_B5_1		SE_Y621			// 
#define SE_C004_SPATK_B5_2		SE_Y617			//
#define SE_C004_SPATK_B5_2A		SE_Y703			//

#define SE_C004_SPATK_A1_1		SE_Y738			//
#define SE_C004_SPATK_A1_1A		SE_Y682			//
#define SE_C004_SPATK_A1_2		SE_Y741			//
#define SE_C004_SPATK_A1_3		SE_Y774	//SE_Y716			//
#define SE_C004_SPATK_A1_3A		SE_Y683			//

#define SE_C004_SPATK_A2_1		SE_ATTACK_START			// jump
#define SE_C004_SPATK_A2_1A		SE_PC_JUMP_UP			// jump
#define SE_C004_SPATK_A2_2		SE_Y668			// dash
#define SE_C004_SPATK_A2_2A		SE_Y734			// dash
#define SE_C004_SPATK_A2_3		SE_Y735			// explo
#define SE_C004_SPATK_A2_3A		SE_Y662			// explo
#define SE_C004_SPATK_A2_4		SE_Y715			// jump
//lv3衝撃波はeff埋め込み C004_B3 の流用：115640
//eff 115510:774 (旧ycse562)

#define SE_C004_SPATK_A3_1		SE_Y725			// furi
#define SE_C004_SPATK_A3_1A		SE_Y675			//
#define SE_C004_SPATK_A3_2		SE_Y742			//
#define SE_C004_SPATK_A3_2A		SE_Y671			//
#define SE_C004_SPATK_A3_3		SE_PC_RUMBLE_1			// lo

#define SE_C004_EXATK1_1		SE_Y675			// kaiten
#define SE_C004_EXATK1_2		SE_Y694		// kamae
#define SE_C004_EXATK1_3		SE_Y667			// dash
#define SE_C004_EXATK1_3A		SE_Y686			// dash foot
#define SE_C004_EXATK1_4		SE_Y719			// slow kamae
#define SE_C004_EXATK1_4A		SE_Y667			// slow kamae
#define SE_C004_EXATK1_5		SE_Y720			// ngaruri
#define SE_C004_EXATK1_51		SE_Y721			// ngaruri
#define SE_C004_EXATK1_52		SE_Y729			// ngaruri
#define SE_C004_EXATK1_5A		SE_PC_IMPACT_1			// ngaruri
#define SE_C004_EXATK1_6		SE_Y682			// tataki
#define SE_C004_EXATK1_6A		SE_Y617			// tataki
#define SE_C004_EXATK1_6B		SE_Y616			// tataki
#define SE_C004_EXATK1_7		SE_Y736			// kaiten
#define SE_C004_EXATK1_7A		SE_Y664			// kaiten
#define SE_C004_EXATK1_7B		SE_Y746			// kaiten
#define SE_C004_EXATK1_8		SE_ATTACK_START			// jump
#define SE_C004_EXATK1_9		SE_PC_CHARGE_2			// tame
#define SE_C004_EXATK1_9A		SE_Y675			// tame
#define SE_C004_EXATK1_10		SE_Y717			// todome
#define SE_C004_EXATK1_10A		SE_Y665			// todome
#define SE_C004_EXATK1_10B		SE_Y745			// todome
#define SE_C004_EXATK1_11		SE_Y614			//
#define SE_C004_EXATK1_11A		SE_Y703			//
//eff todome 115980:774 (ysce562)

//━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
//■ダーナ	c005
//━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
#define SE_C005_JUMP			SE_JUMP		//ＹＳ８・ジャンプ
#define SE_C005_JUMP_NUMA		SE_JUMP_N	//ＹＳ８・沼ジャンプ
#define SE_C005_JUMP_2ND		SE_JUMP_2	//ＹＳ８・2段ジャンプ
#define SE_C005_JUMP_DASH		SE_JUMP_D	//ＹＳ８・ダッシュジャンプ
#define SE_C005_JUMP_DASH2		SE_Y607	//ＹＳ８・ダッシュジャンプ 光

#define SE_C005_ATK1_1			SE_Y750			// 通常攻撃①
#define SE_C005_ATK1_2			SE_Y751			// 通常攻撃②
#define SE_C005_ATK1_3			SE_Y752			// 通常攻撃③
#define SE_C005_ATK1_4			SE_Y680			// 通常攻撃④
#define SE_C005_ATK1_4A			SE_S_ATTACK			// 通常攻撃④
#define SE_C005_ATK1_5			SE_Y661			// 通常攻撃④補足
#define SE_C005_TAME1_1A		SE_Y753			//
#define SE_C005_TAME1_1B		SE_ATTACK_START	//

#define SE_C005_AIRUP_ATK1		SE_Y754		//SE_080			// ＹＳ８・切り上げ
#define SE_C005_AIRUP_ATK1A		SE_Y610		//
#define SE_C005_AIRUP_ATK2		SE_Y754		//SE_080			// ＹＳ８・切り上げ
#define SE_C005_AIRUP_ATK3		SE_Y755		//SE_080			// ＹＳ８・切り上げ
#define SE_C005_AIRUP_ATK3A		SE_Y731		//

#define SE_C005_AIRLOW_ATK1		SE_Y661			// 初回攻撃
#define SE_C005_AIRLOW_ATK2		SE_Y754			// 複数再生
#define SE_C005_AIRLOW_ATK3		SE_PC_IMPACT_1		// 着地
#define SE_C005_AIRLOW_ATK3A	SE_ATTACK_START		//

#define SE_C005_DISARM			SE_QUIST		// 武器しまう
#define SE_C005_STEP2			SE_ITEM_JUUOU	// 獣王の小手
#define SE_C005_SMALL			SE_ITEM_KOBITO	// 小さくなる
#define SE_C005_BIG				SE_ITEM_KOBITO	// 大きくなる
#define SE_C005_DASH_L			SE_ITEM_SHIPPUU1	// ダッシュ
#define SE_C005_DASH_E			SE_ITEM_SHIPPUU2	// ダッシュブレーキ

#define SE_C005_SPATK_C1_1		SE_Y754			//
#define SE_C005_SPATK_C1_2		SE_Y753			//
#define SE_C005_SPATK_C1_1A		SE_ATTACK_START			//

#define SE_C005_SPATK_C2_1		SE_Y658			//
#define SE_C005_SPATK_C2_2		SE_Y666			//

#define SE_C005_SPATK_C3_1		SE_Y658			//
#define SE_C005_SPATK_C3_1A		SE_Y685			//
//着弾 eff 116230:756

#define SE_C005_SPATK_C4_1		SE_PC_CHARGE_4			// jump+tame
#define SE_C005_SPATK_C4_1A		SE_PC_JUMP_UP			// jump+tame
#define SE_C005_SPATK_C4_2		SE_Y740			// 
#define SE_C005_SPATK_C4_2A		SE_Y656			// 
#define SE_C005_SPATK_C4_3		SE_Y683			//	lv2
#define SE_C005_SPATK_C4_4		SE_Y719			//	lv3

#define SE_C005_SPATK_B1_1		SE_PC_CHARGE_1			//
#define SE_C005_SPATK_B1_2		SE_Y658			//
#define SE_C005_SPATK_B1_3		SE_Y682			//
#define SE_C005_SPATK_B1_3A		SE_Y617			//
#define SE_C005_SPATK_B1_3B		SE_PC_IMPACT_1			//

#define SE_C005_SPATK_B2_1		SE_Y759			//
#define SE_C005_SPATK_B2_1A		SE_Y734			//
#define SE_C005_SPATK_B2_2		SE_Y758			//
#define SE_C005_SPATK_B2_2A		SE_ATTACK_START			//
#define SE_C005_SPATK_B2_3		SE_Y664			// lv3


#define SE_C005_SPATK_B3_1		SE_Y725			// kamae
#define SE_C005_SPATK_B3_2		SE_Y760			//
#define SE_C005_SPATK_B3_2A		SE_Y740			//
#define SE_C005_SPATK_B3_3		SE_Y761		// catch
//#define SE_C005_SPATK_B3_3A		SE_084			//

#define SE_C005_SPATK_B4_1		SE_PC_CHARGE_3			//tame
#define SE_C005_SPATK_B4_2		SE_Y616			//
#define SE_C005_SPATK_B4_2A		SE_Y746			//

#define SE_C005_SPATK_B5_1		SE_Y751			//tame
#define SE_C005_SPATK_B5_2		SE_Y759			//
#define SE_C005_SPATK_B5_2A		SE_ATTACK_START			//
#define SE_C005_SPATK_B5_3		SE_Y762			//
#define SE_C005_SPATK_B5_3A		SE_Y756			//
#define SE_C005_SPATK_B5_3B		SE_Y694			//

#define SE_C005_SPATK_A1_1		SE_PC_JUMP_UP			// jump
#define SE_C005_SPATK_A1_1A		SE_ATTACK_START			// jump
#define SE_C005_SPATK_A1_2		SE_Y767			// tame
#define SE_C005_SPATK_A1_2A		SE_PC_CHARGE_4	// tame
#define SE_C005_SPATK_A1_3		SE_Y758			// kame
#define SE_C005_SPATK_A1_4		SE_Y666			// down
//eff 116430:770

#define SE_C005_SPATK_A2_1		SE_Y750			// l
#define SE_C005_SPATK_A2_2		SE_Y750			// r
#define SE_C005_SPATK_A2_3		SE_Y759			// roll
#define SE_C005_SPATK_A2_3A		SE_Y731			// roll
#define SE_C005_SPATK_A2_4		SE_Y653			// up
#define SE_C005_SPATK_A2_4A		SE_Y762			// up
#define SE_C005_SPATK_A2_5		SE_Y661			// jump
#define SE_C005_SPATK_A2_5A		SE_Y671			// jump
#define SE_C005_SPATK_A2_6		SE_Y734			// lv3

#define SE_C005_SPATK_A3_1		SE_Y767			// tame
#define SE_C005_SPATK_A3_1A		SE_PC_CHARGE_1			// tame
#define SE_C005_SPATK_A3_2		SE_PC_IMPACT_1	//SE_Y756			//
#define SE_C005_SPATK_A3_2A		SE_Y698			//
#define SE_C005_SPATK_A3_2B		SE_Y771			//
#define SE_C005_SPATK_A3_2C		SE_PC_RUMBLE_1			//

#define SE_C005_EXATK1_1		SE_Y675			// camera
#define SE_C005_EXATK1_2		SE_Y757			// l
#define SE_C005_EXATK1_2A		SE_Y671			// l
#define SE_C005_EXATK1_3		SE_Y758			// r
#define SE_C005_EXATK1_3A		SE_Y671			// r
#define SE_C005_EXATK1_4		SE_Y759			// roll
#define SE_C005_EXATK1_4A		SE_Y731			// roll
#define SE_C005_EXATK1_5		SE_Y745			// up
#define SE_C005_EXATK1_5A		SE_Y740			// up
#define SE_C005_EXATK1_6		SE_ATTACK_START			// jump
#define SE_C005_EXATK1_6A		SE_Y734			// jump
#define SE_C005_EXATK1_7		SE_PC_CHARGE_2			// tame
#define SE_C005_EXATK1_7A		SE_Y763			// tame
#define SE_C005_EXATK1_7B		SE_Y766			// tame
#define SE_C005_EXATK1_7C		SE_Y725			// kamae
#define SE_C005_EXATK1_8		SE_Y674			// kiru
#define SE_C005_EXATK1_8A		SE_Y665			// kiru
#define SE_C005_EXATK1_9		SE_Y762			// ice
#define SE_C005_EXATK1_9A		SE_Y666			// ice
#define SE_C005_EXATK1_10		SE_Y614			// land
//eff 氷発射 116961:772
//eff 氷着弾 116975:773

//////////////////////////
// PS4追加
//////////////////////////

//━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
//■PS4 ダーナ グラティカ(地)	c007
//━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

#define SE_C007_ATK1_0			SE_Y1500			//furu

#define SE_C007_ATK1_1			SE_Y1501			// 通常攻撃 1
#define SE_C007_ATK2_1			SE_Y1502			// 通常攻撃 2
#define SE_C007_ATK3_1			SE_Y1503			// 通常攻撃 3
#define SE_C007_ATK3_2			SE_Y1505 // 通常攻撃 3


#define SE_C007_TAME1_1			SE_Y1502			//
#define SE_C007_TAME1_2			SE_Y1508	//
//#define SE_C007_TAME1_2A		SE_Y679	//

#define SE_C007_AIRUP_ATK1		SE_Y1503			//
#define SE_C007_AIRUP_ATK2		SE_Y1502			//

#define SE_C007_AIRLOW_ATK1		SE_Y676			//kaiten
#define SE_C007_AIRLOW_ATK2		SE_Y611			//dash
#define SE_C007_AIRLOW_ATK3		SE_Y678			//
#define SE_C007_AIRLOW_ATK3A	SE_Y1505	//

#define SE_C007_SPATK_C3_1		SE_Y658			//発射
#define SE_C007_SPATK_C3_1A		SE_Y685			//
//着弾 eff 118230:756

#define SE_C007_SPATK_C4_1		SE_PC_CHARGE_4			// jump+tame
#define SE_C007_SPATK_C4_1A		SE_PC_JUMP_UP			// jump+tame
#define SE_C007_SPATK_C4_2		SE_Y740			// hatsudou
#define SE_C007_SPATK_C4_2A		SE_Y656			// 
#define SE_C007_SPATK_C4_3		SE_Y683			//	lv2
#define SE_C007_SPATK_C4_4		SE_Y719			//	lv3
//
#define SE_C007_SPATK_B3_1		SE_Y1501			// kamae
#define SE_C007_SPATK_B3_2		SE_Y1502			//
#define SE_C007_SPATK_B3_3		SE_Y1503		// 
#define SE_C007_SPATK_B3_3A		SE_Y1508		// 
//
#define SE_C007_SPATK_A2_1		SE_Y1501			// l
#define SE_C007_SPATK_A2_1A		SE_Y575			// furu +
#define SE_C007_SPATK_A2_2		SE_Y1501			// roll
#define SE_C007_SPATK_A2_3		SE_Y1502			// roll
#define SE_C007_SPATK_A2_4		SE_Y1501			// roll+
#define SE_C007_SPATK_A2_4A		SE_Y1508			// roll+
#define SE_C007_SPATK_A2_5		SE_PC_CHARGE_1			// tame
#define SE_C007_SPATK_A2_5A		SE_PC_CHARGE_3			// tame
#define SE_C007_SPATK_A2_6		SE_Y676			// orosu
#define SE_C007_SPATK_A2_7		SE_Y657			// impact
#define SE_C007_SPATK_A2_7A		SE_Y1508			// impact
#define SE_C007_SPATK_A2_8		SE_Y617			// rock
#define SE_C007_SPATK_A2_8A		SE_Y1507			// rock

#define SE_C007_SPATK_A2_9		SE_Y734			// lv3

//EX
#define SE_C007_EXATK1_1		SE_Y675			// camera
#define SE_C007_EXATK1_2		SE_Y1501			// furu
#define SE_C007_EXATK1_2A		SE_Y575			// furu +
#define SE_C007_EXATK1_3		SE_Y1502			// furu
#define SE_C007_EXATK1_4		SE_Y1503			// furu
#define SE_C007_EXATK1_5		SE_Y1502			// roll
#define SE_C007_EXATK1_6		SE_Y1505			// kime
#define SE_C007_EXATK1_6A		SE_Y734			// jump
#define SE_C007_EXATK1_7		SE_PC_CHARGE_1		// tame
#define SE_C007_EXATK1_7A		SE_PC_CHARGE_3		// tame
#define SE_C007_EXATK1_8		SE_Y1508			// tataki
#define SE_C007_EXATK1_8A		SE_Y583			// tataki
#define SE_C007_EXATK1_9		SE_Y617			// rock
#define SE_C007_EXATK1_9A		SE_Y1507			// rock

#define SE_C007_EXATK1_10		SE_ATTACK_START			// jump
#define SE_C007_EXATK1_10A		SE_Y734			// jump
#define SE_C007_EXATK1_11		SE_PC_CHARGE_2			// tame
#define SE_C007_EXATK1_11A		SE_Y763			// tame
#define SE_C007_EXATK1_12		SE_Y725			// kamae
#define SE_C007_EXATK1_13		SE_Y737			// hassya
#define SE_C007_EXATK1_13A		SE_Y567			// hassya
//eff 岩着弾 118981:617,1507

//━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
//■PS4 ダーナ ルミナス(光)		c008
//━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

#define SE_C008_ATK1_1			SE_Y688			//
#define SE_C008_ATK1_2			SE_Y688			//

#define SE_C008_TAME1_1			SE_Y668			//dash
#define SE_C008_TAME1_1A		SE_ATTACK_START	//imapct
#define SE_C008_TAME1_2			SE_Y608			//imapct

#define SE_C008_AIRUP_ATK1		SE_Y734			//tate
#define SE_C008_AIRUP_ATK2		SE_Y740			//yoko

#define SE_C008_AIRLOW_ATK1		SE_Y612			//dash
#define SE_C008_AIRLOW_ATK2		SE_Y565			//loop
#define SE_C008_AIRLOW_ATK3		SE_Y608			//impact
#define SE_C008_AIRLOW_ATK3A	SE_Y571			//impact

#define SE_C008_SPATK_C3_1		SE_Y1510	//SE_Y965			//発射
#define SE_C008_SPATK_C3_1A		SE_Y968			//

#define SE_C008_SPATK_C4_1		SE_PC_CHARGE_4	// jump+tame
#define SE_C008_SPATK_C4_1A		SE_PC_JUMP_UP	// jump+tame
#define SE_C008_SPATK_C4_2		SE_Y740			// hatsudou
#define SE_C008_SPATK_C4_2A		SE_Y656			// 
#define SE_C008_SPATK_C4_3		SE_Y683			//	lv2
#define SE_C008_SPATK_C4_4		SE_Y719			//	lv3

#define SE_C008_SPATK_B5_1		SE_Y751			//role
#define SE_C008_SPATK_B5_2		SE_Y759			//role
#define SE_C008_SPATK_B5_3		SE_Y762			//
#define SE_C008_SPATK_B5_3A		SE_Y756			//

#define SE_C008_SPATK_A2_1		SE_Y667			//dash
#define SE_C008_SPATK_A2_2		SE_ATTACK_START	//
#define SE_C008_SPATK_A2_2A		SE_STAB_LO		//
#define SE_C008_SPATK_A2_3		SE_Y667			//rush
#define SE_C008_SPATK_A2_3A		SE_Y669			//
#define SE_C008_SPATK_A2_4		SE_Y662			//jump
#define SE_C008_SPATK_A2_4A		SE_Y608			//jump
#define SE_C008_SPATK_A2_4B		SE_Y992	//SE_Y667			//jump
#define SE_C008_SPATK_A2_5		SE_Y734			// lv3

//EX
#define SE_C008_EXATK1_1		SE_Y675			//camera
#define SE_C008_EXATK1_1A		SE_Y696			//cross
#define SE_C008_EXATK1_2		SE_Y667			//dash
#define SE_C008_EXATK1_3		SE_ATTACK_START			//sasu
#define SE_C008_EXATK1_3A		SE_STAB_LO			//sasu
#define SE_C008_EXATK1_4		SE_Y667			//rensya
#define SE_C008_EXATK1_4A		SE_Y669			//rensya
#define SE_C008_EXATK1_5		SE_Y623			//tame
#define SE_C008_EXATK1_6		SE_Y715			//hassya
#define SE_C008_EXATK1_6A		SE_Y668			//hassya
#define SE_C008_EXATK1_6B		SE_Y697			//hassya
#define SE_C008_EXATK1_7		SE_ATTACK_START			//jump
#define SE_C008_EXATK1_7A		SE_Y734			//jump
#define SE_C008_EXATK1_8		SE_PC_CHARGE_2			//tame
#define SE_C008_EXATK1_8A		SE_Y763			//tame
#define SE_C008_EXATK1_9		SE_Y674			//hassya
#define SE_C008_EXATK1_9A		SE_Y666			//hassya
//eff ビーム発射 119856:590
//eff ラスト着弾 119975:663,1508


//━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
//モンスター
//━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
// Ys8 使用ラベル範囲
//		SE_Y630～Y649 (20)
//		SE_Y820～Y849 (30)
//		SE_Y950～Y999 (50)
//

//基本
//撃破系はモンスターごとに後で定義をいれておく
#define SE_WEAK_DEAD_CUT		SE_Y992	//SE_258	// 斬撃弱点で撃破
#define SE_WEAK_DEAD_CRUSH		SE_Y994	//SE_260	// 打撃弱点で撃破
#define SE_WEAK_DEAD_SHOOT		SE_Y993	//SE_259	// 射撃弱点で撃破
#define SYSSE_DEAD_SLASH		SE_Y992	//SE_258	// 斬撃死亡
#define SYSSE_DEAD_CLASH		SE_Y994	//SE_260	// 打撃死亡
#define SYSSE_DEAD_SHOOT		SE_Y993	//SE_259	// 射撃死亡

#define SE_DEAD_DOWN			SE_Y571	//SE_238		//倒れるSE326

//基本技

#define SE_MONS_SWING_MAE_1		SE_Y980	//SE_235	//軽振り予兆
#define SE_MONS_SWING_MAE_2		SE_Y459	//SE_242	//重い振り予兆
#define SE_MONS_LIGHT_MAE_1		SE_Y622	//SE_240	//発光系予兆
#define SE_MONS_LIGHT_MAE_2		SE_Y991	//SE_212	//発光系予兆

#define SE_MONS_TAME_1		SE_Y622	//SE_240	//発光系予兆

#define SE_MONS_ROCK_MAE_1		SE_NONE	//SE_375	//岩系予兆
#define SE_MONS_JUICE_MAE_1		SE_NONE	//SE_209	//ジューシー系予兆

#define SE_MONS_SWING_1			SE_Y980	//SE_248	//軽振り
#define SE_MONS_SWING_2			SE_Y990	//SE_189	//振り
#define SE_MONS_SWING_3			SE_Y680	//SE_220	//重い振り
#define SE_MONS_SWING_4			SE_Y995	//nagame

#define SE_MONS_SWORD			SE_Y977	//SE_188	//切る
#define SE_MONS_SPEAR			SE_Y733	//SE_194	//突く
#define SE_MONS_ATTACK			SE_Y979	//刺す
#define SE_MONS_ATTACK_2		SE_Y976	//SE_249	//突進
#define SE_MONS_PUNCH_1			SE_Y985	//SE_236	//殴る
#define SE_MONS_PUNCH_2			SE_Y756	//SE_190	//殴るたたきつける
#define SE_MONS_BITE			SE_Y987	//SE_195	//噛み付く
#define SE_MONS_BITE_2			SE_Y587	//噛み付く
#define SE_MONS_BITE_3			SE_Y596	//噛み付く
#define SE_MONS_BUBBLE			SE_Y988	//SE_211	//泡
#define SE_MONS_PRESS			SE_Y571	//タックル、体当たり
#define SE_MONS_DASH			SE_Y734	//dash

// fix typo
#define SE_MONS_JUMP_1			SE_Y969	//SE_215	//ジャンプ1
#define SE_MONS_JUMP_2			SE_Y976	//SE_216	//ジャンプ2
#define SE_MONS_JUMP_3			SE_Y981	//SE_228	//ジャンプコミカル
#define SE_MONS_JUMP_4			SE_Y459	//ジャンプ big
#define SE_MONS_WARP			SE_Y975	//SE_217	//転移
#define SE_MONS_WARP_P			SE_Y974	//SE_276	//転移
#define SE_MONS_WING_1			SE_Y973	//SE_222	//翼飛ぶ(虫)
#define SE_MONS_WING_2			SE_Y972	//SE_234	//翼飛ぶ(鳥)
#define SE_MONS_SKILL			SE_Y971	//SE_250	//技発射
#define SE_MONS_WAVE			SE_Y970	//SE_198	//超音波発射
#define SE_MONS_NABA			SE_Y967	//SE_224	//スライム系噴射
#define SE_MONS_LASER_1			SE_Y968	//SE_Y476	//SE_197	//レーザー発射
#define SE_MONS_HADOU			SE_Y965	//SE_251	//波動発射
#define SE_MONS_SPLASH			SE_Y966	//SE_247	//水系発射
#define SE_MONS_SPLASH_2		SE_Y681	//水系発射
#define SE_MONS_SPLASH_3		SE_Y587	//水系発射
#define SE_MONS_SAND			SE_Y685	//suna

#define SE_MONS_HIT_1			SE_Y962	//SE_213	//軽い打撃
#define SE_MONS_HIT_2			SE_Y963	//SE_214	//打撃
#define SE_MONS_HIT_3			SE_Y964	//SE_231	//強い打撃
#define SE_MONS_BOM_1			SE_Y960	//SE_560	//小さい爆発
#define SE_MONS_BOM_2			SE_Y961	//SE_561	//大きい爆発
#define SE_MONS_ROCK			SE_Y506	//SE_259	//岩系衝撃
#define SE_MONS_FOOT_2			SE_Y232	//足音中
#define SE_MONS_FOOT_3			SE_Y232	//足音大
#define SE_MONS_EARTH			SE_Y557	//SE_231	//地面

//鳴き声 y950-y959
#define SE_MONVO_BEE			SE_Y950	//SE_165	//鳴声（虫）
#define SE_MONVO_DOG			SE_Y951	//SE_162	//鳴声（犬）
#define SE_MONVO_DEF			SE_Y952	//SE_163	//鳴声（獣軽）
#define SE_MONVO_BAR			SE_Y953	//SE_164	//鳥
#define SE_MONVO_MAZ			SE_Y954	//SE_166	//鳴声（魔法生物）
#define SE_MONVO_MIS			SE_Y955	//SE_167	//鳴声（不定形）
#define SE_MONVO_NOI			SE_Y956	//SE_168	//鳴声（怪音）ラスダン？
#define SE_MONVO_MAC			SE_Y957	//SE_169	//鳴声（機械）ラスダン？

//死亡・断末魔 y630-y649
#define SE_DEAD_ZAKO			SE_Y630	//SE_170	//ザコ死亡
#define SE_MONSDEAD_NORMAL		SE_Y630	//SE_170	//汎用撃破音

#define SE_MONSDEAD_BEAST_S		SE_Y631	//SE_171	//ケモノ 小
#define SE_MONSDEAD_BEAST_S2	SE_Y643	//SE_186	//小動物？断末魔
#define SE_MONSDEAD_BEAST_M		SE_Y632	//SE_172	//ケモノ 中
#define SE_MONSDEAD_BEAST_L		SE_Y633	//SE_173	//ケモノ 大
#define SE_MONSDEAD_BEAST_D		SE_Y634	//SE_174	//ケモノ 鈍

#define SE_MONSDEAD_BIRD		SE_Y635	//SE_164	//鳥系
#define SE_MONSDEAD_SPLASH		SE_Y636	//SE_181	//水系
#define SE_MONSDEAD_SHELL		SE_Y637	//SE_178	//貝類系
#define SE_MONSDEAD_INSECT		SE_Y638	//SE_181	//昆虫系
#define SE_MONSDEAD_SHELLFISH	SE_Y639	//SE_183	//甲殻類系
#define SE_MONSDEAD_CREATURE	SE_Y640	//SE_185	//魔法生物系
#define SE_MONSDEAD_GRAVY		SE_Y641	//SE_187	//汁系
#define SE_MONSDEAD_DOG			SE_Y642	//SE_176	//犬系 遠吠え

#define SE_MONSDEAD_DINO_1		SE_Y645	//古代獣（凶暴）
#define SE_MONSDEAD_DINO_2		SE_Y646	//古代獣（穏やか）
#define SE_MONSDEAD_DINO_3		SE_Y647	//古代獣（金切り系）
#define SE_MONSDEAD_DINO_4		SE_Y648	//古代獣（鈍重）

//廃止予定
#define SE_MONS_SWARD			SE_Y977	//SE_188	//切る
#define SE_MONS_BAKU			SE_Y987	//SE_195	//噛み付く
#define SE_MONSDEAD_BEE			SE_Y636	//SE_181	//蜂
#define SE_MONSDEAD_BARD		SE_Y635	//SE_164	//鳥

//#define SE_MONS_FIRE			SE_201	//属性（火）
#define SE_MONS_WIND			SE_NONE	//SE_202	//属性（風）
//#define SE_MONS_STONE			SE_203	//属性（土）
#define SE_MONS_NONE			SE_NONE	//SE_204	//属性（無）
//#define SE_MONS_SUN				SE_205	//属性（雷）
//#define SE_MONS_ICE				SE_206	//属性（氷）
#define SE_MONS_WATER			SE_Y455	//SE_207	//属性（水）
//#define SE_MONS_POISON			SE_244	//属性（毒）



//ＹＳ８ザコ//////////////////////////////////////////////////////////////////////////
//
//------------------------------------------------------------
//フィールド・南部・浜周辺（ｍ0100～ｍ0119）
//------------------------------------------------------------

//m0100        小型        全        ラタニー
#define SE_M0100_ATK_1		SE_MONS_SWING_MAE_1		//huri
#define SE_M0100_ATK_2		SE_Y571					//dosun
#define SE_M0100_UNI_1		SE_MONS_JUMP_3			//jump
#define SE_M0100_UNI_2		SE_Y685					//zusa-
#define SE_M0100_STEP		SE_MONS_JUMP_1		//
#define SE_M0100_DEAD		SE_MONSDEAD_BEAST_S		//

//	m0101	ヤドカリ				※
#define SE_M0101_ATK1		SE_MONS_LIGHT_MAE_1		//泡ため
#define SE_M0101_ATK2		SE_MONS_BUBBLE			//泡とばし（単発）
#define SE_M0101_ATK3		SE_MONS_BUBBLE			//泡とばし（複数）
#define SE_M0101_ATK4		SE_NONE	//SE_MONS_LIGHT_MAE_2		//ハサミ攻撃予兆
#define SE_M0101_ATK5		SE_MONS_SWORD			//ハサミ攻撃
#define SE_M0101_DEADVO1	SE_MONSDEAD_SHELLFISH	//貝類断末魔
//eff land:1010128:454

//	m0102	マルトゥ（双頭貝？）	※
#define SE_M0102_ATK1_A		SE_MONS_PRESS			//飛び掛り
#define SE_M0102_ATK1_B		SE_MONS_NONE			//飛び掛り重ね
#define SE_M0102_ATK2		SE_MONS_SWING_4			//ぐるぐるアタック
#define SE_M0102_DEADVO1	SE_MONSDEAD_SHELLFISH	//貝類断末魔

//	m0103	トラバサミウツボ		※
#define SE_M0103_SAND		SE_MONS_EARTH			//砂から出現
#define SE_M0103_SAND2		SE_Y509	//SE_MONS_ROCK_MAE_1		//砂にもぐる
#define SE_M0103_ATK1		SE_MONS_BAKU			//かみつき
#define SE_M0103_ATK2		SE_MONS_LIGHT_MAE_1		//水ため
#define SE_M0103_ATK3		SE_MONS_SPLASH			//水とばし
#define SE_M0103_DEADVO1	SE_MONSDEAD_GRAVY		//汁系断末魔
//eff splash:1010330:589
//eff splash_chr:1010325:454

//	m0104	ヴェアスデーラ（ヒトデ）※
#define SE_M0104_KAMAE		SE_MONS_NABA			//uneune
#define SE_M0104_JUMP		SE_MONS_SKILL			//ジャンプ
#define SE_M0104_LAND		SE_MONS_HIT_2			//着地
#define SE_M0104_ATK1		SE_MONS_EARTH			//腕叩きつけ
#define SE_M0104_ATK1A		SE_Y555			//kamae
#define SE_M0104_ATK2		SE_MONS_SWING_4			//回転攻撃
#define SE_M0104_DEADVO1	SE_MONSDEAD_BEAST_D		//死亡		

//	m0105	ルシーガ（鳥）			※
#define	SE_M0105_ATK1		SE_MONS_SWING_4		//ぐるっと回転（予兆）
#define	SE_M0105_ATK2		SE_MONS_DASH	//SE_258					//刺す
#define	SE_M0105_DEADVO1	SE_MONSDEAD_BIRD		//鳥系断末魔

//	m0106	ヴォルロフ（オオカミ）	※
#define SE_M0106_GROW		SE_MONVO_DOG	//SE_MONSDEAD_BEAST_M		//うなり
#define SE_M0106_ATK1		SE_MONS_DASH		//飛び掛り攻撃
#define SE_M0106_JUMP		SE_MONS_JUMP_1		//
#define SE_M0106_DEADVO1	SE_MONSDEAD_DOG			//犬系

//	m0107	レーミット（リス）		※
#define SE_M0107_ATK1		SE_MONS_SKILL			//尻尾攻撃
#define SE_M0107_DEADVO1	SE_MONSDEAD_BEAST_S2	//小動物系

//	m0108	モルヴィ（モグラ）		※
#define SE_M0108_ATK1		SE_Y509	//SE_MONS_ROCK_MAE_1		//土かき集め
#define SE_M0108_ATK2		SE_MONS_ROCK			//土飛ばし
#define SE_M0108_DEADVO1	SE_MONSDEAD_BEAST_S		//獣系
//eff land:1010815:508

//	m0109	ブアル（コウモリ）		※
#define SE_M0109_ATK1_A		SE_MONS_LIGHT_MAE_1		//超音波予兆
#define SE_M0109_ATK1_B		SE_MONS_LASER_1			//超音波
#define SE_M0109_DEADVO1	SE_MONSDEAD_BARD		//死亡

//	m0110	アナプシー（アメフラシ）※
#define SE_M0110_ATK1_A		SE_MONS_NABA			//水飛ばし予兆
#define SE_M0110_ATK1_B		SE_MONS_SPLASH	//SE_322					//水飛ばし
#define SE_M0110_DEADVO1	SE_MONSDEAD_GRAVY		//死亡
//eff splash:1010128:454

//	m0111	ディモラ・ロア			※
#define SE_M0111_KAMAE		SE_Y554			//kamae
#define SE_M0111_ATK1		SE_MONS_SWING_3		587//腕振り
#define SE_M0111_ATK2_A		SE_MONS_SWING_MAE_2		//ボディプレス予兆
#define SE_M0111_ATK2_B		SE_MONS_PRESS			//ボディプレス
#define SE_M0111_ATK2_C		SE_DEAD_DOWN			//ボディプレス重ね
#define SE_M0111_ATK3_A		SE_MONS_LIGHT_MAE_1		//超音波予兆
#define SE_M0111_ATK3_B		SE_MONS_LASER_1			//超音波
#define SE_M0111_ATK3_C		SE_MONS_HADOU			//超音波
#define SE_M0111_DEADVO1	SE_MONSDEAD_BEAST_M		//SE_173					//死亡
#define SE_M0111_DEADVO2	SE_Y570		//SE_173					//死亡
#define SE_M0111_FOOT		SE_Y550			//SE_231					//死亡後ダウン
#define SE_M0111_DOWN		SE_MONS_EARTH			//SE_231					//死亡後ダウン

//	m0112	リプシオス（ヤドカリ黄）※
#define SE_M0112_ATK1		SE_MONS_SWORD		//SE_235					//ハサミ
#define SE_M0112_ATK2		SE_MONS_BUBBLE			//SE_321					//泡吹き
#define SE_M0112_ATK2A		SE_Y470			//SE_321					//泡吹き
#define SE_M0112_ATK3		SE_MONS_LIGHT_MAE_2		//ハサミ攻撃予兆
#define SE_M0112_ATK4		SE_MONS_LIGHT_MAE_1		//泡ため
#define SE_M0112_DEADVO1	SE_MONSDEAD_SHELLFISH	//貝類断末魔
//eff land:1011230:454
//eff splash:1011221:454

//	m0113	ワーグル（オオカミ）	※
#define SE_M0113_GROW		SE_MONVO_DOG	//うなり
#define SE_M0113_ATK1		SE_MONS_BITE			//かみつき攻撃
#define SE_M0113_JUMP		SE_MONS_JUMP_1		//
#define SE_M0113_DEADVO1	SE_MONSDEAD_DOG			//犬系

//------------------------------------------------------------
//ダンジョン・珊瑚の森（ｍ0120～ｍ0139）
//------------------------------------------------------------

//	m0120	ムラカメレ（カメレオン）※
#define SE_M0120_JUMP		SE_MONS_JUMP_1			//ジャンプ
#define SE_M0120_ATK1		SE_MONS_LIGHT_MAE_2		//攻撃予兆：現状コメントアウト中
#define SE_M0120_ATK2		SE_Y559	//SE_MONS_SWARD			//尻尾攻撃
#define SE_M0120_ATK3		SE_MONS_DASH			//舌攻撃
#define SE_M0120_DEADVO1	SE_MONSDEAD_BEAST_S		//小型爬虫類断末魔

//	m0121	ターガニオン（タカアシガニ）※
#define SE_M0121_JUMP		SE_MONS_JUMP_3		//SE_189					//ジャンプ
#define SE_M0121_ATK1		SE_Y563	//SE_MONS_JUMP_1		//SE_189					//ジャンプ攻撃
#define SE_M0121_ATK2		SE_MONS_PRESS		//SE_232					//着地攻撃
#define SE_M0121_DEADVO1	SE_MONSDEAD_SHELL		//甲殻類断末魔

//	m0122	ラピーニャ（ピラニア）		※
#define SE_M0122_ATK1		SE_MONS_WATER			//攻撃予兆
#define SE_M0122_ATK2		SE_MONS_SPLASH			//攻撃（突進泳ぎ）
#define SE_M0122_ATK3		SE_MONS_BUBBLE			//攻撃（突進泳ぎ）
#define SE_M0122_DEADVO1	SE_MONSDEAD_SPLASH		//魚類断末魔
#define	SE_M0122_UNI		SE_Y996					//陸上でピチピチ跳ねる piti
//eff land:1012251:454

//	m0123	グワラニーガ				※
#define SE_M0123_JUMP		SE_MONS_JUMP_2			//ジャンプ
#define SE_M0123_LAND		SE_DEAD_DOWN			//land
#define SE_M0123_ATK1		SE_MONS_SWING_3			//右攻撃（なぎ払い）
#define SE_M0123_ATK2		SE_MONS_SPEAR			//左攻撃（突き）
#define SE_M0123_ATK2A		SE_MONS_HIT_2			//左攻撃（突き）
#define SE_M0123_ATK3		SE_MONS_HADOU			//SE_237					//毒霧攻撃
#define SE_M0123_ATK3A		SE_Y585			//SE_237					//毒霧攻撃
#define SE_M0123_ATK4		SE_Y565			//SE_237					//毒霧攻撃
#define SE_M0123_MOV		SE_Y554			//SE_237					//毒霧攻撃
#define SE_M0123_DEADVO1	SE_MONSDEAD_BEAST_M		//甲殻類断末魔
#define SE_M0123_DEADVO2	SE_MONSDEAD_SHELLFISH		//甲殻類断末魔
#define SE_M0123_DOWN		SE_MONS_EARTH		//甲殻類断末魔

//m0124        小型        全        珊瑚砲台
#define SE_M0124_SAND		SE_MONS_EARTH			//砂から出現
#define SE_M0124_SAND2		SE_MONS_ROCK_MAE_1		//砂にもぐる
#define SE_M0124_ATK1		SE_MONS_SWING_4			//
#define SE_M0124_ATK2		SE_MONS_LIGHT_MAE_1		//水ため
#define SE_M0124_ATK3		SE_MONS_SPLASH			//水とばし
#define SE_M0124_DEADVO1	SE_MONSDEAD_GRAVY		//汁系断末魔
//------------------------------------------------------------
//フィールド・南部・浜周辺・追加分（ｍ0140～ｍ0199）
//------------------------------------------------------------
//m0140        小型        斬        タノツオシゴト
#define SE_M0140_ATK1		SE_MONS_SPLASH		//水 psyu-
#define SE_M0140_ATK2		SE_Y587				//水 haku
#define SE_M0140_JUMP		SE_MONS_JUMP_1		//水 haku
#define SE_M0140_DEAD		SE_MONSDEAD_SPLASH		//
//eff splash:1014020:454

//m0141        小型        打        ターガニオン２
#define SE_M0141_JUMP		SE_MONS_JUMP_3		//SE_189					//ジャンプ
#define SE_M0141_ATK1		SE_Y563	//SE_MONS_JUMP_1		//SE_189					//ジャンプ攻撃
#define SE_M0141_ATK2		SE_MONS_PRESS		//SE_232					//着地攻撃
#define SE_M0141_DEADVO1	SE_MONSDEAD_SHELL		//甲殻類断末魔

//m0142        中型        全        フジツボットセイ
#define SE_M0142_ATK11		SE_Y555			//kamae
#define SE_M0142_ATK12		SE_Y565			//huri
#define SE_M0142_ATK21		SE_Y572			//buruburu
#define SE_M0142_ATK22		SE_Y553			//hassya
#define	SE_M0142_JUMP		SE_Y459			//jump
#define	SE_M0142_LAND		SE_MONS_EARTH			//
#define	SE_M0142_DOWN		SE_DEAD_DOWN			//
#define	SE_M0142_DEAD		SE_MONSDEAD_BEAST_D			//
//eff land:1014240:587

//m0143        小型        斬        砲台型植物
#define SE_M0143_ATK11		SE_MONS_NABA		//hassya
#define SE_M0143_ATK21		SE_MONS_SWING_2			//furu
#define SE_M0143_ATK22		SE_MONS_SKILL			//hassya
#define	SE_M0143_DEAD		SE_MONSDEAD_INSECT			//
//eff land:1014330:587

//m0144        小型        全        モアドー２
#define SE_M0144_ATK11		SE_MONS_SKILL		//huri
#define SE_M0144_ATK31		SE_MONS_HIT_2			//tuki
#define SE_M0144_JUMP		SE_MONS_JUMP_3			//
#define SE_M0144_JUMP_2		SE_MONS_JUMP_1			//
#define	SE_M0144_DEAD		SE_MONSDEAD_BEAST_S			//

//m0145        小型        射        マツカサムシ２
#define SE_M0145_FLY		SE_MONVO_BEE			//羽音	：減衰距離を調節したい
#define SE_M0145_ATK1		SE_MONS_NABA		//haku
#define SE_M0145_ATK2		SE_MONS_WING_1			//poison
#define SE_M0145_ATK3		SE_MONS_SPLASH			//poison
#define SE_M0145_DEADVO1	SE_MONSDEAD_INSECT		//虫系断末魔

//m0146        中型        全        ゲルプ２
#define SE_M0146_ATK1		SE_MONS_HIT_2		//
#define SE_M0146_ATK2		SE_MONS_SWING_4		//
#define SE_M0146_ATK3		SE_Y582		//
#define SE_M0146_DEAD		SE_MONSDEAD_GRAVY		//
#define SE_M0146_DOWN		SE_Y575		//
//eff hit:1014650:534
//eff bound:1014530:687

//m0147        大型        打        グワラニーガ２
#define SE_M0147_JUMP		SE_Y459			//ジャンプ
#define SE_M0147_ATK1		SE_MONS_SWING_3			//右攻撃（なぎ払い）
#define SE_M0147_ATK2		SE_MONS_SPEAR			//左攻撃（突き）
#define SE_M0147_ATK2A		SE_MONS_HIT_2			//左攻撃（突き）
#define SE_M0147_ATK3		SE_MONS_HADOU			//SE_237					//毒霧攻撃
#define SE_M0147_ATK3A		SE_Y585			//SE_237					//毒霧攻撃
#define SE_M0147_ATK4		SE_Y565			//SE_237					//毒霧攻撃
#define SE_M0147_MOV		SE_Y554			//SE_237					//毒霧攻撃
#define SE_M0147_DEADVO1	SE_MONSDEAD_BEAST_M		//甲殻類断末魔
#define SE_M0147_DEADVO2	SE_MONSDEAD_SHELLFISH		//甲殻類断末魔
#define SE_M0147_DOWN		SE_MONS_EARTH		//甲殻類断末魔
#define SE_M0147_LAND		SE_DEAD_DOWN		//甲殻類断末魔

//m0148        小型        射        ルシーガ２
#define	SE_M0148_ATK1		SE_MONS_SWING_4		//ぐるっと回転（予兆）
#define	SE_M0148_ATK2		SE_MONS_DASH	//SE_258					//刺す
#define	SE_M0148_ATK3		SE_MONS_TAME_1	//tame
#define	SE_M0148_ATK4		SE_MONS_NABA	//hassya

#define	SE_M0148_DEADVO1	SE_MONSDEAD_BIRD		//鳥系断末魔
//eff land:1014820:589

//m0149        小型        斬        トラバサミウツボ２
#define SE_M0149_SAND		SE_MONS_EARTH			//砂から出現
#define SE_M0149_SAND2		SE_Y509	//SE_MONS_ROCK_MAE_1		//砂にもぐる
#define SE_M0149_ATK1		SE_MONS_BITE			//かみつき
#define SE_M0149_ATK2		SE_MONS_LIGHT_MAE_1		//水ため
#define SE_M0149_ATK3		SE_MONS_SPLASH			//水とばし
#define SE_M0149_DEADVO1	SE_MONSDEAD_GRAVY		//汁系断末魔
//eff splash_chr:1014925:454
//eff splash:1014930:589

//m0150        中型        全        ヴェアスデーラ２
#define SE_M0150_KAMAE		SE_MONS_NABA			//uneune
#define SE_M0150_JUMP		SE_MONS_SKILL			//ジャンプ
#define SE_M0150_LAND		SE_MONS_HIT_2			//着地
#define SE_M0150_ATK1		SE_MONS_EARTH			//腕叩きつけ
#define SE_M0150_ATK1A		SE_Y555			//kamae
#define SE_M0150_ATK2		SE_MONS_SWING_4			//回転攻撃
#define SE_M0150_DEADVO1	SE_MONSDEAD_BEAST_D		//死亡		
#define SE_M0150_DOWN		SE_Y597		//knockdown

//m0151        小型        全        オケラーシュモク
#define SE_M0151_ATK1		SE_MONS_BAKU			//kamituku
#define SE_M0151_ATK2		SE_MONS_SPLASH_2			//tame
#define SE_M0151_ATK3		SE_MONS_DASH			//hassya
#define SE_M0151_JUMP		SE_MONS_JUMP_3			//
#define SE_M0151_DEAD		SE_MONSDEAD_SPLASH			//

//XXX 廃止？	m0152        小型        全        ピッカード原種

//------------------------------------------------------------
//フィールド・南部・熱帯域（ｍ0200～ｍ0299）
//------------------------------------------------------------
//▼森林			
//	m0200	ドング					※
#define SE_M0200_JUMP		SE_MONS_JUMP_1			//ジャンプ
#define SE_M0200_ATK		SE_Y565			//チョーパン
#define SE_M0200_DEADVO1	SE_MONSDEAD_INSECT		//虫系（植物系？）断末魔

//	m0201	ラーノーネン			※
#define SE_M0201_JUMP		SE_MONS_JUMP_1		//ジャンプ
#define SE_M0201_ATK1		SE_Y554		//逆往復ビンタ予兆
#define SE_M0201_ATK2		SE_Y565			//逆往復ビンタ
#define SE_M0201_ATK3		SE_Y455		//毒汁予兆
#define SE_M0201_ATK4		SE_MONS_SPLASH_3			//毒汁発射
#define SE_M0201_DEADVO1	SE_MONSDEAD_GRAVY		//虫系断末魔
//eff splash_chr:1020140:561
//eff splash:1020150:561

//	m0202	風船蚊					※
#define SE_M0202_FLY		SE_MONVO_BEE			//羽音（蚊、ハエ系のブーン。出来れば鳴らしたい）
#define SE_M0202_ATK1		SE_Y555		//口吻突き刺し突進予兆
#define SE_M0202_ATK2		SE_Y596		//口吻突き刺し突進
#define SE_M0202_ATK3		SE_MONS_NABA			//SE_224					//口吻突き刺し突進後吸い吸い
#define SE_M0202_ATK4		SE_Y455		//血液吹き付け予兆
#define SE_M0202_ATK5		SE_Y587			//血液吹き付け
#define SE_M0202_DEADVO1	SE_MONSDEAD_INSECT		//虫系断末魔
#define SE_M0202_DOWN		SE_DEAD_DOWN		//虫系断末魔
#define SE_M0202_GROWL		SE_Y570		//虫系断末魔

//	m0203	ナガゲカバ				※
#define SE_M0203_JUMP		SE_MONS_JUMP_4		//ジャンプ
#define SE_M0203_ATK1		SE_MONSDEAD_DINO_4		//かみつき予兆
#define SE_M0203_ATK2		SE_MONS_BITE			//かみつき
#define SE_M0203_ATK2A		SE_Y587			//かみつき
#define SE_M0203_ATK3		SE_MONSDEAD_DINO_4	//突進予兆
#define SE_M0203_ATK4		SE_MONS_FOOT_2			//突進（SE_196も検討？）
#define SE_M0203_ATK4A		SE_MONS_DASH			//突
#define SE_M0203_BRAKE		SE_Y685			//brake
#define SE_M0203_DOWN		SE_DEAD_DOWN			//
#define SE_M0203_DEADVO1	SE_MONSDEAD_BEAST_L		//大型獣系断末魔


//------------------------------------------------------------
//ダンジョン・原生林（ｍ0220～ｍ0239）
//------------------------------------------------------------
//	m0220	ビチルス（ヒルっぽいもの）	※
#define SE_M0220_JUMP		SE_MONS_JUMP_1		//ジャンプ
#define SE_M0220_ATK1		SE_Y559				//攻撃
#define SE_M0220_DEADVO1	SE_MONSDEAD_SPLASH				//軟体系？断末魔

//	m0221	ツボポン					※
#define SE_M0221_JUMP		SE_MONS_JUMP_1			//ジャンプ
#define SE_M0221_ATK1		SE_Y455		//吐き出し予兆
#define SE_M0221_ATK2		SE_MONS_SPLASH_3			//吐き出し
#define SE_M0221_DEADVO1	SE_MONSDEAD_INSECT		//植物系断末魔
//eff splash_chr:1022140:561
//eff splash:1022150:561

//	m0222	食人カズラ					※
#define SE_M0222_ATK1		SE_MONS_LIGHT_MAE_2		//殴り予兆
#define SE_M0222_ATK2		SE_MONS_SWING_3			//殴り
#define SE_M0222_ATK3		SE_Y555					//タネ飛ばし予兆
#define SE_M0222_ATK4		SE_Y462	//SE_MONS_ATTACK_2		//タネ飛ばし
#define SE_M0222_ATK5		SE_Y554					//毒ガス予兆
#define SE_M0222_ATK6		SE_MONS_HADOU		//SE_237					//毒ガス
#define SE_M0222_ATK6A		SE_Y683		//SE_237					//毒ガス
#define SE_M0222_JUMP		SE_MONS_JUMP_4			//
#define SE_M0222_LAND		SE_MONS_EARTH			//
#define SE_M0222_DEADVO1	SE_MONSDEAD_INSECT		//植物系断末魔
#define SE_M0222_DEADVO2	SE_Y570		//植物系断末魔
#define SE_M0222_DOWN		SE_DEAD_DOWN			//

//	m0223	ディンルガ					※
#define SE_M0223_ATK1		SE_Y455					//攻撃予兆（ジャンプ）
#define SE_M0223_ATK2		SE_MONS_BAKU					//攻撃
#define SE_M0223_DEADVO1	SE_MONSDEAD_SPLASH		//魚類断末魔
#define	SE_M0223_UNI		SE_Y996					////陸上でピチピチ跳ねる piti

//	m0224	サンショウワニ				※
#define SE_M0224_JUMP		SE_MONS_JUMP_4			//ジャンプ
#define SE_M0224_ATK1		SE_Y554		//かみつき予兆
#define SE_M0224_ATK2		SE_MONS_BITE			//かみつき
#define SE_M0224_ATK2A		SE_MONS_BITE_2			//かみつき
#define SE_M0224_ATK3		SE_Y455		//泥吐き予兆
#define SE_M0224_ATK4		SE_MONS_SPLASH_2		//SE_224					//泥吐き
#define SE_M0224_ATK5		SE_Y555		//尻尾攻撃予兆
#define SE_M0224_ATK6		SE_MONS_PUNCH_2	//SE_232					//尻尾攻撃
#define SE_M0224_DOWN		SE_DEAD_DOWN	//
#define SE_M0224_DEADVO1	SE_MONSDEAD_GRAVY		//魚類断末魔
//eff splash_chr:1022460:561

//m0225        小型        射        ザンギャック
#define SE_M0225_FLY		SE_MONVO_BEE			//羽音
#define SE_M0225_MOV1		SE_MONS_SWING_MAE_2		//kamae
#define SE_M0225_ATK1		SE_Y596					//sasu
#define SE_M0225_ATK2		SE_MONS_DASH			//dash
#define SE_M0225_DEAD		SE_MONSDEAD_INSECT		//

//m0226        中型        全        クノス
//動きなし
//召喚するが特にエフェクトは無いようだ

//------------------------------------------------------------
//ダンジョン・原生林・追加分（ｍ0240～ｍ0259）
//------------------------------------------------------------
//m0240        小型        射        ザンギャック２
#define SE_M0240_FLY		SE_MONVO_BEE			//羽音
#define SE_M0240_MOV1		SE_MONS_SWING_MAE_2		//kamae
#define SE_M0240_ATK1		SE_Y596					//sasu
#define SE_M0240_ATK2		SE_MONS_DASH			//dash
#define SE_M0240_DEAD		SE_MONSDEAD_INSECT		//

//m0241        中型        全        クノス２

//------------------------------------------------------------
//フィールド・南部・高原（ｍ0300～ｍ0339）
//------------------------------------------------------------

//	m0300	マツカサムシ			※
#define SE_M0300_FLY		SE_MONVO_BEE			//羽音	：減衰距離を調節したい
#define SE_M0300_ATK1		SE_MONS_LIGHT_MAE_2		//攻撃予兆
#define SE_M0300_ATK2		SE_MONS_DASH			//突進
#define SE_M0300_DEADVO1	SE_MONSDEAD_INSECT		//虫系断末魔

//	m0301	ドグルフ（青）（オオカミ）※
#define SE_M0301_GROW		SE_MONVO_DOG			//うなり
#define SE_M0301_ATK1		SE_MONS_DASH		//飛び掛り攻撃
#define SE_M0301_ATK1A		SE_MONS_BITE		//飛び掛り攻撃
#define SE_M0301_JUMP		SE_MONS_JUMP_1		//
#define SE_M0301_DEADVO1	SE_MONSDEAD_DOG			//犬系

//m0302        小型        全        コバオデッサ
#define	SE_M0302_ATK1		SE_Y481				//motiage
#define	SE_M0302_ATK2		SE_MONS_SWING_2		//poi
#define	SE_M0302_ATK3		SE_MONS_SAND		//suna 
#define	SE_M0302_ATK4		SE_MONS_DASH		//nageru
#define	SE_M0302_JUMP		SE_MONS_JUMP_3		//
#define	SE_M0302_DEAD		SE_MONSDEAD_BEAST_S		//
#define	SE_M0302_UNI1		SE_Y635				//uki-
#define	SE_M0302_UNI2		SE_Y640				//uhouho
//eff rock large:1030250:509
//eff rock_chr:1030260:506
//eff rock:1030270:506

//m0303        大型        全        バオデッサ
#define	SE_M0303_ATK11		SE_Y556				//mune
#define	SE_M0303_ATK12		SE_Y575				//kamae
#define	SE_M0303_ATK13		SE_Y565		//ude 
#define	SE_M0303_ATK21		SE_Y575		//kamae
#define	SE_M0303_ATK22		SE_MONS_DASH		// jump
#define	SE_M0303_ATK23		SE_Y720	//SE_MONS_SWING_4		// kaiten
#define	SE_M0303_ATK24		SE_MONS_PRESS		// press

#define	SE_M0303_ATK31		SE_Y575		//kamae
#define	SE_M0303_ATK32		SE_MONS_SWING_MAE_2		// jump
#define	SE_M0303_ATK33		SE_Y585		// he
#define	SE_M0303_ATK33A		SE_Y713		// he

#define	SE_M0303_MOV1		SE_Y575				//
#define	SE_M0303_MOV2		SE_MONS_SWING_4		//
#define	SE_M0303_DEAD		SE_MONSDEAD_BEAST_M	//
#define	SE_M0303_FOOT		SE_Y551				//
#define	SE_M0303_DOWN		SE_DEAD_DOWN			//
#define	SE_M0303_JUMP		SE_MONS_SWING_MAE_2		//

//------------------------------------------------------------
//フィールド・南部・高原・追加分（ｍ0340～ｍ0399）
//------------------------------------------------------------
//m0340        中型        全        ナガゲカバ２
#define SE_M0340_JUMP		SE_MONS_JUMP_4		//ジャンプ
#define SE_M0340_ATK1		SE_MONSDEAD_DINO_4		//かみつき予兆
#define SE_M0340_ATK2		SE_MONS_BITE			//かみつき
#define SE_M0340_ATK2A		SE_Y587			//かみつき
#define SE_M0340_ATK3		SE_MONSDEAD_DINO_4	//突進予兆
#define SE_M0340_ATK4		SE_MONS_FOOT_2			//突進（SE_196も検討？）
#define SE_M0340_ATK4A		SE_MONS_DASH			//突
#define SE_M0340_BRAKE		SE_Y685			//brake
#define SE_M0340_DOWN		SE_DEAD_DOWN			//
#define SE_M0340_DOWN2		SE_Y572			//
#define SE_M0340_DEADVO1	SE_MONSDEAD_BEAST_L		//大型獣系断末魔

//m0341        小型        全        コバオデッサ２
#define	SE_M0341_ATK1		SE_Y481				//motiage
#define	SE_M0341_ATK2		SE_MONS_SWING_2		//poi
#define	SE_M0341_ATK3		SE_MONS_SAND		//suna 
#define	SE_M0341_ATK4		SE_MONS_DASH		//nageru
#define	SE_M0341_JUMP		SE_MONS_JUMP_3		//
#define	SE_M0341_DEAD		SE_MONSDEAD_BEAST_S		//
#define	SE_M0341_UNI1		SE_Y635				//uki-
#define	SE_M0341_UNI2		SE_Y640				//uhouho
//eff rock large:1034150:509
//eff rock_chr:1034160:506
//eff rock:1034170:506

//------------------------------------------------------------
//フィールド・山岳（ｍ0400～ｍ0499）
//------------------------------------------------------------
//m0400        小型        全        モアドー
#define SE_M0400_ATK11		SE_MONS_SKILL		//huri
#define SE_M0400_ATK31		SE_MONS_HIT_2		//tuki
#define SE_M0400_JUMP		SE_MONS_JUMP_3		//
#define SE_M0400_JUMP_2		SE_MONS_JUMP_1		//
#define SE_M0400_FOOT		SE_Y552		//
#define	SE_M0400_DEAD		SE_MONSDEAD_BEAST_S		//

//m0401        小型        射        アングヴォータル
#define	SE_M0401_ATK1		SE_MONS_SWING_4		//ぐるっと回転（予兆）
#define	SE_M0401_ATK2		SE_MONS_DASH	//SE_258					//刺す
#define	SE_M0401_ATK3		SE_MONS_TAME_1	//tame
#define	SE_M0401_ATK4		SE_MONS_NABA	//hassya

//m0402        大型        打        ロックマジロ
#define SE_M0402_JUMP		SE_MONS_JUMP_4		//
#define SE_M0402_FOOT		SE_Y552		//
#define SE_M0402_DEAD		SE_MONSDEAD_BEAST_D		//
#define SE_M0402_DOWN		SE_DEAD_DOWN		//

#define SE_M0402_ATK11		SE_Y554		//okiru
#define SE_M0402_ATK12		SE_MONS_SWING_4		//kaiten
#define SE_M0402_ATK12A		SE_MONS_DASH		//kaiten
#define SE_M0402_ATK13		SE_MONS_PRESS		//press
#define SE_M0402_ATK21		SE_MONS_HIT_2		//tukiage
#define SE_M0402_ATK21A		SE_Y557		//tukiage

//m0403        中型        全        カマクビムカデ
#define SE_M0403_JUMP		SE_MONS_JUMP_4		//
#define SE_M0403_DOWN		SE_DEAD_DOWN		//
#define SE_M0403_DEAD		SE_MONSDEAD_DINO_3		//
#define SE_M0403_ATK11		SE_Y554		//kamae
#define SE_M0403_ATK12		SE_MONS_BITE		//kamu
#define SE_M0403_ATK12A		SE_MONS_BITE_2		//kamu

#define SE_M0403_ATK21		SE_Y455				//tame water
#define SE_M0403_ATK22		SE_MONS_SPLASH_2	//water
//eff splash_chr:1040330:561
//eff splash:1040360:561

//------------------------------------------------------------
//ダンジョン・侵食谷（ｍ0420～ｍ0439）（ｍ2100～ｍ2109）
//------------------------------------------------------------

//	m2100	子グモ						※
#define SE_M2100_ATK1		SE_MONS_WING_1	//SE_184					//飛び掛り予兆
#define SE_M2100_ATK2		SE_MONS_SWORD			//飛び掛り
#define SE_M2100_ATK3		SE_MONS_LIGHT_MAE_1		//毒霧予兆
#define SE_M2100_ATK4		SE_Y587		//SE_237					//毒霧発射
#define SE_M2100_ATK5		SE_Y455		//暗闇予兆
#define SE_M2100_ATK6		SE_MONS_SPLASH_3	//SE_224					//暗闇発射
#define SE_M2100_JUMP		SE_MONS_JUMP_1		//SE_224					//暗闇発射
#define SE_M2100_DEADVO1	SE_MONSDEAD_INSECT		//昆虫系断末魔

//	m2101	谷鳥						※
#define SE_M2101_FLAP		SE_MONS_WING_2		//SE_234				//はばたき（未入力。待機時、移動時に羽の動きに合わせて鳴らせるなら）
#define SE_M2101_ATK1		SE_MONS_SWING_MAE_2	//1：宙返り
#define SE_M2101_ATK2		SE_Y568			//グライダー攻撃 kaze
#define SE_M2101_ATK2A		SE_MONS_DASH	//グライダー攻撃 dash
#define SE_M2101_ATK3		SE_MONS_WING_2	//SE_234				//2：上空退避
#define SE_M2101_ATK4		SE_MONS_BITE	//SE_190				//2：爪攻撃
#define SE_M2101_ATK5		SE_MONS_SWING_MAE_2	//3：羽とばし予兆
#define SE_M2101_ATK6		SE_Y590			//SE_204				//3：羽とばし
#define SE_M2101_ATK7		SE_MONS_DASH			//rakka
#define SE_M2101_DEADVO1	SE_MONSDEAD_BARD	//鳥系断末魔
#define SE_M2101_DOWN		SE_DEAD_DOWN		//死亡後着地
#define SE_M2101_DOWN2		SE_Y566		//死亡後着地

//	m2102	ウシガエル					※
#define SE_M2102_FOOT		SE_MONS_FOOT_2			//
#define SE_M2102_DOWN		SE_DEAD_DOWN			//1：ジャンプ
#define SE_M2102_JUMP		SE_Y554			//1：ジャンプ
#define SE_M2102_ROCK		SE_MONS_ATTACK_2	//SE_244					//1：落石（エフェクトに仕込む？）
#define SE_M2102_ATK1		SE_Y966		//SE_237					//2：毒霧発射
#define SE_M2102_ATK1A		SE_MONS_DASH		//SE_237					//2：毒霧発射
#define SE_M2102_ATK2		SE_Y597	//SE_226					//3：舌出す
#define SE_M2102_ATK2A		SE_Y587	////3：舌出す
#define SE_M2102_ATK3		SE_Y572	//SE_284					//3：飲み込み
#define SE_M2102_ATK4		SE_Y587		//SE_224					//3：吐き出し
#define SE_M2102_ATK5		SE_Y575		///breath kamae
#define SE_M2102_UNI		SE_Y597		//gero
#define SE_M2102_DEADVO1	SE_MONSDEAD_BEAST_D		//？系断末魔
//eff land:1210230:587

//	m2103	ブアル２（コウモリ）		※m0109
#define SE_M2103_ATK1_A		SE_MONS_LIGHT_MAE_1		//超音波予兆
#define SE_M2103_ATK1_B		SE_MONS_LASER_1			//超音波
#define SE_M2103_DEADVO1	SE_MONSDEAD_BARD		//鳥系断末魔
//ピヨった時にじたばた系のSEが必要かも

//------------------------------------------------------------
//ダンジョン・ジャンダルム（ｍ0440～ｍ0459）
//------------------------------------------------------------
//m0440        中型        全        サスピオン
#define	SE_M0440_JUMP		SE_MONS_JUMP_1		//
#define	SE_M0440_DEAD		SE_MONSDEAD_INSECT		//
#define	SE_M0440_LAND		SE_DEAD_DOWN		//
#define	SE_M0440_DOWN		SE_Y582		//

#define	SE_M0440_ATK11		SE_Y554		//kamae
#define	SE_M0440_ATK12		SE_Y565		//hasami

#define	SE_M0440_ATK21		SE_MONS_SWING_4		//tail
#define	SE_M0440_ATK21A		SE_Y455		//tail
#define	SE_M0440_ATK22		SE_MONS_SPLASH_3		//hassya
//eff splash_chr:1044030:561
//eff splash:1044040:561

//m0441        小型        全        ヤマアラシ
#define	SE_M0441_ATK11		SE_MONS_JUMP_1			// jump
#define	SE_M0441_ATK12		SE_MONS_SWING_3			// kaiten
#define	SE_M0441_ATK13		SE_MONS_DASH	// kaiten dash
#define	SE_M0441_ATK14		SE_Y587			// splash
#define	SE_M0441_JUMP		SE_MONS_JUMP_1			//
#define	SE_M0441_DEAD		SE_MONSDEAD_SPLASH			//

//m0442        小型        打        ヨロイヘビ
#define	SE_M0442_ATK11		SE_MONS_JUMP_1			// jump
#define	SE_M0442_ATK12		SE_MONS_SKILL			// kami
#define	SE_M0442_ATK21		SE_MONS_SWING_3		// tail1
#define	SE_M0442_ATK22		SE_Y559				// tail2
#define	SE_M0442_JUMP		SE_MONS_JUMP_1			//
#define	SE_M0442_DEAD		SE_MONSDEAD_INSECT			//

//------------------------------------------------------------
//フィールド・北部・原生林（ｍ0500～ｍ0599）
//------------------------------------------------------------
//m0500        小型        全        ディクティオン
#define	SE_M0500_ATK11		SE_MONS_JUMP_1			// jump
#define	SE_M0500_ATK12		SE_MONS_SWING_3			// kaiten
#define	SE_M0500_ATK12A		SE_Y565				// kaiten
#define	SE_M0500_ATK13		SE_Y587			// splash

//m0501        中型        全        フラレオアントン
#define	SE_M0501_ATK11		SE_Y554			//kamae
#define	SE_M0501_ATK12		SE_Y565			//hasami
#define	SE_M0501_ATK21		SE_Y576			//kaiten
#define	SE_M0501_ATK22		SE_Y587			//kiri
#define	SE_M0501_ATK22A		SE_Y565			//kiri
#define	SE_M0501_ATK31		SE_MONS_SWING_MAE_2			//kaiten
#define	SE_M0501_ATK32		SE_MONS_DASH			//dash
#define	SE_M0501_DEAD		SE_MONSDEAD_BEAST_M			//
#define	SE_M0501_DOWN		SE_DEAD_DOWN			//

//m0502        小型        斬        イムスーラ
#define	SE_M0502_ATK11		SE_Y588			//jump
#define	SE_M0502_ATK12		SE_Y587			//land
#define	SE_M0502_JUMP		SE_MONS_JUMP_1			//
#define	SE_M0502_DEAD		SE_MONSDEAD_SPLASH			//

//m0503        小型        全        冬虫夏草カブトガニ
#define	SE_M0503_ATK11		SE_Y585			//tame
#define	SE_M0503_ATK12		SE_MONS_SPLASH_3			//hassya
#define	SE_M0503_ATK21		SE_MONS_SWING_3			//huri
#define	SE_M0503_ATK22		SE_Y587			//kiri
#define	SE_M0503_JUMP		SE_MONS_JUMP_1			//
#define	SE_M0503_DEAD		SE_MONSDEAD_INSECT			//

//m0504        中型        全        キリンムシ
#define	SE_M0504_ATK11		SE_Y554				//kamae
#define	SE_M0504_ATK12		SE_Y565	//kama
#define	SE_M0504_ATK12A		SE_MONS_HIT_2	//kama
#define	SE_M0504_ATK21		SE_MONS_DASH				//jump
#define	SE_M0504_ATK22		SE_MONS_EARTH	//land
#define	SE_M0504_ATK23		SE_Y565	//kama
#define	SE_M0504_JUMP		SE_MONS_SWING_MAE_2			//
#define	SE_M0504_LAND		SE_DEAD_DOWN			//
#define	SE_M0504_DEAD		SE_MONSDEAD_BEAST_M			//
#define	SE_M0504_DOWN		SE_DEAD_DOWN			//

//------------------------------------------------------------
//フィールド・北部・大平原（ｍ0600～ｍ0699）
//------------------------------------------------------------
//m0600        小型        全        ギリーカミキリ
#define	SE_M0600_ATK11		SE_MONS_DASH				//
#define	SE_M0600_JUMP		SE_MONS_JUMP_1			//
#define	SE_M0600_DEAD		SE_MONSDEAD_INSECT			//

//m0601        小型        全        ローリングフラワー
#define	SE_M0601_ATK11		SE_MONS_JUMP_1				//jump
#define	SE_M0601_ATK12		SE_Y508			//kaiten
#define	SE_M0601_ATK13		SE_Y556			//hit
#define	SE_M0601_JUMP		SE_MONS_JUMP_1			//
#define	SE_M0601_DEAD		SE_MONSDEAD_INSECT			//

//m0602        中型        全        ビッグホーンバイソン
#define	SE_M0602_ATK11		SE_Y554	//kamae
#define	SE_M0602_ATK12		SE_Y560			//tukiage
#define	SE_M0602_ATK21		SE_MONS_SAND	//foot suna
#define	SE_M0602_ATK22		SE_Y562			//kick
#define	SE_M0602_ATK31		SE_MONS_SAND	//foot suna
#define	SE_M0602_ATK32		SE_MONS_DASH	//dash
#define	SE_M0602_ATK33		SE_Y550	//foot
#define	SE_M0602_ATK34		SE_Y560	//tukiage
#define	SE_M0602_JUMP		SE_MONS_SWING_MAE_2			//
#define	SE_M0602_LAND		SE_DEAD_DOWN			//
#define	SE_M0602_DEAD		SE_MONSDEAD_BEAST_M			//
#define	SE_M0602_DOWN		SE_DEAD_DOWN			//
#define	SE_M0602_DOWN2		SE_Y576			//
#define	SE_M0602_FOOT		SE_Y550			//

//m0603        小型        斬        ゲロックス
#define	SE_M0603_ATK11		SE_Y554		//kamae
#define	SE_M0603_ATK12		SE_MONS_SPLASH_2			//gero
#define	SE_M0603_ATK21		SE_Y554		//kamae
#define	SE_M0603_ATK22		SE_MONS_DASH		//bero
#define	SE_M0603_ATK31		SE_Y563		//
#define	SE_M0603_JUMP		SE_MONS_SWING_MAE_2			//
#define	SE_M0603_DEAD		SE_MONSDEAD_SPLASH			//
//eff land:1060320:587

//m0604        小型        打        レドリコーラ
#define	SE_M0604_ATK11		SE_Y996		//pitipit uni1
#define	SE_M0604_ATK11A		SE_Y454		//pitipiti
#define	SE_M0604_ATK12		SE_Y587		//kaiten
#define	SE_M0604_ATK21		SE_Y455		//mov swim
#define	SE_M0604_ATK22		SE_Y587		//kaiten
#define	SE_M0604_ATK22A		SE_Y565		//kaiten
#define	SE_M0604_DEAD		SE_MONSDEAD_SPLASH		//

//m0605        大型        全        ダンディルイーノ
#define	SE_M0605_JUMP		SE_MONS_SWING_MAE_2			//
#define	SE_M0605_LAND		SE_DEAD_DOWN			//
#define	SE_M0605_DEAD		SE_MONSDEAD_BEAST_M			//
#define	SE_M0605_DOWN		SE_DEAD_DOWN			//
#define	SE_M0605_DOWN2		SE_Y576			//
#define	SE_M0605_ROAR		SE_Y645			//
#define	SE_M0605_UNI		SE_Y576			//

#define	SE_M0605_ATK11		SE_Y575				//kamae
#define	SE_M0605_ATK12		SE_MONS_PRESS		//press
#define	SE_M0605_ATK12A		SE_MONS_HIT_2		//press

#define	SE_M0605_ATK31		SE_MONS_SAND		//foot suna
#define	SE_M0605_ATK32		SE_MONS_DASH		//dash
#define	SE_M0605_ATK33		SE_Y550				//foot

//------------------------------------------------------------
//ダンジョン・バハの斜塔（ｍ0620～ｍ0639）
//------------------------------------------------------------
//m0620        小型        全        ボスお供
#define	SE_M0620_ATK11		SE_Y565				//kami
#define	SE_M0620_ATK21		SE_Y584				//fire
#define	SE_M0620_ATK31		SE_Y476				//laser thin
#define	SE_M0620_ATK32		SE_Y746				//laser fat
#define	SE_M0620_ATK32A		SE_Y558				//laser fat

#define	SE_M0620_DEAD		SE_Y570				//gya-
#define	SE_M0620_DEAD_2		SE_Y509				//garagara

//m0621        未定        全        固定砲台
#define	SE_M0621_ATK11		SE_MONS_TAME_1				//tame
#define	SE_M0621_ATK12		SE_Y558				//hassya
#define	SE_M0621_ATK21		SE_Y732		//henkkei
#define	SE_M0621_ATK22		SE_Y760				//kaiten
#define	SE_M0621_DEAD		SE_Y505				//

//m0622        未定        全        人型
#define	SE_M0622_ATK11		SE_Y555		//kamae
#define	SE_M0622_ATK12		SE_Y565			//huri
#define	SE_M0622_ATK21		SE_Y554		//kamae
#define	SE_M0622_ATK22		SE_MONS_DASH		//dash
#define	SE_M0622_JUMP		SE_MONS_JUMP_1			//
#define	SE_M0622_DEAD		SE_Y505				//

//m0623        未定        打        ゴーレム型
#define	SE_M0623_JUMP		SE_MONS_SWING_MAE_2			//
#define	SE_M0623_LAND		SE_DEAD_DOWN			//
#define	SE_M0623_DEAD		SE_MONSDEAD_BEAST_M			//
#define	SE_M0623_DOWN		SE_DEAD_DOWN			//
#define	SE_M0623_BREAK		SE_Y546	//SE_Y769	//SE_Y505			//weak
#define	SE_M0623_BREAK2		SE_Y966	////weak
#define	SE_M0623_FOOT		SE_Y550			//

#define	SE_M0623_ATK11		SE_Y575		//kamae
#define	SE_M0623_ATK12		SE_MONS_SWING_3		//huri
#define	SE_M0623_ATK12A		SE_Y565		//huri
#define	SE_M0623_ATK21		SE_Y767			//kamae
#define	SE_M0623_ATK21A		SE_Y575			//kamae
#define	SE_M0623_ATK22		SE_Y714	//biribiri
#define	SE_M0623_ATK22A		SE_Y503	//biribiri
#define	SE_M0623_ATK22B		SE_Y717	//fire (:m0942)
#define	SE_M0623_ATK31		SE_Y767		//tame
#define	SE_M0623_ATK31A		SE_Y575		//tame
#define	SE_M0623_ATK32		SE_Y562		//hassya
//eff land:1062340:960

//------------------------------------------------------------
//ダンジョン・王家の谷（ｍ0640～ｍ0659）
//------------------------------------------------------------
//m0640        小型        全        グーグーリーバー
#define	SE_M0640_JUMP		SE_MONS_JUMP_1			//
#define	SE_M0640_UNI		SE_Y620			//
#define	SE_M0640_ATK11		SE_MONS_JUMP_1			//jump
#define	SE_M0640_ATK12		SE_MONS_SKILL			//press
#define	SE_M0640_DEAD		SE_MONSDEAD_GRAVY			//

//m0641        小型        全        ファブニール
#define	SE_M0641_ATK10		SE_Y555			//kamae
#define	SE_M0641_ATK11		SE_Y560			//sword
#define	SE_M0641_ATK21		SE_MONS_JUMP_1			//jump
#define	SE_M0641_ATK22		SE_Y560			//sword
#define	SE_M0641_ATK31		SE_Y683					//tyakka
#define	SE_M0641_ATK32		SE_MONS_SWING_1			//poi
#define	SE_M0641_JUMP		SE_MONS_JUMP_1			//
#define	SE_M0641_STEP		SE_Y620			//
#define	SE_M0641_UNDEAD		SE_Y764			//
#define	SE_M0641_UNDEAD_A	SE_Y774			//
#define	SE_M0641_RESURRECT	SE_Y767			//
#define	SE_M0641_DEAD		SE_MONSDEAD_DINO_3			//
//eff land_yuka:1064145:717,536
//eff land_kabe:1064165:659

//m0642        小型        全        アンガンメン
#define	SE_M0642_UNDEAD		SE_Y764			//
#define	SE_M0642_UNDEAD_A	SE_Y774			//
#define	SE_M0642_RESURRECT	SE_Y767			//
#define	SE_M0642_DEAD		SE_MONSDEAD_BEAST_M			//

#define	SE_M0642_ATK11		SE_MONS_TAME_1			//tame
#define	SE_M0642_ATK12		SE_Y590			//hassya
#define	SE_M0642_ATK21		SE_MONS_TAME_1			//tame
#define	SE_M0642_ATK22		SE_Y683			//hassya
//eff land:1064220:659

//m0643        大型        全        守護者		//b105縮小版
#define	SE_M0643_JUMP			SE_Y566			//
#define	SE_M0643_LAND			SE_DEAD_DOWN			//
#define	SE_M0643_FOOT			SE_Y551			//
#define	SE_M0643_UNDEAD			SE_Y764			//
#define	SE_M0643_UNDEAD_A		SE_Y774			//
#define	SE_M0643_RESURRECT		SE_Y767			//
#define	SE_M0643_DOWN			SE_Y557			//
#define	SE_M0643_DEAD			SE_MONSDEAD_BEAST_L			//
#define	SE_M0643_DEAD_2			SE_Y511			//
#define	SE_M0643_DEAD_2A		SE_Y568	//SE_Y683			//
#define	SE_M0643_ROAR			SE_Y645			//
#define	SE_M0643_MOV			SE_Y575			//

//atk1
#define	SE_M0643_ATK1_10			SE_Y554			//kamae
#define	SE_M0643_ATK1_20			SE_Y565			//kiru
#define	SE_M0643_ATK1_30			SE_Y617	//SE_Y679			//impact

//atk2
#define	SE_M0643_ATK2_10			SE_Y554			//kamae
#define	SE_M0643_ATK2_20			SE_Y758			//kiru yoko
#define	SE_M0643_ATK2_30			SE_Y679			//impact
#define	SE_M0643_ATK2_40			SE_Y550			//foot

//atk3
#define	SE_M0643_ATK3_10			SE_Y596			//toru
#define	SE_M0643_ATK3_10A			SE_Y597			//toru
#define	SE_M0643_ATK3_20			SE_Y459			//kamae
#define	SE_M0643_ATK3_30			SE_Y523			//tataki
#define	SE_M0643_ATK3_30A			SE_Y756			//tataki

//atk4
#define	SE_M0643_ATK4_10			SE_Y523			//tame
#define	SE_M0643_ATK4_10A			SE_Y576			//tame
#define	SE_M0643_ATK4_20			SE_Y717			//hassya
#define	SE_M0643_ATK4_20A			SE_Y575			//hassya
//eff land:1054370:662(A=8),584

//atk6
#define	SE_M0643_ATK5_10			SE_Y586			//tame
#define	SE_M0643_ATK5_10A		SE_Y503			//tame
#define	SE_M0643_ATK5_20			SE_Y558			//haku
#define	SE_M0643_ATK5_30			SE_Y457			//jump
#define	SE_M0643_ATK5_40			SE_Y562			//bakuhatu
#define	SE_M0643_ATK5_40A		SE_Y556			//bakuhatu

//m0644        小型        全        ボスお供
#define	SE_M0644_UNDEAD		SE_Y764			//
#define	SE_M0644_UNDEAD_A	SE_Y774			//
#define	SE_M0644_RESURRECT	SE_Y767			//
#define	SE_M0644_DEAD		SE_MONSDEAD_CREATURE			//

#define	SE_M0644_UNI11		SE_Y513			//
#define	SE_M0644_UNI12		SE_Y511			//
#define	SE_M0644_UNI21		SE_Y503			//
#define	SE_M0644_UNI22		SE_Y502			//

#define	SE_M0644_ATK11		SE_Y568			//tame
#define	SE_M0644_ATK12		SE_Y683			//fire
#define	SE_M0644_ATK21		SE_Y554			//kamae
#define	SE_M0644_ATK22		SE_Y565			//kaiten
#define	SE_M0644_ATK31		SE_Y568			//haku
#define	SE_M0644_ATK31A		SE_Y585			//haku
#define	SE_M0644_ATK32		SE_Y717			//moeru
#define	SE_M0644_ATK32A		SE_Y683			//moeru
//eff land:1064430:571

//------------------------------------------------------------
//ダンジョン・始生代の大穴（ｍ0660～ｍ0679）
//------------------------------------------------------------
//m0660        小型        全        爆弾植物
#define	SE_M0660_ATK11		SE_MONS_DASH		//dash
#define	SE_M0660_ATK11A		SE_Y688     		//
#define	SE_M0660_RE			SE_Y988     		//fukkatsu
//eff land:1055020:475,484

//m0661        大型        全        ゲルブ
#define SE_M0661_ATK1		SE_Y455						//吐き出し予兆
#define SE_M0661_ATK2		SE_MONS_SPLASH_3			//吐き出し
#define SE_M0661_ATK21		SE_MONS_SWING_MAE_2						//kamae
#define SE_M0661_ATK22		SE_MONS_SWING_3			//kaiten
#define SE_M0661_ATK22A		SE_MONS_DASH			//kaiten
#define	SE_M0661_DEAD		SE_MONSDEAD_BEAST_M			//
#define	SE_M0661_DOWN		SE_DEAD_DOWN			//
#define	SE_M0661_DOWN2		SE_Y575			//
#define	SE_M0661_DOWN3		SE_Y572			//
//eff land:1066102:587

//m0662        小型        打        コノコノ
#define SE_M0662_JUMP		SE_MONS_JUMP_1					//
#define SE_M0662_DEAD		SE_MONSDEAD_INSECT				//
#define SE_M0662_ATK11		SE_MONS_JUMP_1					//jump
#define SE_M0662_ATK12		SE_Y695			//toge
#define SE_M0662_ATK13		SE_MONS_SWING_3			//kaiten
#define SE_M0662_ATK13A		SE_MONS_DASH			//
#define SE_M0662_ATK21		SE_Y455					//吐き出し予兆
#define SE_M0662_ATK22		SE_MONS_BUBBLE			//吐き出し
#define SE_M0662_ATK22A		SE_MONS_SPLASH_2			//吐き出し
//eff land:1066230:587

//m0663        大型        全        ドワニクル
#define SE_M0663_JUMP		SE_MONS_SWING_MAE_2					//
#define SE_M0663_DEAD		SE_MONSDEAD_BEAST_D				//
#define SE_M0663_FOOT		SE_Y550				//
#define SE_M0663_DOWN		SE_DEAD_DOWN				//
#define SE_M0663_MOV		SE_Y575				//

#define SE_M0663_ATK11		SE_Y455			//kamae water
#define SE_M0663_ATK12		SE_MONS_BITE			//kami
#define SE_M0663_ATK12A		SE_MONS_BITE_2			//
#define SE_M0663_ATK21		SE_Y699			//biribiri
#define SE_M0663_ATK22		SE_Y714			//biribiri
#define SE_M0663_ATK31		SE_MONS_SWING_MAE_2			//jump
#define SE_M0663_ATK32		SE_Y557	//land

//m0664        小型        全        中ボスオトモ
#define SE_M0664_ATK11		SE_Y455			//tame water
#define SE_M0664_ATK12		SE_MONS_SPLASH_2	//hassya
#define SE_M0664_ATK21		SE_Y554			//kamae
#define SE_M0664_ATK22		SE_MONS_SWING_3	//kaiten
#define SE_M0664_DEAD		SE_MONSDEAD_INSECT				//
//eff land:1066230:587

//------------------------------------------------------------
//ダンジョン・大樹の寺院（ｍ0680～ｍ0689）
//------------------------------------------------------------
//m0680        中型        全        デブラタニー
#define SE_M0680_ATK11		SE_Y554			//kamae
#define SE_M0680_ATK12		SE_MONS_SWING_3	//huri
#define SE_M0680_ATK21		SE_MONS_SWING_MAE_2			//kamae
#define SE_M0680_ATK21A		SE_MONS_SWING_4			//kamae
#define SE_M0680_ATK22		SE_MONS_HIT_2	//tataki
#define SE_M0680_ATK22A		SE_Y557	//tataki

#define SE_M0680_JUMP		SE_MONS_JUMP_1			//
#define SE_M0680_DEAD		SE_MONSDEAD_BEAST_M		//
#define SE_M0680_DOWN		SE_DEAD_DOWN			//
//------------------------------------------------------------
//フィールド・地下・洞窟等（ｍ0700～ｍ0799）
//------------------------------------------------------------
//m0700        小型        全        ガイボ
#define SE_M0700_ATK11		SE_MONS_TAME_1			//tame
#define SE_M0700_ATK12		SE_Y587	//breath
#define SE_M0700_ATK12A		SE_Y585	//breath
#define SE_M0700_DEAD		SE_MONSDEAD_INSECT		//

//m0701        中型        全        クダブルトン
#define SE_M0701_ATK11		SE_Y589	//hassya
#define SE_M0701_ATK11A		SE_Y587	//hassya
#define SE_M0701_ATK21		SE_Y572			//tame buruburu
#define SE_M0701_ATK22		SE_Y587	//hassya
#define SE_M0701_ATK22A		SE_MONS_BUBBLE	//hassya

#define SE_M0701_CORE		SE_Y596			//core
#define SE_M0701_DEAD		SE_MONSDEAD_BEAST_D		//
#define SE_M0701_DEAD2		SE_Y572		//
//eff land:1071030:454
//eff land:1071035:454

//------------------22----------------------------------------
//ラスダン（ｍ0800～220899）
//------------------------------------------------------------
//m0800        小型        全        イカダイオウ(麻痺)
#define SE_M0800_ATK11		SE_Y699			//tame
#define SE_M0800_ATK12		SE_Y553			//hassya
#define SE_M0800_ATK21		SE_Y565			//huri
#define SE_M0800_JUMP		SE_MONS_JUMP_1		//
#define SE_M0800_DEAD		SE_MONSDEAD_SPLASH		//

//m0801        中型        全        ジュウメンタイ(麻痺)
#define SE_M0801_ATK11		SE_Y576				//kamae
#define SE_M0801_ATK12		SE_MONS_SWING_3		//kaiten
#define SE_M0801_ATK12A		SE_MONS_DASH		//kaiten
#define SE_M0801_ATK13		SE_Y576			//owari
#define SE_M0801_ATK13A		SE_Y565			//owari
#define SE_M0801_ATK21		SE_Y554			//tame
#define SE_M0801_ATK21A		SE_Y699			//tame biri
#define SE_M0801_ATK22		SE_Y553			//hassya
#define SE_M0801_ATK22A		SE_Y587			//hassya
#define SE_M0801_JUMP		SE_MONS_SWING_MAE_2		//
#define SE_M0801_DEAD		SE_MONSDEAD_BEAST_M		//
#define SE_M0801_DOWN		SE_DEAD_DOWN		//

//m080x	common
#define SE_M080X_DOWN		SE_Y967				// knockdown
#define SE_M080X_DOWN2		SE_DEAD_DOWN		// knockdown

//m0805        小型        全        イカダイオウ(凍結)
#define SE_M0805_ATK11		SE_MONS_BITE_2			//tame
#define SE_M0805_ATK12		SE_Y588			//hassya
#define SE_M0805_ATK21		SE_Y565			//huri
#define SE_M0805_JUMP		SE_MONS_JUMP_1		//
#define SE_M0805_DEAD		SE_MONSDEAD_SPLASH		//

//m0806        中型        全        ジュウメンタイ(凍結)
#define SE_M0806_ATK11		SE_Y576				//kamae
#define SE_M0806_ATK12		SE_MONS_SWING_3		//kaiten
#define SE_M0806_ATK12A		SE_MONS_DASH		//kaiten
#define SE_M0806_ATK13		SE_Y576			//owari
#define SE_M0806_ATK13A		SE_Y565			//owari
#define SE_M0806_ATK21		SE_Y554			//tame
#define SE_M0806_ATK21A		SE_Y763			//tame kiri
#define SE_M0806_ATK22		SE_Y553			//hassya
#define SE_M0806_ATK22A		SE_Y587			//hassya
#define SE_M0806_JUMP		SE_MONS_SWING_MAE_2		//
#define SE_M0806_DEAD		SE_MONSDEAD_BEAST_M		//
#define SE_M0806_DOWN		SE_DEAD_DOWN		//

//m0810        小型        全        イカダイオウ(毒)
#define SE_M0810_ATK11		SE_MONS_TAME_1			//tame
#define SE_M0810_ATK12		SE_Y588			//hassya
#define SE_M0810_ATK21		SE_Y565			//huri
#define SE_M0810_JUMP		SE_MONS_JUMP_1		//
#define SE_M0810_DEAD		SE_MONSDEAD_SPLASH		//

//m0811        中型        全        ジュウメンタイ(毒)
#define SE_M0811_ATK11		SE_Y576				//kamae
#define SE_M0811_ATK12		SE_MONS_SWING_3		//kaiten
#define SE_M0811_ATK12A		SE_MONS_DASH		//kaiten
#define SE_M0811_ATK13		SE_Y576			//owari
#define SE_M0811_ATK13A		SE_Y565			//owari
#define SE_M0811_ATK21		SE_Y554			//tame
#define SE_M0811_ATK21A		SE_Y763			//tame kiri
#define SE_M0811_ATK22		SE_Y553			//hassya
#define SE_M0811_ATK22A		SE_Y587			//hassya
#define SE_M0811_JUMP		SE_MONS_SWING_MAE_2		//
#define SE_M0811_DEAD		SE_MONSDEAD_BEAST_M		//
#define SE_M0811_DOWN		SE_DEAD_DOWN		//

//m0815        小型        全        イカダイオウ(燃焼)
#define SE_M0815_ATK11		SE_MONS_TAME_1			//tame
#define SE_M0815_ATK12		SE_Y588			//hassya
#define SE_M0815_ATK21		SE_Y565			//huri
#define SE_M0815_JUMP		SE_MONS_JUMP_1		//
#define SE_M0815_DEAD		SE_MONSDEAD_SPLASH		//

//m0816        中型        全        ジュウメンタイ(燃焼)
#define SE_M0816_ATK11		SE_Y576				//kamae
#define SE_M0816_ATK12		SE_MONS_SWING_3		//kaiten
#define SE_M0816_ATK12A		SE_MONS_DASH		//kaiten
#define SE_M0816_ATK13		SE_Y576			//owari
#define SE_M0816_ATK13A		SE_Y565			//owari
#define SE_M0816_ATK21		SE_Y554			//tame
#define SE_M0816_ATK21A		SE_Y683			//tame fire
#define SE_M0816_ATK22		SE_Y553			//hassya
#define SE_M0816_ATK22A		SE_Y587			//hassya
#define SE_M0816_JUMP		SE_MONS_SWING_MAE_2		//
#define SE_M0816_DEAD		SE_MONSDEAD_BEAST_M		//
#define SE_M0816_DOWN		SE_DEAD_DOWN		//

//m0830        小型        斬        海・トビウオ
#define SE_M0830_ATK11		SE_Y455			//swim
#define SE_M0830_ATK12		SE_Y593			//jump
#define SE_M0830_ATK13		SE_MONS_DASH			//dash
#define SE_M0830_ATK14		SE_Y592	//SE_Y996			//piti
#define SE_M0830_ATK21		SE_Y455			//swim
#define SE_M0830_ATK22		SE_Y593			//jump
#define SE_M0830_ATK22A		SE_MONS_DASH			//dash
#define SE_M0830_ATK23		SE_Y592	//SE_Y996			//piti
#define SE_M0830_UNI		SE_Y996			//piti
#define SE_M0830_DEAD		SE_MONSDEAD_SPLASH			//

//m0831        小型        全        海・固定砲台
#define SE_M0831_ATK11		SE_Y455			//tame
#define SE_M0831_ATK12		SE_Y587			//hassya
#define SE_M0831_DEAD		SE_MONSDEAD_INSECT		//
//eff land:1083130:589

//m0840        小型        打        氷・ロックローラー
#define SE_M0840_ATK11		SE_Y509		// guruguru
#define SE_M0840_ATK11A		SE_MONS_DASH		// guruguru
#define SE_M0840_ATK12		SE_Y620		//haneru
#define SE_M0840_UNI1		SE_Y620		//kuru
#define SE_M0840_UNI2		SE_MONS_JUMP_2				//haneru
#define SE_M0840_JUMP		SE_MONS_JUMP_1		//
#define SE_M0840_DEAD		SE_MONSDEAD_INSECT		//

//m0841        中型        全        氷・重歩兵
#define SE_M0841_JUMP		SE_MONS_SWING_MAE_2		//
#define SE_M0841_DEAD		SE_MONSDEAD_BEAST_L		//
#define SE_M0841_FOOT		SE_Y550		//
#define SE_M0841_DOWN		SE_DEAD_DOWN		//
#define SE_M0841_STEP		SE_Y554		//

#define SE_M0841_ATK21		SE_Y767		//tame
#define SE_M0841_ATK22		SE_MONS_SWING_MAE_2		//furiage
#define SE_M0841_ATK23		SE_MONS_SWING_4		//orosu
#define SE_M0841_ATK24		SE_Y557		//impact
#define SE_M0841_ATK24A		SE_Y769		//impact

#define SE_M0841_ATK31		SE_Y683		//kamae
#define SE_M0841_ATK32		SE_MONS_DASH		//dash
#define SE_M0841_ATK32A		SE_MONS_HIT_2		//dash

//m0850        小型        射        蟲・足場壊し虫
#define SE_M0850_ATK11		SE_MONS_SWING_MAE_2		//kamae
#define SE_M0850_ATK12		SE_MONS_DASH		//dash
#define SE_M0850_ATK21		SE_Y554		//kamae
#define SE_M0850_ATK22		SE_Y565		//dash
#define SE_M0850_ATK31		SE_MONS_HIT_2		//humi
#define SE_M0850_ATK32		SE_MONS_JUMP_1		//jump
#define SE_M0850_ATK33		SE_MONS_DASH		//fall
#define SE_M0850_ATK34		SE_MONS_EARTH		//press
#define SE_M0850_DOWN		SE_DEAD_DOWN		//
#define SE_M0850_DEAD		SE_MONSDEAD_BEAST_M		//

//m0851        小型        全        蟲・爆撃砲台
#define SE_M0851_ATK11		SE_Y698		//tame
#define SE_M0851_ATK12		SE_Y588		//hassya
#define SE_M0851_JUMP		SE_MONS_JUMP_1		//
#define SE_M0851_DEAD		SE_MONSDEAD_INSECT	//
//eff land:1085140:589

//m0860        小型        全        イカデビル
#define SE_M0860_ATK11		SE_Y764		//tame
#define SE_M0860_ATK12		SE_Y683		//hassya
#define SE_M0860_ATK12A		SE_Y766		//hassya
#define SE_M0860_ATK21		SE_Y555		//kamae
#define SE_M0860_ATK22		SE_Y565		//huri
#define SE_M0860_JUMP		SE_MONS_JUMP_1		//
#define SE_M0860_DEAD		SE_MONSDEAD_CREATURE	//
//eff land:1086015:770

//m0861        中型        全        ペイルジェニー
#define SE_M0861_ATK11		SE_Y623		//tame
#define SE_M0861_ATK12		SE_Y472		//hassya
#define SE_M0861_ATK12A		SE_MONS_DASH		//hassya
#define SE_M0861_ATK21		SE_Y466		//suikomi
#define SE_M0861_ATK22		SE_Y697		//hikaru
#define SE_M0861_DEAD		SE_MONSDEAD_CREATURE	//
//eff land:1086115:564,577,467

//m0870        大型        全        ハンムオルフェ
#define SE_M0870_ATK11		SE_Y575		//kamae
#define SE_M0870_ATK12		SE_MONS_SWING_4		//huri
#define SE_M0870_ATK12A		SE_Y464		//kiri
#define SE_M0870_ATK13		SE_Y616		//impact
#define SE_M0870_ATK13A		SE_Y584		//impact
#define SE_M0870_ATK21		SE_Y575		//kamae
#define SE_M0870_ATK22		SE_MONS_SWING_4		//huri
#define SE_M0870_ATK23		SE_Y464		//kiri
#define SE_M0870_ATK31		SE_Y554		//kamae
#define SE_M0870_ATK32		SE_MONS_TAME_1		//tame
#define SE_M0870_ATK33		SE_Y588		//hassya
#define SE_M0870_JUMP		SE_MONS_SWING_MAE_2		//
#define SE_M0870_LAND		SE_Y583		//
#define SE_M0870_FOOT		SE_Y550		//
#define SE_M0870_MOV		SE_Y575		//
#define SE_M0870_DOWN		SE_DEAD_DOWN		//
#define SE_M0870_DEAD		SE_MONSDEAD_BEAST_L	//
//eff land:1087050:562

//m0871        小型        全        モルクス
#define SE_M0871_ATK11		SE_MONS_TAME_1		//tame
#define SE_M0871_ATK12		SE_Y588		//hassya
#define SE_M0871_ATK21		SE_MONS_JUMP_1		//jump
#define SE_M0871_ATK22		SE_DEAD_DOWN		//land
#define SE_M0871_ATK31		SE_MONS_TAME_1		//tame
#define SE_M0871_ATK32		SE_Y588		//hassya
#define SE_M0871_JUMP		SE_MONS_JUMP_1		//
#define SE_M0871_DEAD		SE_MONSDEAD_GRAVY	//
//eff land:1087150:715
//eff land:1087115:553

//m0881        大型        全        サイデル :m0403
#define SE_M0881_ATK11		SE_Y554		//kamae
#define SE_M0881_ATK12		SE_MONS_BITE		//kamu
#define SE_M0881_ATK12A		SE_MONS_BITE_2		//kamu
#define SE_M0881_ATK21		SE_Y455				//tame water
#define SE_M0881_ATK22		SE_MONS_SPLASH_2	//water
#define SE_M0881_JUMP		SE_MONS_JUMP_4		//
#define SE_M0881_DOWN		SE_DEAD_DOWN		//
#define SE_M0881_DEAD		SE_MONSDEAD_DINO_3		//
//eff splash_chr:1088130:561
//eff splash:1088160:561

//m0882        大型        全        ライノサイダー :m0605
#define	SE_M0882_JUMP		SE_MONS_SWING_MAE_2			//
#define	SE_M0882_LAND		SE_DEAD_DOWN			//
#define	SE_M0882_DEAD		SE_MONSDEAD_BEAST_M			//
#define	SE_M0882_DOWN		SE_DEAD_DOWN			//
#define	SE_M0882_MOV		SE_Y575			//
#define	SE_M0882_ROAR		SE_Y645			//
#define	SE_M0882_UNI		SE_Y576			//

#define	SE_M0882_ATK11		SE_Y575				//kamae
#define	SE_M0882_ATK12		SE_MONS_PRESS		//press
#define	SE_M0882_ATK12A		SE_MONS_HIT_2		//press

#define	SE_M0882_ATK31		SE_MONS_SAND		//foot suna
#define	SE_M0882_ATK32		SE_MONS_DASH		//dash
#define	SE_M0882_ATK33		SE_Y550				//foot

//m0883        大型        全        ゼノウィード :m0661
//eff land:1088302:587

//m0884        大型        全        アウラトード :m2102
//eff land:1088430:587

//m0885        大型        全        ギガントバイト :m0663

//m0886        大型        全        シャイニングマター :b105 :m0643
#define	SE_M0886_JUMP_1			SE_Y566			//
#define	SE_M0886_FOOT_1			SE_Y550			//
#define	SE_M0886_DEAD			SE_MONSDEAD_BEAST_L			//
#define	SE_M0886_MOYA			SE_Y466			//
#define	SE_M0886_MOYA2			SE_Y468			//

//atk1,7
#define	SE_M0886_ATK1_10			SE_Y554			//kamae
#define	SE_M0886_ATK1_20			SE_Y565			//kiru
#define	SE_M0886_ATK1_30			SE_Y617	//SE_Y679			//impact
#define	SE_M0886_ATK1_40			SE_Y558			//tama

//atk2,8
#define	SE_M0886_ATK2_10			SE_Y554			//kamae
#define	SE_M0886_ATK2_20			SE_Y758			//kiru yoko
#define	SE_M0886_ATK2_30			SE_Y679			//impact
#define	SE_M0886_ATK2_40			SE_Y558			//tama
#define	SE_M0886_ATK2_50			SE_Y550			//foot

//atk3
#define	SE_M0886_ATK3_10			SE_Y555			//kamae
#define	SE_M0886_ATK3_20			SE_Y560			//kiru
#define	SE_M0886_ATK3_20A		SE_Y464			//kiru
#define	SE_M0886_ATK3_30			SE_Y550			//foot

//atk4
#define	SE_M0886_ATK4_10			SE_Y555			//kamae
#define	SE_M0886_ATK4_20			SE_Y586			//tame
#define	SE_M0886_ATK4_20A		SE_Y503			//tame
#define	SE_M0886_ATK4_30			SE_Y683			//breath
#define	SE_M0886_ATK4_30A		SE_Y585			//breath

//atk6
#define	SE_M0886_ATK6_10			SE_Y586			//tame
#define	SE_M0886_ATK6_10A		SE_Y503			//tame
#define	SE_M0886_ATK6_20			SE_Y558			//haku
#define	SE_M0886_ATK6_30			SE_Y457			//jump
#define	SE_M0886_ATK6_40			SE_Y562			//bakuhatu
#define	SE_M0886_ATK6_40A		SE_Y556			//bakuhatu

//atk9
#define	SE_M0886_ATK9_10			SE_Y555			//kamae
#define	SE_M0886_ATK9_20			SE_Y459			//jump
#define	SE_M0886_ATK9_30			SE_Y583			//tyakuti

//m0887        大型        全        レッキンドリュー :m0623

//m0888        大型        全        インフェルノＦ :m0501

//m0889        大型        全        ヘルシェル :m0123
#define SE_M0889_JUMP		SE_MONS_SWING_MAE_2			//ジャンプ
#define SE_M0889_LAND		SE_DEAD_DOWN			//land

#define SE_M0889_ATK1		SE_MONS_SWING_3			//右攻撃（なぎ払い）
#define SE_M0889_ATK2		SE_MONS_SPEAR			//左攻撃（突き）
#define SE_M0889_ATK2A		SE_MONS_HIT_2			//左攻撃（突き）
#define SE_M0889_ATK3		SE_MONS_HADOU			//SE_237					//毒霧攻撃
#define SE_M0889_ATK3A		SE_Y585			//SE_237					//毒霧攻撃
#define SE_M0889_ATK4		SE_Y565			//SE_237					//毒霧攻撃
#define SE_M0889_ATK51		SE_MONS_SWING_MAE_2			//jump
#define SE_M0889_ATK52		SE_MONS_EARTH			//press
#define SE_M0889_MOV		SE_Y554			//SE_237					//毒霧攻撃
#define SE_M0889_DEADVO1	SE_MONSDEAD_BEAST_L		//甲殻類断末魔
#define SE_M0889_DEADVO2	SE_MONSDEAD_SHELLFISH		//甲殻類断末魔
#define SE_M0889_DOWN		SE_MONS_EARTH		//甲殻類断末魔

//m0890        大型        全        スパーキンヴァンプ :m0111

//------------------------------------------------------------
//幽霊船（ｍ0900～ｍ0909）
//------------------------------------------------------------
//XXX 未使用らしい 	m0900        小型        全        ガイ・ゾック(お供)
//m0901        小型        全        ガイ・ゾック
#define	SE_M0901_ATK11		SE_MONS_SWORD			//sword
#define	SE_M0901_ATK21		SE_Y691			//tuki
#define	SE_M0901_RESURRECT	SE_Y555			//
#define	SE_M0901_JUMP		SE_MONS_JUMP_2			//
#define	SE_M0901_DEAD		SE_MONSDEAD_SHELLFISH			//

//m0902        中型        全        鬼面シャコ
#define	SE_M0902_ATK11		SE_MONS_DASH		//jump
#define	SE_M0902_ATK12		SE_MONS_EARTH		//land
#define	SE_M0902_ATK21		SE_Y554			//kamae
#define	SE_M0902_ATK22		SE_Y565			//kama
#define	SE_M0902_ATK31		SE_Y456			//bubble
#define	SE_M0902_ATK32		SE_Y590			//hassya
#define	SE_M0902_JUMP		SE_Y555			//
#define	SE_M0902_DOWN		SE_DEAD_DOWN			//
#define	SE_M0902_DOWN2		SE_Y583			//
#define	SE_M0902_DEAD		SE_MONSDEAD_BEAST_M			//
//eff land_chr:1090280:454

//m0903        小型        全        カタベローヌ
#define	SE_M0903_ATK11		SE_Y455		//tame
#define	SE_M0903_ATK12		SE_Y587		//hassya
#define	SE_M0903_ATK21		SE_MONS_SWING_3		//huri
#define	SE_M0903_DEAD		SE_MONSDEAD_SPLASH			//
//eff land:1090341:561

//------------------------------------------------------------
//サブダン関連（ｍ0910～ｍ0999）
//------------------------------------------------------------
//m0910        小型        全        キノコ
#define	SE_M0910_ATK11		SE_Y566		//buruburu
#define	SE_M0910_ATK12		SE_Y470		//hassya
#define	SE_M0910_ATK21		SE_Y455		//buruburu
#define	SE_M0910_ATK22		SE_Y587		//hassya
#define	SE_M0910_DEAD		SE_MONSDEAD_GRAVY		//
//eff land:1091050:960

//m0911        小型        斬        オオタマガエル
#define	SE_M0911_JUMP		SE_MONS_JUMP_3		//
#define	SE_M0911_DEAD		SE_MONSDEAD_GRAVY		//

#define	SE_M0911_ATK11		SE_Y455		//buruburu
#define	SE_M0911_ATK12		SE_Y597		//hassya
#define	SE_M0911_ATK21		SE_MONS_JUMP_3		//jump
#define	SE_M0911_ATK22		SE_MONS_EARTH		//land
//eff land:1091120:561
//eff land:1091130:561

//m0915        小型        全        コキラーシュモク
#define	SE_M0915_ATK11		SE_MONS_BITE		//kami
#define	SE_M0915_ATK21		SE_Y455		//tame
#define	SE_M0915_ATK22		SE_MONS_BITE		//kami
#define	SE_M0915_ATK23		SE_MONS_DASH		//dash
#define	SE_M0915_DEAD		SE_MONSDEAD_SPLASH		//

//m0916        小型        打        固定砲台か鈍足貝
#define	SE_M0916_ATK11		SE_MONS_TAME_1		//tame
#define	SE_M0916_ATK12		SE_Y588		//hassya
#define	SE_M0916_DEAD		SE_MONSDEAD_INSECT		//
//eff land:1091610:481

//m0920        大型        全        キラーシュモクＧ
#define	SE_M0920_ATK11		SE_Y555		//kamae
#define	SE_M0920_ATK12		SE_MONS_BITE		//kami
#define	SE_M0920_ATK12A		SE_MONS_BITE_2		//kami
#define	SE_M0920_ATK21		SE_MONS_SWING_4		//kaiten
#define	SE_M0920_ATK31		SE_Y455		//tame
#define	SE_M0920_ATK32		SE_Y591		//hassya
#define	SE_M0920_ATK32A		SE_Y470		//hassya
#define	SE_M0920_DEAD		SE_MONSDEAD_BEAST_M		//
#define	SE_M0920_DOWN		SE_Y967		//

//m0925        小型        射        ザロッズ
#define	SE_M0925_ATK11		SE_MONS_DASH		//dash
#define	SE_M0925_DEAD		SE_MONSDEAD_INSECT		//

//m0926        小型        全        固定砲台
#define	SE_M0926_ATK11		SE_Y455		//tame
#define	SE_M0926_ATK12		SE_Y588		//hassya
#define	SE_M0926_ATK21		SE_Y565		//kaiten
#define	SE_M0926_DEAD		SE_MONSDEAD_INSECT		//

//m0930        小型        全        カイム
#define	SE_M0930_ATK11		SE_MONS_HIT_2		//tataki
#define	SE_M0930_ATK21		SE_MONS_SWING_3		//kaiten
#define	SE_M0930_JUMP		SE_MONS_JUMP_1		//
#define	SE_M0930_DEAD		SE_MONSDEAD_BEAST_S		//
#define	SE_M0930_DOWN		SE_Y963		//

//m0931        小型        全        カイム弓or魔法
#define	SE_M0931_ATK11		SE_Y979		//yumi
#define	SE_M0931_ATK21		SE_MONS_SWING_3		//kaiten
#define	SE_M0931_JUMP		SE_MONS_JUMP_1		//
#define	SE_M0931_DEAD		SE_MONSDEAD_BEAST_S		//
#define	SE_M0931_DOWN		SE_Y963		//

//m0935        小型        全        スカルダイバー
#define	SE_M0935_ATK11		SE_MONS_DASH		//dash
#define	SE_M0935_ATK12		SE_MONS_BITE_2		//water
#define	SE_M0935_ATK13		SE_MONS_BITE		//kami
#define	SE_M0935_UNDEAD		SE_Y764			//
#define	SE_M0935_UNDEAD_A	SE_Y774			//
#define	SE_M0935_DEAD		SE_MONSDEAD_SHELLFISH		//

//m0936        中型        打        魚雷砲台 :m701
//eff land:1093630:454
//eff land:1093635:454

//m0940        小型        射        チュチュヴァッツァ
#define	SE_M0940_ATK11		SE_MONS_LASER_1		//laser
#define	SE_M0940_ATK21		SE_MONS_SWING_MAE_2		//kaiten
#define	SE_M0940_ATK22		SE_MONS_DASH		//dash
#define	SE_M0940_DEAD		SE_MONSDEAD_BIRD		//

//m0941        小型        全        ユニアタッカ :m0622
#define	SE_M0941_ATK11		SE_Y555		//kamae
#define	SE_M0941_ATK12		SE_Y565			//huri
#define	SE_M0941_ATK21		SE_Y554		//kamae
#define	SE_M0941_ATK22		SE_MONS_DASH		//dash
#define	SE_M0941_JET		SE_Y683		//jet
#define	SE_M0941_JUMP		SE_MONS_JUMP_1			//
#define	SE_M0941_DEAD		SE_Y505				//
#define	SE_M0941_DOWN		SE_Y963		//

//m0942        大型        打        ドタマガン :m0623
//eff lans:1094240:960

//m0945        小型        全        マスクドアント
#define	SE_M0945_ATK11		SE_Y463		//breath
#define	SE_M0945_JUMP		SE_MONS_JUMP_1		//
#define	SE_M0945_DEAD		SE_MONSDEAD_INSECT		//

//m0960        小型        斬        ヘルミトコン
#define	SE_M0960_ATK11		SE_Y695		//hasami
#define	SE_M0960_ATK21		SE_Y455		//okiru
#define	SE_M0960_ATK22		SE_Y695		//hasami
#define	SE_M0960_ATK31		SE_MONS_SAND		//moguri
#define	SE_M0960_ATK32		SE_Y695		//hasami
#define	SE_M0960_JUMP		SE_MONS_JUMP_1		//
#define	SE_M0960_DEAD		SE_MONSDEAD_INSECT		//

//------------------------------------------------------------
//古代種（ｍ1000～ｍ1099）
//------------------------------------------------------------
//m1000        大型        全        スパイク竜
#define	SE_M1000_ROAR		SE_Y645		//450-452,570,644
#define	SE_M1000_FOOT		SE_Y552		//S:551,M:550,L:552
#define	SE_M1000_JUMP		SE_Y459		//575,576,555,554
#define	SE_M1000_LAND		SE_Y583		//
#define	SE_M1000_DOWN		SE_DEAD_DOWN		//
#define	SE_M1000_DEAD		SE_MONSDEAD_DINO_1		//

#define	SE_M1000_UNI1		SE_Y574		// roar
#define	SE_M1000_UNI2		SE_Y452		// roar

#define	SE_M1000_ATK11		SE_MONS_SAND		//suna
#define	SE_M1000_ATK12		SE_MONS_DASH		//suna
#define	SE_M1000_ATK12A		SE_Y569		//suna
#define	SE_M1000_ATK13		SE_Y570		//gya-

#define	SE_M1000_ATK21		SE_Y575		//kamae
#define	SE_M1000_ATK22		SE_MONS_SWING_3		//kaiten
#define	SE_M1000_ATK22A		SE_MONS_DASH		//kaiten
#define	SE_M1000_ATK23		SE_MONS_EARTH		//impact

#define	SE_M1000_ATK31		SE_MONS_SWING_4		//tail

//m1001        大型        全        イグアナ竜
#define	SE_M1001_ROAR		SE_Y646		//450-452,570,644
#define	SE_M1001_FOOT		SE_Y551		//S:551,M:550,L:552
#define	SE_M1001_JUMP		SE_Y459		//575,576,555,554
#define	SE_M1001_LAND		SE_Y583		//
#define	SE_M1001_DOWN		SE_DEAD_DOWN		//
#define	SE_M1001_DEAD		SE_MONSDEAD_DINO_1		//

#define	SE_M1001_ATK11		SE_Y575		//okiru
#define	SE_M1001_ATK12		SE_MONS_EARTH	//impact
#define	SE_M1001_ATK21		SE_MONS_SWING_4		//tail
#define	SE_M1001_ATK31		SE_MONS_DASH		//dash
#define	SE_M1001_ATK41		SE_Y565		//furi
#define	SE_M1001_ATK42		SE_MONS_EARTH	//impact

#define	SE_M1001_UNI1		SE_Y575		// roar
#define	SE_M1001_UNI2		SE_Y452		// roar

//m1003        大型        全        ペリカン竜
#define	SE_M1003_ROAR		SE_Y647		//450-452,570,644
#define	SE_M1003_FOOT		SE_Y551		//S:551,M:550,L:552
#define	SE_M1003_JUMP		SE_Y459		//575,576,555,554
#define	SE_M1003_LAND		SE_Y583		//
#define	SE_M1003_DOWN		SE_DEAD_DOWN		//
#define	SE_M1003_DEAD		SE_MONSDEAD_DINO_3		//
#define	SE_M1003_WING		SE_MONS_WING_2		//
#define	SE_M1003_FALL		SE_Y575		//

#define	SE_M1003_ATK11		SE_MONS_DASH		//dash
#define	SE_M1003_ATK11A		SE_Y461		//dash
#define	SE_M1003_ATK12		SE_Y562	//tukiage
#define	SE_M1003_ATK13		SE_Y575	//wing

#define	SE_M1003_ATK21		SE_Y565		//kaiten
#define	SE_M1003_ATK21A		SE_Y554		//kaiten
#define	SE_M1003_ATK22		SE_Y583	//impact

#define	SE_M1003_ATK31		SE_Y575		//jump
#define	SE_M1003_ATK32		SE_Y583	//impact
#define	SE_M1003_ATK33		SE_Y471	//kaiten
#define	SE_M1003_ATK34		SE_Y554	//fall

#define	SE_M1003_ATK41		SE_Y555	//kamae
#define	SE_M1003_ATK42A		SE_MONS_BITE	//kami
#define	SE_M1003_ATK42		SE_MONS_BITE_3	//kami

#define	SE_M1003_UNI1		SE_Y575		// roar
#define	SE_M1003_UNI2		SE_Y452		// roar

#define	SE_M1003_UNI11		SE_Y575		//
#define	SE_M1003_UNI12		SE_Y452		//

//m1004        大型        全        老首長竜
#define	SE_M1004_ROAR		SE_Y645		//450-452,570,644
#define	SE_M1004_FOOT		SE_Y550		//S:551,M:550,L:552
#define	SE_M1004_JUMP		SE_Y459		//575,576,555,554
#define	SE_M1004_LAND		SE_Y583		//
#define	SE_M1004_DOWN		SE_DEAD_DOWN		//
#define	SE_M1004_DEAD		SE_Y645		//
#define	SE_M1004_MOV		SE_Y575		//
#define	SE_M1004_UNI1		SE_Y574		// roar
#define	SE_M1004_UNI2		SE_Y452		// roar

#define	SE_M1004_ATK11		SE_Y575		//kamae
#define	SE_M1004_ATK12		SE_Y568		//suikomi
#define	SE_M1004_ATK12A		SE_Y466		//suikomi
#define	SE_M1004_ATK13		SE_Y714	//biribiri
#define	SE_M1004_ATK13A		SE_Y699	//biribiri

//atk2,4
#define	SE_M1004_ATK21		SE_Y575		//kamae
#define	SE_M1004_ATK22		SE_MONS_SWING_3	//tail
#define	SE_M1004_ATK22A		SE_Y565	//tail

#define	SE_M1004_ATK31		SE_Y575		//orosu
#define	SE_M1004_ATK32		SE_Y565		//orosu
#define	SE_M1004_ATK33		SE_MONS_BITE_2	//kami
#define	SE_M1004_ATK33A		SE_MONS_BITE_3	//kami

#define	SE_M1004_ATK41		SE_Y575		//kamae
#define	SE_M1004_ATK42		SE_Y683	//fire
#define	SE_M1004_ATK42A		SE_Y662	//fire
//eff land:1100460:557

//m1005        大型        全        魚竜
#define	SE_M1005_ROAR		SE_Y646		//450-452,570,644
#define	SE_M1005_FOOT		SE_Y551		//S:551,M:550,L:552
#define	SE_M1005_JUMP		SE_Y576		//575,576,555,554
#define	SE_M1005_LAND		SE_Y583		//
#define	SE_M1005_SPLASH		SE_Y593		// down
#define	SE_M1005_SPLASH2	SE_Y591		// up
#define	SE_M1005_WATER		SE_Y455		// dirty
#define	SE_M1005_WATER2		SE_Y454		// clean
#define	SE_M1005_DOWN		SE_DEAD_DOWN		//
#define	SE_M1005_DEAD		SE_MONSDEAD_DINO_1		//
#define	SE_M1005_MOV		SE_Y575		//
#define	SE_M1005_UNI1		SE_Y574		// roar
#define	SE_M1005_UNI2		SE_Y452		// roar
#define	SE_M1005_STEP		SE_Y554		//

#define	SE_M1005_ATK11		SE_Y575		//kamae
#define	SE_M1005_ATK12		SE_MONS_BITE_2		//kami
#define	SE_M1005_ATK12A		SE_MONS_BITE_3		//kami

#define	SE_M1005_ATK21		SE_Y575		//kamae
#define	SE_M1005_ATK22		SE_Y568		//breath
#define	SE_M1005_ATK22A		SE_Y594		//breath

#define	SE_M1005_ATK31		SE_Y575		//kamae
#define	SE_M1005_ATK32		SE_MONS_SWING_3		//tail

#define	SE_M1005_ATK41		SE_Y575		//jump
#define	SE_M1005_ATK42		SE_Y568		//land
#define	SE_M1005_ATK43		SE_Y568		//walk

#define	SE_M1005_ATK51		SE_Y594		//run
#define	SE_M1005_ATK52		SE_Y556		//stop

//m1007        中型        全        ヴェロキ竜
#define	SE_M1007_ROAR		SE_Y570		//450-452,570,644
#define	SE_M1007_FOOT		SE_Y551		//S:551,M:550,L:552
#define	SE_M1007_JUMP		SE_Y620		//575,576,555,554
#define	SE_M1007_JUMP2		SE_MONS_JUMP_1		//
#define	SE_M1007_LAND		SE_Y551	//SE_Y583		//
#define	SE_M1007_DOWN		SE_DEAD_DOWN		//
#define	SE_M1007_DEAD		SE_Y570		//
#define	SE_M1007_MOV		SE_Y575		//
#define	SE_M1007_UNI1		SE_Y574		// roar
#define	SE_M1007_UNI2		SE_Y570		// roar

#define	SE_M1007_ATK11		SE_Y576		//jump
#define	SE_M1007_ATK12		SE_Y560		//orosu
#define	SE_M1007_ATK21		SE_Y554		//jump
#define	SE_M1007_ATK22		SE_Y565		//orosu
#define	SE_M1007_ATK23		SE_MONS_HIT_2		//orosu
#define	SE_M1007_ATK31		SE_Y565		//mawaru

//m1009        大型        全        ディプロ竜
#define	SE_M1009_ROAR		SE_Y646		//450-452,570,644
#define	SE_M1009_FOOT		SE_Y552		//S:551,M:550,L:552
#define	SE_M1009_JUMP		SE_Y620		//575,576,555,554
#define	SE_M1009_JUMP2		SE_MONS_JUMP_1		//
#define	SE_M1009_LAND		SE_Y583		//
#define	SE_M1009_DOWN		SE_DEAD_DOWN		//
#define	SE_M1009_DOWN2		SE_MONS_EARTH		//
#define	SE_M1009_DEAD		SE_Y644		//
#define	SE_M1009_MOV		SE_Y575		//
#define	SE_M1009_UNI1		SE_Y645		// roar
#define	SE_M1009_UNI2		SE_Y570		// roar

#define	SE_M1009_UNI3		SE_Y455		//water
#define	SE_M1009_UNI3A		SE_Y592		//water
#define	SE_M1009_UNI4		SE_Y531		//leaf

//atk1-4
#define	SE_M1009_ATK11		SE_Y575		//age
#define	SE_M1009_ATK12		SE_MONS_EARTH		//orosu
#define	SE_M1009_ATK12A		SE_Y556		//orosu

#define	SE_M1009_ATK51		SE_Y576		//kamae
#define	SE_M1009_ATK52		SE_Y575		//tail
#define	SE_M1009_ATK52A		SE_Y562		//tail

#define	SE_M1009_ATK61		SE_Y575		//kamae
#define	SE_M1009_ATK62		SE_Y558		//hassya
#define	SE_M1009_ATK62A		SE_Y569		//hassya

#define	SE_M1009_ATK71		SE_Y576		//kamae
#define	SE_M1009_ATK72		SE_Y458		//breath
#define	SE_M1009_ATK72A		SE_Y585		//breath
//eff land:110930:481,592,591
//eff rock:1100950:581,537

//	m1010	ティラノ竜
#define	SE_M1010_ROAR		SE_Y646		//450-452,570,644
#define	SE_M1010_DEAD		SE_MONSDEAD_DINO_1		//
#define	SE_M1010_MOV		SE_Y575		//
#define	SE_M1010_UNI1		SE_Y574		// roar
#define	SE_M1010_UNI2		SE_MONSDEAD_DINO_1		// roar

#define SE_M1010_GROW		SE_MONSDEAD_BEAST_D		//SE_173					//咆哮
#define SE_M1010_FOOT		SE_Y552			//足音
#define SE_M1010_LAND		SE_DEAD_DOWN	//SE_Y583			//着地（念のため足音とラベルを分ける）
#define SE_M1010_JUMP		SE_MONS_SWING_MAE_2		//ジャンプ
#define SE_M1010_ATK0		SE_Y575			//kamae
#define SE_M1010_ATK1		SE_MONS_BITE			//1：かみつき
#define SE_M1010_ATK1A		SE_MONS_BITE_3			//1：かみつき
#define SE_M1010_ATK2		SE_Y584		//SE_309					//2：タックル
#define SE_M1010_ATK2A		SE_MONS_DASH		//SE_309					//2：タックル
#define SE_M1010_ATK2_B		SE_MONS_PUNCH_2		//SE_232					//2：突き上げ
#define SE_M1010_ATK2_C		SE_Y562		//SE_232					//2：突き上げ
#define SE_M1010_ATK3		SE_Y557		//SE_232					//3：尻尾叩きつけ
#define SE_M1010_ATK3_B		SE_MONS_SWING_MAE_2		//3：尻尾叩きつけ予兆
#define SE_M1010_ATK4		SE_MONS_SWING_3			//4：尻尾回転
#define SE_M1010_ATK4_B		SE_M1010_GROW			//4：尻尾回転予兆
#define SE_M1010_ATK5		SE_MONS_HIT_2	//SE_244					//5：踏み付け
#define SE_M1010_ATK5A		SE_Y557	//land
#define SE_M1010_ATK6		SE_MONS_PUNCH_2		//SE_232					//6：どつく
#define SE_M1010_ATK6A		SE_Y571		//SE_232					//6：どつく
#define SE_M1010_ATK7		SE_MONS_HIT_2	//SE_244					//7：ステップ踏み付け
#define SE_M1010_ATK7A		SE_Y557	//land
#define SE_M1010_ATK81		SE_MONS_DASH	//jump
#define SE_M1010_ATK82		SE_Y557	//land
#define SE_M1010_ATK82A		SE_Y615	//land
#define SE_M1010_DEADVO1	SE_MONSDEAD_DINO_1		//古代獣断末魔
#define SE_M1010_DOWN		SE_DEAD_DOWN		//SE_307					//死亡後倒れる
#define SE_M1010_DOWN2		SE_Y557		//SE_307					//死亡後倒れる

//m1011        中型        全        知的竜
#define	SE_M1011_ROAR		SE_MONSDEAD_DINO_3		//450-452,570,644
#define	SE_M1011_FOOT		SE_Y551		//S:551,M:550,L:552
#define	SE_M1011_JUMP		SE_MONS_JUMP_1		//575,576,555,554
#define	SE_M1011_JUMP2		SE_MONS_JUMP_1		//
#define	SE_M1011_LAND		SE_Y583		//
#define	SE_M1011_DOWN		SE_DEAD_DOWN		//
#define	SE_M1011_DEAD		SE_MONSDEAD_DINO_3		//
#define	SE_M1011_MOV		SE_Y575		//
#define	SE_M1011_UNI1		SE_Y575		// roar
#define	SE_M1011_UNI2		SE_Y570		// roar
#define	SE_M1011_STEP		SE_Y620		//

#define	SE_M1011_ATK11		SE_Y560		//orosu
#define	SE_M1011_ATK21		SE_Y555		//jump
#define	SE_M1011_ATK22		SE_Y565		//tail
#define	SE_M1011_ATK31		SE_Y565		//jump
#define	SE_M1011_ATK32		SE_Y571		//impact

//m1012        大型        全        トリケラ竜
#define	SE_M1012_ATK11		SE_MONS_SAND	//foot suna
#define	SE_M1012_ATK12		SE_MONS_DASH	//dash
#define	SE_M1012_ATK13		SE_Y550	//foot
#define	SE_M1012_ATK21		SE_Y575	//kamae
#define	SE_M1012_ATK22		SE_MONS_EARTH	//tataki

#define	SE_M1012_UNI1		SE_Y574		// roar
#define	SE_M1012_UNI2		SE_MONSDEAD_DINO_2		// roar
#define	SE_M1012_UNI3		SE_Y531			//leaf
#define	SE_M1012_JUMP		SE_MONS_SWING_MAE_2			//
#define	SE_M1012_LAND		SE_Y550			//
#define	SE_M1012_MOV		SE_Y555			//
#define	SE_M1012_DEAD		SE_MONSDEAD_DINO_2			//
#define	SE_M1012_ROAR		SE_MONSDEAD_DINO_2			//
#define	SE_M1012_DOWN		SE_DEAD_DOWN			//
#define	SE_M1012_FOOT		SE_Y550			//

//m1013        大型        全        ランベオ竜
#define	SE_M1013_UNI1		SE_Y574		// roar
#define	SE_M1013_UNI2		SE_Y570		// roar
#define	SE_M1013_UNI3		SE_Y531			//leaf
#define	SE_M1013_JUMP		SE_MONS_SWING_MAE_2			//
#define	SE_M1013_LAND		SE_Y550			//
#define	SE_M1013_MOV		SE_Y554			//
#define	SE_M1013_DEAD		SE_MONSDEAD_DINO_1			//
#define	SE_M1013_ROAR		SE_MONSDEAD_DINO_1			//
#define	SE_M1013_DOWN		SE_DEAD_DOWN			//
#define	SE_M1013_FOOT		SE_Y551			//

#define	SE_M1013_ATK11		SE_Y560	//tuki
#define	SE_M1013_ATK21		SE_Y575	//kamae
#define	SE_M1013_ATK22		SE_Y565	//tail
#define	SE_M1013_ATK31		SE_Y554	//kamae

//m1014        小型        全        知的竜子供
#define	SE_M1014_JUMP		SE_MONS_JUMP_1		//575,576,555,554
#define	SE_M1014_DEAD		SE_MONSDEAD_BEAST_S		//
#define	SE_M1014_UNI1		SE_Y562		//

#define	SE_M1014_ATK11		SE_MONS_BITE		//kami
#define	SE_M1014_ATK21		SE_MONS_DASH		//dash

//m1015        大型        全        ミナミ竜 :m1000

//m1020        中型        全        異形疾竜
#define	SE_M1020_UNI1		SE_Y574		// roar
#define	SE_M1020_UNI2		SE_Y452		// roar
#define	SE_M1020_UNI3		SE_Y531			//leaf
#define	SE_M1020_JUMP		SE_MONS_SWING_MAE_2			//
#define	SE_M1020_LAND		SE_Y550			//
#define	SE_M1020_MOV		SE_Y555			//
#define	SE_M1020_DEAD		SE_MONSDEAD_DINO_1			//
#define	SE_M1020_ROAR		SE_Y570			//
#define	SE_M1020_DOWN		SE_DEAD_DOWN			//
#define	SE_M1020_FOOT		SE_Y551			//
#define	SE_M1020_FOOT2		SE_MONS_SAND			//

#define	SE_M1020_ATK11		SE_Y555	//kamae
#define	SE_M1020_ATK12		SE_MONS_BITE	//kami
#define	SE_M1020_ATK12A		SE_MONS_BITE_3	//kami
#define	SE_M1020_ATK21		SE_Y554	//kamae
#define	SE_M1020_ATK22		SE_NONE	//SE_MONS_SWING_2	//tail
#define	SE_M1020_ATK23		SE_MONS_SWING_4	//kaiten
#define	SE_M1020_ATK23A		SE_Y565	//kaiten
#define	SE_M1020_ATK22A		SE_Y565	//kaiten
#define	SE_M1020_ATK41		SE_Y699	//tame
#define	SE_M1020_ATK42		SE_Y588	//hassya
//eff land:1102040:696

//m1021        大型        全        異形翼竜
#define	SE_M1021_UNI1		SE_Y574		// roar
#define	SE_M1021_UNI2		SE_MONSDEAD_DINO_2		// roar
#define	SE_M1021_UNI3		SE_Y531			//leaf
#define	SE_M1021_JUMP		SE_MONS_SWING_MAE_2			//
#define	SE_M1021_LAND		SE_Y552			//
#define	SE_M1021_MOV		SE_Y555			//
#define	SE_M1021_DEAD		SE_MONSDEAD_DINO_1			//
#define	SE_M1021_ROAR		SE_Y570			//
#define	SE_M1021_DOWN		SE_DEAD_DOWN			//
#define	SE_M1021_FOOT		SE_Y552			//
#define	SE_M1021_STEP		SE_Y554			//

#define	SE_M1021_ATK11		SE_Y575	//okiru
#define	SE_M1021_ATK12		SE_MONS_DASH	//mae
#define	SE_M1021_ATK13		SE_MONS_EARTH	//taore
#define	SE_M1021_ATK13A		SE_Y584	//taore

#define	SE_M1021_ATK21		SE_Y575	//okiru
#define	SE_M1021_ATK22		SE_MONS_WING_2	//hane
#define	SE_M1021_ATK23		SE_Y568	//tatumaki
#define	SE_M1021_ATK23A		SE_Y585	//tatumaki
#define	SE_M1021_ATK24		SE_Y575	//modoru

#define	SE_M1021_ATK31		SE_Y576	//jump
#define	SE_M1021_ATK32		SE_MONS_EARTH	//press
#define	SE_M1021_ATK32A		SE_Y584	//taore

//m1022        大型        全        異形堕竜
#define	SE_M1022_UNI1		SE_Y574		// roar
#define	SE_M1022_UNI2		SE_MONSDEAD_DINO_1		// roar
#define	SE_M1022_UNI3		SE_Y531			//leaf
#define	SE_M1022_JUMP		SE_MONS_SWING_MAE_2			//
#define	SE_M1022_LAND		SE_Y552			//
#define	SE_M1022_MOV		SE_Y555			//
#define	SE_M1022_DEAD		SE_MONSDEAD_DINO_1			//
#define	SE_M1022_ROAR		SE_Y570			//
#define	SE_M1022_DOWN		SE_DEAD_DOWN			//
#define	SE_M1022_DOWN2		SE_Y557			//
#define	SE_M1022_FOOT		SE_Y550			//
#define	SE_M1022_FOOT2		SE_MONS_HIT_2			//
#define	SE_M1022_STEP		SE_Y554			//

#define	SE_M1022_ATK11		SE_Y575	//kamae
#define	SE_M1022_ATK12		SE_Y565	//orosu
#define	SE_M1022_ATK13		SE_MONS_BITE	//kami
#define	SE_M1022_ATK13A		SE_MONS_BITE_3	//kami

#define	SE_M1022_ATK21		SE_Y575	//tame
#define	SE_M1022_ATK22		SE_Y717	//fire
#define	SE_M1022_ATK22A		SE_Y683	//fire
#define	SE_M1022_ATK22B		SE_MONSDEAD_DINO_2	//gya-

#define	SE_M1022_ATK31		SE_Y575	//kamae
#define	SE_M1022_ATK32		SE_Y565	//orosu
#define	SE_M1022_ATK33		SE_Y616	//impact
#define	SE_M1022_ATK33A		SE_MONS_HIT_2	//impact

#define	SE_M1022_ATK41		SE_Y575	//jump S
#define	SE_M1022_ATK42		SE_Y554	//jump norm
#define	SE_M1022_ATK43		SE_MONS_EARTH	//land
#define	SE_M1022_ATK43A		SE_Y584	//land

#define	SE_M1022_ATK51		SE_Y575	//tame
#define	SE_M1022_ATK52		SE_Y558	//hassya
#define	SE_M1022_ATK52A		SE_Y683	//hassya
//eff land:1102276:659

#define	SE_M1022_ATK61		SE_Y575	//kamae
#define	SE_M1022_ATK62		SE_Y683	//tail
#define	SE_M1022_ATK63		SE_Y717	//kaiten
#define	SE_M1022_ATK63A		SE_Y458	//kaiten
#define	SE_M1022_ATK63B		SE_Y452	//gya-

//m1030        大型        全        トリケラ竜(過去) NOTE:m1012

//m1031        大型        全        ヴェロキ竜(過去) NOTE:m1007

//m1040        大型        全        討伐ティラノ（過去） NOTE:m1010
#define	SE_M1040_ATK81		SE_Y575	//kamae
#define	SE_M1040_ATK82		SE_Y554	//dash
#define	SE_M1040_ATK82A		SE_MONSDEAD_DINO_1	//dash
#define	SE_M1040_ATK83		SE_MONS_BITE	//kami
#define	SE_M1040_ATK83A		SE_MONS_BITE_3	//kami

//m1041        大型        全        討伐魚竜（過去） NOTE:m1005
#define	SE_M1041_ATK41		SE_Y699	//tame biribiri
#define	SE_M1041_ATK42		SE_Y714	//rakuri
#define	SE_M1041_ATK42A		SE_Y562	//rakurai
#define	SE_M1041_ATK43		SE_Y615	//explo
#define	SE_M1041_JUMP		SE_MONS_SWING_MAE_2	//
#define	SE_M1041_LAND		SE_Y584	//


//m1042        大型        全        討伐首長竜（過去）
//eff land:1104260:557
#define	SE_M1042_ATK61		SE_Y575	//kamae
#define	SE_M1042_ATK62		SE_Y502	//tame
#define	SE_M1042_ATK63		SE_Y469	//hassya
#define	SE_M1042_ATK63A		SE_Y717	//hassya

//------------------------------------------------------------
//過去編（ｍ1100～ｍ1199）
//------------------------------------------------------------
//m1100        小型        斬        スケルプス
#define	SE_M1100_ATK11		SE_MONS_SWING_3	//huru
#define	SE_M1100_ATK21		SE_Y966			//huku
#define	SE_M1100_ATK22		SE_MONS_SWING_1			//poi
#define	SE_M1100_ATK22A		SE_Y971			//poi
#define	SE_M1100_JUMP		SE_MONS_JUMP_1			//
#define	SE_M1100_DEAD		SE_MONSDEAD_INSECT			//
//eff land_chr:1100040:587
//eff land:1100050:589

//m1101        小型        斬        過去ローリングフラワー NOTE:m0601
//m1102        小型        全        小型サスピオン NOTE:m0440
//eff splash_chr:1110230:561
//eff splash:1110240:561

//m1103        小型        斬        過去ツボポン NOTE:m0221
//eff splash_chr:1110340:561
//eff splash:1110350:561

//m1104        小型        全        過去マスクドアント NOTE:m0945
//m1105        小型        斬        過去ゲロックス NOTE:m0603
//eff land_chr:1100520:587
//eff land:1100530:589

//------------------------------------------------------------
//クエスト用（ｍ1200～ｍ1299）
//------------------------------------------------------------
//m1200        小型        全        討伐獣①ヒュッパー
#define	SE_M1200_ATK11		SE_MONS_DASH			//
#define	SE_M1200_ATK21		SE_MONS_SKILL			//
#define	SE_M1200_JUMP		SE_MONS_JUMP_2			//
#define	SE_M1200_DEAD		SE_MONSDEAD_INSECT			//

//m1201        中型        射        討伐獣②アギアギラ NOTE:m2101

//m1202        中型        打        討伐獣④アルシャコウ NOTE:m0902
//eff land_chr:1120280:454

//m1203        小型        全        討伐獣③グラドングゥ NOTE:m0200

//------------------------------------------------------------
//はじまりの深淵（ｍ1300～ｍ1399）
//------------------------------------------------------------
//m1300        小型        斬        プラナリー
#define	SE_M1300_ATK11		SE_MONS_SKILL	//tataku
#define	SE_M1300_JUMP		SE_MONS_JUMP_1	//
#define	SE_M1300_DEAD		SE_MONSDEAD_SPLASH	//

//m1301        中型        全        ボンチアディ
#define	SE_M1301_ATK11		SE_Y576	//jump
#define	SE_M1301_ATK12		SE_Y557	//land
#define	SE_M1301_ATK21		SE_Y466	//tame
#define	SE_M1301_ATK22		SE_Y968	//laser
#define	SE_M1301_ATK22A		SE_Y966	//laser
#define	SE_M1301_ATK31		SE_Y555	//kamae atk3-5
#define	SE_M1301_ATK32		SE_Y559	//furi
#define	SE_M1301_ATK33		SE_Y558	//hassya
#define	SE_M1301_JUMP		SE_MONS_SWING_MAE_2	//
#define	SE_M1301_DOWN		SE_DEAD_DOWN	//
#define	SE_M1301_DEAD		SE_MONSDEAD_GRAVY	//

//------------------------------------------------------------
//暴魚（ｍ1400～ｍ1499）
//------------------------------------------------------------
//m1400        小型        斬        マルトゥ改 NOTE:m0102
//m1401        小型        斬        タツノオトシゴ改 NOTE:m0140
//m1402        小型        斬        アンコウ改
#define	SE_M1402_ATK11		SE_MONS_SWING_3			//huru
#define	SE_M1402_ATK21		SE_Y966			//breath
#define	SE_M1402_DEAD		SE_MONSDEAD_SPLASH			//breath

//m1403        大型        打        グラワニーガ改 NOTE:m0123
#define	SE_M1403_ATK51		SE_MONS_SWING_MAE_2			//jump
#define	SE_M1403_ATK52		SE_MONS_EARTH			//press
#define	SE_M1403_JUMP		SE_MONS_SWING_MAE_2			//
#define	SE_M1403_LAND		SE_DEAD_DOWN			//

//m1404        小型        斬        アナプシー改 NOTE:m0110
//eff splash:1140420:454
//eff splash:1140450:587

//m1405        中型        全        サンショウワニ改 NOTE:m0224
//eff splash_chr:1140560:561

//m1406        小型        打        コノコノ改 NOTE:m0662
#define	SE_M1406_ATK31		SE_MONS_JUMP_1			//jump
#define	SE_M1406_ATK32		SE_MONS_DASH			//press
//eff land:1140630:587

//m1407        大型        斬        イムスーラ改 NOTE:m0502
#define	SE_M1407_MOV		SE_Y625			//munyo
#define	SE_M1407_ATK21		SE_MONS_DASH			//jump
#define	SE_M1407_ATK21A		SE_Y455			//jump
#define	SE_M1407_ATK22		SE_Y589			//land
#define	SE_M1407_ATK22A		SE_Y587			//land
#define	SE_M1407_ATK31		SE_Y588			//hassya
#define	SE_M1407_DEAD		SE_MONSDEAD_GRAVY			//
#define	SE_M1407_DOWN		SE_Y597	//down
//eff splash:1140770:587

//m1408        大型        全        ガイゾック改 NOTE:m0901
//m1409        大型        打        ゴーレム改 NOTE:m0623
//eff land:1140940:960

//////////////////////////
// PS4追加 モンスター
//////////////////////////

//m1600        火の鳥
#define	SE_M1600_DEAD		SE_MONSDEAD_BIRD	//断末魔
#define	SE_M1600_DEAD_2		SE_Y659				//コア消滅

#define	SE_M1600_UNI5		SE_Y1515			//fukkatsu
#define	SE_M1600_UNI5A		SE_Y575			//fukkatsu
#define	SE_M1600_UNI6		SE_Y717			//dead
#define	SE_M1600_UNI8		SE_Y683			//fire
#define	SE_M1600_UNI8A		SE_Y717			//fire

//m1601        小型・汎用①	m0622
#define	SE_M1601_ATK11		SE_Y555			//kamae
#define	SE_M1601_ATK12		SE_Y565			//huri
#define	SE_M1601_ATK21		SE_Y554			//kamae
#define	SE_M1601_ATK22		SE_MONS_DASH	//dash
#define	SE_M1601_JUMP		SE_MONS_JUMP_1	//
#define	SE_M1601_DEAD		SE_Y505			//

//m1602        小型・透明
#define	SE_M1602_ATK11		SE_Y991			//ジャンプ
#define	SE_M1602_ATK12		SE_Y559			//刺す
#define	SE_M1602_ATK13		SE_Y608			//刺す

#define	SE_M1602_ATK21		SE_MONS_TAME_1	//tame
#define	SE_M1602_ATK22		SE_Y558			//hassya
//eff:1160240:601

//m1603        小型・透明固定砲台	m0124
#define SE_M1603_ATK11		SE_Y585	//SE_MONS_LIGHT_MAE_1		//水ため
#define SE_M1603_ATK12		SE_Y685	//SE_MONS_SPLASH			//水とばし
#define SE_M1603_ATK21		SE_MONS_SWING_4	//
#define SE_M1603_ATK22		SE_Y587			//furu

#define SE_M1603_DEADVO1	SE_MONSDEAD_GRAVY		//汁系断末魔
//eff:1160360:553

//m1604        小型・風圧 m0621
#define	SE_M1604_ATK11		SE_MONS_TAME_1				//tame
#define	SE_M1604_ATK12		SE_Y558				//hassya
#define	SE_M1604_ATK21		SE_Y576		//kamae
#define	SE_M1604_ATK22		SE_Y760				//kaiten
#define	SE_M1604_ATK23		SE_Y732		//modoru
#define	SE_M1604_ATK31		SE_Y575		//kamae
#define	SE_M1604_ATK32		SE_Y457		//hassya
#define	SE_M1604_ATK33		SE_Y458		//hassya
#define	SE_M1604_DEAD		SE_Y505				//
//eff:1160420:601

//m1605        小型・汎用②
#define	SE_M1605_ATK11		SE_Y555		//kamae
#define	SE_M1605_ATK12		SE_Y565			//huri
#define	SE_M1605_ATK21		SE_Y554		//kamae
#define	SE_M1605_ATK22		SE_MONS_DASH		//dash
#define	SE_M1605_ATK31		SE_Y554		//kamae
#define	SE_M1605_ATK32		SE_Y696		//kamae2 biri
#define	SE_M1605_ATK33		SE_MONS_DASH		//kamae2 biri
#define	SE_M1605_ATK34		SE_Y714		//kamae2 biri
#define	SE_M1605_JUMP		SE_MONS_JUMP_1			//
#define	SE_M1605_DEAD		SE_Y505				//
#define	SE_M1605_MOV1		SE_Y607				//
#define	SE_M1605_MOV2		SE_MONS_SWING_4		//

//m1610        中型・水用	b006
#define	SE_M1610_JUMP		SE_Y576			//
#define	SE_M1610_LAND		SE_DEAD_DOWN	//SE_Y582			//
#define	SE_M1610_MOV		SE_Y554			//
#define	SE_M1610_MOV2		SE_Y713			//roll
#define	SE_M1610_DEAD		SE_Y557			//
#define	SE_M1610_DOWN		SE_MONSDEAD_BEAST_M			//
#define	SE_M1610_DOWN2		SE_DEAD_DOWN	//SE_Y556			//

#define	SE_M1610_ATK1		SE_Y712			//
#define	SE_M1610_ATK21		SE_Y712			//kiru
#define	SE_M1610_ATK22		SE_Y615			//tataku

#define	SE_M1610_ATK31		SE_Y667			//yoko
#define	SE_M1610_ATK32		SE_Y712			//kiru
#define	SE_M1610_ATK33		SE_Y608			//kiru +3

#define	SE_M1610_ATK41		SE_Y575			//tame
#define	SE_M1610_ATK42		SE_Y569	//SE_Y657			//fire

//m1611        中型・地用	m0623
#define	SE_M1611_JUMP		SE_MONS_SWING_MAE_2			//
#define	SE_M1611_LAND		SE_DEAD_DOWN			//
#define	SE_M1611_DEAD		SE_MONSDEAD_BEAST_M			//
#define	SE_M1611_DOWN		SE_DEAD_DOWN			//
#define	SE_M1611_DOWN2		SE_Y557			//
#define	SE_M1611_BREAK		SE_Y546	//SE_Y769	//SE_Y505			//weak
#define	SE_M1611_BREAK2		SE_Y966	////weak
#define	SE_M1611_FOOT		SE_Y550			//

#define	SE_M1611_ATK11		SE_Y575		//kamae
#define	SE_M1611_ATK12		SE_MONS_SWING_3		//furi
#define	SE_M1611_ATK13		SE_Y1505	//tataki
#define	SE_M1611_ATK21		SE_Y675			//jump
#define	SE_M1611_ATK22		SE_Y575	//SE_MONS_SWING_3	//orosu
#define	SE_M1611_ATK23		SE_Y1508	//tataku
#define	SE_M1611_ATK31		SE_Y767		//tame
#define	SE_M1611_ATK31A		SE_Y575		//tame
#define	SE_M1611_ATK32		SE_Y562		//hassya

#define	SE_M1611_ATK41		SE_Y575		//kamae
#define	SE_M1611_ATK42		SE_MONS_SWING_3		//furi
#define	SE_M1611_ATK43		SE_Y1508	//tataki
//eff land:1161180:967

//m1612        中型・光用
#define	SE_M1612_MOV		SE_Y465			//
#define	SE_M1612_DEAD		SE_MONSDEAD_DINO_3			//
#define	SE_M1612_DOWN		SE_DEAD_DOWN			//

#define	SE_M1612_ATK11		SE_Y554			//ジャンプ
#define	SE_M1612_ATK12		SE_Y612			//刺す
#define	SE_M1612_ATK13		SE_Y608			//刺す

#define	SE_M1612_ATK21		SE_Y576			//kamae
#define	SE_M1612_ATK22		SE_Y560			//hassya
//eff:1161240:601 

#define	SE_M1612_ATK31		SE_Y460	//SE_Y565			//move
#define	SE_M1612_ATK32		SE_Y658	//SE_Y762			//roll
#define	SE_M1612_ATK33		SE_Y740	//SE_Y658			//roll

#define	SE_M1612_ATK41		SE_Y623			//tame
#define	SE_M1612_ATK42		SE_Y746	//SE_Y657			//hassya
#define	SE_M1612_ATK43		SE_Y776			//hassya

//m1613        中型・複合型
#define	SE_M1613_CRY		SE_MONSDEAD_DINO_1			//
#define	SE_M1613_FOOT		SE_Y550			//
#define	SE_M1613_JUMP		SE_Y576			//
#define	SE_M1613_LAND		SE_Y557			//
#define	SE_M1613_DOWN		SE_DEAD_DOWN			//
#define	SE_M1613_DASH		SE_Y667			// wo/tate
#define	SE_M1613_DASH3		SE_Y666			// wo/tate+
#define	SE_M1613_DASH2		SE_Y734			// w/tate, back
#define	SE_M1613_BREAK		SE_Y546			//
#define	SE_M1613_BREAK2		SE_Y666	//SE_Y609			//

#define	SE_M1613_ATK11		SE_Y608			//sasu
#define	SE_M1613_ATK12		SE_Y712			//sasu

#define	SE_M1613_ATK21		SE_Y623			//tame
#define	SE_M1613_ATK22		SE_Y664			//kaze
#define	SE_M1613_ATK23		SE_Y740			//kaze

#define	SE_M1613_ATK31		SE_Y623			//tame
#define	SE_M1613_ATK32		SE_Y683			//gas
#define	SE_M1613_ATK33		SE_Y763			//gas

#define	SE_M1613_ATK40		SE_Y576			//kamae
#define	SE_M1613_ATK41		SE_Y608			//sasu
#define	SE_M1613_ATK42		SE_Y712			//sasu
#define	SE_M1613_ATK43		SE_Y665			//sasu todome

////////////////////////////////////////////////////////////////////////////////////
//セルセタのザコがまだ残っているもの
////////////////////////////////////////////////////////////////////////////////////
//◎e0002.mtd
//#define SE_E0002_ATK1_1A		SE_MONS_JUMP_1			//ジャンプ
//#define SE_E0002_ATK1_1B		SE_MONS_HIT_2
//#define SE_E0002_ATK1_2			SE_200					//ごろごろ
//#define SE_E0002_ATK1_3			SE_MONS_JUMP_1			//ジャンプ
#define SE_E0002_DEADVO1		SE_MONSDEAD_BEAST_S		//断末魔 獣人（小）
//#define SE_E0002_DEADVO2		SE_MONSDEAD_BEAST_S		//断末魔 獣人（小）

//◎e0004&0004Bファバロス(ウシ)
//#define SE_E0004_ATK1_1			SE_227				// 突進攻撃：鳴き声
//#define SE_E0004_ATK1_2A		SE_MONS_ATTACK_2	// 突進攻撃：踏み付け１
//#define SE_E0004_ATK1_2B		SE_MONS_FOOT_3		// 突進攻撃：踏み付け２
//#define SE_E0004_ATK1_3			SE_MONS_FOOT_3		// 突進攻撃：足音
//#define SE_E0004_ATK1_4A		SE_MONS_SWING_2		// 突進攻撃：突き上げ１
//#define SE_E0004_ATK1_4B		SE_MONS_STONE		// 突進攻撃：突き上げ２
//#define SE_E0004_ATK2_1A		SE_MONS_SWING_2		// 後ろ蹴り攻撃１
//#define SE_E0004_ATK2_1B		SE_MONS_HIT_2		// 後ろ蹴り攻撃２
//#define SE_E0004_ATK3_1			SE_E0004_ATK1_1		// 角振り回し１
//#define SE_E0004_ATK3_2A		SE_MONS_SWING_2		// 角振り回し１
//#define SE_E0004_ATK3_2B		SE_MONS_STONE		// 角振り回し２
//#define SE_E0004_ATK4_1A		SE_MONS_SWING_2		// 角振り回し１
//#define SE_E0004_ATK4_1B		SE_MONS_STONE		// 角振り回し２
//#define SE_E0004_ATK4_2			SE_MONS_HIT_3		// 最後の仕上げ
//
//#define SE_E0004_DEADVO1		SE_MONSDEAD_BEAST_L	// 死亡
//#define SE_E0004_DEAD1_1		SE_DEAD_DOWN		// 死亡：ダウン時の衝撃

//◎e0102アサルコス(サソリ)
//#define SE_E0102_ATK1_1			SE_MONS_SWING_MAE_1		// 針攻撃１
#define SE_E0102_ATK1_2A		SE_MONS_ATTACK			// 針攻撃１
#define SE_E0102_ATK1_2B		SE_MONS_NONE			// 針攻撃２
#define SE_E0102_DEADVO1		SE_MONSDEAD_INSECT		// 死亡

//◎e0113コボンガ(子猿)
//#define SE_E0113_ATK1_1			SE_MONS_SWING_2			// 殴り攻撃
//#define SE_E0113_ATK1_2			SE_MONS_PUNCH_2			// 殴り攻撃
//#define SE_E0113_ATK2_1			SE_MONS_HIT_3			// 岩投げ攻撃：ゴソゴソする
//#define SE_E0113_ATK2_2			SE_MONS_PUNCH_1			// 岩投げ攻撃：投げる
////☆着弾エフェクト
//#define SE_E0113_UNI1_1			SE_MONVO_DEF			// ユニークモーション：ウホウホ＆ジャンプ
//#define SE_E0113_UNI2_1			SE_MONS_HIT_1			// ユニークモーション
//#define SE_E0113_DEADVO1		SE_MONSDEAD_BEAST_M		// 死亡
//#define SE_E0113_DEADVO2		SE_MONSDEAD_BEAST_M		// 死亡

//◎e0114ボスオンガ(大猿)
//#define SE_E0114_WALK1_1		SE_MONS_FOOT_3			// 足音
//#define SE_E0114_UNI_1			SE_MONSDEAD_BEAST_M		// なきごえ
//#define SE_E0114_ATK1_1			SE_MONS_SWING_MAE_2		// 斧攻撃：振りかぶり
//#define SE_E0114_ATK1_2			SE_MONS_PUNCH_1			// 斧攻撃：殴る
//#define SE_E0114_ATK1_3A		SE_083					// 斧攻撃：衝撃１
//#define SE_E0114_ATK1_3B		SE_MONS_HIT_3			// 斧攻撃：衝撃２

//#define SE_E0114_ATK2_1A		SE_243					// 咆哮１
//#define SE_E0114_ATK2_1B		SE_245					// 咆哮２
//#define SE_E0114_ATK3_1			SE_MONS_SWING_2			// 両手叩きつけ：フル
//#define SE_E0114_ATK3_2A		SE_MONS_HIT_3			// 両手叩きつけ：衝撃１
//#define SE_E0114_ATK3_2B		SE_083					// 両手叩きつけ：衝撃２
//#define SE_E0114_ATK4_1A		SE_MONSDEAD_BEAST_L		// 子分召還：鳴き声♪確認
//#define SE_E0114_ATK4_1B		SE_245					// 子分召還：衝撃
#define SE_E0114_DOWN1			SE_DEAD_DOWN			// ダウン時の手を付いた時
//#define SE_E0114_DEADVO1		SE_MONSDEAD_BEAST_L		// 死亡
//#define SE_E0114_DEAD1_1A		SE_DEAD_DOWN			// 死亡：ダウン時の衝撃１
//#define SE_E0114_DEAD1_1B		SE_083					// 死亡：ダウン時の衝撃２

//◎e0153.mtd
//#define SE_E0153_ATK1_1			SE_MONVO_BEE		// 予兆
//#define SE_E0153_ATK1_2A		SE_MONS_SWING_1		// 打撃
//#define SE_E0153_ATK1_2B		SE_MONS_NABA		//
//#define SE_E0153_ATK1_3			SE_MONS_SWING_1		// 戻し
//#define SE_E0153_ATK2_1			SE_MONS_BAKU		// がじがじ
//#define SE_E0153_DEADVO1		SE_MONSDEAD_BEE		// 断末魔 獣人（小）
//#define SE_E0153_DEADVO2		SE_MONSDEAD_BEE		// 断末魔 獣人（小）

//◎e0209.mtd
//#define SE_E0209_ATK1_1			SE_MONS_SWING_2		// 構え
//#define SE_E0209_ATK1_2A		SE_083				// 飛ぶ
//#define SE_E0209_ATK1_2B		SE_MONS_SWING_3		// 飛ぶ
//#define SE_E0209_ATK1_3A		SE_091				// 打撃
//#define SE_E0209_ATK1_3B		SE_MONS_HIT_3		// 打撃
//
//#define SE_E0209_ATK2_1A		SE_MONS_SWING_MAE_2	// 構え
//#define SE_E0209_ATK2_1B		SE_MONVO_DOG		// 構え
//#define SE_E0209_ATK2_2A		SE_MONS_PUNCH_2		// 噛み付き
//#define SE_E0209_ATK2_2B		SE_MONS_BAKU		// 噛み付き
//#define SE_E0209_ATK2_3			SE_MONS_PUNCH_2		// 噛み付き
//#define SE_E0209_ATK3_1			SE_MONS_SWING_MAE_2	// 構え
//#define SE_E0209_ATK3_2A		SE_MONS_SWARD		// 切り裂き１
//#define SE_E0209_ATK3_2B		SE_MONS_PUNCH_1		// 切り裂き１
//#define SE_E0209_ATK3_3A		SE_MONS_SWARD		// 切り裂き１
//#define SE_E0209_ATK3_3B		SE_MONS_PUNCH_1		// 切り裂き２
//#define SE_E0209_DOWN1			SE_MONS_HIT_3		// ダウン時
//#define SE_E0209_DEADVO1		SE_MONSDEAD_BEAST_L	// 断末魔 獣人（大）
//#define SE_E0209_DEAD1_1A		SE_DEAD_DOWN		// 地響き
//#define SE_E0209_DEAD1_1B		SE_083				// 地響き

//◎e0210.mtd
//#define SE_E0210_ATK1_1			SE_MONS_SWING_2		// 打撃
//#define SE_E0210_ATK2_1			SE_MONS_SWING_1		// 打撃
//#define SE_E0210_ATK2_2			SE_MONS_NONE		// びにょーん
//#define SE_E0210_ATK3_1			SE_MONS_SWARD		// 振り回す
//#define SE_E0210_ATK8_1			SE_MONS_JUMP_3		// ジャンプ
//#define SE_E0210_DEADVO1		SE_MONSDEAD_GRAVY	// 断末魔
//#define SE_E0210_DEADVO2		SE_MONSDEAD_GRAVY	// 断末魔

//◎e4904.mtd
//#define SE_E4904_WALK_1			SE_MONS_FOOT_2			// 歩く
//#define SE_E4904_ATK1_1			SE_MONS_SWING_2			// 前振り
//#define SE_E4904_ATK1_2A		SE_MONS_PUNCH_2			// アタック
//#define SE_E4904_ATK1_2B		SE_MONS_SWARD			// アタック
//#define SE_E4904_ATK2_1A		SE_MONS_HIT_2			// 予兆
//#define SE_E4904_ATK2_1B		SE_200					// もぐる
//#define SE_E4904_ATK2_2A		SE_258					// 土から出る
//#define SE_E4904_ATK2_2B		SE_MONS_FOOT_3			// 土から出る
//#define SE_E4904_ATK2_3			SE_MONS_HIT_3			// 降りる
//#define SE_E4904_DEADVO1		SE_MONSDEAD_BEAST_D		// 断末魔 獣人
//#define SE_E4904_DEAD1			SE_DEAD_DOWN			// 歩行

//◎e5001 （クモ）
//#define SE_E5001_ATK1_1			SE_MONS_SWING_MAE_1		// 攻撃前兆
//#define SE_E5001_ATK1_2A		SE_MONS_PUNCH_2			// 攻撃音
//#define SE_E5001_ATK1_2B		SE_MONS_SWING_1			// 攻撃音未使用
//#define SE_E5001_ATK2_1			SE_MONS_SWING_MAE_2		// 糸吐き前兆
//#define SE_E5001_ATK2_2			SE_247					// 糸吐きSE_208
//#define SE_E5001_DEADLANDING	SE_DEAD_DOWN			// 死亡後の着地音
//#define SE_E5001_DEADVO1		SE_MONSDEAD_NORMAL		// 死亡音(凡)

//◎e5200.mtd⇒e0752の別種類
//#define SE_E5200_UNI1_1			SE_MONVO_DEF			// 喜ぶ
//#define SE_E5200_ATK1_1			SE_MONS_FIRE			// 弓
//#define SE_E5200_ATK1_2			SE_MONS_NONE			// 弓
//SE_E5200_ATK1☆着弾エフェクト
//#define SE_E5200_ATK2_1			SE_MONS_SWING_1			// 剣
//#define SE_E5200_ATK2_2			SE_MONS_SWARD			// 剣
//#define SE_E5200_ATK3_1			SE_MONS_JUMP_1			// ジャンプ
//#define SE_E5200_ATK3_2A		SE_MONS_SWARD			// ジャンプ
//#define SE_E5200_ATK3_2B		SE_MONS_HIT_1			// ジャンプ
//#define SE_E5200_DEADVO1		SE_MONSDEAD_BEAST_M		// 断末魔 獣人

//◎e9902ラタニー(ネズミ)
//#define SE_E9902_DISA_1			SE_MONS_JUMP_1			//SE_223-SE_E9902_ATK1_2
//#define SE_E9902_DISA_2			SE_MONS_ATTACK			//SE_194-SE_E9902_ATK1_1
//#define SE_E9902_ATK1_1			SE_MONS_ATTACK			// 突き攻撃
//#define SE_E9902_JUMP			SE_MONS_JUMP_1			// 突き攻撃：バック宙
//#define SE_E9902_DEADVO1		SE_MONSDEAD_BEAST_S		// 死亡
//#define SE_E9902_DEADVO2		SE_MONSDEAD_BEAST_S		// 死亡

//---------------------------------------------------------------


//ＹＳ８ボス//////////////////////////////////////////////////////////////////////////

//b150	謎の紅き獣
// ⇒ ボス系は個別のヘッダーに記述することになりましたので、b150.h へ移動しました

///////////////////////////////////////////////////////////////////////////////
//ボス
///////////////////////////////////////////////////////////////////////////////
// Ys8 使用ラベル範囲
//		SE_Y450～Y460 (41)
//		SE_Y550～Y599 (50)

//基本技
//#define SE_BOSS_SWING_MAE_1		SE_242		//軽振り予兆
//#define SE_BOSS_SWING_MAE_2		SE_338		//重い振り予兆
//#define SE_BOSS_SWING_MAE_3		SE_220		//重い振り予兆(雑魚とおなじ)
//#define SE_BOSS_SWING_MAE_4		SE_339		//予備
//#define SE_BOSS_LIGHT_MAE_1		SE_240		//発光系予兆	☆できれば音を変更したい
//#define SE_BOSS_LIGHT_MAE_2		SE_191		//発光系予兆	☆できれば音を変更したい

//#define SE_BOSS_SWING_1			SE_340		//軽振り
//#define SE_BOSS_SWING_1B		SE_339		//軽振り
//#define SE_BOSS_SWING_2			SE_189		//振り
//#define SE_BOSS_SWING_3			SE_242		//重い振り
//#define SE_BOSS_SWING_4			SE_311
//#define SE_BOSS_SWARD			SE_345		//切る＊２回
//#define SE_BOSS_ATTACK			SE_192		//刺す
//#define SE_BOSS_PUNCH_1			SE_236		//殴る
//#define SE_BOSS_PUNCH_2			SE_190		//殴るたたきつける
//#define SE_BOSS_ROLL			SE_351		//岩回転

//#define SE_BOSS_DASH			SE_DUMMY	//ダッシゅ
//#define SE_BOSS_JUMP_1			SE_216		//ジャンプ1
//#define SE_BOSS_JUMP_2			SE_337		//ジャンプ2
//#define SE_BOSS_JUMP_3			SE_228		//ジャンプコミカル
//#define SE_BOSS_WARP			SE_217		//転移
//#define SE_BOSS_WING_1			SE_222		//翼飛ぶ(虫)
//#define SE_BOSS_WING_2			SE_234		//翼飛ぶ(鳥)
//#define SE_BOSS_SKILL			SE_250		//技発射
//#define SE_BOSS_WAVE			SE_198		//超音波発射
//#define SE_BOSS_NABA			SE_224		//スライム系噴射
//#define SE_BOSS_LASER_1			SE_197		//レーザー発射☆変更予定	＊SE_B0042_FLASH_DISCHARGE
//#define SE_BOSS_HADOU			SE_317		//波動発射					＊SE_B054_ATK8_4
//
//#define SE_BOSS_HIT_1			SE_333		//	打撃
//#define SE_BOSS_HIT_2			SE_307		//	衝撃
//#define SE_BOSS_HIT_3			SE_334		//	強い打撃
//#define SE_BOSS_HIT_4			SE_232		//	キャラをたたきつける
//#define SE_BOSS_HIT_5			SE_336		//	着地
//#define SE_BOSS_BOM_1			SE_234		//	小さい爆発	☆音加工必須エフェクト専用？
//#define SE_BOSS_BOM_2			SE_274		//	大きい爆発	☆エフェクト専用？
//#define SE_BOSS_ROCK			SE_259		//	岩系衝撃
//#define SE_BOSS_FOOT_2			SE_335		//	足音大


//#define SE_BOSS_FIRE			SE_308		//	属性（火）
//#define SE_BOSS_WIND			SE_202		//	属性（風）
//#define SE_BOSS_STONE			SE_203		//	属性（土）
//#define SE_BOSS_NONE			SE_204		//	属性（無）
//#define SE_BOSS_SUN				SE_205		//	属性（雷）
//#define SE_BOSS_ICE				SE_206		//	属性（氷）
//#define SE_BOSS_WATER			SE_207		//	属性（水）

//#define SE_BOSS_DEAD_1			SE_300		//	死亡爆発
//#define SE_BOSS_DEAD_2			SE_301		//	死亡崩れ
//#define SE_BOSS_DEAD_3			SE_302		//	死亡最後の爆発
//#define SE_BOSS_DOWN			SE_342		//	倒れるSE326	жもっと積極的に使っていく
//#define SE_BOSS_QUAKE			SE_341		//	振動
//
//#define SE_B001_ATK1A			SE_206					// 噛み付きおと

//ys8 ボス共通
//-------------------------------------
// b###.h
//-------------------------------------
// ANI_3_ATK2 --> SE_B###_ATK!_@##$%
// ! -> ANI_!
// @ -> ATK@
// ## -> 種類 (01,02,03...10,11,12...)
// $ -> 割り込み用 (2,4,6...)
// % -> 重ね用 (A,B,C...)
//-------------------------------------

#define SE_BOSS_OUT_1			SE_Y577		// ボス死亡演出 どかんどかん
#define SE_BOSS_OUT_2			SE_Y578		// ボス死亡演出 ふわわー
#define SE_BOSS_OUT_3			SE_Y579		// ボス死亡演出 うわー
#define SE_BOSS_OUT_4			SE_Y580		// ボス死亡演出 きらきらー
#define SE_BOSS_OUT_10			SE_Y581		// ボス死亡演出 爆発
#define SE_BOSS_OUT_11			SE_Y582		// ボス死亡演出 爆発

#define SE_BOSS_DEAD_10			SE_Y573		// ボス死亡演出 断末魔
#define SE_BOSS_DEAD_20			SE_Y579		// ボス死亡演出 断末魔

#define SE_BOSS_FOOT_1			SE_Y550		//SE_238		//	足音中
//
//#define SE_BOSS_FOOT_10			SE_Y550		//足音
//#define SE_BOSS_MOV_10			SE_Y550		//動作
//#define SE_BOSS_ROAR_10			SE_Y550		//咆哮
//#define SE_BOSS_GROWL_10		SE_Y550		//鳴き声
//#define SE_BOSS_HAT_10			SE_Y550		//ハッタリ

//#define SE_BOSS_SPLASH			SE_Y553		//水系噴射
#define SE_BOSS_MOV_1			SE_Y554		//動作 ゆっくり
#define SE_BOSS_MOV_2			SE_Y555		//動作 はやい
#define SE_BOSS_DOWN_1			SE_Y552		//	倒れる short

///////////////////////////////////////////////////////////////////////////////
//環境音
///////////////////////////////////////////////////////////////////////////////
// Ys8 使用ラベル範囲
//		SE_Y150～Y199 (50)

//旧ラベル 未使用
//#define SE_ENV_RIVER1			SE_460		// 環境音	川
//#define SE_ENV_RIVER2			SE_461		// 環境音	川  樹海
//#define SE_ENV_RIVER3			SE_462		// 環境音	川  大河
//#define SE_ENV_WATER1			SE_463		// 環境音	洞窟内水
//#define SE_ENV_FALLWATER1		SE_464		// 環境音	緩やかな滝
//#define SE_ENV_WIND1			SE_466		// 環境音	そよ風
//#define SE_ENV_WIND2			SE_467		// 環境音	激しい風
//#define SE_ENV_WIND3			SE_523		// 環境音	ギミック用かなり強い風
//#define SE_ENV_RAIN1			SE_468		// 環境音	雨
//#define SE_ENV_THUNDER1			SE_469		// 環境音	雷
//#define SE_ENV_PAWDER			SE_470		// 環境音	胞子
//#define SE_ENV_LAVA1			SE_471		// 環境音	火山
//#define SE_ENV_FIRE1			SE_472		// 環境音	かがり火
//#define SE_ENV_COOK				SE_473		// 環境音	料理
//#define SE_ENV_HUUSYA			SE_474		// 環境音	風車
//#define SE_ENV_POISON			SE_475		// 環境音	毒ガス
//#define SE_ENV_GEAR1			SE_476		// 環境音	重い機械が動いてる系
//#define SE_ENV_SWING1			SE_477		// 環境音	振り子
//#define SE_ENV_LAVA2			SE_478		// 環境音	溶鉱炉
//#define SE_ENV_UNDERWATER		SE_479		// 水の中	システムで
//#define SE_ENV_UNDERWATER2		SE_527		// 水の中
//#define SE_ENV_FOREST			SE_480		// 環境音	樹海の中（屋外汎用？）
//#define SE_ENV_CRICKET			SE_481		// 環境音	虫の音
//#define SE_ENV_DUNGEON			SE_482		// 環境音	ダンジョン内空間
//#define SE_ENV_QUAKE			SE_483		// 環境音	地鳴り
//#define SE_ENV_LAVA3			SE_484		// 環境音	火山火口（地の利を得たぞ！）
//#define SE_ENV_FIRE2			SE_459		// 環境音	火山火噴出し
//#define SE_ENV_MEMORY			SE_559		// 環境音	記憶イベント

//=================================================================================
#define SE_ENV_SEA_1			SE_Y150		// 浜辺 近 1
#define SE_ENV_SEA_2			SE_Y151		// 浜辺 近 2
#define SE_ENV_SEA_3			SE_Y152		// 浜辺 遠 1 おとなしめ
#define SE_ENV_SEA_4			SE_Y153		// 浜辺 遠 2
#define SE_ENV_SEA_5			SE_Y154		// 浜辺 大荒れ

#define SE_ENV_BIRD_1			SE_Y155		// 鳥 森+海
#define SE_ENV_BIRD_2			SE_Y156		// 鳥 海

#define SE_ENV_LAKE_1			SE_Y160		// 湖 1 (森音あり
#define SE_ENV_LAKE_2			SE_Y161		// 湖 2 (水音のみ
#define SE_ENV_LAKE_3			SE_Y159		// 湖 3 (洞窟

#define SE_ENV_WATER_1			SE_Y163		// 水系 川段差 S
#define SE_ENV_WATER_2			SE_Y164		// 水系 川段差 M
#define SE_ENV_WATER_3			SE_Y165		// 水系 川段差 L
#define SE_ENV_WATER_4			SE_Y162		// 水系 ちょろちょろ

#define SE_ENV_UNDERWATER		SE_Y172		// 水中	システムで
#define SE_ENV_UNDERWATER_1		SE_Y173		// 水中
//#define SE_ENV_UNDERWATER_2		SE_Y173		// 水中

#define SE_ENV_WATERFALL_1		SE_Y168		// 滝 1
#define SE_ENV_WATERFALL_2		SE_Y169		// 滝 2
#define SE_ENV_WATERFALL_3		SE_Y170		// 滝 近
#define SE_ENV_WATERFALL_4		SE_Y171		// 滝 遠
#define SE_ENV_WATERFALL_5		SE_Y166		// 滝 小さめ
#define SE_ENV_WATERFALL_6		SE_Y167		// 滝 吹き出し

#define SE_ENV_RIVER_1			SE_Y174		// 川 1 深
#define SE_ENV_RIVER_2			SE_Y175		// 川 2 浅
#define SE_ENV_RIVER_3			SE_Y176		// 川 3 強
#define SE_ENV_RIVER_4			SE_Y177		// 川 大荒れ

#define SE_ENV_FOREST_1			SE_Y180		// 森 鳥 1 ふつう
#define SE_ENV_FOREST_2			SE_Y181		// 森 鳥 2 静か / 朝
#define SE_ENV_FOREST_3			SE_Y182		// 森 鳥 ジャングル
#define SE_ENV_FOREST_4			SE_Y183		// 森 夜
#define SE_ENV_FOREST_5			SE_Y184		// 森 水辺

#define SE_ENV_WIND_1			SE_Y185		// 風 静か
#define SE_ENV_WIND_2			SE_Y186		// 風 強め
#define SE_ENV_WIND_3			SE_Y187		// 風 葉っぱ
#define SE_ENV_WIND_4			SE_Y188		// 風 ビュービュー
#define SE_ENV_WIND_5			SE_Y157		// 風 ビュービュー 激しめ m3110m 過去編向け
#define SE_ENV_WIND_6			SE_Y1004	// 風 過去編Ⅶ用猛吹雪

#define SE_ENV_RUMBLE_1			SE_Y190		// 低音
#define SE_ENV_BUBBLE_1			SE_Y194		// 泡 24k
#define SE_ENV_BUBBLE_2			SE_Y195		// 泡 溶岩 24k
#define SE_ENV_BUBBLE_JET		SE_Y170		// 水中 ジェットバブル
#define SE_ENV_SCFI_1			SE_Y191		// パッド系
#define SE_ENV_SCFI_2			SE_Y192		// パッド系 lo
#define SE_ENV_SCFI_3			SE_Y193		// パッド系 hi
#define SE_ENV_RAIN_1			SE_Y393		// 雨（SE_468）24k
#define SE_ENV_FIRE_1			SE_Y196		// 焚き火 24k →48k
#define SE_ENV_FIRE_2			SE_Y198		// コンロ 24k
#define SE_ENV_FIRE_3			SE_Y199		// 燭台 燃焼中 24k
#define SE_ENV_THUNDER_1		SE_Y178		// 雷
#define SE_ENV_WOOD_CREAK_1		SE_Y197		// 木 きしみ 24k

//PS4追加
#define SE_ENV_LAVA_1		SE_Y523		//mp6551,6553 炎噴射
#define SE_ENV_LAVA_2		SE_Y289		//mp6551,6553 炎噴射
#define SE_ENV_ICE_1		SE_Y319		//mp6542m 氷結地帯


//====マップ別========================================================

//村
//#define SE_ENV_M2201_1			SE_ENV_WIND1		// ■そよ風
//#define SE_ENV_M2201_2			SE_ENV_FIRE1		// ■かがり火
//#define SE_ENV_M2201_3			SE_ENV_FIRE1		// ■かがり火
//#define SE_ENV_M2201_4			SE_ENV_FIRE1		// ■かがり火
//#define SE_ENV_M2201_5			SE_ENV_FIRE1		// ■かがり火
//#define SE_ENV_M2201_6			SE_ENV_FIRE1		// ■かがり火
//#define SE_ENV_M2201_7			SE_ENV_FIRE1		// ■かがり火
//#define SE_ENV_M2201_8			SE_ENV_CRICKET		// 虫の音

//#define SE_ENV_M5201_1			SE_ENV_FALLWATER1	//■〇ボックスゆる滝
//#define SE_ENV_M5201_2			SE_ENV_COOK			//■ ポイント料理なべ

//#define SE_ENV_M6212_1			SE_ENV_FIRE1		// 炎？

//----------------------------------------------------------------------------------
//フィールド

//#define SE_ENV_M6141_1			SE_ENV_PAWDER		//■胞子

//----------------------------------------------------------------------------------
//ダンジョン

//#define SE_ENV_M3302_1			SE_ENV_RIVER1		// ■洞窟内水
//#define SE_ENV_M3302_2			SE_ENV_UNDERWATER2	// □〇洞窟内水

//----------------------------------------------------------------------------------
//サブダンジョン

///////////////////////////////////////////////////////////////////////////////
//ギミック・オブジェクト
///////////////////////////////////////////////////////////////////////////////
// Ys8 使用ラベル範囲
//		SE_Y500～Y549 (50)

//ドア
#define SE_DOOR_WOOD_1			SE_Y541	// ドア 小屋
#define SE_DOOR_WOOD_1C			SE_Y541	// ドア 小屋 close
#define SE_DOOR_WOOD_2			SE_Y542	// ドア 船
#define SE_DOOR_WOOD_2C			SE_Y542	// ドア 船 close
#define SE_DOOR_WOOD_3			SE_Y543	// ドア 船 大
#define SE_DOOR_WOOD_3C			SE_Y543	// ドア 船 大 close
#define SE_DOOR_STONE_1			SE_Y544	// ドア 石
#define SE_DOOR_STONE_1C		SE_Y544	// ドア 石 close


//ブレイクオブジェ ys8
///#define SE_BREAK_TREASURE		SE_544	// 採集オブジェクト破壊	※以下に差し替え
///#define SE_BREAK_TREASURE1		SE_544	// 採集オブジェクト破壊(岩)
///#define SE_BREAK_TREASURE2		SE_545	// 採集オブジェクト破壊(草)
///#define SE_BREAK_TREASURE3		SE_546	// 採集オブジェクト破壊(枝・骨)

#define SE_BREAK_OBJ_1			SE_Y530	// 鉱石
#define SE_BREAK_OBJ_2			SE_Y531	// 草花
#define SE_BREAK_OBJ_3			SE_Y532	// 木
#define SE_BREAK_OBJ_4			SE_Y533	// 植物
#define SE_BREAK_OBJ_5			SE_Y534	// 果実
#define SE_BREAK_OBJ_6			SE_Y535	// 木箱
#define SE_BREAK_OBJ_7			SE_Y536	// ガラス・ツボ
#define SE_BREAK_OBJ_8			SE_Y537	// 石箱

//デコイ
#define SE_BREAK_WOOD			SE_Y538	// 木破壊
#define SE_BREAK_WOOD_2			SE_Y539	// 木破壊 小

//オブジェクト
#define SE_BREAK_MAT_0010		SE_BREAK_OBJ_1	//mat0010	鉱石 奇妙な塊		南部A
#define SE_BREAK_MAT_0011		SE_BREAK_OBJ_1	//mat0011	鉱石 鉄鉱石			南部B
#define SE_BREAK_MAT_0012		SE_BREAK_OBJ_1	//mat0012	鉱石 テクタイト鉱	南部C
#define SE_BREAK_MAT_0013		SE_BREAK_OBJ_1	//mat0013	鉱石 理晶石			北部A
#define SE_BREAK_MAT_0014		SE_BREAK_OBJ_1	//mat0014	鉱石 竜紋岩			北部B

#define SE_BREAK_MAT_0020		SE_BREAK_OBJ_2	//mat0020	小さな葉・綺麗な花	南部A
#define SE_BREAK_MAT_0021		SE_BREAK_OBJ_2	//mat0021	リムの花			南部B
#define SE_BREAK_MAT_0022		SE_BREAK_OBJ_2	//mat0022	ジキタリス			南部C
#define SE_BREAK_MAT_0023		SE_BREAK_OBJ_2	//mat0023	輝く葉・盤古の花	北部A
#define SE_BREAK_MAT_0024		SE_BREAK_OBJ_2	//mat0024	アウラ草			北部B

#define SE_BREAK_MAT_0031		SE_BREAK_OBJ_1	//ーーーー未使用
#define SE_BREAK_MAT_0032		SE_BREAK_OBJ_1	//ーーーー未使用
#define SE_BREAK_MAT_0033		SE_BREAK_OBJ_1	//ーーーー未使用

#define SE_BREAK_MAT_0040		SE_BREAK_OBJ_3	//mat0040	木					南部A
#define SE_BREAK_MAT_0041		SE_BREAK_OBJ_3	//mat0041	樹脂の木			南部B
#define SE_BREAK_MAT_0042		SE_BREAK_OBJ_3	//mat0042	樹脂の木・暖かい木	南部C
#define SE_BREAK_MAT_0043		SE_BREAK_OBJ_3	//mat0043	霊木・暖かい木		北部A
#define SE_BREAK_MAT_0044		SE_BREAK_OBJ_3	//mat0044	大樹の宝枝			北部B

#define SE_BREAK_MAT_0050		SE_BREAK_OBJ_1	//ーーーー未使用
#define SE_BREAK_MAT_0051		SE_BREAK_OBJ_1	//ーーーー未使用
#define SE_BREAK_MAT_0052		SE_BREAK_OBJ_1	//ーーーー未使用
#define SE_BREAK_MAT_0053		SE_BREAK_OBJ_1	//ーーーー未使用
#define SE_BREAK_MAT_0054		SE_BREAK_OBJ_1	//ーーーー未使用
#define SE_BREAK_MAT_0055		SE_BREAK_OBJ_1	//ーーーー未使用
#define SE_BREAK_MAT_0056		SE_BREAK_OBJ_1	//ーーーー未使用
#define SE_BREAK_MAT_0061		SE_BREAK_OBJ_1	//ーーーー未使用	※旧互換用
#define SE_BREAK_MAT_0091		SE_BREAK_OBJ_1	//ーーーー未使用

#define SE_BREAK_MAT_3001		SE_BREAK_OBJ_5	//mat3001	クルの実			南部果物
#define SE_BREAK_MAT_3002		SE_BREAK_OBJ_5	//mat3002	ココナッツ_地面		南部果物
#define SE_BREAK_MAT_3003		SE_BREAK_OBJ_5	//ーーーー未使用
#define SE_BREAK_MAT_3004		SE_BREAK_OBJ_5	//mat3004	マンゴー			南部果物
#define SE_BREAK_MAT_3005		SE_BREAK_OBJ_5	//mat3005	竜樹の実			北部果物

#define SE_BREAK_MAT_4004		SE_BREAK_OBJ_4	//mat4004	貝					食材 / その他
#define SE_BREAK_MAT_4006		SE_BREAK_OBJ_2	//mat4006	山鳥の卵（鳥の巣）	食材 / その他
#define SE_BREAK_MAT_4007		SE_BREAK_OBJ_2	//mat4007	蜂蜜（蜂の巣）		食材 / その他
#define SE_BREAK_MAT_4008		SE_BREAK_OBJ_2	//mat4008	セイレン麦			食材 / その他
#define SE_BREAK_MAT_4009		SE_BREAK_OBJ_1	//mat4009	岩塩				食材 / その他
#define SE_BREAK_MAT_4012		SE_BREAK_OBJ_2	//ーーーー未使用
#define SE_BREAK_MAT_4013		SE_BREAK_OBJ_2	//ーーーー未使用
#define SE_BREAK_MAT_4021		SE_BREAK_OBJ_5	//mat4021	キノコ				食材 / その他

#define SE_BREAK_MAT_4100		SE_BREAK_OBJ_5	//ーーーー未使用
#define SE_BREAK_MAT_4101		SE_BREAK_OBJ_5	//mat4101	パプリカ			食材 / 野菜
#define SE_BREAK_MAT_4102		SE_BREAK_OBJ_5	//mat4102	タルボナス			食材 / 野菜
#define SE_BREAK_MAT_4103		SE_BREAK_OBJ_5	//mat4103	キャベツ			食材 / 野菜
#define SE_BREAK_MAT_4104		SE_BREAK_OBJ_5	//mat4104	シャインコーン		食材 / 野菜
#define SE_BREAK_MAT_4105		SE_BREAK_OBJ_5	//mat4105	クイーントマト		食材 / 野菜
#define SE_BREAK_MAT_4106		SE_BREAK_OBJ_5	//mat4106	キングパンプキン	食材 / 野菜

#define SE_BREAK_MAT_5001		SE_BREAK_OBJ_1	//mat5001	閃結晶_壁	ギミック
#define SE_BREAK_MAT_5001A		SE_Y547	//mat5001	閃結晶_壁	ピカー
#define SE_BREAK_MAT_5002		SE_BREAK_OBJ_1	//mat5002	閃結晶_床	ギミック

#define SE_BREAK_MAT_6001		SE_BREAK_OBJ_1	//mat6001	魚_小	釣り場
#define SE_BREAK_MAT_6002		SE_BREAK_OBJ_1	//mat6002	魚_大	釣り場

#define SE_BREAK_MAT_7001		SE_BREAK_OBJ_6	//mat7001	木箱A	
#define SE_BREAK_MAT_7002		SE_BREAK_OBJ_6	//mat7002	木箱B	
#define SE_BREAK_MAT_7003		SE_BREAK_OBJ_6	//mat7003	木箱C	

#define SE_BREAK_MAT_7101		SE_BREAK_OBJ_8	//mat7101	石箱	
#define SE_BREAK_MAT_7201		SE_BREAK_OBJ_7	//mat7201	壷A	
#define SE_BREAK_MAT_7202		SE_BREAK_OBJ_7	//mat7202	壷B	
#define SE_BREAK_MAT_7301		SE_BREAK_OBJ_6	//mat7301	樽	

//スケルトン ホネホネ
#define SE_BREAK_COM_025		SE_Y548	//common:com025


//扉音
//;;;	#define SE_WOOD_DOOR		SE_040		// 凡庸 木製扉開く
//;;;	#define SE_WOOD_C_DOOR		SE_041		// 凡庸 木製扉閉まる★NEW音
//;;;	#define SE_C025_DOOR		SE_547		// キャスナン鉱山ドア開くcom_025
//;;;	#define SE_C025_C_DOOR		SE_548		// キャスナン鉱山ドア閉まるcom_025
//;;;	#define SE_C051_DOOR		SE_549		// ハイランド用ドア２com_051
//;;;	#define SE_C051_C_DOOR		SE_550		// ハイランド用ドア２閉まるcom_051
//;;;	#define SE_C059_DOOR		SE_551		// エルディール部屋ドアcom_059
//;;;	#define SE_C059_C_DOOR		SE_552		// エルディール部屋ドア閉まるcom_059



//#define SE_KIOKU_START		SE_Y498	// 記憶イベント開始
//#define SE_KIOKU_END		SE_Y498	// 記憶イベント終了
#define	SE_GIM_QUAKE			SE_Y500		// 地響き loop
#define	SE_GIM_ROCK				SE_Y501		// 岩系 ごろごろ loop

#define	SE_GIM_HOLE_BRANCH		SE_Y505		// 落とし穴 枝 mp1302,
#define	SE_GIM_FALL_ROCK		SE_Y509		// 石床 落下 mp4333,

#define	SE_GIM_SCFI_1			SE_Y510		// ラスダンギミック 六角形
#define	SE_GIM_SCFI_1A			SE_Y524		// ラスダンギミック 六角形 小ボス
#define	SE_GIM_SCFI_2			SE_Y511		// ラスダンギミック ストッパー消える
#define	SE_GIM_SCFI_3			SE_Y512		// ラスダンギミック 床マーク点灯
#define	SE_GIM_SCFI_4			SE_Y513		// ラスダンギミック 移動床 ふわふわ
#define	SE_GIM_SCFI_4A			SE_Y508		// ラスダンギミック 移動床 どすん

#define	SE_GIM_WARP_1			SE_Y514		// ワープ
#define	SE_GIM_WARP_2			SE_Y514		// ワープ ラスダン
#define	SE_GIM_WARP_3			SE_Y346		// ワープ ラスダン（mp6310→mp6310bのみ）

#define	SE_GIM_HIT_LEAVES		SE_Y515		// TODO prog 緑系床トラップ発動 mp6307,mp6307b
#define	SE_GIM_JUMP_FUWA		SE_Y516		// TODO prog ふわふわジャンプギミック mp6308

#define	SE_GIM_FIRE				SE_Y523		// mp6341 点火
#define	SE_GIM_FIRE_R			SE_Y524		// mp6347 消灯

#define	SE_GIM_SW_SCREW			SE_Y517		// mp6328 回転スイッチ
#define	SE_GIM_SW				SE_Y521		// レバースイッチ 短め
#define	SE_GIM_SW_2				SE_Y522		// mp6341 レバースイッチ 短め サビ音つき
#define	SE_GIM_SW_3				SE_Y525		// レバースイッチ 長め
#define	SE_GIM_SW_4				SE_Y512		// m6401 ふんわりスイッチ


#define	SE_GIM_LIFT_SCFI		SE_Y518		// フシギエレベータ 移動 loop
#define	SE_GIM_LIFT_STOP		SE_Y508		// フシギエレベータ 停止

#define	SE_GIM_SLIDE_STONE		SE_Y519		// 石系 スライド 軽め loop
#define	SE_GIM_SLIDE_STOP		SE_Y520		// スライドリフト 停止

// ドア
#define	SE_GIM_DOOR_ROCK		SE_Y507		// 石ドア スライド loop
#define	SE_GIM_DOOR_ROCK_STOP	SE_Y508		// 石ドア 停止
#define	SE_GIM_DOOR_METAL		SE_Y526		// 鉄系ドア 
#define	SE_GIM_DOOR_CHAIN		SE_Y528		// 鉄格子 スライド loop
#define	SE_GIM_DOOR_CHAIN_STOP	SE_Y529		// 鉄格子 停止

#define	SE_GIM_DOOR_LIGHT		SE_Y527		// mp6401 ドア光る
#define	SE_GIM_DOOR_LIGHT_2		SE_Y323		// mp6401 ドア光る（丸いの）

//ストッパー
#define	SE_GIM_STOP_1			SE_Y502		// 炎系 mp0403
#define	SE_GIM_STOP_2			SE_Y503		// 白もやもや mp0404

#define	SE_GIM_STOP_WOOD_1		SE_Y504		// 倒木 倒れ	mp1101, 
#define	SE_GIM_STOP_WOOD_2		SE_Y506		// 倒木 た		mp1101, 

// PS4追加分（過去編ダンジョン）
#define	SE_GIM_PAST_STATUE_LOOP		SE_Y198		// 像の火 ※再生はループではなく単発繰り返し ref:obj_sp11.mtd
#define	SE_GIM_PAST_STATUE_OFF		SE_Y524		// 像の火 OFF
#define	SE_GIM_PAST_DOOR_PRE		SE_Y511		// 扉光 消灯
#define	SE_GIM_PAST_DOOR			SE_Y507		// 扉 スライド loop
#define	SE_GIM_PAST_DOOR_STOP		SE_Y508		// 扉 停止
#define	SE_GIM_PAST_LEVER_ON		SE_Y525		//※未使用と思われ。レバーはオブジェクトに埋め込み済み //２層レバー ON// ◆（仮）
#define	SE_GIM_PAST_ROCK_RESET		SE_Y1557	//SE_Y580		// ２層封石リセット// ◆（仮）
#define	SE_GIM_PAST_ROCK_BREAK		SE_Y1619	//SE_Y509		// ２層封石 破壊
#define	SE_GIM_PAST_ROCK_LAND		SE_Y1620	//SE_Y520		// ２層封石 着地
#define	SE_GIM_PAST_SHORTCUT		SE_Y507		// ショートカット開通
#define	SE_GIM_PAST_SHORTCUT_STOP	SE_Y508		// ショートカット開通
#define	SE_GIM_PAST_STEP			SE_Y507		// 足場開通// ◆（仮）
#define	SE_GIM_PAST_STEP_STOP		SE_Y508		// 足場開通// ◆（仮）
#define	SE_GIM_PAST_ICE_OFF			SE_Y1558		// 凍結エリア解除
#define	SE_GIM_PAST_WIND_OFF		SE_Y503 //SE_Y513		// 旋風エリア解除
#define	SE_GIM_MAGWALL_KEY			SE_Y1559		// 障壁の解除石が反応// ◆（仮）
#define	SE_GIM_MAGWALL_OPEN			SE_Y1560		// 障壁を解除// ◆（仮）

//扉が開くようになった予知用
#define	SE_GIM_PAST_DOOR_EFX		SE_Y1006		// 扉 スライド loop// ◆（リバーブ）
#define	SE_GIM_PAST_DOOR_STOP_EFX	SE_Y1007		// 扉 停止// ◆（リバーブ）

#define	SE_GIM_PAST_POWER			SE_Y286

//旧互換用
#define SE_GIM_PLANT_FALL1		SE_GIM_STOP_WOOD_2		// 		コモドD：大きな繭が落ちる

//------------------------------------------------------------------------------
// ↓旧ギミック
//------------------------------------------------------------------------------

//#define SE_PA_C000_ACT			SE_DUMMY	//アドルPAアクション//キャラエリアに記載しています。
//#define SE_PA_C001_ACT1			SE_264		//デュレンPAアクション
//#define SE_PA_C001_ACT2			SE_265		//デュレンPAアクション
//#define SE_PA_C002_ACT1			SE_215		//カーナPAアクション
//#define SE_PA_C002_ACT2			SE_079		//カーナPAアクション
//#define SE_PA_C003_ACT1			SE_215		//オズマPAアクション
//#define SE_PA_C003_ACT2			SE_080		//オズマPAアクション
//#define SE_PA_C003_ACT3			SE_081		//オズマPAアクション
//#define SE_PA_C004_ACT1			SE_205		//カンリリカPAアクション
//#define SE_PA_C004_ACT2			SE_075		//カンリリカPAアクション
//#define SE_PA_C004_ACT3			SE_266		//カンリリカPAアクション
//#define SE_PA_C005_ACT1			SE_268		//フリーダPAアクション
//#define SE_PA_C005_ACT2			SE_269		//フリーダPAアクション
//#define SE_PA_C005_ACT3			SE_080		//フリーダPAアクション

//------------------------------------------------------------------------------
//#define SE_GIM_PUZZLE1			SE_485	// 		パズル：開く
//#define SE_GIM_PUZZLE2			SE_486	// 		パズル：開ききる
//
//#define SE_GIM_WOODFALL			SE_487	// 		木が倒れ始める
//#define SE_GIM_BRIDGEFALL		SE_488	// 		橋をかけはじめる
//
//#define SE_GIM_STONEFALL		SE_490	//		岩系倒れ始める
//#define SE_GIM_STONEDOWN		SE_491	//		岩・倒れる
//#define SE_GIM_CHAINFALL		SE_492	// 		鉄鎖が倒れ始める
//#define SE_GIM_CHAINDOWN		SE_493	// 		鉄橋系が倒れる
//
//#define SE_GIM_ELEVATOR1		SE_494	// 		エレベーター起動のぼり
//#define SE_GIM_ELEVATOR2		SE_495	// 		エレベーター起動くだり
//#define SE_GIM_ELEVATOR3		SE_496	// 		エレベーター到着
//
//#define SE_GIM_IDOOR1			SE_497	// 		柵開放
//
//#define SE_GIM_TBOX_APP			SE_627	// 		宝箱出現
//#define SE_GIM_APPEAR			SE_498	// 		出現
//#define SE_GIM_ERASE			SE_499	// 		消失
//
//#define SE_GIM_DACT				SE_525	// ※ダクトを開いたSE

//------------------------------------------------------------------------------
//#define SE_GIM_PLANT_CUT		SE_086		// 		コモドD：植物を切る//これはこのままで
//#define SE_GIM_PLANT_FALL1		SE_GIM_STOP_WOOD_2		// 		コモドD：大きな繭が落ちる
//#define SE_GIM_PLANT_FALL2		SE_321		// 		コモドD：大きな繭が落ちる※水しぶきｖｅｒ

//#define SE_GIM_WALLCRACK		SE_500		// 		セルレイダンジョン：壁にヒビ	SE_216
//#define SE_GIM_WALLBLEAK		SE_501		// 		セルレイダンジョン：壁壊れる
//#define SE_GIM_WATER1			SE_502		// 		セルレイダンジョン：水が	ひいていく
//#define SE_GIM_WATER2			SE_503		// 		セルレイダンジョン：水が	どばどば
//#define SE_GIM_MONS1			SE_504		//		セルレイダンジョン：敵さん泣き声※作り直し
//#define SE_GIM_MONS2			SE_505		//		セルレイダンジョン：敵さんあらわる
//
//#define SE_GIM_SWITCH_ON		SE_267		// 		雷雨の塔：スイッチ起動
//#define SE_GIM_SWITCH_KNL		SE_506		// 		雷雨の塔：スイッチ起動
//#define SE_GIM_FLONT_UP1		SE_507		// 		雷雨の塔：床が競りあがる
//#define SE_GIM_FLONT_UP2		SE_508		// 		雷雨の塔：床が競り終わり
//#define SE_GIM_FLONT_DOWN		SE_509		// 		雷雨の塔：床がおちる
//
//#define SE_GIM_MACHINE_ON		SE_506		// 		フィールド：雷スイッチ起動SE_510は未使用
//#define SE_GIM_MACHINE_MOVE1	SE_511		// 		フィールド：雷装置起き上がり開始
//#define SE_GIM_MACHINE_MOVE2	SE_512		// 		フィールド：雷装置起き上がり
//#define SE_GIM_MACHINE_MOVE3	SE_513		// 		フィールド：雷装置起き上がり長い
//
//#define SE_GIM_ICE_DARK			SE_514		// 		氷山：闇
//#define SE_GIM_ICE_ON			SE_515		// 		氷山：凍りつく
//#define SE_GIM_ICE_WIND			SE_516		// 		氷山：風
//#define SE_GIM_ICE_ON2			SE_508		// 		ガス止める
//#define SE_GIM_ICE_POISON1		SE_508		// 		ガス噴出す
//#define SE_GIM_ICE_POISON2		SE_524		// 		ガス噴出す
//
//#define SE_GIM_MACHINE2_MOVE1	SE_517		// 		貯水所：スイッチ起動
//#define SE_GIM_WATERFALL1A		SE_485		// 		貯水所：起動       
//#define SE_GIM_WATERFALL1B		SE_508		// 		貯水所：起動完了SE_486
//#define SE_GIM_WATERFALL2		SE_518		// 		貯水所：滝
//#define SE_GIM_WATERFALL3		SE_502		// 		貯水所：水位
//#define SE_GIM_WATERFALL4		SE_507		// 		貯水所：移動＆
//#define SE_GIM_WATERFALL5		SE_508		// 		貯水所：移動＆
//#define SE_GIM_WATERFALL6		SE_503		// 		貯水所：プチ滝
//
//#define SE_GIM_BUTTON			SE_519		// 		ラスダン：ボタン
//#define SE_GIM_FLONT_MOVE1		SE_507		// 		ラスダン：床移動
//#define SE_GIM_FLONT_MOVE2		SE_508		// 		ラスダン：床移動
//#define SE_GIM_FLONT_SPEAR		SE_520		// 		ラスダン：槍がしゅぴん
//#define SE_GIM_FLONT_OFF		SE_499		// 		ラスダン：わな解除
//#define SE_GIM_GLASS_BREAK		SE_521		// 		ラスダン：ビン割れる
//#define SE_GIM_GLASS_WATER1		SE_503		// 		ラスダン：ビン割れる
//#define SE_GIM_GLASS_WATER2		SE_503		// 		ラスダン：ビンお水
//#define SE_GIM_WETHER_RAIN1		SE_502		// 		ラスダン：水が増える減る
//#define SE_GIM_WETHER_WIND1		SE_516		// 		ラスダン：風が出る
//#define SE_GIM_WETHER_SUN1		SE_522		// 		ラスダン：氷がとける
//#define SE_GIM_LIGHTROAD1		SE_498		// 		ラスダン：光の床(仮)
//#define SE_GIM_LIGHTROAD2		SE_499		// 		ラスダン：光の床(仮)
//#define SE_GIM_WARP				SE_526		// 		ラスダン：ワープ


//------------------------------------------------------------------------------
//街
/*
//;;;	//■Z:\BIN\SCRIPT\MP6201.SCP  [SJIS]
//;;;	#define SE_MP6201_GIM02_1	SE_GIM_BUTTON
//;;;	#define SE_MP6201_GIM02_2	SE_GIM_PUZZLE1
//;;;	#define SE_MP6201_GIM02_3	SE_GIM_PUZZLE2
//;;;	#define SE_MP6201_GIM02_4	SE_GIM_STONEDOWN
//;;;	
//;;;	
//;;;	
//;;;	//フィールド
//;;;	//■Z:\BIN\SCRIPT\MP2102.SCP  [SJIS]
//;;;	#define SE_MP2102_GIM01_1			SE_GIM_WOODFALL		// アドルPA：木が倒れ始める
//;;;	
//;;;	//■Z:\BIN\SCRIPT\MP2104.SCP  [SJIS]
//;;;	#define SE_MP2104_GIM01_1			SE_GIM_BRIDGEFALL	// ：橋をかけはじめる
//;;;	#define SE_MP2104_GIM02_1			SE_GIM_BRIDGEFALL	// ：橋をかけはじめる
//;;;	
//;;;	//■Z:\BIN\SCRIPT\MP2107.SCP  [SJIS]
//;;;	#define SE_MP2107_GIM01_1			SE_GIM_WOODFALL		// アドルPA：木が倒れ始める
//;;;	
//;;;	//■Z:\BIN\SCRIPT\MP3103.SCP  [SJIS]
//;;;	#define SE_MP3103_GIM01_1			SE_GIM_PUZZLE1			// パズル：開く
//;;;	#define SE_MP3103_GIM01_2			SE_GIM_PUZZLE2			// パズル：開ききる
//;;;	
//;;;	
//;;;	//■Z:\BIN\SCRIPT\MP6115.SCP  [SJIS]
//;;;	#define SE_MP6115_GIM01_1			SE_GIM_MACHINE_ON		//カンリリカPA：装置に当たる
//;;;	#define SE_MP6115_GIM01_2			SE_GIM_MACHINE_MOVE1	//カンリリカPA：起動
//;;;	#define SE_MP6115_GIM01_3			SE_GIM_MACHINE_MOVE2	//カンリリカPA：起動起き上がる
//;;;	#define SE_MP6115_GIM02_1			SE_GIM_MACHINE_ON		//カンリリカPA：装置に当たる
//;;;	#define SE_MP6115_GIM02_2			SE_GIM_MACHINE_MOVE1	//カンリリカPA：起動
//;;;	#define SE_MP6115_GIM02_3			SE_GIM_MACHINE_MOVE2	//カンリリカPA：起動起き上がる
//;;;	
//;;;	//■Z:\BIN\SCRIPT\MP6121.SCP  [SJIS]
//;;;	#define SE_MP6121_GIM01_1			SE_GIM_PLANT_CUT		// カーナPA：植物を切る
//;;;	#define SE_MP6121_GIM01_2			SE_GIM_PLANT_FALL1		// カーナPA：大きな繭が落ちる
//;;;	
//;;;	//■Z:\BIN\SCRIPT\MP6132.SCP  [SJIS]
//;;;	#define SE_MP6132_GIM01_1			SE_GIM_ICE_DARK		// ■フリーダPA：闇
//;;;	#define SE_MP6132_GIM01_2			SE_GIM_ICE_ON		// ■フリーダPA：凍りつく
//;;;	#define SE_MP6132_GIM01_3			SE_GIM_ICE_ON2		// ■フリーダPA：凍りつく
//;;;	
//;;;	//■Z:\BIN\SCRIPT\MP6133.SCP  [SJIS]
//;;;	#define SE_MP6133_GIM01_1			SE_GIM_ICE_DARK		// ■フリーダPA：闇
//;;;	#define SE_MP6133_GIM01_2			SE_GIM_ICE_ON		// ■フリーダPA：凍りつく
//;;;	#define SE_MP6133_GIM01_3			SE_GIM_ICE_ON2		// ■フリーダPA：凍りつき終わり
//;;;	
//;;;	//■Z:\BIN\SCRIPT\MP6135.SCP  [SJIS]
//;;;	#define SE_MP6135_GIM01_1			SE_GIM_ICE_DARK		// ■フリーダPA：闇
//;;;	#define SE_MP6135_GIM01_2			SE_GIM_ICE_ON		// ■フリーダPA：凍りつく
//;;;	#define SE_MP6135_GIM01_3			SE_GIM_ICE_ON2		// ■フリーダPA：凍りつき終わり
//;;;	#define SE_MP6135_GIM01_4A			SE_GIM_ICE_POISON1	// ■フリーダPA：ガス噴出す
//;;;	#define SE_MP6135_GIM01_4B			SE_GIM_ICE_POISON2	// ■フリーダPA：ガス噴出す
//;;;	#define SE_MP6135_GIM02_1			SE_GIM_ICE_DARK		// ■フリーダPA：闇
//;;;	#define SE_MP6135_GIM02_2			SE_GIM_ICE_ON		// ■フリーダPA：凍りつく
//;;;	#define SE_MP6135_GIM02_3			SE_GIM_ICE_ON2		// ■フリーダPA：凍りつき終わり
//;;;	#define SE_MP6135_GIM02_4A			SE_GIM_ICE_POISON1	// ■フリーダPA：ガス噴出す
//;;;	#define SE_MP6135_GIM02_4B			SE_GIM_ICE_POISON2	// ■フリーダPA：ガス噴出す
//;;;	
//;;;	//■Z:\BIN\SCRIPT\MP6136.SCP  [SJIS]
//;;;	//パズルはシステム欄に記載
//;;;	#define SE_MP6136_GIM01_1			SE_GIM_BUTTON		// ■スイッチ
//;;;	#define SE_MP6136_GIM01_2			SE_GIM_PUZZLE1		// ■石牢屋？
//;;;	#define SE_MP6136_GIM01_3			SE_GIM_PUZZLE2		// ■石牢屋？
//;;;	
//;;;	
//;;;	//■Z:\BIN\SCRIPT\MP6143.SCP  [SJIS]
//;;;	
//;;;	//サブダンジョン
//;;;	//■Z:\BIN\SCRIPT\SD2120.SCP  [SJIS]
//;;;	#define SE_SD2120_GIM01_1			SE_GIM_MACHINE_ON		//カンリリカPA：装置に当たる
//;;;	#define SE_SD2120_GIM01_2			SE_GIM_MACHINE_MOVE1	//カンリリカPA：起動
//;;;	#define SE_SD2120_GIM01_3			SE_GIM_MACHINE_MOVE3	//カンリリカPA：起動起き上がる長い
//;;;	#define SE_SD2120_GIM02_1			SE_GIM_MACHINE_ON		//カンリリカPA：装置に当たる
//;;;	#define SE_SD2120_GIM02_2			SE_GIM_MACHINE_MOVE1	//カンリリカPA：起動
//;;;	#define SE_SD2120_GIM02_3			SE_GIM_MACHINE_MOVE2	//カンリリカPA：起動起き上がる
//;;;	#define SE_SD2120_GIM03_1			SE_GIM_MACHINE_ON		//カンリリカPA：装置に当たる
//;;;	#define SE_SD2120_GIM03_2			SE_GIM_MACHINE_MOVE1	//カンリリカPA：起動
//;;;	#define SE_SD2120_GIM03_3			SE_GIM_MACHINE_MOVE2	//カンリリカPA：起動起き上がる
//;;;	
//;;;	//■Z:\BIN\SCRIPT\SD2121.SCP  [SJIS]
//;;;	
//;;;	#define SE_SD2121_GIM01_1			SE_GIM_MACHINE_ON		//カンリリカPA：装置に当たる
//;;;	#define SE_SD2121_GIM01_2			SE_GIM_MACHINE_MOVE1	//カンリリカPA：起動
//;;;	#define SE_SD2121_GIM01_3			SE_GIM_MACHINE_MOVE2	//カンリリカPA：起動起き上がる完了
//;;;	#define SE_SD2121_GIM02_1			SE_GIM_MACHINE_ON		//カンリリカPA：装置に当たる
//;;;	#define SE_SD2121_GIM02_2			SE_GIM_MACHINE_MOVE1	//カンリリカPA：起動
//;;;	#define SE_SD2121_GIM02_3			SE_GIM_MACHINE_MOVE2	//カンリリカPA：起動起き上がる
//;;;	#define SE_SD2121_GIM03_1			SE_GIM_MACHINE_ON		//カンリリカPA：装置に当たる
//;;;	#define SE_SD2121_GIM03_2			SE_GIM_MACHINE_MOVE1	//カンリリカPA：起動
//;;;	#define SE_SD2121_GIM03_3			SE_GIM_MACHINE_MOVE2	//カンリリカPA：起動起き上がる
//;;;	#define SE_SD2121_GIM04_1			SE_GIM_MACHINE_ON		//カンリリカPA：装置に当たる
//;;;	#define SE_SD2121_GIM04_2			SE_GIM_MACHINE_MOVE1	//カンリリカPA：起動
//;;;	#define SE_SD2121_GIM04_3			SE_GIM_MACHINE_MOVE2	//カンリリカPA：起動起き上がる
//;;;	
//;;;	//------------------------------------------------------------------------------
//;;;	//コモドＤ
//;;;	//■Z:\BIN\SCRIPT\MP2301.SCP  [SJIS]
//;;;	#define SE_MP2301_GIM03_1			SE_GIM_PLANT_CUT		// カーナPA：植物を切る
//;;;	#define SE_MP2301_GIM03_2			SE_GIM_PLANT_FALL1		// カーナPA：大きな繭が落ちる
//;;;	
//;;;	//■Z:\BIN\SCRIPT\MP2304.SCP  [SJIS]
//;;;	#define SE_MP2304_GIM01_1			SE_GIM_PLANT_CUT		// カーナPA：植物を切る
//;;;	#define SE_MP2304_GIM01_2			SE_GIM_PLANT_FALL1		// カーナPA：大きな繭が落ちる
//;;;	#define SE_MP2304_GIM02_1			SE_GIM_PLANT_CUT		// カーナPA：植物を切る
//;;;	#define SE_MP2304_GIM02_2			SE_GIM_PLANT_FALL1		// カーナPA：大きな繭が落ちる
//;;;	
//;;;	//■Z:\BIN\SCRIPT\MP2305.SCP  [SJIS]
//;;;	#define SE_MP2305_GIM01_1			SE_GIM_PLANT_CUT		// カーナPA：植物を切る
//;;;	#define SE_MP2305_GIM01_2A			SE_GIM_PLANT_FALL1		// カーナPA：大きな繭が落ちる
//;;;	#define SE_MP2305_GIM01_2B			SE_GIM_PLANT_FALL2		// カーナPA：大きな繭が落ちる
//;;;	#define SE_MP2305_GIM02_1			SE_GIM_PLANT_CUT		// カーナPA：植物を切る
//;;;	#define SE_MP2305_GIM02_2A			SE_GIM_PLANT_FALL1		// カーナPA：大きな繭が落ちる
//;;;	#define SE_MP2305_GIM02_2B			SE_GIM_PLANT_FALL2		// カーナPA：大きな繭が落ちる
//;;;	#define SE_MP2305_GIM03_1			SE_GIM_PLANT_CUT		// カーナPA：植物を切る        
//;;;	#define SE_MP2305_GIM03_2			SE_GIM_PLANT_FALL1		// カーナPA：大きな繭が落ちる  
//;;;	#define SE_MP2305_GIM04_1			SE_GIM_PLANT_CUT		// カーナPA：植物を切る        
//;;;	#define SE_MP2305_GIM04_2			SE_GIM_PLANT_FALL1		// カーナPA：大きな繭が落ちる  
//;;;	
//;;;	//■Z:\BIN\SCRIPT\MP2309.SCP  [SJIS]
//;;;	#define SE_MP2309_GIM01_1			SE_GIM_PUZZLE1			// パズル：開く
//;;;	#define SE_MP2309_GIM01_2			SE_GIM_PUZZLE2			// パズル：開ききる
//;;;	
//;;;	//------------------------------------------------------------------------------
//;;;	//セルレイＤ
//;;;	
//;;;	#define SE_MP33XX_WATER_1			SE_518				// 	水中での激流⇒＃それぞれのイベントボックスに入力する
//;;;	
//;;;	//■Z:\BIN\SCRIPT\MP3301.SCP  [SJIS]
//;;;	#define SE_MP3301_GIM01_1			SE_GIM_WALLCRACK	// 	オズマPA：壁にヒビ
//;;;	#define SE_MP3301_GIM01_2			SE_GIM_WALLBLEAK	// 	オズマPA：壁壊れる
//;;;	#define SE_MP3301_GIM01_3			SE_GIM_WATER1		// 	オズマPA：水が	ひいて
//;;;	#define SE_MP3301_GIM01_4			SE_GIM_WALLBLEAK	// 	オズマPA：壁壊れて
//;;;	#define SE_MP3301_GIM01_5			SE_GIM_WATER2		// 	オズマPA：水がどばどば
//;;;	
//;;;	
//;;;	//■Z:\BIN\SCRIPT\MP3302.SCP  [SJIS]
//;;;	#define SE_MP3302_GIM01_1			SE_GIM_WALLBLEAK	// 	■オズマPA：3303から壁壊れて
//;;;	#define SE_MP3302_GIM01_2			SE_GIM_WATERFALL2	// 	■オズマPA：3303から壁壊れて水がどばどば
//;;;	#define SE_MP3302_GIM02_1			SE_GIM_WALLBLEAK	// 	オズマPA：3303から壁壊れて
//;;;	#define SE_MP3302_GIM02_2			SE_GIM_WATERFALL2	// 	オズマPA：3303から壁壊れて水がどばどば
//;;;	#define SE_MP3302_GIM03_1			SE_GIM_WALLBLEAK	//	オズマPA：3304から壁壊れて
//;;;	#define SE_MP3302_GIM03_2			SE_GIM_WATERFALL2	// 	オズマPA：3304から壁壊れて水がどばどば
//;;;	
//;;;	//■Z:\BIN\SCRIPT\MP3303.SCP  [SJIS]
//;;;	#define SE_MP3303_GIM01_1			SE_GIM_WALLCRACK	// 	■オズマPA：壁にヒビ
//;;;	#define SE_MP3303_GIM01_2			SE_GIM_WALLBLEAK	// 	■オズマPA：壁壊れる
//;;;	#define SE_MP3303_GIM01_3			SE_GIM_WATER1		// 	■オズマPA：水が	ひいて
//;;;	#define SE_MP3303_GIM02_1			SE_GIM_WALLCRACK	// 	オズマPA：壁にヒビ
//;;;	#define SE_MP3303_GIM02_2			SE_GIM_WALLBLEAK	// 	オズマPA：壁壊れる
//;;;	#define SE_MP3303_GIM02_3			SE_GIM_WATER1		// 	オズマPA：水が	ひいて
//;;;	
//;;;	//■Z:\BIN\SCRIPT\MP3304.SCP  [SJIS]
//;;;	#define SE_MP3304_GIM01_1			SE_GIM_WALLCRACK	//  ■オズマPA：壁にヒビ
//;;;	#define SE_MP3304_GIM01_2			SE_GIM_WALLBLEAK	//  ■オズマPA：壁壊れる
//;;;	#define SE_MP3304_GIM01_3			SE_GIM_WATER1		//  ■オズマPA：水が	ひいて
//;;;	
//;;;	//■Z:\BIN\SCRIPT\MP3305.SCP  [SJIS]
//;;;	#define SE_MP3305_GIM01_1			SE_GIM_WALLCRACK	// 	■オズマPA：壁にヒビ
//;;;	#define SE_MP3305_GIM01_2			SE_GIM_WALLBLEAK	// 	■オズマPA：壁壊れる
//;;;	#define SE_MP3305_GIM01_3			SE_GIM_MONS1		// 	■オズマPA：敵さん泣き声
//;;;	#define SE_MP3305_GIM01_4			SE_GIM_MONS1		// 	■オズマPA：敵さん償還とりあえず泣き声返し
//;;;	#define SE_MP3305_GIM01_5			SE_GIM_MONS2		// 	■オズマPA：敵さん償還
//;;;	#define SE_MP3305_GIM01_6			SE_GIM_TBOX_APP		// 	■オズマPA：宝箱
//;;;	
//;;;	//■Z:\BIN\SCRIPT\MP3306.SCP  [SJIS]
//;;;	
//;;;	//■Z:\BIN\SCRIPT\MP3308.SCP  [SJIS]
//;;;	#define SE_MP3308_GIM01_1			SE_GIM_WALLCRACK	// 	オズマPA：壁にヒビ
//;;;	#define SE_MP3308_GIM01_2			SE_GIM_WALLBLEAK	// 	オズマPA：岩壊れる
//;;;	#define SE_MP3308_GIM01_3			SE_GIM_STONEDOWN	// 	オズマPA：岩が崩れる
//;;;	
//;;;	#define SE_MP3308_GIM01_4			SE_620	// 	オズマPA：全部壊れて地鳴り
//;;;	#define SE_MP3308_GIM01_5			SE_343				// 	オズマPA：全部壊れて岩落下中
//;;;	#define SE_MP3308_GIM01_6			SE_322				// 	オズマPA：全部壊れて岩落下水しぶき
//;;;	#define SE_MP3308_GIM01_7			SE_GIM_STONEDOWN	// 	オズマPA：全部壊れて岩落下水振動
//;;;	
//;;;	
//;;;	//■Z:\BIN\SCRIPT\MP3309.SCP  [SJIS]
//;;;	#define SE_MP3309_GIM01_1			SE_GIM_WALLCRACK	// 	オズマPA：壁にヒビ
//;;;	#define SE_MP3309_GIM01_3			SE_GIM_STONEFALL	// 	オズマPA：柱倒れる
//;;;	
//;;;	//■Z:\BIN\SCRIPT\MP3311.SCP  [SJIS]
//;;;	#define SE_MP2311_GIM01_1			SE_GIM_PUZZLE1			// パズル：開く
//;;;	#define SE_MP2311_GIM01_2			SE_GIM_PUZZLE2			// パズル：開ききる
//;;;	
//;;;	//■Z:\BIN\SCRIPT\MP3312.SCP  [SJIS]
//;;;	//以下は鳴っているシーンがわからないために無音
//;;;	#define SE_MP2312_BOSSEVATK1		SE_DUMMY				//だみー
//;;;	#define SE_MP2312_BOSSEVATK2		SE_DUMMY				//だみー
//;;;	#define SE_MP2312_BOSSEVATK3		SE_DUMMY				//だみー
//;;;	#define SE_MP2312_BOSSEVATK4		SE_DUMMY				//だみー
//;;;	#define SE_MP2312_BOSSEVATK5		SE_DUMMY				//だみー
//;;;	#define SE_MP2312_BOSSEVATK6		SE_DUMMY				//だみー
//;;;	#define SE_MP2312_BOSSEVATK7		SE_DUMMY				//だみー
//;;;	#define SE_MP2312_BOSSEVATK8		SE_DUMMY				//だみー
//;;;	#define SE_MP2312_L_GIM01			SE_DUMMY				//だみー
//;;;	
//;;;	//■Z:\BIN\SCRIPT\MP3313.SCP  [SJIS]
//;;;	//以下は鳴っているシーンがわからないために無音
//;;;	//gim02a・gim02b・gim02cはイベント中
//;;;	
//;;;	//------------------------------------------------------------------------------
//;;;	//雷雨の塔
//;;;	
//;;;	//■Z:\BIN\SCRIPT\MP4301.SCP  [SJIS]
//;;;	#define SE_MP4301_GIM01A_1A	SE_GIM_SWITCH_ON	// 雷雨の塔：スイッチ起動
//;;;	#define SE_MP4301_GIM01A_1B	SE_GIM_MACHINE2_MOVE1// 雷雨の塔：スイッチ起動
//;;;	#define SE_MP4301_GIM01B_2	SE_GIM_FLONT_UP1	// 雷雨の塔：床が競りあがる
//;;;	#define SE_MP4301_GIM01B_3	SE_GIM_FLONT_UP2	// 雷雨の塔：床が競り終わり
//;;;	
//;;;	#define SE_MP4301_GIM02_1	SE_GIM_ELEVATOR1	//雷雨の塔：エレベーター起動のぼり
//;;;	#define SE_MP4301_GIM02_2	SE_GIM_ELEVATOR3	//雷雨の塔：エレベーター起動おわり
//;;;	
//;;;	//■Z:\BIN\SCRIPT\MP4302.SCP  [SJIS]
//;;;	#define SE_MP4302_GIM01A_1A	SE_GIM_SWITCH_ON	// 雷雨の塔：スイッチ起動
//;;;	#define SE_MP4302_GIM01A_1B	SE_GIM_MACHINE2_MOVE1	// 雷雨の塔：スイッチ起動
//;;;	#define SE_MP4302_GIM01A_2	SE_GIM_FLONT_UP1	// 雷雨の塔：床が競りあがる
//;;;	#define SE_MP4302_GIM01A_3	SE_GIM_FLONT_UP2	// 雷雨の塔：床が競り終わり
//;;;	
//;;;	#define SE_MP4302_GIM02A_1A	SE_GIM_SWITCH_ON	// 雷雨の塔：スイッチ起動
//;;;	#define SE_MP4302_GIM02A_1B	SE_GIM_MACHINE2_MOVE1	// 雷雨の塔：スイッチ起動
//;;;	#define SE_MP4302_GIM02B_2	SE_GIM_FLONT_UP1	// 雷雨の塔：床が競りあがる
//;;;	#define SE_MP4302_GIM02B_3	SE_GIM_FLONT_UP2	// 雷雨の塔：床が競り終わり
//;;;	
//;;;	#define SE_MP4302_GIM03A_1A	SE_GIM_SWITCH_ON	// 雷雨の塔：スイッチ起動
//;;;	#define SE_MP4302_GIM03A_1B	SE_GIM_MACHINE2_MOVE1	// 雷雨の塔：スイッチ起動
//;;;	#define SE_MP4302_GIM03B_1A	SE_GIM_SWITCH_ON	// 雷雨の塔：スイッチ起動
//;;;	#define SE_MP4302_GIM03B_1B	SE_GIM_MACHINE2_MOVE1	// 雷雨の塔：スイッチ起動
//;;;	#define SE_MP4302_GIM03C_2	SE_GIM_FLONT_UP1	// 雷雨の塔：床が競りあがる
//;;;	#define SE_MP4302_GIM03C_3	SE_GIM_FLONT_UP2	// 雷雨の塔：床が競り終わり
//;;;	#define SE_MP4302_GIM03D_2	SE_GIM_FLONT_UP1	// 雷雨の塔：床が競りあがる
//;;;	#define SE_MP4302_GIM03D_3	SE_GIM_FLONT_UP2	// 雷雨の塔：床が競り終わり
//;;;	#define SE_MP4302_GIM04_1A	SE_GIM_SWITCH_ON	// 雷雨の塔：スイッチ起動
//;;;	#define SE_MP4302_GIM04_1B	SE_GIM_MACHINE2_MOVE1	// 雷雨の塔：スイッチ起動
//;;;	#define SE_MP4302_GIM04_2	SE_GIM_IDOOR1		// 雷雨の塔：柵が開く
//;;;	#define SE_MP4302_GIM05_1A	SE_GIM_SWITCH_ON	// 雷雨の塔：スイッチ起動
//;;;	#define SE_MP4302_GIM05_1B	SE_GIM_MACHINE2_MOVE1	// 雷雨の塔：スイッチ起動
//;;;	#define SE_MP4302_GIM05_2	SE_GIM_FLONT_UP1	// 雷雨の塔：床が競りあがる
//;;;	#define SE_MP4302_GIM05_3	SE_GIM_FLONT_UP2	// 雷雨の塔：床が競り終わり
//;;;	
//;;;	//■Z:\BIN\SCRIPT\MP4303.SCP  [SJIS]
//;;;	#define SE_MP4303_GIM01_1A	SE_GIM_SWITCH_ON	// 雷雨の塔：スイッチ起動
//;;;	#define SE_MP4303_GIM01_1B	SE_GIM_MACHINE2_MOVE1	// 雷雨の塔：スイッチ起動
//;;;	#define SE_MP4303_GIM01_2	SE_GIM_FLONT_UP1	// 雷雨の塔：床が競りあがる
//;;;	#define SE_MP4303_GIM01_3	SE_GIM_FLONT_UP2	// 雷雨の塔：床が競り終わり
//;;;	#define SE_MP4303_GIM03A_1A	SE_GIM_SWITCH_ON	// 雷雨の塔：スイッチ起動
//;;;	#define SE_MP4303_GIM03A_1B	SE_GIM_MACHINE2_MOVE1	// 雷雨の塔：スイッチ起動
//;;;	#define SE_MP4303_GIM03A_2	SE_GIM_FLONT_UP1	// 雷雨の塔：床が競りあがる
//;;;	#define SE_MP4303_GIM03A_3	SE_GIM_FLONT_UP2	// 雷雨の塔：床が競り終わり
//;;;	#define SE_MP4303_GIM03B_1A	SE_GIM_SWITCH_ON	// 雷雨の塔：スイッチ起動
//;;;	#define SE_MP4303_GIM03B_1B	SE_GIM_MACHINE2_MOVE1	// 雷雨の塔：スイッチ起動
//;;;	#define SE_MP4303_GIM03B_2	SE_GIM_FLONT_UP1	// 雷雨の塔：床が競りあがる
//;;;	#define SE_MP4303_GIM03B_3	SE_GIM_FLONT_UP2	// 雷雨の塔：床が競り終わり
//;;;	#define SE_MP4303_GIM03C_1A	SE_GIM_SWITCH_ON	// 雷雨の塔：スイッチ起動
//;;;	#define SE_MP4303_GIM03C_1B	SE_GIM_MACHINE2_MOVE1	// 雷雨の塔：スイッチ起動
//;;;	#define SE_MP4303_GIM03C_2	SE_GIM_FLONT_UP1	// 雷雨の塔：床が競りあがる
//;;;	#define SE_MP4303_GIM03C_3	SE_GIM_FLONT_UP2	// 雷雨の塔：床が競り終わり
//;;;	
//;;;	//■Z:\BIN\SCRIPT\MP4304.SCP  [SJIS]
//;;;	#define SE_MP4304_BOSS_1	SE_GIM_MACHINE2_MOVE1	// 雷雨の塔：敵振動
//;;;	#define SE_MP4304_BOSS_2	SE_341				// 雷雨の塔：振動
//;;;	#define SE_MP4304_BOSS_3	SE_333				// 雷雨の塔：泣き声？声かえる
//;;;	#define SE_MP4304_BOSS_4	SE_261				// 雷雨の塔：武器構え
//;;;	#define SE_MP4304_GIM_TBOX	SE_GIM_TBOX_APP		// 雷雨の塔：宝箱出現（6/26追加）
//;;;	#define SE_MP4304_GIM_WOUT	SE_624				// 雷雨の塔：ホワイトアウト（6/26追加）
//;;;	
//;;;	//■Z:\BIN\SCRIPT\MP4306.SCP  [SJIS]
//;;;	#define SE_MP4306_GIM01_1A	SE_GIM_SWITCH_ON	// 雷雨の塔：スイッチ起動
//;;;	#define SE_MP4306_GIM01_1B	SE_GIM_MACHINE2_MOVE1	// 雷雨の塔：スイッチ起動
//;;;	#define SE_MP4306_GIM01_2	SE_GIM_FLONT_UP1	// 雷雨の塔：床が競りあがる
//;;;	#define SE_MP4306_GIM01_3	SE_GIM_FLONT_UP2	// 雷雨の塔：床が競り終わり
//;;;	#define SE_MP4306_GIM01_4	SE_GIM_FLONT_DOWN	// 雷雨の塔：時間制限床開始
//;;;	//＃入力方法はイベントがスタートするときに単発ではなく、続けざまになるような音に変える
//;;;	
//;;;	//☆Z:\BIN\SCRIPT\MP4307.SCP  [SJIS]
//;;;	#define SE_MP4307_GIM01B_1A	SE_GIM_SWITCH_ON	// 雷雨の塔：スイッチ起動
//;;;	#define SE_MP4307_GIM01B_1B	SE_GIM_MACHINE2_MOVE1	// 雷雨の塔：スイッチ起動
//;;;	#define SE_MP4307_GIM01B_2	SE_GIM_IDOOR1		// 雷雨の塔：柵が上がる
//;;;	#define SE_MP4307_GIM01D_1A	SE_GIM_SWITCH_ON	// 雷雨の塔：スイッチ起動
//;;;	#define SE_MP4307_GIM01D_1B	SE_GIM_MACHINE2_MOVE1	// 雷雨の塔：スイッチ起動
//;;;	#define SE_MP4307_GIM01D_2	SE_GIM_FLONT_UP1	// 雷雨の塔：鉄球あがる
//;;;	#define SE_MP4307_GIM01D_3	SE_GIM_PUZZLE2		// 雷雨の塔：鉄球あがり終わり
//;;;	#define SE_MP4307_GIM02_1A	SE_GIM_SWITCH_ON	// 雷雨の塔：スイッチ起動
//;;;	#define SE_MP4307_GIM02_1B	SE_GIM_MACHINE2_MOVE1	// 雷雨の塔：スイッチ起動
//;;;	#define SE_MP4307_GIM02_2	SE_GIM_IDOOR1		// 雷雨の塔：柵が上がる
//;;;	//とりあえず調整済み。
//;;;	
//;;;	//■Z:\BIN\SCRIPT\MP4308.SCP  [SJIS]
//;;;	#define SE_MP4308_GIM01_1	SE_GIM_ELEVATOR1	//雷雨の塔：エレベーター起動のぼり
//;;;	#define SE_MP4308_GIM02_1	SE_GIM_ELEVATOR2	//雷雨の塔：エレベーター起動くだり
//;;;	#define SE_MP4308_BOSS_1	SE_261				// 雷雨の塔：武器構え
//;;;	
//;;;	
//;;;	//■Z:\BIN\SCRIPT\MP4309.SCP  [SJIS]
//;;;	#define SE_MP4309_GIM01A_1A	SE_GIM_SWITCH_ON	//雷雨の塔：スイッチ起動
//;;;	#define SE_MP4309_GIM01A_1B	SE_GIM_MACHINE2_MOVE1	//雷雨の塔：スイッチ起動
//;;;	#define SE_MP4309_GIM01B_1	SE_GIM_ELEVATOR3	//雷雨の塔：エレベーター降りてくる
//;;;	#define SE_MP4309_GIM01B_2	SE_GIM_ELEVATOR2	//雷雨の塔：エレベーター起動くだり
//;;;	
//;;;	//■Z:\BIN\SCRIPT\MP4310.SCP  [SJIS]
//;;;	#define SE_MP4310_GIM01B_1	SE_GIM_ELEVATOR2	//雷雨の塔：エレベーター降りてくる
//;;;	
//;;;	//------------------------------------------------------------------------------
//;;;	//地下遺跡
//;;;	
//;;;	//■Z:\BIN\SCRIPT\MP5301.SCP  [SJIS]
//;;;	#define SE_MP5301_GIM01_1			SE_GIM_CHAINFALL	// 地下遺跡：カーナPA：鉄鎖を切る
//;;;	#define SE_MP5301_GIM01_2			SE_GIM_CHAINDOWN	// 地下遺跡：カーナPA：鉄鎖を切る
//;;;	
//;;;	//■Z:\BIN\SCRIPT\MP5302.SCP  [SJIS]
//;;;	#define SE_MP5302_GIM01_1			SE_GIM_WALLCRACK	// 地下遺跡：オズマPA：壁にヒビ
//;;;	#define SE_MP5302_GIM01_2			SE_GIM_WALLBLEAK	// 地下遺跡：オズマPA：壁壊れる
//;;;	
//;;;	//------------------------------------------------------------------------------
//;;;	//研究所
//;;;	//■"G:\GAME\YS4S\BIN\SCRIPT\MP6321.SCP"  [SJIS]
//;;;	//エラーがでるので後回し
//;;;	//■"G:\GAME\YS4S\BIN\SCRIPT\MP6322.SCP"  [SJIS]
//;;;	//エラーがでるので後回し
//;;;	#define SE_MP6322_GIM01_1	SE_GIM_PUZZLE1			//ショートカット端
//;;;	#define SE_MP6322_GIM01_2	SE_GIM_PUZZLE2			//ショートカット端
//;;;	
//;;;	//■"G:\GAME\YS4S\BIN\SCRIPT\MP6323.SCP"  [SJIS]
//;;;	#define SE_MP6323_GIM02_1			SE_GIM_DACT	// ダクトを開いたSE
//;;;	
//;;;	//■"G:\GAME\YS4S\BIN\SCRIPT\MP6332.SCP"  [SJIS]
//;;;	#define SE_MP6332_GIM01_1	SE_GIM_BUTTON			//ショートカット端
//;;;	#define SE_MP6332_GIM01_2	SE_GIM_PUZZLE1			//ショートカット端
//;;;	#define SE_MP6332_GIM01_3	SE_GIM_PLANT_FALL1		//ショートカット端
//;;;	
//;;;	//------------------------------------------------------------------------------
//;;;	//氷山
//;;;	//■Z:\BIN\SCRIPT\MP6341.SCP  [SJIS]
//;;;	#define SE_MP6341_GIM01_1			SE_GIM_PLANT_CUT	// カーナPA：植物を切る
//;;;	#define SE_MP6341_GIM01_2			SE_GIM_PLANT_FALL1	// カーナPA：大きな巣が落ちる
//;;;	
//;;;	//■Z:\BIN\SCRIPT\MP6342.SCP  [SJIS]
//;;;	#define SE_MP6342_GIM01_1			SE_GIM_ICE_DARK		// ■フリーダPA：闇
//;;;	#define SE_MP6342_GIM01_2			SE_GIM_ICE_ON		// ■フリーダPA：凍りつく
//;;;	#define SE_MP6342_GIM01_3			SE_GIM_ICE_WIND		// ■フリーダPA：片方の風が強くなる
//;;;	#define SE_MP6342_GIM02_1			SE_GIM_ICE_DARK		// ■フリーダPA：闇
//;;;	#define SE_MP6342_GIM02_2			SE_GIM_ICE_ON		// ■フリーダPA：凍りつく
//;;;	#define SE_MP6342_GIM02_3			SE_GIM_ICE_WIND		// ■フリーダPA：片方の風が強くなる
//;;;	
//;;;	//■Z:\BIN\SCRIPT\MP6343.SCP  [SJIS]
//;;;	#define SE_MP6343_GIM01_1			SE_GIM_PLANT_CUT	// カーナPA：植物を切る
//;;;	#define SE_MP6343_GIM01_2			SE_GIM_PLANT_FALL1	// カーナPA：大きな巣が落ちる
//;;;	
//;;;	//------------------------------------------------------------------------------
//;;;	//■Z:\BIN\SCRIPT\MP6361.SCP  [SJIS]
//;;;	#define SE_MP6361_GIM01_1			SE_GIM_MACHINE2_MOVE1	// カンリリカPA：装置作動２
//;;;	#define SE_MP6361_GIM01_2A			SE_GIM_WATERFALL1A		// カンリリカPA: 水が流れる
//;;;	#define SE_MP6361_GIM01_2B			SE_GIM_WATERFALL1B		// カンリリカPA: 水が流れる
//;;;	#define SE_MP6361_GIM01_3			SE_GIM_WATERFALL2		// カンリリカPA：水があふれる
//;;;	//なし
//;;;	
//;;;	#define SE_MP6361_GIM02_1A			SE_GIM_SWITCH_ON	// カンリリカPA：装置作動２
//;;;	#define SE_MP6361_GIM02_1B			SE_GIM_MACHINE2_MOVE1	// カンリリカPA：装置作動２
//;;;	#define SE_MP6361_GIM02_2A			SE_GIM_WATERFALL1A		// カンリリカPA: 水が流れる
//;;;	#define SE_MP6361_GIM02_2B			SE_GIM_WATERFALL1B		// カンリリカPA: 水が流れる
//;;;	#define SE_MP6361_GIM02_3			SE_GIM_WATERFALL2		// カンリリカPA：水があふれる
//;;;	#define SE_MP6361_GIM02_4A			SE_GIM_WATERFALL3		// カンリリカPA：水車
//;;;	#define SE_MP6361_GIM02_4B			SE_488					// カンリリカPA：水車SE_486
//;;;	#define SE_MP6361_GIM02_5			SE_GIM_WATERFALL4		// カンリリカPA：足場動き出すSE_GIM_WATERFALL4
//;;;	#define SE_MP6361_GIM02_6			SE_GIM_WATERFALL5		// カンリリカPA：足場動き出すSE_GIM_WATERFALL5
//;;;	
//;;;	#define SE_MP6361_GIM03_1			SE_GIM_WALLCRACK		// 	オズマPA：壁にヒビ
//;;;	#define SE_MP6361_GIM03_2			SE_GIM_WALLBLEAK		// 	オズマPA：橋壊れる
//;;;	#define SE_MP6361_GIM03_3			SE_GIM_STONEDOWN		// 	オズマPA：橋倒れる
//;;;	//なし
//;;;	
//;;;	//■Z:\BIN\SCRIPT\MP6362.SCP  [SJIS]
//;;;	#define SE_MP6362_GIM01_1A			SE_GIM_SWITCH_ON	// カンリリカPA：装置作動２
//;;;	#define SE_MP6362_GIM01_1B			SE_GIM_MACHINE2_MOVE1	// カンリリカPA：装置作動２
//;;;	#define SE_MP6362_GIM01_2A			SE_GIM_WATERFALL1A		// カンリリカPA: 石扉
//;;;	#define SE_MP6362_GIM01_2B			SE_GIM_WATERFALL1B		// カンリリカPA: 石扉
//;;;	#define SE_MP6362_GIM01_3			SE_GIM_WATERFALL2		// カンリリカPA：水があふれる
//;;;	#define SE_MP6362_GIM01_4			SE_GIM_WATERFALL3		// カンリリカPA：水があふれる
//;;;	
//;;;	#define SE_MP6362_GIM03_1			SE_GIM_WALLBLEAK		// 	オズマPA：橋壊れる
//;;;	#define SE_MP6362_GIM03_2			SE_GIM_WATERFALL6		// 	オズマPA：橋壊れる
//;;;	#define SE_MP6362_GIM03_3			SE_GIM_STONEDOWN		// 	オズマPA：橋倒れる
//;;;	
//;;;	
//;;;	//------------------------------------------------------------------------------
//;;;	
//;;;	#define SE_MP70XX_WARP_1			SE_GIM_APPEAR		// 没ラスダン：ワープ扉⇒入力済み
//;;;	
//;;;	//■Z:\BIN\SCRIPT\MP7301.SCP  [SJIS]
//;;;	#define SE_MP7301_WARP_1			SE_GIM_WARP			// ■ラスダン：ワープ
//;;;	#define SE_MP7301_GIM				SE_529				// □ルートクリアしたら光るやつ
//;;;	#define SE_MP7301_GIM_2				SE_621				// □中枢へワープ：外枠光る
//;;;	#define SE_MP7301_GIM_3				SE_619				// □中枢へワープ：階段出てくる
//;;;	#define SE_MP7301_GIM_4				SE_653				// □中枢へワープ：完成
//;;;	#define SE_MP7301_GIM_5				SE_630				// □中枢へワープ：完成
//;;;	
//;;;	
//;;;	//中枢に行く演出がまだ？
//;;;	//太陽神殿に行く演出がまだ？
//;;;	
//;;;	//■Z:\BIN\SCRIPT\MP7311.SCP  [SJIS]
//;;;	#define SE_MP7311_GIM01_0			SE_GIM_BUTTON		// ■ラスダン：スイッチ//修正する
//;;;	#define SE_MP7311_GIM01_1			SE_GIM_FLONT_MOVE1	// ■ラスダン：床移動
//;;;	#define SE_MP7311_GIM01_2			SE_GIM_FLONT_MOVE2	// ■ラスダン：床移動
//;;;	#define SE_MP7311_GIM01_3			SE_GIM_FLONT_MOVE1	// ■ラスダン：床移動
//;;;	#define SE_MP7311_GIM01_4			SE_GIM_FLONT_MOVE2	// ■ラスダン：床移動
//;;;	#define SE_MP7311_GIM02A_1			SE_GIM_FLONT_SPEAR	// ■ラスダン：槍がしゅぴん
//;;;	#define SE_MP7311_GIM02B_1			SE_GIM_BUTTON		// □ラスダン：スイッチ
//;;;	#define SE_MP7311_GIM02B_2			SE_GIM_FLONT_OFF	// □ラスダン：スイッチオフ
//;;;	#define SE_MP7311_GIM03A_1			SE_GIM_GLASS_WATER1	// □ラスダン：ビン割れる
//;;;	#define SE_MP7311_GIM03A_2			SE_GIM_GLASS_WATER2	// □ラスダン：ビンお水  
//;;;	#define SE_MP7311_GIM03B_1			SE_GIM_GLASS_WATER1	// □ラスダン：ビン割れる
//;;;	#define SE_MP7311_GIM03B_2			SE_GIM_GLASS_WATER2	// □ラスダン：ビンお水  
//;;;	#define SE_MP7311_WARP				SE_GIM_WARP			// ■ラスダン：ワープ
//;;;	#define SE_MP7311_WARP_2			SE_GIM_WARP			// ■ラスダン：最後のワープ
//;;;	#define SE_MP7311_FLOOR1			SE_529				// ■手をかざす
//;;;	
//;;;	//■Z:\BIN\SCRIPT\MP7321.SCP  [SJIS]
//;;;	//はめる音が必要かも
//;;;	#define SE_MP7321_GIM01_1A			SE_GIM_ELEVATOR1	//■ラスダン：エレベーター起動のぼり
//;;;	#define SE_MP7321_GIM01_1B			SE_GIM_ELEVATOR2	//■ラスダン：エレベーター起動くだり
//;;;	#define SE_MP7321_GIM01_2			SE_GIM_FLONT_UP1	//■ラスダン：エレベーター起動ループ
//;;;	#define SE_MP7321_GIM01_3			SE_GIM_FLONT_UP2	//■ラスダン：エレベーター起動停止
//;;;	#define SE_MP7321_GIM02_1			SE_GIM_FLONT_UP1	//■ラスダン：エレベーター起動ループ
//;;;	#define SE_MP7321_GIM02_2			SE_GIM_FLONT_UP2	//■ラスダン：エレベーター起動停止
//;;;	#define SE_MP7321_GIM03_1			SE_GIM_WETHER_RAIN1	//■ラスダン：水が増える
//;;;	#define SE_MP7321_GIM03_2			SE_GIM_WETHER_RAIN1	//■ラスダン：水かさが減る
//;;;	#define SE_MP7321_GIM05_1			SE_GIM_WETHER_WIND1	//■ラスダン：風がでる
//;;;	#define SE_MP7321_GIM04_1			SE_GIM_WETHER_SUN1	//■ラスダン：氷が解ける
//;;;	#define SE_MP7321_GIM04_2			SE_GIM_WETHER_RAIN1	// ■水溜りを蒸発
//;;;	#define SE_MP7321_WARP_1			SE_GIM_WARP			//■ラスダン：最後のワープ
//;;;	
//;;;	#define SE_MP7321_WIND_ON			SE_529			//■ラスダン：風の紋章オン
//;;;	#define SE_MP7321_RAIN_ON			SE_529			//■ラスダン：雨の紋章オン
//;;;	#define SE_MP7321_SUN_ON			SE_529			//■ラスダン：太陽の紋章オン
//;;;	#define SE_MP7321_OFF				SE_529			//■ラスダン：紋章オフ
//;;;	
//;;;	//■Z:\BIN\SCRIPT\MP7331.SCP  [SJIS]
//;;;	//FUNCTION GIM01
//;;;	#define SE_MP7331_GIM01_1			SE_GIM_LIGHTROAD1	// ラスダン：光の床(仮)
//;;;	#define SE_MP7331_GIM01_2			SE_GIM_LIGHTROAD2	// ラスダン：光の床(仮)
//;;;	#define SE_MP7331_WARP_1			SE_GIM_WARP			// ■ラスダン：最後のワープ
//;;;	
//;;;	#define SE_MP7331_GIM				SE_529				// □ルートクリアしたら光るやつ
//;;;	
//;;;	#define SE_MP7331_LASTGATE_1		SE_GIM_PUZZLE1		// □扉が開く
//;;;	#define SE_MP7331_LASTGATE_2		SE_GIM_PLANT_FALL1	// □扉がききる
//;;;	#define SE_MP7331_LASTGATE_3		SE_530				// □階段ができあがる
//;;;	//FUNCTION GIM02
//;;;	
//;;;	//FUNCTION GIM03
//;;;	
//;;;	//FUNCTION GIM04
//;;;	
//;;;	//FUNCTION GIM05
//;;;	
//;;;	//FUNCTION GIM06
//;;;	*/
//------------------------------------------------------------------------------


////////////////////////////////////////////////////////////////////////////////
// イベント関係SE
////////////////////////////////////////////////////////////////////////////////

//その他NPC
//#define SE_C404_HAMMER			SE_Y498	// 鍛冶屋のハンマー音	SE_543
//#define SE_SET_TENT				SE_Y498	// テントを設置する音	SE_749


//#define SE_C800_VO		SE_Y498	//鶏(白)
//#define SE_C801_VO		SE_Y498	//ピッカード
//#define SE_C802_VO		SE_Y498	//猫(黒)
//#define SE_C803_VO		SE_Y498	//ヒヨコ
//#define SE_C820_VO		SE_Y498	//馬
//#define SE_C821_VO		SE_Y498	//犬
//#define SE_C830_VO		SE_Y498	//鹿(茶)
//#define SE_C850_VO		SE_Y498	//牛
//#define SE_C851_VO		SE_Y498	//羊パカ

//#define SE_C840_VO		SE_Y498	//カモ
//#define SE_C845_VO		SE_Y498	//コガモ
//#define SE_C841_VO		SE_Y498	//カエル
//#define SE_C842		//アロワナ
//#define SE_C843		//ピラルク
//#define SE_C845		//コガモ

// 一般メッセージ

// common
//#define	SE_GEN_BUY					SE_Y498		//  一般メッセージ購入se 情報屋など

//#define	SE_GEN_CHICKEN_1			SE_Y498		// ニワトリ
//#define	SE_GEN_CHICKEN_2			SE_Y498		// ニワトリ 怒
//#define	SE_GEN_PIKA_1				SE_Y498	// ピッカード
//#define	SE_GEN_PIKA_2				SE_Y498		// ピッカード 怒
//#define	SE_GEN_CAT_1				SE_Y498	// ネコ
//#define	SE_GEN_CAT_2				SE_Y498		// ネコ 怒
//#define	SE_GEN_HIYOKO_1				SE_Y498	// ヒヨコ
//#define	SE_GEN_HIYOKO_2				SE_Y498		// ヒヨコ 怒
//#define	SE_GEN_HORSE_1				SE_Y498	// ウマ
//#define	SE_GEN_HORSE_2				SE_Y498		// ウマ 怒
//#define	SE_GEN_DOG_1				SE_Y498	// イヌ
//#define	SE_GEN_DOG_2				SE_Y498		// イヌ 怒
//#define	SE_GEN_DEER_1				SE_Y498	// シカ
//#define	SE_GEN_DEER_2				SE_Y498		// シカ 怒

//#define	SE_GEN_DUCK_1				SE_Y498	// カモ
//#define	SE_GEN_DUCK_2				SE_Y498		// カモ 怒
//#define	SE_GEN_FROG_1				SE_Y498	// カエル
//#define	SE_GEN_FROG_2				SE_Y498		// カエル 怒

//------------------------------------------------------------------------------
//旧仕様※まだどこかで反映されている可能性がある定義
//------------------------------------------------------------------------------
#define	SYSSE_TOGEBREAK			SE_DUMMY		//現在無音
#define	SYSSE_EGGBREAK			SE_DUMMY		//現在無音
#define SYSSE_TUBOBREAK			SE_DUMMY		//現在無音
#define SYSSE_TUBOBREAK_R		SE_DUMMY		//現在無音
#define SE_BREAK_TOGE			SE_DUMMY		// 岩トゲ壊れ	現在はどこにもない模様
#define SE_WOOD_DOOR2			SE_DUMMY		// 木の扉(少し重い扉)
#define SE_IRON_DOOR			SE_DUMMY		// 鉄の扉
#define SE_IRON_DOOR2			SE_DUMMY		// 鉄格子
#define SE_BIG_DOOR				SE_DUMMY		// 巨大な扉

#define SE_BOM_AISHA1_SUB	SE_DUMMY		// アイシャ、矢の雨降ってくる音（念のため残す）	SE_088
#define SE_GEIS_EX			SE_DUMMY	// ガッシュＥＸ
#define SE_CHARGE_START		SE_DUMMY	// 溜め開始
#define SE_ADDINFO			SE_DUMMY	// 旧クエスト開始した
//-------------------
// スクリプトが実行できないので定義復活（山下 20120606）
#define SE_PA_CARNA_CUT			SE_NONE	//SE_081	// カーナのPAで、植物を切る	SE_062
#define SE_PA_CARNA_FALL		SE_NONE	//SE_082	// カーナのPAで、大きな繭が落ちる	SE_063
//-------------------

//------------------------------------------------------------------------------
// ボイスはvo.hに移動

//━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
//迎撃戦
//━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
#define SE_WAVE_START		SE_Y400		//Prg？	▲ＷＡＶＥ開始			各ＷＡＶＥ共通
#define SE_WAVE_CLEAR		SE_Y401		//Prg？	▲ＷＡＶＥクリア		
#define SE_SKILL_NPC		SE_Y402		//
#define SE_RESULT_SCORE		SE_Y403		//Prg？	▲リザルト：スコア加算	ピピピピ....
#define SE_RESULT_RANK		SE_Y404		//Prg？	▲リザルト：ランク表示	各ランク共通

#define SE_INTERCEPT_CUTIN	SE_Y405		//EFX	■カットイン		長方形のやつ
#define SE_SKILL_DOGI		SE_Y406		//EFX	■ドギ				颯爽と現れて大地を粉砕⇒敵全体にダメージ＆ブレイク
#define SE_SKILL_SILVIA		SE_Y407		//EFX	■シルヴィア		颯爽と現れて大地を一突き⇒敵全体にダメージ＆燃焼
#define SE_SKILL_DINA		SE_Y408		//EFX	■ディナ			特製のボールで攻撃。麻痺
#define SE_SKILL_REJA		SE_Y409		//EFX	■クイナ			特製のボールで攻撃。凍結
#define SE_SKILL_KUINA		SE_Y410		//EFX	■レーヤ			特製のボールで攻撃。暗闇
//#define SE_STONE_OMEN		SE_Y411		//EFX	■ボール着弾

#define SE_STONE_NORMAL		SE_Y412		//EFX	■投石器着弾（岩）	発射タイミングで鳴っているのを着弾タイミングにする
#define SE_STONE_FIRE		SE_Y413		//EFX	■投石器着弾（炎岩）	

#define SE_STAGE_CLEAR		SE_Y414		//EFX	■ステージクリア
#define SE_WARNING			SE_Y415		//EFX	■ボスを倒せ
#define SE_FAILED			SE_Y416		//EFX	■迎撃失敗

#define SE_DAMAGE_DECOY		SE_Y862		//デコイ被弾 (元：SE_Y264)

//#define SE_DECOY_BREAK	SE_Y499		//■柵、デコイ破壊音		済
//#define SE_DORA			SE_Y499		//■スタンドラの音			済

/*
//;;;	efx_intc.ite
//;;;	エフェクト番号
//;;;	80050	サポートスキル・ディナ　特製のボールで攻撃。麻痺(多段ＨＩＴ)
//;;;	80100	サポートスキル・クイナ　特製のボールで攻撃。暗闇(多段ＨＩＴ)
//;;;	80150	サポートスキル・レーヤ　特製のボールで攻撃。凍結(多段ＨＩＴ)
//;;;	80200	サポートスキル・シルビア　燃焼付き連続ヒット全体攻撃
//;;;	80250	サポートスキル・ドギ　ブレイク付き単発ヒット全体攻撃
//;;;	81000	投石機・炎岩ＬＶ１
//;;;	81020	投石機・炎岩ＬＶ２
//;;;	81040	投石機・炎岩ＬＶ３
//;;;	81060	投石機・炎岩ＬＶ４
//;;;	81080	投石機・炎岩ＬＶ５
//;;;	81200	投石機・岩ＬＶ１
//;;;	81220	投石機・岩ＬＶ２
//;;;	81240	投石機・岩ＬＶ３
//;;;	81260	投石機・岩ＬＶ４
//;;;	81280	投石機・岩ＬＶ５
//;;;	82010	バリケード麻痺あたり（常駐パテコは無し。ＨＩＴしたときのみ発生）
//;;;	84000	「ボスを倒せ」アナウンス		東海林君指定のWARNING!画像を使用（ef_2_00）
//;;;	84010	「迎撃失敗」アナウンス		東海林君指定のFAILED...画像を使用（ef_2_01）
//;;;	84020	「ステージクリア」アナウンス	東海林君指定のSTAGE CLEAR画像を使用（ef_2_02）
*/





//━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
// PS4版追加システム音
//━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
#define SE_CHANGE_AIMODE			SE_Y1553		// 仲間のＡＩモードを切り替えた	// ◆（仮）
#define	SE_INTERCEPT_ANNOUNCE		SE_Y1554		// 制圧戦・「ボス逃げた」「ボス出現」アナウンス用通知音
#define SE_INTERCEPT_SETBONFIRE		SE_Y1551		// かがり火設置開始
#define SE_INTERCEPT_CREATEBONFIRE	SE_Y1552		// かがり火設置完了
#define SE_DUMP						SE_Y1555	//	アイテム 廃棄// ◆（仮）
#define SE_CAMPMENU_DIARY			SE_Y1556	//	手帳メニューを直接開いた// ◆（仮）
#define SE_VIRTUE					SE_Y1010	//徳ポイントアップ
#define SE_CHANGE_MAPFILTER			SE_MENU_CURSOR	// 地図、フィルター切り替え	// ◆（仮）
#define SE_BOMB_A					SE_Y1011	//制圧戦大砲飛来
#define SE_BOMB_B					SE_Y1012	//制圧戦大砲着弾

//━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
//メインイベント
//━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
//mtd埋め込み汎用動作SE
#define	SE_YARUKI		SE_Y200		//＊こぶしパン

//武器構え
#define	SE_SETARM_1		SE_Y212		//＊アドル
#define	SE_SETARM_2		SE_Y215		//＊ヒュンメル
#define	SE_SETARM_3		SE_Y216		//＊リコッタ
#define	SE_SETARM_4		SE_Y214		//＊サハド
#define	SE_SETARM_5		SE_Y217		//＊ダーナ
#define	SE_SETARM_6		SE_Y213		//＊ラクシャ

#define	SE_KAKAGE		SE_Y228		//武器かかげ


#define	SE_WHITEOUT		SE_Y270		//過去編始まり／終わり

#define	SE_EV_TEST		SE_Y499			//仮音
#define	SE_EV_TEST2		SE_Y498			//無音

#define	SE_SUZUME		SE_Y261			//	朝が来た　チュンチュン

#define	SE_PARO_FRY		SE_Y248			//	羽ばたきループ（単発をmtdで繰り返し再生）
//#define	SE_PARO_FRY_2	SE_EV_TEST2		//	羽ばたき終わり
//#define	SE_PARO_FRY_3	SE_EV_TEST2		//	飛び立つ

//───────────────────────────────
//■プロローグ
//───────────────────────────────
//[M00S000][洋上のロンバルディア号			][mp0011	/NS	]
#define SE_M00S000_01	SE_Y177			//＊船の音
#define SE_M00S000_02	SE_Y218			//

//[M00S001][アドル＆ドギ登場				][mp0011	/NS	]
#define SE_M00S001_01	SE_Y205			//＊海鳥の羽音
//#define SE_M00S001_02	//

//[M00S010][バルバロス登場					][mp0016	/MC	]
//[M00S011][バルバロス登場２				][mp0016	/NS	]
//[M00S020][歓迎会＆巡回を開始する			][mp0018	/NS	]
#define SE_M00S020_01	SE_Y201			//＊拍手

//[M00S030][船長室へ向かう（２回目）		][mp0012	/EB	]
//[M00S040][バルバロスと話す				][mp0016	/MC	]
#define SE_M00S040_01	SE_Y203			//＊船が大きく揺れる
#define SE_M00S040_02	SE_Y204			//＊船が大きく揺れる

//[M00S041][バルバロスと話す２				][mp0016	/NS	]
//[M00S050][巨大な触手と戦闘する			][mp0011b	/NS	]
#define SE_M00S050_01	SE_Y202			//＊雷
#define SE_M00S050_02	SE_Y206			//＊触手登場
#define SE_M00S050_03	SE_Y218			//＊ハッタリ
#define SE_M00S050_04	SE_Y211			//＊触手振り
#define SE_M00S050_05	SE_Y204			//＊叩きつけ
#define SE_M00S050_06	SE_Y226			//＊剣を投げる（くるくる）
#define SE_M00S050_07	SE_SETARM_1		//＊剣を抜き放つ
#define SE_M00S050_08	SE_Y227			//＊剣を投げる
#define SE_M00S050_09	SE_Y228			//＊武器掴む

//[M00S060][ロンバルディアが沈没する		][mp0011b	/NS	]
#define SE_M00S060_01	SE_Y206			//＊触手登場
#define SE_M00S060_02	SE_Y204			//＊衝撃音
#define SE_M00S060_03	SE_Y203			//＊船がきしむ
#define SE_M00S060_04	SE_Y177			//＊船が傾く
#define SE_M00S060_05	SE_Y210			//＊樽動き出す
#define SE_M00S060_06	SE_Y218			//＊スローモーション
#define SE_M00S060_07	SE_Y209			//＊樽破壊
#define SE_M00S060_08	SE_Y255			//＊落下
#define SE_M00S060_09	SE_Y206			//＊着水
#define SE_M00S060_10	SE_Y211			//＊触手振り


//───────────────────────────────
//■第一部
//───────────────────────────────
//[M01S000][セイレン島に漂着する			][mp1110	/NS	]
//[M01S010][錆びた剣を入手する				][mp1110	/LP	]
#define SE_M01S010_01	SE_Y222				//＊わんわん
#define SE_M01S010_02	SE_Y223				//＊わん

//[M01S011][のどの渇きに気づく				][mp1110	/NS	]
//[M01S020][小川を見つける					][mp1102	/NS	]
#define SE_M01S020_01	SE_Y208				//＊水のみSE

//[M01S030][ラクシャに遭遇する				][mp1101	/MC	]
#define SE_M01S030_01	SE_Y228				//＊武器掴む
#define SE_M01S030_02	SE_C002_ATK3_1		//＊突き
#define SE_M01S030_03	SE_Y229				//＊弾く
#define SE_M01S030_04	SE_Y227				//＊弾く
#define SE_M01S030_05	SE_Y226				//＊クルクル
#define SE_M01S030_06	SE_Y230				//＊刺さる	SE_022
#define SE_M01S030_07	SE_Y128				//＊刺さる	SE_597
#define SE_M01S030_08	SE_Y208				//＊はらり着水
#define SE_M01S030_09	SE_Y207				//＊ビンタ（要リバーブ）

//[M01S031][ラクシャに遭遇する2				][mp1101	/NS	]
#define SE_M01S031_01	SE_Y220				//＊コウモリ鳴き声
#define SE_M01S031_02	SE_C002_ATK1_1		//＊レイピア振り

//[M01S032][雑魚撃破後のイベント			][mp1101	/NS	]
//[M01S040][拠点初回						][mp1201	/MC	]
//[M01S050][高台のラクシャ					][mp1201	/EB	]
//[M01S060][漂流物を調べる					][mp1203	/LP	]
//[M01S070][水晶石を調べる					][mp1201	/LP	]
//[M01S080][バルバロスの姿を見かける		][mp1201	/LP	]
//[M01S090][洞窟へ侵入する2					][mp7301	/MC	]
//[M01S110][人の痕跡を発見する				][mp7302	/LP	]
//[M01S120][武器を入手する					][mp7302	/LP	]
//[M01S130][防具を入手する					][mp7302	/LP	]
//[M01S135][ポーションを入手する			][mp7302	/LP	]
//[M01S140][ラクシャにアドバイスされる		][mp7303	/MC	]
//[M01S141][海賊の遺体を発見する			][mp7303	/EB	]
//[M01S150][中ザコが登場する				][mp7304	/MC	]
#define SE_M01S150_01	SE_Y219				//＊コウモリ鳴き声
#define SE_M01S150_02	SE_Y238				//＊動き出し
#define SE_M01S150_03	SE_Y204				//＊着地
#define SE_M01S150_04	SE_Y221				//＊コウモリ咆哮

//[M01S151][中ザコを倒した					][mp7304	/NS	]
//[M01S160][バルバロスと再会する			][mp7305	/MC	]
//[M01S161][バルバロスと再会する2			][mp7305	/NS	]
//[M01S162][バルバロスと再会する3			][mp1201	/NS	]
//[M01S163][バルバロスと再会する4			][mp1201	/NS	]
//[M01S170][正式に探索を開始する			][mp1101	/MC	]
//[M01S200][浜辺を眺める					][mp1111	/EB	]
//[M01S180][古代種と遭遇					][mp1103	/MC	]
#define SE_M01S180_01	SE_Y232				//＊古代種足音
#define SE_M01S180_02	SE_Y225				//＊サハドこける
#define SE_M01S180_03	SE_Y218				//＊ハッタリ系
#define SE_M01S180_04	SE_Y204				//＊着地	SE_341
#define SE_M01S180_05	SE_Y234				//＊古代種咆哮

//[M01S181][サハド抱きつく					][mp1103	/NS	]
#define SE_M01S181_01	SE_Y224				//＊サハド抱きつき
#define SE_M01S181_02	SE_Y207				//＊ビンタ（要リバーブ）
#define SE_M01S181_03	SE_Y224				//＊抱き寄せる

//[M01S182][古代種が起き上がる				][mp1103	/NS	]
#define SE_M01S182_01	SE_Y240				//＊頭を掻き毟る？
#define SE_M01S182_02	SE_Y235				//＊サハド古代種を叩く
#define SE_M01S182_03	SE_Y237				//＊古代種目開く
#define SE_M01S182_04	SE_Y233				//＊古代種唸り
#define SE_M01S182_05	SE_Y231				//＊お腹がグゥ
#define SE_M01S182_06	SE_Y236				//＊起き上がり
#define SE_M01S182_07	SE_Y203				//＊着地SE
#define SE_M01S182_08	SE_Y234				//＊古代種咆哮
//古代種足音はmtd

//[M01S190][ドギと再会する					][mp1201	/MC	]
//[M01S191][ドギと再会する２				][mp1201	/MC	]
//[M01S192][夜の話し合い					][mp1201t2 	/NS	]
//───────────────────────────────
//■第二部
//───────────────────────────────
//[ID		][イベントタイトル				][	MAP	/発生	]
//[M02S000][アドルの夢Ⅰ					][mp1202	/NS	]
#define SE_M02S000_01	SE_Y241				//＊ヤクの鳴き声複数（ループ）
#define SE_M02S000_03	SE_Y242				//＊ヤクの鳴き声
#define SE_M02S000_04	SE_Y244				//＊予知の予兆キーン

//[M02S010][ラクシャから探索服をもらう		][mp1202	/NS	]
#define SE_M02S010_01	SE_Y245				//＊起き上がるアドル
#define SE_M02S010_02	SE_Y246				//＊着替えるアドル

//[M02S020][ドギとサハドと話す				][mp1201t3	/TK	]
#define SE_M02S020_01	SE_Y231				//＊お腹がグゥ

//[M02S021][朝食用の魚を釣りに行く			][mp1203t3	/MC	]
//[M02S022][朝食用の魚を釣った				][mp1203t3	/EC	]
//釣りSEが入ったら調整
#define SE_M02S022_01	SE_Y254			//
//#define SE_M02S022_02	SE_EV_TEST2		//
#define SE_M02S022_03	SE_Y334			//

//[M02S023][武器の強化を試す				][mp1201t3	/LP	]
//[M02S024][アイテム交換を試す				][mp1201t3	/LP	]
//[M02S025][調薬を試す						][mp1201t3	/LP	]
//[M02S030][ドギが料理を説明する			][mp1201t3	/TK	]
//[M02S040][リトル・パロを紹介される		][mp1201	/EB	]
//#define SE_M02S040_01	SE_EV_TEST2			//	羽ばたきループ
//#define SE_M02S040_02	SE_EV_TEST2			//	羽ばたき終わり

//[M02S050][クエストチュートリアル			][mp1201	/NS	]
//[M02S060][漂流者の探索を始める			][mp1101	/MC	]
//[M02S070][倒木を撤去する					][mp1110	/LP	]
//#define SE_M02S070_01	SE_EV_TEST2				//	羽ばたきループ
//#define SE_M02S070_02	SE_EV_TEST2				//	羽ばたき終わり
//#define SE_M02S070_03	SE_EV_TEST2				//	飛び立つ
#define SE_M02S070_04	SE_Y250				//＊障害物撤去

//[M02S075][初めてロケーションポイントを発見][mp1132	/EB	]
//[M02S080][アリスンを発見する				][mp1133	/EB	]
//[M02S090][アリスンと漂流村へ戻る			][mp1201	/NS	]
//[M02S095][アリスンが仕立屋を始める		][mp1202	/TK	]
//[M02S100][はじめて野営をする				][mp1105t1	/EB	]
#define SE_M02S100_01	SE_Y245				//＊サハド座り込む

//[M02S101][はじめて野営をする２			][mp1105t2	/NS	]
#define SE_M02S101_01	SE_Y251				//＊テント設営
#define SE_M02S101_02	SE_Y252				//＊屁

//[M02S110][アドルの夢Ⅱ					][mp1105t2	/NS	]
#define SE_M02S110_01	SE_GIM_DOOR_ROCK			//	軋んで閉まる扉（大樹の寺院の扉SEを流用？）
#define SE_M02S110_02	SE_Y244						//＊予知の予兆キーン
#define SE_M02S110_03	SE_GIM_DOOR_ROCK_STOP		//
#define SE_M02S110_04	SE_Y391						//

//[M02S120][野営地を出発する				][mp1105t3	/NS	]
//[M02S130][始めて珊瑚の森に入る			][mp1301	/MC	]
//[M02S200][カーランとキルゴールに出会う	][mp1305	/EB	]
//#define SE_M02S200_01	SE_EV_TEST2			//	羽ばたきループ
//#define SE_M02S200_02	SE_EV_TEST2			//	飛び立つ
//[M02S710][珊瑚の森中ボス登場演出			][mp1306	/NS	]
#define SE_M02S710_01	SE_Y232				//＊足踏み
#define SE_M02S710_02	SE_Y256				//＊飛び込み
#define SE_M02S710_03	SE_Y300				//＊咆哮
#define SE_M02S710_04	SE_Y204				//＊飛び込み
#define SE_M02S710_05	SE_Y254				//＊水ジャボ
#define SE_M02S710_06	SE_FOOTSE_PUDDLE_2	//＊

//[M02S711][珊瑚の森中ボス撃破				][mp1306	/NS	]
//[M02S190][グリップグローブを入手する		][mp1303	/MC	]
//[M02S140][パロの緊急連絡（迎撃戦）		][mp1304	/EB	]
//#define SE_M02S140_01	SE_EV_TEST2			//	羽ばたきループ
//#define SE_M02S140_02	SE_EV_TEST2			//	羽ばたき終わり

//[M02S150][獣の包囲を知らされる			][mp1201	/NS	]
//[M02S151][迎撃戦を行うことになる			][mp1201	/NS	]
//[M02S160][迎撃戦を開始する				][mp1213	/EB	]
//[M02S170][迎撃戦について話し合う			][mp1201	/NS	]
//[M02S210][珊瑚の森ボスと遭遇				][mp1308	/EB	]
#define SE_M02S210_01	SE_Y302				//＊消える／現れる（小）
#define SE_M02S210_02	SE_Y301				//＊息遣い
#define SE_M02S210_03	SE_Y303				//＊消える／現れる（大）
#define SE_M02S210_04	SE_Y304				//＊咆哮
#define SE_M02S210_05	SE_Y232				//＊突進
#define SE_M02S210_06	SE_Y218				//＊ハッタリ長
#define SE_M02S210_07	SE_Y265				//＊ハッタリ短

//[M02S211][珊瑚の森ボス勝利後				][mp1308	/NS	]
//[M02S220][カトリーンに出会う				][mp1135	/NS	]
//[M02S221][カトリーンに出会う２			][mp1135	/NS	]
//[M02S230][武器の強化が可能になる			][mp1201	/NS	]
//[M02S231][武器の強化が可能になる２		][mp1201	/EC	]
//[M02S250][霧の中で古代種を目撃する		][mp2102	/EB	]
//[M02S251][霧の中で古代種を目撃する２		][mp1120	/MC	]
#define SE_M02S251_01	SE_Y234				//＊古代種咆哮

//[M02S260][ヒュンメルと出会う				][mp1120	/NS	]
//[M02S261][ヒュンメルと出会う２			][mp1120	/EB	]
//[M02S270][mp1121で野営する				][mp1121t1	/MC	]
#define SE_M02S270_01	SE_Y251				//＊テント設営

//[M02S271][mp1121で野営する２				][mp1121t2	/NS	]
//[M02S280][アドルの夢Ⅲ					][mp1121t2	/NS	]
#define SE_M02S280_01	SE_Y244				//＊予知の予兆キーン

//[M02S290][野営地を出発する				][mp1121t3	/NS	]
//[M02S300][見張り台を発見する				][mp3103	/EB	]
//[M02S301][見張り台を調べる				][mp3103	/LP	]
//縄ばしごを上るSE（拠点の見張り台も）

//[M02S310][大渓谷を発見する				][mp3104	/EB	]
//[M02S320][ヒュンメルが合流する			][mp1108	/EB	]
#define SE_M02S320_01	SE_Y392				//＊銃発射
#define SE_M02S320_02	SE_Y219				//＊オオカミ断末魔（ザコSEを流用？）
#define SE_M02S320_03	SE_Y235				//＊どさっと倒れる
#define SE_M02S320_04	SE_SETARM_2			//＊銃かつぐ
#define SE_M02S320_05	SE_FOOTSE_BUSH_1	//＊
#define SE_M02S320_06	SE_Y371				//＊カバ

//[M02S321][ヒュンメルが合流する２			][mp1108	/NS	]
//[M02S330][侵蝕谷前の野営					][mp4102t1	/MC	]
//[M02S331][侵蝕谷前の野営２				][mp4102t2	/NS	]
#define SE_M02S331_01	SE_Y251				//＊テント設営

//[M02S340][アドルの夢Ⅳ					][mp4102t2	/NS	]
//[M02S350][侵蝕谷前の野営地出発			][mp4102t3	/NS	]
//[M02S720][浸食谷中ボス登場演出			][mp4306	/EB	]
#define SE_M02S720_01	SE_Y268				//＊地鳴り
#define SE_M02S720_02	SE_Y203				//＊出現
#define SE_M02S720_03	SE_Y211				//＊威嚇
#define SE_M02S720_04	SE_Y265				//＊ハッタリ短

//[M02S721][浸食谷中ボスを撃破				][mp4306	/NS	]
//[M02S730][浸食谷クモボス登場演出			][mp4309	/EB	]
#define SE_M02S730_01	SE_Y204				//＊着地
#define SE_M02S730_03	SE_Y255				//＊落下
#define SE_M02S730_04	SE_Y236				//＊クモボス足音
#define SE_M02S730_05	SE_Y305				//＊威嚇
#define SE_M02S730_02	SE_Y306				//＊咆哮
//エフェクト表示エラーが出てるので、それ関連で音が必要になるかも？

//[M02S731][浸食谷クモボスを撃破			][mp4309	/NS	]
//[M02S700][ディナを発見する				][mp1119	/MC	]
//[M02S701][ディナが合流する				][mp1119	/EB	]
//[M02S360][密林前の野営					][mp2103t1	/MC	]
//[M02S361][密林前の野営２					][mp2103t2 	/NS	]
#define SE_M02S361_01	SE_Y251				//＊テント設営
#define SE_M02S361_02	SE_Y240				//＊頭を掻き毟る？

//[M02S370][アドルの夢Ⅴ					][mp2103t2	/NS	]
//[M02S380][mp2103野営地出発（順不同）		][mp2103t3	/NS	]
//[M02S390][エアランと出会う				][mp2301	/NS	]
#define SE_M02S390_01	SE_Y218				//＊ハッタリ

//[M02S740][密林中ボス登場演出				][mp2304	/NS	]
#define SE_M02S740_01	SE_Y307				//＊メキメキ
#define SE_M02S740_02	SE_Y308				//＊吐息
//色々謎なのでボスSEが入ったら再調整

//[M02S741][密林中ボスを撃破				][mp2304	/NS	]
//[M02S400][逃げていく男を目撃する			][mp2302	/EB	]
//[M02S410][再び逃げる男＆ボス登場			][mp2308	/EB	]
#define SE_M02S410_01	SE_Y309				//＊あわブクブクループ
#define SE_M02S410_02	SE_Y218				//＊ハッタリ
#define SE_M02S410_03	SE_Y206				//＊水中からザバァ
#define SE_M02S410_04	SE_Y206				//＊静かに浮上／潜行
#define SE_M02S410_05	SE_Y310				//＊羽震わせ（ビリビリ）
#define SE_M02S410_06	SE_Y256				//＊着水
#define SE_M02S410_07	SE_Y204				//
#define SE_M02S410_08	SE_Y254				//

//[M02S412][密林ボスを倒した				][mp2308	/NS	]
//[M02S420][密林を抜ける					][mp1118	/MC	]
//[M02S430][リヒトを見つける				][mp1118	/EB	]
//#define SE_M02S430_01	SE_EV_TEST2			//	パロ停止

//[M02S440][ヒュンメルがはぐれる			][mp1101	/NS	]
//[M02S450][バルバロスの様態を聞く			][mp1201	/NS	]
//[M02S451][NEMOの予告文を見る				][mp1202	/NS	]
#define SE_M02S451_01	SE_Y245				//＊起き上がる

//[M02S452][カーラン卿が襲われた			][mp1204	/EB	]
//[M02S460][漂流者たちの話し合い			][mp1201	/NS	]
#define SE_M02S460_01	SE_Y234				//＊古代種咆哮

//[M02S470][異形の獣を迎え撃つ				][mp1215	/EB	]
#define SE_M02S470_01	SE_Y234					//＊古代種咆哮
#define SE_M02S470_02	SE_Y232					//＊足音

//[M02S471][異形の獣を退けた				][mp1215	/NS	]
#define SE_M02S471_01	SE_Y234					//＊古代種咆哮
#define SE_M02S471_02	SE_Y232					//＊ジャンプ
#define SE_M02S471_03	SE_Y204					//＊着地
#define SE_M02S471_04	SE_Y269					//＊発砲（余裕があれば遠くで鳴ってる感じの音＆兆弾音に）
#define SE_M02S471_05	SE_Y257					//＊ドギパンチ
#define SE_M02S471_06	SE_Y265					//＊

//[M02S481][古代種をラクシャが語る２		][mp1201t1	/NS	]
//[M02S490][ラクシャと二人きりで話す		][mp1201t2	/NS	]
#define SE_M02S490_01	SE_Y258				//＊はしご

//[M02S500][カーラン卿が姿を消す			][mp1202	/NS	]
#define SE_M02S500_01	SE_Y245				//＊起き上がる

//[M02S510][カーランを探すことになる		][mp1201t3	/NS	]
//[M02S520][船着き場の異変に気づく			][mp1203t3	/LP	]
//[M02S530][カーランを発見する				][mp1201	/NS	]
//[M02S540][カーラン卿の救出に向かう		][mp1101	/MC	]
//[M02S550][海中から現れたザコを倒す		][mp1134	/NS	]
#define SE_M02S550_01	SE_Y259			//＊船を漕ぐ（mtd埋め込み）
#define SE_M02S550_02	SE_Y206			//＊触手登場
#define SE_M02S550_03	SE_Y206			//＊ザコ水中からザバァ
//#define SE_M02S550_04	SE_EV_TEST2		//	ザコ着地
#define SE_M02S550_05	SE_Y260			//＊ザコ鳴き声

//[M02S560][カーラン卿が死亡する			][mp1134	/NS	]
//#define SE_M02S560_01	SE_EV_TEST2		//	オールで応戦
#define SE_M02S560_02	SE_Y206			//＊触手登場
#define SE_M02S560_03	SE_Y211			//＊触手ふりふり
#define SE_M02S560_04	SE_Y206			//＊ビターン
#define SE_M02S560_05	SE_Y218			//＊ハッタリ
#define SE_M02S560_06	SE_Y204			//＊低音
#define SE_M02S560_07	SE_Y262			//＊波おおきく揺れる
#define SE_M02S560_08	SE_Y262			//＊本体登場
#define SE_M02S560_09	SE_Y256			//＊最後の一撃
#define SE_M02S560_10	SE_Y209			//＊船砕ける

//[M02S570][NEMOと対決することになる		][mp1201t2	/NS	]
//[M02S580][聞き込み調査を開始する			][mp1201t3	/NS	]
//[M02S590][サハドが人影を発見する			][mp1201	/EB	]
//[M02S600][鋼線を発見する					][mp1101	/MC	]
#define SE_M02S600_01	SE_Y263			//＊鋼線光る
#define SE_M02S600_02	SE_Y264			//＊鋼線

//[M02S610][鋼線を調べる					][mp1101	/LP	]
#define SE_M02S610_01	SE_Y263			//＊鋼線光る

//[M02S620][名無しの正体が判明する			][mp1201	/NS	]
#define SE_M02S620_01	SE_Y246			//＊ガサゴソ　
#define SE_M02S620_02	SE_Y263			//＊鋼線光る
//鋼線光る３連発はどうなの？

//[M02S630][キルゴールが逃げた				][mp1201	/EB	]
#define SE_M02S630_01	SE_Y200					//＊拍手
#define SE_M02S630_02	SE_Y265					//＊ハッタリショート
#define SE_M02S620_03	SE_Y774				//	キルゴール攻撃エフェクト（戦闘SEから流用？）
#define SE_M02S620_08	SE_Y762				//	キルゴール攻撃エフェクト（戦闘SEから流用？）
#define SE_M02S620_04	SE_JUMP_D				//	ダッシュ
#define SE_M02S620_05	SE_Y235					//＊ジャンプ踏み切り
#define SE_M02S620_06	SE_Y265					//＊スロー
#define SE_M02S620_07	SE_Y265					//	キルゴール攻撃動作
#define SE_M02S620_09	SE_Y264			//＊鋼線

//[M02S631][キルゴールが逃げた２			][mp1201	/NS	]
#define SE_M02S631_01	SE_Y243				//＊指笛

//[M02S640][パロが案内を開始する			][mp1101	/MC	]
//#define SE_M02S640_01	SE_PARO_FRY			//	パロ飛び去る

//[M02S650][バルバロスが致命傷を負う		][mp1111	/EB	]
//#define SE_M02S650_01	SE_EV_TEST2			//	パロ飛来
//#define SE_M02S650_02	SE_EV_TEST2			//	肩に止まる
#define SE_M02S650_03	SE_DEAD_ZAKO		//＊ザコ撃破SE（戦闘SE）
#define SE_M02S650_04	SE_Y263				//
#define SE_M02S650_05	SE_Y264				//＊鋼線
//#define SE_M02S650_06	SE_PARO_FRY_3		//	飛び立つ
#define SE_M02S650_07	SE_Y271				//＊切る系の音
#define SE_M02S650_08	SE_Y249				//＊バックステップ
#define SE_M02S650_09	SE_MONVO_DOG				//＊わんわん
#define SE_M02S650_10	SE_Y265				//＊スロー
//サハドのアクションはmtd自動再生にゆだねる

//[M02S660][キルゴールと対決する			][mp1103	/MC	]
#define SE_M02S660_01	SE_Y265				//＊ハッタリショート
#define SE_M02S660_02	SE_Y774				//＊キルゴール攻撃（戦闘SEを流用？）
#define SE_M02S660_03	SE_Y762				//＊
#define SE_M02S660_04	SE_Y560				//＊キルゴール攻撃（戦闘SEを流用？）
#define SE_M02S660_05	SE_Y486				//＊

//[M02S670][キルゴールが死亡				][mp1103	/NS	]
#define SE_M02S670_01	SE_Y235				//＊バックステップ着地
#define SE_M02S670_02	SE_Y264				//＊鋼線
#define SE_M02S670_03	SE_Y204				//＊着地
#define SE_M02S670_04	SE_Y265				//＊ふりかぶり
#define SE_M02S670_05	SE_Y225				//＊くるくる
#define SE_M02S670_06	SE_Y253				//＊キルゴール倒れ
#define SE_M02S670_07	SE_Y232				//＊足音
#define SE_M02S670_08	SE_Y236				//＊キルゴールを咥え上げる
#define SE_M02S670_09	SE_Y232				//＊弾き飛ばす
#define SE_M02S670_10	SE_Y249				//＊バックステップ

//[M02S680][バルバロスが命を落とす			][mp1111	/EB	]
#define SE_M02S680_01	SE_Y224				//＊サハド座り込む
#define SE_M02S680_02	SE_ENV_RAIN_1		//＊雨
#define SE_M02S680_03	SE_Y386				//＊バルバロス死亡時用環境音
#define SE_M02S680_04	SE_Y387				//＊バルバロス死亡時用環境音
#define SE_M02S680_05	SE_Y388				//＊バルバロス死亡時用環境音

//[M02S690][バルバロスを葬る				][mp1201	/NS	]
//───────────────────────────────
//■第三部
//───────────────────────────────
//[M03S000][アドルの夢Ⅵ					][mp		/NS ]
//[M03S010][ダーナ① 植樹祭の説明を受ける	][mp6410m	/NS ]
//[M03S011][ダーナ① 大峡谷へ向かう			][mp6410m	/TK ]
//[M03S020][ダーナ① 植樹祭開始を宣言する	][mp3109m	/NS ]
#define SE_M03S020_01	SE_Y423				//ふんわり感嘆ガヤ
#define SE_M03S020_02	SE_Y424

//[M03S030][ダーナ① 植樹の儀				][mp3111m	/MC ]
//[M03S031][ダーナ① 植樹の儀２				][mp3111m	/NS ]
#define SE_M03S031_01	SE_Y270				//＊ホワイトアウト
#define SE_M03S031_02	SE_Y286
//ヒモロギを植える音が必要？
//挿入ムービーあり

//[M03S040][夢に驚くアドル					][mp1202	/NS ]
#define SE_M03S040_01	SE_Y245				//＊起き上がる

//[M03S050][クイナとぶつかるアドル			][mp1201t1	/EB ]
#define SE_M03S050_01	SE_Y249				//＊クイナをひらりとかわす

//[M03S060][墓前でラクシャと話す			][mp1204t1	/EB ]
//[M03S070][ジャンダルムへ向かうことになる	][mp1201	/NS ]
//ポートレート表示時に環境音を消す？

//[M03S071][ジャンダルムへ出発する			][mp1101	/EB ]
//[M03S080][大峡谷に到着する				][mp3104	/EB ]
//[M03S090][大木の橋を渡り終える			][mp3109	/EB ]
#define SE_M03S090_01	SE_Y312				//＊翼竜型古代種の鳴き声
#define SE_M03S090_02	SE_Y265				//＊影が横切る

//[M03S100][ジャンダルム麓に野営地を築く	][mp3105	/MC ]
#define SE_M03S100_01	SE_Y251				//＊テント設営

//[M03S101][夜の野営地						][mp3105t1	/NS ]
//[M03S102][夜の野営地2						][mp3105t2	/NS ]
//[M03S110][ダーナ② サライとの別れ			][mp6402m	/NS ]
#define SE_M03S110_01	SE_Y290				//＊ノック
//#define SE_M03S110_02	SE_EV_TEST2			//	扉開く

//[M03S111][ダーナ② サライとの別れ２		][mp6402m	/NS ]
#define SE_M03S111_01	SE_KAKAGE			//	装備する？
#define SE_M03S111_02	SE_QUIST

//[M03S120][ジャンダルム麓の野営地を出発	][mp3105t3	/NS ]
//[M03S130][タナトスの小屋に到着する		][mp4335	/EB ]
//[M03S140][小屋の中を調べる				][mp4202	/MC ]
//[M03S141][机の上の手帳を調べる			][mp4202	/LP ]
//[M03S142][飾られた花を調べる				][mp4202	/LP ]
//[M03S143][本棚を調べる					][mp4202	/LP ]
//[M03S144][小屋の中央で会話				][mp4202	/LP ]
//[M03S150][ジャンダルムで大型古代種に遭遇	][mp4337	/MC ]
#define SE_M03S150_01	SE_Y234				//＊古代種咆哮
#define SE_M03S150_02	SE_Y232				//＊古代種足音
#define SE_M03S150_03	SE_Y232				//＊ジャンプ
#define SE_M03S150_04	SE_Y204				//＊着地

//[M03S151][リコッタが助太刀に入る			][mp4337	/NS ]
#define SE_M03S151_01	SE_Y236				//＊起き上がり
#define SE_M03S151_02	SE_Y232				//＊古代種足音
#define SE_M03S151_03	SE_Y204				//＊着地
#define SE_M03S151_04	SE_Y234				//＊古代種咆哮
#define SE_M03S151_05	SE_Y249				//＊リコッタジャンプ
#define SE_M03S151_06	SE_Y265				//＊スロー
#define SE_M03S151_07	SE_Y691				//＊クナイ投げ
#define SE_M03S151_08	SE_Y271				//＊クナイ刺さる
#define SE_M03S151_10	SE_Y233				//＊古代種うなり

//[M03S160][リコッタの話を聞く				][mp4202	/NS ]
#define SE_M03S160_01	SE_Y272				//＊ティーカップを置く

//[M03S170][リコッタが初めて漂流村へ来る	][mp1201	/MC ]
//[M03S180][カトリーンに相談する			][mp1201	/NS ]
#define SE_M03S180_01	SE_Y229				//＊はじく（余裕があれば凄みのある音にする）

//[M03S190][吊り橋を修理する				][mp1107	/EB ]
//[M03S200][古代洞窟入口に到着する			][mp7401	/MC ]
//[M03S210][古代洞窟の最奥に到着する		][mp7401	/EB ]
//[M03S220][化石を調べる					][mp7401	/LP ]
//[M03S220][古代洞窟の最奥に到着する２		][mp7401	/NS ]
//[M03S230][ヒイロカネの武器が完成する		][mp1201	/TK ]
#define SE_M03S230_01		SE_Y419
//[M03S231][警鐘が鳴り響く					][mp1201	/NS ]
#define SE_M03S231_01		SE_Y273			//＊警鐘

//[M03S250][初めて古代種を打倒する			][mp1215	/NS ]
#define SE_M03S250_01	SE_Y234				//＊咆哮
#define SE_M03S250_02	SE_Y233				//＊弱弱しい咆哮
#define SE_M03S250_03	SE_Y204				//＊倒れる(mtd)
#define SE_M03S250_04	SE_Y203				//＊倒れる(mtd)

//[M03S260][再びジャンダルムへ向けて出発	][mp1201	/NS ]
//[M03S270][翼竜型古代種登場				][mp4341	/MC ]
#define SE_M03S270_01	SE_Y312				//＊翼竜咆哮
#define SE_M03S270_02	SE_Y311				//＊翼竜羽ばたき
#define SE_M03S270_03	SE_Y255				//＊翼竜滑空
#define SE_M03S270_04	SE_Y218				//＊スロー（長）
#define SE_M03S270_05	SE_Y265				//＊宙返り
#define SE_M03S270_06	SE_Y204				//＊着地
#define SE_M03S270_08	SE_Y313				//＊威嚇

//[M03S280][翼竜型古代種ボス戦終了後		][mp4341	/NS ]
#define SE_M03S280_01	SE_Y265				//＊スロー
#define SE_M03S280_02	SE_Y312				//＊翼竜咆哮
#define SE_M03S280_03	SE_Y255				//＊落下
#define SE_M03S280_04	SE_Y203				//＊しがみつき
#define SE_M03S280_05	SE_Y204				//＊落ちた

//[M03S290][ジャンダルムの頂上に到着する	][mp4107	/MC ]
//───────────────────────────────
//■第四部
//───────────────────────────────
//[ID		][イベントタイトル				][	MAP	/発生	]
//[M04S001][北部の探索を決意する			][mp4107	/NS	]
//[M04S002][北部の探索を決意する２			][mp4107	/NS	]
#define SE_M04S002_01	SE_Y200				//＊ハイタッチ

//[M04S010][はじまりの大樹を眺める			][mp4111	/MC	]
//[M04S020][大樹前の野営地に到着する		][mp4111	/EB	]
//[M04S021][大樹前で野営する				][mp4111t2	/NS	]
#define SE_M04S021_01	SE_Y251				//＊テント設営

//[M04S030][ダーナ③ 新女王即位の報せ		][mp6409m	/NS	]
//[M04S040][ダーナ③ アイギスを散策する		][mp6201m	/NS	]
#define SE_M04S040_01	SE_Y267				//＊ガヤループ

//[M04S041][ダーナ③ 塔堂を見る				][mp6211m	/EB	]
//[M04S050][ダーナ③ ダーナが王城へ入る		][mp6204m	/EB	]
#define SE_M04S050_01	SE_GIM_DOOR_ROCK			//＊扉SE（ギミックSE？）
#define SE_M04S050_02	SE_GIM_DOOR_ROCK_STOP		//＊
#define SE_M04S050_03	SE_Y268						//＊

//[M04S051][ダーナ③ ダーナが王城へ入る２	][mp6204m	/EB	]
//[M04S060][ダーナ③ 新女王サライへの謁見１	][mp6222m	/NS	]
//[M04S061][ダーナ③ 新女王サライへの謁見２	][mp6222m	/NS	]
//[M04S070][野営地を出発する				][mp4111t3	/NS	]
#define SE_M04S070_01	SE_Y305				//＊サハドを起こすために殴る
#define SE_M04S070_02	SE_Y235
#define SE_M04S070_03	SE_Y276

//[M04S080][リコッタが行方不明になる		][mp5102	/EB	]
#define SE_M04S080_01	SE_Y277				//＊ガサガサと草の音
#define SE_M04S080_02	SE_Y278				//＊古代種登場（ジャンプコミカル）
#define SE_M04S080_03	SE_Y279				//＊古代種鳴き声（かわいい）

//[M04S081][小型古代種を追っていく			][mp5102	/EB	]
#define SE_M04S081_01	SE_Y278				//＊古代種登場（ジャンプコミカル）

//[M04S082][古代種の住処へ突入する			][mp5401	/MC	]
//[M04S083][リコッタを発見する				][mp5401	/EB	]
//[M04S090][リコッタを住処から救出する		][mp5401	/EB	]
#define SE_M04S090_01	SE_Y280				//＊本性を現す
#define SE_M04S090_02	SE_Y232				//＊着地
#define SE_M04S090_03	SE_Y280				//＊咆哮

//[M04S091][リコッタを住処から救出する２	][mp5401	/NS	]
#define SE_M04S091_01	SE_Y104				//＊小型古代種着地
#define SE_M04S091_02	SE_Y232				//＊着地
#define SE_M04S091_03	SE_Y221				//＊咆哮

//[M04S092][リコッタを住処から救出する３	][mp5102	/NS	]
//[M04S100][山道が終わり平野部に出る		][mp6102	/EB	]
//[M04S110][超大型古代種に遭遇する			][mp6102	/EB	]
#define SE_M04S110_01	SE_Y262				//＊ザバァ
#define SE_M04S110_02	SE_Y228				//＊剣に手をかける
#define SE_M04S110_03	SE_Y206				//＊ザバァ
#define SE_M04S110_04	SE_Y254				//＊水中足音
#define SE_M04S110_05	SE_Y277				//＊ハムハム
#define SE_M04S110_06	SE_Y232				//
#define SE_M04S110_07	SE_Y218				//

//[M04S120][王都前で立ち往生する			][mp6101	/EB	]
#define SE_M04S120_01	SE_Y251				//＊テント設営

//[M04S121][王都前で野営する				][mp6101t1	/NS	]
//[M04S122][水晶前で不思議な現象が起こる	][mp6101t3	/NS	]
#define SE_M04S122_01	SE_Y244				//＊共鳴音
#define SE_M04S122_02	SE_Y281				//＊共鳴音ループ（mp6101t3に環境音で仕込む？）

//[M04S123][水晶石に手をかざすⅠ			][mp6101t3	/LP	]
#define SE_M04S123_01	SE_Y285				//＊水晶石と交信エフェクト
#define SE_M04S123_02	SE_Y282				//＊発光（過去編ワープ）
#define SE_M04S123_03	SE_Y270				//＊ホワイトアウト
#define SE_M04S123_04	SE_Y268				//＊低音

//[M04S130][過去Ⅰ アドルの夢を見る			][mp6401m	/NS	]
#define SE_M04S130_01	SE_Y224				//＊起き上がる
#define SE_M04S130_02	SE_Y290				//＊ノック
#define SE_M04S130_03	SE_Y245				//＊起き上がる

//[M04S131][過去Ⅰ アドルの夢を見る２		][mp6401m	/NS	]
//[M04S132][過去Ⅰ 初めて水晶石前に植樹		][mp6101m	/EB	]
#define SE_M04S132_01	SE_Y244				//＊ダーナ予知
#define SE_M04S132_02	SE_Y283				//＊ヒモロギの樹発光（ループ？）
#define SE_M04S132_03	SE_Y274				//＊植樹
#define SE_M04S132_04	SE_Y286				//＊ダーナオーラ単発
//ダーナも発光してた気がする

//[M04S140][王都前野営地を出発する			][mp6101t3	/NS	]
#define SE_M04S140_01	SE_Y245				//＊起き上がる

//[M04S150][王都東街区に到着する			][mp6202	/EB	]
#define SE_M04S150_01	SE_Y249				//＊リコッタジャンプ
#define SE_M04S150_02	SE_Y235				//＊ステップ
#define SE_M04S150_03	SE_FOOTSE_NORMAL_1	//＊

//[M04S151][東街区で人影を見る				][mp6202	/EB	]
//[M04S152][人影が西街区へ逃げていく		][mp6202	/EB	]
//[M04S153][西街区の崩落した建物を見る		][mp6203	/EB	]
//[M04S154][人影はさらに端へ逃げていく		][mp6203	/EB	]
//[M04S156][人影は建物に逃げ込む			][mp6203	/EB	]
//[M04S159b][建物内で獣に襲われる			][mp6214	/MC	]
#define SE_M04S159_01	SE_Y220				//＊モンスタ鳴き声

//[M04S157][建物内を調べる					][mp6214	/NS	]
//[M04S158][人影が中央方面に逃げていく		][mp6203	/MC	]
//[M04S160][塔堂を見つける					][mp6201	/MC	]
//[M04S161][塔堂内の石像を見る				][mp6211	/MC	]
//[M04S162][塔堂内の奥へ人影が逃げる		][mp6211	/EB	]
//[M04S163][崩落した橋を眺める				][mp6204	/MC	]
//[M04S170][橋の上でタナトスに出会う		][mp6204	/EB	]
#define SE_M04S170_01	SE_Y224				//＊リコッタ飛びつく

//[M04S171][橋の上でタナトスに出会う２		][mp6204	/NS	]
#define SE_M04S171_01	SE_Y291				//＊トランクを取り出す
#define SE_M04S171_02	SE_Y026				//＊ラクシャが手紙を広げる音？

//[M04S180][参道の障害で立ち往生する		][mp6201	/EB	]
//[M04S181][水晶石に手をかざすⅡ			][mp6201	/LP	]
#define SE_M04S181_01	SE_Y285				//＊水晶に手をかざす（過去編ワープ）ループ？
#define SE_M04S181_02	SE_Y282				//＊発光（過去編ワープ）
#define SE_M04S181_03	SE_Y270				//＊ホワイトアウト
#define SE_M04S181_04	SE_Y268				//

//[M04S190][過去Ⅱ ダーナが王国滅亡を知る	][mp6101m	/NS	]
//[M04S190b][過去Ⅱ ダーナが王国滅亡を知る２][mp6101m	/NS	]
//[M04S191][過去Ⅱ ダーナが参道に着く		][mp6201m	/LP	]
#define SE_M04S191_01	SE_Y270				//＊ホワイトアウト

//[M04S200][参道の障害が消滅する			][mp6201	/NS	]
#define SE_M04S200_01	SE_Y270				//＊ホワイトアウト抜け
#define SE_M04S200_02	SE_Y245				//＊起き上がる

//[M04S210][大樹の寺院に到着する			][mp6408	/MC	]
//[M04S220][扉の開閉装置を操作する			][mp6401	/ET	]
//#define SE_M04S220_01	SE_EV_TEST2			//	扉光る（ギミックSE待ち？）
//#define SE_M04S220_02	SE_EV_TEST2			//	扉開く（ギミックSE待ち？）
//↑ギミックSEのラベルで入力済みです(U

//[M04S230][ダーナの部屋に到着する			][mp6402	/MC	]
//フラッシュバック演出

//[M04S240][寺院の広間に到着する			][mp6401?	/MC	]
#define SE_M04S240_01	SE_Y314				//＊目きゅぴーん
#define SE_M04S240_02	SE_Y315				//＊メキメキ動き出す
#define SE_M04S240_03	SE_Y318				//＊剣振り（＋戦闘SE）
#define SE_M04S240_04	SE_Y316				//＊バン
#define SE_M04S240_05	SE_Y317				//＊咆哮
#define SE_M04S240_06	SE_Y236				//＊メキメキ2
#define SE_M04S240_07	SE_Y203				//＊着地
#define SE_M04S240_08	SE_Y292				//＊
#define SE_M04S240_09	SE_Y204				//＊

//[M04S241][寺院ボス戦終了					][mp6410	/NS	]
//[M04S250][はじまりの大樹を見る			][mp6409	/MC	]
//[M04S260][ダーナを発見する				][mp6409	/EB	]
#define SE_M04S260_01	SE_Y307				//＊樹がほどける
#define SE_M04S260_02	SE_Y245				//＊ダーナ受け止め
#define SE_M04S260_03	SE_Y203				//
#define SE_M04S260_04	SE_Y218				//

//[M04S261][ダーナを発見する２				][mp6409	/NS	]
//───────────────────────────────
//■第五部
//───────────────────────────────
//[M05S000][ダーナの腕の模様に気づく		][mp1202	/NS	]
//[M05S001][ドギたちに北部の状況を伝える	][mp1201	/NS	]
#define SE_M05S001_01	SE_Y273				//＊警鐘

//[M05S010][ダーナが迎撃戦に参加する		][mp1215	/ET	]
#define SE_M05S010_01	SE_Y232				//＊古代種足音
#define SE_M05S010_02	SE_Y226				//＊半月刀飛来
#define SE_M05S010_03	SE_Y271				//＊ヒット
#define SE_M05S010_04	SE_Y228				//＊半月刀キャッチ
#define SE_M05S010_05	SE_Y221				//＊古代種悲鳴
#define SE_M05S010_06	SE_Y232				//＊古代種倒れる
#define SE_M05S010_07	SE_Y218				//＊
#define SE_M05S010_08	SE_Y265				//＊

#define SE_M05S010_09	SE_Y102				//着地
#define SE_M05S010_10	SE_Y990				//回転

//[M05S011][ダーナが迎撃戦に参加する２		][mp1215	/ET	]
#define SE_M05S011_01	SE_Y219			//＊古代種断末魔
#define SE_M05S011_02	SE_Y203			//＊倒れ
#define SE_M05S011_03	SE_Y218			//＊
#define SE_M05S011_04	SE_Y232			//＊
#define SE_M05S011_05	SE_Y282			//＊
//ダーナの必殺技ボイスにエコー


//[M05S020][ダーナがアドル班に加わる		][mp1201t2	/NS	]
#define SE_M05S020_01	SE_Y292				//＊ダーナめまい

//[M05S021][ダーナがアドル班に加わる２		][mp1201t2	/NS	]
//[M05S030][バハの塔へ向かうことになる		][mp1201t3	/NS	]
//[M05S040][ダーナが王宮跡を見る			][mp6204	/MC	]
//[M05S041][東方面の通路に出る				][mp6201	/EB	]
//[M05S042][バハの塔を眺める				][mp6103	/MC	]
//[M05S050][ダーナが頭痛に見舞われる		][mp6115	/EB	]
#define SE_M05S050_01	SE_Y218				//

//[M05S060][バハの塔前で水晶石を見つける	][mp6110	/EB	]
#define SE_M05S060_01	SE_Y285				//＊水晶石と交信エフェクトループ
#define SE_M05S060_02	SE_Y282				//＊発光（過去編ワープ）
#define SE_M05S060_03	SE_Y270				//＊ホワイトアウト
#define SE_M05S060_04	SE_Y268				//＊過去に飛ぶ時の画面切り替えエフェクト
#define SE_M05S060_05	SE_Y286				//
#define SE_M05S060_06	SE_Y281				//＊共鳴音ループ

//[M05S070][過去Ⅲ　ダーナが塔へ向かう		][mp6216m	/NS	]
//[M05S071][過去Ⅲ　ダーナが塔へ向かう２	][mp6202m	/NS	]
//[M05S072][過去Ⅲ　ダーナが塔へ向かう３	][mp6201m	/NS	]
//[M05S080][過去Ⅲ　ダーナが塔に到着する	][mp6103m	/EB	]
#define SE_M05S080_01	SE_Y274				//＊苗木を植える
#define SE_M05S080_02	SE_Y270				//＊ホワイトアウト

//[M05S090][塔前の地割れに橋が架かる		][mp6110t1	/NS	]
#define SE_M05S090_01	SE_Y270				//＊ホワイトアウト
#define SE_M05S090_02	SE_Y282				//＊発光（過去編ワープ）
#define SE_M05S090_03	SE_Y285				//＊過去に飛ぶ時の画面切り替えエフェクト
#define SE_M05S090_04	SE_Y251				//＊テント設営

//[M05S091][塔前で野営する					][mp6110t2	/NS	]
//[M05S092][塔前の野営地を出発する			][mp6110t3	/NS	]
//[M05S100][塔の探索を開始した				][mp6321	/EB	]
//[M05S105][バハの塔中ボス登場演出			][mp6325	/EB	]
#define SE_M05S105_01	SE_Y292				//＊動き出す気配
#define SE_M05S105_02	SE_Y322				//＊立ち上がる
#define SE_M05S105_03	SE_Y318				//＊武器振り（小）
#define SE_M05S105_04	SE_Y318				//＊武器振り（大）（戦闘ＳＥ？）
#define SE_M05S105_05	SE_Y203				//	

//[M05S106][バハの塔中ボス戦闘終了			][mp6325	/EB	]
//[M05S110][理法具を入手する				][mp6325	/LP	]
//[M05S115][バハの塔大ボス登場演出			][mp6329	/EB	]
#define SE_M05S115_01	SE_Y323				//＊なんか光る
#define SE_M05S115_02	SE_Y315				//＊メキメキ動き出す
#define SE_M05S115_03	SE_Y317				//＊咆哮
#define SE_M05S115_04	SE_Y236				//＊
#define SE_M05S115_05	SE_Y218				//＊ハッタリ
#define SE_M05S115_06	SE_Y304				//

//[M05S116][バハの塔大ボス戦闘終了			][mp6329	/EB	]
//[M05S120][知識の間にたどり着く			][mp6330	/MC	]
//リフトはギミックＳＥを活用

//[M05S130][ダーナがモノリスを起動する		][mp6330	/LP	]
#define SE_M05S130_01	SE_Y286				//＊ダーナオーラ
#define SE_M05S130_02	SE_Y293				//＊モノリス起動
#define SE_M05S130_03	SE_Y295				//＊モノリス認証ＯＫ
#define SE_M05S130_04	SE_Y294				//＊ウインドウ閉じる
#define SE_M05S130_05	SE_Y293				//＊ウインドウ展開
#define SE_M05S130_06	SE_Y297				//＊暴走

//[M05S140][漂流村の騒がしさに気づく		][mp1201	/MC	]
//[M05S141][見張り台を登ることにする		][mp1201	/EB	]
//[M05S142][幽霊船を目撃する				][mp1201v1	/LP	]
//[M05S143][幽霊船を調査することになる		][mp1201t2	/NS	]
#define SE_M05S143_01	SE_Y397				//焚き火（イベント用）

//[M05S144][エレフセリア号を発見する		][mp7411	/EB	]
//[M05S145][エレフセリアの入り口を探す		][mp7411	/EB	]
//[M05S146][リードの航海日誌①を読む		][mp7411	/LP	]
#define SE_M05S146_02	SE_Y218				//＊ハッタリ
#define SE_M05S146_03	SE_Y347				//	タラップ
#define SE_M05S146_04	SE_Y204				//	タラップ2

//[M05S147][エレフセリア号が出航する		][mp7411	/EB	]
#define SE_M05S147_01	SE_Y298				//＊船鐘
#define SE_M05S147_02	SE_Y347				//＊タラップ引っ込む１
#define SE_M05S147_03	SE_Y218				//＊ハッタリ
#define SE_M05S147_04	SE_Y262				//＊出港の波音
#define SE_M05S147_05	SE_Y349				//＊ガコン
#define SE_M05S147_06	SE_Y348				//＊タラップ引っ込む２

//[M05S147b][エレフセリア号が出航する２		][mp0405	/NS	]
#define SE_M05S147b_01	SE_Y268				//＊ハッタリ

//[M05S150][リードの航海日誌②を読む		][mp0404	/LP	]
#define SE_M05S150_01	SE_Y287				//＊扉開く

//[M05S151][リードの航海日誌③を読む		][mp0403	/LP	]
#define SE_M05S151_01	SE_Y287				//＊扉開く

//[M05S152][リードの航海日誌④を読む		][mp0408	/LP	]
#define SE_M05S152_01	SE_Y287				//＊扉開く
#define SE_M05S152_02	SE_Y348				//＊扉開く
#define SE_M05S152_03	SE_Y337				//＊扉開く

//[M05S160][キャプテン・リードとの戦闘		][mp0405	/EB	]
#define SE_M05S160_01	SE_Y319				//＊妖気集まる
#define SE_M05S160_02	SE_Y320				//＊実体化
#define SE_M05S160_03	SE_Y268				//＊地鳴り
#define SE_M05S160_04	SE_Y204				//＊ばばーん
#define SE_M05S160_05	SE_Y318				//＊ばばーん
#define SE_M05S160_06	SE_Y321				//＊咆哮

//[M05S161][キャプテン・リード戦闘後		][mp0405	/NS	]
#define SE_M05S161_01	SE_Y282				//＊宝箱出現
#define SE_M05S161_02	SE_Y302				//＊宝箱出現

//[M05S170][最後の航海日誌を読む			][mp0405	/LP	]
#define SE_M05S170_01	SE_Y298				//＊船鐘
#define SE_M05S170_02	SE_Y026	

//[M05S171][キャプテン・リードと別れる		][mp7411	/NS	]
#define SE_M05S171_01	SE_Y218				//＊ハッタリ
#define SE_M05S171_02	SE_Y262				//＊波音
#define SE_M05S171_03	SE_Y348				//＊タラップ1
#define SE_M05S171_04	SE_Y204				//＊タラップ2
#define SE_M05S171_05	SE_Y351				//＊リード成仏
#define SE_M05S171_06	SE_Y283				//＊リード成仏開始ループ
#define SE_M05S171_07	SE_Y350				//＊

//[M05S172][キャプテン・リードと別れる２	][mp7411	/NS	]
#define SE_M05S172_01	SE_Y347				//＊タラップ引っ込む
#define SE_M05S172_02	SE_Y218				//＊ハッタリ
#define SE_M05S172_03	SE_Y262				//＊波音

//[M05S180][大空洞へ向かうことになる		][mp1201	/MC	]
//[M05S181][大空洞へ向かうことになる２		][mp1202	/NS	]
//[M05S190][水晶石転移が可能になる			][mp1201	/NS	]
#define SE_M05S190_01	SE_Y286				//＊水晶石光る
#define SE_M05S190_02	SE_Y345				//＊味方ワープ予兆
#define SE_M05S190_03	SE_Y346				//＊味方ワープ消える

//[M05S191][王都に転移で到着する			][mp6201	/NS	]
#define SE_M05S191_01	SE_Y345				//＊味方ワープ予兆
#define SE_M05S191_02	SE_Y346				//＊味方ワープ出現

//[M05S192][王都に転移で到着する２			][mp1201	/NS	]
//[M05S200][空中回廊に到達する				][mp6204	/MC	]
//[M05S201][水晶石に手をかざすⅣ			][mp6204	/LP	]
#define SE_M05S201_01	SE_Y285				//＊水晶石と交信エフェクトループ
#define SE_M05S201_02	SE_Y282				//＊発光（過去編ワープ）
#define SE_M05S201_03	SE_Y268				//＊過去に飛ぶ時の画面切り替えエフェクト
#define SE_M05S201_05	SE_Y270				//＊ホワイトアウト

//[M05S210][過去Ⅳ　兵士の一団に遭遇する	][mp4105m	/NS	]
#define SE_M05S210_01	SE_Y265				//＊影がよぎる
#define SE_M05S210_02	SE_Y377				//＊竜車？

//[M05S220][過去Ⅳ　空中回廊に苗木を植える	][mp6204m	/EB	]
#define SE_M05S220_01	SE_Y274				//＊苗植える
#define SE_M05S220_02	SE_Y270				//＊ホワイトアウト
#define SE_M05S220_03	SE_Y285				//＊水晶石と交信エフェクトループ
#define SE_M05S220_04	SE_Y282				//＊発光（過去編ワープ）
#define SE_M05S220_05	SE_Y286				//＊ダーナオーラ

//[M05S230][消滅した王宮が復活する			][mp6204	/NS	]
#define SE_M05S230_01	SE_Y292				//＊ドクン

//[M05S240][大穴の大瀑布を見る				][mp6362	/EB	]
//[M05S250][大空洞中ボス登場演出			][mp6366	/MC	]
#define SE_M05S250_01	SE_Y324				//＊咆哮
#define SE_M05S250_02	SE_Y325				//＊ズサー
#define SE_M05S250_03	SE_Y265				//＊ビリビリ予兆	(＋戦闘SE)
#define SE_M05S250_04	SE_Y327				//＊100万ボルト		(＋戦闘SE)
#define SE_M05S250_05	SE_Y218				//＊ハッタリ
#define SE_M05S250_06	SE_Y300				//

//[M05S251][大空洞中ボス戦闘終了			][mp6366	/EB	]
//[M05S252][《水竜の鱗》を手に入れる		][mp6365	/LP	]
//[M05S260][オケアノスの住処に到達する		][mp6370	/MC	]
//[M05S270][ドギとタナトスが王宮に来る		][mp6204	/NS	]
#define SE_M05S270_01	SE_Y218				//＊ハッタリ
#define SE_M05S270_02	SE_Y262				//＊波音
#define SE_M05S270_03	SE_EV_TEST			//

//[M05S271][オケアノス討伐戦の準備			][mp1201	/NS	]
//[M05S272][オケアノス討伐戦の準備２		][mp1201	/TK	]
//[M05S280][オケアノス討伐戦を開始する		][mp6115v1	/NS	]
//[M05S290][オケアノスを待ち伏せる			][mp6370	/NS	]
//[M05S291][オケアノスに攻撃を開始する		][mp6115v1	/NS	]
#define SE_M05S291_01	SE_Y218				//＊ハッタリ
#define SE_M05S291_02	SE_ENV_SEA_5		//＊波音loop
#define SE_M05S291_03	SE_Y340				//＊弓矢撃つ
#define SE_M05S291_04	SE_Y341				//＊投石器発射
#define SE_M05S291_05	SE_Y262				//＊大暴れの波音
#define SE_M05S291_06	SE_Y342				//＊オケアノス雄叫び
#define SE_M05S291_07	SE_Y343				//＊弓を引き絞る
#define SE_M05S291_08	SE_Y206				//＊水ボチャ1
#define SE_M05S291_09	SE_Y232				//＊古代種足音
#define SE_M05S291_10	SE_Y299				//＊ゴキリ
#define SE_M05S291_11	SE_Y234				//＊古代種咆哮
#define SE_M05S291_12	SE_Y228				//＊鞭を手に取る
#define SE_M05S291_13	SE_Y256				//＊水ボチャ2
#define SE_M05S291_14	SE_Y257				//＊ドギパンチ
#define SE_M05S291_15	SE_Y344				//＊鞭振り

//[M05S292][オケアノスとの決戦				][mp6370	/NS	]
#define SE_M05S292_01	SE_Y218				//＊ハッタリ
#define SE_M05S292_02	SE_Y342				//＊オケアノス雄叫び

//[M05S293][オケアノスに勝利する			][mp6370	/NS	]
#define SE_M05S293_01	SE_Y244				//＊予知キーン
#define SE_M05S293_02	SE_Y342				//＊オケアノス雄叫び
#define SE_M05S293_03	SE_Y265				//＊
#define SE_M05S293_04	SE_Y218				//＊ハッタリ
#define SE_M05S293_05	SE_Y289				//＊

//[M05S300][漂流村で決起会が催される		][mp1201t2	/NS	]
//[M05S310][高台でダーナと話す				][mp1201t2	/EB	]
//[M05S311][高台でダーナと話す２			][mp1201t2	/NS	]
#define SE_M05S311_01	SE_Y224				//＊座る
#define SE_M05S311_02	SE_FOOTSE_BUSH_1	//＊草

//[M05S320][過去Ⅳ－２　星の落下を予知する	][mp6409m	/NS	]
#define SE_M05S320_01	SE_Y265				//＊影がよぎる
#define SE_M05S320_02	SE_Y244				//＊予知キーン
#define SE_M05S320_03	SE_Y292				//＊フラッシュバック
#define SE_M05S320_04	SE_Y218				//＊ハッタリ

//[M05S321][過去Ⅳ－２　予知をサライに告げる][mp6222m	/NS	]
//[M05S322][過去Ⅳ－２予知をサライに告げる２][mp6222m	/NS	]
//[M05S330][過去Ⅳ－２　王都に星が落下する	][mp6231m	/NS	]
#define SE_M05S330_01	SE_Y288				//＊環境音（天変地異）
#define SE_M05S330_02	SE_ENV_SCFI_2		//	バリア的オーラ
#define SE_M05S330_03	SE_EV_TEST			//
#define SE_M05S330_04	SE_EV_TEST			//
#define SE_M05S330_05	SE_EV_TEST			//
#define SE_M05S330_06	SE_EV_TEST			//

//[M05S331][過去Ⅳ－２　王都に星が落下する２][mp6222m	/NS	]
#define SE_M05S331_01	SE_Y275				//＊環境音（ガヤ）
#define SE_M05S331_02	SE_Y288				//＊環境音（天変地異）

//[M05S340][過去Ⅳ－２　謎の竜種と対決		][mp6204m	/MC	]
#define SE_M05S340_01	SE_Y203				//＊衝撃音
#define SE_M05S340_02	SE_Y289				//＊衝撃音
#define SE_M05S340_03	SE_Y288				//＊環境音（天変地異）
#define SE_M05S340_04	SE_Y232				//＊足音
#define SE_M05S340_05	SE_Y312				//＊咆哮
#define SE_M05S340_06	SE_Y204				//＊
#define SE_M05S340_07	SE_ENV_SCFI_2		//	バリア的オーラ
#define SE_M05S340_08	SE_Y289

//[M05S341][過去Ⅳ－２　謎の竜種との戦闘後	][mp6204m	/NS	]
#define SE_M05S341_01	SE_Y352				//＊霧が晴れる
#define SE_M05S341_02	SE_Y203				//＊衝撃音
#define SE_M05S341_03	SE_Y289				//＊衝撃音
#define SE_M05S341_04	SE_Y292				//＊頭痛
#define SE_M05S341_05	SE_Y353				//＊紋章浮き出す
#define SE_M05S341_06	SE_Y355				//＊転位準備
#define SE_M05S341_07	SE_Y356				//＊転位
#define SE_M05S341_08	SE_Y354				//＊フラッシュバック
#define SE_M05S341_09	SE_Y288				//＊環境音（天変地異）
#define SE_M05S341_10	SE_ENV_SCFI_2		//	バリア的オーラ

//[M05S350][ダーナが姿を消す				][mp1202	/NS	]
#define SE_M05S350_01	SE_Y245				//＊起き上がるアドル

//[M05S360][王家の谷へ向かうことにする		][mp1201t3	/NS	]
//[M05S370][寺院の山門を西側へ抜ける		][mp4105	/MC	]
//[M05S380][ダーナに追いつく				][mp6105	/MC	]
//[M05S381][ダーナに追いつく２				][mp6105	/NS	]
#define SE_M05S381_01	SE_Y270				//＊ホワイトアウト
#define SE_M05S381_02	SE_Y285				//＊水晶石と交信エフェクトループ
#define SE_M05S381_03	SE_Y282				//＊発光（過去編ワープ）
#define SE_M05S381_04	SE_Y268				//＊過去に飛ぶ時の画面切り替えエフェクト
#define SE_M05S381_05	SE_Y281				//＊水晶石の発光ループ
#define SE_M05S381_06	SE_Y286

//[M05S390][過去Ⅴ　王都から住人が逃げ出す	][mp6201m1	/NS	]
#define SE_M05S390_01	SE_Y377				//＊竜車のSE？

//[M05S391][過去Ⅴ　ダーナが王家の谷へ出発	][mp6201m1	/NS	]
//[M05S400][過去Ⅴ　衛士たちに誰何を受ける	][mp6106m	/EB	]
#define SE_M05S400_01	SE_Y286				//＊ダーナのオーラ
#define SE_M05S400_02	SE_Y284				//＊ダーナの術
#define SE_M05S400_03	SE_Y225				//＊兵士倒れる

//[M05S401][過去Ⅴ　衛士たちに誰何を受ける２][mp6106m	/LP	]
#define SE_M05S401_01	SE_Y270				//＊ホワイトアウト
#define SE_M05S401_02	SE_Y286				//＊ダーナオーラ
#define SE_M05S401_03	SE_Y282				//＊発光（過去編ワープ）
#define SE_M05S401_04	SE_Y285				//＊過去に飛ぶ時の画面切り替えエフェクト
#define SE_M05S401_05	SE_Y274				//＊植える
#define SE_M05S401_06	SE_Y421				//＊走ってくる

//[M05S410][王都の谷を目指す				][mp6105	/NS	]
#define SE_M05S410_01	SE_Y270				//＊ホワイトアウト
#define SE_M05S410_02	SE_Y282				//＊発光（過去編ワープ）

//[M05S420][墓所前に野営地を築く			][mp6108t1	/MC	]
#define SE_M05S420_01	SE_Y218				//＊ハッタリ
#define SE_M05S420_02	SE_Y251				//＊テント設営

//[M05S421][墓所前で野営する				][mp6108t2	/NS	]
//[M05S430][王家の谷中ボス登場演出			][mp6345	/EB	]
#define SE_M05S430_01	SE_Y255				//＊落下
#define SE_M05S430_02	SE_Y204				//＊着地
#define SE_M05S430_03	SE_EV_TEST			//	切腹攻撃（＋戦闘SE）

//[M05S431][王家の谷中ボス戦闘終了			][mp6345	/NS	]
//[M05S440][王家の谷大ボス登場演出			][mp6349	/EB	]
#define SE_M05S440_01	SE_Y218				//＊ハッタリ
#define SE_M05S440_02	SE_GIM_FIRE			//＊点火
#define SE_M05S440_03	SE_Y320				//＊出現
#define SE_M05S440_04	SE_Y317				//＊咆哮的な？
#define SE_M05S440_05	SE_Y318				//＊攻撃（＋戦闘SE）
#define SE_M05S440_06	SE_Y204				//＊

//[M05S441][王家の谷大ボス戦闘終了			][mp6349	/NS	]
//[M05S450][墓所の広い空間に出る			][mp6350	/EB	]
//[M05S460][壁画の間にたどり着く			][mp6351	/EB	]
#define SE_M05S460_01	SE_Y286				//＊ダーナオーラ
#define SE_M05S460_02	SE_Y293				//＊モノリス起動
#define SE_M05S460_03	SE_Y296				//＊認証エラー
#define SE_M05S460_04	SE_Y294				//＊モノリスクローズ
#define SE_M05S460_05	SE_Y355				//＊転位予兆
#define SE_M05S460_06	SE_Y356				//＊転位
#define SE_M05S460_07	SE_Y295				//＊認証OK
#define SE_M05S460_08	SE_EV_TEST			//

//[M05S470][漂流村が古代種の攻勢を受ける	][mp6108	/MC	]
#define SE_M05S470_01	SE_Y304				//＊古代種の鳴き声
#define SE_M05S470_02	SE_Y221				//＊古代種の鳴き声

//───────────────────────────────
//■第六部
//───────────────────────────────
//[M06S000][王家の谷について報告する		][mp1201	/NS	]
#define SE_M06S000_01	SE_Y273				//＊警鐘

//[M06S010][迎撃戦で新種に遭遇する			][mp1215	/NS	]
#define SE_M06S010_01	SE_Y234				//＊新種の鳴き声

//[M06S011][迎撃戦で新種に遭遇する２		][mp1215	/NS	]
#define SE_M06S011_01	SE_Y234				//＊新種の鳴き声

//[M06S020][調査のためジャンダルムへ向かう	][mp1201t2	/NS	]
//[M06S030][大樹の異変を目撃する			][mp4107	/MC	]
#define SE_M06S030_01	SE_Y328				//＊古代種鳴き声
#define SE_M06S030_02	SE_Y234				//＊
#define SE_M06S030_03	SE_Y221				//＊

//[M06S040][霧の漂う山門に入る				][mp4111	/EB	]
#define SE_M06S040_01	SE_Y265				//＊飛んでいく古代種
#define SE_M06S040_02	SE_Y232

//[M06S041][霧の中で異形の古代種と戦う１	][mp6409b	/NS	]
//[M06S042][霧の中で異形の古代種と戦う２	][mp6409b	/NS	]
#define SE_M06S042_01	SE_Y232				//＊足音
#define SE_M06S042_02	SE_Y265				//＊
#define SE_M06S042_03	SE_Y312				//＊咆哮
#define SE_M06S042_04	SE_Y204				//＊
#define SE_M06S042_05	SE_Y313				//＊炎（＋戦闘SE）
#define SE_M06S042_06	SE_Y218

//[M06S043][山門前で護り人たちに遭遇する	][mp6409v1	/NS	]
//[M06S044][山門前で護り人たちに遭遇する２	][mp6409v1	/NS	]
#define SE_M06S044_01	SE_Y292				//＊紋章出現
#define SE_M06S044_02	SE_Y353				//＊紋章出現
#define SE_M06S044_03	SE_Y268				//＊霧の繭拡大
#define SE_M06S044_04	SE_Y316				//＊バーン

//[M06S045][山門前で護り人たちに遭遇する３	][mp6409v1	/NS	]
#define SE_M06S045_01	SE_Y281				//＊水晶石共鳴

//[M06S050][過去Ⅵ　セレンの園へ向かう		][mp6203v1	/NS	]
//[M06S060][過去Ⅵ　セレンの園に到着する	][mp6350m	/MC	]
//[M06S061][過去Ⅵ　セレンの園に到着する２	][mp6350m	/LP	]
//[M06S062][過去Ⅵ　セレンの園に到着する３	][mp6350m	/NS	]
#define SE_M06S062_01	SE_Y355				//＊転移予兆
#define SE_M06S062_02	SE_Y356				//＊転移

//[M06S070][過去Ⅵ　ダーナが自分を封印する	][mp6409m	/NS	]
#define SE_M06S070_01	SE_Y265				//＊日がかげる
#define SE_M06S070_02	SE_Y292				//＊フラッシュバック
#define SE_M06S070_03	SE_Y245				//＊フードをとる
#define SE_M06S070_04	SE_Y291				//＊フードをとる
#define SE_M06S070_05	SE_Y359				//＊頭を撃ち抜く
#define SE_M06S070_06	SE_Y360				//＊倒れる（雪上）

//[M06S071][過去Ⅵ　ダーナが自分を封印する２][mp6409m	/NS	]
#define SE_M06S071_01	SE_Y355				//＊転移予兆
#define SE_M06S071_02	SE_Y356				//＊転移
#define SE_M06S071_03	SE_Y307				//＊メキメキ枝が生える
#define SE_M06S071_04	SE_Y236				//＊ミシミシとツタが伸びる（ループ）
#define SE_M06S071_05	SE_Y203				//＊ズゴゴゴと幹が生える
#define SE_M06S071_06	SE_Y268				//＊

//[M06S080][アドルがセレンの園を目指す		][mp6409v1	/NS	]
//[M06S090][アドルたちがセレンの園に到着する][mp6350	/EB	]
#define SE_M06S090_01	SE_Y218				//＊

//[M06S100][護り人たちが転移してくる		][mp6350	/LP	]
#define SE_M06S100_01	SE_Y355				//＊転移予兆
#define SE_M06S100_02	SE_Y356				//＊転移
#define SE_M06S100_03	SE_Y245				//＊
#define SE_M06S100_05	SE_Y283				//＊

//[M06S110][山門の霧を突破する				][mp6409v1	/EB	]
#define SE_M06S110_01	SE_Y270				//＊ホワイトアウト
#define SE_M06S110_02	SE_Y268				//＊地鳴り
#define SE_M06S110_03	SE_Y352				//＊霧が晴れる
#define SE_M06S110_04	SE_Y285				//＊

//[M06S111][山門の霧を突破する２			][mp6408	/NE	]
#define SE_M06S111_01	SE_Y270				//＊ホワイトアウト
#define SE_M06S111_02	SE_Y352				//＊霧が晴れる

//[M06S120][オクトゥスへ侵入する			][mp6409	/EB	]
#define SE_M06S120_01	SE_Y285				//＊まぶしく光るループ
#define SE_M06S120_02	SE_Y292				//＊衝撃波
#define SE_M06S120_03	SE_Y218				//＊ハッタリ
#define SE_M06S120_04	SE_Y270				//＊ホワイトアウト
#define SE_M06S120_05	SE_Y353				//＊

//ヒドゥラのボイスを加工する

//[M06S130][オクトゥスの攻略を開始する		][mp6301	/MC	]
//[M06S131][オクトゥスの攻略を開始する２	][mp6301	/EB	]
#define SE_M06S131_01	SE_Y355				//＊転移予兆
#define SE_M06S131_02	SE_Y356				//＊転移

//[M06S132][海の回廊へ突入した				][mp6302	/LP	]
//[M06S140][海の回廊を突破する				][mp6305	/EB	]
#define SE_M06S140_01	SE_Y282				//＊尖塔光る単発
#define SE_M06S140_02	SE_Y285				//＊尖塔光るループ
#define SE_M06S140_03	SE_Y268				//＊地鳴り
#define SE_M06S140_04	SE_Y514				//＊出現
#define SE_M06S140_05	SE_Y320				//＊実体化
#define SE_M06S140_06	SE_Y326				//＊咆哮
#define SE_M06S140_07	SE_Y218				//＊
#define SE_M06S140_08	SE_Y381				//＊出現後半

//[M06S141][ヒドゥラの想念を倒す			][mp6305	/NS	]
#define SE_M06S141_01	SE_Y282				//＊想念解放予兆
#define SE_M06S141_02	SE_Y353				//＊想念解放
#define SE_M06S141_03	SE_Y218				//＊はったり
#define SE_M06S141_04	SE_Y200				//＊ハイタッチ
#define SE_M06S141_05	SE_Y361				//＊想念キラキラ

//[M06S142][海の時代の想念が流れこむ		][mp6350	/NS	]
#define SE_M06S142_01	SE_Y355				//＊天井光る
#define SE_M06S142_02	SE_Y361				//＊想念降り注ぐ（ループ）
#define SE_M06S142_03	SE_Y362				//＊水流れ出す
#define SE_M06S142_04	SE_Y303				//＊樹が成長する
#define SE_M06S142_05	SE_Y351				//＊樹が成長する

//[M06S143][ヒドゥラと話す					][mp6305	/NS	]
#define SE_M06S143_01	SE_Y355				//＊転移予兆
#define SE_M06S143_02	SE_Y356				//＊転移

//[M06S150][オクトゥス中央の間に戻る		][mp6301	/NS	]
//[M06S160][氷の回廊を突破する				][mp6306	/EB	]
#define SE_M06S160_01	SE_Y285				//＊尖塔光るループ
#define SE_M06S160_02	SE_Y268				//＊地鳴り
#define SE_M06S160_03	SE_Y514				//＊出現
#define SE_M06S160_04	SE_Y320				//＊実体化
#define SE_M06S160_05	SE_Y381				//＊出現後半
#define SE_M06S160_06	SE_Y218				//＊はったり
#define SE_M06S160_07	SE_Y312				//雄叫び
#define SE_M06S160_08	SE_Y321				//雄叫び

//[M06S161][ミノスの想念を倒す				][mp6306	/NS	]
#define SE_M06S161_01	SE_Y353				//＊想念解放
#define SE_M06S161_02	SE_Y218				//＊はったり
#define SE_M06S161_03	SE_Y361				//＊想念キラキラ

//[M06S162][氷の時代の想念が流れ込む		][mp6350	/NS	]
#define SE_M06S162_01	SE_Y355				//＊天井光る
#define SE_M06S162_02	SE_Y361				//＊想念降り注ぐ（ループ）
#define SE_M06S162_03	SE_Y362				//＊水流れ出す
#define SE_M06S162_04	SE_Y303				//＊樹が成長する
#define SE_M06S162_05	SE_Y351				//＊樹が成長する

//[M06S163][ミノスと話す					][mp6306	/NS	]
#define SE_M06S163_01	SE_Y355				//＊転移予兆
#define SE_M06S163_02	SE_Y356				//＊転移
#define SE_M06S163_03	SE_Y224				//	ドカッと胡坐をかいて座る
#define SE_M06S163_04	SE_Y232				//	

//[M06S170][蟲の回廊へ進めるようになる		][mp6301	/NS	]
//[M06S180][蟲の回廊を突破する				][mp6307	/EB	]
#define SE_M06S180_01	SE_Y285				//＊尖塔光るループ
#define SE_M06S180_02	SE_Y268				//＊地鳴り
#define SE_M06S180_03	SE_Y514				//＊出現
#define SE_M06S180_04	SE_Y320				//＊実体化
#define SE_M06S180_05	SE_Y381				//＊出現後半

#define SE_M06S180_06	SE_Y218				//＊はったり
#define SE_M06S180_07	SE_Y204				//
#define SE_M06S180_08	SE_Y234				//

//[M06S181][ネストールの想念を倒す			][mp6307	/NS	]
#define SE_M06S181_01	SE_Y353				//＊想念解放
#define SE_M06S181_02	SE_Y218				//＊はったり
#define SE_M06S181_03	SE_Y380				//＊想念解放予兆
#define SE_M06S181_04	SE_Y361				//＊想念キラキラ

//[M06S182][蟲の時代の想念が流れこむ		][mp6350	/NS	]
#define SE_M06S182_01	SE_Y355				//＊天井光る
#define SE_M06S182_02	SE_Y361				//＊想念降り注ぐ（ループ）
#define SE_M06S182_03	SE_Y362				//＊水流れ出す
#define SE_M06S182_04	SE_Y303				//＊樹が成長する
#define SE_M06S182_05	SE_Y351				//＊樹が成長する

//[M06S183][ネストールと話す				][mp6307	/NS	]
#define SE_M06S183_01	SE_Y355				//＊転移予兆
#define SE_M06S183_02	SE_Y356				//＊転移
#define SE_M06S183_03	SE_Y358				//＊サハド胸ドン

//[M06S190][天の回廊へ進めるようになる		][mp6301	/NS	]
//[M06S200][天の回廊を突破する			][mp6308	/EB	]
#define SE_M06S200_01	SE_Y285				//＊尖塔光るループ
#define SE_M06S200_02	SE_Y268				//＊地鳴り
#define SE_M06S200_03	SE_Y514				//＊出現
#define SE_M06S200_04	SE_Y320				//＊実体化
#define SE_M06S200_05	SE_Y218				//＊はったり
#define SE_M06S200_06	SE_Y381				//＊出現後半

#define SE_M06S200_07	SE_Y204				//
#define SE_M06S200_08	SE_Y285				
#define SE_M06S200_09	SE_Y580

//[M06S201][サライの想念を倒す				][mp6308	/NS	]
#define SE_M06S201_01	SE_Y353				//＊想念解放
#define SE_M06S201_02	SE_Y218				//＊はったり
#define SE_M06S201_03	SE_Y361				//＊想念キラキラ
#define SE_M06S201_04	SE_Y380				//＊想念解放予兆

//[M06S202][天の時代の想念が流れこむ		][mp6350	/NS	]
#define SE_M06S202_01	SE_Y355				//＊天井光る
#define SE_M06S202_02	SE_Y361				//＊想念降り注ぐ（ループ）
#define SE_M06S202_03	SE_Y362				//＊水流れ出す
#define SE_M06S202_04	SE_Y303				//＊樹が成長する
#define SE_M06S202_05	SE_Y218				//＊はったり
#define SE_M06S202_06	SE_Y351				//＊樹が成長する

//[M06S203][サライが想念を取り戻す			][mp6308	/NS	]
#define SE_M06S203_01	SE_Y355				//＊転移予兆
#define SE_M06S203_02	SE_Y356				//＊転移
#define SE_M06S203_03	SE_Y200				//＊ハイタッチ
#define SE_M06S203_04	SE_Y224				//＊胸に飛び込む
#define SE_M06S203_05	SE_Y292				//＊ドクン

//[M06S204][卵へ続く階段が現れる			][mp6301	/NS	]
//[M06S210][想剣ミストルティンを入手する	][mp6350v1	/EB	]
#define SE_M06S210_01	SE_Y285				//＊想念のすごい流れ（ループ）
#define SE_M06S210_02	SE_Y228				//＊剣掲げる
#define SE_M06S210_03	SE_Y365				//＊剣に光が集まる
#define SE_M06S210_04	SE_Y270				//＊ホワイトアウト
#define SE_M06S210_05	SE_Y361				//＊想念のすごい流れキラキラ
#define SE_M06S210_06	SE_Y351				//＊想念のすごい流れ開始
#define SE_M06S210_07	SE_Y283				//＊想念のすごい流れ（ループ）
#define SE_M06S210_08	SE_Y282				//＊

//[M06S220][《選択の間》へ進む				][mp6301	/EB	]
#define SE_M06S220_01	SE_Y355				//＊転移予兆
#define SE_M06S220_02	SE_Y356				//＊転移

//[M06S230][《選択の間》への扉を開く		][mp6301	/EB	]
#define SE_M06S230_01	SE_Y228				//＊剣を手にする
#define SE_M06S230_02	SE_Y367				//＊剣を降る
#define SE_M06S230_03	SE_Y363				//＊ジャキーン
#define SE_M06S230_04	SE_Y364				//＊画面が割れる
#define SE_M06S230_05	SE_Y270				//＊ホワイトアウト
#define SE_M06S230_06	SE_Y303				//＊ゲート出現
#define SE_M06S230_07	SE_Y244				//＊予知キーン
#define SE_M06S230_08	SE_Y302				//＊ゲートに入る
#define SE_M06S230_09	SE_Y268				//＊ゴゴゴゴ
#define SE_M06S230_10	SE_Y353				//＊ジャキーン

//[M06S231][《選択の間》に突入する			][mp6310	/EB	]
#define SE_M06S231_01	SE_GIM_WARP_2		//＊
#define SE_M06S231_02	SE_Y346				//＊
#define SE_M06S231_03	SE_Y345				//＊

//[M06S240][ﾃｵｽ･ﾃﾞ･ｴﾝﾄﾞﾛｸﾞﾗﾑとの戦い		][mp6310b	/MC	]
#define SE_M06S240_01	SE_Y218				//＊ハッタリ
#define SE_M06S240_02	SE_GIM_WARP_2		//＊
#define SE_M06S240_03	SE_Y346				//＊
#define SE_M06S240_04	SE_Y332

//[M06S241][ﾃｵｽ･ﾃﾞ･ｴﾝﾄﾞﾛｸﾞﾗﾑとの戦い２		][mp6310b	/NS	]
#define SE_M06S241_01	SE_Y330				//＊断末魔１
#define SE_M06S241_02	SE_Y268				//＊ゴゴゴゴ
#define SE_M06S241_03	SE_Y270				//＊ホワイトアウト
#define SE_M06S241_04	SE_Y331				//＊断末魔２
#define SE_M06S241_05	SE_Y265				//＊ハッタリ
#define SE_M06S241_06	SE_Y332				//＊断末魔３

//[M06S242][大樹の霧が晴れる様子			][mp4109	/NS	]
//[M06S243][古代種が消滅していく様子		][mp4109	/NS	]
#define SE_M06S243_01	SE_Y303				//＊
#define SE_M06S243_02	SE_Y282				//＊

//[M06S244][ﾃｵｽ･ﾃﾞ･ｴﾝﾄﾞﾛｸﾞﾗﾑとの戦い３		][mp6310b	/NS	]
#define SE_M06S244_01	SE_Y268				//＊ゴゴゴゴ
#define SE_M06S244_02	SE_Y204				//＊ズーン
#define SE_M06S244_03	SE_Y355				//＊転移予兆
#define SE_M06S244_04	SE_Y356				//＊転移
#define SE_M06S244_05	SE_Y286				//＊ダーナオーラ
//「世界が白く染まっていく」大きく

//───────────────────────────────
//■エピローグ
//───────────────────────────────
//[M07S000][漂流村でアドルが目を覚ます		][mp1202	/NS	]
#define SE_M07S000_01	SE_Y224				//＊ガバッと起きる
#define SE_M07S000_02	SE_Y245				//＊起き上がる

//[M07S001][村から出るとワープメニューを開く][mp1201	/MC	]
//[M07S010][ＥＤⅠ 寺院跡を訪れる			][mp6409v2	/MC	]
//[M07S020][ＥＤⅠ セイレン島から脱出する	][mp1203	/NS	]
//[M07S021][ＥＤⅠ セイレン島から脱出する２	][mp0021	/NS	]
//[M07S050][ＥＤⅡ セイレン島から脱出する	][mp1203	/NS	]
//[M07S051][ＥＤⅡ セイレン島から脱出する２	][mp0021	/NS	]
//[M07S060][ＥＤⅢ 山門で仲間と合流			][mp6409v2	/MC	]
//[M07S070][ＥＤⅢ 大地神マイアとの邂逅		][mp6409v2	/EB	]
#define SE_M07S070_01	SE_Y285				//＊パロ光る
#define SE_M07S070_02	SE_Y353				//＊パロ光る２
#define SE_M07S070_03	SE_Y270				//＊マイア顕現
#define SE_M07S070_04	SE_Y366				//＊花が咲く
#define SE_M07S070_05	SE_Y281				//＊思い出しなさーい
#define SE_M07S070_06	SE_Y339				//＊記憶がよみがえる
#define SE_M07S070_07	SE_Y218				//＊
#define SE_M07S070_11	SE_Y361				//＊

#define SE_M07S070_09	SE_Y368				//＊空間に裂け目が出来る
#define SE_M07S070_10	SE_Y369				//＊空間に裂け目が出来る２
#define SE_M07S070_12	SE_Y370				//＊空間の裂け目ループ

//[M07S080][ＥＤⅢ 《はじまりの深淵》突入	][mp8321	/NS	]
//[M07S090][ＥＤⅢ 《はじまりの深淵》ボス1　][mp8323	/MC	]
#define SE_M07S090_01	SE_Y218				//＊ずーん
#define SE_M07S090_02	SE_Y265				//＊通り過ぎる
#define SE_M07S090_03	SE_Y292				//＊ドクン

//[M07S091][ＥＤⅢ 《はじまりの深淵》ボス2　][mp8323	/MC	]
#define SE_M07S091_01	SE_Y218				//＊子供舞い上がる
#define SE_M07S091_02	SE_Y333				//＊がぶり
#define SE_M07S091_03	SE_Y204				//＊着地
#define SE_M07S091_04	SE_Y256				//＊ザバァ
#define SE_M07S091_05	SE_Y206				//＊着地水
#define SE_M07S091_06	SE_Y218				//＊ずーん
#define SE_M07S091_07	SE_Y260				//＊子供鳴き声

//[M07S100][ＥＤⅢ 《はじまりの深淵》突破	][mp6409v2	/NS	]
#define SE_M07S100_01	SE_Y351				//	ダーナ登場
#define SE_M07S100_02	SE_Y224				//＊抱きつく
#define SE_M07S100_03	SE_Y302				//	じんわり出現

//[M07S110][ＥＤⅢ セイレン島を脱出する		][mp1203	/NS	]
//[M07S120][ＥＤⅢ イベント進行確認			][mp1203	/TK	]
//[M07S121][ＥＤⅢ セイレン島を脱出する２	][mp1203	/NS	]
//[M07S130][ＥＤⅢ 脱出艇が出航する			][mp0021	/NS	]
#define SE_M07S130_01	SE_Y205			//＊鳥通過
#define SE_M07S130_02	SE_Y170			//＊船の音
#define SE_M07S130_03	SE_Y265			//＊鳥通過

//ラスダン小ボス演出
#define SE_S_BOSS_01	SE_Y335			//	登場エフェクト
#define SE_S_BOSS_02	SE_Y320			//＊実体化




//━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
//サブ・一般
//━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
#define SE_NAWA_HASIGO		SE_Y258		//＊縄ばしご（見張り台：漂流村／タナトス）
#define SE_WOOD_HASIGO		SE_Y247		//＊木のはしご（見張り台：漂流村／タナトス）

#define	SE_OBSTACLE_REMOVE		SE_Y250		//＊障害物撤去
#define	SE_OBSTACLE_REMOVE_02	SE_Y799		//～を撤去した！

#define	SE_MAKE_BRIDGE		SE_Y390		//吊り橋
#define	SE_MAKE_BRIDGE_2	SE_Y258

#define	SE_SHIP_01		SE_Y256		//	小船で出港：ざばぁ
#define	SE_SHIP_02		SE_Y259		//	小船で出港：オール

//みっしぃ
#define	SE_MISHY_1		SE_Y266			//＊みしし

//パロのストッパー
#define	SE_PARO_STOPPER		SE_Y248		//キルゴール追跡時のパロのストッパー用

#define	SE_DANA_STOPPER		SE_Y286		//ダーナの理力で扉を開ける

//動物ＳＥ
#define SE_COW_01		SE_Y371		//＊牛
#define SE_PIKA_01		SE_Y372		//＊ピッカード「ピキー」
#define SE_PIKA_02		SE_Y373		//＊ピッカード「ピキピキー」
#define SE_PIKA_03		SE_Y375		//＊たくましいピッカード「プキー」
#define SE_DEER_01		SE_Y376		//＊シカ：弱弱しい
#define SE_DEER_02		SE_Y374		//＊シカ：懐く

//マスターコング
#define SE_MONKEY_01		SE_Y265				//＊スロー
#define SE_MONKEY_02		SE_Y232				//＊足音
#define SE_MONKEY_03		SE_Y204				//＊着地

//
#define SE_EV_POINT		SE_MAP_SETDESTINATION	//	イベントポイント記載

#define SE_AURA		SE_Y286		//オーラ発光単発

//【沖の洞窟でのイベント戦闘】
#define SE_SUB_01	SE_Y204		//着地

//最強隠しボス
#define SE_SUB_02	SE_Y292	//ドクン
#define SE_SUB_03	SE_Y315	//メキメキ
#define SE_SUB_04	SE_Y204	//
#define SE_SUB_05	SE_Y203	//
#define SE_SUB_06	SE_Y318	//
#define SE_SUB_07	SE_Y317	//
#define SE_SUB_08	SE_Y316	//

#define SE_SUB_09	SE_Y282				//＊宝箱出現
#define SE_SUB_10	SE_Y302				//＊宝箱出現

//カーラン救出
#define SE_SUB_11	SE_Y224

//ハシビロコウ初回
#define SE_SUB_12	SE_Y311
#define SE_SUB_13	SE_Y426


//SubEV_Help_Nushi
#define SE_SUB_14	SE_ENV_RIVER_1	//宝箱釣りチュートリアル

//SubEV_B6Boss_Appeal
#define SE_SUB_20	SE_Y292		//ドクン
#define SE_SUB_21	SE_Y547		//
#define SE_SUB_22	SE_Y315		//メキメキ
#define SE_SUB_23	SE_Y322		//

#define SE_SUB_24	SE_Y218		//
#define SE_SUB_25	SE_Y313		//
#define SE_SUB_26	SE_Y318		//
#define SE_SUB_27	SE_Y464		//
#define SE_SUB_28	SE_Y203		//

#define SE_SUB_30	SE_Y313				//着地

//---------------------------------------------------------------------------------------------
//過去再訪ワープ
#define SE_GO_KAKO_1	SE_Y285		//＊水晶石と交信エフェクトループ
#define SE_GO_KAKO_2	SE_Y282		//＊ワープ時発光単発
#define SE_GO_KAKO_3	SE_Y270		//＊ホワイトアウト
#define SE_GO_KAKO_4	SE_Y268		//＊地鳴り

//---------------------------------------------------------------------------------------------
//過去編Ⅰ
//[【過去ギミック①：水路の修理】					][mp5103m/LP][SubEV_Past_01_Gimmick_A	]
#define SE_KAKO_1_01	SE_Y244
#define SE_KAKO_1_02	SE_Y286
#define SE_KAKO_1_03	SE_Y250
//フラッシュバック演出あり

//---------------------------------------------------------------------------------------------
//過去編Ⅱ
//[【過去ギミック②：鍵の話を聞く】				][mp6203m/TK][SubEV_Past_02_Gimmick	
#define SE_KAKO_2_01	SE_Y246				//
#define SE_KAKO_2_02	SE_FOOTSE_NORMAL_1	//
#define SE_KAKO_2_03	SE_Y235				//＊ステップ
#define SE_KAKO_2_04	SE_Y286				//オーラ
#define SE_KAKO_2_05	SE_Y263				//キラリ	
#define SE_KAKO_2_06	SE_FOOTSE_PUDDLE_1	//水音

//SubEV_Past_02_Fire
#define SE_KAKO_2_10	SE_Y286				//理力

//SubEV_Past_02_Quest_F
#define SE_KAKO_2_11	SE_Y294				//ギミック解除
#define SE_KAKO_2_12	SE_Y282

//SubEV_Past_02_BOSS
#define SE_KAKO_2_13	SE_Y255				//落下
#define SE_KAKO_2_14	SE_Y204				//気合い
#define SE_KAKO_2_15	SE_Y363
#define SE_KAKO_2_16	SE_Y313				//着地

//SubEV_Past_MonoLithB1
#define SE_KAKO_2_20	SE_Y286				//＊ダーナオーラ
#define SE_KAKO_2_21	SE_Y293				//＊モノリス起動
#define SE_KAKO_2_22	SE_Y295				//＊モノリス認証ＯＫ
#define SE_KAKO_2_23	SE_Y294				//＊ウインドウ閉じる
#define SE_KAKO_2_24	SE_Y293				//＊ウインドウ展開

#define SE_KAKO_2_25	SE_Y1002			//きょぽりら～ん
#define SE_KAKO_2_26	SE_Y323				//ビジョン表示

//---------------------------------------------------------------------------------------------
//過去編Ⅲ
//[【討伐イベントＡ：竜種と遭遇】					][mp6103m/EB][SubEV_Past_03_HuntA_1		]
#define SE_KAKO_3_01	SE_Y234		//＊咆哮
#define SE_KAKO_3_02	SE_Y232		//＊足音
#define SE_KAKO_3_03	SE_Y233		//＊うなり
#define SE_KAKO_3_04	SE_Y203		//＊倒れる
//戦闘SEとのダブリに注意

//[【過去ギミック③：動物を助ける】				][mp6103m/EB][SubEV_Past_03_Gimmick_A	]
#define SE_KAKO_3_05	SE_DEER_01	//＊シカ：弱弱しい
#define SE_KAKO_3_06	SE_Y338		//＊食べる
#define SE_KAKO_3_07	SE_DEER_02	//＊シカ：懐く

//SubEV_Past_BossB2
#define SE_KAKO_3_10	SE_Y255				//落下
#define SE_KAKO_3_12	SE_Y218
#define SE_KAKO_3_13	SE_Y313				//着地
#define SE_KAKO_3_14	SE_Y318				//武器振り

//SubEV_Past_MonoLithB3
#define SE_KAKO_3_20	SE_Y286				//＊ダーナオーラ
#define SE_KAKO_3_21	SE_Y293				//＊モノリス起動
#define SE_KAKO_3_22	SE_Y295				//＊モノリス認証ＯＫ
#define SE_KAKO_3_23	SE_Y294				//＊ウインドウ閉じる
#define SE_KAKO_3_24	SE_Y293				//＊ウインドウ展開

//SubEV_Past_03_HuntA_1
#define SE_KAKO_3_30	SE_Y204			//着地
#define SE_KAKO_3_31	SE_Y381			//ダーナ変身
#define SE_KAKO_3_32	SE_Y319			//ダーナ変身後オーラ

//SubEV_Past_03_HuntA_2
#define SE_KAKO_3_40	SE_Y381			//ダーナ変身解ける
#define SE_KAKO_3_41	SE_Y319			//ダーナ変身後オーラ

//---------------------------------------------------------------------------------------------
//過去編Ⅳ


//SubEV_Past_BossB3
#define SE_KAKO_4_01	SE_Y255				//落下
#define SE_KAKO_4_02	SE_Y218
#define SE_KAKO_4_03	SE_Y313				//着地
#define SE_KAKO_4_04	SE_Y318				//武器振り
#define SE_KAKO_4_05	SE_Y464				//

//SubEV_Past_04_Encount
#define SE_KAKO_4_10	SE_Y302				//攻撃あたらない
#define SE_KAKO_4_20	SE_Y381				//ダーナ変身
#define SE_KAKO_4_21	SE_Y319				//ダーナ変身後オーラ

//---------------------------------------------------------------------------------------------
//過去編Ⅴ
//[【討伐イベントＢ：竜種と遭遇】					][mp6106m /EB][SubEV_Past_05_HuntB_1	]
#define SE_KAKO_5_01	SE_Y234		//	咆哮
#define SE_KAKO_5_02	SE_Y232		//	足音
#define SE_KAKO_5_03	SE_Y233		//	うなり
#define SE_KAKO_5_04	SE_Y203		//	倒れる
//戦闘SEとのダブリに注意

//SubEV_Past_BossB4
#define SE_KAKO_5_10	SE_Y255				//落下
#define SE_KAKO_5_12	SE_Y218				//
#define SE_KAKO_5_13	SE_Y313				//着地
#define SE_KAKO_5_14	SE_Y318				//武器振り
#define SE_KAKO_5_15	SE_Y464				//

#define SE_KAKO_5_20	SE_Y352				//イオ消える
#define SE_KAKO_5_21	SE_Y351				//イオ消える
#define SE_KAKO_5_22	SE_Y286				//

//---------------------------------------------------------------------------------------------
//過去編Ⅵ
//【サブイベント：中央区を突破する】				][mp6201m1/EB][SubEV_Past_06_Breakout	]
#define SE_KAKO_6_01	SE_Y244		//＊緋色の予知
#define SE_KAKO_6_02	SE_Y292		//＊ドクン
#define SE_KAKO_6_03	SE_Y382		//＊気勢をあげる群集（ループ）
#define SE_KAKO_6_04	SE_Y378		//＊石を投げられる
#define SE_KAKO_6_05	SE_Y379		//＊ガキンと石をはじく
#define SE_KAKO_6_06	SE_Y383		//＊石飛んでくる（ループ）
#define SE_KAKO_6_07	SE_Y265		//＊
#define SE_KAKO_6_08	SE_Y229		//＊ガキンと石をはじく

//[【討伐イベントＣ：竜種と遭遇】					][mp6107m /EB][SubEV_Past_06_HuntC_1	]
#define SE_KAKO_6_10	SE_Y234		//＊咆哮
#define SE_KAKO_6_11	SE_Y221		//＊
#define SE_KAKO_6_12	SE_Y233		//＊うなり
#define SE_KAKO_6_13	SE_Y203		//＊倒れる
#define SE_KAKO_6_14	SE_Y305		//＊威嚇
#define SE_KAKO_6_15	SE_Y318		//＊
//戦闘SEとのダブリに注意

//【過去ギミック⑥：毒沼の浄化】
#define SE_KAKO_6_GIM_01	SE_Y203				//＊岩をどかす
#define SE_KAKO_6_GIM_02	SE_Y286				//＊詠唱
#define SE_KAKO_6_GIM_03	SE_OBSTACLE_REMOVE	//＊岩をどかす

//【ＬＰ：東街区から中央区へ移動する】
#define SE_KAKO_6_16		SE_FOOTSE_NORMAL_1
#define SE_KAKO_6_17		SE_Y235				//＊ステップ

//SubEV_Past_BossB5
#define SE_KAKO_6_20	SE_Y255				//落下
#define SE_KAKO_6_21	SE_Y514				//
#define SE_KAKO_6_22	SE_Y313				//着地
#define SE_KAKO_6_23	SE_Y303				//盾召喚
#define SE_KAKO_6_24	SE_Y318				//振り
#define SE_KAKO_6_25	SE_Y745				//振り

//SubEV_Past_MonoLithB5
#define SE_KAKO_6_30	SE_Y286				//

//---------------------------------------------------------------------------------------------
//過去編Ⅶ
#define SE_KAKO_7_01	SE_Y281		//	水晶石共鳴ループ
#define SE_KAKO_7_02	SE_Y282		//	共鳴音
#define SE_KAKO_7_03	SE_Y270		//
#define SE_KAKO_7_04	SE_Y580		//

#define SE_KAKO_7_05	SE_Y1003	//すごい吹雪ループ
#define SE_KAKO_7_06	SE_KAKAGE	//剣に手をかける
#define SE_KAKO_7_07	SE_Y1005	//すごい吹雪単発

#define SE_KAKO_7_08	SE_Y339		//フラバ切り替え

#define SE_KAKO_7_09	SE_Y270		//現代に戻ってくる
#define SE_KAKO_7_10	SE_Y351		//精霊が剣に宿る

#define SE_KAKO_7_11	SE_Y313		//イオオーラどーん
#define SE_KAKO_7_12	SE_Y319		//イオオーラ（ループ）
#define SE_KAKO_7_13	SE_Y218		//ハッタリ
#define SE_KAKO_7_14	SE_Y585		//バーン
#define SE_KAKO_7_15	SE_Y363		//バーン
#define SE_KAKO_7_16	SE_Y326		//咆哮
#define SE_KAKO_7_17	SE_Y270		//ホワイトアウト

#define SE_KAKO_7_20	SE_Y356				//
#define SE_KAKO_7_21	SE_Y293				//＊モノリス起動
#define SE_KAKO_7_22	SE_Y295				//＊モノリス認証ＯＫ
#define SE_KAKO_7_23	SE_Y296				//

//---------------------------------------------------------------------------------------------
//精霊救出
#define SE_SPIRIT_SAVE_01	SE_Y370			//地脈の渦（ループ：イベント中のみ）
#define SE_SPIRIT_SAVE_02	SE_Y283			//指に理力を集中（ループ）
#define SE_SPIRIT_SAVE_03	SE_Y719			//地脈の渦消える
#define SE_SPIRIT_SAVE_04	SE_Y353			//精霊が飛び出す
#define SE_SPIRIT_SAVE_05	SE_Y365			//精霊が力を授ける（ループ）
#define SE_SPIRIT_SAVE_06	SE_Y331			//理力の欠片を貰う
#define SE_SPIRIT_SAVE_07	SE_Y527			//精霊が去る

#define SE_SPIRIT_SAVE_10	SE_Y281			//
#define SE_SPIRIT_SAVE_11	SE_Y287			//

//━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
//合流・親愛・プレゼントイベント
//━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
#define SE_BONDS_UP		SE_Y389			//＊好感度アップ
#define SE_MUSICBOX		SE_Y384			//＊ダーナに渡すオルゴール
#define SE_MUSICBOX_2	SE_Y385			//＊ダーナが理力で奏でる音

#define SE_JOIN_AUSTEN_01		SE_Y219				//＊グルル
#define SE_JOIN_AUSTEN_02		SE_Y688				//＊オースティン攻撃
#define SE_JOIN_AUSTEN_03		SE_DEAD_ZAKO		//△モンスター撃破
#define SE_JOIN_AUSTEN_04		SE_MONSDEAD_DOG		//△犬断末魔
#define SE_JOIN_REJA_01			SE_PIKA_02			//＊ピッカード
#define SE_JOIN_KASHU_01		SE_Y234				//＊
#define SE_JOIN_SILVIA			SE_SETARM_1
#define SE_SINAI_DANA_01		SE_NAWA_HASIGO		//＊縄ばしご
#define SE_SINAI_SAHAD_01		SE_Y194				//＊鍋グツグツ
#define SE_SINAI_THANATOS_01	SE_Y272				//＊カップを置く

#define SE_SINAI_KASHU_01		SE_Y336				//＊風ぴゅー

#define SE_SINAI_SILVIA			SE_Y228				//剣かつぐ

//━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
//クエスト
//━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

#define SE_QS_200_01		SE_Y390		//＊工作SE
#define SE_QS_231_01		SE_Y200		//＊

#define SE_QS_310_01		SE_Y395		//	アクセサリ作成

#define SE_QS_311_01		SE_Y371				//＊カバ
#define SE_QS_311_02		SE_Y271				//＊斬る
#define SE_QS_311_03		SE_Y203				//＊倒れ
#define SE_QS_311_04		SE_DEAD_ZAKO		//	斬る重ね
#define SE_QS_311_05		SE_Y232				//＊
#define SE_QS_311_06		SE_Y394				//＊布を裂く

#define SE_QS_400_01		SE_Y265				//＊
#define SE_QS_400_02		SE_Y232				//＊
#define SE_QS_400_03		SE_Y204				//＊着地

#define SE_QS_401_01		SE_Y249		//＊ジャンプ
#define SE_QS_401_02		SE_Y396		//＊焦げる
#define SE_QS_401_03		SE_PIKA_01

#define SE_QS_501_01		SE_Y274		//＊卵を掘り起こす
#define SE_QS_501_02		SE_Y221		//＊翼竜鳴く（c510mtd）
#define SE_QS_501_03		SE_Y232		//＊着地

#define SE_QS_522_01		SE_Y286		//＊

#define SE_QS_600_01		SE_Y357		//	鍛冶

#define SE_QS_601_01		SE_Y312		//＊咆哮
#define SE_QS_601_02		SE_Y203

#define SE_QS_602_01		SE_Y398		//＊発酵樹液をかける
#define SE_QS_602_02		SE_Y256		//＊進水式
#define SE_QS_602_03		SE_Y204		//＊進水式

#define SE_QS_610_01		SE_Y263		//＊
#define SE_QS_610_02		SE_Y399		//＊ノイズ
#define SE_QS_610_03		SE_Y345		//＊立体映像
#define SE_QS_610_04		SE_Y293		//＊
#define SE_QS_610_05		SE_Y303		//＊
#define SE_QS_610_06		SE_Y294		//＊
#define SE_QS_610_07		SE_Y283		//＊


#define SE_QS_611_01		SE_Y286		//	ダーナの理力（仮）
#define SE_QS_611_02		SE_Y293		//	モノリス起動（仮）

#define SE_QS_232_01		SE_Y1000	//オオカミ遠吠え
#define SE_QS_232_02		SE_Y1001	//オオカミ足音

#define SE_QS_613_01		SE_Y245		//
#define SE_QS_613_02		SE_Y218		//
// エフェクト番号の定義ファイル

// ※プログラム内で呼び出している物のうち、エフェクトデータ側で「ヌルノード」設定にして何も出さないようにしている物については、
// 　プログラム側からは把握できない為、呼び出す必要がないエフェクトが出た場合は連絡をお願いします。




//■ インパクト
#define	IMPACT_NORMAL		0x00000000		// 通常インパクト
#define IMPACT_FLOATATK		0x00000001		// 浮かせ攻撃
#define IMPACT_BASH			0x00000002		// 少し強めの攻撃
#define IMPACT_SMASH		0x00000004		// 吹き飛ばし攻撃
#define	IMPACT_WEAK			0x00000008		// 弱攻撃（あまり吹き飛ばない）
#define IMPACT_KNOCK		0x00000010		// 転かす
#define IMPACT_FLOATATK2	0x00000020		// 高く浮かせる
#define IMPACT_FALLATK		0x00000040		// 叩き付ける攻撃
#define IMPACT_NOFLOATATK	0x00000080		// 浮力値を０にリセットする攻撃
#define IMPACT_NONE			0x00000100		// ダメージモーションしない
#define IMPACT_DROPMONEY	0x00000200		// 金落とす（エルクのスキルとか、敵盗賊とか）	（敵が使うと、金落とした上でIMPACT_SMASH）
#define IMPACT_DROPITEM		0x00000400		// アイテム落とす（エルクのスキルとか、敵盗賊とか）	（敵が使うと、アイテム（素材）落とした上でIMPACT_SMASH）
#define IMPACT_SMASH2		0x00000800		// より吹き飛ばす
#define IMPACT_PLAYERCHRATK	0x00010000		// プレイヤーキャラ特性を付加した攻撃（通常攻撃で敵が転ぶとか）
#define IMPACT_TO_PARTY		0x00100000		// 仲間対象
#define IMPACT_ADD_STRUP	0x00200000		// 状態異常　ＳＴＲアップ付加
#define IMPACT_SYSTEM		0x00400000		// システムエフェクトによるダメージ（補正受けない）


	//■ 複合（スクリプト中ではor演算子は使用不可能なので複合タイプで指定すること）
#define IMPACT_FLOATBASH	0x00000003		// 浮かせ＋少し強め
#define IMPACT_FLOATSMASH	0x00000005		// 浮かせ＋吹き飛ばし
#define IMPACT_FLOATSMASH2	0x00000801		// 浮かせ＋吹き飛ばし
#define IMPACT_FLOATWEAK	0x00000009		// その場浮かせ
#define IMPACT_FLOAT2BASH	0x00000022		// 打ち上げ＋少し強め
#define IMPACT_FLOAT2SMASH	0x00000024		// 超打ち上げ
#define IMPACT_FLOAT2SMASH2	0x00000824		// 超打ち上げ
#define IMPACT_FLOAT2WEAK	0x00000028		// その場打ち上げ
#define IMPACT_KNOCKBASH	0x00000012		// SMASHより弱めの吹き飛ばし
#define IMPACT_FALLBASH		0x00000042		// 叩き付け、少し強め
#define IMPACT_FALLSMASH	0x00000044		// 叩き付け、吹き飛ばし
#define IMPACT_FALLWEAK		0x00000048		// 叩き付け、弱
#define IMPACT_NOFLOATBASH	0x00000082		// 浮力値リセット付き少し強めの攻撃
#define IMPACT_NOFLOATSMASH	0x00000084		// 浮力値リセット付き吹き飛ばし攻撃
#define IMPACT_NOFLOATWEAK	0x00000088		// 浮力値リセット付き弱攻撃
#define IMPACT_KNOCKWEAK	0x00000018		// ほぼその場ダウン


//■ クルシェ用
#define IMPACT_HEALMAGIC	0x00100100		// マイシェラの回復魔法
#define IMPACT_STRUPATK		0x00300003		// クルシェの闘魂注入


//■ ノックバックの基本地点
#define KNOCK_EFXPOS		0x00010000		// ノックバック計算をエフェクトの場所を基準に計算する
#define KNOCK_ATARIPOS		0x00020000		// ノックバック計算をあたったキャラのあたりを基準に計算する
#define KNOCK_CHRPOS		0x00040000		// ノックバック計算をエフェクト発生者を基準に計算する
#define KNOCK_CHRPOS2		0x00080000		// ノックバック計算をエフェクト発生者を基準に計算する（進行方向に集まるように補正）
#define KNOCK_CHRPOS3		0x00100000		// ノックバック計算をエフェクト発生者の方向に向けてノックバックするようにする


//■ エフェクトフラグ複合型
#define EFXFLAG1_MAGICMISSILE	0x00000200	// 飛び道具魔法
#define EFXFLAG1_MAGICHEAL		0x00000400	// 回復魔法（必ずヒット）
#define EFXFLAG1_MAGICCURE		0x00000800	// 状態異常回復魔法
#define EFXFLAG1_MAGICSUPPORT	0x00010000	// 補助効果魔法

#define EFXFLAG1_MAGIC_H_C		0x00000C00	// 仲間に　回復＆状態異常回復魔法
#define EFXFLAG1_MAGIC_H_R_C	0x00001C00	// 仲間に　回復＆復活＆状態異常回復魔法

#define EFXFLAG1_NODMGFLASH		0x40000300	// ダメージ無し閃光＋飛び道具			(EFXFLAG1_NODAMAGE | EFXFLAG1_FLASH | EFXFLAG1_MISSILE)

#define EFXFLAG1_NODMGMISSILE	0x00000300	// ノーダメージ飛び道具
#define EFXFLAG1_NODMGPARALYZE	0x00020100	// ノーダメージ麻痺
#define EFXFLAG1_NOSAMEMISSILE	0x00000208	// 同族ヒット無視＋飛び道具

//////////////////////////////////////////////////////////////////////////////////////////////
// Ｙｓ８使用エフェクト
//		以下は使っている所が無くなれば消せる。

// ▼プログラム
#define				SYSEFX_DANA_LIGHTDMGAURA	103905		// ダーナ編・光スタイル・スタイル強化・竜氣中の周囲ダメージ効果

#define				SYSEFX_DASH2				103910		// ダッシュ：地面衝撃(4f毎)		// ▼メモ：このエフェクトを出すのをやめようという話が出ている

#define				SYSEFX_SPLASH				103930		// 水しぶき
#define				SYSEFX_LVUP					105000		// LVUPエフェクト

#define				SYSEFX_PIYOPIYO				100500		// ピヨリ中のエフェクト（15f毎）

#define				SYSEFX_WARP					105500		// ワープエフェクト

#define				COMM_EFX_014				105050		// キャラ切り替え

#define				SYSEFX_FLASH_MOVE			105120		// (■Ys4)フラッシュムーブ

#define				SYSEFX_EX_MAX				105200		// EXゲージがMAXに（使用しない場合、これを消す）

#define				SYSEFX_STUNHIT				110180		// スタン時のヒットエフェクト

#define				SYSEFX_FGFIRE				105130		// フラッシュガード中、定期的に呼び出す炎（2f毎）

	//光ダーナ凍結時追加エフェクト
#define				CON_FREEZE_DANA3EFX_INTERVAL	10		// エフェクト発生間隔
#define				SYSEFX_CON_FREEZE_DANA3		100130		// エフェクト番号


	//■ 足音対応地面を踏んだときに土煙とかのエフェクト
#define				SYSEFX_CHRFOOT_NORMAL		103000		// 土
#define				SYSEFX_CHRFOOT_BUSH			103005		// 草地
#define				SYSEFX_CHRFOOT_HARD			103010		// 硬い床
#define				SYSEFX_CHRFOOT_CARPET		103015		// じゅうたん
#define				SYSEFX_CHRFOOT_LEAF			103020		// 枯葉・枯枝
#define				SYSEFX_CHRFOOT_STRAW		103020		// わら、干し草
#define				SYSEFX_CHRFOOT_WOOD			103025		// 古い木の床
#define				SYSEFX_CHRFOOT_SAND			103030		// 砂地
#define				SYSEFX_CHRFOOT_PUDDLE		103035		// 水たまり
#define				SYSEFX_CHRFOOT_METAL		103040		// 金属
#define				SYSEFX_CHRFOOT_ICE			103050		// 氷
#define				SYSEFX_CHRFOOT_BOG			103055		// 沼
#define				SYSEFX_CHRFOOT_MAGICFLOOR	103060		// 魔法床
#define				SYSEFX_CHRFOOT_SPORE		103065		// 胞子床
#define				SYSEFX_CHRFOOT_BRIGHTMOSS	103075		// 光ゴケ
#define				SYSEFX_CHRFOOT_SNOW			103080		// 雪

	//■ 迎撃戦オブジェクト用
#define				SYSEFX_GONG_DINGDONG		82000		// 迎撃戦・銅鑼を鳴らした

	//■ ためエフェクト
#define				ADOL_TAME_EFX02				105300		// ためエフェクト２（ためＬＶ１発生）
//#define			ADOL_TAME_EFX01				110310		// ためエフェクト１（集まる玉）							//
//#define			ADOL_TAME_EFX03				105300		// ためエフェクト３（ためＬＶ２発生）					//
//#define			ADOL_TAME_EFX04				105300		// ためエフェクト４（ためＬＶＭＡＸ発生）				//
//#define			ADOL_TAME_EFX05				110315		// ためエフェクト５（ためＬＶ１常駐：一定間隔呼び出し）	//
//#define			ADOL_TAME_EFX06				110315		// ためエフェクト６（ためＬＶ２常駐：一定間隔呼び出し）	//
//#define			ADOL_TAME_EFX07				110315		// ためエフェクト７（ためＬＶ３常駐：一定間隔呼び出し）	//

	//■マップエフェクト
#define				MAPEFX_FIRE01				103960		// 炎パーティクル
#define				MAPEFX_D_PAR01				103965		// 竜力パーティクル+回復
#define				MAPEFX_D_PAR02				103964		// 竜力パーティクルのみ
#define				MAPEFX_RAIN01				103970		// 雨の波紋
#define				MAPEFX_LEAF01				103975		// 舞い散る木の葉
#define				MAPEFX_WAT01				103980		// 滝つぼ
#define				MAPEFX_BRI01				103985		// 吹雪



// ▼プログラムでもスクリプトでも使っている
#define				COMM_EFX_015				105410		// スキル発動

	//■ 回復エフェクト系
#define				SYSEFX_SYSHEAL				101000		// ワープポイントでの回復エフェクト

#define				SYSEFX_ITEM_ALLHEAL3		101020		// (仮）全体回復	LV3	// プログラムでも使用。復活回復。




// ▼プログラム以外でしか使ってない
#define				SYSEFX_CANCEL_STEP			103830		// 倒れモーションをキャンセルしてステップ発動時
#define				SYSEFX_LR_GUARD				105110		// ガードエフェクト

	// アイテム系
#define				SYSEFX_ITEM_CURE			101500		//（仮）全体状態異常回復
#define				SYSEFX_ITEM_PESTCIDE		105640		//（仮）虫駆除剤

	//■イベント
#define				SYSEFX_BASH_BLOOD			109000		// 敵を強打した時のエフェクト赤大

//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////







//////////////////////////////////////////////////////////////////////////////////////////////
// ↓Ｙｓ４
//		以下は使っている所が無くなれば消せる。

	// システム系
#define				SYSEFX_CON_STRUP		100520		// ステータス異常/STRUP	10f毎）	// 足下				// ▼メモ：現在この状態異常は使われていない（プログラム上には書かれている為消せない）。料理効果等で使用する可能性あり。
#define				SYSEFX_CON_DEFUP		100510		// ステータス異常/DEFUP	10f毎）	// 足下				// ▼メモ：現在この状態異常は使われていない（プログラム上には書かれている為消せない）。料理効果等で使用する可能性あり。
#define				SYSEFX_CON_HEAL			101510		// ステータス異常/ヒール	10f毎）	// 中心			// ▼メモ：現在この状態異常は使われていない（プログラム上には書かれている為消せない）。料理効果等で使用する可能性あり。
#define				SYSEFX_CON_SPHEAL		101520		// ステータス異常/SPヒール	10f毎）	// 中心			// ▼メモ：現在この状態異常は使われていない（プログラム上には書かれている為消せない）。料理効果等で使用する可能性あり。

#define				SYSEFX_CON_ENESTRUP		100520		// 敵ステータス異常/STRUP	10f毎）	// 足下			// ▼メモ：現在この状態異常は使われていない（プログラム上には書かれている為消せない）。料理効果等で使用する可能性あり。
#define				SYSEFX_CON_ENEDEFUP		100510		// 敵ステータス異常/DEFUP	10f毎）	// 足下			// ▼メモ：現在この状態異常は使われていない（プログラム上には書かれている為消せない）。料理効果等で使用する可能性あり。
#define				SYSEFX_CON_ENEHEAL		101510		// 敵ステータス異常/ヒール	10f毎）	// 中心			// ▼メモ：現在この状態異常は使われていない（プログラム上には書かれている為消せない）。料理効果等で使用する可能性あり。
#define				SYSEFX_CON_ENESPHEAL	101520		// 敵ステータス異常/SPヒール	10f毎）	// 中心 	// ▼メモ：現在この状態異常は使われていない（プログラム上には書かれている為消せない）。料理効果等で使用する可能性あり。

	//■ 回復エフェクト系
#define				SYSEFX_ITEM_MPGET		101520		//（仮）HPゲット（回復）							// ▼メモ：現在は存在しないアイテム入手時に動くスクリプトに書かれている。
#define				SYSEFX_ITEM_SPGET		101521		//（仮）SPゲット（回復）							// ▼メモ：現在は存在しないアイテム入手時に動くスクリプトに書かれている。
#define				SYSEFX_ITEM_EXGET		101522		//（仮）EXゲット（回復）							// ▼メモ：現在は存在しないアイテム入手時に動くスクリプトに書かれている。

	//■ 採集オブジェクト用
#define				SYSEFX_COLLECT_ROCK		103000		// 鉱石系用		// Ys4？？？						// ▼メモ：common.mtdでも使われているので、Ys4の物かどうか不明（103000はNORMAL土煙としても使用しているのでエフェクト本体はどっちにしろ消せない）



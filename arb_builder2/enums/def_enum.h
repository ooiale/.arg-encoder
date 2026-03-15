// footse
enum
{
	FA_NONE	= 0,			// 00:足音ありえない

	FA_NORMAL,				// 01:通常（土）
	FA_BUSH,				// 02:草地
	FA_HARD,				// 03:硬い床
	FA_CARPET,				// 04:じゅうたん
	FA_WITHEREDLEAF,		// 05:枯葉・枯枝
	FA_OLDWOOD,				// 06:古い木の床
	FA_SAND,				// 07:砂地
	FA_PUDDLE,				// 08:水たまり
	FA_METAL,				// 09:金属
	FA_LAVA,				// 10:溶岩
	FA_INWATER,				// 11:水中

	// Ys4追加組み
	FA_SNOW,				// 12:雪
	FA_ICE,					// 13:氷
	FA_BOG,					// 14:泥、沼地、湿地
	FA_MAGICFLOOR,			// 15:魔法的素材の床（ラスダン全域で使用）
	FA_SPORE,				// 16:胞子
	FA_STRAW,				// 17:わら、枯草、干し草
	FA_BRIGHTMOSS,			// 18:光る苔床

	// Ys8追加

	FA_MAX					// マックス
};

enum
{
	ENVSE_NONE = 0,		// 無し
	ENVSE_2DSOUND,		// ２Ｄ環境音
	ENVSE_POINTSOUND,	// 点音源
	ENVSE_RAILSOUND,	// レール音源
	ENVSE_SURFACESOUND,	// 面音源
	ENVSE_EVBOXSOUND,	// イベントボックスでサウンドを再生する
	ENVSE_EVBOXONESHOT,	// イベントボックスでワンショットサウンドを再生する
};
#ifndef _OG_DATA_H
#define _OG_DATA_H

#include "types.h"

namespace og {
namespace Screen {
enum MapPiki {
	MAPPIKI_Red    = 0,
	MAPPIKI_Yellow = 1,
	MAPPIKI_Blue   = 2,
	MAPPIKI_White  = 3,
	MAPPIKI_Purple = 4,
};

struct DataNavi {
	inline DataNavi()
	{
		mNaviLifeRatio = 1.0f;
		mFollowPikis   = 1;
		mNextThrowPiki = 2;
		mDope1Count    = 10;
		mDope0Count    = 10;
		mActiveNaviID  = 1;
	}

	inline void update(int naviIdx); // defined in Game/Navi.h to avoid include loops

	f32 mNaviLifeRatio; // _00
	u32 mFollowPikis;   // _04
	u32 mNextThrowPiki; // _08
	u32 mDope1Count;    // _0C
	u32 mDope0Count;    // _10
	u8 mActiveNaviID;   // _14
};

struct DataGame {
	inline DataGame()
	{
		mSunGaugeRatio    = 0.0f;
		mDayNum           = 0;
		mFloorNum         = 0;
		mTotalPikminCount = 1234;
		mMapPikminCount   = 50;
		_14               = false;
		mPokoCount        = 0;
	}

	f32 mSunGaugeRatio;    // _00
	u32 mDayNum;           // _04
	u32 mTotalPikminCount; // _08
	u32 mFloorNum;         // _0C
	u32 mMapPikminCount;   // _10
	u8 _14;                // _14
	uint mPokoCount;       // _18
};

struct DataMap {
	u32 mNapsackDetectorFlags;   // _00
	u32 mOnyonPikminCounts[5];   // _04, indexed by MapPiki enum
	u32 mCurrentPikminCounts[5]; // _18, indexed by MapPiki enum
	u32 mFreePikmin;             // _2C
	u32 mPokos;                  // _30
};
} // namespace Screen
} // namespace og

#endif

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
	u32 mDope1Count;    // _0C, bitter sprays
	u32 mDope0Count;    // _10, spicy sprays
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
	DataMap()
	{
		mNapsackDetectorFlags = 1;
		mOnyonPikminCounts[0] = 7654321;
		mOnyonPikminCounts[1] = 654321;
		mOnyonPikminCounts[2] = 54321;
		mOnyonPikminCounts[3] = 4321;
		mOnyonPikminCounts[4] = 321;

		mCurrentPikminCounts[0] = 10;
		mCurrentPikminCounts[1] = 20;
		mCurrentPikminCounts[2] = 30;
		mCurrentPikminCounts[3] = 40;
		mCurrentPikminCounts[4] = 50;

		mFreePikmin = 60;
		mPokos      = 70;
	}

	u32 mNapsackDetectorFlags;   // _00
	u32 mOnyonPikminCounts[5];   // _04, indexed by MapPiki enum
	u32 mCurrentPikminCounts[5]; // _18, indexed by MapPiki enum
	u32 mFreePikmin;             // _2C
	u32 mPokos;                  // _30
};

struct DataContena {
	inline DataContena()
	{
		mInOnionCount   = 100;
		mCurrField      = 1000;
		mInSquadCount   = 0;
		mMaxPikiOnField = 20;
		mInParty2       = 50;
		mOnMapCount     = 60;
		mMaxPikiCount   = 200;
		mOnyonID        = -1;
		mInTransfer     = 0;
		mExitSoundType  = 0;
		mState          = 0;
		mResult         = 0;
	}

	int mOnyonID;        // _00
	u32 mInOnionCount;   // _04
	u32 mCurrField;      // _08
	u32 mInSquadCount;   // _0C
	u32 mMaxPikiOnField; // _10
	u32 mInParty2;       // _14
	u32 mOnMapCount;     // _18
	u32 mMaxPikiCount;   // _1C
	u32 mInTransfer;     // _20
	bool mExitSoundType; // _24
	int mState;          // _28
	s16 mResult;         // _2C
};
} // namespace Screen
} // namespace og

#endif

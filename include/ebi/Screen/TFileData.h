#ifndef _EBI_SCREEN_FILESELECT_TFILEDATA_H
#define _EBI_SCREEN_FILESELECT_TFILEDATA_H

#include "ebi/Screen/TScreenBase.h"

namespace ebi {
namespace Screen {
namespace FileSelect {
struct TFileData {
	TFileData();

	bool mIsBrokenFile;   // _00
	bool mIsNewFile;      // _01
	u32 mCurrentDay;      // _04
	u32 mBluePikis;       // _08
	u32 mRedPikis;        // _0C
	u32 mYellowPikis;     // _10
	u32 mWhitePikis;      // _14
	u32 mPurplePikis;     // _18
	int mPokos;           // _1C
	u32 mTreasure;        // _20
	u32 mCaveID;          // _24
	u32 mCaveFloor;       // _28
	u32 mPlayTimeHours;   // _2C
	u32 mPlayTimeMinutes; // _30
};

} // namespace FileSelect
} // namespace Screen
} // namespace ebi

#endif

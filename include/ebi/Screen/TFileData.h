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
	u32 _04;              // _04
	u32 _08;              // _08
	u32 _0C;              // _0C
	u32 _10;              // _10
	u32 _14;              // _14
	u32 _18;              // _18
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

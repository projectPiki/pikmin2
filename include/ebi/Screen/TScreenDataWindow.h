#ifndef _EBI_SCREEN_FILESELECT_TSCREENDATAWINDOW_H
#define _EBI_SCREEN_FILESELECT_TSCREENDATAWINDOW_H

#include "ebi/Screen/TScreenBase.h"
#include "og/Screen/callbackNodes.h"

namespace ebi {
namespace Screen {
namespace FileSelect {
struct TScreenDataWindow_data {
	TScreenDataWindow_data()
	    : mScreenObj(nullptr)
	    , mIsActive(0)
	    , mPokos(0)
	    , mTreasures(0)
	    , mTreasureMax(0)
	    , mCaveID(0)
	    , mCaveFloor(0)
	{
	}

	void setArchive(JKRArchive*);
	void setData(s32, u32, u32, u32, u32, u32, u32);

	P2DScreen::Mgr* mScreenObj;                // _00
	og::Screen::CallBack_CounterRV* mCounterA; // _04
	og::Screen::CallBack_CounterRV* mCounterB; // _08
	u8 mIsActive;                              // _0C
	u32 mPokos;                                // _10
	u32 mTreasures;                            // _14
	u32 mTreasureMax;                          // _18
	u32 mPlayTimeHours;                        // _1C
	u32 mPlayTimeMinutes;                      // _20
	u32 mCaveID;                               // _24
	u32 mCaveFloor;                            // _28
};

struct TScreenDataWindow_new {
	TScreenDataWindow_new()
	{
		mScreenObj = nullptr;
		mIsActive  = 0;
	}
	void setArchive(JKRArchive*);
	void setData(s32, u64);

	P2DScreen::Mgr* mScreenObj; // _00
	bool mIsActive;             // _04
};
} // namespace FileSelect
} // namespace Screen
} // namespace ebi

#endif

#ifndef _OG_SCREEN_SCALEMGR_H
#define _OG_SCREEN_SCALEMGR_H

#include "types.h"

namespace og {
namespace Screen {
struct ScaleMgr {
	enum State { SCM_Inactive = 0, SCM_Growing, SCM_Shrinking, SCM_GrowWait };

	ScaleMgr();

	~ScaleMgr() { }

	void up();
	void down();
	void up(f32, f32, f32, f32);
	void down(f32, f32, f32);
	void setParam(f32, f32, f32);
	f32 calc();

	State mState;           // _00
	f32 mElapsedSeconds;    // _04
	f32 mScale;             // _08
	f32 mScaleChangeLevel;  // _0C
	f32 mPeriodModifier;    // _10 sin(elapsedSeconds*periodModifier).
	                        // Larger = shorter periods.
	f32 mDurationInSeconds; // _14
	f32 mWaitTimer;         // _18
};
} // namespace Screen
} // namespace og

#endif

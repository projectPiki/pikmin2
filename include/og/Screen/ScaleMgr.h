#ifndef _OG_SCREEN_SCALEMGR_H
#define _OG_SCREEN_SCALEMGR_H

#include "types.h"

namespace og {
namespace Screen {
struct ScaleMgr {
	enum State {
		SCM_Inactive  = 0,
		SCM_Up        = 1,
		SCM_Down      = 2,
		SCM_DelayedUp = 3,
	};

	ScaleMgr();

	~ScaleMgr() { }

	void up();
	void down();
	void up(f32 restoreAmp, f32 angFreq, f32 maxRestoreTime, f32 delayTime);
	void down(f32 restoreAmp, f32 angFreq, f32 maxRestoreTime);
	void setParam(f32 restoreAmp, f32 angFreq, f32 maxRestoreTime);
	f32 calc();

	// unused/inlined:
	void up(f32 delayTime);

	State mState;          // _00
	f32 mRestoreTimer;     // _04
	f32 mScale;            // _08
	f32 mRestoreAmplitude; // _0C
	f32 mAngularFreq;      // _10, i.e. sin(mRestoreTimer * mAngularFreq); larger ang freq = shorter periods
	f32 mMaxRestoreTime;   // _14, in seconds
	f32 mDelayTimer;       // _18
};
} // namespace Screen
} // namespace og

#endif

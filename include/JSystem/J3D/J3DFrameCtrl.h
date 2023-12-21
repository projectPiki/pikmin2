#ifndef _J3DFRAMECTRL_H
#define _J3DFRAMECTRL_H

#include "types.h"

struct J3DFrameCtrl {
	J3DFrameCtrl() { init(0); }

	virtual ~J3DFrameCtrl() { } // _08 (weak)

	void init(s16);
	void update();

	// _00 VTBL
	u8 mAttribute; // _04
	u8 mState;     // _05
	s16 mStart;    // _06
	s16 mEnd;      // _08
	s16 mLoop;     // _0A
	f32 mRate;     // _0C
	f32 mFrame;    // _10
};

#endif

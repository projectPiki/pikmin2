#ifndef _TINYPIKMIN_H
#define _TINYPIKMIN_H

#include "types.h"

struct TinyPikmin {
	TinyPikmin();
	void update();

	u32 mState;       // _00
	s32 mColor;       // _04
	f32 _08;          // _08
	f32 _0C;          // _0C
	f32 mPosX;        // _10
	f32 mPosY;        // _14
	f32 mTimer2;      // _18
	f32 mTimerFactor; // _1C
	f32 mTimer;       // _20
	f32 _24;          // _24
	f32 mVelX;        // _28
	f32 mVelY;        // _2C
	f32 mAngle;       // _30
};

#endif

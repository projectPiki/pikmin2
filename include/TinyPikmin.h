#ifndef _TINYPIKMIN_H
#define _TINYPIKMIN_H

#include "types.h"

// The height of the top of the nintendo logo
#define TINYPIKMIN_STAND_HEIGHT 70.0f

// Constant rate Pikmin accelerate while falling
#define TINYPIKMIN_FALL_ACCEL 0.55f

// Y position that is considered below the screen, killing the Pikmin
#define TINYPIKMIN_OFFSCREEN_Y 448.0f

struct TinyPikmin {
	// Note purple and white are swapped from the usual
	enum ColorID { Blue, Red, Yellow, White, Purple };

	enum StateID { INACTIVE, WAIT, FALLING, LANDED, SLAMMED };
	TinyPikmin();
	void update();

	void init(int, f32, f32, f32);
	void wind(f32);
	void appear();
	void disappear();
	void draw();
	void drawPikmin(f32, f32, f32, f32);

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

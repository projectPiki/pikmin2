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

	int mState;          // _00
	s32 mColor;          // _04
	f32 mUnused0;        // _08
	f32 mUnused1;        // _0C
	f32 mPositionX;      // _10
	f32 mPositionY;      // _14
	f32 mScaleAnimTimer; // _18
	f32 mTimeScale;      // _1C
	f32 mWaitTimer;      // _20
	f32 mWaitDuration;   // _24
	f32 mVelocityX;      // _28
	f32 mVelocityY;      // _2C
	f32 mAngle;          // _30
};

#endif

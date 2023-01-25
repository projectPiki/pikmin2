#ifndef _OG_SCREEN_ANGLEMGR_H
#define _OG_SCREEN_ANGLEMGR_H

#include "types.h"

namespace og {
namespace Screen {
struct AngleMgr {
	enum State { AGM_Start = 0, AGM_Chase, AGM_Finish };

	AngleMgr();
	void init(f32 startAngle, f32 interpRate, f32 scale);
	void chase(f32 target, f32 step);
	f32 calc();

	f32 mCurrentAngle; // _00, guessed name
	f32 mAngleStep;    // _04, guessed name
	f32 mTargetAngle;  // _08, guessed name
	f32 mInterpRate;   // _0C, guessed name
	f32 mScale;        // _10, guessed name
	s32 mState;        // _14
};
} // namespace Screen
} // namespace og

#endif

#ifndef _OG_SCREEN_ARROWALPHABLINK_H
#define _OG_SCREEN_ARROWALPHABLINK_H

#include "types.h"

namespace og {
namespace Screen {

/**
 * @size{0x10}
 */
struct ArrowAlphaBlink {
	inline ArrowAlphaBlink()
	{
		mTimer     = 0.0f;
		mSpeed     = 0.1f;
		mMagnitude = 0.7f;
		mStart     = 0.3f;
	}

	void setSpeed(f32 speed);
	f32 calc();

	f32 mTimer;     // _00
	f32 mSpeed;     // _04
	f32 mMagnitude; // _08
	f32 mStart;     // _0C
};
} // namespace Screen
} // namespace og

#endif

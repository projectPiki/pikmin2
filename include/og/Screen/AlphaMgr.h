#ifndef _OG_SCREEN_ALPHAMGR_H
#define _OG_SCREEN_ALPHAMGR_H

#include "types.h"

namespace og {
namespace Screen {
// Size: 0x18
struct AlphaMgr {

	enum State {
		ALPHAMGR_Disabled,
		ALPHAMGR_Fadein,
		ALPHAMGR_Fadeout,
		ALPHAMGR_Blinking,
		ALPHAMGR_BlinkingCustom // nothing seems to ever set the state to 4?
	};

	AlphaMgr();
	void setBlinkArea(f32 min, f32 max);
	void in(f32 end);
	void out(f32 end);
	void blink(f32 end);

	/// @brief Calculates alpha based on the state
	/// @return Alpha (0 - 255)
	u8 calc();

	int mState;         // _00
	f32 mCurrAlpha;     // _04
	f32 mGrowRate;      // _08
	f32 mBlinkEndAlpha; // _0C
	f32 mAlphaMin;      // _10
	f32 mAlphaMax;      // _14
};
} // namespace Screen
} // namespace og

#endif

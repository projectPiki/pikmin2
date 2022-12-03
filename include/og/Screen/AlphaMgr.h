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
		ALPHAMGR_Unused // nothing seems to ever set the state to 4?
	};

	AlphaMgr();
	void setBlinkArea(float, float);
	void in(float);
	void out(float);
	void blink(float);
	u8 calc();

	int m_state;           // _00
	float m_currAlpha;     // _04
	float m_growRate;      // _08
	float m_timerModifier; // _0C
	float m_alphaMin;      // _10
	float m_alphaMax;      // _14
};
} // namespace Screen
} // namespace og

#endif

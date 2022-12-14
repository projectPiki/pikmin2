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
	void setBlinkArea(float min, float max);
	void in(float end);
	void out(float end);
	void blink(float end);

	/// @brief Calculates alpha based on the state
	/// @return Alpha (0 - 255)
	u8 calc();

	int m_state;           // _00
	float m_currAlpha;     // _04
	float m_growRate;      // _08
	float m_blinkEndAlpha; // _0C
	float m_alphaMin;      // _10
	float m_alphaMax;      // _14
};
} // namespace Screen
} // namespace og

#endif

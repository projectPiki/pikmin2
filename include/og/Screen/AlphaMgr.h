#ifndef _OG_SCREEN_ALPHAMGR_H
#define _OG_SCREEN_ALPHAMGR_H

#include "types.h"

namespace og {
namespace Screen {
// Size: 0x18
struct AlphaMgr {
	AlphaMgr();
	void setBlinkArea(float, float);
	void in(float);
	void out(float);
	void blink(float);
	u8 calc();

	int _00;   // _00
	float _04; // _04
	float _08; // _08
	float _0C; // _0C
	float _10; // _10
	float _14; // _14
};
} // namespace Screen
} // namespace og

#endif

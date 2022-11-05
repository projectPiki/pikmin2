#ifndef _OG_SCREEN_SUNMETER_H
#define _OG_SCREEN_SUNMETER_H

#include "JSystem/J2D/J2DPane.h"
#include "P2DScreen.h"

namespace og {
namespace Screen {
struct SunMeter : public P2DScreen::Mgr_tuning {
	SunMeter();

	virtual ~SunMeter(); // _08 (weak)

	void setCallBack();

	// _00      = VTBL
	// _00-_148 = P2DScreen::Mgr_tuning
	u8 _148[0x4]; // _148, unknown
	f32 _14C;     // _14C
};
} // namespace Screen
} // namespace og

#endif

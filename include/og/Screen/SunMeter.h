#ifndef _OG_SCREEN_SUNMETER_H
#define _OG_SCREEN_SUNMETER_H

#include "JSystem/J2D/J2DPane.h"
#include "P2DScreen.h"

namespace og {
namespace Screen {

struct CallBack_SunMeter;
struct SunMeter : public P2DScreen::Mgr_tuning {
	SunMeter();

	virtual ~SunMeter() { } // _08 (weak)

	void setCallBack();

	// _00      = VTBL
	// _00-_148 = P2DScreen::Mgr_tuning
	CallBack_SunMeter* mCallBack; // _148, unknown
	f32 mCurrentTime;             // _14C, as a fraction (0 = start of day, 1 = end of day)
};
} // namespace Screen
} // namespace og

#endif

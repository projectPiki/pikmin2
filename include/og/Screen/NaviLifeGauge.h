#ifndef _OG_SCREEN_NAVILIFEGAUGE_H
#define _OG_SCREEN_NAVILIFEGAUGE_H

#include "JSystem/J2D/J2DPane.h"
#include "P2DScreen.h"
#include "og/Screen/Data.h"
#include "og/Screen/callbackNodes.h"

namespace og {
namespace Screen {
struct NaviLifeGauge : public P2DScreen::Mgr_tuning {
	inline NaviLifeGauge()
	{
		mCallBackLifeGauge = nullptr;
		mCallBackDrawAfter = nullptr;
		mDataNavi          = nullptr;
	}
	virtual ~NaviLifeGauge() { } // _08 (weak)
	virtual void update();       // _30

	void setCallBack(DataNavi*, CallBack_LifeGauge::LifeGaugeType);
	void setType(CallBack_LifeGauge::LifeGaugeType);

	// _00      = VTBL
	// _00-_148 = P2DScreen::Mgr_tuning
	CallBack_LifeGauge* mCallBackLifeGauge; // _148
	CallBack_DrawAfter* mCallBackDrawAfter; // _14C
	DataNavi* mDataNavi;                    // _150
	u8 _154[0x4];                           // _154, unknown
};
} // namespace Screen
} // namespace og

#endif

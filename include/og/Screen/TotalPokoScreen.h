#ifndef _OG_SCREEN_TOTALPOKOSCREEN_H
#define _OG_SCREEN_TOTALPOKOSCREEN_H

#include "JSystem/J2D/J2DPane.h"
#include "P2DScreen.h"

namespace og {
namespace Screen {
struct CallBack_CounterRV;
struct ScaleMgr;

struct TotalPokoScreen : public P2DScreen::Mgr_tuning {
	TotalPokoScreen();

	virtual ~TotalPokoScreen() { }                                                   // _08 (weak)
	virtual void update();                                                           // _30
	virtual void setCallBack(JKRArchive* arc, f32 x, f32 y, f32 xScale, f32 yScale); // _A0

	void showTotalPoko();
	void setTotalPoko(u32);
	void closeTotalPoko();
	void hideTotalPoko();

	// _00      = VTBL
	// _00-_148 = P2DScreen::Mgr_tuning
	u32 mCurrentPokoCount;                  // _148
	u32 mPreviousPokoCount;                 // _14C
	u32 mDisplayPokoCount;                  // _150
	bool mIsOpen;                           // _154
	CallBack_CounterRV* mCallBackCounterRV; // _158
	J2DPane* mPane;                         // _15C
	f32 mUnusedVal;                         // _160
	Vector2f mStandardPos;                  // _164
	Vector2f mCurrPos;                      // _16C
	f32 mTimer;                             // _174
	bool mNeedAdd;                          // _178
	ScaleMgr* mScaleMgr;                    // _17C
};
} // namespace Screen
} // namespace og

#endif

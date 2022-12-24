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

	virtual ~TotalPokoScreen() { }                             // _08 (weak)
	virtual void update();                                     // _30
	virtual void setCallBack(JKRArchive*, f32, f32, f32, f32); // _A0

	void showTotalPoko();
	void setTotalPoko(u32);
	void closeTotalPoko();
	void hideTotalPoko();

	// _00      = VTBL
	// _00-_148 = P2DScreen::Mgr_tuning
	u32 m_currentPokoCount;                  // _148
	u32 m_previousPokoCount;                 // _14C
	u32 m_displayPokoCount;                  // _150
	bool m_isOpen;                           // _154
	CallBack_CounterRV* m_callBackCounterRV; // _158
	J2DPane* m_pane;                         // _15C
	f32 _160;                                // _160, unused?
	Vector2f m_standardPos;                  // _164
	Vector2f m_currPos;                      // _16C
	f32 m_timer;                             // _174
	bool m_needAdd;                          // _178
	ScaleMgr* m_scaleMgr;                    // _17C
};
} // namespace Screen
} // namespace og

#endif

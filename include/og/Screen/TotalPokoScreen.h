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
	u32 _150;                                // _150
	bool m_isOpen;                           // _154
	u8 _155;                                 // _155
	u8 _156;                                 // _156
	u8 _157;                                 // _157
	CallBack_CounterRV* m_callBackCounterRV; // _158
	J2DPane* m_pane;                         // _15C
	f32 _160;                                // _160
	f32 _164;                                // _164
	f32 _168;                                // _168
	f32 _16C;                                // _16C
	f32 _170;                                // _170
	f32 _174;                                // _174
	u8 _178;                                 // _178
	u8 _179;                                 // _179
	u8 _17A;                                 // _17A
	u8 _17B;                                 // _17B
	ScaleMgr* m_scaleMgr;                    // _17C
};
} // namespace Screen
} // namespace og

#endif

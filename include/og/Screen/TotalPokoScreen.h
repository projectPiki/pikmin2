#ifndef _OG_SCREEN_TOTALPOKOSCREEN_H
#define _OG_SCREEN_TOTALPOKOSCREEN_H

#include "JSystem/J2D/J2DPane.h"
#include "P2DScreen.h"

namespace og {
namespace Screen {
struct TotalPokoScreen : public P2DScreen::Mgr_tuning {
	virtual ~TotalPokoScreen() { }                                     // _08 (weak)
	virtual void update();                                             // _30
	virtual void setCallBack(JKRArchive*, float, float, float, float); // _A0

	TotalPokoScreen();
	void showTotalPoko();
	void setTotalPoko(unsigned long);
	void closeTotalPoko();
	void hideTotalPoko();

	u32 m_currentPokoCount;                  // _148
	u32 m_previousPokoCount;                 // _14C
	u32 _150;                                // _150
	bool m_isOpen;                           // _154
	u8 _155;                                 // _155
	u8 _156;                                 // _156
	u8 _157;                                 // _157
	CallBack_CounterRV* m_callBackCounterRV; // _158
	J2DPane* m_pane;                         // _15C
	float _160;
	float _164;
	float _168;
	float _16C;
	float _170;
	float _174;
	u8 _178;
	u8 _179;
	u8 _17A;
	u8 _17B;
	ScaleMgr* m_scaleMgr; // _17C
};
} // namespace Screen
} // namespace og

#endif

#ifndef _OG_SCREEN_CONTENACOUNTER_H
#define _OG_SCREEN_CONTENACOUNTER_H

#include "JSystem/J2D/J2DPane.h"
#include "P2DScreen.h"

namespace og {
namespace Screen {
struct DispMemberContena;
struct CallBack_CounterRV;

struct ContenaCounter : public P2DScreen::Mgr_tuning {
	ContenaCounter(DispMemberContena*);

	virtual ~ContenaCounter() { } // _08 (weak)

	void setblo(char*, JKRArchive*);

	// _00      = VTBL
	// _00-_148 = P2DScreen::Mgr_tuning
	DispMemberContena* m_contena; // _148
	CallBack_CounterRV* _14C;     // _14C
	CallBack_CounterRV* _150;     // _150
	CallBack_CounterRV* _154;     // _154
	CallBack_CounterRV* _158;     // _158
	u8 _15C[0x8];                 // _15C, unknown
	u32* _164;                    // _164, ptr to m_contena->_0C
	u32* _168;                    // _168, ptr to m_contena->_28
	u32* _16C;                    // _16C, ptr to m_contena->_14
	u32* _170;                    // _170, ptr to m_contena->_20
};
} // namespace Screen
} // namespace og

#endif

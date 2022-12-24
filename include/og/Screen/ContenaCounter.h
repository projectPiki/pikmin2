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

	void setblo(char* filename, JKRArchive* arc);

	// _00      = VTBL
	// _00-_148 = P2DScreen::Mgr_tuning
	DispMemberContena* m_disp;      // _148
	CallBack_CounterRV* m_counter1; // _14C in onion
	CallBack_CounterRV* m_counter2; // _150
	CallBack_CounterRV* m_counter3; // _154
	CallBack_CounterRV* m_counter4; // _158
	u8 _15C[0x8];                   // _15C, unknown
	u32* m_inOnion;                 // _164, pikmin in the onion
	u32* m_inTransfer;              // _168, pikmin involved in transfer
	u32* m_newCount;                // _16C, new number of this pikmin type on field
	u32* m_onField;                 // _170, total pikmin on field
};
} // namespace Screen
} // namespace og

#endif

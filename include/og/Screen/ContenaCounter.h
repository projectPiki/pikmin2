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
	DispMemberContena* m_contena;         // _148
	CallBack_CounterRV* m_inOnionCounter; // _14C
	CallBack_CounterRV* _150;             // _150
	CallBack_CounterRV* m_inSquadCounter; // _154
	CallBack_CounterRV* m_onMapCounter;   // _158
	u8 _15C[0x8];                         // _15C, unknown
	u32* m_inOnionCount;                  // _164, ptr to m_contena->_0C
	u32* _168;                            // _168, ptr to m_contena->_28
	u32* m_inSquadCount;                  // _16C, ptr to m_contena->_14
	u32* m_onMapCount;                    // _170, ptr to m_contena->_20
};
} // namespace Screen
} // namespace og

#endif

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
	DispMemberContena* mDisp;               // _148
	CallBack_CounterRV* mInOnionCounter;    // _14C in onion
	CallBack_CounterRV* mInTransferCounter; // _150
	CallBack_CounterRV* mInSquadCounter;    // _154
	CallBack_CounterRV* mOnFieldCounter;    // _158
	u8 _15C[0x8];                           // _15C, unknown
	u32* mInOnion;                          // _164, pikmin in the onion
	u32* mInTransfer;                       // _168, pikmin involved in transfer
	u32* mInSquad;                          // _16C, new number of this pikmin type in squad
	u32* mOnField;                          // _170, new number of total pikmin on field
};
} // namespace Screen
} // namespace og

#endif

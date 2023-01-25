#ifndef _OG_SCREEN_MAPCOUNTER_H
#define _OG_SCREEN_MAPCOUNTER_H

#include "JSystem/J2D/J2DPane.h"
#include "P2DScreen.h"
#include "og/Screen/Data.h"

namespace og {
namespace Screen {
struct MapCounter : public P2DScreen::Mgr_tuning {
	MapCounter(DataMap*);

	virtual ~MapCounter() { } // _08 (weak)

	void dispRed(bool);
	void dispYellow(bool);
	void dispBlue(bool);
	void dispWhite(bool);
	void dispBlack(bool);
	void dispFree(bool);
	void setCallBack(JKRArchive*);

	// _00      = VTBL
	// _00-_148 = P2DScreen::Mgr_tuning
	DataMap* mDataMap;         // _148
	J2DPane* mPaneRPikiOnyon;  // _14C, reds in onyon
	J2DPane* mPaneYPikiOnyon;  // _150, yellows in onyon
	J2DPane* mPaneBPikiOnyon;  // _154, blues in onyon
	J2DPane* mPaneWPikiShip;   // _158, whites in ship
	J2DPane* mPanePPikiShip;   // _15C, purples in ship
	J2DPane* mPaneRPikiLeader; // _160, reds with leader
	J2DPane* mPaneYPikiLeader; // _164, yellows with leader
	J2DPane* mPaneBPikiLeader; // _168, blues with leader
	J2DPane* mPaneWPikiLeader; // _16C, whites with leader
	J2DPane* mPanePPikiLeader; // _170, purples with leader
	J2DPane* mPaneFreePiki;    // _174, free pikmin
	u32* mOnyonRedPikmin;      // _178
	u32* mOnyonYellowPikmin;   // _17C
	u32* mOnyonBluePikmin;     // _180
	u32* mShipWhitePikmin;     // _184
	u32* mShipPurplePikmin;    // _188
	u32* mLeaderRedPikmin;     // _18C
	u32* mLeaderYellowPikmin;  // _190
	u32* mLeaderBluePikmin;    // _194
	u32* mLeaderWhitePikmin;   // _198
	u32* mLeaderPurplePikmin;  // _19C
	u32* mFreePikmin;          // _1A0
	u32* mPokos;               // _1A4
};
} // namespace Screen
} // namespace og

#endif

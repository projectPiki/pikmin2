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
	DataMap* m_dataMap;         // _148
	J2DPane* m_paneRPikiOnyon;  // _14C, reds in onyon
	J2DPane* m_paneYPikiOnyon;  // _150, yellows in onyon
	J2DPane* m_paneBPikiOnyon;  // _154, blues in onyon
	J2DPane* m_paneWPikiShip;   // _158, whites in ship
	J2DPane* m_panePPikiShip;   // _15C, purples in ship
	J2DPane* m_paneRPikiLeader; // _160, reds with leader
	J2DPane* m_paneYPikiLeader; // _164, yellows with leader
	J2DPane* m_paneBPikiLeader; // _168, blues with leader
	J2DPane* m_paneWPikiLeader; // _16C, whites with leader
	J2DPane* m_panePPikiLeader; // _170, purples with leader
	J2DPane* m_paneFreePiki;    // _174, free pikmin
	u32* m_onyonRedPikmin;      // _178
	u32* m_onyonYellowPikmin;   // _17C
	u32* m_onyonBluePikmin;     // _180
	u32* m_shipWhitePikmin;     // _184
	u32* m_shipPurplePikmin;    // _188
	u32* m_leaderRedPikmin;     // _18C
	u32* m_leaderYellowPikmin;  // _190
	u32* m_leaderBluePikmin;    // _194
	u32* m_leaderWhitePikmin;   // _198
	u32* m_leaderPurplePikmin;  // _19C
	u32* m_freePikmin;          // _1A0
	u32* m_pokos;               // _1A4
};
} // namespace Screen
} // namespace og

#endif

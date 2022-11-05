#ifndef _OG_SCREEN_MAPCOUNTER_H
#define _OG_SCREEN_MAPCOUNTER_H

#include "JSystem/J2D/J2DPane.h"
#include "P2DScreen.h"
#include "og/Screen/Data.h"

namespace og {
namespace Screen {
struct MapCounter : public P2DScreen::Mgr_tuning {
	MapCounter(DataMap*);

	virtual ~MapCounter(); // _08 (weak)

	void dispRed(bool);
	void dispYellow(bool);
	void dispBlue(bool);
	void dispWhite(bool);
	void dispBlack(bool);
	void dispFree(bool);
	void setCallBack(JKRArchive*);

	// _00      = VTBL
	// _00-_148 = P2DScreen::Mgr_tuning
	int* m_napsackDetectorFlags;  // _148, is this a ptr?
	J2DPane* m_redPikminPane1;    // _14C
	J2DPane* m_yellowPikminPane1; // _150
	J2DPane* m_bluePikminPane1;   // _154
	J2DPane* m_whitePikminPane1;  // _158
	J2DPane* m_purplePikminPane1; // _15C
	J2DPane* m_redPikminPane2;    // _160
	J2DPane* m_yellowPikminPane2; // _164
	J2DPane* m_bluePikminPane2;   // _168
	J2DPane* m_whitePikminPane2;  // _16C
	J2DPane* m_purplePikminPane2; // _170
	J2DPane* m_freePikminPane;    // _174
	int* m_totalRedPikmin;        // _178, is this a ptr?
	int* m_totalYellowPikmin;     // _17C, is this a ptr?
	int* m_totalBluePikmin;       // _180, is this a ptr?
	int* m_totalWhitePikmin;      // _184, is this a ptr?
	int* m_totalPurplePikmin;     // _188, is this a ptr?
	uint* m_currRedPikmin;        // _18C, is this a ptr?
	uint* m_currYellowPikmin;     // _190, is this a ptr?
	uint* m_currBluePikmin;       // _194, is this a ptr?
	uint* m_currWhitePikmin;      // _198, is this a ptr?
	uint* m_currPurplePikmin;     // _19C, is this a ptr?
	uint* _1A0;                   // _1A0, something to do with alive pikmin, ptr?
	uint* m_debtRemaining;        // _1A4, is this a ptr?
};
} // namespace Screen
} // namespace og

#endif

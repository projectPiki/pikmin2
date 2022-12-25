#ifndef _EBI_TYESNOCURSOR_H
#define _EBI_TYESNOCURSOR_H

#include "efx2d/T2DCursor.h"

struct J2DPane;

namespace ebi {
struct TYesNoCursor : public efx2d::T2DCursor {
	void update();

	// _00     = VTBL
	// _00-_1C = T2DCursor
	f32 m_posX; // _1C
	f32 m_posY; // _20
	f32 _24;
	f32 m_timer;        // _28
	bool m_leftOrRight; // _2C
	J2DPane* m_pane1;   // _30
	J2DPane* m_pane2;   // _34
};
} // namespace ebi

#endif

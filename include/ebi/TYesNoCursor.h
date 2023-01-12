#ifndef _EBI_TYESNOCURSOR_H
#define _EBI_TYESNOCURSOR_H

#include "efx2d/T2DCursor.h"

struct J2DPane;

namespace ebi {
struct TYesNoCursor : public efx2d::T2DCursor {
	TYesNoCursor()
	    : T2DCursor(&m_pos)
	{
		m_pane1 = nullptr;
		m_pane2 = nullptr;
	}

	void update();

	inline void setPanes(J2DPane* pane1, J2DPane* pane2)
	{
		m_pane1 = pane1;
		m_pane2 = pane2;
	}

	// _00     = VTBL
	// _00-_1C = T2DCursor
	Vector2f m_pos;   // _1C
	f32 m_speed;      // _24
	f32 m_timer;      // _28
	bool m_selected;  // _2C
	J2DPane* m_pane1; // _30
	J2DPane* m_pane2; // _34
};
} // namespace ebi

#endif

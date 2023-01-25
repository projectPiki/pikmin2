#ifndef _EBI_TYESNOCURSOR_H
#define _EBI_TYESNOCURSOR_H

#include "efx2d/T2DCursor.h"

struct J2DPane;

namespace ebi {
struct TYesNoCursor : public efx2d::T2DCursor {
	TYesNoCursor()
	    : T2DCursor(&mPos)
	{
		mPane1 = nullptr;
		mPane2 = nullptr;
	}

	void update();

	inline void setPanes(J2DPane* pane1, J2DPane* pane2)
	{
		mPane1 = pane1;
		mPane2 = pane2;
	}

	// _00     = VTBL
	// _00-_1C = T2DCursor
	Vector2f mPos;   // _1C
	f32 mSpeed;      // _24
	f32 mTimer;      // _28
	bool mSelected;  // _2C
	J2DPane* mPane1; // _30
	J2DPane* mPane2; // _34
};
} // namespace ebi

#endif

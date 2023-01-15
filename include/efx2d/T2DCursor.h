#ifndef _EFX2D_T2DCURSOR_H
#define _EFX2D_T2DCURSOR_H

#include "types.h"
#include "efx2d/TChasePos.h"

namespace efx2d {
struct T2DCursor : public TChasePos {
	T2DCursor(Vector2f* pos)
	    : TChasePos(PID_2DCursor, pos)
	{
		m_scale = 1.0f;
	}

	virtual bool create(Arg*); // _08
	virtual ~T2DCursor();      // _34 (weak)

	// _00     = VTBL
	// _00-_18 = TChasePos
	f32 m_scale; // _18
};
} // namespace efx2d

#endif

#ifndef _EFX2D_T2DCHALDIVE_H
#define _EFX2D_T2DCHALDIVE_H

#include "types.h"
#include "efx2d/TSimple.h"
#include "efx2d/TForever.h"

namespace efx2d {
struct T2DChalDive : public TForever {
	T2DChalDive()
	    : TForever(PID_ChalDive)
	{
	}

	virtual ~T2DChalDive() { } // _34 (weak)

	// _00     = VTBL
	// _00-_14 = TForever
};

struct T2DChalDiveEnd : public TSimple1 {
	inline T2DChalDiveEnd()
	    : TSimple1(PID_ChalDiveEnd)
	{
	}

	// _00     = VTBL
	// _00-_10 = TSimple1
};
} // namespace efx2d

#endif

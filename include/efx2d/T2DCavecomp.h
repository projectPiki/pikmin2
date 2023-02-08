#ifndef _EFX2D_T2DCAVECOMP_H
#define _EFX2D_T2DCAVECOMP_H

#include "types.h"
#include "efx2d/TSimple.h"
#include "efx2d/TForever.h"

namespace efx2d {
struct T2DCavecomp : public TSimple2 {
	inline T2DCavecomp()
	    : TSimple2(PID_Cavecomp_1, PID_Cavecomp_2)
	{
	}

	// _00     = VTBL
	// _00-_14 = TSimple2
};

struct T2DCavecompLoop : public TForever {
	inline T2DCavecompLoop()
	    : TForever(PID_Cavecomp_Loop)
	{
	}

	virtual ~T2DCavecompLoop() { } // _34 (weak)

	// _00     = VTBL
	// _00-_14 = TForever
};
} // namespace efx2d

#endif

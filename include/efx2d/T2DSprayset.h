#ifndef _EFX2D_T2DSPRAYSET_H
#define _EFX2D_T2DSPRAYSET_H

#include "types.h"
#include "efx2d/TSimple.h"

namespace efx2d {
struct T2DSprayset : public TSimple2 {
	inline T2DSprayset()
	    : TSimple2(PID_SpraySet_1, PID_SpraySet_2)
	{
	}

	// _00     = VTBL
	// _00-_14 = TSimple2
};

struct T2DSprayset_forVS : public TSimple2 {
	inline T2DSprayset_forVS()
	    : TSimple2(PID_SpraySet_1, PID_SpraySet_2)
	{
	}

	virtual bool create(Arg*); // _08

	// _00     = VTBL
	// _00-_14 = TSimple2
};
} // namespace efx2d

#endif

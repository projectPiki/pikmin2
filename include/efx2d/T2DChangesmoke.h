#ifndef _EFX2D_T2DCHANGESMOKE_H
#define _EFX2D_T2DCHANGESMOKE_H

#include "types.h"
#include "efx2d/TSimple.h"

namespace efx2d {
struct T2DChangesmoke : public TSimple1 {
	inline T2DChangesmoke()
	    : TSimple1(PID_Changesmoke)
	{
	}

	// _00     = VTBL
	// _00-_10 = TSimple1
};
} // namespace efx2d

#endif

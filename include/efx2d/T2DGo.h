#ifndef _EFX2D_T2DGO_H
#define _EFX2D_T2DGO_H

#include "types.h"
#include "efx2d/TSimple.h"

namespace efx2d {
struct T2DGoBatl : public TSimple3 {
	inline T2DGoBatl()
	    : TSimple3(PID_GoBatl_1, PID_GoBatl_2, PID_GoBatl_3)
	{
	}

	// _00     = VTBL
	// _00-_1C = TSimple3
};

struct T2DGoChal : public TSimple2 {
	inline T2DGoChal()
	    : TSimple2(PID_GoChal_1, PID_GoChal_2)
	{
	}

	// _00     = VTBL
	// _00-_14 = TSimple2
};
} // namespace efx2d

#endif

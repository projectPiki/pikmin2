#ifndef _EFX_TWEEDPULL_H
#define _EFX_TWEEDPULL_H

#include "efx/TSimple.h"

namespace efx {
struct TWeedPull : public TSimple3 {
	inline TWeedPull()
	    : TSimple3(PID_WeedPull, PID_PkAp_1, PID_PkAp_2)
	{
	}

	// _00     = VTBL
	// _00-_18 = TSimple3
};
} // namespace efx

#endif

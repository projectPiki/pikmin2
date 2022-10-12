#ifndef _EFX_TWATAGE_H
#define _EFX_TWATAGE_H

#include "efx/TSimple.h"

namespace efx {
struct TWatage : public TSimple1 {
	inline TWatage()
	    : TSimple1(PID_Watage)
	{
	}

	// _00     = VTBL
	// _00-_0C = TSimple1
};
} // namespace efx

#endif

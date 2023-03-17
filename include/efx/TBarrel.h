#ifndef _EFX_TBARREL_H
#define _EFX_TBARREL_H

#include "efx/TSimple.h"

namespace efx {
struct TBarrelDead : public TSimple3 {
	inline TBarrelDead()
	    : TSimple3(PID_BarrelDead_1, PID_BarrelDead_2, PID_BarrelDead_3)
	{
	}

	// _00      = VTBL
	// _00-_18  = TSimple3
};
} // namespace efx

#endif

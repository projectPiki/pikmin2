#ifndef _EFX_THIBAFIRE_H
#define _EFX_THIBAFIRE_H

#include "efx/TForever.h"

namespace efx {
struct THibaFire : public TForever4 {
	inline THibaFire()
	    : TForever4(0xAB, 0xAC, 0xAD, 0xAE)
	{
	}

	void setRateLOD(int);

	// _00      = VTBL
	// _00-_44  = TForever4
};
} // namespace efx

#endif

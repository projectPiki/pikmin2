#ifndef _EFX_WARPZONE_H
#define _EFX_WARPZONE_H

#include "efx/TForever.h"

namespace efx {
struct WarpZone : public TForever4 {
	inline WarpZone()
	    : TForever4(0xAF, 0xB0, 0xB1, 0xB2)
	{
	}

	void setRateLOD(int, bool);

	// _00		= VTBL
	// _00-_44	= TForever4
};

} // namespace efx

#endif

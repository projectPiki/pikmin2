#ifndef _EFX_WARPZONE_H
#define _EFX_WARPZONE_H

#include "efx/TForever.h"

namespace efx {
struct WarpZone : public TForever4 {
	inline WarpZone()
	    : TForever4(PID_WarpZone_1, PID_WarpZone_2, PID_WarpZone_3, PID_WarpZone_4)
	{
	}

	void setRateLOD(int, bool);

	// _00		= VTBL
	// _00-_44	= TForever4
};

} // namespace efx

#endif

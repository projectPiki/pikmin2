#ifndef _EFX_THANACHO_H
#define _EFX_THANACHO_H

#include "efx/TChaseMtx.h"

namespace efx {
struct THanachoN : public TChaseMtx {
	inline THanachoN()
	    : TChaseMtx(PID_HanachoN, nullptr)
	{
	}

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};

struct THanachoY : public TChaseMtx {
	inline THanachoY()
	    : TChaseMtx(PID_HanachoY, nullptr)
	{
	}

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};
} // namespace efx

#endif

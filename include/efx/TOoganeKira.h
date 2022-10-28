#ifndef _EFX_TOOGANEKIRA_H
#define _EFX_TOOGANEKIRA_H

#include "efx/TChaseMtx.h"

namespace efx {
struct TOoganeKira : public TChaseMtx {
	inline TOoganeKira()
	    : TChaseMtx(PID_OoganeKira, nullptr)
	{
	}

	virtual ~TOoganeKira() {}; // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChaseMtx
};
} // namespace efx

#endif

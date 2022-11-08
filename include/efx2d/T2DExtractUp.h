#ifndef _EFX2D_T2DEXTRACTUP_H
#define _EFX2D_T2DEXTRACTUP_H

#include "types.h"
#include "efx2d/TSimple.h"

namespace efx2d {
struct T2DExtractUp : public TSimple1 {
	inline T2DExtractUp()
	    : TSimple1(PID_ExtractUp)
	{
	}

	// _00     = VTBL
	// _00-_10 = TSimple1
};
} // namespace efx2d

#endif

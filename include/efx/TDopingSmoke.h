#ifndef _EFX_TDOPINGSMOKE_H
#define _EFX_TDOPINGSMOKE_H

#include "efx/TSimple.h"

namespace efx {
struct TDopingSmoke : public TSimple1 {
	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_0C  = TSimple1
};
} // namespace efx

#endif

#ifndef _EFX_TBRIDGE_H
#define _EFX_TBRIDGE_H

#include "efx/TSimple.h"
#include "efx/TSimpleMtx.h"

namespace efx {
struct TBridgeAttack : public TSimple1 {
	// _00      = VTBL
	// _00-_0C  = TSimple1
};

struct TBridgeSet : public TSimpleMtx1 {
	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};
} // namespace efx
#endif

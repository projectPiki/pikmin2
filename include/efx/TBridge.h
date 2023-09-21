#ifndef _EFX_TBRIDGE_H
#define _EFX_TBRIDGE_H

#include "efx/TSimple.h"
#include "efx/TSimpleMtx.h"

namespace efx {
struct TBridgeAttack : public TSimple1 {
	TBridgeAttack()
	    : TSimple1(PID_BridgeAttack)
	{
	}
	// _00      = VTBL
	// _00-_0C  = TSimple1
};

struct TBridgeSet : public TSimpleMtx1 {
	TBridgeSet(Matrixf* mtx)
	    : TSimpleMtx1(mtx, PID_BridgeSet)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};
} // namespace efx
#endif

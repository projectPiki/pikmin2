#ifndef _EFX_TSTONEATTACK_H
#define _EFX_TSTONEATTACK_H

#include "efx/TSimple.h"

namespace efx {
struct TStoneAttack : public TSimple1 {
	inline TStoneAttack()
	    : TSimple1(PID_StoneAttack)
	{
	}

	// _00     = VTBL
	// _00-_0C = TSimple1
};
} // namespace efx

#endif

#ifndef _EFX_TMIUATTACK_H
#define _EFX_TMIUATTACK_H

#include "efx/TSimple.h"

namespace efx {
struct TMiuAttack : public TSimple2 {
	inline TMiuAttack()
	    : TSimple2(PID_MiuAttack_1, PID_MiuAttack_2)
	{
	}

	// _00     = VTBL
	// _00-_10 = TSimple2
};
} // namespace efx

#endif

#ifndef _EFX_TPIKU_H
#define _EFX_TPIKU_H

#include "efx/TSimple.h"

namespace efx {
struct TPikuBomb : public TSimple1 {
	inline TPikuBomb()
	    : TSimple1(PID_PikuBomb)
	{
	}

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TPikuDead : public TSimple1 {
	inline TPikuDead()
	    : TSimple1(PID_PikuDead)
	{
	}

	// _00     = VTBL
	// _00-_0C = TSimple1
};
} // namespace efx

#endif

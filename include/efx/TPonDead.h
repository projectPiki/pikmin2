#ifndef _EFX_TPONDEAD_H
#define _EFX_TPONDEAD_H

#include "efx/TSimple.h"

namespace efx {
struct TPonDead : public TSimple1 {
	inline TPonDead()
	    : TSimple1(PID_PonDead)
	{
	}

	// _00     = VTBL
	// _00-_0C = TSimple1
};
} // namespace efx

#endif

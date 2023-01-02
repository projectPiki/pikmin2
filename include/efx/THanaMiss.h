#ifndef _EFX_THANAMISS_H
#define _EFX_THANAMISS_H

#include "efx/TSimpleMtx.h"

namespace efx {
struct THanaMiss : public TSimpleMtx2 {
	THanaMiss(Matrixf* mtx)
	    : TSimpleMtx2(mtx, PID_HanaMiss_1, PID_HanaMiss_2)
	{
	}
	// _00      = VTBL
	// _00-_14  = TSimpleMtx2
};
} // namespace efx

#endif

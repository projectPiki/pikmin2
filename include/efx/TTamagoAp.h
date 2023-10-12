#ifndef _EFX_TTAMAGOAP_H
#define _EFX_TTAMAGOAP_H

#include "efx/TSimpleMtx.h"

namespace efx {
struct TTamagoAp : public TSimpleMtx2 {
	inline TTamagoAp(Matrixf* mtx)
	    : TSimpleMtx2(mtx, PID_TamagoAp_1, PID_TamagoAp_2)
	{
	}

	// _00     = VTBL
	// _00-_14 = TSimpleMtx2
};
} // namespace efx

#endif

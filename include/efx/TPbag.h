#ifndef _EFX_TPBAG_H
#define _EFX_TPBAG_H

#include "efx/TSimpleMtx.h"

namespace efx {
struct TPbagDown : public TSimpleMtx3 {
	inline TPbagDown(Matrixf* mtx)
	    : TSimpleMtx3(mtx, PID_PbagDown_1, PID_PbagDown_2, PID_PbagDown_3)
	{
	}

	// _00     = VTBL
	// _00-_1C = TSimpleMtx3
};

struct TPbagOn : public TSimpleMtx2 {
	inline TPbagOn(Matrixf* mtx)
	    : TSimpleMtx2(mtx, PID_PbagOn_1, PID_PbagOn_2)
	{
	}

	// _00     = VTBL
	// _00-_14 = TSimpleMtx2
};
} // namespace efx

#endif

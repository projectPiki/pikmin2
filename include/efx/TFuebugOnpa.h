#ifndef _EFX_TFUEBUGONPA_H
#define _EFX_TFUEBUGONPA_H

#include "efx/TChasePos.h"

namespace efx {
struct TFuebugOnpa : public TChasePos {
	inline TFuebugOnpa()
	    : TChasePos(PID_FueBugOnpa)
	{
	}

	virtual ~TFuebugOnpa() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};
} // namespace efx

#endif

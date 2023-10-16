#ifndef _EFX_TLASTMOMIJI_H
#define _EFX_TLASTMOMIJI_H

#include "efx/TChasePos.h"

namespace efx {
struct TLastMomiji : public TChasePos {
	inline TLastMomiji()
	    : TChasePos(PID_LastMomiji, nullptr)
	{
	}

	virtual ~TLastMomiji() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};
} // namespace efx

#endif

#ifndef _EFX_TFORESTSAKURA_H
#define _EFX_TFORESTSAKURA_H

#include "efx/TChasePos.h"

namespace efx {
struct TForestSakura : public TChasePos {
	inline TForestSakura()
	    : TChasePos(PID_ForestSakura, nullptr)
	{
	}

	virtual ~TForestSakura() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};
} // namespace efx

#endif

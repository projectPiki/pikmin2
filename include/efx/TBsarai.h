#ifndef _EFX_TBSARAI_H
#define _EFX_TBSARAI_H

#include "efx/TSimple.h"
#include "efx/TChaseMtx.h"

namespace efx {
struct TBsaraiDead : public TSimple2 {
	inline TBsaraiDead()
	    : TSimple2(PID_BSaraiDead_1, PID_BSaraiDead_2)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimple2
};

struct TBsaraiSupli : public TChaseMtx {
	inline TBsaraiSupli()
	    : TChaseMtx(PID_BSaraiSupli, nullptr)
	{
	}

	virtual ~TBsaraiSupli() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};
} // namespace efx
#endif

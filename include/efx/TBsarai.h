#ifndef _EFX_TBSARAI_H
#define _EFX_TBSARAI_H

#include "efx/TSimple.h"
#include "efx/TChaseMtx.h"

namespace efx {
struct TBsaraiDead : public TSimple2 {
	// _00      = VTBL
	// _00-_10  = TSimple2
};

struct TBsaraiSupli : public TChaseMtx {
	virtual ~TBsaraiSupli(); // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};
} // namespace efx
#endif

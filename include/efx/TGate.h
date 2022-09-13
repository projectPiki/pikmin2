#ifndef _EFX_TGATE_H
#define _EFX_TGATE_H

#include "efx/TSimple.h"
#include "efx/TSimpleMtx.h"

namespace efx {
struct TGate1Attack : public TSimple2 {
	// _00      = VTBL
	// _00-_10  = TSimple2
};

struct TGate1Down : public TSimple2Mtx {
	// _00      = VTBL
	// _00-_14  = TSimpleMtx2
};

struct TGate2Attack : public TSimple2 {
	// _00      = VTBL
	// _00-_10  = TSimple2
};

struct TGate2Down : public TSimple2Mtx {
	// _00      = VTBL
	// _00-_14  = TSimpleMtx2
};

} // namespace efx

#endif

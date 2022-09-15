#ifndef _EFX_TBOMBROCK_H
#define _EFX_TBOMBROCK_H

#include "efx/TChaseMtx.h"
#include "efx/TSimple.h"

namespace efx {
struct TBombrock : public TBase {
	// might inherit from TSimple-something, not sure

	virtual void create(Arg*); // _08 (weak)
	virtual void forceKill();  // _0C (weak)
	virtual void fade();       // _10 (weak)

	// _00      = VTBL
};

struct TBombrockABCD : public TSimple4 {
	// _00      = VTBL
	// _00-_1C  = TSimple4
};

struct TBombrockEFGH : public TSimple4 {
	// _00      = VTBL
	// _00-_1C  = TSimple4
};

struct TBombrockLight : public TChaseMtxT {
	virtual void ~TBombrockLight(); // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChaseMtxT
};
} // namespace efx

#endif

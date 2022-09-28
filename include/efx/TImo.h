#ifndef _EFX_TIMO_H
#define _EFX_TIMO_H

#include "efx/TChasePos.h"
#include "efx/TChaseMtx.h"

namespace efx {
struct TImoEat : public TChaseMtx {
	virtual bool create(Arg*); // _08
	virtual ~TImoEat();        // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};

struct TImoSmoke : public TChasePos {
	virtual bool create(Arg*); // _08
	virtual ~TImoSmoke();      // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};
} // namespace efx

#endif

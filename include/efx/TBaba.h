#ifndef _EFX_TBABA_H
#define _EFX_TBABA_H

#include "efx/TChasePos.h"
#include "efx/TSimple.h"

namespace efx {
struct TBabaFly_ver01 : public TChasePos {
	virtual void create(Arg*); // _08
	virtual ~TBabaFly_ver01(); // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};

struct TBabaHe : public TSimple1 {
	virtual void create(Arg*); // _08

	// _00      = VTBL
	// _00-_0C  = TSimple1
};
} // namespace efx

#endif

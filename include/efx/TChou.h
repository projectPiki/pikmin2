#ifndef _EFX_TCHOU_H
#define _EFX_TCHOU_H

#include "efx/TChasePos.h"
#include "efx/TSimple.h"

namespace efx {
struct TChouDown : public TChasePos {
	virtual bool create(Arg*); // _08
	virtual ~TChouDown();      // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};

struct TChouHit : public TSimple1 {
	// _00      = VTBL
	// _00-_0C  = TSimple1
};
} // namespace efx

#endif

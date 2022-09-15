#ifndef _EFX_TFROG_H
#define _EFX_TFROG_H

#include "efx/TSimple.h"
#include "efx/TChasePos.h"

namespace efx {
struct TFrogDive : public TSimple4 {
	// _00      = VTBL
	// _00-_1C  = TSimple4
};

struct TFrogLanddrop : public TSimple2 {
	// _00      = VTBL
	// _00-_10  = TSimple2
};

struct TFrogPota : public TChasePos {
	virtual ~TFrogPota(); // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};
} // namespace efx

#endif

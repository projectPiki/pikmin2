#ifndef _EFX2D_T2DCURSOR_H
#define _EFX2D_T2DCURSOR_H

#include "types.h"
#include "efx2d/TChasePos.h"

namespace efx2d {
struct T2DCursor : public TChasePos {
	virtual bool create(Arg*); // _08
	virtual ~T2DCursor();      // _34 (weak)

	// _00     = VTBL
	// _00-_18 = TChasePos
};
} // namespace efx2d

#endif

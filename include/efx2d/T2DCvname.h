#ifndef _EFX2D_T2DCVNAME_H
#define _EFX2D_T2DCVNAME_H

#include "types.h"
#include "efx2d/TForever.h"

namespace efx2d {
struct T2DCvnameCave : public TForeverN {
	// _00     = VTBL
	// _00-_0C = TForeverN
};

struct T2DCvnameChal : public TForever {
	virtual ~T2DCvnameChal(); // _34 (weak)

	// _00     = VTBL
	// _00-_14 = TForever
};

struct T2DCvnameVs : public TForeverN {
	// _00     = VTBL
	// _00-_0C = TForeverN
};
} // namespace efx2d

#endif

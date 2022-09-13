#ifndef _EFX_THANACHO_H
#define _EFX_THANACHO_H

#include "efx/TChaseMtx.h"

namespace efx {
struct THanachoN : public TChaseMtx {
	virtual ~THanachoN(); // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};

struct THanachoY : public TChaseMtx {
	virtual ~THanachoY(); // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};
} // namespace efx

#endif

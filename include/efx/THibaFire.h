#ifndef _EFX_THIBAFIRE_H
#define _EFX_THIBAFIRE_H

#include "efx/TForever.h"

namespace efx {
struct THibaFire : public TForever4 {
	void setRateLOD(int);

	// _00      = VTBL
	// _00-_44  = TForever4
};
} // namespace efx

#endif

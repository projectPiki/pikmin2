#ifndef _EFX_PIKIDAMAGE_H
#define _EFX_PIKIDAMAGE_H

#include "efx/TSimple.h"

namespace efx {
struct PikiDamage : public TSimple1 {
	// _00      = VTBL
	// _00-0C   = TSimple1
};
} // namespace efx

#endif

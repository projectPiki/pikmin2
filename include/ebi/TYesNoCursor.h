#ifndef _EBI_TYESNOCURSOR_H
#define _EBI_TYESNOCURSOR_H

#include "types.h"

namespace ebi {
struct TYesNoCursor {
	// extends efx2d::T2DCursor once that's done
	u8 _00[0x38]; // _00, for now
};
} // namespace ebi

#endif

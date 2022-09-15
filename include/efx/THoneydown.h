#ifndef _EFX_THONEYDOWN_H
#define _EFX_THONEYDOWN_H

#include "efx/TSimple.h"

namespace efx {
struct THoneydownB : public TSimple1 {
	// _00      = VTBL
	// _00-_0C  = TSimple1
};

struct THoneydownR : public TSimple1 {
	// _00      = VTBL
	// _00-_0C  = TSimple1
};

struct THoneydownY : public TSimple1 {
	// _00      = VTBL
	// _00-_0C  = TSimple1
};
} // namespace efx

#endif

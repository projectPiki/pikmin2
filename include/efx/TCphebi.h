#ifndef _EFX_TCPHEBI_H
#define _EFX_TCPHEBI_H

#include "efx/TChaseMtx.h"
#include "efx/TSimple.h"

namespace efx {
struct TCphebiDead : public TChaseMtx4 {
	// _00      = VTBL
	// _00-_54  = TChaseMtx4
};

struct TCphebiDeadHane : public TSimple1 {
	// _00      = VTBL
	// _00-_0C  = TSimple1
};
} // namespace efx

#endif

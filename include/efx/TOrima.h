#ifndef _EFX_TORIMA_H
#define _EFX_TORIMA_H

#include "efx/TSyncGroup.h"
#include "efx/TChaseMtx.h"
#include "efx/TSimple.h"

namespace efx {

struct TOrimaLight : public TChaseMtx2 {
	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_2C  = TChaseMtx2
	u32 _2C; // _2C, unknown
};

struct TOrimaLightAct : public TChaseMtx2 {
	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_2C  = TChaseMtx2
	u32 _2C; // _2C, unknown
};

struct TOrimadamage : public TChaseMtx2 {
	// _00		= VTBL
	// _00-_2C	= TChaseMtx2
};

struct TOrimapunch : public TSimple1 {
	// NB: has a weirdly large (empty) vtable - 8 empty slots after fade()...

	// _00		= VTBL
	// _00-_0C	= TSimple1
};

} // namespace efx

#endif

#ifndef _EFX_TORIMA_H
#define _EFX_TORIMA_H

#include "efx/TSyncGroup.h"
#include "efx/TChaseMtx.h"
#include "efx/TSimple.h"

namespace efx {

struct TOrimaLight : public TSyncGroup2<efx::TChaseMtx> {
	virtual void create(Arg*); // _08

	// _00      = VTABLE
	// _04-_2C  = TSyncGroup2
	u32 _2C; // _2C, unknown
};

struct TOrimaLightAct : public TSyncGroup2<efx::TChaseMtx> {
	virtual void create(Arg*); // _08

	// _00      = VTABLE
	// _04-_2C  = TSyncGroup2
	u32 _2C; // _2C, unknown
};

struct TOrimadamage : public TSyncGroup2<efx::TChaseMtxT> {
};

struct TOrimapunch : public TSimple1 {
};

} // namespace efx

#endif

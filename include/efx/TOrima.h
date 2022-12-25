#ifndef _EFX_TORIMA_H
#define _EFX_TORIMA_H

#include "efx/TSyncGroup.h"
#include "efx/TChaseMtx.h"
#include "efx/TSimple.h"

namespace efx {

struct TOrimaLight : public TChaseMtx2 {
	inline TOrimaLight()
	    : TChaseMtx2(nullptr, PID_OrimaLight_Orima_1,
	                 PID_OrimaLight_Orima_2) // probably needs a ctor that takes two u16s but will do for now
	{
	}

	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_2C  = TChaseMtx2
	u32 _2C; // _2C, unknown
};

struct TOrimaLightAct : public TChaseMtx2 {
	inline TOrimaLightAct()
	    : TChaseMtx2(nullptr, PID_OrimaLightAct_Orima_1,
	                 PID_OrimaLightAct_Orima_2) // probably needs a ctor that takes two u16s but will do for now
	{
	}

	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_2C  = TChaseMtx2
	u32 _2C; // _2C, unknown
};

struct TOrimadamage : public TChaseMtx2 {
	inline TOrimadamage()
	    : TChaseMtx2(nullptr, PID_OrimaDamage_1, PID_OrimaDamage_2)
	{
	}

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

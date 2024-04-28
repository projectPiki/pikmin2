#ifndef _EFX2D_TBASE_H
#define _EFX2D_TBASE_H

#include "types.h"
#include "ParticleID.h"

namespace efx2d {
struct Arg;

struct TBaseIF {
	virtual bool create(Arg*) = 0; // _08
	virtual void kill()       = 0; // _0C
	virtual void fade()       = 0; // _10
	virtual void setGroup(u8) = 0; // _14

	// _00 = VTBL
};

struct TBase : public TBaseIF {
	inline TBase()
	    : mResMgrId(0)
	    , mGroup(0)
	{
	}

	virtual void setGroup(u8 group) { mGroup = group; } // _14 (weak)

	// _00 = VTBL
	u8 mResMgrId; // _04
	u8 mGroup;    // _05
};
} // namespace efx2d

#endif

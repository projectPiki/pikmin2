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
};

struct TBase : public TBaseIF {
	inline TBase()
	    : _04(0)
	    , _05(0)
	{
	}

	virtual void setGroup(u8); // _14 (weak)

	u8 _04;
	u8 _05;
};
} // namespace efx2d

#endif

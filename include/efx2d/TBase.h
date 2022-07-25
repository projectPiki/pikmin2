#ifndef _EFX2D_TBASE_H
#define _EFX2D_TBASE_H

#include "types.h"

namespace efx2d {
struct Arg;

struct TBaseIF {
	virtual bool create(Arg*) = 0; // _00
	virtual void forceKill()  = 0; // _04
	virtual void fade()       = 0; // _08
	virtual void setGroup(u8) = 0; // _0C
};

struct TBase : public TBaseIF {
	virtual void setGroup(u8); // _0C

	u8 _04;
	u8 _05;
};
} // namespace efx2d

#endif

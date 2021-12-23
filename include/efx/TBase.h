#ifndef _EFX_TBASE_H
#define _EFX_TBASE_H

#include "types.h"

namespace efx {
struct Arg;
struct TBase {
	virtual bool create(Arg*) = 0; // _00
	virtual void forceKill()  = 0; // _04
	virtual void fade()       = 0; // _08
};
} // namespace efx

#endif

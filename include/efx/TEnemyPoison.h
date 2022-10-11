#ifndef _EFX_TENEMYPOISON_H
#define _EFX_TENEMYPOISON_H

#include "efx/TBase.h"
#include "efx/TSimple.h"
#include "types.h"

namespace efx {
struct TEnemyPoisonS : public TSimple1 {
	TEnemyPoisonS()
	    : TSimple1(0x22F)
	{
	}

	virtual bool create(Arg*); // _08
};

struct TEnemyPoisonL : public TSimple1 {
	TEnemyPoisonL()
	    : TSimple1(0x22E)
	{
	}
	virtual bool create(Arg*); // _08
};

} // namespace efx

#endif

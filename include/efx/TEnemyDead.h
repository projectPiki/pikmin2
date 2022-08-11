#ifndef _EFX_TENEMYDEAD_H
#define _EFX_TENEMYDEAD_H

#include "efx/TSimple.h"
#include "types.h"

namespace efx {
struct TEnemyDead : public TSimple1 {
	inline TEnemyDead(u16 effectID, JPABaseEmitter* emitter)
	    : TSimple1(effectID, emitter)
	{
	}

	virtual bool create(Arg*); // _08

	// _00      = VTABLE
	// _04-_0C  = TSimple1
};

} // namespace efx

#endif

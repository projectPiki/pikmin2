#ifndef _EFX_TENEMYDIVE_H
#define _EFX_TENEMYDIVE_H

#include "efx/TSimple.h"

namespace efx {
struct TEnemyDive : public TSimple2 {
	inline TEnemyDive()
	    : TSimple2(PID_EnemyDive_1, PID_EnemyDive_2)
	{
	}

	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_10  = TSimple2
};
} // namespace efx

#endif

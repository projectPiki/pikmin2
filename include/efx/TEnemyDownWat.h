#ifndef _EFX_TENEMYDOWNWAT_H
#define _EFX_TENEMYDOWNWAT_H

#include "efx/TSimple.h"
#include "types.h"

namespace efx {
struct TEnemyDownWat : public TSimple3 {
	TEnemyDownWat()
	    : TSimple3(PID_EnemyDownWat_1, PID_EnemyDownWat_2, PID_EnemyDownWat_3)
	{
	}

	virtual bool create(Arg*); // _08

	// _00		= VTBL
	// _00-_18	= TSimple3
};

} // namespace efx

#endif

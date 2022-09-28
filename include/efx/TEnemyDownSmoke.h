#ifndef _EFX_TENEMYDOWNSMOKE_H
#define _EFX_TENEMYDOWNSMOKE_H

#include "efx/TSimple.h"
#include "types.h"

namespace efx {
struct TEnemyDownSmoke : public TSimple1 {
	TEnemyDownSmoke(float p2)
	    : TSimple1(PID_EnemyDownSmoke)
	    , _0C(p2)
	{
	}

	virtual bool create(Arg*); // _08

	// _00		= VTBL
	// _00-_0C	= TSimple1
	float _0C; // _0C
};

} // namespace efx

#endif

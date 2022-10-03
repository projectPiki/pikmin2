#ifndef _EFX_TKOGANE_H
#define _EFX_TKOGANE_H

#include "efx/TSimple.h"

namespace efx {
struct TKoganeDive : public TSimple2 {
	inline TKoganeDive()
	    : TSimple2(PID_KoganeDive_1, PID_KoganeDive_2)
	{
	}

	virtual bool create(Arg*); // _08

	// _00		 = VTBL
	// _00-_10 = TSimple2
};

struct TKoganeHit : public TSimple2 {
	inline TKoganeHit()
	    : TSimple2(PID_KoganeHit_1, PID_KoganeHit_2)
	{
	}

	virtual bool create(Arg*); // _08

	// _00		 = VTBL
	// _00-_10 = TSimple2
};
} // namespace efx

#endif

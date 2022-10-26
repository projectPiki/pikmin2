#ifndef _EFX_TGASUHIBA_H
#define _EFX_TGASUHIBA_H

#include "efx/TForever.h"

namespace efx {
struct TGasuHiba : public TForever2 {
	inline TGasuHiba()
	    : TForever2(PID_GasuHiba_1, PID_GasuHiba_2)
	{
	}
	virtual bool create(Arg*); // _08

	void setRateLOD(int);

	// _00      = VTBL
	// _00-_24  = TForever2
};
} // namespace efx

#endif

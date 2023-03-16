#ifndef _EFX_TEGATE_H
#define _EFX_TEGATE_H

#include "efx/TChaseMtx.h"
#include "efx/TForever.h"

namespace efx {
struct TEgateA : public TChaseMtx {
	inline TEgateA()
	    : TChaseMtx(PID_EgateA, nullptr)
	{
	}
	virtual ~TEgateA(); // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};

struct TEgateBC : public TForever2 {
	inline TEgateBC()
	    : TForever2(PID_EgateBC1, PID_EgateBC2)
	{
	}
	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_24  = TForever2
};
} // namespace efx

#endif

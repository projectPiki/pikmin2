#ifndef _EFX_TBABA_H
#define _EFX_TBABA_H

#include "efx/TChasePos.h"
#include "efx/TSimple.h"

namespace efx {
struct TBabaFly_ver01 : public TChasePos {
	TBabaFly_ver01(Vector3f* position)
	    : TChasePos(PID_BabaFly, position)
	{
	}

	virtual bool create(Arg*);    // _08
	virtual ~TBabaFly_ver01() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};

struct TBabaHe : public TSimple2 {
	TBabaHe()
	    : TSimple2(PID_BabaHe_1, PID_BabaHe_2)
	{
	}

	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_0C  = TSimple1
};
} // namespace efx

#endif

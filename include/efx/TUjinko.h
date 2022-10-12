#ifndef _EFX_TUJINKO_H
#define _EFX_TUJINKO_H

#include "efx/TSimple.h"
#include "efx/TSimpleMtx.h"

namespace efx {
struct TUjinkoAp_Imo : public TSimple2 {
	inline TUjinkoAp_Imo()
	    : TSimple2(PID_UjinkoAp_1, PID_UjinkoAp_2)
	{
	}

	virtual bool create(Arg*); // _08

	// _00     = VTBL
	// _00-_10 = TSimple2
};

struct TUjinkoAp : public TSimpleMtx2 {
	inline TUjinkoAp()
	    : TSimpleMtx2(nullptr, PID_UjinkoAp_1, PID_UjinkoAp_2)
	{
	}

	// _00     = VTBL
	// _00-_14 = TSimpleMtx2
};

struct TUjinkoEat : public TSimple1 {
	inline TUjinkoEat()
	    : TSimple1(PID_UjinkoEat)
	{
	}

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TUjinkoHd_Imo : public TSimple2 {
	inline TUjinkoHd_Imo()
	    : TSimple2(PID_UjinkoHd_1, PID_UjinkoHd_2)
	{
	}

	virtual bool create(Arg*); // _08

	// _00     = VTBL
	// _00-_10 = TSimple2
};

struct TUjinkoHd : public TSimple2 {
	inline TUjinkoHd()
	    : TSimple2(PID_UjinkoHd_1, PID_UjinkoHd_2)
	{
	}

	// _00     = VTBL
	// _00-_10 = TSimple2
};

struct TUjinkoPkate : public TSimple1 {
	inline TUjinkoPkate()
	    : TSimple1(PID_UjinkoPkate)
	{
	}

	// _00     = VTBL
	// _00-_0C = TSimple1
};
} // namespace efx

#endif

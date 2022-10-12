#ifndef _EFX_TYOROI_H
#define _EFX_TYOROI_H

#include "efx/TSimple.h"
#include "efx/TSimpleMtx.h"
#include "efx/TChaseMtx.h"

namespace efx {
struct TYoroiAp : public TSimpleMtx2 {
	inline TYoroiAp()
	    : TSimpleMtx2(nullptr, PID_YoroiAp_1, PID_YoroiAp_2)
	{
	}

	// _00     = VTBL
	// _00-_14 = TSimpleMtx2
};

struct TYoroiAttack : public TChaseMtx {
	inline TYoroiAttack()
	    : TChaseMtx(PID_YoroiAttack, nullptr)
	{
	}

	virtual ~TYoroiAttack(); // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChaseMtx
};

struct TYoroiAttackhit : public TSimple1 {
	inline TYoroiAttackhit()
	    : TSimple1(PID_YoroiAttackHit)
	{
	}

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TYoroiEat : public TSimple1 {
	inline TYoroiEat()
	    : TSimple1(PID_YoroiEat)
	{
	}

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TYoroiHd : public TSimpleMtx2 {
	inline TYoroiHd()
	    : TSimpleMtx2(nullptr, PID_YoroiHd_1, PID_YoroiHd_2)
	{
	}

	// _00     = VTBL
	// _00-_14 = TSimpleMtx2
};
} // namespace efx

#endif

#ifndef _EFX_TUMI_H
#define _EFX_TUMI_H

#include "efx/TSimpleMtx.h"
#include "efx/TChasePos.h"
#include "efx/TChaseMtx.h"

namespace efx {
struct TUmiAttack : public TSimpleMtx1 {
	inline TUmiAttack(Matrixf* mtx)
	    : TSimpleMtx1(mtx, PID_UmiAttack)
	{
	}

	virtual bool create(Arg*); // _08

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TUmiDeadawa : public TChaseMtx {
	inline TUmiDeadawa()
	    : TChaseMtx(PID_UmiDeadAwa, nullptr)
	{
	}

	virtual ~TUmiDeadawa() { } // _48 (weak)

	void setGlobalScale(f32);

	// _00     = VTBL
	// _00-_14 = TChaseMtx
};

struct TUmiDeadmelt : public TSimple1 {
	inline TUmiDeadmelt()
	    : TSimple1(PID_UmiDeadMelt)
	{
	}

	virtual bool create(Arg*); // _08

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TUmiEat : public TChaseMtx {
	inline TUmiEat()
	    : TChaseMtx(PID_UmiEat, nullptr)
	{
	}

	virtual ~TUmiEat() { } // _48 (weak)

	void setGlobalScale(f32);

	// _00     = VTBL
	// _00-_14 = TChaseMtx
};

struct TUmiEyeBlue : public TChaseMtx2 {
	inline TUmiEyeBlue()
	    : TChaseMtx2(nullptr, PID_UmiEyeBlue_1, PID_UmiEyeBlue_2)
	{
	}

	// _00     = VTBL
	// _00-_2C = TChaseMtx2
};

struct TUmiEyeRed : public TChaseMtx2 {
	inline TUmiEyeRed()
	    : TChaseMtx2(nullptr, PID_UmiEyeRed_1, PID_UmiEyeRed_2)
	{
	}

	// _00     = VTBL
	// _00-_2C = TChaseMtx2
};

struct TUmiFlick : public TSimple3 {
	inline TUmiFlick()
	    : TSimple3(PID_UmiFlick_1, PID_UmiFlick_2, PID_UmiFlick_3)
	{
	}

	virtual bool create(Arg*); // _08

	// _00     = VTBL
	// _00-_18 = TSimple3
};

struct TUmiHamon : public TChasePos2 {
	inline TUmiHamon(Vector3f* pos)
	    : TChasePos2(pos, PID_UmiHamon_1, PID_UmiHamon_2)
	{
	}

	void setGlobalScale(f32);

	// _00     = VTBL
	// _00-_2C = TChasePos2
};

struct TUmiWeakBlue : public TChaseMtx2 {
	inline TUmiWeakBlue()
	    : TChaseMtx2(nullptr, PID_UmiWeakBlue_1, PID_UmiWeakBlue_2)
	{
	}

	// _00     = VTBL
	// _00-_2C = TChaseMtx2
};

struct TUmiWeakRed : public TChaseMtx2 {
	inline TUmiWeakRed()
	    : TChaseMtx2(nullptr, PID_UmiWeakRed_1, PID_UmiWeakRed_2)
	{
	}

	// _00     = VTBL
	// _00-_2C = TChaseMtx2
};
} // namespace efx

#endif

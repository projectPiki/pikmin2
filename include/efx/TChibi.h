#ifndef _EFX_TCHIBI_H
#define _EFX_TCHIBI_H

#include "efx/TChasePos.h"
#include "efx/TChaseMtx.h"
#include "efx/TSimple.h"
#include "efx/TSimpleMtx.h"

namespace efx {
struct TChibiCharge : public TChaseMtx {
	TChibiCharge()
	    : TChaseMtx(PID_ChibiCharge, nullptr)
	{
	}

	virtual ~TChibiCharge() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};

struct TChibiDeadLight : public TChaseMtx {
	TChibiDeadLight()
	    : TChaseMtx(PID_ChibiDeadLight, nullptr)
	{
	}

	virtual ~TChibiDeadLight() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};

struct TChibiDeadMouth : public TSimpleMtx1 {
	inline TChibiDeadMouth(Matrixf* mat)
	    : TSimpleMtx1(mat, PID_ChibiDeadMouth)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};

struct TChibiDeadSe : public TSimpleMtx2 {
	inline TChibiDeadSe(Matrixf* mat)
	    : TSimpleMtx2(mat, PID_ChibiDeadSe_1, PID_ChibiDeadSe_2)
	{
	}

	// _00      = VTBL
	// _00-_14  = TSimpleMtx2
};

struct TChibiHit : public TSimple4 {
	inline TChibiHit()
	    : TSimple4(PID_ChibiHit_1, PID_ChibiHit_2, PID_ChibiHit_3, PID_ChibiHit_4)
	{
	}

	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_1C  = TSimple4
};

struct TChibiShell : public TChasePos {
	TChibiShell()
	    : TChasePos(PID_ChibiShell)
	{
	}

	virtual ~TChibiShell() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};

struct TChibiShoot : public TSimpleMtx3 {
	inline TChibiShoot(Matrixf* mat)
	    : TSimpleMtx3(mat, PID_ChibiShoot_1, PID_ChibiShoot_2, PID_ChibiShoot_3)
	{
	}

	// _00      = VTBL
	// _00-_1C  = TSimpleMtx3
};

struct TChibiSmokeL : public TSimpleMtx1 {
	inline TChibiSmokeL(Matrixf* mat)
	    : TSimpleMtx1(mat, PID_ChibiSmokeL)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};

struct TChibiSmokeS : public TSimpleMtx1 {
	inline TChibiSmokeS(Matrixf* mat)
	    : TSimpleMtx1(mat, PID_ChibiSmokeS)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};
} // namespace efx
#endif

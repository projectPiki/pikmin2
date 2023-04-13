#ifndef _EFX_TDANGO_H
#define _EFX_TDANGO_H

#include "efx/TSimple.h"
#include "efx/TSimpleMtx.h"
#include "efx/TChasePos.h"
#include "efx/TChaseMtx.h"

namespace efx {
struct TDangoAttack2 : public TChaseMtx {
	inline TDangoAttack2()
	    : TChaseMtx(PID_DangoAttack2, nullptr)
	{
	}

	virtual ~TDangoAttack2() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};

struct TDangoCrash : public TSimple2 {
	inline TDangoCrash()
	    : TSimple2(PID_DangoCrash_1, PID_DangoCrash_2)
	{
	}

	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_10  = TSimple2
};

struct TDangoDamage : public TSimpleMtx1 {
	inline TDangoDamage(Matrixf* mtx)
	    : TSimpleMtx1(mtx, PID_DangoDamage)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};

struct TDangoDead : public TSimpleMtx2 {
	inline TDangoDead(Matrixf* mat)
	    : TSimpleMtx2(mat, PID_DangoDead_1, PID_DangoDead_2)
	{
	}

	// _00      = VTBL
	// _00-_14  = TSimpleMtx2
};

struct TDangoDeadSmoke : public TSimpleMtx1 {
	inline TDangoDeadSmoke(Matrixf* mtx)
	    : TSimpleMtx1(mtx, PID_DangoDeadSmoke)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};

struct TDangoFly : public TSimple3 {
	inline TDangoFly()
	    : TSimple3(PID_DangoFly_1, PID_DangoFly_2, PID_DangoFly_3)
	{
	}

	// _00      = VTBL
	// _00-_18  = TSimple3
};

struct TDangoRun : public TChasePos2 {
	inline TDangoRun()
	    : TChasePos2(nullptr, PID_DangoRun_1, PID_DangoRun_2)
	{
	}

	// _00      = VTBL
	// _00-_2C  = TChasePos2
};

struct TDangoTurn : public TSimple2 {
	TDangoTurn()
	    : TSimple2(PID_DangoTurn_1, PID_DangoTurn_2)
	{
	}

	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_10  = TSimple2
};

struct TDangoWallBreak : public TChaseMtx {
	inline TDangoWallBreak()
	    : TChaseMtx(PID_DangoWallBreak, nullptr)
	{
	}

	virtual ~TDangoWallBreak() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};
} // namespace efx

#endif

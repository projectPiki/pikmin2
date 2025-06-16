#ifndef _EFX_TUFO_H
#define _EFX_TUFO_H

#include "efx/TSimple.h"
#include "efx/TSimpleMtx.h"
#include "efx/TChaseMtx.h"

namespace efx {
struct TUfoGasIn : public TChaseMtx {
	inline TUfoGasIn(Matrixf* mtx)
	    : TChaseMtx(PID_UfoGasIn, mtx)
	{
	}

	virtual ~TUfoGasIn() {}; // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChaseMtx
};

struct TUfoGasOut : public TChaseMtx {
	inline TUfoGasOut(Matrixf* mtx)
	    : TChaseMtx(PID_UfoGasOut, mtx)
	{
	}

	virtual ~TUfoGasOut() {}; // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChaseMtx
};

struct TUfoPodGepu : public TSimpleMtx2 {
	inline TUfoPodGepu(Matrixf* mtx)
	    : TSimpleMtx2(mtx, PID_UfoPodGeku_1, PID_UfoPodGeku_2)
	{
	}

	// _00     = VTBL
	// _00-_14 = TSimpleMtx2
};

struct TUfoPodOpen : public TChaseMtx2 {
	inline TUfoPodOpen(Mtx mtx)
	    : TChaseMtx2(mtx, PID_UfoPodOpen_1, PID_UfoPodOpen_2)
	{
	}

	// _00     = VTBL
	// _00-_2C = TChaseMtx2
};

struct TUfoPodOpenSuck : public TChaseMtx {
	inline TUfoPodOpenSuck(Matrixf* mtx)
	    : TChaseMtx(PID_UfoPodOpenSuck, mtx)
	{
	}

	virtual ~TUfoPodOpenSuck() {}; // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChaseMtx
};

struct TUfoPodSuck : public TSimpleMtx1 {
	inline TUfoPodSuck(Matrixf* mtx)
	    : TSimpleMtx1(mtx, PID_UfoPodSuck)
	{
	}

	// _00     = VTBL
	// _00-_14 = TSimpleMtx1
};

struct TUfoSpot : public TChaseMtx2 {
	inline TUfoSpot(Mtx mat)
	    : TChaseMtx2(mat, PID_UfoSpot_1, PID_UfoSpot_2)
	{
	}

	// _00     = VTBL
	// _00-_2C = TChaseMtx2
};

struct TUfoSpotact_ver01 : public TChaseMtx2 {
	inline TUfoSpotact_ver01(Mtx mtx)
	    : TChaseMtx2(mtx, PID_UfoSpotAct_1, PID_UfoSpotAct_2)
	{
	}

	// _00     = VTBL
	// _00-_2C = TChaseMtx2
};
} // namespace efx

#endif

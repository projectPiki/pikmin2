#ifndef _EFX_TUFO_H
#define _EFX_TUFO_H

#include "efx/TSimple.h"
#include "efx/TSimpleMtx.h"
#include "efx/TChaseMtx.h"

namespace efx {
struct TUfoGasIn : public TChaseMtx {
	inline TUfoGasIn()
	    : TChaseMtx(PID_UfoGasIn, nullptr)
	{
	}

	virtual ~TUfoGasIn() {}; // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChaseMtx
};

struct TUfoGasOut : public TChaseMtx {
	inline TUfoGasOut()
	    : TChaseMtx(PID_UfoGasOut, nullptr)
	{
	}

	virtual ~TUfoGasOut() {}; // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChaseMtx
};

struct TUfoPodGepu : public TSimpleMtx2 {
	inline TUfoPodGepu()
	    : TSimpleMtx2(nullptr, PID_UfoPodGeku_1, PID_UfoPodGeku_2)
	{
	}

	// _00     = VTBL
	// _00-_14 = TSimpleMtx2
};

struct TUfoPodOpen : public TChaseMtx2 {
	inline TUfoPodOpen()
	    : TChaseMtx2(nullptr, PID_UfoPodOpen_1, PID_UfoPodOpen_2)
	{
	}

	// _00     = VTBL
	// _00-_2C = TChaseMtx2
};

struct TUfoPodOpenSuck : public TChaseMtx {
	inline TUfoPodOpenSuck()
	    : TChaseMtx(PID_UfoPodOpenSuck, nullptr)
	{
	}

	virtual ~TUfoPodOpenSuck() {}; // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChaseMtx
};

struct TUfoPodSuck : public TSimple1 {
	inline TUfoPodSuck()
	    : TSimple1(PID_UfoPodSuck)
	{
	}

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TUfoSpot : public TChaseMtx2 {
	inline TUfoSpot()
	    : TChaseMtx2(nullptr, PID_UfoSpot_1, PID_UfoSpot_2)
	{
	}

	// _00     = VTBL
	// _00-_2C = TChaseMtx2
};

struct TUfoSpotact_ver01 : public TChaseMtx2 {
	inline TUfoSpotact_ver01()
	    : TChaseMtx2(nullptr, PID_UfoSpotAct_1, PID_UfoSpotAct_2)
	{
	}

	// _00     = VTBL
	// _00-_2C = TChaseMtx2
};
} // namespace efx

#endif

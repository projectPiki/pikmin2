#ifndef _EFX_TPOD_H
#define _EFX_TPOD_H

#include "efx/TSimple.h"
#include "efx/TChasePos.h"
#include "efx/TChaseMtx.h"
#include "efx/TForever.h"

namespace efx {
struct TPodGepu : public TSimple2 {
	inline TPodGepu()
	    : TSimple2(PID_PodGepu_1, PID_PodGepu_2)
	{
	}

	// _00     = VTBL
	// _00-_10 = TSimple2
};

struct TPodKira : public TChaseMtx {
	inline TPodKira(Matrixf* mtx)
	    : TChaseMtx(PID_PodKira, mtx)
	{
	}

	virtual ~TPodKira() {}; // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChaseMtx
};

struct TPodOpenA : public TForever {
	inline TPodOpenA()
	    : TForever(PID_PodOpenA)
	{
	}

	// virtual ~TPodOpenA() {}; // _48 (weak)

	// _00     = VTBL
	// _00-_10 = TForever
};

struct TPodOpenB : public TChaseMtx {
	inline TPodOpenB(Matrixf* mtx)
	    : TChaseMtx(PID_PodOpenB, mtx)
	{
	}

	virtual ~TPodOpenB() {}; // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChaseMtx
};

struct TPodSpot : public TChasePosYRot2 {
	inline TPodSpot(Vector3f* position, f32* faceDir)
	    : TChasePosYRot2(position, faceDir, PID_PodSpot_1, PID_PodSpot_2)
	{
	}

	// _00     = VTBL
	// _00-_34 = TChasePosYRot2
};

struct TPodSuck : public TSimple2 {
	inline TPodSuck()
	    : TSimple2(PID_PodSuck_1, PID_PodSuck_2)
	{
	}

	// _00     = VTBL
	// _00-_10 = TPodSuck
};
} // namespace efx

#endif

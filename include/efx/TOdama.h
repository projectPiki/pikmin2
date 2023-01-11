#ifndef _EFX_TODAMA_H
#define _EFX_TODAMA_H

#include "efx/TSimple.h"
#include "efx/TChasePos.h"
#include "efx/TChaseMtx.h"

namespace efx {
struct TOdamaDeadHahenA : public TChasePosPos {
	inline TOdamaDeadHahenA()
	    : TChasePosPos(PID_ODamaDeadHahenA, nullptr, nullptr)
	{
	}

	virtual ~TOdamaDeadHahenA() { } // _48 (weak)

	// _00		  = VTBL
	// _00-_18	= TChasePosPos
};

struct TOdamaDeadHahenB : public TChasePosPos {
	inline TOdamaDeadHahenB()
	    : TChasePosPos(PID_ODamaDeadHahenB, nullptr, nullptr)
	{
	}

	virtual ~TOdamaDeadHahenB() { } // _48 (weak)

	// _00		  = VTBL
	// _00-_18	= TChasePosPos
};

struct TOdamaDeadHahenC1 : public TChaseMtx {
	inline TOdamaDeadHahenC1()
	    : TChaseMtx(PID_ODamaDeadHahenC1, nullptr)
	{
	}

	virtual ~TOdamaDeadHahenC1() { } // _48 (weak)

	// _00		  = VTBL
	// _00-_14	= TChaseMtx
};

struct TOdamaDeadHahenC2 : public TChaseMtx {
	inline TOdamaDeadHahenC2()
	    : TChaseMtx(PID_ODamaDeadHahenC2, nullptr)
	{
	}

	virtual ~TOdamaDeadHahenC2() { } // _48 (weak)

	// _00		  = VTBL
	// _00-_14	= TChaseMtx
};

struct TOdamaFoot : public TChasePos2 {
	inline TOdamaFoot()
	    : TChasePos2(nullptr, PID_ODamaFoot, PID_DamaFoot_2)
	{
	}

	// _00		  = VTBL
	// _00-_2C	= TChasePos2
};

struct TOdamaFur1 : public TChaseMtx {
	inline TOdamaFur1()
	    : TChaseMtx(PID_ODamaFur1, nullptr)
	{
	}

	virtual ~TOdamaFur1() { } // _48 (weak)

	void setGlobalScale(f32);

	// _00		  = VTBL
	// _00-_14	= TChaseMtx
};

struct TOdamaFur2 : public TChaseMtx {
	inline TOdamaFur2()
	    : TChaseMtx(PID_ODamaFur2, nullptr)
	{
	}

	virtual ~TOdamaFur2() { } // _48 (weak)

	void setGlobalScale(f32);

	// _00		  = VTBL
	// _00-_14	= TChaseMtx
};

struct TOdamaHahen : public TChasePosPos {
	inline TOdamaHahen()
	    : TChasePosPos(PID_ODamaHahen, nullptr, nullptr)
	{
	}

	virtual ~TOdamaHahen() { } // _48 (weak)

	// _00		  = VTBL
	// _00-_18	= TChasePosPos
};

struct TOdamaWalk : public TSimple2 {
	inline TOdamaWalk()
	    : TSimple2(PID_ODamaWalk_1, PID_ODamaWalk_2)
	{
	}

	// _00     = VTBL
	// _00-_10 = TSimple2
};

} // namespace efx

#endif

#ifndef _EFX_TDAMA_H
#define _EFX_TDAMA_H

#include "efx/TSimple.h"
#include "efx/TChasePos.h"
#include "efx/TChaseMtx.h"

namespace efx {
struct TDamaDeadBomb : public TSimple1 {
	inline TDamaDeadBomb()
	    : TSimple1(PID_DamaDeadBomb)
	{
	}

	// _00      = VTBL
	// _00-_0C  = TSimple1
};

struct TDamaDeadElecA : public TChasePosPos {
	inline TDamaDeadElecA()
	    : TChasePosPos(PID_DamaDeadElecA)
	{
	}

	virtual ~TDamaDeadElecA() { } // _48 (weak)

	// _00      = VTBL
	// _00-_18  = TChasePosPos
};

struct TDamaDeadElecB : public TChasePos {
	inline TDamaDeadElecB()
	    : TChasePos(PID_DamaDeadElecB)
	{
	}

	virtual ~TDamaDeadElecB() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};

struct TDamaDeadHahenA : public TChasePosPos {
	inline TDamaDeadHahenA()
	    : TChasePosPos(PID_DamaDeadHahenA)
	{
	}

	virtual ~TDamaDeadHahenA() { } // _48 (weak)

	// _00      = VTBL
	// _00-_18  = TChasePosPos
};

struct TDamaDeadHahenB : public TChasePosPos {
	inline TDamaDeadHahenB()
	    : TChasePosPos(PID_DamaDeadHahenB)
	{
	}

	virtual ~TDamaDeadHahenB() { } // _48 (weak)

	// _00      = VTBL
	// _00-_18  = TChasePosPos
};

struct TDamaDeadHahenC1 : public TChaseMtx {
	inline TDamaDeadHahenC1()
	    : TChaseMtx(PID_DamaDeadHahenC1, nullptr)
	{
	}

	virtual ~TDamaDeadHahenC1() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};

struct TDamaDeadHahenC2 : public TChaseMtx {
	inline TDamaDeadHahenC2()
	    : TChaseMtx(PID_DamaDeadHahenC2, nullptr)
	{
	}

	virtual ~TDamaDeadHahenC2() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};

struct TDamaFoot : public TChasePos2 {
	inline TDamaFoot()
	    : TChasePos2(nullptr, PID_DamaFoot_1, PID_DamaFoot_2)
	{
	}

	// _00      = VTBL
	// _00-_2C  = TChasePos2
};

struct TDamaFootw : public TChasePos {
	inline TDamaFootw()
	    : TChasePos(nullptr, PID_DamaFootW)
	{
	}

	virtual ~TDamaFootw() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};

struct TDamaHahen : public TChasePosPos {
	inline TDamaHahen()
	    : TChasePosPos(PID_DamaHahen)
	{
	}

	virtual ~TDamaHahen() { } // _48 (weak)

	// _00      = VTBL
	// _00-_18  = TChasePosPos
};

struct TDamaSmoke : public TChasePos {
	inline TDamaSmoke()
	    : TChasePos(nullptr, PID_DamaSmoke)
	{
	}

	virtual ~TDamaSmoke() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};

struct TDamaWalk : public TSimple2 {
	inline TDamaWalk()
	    : TSimple2(PID_DamaWalk_1, PID_DamaWalk_2)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimple2
};

struct TDamaWalkw : public TSimple3 {
	inline TDamaWalkw()
	    : TSimple3(PID_DamaWalkW_1, PID_DamaWalkW_2, PID_DamaWalkW_3)
	{
	}

	// _00      = VTBL
	// _00-_18  = TSimple3
};
} // namespace efx

#endif

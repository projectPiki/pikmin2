#ifndef _EFX_TDAMA_H
#define _EFX_TDAMA_H

#include "efx/TSimple.h"
#include "efx/TChasePos.h"
#include "efx/TChaseMtx.h"

namespace efx {
struct TDamaDeadBomb : public TSimple1 {
	// _00      = VTBL
	// _00-_0C  = TSimple1
};

struct TDamaDeadElecA : public TChasePosPos {
	virtual ~TDamaDeadElecA(); // _48 (weak)

	// _00      = VTBL
	// _00-_18  = TChasePosPos
};

struct TDamaDeadElecB : public TChasePos {
	virtual ~TDamaDeadElecB(); // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};

struct TDamaDeadHahenA : public TChasePosPos {
	virtual ~TDamaDeadHahenA(); // _48 (weak)

	// _00      = VTBL
	// _00-_18  = TChasePosPos
};

struct TDamaDeadHahenB : public TChasePosPos {
	virtual ~TDamaDeadHahenB(); // _48 (weak)

	// _00      = VTBL
	// _00-_18  = TChasePosPos
};

struct TDamaDeadHahenC1 : public TChaseMtx {
	virtual ~TDamaDeadHahenC1(); // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};

struct TDamaDeadHahenC2 : public TChaseMtx {
	virtual ~TDamaDeadHahenC2(); // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};

struct TDamaFoot : public TChasePos2 {
	// _00      = VTBL
	// _00-_2C  = TChasePos2
};

struct TDamaFootw : public TChasePos {
	virtual ~TDamaFootw(); // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};

struct TDamaHahen : public TChasePosPos {
	virtual ~TDamaHahen(); // _48 (weak)

	// _00      = VTBL
	// _00-_18  = TChasePosPos
};

struct TDamaSmoke : public TChasePos {
	virtual ~TDamaSmoke(); // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};

struct TDamaWalk : public TSimple2 {
	// _00      = VTBL
	// _00-_10  = TSimple2
};

struct TDamaWalkw : public TSimple3 {
	// _00      = VTBL
	// _00-_18  = TSimple3
};
} // namespace efx

#endif

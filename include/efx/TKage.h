#ifndef _EFX_TKAGE_H
#define _EFX_TKAGE_H

#include "Color4.h"
#include "efx/TSimple.h"
#include "efx/TChasePos.h"
#include "efx/TSimpleMtx.h"
#include "efx/TChaseMtx.h"

namespace efx {
struct TKageBend1 : public TSimpleMtx2 {
	// _00      = VTBL
	// _00-_14  = TSimpleMtx2
};

struct TKageDead1 : public TChaseMtx {
	virtual ~TKageDead1(); // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};

struct TKageDead2 : public TSimple1 {
	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_0C  = TSimple1
};

struct TKageFlick : public TChasePos {
	virtual ~TKageFlick(); // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};

struct TKageMove : public TChasePosYRot {
	virtual ~TKageMove(); // _48 (weak)

	void setGlobalPrmColor(Color4&);

	// _00      = VTBL
	// _00-_18  = TChasePosYRot
};

struct TKageRecov : public TSimple2 {
	// _00      = VTBL
	// _00-_10  = TSimple2
};

struct TKageRun : public TChasePosYRot {
	virtual ~TKageRun(); // _48 (weak)

	void setGlobalPrmColor(Color4&);

	// _00      = VTBL
	// _00-_18  = TChasePosYRot
};

struct TKageTyreDead : public TSimple3 {
	// _00      = VTBL
	// _00-_18  = TSimple3
};

struct TKageTyresmoke : public TChasePosYRot {
	virtual ~TKageTyresmoke(); // _48 (weak)

	// _00      = VTBL
	// _00-_18  = TChasePosYRot
};

struct TKageTyreup : public TChasePosYRot {
	virtual ~TKageTyreup(); // _48 (weak)

	// _00      = VTBL
	// _00-_18  = TChasePosYRot
};
} // namespace efx

#endif

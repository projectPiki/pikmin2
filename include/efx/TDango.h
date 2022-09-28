#ifndef _EFX_TDANGO_H
#define _EFX_TDANGO_H

#include "efx/TSimple.h"
#include "efx/TSimpleMtx.h"
#include "efx/TChasePos.h"
#include "efx/TChaseMtx.h"

namespace efx {
struct TDangoAttack2 : public TChaseMtx {
	virtual ~TDangoAttack2(); // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};

struct TDangoCrash : public TSimple2 {
	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_10  = TSimple2
};

struct TDangoDamage : public TSimpleMtx1 {
	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};

struct TDangoDead : public TSimpleMtx2 {
	// _00      = VTBL
	// _00-_14  = TSimpleMtx2
};

struct TDangoDeadSmoke : public TSimpleMtx1 {
	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};

struct TDangoFly : public TSimple3 {
	// _00      = VTBL
	// _00-_18  = TSimple3
};

struct TDangoRun : public TChasePos2 {
	// _00      = VTBL
	// _00-_2C  = TChasePos2
};

struct TDangoTurn : public TSimple2 {
	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_10  = TSimple2
};

struct TDangoWallBreak : public TChaseMtx {
	virtual ~TDangoWallBreak(); // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};
} // namespace efx

#endif

#ifndef _EFX_TCHIBI_H
#define _EFX_TCHIBI_H

#include "efx/TChasePos.h"
#include "efx/TChaseMtx.h"
#include "efx/TSimple.h"
#include "efx/TSimpleMtx.h"

namespace efx {
struct TChibiCharge : public TChaseMtx {
	virtual ~TChibiCharge(); // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};

struct TChibiDeadLight : public TChaseMtx {
	virtual ~TChibiDeadLight(); // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};

struct TChibiDeadMouth : public TSimpleMtx1 {
	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};

struct TChibiDeadSe : public TSimpleMtx2 {
	// _00      = VTBL
	// _00-_14  = TSimpleMtx2
};

struct TChibiHit : public TSimple4 {
	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_1C  = TSimple4
};

struct TChibiShell : public TChasePos {
	virtual ~TChibiShell(); // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};

struct TChibiShoot : public TSimpleMtx3 {
	// _00      = VTBL
	// _00-_1C  = TSimpleMtx3
};

struct TChibiSmokeL : public TSimpleMtx1 {
	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};

struct TChibiSmokeS : public TSimpleMtx1 {
	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};
} // namespace efx
#endif

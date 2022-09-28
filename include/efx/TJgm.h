#ifndef _EFX_TJGM_H
#define _EFX_TJGM_H

#include "efx/TChasePos.h"
#include "efx/TChaseMtx.h"
#include "efx/TSimple.h"

namespace efx {
struct TJgmAttack : public TChasePos2 {
	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_2C  = TChasePos2
};

struct TJgmAttackW : public TChasePosYRot3 {
	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_4C  = TChasePosYRot3
};

struct TJgmBack : public TChasePos {
	virtual bool create(Arg*); // _08
	virtual ~TJgmBack();       // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};

struct TJgmBackW : public TChasePosYRot2 {
	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_34  = TChasePosYRot2
};

struct TJgmBubble : public TSimple1 {
	// _00      = VTBL
	// _00-_0C  = TSimple1
};

} // namespace efx

#endif

#ifndef _EFX_TFUSEN_H
#define _EFX_TFUSEN_H

#include "efx/TChasePos.h"
#include "efx/TChaseMtx.h"

namespace efx {
struct TFusenAir : public TChaseMtx3 {
	// _00      = VTBL
	// _00-_40  = TChaseMtx3
};

struct TFusenAirhit : public TChasePosYRot2 {
	// _00      = VTBL
	// _00-_34  = TChasePosYRot2
};

struct TFusenDead : public TChaseMtx2 {
	// _00      = VTBL
	// _00-_2C  = TChaseMtx2
};

struct TFusenhAir : public TChaseMtx3 {
	// _00      = VTBL
	// _00-_40  = TChaseMtx3
};

struct TFusenhAirhit : public TChasePosYRot2 {
	// _00      = VTBL
	// _00-_34  = TChasePosYRot2
};

struct TFusenSui : public TChaseMtx {
	virtual ~TFusenSui(); // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};
} // namespace efx

#endif

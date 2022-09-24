#ifndef _EFX_TKECHAPPY_H
#define _EFX_TKECHAPPY_H

#include "efx/TChaseMtx.h"
#include "efx/TSimpleMtx.h"

namespace efx {
struct TKechappyOff : public TSimpleMtx1 {
	TKechappyOff(Matrixf* mat)
	    : TSimpleMtx1(mat, 0x294)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};

struct TKechappyTest : public TChaseMtx3 {
	TKechappyTest()
	    : TChaseMtx3(0, 0x283, 0x284, 0x285)
	{
	}

	void setGlobalAlpha(u8);
	void setGlobalParticleScale(f32);
	void setAwayFromCenterSpeed(f32);
	void setSpread(f32);
	void setGlobalDynamicsScale(Vector3f&);

	// _00      = VTBL
	// _00-_40  = TChaseMtx3
};

} // namespace efx

#endif

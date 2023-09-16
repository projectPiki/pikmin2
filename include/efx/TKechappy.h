#ifndef _EFX_TKECHAPPY_H
#define _EFX_TKECHAPPY_H

#include "efx/TChaseMtx.h"
#include "efx/TSimpleMtx.h"

namespace efx {
struct TKechappyOff : public TSimpleMtx1 {
	TKechappyOff(Matrixf* mat)
	    : TSimpleMtx1(mat, PID_KechappyOff)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};

struct TKechappyTest : public TChaseMtx3 {
	TKechappyTest()
	    : TChaseMtx3(0, PID_KechappyTest_1, PID_KechappyTest_2, PID_KechappyTest_3)
	{
	}

	void setGlobalAlpha(u8 alpha);
	void setGlobalParticleScale(f32 scale);
	void setAwayFromCenterSpeed(f32 speed);
	void setSpread(f32 spread);
	void setGlobalDynamicsScale(Vector3f& scale);

	// _00      = VTBL
	// _00-_40  = TChaseMtx3
};

} // namespace efx

#endif

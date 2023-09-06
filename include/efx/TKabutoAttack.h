#ifndef _EFX_TKABUTOATTACK_H
#define _EFX_TKABUTOATTACK_H

#include "efx/TSimpleMtx.h"

namespace efx {
struct TKabutoAttack : public TSimpleMtx1 {
	inline TKabutoAttack(Matrixf* mtx)
	    : TSimpleMtx1(mtx, PID_KabutoAttack)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};
} // namespace efx

#endif

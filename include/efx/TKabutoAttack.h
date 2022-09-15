#ifndef _EFX_TKABUTOATTACK_H
#define _EFX_TKABUTOATTACK_H

#include "efx/TSimpleMtx.h"

namespace efx {
struct TKabutoAttack : public TSimpleMtx1 {
	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};
} // namespace efx

#endif

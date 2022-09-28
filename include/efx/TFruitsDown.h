#ifndef _EFX_TFRUITSDOWN_H
#define _EFX_TFRUITSDOWN_H

#include "types.h"
#include "efx/TSimple.h"

namespace efx {

struct TFruitsDownR : public TSimple2 {
	inline TFruitsDownR()
	    : TSimple2(PID_FruitsDownR_1, PID_FruitsDownR_2)
	{
	}
};

struct TFruitsDownP : public TSimple2 {
	inline TFruitsDownP()
	    : TSimple2(PID_FruitsDownP_1, PID_FruitsDownP_2)
	{
	}
};

} // namespace efx

#endif

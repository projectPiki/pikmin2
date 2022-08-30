#ifndef _EFX_TFRUITSDOWN_H
#define _EFX_TFRUITSDOWN_H

#include "types.h"
#include "efx/TSimple.h"

namespace efx {

struct TFruitsDownR : public TSimple2 {
	inline TFruitsDownR(u16 effectID1, u16 effectID2)
	    : TSimple2(effectID1, effectID2)
	{
	}
};

struct TFruitsDownP : public TSimple2 {
	inline TFruitsDownP(u16 effectID1, u16 effectID2)
	    : TSimple2(effectID1, effectID2)
	{
	}
};

} // namespace efx

#endif

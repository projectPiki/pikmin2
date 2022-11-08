#ifndef _EFX2D_T2DBATTLEDIVE_H
#define _EFX2D_T2DBATTLEDIVE_H

#include "types.h"
#include "efx2d/TSimple.h"

namespace efx2d {
struct T2DBattleDive : public TSimple3 {
	inline T2DBattleDive()
	    : TSimple3(PID_BattleDive_1, PID_BattleDive_2, PID_BattleDive_3)
	{
	}

	// _00     = VTBL
	// _00-_1C = TSimple3
};
} // namespace efx2d

#endif

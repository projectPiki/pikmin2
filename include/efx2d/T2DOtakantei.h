#ifndef _EFX2D_T2DOTAKANTEI_H
#define _EFX2D_T2DOTAKANTEI_H

#include "types.h"
#include "efx2d/TForever.h"

namespace efx2d {
struct T2DOtakantei : public TForever5 {
	inline T2DOtakantei()
	    : TForever5(PID_OtaKantei_1, PID_OtaKantei_2, PID_OtaKantei_3, PID_OtaKantei_4, PID_OtaKantei_5)
	{
	}

	// _00     = VTBL
	// _00-_0C = TForeverN
};
} // namespace efx2d

#endif

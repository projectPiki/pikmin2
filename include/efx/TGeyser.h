#ifndef _EFX_TGEYSER_H
#define _EFX_TGEYSER_H

#include "efx/TForever.h"

namespace efx {
struct TGeyserAct : public TForever3 {
	inline TGeyserAct()
	    : TForever3(PID_GeyserAct_1, PID_GeyserAct_2, PID_GeyserAct_3)
	{
	}

	// _00      = VTBL
	// _00-_34  = TForever3
};

struct TGeyserSet : public TForever2 {
	inline TGeyserSet()
	    : TForever2(PID_GeyserSet_1, PID_GeyserSet_2)
	{
	}

	// _00      = VTBL
	// _00-_24  = TForever2
};
} // namespace efx

#endif

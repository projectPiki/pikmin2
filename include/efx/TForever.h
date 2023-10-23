#ifndef _EFX_TFOREVER_H
#define _EFX_TFOREVER_H

#include "efx/TSync.h"
#include "efx/TSyncGroup.h"

namespace efx {
struct TForever : public TSync {
	TForever() { }

	inline TForever(u16 effectID) // probably
	    : TSync(effectID)
	{
		// mEffectID = effectID;
	}

	virtual ~TForever() { }                                     // _48 (weak, thunk at _1C)
	virtual void doExecuteEmitterOperation(JPABaseEmitter*) { } // _38 (weak)
	                                                            // _00		= VTBL
	                                                            // _00-_0E	= TSync
};

struct TForever2 : public TSyncGroup2<TForever> {
	TForever2(u16, u16);

	// _00		= VTBL
	// _00-_24	= TSyncGroup2<TForever>
};

struct TForever3 : public TSyncGroup3<TForever> {
	TForever3(u16, u16, u16);

	// _00		= VTBL
	// _00-_34	= TSyncGroup3<TForever>
};

struct TForever4 : public TSyncGroup4<TForever> {
	TForever4(u16, u16, u16, u16);

	// _00		= VTBL
	// _00-_44	= TSyncGroup4<TForever>
};
} // namespace efx

#endif

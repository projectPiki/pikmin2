#ifndef _EFX_TFOREVER_H
#define _EFX_TFOREVER_H

#include "efx/TSync.h"
#include "efx/TSyncGroup.h"

namespace efx {
struct TForever : public TSync {
	TForever();
	// vtable 2
	virtual void doExecuteEmitterOperation(JPABaseEmitter*); // _1C
	virtual ~TForever();                                     // _2C (thunk at _00)
};

struct TForever2 : public TSyncGroup2<TForever> {
	TForever2(unsigned short, unsigned short);
};

struct TForever3 : public TSyncGroup3<TForever> {
	TForever3(unsigned short, unsigned short, unsigned short);
};

struct TForever4 : public TSyncGroup4<TForever> {
	TForever4(unsigned short, unsigned short, unsigned short, unsigned short);
};
} // namespace efx

#endif

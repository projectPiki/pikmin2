#ifndef _EFX_CONTAINER_H
#define _EFX_CONTAINER_H

#include "efx/TForever.h"

namespace efx {
struct Container : public TForever {
	virtual void create(Arg*); // _08
	virtual ~Container();      // _48 (weak)

	// _00      = VTBL
	// _00-_10  = TForever
};

struct ContainerAct : public TForever2 {
	virtual void create(Arg*); // _08

	// _00      = VTBL
	// _00-_24  = TForever2
};
} // namespace efx

#endif

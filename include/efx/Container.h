#ifndef _EFX_CONTAINER_H
#define _EFX_CONTAINER_H

#include "efx/TForever.h"

namespace efx {
struct Container : public TForever {
	inline Container()
	    : TForever(PID_Container_Blue)
	{
	}
	virtual bool create(Arg*); // _08
	virtual ~Container() { }   // _48 (weak)

	// _00      = VTBL
	// _00-_10  = TForever
};

struct ContainerAct : public TForever2 {
	inline ContainerAct()
	    : TForever2(PID_ContainerAct_Blue_1, PID_ContainerAct_Blue_2)
	{
	}
	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_24  = TForever2
};
} // namespace efx

#endif

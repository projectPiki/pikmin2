#ifndef _SWEEPCALLBACK_H
#define _SWEEPCALLBACK_H

/*
    __vt__13SweepCallback:
    .4byte 0
    .4byte 0
    .4byte invoke__13SweepCallbackFPQ210SweepPrune6ObjectPQ210SweepPrune6Object
*/

struct SweepCallback {
	virtual void invoke(SweepPrune::Object*, SweepPrune::Object*); // _08

	// _00 VTBL
};

#endif

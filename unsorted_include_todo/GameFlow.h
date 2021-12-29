#ifndef _GAMEFLOW_H
#define _GAMEFLOW_H

/*
    __vt__8GameFlow:
    .4byte 0
    .4byte 0
    .4byte run__8GameFlowFv
    .4byte getCurrentSection__8GameFlowFv
*/

struct GameFlow {
	virtual void run();               // _00
	virtual void getCurrentSection(); // _04

	// _00 VTBL
};

#endif

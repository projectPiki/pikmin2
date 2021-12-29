#ifndef _JUTGRAPHFIFO_H
#define _JUTGRAPHFIFO_H

/*
    __vt__12JUTGraphFifo:
    .4byte 0
    .4byte 0
    .4byte __dt__12JUTGraphFifoFv
    .4byte 0
*/

struct JUTGraphFifo {
	virtual ~JUTGraphFifo(); // _00
	virtual void _04() = 0;  // _04

	// _00 VTBL
};

#endif

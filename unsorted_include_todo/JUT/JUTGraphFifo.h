#ifndef _JUTGRAPHFIFO_H
#define _JUTGRAPHFIFO_H

/*
    __vt__12JUTGraphFifo:
    .4byte 0
    .4byte 0
    .4byte __dt__12JUTGraphFifoFv
*/

struct JUTGraphFifo {
	virtual ~JUTGraphFifo(); // _08

	JUTGraphFifo(unsigned long);
};

#endif

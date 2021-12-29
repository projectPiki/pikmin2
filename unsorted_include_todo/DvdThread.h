#ifndef _DVDTHREAD_H
#define _DVDTHREAD_H

/*
    __vt__9DvdThread:
    .4byte 0
    .4byte 0
    .4byte __dt__9DvdThreadFv
    .4byte run__9DvdThreadFv
*/

struct DvdThread {
	virtual ~DvdThread(); // _00
	virtual void run();   // _04

	// _00 VTBL
};

#endif

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
	virtual ~DvdThread(); // _08
	virtual void run();   // _0C

	// _00 VTBL
};

#endif

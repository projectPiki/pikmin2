#ifndef _JASTASKTHREAD_H
#define _JASTASKTHREAD_H

/*
    __vt__13JASTaskThread:
    .4byte 0
    .4byte 0
    .4byte __dt__13JASTaskThreadFv
    .4byte run__13JASTaskThreadFv
*/

struct JASTaskThread {
	virtual ~JASTaskThread(); // _00
	virtual void run();       // _04

	// _00 VTBL
};

#endif

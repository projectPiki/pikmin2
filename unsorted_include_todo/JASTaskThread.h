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
	virtual ~JASTaskThread(); // _08
	virtual void run();       // _0C

	// _00 VTBL
};

#endif

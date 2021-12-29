#ifndef _JKRTASK_H
#define _JKRTASK_H

/*
    __vt__7JKRTask:
    .4byte 0
    .4byte 0
    .4byte __dt__7JKRTaskFv
    .4byte run__7JKRTaskFv
*/

struct JKRTask {
	virtual ~JKRTask(); // _00
	virtual void run(); // _04

	// _00 VTBL
};

#endif

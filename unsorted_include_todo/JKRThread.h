#ifndef _JKRTHREAD_H
#define _JKRTHREAD_H

/*
    __vt__9JKRThread:
    .4byte 0
    .4byte 0
    .4byte __dt__9JKRThreadFv
    .4byte run__9JKRThreadFv
*/

struct JKRThread {
	virtual ~JKRThread(); // _00
	virtual void run();   // _04

	// _00 VTBL
};

#endif

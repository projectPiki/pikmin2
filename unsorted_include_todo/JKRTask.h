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
	virtual ~JKRTask(); // _08
	virtual void run(); // _0C

	void create(int, int, unsigned long, JKRHeap*);
	void request(void (*)(void*), void*, void*);
};

#endif

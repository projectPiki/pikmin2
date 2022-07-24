#ifndef _APPTHREAD_H
#define _APPTHREAD_H

/*
    __vt__9AppThread:
    .4byte 0
    .4byte 0
    .4byte __dt__9AppThreadFv
    .4byte run__9JKRThreadFv
*/

struct JKRThread {
	virtual ~JKRThread(); // _08 (inline)
	virtual void run();   // _0C (inline)
};

struct AppThread : public JKRThread {
	virtual ~AppThread(); // _08 (inline)
};

#endif

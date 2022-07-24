#ifndef _JUTEXCEPTION_H
#define _JUTEXCEPTION_H

/*
    __vt__12JUTException:
    .4byte 0
    .4byte 0
    .4byte __dt__12JUTExceptionFv
    .4byte run__12JUTExceptionFv
*/

struct JUTException {
	virtual ~JUTException(); // _08
	virtual void run();      // _0C

	// _00 VTBL
};

#endif

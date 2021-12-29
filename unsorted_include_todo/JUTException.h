#ifndef _JUTEXCEPTION_H
#define _JUTEXCEPTION_H

/*
    __vt__12JUTException:
    .4byte 0
    .4byte 0
    .4byte __dt__12JUTExceptionFv
    .4byte run__12JUTExceptionFv
    .4byte 0
*/

struct JUTException {
	virtual ~JUTException(); // _00
	virtual void run();      // _04
	virtual void _08() = 0;  // _08

	// _00 VTBL
};

#endif

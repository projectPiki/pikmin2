#ifndef _JUTEXCEPTION_H
#define _JUTEXCEPTION_H

struct JUTException {
	virtual ~JUTException(); // _00
	virtual void run();      // _04
	virtual void _08() = 0;  // _08

	// _00 VTBL
};

#endif

#ifndef _APPTHREAD_H
#define _APPTHREAD_H

struct JKRThread {
	virtual void _00() = 0; // _00
	virtual void run();     // _04

	// _00 VTBL
};

struct AppThread : public JKRThread {
	virtual ~AppThread(); // _00
	virtual void run();   // _04

	// _00 VTBL
};

#endif

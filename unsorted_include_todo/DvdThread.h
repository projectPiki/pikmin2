#ifndef _DVDTHREAD_H
#define _DVDTHREAD_H

struct DvdThread {
	virtual ~DvdThread(); // _00
	virtual void run();   // _04

	// _00 VTBL
};

#endif

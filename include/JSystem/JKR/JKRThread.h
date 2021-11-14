#ifndef _JSYSTEM_JKR_JKRTHREAD_H
#define _JSYSTEM_JKR_JKRTHREAD_H

#include "types.h"

struct JKRThread {
	JKRThread(unsigned long, int, int);

	virtual ~JKRThread();
	virtual void run();
};

#endif

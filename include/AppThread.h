#ifndef _APPTHREAD_H
#define _APPTHREAD_H

#include "JSystem/JKR/JKRThread.h"

struct AppThread : public JKRThread {
	AppThread(unsigned long, int, int);
	virtual ~AppThread();
};

#endif
#ifndef _JSYSTEM_JAS_JASMUTEXLOCK_H
#define _JSYSTEM_JAS_JASMUTEXLOCK_H

#include "Dolphin/os.h"
#include "types.h"

struct JASMutexLock {
	// unused/inlined:
	JASMutexLock(OSMutex*);
	~JASMutexLock();
};

struct JASCriticalSection {
	~JASCriticalSection();
};

#endif

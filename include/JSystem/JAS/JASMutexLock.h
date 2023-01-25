#ifndef _JSYSTEM_JAS_JASMUTEXLOCK_H
#define _JSYSTEM_JAS_JASMUTEXLOCK_H

#include "Dolphin/os.h"
#include "types.h"

struct JASMutexLock {
	// unused/inlined:
	JASMutexLock(OSMutex* mutex)
	    : mMutex(mutex)
	{
		OSLockMutex(mutex);
	}
	~JASMutexLock() { OSUnlockMutex(mMutex); }

	OSMutex* mMutex;
};

/**
 * This might've been used for e.g. managing OSDisableInterrupts and OSRestoreInterrupts.
 * Nearly the entirety of this class is conjecture, solely based on the existence of the dtor in the linker map.
 */
struct JASCriticalSection {
	/** @fabricated */
	inline JASCriticalSection() { mInterrupts = OSDisableInterrupts(); }

	~JASCriticalSection() // unused/inlined
	{
		OSRestoreInterrupts(mInterrupts);
	}

	// volatile int mInterrupts;
	int mInterrupts;
};

#endif

#ifndef _JSYSTEM_JAS_JASMUTEXLOCK_H
#define _JSYSTEM_JAS_JASMUTEXLOCK_H

#include "Dolphin/os.h"
#include "types.h"

struct JASMutexLock {
	// unused/inlined:
	JASMutexLock(OSMutex* mutex)
	    : m_mutex(mutex)
	{
		OSLockMutex(mutex);
	}
	~JASMutexLock() { OSUnlockMutex(m_mutex); }

	OSMutex* m_mutex;
};

/**
 * This might've been used for e.g. managing OSDisableInterrupts and OSRestoreInterrupts.
 * Nearly the entirety of this class is conjecture, solely based on the existence of the dtor in the linker map.
 */
struct JASCriticalSection {
	/** @fabricated */
	inline JASCriticalSection() { m_interrupts = OSDisableInterrupts(); }

	~JASCriticalSection() // unused/inlined
	{
		OSRestoreInterrupts(m_interrupts);
	}

	// volatile int m_interrupts;
	int m_interrupts;
};

#endif

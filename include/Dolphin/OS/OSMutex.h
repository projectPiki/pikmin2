#ifndef _DOLPHIN_OS_OSMUTEX_H
#define _DOLPHIN_OS_OSMUTEX_H

#include "types.h"
#include "Dolphin/OS/OSUtil.h"
#include "Dolphin/OS/OSThread.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

////////// MUTEX TYPES ///////////
// Main mutually exclusive (mutex) locking struct.
struct OSMutex {
	OSThreadQueue queue; // _00
	OSThread* thread;    // _08, current owner.
	int count;           // _0C, lock count.
	OSMutexLink link;    // _10
};

// Cond struct (?) (size 0x8).
typedef struct OSCond {
	OSThreadQueue queue; // _00
} OSCond;

//////////////////////////////////

//////// MUTEX FUNCTIONS /////////
// Mutex functions.
void OSInitMutex(OSMutex* mutex);
void OSLockMutex(OSMutex* mutex);
void OSUnlockMutex(OSMutex* mutex);
BOOL OSTryLockMutex(OSMutex* mutex);

void __OSUnlockAllMutex(OSThread* thread);

// Cond functions.
void OSInitCond(OSCond* cond);
void OSWaitCond(OSCond* cond, OSMutex* mutex);
void OSSignalCond(OSCond* cond);

//////////////////////////////////

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif

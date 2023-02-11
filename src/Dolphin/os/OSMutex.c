#include "Dolphin/os.h"

/*
 * --INFO--
 * Address:	800EFB30
 * Size:	000038
 */
void OSInitMutex(OSMutex* mutex)
{
	OSInitThreadQueue(&mutex->queue);
	mutex->thread = nullptr;
	mutex->count  = 0;
}

/*
 * --INFO--
 * Address:	800EFB68
 * Size:	0000DC
 */
void OSLockMutex(OSMutex* mutex)
{
	BOOL enabled            = OSDisableInterrupts();
	OSThread* currentThread = OSGetCurrentThread();
	OSThread* ownerThread;

	while (TRUE) {
		ownerThread = ((OSMutex*)mutex)->thread;
		if (ownerThread == 0) {
			mutex->thread = currentThread;
			mutex->count++;
			AddTailMutex(&currentThread->queueMutex, mutex, link);
			break;
		} else if (ownerThread == currentThread) {
			mutex->count++;
			break;
		} else {
			currentThread->mutex = mutex;
			__OSPromoteThread(mutex->thread, currentThread->priority);
			OSSleepThread(&mutex->queue);
			currentThread->mutex = nullptr;
		}
	}
	OSRestoreInterrupts(enabled);
}

/*
 * --INFO--
 * Address:	800EFC44
 * Size:	0000C8
 */
void OSUnlockMutex(OSMutex* mutex)
{
	BOOL enabled            = OSDisableInterrupts();
	OSThread* currentThread = OSGetCurrentThread();

	if (mutex->thread == currentThread && --mutex->count == 0) {
		RemoveItemMutex(&currentThread->queueMutex, mutex, link);
		mutex->thread = nullptr;
		if (currentThread->priority < currentThread->base) {
			currentThread->priority = __OSGetEffectivePriority(currentThread);
		}

		OSWakeupThread(&mutex->queue);
	}
	OSRestoreInterrupts(enabled);
}

/*
 * --INFO--
 * Address:	800EFD0C
 * Size:	000070
 */
void __OSUnlockAllMutex(OSThread* thread)
{
	OSMutex* mutex;

	while (thread->queueMutex.head) {
		RemoveHeadMutex(&thread->queueMutex, mutex, link);
		mutex->count  = 0;
		mutex->thread = nullptr;
		OSWakeupThread(&mutex->queue);
	}
}

/*
 * --INFO--
 * Address:	800EFD7C
 * Size:	0000BC
 */
BOOL OSTryLockMutex(OSMutex* mutex)
{
	BOOL enabled            = OSDisableInterrupts();
	OSThread* currentThread = OSGetCurrentThread();
	BOOL locked;

	if (mutex->thread == nullptr) {
		mutex->thread = currentThread;
		mutex->count++;
		AddTailMutex(&currentThread->queueMutex, mutex, link);
		locked = TRUE;

	} else if (mutex->thread == currentThread) {
		mutex->count++;
		locked = TRUE;

	} else {
		locked = FALSE;
	}

	OSRestoreInterrupts(enabled);
	return locked;
}

/*
 * --INFO--
 * Address:	800EFE38
 * Size:	000020
 */
void OSInitCond(OSCond* cond) { OSInitThreadQueue(&cond->queue); }

/*
 * --INFO--
 * Address:	800EFE58
 * Size:	0000D4
 */
void OSWaitCond(OSCond* cond, OSMutex* mutex)
{
	BOOL enabled            = OSDisableInterrupts();
	OSThread* currentThread = OSGetCurrentThread();
	s32 count;

	if (mutex->thread == currentThread) {
		count        = mutex->count;
		mutex->count = 0;
		RemoveItemMutex(&currentThread->queueMutex, mutex, link);
		mutex->thread = nullptr;

		if (currentThread->priority < currentThread->base) {
			currentThread->priority = __OSGetEffectivePriority(currentThread);
		}

		OSDisableScheduler();
		OSWakeupThread(&mutex->queue);
		OSEnableScheduler();
		OSSleepThread(&cond->queue);
		OSLockMutex(mutex);
		mutex->count = count;
	}

	OSRestoreInterrupts(enabled);
}

/*
 * --INFO--
 * Address:	800EFF2C
 * Size:	000020
 */
void OSSignalCond(OSCond* cond) { OSWakeupThread(&cond->queue); }

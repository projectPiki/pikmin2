#include "Dolphin/os.h"

/**
 * @note Address: 0x800EFB30
 * @note Size: 0x38
 */
void OSInitMutex(OSMutex* mutex)
{
	OSInitThreadQueue(&mutex->queue);
	mutex->thread = nullptr;
	mutex->count  = 0;
}

/**
 * @note Address: 0x800EFB68
 * @note Size: 0xDC
 */
void OSLockMutex(OSMutex* mutex)
{
	BOOL enabled            = OSDisableInterrupts();
	OSThread* currentThread = OSGetCurrentThread();
	OSThread* ownerThread;

	while (TRUE) {
		ownerThread = mutex->thread;
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

/**
 * @note Address: 0x800EFC44
 * @note Size: 0xC8
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

/**
 * @note Address: 0x800EFD0C
 * @note Size: 0x70
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

/**
 * @note Address: 0x800EFD7C
 * @note Size: 0xBC
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

/**
 * @note Address: 0x800EFE38
 * @note Size: 0x20
 */
void OSInitCond(OSCond* cond) { OSInitThreadQueue(&cond->queue); }

/**
 * @note Address: 0x800EFE58
 * @note Size: 0xD4
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

/**
 * @note Address: 0x800EFF2C
 * @note Size: 0x20
 */
void OSSignalCond(OSCond* cond) { OSWakeupThread(&cond->queue); }

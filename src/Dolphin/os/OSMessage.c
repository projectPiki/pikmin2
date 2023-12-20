#include "Dolphin/os.h"

// TODO: this matches, but breaks JKRAramStream with types etc, need to fix both together

/**
 * @note Address: 0x800EF4BC
 * @note Size: 0x60
 */
void OSInitMessageQueue(OSMessageQueue* queue, OSMessage* msgArray, s32 msgCount)
{
	OSInitThreadQueue(&queue->queueSend);
	OSInitThreadQueue(&queue->queueReceive);
	queue->msgArray   = msgArray;
	queue->msgCount   = msgCount;
	queue->firstIndex = 0;
	queue->usedCount  = 0;
}

/**
 * When (`flags` & 1), then this function blocks execution of the current
 * thread if `queue` is full, until such a time that it is no longer full.
 * When not (`flags` & 1), this function returns `false` immediately if
 * `queue` is full. This function returns `true` when the message is
 * successfully queued.
 * @note Address: 0x800EF51C
 * @note Size: 0xC8
 */
BOOL OSSendMessage(OSMessageQueue* queue, void* msg, s32 flags)
{
	int mesgId;
	u32 interrupt;

	interrupt = OSDisableInterrupts();

	while (queue->msgCount <= queue->usedCount) {
		if (!(flags & OS_MSG_PERSISTENT)) {
			OSRestoreInterrupts(interrupt);
			return FALSE;
		}

		OSSleepThread(&queue->queueSend);
	}

	mesgId                  = (queue->firstIndex + queue->usedCount) % queue->msgCount;
	queue->msgArray[mesgId] = msg;
	queue->usedCount++;

	OSWakeupThread(&queue->queueReceive);
	OSRestoreInterrupts(interrupt);
	return TRUE;
}

/**
 * @note Address: 0x800EF5E4
 * @note Size: 0xDC
 */
BOOL OSReceiveMessage(OSMessageQueue* queue, void** buffer, s32 flags)
{
	u32 interrupt;

	interrupt = OSDisableInterrupts();

	while (queue->usedCount == 0) {
		if (!(flags & OS_MSG_PERSISTENT)) {
			OSRestoreInterrupts(interrupt);
			return FALSE;
		}

		OSSleepThread(&queue->queueReceive);
	}

	if (buffer) {
		buffer[0] = queue->msgArray[queue->firstIndex];
	}

	queue->firstIndex = (queue->firstIndex + 1) % queue->msgCount;
	queue->usedCount--;

	OSWakeupThread(&queue->queueSend);
	OSRestoreInterrupts(interrupt);
	return TRUE;
}

/**
 * @note Address: 0x800EF6C0
 * @note Size: 0xD4
 */
BOOL OSJamMessage(OSMessageQueue* queue, void* msg, s32 flags)
{
	s32 lastMesg;
	u32 interrupt;

	interrupt = OSDisableInterrupts();

	while (queue->msgCount <= queue->usedCount) {
		if (!(flags & OS_MSG_PERSISTENT)) {
			OSRestoreInterrupts(interrupt);
			return FALSE;
		}

		OSSleepThread(&queue->queueSend);
	}

	// Find last position in queue
	lastMesg                           = (queue->firstIndex + queue->msgCount - 1) % queue->msgCount;
	queue->firstIndex                  = lastMesg;
	queue->msgArray[queue->firstIndex] = msg;
	queue->usedCount++;

	OSWakeupThread(&queue->queueReceive);
	OSRestoreInterrupts(interrupt);
	return TRUE;
}

#include "Dolphin/os.h"

// TODO: this matches, but breaks JKRAramStream with types etc, need to fix both together

/*
 * --INFO--
 * Address:	800EF4BC
 * Size:	000060
 */
void OSInitMessageQueue(OSMessageQueue* queue, void** buffer, int capacity)
{
	OSInitThreadQueue(&queue->sendQueue);
	OSInitThreadQueue(&queue->recvQueue);
	queue->buffer   = buffer;
	queue->capacity = capacity;
	queue->front    = 0;
	queue->size     = 0;
}

/*
 * When (`flags` & 1), then this function blocks execution of the current
 * thread if `queue` is full, until such a time that it is no longer full.
 * When not (`flags` & 1), this function returns `false` immediately if
 * `queue` is full. This function returns `true` when the message is
 * successfully queued.
 * --INFO--
 * Address:	800EF51C
 * Size:	0000C8
 */
BOOL OSSendMessage(OSMessageQueue* queue, void* msg, int flags)
{
	int mesgId;
	u32 interrupt;

	interrupt = OSDisableInterrupts();

	while (queue->capacity <= queue->size) {
		if (!(flags & OS_MSG_PERSISTENT)) {
			OSRestoreInterrupts(interrupt);
			return FALSE;
		}

		OSSleepThread(&queue->sendQueue);
	}

	mesgId                = (queue->front + queue->size) % queue->capacity;
	queue->buffer[mesgId] = msg;
	queue->size++;

	OSWakeupThread(&queue->recvQueue);
	OSRestoreInterrupts(interrupt);
	return TRUE;
}

/*
 * --INFO--
 * Address:	800EF5E4
 * Size:	0000DC
 */
BOOL OSReceiveMessage(OSMessageQueue* queue, void** buffer, int flags)
{
	u32 interrupt;

	interrupt = OSDisableInterrupts();

	while (queue->size == 0) {
		if (!(flags & OS_MSG_PERSISTENT)) {
			OSRestoreInterrupts(interrupt);
			return FALSE;
		}

		OSSleepThread(&queue->recvQueue);
	}

	if (buffer) {
		buffer[0] = queue->buffer[queue->front];
	}

	queue->front = (queue->front + 1) % queue->capacity;
	queue->size--;

	OSWakeupThread(&queue->sendQueue);
	OSRestoreInterrupts(interrupt);
	return TRUE;
}

/*
 * --INFO--
 * Address:	800EF6C0
 * Size:	0000D4
 */
BOOL OSJamMessage(OSMessageQueue* queue, void* msg, int flags)
{
	s32 lastMesg;
	u32 interrupt;

	interrupt = OSDisableInterrupts();

	while (queue->capacity <= queue->size) {
		if (!(flags & OS_MSG_PERSISTENT)) {
			OSRestoreInterrupts(interrupt);
			return FALSE;
		}

		OSSleepThread(&queue->sendQueue);
	}

	// Find last position in queue
	lastMesg                    = (queue->front + queue->capacity - 1) % queue->capacity;
	queue->front                = lastMesg;
	queue->buffer[queue->front] = msg;
	queue->size++;

	OSWakeupThread(&queue->recvQueue);
	OSRestoreInterrupts(interrupt);
	return TRUE;
}

#include "types.h"
#include "Dolphin/dvd.h"

struct DVDQueue WaitingQueue[4];

/*
 * --INFO--
 * Address:	800DF45C
 * Size:	000038
 */
void __DVDClearWaitingQueue()
{
	int i;

	for (i = 0; i < 4; i++) {
		struct DVDQueue* ptr = &WaitingQueue[i];

		ptr->mHead = ptr;
		ptr->mTail = ptr;
	}
}

/*
 * --INFO--
 * Address:	800DF494
 * Size:	000068
 */
BOOL __DVDPushWaitingQueue(int idx, struct DVDQueue* newTail)
{
	BOOL intrEnabled = OSDisableInterrupts();

	struct DVDQueue* waitingQueue = &WaitingQueue[idx];

	waitingQueue->mTail->mHead = newTail;
	newTail->mTail             = waitingQueue->mTail;
	newTail->mHead             = waitingQueue;
	waitingQueue->mTail        = newTail;

	OSRestoreInterrupts(intrEnabled);
	return TRUE;
}

/*
 * --INFO--
 * Address:	800DF4FC
 * Size:	0000A0
 */
struct DVDQueue* __DVDPopWaitingQueue()
{
	BOOL intrEnabled = OSDisableInterrupts();
	int i;

	for (i = 0; i < 4; i++) {
		if (WaitingQueue[i].mHead != &WaitingQueue[i]) {
			struct DVDQueue* tempQueue;
			struct DVDQueue* outQueue;

			OSRestoreInterrupts(intrEnabled);

			intrEnabled            = OSDisableInterrupts();
			tempQueue              = &WaitingQueue[i];
			outQueue               = tempQueue->mHead;
			tempQueue->mHead       = outQueue->mHead;
			outQueue->mHead->mTail = tempQueue;
			OSRestoreInterrupts(intrEnabled);

			outQueue->mHead = nullptr;
			outQueue->mTail = nullptr;
			return outQueue;
		}
	}
	OSRestoreInterrupts(intrEnabled);
	return NULL;
}

/*
 * --INFO--
 * Address:	800DF59C
 * Size:	000058
 */
BOOL __DVDCheckWaitingQueue()
{
	BOOL intrEnabled = OSDisableInterrupts();
	int i;

	for (i = 0; i < 4; i++) {
		if (WaitingQueue[i].mHead != &WaitingQueue[i]) {
			OSRestoreInterrupts(intrEnabled);
			return TRUE;
		}
	}
	OSRestoreInterrupts(intrEnabled);
	return FALSE;
}

/*
 * --INFO--
 * Address:	800DF5F4
 * Size:	000060
 */
BOOL __DVDDequeueWaitingQueue(struct DVDQueue* queue)
{
	BOOL intrEnabled      = OSDisableInterrupts();
	struct DVDQueue* tail = queue->mTail;
	struct DVDQueue* head = queue->mHead;

	if (tail == nullptr || head == nullptr) {
		OSRestoreInterrupts(intrEnabled);
		return FALSE;
	}
	tail->mHead = head;
	head->mTail = tail;
	OSRestoreInterrupts(intrEnabled);
	return TRUE;
}

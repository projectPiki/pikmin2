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

		ptr->m_head = ptr;
		ptr->m_tail = ptr;
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

	waitingQueue->m_tail->m_head = newTail;
	newTail->m_tail              = waitingQueue->m_tail;
	newTail->m_head              = waitingQueue;
	waitingQueue->m_tail         = newTail;

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
		if (WaitingQueue[i].m_head != &WaitingQueue[i]) {
			struct DVDQueue* tempQueue;
			struct DVDQueue* outQueue;

			OSRestoreInterrupts(intrEnabled);

			intrEnabled              = OSDisableInterrupts();
			tempQueue                = &WaitingQueue[i];
			outQueue                 = tempQueue->m_head;
			tempQueue->m_head        = outQueue->m_head;
			outQueue->m_head->m_tail = tempQueue;
			OSRestoreInterrupts(intrEnabled);

			outQueue->m_head = nullptr;
			outQueue->m_tail = nullptr;
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
		if (WaitingQueue[i].m_head != &WaitingQueue[i]) {
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
	struct DVDQueue* tail = queue->m_tail;
	struct DVDQueue* head = queue->m_head;

	if (tail == nullptr || head == nullptr) {
		OSRestoreInterrupts(intrEnabled);
		return FALSE;
	}
	tail->m_head = head;
	head->m_tail = tail;
	OSRestoreInterrupts(intrEnabled);
	return TRUE;
}

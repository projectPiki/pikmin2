#include "PowerPC_EABI_Support/MetroTRK/trk.h"

TRKEventQueue gTRKEventQueue;

/*
 * --INFO--
 * Address:	800BB658
 * Size:	000058
 */
DSError TRKInitializeEventQueue()
{
	TRKInitializeMutex(&gTRKEventQueue);
	TRKAcquireMutex(&gTRKEventQueue);
	gTRKEventQueue.count   = 0;
	gTRKEventQueue.next    = 0;
	gTRKEventQueue.eventID = 0x100;
	TRKReleaseMutex(&gTRKEventQueue);
	return DS_NoError;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void TRKCopyEvent(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800BB5A4
 * Size:	0000B4
 */
BOOL TRKGetNextEvent(TRKEvent* ev)
{
	BOOL ret = FALSE;

	TRKAcquireMutex(&gTRKEventQueue);

	if (gTRKEventQueue.count > 0) {
		TRK_memcpy(ev, &gTRKEventQueue.events[gTRKEventQueue.next], sizeof(TRKEvent));
		gTRKEventQueue.count--;

		if (++gTRKEventQueue.next == 2) {
			gTRKEventQueue.next = 0;
		}

		ret = TRUE;
	}

	TRKReleaseMutex(&gTRKEventQueue);
	return ret;
}

/*
 * --INFO--
 * Address:	800BB4C4
 * Size:	0000E0
 */
DSError TRKPostEvent(TRKEvent* event)
{
	DSError ret = DS_NoError;
	int nextEventID;

	TRKAcquireMutex(&gTRKEventQueue);

	if (gTRKEventQueue.count == 2) {
		ret = DS_EventQueueFull;

	} else {
		nextEventID = (gTRKEventQueue.next + gTRKEventQueue.count) % 2;
		TRK_memcpy(&gTRKEventQueue.events[nextEventID], event, sizeof(TRKEvent));
		gTRKEventQueue.events[nextEventID].eventID = gTRKEventQueue.eventID;

		if (++gTRKEventQueue.eventID < 0x100) {
			gTRKEventQueue.eventID = 0x100;
		}

		gTRKEventQueue.count++;
	}

	TRKReleaseMutex(&gTRKEventQueue);
	return ret;
}

/*
 * --INFO--
 * Address:	800BB4AC
 * Size:	000018
 */
void TRKConstructEvent(TRKEvent* event, int eventType)
{
	event->eventType = eventType;
	event->eventID   = 0;
	event->msgBufID  = -1;
}

/*
 * --INFO--
 * Address:	800BB488
 * Size:	000024
 */
void TRKDestructEvent(TRKEvent* event) { TRKReleaseBuffer(event->msgBufID); }

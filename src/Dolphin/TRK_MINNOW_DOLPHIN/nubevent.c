#include "PowerPC_EABI_Support/MetroTRK/trk.h"

TRKEventQueue gTRKEventQueue;

/**
 * @note Address: 0x800BB658
 * @note Size: 0x58
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

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
void TRKCopyEvent(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800BB5A4
 * @note Size: 0xB4
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

/**
 * @note Address: 0x800BB4C4
 * @note Size: 0xE0
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

/**
 * @note Address: 0x800BB4AC
 * @note Size: 0x18
 */
void TRKConstructEvent(TRKEvent* event, int eventType)
{
	event->eventType = eventType;
	event->eventID   = 0;
	event->msgBufID  = -1;
}

/**
 * @note Address: 0x800BB488
 * @note Size: 0x24
 */
void TRKDestructEvent(TRKEvent* event) { TRKReleaseBuffer(event->msgBufID); }

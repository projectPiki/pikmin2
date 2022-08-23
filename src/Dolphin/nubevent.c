#include "Dolphin/trk.h"

TRKEventQueue gTRKEventQueue;

/*
 * --INFO--
 * Address:	800BB488
 * Size:	000024
 */
void TRKDestructEvent(TRKEvent* event) { TRKReleaseBuffer(event->m_bufferIndex); }

/*
 * --INFO--
 * Address:	800BB4AC
 * Size:	000018
 */
void TRKConstructEvent(TRKEvent* event, int eventType)
{
	event->m_eventType   = eventType;
	event->_04           = 0;
	event->m_bufferIndex = -1;
}

/*
 * --INFO--
 * Address:	800BB4C4
 * Size:	0000E0
 */
TRKResult TRKPostEvent(TRKEvent* ev)
{
	TRKResult ret = 0;
	int evID;

	TRKAcquireMutex(&gTRKEventQueue);

	if (gTRKEventQueue.m_currEvtID == 2) {
		ret = 256;
	} else {
		evID = (gTRKEventQueue.m_nextSlotToOverwrite + gTRKEventQueue.m_currEvtID) % 2;
		TRK_memcpy(&gTRKEventQueue.m_events[evID], ev, sizeof(TRKEvent));
		gTRKEventQueue.m_events[evID]._04 = gTRKEventQueue._24;

		if (++gTRKEventQueue._24 < 256) {
			gTRKEventQueue._24 = 256;
		}

		gTRKEventQueue.m_currEvtID++;
	}

	TRKReleaseMutex(&gTRKEventQueue);
	return ret;
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

	if (gTRKEventQueue.m_currEvtID > 0) {
		TRK_memcpy(ev, &gTRKEventQueue.m_events[gTRKEventQueue.m_nextSlotToOverwrite], sizeof(TRKEvent));
		gTRKEventQueue.m_currEvtID--;

		if (++gTRKEventQueue.m_nextSlotToOverwrite == 2) {
			gTRKEventQueue.m_nextSlotToOverwrite = 0;
		}

		ret = TRUE;
	}

	TRKReleaseMutex(&gTRKEventQueue);
	return ret;
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
 * Address:	800BB658
 * Size:	000058
 */
TRKResult TRKInitializeEventQueue()
{
	TRKInitializeMutex(&gTRKEventQueue);
	TRKAcquireMutex(&gTRKEventQueue);
	gTRKEventQueue.m_currEvtID           = 0;
	gTRKEventQueue.m_nextSlotToOverwrite = 0;
	gTRKEventQueue._24                   = 0x100;
	TRKReleaseMutex(&gTRKEventQueue);
	return TRKSuccess;
}

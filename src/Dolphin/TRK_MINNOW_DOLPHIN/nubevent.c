#include "PowerPC_EABI_Support/MetroTRK/trk.h"

TRKEventQueue gTRKEventQueue;

/*
 * --INFO--
 * Address:	800BB488
 * Size:	000024
 */
void TRKDestructEvent(TRKEvent* event) { TRKReleaseBuffer(event->mBufferIndex); }

/*
 * --INFO--
 * Address:	800BB4AC
 * Size:	000018
 */
void TRKConstructEvent(TRKEvent* event, int eventType)
{
	event->mEventType   = eventType;
	event->_04          = 0;
	event->mBufferIndex = -1;
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

	if (gTRKEventQueue.mCurrEvtID == 2) {
		ret = 256;
	} else {
		evID = (gTRKEventQueue.mNextSlotToOverwrite + gTRKEventQueue.mCurrEvtID) % 2;
		TRK_memcpy(&gTRKEventQueue.mEvents[evID], ev, sizeof(TRKEvent));
		gTRKEventQueue.mEvents[evID]._04 = gTRKEventQueue._24;

		if (++gTRKEventQueue._24 < 256) {
			gTRKEventQueue._24 = 256;
		}

		gTRKEventQueue.mCurrEvtID++;
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

	if (gTRKEventQueue.mCurrEvtID > 0) {
		TRK_memcpy(ev, &gTRKEventQueue.mEvents[gTRKEventQueue.mNextSlotToOverwrite], sizeof(TRKEvent));
		gTRKEventQueue.mCurrEvtID--;

		if (++gTRKEventQueue.mNextSlotToOverwrite == 2) {
			gTRKEventQueue.mNextSlotToOverwrite = 0;
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
	gTRKEventQueue.mCurrEvtID           = 0;
	gTRKEventQueue.mNextSlotToOverwrite = 0;
	gTRKEventQueue._24                  = 0x100;
	TRKReleaseMutex(&gTRKEventQueue);
	return TRKSuccess;
}

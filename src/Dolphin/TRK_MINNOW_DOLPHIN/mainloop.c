#include "types.h"
#include "PowerPC_EABI_Support/MetroTRK/trk.h"

extern TRKEventQueue gTRKEventQueue;
extern TRKState gTRKState;

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void TRKHandleRequestEvent(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void TRKHandleSupportEvent(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void TRKIdle(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800BB390
 * Size:	0000F8
 */
void TRKNubMainLoop(void)
{
	void* msg;
	TRKEvent event;
	BOOL isShutdownRequested;
	BOOL isNewInput;

	isShutdownRequested = FALSE;
	isNewInput          = FALSE;
	while (isShutdownRequested == FALSE) {
		if (TRKGetNextEvent(&event) != FALSE) {
			isNewInput = FALSE;

			switch (event.eventType) {
			case NUBEVENT_Null:
				break;

			case NUBEVENT_Request:
				msg = TRKGetBuffer(event.msgBufID);
				TRKDispatchMessage(msg);
				break;

			case NUBEVENT_Shutdown:
				isShutdownRequested = TRUE;
				break;

			case NUBEVENT_Breakpoint:
			case NUBEVENT_Exception:
				TRKTargetInterrupt(&event);
				break;

			case NUBEVENT_Support:
				TRKTargetSupportRequest();
				break;
			}

			TRKDestructEvent(&event);
			continue;
		}

		if ((isNewInput == FALSE) || (*(u8*)gTRKInputPendingPtr != '\0')) {
			isNewInput = TRUE;
			TRKGetInput();
			continue;
		}

		if (TRKTargetStopped() == FALSE) {
			TRKTargetContinue();
		}
		isNewInput = FALSE;
	}
}

#include "types.h"
#include "Dolphin/trk.h"

extern TRKEventQueue gTRKEventQueue;
extern TRKState gTRKState;

/*
 * --INFO--
 * Address:	800BB390
 * Size:	0000F8
 * Perhaps the switch case takes TRK CMD defines as inputs?
 * As seen in Dolphin/trk.h
 */
void TRKNubMainLoop(void)
{
	void* msg;
	TRKEvent sp8;
	BOOL var_r31;
	BOOL var_r30;

	var_r31 = FALSE;
	var_r30 = FALSE;
	while (var_r31 == FALSE) {
		if (TRKGetNextEvent(&sp8) != FALSE) {
			var_r30 = FALSE;
			switch (sp8.m_eventType) { /* irregular */
			case 0:
				break;
			case 2:
				msg = TRKGetBuffer(sp8.m_bufferIndex);
				TRKDispatchMessage(msg);
				break;
			case 1:
				var_r31 = TRUE;
				break;
			case 3:
			case 4:
				TRKTargetInterrupt(&sp8);
				break;
			case 5:
				TRKTargetSupportRequest();
				break;
			}
			TRKDestructEvent(&sp8);
		} else if ((var_r30 == FALSE) || (*(u8*)gTRKInputPendingPtr != '\0')) {
			var_r30 = TRUE;
			TRKGetInput();
		} else {
			if (TRKTargetStopped() == FALSE) {
				TRKTargetContinue();
			}
			var_r30 = FALSE;
		}
	}
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
 * Size:	000028
 */
void TRKHandleRequestEvent(void)
{
	// UNUSED FUNCTION
}

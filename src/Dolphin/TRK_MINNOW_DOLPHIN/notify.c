#include "types.h"
#include "Dolphin/trk.h"

/*
 * --INFO--
 * Address:	800BDD20
 * Size:	000098
 */
s32 TRKDoNotifyStopped(s32 arg0)
{
	s32 sp8;
	s32 spC;
	s32 sp10;
	s32 retval; // r31
	s32 temp_r3;

	temp_r3 = TRKGetFreeBuffer(&spC, &sp10);
	if ((retval = temp_r3) == 0) {
		if (retval == 0) {
			if (arg0 == 0x90) {
				TRKTargetAddStopInfo(sp10);
			} else {
				TRKTargetAddExceptionInfo(sp10);
			}
		}
		temp_r3 = TRKRequestSend(sp10, &sp8, 2, 3, 1);
		retval  = temp_r3;
		if (retval == 0) {
			TRKReleaseBuffer(sp8);
		}
		TRKReleaseBuffer(spC);
	}
	return retval;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void TRKWaitForACK(void)
{
	// UNUSED FUNCTION
}

#include "Dolphin/trk.h"

static s32 TRK_mainError;

/*
 * --INFO--
 * Address:	800C040C
 * Size:	000058
 */
int TRK_main(void)
{
	MWTRACE(1, "TRK_Main \n");
	TRK_mainError = TRKInitializeNub();

	if (!TRK_mainError) {
		TRKNubWelcome();
		TRKNubMainLoop();
	}

	TRK_mainError = TRKTerminateNub();

	return TRK_mainError;
}

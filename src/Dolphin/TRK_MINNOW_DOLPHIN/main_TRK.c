#include "PowerPC_EABI_Support/MetroTRK/trk.h"

static DSError TRK_mainError;

/*
 * --INFO--
 * Address:	800C040C
 * Size:	000058
 */
DSError TRK_main(void)
{
	MWTRACE(1, "TRK_Main \n");
	TRK_mainError = TRKInitializeNub();

	if (TRK_mainError == DS_NoError) {
		TRKNubWelcome();
		TRKNubMainLoop();
	}

	TRK_mainError = TRKTerminateNub();

	return TRK_mainError;
}

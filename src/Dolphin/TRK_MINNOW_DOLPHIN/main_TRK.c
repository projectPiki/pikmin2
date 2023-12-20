#include "PowerPC_EABI_Support/MetroTRK/trk.h"

static DSError TRK_mainError;

/**
 * @note Address: 0x800C040C
 * @note Size: 0x58
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

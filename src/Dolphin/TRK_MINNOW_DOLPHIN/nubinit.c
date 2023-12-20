#include "PowerPC_EABI_Support/MetroTRK/trk.h"

BOOL gTRKBigEndian;

/**
 * @note Address: 0x800BB6FC
 * @note Size: 0x14C
 */
DSError TRKInitializeNub(void)
{
	DSError ret;
	DSError uartErr;

	ret = TRKInitializeEndian();

	MWTRACE(1, "Initialize NUB\n");
	if (ret == DS_NoError) {
		usr_put_initialize();
	}
	if (ret == DS_NoError) {
		ret = TRKInitializeEventQueue();
	}
	if (ret == DS_NoError) {
		ret = TRKInitializeMessageBuffers();
	}
	if (ret == DS_NoError) {
		ret = TRKInitializeDispatcher();
	}
	InitializeProgramEndTrap();
	if (ret == DS_NoError) {
		ret = TRKInitializeSerialHandler();
	}
	if (ret == DS_NoError) {
		ret = TRKInitializeTarget();
	}
	if (ret == DS_NoError) {

		uartErr = TRKInitializeIntDrivenUART(0x0000e100, 1, 0, &gTRKInputPendingPtr);
		TRKTargetSetInputPendingPtr(gTRKInputPendingPtr);
		if (uartErr != DS_NoError) {
			ret = uartErr;
		}
	}
	return ret;
}

/**
 * @note Address: 0x800BB6D8
 * @note Size: 0x24
 */
DSError TRKTerminateNub(void)
{
	TRKTerminateSerialHandler();
	return DS_NoError;
}

/**
 * @note Address: 0x800BB6B0
 * @note Size: 0x28
 */
void TRKNubWelcome(void)
{
	TRK_board_display("MetroTRK for GAMECUBE v2.6"); //"MetroTRK for GAMECUBE v2.6"
	return;
}

/**
 * @note Address: N/A
 * @note Size: 0x70
 */
BOOL TRKInitializeEndian(void)
{
	u8 bendian[4];
	BOOL result   = FALSE;
	gTRKBigEndian = TRUE;

	bendian[0] = 0x12;
	bendian[1] = 0x34;
	bendian[2] = 0x56;
	bendian[3] = 0x78;

	if (*(u32*)bendian == 0x12345678) {
		gTRKBigEndian = TRUE;
	} else if (*(u32*)bendian == 0x78563412) {
		gTRKBigEndian = FALSE;
	} else {
		result = TRUE;
	}
	return result;
}

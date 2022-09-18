#include "Dolphin/trk.h"

BOOL gTRKBigEndian;

/*
 * --INFO--
 * Address:	........
 * Size:	000070
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

/*
 * --INFO--
 * Address:	800BB6B0
 * Size:	000028
 */
extern void TRK_board_display(char*);
void TRKNubWelcome(void)
{

	TRK_board_display("MetroTRK for GAMECUBE v2.6"); //"MetroTRK for GAMECUBE v2.6"
	return;
}

/*
 * --INFO--
 * Address:	800BB6D8
 * Size:	000024
 */
extern TRKResult TRKTerminateSerialHandler(void);
TRKResult TRKTerminateNub(void)
{

	TRKTerminateSerialHandler();
	return TRKSuccess;
}

/*
 * --INFO--
 * Address:	800BB6FC
 * Size:	00014C
 */
TRKResult TRKInitializeNub(void)
{
	TRKResult TVar1;
	TRKResult TVar2;

	TVar1 = TRKInitializeEndian();

	MWTRACE(1, "Initialize NUB\n");
	if (TVar1 == TRKSuccess) {
		usr_put_initialize();
	}
	if (TVar1 == TRKSuccess) {
		TVar1 = TRKInitializeEventQueue();
	}
	if (TVar1 == TRKSuccess) {
		TVar1 = TRKInitializeMessageBuffers();
	}
	if (TVar1 == TRKSuccess) {
		TVar1 = TRKInitializeDispatcher();
	}
	InitializeProgramEndTrap();
	if (TVar1 == TRKSuccess) {
		TVar1 = TRKInitializeSerialHandler();
	}
	if (TVar1 == TRKSuccess) {
		TVar1 = TRKInitializeTarget();
	}
	if (TVar1 == TRKSuccess) {

		TVar2 = TRKInitializeIntDrivenUART(0x0000e100, 1, 0, &gTRKInputPendingPtr);
		TRKTargetSetInputPendingPtr(gTRKInputPendingPtr);
		if (TVar2 != TRKSuccess) {
			TVar1 = TVar2;
		}
	}
	return TVar1;
}

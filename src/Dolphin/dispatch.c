#include "Dolphin/trk.h"

/*
 * --INFO--
 * Address:	800BC40C
 * Size:	000170
 */
TRKResult TRKDispatchMessage(TRKBuffer* param_1)
{
	u32 uVar1;

	uVar1 = 0x500;
	TRKSetBufferPosition(param_1, 0);
	MWTRACE(1, "Dispatch command 0x%08x\n", param_1->m_buffer[0]);
	switch (param_1->m_buffer[0]) {
	case 1:
		uVar1 = TRKDoConnect(param_1);
		break;
	case 2:
		uVar1 = TRKDoDisconnect(param_1);
		break;
	case 3:
		uVar1 = TRKDoReset(param_1);
		break;
	case 7:
		uVar1 = TRKDoOverride(param_1);
		break;
	case 4:
		uVar1 = TRKDoVersions(param_1);
		break;
	case 5:
		uVar1 = TRKDoSupportMask(param_1);
		break;
	case 0x10:
		uVar1 = TRKDoReadMemory(param_1);
		break;
	case 0x11:
		uVar1 = TRKDoWriteMemory(param_1);
		break;
	case 0x12:
		uVar1 = TRKDoReadRegisters(param_1);
		break;
	case 0x13:
		uVar1 = TRKDoWriteRegisters(param_1);
		break;
	case 0x18:
		uVar1 = TRKDoContinue(param_1);
		break;
	case 0x19:
		uVar1 = TRKDoStep(param_1);
		break;
	case 0x1a:
		uVar1 = TRKDoStop(param_1);
		break;
	case 0x17:
		uVar1 = TRKDoSetOption(param_1);
		break;
	}
	MWTRACE(1, "Dispatch complete err = %ld\n", uVar1);
	return uVar1;
}

/*
 * --INFO--
 * Address:	800BC57C
 * Size:	000008
 */
TRKResult TRKInitializeDispatcher(void) { return TRKSuccess; }

#include "PowerPC_EABI_Support/MetroTRK/trk.h"

/**
 * @note Address: 0x800BC57C
 * @note Size: 0x8
 */
DSError TRKInitializeDispatcher(void) { return DS_NoError; }

/**
 * @note Address: 0x800BC40C
 * @note Size: 0x170
 */
DSError TRKDispatchMessage(MessageBuffer* msg)
{
	u32 err;

	err = DS_DispatchError;
	TRKSetBufferPosition(msg, 0);
	MWTRACE(1, "Dispatch command 0x%08x\n", msg->data[4]);
	switch (msg->data[4]) {
	case DSMSG_Connect:
		err = TRKDoConnect(msg);
		break;
	case DSMSG_Disconnect:
		err = TRKDoDisconnect(msg);
		break;
	case DSMSG_Reset:
		err = TRKDoReset(msg);
		break;
	case DSMSG_Override:
		err = TRKDoOverride(msg);
		break;
	case DSMSG_Versions:
		err = TRKDoVersions(msg);
		break;
	case DSMSG_SupportMask:
		err = TRKDoSupportMask(msg);
		break;
	case DSMSG_ReadMemory:
		err = TRKDoReadMemory(msg);
		break;
	case DSMSG_WriteMemory:
		err = TRKDoWriteMemory(msg);
		break;
	case DSMSG_ReadRegisters:
		err = TRKDoReadRegisters(msg);
		break;
	case DSMSG_WriteRegisters:
		err = TRKDoWriteRegisters(msg);
		break;
	case DSMSG_Continue:
		err = TRKDoContinue(msg);
		break;
	case DSMSG_Step:
		err = TRKDoStep(msg);
		break;
	case DSMSG_Stop:
		err = TRKDoStop(msg);
		break;
	case DSMSG_SetOption:
		err = TRKDoSetOption(msg);
		break;
	}
	MWTRACE(1, "Dispatch complete err = %ld\n", err);
	return err;
}

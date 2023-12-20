#include "PowerPC_EABI_Support/MetroTRK/trk.h"

static u8 bUseSerialIO;

/**
 * @note Address: 0x800C0A00
 * @note Size: 0xC
 */
void SetUseSerialIO(u8 sio)
{
	bUseSerialIO = sio;
	return;
}

/**
 * @note Address: 0x800C09F0
 * @note Size: 0x10
 */
u8 GetUseSerialIO(void) { return bUseSerialIO; }

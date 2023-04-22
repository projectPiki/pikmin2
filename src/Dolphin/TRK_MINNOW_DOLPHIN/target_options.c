#include "PowerPC_EABI_Support/MetroTRK/target_options.h"

static u8 bUseSerialIO;

/*
 * --INFO--
 * Address:	800C0A00
 * Size:	00000C
 */
void SetUseSerialIO(unsigned char sio)
{
	bUseSerialIO = sio;
	return;
}

/*
 * --INFO--
 * Address:	800C09F0
 * Size:	000010
 */
unsigned char GetUseSerialIO(void) { return bUseSerialIO; }

#include "PowerPC_EABI_Support/MetroTRK/trk.h"

static u8 bUseSerialIO;

/*
 * --INFO--
 * Address:	800C0A00
 * Size:	00000C
 */
void SetUseSerialIO(u8 sio)
{
	bUseSerialIO = sio;
	return;
}

/*
 * --INFO--
 * Address:	800C09F0
 * Size:	000010
 */
u8 GetUseSerialIO(void) { return bUseSerialIO; }

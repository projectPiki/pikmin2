#include "Dolphin/target_options.h"

static u8 bUseSerialIO;

/*
 * --INFO--
 * Address:	800C09F0
 * Size:	000010
 */
unsigned char GetUseSerialIO(void) { return bUseSerialIO; }

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

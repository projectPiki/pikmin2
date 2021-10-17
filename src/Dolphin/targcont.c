#include "Dolphin/trk.h"

/*
 * --INFO--
 * Address:	800C09BC
 * Size:	000034
 */
unsigned int TRKTargetContinue(void)
{
	TRKTargetSetStopped(0);
	UnreserveEXI2Port();
	TRKSwapAndGo();
	ReserveEXI2Port();
	return 0;
}

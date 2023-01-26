#include "Dolphin/trk.h"

/*
 * --INFO--
 * Address:	800C09BC
 * Size:	000034
 */
TRKResult TRKTargetContinue(void)
{
	TRKTargetSetStopped(0);
	UnreserveEXI2Port();
	TRKSwapAndGo();
	ReserveEXI2Port();
	return EXIT_SUCCESS;
}

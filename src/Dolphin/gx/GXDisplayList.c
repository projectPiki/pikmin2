#include "Dolphin/gx.h"

/*
 * --INFO--
 * Address:	........
 * Size:	0000CC
 */
void GXBeginDisplayList(void* dl, u32 dlSize)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C4
 */
u32 GXEndDisplayList(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E93D8
 * Size:	000070
 */
void GXCallDisplayList(void* dl, u32 byteCnt)
{
	if (__GXData->_5AC != 0) {
		__GXSetDirtyState();
	}
	if (__GXData->_000[0] == 0) {
		__GXSendFlushPrim();
	}
	GXWGFifo.u8  = 0x40;
	GXWGFifo.u32 = dl;
	GXWGFifo.u32 = byteCnt;
}

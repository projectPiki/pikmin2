#include "Dolphin/gx.h"

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
	if (__GXData->_000.w == 0) {
		__GXSendFlushPrim();
	}
	GXWGFifo.u8  = 0x40;
	GXWGFifo.u32 = (u32)dl;
	GXWGFifo.u32 = byteCnt;
}

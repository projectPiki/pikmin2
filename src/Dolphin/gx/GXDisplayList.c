#include "Dolphin/gx.h"

/**
 * @note Address: 0x800E93D8
 * @note Size: 0x70
 */
void GXCallDisplayList(void* dl, u32 byteCnt)
{
	if (gx->dirtyState) {
		__GXSetDirtyState();
	}
	if (GX_CHECK_FLUSH()) {
		__GXSendFlushPrim();
	}
	GX_WRITE_U8(GX_FIFO_CMD_CALL_DL);
	GX_WRITE_U32((u32)dl);
	GX_WRITE_U32(byteCnt);
}

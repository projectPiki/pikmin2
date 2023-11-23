#include "Dolphin/gx.h"

/*
 * --INFO--
 * Address:	800E5908
 * Size:	000080
 */
void __GXSetDirtyState(void)
{
	u32 dirtyFlags = gx->dirtyState;

	if (dirtyFlags & 1) {
		__GXSetSUTexRegs();
	}

	if (dirtyFlags & 2) {
		__GXUpdateBPMask();
	}

	if (dirtyFlags & 4) {
		__GXSetGenMode();
	}

	if (dirtyFlags & 8) {
		__GXSetVCD();
	}

	if (dirtyFlags & 0x10) {
		__GXSetVAT();
	}

	if (dirtyFlags & 0x18) {
		__GXCalculateVLim();
	}

	gx->dirtyState = 0;
}

/*
 * --INFO--
 * Address:	800E5988
 * Size:	0000D0
 */
void GXBegin(GXPrimitive type, GXVtxFmt fmt, u16 vert_num)
{
	if (gx->dirtyState) {
		__GXSetDirtyState();
	}

	if (GX_CHECK_FLUSH()) {
		__GXSendFlushPrim();
	}

	GX_WRITE_U8(fmt | type);
	GX_WRITE_U16(vert_num);
}

/*
 * --INFO--
 * Address:	800E5A58
 * Size:	000088
 */
void __GXSendFlushPrim(void)
{
	u32 i, sz;
	u16 num = gx->vNum;
	sz      = (num * gx->vLim);

	GX_WRITE_U8(0x98);
	GX_WRITE_U16(num);

	for (i = 0; i < sz; i += 4) {
		GX_WRITE_U32(0);
	}

	gx->bpSentNot = GX_TRUE;
	/*
	.loc_0x0:
	  lwz       r3, -0x6D70(r2)
	  li        r0, 0x98
	  lis       r5, 0xCC01
	  lhz       r6, 0x4(r3)
	  li        r4, 0
	  lhz       r3, 0x6(r3)
	  mullw     r7, r6, r3
	  stb       r0, -0x8000(r5)
	  sth       r6, -0x8000(r5)
	  addi      r3, r7, 0x3
	  cmplwi    r7, 0
	  rlwinm    r3,r3,30,2,31
	  ble-      .loc_0x78
	  rlwinm.   r0,r3,29,3,31
	  mtctr     r0
	  beq-      .loc_0x6C

	.loc_0x40:
	  stw       r4, -0x8000(r5)
	  stw       r4, -0x8000(r5)
	  stw       r4, -0x8000(r5)
	  stw       r4, -0x8000(r5)
	  stw       r4, -0x8000(r5)
	  stw       r4, -0x8000(r5)
	  stw       r4, -0x8000(r5)
	  stw       r4, -0x8000(r5)
	  bdnz+     .loc_0x40
	  andi.     r3, r3, 0x7
	  beq-      .loc_0x78

	.loc_0x6C:
	  mtctr     r3

	.loc_0x70:
	  stw       r4, -0x8000(r5)
	  bdnz+     .loc_0x70

	.loc_0x78:
	  lwz       r3, -0x6D70(r2)
	  li        r0, 0x1
	  sth       r0, 0x2(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E5AE0
 * Size:	000040
 */
void GXSetLineWidth(u8 width, GXTexOffset offsets)
{
	GXData* data = gx;

	GX_BITFIELD_SET(data->lpSize, 24, 8, width);
	GX_BITFIELD_SET(data->lpSize, 13, 3, offsets);
	GXWGFifo.u8     = 0x61;
	GXWGFifo.u32    = data->lpSize;
	data->bpSentNot = GX_FALSE;
}

/*
 * --INFO--
 * Address:	800E5B20
 * Size:	000040
 */
void GXSetPointSize(u8 size, GXTexOffset offsets)
{
	GXData* data = gx;

	GX_BITFIELD_SET(data->lpSize, 16, 8, size);
	GX_BITFIELD_SET(data->lpSize, 10, 3, offsets);
	GXWGFifo.u8     = 0x61;
	GXWGFifo.u32    = data->lpSize;
	data->bpSentNot = GX_FALSE;
}

/*
 * --INFO--
 * Address:	800E5B60
 * Size:	000048
 */
void GXEnableTexOffsets(GXTexCoordID coord, GXBool line, GXBool point)
{
	GXData* data = gx;

	GX_BITFIELD_SET(data->suTs0[coord], 13, 1, line);
	GX_BITFIELD_SET(data->suTs0[coord], 12, 1, point);
	GXWGFifo.u8     = 0x61;
	GXWGFifo.u32    = data->suTs0[coord];
	data->bpSentNot = GX_FALSE;
}

/*
 * --INFO--
 * Address:	800E5BA8
 * Size:	000044
 */
void GXSetCullMode(GXCullMode mode)
{
	switch (mode) {
	case GX_CULL_FRONT:
		mode = GX_CULL_BACK;
		break;
	case GX_CULL_BACK:
		mode = GX_CULL_FRONT;
		break;
	}

	GX_BITFIELD_SET(gx->genMode, 16, 2, mode);
	gx->dirtyState |= 4;
}

/*
 * --INFO--
 * Address:	800E5BEC
 * Size:	000034
 */
void GXSetCoPlanar(GXBool enable)
{
	GXData* data = gx;

	GX_BITFIELD_SET(data->genMode, 12, 1, enable);
	GXWGFifo.u8  = 0x61;
	GXWGFifo.u32 = 0xFE080000;
	GXWGFifo.u8  = 0x61;
	GXWGFifo.u32 = data->genMode;
}

/*
 * --INFO--
 * Address:	800E5C20
 * Size:	000024
 */
void __GXSetGenMode(void)
{
	GXWGFifo.u8   = 0x61;
	GXWGFifo.u32  = gx->genMode;
	gx->bpSentNot = GX_FALSE;
}

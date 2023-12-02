#include "Dolphin/gx.h"

/*
 * --INFO--
 * Address:	........
 * Size:	000174
 */
void GXProject(f32 x, f32 y, f32 z, Mtx viewMtx, f32* projMtx, f32* viewport, f32* screenX, f32* screenY, f32* screenZ)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void WriteProjPS(register volatile void* dst, register const f32* src)
{
	register f32 ps_0, ps_1, ps_2;

	// clang-format off
    asm {
        psq_l  ps_0,  0(src), 0, 0
        psq_l  ps_1,  8(src), 0, 0
        psq_l  ps_2, 16(src), 0, 0
        psq_st ps_0,  0(dst), 0, 0
        psq_st ps_1,  0(dst), 0, 0
        psq_st ps_2,  0(dst), 0, 0
    }
	// clang-format on
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void Copy6Floats(register f32* dst, register const f32* src)
{
	register f32 ps_0, ps_1, ps_2;

	// clang-format off
    asm {
        psq_l  ps_0,  0(src), 0, 0
        psq_l  ps_1,  8(src), 0, 0
        psq_l  ps_2, 16(src), 0, 0
        psq_st ps_0,  0(dst), 0, 0
        psq_st ps_1,  8(dst), 0, 0
        psq_st ps_2, 16(dst), 0, 0
    }
	// clang-format on
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void __GXSetProjection(void)
{
	volatile void* fifo = (volatile void*)GXFIFO_ADDR;
	GX_XF_LOAD_REGS(6, GX_XF_REG_PROJECTIONA);
	WriteProjPS(fifo, gx->projMtx);
	GX_WRITE_U32(gx->projType);
}

/*
 * --INFO--
 * Address:	800E9448
 * Size:	0000A4
 */
void GXSetProjection(const Mtx44 proj, GXProjectionType type)
{
	gx->projType = type;

	gx->projMtx[0] = proj[0][0];
	gx->projMtx[2] = proj[1][1];
	gx->projMtx[4] = proj[2][2];
	gx->projMtx[5] = proj[2][3];

	if (type == GX_ORTHOGRAPHIC) {
		gx->projMtx[1] = proj[0][3];
		gx->projMtx[3] = proj[1][3];
	} else {
		gx->projMtx[1] = proj[0][2];
		gx->projMtx[3] = proj[1][2];
	}

	__GXSetProjection();

	gx->bpSentNot = GX_TRUE;
	/*
	.loc_0x0:
	  lwz       r5, -0x6D70(r2)
	  cmpwi     r4, 0x1
	  stw       r4, 0x4D8(r5)
	  lfs       f0, 0x0(r3)
	  stfs      f0, 0x4DC(r5)
	  lfs       f0, 0x14(r3)
	  stfs      f0, 0x4E4(r5)
	  lfs       f0, 0x28(r3)
	  stfs      f0, 0x4EC(r5)
	  lfs       f0, 0x2C(r3)
	  stfs      f0, 0x4F0(r5)
	  bne-      .loc_0x44
	  lfs       f0, 0xC(r3)
	  stfs      f0, 0x4E0(r5)
	  lfs       f0, 0x1C(r3)
	  stfs      f0, 0x4E8(r5)
	  b         .loc_0x54

	.loc_0x44:
	  lfs       f0, 0x8(r3)
	  stfs      f0, 0x4E0(r5)
	  lfs       f0, 0x18(r3)
	  stfs      f0, 0x4E8(r5)

	.loc_0x54:
	  lis       r5, 0xCC01
	  lwz       r4, -0x6D70(r2)
	  li        r0, 0x10
	  lis       r3, 0x6
	  stb       r0, -0x8000(r5)
	  addi      r0, r3, 0x1020
	  stw       r0, -0x8000(r5)
	  subi      r6, r5, 0x8000
	  addi      r3, r4, 0x4DC
	  psq_l     f2,0x0(r3),0,0
	  psq_l     f1,0x8(r3),0,0
	  psq_l     f0,0x10(r3),0,0
	  psq_st    f2,0x0(r6),0,0
	  psq_st    f1,0x0(r6),0,0
	  psq_st    f0,0x0(r6),0,0
	  lwz       r3, 0x4D8(r4)
	  li        r0, 0x1
	  stw       r3, -0x8000(r5)
	  sth       r0, 0x2(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E94EC
 * Size:	00008C
 */
void GXSetProjectionv(f32* proj)
{
	gx->projType = proj[0] == 0.0f ? GX_PERSPECTIVE : GX_ORTHOGRAPHIC;
	Copy6Floats(gx->projMtx, proj + 1);

	__GXSetProjection();
	gx->bpSentNot = GX_TRUE;
	/*
	.loc_0x0:
	  lfs       f1, -0x6C60(r2)
	  lfs       f0, 0x0(r3)
	  fcmpu     cr0, f1, f0
	  bne-      .loc_0x18
	  li        r0, 0
	  b         .loc_0x1C

	.loc_0x18:
	  li        r0, 0x1

	.loc_0x1C:
	  lwz       r5, -0x6D70(r2)
	  addi      r3, r3, 0x4
	  stw       r0, 0x4D8(r5)
	  addi      r6, r5, 0x4DC
	  psq_l     f2,0x0(r3),0,0
	  psq_l     f1,0x8(r3),0,0
	  psq_l     f0,0x10(r3),0,0
	  psq_st    f2,0x0(r6),0,0
	  psq_st    f1,0x8(r6),0,0
	  psq_st    f0,0x10(r6),0,0
	  lis       r4, 0xCC01
	  li        r0, 0x10
	  lis       r3, 0x6
	  stb       r0, -0x8000(r4)
	  addi      r0, r3, 0x1020
	  stw       r0, -0x8000(r4)
	  subi      r3, r4, 0x8000
	  psq_l     f2,0x0(r6),0,0
	  psq_l     f1,0x8(r6),0,0
	  psq_l     f0,0x10(r6),0,0
	  psq_st    f2,0x0(r3),0,0
	  psq_st    f1,0x0(r3),0,0
	  psq_st    f0,0x0(r3),0,0
	  lwz       r3, 0x4D8(r5)
	  li        r0, 0x1
	  stw       r3, -0x8000(r4)
	  sth       r0, 0x2(r5)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void GXGetProjectionv(f32* ptr)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void WriteMTXPS4x3(register volatile void* dst, register const Mtx src)
{
	register f32 ps_0, ps_1, ps_2, ps_3, ps_4, ps_5;

	// clang-format off
    asm {
        psq_l  ps_0,  0(src), 0, 0
        psq_l  ps_1,  8(src), 0, 0
        psq_l  ps_2, 16(src), 0, 0
        psq_l  ps_3, 24(src), 0, 0
        psq_l  ps_4, 32(src), 0, 0
        psq_l  ps_5, 40(src), 0, 0

        psq_st ps_0, 0(dst),  0, 0
        psq_st ps_1, 0(dst),  0, 0
        psq_st ps_2, 0(dst),  0, 0
        psq_st ps_3, 0(dst),  0, 0
        psq_st ps_4, 0(dst),  0, 0
        psq_st ps_5, 0(dst),  0, 0
    }
	// clang-format on
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void WriteMTXPS3x3from3x4(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void WriteMTXPS3x3(register volatile void* dst, register const Mtx src)
{
	register f32 ps_0, ps_1, ps_2, ps_3, ps_4, ps_5;

	// clang-format off
    asm {
        psq_l  ps_0,  0(src), 0, 0
        lfs    ps_1,  8(src)
        psq_l  ps_2, 16(src), 0, 0
        lfs    ps_3, 24(src)
        psq_l  ps_4, 32(src), 0, 0
        lfs    ps_5, 40(src)

        psq_st ps_0, 0(dst),  0, 0
        stfs   ps_1, 0(dst)
        psq_st ps_2, 0(dst),  0, 0
        stfs   ps_3, 0(dst)
        psq_st ps_4, 0(dst),  0, 0
        stfs   ps_5, 0(dst)
    }
	// clang-format on
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void WriteMTXPS4x2(register volatile void* dst, register const Mtx src)
{
	register f32 ps_0, ps_1, ps_2, ps_3;

	// clang-format off
    asm {
        psq_l  ps_0,  0(src), 0, 0
        psq_l  ps_1,  8(src), 0, 0
        psq_l  ps_2, 16(src), 0, 0
        psq_l  ps_3, 24(src), 0, 0

        psq_st ps_0, 0(dst),  0, 0
        psq_st ps_1, 0(dst),  0, 0
        psq_st ps_2, 0(dst),  0, 0
        psq_st ps_3, 0(dst),  0, 0
    }
	// clang-format on
}

/*
 * --INFO--
 * Address:	800E9578
 * Size:	000050
 */
void GXLoadPosMtxImm(Mtx mtx, u32 id)
{
	GX_XF_LOAD_REGS(4 * 3 - 1, id * 4 + GX_XF_MEM_POSMTX);
	WriteMTXPS4x3(&GXWGFifo, mtx);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void GXLoadPosMtxIndx(u16 index, u32 id)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E95C8
 * Size:	000050
 */
void GXLoadNrmMtxImm(Mtx mtx, u32 id)
{
	GX_XF_LOAD_REGS(3 * 3 - 1, id * 3 + GX_XF_MEM_NRMMTX);
	WriteMTXPS3x3(&GXWGFifo, mtx);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void GXLoadNrmMtxImm3x3(Mtx33, u32 id)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void GXLoadNrmMtxIndx3x3(u16 index, u32 id)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E9618
 * Size:	000034
 */
void GXSetCurrentMtx(u32 id)
{
	GX_SET_REG(gx->matIdxA, id, GX_XF_MTXIDX0_GEOM_ST, GX_XF_MTXIDX0_GEOM_END);
	__GXSetMatrixIndex(GX_VA_PNMTXIDX);
}

/*
 * --INFO--
 * Address:	800E964C
 * Size:	0000B4
 */
void GXLoadTexMtxImm(const Mtx mtx, u32 id, GXTexMtxType type)
{
	u32 addr;
	u32 num;
	u32 reg;

	// Matrix address in XF memory
	addr = id >= GX_PTTEXMTX0 ? (id - GX_PTTEXMTX0) * 4 + GX_XF_MEM_DUALTEXMTX : id * 4 + (u64)GX_XF_MEM_POSMTX;

	// Number of elements in matrix
	num = type == GX_MTX2x4 ? (u64)(2 * 4) : 3 * 4;

	reg = addr | (num - 1) << 16;

	GX_XF_LOAD_REG_HDR(reg);

	if (type == GX_MTX3x4) {
		WriteMTXPS4x3(&GXWGFifo, mtx);
	} else {
		WriteMTXPS4x2(&GXWGFifo, mtx);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void GXLoadTexMtxIndx(u16 index, u32 id, GXTexMtxType type)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E9700
 * Size:	000090
 */
void __GXSetViewport(void)
{
	f32 a, b, c, d, e, f;
	f32 near, far;

	a = gx->vpWd / 2.0f;
	b = -gx->vpHt / 2.0f;
	d = gx->vpLeft + (gx->vpWd / 2.0f) + 342.0f;
	e = gx->vpTop + (gx->vpHt / 2.0f) + 342.0f;

	near = gx->vpNearz * gx->zScale;
	far  = gx->vpFarz * gx->zScale;

	c = far - near;
	f = far + gx->zOffset;

	GX_XF_LOAD_REGS(5, GX_XF_REG_SCALEX);
	GX_WRITE_F32(a);
	GX_WRITE_F32(b);
	GX_WRITE_F32(c);
	GX_WRITE_F32(d);
	GX_WRITE_F32(e);
	GX_WRITE_F32(f);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void GXSetViewportJitter(f32 left, f32 top, f32 width, f32 height, f32 nearZ, f32 farZ, u32 field)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E9790
 * Size:	000048
 */
void GXSetViewport(f32 left, f32 top, f32 width, f32 height, f32 nearZ, f32 farZ)
{
	gx->vpLeft  = left;
	gx->vpTop   = top;
	gx->vpWd    = width;
	gx->vpHt    = height;
	gx->vpNearz = nearZ;
	gx->vpFarz  = farZ;
	__GXSetViewport();
	gx->bpSentNot = GX_TRUE;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void GXGetViewportv(f32* viewport)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void GXSetZScaleOffset(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E97D8
 * Size:	000078
 */
void GXSetScissor(u32 left, u32 top, u32 width, u32 height)
{
	u32 y1, x1, y2, x2;
	u32 reg;

	y1 = top + 342;
	x1 = left + 342;

	GX_SET_REG(gx->suScis0, y1, GX_BP_SCISSORTL_TOP_ST, GX_BP_SCISSORTL_TOP_END);
	GX_SET_REG(gx->suScis0, x1, GX_BP_SCISSORTL_LEFT_ST, GX_BP_SCISSORTL_LEFT_END);

	y2 = y1 + height - 1;
	x2 = (x1 + width) - 1;

	GX_SET_REG(gx->suScis1, y2, GX_BP_SCISSORBR_BOT_ST, GX_BP_SCISSORBR_BOT_END);
	GX_SET_REG(gx->suScis1, x2, GX_BP_SCISSORBR_RIGHT_ST, GX_BP_SCISSORBR_RIGHT_END);

	GX_BP_LOAD_REG(gx->suScis0);
	GX_BP_LOAD_REG(gx->suScis1);
	gx->bpSentNot = FALSE;
}

/*
 * --INFO--
 * Address:	800E9850
 * Size:	000048
 */
void GXGetScissor(u32* left, u32* top, u32* width, u32* height)
{
	u32 y1, x1, y2, x2;

	y1 = GX_GET_REG(gx->suScis0, GX_BP_SCISSORTL_TOP_ST, GX_BP_SCISSORTL_TOP_END);
	x1 = GX_GET_REG(gx->suScis0, GX_BP_SCISSORTL_LEFT_ST, GX_BP_SCISSORTL_LEFT_END);
	y2 = GX_GET_REG(gx->suScis1, GX_BP_SCISSORBR_BOT_ST, GX_BP_SCISSORBR_BOT_END);
	x2 = GX_GET_REG(gx->suScis1, GX_BP_SCISSORBR_RIGHT_ST, GX_BP_SCISSORBR_RIGHT_END);

	*left   = x1 - 342;
	*top    = y1 - 342;
	*width  = x2 - x1 + 1;
	*height = y2 - y1 + 1;
	/*
	.loc_0x0:
	  lwz       r8, -0x6D70(r2)
	  lwz       r7, 0xF8(r8)
	  lwz       r8, 0xFC(r8)
	  rlwinm    r9,r7,20,21,31
	  subi      r0, r9, 0x156
	  stw       r0, 0x0(r3)
	  rlwinm    r7,r7,0,21,31
	  subi      r3, r7, 0x156
	  stw       r3, 0x0(r4)
	  rlwinm    r0,r8,20,21,31
	  sub       r3, r0, r9
	  addi      r0, r3, 0x1
	  rlwinm    r4,r8,0,21,31
	  stw       r0, 0x0(r5)
	  sub       r3, r4, r7
	  addi      r0, r3, 0x1
	  stw       r0, 0x0(r6)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E9898
 * Size:	000040
 */
void GXSetScissorBoxOffset(s32 x, s32 y)
{
	u32 cmd = 0;
	u32 x1;
	u32 y1;

	x1 = (u32)(x + 342) / 2;
	y1 = (u32)(y + 342) / 2;
	GX_SET_REG(cmd, x1, GX_BP_SCISSOROFS_OX_ST, GX_BP_SCISSOROFS_OX_END);
	GX_SET_REG(cmd, y1, GX_BP_SCISSOROFS_OY_ST, GX_BP_SCISSOROFS_OY_END);

	GX_SET_REG(cmd, GX_BP_REG_SCISSOROFFSET, 0, 7);

	GX_BP_LOAD_REG(cmd);
	gx->bpSentNot = GX_FALSE;
}

/*
 * --INFO--
 * Address:	800E98D8
 * Size:	000028
 */
void GXSetClipMode(GXClipMode mode)
{
	GX_XF_LOAD_REG(GX_XF_REG_CLIPDISABLE, mode);
	gx->bpSentNot = GX_TRUE;
}

/*
 * --INFO--
 * Address:	800E9900
 * Size:	000084
 */
void __GXSetMatrixIndex(GXAttr index)
{
	// Tex4 and after is stored in XF MatrixIndex1
	if (index < GX_VA_TEX4MTXIDX) {
		GX_CP_LOAD_REG(GX_CP_REG_MTXIDXA, gx->matIdxA);
		GX_XF_LOAD_REG(GX_XF_REG_MATRIXINDEX0, gx->matIdxA);
	} else {
		GX_CP_LOAD_REG(GX_CP_REG_MTXIDXB, gx->matIdxB);
		GX_XF_LOAD_REG(GX_XF_REG_MATRIXINDEX1, gx->matIdxB);
	}

	gx->bpSentNot = GX_TRUE;
}

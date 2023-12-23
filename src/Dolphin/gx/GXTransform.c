#include "Dolphin/gx.h"

/**
 * @note Address: N/A
 * @note Size: 0x174
 */
void GXProject(f32 x, f32 y, f32 z, Mtx viewMtx, f32* projMtx, f32* viewport, f32* screenX, f32* screenY, f32* screenZ)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
static void WriteProjPS(const register f32 src[6], register volatile void* dst)
{
	register f32 ps_0, ps_1, ps_2;

#ifdef __MWERKS__ // clang-format off
	asm {
		psq_l  ps_0,  0(src), 0, 0
		psq_l  ps_1,  8(src), 0, 0
		psq_l  ps_2, 16(src), 0, 0
		psq_st ps_0,  0(dst), 0, 0
		psq_st ps_1,  0(dst), 0, 0
		psq_st ps_2,  0(dst), 0, 0
	}
#endif // clang-format on
}

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
static void Copy6Floats(const register f32 src[6], register f32 dst[6])
{
	register f32 ps_0, ps_1, ps_2;

#ifdef __MWERKS__ // clang-format off
	asm {
		psq_l  ps_0,  0(src), 0, 0
		psq_l  ps_1,  8(src), 0, 0
		psq_l  ps_2, 16(src), 0, 0
		psq_st ps_0,  0(dst), 0, 0
		psq_st ps_1,  8(dst), 0, 0
		psq_st ps_2, 16(dst), 0, 0
	}
#endif // clang-format on
}

/**
 * @note Address: N/A
 * @note Size: 0x48
 */
void __GXSetProjection(void)
{
	GX_XF_LOAD_REGS(6, GX_XF_REG_PROJECTIONA);
	WriteProjPS(gx->projMtx, (volatile void*)GXFIFO_ADDR);
	GX_WRITE_U32(gx->projType);
}

/**
 * @note Address: 0x800E9448
 * @note Size: 0xA4
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
}

/**
 * @note Address: 0x800E94EC
 * @note Size: 0x8C
 */
void GXSetProjectionv(const f32* proj)
{
	gx->projType = proj[0] == 0.0f ? GX_PERSPECTIVE : GX_ORTHOGRAPHIC;
	Copy6Floats(&proj[1], gx->projMtx);

	__GXSetProjection();
	gx->bpSentNot = GX_TRUE;
}

/**
 * @note Address: N/A
 * @note Size: 0x48
 */
void GXGetProjectionv(f32* ptr)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x34
 */
void WriteMTXPS4x3(register volatile void* dst, register const Mtx src)
{
	register f32 ps_0, ps_1, ps_2, ps_3, ps_4, ps_5;

#ifdef __MWERKS__ // clang-format off
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
#endif // clang-format on
}

/**
 * @note Address: N/A
 * @note Size: 0x34
 */
void WriteMTXPS3x3from3x4(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
void WriteMTXPS3x3(register volatile void* dst, register const Mtx src)
{
	register f32 ps_0, ps_1, ps_2, ps_3, ps_4, ps_5;

#ifdef __MWERKS__ // clang-format off
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
#endif // clang-format on
}

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
void WriteMTXPS4x2(register volatile void* dst, register const Mtx src)
{
	register f32 ps_0, ps_1, ps_2, ps_3;

#ifdef __MWERKS__ // clang-format off
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
#endif // clang-format on
}

/**
 * @note Address: 0x800E9578
 * @note Size: 0x50
 */
void GXLoadPosMtxImm(Mtx mtx, u32 id)
{
	GX_XF_LOAD_REGS(4 * 3 - 1, id * 4 + GX_XF_MEM_POSMTX);
	WriteMTXPS4x3(&GXWGFifo, mtx);
}

/**
 * @note Address: N/A
 * @note Size: 0x30
 */
void GXLoadPosMtxIndx(u16 index, u32 id)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800E95C8
 * @note Size: 0x50
 */
void GXLoadNrmMtxImm(Mtx mtx, u32 id)
{
	GX_XF_LOAD_REGS(3 * 3 - 1, id * 3 + GX_XF_MEM_NRMMTX);
	WriteMTXPS3x3(&GXWGFifo, mtx);
}

/**
 * @note Address: N/A
 * @note Size: 0x48
 */
void GXLoadNrmMtxImm3x3(Mtx33, u32 id)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x34
 */
void GXLoadNrmMtxIndx3x3(u16 index, u32 id)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800E9618
 * @note Size: 0x34
 */
void GXSetCurrentMtx(u32 id)
{
	GX_SET_REG(gx->matIdxA, id, GX_XF_MTXIDX0_GEOM_ST, GX_XF_MTXIDX0_GEOM_END);
	__GXSetMatrixIndex(GX_VA_PNMTXIDX);
}

/**
 * @note Address: 0x800E964C
 * @note Size: 0xB4
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

/**
 * @note Address: N/A
 * @note Size: 0x58
 */
void GXLoadTexMtxIndx(u16 index, u32 id, GXTexMtxType type)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800E9700
 * @note Size: 0x90
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

/**
 * @note Address: N/A
 * @note Size: 0x58
 */
void GXSetViewportJitter(f32 left, f32 top, f32 width, f32 height, f32 nearZ, f32 farZ, u32 field)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800E9790
 * @note Size: 0x48
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

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
void GXGetViewportv(f32* viewport)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x6C
 */
void GXSetZScaleOffset(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800E97D8
 * @note Size: 0x78
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
	x2 = x1 + width - 1;

	GX_SET_REG(gx->suScis1, y2, GX_BP_SCISSORBR_BOT_ST, GX_BP_SCISSORBR_BOT_END);
	GX_SET_REG(gx->suScis1, x2, GX_BP_SCISSORBR_RIGHT_ST, GX_BP_SCISSORBR_RIGHT_END);

	GX_BP_LOAD_REG(gx->suScis0);
	GX_BP_LOAD_REG(gx->suScis1);
	gx->bpSentNot = FALSE;
}

/**
 * @note Address: 0x800E9850
 * @note Size: 0x48
 */
void GXGetScissor(u32* left, u32* top, u32* width, u32* height)
{
	u32 y1 = (gx->suScis0 & 0x0007FF) >> 0;
	u32 x1 = (gx->suScis0 & 0x7FF000) >> 12;
	u32 y2 = (gx->suScis1 & 0x0007FF) >> 0;
	u32 x2 = (gx->suScis1 & 0x7FF000) >> 12;

	*left   = x1 - 0x156;
	*top    = y1 - 0x156;
	*width  = (x2 - x1) + 1;
	*height = (y2 - y1) + 1;
}

/**
 * @note Address: 0x800E9898
 * @note Size: 0x40
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

/**
 * @note Address: 0x800E98D8
 * @note Size: 0x28
 */
void GXSetClipMode(GXClipMode mode)
{
	GX_XF_LOAD_REG(GX_XF_REG_CLIPDISABLE, mode);
	gx->bpSentNot = GX_TRUE;
}

/**
 * @note Address: 0x800E9900
 * @note Size: 0x84
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

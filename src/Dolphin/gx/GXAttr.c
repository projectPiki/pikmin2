#include "Dolphin/gx.h"
#include "Dolphin/GX/GXHardware.h"

/**
 * @note Address: N/A
 * @note Size: 0x8C
 */
static void __GXXfVtxSpecs(void)
{
	u32 normCount, colorCount, texCount;

	normCount = gx->hasBiNrms ? 2 : (gx->hasNrms ? 1 : 0);

	// Both fields in one access
	colorCount = 33 - __cntlzw((gx->vcdLo & (0xf << 0xd)) >> 0xd);
	colorCount /= 2; // equivalent to /=2 and >>= 1

	// All 16 assigned bits in VCD_Hi
	texCount = 33 - __cntlzw((gx->vcdHi & (0xffff << 0)) >> 0);
	texCount /= 2; // equivalent to /=2 and >>= 1

	GX_XF_LOAD_REG(GX_XF_REG_INVERTEXSPEC, (colorCount) | (normCount << 2) | (texCount << 4));
	gx->bpSentNot = GX_TRUE;

	return;
}

/**
 * @note Address: 0x800E4284
 * @note Size: 0x26C
 */

void GXSetVtxDesc(GXAttr attr, GXAttrType type)
{
	switch (attr) {
	case GX_VA_PNMTXIDX:
		GX_SET_REG(gx->vcdLo, type, GX_CP_VCD_LO_POSMTXIDX_ST, GX_CP_VCD_LO_POSMTXIDX_END);
		break;
	case GX_VA_TEX0MTXIDX:
		GX_SET_REG(gx->vcdLo, type, GX_CP_VCD_LO_TEX0MTXIDX_ST, GX_CP_VCD_LO_TEX0MTXIDX_END);
		break;
	case GX_VA_TEX1MTXIDX:
		GX_SET_REG(gx->vcdLo, type, GX_CP_VCD_LO_TEX1MTXIDX_ST, GX_CP_VCD_LO_TEX1MTXIDX_END);
		break;
	case GX_VA_TEX2MTXIDX:
		GX_SET_REG(gx->vcdLo, type, GX_CP_VCD_LO_TEX2MTXIDX_ST, GX_CP_VCD_LO_TEX2MTXIDX_END);
		break;
	case GX_VA_TEX3MTXIDX:
		GX_SET_REG(gx->vcdLo, type, GX_CP_VCD_LO_TEX3MTXIDX_ST, GX_CP_VCD_LO_TEX3MTXIDX_END);
		break;
	case GX_VA_TEX4MTXIDX:
		GX_SET_REG(gx->vcdLo, type, GX_CP_VCD_LO_TEX4MTXIDX_ST, GX_CP_VCD_LO_TEX4MTXIDX_END);
		break;
	case GX_VA_TEX5MTXIDX:
		GX_SET_REG(gx->vcdLo, type, GX_CP_VCD_LO_TEX5MTXIDX_ST, GX_CP_VCD_LO_TEX5MTXIDX_END);
		break;
	case GX_VA_TEX6MTXIDX:
		GX_SET_REG(gx->vcdLo, type, GX_CP_VCD_LO_TEX6MTXIDX_ST, GX_CP_VCD_LO_TEX6MTXIDX_END);
		break;
	case GX_VA_TEX7MTXIDX:
		GX_SET_REG(gx->vcdLo, type, GX_CP_VCD_LO_TEX7MTXIDX_ST, GX_CP_VCD_LO_TEX7MTXIDX_END);
		break;
	case GX_VA_POS:
		GX_SET_REG(gx->vcdLo, type, GX_CP_VCD_LO_POS_ST, GX_CP_VCD_LO_POS_END);
		break;
	case GX_VA_NRM:
		if (type != GX_NONE) {
			gx->hasNrms   = TRUE;
			gx->hasBiNrms = FALSE;
			gx->nrmType   = type;
		} else {
			gx->hasNrms = FALSE;
		}
		break;
	case GX_VA_NBT:
		if (type != GX_NONE) {
			gx->hasBiNrms = TRUE;
			gx->hasNrms   = FALSE;
			gx->nrmType   = type;
		} else {
			gx->hasBiNrms = FALSE;
		}
		break;
	case GX_VA_CLR0:
		GX_SET_REG(gx->vcdLo, type, GX_CP_VCD_LO_CLRDIF_ST, GX_CP_VCD_LO_CLRDIF_END);
		break;
	case GX_VA_CLR1:
		GX_SET_REG(gx->vcdLo, type, GX_CP_VCD_LO_CLRSPEC_ST, GX_CP_VCD_LO_CLRSPEC_END);
		break;
	case GX_VA_TEX0:
		GX_SET_REG(gx->vcdHi, type, GX_CP_VCD_HI_TEX0COORD_ST, GX_CP_VCD_HI_TEX0COORD_END);
		break;
	case GX_VA_TEX1:
		GX_SET_REG(gx->vcdHi, type, GX_CP_VCD_HI_TEX1COORD_ST, GX_CP_VCD_HI_TEX1COORD_END);
		break;
	case GX_VA_TEX2:
		GX_SET_REG(gx->vcdHi, type, GX_CP_VCD_HI_TEX2COORD_ST, GX_CP_VCD_HI_TEX2COORD_END);
		break;
	case GX_VA_TEX3:
		GX_SET_REG(gx->vcdHi, type, GX_CP_VCD_HI_TEX3COORD_ST, GX_CP_VCD_HI_TEX3COORD_END);
		break;
	case GX_VA_TEX4:
		GX_SET_REG(gx->vcdHi, type, GX_CP_VCD_HI_TEX4COORD_ST, GX_CP_VCD_HI_TEX4COORD_END);
		break;
	case GX_VA_TEX5:
		GX_SET_REG(gx->vcdHi, type, GX_CP_VCD_HI_TEX5COORD_ST, GX_CP_VCD_HI_TEX5COORD_END);
		break;
	case GX_VA_TEX6:
		GX_SET_REG(gx->vcdHi, type, GX_CP_VCD_HI_TEX6COORD_ST, GX_CP_VCD_HI_TEX6COORD_END);
		break;
	case GX_VA_TEX7:
		GX_SET_REG(gx->vcdHi, type, GX_CP_VCD_HI_TEX7COORD_ST, GX_CP_VCD_HI_TEX7COORD_END);
		break;
	}

	if (gx->hasNrms || gx->hasBiNrms) {
		GX_SET_REG(gx->vcdLo, gx->nrmType, GX_CP_VCD_LO_NRM_ST, GX_CP_VCD_LO_NRM_END);
	} else {
		GX_SET_REG(gx->vcdLo, GX_NONE, GX_CP_VCD_LO_NRM_ST, GX_CP_VCD_LO_NRM_END);
	}

	gx->dirtyState |= GX_DIRTY_VCD;
}

/**
 * @note Address: N/A
 * @note Size: 0x288
 */
void GXSetVtxDescv(GXVtxDescList* list)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800E44F0
 * @note Size: 0xBC
 */
void __GXSetVCD(void)
{

	GX_CP_LOAD_REG(GX_CP_REG_VCD_LO, gx->vcdLo);
	GX_CP_LOAD_REG(GX_CP_REG_VCD_HI, gx->vcdHi);

	__GXXfVtxSpecs();
	/*
	.loc_0x0:
	  li        r6, 0x8
	  lwz       r4, -0x6D70(r2)
	  lis       r5, 0xCC01
	  stb       r6, -0x8000(r5)
	  li        r3, 0x50
	  li        r0, 0x60
	  stb       r3, -0x8000(r5)
	  lwz       r3, 0x14(r4)
	  stw       r3, -0x8000(r5)
	  stb       r6, -0x8000(r5)
	  stb       r0, -0x8000(r5)
	  lwz       r0, 0x18(r4)
	  stw       r0, -0x8000(r5)
	  lbz       r0, 0x4D5(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x48
	  li        r7, 0x2
	  b         .loc_0x60

	.loc_0x48:
	  lbz       r0, 0x4D4(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x5C
	  li        r7, 0x1
	  b         .loc_0x60

	.loc_0x5C:
	  li        r7, 0

	.loc_0x60:
	  lwz       r5, -0x6D70(r2)
	  li        r0, 0x10
	  lwz       r6, 0x14(r4)
	  lis       r4, 0xCC01
	  lwz       r3, 0x18(r5)
	  rlwinm    r6,r6,19,28,31
	  cntlzw    r6, r6
	  stb       r0, -0x8000(r4)
	  rlwinm    r3,r3,0,16,31
	  subfic    r6, r6, 0x21
	  cntlzw    r0, r3
	  subfic    r3, r0, 0x21
	  li        r0, 0x1008
	  stw       r0, -0x8000(r4)
	  rlwinm    r6,r6,31,1,31
	  rlwinm    r0,r7,2,0,29
	  rlwinm    r3,r3,3,0,27
	  or        r0, r6, r0
	  or        r0, r3, r0
	  stw       r0, -0x8000(r4)
	  li        r0, 0x1
	  sth       r0, 0x2(r5)
	  blr
	*/
}

/**
 * @note Address: 0x800E45AC
 * @note Size: 0x124
 */
void __GXCalculateVLim(void)
{
	static u8 tbl1[] = { 0, 4, 1, 2 };
	static u8 tbl2[] = { 0, 8, 1, 2 };
	static u8 tbl3[] = { 0, 12, 1, 2 };

	u32 vlim;
	u32 vcdLo;
	u32 vcdHi;
	s32 compCnt;

	if (gx->vNum == 0) {
		return;
	}

	vcdLo = gx->vcdLo;
	vcdHi = gx->vcdHi;

	// GXCompCnt bit of normal parameters
	compCnt = gx->vatA[GX_VTXFMT0];
	compCnt = (compCnt & 0x200) >> 9;

	vlim = GX_GET_REG(vcdLo, GX_CP_VCD_LO_POSMTXIDX_ST, GX_CP_VCD_LO_POSMTXIDX_END);
	vlim += GX_GET_REG(vcdLo, GX_CP_VCD_LO_TEX0MTXIDX_ST, GX_CP_VCD_LO_TEX0MTXIDX_END);
	vlim += GX_GET_REG(vcdLo, GX_CP_VCD_LO_TEX1MTXIDX_ST, GX_CP_VCD_LO_TEX1MTXIDX_END);
	vlim += GX_GET_REG(vcdLo, GX_CP_VCD_LO_TEX2MTXIDX_ST, GX_CP_VCD_LO_TEX2MTXIDX_END);
	vlim += GX_GET_REG(vcdLo, GX_CP_VCD_LO_TEX3MTXIDX_ST, GX_CP_VCD_LO_TEX3MTXIDX_END);
	vlim += GX_GET_REG(vcdLo, GX_CP_VCD_LO_TEX4MTXIDX_ST, GX_CP_VCD_LO_TEX4MTXIDX_END);
	vlim += GX_GET_REG(vcdLo, GX_CP_VCD_LO_TEX5MTXIDX_ST, GX_CP_VCD_LO_TEX5MTXIDX_END);
	vlim += GX_GET_REG(vcdLo, GX_CP_VCD_LO_TEX6MTXIDX_ST, GX_CP_VCD_LO_TEX6MTXIDX_END);
	vlim += GX_GET_REG(vcdLo, GX_CP_VCD_LO_TEX7MTXIDX_ST, GX_CP_VCD_LO_TEX7MTXIDX_END);

	vlim += tbl3[GX_GET_REG(vcdLo, GX_CP_VCD_LO_POS_ST, GX_CP_VCD_LO_POS_END)];
	vlim += tbl3[GX_GET_REG(vcdLo, GX_CP_VCD_LO_NRM_ST, GX_CP_VCD_LO_NRM_END)] * (compCnt == GX_NRM_NBT ? 3 : 1);
	vlim += tbl1[GX_GET_REG(vcdLo, GX_CP_VCD_LO_CLRDIF_ST, GX_CP_VCD_LO_CLRDIF_END)];
	vlim += tbl1[GX_GET_REG(vcdLo, GX_CP_VCD_LO_CLRSPEC_ST, GX_CP_VCD_LO_CLRSPEC_END)];

	vlim += tbl2[GX_GET_REG(vcdHi, GX_CP_VCD_HI_TEX0COORD_ST, GX_CP_VCD_HI_TEX0COORD_END)];
	vlim += tbl2[GX_GET_REG(vcdHi, GX_CP_VCD_HI_TEX1COORD_ST, GX_CP_VCD_HI_TEX1COORD_END)];
	vlim += tbl2[GX_GET_REG(vcdHi, GX_CP_VCD_HI_TEX2COORD_ST, GX_CP_VCD_HI_TEX2COORD_END)];
	vlim += tbl2[GX_GET_REG(vcdHi, GX_CP_VCD_HI_TEX3COORD_ST, GX_CP_VCD_HI_TEX3COORD_END)];
	vlim += tbl2[GX_GET_REG(vcdHi, GX_CP_VCD_HI_TEX4COORD_ST, GX_CP_VCD_HI_TEX4COORD_END)];
	vlim += tbl2[GX_GET_REG(vcdHi, GX_CP_VCD_HI_TEX5COORD_ST, GX_CP_VCD_HI_TEX5COORD_END)];
	vlim += tbl2[GX_GET_REG(vcdHi, GX_CP_VCD_HI_TEX6COORD_ST, GX_CP_VCD_HI_TEX6COORD_END)];
	vlim += tbl2[GX_GET_REG(vcdHi, GX_CP_VCD_HI_TEX7COORD_ST, GX_CP_VCD_HI_TEX7COORD_END)];

	gx->vLim = vlim;
}

/**
 * @note Address: N/A
 * @note Size: 0x1B4
 */
void GXGetVtxDesc(GXAttr attr, GXAttrType* type)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x90
 */
void GXGetVtxDescv(GXVtxDescList* list)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800E46D0
 * @note Size: 0x38
 */
void GXClearVtxDesc(void)
{
	gx->vcdLo = 0;
	GX_SET_REG(gx->vcdLo, GX_DIRECT, GX_CP_VCD_LO_POS_ST, GX_CP_VCD_LO_POS_END);
	gx->vcdHi     = 0;
	gx->hasNrms   = FALSE;
	gx->hasBiNrms = FALSE;
	gx->dirtyState |= GX_DIRTY_VCD;
}

static inline void SETVAT(u32* vatA, u32* vatB, u32* vatC, GXAttr attr, GXCompCnt compCnt, GXCompType compType, u8 shift)
{
	switch (attr) {
	case GX_VA_POS:
		GX_SET_REG(*vatA, compCnt, GX_CP_VAT_GRP0_POS_CNT_ST, GX_CP_VAT_GRP0_POS_CNT_END);
		GX_SET_REG(*vatA, compType, GX_CP_VAT_GRP0_POS_TYPE_ST, GX_CP_VAT_GRP0_POS_TYPE_END);
		GX_SET_REG(*vatA, shift, GX_CP_VAT_GRP0_POS_SHIFT_ST, GX_CP_VAT_GRP0_POS_SHIFT_END);
		break;
	case GX_VA_NRM:
	case GX_VA_NBT:
		GX_SET_REG(*vatA, compType, GX_CP_VAT_GRP0_NRM_TYPE_ST, GX_CP_VAT_GRP0_NRM_TYPE_END);
		if (compCnt == GX_NRM_NBT3) {
			// Probably because the compCnt can only be one bit?
			GX_SET_REG(*vatA, GX_NRM_NBT, GX_CP_VAT_GRP0_NRM_CNT_ST, GX_CP_VAT_GRP0_NRM_CNT_END);
			GX_SET_REG(*vatA, TRUE, GX_CP_VAT_GRP0_NRMIDX3_ST, GX_CP_VAT_GRP0_NRMIDX3_END);
		} else {
			GX_SET_REG(*vatA, compCnt, GX_CP_VAT_GRP0_NRM_CNT_ST, GX_CP_VAT_GRP0_NRM_CNT_END);
			GX_SET_REG(*vatA, FALSE, GX_CP_VAT_GRP0_NRMIDX3_ST, GX_CP_VAT_GRP0_NRMIDX3_END);
		}
		break;
	case GX_VA_CLR0:
		GX_SET_REG(*vatA, compCnt, GX_CP_VAT_GRP0_CLRDIFF_CNT_ST, GX_CP_VAT_GRP0_CLRDIFF_CNT_END);
		GX_SET_REG(*vatA, compType, GX_CP_VAT_GRP0_CLRDIFF_TYPE_ST, GX_CP_VAT_GRP0_CLRDIFF_TYPE_END);
		break;
	case GX_VA_CLR1:
		GX_SET_REG(*vatA, compCnt, GX_CP_VAT_GRP0_CLRSPEC_CNT_ST, GX_CP_VAT_GRP0_CLRSPEC_CNT_END);
		GX_SET_REG(*vatA, compType, GX_CP_VAT_GRP0_CLRSPEC_TYPE_ST, GX_CP_VAT_GRP0_CLRSPEC_TYPE_END);
		break;
	case GX_VA_TEX0:
		GX_SET_REG(*vatA, compCnt, GX_CP_VAT_GRP0_TXC0_CNT_ST, GX_CP_VAT_GRP0_TXC0_CNT_END);
		GX_SET_REG(*vatA, compType, GX_CP_VAT_GRP0_TXC0_TYPE_ST, GX_CP_VAT_GRP0_TXC0_TYPE_END);
		GX_SET_REG(*vatA, shift, GX_CP_VAT_GRP0_TXC0_SHIFT_ST, GX_CP_VAT_GRP0_TXC0_SHIFT_END);
		break;
	case GX_VA_TEX1:
		GX_SET_REG(*vatB, compCnt, GX_CP_VAT_GRP1_TXC1_CNT_ST, GX_CP_VAT_GRP1_TXC1_CNT_END);
		GX_SET_REG(*vatB, compType, GX_CP_VAT_GRP1_TXC1_TYPE_ST, GX_CP_VAT_GRP1_TXC1_TYPE_END);
		GX_SET_REG(*vatB, shift, GX_CP_VAT_GRP1_TXC1_SHIFT_ST, GX_CP_VAT_GRP1_TXC1_SHIFT_END);
		break;
	case GX_VA_TEX2:
		GX_SET_REG(*vatB, compCnt, GX_CP_VAT_GRP1_TXC2_CNT_ST, GX_CP_VAT_GRP1_TXC2_CNT_END);
		GX_SET_REG(*vatB, compType, GX_CP_VAT_GRP1_TXC2_TYPE_ST, GX_CP_VAT_GRP1_TXC2_TYPE_END);
		GX_SET_REG(*vatB, shift, GX_CP_VAT_GRP1_TXC2_SHIFT_ST, GX_CP_VAT_GRP1_TXC2_SHIFT_END);
		break;
	case GX_VA_TEX3:
		GX_SET_REG(*vatB, compCnt, GX_CP_VAT_GRP1_TXC3_CNT_ST, GX_CP_VAT_GRP1_TXC3_CNT_END);
		GX_SET_REG(*vatB, compType, GX_CP_VAT_GRP1_TXC3_TYPE_ST, GX_CP_VAT_GRP1_TXC3_TYPE_END);
		GX_SET_REG(*vatB, shift, GX_CP_VAT_GRP1_TXC3_SHIFT_ST, GX_CP_VAT_GRP1_TXC3_SHIFT_END);
		break;
	case GX_VA_TEX4:
		GX_SET_REG(*vatB, compCnt, GX_CP_VAT_GRP1_TXC4_CNT_ST, GX_CP_VAT_GRP1_TXC4_CNT_END);
		GX_SET_REG(*vatB, compType, GX_CP_VAT_GRP1_TXC4_TYPE_ST, GX_CP_VAT_GRP1_TXC4_TYPE_END);
		GX_SET_REG(*vatC, shift, GX_CP_VAT_GRP2_TXC4_SHIFT_ST, GX_CP_VAT_GRP2_TXC4_SHIFT_END);
		break;
	case GX_VA_TEX5:
		GX_SET_REG(*vatC, compCnt, GX_CP_VAT_GRP2_TXC5_CNT_ST, GX_CP_VAT_GRP2_TXC5_CNT_END);
		GX_SET_REG(*vatC, compType, GX_CP_VAT_GRP2_TXC5_TYPE_ST, GX_CP_VAT_GRP2_TXC5_TYPE_END);
		GX_SET_REG(*vatC, shift, GX_CP_VAT_GRP2_TXC5_SHIFT_ST, GX_CP_VAT_GRP2_TXC5_SHIFT_END);
		break;
	case GX_VA_TEX6:
		GX_SET_REG(*vatC, compCnt, GX_CP_VAT_GRP2_TXC6_CNT_ST, GX_CP_VAT_GRP2_TXC6_CNT_END);
		GX_SET_REG(*vatC, compType, GX_CP_VAT_GRP2_TXC6_TYPE_ST, GX_CP_VAT_GRP2_TXC6_TYPE_END);
		GX_SET_REG(*vatC, shift, GX_CP_VAT_GRP2_TXC6_SHIFT_ST, GX_CP_VAT_GRP2_TXC6_SHIFT_END);
		break;
	case GX_VA_TEX7:
		GX_SET_REG(*vatC, compCnt, GX_CP_VAT_GRP2_TXC7_CNT_ST, GX_CP_VAT_GRP2_TXC7_CNT_END);
		GX_SET_REG(*vatC, compType, GX_CP_VAT_GRP2_TXC7_TYPE_ST, GX_CP_VAT_GRP2_TXC7_TYPE_END);
		GX_SET_REG(*vatC, shift, GX_CP_VAT_GRP2_TXC7_SHIFT_ST, GX_CP_VAT_GRP2_TXC7_SHIFT_END);
		break;
	}
}

/**
 * @note Address: 0x800E4708
 * @note Size: 0x25C
 */
void GXSetVtxAttrFmt(GXVtxFmt format, GXAttr attr, GXCompCnt count, GXCompType type, u8 frac)
{
	u32* vA = &gx->vatA[format];
	u32* vB = &gx->vatB[format];
	u32* vC = &gx->vatC[format];

	SETVAT(vA, vB, vC, attr, count, type, frac);

	gx->dirtyState |= GX_DIRTY_VAT;
	gx->dirtyVAT |= (u8)(1 << (u8)format);
}

/**
 * @note Address: 0x800E4964
 * @note Size: 0x280
 */
void GXSetVtxAttrFmtv(GXVtxFmt format, GXVtxAttrFmtList* list)
{
	u32* vatA;
	u32* vatB;
	u32* vatC;

	vatA = &gx->vatA[format];
	vatB = &gx->vatB[format];
	vatC = &gx->vatC[format];

	for (; list->mAttr != GX_VA_NULL; list++) {
		SETVAT(vatA, vatB, vatC, list->mAttr, list->mCount, list->mType, list->mFrac);
	}

	gx->dirtyState |= GX_DIRTY_VAT;
	gx->dirtyVAT |= (u8)(1 << (u8)format);
}

/**
 * @note Address: 0x800E4BE4
 * @note Size: 0x9C
 */
void __GXSetVAT(void)
{
	u8 i;
	for (i = 0; i < 8; i++) {
		if (gx->dirtyVAT & (1 << (u8)i)) {
			GX_CP_LOAD_REG(GX_CP_REG_VAT_GRP0 | i, gx->vatA[i]);
			GX_CP_LOAD_REG(GX_CP_REG_VAT_GRP1 | i, gx->vatB[i]);
			GX_CP_LOAD_REG(GX_CP_REG_VAT_GRP2 | i, gx->vatC[i]);
		}
	}

	gx->dirtyVAT = 0;
}

/**
 * @note Address: N/A
 * @note Size: 0x280
 */
void GXGetVtxAttrFmt(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x74
 */
void GXGetVtxAttrFmtv(GXVtxFmt format, GXVtxAttrFmtList* list)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800E4C80
 * @note Size: 0x8C
 */
void GXSetArray(GXAttr attr, void* basePtr, u8 stride)
{
	s32 idx;
	s32 newAttr;
	s32 attrReg;

	newAttr = attr;
	if (newAttr == GX_VA_NBT) {
		newAttr = GX_VA_NRM;
	}

	attrReg = newAttr - GX_VA_POS;

	GX_CP_LOAD_REG(GX_BP_REG_SETMODE0_TEX4 | attrReg,
	               // Address -> offset?
	               (u32)basePtr & ~0xC0000000);

	idx = attrReg - 12;
	if (idx >= 0 && idx < 4) {
		gx->indexBase[idx] = (u32)basePtr & ~0xC0000000;
	}

	GX_CP_LOAD_REG(GX_BP_REG_SETIMAGE2_TEX4 | attrReg, stride);

	idx = attrReg - 12;
	if (idx >= 0 && idx < 4) {
		gx->indexStride[idx] = stride;
	}
}

/**
 * @note Address: 0x800E4D0C
 * @note Size: 0x10
 */
void GXInvalidateVtxCache(void) { GX_WRITE_U8(GX_FIFO_CMD_INVAL_VTX); }

/**
 * @note Address: 0x800E4D1C
 * @note Size: 0x280
 */
void GXSetTexCoordGen2(GXTexCoordID id, GXTexGenType type, GXTexGenSrc src, u32 texMtxIdx, GXBool normalize, u32 dualTexMtxIdx)
{
	u32 reg;
	u32 inputRow;
	GXXfTexReg inputForm;

	reg       = 0;
	inputForm = GX_XF_TEX_FORM_AB11;
	inputRow  = 5;

	switch (src) {
	case GX_TG_POS:
		inputRow  = 0;
		inputForm = GX_XF_TEX_FORM_ABC1;
		break;
	case GX_TG_NRM:
		inputRow  = 1;
		inputForm = GX_XF_TEX_FORM_ABC1;
		break;
	case GX_TG_BINRM:
		inputRow  = 3;
		inputForm = GX_XF_TEX_FORM_ABC1;
		break;
	case GX_TG_TANGENT:
		inputRow  = 4;
		inputForm = GX_XF_TEX_FORM_ABC1;
		break;
	case GX_TG_COLOR0:
		inputRow = 2;
		break;
	case GX_TG_COLOR1:
		inputRow = 2;
		break;
	case GX_TG_TEX0:
		inputRow = 5;
		break;
	case GX_TG_TEX1:
		inputRow = 6;
		break;
	case GX_TG_TEX2:
		inputRow = 7;
		break;
	case GX_TG_TEX3:
		inputRow = 8;
		break;
	case GX_TG_TEX4:
		inputRow = 9;
		break;
	case GX_TG_TEX5:
		inputRow = 10;
		break;
	case GX_TG_TEX6:
		inputRow = 11;
		break;
	case GX_TG_TEX7:
		inputRow = 12;
		break;
	}

	switch (type) {
	case GX_TG_NRM:
		// reg = 0;
		GX_SET_REG(reg, GX_XF_TEX_PROJ_ST, GX_XF_TEX_PROJTYPE_ST, GX_XF_TEX_PROJTYPE_END); // 2x4 projection
		GX_SET_REG(reg, inputForm, GX_XF_TEX_INPUTFORM_ST, GX_XF_TEX_INPUTFORM_END);
		GX_SET_REG(reg, GX_TG_POS, GX_XF_TEX_TEXGENTYPE_ST, GX_XF_TEX_TEXGENTYPE_END);
		GX_SET_REG(reg, inputRow, GX_XF_TEX_SRCROW_ST, GX_XF_TEX_SRCROW_END);
		break;
	case GX_TG_POS:
		// reg = 0;
		GX_SET_REG(reg, GX_XF_TEX_PROJ_STQ, GX_XF_TEX_PROJTYPE_ST, GX_XF_TEX_PROJTYPE_END); // 3x4 projection
		GX_SET_REG(reg, inputForm, GX_XF_TEX_INPUTFORM_ST, GX_XF_TEX_INPUTFORM_END);
		GX_SET_REG(reg, GX_TG_POS, GX_XF_TEX_TEXGENTYPE_ST, GX_XF_TEX_TEXGENTYPE_END);
		GX_SET_REG(reg, inputRow, GX_XF_TEX_SRCROW_ST, GX_XF_TEX_SRCROW_END);
		break;
	case GX_TG_BUMP0:
	case GX_TG_BUMP1:
	case GX_TG_BUMP2:
	case GX_TG_BUMP3:
	case GX_TG_BUMP4:
	case GX_TG_BUMP5:
	case GX_TG_BUMP6:
	case GX_TG_BUMP7:
		// reg = 0;
		GX_SET_REG(reg, GX_XF_TEX_PROJ_ST, GX_XF_TEX_PROJTYPE_ST, GX_XF_TEX_PROJTYPE_END); // 2x4 projection
		GX_SET_REG(reg, inputForm, GX_XF_TEX_INPUTFORM_ST, GX_XF_TEX_INPUTFORM_END);
		GX_SET_REG(reg, GX_TG_NRM, GX_XF_TEX_TEXGENTYPE_ST, GX_XF_TEX_TEXGENTYPE_END);
		GX_SET_REG(reg, inputRow, GX_XF_TEX_SRCROW_ST, GX_XF_TEX_SRCROW_END);
		GX_SET_REG(reg, src - GX_TG_TEXCOORD0, GX_XF_TEX_BUMPSRCTEX_ST, GX_XF_TEX_BUMPSRCTEX_END);
		GX_SET_REG(reg, type - GX_TG_BUMP0, GX_XF_TEX_BUMPSRCLIGHT_ST, GX_XF_TEX_BUMPSRCLIGHT_END);
		break;
	case GX_TG_SRTG:
		// reg = 0;
		GX_SET_REG(reg, GX_XF_TEX_PROJ_ST, GX_XF_TEX_PROJTYPE_ST, GX_XF_TEX_PROJTYPE_END); // 2x4 projection
		GX_SET_REG(reg, inputForm, GX_XF_TEX_INPUTFORM_ST, GX_XF_TEX_INPUTFORM_END);

		if (src == GX_TG_COLOR0) {
			GX_SET_REG(reg, GX_XF_TG_CLR0, GX_XF_TEX_TEXGENTYPE_ST, GX_XF_TEX_TEXGENTYPE_END);
		} else {
			GX_SET_REG(reg, GX_XF_TG_CLR1, GX_XF_TEX_TEXGENTYPE_ST, GX_XF_TEX_TEXGENTYPE_END);
		}
		GX_SET_REG(reg, 2, GX_XF_TEX_SRCROW_ST, GX_XF_TEX_SRCROW_END);
		break;
	default:
		break;
	}

	GX_XF_LOAD_REG(GX_XF_REG_TEX0 + id, reg);

	reg = 0;
	GX_SET_REG(reg, dualTexMtxIdx - 0x40, GX_XF_MTXIDX0_GEOM_ST, GX_XF_MTXIDX0_GEOM_END);
	GX_SET_REG(reg, normalize, GX_XF_DUALTEX_NORMALISE_ST, GX_XF_DUALTEX_NORMALISE_END);

	GX_XF_LOAD_REG(GX_XF_REG_DUALTEX0 + id, reg);

	switch (id) {
	case GX_TEXCOORD0:
		GX_SET_REG(gx->matIdxA, texMtxIdx, GX_XF_MTXIDX0_TEX0_ST, GX_XF_MTXIDX0_TEX0_END);
		break;
	case GX_TEXCOORD1:
		GX_SET_REG(gx->matIdxA, texMtxIdx, GX_XF_MTXIDX0_TEX1_ST, GX_XF_MTXIDX0_TEX1_END);
		break;
	case GX_TEXCOORD2:
		GX_SET_REG(gx->matIdxA, texMtxIdx, GX_XF_MTXIDX0_TEX2_ST, GX_XF_MTXIDX0_TEX2_END);
		break;
	case GX_TEXCOORD3:
		GX_SET_REG(gx->matIdxA, texMtxIdx, GX_XF_MTXIDX0_TEX3_ST, GX_XF_MTXIDX0_TEX3_END);
		break;
	case GX_TEXCOORD4:
		GX_SET_REG(gx->matIdxB, texMtxIdx, GX_XF_MTXIDX1_TEX4_ST, GX_XF_MTXIDX1_TEX4_END);
		break;
	case GX_TEXCOORD5:
		GX_SET_REG(gx->matIdxB, texMtxIdx, GX_XF_MTXIDX1_TEX5_ST, GX_XF_MTXIDX1_TEX5_END);
		break;
	case GX_TEXCOORD6:
		GX_SET_REG(gx->matIdxB, texMtxIdx, GX_XF_MTXIDX1_TEX6_ST, GX_XF_MTXIDX1_TEX6_END);
		break;
	default:
		GX_SET_REG(gx->matIdxB, texMtxIdx, GX_XF_MTXIDX1_TEX7_ST, GX_XF_MTXIDX1_TEX7_END);
		break;
	}
	__GXSetMatrixIndex(id + 1);
}

/**
 * @note Address: 0x800E4F9C
 * @note Size: 0x3C
 */
void GXSetNumTexGens(u8 count)
{
	GX_SET_REG(gx->genMode, count, GX_BP_GENMODE_NUMTEX_ST, GX_BP_GENMODE_NUMTEX_END);
	GX_XF_LOAD_REG(GX_XF_REG_NUMTEX, count);
	gx->dirtyState |= GX_DIRTY_GEN_MODE;
}

#include "Dolphin/gx.h"
#include "Dolphin/GX/GXHardware.h"
#include "Dolphin/GX/GXHardwareCP.h"
#include "Dolphin/GX/GXHardwareXF.h"
#include "Dolphin/GX/GXHardwareBP.h"

/*
 * --INFO--
 * Address:	........
 * Size:	00008C
 */
inline void __GXXfVtxSpecs(void)
{
	u32 norm, color, texCount;

	norm = gx->hasBiNrms ? 2 : (gx->hasNrms ? 1 : 0);

	// Both fields in one access
	color = 32
	      - __cntlzw(GX_BITGET(gx->vcdLo, GX_CP_VCD_LO_COLORSPECULAR_ST, GX_CP_VCD_LO_COLORSPECULAR_SZ + GX_CP_VCD_LO_COLORDIFFUSED_SZ))
	      + 1;
	color >>= 1;

	// All 16 assigned bits in VCD_Hi
	texCount = 32 - __cntlzw(GX_BITGET(gx->vcdHi, GX_CP_VCD_HI_TEX7COORD_ST, sizeof(u16) * 8)) + 1;
	texCount <<= 3;

	norm <<= 2;

	GX_XF_LOAD_REG_HDR(GX_XF_REG_INVERTEXSPEC);
	WGPIPE.u32    = color | norm | (texCount & ~0xf);
	gx->bpSentNot = TRUE;
}

/*
 * --INFO--
 * Address:	800E4284
 * Size:	00026C
 */

void GXSetVtxDesc(GXAttr attr, GXAttrType type)
{
	switch (attr) {
	case GX_VA_PNMTXIDX:
		GX_CP_SET_VCD_LO_POSMATIDX(gx->vcdLo, type);
		break;
	case GX_VA_TEX0MTXIDX:
		GX_CP_SET_VCD_LO_TEX0MATIDX(gx->vcdLo, type);
		break;
	case GX_VA_TEX1MTXIDX:
		GX_CP_SET_VCD_LO_TEX1MATIDX(gx->vcdLo, type);
		break;
	case GX_VA_TEX2MTXIDX:
		GX_CP_SET_VCD_LO_TEX2MATIDX(gx->vcdLo, type);
		break;
	case GX_VA_TEX3MTXIDX:
		GX_CP_SET_VCD_LO_TEX3MATIDX(gx->vcdLo, type);
		break;
	case GX_VA_TEX4MTXIDX:
		GX_CP_SET_VCD_LO_TEX4MATIDX(gx->vcdLo, type);
		break;
	case GX_VA_TEX5MTXIDX:
		GX_CP_SET_VCD_LO_TEX5MATIDX(gx->vcdLo, type);
		break;
	case GX_VA_TEX6MTXIDX:
		GX_CP_SET_VCD_LO_TEX6MATIDX(gx->vcdLo, type);
		break;
	case GX_VA_TEX7MTXIDX:
		GX_CP_SET_VCD_LO_TEX7MATIDX(gx->vcdLo, type);
		break;
	case GX_VA_POS:
		GX_CP_SET_VCD_LO_POSITION(gx->vcdLo, type);
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
		GX_CP_SET_VCD_LO_COLORDIFFUSED(gx->vcdLo, type);
		break;
	case GX_VA_CLR1:
		GX_CP_SET_VCD_LO_COLORSPECULAR(gx->vcdLo, type);
		break;
	case GX_VA_TEX0:
		GX_CP_SET_VCD_HI_TEX0COORD(gx->vcdHi, type);
		break;
	case GX_VA_TEX1:
		GX_CP_SET_VCD_HI_TEX1COORD(gx->vcdHi, type);
		break;
	case GX_VA_TEX2:
		GX_CP_SET_VCD_HI_TEX2COORD(gx->vcdHi, type);
		break;
	case GX_VA_TEX3:
		GX_CP_SET_VCD_HI_TEX3COORD(gx->vcdHi, type);
		break;
	case GX_VA_TEX4:
		GX_CP_SET_VCD_HI_TEX4COORD(gx->vcdHi, type);
		break;
	case GX_VA_TEX5:
		GX_CP_SET_VCD_HI_TEX5COORD(gx->vcdHi, type);
		break;
	case GX_VA_TEX6:
		GX_CP_SET_VCD_HI_TEX6COORD(gx->vcdHi, type);
		break;
	case GX_VA_TEX7:
		GX_CP_SET_VCD_HI_TEX7COORD(gx->vcdHi, type);
		break;
	}

	if (gx->hasNrms || gx->hasBiNrms) {
		GX_CP_SET_VCD_LO_NORMAL(gx->vcdLo, gx->nrmType);
	} else {
		GX_CP_SET_VCD_LO_NORMAL(gx->vcdLo, GX_NONE);
	}

	gx->dirtyState |= GX_DIRTY_VCD;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000288
 */
void GXSetVtxDescv(GXVtxDescList* list)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E44F0
 * Size:	0000BC
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

/*
 * --INFO--
 * Address:	800E45AC
 * Size:	000124
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

	vlim = GX_CP_GET_VCD_LO_POSMATIDX(vcdLo);
	vlim += GX_CP_GET_VCD_LO_TEX0MATIDX(vcdLo);
	vlim += GX_CP_GET_VCD_LO_TEX1MATIDX(vcdLo);
	vlim += GX_CP_GET_VCD_LO_TEX2MATIDX(vcdLo);
	vlim += GX_CP_GET_VCD_LO_TEX3MATIDX(vcdLo);
	vlim += GX_CP_GET_VCD_LO_TEX4MATIDX(vcdLo);
	vlim += GX_CP_GET_VCD_LO_TEX5MATIDX(vcdLo);
	vlim += GX_CP_GET_VCD_LO_TEX6MATIDX(vcdLo);
	vlim += GX_CP_GET_VCD_LO_TEX7MATIDX(vcdLo);

	vlim += tbl3[GX_CP_GET_VCD_LO_POSITION(vcdLo)];
	vlim += tbl3[GX_CP_GET_VCD_LO_NORMAL(vcdLo)] * (compCnt == GX_NRM_NBT ? 3 : 1);
	vlim += tbl1[GX_CP_GET_VCD_LO_COLORDIFFUSED(vcdLo)];
	vlim += tbl1[GX_CP_GET_VCD_LO_COLORSPECULAR(vcdLo)];

	vlim += tbl2[GX_CP_GET_VCD_HI_TEX0COORD(vcdHi)];
	vlim += tbl2[GX_CP_GET_VCD_HI_TEX1COORD(vcdHi)];
	vlim += tbl2[GX_CP_GET_VCD_HI_TEX2COORD(vcdHi)];
	vlim += tbl2[GX_CP_GET_VCD_HI_TEX3COORD(vcdHi)];
	vlim += tbl2[GX_CP_GET_VCD_HI_TEX4COORD(vcdHi)];
	vlim += tbl2[GX_CP_GET_VCD_HI_TEX5COORD(vcdHi)];
	vlim += tbl2[GX_CP_GET_VCD_HI_TEX6COORD(vcdHi)];
	vlim += tbl2[GX_CP_GET_VCD_HI_TEX7COORD(vcdHi)];

	gx->vLim = vlim;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001B4
 */
void GXGetVtxDesc(GXAttr attr, GXAttrType* type)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void GXGetVtxDescv(GXVtxDescList* list)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E46D0
 * Size:	000038
 */
void GXClearVtxDesc(void)
{
	gx->vcdLo = 0;
	GX_CP_SET_VCD_LO_POSITION(gx->vcdLo, GX_DIRECT);
	gx->vcdHi     = 0;
	gx->hasNrms   = FALSE;
	gx->hasBiNrms = FALSE;
	gx->dirtyState |= GX_DIRTY_VCD;
}

/*
 * --INFO--
 * Address:	800E4708
 * Size:	00025C
 */
static inline void SETVAT(u32* vatA, u32* vatB, u32* vatC, GXAttr attr, GXCompCnt compCnt, GXCompType compType, u8 shift)
{
	switch (attr) {
	case GX_VA_POS:
		GX_CP_SET_VAT_GROUP0_POS_CNT(*vatA, compCnt);
		GX_CP_SET_VAT_GROUP0_POS_TYPE(*vatA, compType);
		GX_CP_SET_VAT_GROUP0_POS_SHIFT(*vatA, shift);
		break;
	case GX_VA_NRM:
	case GX_VA_NBT:
		GX_CP_SET_VAT_GROUP0_NRM_TYPE(*vatA, compType);
		if (compCnt == GX_NRM_NBT3) {
			// Probably because the compCnt can only be one bit?
			GX_CP_SET_VAT_GROUP0_NRM_CNT(*vatA, GX_NRM_NBT);
			GX_CP_SET_VAT_GROUP0_NORMALINDEX3(*vatA, TRUE);
		} else {
			GX_CP_SET_VAT_GROUP0_NRM_CNT(*vatA, compCnt);
			GX_CP_SET_VAT_GROUP0_NORMALINDEX3(*vatA, FALSE);
		}
		break;
	case GX_VA_CLR0:
		GX_CP_SET_VAT_GROUP0_COLORDIFF_CNT(*vatA, compCnt);
		GX_CP_SET_VAT_GROUP0_COLORDIFF_TYPE(*vatA, compType);
		break;
	case GX_VA_CLR1:
		GX_CP_SET_VAT_GROUP0_COLORSPEC_CNT(*vatA, compCnt);
		GX_CP_SET_VAT_GROUP0_COLORSPEC_TYPE(*vatA, compType);
		break;
	case GX_VA_TEX0:
		GX_CP_SET_VAT_GROUP0_TXC0_CNT(*vatA, compCnt);
		GX_CP_SET_VAT_GROUP0_TXC0_TYPE(*vatA, compType);
		GX_CP_SET_VAT_GROUP0_TXC0_SHIFT(*vatA, shift);
		break;
	case GX_VA_TEX1:
		GX_CP_SET_VAT_GROUP1_TXC1_CNT(*vatB, compCnt);
		GX_CP_SET_VAT_GROUP1_TXC1_TYPE(*vatB, compType);
		GX_CP_SET_VAT_GROUP1_TXC1_SHIFT(*vatB, shift);
		break;
	case GX_VA_TEX2:
		GX_CP_SET_VAT_GROUP1_TXC2_CNT(*vatB, compCnt);
		GX_CP_SET_VAT_GROUP1_TXC2_TYPE(*vatB, compType);
		GX_CP_SET_VAT_GROUP1_TXC2_SHIFT(*vatB, shift);
		break;
	case GX_VA_TEX3:
		GX_CP_SET_VAT_GROUP1_TXC3_CNT(*vatB, compCnt);
		GX_CP_SET_VAT_GROUP1_TXC3_TYPE(*vatB, compType);
		GX_CP_SET_VAT_GROUP1_TXC3_SHIFT(*vatB, shift);
		break;
	case GX_VA_TEX4:
		GX_CP_SET_VAT_GROUP1_TXC4_CNT(*vatB, compCnt);
		GX_CP_SET_VAT_GROUP1_TXC4_TYPE(*vatB, compType);
		GX_CP_SET_VAT_GROUP2_TXC4_SHIFT(*vatC, shift);
		break;
	case GX_VA_TEX5:
		GX_CP_SET_VAT_GROUP2_TXC5_CNT(*vatC, compCnt);
		GX_CP_SET_VAT_GROUP2_TXC5_TYPE(*vatC, compType);
		GX_CP_SET_VAT_GROUP2_TXC5_SHIFT(*vatC, shift);
		break;
	case GX_VA_TEX6:
		GX_CP_SET_VAT_GROUP2_TXC6_CNT(*vatC, compCnt);
		GX_CP_SET_VAT_GROUP2_TXC6_TYPE(*vatC, compType);
		GX_CP_SET_VAT_GROUP2_TXC6_SHIFT(*vatC, shift);
		break;
	case GX_VA_TEX7:
		GX_CP_SET_VAT_GROUP2_TXC7_CNT(*vatC, compCnt);
		GX_CP_SET_VAT_GROUP2_TXC7_TYPE(*vatC, compType);
		GX_CP_SET_VAT_GROUP2_TXC7_SHIFT(*vatC, shift);
		break;
	}
}

void GXSetVtxAttrFmt(GXVtxFmt format, GXAttr attr, GXCompCnt count, GXCompType type, u8 frac)
{
	u32* vA = &gx->vatA[format];
	u32* vB = &gx->vatB[format];
	u32* vC = &gx->vatC[format];

	SETVAT(vA, vB, vC, attr, count, type, frac);

	gx->dirtyState |= GX_DIRTY_VAT;
	gx->dirtyVAT |= (u8)(1 << (u8)format);
}

/*
 * --INFO--
 * Address:	800E4964
 * Size:	000280
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

/*
 * --INFO--
 * Address:	800E4BE4
 * Size:	00009C
 */
void __GXSetVAT(void)
{
	u8 i;
	for (i = 0; i < 8; i++) {
		if (gx->dirtyVAT & (1 << (u8)i)) {
			GX_CP_LOAD_REG(GX_CP_REG_VAT_GROUP0 | i, gx->vatA[i]);
			GX_CP_LOAD_REG(GX_CP_REG_VAT_GROUP1 | i, gx->vatB[i]);
			GX_CP_LOAD_REG(GX_CP_REG_VAT_GROUP2 | i, gx->vatC[i]);
		}
	}

	gx->dirtyVAT = 0;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000280
 */
void GXGetVtxAttrFmt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void GXGetVtxAttrFmtv(GXVtxFmt format, GXVtxAttrFmtList* list)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E4C80
 * Size:	00008C
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

/*
 * --INFO--
 * Address:	800E4D0C
 * Size:	000010
 */
void GXInvalidateVtxCache(void) { GX_WRITE_U8(GX_FIFO_CMD_INVAL_VTX); }

/*
 * --INFO--
 * Address:	800E4D1C
 * Size:	000280
 */
void GXSetTexCoordGen2(GXTexCoordID id, GXTexGenType type, GXTexGenSrc src, u32 texMtxIdx, GXBool normalize, u32 dualTexMtxIdx)
{
	u32 reg;
	u32 inputRow;
	GXXfTexForm inputForm;

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
		GX_XF_SET_TEX_PROJTYPE(reg, GX_XF_TEX_PROJ_ST); // 2x4 projection
		GX_XF_SET_TEX_INPUTFORM(reg, inputForm);
		GX_XF_SET_TEX_TEXGENTYPE(reg, GX_TG_POS);
		GX_XF_SET_TEX_SRCROW(reg, inputRow);
		break;
	case GX_TG_POS:
		// reg = 0;
		GX_XF_SET_TEX_PROJTYPE(reg, GX_XF_TEX_PROJ_STQ); // 3x4 projection
		GX_XF_SET_TEX_INPUTFORM(reg, inputForm);
		GX_XF_SET_TEX_TEXGENTYPE(reg, GX_TG_POS);
		GX_XF_SET_TEX_SRCROW(reg, inputRow);
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
		GX_XF_SET_TEX_PROJTYPE(reg, GX_XF_TEX_PROJ_ST); // 2x4 projection
		GX_XF_SET_TEX_INPUTFORM(reg, inputForm);
		GX_XF_SET_TEX_TEXGENTYPE(reg, GX_TG_NRM);
		GX_XF_SET_TEX_SRCROW(reg, inputRow);
		GX_XF_SET_TEX_BUMPSRCTEX(reg, src - GX_TG_TEXCOORD0);
		GX_XF_SET_TEX_BUMPSRCLIGHT(reg, type - GX_TG_BUMP0);
		break;
	case GX_TG_SRTG:
		// reg = 0;
		GX_XF_SET_TEX_PROJTYPE(reg, GX_XF_TEX_PROJ_ST); // 2x4 projection
		GX_XF_SET_TEX_INPUTFORM(reg, inputForm);

		if (src == GX_TG_COLOR0) {
			GX_XF_SET_TEX_TEXGENTYPE(reg, GX_XF_TG_CLR0);
		} else {
			GX_XF_SET_TEX_TEXGENTYPE(reg, GX_XF_TG_CLR1);
		}

		GX_XF_SET_TEX_SRCROW(reg, 2);
		break;
	default:
		break;
	}

	GX_XF_LOAD_REG(GX_XF_REG_TEX0 + id, reg);

	reg = 0;
	GX_XF_SET_MATRIXINDEX0_GEOM(reg, dualTexMtxIdx - 0x40);
	GX_XF_SET_DUALTEX_NORMALIZE(reg, normalize);

	GX_XF_LOAD_REG(GX_XF_REG_DUALTEX0 + id, reg);

	switch (id) {
	case GX_TEXCOORD0:
		GX_XF_SET_MATRIXINDEX0_TEX0(gx->matIdxA, texMtxIdx);
		break;
	case GX_TEXCOORD1:
		GX_XF_SET_MATRIXINDEX0_TEX1(gx->matIdxA, texMtxIdx);
		break;
	case GX_TEXCOORD2:
		GX_XF_SET_MATRIXINDEX0_TEX2(gx->matIdxA, texMtxIdx);
		break;
	case GX_TEXCOORD3:
		GX_XF_SET_MATRIXINDEX0_TEX3(gx->matIdxA, texMtxIdx);
		break;
	case GX_TEXCOORD4:
		GX_XF_SET_MATRIXINDEX1_TEX4(gx->matIdxB, texMtxIdx);
		break;
	case GX_TEXCOORD5:
		GX_XF_SET_MATRIXINDEX1_TEX5(gx->matIdxB, texMtxIdx);
		break;
	case GX_TEXCOORD6:
		GX_XF_SET_MATRIXINDEX1_TEX6(gx->matIdxB, texMtxIdx);
		break;
	default:
		GX_XF_SET_MATRIXINDEX1_TEX7(gx->matIdxB, texMtxIdx);
		break;
	}
	__GXSetMatrixIndex(id + 1);
}

/*
 * --INFO--
 * Address:	800E4F9C
 * Size:	00003C
 */
void GXSetNumTexGens(u8 count)
{
	GX_BP_SET_GENMODE_NUMTEX(gx->genMode, count);
	GX_XF_LOAD_REG(GX_XF_REG_NUMTEX, count);
	gx->dirtyState |= GX_DIRTY_GEN_MODE;
}

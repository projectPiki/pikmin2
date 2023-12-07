#include "Dolphin/gx.h"

static u32 TEVCOpTableST0[] = {
	0xC008F8AF, // modulate
	0xC008A89F, // decal
	0xC008AC8F, // blend
	0xC008FFF8, // replace
	0xC008FFFA, // passclr
};

static u32 TEVCOpTableST1[] = {
	0xC008F80F, // modulate
	0xC008089F, // decal
	0xC0080C8F, // blend
	0xC008FFF8, // replace
	0xC008FFF0, // passclr
};

static u32 TEVAOpTableST0[] = {
	0xC108F2F0, // modulate
	0xC108FFD0, // decal
	0xC108F2F0, // blend
	0xC108FFC0, // replace
	0xC108FFD0, // passclr
};

static u32 TEVAOpTableST1[] = {
	0xC108F070, // modulate
	0xC108FF80, // decal
	0xC108F070, // blend
	0xC108FFC0, // replace
	0xC108FF80, // passclr
};

/*
 * --INFO--
 * Address:	800E847C
 * Size:	00008C
 */
void GXSetTevOp(GXTevStageID stage, GXTevMode mode)
{
	u32* color;
	u32* alpha;
	u32 tevReg;

	if (stage == GX_TEVSTAGE0) {
		color = &TEVCOpTableST0[mode];
		alpha = &TEVAOpTableST0[mode];
	} else {
		color = &TEVCOpTableST1[mode];
		alpha = &TEVAOpTableST1[mode];
	}

	tevReg = gx->tevc[stage];
	tevReg = (*color & ~0xFF000000) | (tevReg & 0xFF000000);

	GX_WRITE_U8(0x61);
	GX_WRITE_U32(tevReg);

	gx->tevc[stage] = tevReg;

	tevReg = gx->teva[stage];
	tevReg = (*alpha & ~0xFF00000F) | (tevReg & 0xFF00000F);

	GX_WRITE_U8(0x61);
	GX_WRITE_U32(tevReg);

	gx->teva[stage] = tevReg;

	gx->bpSentNot = GX_FALSE;
}

/*
 * --INFO--
 * Address:	800E8508
 * Size:	000044
 */
void GXSetTevColorIn(GXTevStageID stage, GXTevColorArg a, GXTevColorArg b, GXTevColorArg c, GXTevColorArg d)
{
	u32 tevReg;

	tevReg = gx->tevc[stage];

	FAST_FLAG_SET(tevReg, a, 12, 4);
	FAST_FLAG_SET(tevReg, b, 8, 4);
	FAST_FLAG_SET(tevReg, c, 4, 4);
	FAST_FLAG_SET(tevReg, d, 0, 4);

	GX_WRITE_U8(0x61);
	GX_WRITE_U32(tevReg);

	gx->tevc[stage] = tevReg;
	gx->bpSentNot   = GX_FALSE;
}

/*
 * --INFO--
 * Address:	800E854C
 * Size:	000044
 */
void GXSetTevAlphaIn(GXTevStageID stage, GXTevAlphaArg a, GXTevAlphaArg b, GXTevAlphaArg c, GXTevAlphaArg d)
{
	u32 tevReg;

	tevReg = gx->teva[stage];

	FAST_FLAG_SET(tevReg, a, 13, 3);
	FAST_FLAG_SET(tevReg, b, 10, 3);
	FAST_FLAG_SET(tevReg, c, 7, 3);
	FAST_FLAG_SET(tevReg, d, 4, 3);

	GX_WRITE_U8(0x61);
	GX_WRITE_U32(tevReg);

	gx->teva[stage] = tevReg;
	gx->bpSentNot   = GX_FALSE;
}

/*
 * --INFO--
 * Address:	800E8590
 * Size:	000068
 */
void GXSetTevColorOp(GXTevStageID stage, GXTevOp op, GXTevBias bias, GXTevScale scale, GXBool doClamp, GXTevRegID outReg)
{
	u32 tevReg;

	tevReg = gx->tevc[stage];
	FAST_FLAG_SET(tevReg, op & 1, 18, 1);

	if (op <= 1) {
		FAST_FLAG_SET(tevReg, scale, 20, 2);
		FAST_FLAG_SET(tevReg, bias, 16, 2);
	} else {
		FAST_FLAG_SET(tevReg, (op >> 1) & 3, 20, 2);
		FAST_FLAG_SET(tevReg, 3, 16, 2);
	}

	FAST_FLAG_SET(tevReg, doClamp, 19, 1);
	FAST_FLAG_SET(tevReg, outReg, 22, 2);

	GX_WRITE_U8(0x61);
	GX_WRITE_U32(tevReg);
	gx->tevc[stage] = tevReg;
	gx->bpSentNot   = GX_FALSE;
}

/*
 * --INFO--
 * Address:	800E85F8
 * Size:	000068
 */
void GXSetTevAlphaOp(GXTevStageID stage, GXTevOp op, GXTevBias bias, GXTevScale scale, GXBool doClamp, GXTevRegID outReg)
{
	u32 tevReg;

	tevReg = gx->teva[stage];
	FAST_FLAG_SET(tevReg, op & 1, 18, 1);

	if (op <= 1) {
		FAST_FLAG_SET(tevReg, scale, 20, 2);
		FAST_FLAG_SET(tevReg, bias, 16, 2);
	} else {
		FAST_FLAG_SET(tevReg, (op >> 1) & 3, 20, 2);
		FAST_FLAG_SET(tevReg, 3, 16, 2);
	}

	FAST_FLAG_SET(tevReg, doClamp, 19, 1);
	FAST_FLAG_SET(tevReg, outReg, 22, 2);

	GX_WRITE_U8(0x61);
	GX_WRITE_U32(tevReg);
	gx->teva[stage] = tevReg;
	gx->bpSentNot   = GX_FALSE;
}

/*
 * --INFO--
 * Address:	800E8660
 * Size:	00007C
 */
void GXSetTevColor(GXTevRegID reg, GXColor color)
{
	u32 ra = 0;
	u32 bg = 0;

	FAST_FLAG_SET(ra, color.r, 0, 11);
	FAST_FLAG_SET(ra, color.a, 12, 11);
	FAST_FLAG_SET(bg, color.b, 0, 11);
	FAST_FLAG_SET(bg, color.g, 12, 11);

	FAST_FLAG_SET(ra, 0xE0 + reg * 2, 24, 8);
	FAST_FLAG_SET(bg, 0xE1 + reg * 2, 24, 8);

	GX_WRITE_U8(0x61);
	GX_WRITE_U32(ra);

	GX_WRITE_U8(0x61);
	GX_WRITE_U32(bg);

	GX_WRITE_U8(0x61);
	GX_WRITE_U32(bg);

	GX_WRITE_U8(0x61);
	GX_WRITE_U32(bg);

	gx->bpSentNot = GX_FALSE;
}

/*
 * --INFO--
 * Address:	800E86DC
 * Size:	00007C
 */
void GXSetTevColorS10(GXTevRegID reg, GXColorS10 color)
{
	s16 r = color.r;
	s16 a = color.a;
	s16 b = color.b;
	s16 g = color.g;

	u32 ra = 0;
	
	GX_SET_REG(ra, r, 21, 31);
	GX_SET_REG(ra, a, 9, 19);
	GX_SET_REG(ra, GX_BP_REG_TEVREG0LO + reg*2, 0, 7);

	GX_BP_LOAD_REG(ra);

	GX_SET_REG(ra, b, 21, 31);
	GX_SET_REG(ra, g, 9, 19);
	GX_SET_REG(ra, GX_BP_REG_TEVREG0HI + reg*2, 0, 7);

	GX_BP_LOAD_REG(ra);
	GX_BP_LOAD_REG(ra);
	GX_BP_LOAD_REG(ra);

	gx->bpSentNot = GX_FALSE;
	/*
	.loc_0x0:
	  lha       r0, 0x0(r4)
	  rlwinm    r8,r3,1,0,30
	  li        r5, 0
	  lha       r3, 0x6(r4)
	  rlwimi    r5,r0,0,21,31
	  addi      r9, r5, 0
	  lha       r6, 0x4(r4)
	  lha       r0, 0x2(r4)
	  li        r5, 0x61
	  lis       r4, 0xCC01
	  rlwimi    r9,r3,12,9,19
	  stb       r5, -0x8000(r4)
	  addi      r7, r8, 0xE0
	  lwz       r3, -0x6D70(r2)
	  rlwimi    r9,r7,24,0,7
	  stw       r9, -0x8000(r4)
	  li        r7, 0
	  rlwimi    r7,r6,0,21,31
	  addi      r6, r7, 0
	  stb       r5, -0x8000(r4)
	  rlwimi    r6,r0,12,9,19
	  addi      r0, r8, 0xE1
	  rlwimi    r6,r0,24,0,7
	  stw       r6, -0x8000(r4)
	  li        r0, 0
	  stb       r5, -0x8000(r4)
	  stw       r6, -0x8000(r4)
	  stb       r5, -0x8000(r4)
	  stw       r6, -0x8000(r4)
	  sth       r0, 0x2(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E8758
 * Size:	000074
 */
void GXSetTevKColor(GXTevKColorID id, GXColor color)
{
	u32 ra;
	u32 bg;

	ra = 0;
	FAST_FLAG_SET(ra, color.r, 0, 8);
	FAST_FLAG_SET(ra, color.a, 12, 8);
	FAST_FLAG_SET(ra, 8, 20, 4);
	FAST_FLAG_SET(ra, 0xE0 + id * 2, 24, 8);

	bg = 0;
	FAST_FLAG_SET(bg, color.b, 0, 8);
	FAST_FLAG_SET(bg, color.g, 12, 8);
	FAST_FLAG_SET(bg, 8, 20, 4);
	FAST_FLAG_SET(bg, 0xE1 + id * 2, 24, 8);

	GX_WRITE_U8(0x61);
	GX_WRITE_U32(ra);

	GX_WRITE_U8(0x61);
	GX_WRITE_U32(bg);

	gx->bpSentNot = GX_FALSE;
}

/*
 * --INFO--
 * Address:	800E87CC
 * Size:	00005C
 */
void GXSetTevKColorSel(GXTevStageID stage, GXTevKColorSel sel)
{
	u32* reg;

	reg = &gx->tevKsel[stage >> 1];

	if (stage & 1) {
		FAST_FLAG_SET(*reg, sel, 14, 5);
	} else {
		FAST_FLAG_SET(*reg, sel, 4, 5);
	}

	GX_WRITE_U8(0x61);
	GX_WRITE_U32(*reg);
	gx->bpSentNot = GX_FALSE;
}

/*
 * --INFO--
 * Address:	800E8828
 * Size:	00005C
 */
void GXSetTevKAlphaSel(GXTevStageID stage, GXTevKAlphaSel sel)
{
	u32* reg;

	reg = &gx->tevKsel[stage >> 1];

	if (stage & 1) {
		FAST_FLAG_SET(*reg, sel, 19, 5);
	} else {
		FAST_FLAG_SET(*reg, sel, 9, 5);
	}

	GX_WRITE_U8(0x61);
	GX_WRITE_U32(*reg);
	gx->bpSentNot = GX_FALSE;
}

/*
 * --INFO--
 * Address:	800E8884
 * Size:	000048
 */
void GXSetTevSwapMode(GXTevStageID stage, GXTevSwapSel rasSel, GXTevSwapSel texSel)
{
	u32* reg = &gx->teva[stage];
	FAST_FLAG_SET(*reg, rasSel, 0, 2);
	FAST_FLAG_SET(*reg, texSel, 2, 2);

	GX_WRITE_U8(0x61);
	GX_WRITE_U32(*reg);

	gx->bpSentNot = GX_FALSE;
}

/*
 * --INFO--
 * Address:	800E88CC
 * Size:	000080
 */
void GXSetTevSwapModeTable(GXTevSwapSel table, GXTevColorChan red, GXTevColorChan green, GXTevColorChan blue, GXTevColorChan alpha)
{
	u32* reg;

	reg = &gx->tevKsel[table << 1];
	FAST_FLAG_SET(*reg, red, 0, 2);
	FAST_FLAG_SET(*reg, green, 2, 2);

	GX_WRITE_U8(0x61);
	GX_WRITE_U32(*reg);

	reg = &gx->tevKsel[(table << 1) + 1];
	FAST_FLAG_SET(*reg, blue, 0, 2);
	FAST_FLAG_SET(*reg, alpha, 2, 2);

	GX_WRITE_U8(0x61);
	GX_WRITE_U32(*reg);

	gx->bpSentNot = GX_FALSE;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void GXSetTevClampMode(GXTevStageID stage, GXTevClampMode mode)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E894C
 * Size:	000044
 */
void GXSetAlphaCompare(GXCompare comp0, u8 ref0, GXAlphaOp op, GXCompare comp1, u8 ref1)
{
	u32 reg = 0xF3000000;

	FAST_FLAG_SET(reg, ref0, 0, 8);
	FAST_FLAG_SET(reg, ref1, 8, 8);
	FAST_FLAG_SET(reg, comp0, 16, 3);
	FAST_FLAG_SET(reg, comp1, 19, 3);
	FAST_FLAG_SET(reg, op, 22, 2);

	GX_WRITE_U8(0x61);
	GX_WRITE_U32(reg);

	gx->bpSentNot = GX_FALSE;
}

/*
 * --INFO--
 * Address:	800E8990
 * Size:	00008C
 */
void GXSetZTexture(GXZTexOp op, GXTexFmt format, u32 bias)
{
	u32 val1;
	u32 val2;
	u32 val3;

	val1 = 0;
	FAST_FLAG_SET(val1, bias, 0, 24);
	FAST_FLAG_SET(val1, 0xF4, 24, 8);

	val2 = 0;
	switch (format) {
	case GX_TF_Z8:
		val3 = 0;
		break;
	case GX_TF_Z16:
		val3 = 1;
		break;
	case GX_TF_Z24X8:
		val3 = 2;
		break;
	default:
		val3 = 2;
		break;
	}

	FAST_FLAG_SET(val2, val3, 0, 2);
	FAST_FLAG_SET(val2, op, 2, 2);
	FAST_FLAG_SET(val2, 0xF5, 24, 8);

	GX_WRITE_U8(0x61);
	GX_WRITE_U32(val1);

	GX_WRITE_U8(0x61);
	GX_WRITE_U32(val2);

	gx->bpSentNot = GX_FALSE;
}

/*
 * --INFO--
 * Address:	800E8A1C
 * Size:	00019C
 */
void GXSetTevOrder(GXTevStageID stage, GXTexCoordID coord, GXTexMapID map, GXChannelID color)
{
	static int c2r[] = { 0, 1, 0, 1, 0, 1, 7, 5, 6 };

	u32* reg;
	u32 tempMap;
	u32 tempCoord;

	reg                 = &gx->tref[stage / 2];
	gx->texmapId[stage] = map;

	tempMap = map & ~0x100;
	tempMap = (tempMap >= GX_MAX_TEXMAP) ? GX_TEXMAP0 : tempMap;

	if (coord >= GX_MAX_TEXCOORD) {
		tempCoord     = GX_TEXCOORD0;
		gx->tevTcEnab = gx->tevTcEnab & ~(1 << stage);
	} else {
		tempCoord     = coord;
		gx->tevTcEnab = gx->tevTcEnab | (1 << stage);
	}

	if (stage & 1) {
		FAST_FLAG_SET(*reg, tempMap, 12, 3);
		FAST_FLAG_SET(*reg, tempCoord, 15, 3);
		FAST_FLAG_SET(*reg, (color == GX_COLOR_NULL ? 7 : c2r[color]), 19, 3);
		FAST_FLAG_SET(*reg, ((map != GX_TEXMAP_NULL) && !(map & 0x100)), 18, 1);

	} else {
		FAST_FLAG_SET(*reg, tempMap, 0, 3);
		FAST_FLAG_SET(*reg, tempCoord, 3, 3);
		FAST_FLAG_SET(*reg, (color == GX_COLOR_NULL ? 7 : c2r[color]), 7, 3);
		FAST_FLAG_SET(*reg, ((map != GX_TEXMAP_NULL) && !(map & 0x100)), 6, 1);
	}

	GX_WRITE_U8(0x61);
	GX_WRITE_U32(*reg);

	gx->bpSentNot = GX_FALSE;
	gx->dirtyState |= 1;
}

/*
 * --INFO--
 * Address:	800E8BB8
 * Size:	000028
 */
void GXSetNumTevStages(u8 count)
{
	FAST_FLAG_SET(gx->genMode, count - 1, 10, 4);
	gx->dirtyState |= 0x4;
}

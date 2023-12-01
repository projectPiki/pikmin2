#include "Dolphin/gx.h"
#include "Dolphin/math.h"

/*
 * --INFO--
 * Address:	800E8BE0
 * Size:	000224
 */
void GXSetFog(GXFogType type, f32 startz, f32 endz, f32 nearz, f32 farz, GXColor color)
{
	f32 a, c;
	u32 a_bits, c_bits;

	u32 fogColorReg  = 0;
	u32 fogParamReg0 = 0;
	u32 fogParamReg1 = 0;
	u32 fogParamReg2 = 0;
	u32 fogParamReg3 = 0;

	u32 fsel   = type & 7;
	BOOL ortho = (type >> 3) & 1;

	if (ortho) {
		if (farz == nearz || endz == startz) {
			a = 0.0f;
			c = 0.0f;
		} else {
			a = (1.0f / (endz - startz)) * (farz - nearz);
			c = (1.0f / (endz - startz)) * (startz - nearz);
		}
	} else {
		f32 f28, f25, f24;
		u32 expB, magB, shiftB;

		if (farz == nearz || endz == startz) {
			f28 = 0.0f;
			f25 = 0.5f;
			f24 = 0.0f;
		} else {
			f28 = (farz * nearz) / ((farz - nearz) * (endz - startz));
			f25 = farz / (farz - nearz);
			f24 = startz / (endz - startz);
		}

		expB = 0;
		while (f25 > 1.0l) {
			f25 /= 2.0f;
			expB++;
		}
		while (f25 > 0.0f && f25 < 0.5l) {
			f25 *= 2.0f;
			expB--;
		}

		a      = f28 / (1 << expB + 1);
		magB   = 8388638.0f * f25;
		shiftB = expB + 1;
		c      = f24;

		GX_SET_REG(fogParamReg1, magB, GX_BP_FOGPARAM1_B_MAG_ST, GX_BP_FOGPARAM1_B_MAG_END);
		GX_SET_REG(fogParamReg2, shiftB, GX_BP_FOGPARAM2_B_SHIFT_ST, GX_BP_FOGPARAM2_B_SHIFT_END);

		GX_SET_REG(fogParamReg1, GX_BP_REG_FOGPARAM1, 0, 7);
		GX_SET_REG(fogParamReg2, GX_BP_REG_FOGPARAM2, 0, 7);
	}

	a_bits = *(u32*)&a;
	c_bits = *(u32*)&c;

	GX_SET_REG(fogParamReg0, a_bits >> 12 & 0x7FF, GX_BP_FOGPARAM0_A_MANT_ST, GX_BP_FOGPARAM0_A_MANT_END);
	GX_SET_REG(fogParamReg0, a_bits >> 23 & 0xFF, GX_BP_FOGPARAM0_A_EXP_ST, GX_BP_FOGPARAM0_A_EXP_END);
	GX_SET_REG(fogParamReg0, a_bits >> 31, GX_BP_FOGPARAM0_A_SIGN_ST, GX_BP_FOGPARAM0_A_SIGN_END);

	GX_SET_REG(fogParamReg0, GX_BP_REG_FOGPARAM0, 0, 7);

	GX_SET_REG(fogParamReg3, c_bits >> 12 & 0x7FF, GX_BP_FOGPARAM3_C_MANT_ST, GX_BP_FOGPARAM3_C_MANT_END);
	GX_SET_REG(fogParamReg3, c_bits >> 23 & 0xFF, GX_BP_FOGPARAM3_C_EXP_ST, GX_BP_FOGPARAM3_C_EXP_END);
	GX_SET_REG(fogParamReg3, c_bits >> 31, GX_BP_FOGPARAM3_C_SIGN_ST, GX_BP_FOGPARAM3_C_SIGN_END);

	GX_SET_REG(fogParamReg3, ortho, GX_BP_FOGPARAM3_PROJ_ST, GX_BP_FOGPARAM3_PROJ_END);
	GX_SET_REG(fogParamReg3, fsel, GX_BP_FOGPARAM3_FSEL_ST, GX_BP_FOGPARAM3_FSEL_END);

	GX_SET_REG(fogParamReg3, GX_BP_REG_FOGPARAM3, 0, 7);

	GX_SET_REG(fogColorReg, *(u32*)&color >> 8, GX_BP_FOGCOLOR_RGB_ST, GX_BP_FOGCOLOR_RGB_END);
	GX_SET_REG(fogColorReg, GX_BP_REG_FOGCOLOR, 0, 7);

	GX_BP_LOAD_REG(fogParamReg0);
	GX_BP_LOAD_REG(fogParamReg1);
	GX_BP_LOAD_REG(fogParamReg2);
	GX_BP_LOAD_REG(fogParamReg3);
	GX_BP_LOAD_REG(fogColorReg);

	gx->bpSentNot = GX_FALSE;
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x60(r1)
	  stfd      f31, 0x58(r1)
	  stmw      r23, 0x34(r1)
	  li        r30, 0
	  rlwinm.   r31,r3,29,31,31
	  addi      r24, r4, 0
	  addi      r29, r30, 0
	  rlwinm    r25,r3,0,29,31
	  li        r28, 0
	  li        r27, 0
	  li        r26, 0
	  beq-      .loc_0x80
	  fcmpu     cr0, f4, f3
	  beq-      .loc_0x48
	  fcmpu     cr0, f2, f1
	  bne-      .loc_0x58

	.loc_0x48:
	  lfs       f0, -0x6CC0(r2)
	  stfs      f0, 0x24(r1)
	  stfs      f0, 0x20(r1)
	  b         .loc_0x16C

	.loc_0x58:
	  fsubs     f5, f2, f1
	  lfs       f6, -0x6CBC(r2)
	  fsubs     f2, f4, f3
	  fsubs     f0, f1, f3
	  fdivs     f3, f6, f5
	  fmuls     f1, f3, f2
	  fmuls     f0, f3, f0
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x20(r1)
	  b         .loc_0x16C

	.loc_0x80:
	  fcmpu     cr0, f4, f3
	  beq-      .loc_0x90
	  fcmpu     cr0, f2, f1
	  bne-      .loc_0xA0

	.loc_0x90:
	  lfs       f3, -0x6CC0(r2)
	  lfs       f4, -0x6CB8(r2)
	  fmr       f31, f3
	  b         .loc_0xBC

	.loc_0xA0:
	  fsubs     f0, f4, f3
	  fsubs     f5, f2, f1
	  fmuls     f2, f4, f3
	  fdivs     f4, f4, f0
	  fmuls     f0, f0, f5
	  fdivs     f31, f1, f5
	  fdivs     f3, f2, f0

	.loc_0xBC:
	  lfs       f1, -0x6CB8(r2)
	  li        r3, 0
	  lfd       f0, -0x6CB0(r2)
	  b         .loc_0xD4

	.loc_0xCC:
	  fmuls     f4, f4, f1
	  addi      r3, r3, 0x1

	.loc_0xD4:
	  fcmpo     cr0, f4, f0
	  bgt+      .loc_0xCC
	  lfd       f0, -0x6CA0(r2)
	  lfs       f2, -0x6CA8(r2)
	  lfs       f1, -0x6CC0(r2)
	  b         .loc_0xF4

	.loc_0xEC:
	  fmuls     f4, f4, f2
	  subi      r3, r3, 0x1

	.loc_0xF4:
	  fcmpo     cr0, f4, f1
	  ble-      .loc_0x104
	  fcmpo     cr0, f4, f0
	  blt+      .loc_0xEC

	.loc_0x104:
	  addi      r23, r3, 0x1
	  lfs       f0, -0x6C98(r2)
	  li        r0, 0x1
	  lfd       f2, -0x6C90(r2)
	  slw       r0, r0, r23
	  fmuls     f1, f0, f4
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x2C(r1)
	  lis       r0, 0x4330
	  stw       r0, 0x28(r1)
	  lfd       f0, 0x28(r1)
	  fsubs     f0, f0, f2
	  fdivs     f0, f3, f0
	  stfs      f0, 0x24(r1)
	  bl        -0x271D0
	  rlwimi    r30,r3,0,8,31
	  stfs      f31, 0x20(r1)
	  rlwimi    r29,r23,0,27,31
	  li        r0, 0xEF
	  addi      r3, r30, 0
	  rlwimi    r3,r0,24,0,7
	  li        r0, 0xF0
	  addi      r4, r29, 0
	  rlwimi    r4,r0,24,0,7
	  addi      r30, r3, 0
	  addi      r29, r4, 0

	.loc_0x16C:
	  lwz       r8, 0x24(r1)
	  li        r0, 0x61
	  lbz       r7, 0x2(r24)
	  lis       r4, 0xCC01
	  rlwimi    r27,r8,20,21,31
	  addi      r9, r27, 0
	  lbz       r6, 0x1(r24)
	  lbz       r5, 0x0(r24)
	  rlwimi    r9,r8,20,13,20
	  rlwimi    r9,r8,20,12,12
	  lwz       r10, 0x20(r1)
	  li        r8, 0xEE
	  stb       r0, -0x8000(r4)
	  rlwimi    r9,r8,24,0,7
	  rlwimi    r28,r7,0,24,31
	  lwz       r3, -0x6D70(r2)
	  stw       r9, -0x8000(r4)
	  rlwimi    r26,r10,20,21,31
	  stb       r0, -0x8000(r4)
	  addi      r7, r28, 0
	  rlwimi    r7,r6,8,16,23
	  stw       r30, -0x8000(r4)
	  rlwimi    r7,r5,16,8,15
	  mr        r9, r26
	  stb       r0, -0x8000(r4)
	  li        r5, 0xF1
	  rlwimi    r9,r10,20,13,20
	  stw       r29, -0x8000(r4)
	  rlwimi    r9,r10,20,12,12
	  rlwimi    r9,r31,20,11,11
	  rlwimi    r9,r25,21,8,10
	  stb       r0, -0x8000(r4)
	  rlwimi    r9,r5,24,0,7
	  stw       r9, -0x8000(r4)
	  li        r5, 0xF2
	  rlwimi    r7,r5,24,0,7
	  stb       r0, -0x8000(r4)
	  li        r0, 0
	  stw       r7, -0x8000(r4)
	  sth       r0, 0x2(r3)
	  lmw       r23, 0x34(r1)
	  lwz       r0, 0x64(r1)
	  lfd       f31, 0x58(r1)
	  addi      r1, r1, 0x60
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E8E04
 * Size:	0001B0
 */
void GXInitFogAdjTable(GXFogAdjTable* table, u16 width, const Mtx44 proj)
{
	f32 f31, f30, f29, f28, f27;
	u32 i;

	if (proj[3][3] == 0.0l) {
		f30 = proj[2][3] / (proj[2][2] - 1.0f);
		f28 = f30 / proj[0][0];
	} else {
		f28 = 1.0f / proj[0][0];
		f30 = M_SQRT3 * f28;
	}

	f29 = 2.0f / width;

	for (i = 0; i < ARRAY_SIZE(table->fogVals); i++) {
		f31 = (i + 1) * 32;
		f31 *= f29;
		f31 *= f28;
		f27               = dolsqrtf(1.0f + (f31 * f31) / (f30 * f30));
		table->fogVals[i] = (u32)(f27 * 256) & 0xFFF;
	}
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x80(r1)
	  stfd      f31, 0x78(r1)
	  stfd      f30, 0x70(r1)
	  stfd      f29, 0x68(r1)
	  stfd      f28, 0x60(r1)
	  stfd      f27, 0x58(r1)
	  stfd      f26, 0x50(r1)
	  stfd      f25, 0x48(r1)
	  stfd      f24, 0x40(r1)
	  stfd      f23, 0x38(r1)
	  stw       r31, 0x34(r1)
	  stw       r30, 0x30(r1)
	  stw       r29, 0x2C(r1)
	  lfd       f1, -0x6C88(r2)
	  lfs       f0, 0x3C(r5)
	  fcmpu     cr0, f1, f0
	  bne-      .loc_0x70
	  lfs       f1, 0x28(r5)
	  lfs       f0, -0x6CBC(r2)
	  lfs       f2, 0x2C(r5)
	  fsubs     f1, f1, f0
	  lfs       f0, 0x0(r5)
	  fdivs     f1, f2, f1
	  fdivs     f24, f1, f0
	  fmr       f0, f1
	  b         .loc_0x88

	.loc_0x70:
	  lfs       f2, -0x6CBC(r2)
	  lfs       f1, 0x0(r5)
	  lfs       f0, -0x6C80(r2)
	  fdivs     f1, f2, f1
	  fmr       f24, f1
	  fmuls     f0, f0, f1

	.loc_0x88:
	  rlwinm    r0,r4,0,16,31
	  lfd       f27, -0x6C68(r2)
	  stw       r0, 0x24(r1)
	  lis       r31, 0x4330
	  lfs       f1, -0x6CA8(r2)
	  fmuls     f26, f0, f0
	  stw       r31, 0x20(r1)
	  lfs       f28, -0x6CBC(r2)
	  mr        r30, r3
	  lfd       f0, 0x20(r1)
	  lfs       f29, -0x6CC0(r2)
	  li        r29, 0
	  fsubs     f0, f0, f27
	  lfd       f30, -0x6CA0(r2)
	  lfd       f31, -0x6C78(r2)
	  lfs       f23, -0x6C70(r2)
	  fdivs     f25, f1, f0

	.loc_0xCC:
	  addi      r0, r29, 0x1
	  rlwinm    r0,r0,5,0,26
	  stw       r0, 0x24(r1)
	  stw       r31, 0x20(r1)
	  lfd       f0, 0x20(r1)
	  fsubs     f0, f0, f27
	  fmuls     f0, f0, f25
	  fmuls     f0, f0, f24
	  fmuls     f0, f0, f0
	  fdivs     f0, f0, f26
	  fadds     f2, f28, f0
	  fcmpo     cr0, f2, f29
	  ble-      .loc_0x150
	  fsqrte    f1, f2
	  fmul      f0, f1, f1
	  fmul      f1, f30, f1
	  fmul      f0, f2, f0
	  fsub      f0, f31, f0
	  fmul      f1, f1, f0
	  fmul      f0, f1, f1
	  fmul      f1, f30, f1
	  fmul      f0, f2, f0
	  fsub      f0, f31, f0
	  fmul      f1, f1, f0
	  fmul      f0, f1, f1
	  fmul      f1, f30, f1
	  fmul      f0, f2, f0
	  fsub      f0, f31, f0
	  fmul      f0, f1, f0
	  fmul      f0, f2, f0
	  frsp      f0, f0
	  stfs      f0, 0x14(r1)
	  lfs       f2, 0x14(r1)

	.loc_0x150:
	  fmuls     f1, f23, f2
	  bl        -0x2740C
	  addi      r29, r29, 0x1
	  rlwinm    r0,r3,0,20,31
	  sth       r0, 0x0(r30)
	  cmplwi    r29, 0xA
	  addi      r30, r30, 0x2
	  blt+      .loc_0xCC
	  lwz       r0, 0x84(r1)
	  lfd       f31, 0x78(r1)
	  lfd       f30, 0x70(r1)
	  lfd       f29, 0x68(r1)
	  lfd       f28, 0x60(r1)
	  lfd       f27, 0x58(r1)
	  lfd       f26, 0x50(r1)
	  lfd       f25, 0x48(r1)
	  lfd       f24, 0x40(r1)
	  lfd       f23, 0x38(r1)
	  lwz       r31, 0x34(r1)
	  lwz       r30, 0x30(r1)
	  lwz       r29, 0x2C(r1)
	  addi      r1, r1, 0x80
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E8FB4
 * Size:	000124
 */
void GXSetFogRangeAdj(GXBool enable, u16 center, GXFogAdjTable* table)
{
	u32 fogRangeReg;
	u32 fogRangeRegK;
	u32 i;

	if (enable) {
		for (i = 0; i < ARRAY_SIZE(table->fogVals); i += 2) {
			fogRangeRegK = 0;
			GX_SET_REG(fogRangeRegK, table->fogVals[i], GX_BP_FOGRANGEK_HI_ST, GX_BP_FOGRANGEK_HI_END);
			GX_SET_REG(fogRangeRegK, table->fogVals[i + 1], GX_BP_FOGRANGEK_LO_ST, GX_BP_FOGRANGEK_LO_END);
			GX_SET_REG(fogRangeRegK, GX_BP_REG_FOGRANGEK0 + (i / 2), 0, 7);
			GX_BP_LOAD_REG(fogRangeRegK);
		}
	}

	fogRangeReg = 0;
	GX_SET_REG(fogRangeReg, center + 342, GX_BP_FOGRANGE_CENTER_ST, GX_BP_FOGRANGE_CENTER_END);
	GX_SET_REG(fogRangeReg, enable, GX_BP_FOGRANGE_ENABLED_ST, GX_BP_FOGRANGE_ENABLED_END);
	GX_SET_REG(fogRangeReg, GX_BP_REG_FOGRANGE, 0, 7);
	GX_BP_LOAD_REG(fogRangeReg);

	gx->bpSentNot = GX_FALSE;
}

/*
 * --INFO--
 * Address:	800E90D8
 * Size:	000054
 */
void GXSetBlendMode(GXBlendMode type, GXBlendFactor src_factor, GXBlendFactor dst_factor, GXLogicOp op)
{
	u32 blendModeReg = gx->cmode0;
	GX_SET_REG(blendModeReg, type == GX_BM_SUBTRACT, GX_BP_BLENDMODE_SUBTRACT_ST, GX_BP_BLENDMODE_SUBTRACT_END);
	GX_SET_REG(blendModeReg, type, GX_BP_BLENDMODE_ENABLE_ST, GX_BP_BLENDMODE_ENABLE_END);
	GX_SET_REG(blendModeReg, type == GX_BM_LOGIC, GX_BP_BLENDMODE_LOGIC_OP_ST, GX_BP_BLENDMODE_LOGIC_OP_END);
	GX_SET_REG(blendModeReg, op, GX_BP_BLENDMODE_LOGICMODE_ST, GX_BP_BLENDMODE_LOGICMODE_END);
	GX_SET_REG(blendModeReg, src_factor, GX_BP_BLENDMODE_SRCFACTOR_ST, GX_BP_BLENDMODE_SRCFACTOR_END);
	GX_SET_REG(blendModeReg, dst_factor, GX_BP_BLENDMODE_DSTFACTOR_ST, GX_BP_BLENDMODE_DSTFACTOR_END);

	GX_BP_LOAD_REG(blendModeReg);
	gx->cmode0 = blendModeReg;

	gx->bpSentNot = FALSE;
}

/*
 * --INFO--
 * Address:	800E912C
 * Size:	00002C
 */
void GXSetColorUpdate(GXBool updateEnable)
{
	u32 blendModeReg = gx->cmode0;
	GX_SET_REG(blendModeReg, updateEnable, GX_BP_BLENDMODE_COLOR_UPDATE_ST, GX_BP_BLENDMODE_COLOR_UPDATE_END);
	GX_BP_LOAD_REG(blendModeReg);
	gx->cmode0    = blendModeReg;
	gx->bpSentNot = GX_FALSE;
}

/*
 * --INFO--
 * Address:	800E9158
 * Size:	00002C
 */
void GXSetAlphaUpdate(GXBool updateEnable)
{
	u32 blendModeReg = gx->cmode0;
	GX_SET_REG(blendModeReg, updateEnable, GX_BP_BLENDMODE_ALPHA_UPDATE_ST, GX_BP_BLENDMODE_ALPHA_UPDATE_END);
	GX_BP_LOAD_REG(blendModeReg);
	gx->cmode0    = blendModeReg;
	gx->bpSentNot = GX_FALSE;
}

/*
 * --INFO--
 * Address:	800E9184
 * Size:	000034
 */
void GXSetZMode(GXBool compareEnable, GXCompare func, GXBool updateEnable)
{
	u32 zModeReg = gx->zmode;
	GX_SET_REG(zModeReg, compareEnable, GX_BP_ZMODE_TEST_ENABLE_ST, GX_BP_ZMODE_TEST_ENABLE_END);
	GX_SET_REG(zModeReg, func, GX_BP_ZMODE_COMPARE_ST, GX_BP_ZMODE_COMPARE_END);
	GX_SET_REG(zModeReg, updateEnable, GX_BP_ZMODE_UPDATE_ENABLE_ST, GX_BP_ZMODE_UPDATE_ENABLE_END);
	GX_BP_LOAD_REG(zModeReg);
	gx->zmode     = zModeReg;
	gx->bpSentNot = GX_FALSE;
}

/*
 * --INFO--
 * Address:	800E91B8
 * Size:	000034
 */
void GXSetZCompLoc(GXBool beforeTex)
{
	GX_SET_REG(gx->peCtrl, beforeTex, GX_BP_ZCONTROL_BEFORE_TEX_ST, GX_BP_ZCONTROL_BEFORE_TEX_END);
	GX_BP_LOAD_REG(gx->peCtrl);
	gx->bpSentNot = GX_FALSE;
}

/*
 * --INFO--
 * Address:	800E91EC
 * Size:	0000D4
 */
void GXSetPixelFmt(GXPixelFmt pixelFmt, GXZFmt16 zFmt)
{
	static u32 p2f[GX_MAX_PIXELFMT]
	    = { GX_PF_RGB8_Z24, GX_PF_RGBA6_Z24, GX_PF_RGB565_Z16, GX_PF_Z24, GX_PF_Y8, GX_PF_Y8, GX_PF_Y8, GX_PF_U8 };

	const u32 zControlRegOld = gx->peCtrl;

	GX_SET_REG(gx->peCtrl, p2f[pixelFmt], GX_BP_ZCONTROL_PIXEL_FMT_ST, GX_BP_ZCONTROL_PIXEL_FMT_END);
	GX_SET_REG(gx->peCtrl, zFmt, GX_BP_ZCONTROL_Z_FMT_ST, GX_BP_ZCONTROL_Z_FMT_END);

	if (zControlRegOld != gx->peCtrl) {
		GX_BP_LOAD_REG(gx->peCtrl);
		GX_SET_REG(gx->genMode, (pixelFmt == GX_PF_RGB565_Z16) ? 1 : 0, GX_BP_GENMODE_MULTISAMPLE_ST, GX_BP_GENMODE_MULTISAMPLE_END);
		gx->dirtyState |= GX_DIRTY_GEN_MODE;
	}

	if (p2f[pixelFmt] == GX_PF_Y8) {
		GX_SET_REG(gx->cmode1, pixelFmt - GX_PF_Y8, GX_BP_DSTALPHA_YUV_FMT_ST, GX_BP_DSTALPHA_YUV_FMT_END);
		GX_SET_REG(gx->cmode1, GX_BP_REG_DSTALPHA, 0, 7);
		GX_BP_LOAD_REG(gx->cmode1);
	}

	gx->bpSentNot = FALSE;
	/*
	.loc_0x0:
	  lis       r5, 0x804B
	  lwz       r7, -0x6D70(r2)
	  rlwinm    r6,r3,2,0,29
	  subi      r0, r5, 0x7810
	  lwz       r5, 0x1DC(r7)
	  add       r6, r0, r6
	  lwz       r0, 0x0(r6)
	  addi      r8, r5, 0
	  rlwimi    r5,r0,0,29,31
	  stw       r5, 0x1DC(r7)
	  lwz       r0, 0x1DC(r7)
	  rlwimi    r0,r4,3,26,28
	  stw       r0, 0x1DC(r7)
	  lwz       r5, 0x1DC(r7)
	  cmplw     r8, r5
	  beq-      .loc_0x80
	  li        r0, 0x61
	  lis       r4, 0xCC01
	  stb       r0, -0x8000(r4)
	  cmpwi     r3, 0x2
	  stw       r5, -0x8000(r4)
	  bne-      .loc_0x60
	  li        r0, 0x1
	  b         .loc_0x64

	.loc_0x60:
	  li        r0, 0

	.loc_0x64:
	  lwz       r5, -0x6D70(r2)
	  lwz       r4, 0x204(r5)
	  rlwimi    r4,r0,9,22,22
	  stw       r4, 0x204(r5)
	  lwz       r0, 0x5AC(r5)
	  ori       r0, r0, 0x4
	  stw       r0, 0x5AC(r5)

	.loc_0x80:
	  lwz       r0, 0x0(r6)
	  cmplwi    r0, 0x4
	  bne-      .loc_0xC4
	  lwz       r6, -0x6D70(r2)
	  subi      r0, r3, 0x4
	  li        r4, 0x42
	  lwz       r3, 0x1D4(r6)
	  rlwimi    r3,r0,9,21,22
	  li        r0, 0x61
	  stw       r3, 0x1D4(r6)
	  lis       r3, 0xCC01
	  lwz       r5, 0x1D4(r6)
	  rlwimi    r5,r4,24,0,7
	  stw       r5, 0x1D4(r6)
	  stb       r0, -0x8000(r3)
	  lwz       r0, 0x1D4(r6)
	  stw       r0, -0x8000(r3)

	.loc_0xC4:
	  lwz       r3, -0x6D70(r2)
	  li        r0, 0
	  sth       r0, 0x2(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E92C0
 * Size:	00002C
 */
void GXSetDither(GXBool dither)
{
	u32 blendModeReg = gx->cmode0;
	GX_SET_REG(blendModeReg, dither, GX_BP_BLENDMODE_DITHER_ST, GX_BP_BLENDMODE_DITHER_END);
	GX_BP_LOAD_REG(blendModeReg);
	gx->cmode0    = blendModeReg;
	gx->bpSentNot = GX_FALSE;
}

/*
 * --INFO--
 * Address:	800E92EC
 * Size:	00003C
 */
void GXSetDstAlpha(GXBool enable, u8 alpha)
{
	u32 dstAlpha = gx->cmode1;
	GX_SET_REG(dstAlpha, alpha, GX_BP_DSTALPHA_ALPHA_ST, GX_BP_DSTALPHA_ALPHA_END);
	GX_SET_REG(dstAlpha, enable, GX_BP_DSTALPHA_ENABLE_ST, GX_BP_DSTALPHA_ENABLE_END);
	GX_BP_LOAD_REG(dstAlpha);
	gx->cmode1    = dstAlpha;
	gx->bpSentNot = GX_FALSE;
}

/*
 * --INFO--
 * Address:	800E9328
 * Size:	000038
 */
void GXSetFieldMask(GXBool enableEven, GXBool enableOdd)
{
	u32 fieldMaskReg = 0;
	GX_SET_REG(fieldMaskReg, enableOdd, GX_BP_FIELDMASK_ODD_ST, GX_BP_FIELDMASK_ODD_END);
	GX_SET_REG(fieldMaskReg, enableEven, GX_BP_FIELDMASK_EVEN_ST, GX_BP_FIELDMASK_EVEN_END);
	GX_SET_REG(fieldMaskReg, GX_BP_REG_FIELDMASK, 0, 7);

	GX_BP_LOAD_REG(fieldMaskReg);
	gx->bpSentNot = GX_FALSE;
}

/*
 * --INFO--
 * Address:	800E9360
 * Size:	000078
 */
void GXSetFieldMode(GXBool texLOD, GXBool adjustAR)
{
	GX_SET_REG(gx->lpSize, adjustAR, GX_BP_LINEPTWIDTH_ADJUST_ST, GX_BP_LINEPTWIDTH_ADJUST_END);
	GX_BP_LOAD_REG(gx->lpSize);

	__GXFlushTextureState();
	GX_BP_LOAD_REG(GX_BP_REG_FIELDMODE << 24 | texLOD);
	__GXFlushTextureState();
}

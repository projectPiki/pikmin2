#include "THP/THPDraw.h"
#include "Dolphin/gx.h"
#include "Dolphin/Mtx.h"
#include "Dolphin/os.h"
/*
 * --INFO--
 * Address:	8044D684
 * Size:	000118
 */
void THPGXRestore(void)
{
	GXSetZMode(GX_ENABLE, GX_ALWAYS, GX_DISABLE);
	GXSetBlendMode(GX_BM_NONE, GX_BL_ONE, GX_BL_ZERO, GX_LO_SET);
	GXSetNumTexGens(1);
	GXSetNumChans(0);
	GXSetNumTevStages(1);
	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR_NULL);
	GXSetTevOp(GX_TEVSTAGE0, GX_REPLACE);
	GXSetTevSwapMode(GX_TEVSTAGE0, 0, 0);
	GXSetTevSwapMode(GX_TEVSTAGE1, 0, 0);
	GXSetTevSwapMode(GX_TEVSTAGE2, 0, 0);
	GXSetTevSwapMode(GX_TEVSTAGE3, 0, 0);
	GXSetTevSwapModeTable(GX_TEV_SWAP0, 0, 1, 2, 3);
	GXSetTevSwapModeTable(GX_TEV_SWAP1, 0, 0, 0, 3);
	GXSetTevSwapModeTable(GX_TEV_SWAP2, 1, 1, 1, 3);
	GXSetTevSwapModeTable(GX_TEV_SWAP3, 2, 2, 2, 3);
}
/*
 * --INFO--
 * Address:	8044D79C
 * Size:	0004C0
 * TODO: Implement and correct enums, especially GXCompCnt and GXCompType
 */
void THPGXYuv2RgbSetup(u16* param_1)
{
	int r31;
	int r30;
	Mtx44 MStack116;
	Mtx MStack164;

	r31 = param_1[2];
	r30 = param_1[3];

	GXSetPixelFmt(GX_PF_RGB8_Z24, GX_ZC_LINEAR);
	C_MTXOrtho(MStack116, 0, r30, 0, r31, 0, -1);
	GXSetProjection(MStack116, GX_ORTHOGRAPHIC);
	GXSetViewport(0, 0, r31, r30, 0.0, 1.0);
	GXSetScissor(0, 0, r31, r30);
	PSMTXIdentity(MStack164);
	GXLoadPosMtxImm(MStack164, 0);
	GXSetCurrentMtx(0);
	GXSetZMode(GX_TRUE, GX_ALWAYS, GX_FALSE);
	GXSetBlendMode(GX_BM_NONE, GX_BL_ONE, GX_BL_ZERO, GX_LO_CLEAR);
	GXSetColorUpdate(GX_TRUE);
	GXSetAlphaUpdate(GX_FALSE);
	GXSetDispCopyGamma(0);
	GXSetNumChans(0);
	GXSetNumTexGens(2);
	GXSetTexCoordGen2(GX_TEXCOORD0, GX_TG_MTX3X4, GX_TG_TEX0, 0x3c, GX_FALSE, 0x7d);
	GXSetTexCoordGen2(GX_TEXCOORD1, GX_TG_MTX3X4, GX_TG_TEX0, 0x3c, GX_FALSE, 0x7d);
	GXInvalidateTexAll();
	GXClearVtxDesc();
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
	GXSetVtxAttrFmt(GX_VTXFMT7, GX_VA_POS, GX_POS_XYZ, GX_S16, 0);
	GXSetVtxAttrFmt(GX_VTXFMT7, GX_VA_TEX0, GX_POS_XYZ, GX_U16, 0);
	GXSetNumTevStages(4);
	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD1, GX_TEXMAP1, GX_COLOR_NULL);
	GXSetTevColorIn(GX_TEVSTAGE0, GX_CC_ZERO, GX_CC_TEXC, GX_CC_KONST, GX_CC_C0);
	GXSetTevColorOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_FALSE, GX_TEVPREV);
	GXSetTevAlphaIn(GX_TEVSTAGE0, GX_ZERO, GX_CA_TEXA, GX_KONST, GX_CA_A0);
	GXSetTevAlphaOp(GX_TEVSTAGE0, GX_TEV_SUB, GX_TB_ZERO, GX_CS_SCALE_1, GX_FALSE, GX_TEVPREV);
	GXSetTevKColorSel(GX_TEVSTAGE0, GX_TEV_KCSEL_K0_B);
	GXSetTevKAlphaSel(GX_TEVSTAGE0, 0x1c);
	GXSetTevSwapMode(GX_TEVSTAGE0, GX_TEV_SWAP0, GX_TEV_SWAP0);
	GXSetTevOrder(GX_TEVSTAGE1, GX_TEXCOORD1, GX_TEXMAP2, GX_COLOR_NULL); // Unsure as to what the proper form of the GXTexMapID should be
	GXSetTevColorIn(GX_TEVSTAGE1, GX_CC_ZERO, GX_CC_TEXC, GX_CC_KONST, GX_CC_CPREV);
	GXSetTevColorOp(GX_TEVSTAGE1, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_2, GX_FALSE, GX_TEVPREV);
	GXSetTevAlphaIn(GX_TEVSTAGE1, GX_ZERO, GX_CA_TEXA, GX_KONST, GX_CA_APREV);
	GXSetTevAlphaOp(GX_TEVSTAGE1, GX_TEV_SUB, GX_TB_ZERO, GX_CS_SCALE_1, GX_FALSE, GX_TEVPREV);
	GXSetTevKColorSel(GX_TEVSTAGE1, GX_TEV_KCSEL_K1_B);
	GXSetTevKAlphaSel(GX_TEVSTAGE1, 0x1d);
	GXSetTevSwapMode(GX_TEVSTAGE1, GX_TEV_SWAP0, GX_TEV_SWAP0);
	GXSetTevOrder(GX_TEVSTAGE2, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR_NULL);
	GXSetTevColorIn(GX_TEVSTAGE2, GX_CC_ZERO, GX_CC_TEXC, GX_CC_ONE, GX_CC_CPREV);
	GXSetTevColorOp(GX_TEVSTAGE2, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
	GXSetTevAlphaIn(GX_TEVSTAGE2, GX_CA_TEXA, GX_ZERO, GX_ZERO, GX_CA_APREV);
	GXSetTevAlphaOp(GX_TEVSTAGE2, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
	GXSetTevSwapMode(GX_TEVSTAGE2, GX_TEV_SWAP0, GX_TEV_SWAP0);
	GXSetTevOrder(GX_TEVSTAGE3, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevColorIn(GX_TEVSTAGE3, GX_CC_APREV, GX_CC_CPREV, GX_CC_KONST, GX_CC_ZERO);
	GXSetTevColorOp(GX_TEVSTAGE3, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
	GXSetTevAlphaIn(GX_TEVSTAGE3, GX_ZERO, GX_ZERO, GX_ZERO, GX_KONST);
	GXSetTevAlphaOp(GX_TEVSTAGE3, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
	GXSetTevSwapMode(GX_TEVSTAGE3, GX_TEV_SWAP0, GX_TEV_SWAP0);
	GXSetTevKColorSel(GX_TEVSTAGE3, GX_TEV_KCSEL_K2_B);
	GXSetTevColorS10(1, (GXColorS10) { 0xFFA6, 0x0000, 0xFF8E, 0x0087 });
	GXSetTevKColor(GX_KCOLOR0, (GXColor) { 0x00, 0x00, 0xE2, 0x58 });
	GXSetTevKColor(GX_KCOLOR1, (GXColor) { 0xB3, 0x00, 0x00, 0xB6 });
	GXSetTevKColor(GX_KCOLOR2, (GXColor) { 0xFF, 0x00, 0xFF, 0xFF });
	GXSetTevSwapModeTable(GX_TEV_SWAP0, 0, 1, 2, 3);
}
/*
 * --INFO--
 * Address:	8044DC5C
 * Size:	0001DC
 */
void THPGXYuv2RgbDraw(u32* param_1, u32* param_2, u32* param_3, s16 param_4, s16 param_5, s16 param_6, s16 param_7, s16 param_8,
                      s16 param_9)
{
	GXTexObj gxtex1;
	GXTexObj gxtex2;
	GXTexObj gxtex3;

	GXInitTexObj(&gxtex1, param_1, param_6, param_7, GX_TF_I8, GX_CLAMP, GX_CLAMP, GX_FALSE);
	GXInitTexObjLOD(&gxtex1, GX_NEAR, GX_NEAR, 0.0f, 0.0f, 0.0f, GX_FALSE, GX_FALSE, GX_ANISO_1);
	GXLoadTexObj(&gxtex1, GX_TEXMAP0);
	GXInitTexObj(&gxtex2, param_2, param_6 >> 1, param_7 >> 1, GX_TF_I8, GX_CLAMP, GX_CLAMP, GX_FALSE);
	GXInitTexObjLOD(&gxtex2, GX_NEAR, GX_NEAR, 0.0f, 0.0f, 0.0f, GX_FALSE, GX_FALSE, GX_ANISO_1);
	GXLoadTexObj(&gxtex2, GX_TEXMAP1);
	GXInitTexObj(&gxtex3, param_3, param_6 >> 1, param_7 >> 1, GX_TF_I8, GX_CLAMP, GX_CLAMP, GX_FALSE);
	GXInitTexObjLOD(&gxtex3, GX_NEAR, GX_NEAR, 0.0f, 0.0f, 0.0f, GX_FALSE, GX_FALSE, GX_ANISO_1);
	GXLoadTexObj(&gxtex3, GX_TEXMAP2);
	GXBegin(GX_QUADS, GX_VTXFMT7, 4);

	// Fifo Writes
	HW_REG(0xCC008000, s16) = param_4;
	HW_REG(0xCC008000, u16) = param_5;
	HW_REG(0xCC008000, u16) = 0;
	HW_REG(0xCC008000, u16) = 0;
	HW_REG(0xCC008000, u16) = 0;
	HW_REG(0xCC008000, u16) = param_4 + param_8;
	HW_REG(0xCC008000, u16) = param_5;
	HW_REG(0xCC008000, u16) = 0;
	HW_REG(0xCC008000, u16) = 1;
	HW_REG(0xCC008000, u16) = 0;
	HW_REG(0xCC008000, u16) = param_4 + param_8;
	HW_REG(0xCC008000, u16) = param_5 + param_9;
	HW_REG(0xCC008000, u16) = 0;
	HW_REG(0xCC008000, u16) = 1;
	HW_REG(0xCC008000, u16) = 1;
	HW_REG(0xCC008000, s16) = param_4;
	HW_REG(0xCC008000, u16) = param_5 + param_9;
	HW_REG(0xCC008000, u16) = 0;
	HW_REG(0xCC008000, u16) = 0;
	HW_REG(0xCC008000, u16) = 1;
}

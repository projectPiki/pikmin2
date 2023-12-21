#include "THP/THPDraw.h"
#include "Dolphin/gx.h"
#include "Dolphin/Mtx.h"
#include "Dolphin/os.h"
/**
 * @note Address: 0x8044D684
 * @note Size: 0x118
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
	GXSetTevSwapMode(GX_TEVSTAGE0, GX_TEV_SWAP0, GX_TEV_SWAP0);
	GXSetTevSwapMode(GX_TEVSTAGE1, GX_TEV_SWAP0, GX_TEV_SWAP0);
	GXSetTevSwapMode(GX_TEVSTAGE2, GX_TEV_SWAP0, GX_TEV_SWAP0);
	GXSetTevSwapMode(GX_TEVSTAGE3, GX_TEV_SWAP0, GX_TEV_SWAP0);
	GXSetTevSwapModeTable(GX_TEV_SWAP0, GX_CH_RED, GX_CH_GREEN, GX_CH_BLUE, GX_CH_ALPHA);
	GXSetTevSwapModeTable(GX_TEV_SWAP1, GX_CH_RED, GX_CH_RED, GX_CH_RED, GX_CH_ALPHA);
	GXSetTevSwapModeTable(GX_TEV_SWAP2, GX_CH_GREEN, GX_CH_GREEN, GX_CH_GREEN, GX_CH_ALPHA);
	GXSetTevSwapModeTable(GX_TEV_SWAP3, GX_CH_BLUE, GX_CH_BLUE, GX_CH_BLUE, GX_CH_ALPHA);
}

/**
 * @note Address: 0x8044D79C
 * @note Size: 0x4C0
 */
void THPGXYuv2RgbSetup(GXRenderModeObj* obj)
{
	int width;
	int height;
	Mtx44 projMtx;
	Mtx posMtx;

	width  = obj->fbWidth;
	height = obj->efbHeight;

	GXSetPixelFmt(GX_PF_RGB8_Z24, GX_ZC_LINEAR);
	C_MTXOrtho(projMtx, 0, height, 0, width, 0, -1);
	GXSetProjection(projMtx, GX_ORTHOGRAPHIC);
	GXSetViewport(0, 0, width, height, 0.0, 1.0);
	GXSetScissor(0, 0, width, height);
	PSMTXIdentity(posMtx);
	GXLoadPosMtxImm(posMtx, 0);
	GXSetCurrentMtx(0);
	GXSetZMode(GX_TRUE, GX_ALWAYS, GX_FALSE);
	GXSetBlendMode(GX_BM_NONE, GX_BL_ONE, GX_BL_ZERO, GX_LO_CLEAR);
	GXSetColorUpdate(GX_TRUE);
	GXSetAlphaUpdate(GX_FALSE);
	GXSetDispCopyGamma(GX_GM_1_0);
	GXSetNumChans(0);
	GXSetNumTexGens(2);
	GXSetTexCoordGen2(GX_TEXCOORD0, GX_TG_MTX3X4, GX_TG_TEX0, GX_IDENTITY, GX_FALSE, GX_PTIDENTITY);
	GXSetTexCoordGen2(GX_TEXCOORD1, GX_TG_MTX3X4, GX_TG_TEX0, GX_IDENTITY, GX_FALSE, GX_PTIDENTITY);
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
	GXSetTevAlphaIn(GX_TEVSTAGE0, GX_CA_ZERO, GX_CA_TEXA, GX_CA_KONST, GX_CA_A0);
	GXSetTevAlphaOp(GX_TEVSTAGE0, GX_TEV_SUB, GX_TB_ZERO, GX_CS_SCALE_1, GX_FALSE, GX_TEVPREV);
	GXSetTevKColorSel(GX_TEVSTAGE0, GX_TEV_KCSEL_K0);
	GXSetTevKAlphaSel(GX_TEVSTAGE0, GX_TEV_KASEL_K0_A);
	GXSetTevSwapMode(GX_TEVSTAGE0, GX_TEV_SWAP0, GX_TEV_SWAP0);
	GXSetTevOrder(GX_TEVSTAGE1, GX_TEXCOORD1, GX_TEXMAP2, GX_COLOR_NULL);
	GXSetTevColorIn(GX_TEVSTAGE1, GX_CC_ZERO, GX_CC_TEXC, GX_CC_KONST, GX_CC_CPREV);
	GXSetTevColorOp(GX_TEVSTAGE1, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_2, GX_FALSE, GX_TEVPREV);
	GXSetTevAlphaIn(GX_TEVSTAGE1, GX_CA_ZERO, GX_CA_TEXA, GX_CA_KONST, GX_CA_APREV);
	GXSetTevAlphaOp(GX_TEVSTAGE1, GX_TEV_SUB, GX_TB_ZERO, GX_CS_SCALE_1, GX_FALSE, GX_TEVPREV);
	GXSetTevKColorSel(GX_TEVSTAGE1, GX_TEV_KCSEL_K1);
	GXSetTevKAlphaSel(GX_TEVSTAGE1, GX_TEV_KASEL_K1_A);
	GXSetTevSwapMode(GX_TEVSTAGE1, GX_TEV_SWAP0, GX_TEV_SWAP0);
	GXSetTevOrder(GX_TEVSTAGE2, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR_NULL);
	GXSetTevColorIn(GX_TEVSTAGE2, GX_CC_ZERO, GX_CC_TEXC, GX_CC_ONE, GX_CC_CPREV);
	GXSetTevColorOp(GX_TEVSTAGE2, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
	GXSetTevAlphaIn(GX_TEVSTAGE2, GX_CA_TEXA, GX_CA_ZERO, GX_CA_ZERO, GX_CA_APREV);
	GXSetTevAlphaOp(GX_TEVSTAGE2, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
	GXSetTevSwapMode(GX_TEVSTAGE2, GX_TEV_SWAP0, GX_TEV_SWAP0);
	GXSetTevOrder(GX_TEVSTAGE3, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevColorIn(GX_TEVSTAGE3, GX_CC_APREV, GX_CC_CPREV, GX_CC_KONST, GX_CC_ZERO);
	GXSetTevColorOp(GX_TEVSTAGE3, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
	GXSetTevAlphaIn(GX_TEVSTAGE3, GX_CA_ZERO, GX_CA_ZERO, GX_CA_ZERO, GX_CA_KONST);
	GXSetTevAlphaOp(GX_TEVSTAGE3, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
	GXSetTevSwapMode(GX_TEVSTAGE3, GX_TEV_SWAP0, GX_TEV_SWAP0);
	GXSetTevKColorSel(GX_TEVSTAGE3, GX_TEV_KCSEL_K2);
	GXSetTevColorS10(GX_TEVREG0, (GXColorS10) { 0xFFA6, 0x0000, 0xFF8E, 0x0087 });
	GXSetTevKColor(GX_KCOLOR0, (GXColor) { 0x00, 0x00, 0xE2, 0x58 });
	GXSetTevKColor(GX_KCOLOR1, (GXColor) { 0xB3, 0x00, 0x00, 0xB6 });
	GXSetTevKColor(GX_KCOLOR2, (GXColor) { 0xFF, 0x00, 0xFF, 0xFF });
	GXSetTevSwapModeTable(GX_TEV_SWAP0, GX_CH_RED, GX_CH_GREEN, GX_CH_BLUE, GX_CH_ALPHA);
}

/**
 * @note Address: 0x8044DC5C
 * @note Size: 0x1DC
 */
void THPGXYuv2RgbDraw(u32* yImage, u32* uImage, u32* vImage, s16 x, s16 y, s16 texWidth, s16 texHeight, s16 polyWidth, s16 polyHeight)
{
	GXTexObj texY;
	GXTexObj texU;
	GXTexObj texV;

	GXInitTexObj(&texY, yImage, texWidth, texHeight, GX_TF_I8, GX_CLAMP, GX_CLAMP, GX_FALSE);
	GXInitTexObjLOD(&texY, GX_NEAR, GX_NEAR, 0.0f, 0.0f, 0.0f, GX_FALSE, GX_FALSE, GX_ANISO_1);
	GXLoadTexObj(&texY, GX_TEXMAP0);

	GXInitTexObj(&texU, uImage, texWidth >> 1, texHeight >> 1, GX_TF_I8, GX_CLAMP, GX_CLAMP, GX_FALSE);
	GXInitTexObjLOD(&texU, GX_NEAR, GX_NEAR, 0.0f, 0.0f, 0.0f, GX_FALSE, GX_FALSE, GX_ANISO_1);
	GXLoadTexObj(&texU, GX_TEXMAP1);

	GXInitTexObj(&texV, vImage, texWidth >> 1, texHeight >> 1, GX_TF_I8, GX_CLAMP, GX_CLAMP, GX_FALSE);
	GXInitTexObjLOD(&texV, GX_NEAR, GX_NEAR, 0.0f, 0.0f, 0.0f, GX_FALSE, GX_FALSE, GX_ANISO_1);
	GXLoadTexObj(&texV, GX_TEXMAP2);

	GXBegin(GX_QUADS, GX_VTXFMT7, 4);

	// Fifo Writes
	GXPosition3s16(x, y, 0);
	GXTexCoord2u16(0, 0);

	GXPosition3s16(x + polyWidth, y, 0);
	GXTexCoord2u16(1, 0);

	GXPosition3u16(x + polyWidth, y + polyHeight, 0); // this one has to be u16 to match, typo?
	GXTexCoord2u16(1, 1);

	GXPosition3s16(x, y + polyHeight, 0);
	GXTexCoord2u16(0, 1);
}

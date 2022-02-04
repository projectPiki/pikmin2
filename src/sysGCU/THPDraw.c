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
	GXSetZMode(1, 7, 0);
	GXSetBlendMode(0, 1, 0, 0xF);
	GXSetNumTexGens(1);
	GXSetNumChans(0);
	GXSetNumTevStages(1);
	GXSetTevOrder(0, 0, 0, 0xFF);
	GXSetTevOp(0, 3);
	GXSetTevSwapMode(0, 0, 0);
	GXSetTevSwapMode(1, 0, 0);
	GXSetTevSwapMode(2, 0, 0);
	GXSetTevSwapMode(3, 0, 0);
	GXSetTevSwapModeTable(0, 0, 1, 2, 3);
	GXSetTevSwapModeTable(1, 0, 0, 0, 3);
	GXSetTevSwapModeTable(2, 1, 1, 1, 3);
	GXSetTevSwapModeTable(3, 2, 2, 2, 3);
}

/*
 * --INFO--
 * Address:	8044D79C
 * Size:	0004C0
 */
void THPGXYuv2RgbSetup(u16* param_1)
{
	int r31;
	int r30;
	Mtx44 MStack116;
	Mtx MStack164;

	r31 = param_1[2];
	r30 = param_1[3];

	GXSetPixelFmt(0, 0);
	C_MTXOrtho(MStack116, 0, r30, 0, r31, 0, -1);
	GXSetProjection(MStack116, 1);
	GXSetViewport(0, 0, r31, r30, 0.0, 1.0);
	GXSetScissor(0, 0, r31, r30);
	PSMTXIdentity(MStack164);
	GXLoadPosMtxImm(MStack164, 0);
	GXSetCurrentMtx(0);
	GXSetZMode(1, 7, 0);
	GXSetBlendMode(0, 1, 0, 0);
	GXSetColorUpdate(1);
	GXSetAlphaUpdate(0);
	GXSetDispCopyGamma(0);
	GXSetNumChans(0);
	GXSetNumTexGens(2);
	GXSetTexCoordGen2(0, 1, 4, 0x3C, 0, 0x7D);
	GXSetTexCoordGen2(1, 1, 4, 0x3C, 0, 0x7D);
	GXInvalidateTexAll();
	GXClearVtxDesc();
	GXSetVtxDesc(9, 1);
	GXSetVtxDesc(0xD, 1);
	GXSetVtxAttrFmt(7, 9, 1, 3, 0);
	GXSetVtxAttrFmt(7, 0xD, 1, 2, 0);
	GXSetNumTevStages(4);
	GXSetTevOrder(0, 1, 1, 0xFF);
	GXSetTevColorIn(0, 0xF, 8, 0xE, 2);
	GXSetTevColorOp(0, 0, 0, 0, 0, 0);
	GXSetTevAlphaIn(0, 7, 4, 6, 1);
	GXSetTevAlphaOp(0, 1, 0, 0, 0, 0);
	GXSetTevKColorSel(0, 0xC);
	GXSetTevKAlphaSel(0, 0x1C);
	GXSetTevSwapMode(0, 0, 0);
	GXSetTevOrder(1, 1, 2, 0xFF);
	GXSetTevColorIn(1, 0xF, 8, 0xE, 0);
	GXSetTevColorOp(1, 0, 0, 1, 0, 0);
	GXSetTevAlphaIn(1, 7, 4, 6, 0);
	GXSetTevAlphaOp(1, 1, 0, 0, 0, 0);
	GXSetTevKColorSel(1, 0xD);
	GXSetTevKAlphaSel(1, 0x1D);
	GXSetTevSwapMode(1, 0, 0);
	GXSetTevOrder(2, 0, 0, 0xFF);
	GXSetTevColorIn(2, 0xF, 8, 0xC, 0);
	GXSetTevColorOp(2, 0, 0, 0, 1, 0);
	GXSetTevAlphaIn(2, 4, 7, 7, 0);
	GXSetTevAlphaOp(2, 0, 0, 0, 1, 0);
	GXSetTevSwapMode(2, 0, 0);
	GXSetTevOrder(3, 0xFF, 0xFF, 0xFF);
	GXSetTevColorIn(3, 1, 0, 0xE, 0xF);
	GXSetTevColorOp(3, 0, 0, 0, 1, 0);
	GXSetTevAlphaIn(3, 7, 7, 7, 6);
	GXSetTevAlphaOp(3, 0, 0, 0, 1, 0);
	GXSetTevSwapMode(3, 0, 0);
	GXSetTevKColorSel(3, 0xE);
	GXSetTevColorS10(1, (GXColorS10) { 0xFFA6, 0x0000, 0xFF8E, 0x0087 });
	GXSetTevKColor(GX_KCOLOR0, (GXColor) { 0x00, 0x00, 0xE2, 0x58 });
	GXSetTevKColor(GX_KCOLOR1, (GXColor) { 0xB3, 0x00, 0x00, 0xB6 });
	GXSetTevKColor(GX_KCOLOR2, (GXColor) { 0xFF, 0x00, 0xFF, 0xFF });
	GXSetTevSwapModeTable(0, 0, 1, 2, 3);
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
	GXBegin(0x80, GX_VTXFMT7, 4);

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
	HW_REG(0xCC008000, u16) = param_4;
	HW_REG(0xCC008000, u16) = param_5 + param_9;
	HW_REG(0xCC008000, u16) = 0;
	HW_REG(0xCC008000, u16) = 0;
	HW_REG(0xCC008000, u16) = 1;
}

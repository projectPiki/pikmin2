#include "JSystem/J3D/J3DSys.h"
#include "Dolphin/gx.h"
#include "Dolphin/mtx.h"
#include "Dolphin/os.h"
#include "types.h"

J3DSys j3dSys;
Mtx J3DSys::mCurrentMtx;
Vec J3DSys::mCurrentS;
Vec J3DSys::mParentS;
J3DTexCoordScaleInfo J3DSys::sTexCoordScaleTable[8];

static GXColor ColorBlack = { 0x00, 0x00, 0x00, 0x00 };
static GXColor ColorWhite = { 0xFF, 0xFF, 0xFF, 0xFF };

static u8 NullTexData[0x10] = { 0x0 };

s32 j3dDefaultViewNo;

/**
 * @note Address: 0x8005DAAC
 * @note Size: 0x114
 */
J3DSys::J3DSys()
{
	makeTexCoordTable();
	makeTevSwapTable();
	makeAlphaCmpTable();
	makeZModeTable();

	mFlags = 0;
	PSMTXIdentity(mViewMtx);
	mDrawMode     = SYSDRAW_Xlu;
	mMaterialMode = 0;
	mModel        = nullptr;
	mShape        = nullptr;
	for (u32 i = 0; i < ARRAY_SIZE(mDrawBuffer); i++)
		mDrawBuffer[i] = nullptr;
	mTexture      = nullptr;
	mMatPacket    = nullptr;
	mShapePacket  = nullptr;
	mModelDrawMtx = nullptr;
	mModelNormMtx = nullptr;
	mVtxPos       = nullptr;
	mVtxNorm      = nullptr;
	mVtxColor     = nullptr;

	for (u32 i = 0; i < 8; i++) {
		sTexCoordScaleTable[i].mScaleS = 1;
		sTexCoordScaleTable[i].mScaleT = 1;
		sTexCoordScaleTable[i].mBiasS  = 0;
		sTexCoordScaleTable[i].mBiasT  = 0;
	}
}

/**
 * @note Address: 0x8005DBC0
 * @note Size: 0x24
 */
void J3DSys::loadPosMtxIndx(int p1, u16 p2) const
{
	GXWGFifo.u8  = 0x20;
	GXWGFifo.u16 = p2;
	GXWGFifo.u16 = (u16)(p1 * 0xC) | 0xB000;
}

/**
 * @note Address: 0x8005DBE4
 * @note Size: 0x28
 */
void J3DSys::loadNrmMtxIndx(int p1, u16 p2) const
{
	GXWGFifo.u8  = 0x28;
	GXWGFifo.u16 = p2;
	GXWGFifo.u16 = (u16)(p1 * 9 + 0x400) | 0x8000;
}

static Mtx j3dIdentityMtx = {
	1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f,
};

void J3DSys::setTexCacheRegion(GXTexCacheSize size)
{
	const u32 kSize[] = {
		0x00008000,
		0x00020000,
		0x00080000,
		0x00000000,
	};
	const u32 kRegionNum[] = { 8, 4, 1, 0 };

	u32 regionNum      = kRegionNum[size];
	mTexCacheRegionNum = regionNum;

	if (!!(mFlags & 0x80000000)) {
		for (u32 i = 0; i < regionNum; i++) {
			if (!!(i & 1)) {
				GXInitTexCacheRegion(&mTexCacheRegion[i], GX_FALSE, i * kSize[size] + 0x80000, size, i * kSize[size], size);
				J3DFifoLoadTexCached((GXTexMapID)i, i * kSize[size] + 0x80000, size, i * kSize[size], size);
			} else {
				GXInitTexCacheRegion(&mTexCacheRegion[i], GX_FALSE, i * kSize[size], size, i * kSize[size] + 0x80000, size);
				J3DFifoLoadTexCached((GXTexMapID)i, i * kSize[size], size, i * kSize[size] + 0x80000, size);
			}
		}
	} else {
		for (u32 i = 0; i < regionNum; i++) {
			GXInitTexCacheRegion(&mTexCacheRegion[i], GX_FALSE, i * kSize[size], size, i * kSize[size] + 0x80000, size);
			J3DFifoLoadTexCached((GXTexMapID)i, i * kSize[size], size, i * kSize[size] + 0x80000, size);
		}
	}
}

/**
 * @note Address: 0x8005DC0C
 * @note Size: 0x7B8
 */
void J3DSys::drawInit()
{
	GXInvalidateVtxCache();
	GXSetCurrentMtx(GX_PNMTX0);
	GXSetCullMode(GX_CULL_BACK);
	GXSetCoPlanar(GX_FALSE);
	GXSetClipMode(GX_CLIP_ENABLE);
	GXSetColorUpdate(GX_TRUE);
	GXSetDither(GX_TRUE);
	GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_NOOP);
	GXSetAlphaCompare(GX_ALWAYS, 0, GX_AOP_AND, GX_ALWAYS, 0);
	GXSetZMode(GX_TRUE, GX_LEQUAL, GX_TRUE);
	GXSetZCompLoc(GX_TRUE);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_NRM, GX_NRM_XYZ, GX_F32, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_CLR0, GX_CLR_RGBA, GX_RGBA8, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_CLR1, GX_CLR_RGBA, GX_RGBA8, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_CLR_RGBA, GX_RGBA4, 7);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX1, GX_CLR_RGBA, GX_RGBA4, 7);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX2, GX_CLR_RGBA, GX_RGBA4, 7);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX3, GX_CLR_RGBA, GX_RGBA4, 7);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX4, GX_CLR_RGBA, GX_RGBA4, 7);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX5, GX_CLR_RGBA, GX_RGBA4, 7);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX6, GX_CLR_RGBA, GX_RGBA4, 7);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX7, GX_CLR_RGBA, GX_RGBA4, 7);

	GXSetNumIndStages(0);
	reinitTexture();

	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE1, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE2, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE3, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE4, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE5, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE6, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE7, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE8, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE9, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE10, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE11, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE12, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE13, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE14, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE15, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);

	for (u32 i = 0; i < 10; i++)
		GXLoadTexMtxImm(j3dIdentityMtx, GX_TEXMTX0 + i * 3, GX_MTX3x4);

	Mtx23 indTexMtx = {
		{ 0.5f, 0.0f, 0.0f },
		{ 0.0f, 0.5f, 0.0f },
	};

	u8 i;
	for (i = 0; i < 3; i++)
		GXSetIndTexMtx((GXIndTexMtxID)(GX_ITM_0 + i), indTexMtx, 1);

	GXSetChanMatColor(GX_COLOR0A0, j3dDefaultColInfo);
	GXSetChanMatColor(GX_COLOR1A1, j3dDefaultColInfo);

	GXSetNumChans(j3dDefaultColorChanNum);
	GXSetNumTexGens(1);
	GXSetNumTevStages(1);
	GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_REG, GX_LIGHT_NULL, GX_DF_CLAMP, GX_AF_NONE);
	GXSetChanCtrl(GX_COLOR1A1, GX_FALSE, GX_SRC_REG, GX_SRC_REG, GX_LIGHT_NULL, GX_DF_CLAMP, GX_AF_NONE);

	for (i = 0; i < GX_MAX_TEXMAP; i++)
		GXSetTexCoordGen2((GXTexCoordID)i, (GXTexGenType)j3dDefaultTexCoordInfo[i].mTexGenType,
		                  (GXTexGenSrc)j3dDefaultTexCoordInfo[i].mTexGenSrc, j3dDefaultTexCoordInfo[i].mTexGenMtx, GX_FALSE, GX_PTIDENTITY);

	for (i = 0; i < GX_IND_MAX_TEX_STAGE_ID; i++)
		GXSetIndTexCoordScale((GXIndTexStageID)i, GX_ITS_1, GX_ITS_1);

	for (i = 0; i < GX_MAX_TEVREG; i++)
		GXSetTevKColor((GXTevKColorID)i, j3dDefaultTevKColor);

	for (i = 0; i < GX_MAX_TEVREG; i++)
		GXSetTevColorS10((GXTevRegID)i, j3dDefaultTevColor);

	for (i = 0; i < GX_MAXTEVSTAGE; i++) {
		GXSetTevColorIn((GXTevStageID)i, GX_CC_RASC, GX_CC_ZERO, GX_CC_ZERO, GX_CC_ZERO);
		GXSetTevColorOp((GXTevStageID)i, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
		GXSetTevAlphaIn((GXTevStageID)i, GX_CA_RASA, GX_CA_ZERO, GX_CA_ZERO, GX_CA_ZERO);
		GXSetTevAlphaOp((GXTevStageID)i, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
	}

	for (i = 0; i < GX_MAXTEVSTAGE; i++)
		GXSetTevSwapMode((GXTevStageID)i, GX_TEV_SWAP0, GX_TEV_SWAP0);

	GXSetTevSwapModeTable(GX_TEV_SWAP0, GX_CH_RED, GX_CH_GREEN, GX_CH_BLUE, GX_CH_ALPHA);
	GXSetTevSwapModeTable(GX_TEV_SWAP1, GX_CH_RED, GX_CH_RED, GX_CH_RED, GX_CH_ALPHA);
	GXSetTevSwapModeTable(GX_TEV_SWAP2, GX_CH_GREEN, GX_CH_GREEN, GX_CH_GREEN, GX_CH_ALPHA);
	GXSetTevSwapModeTable(GX_TEV_SWAP3, GX_CH_BLUE, GX_CH_BLUE, GX_CH_BLUE, GX_CH_ALPHA);

	for (i = 0; i < GX_MAXTEVSTAGE; i++)
		GXSetTevIndirect((GXTevStageID)i, GX_IND_TEX_STAGE_0, GX_ITF_8, GX_ITB_NONE, GX_ITM_OFF, GX_ITW_OFF, GX_ITW_OFF, GX_FALSE, GX_FALSE,
		                 GX_ITBA_OFF);

	OSInitFastCast();
	setTexCacheRegion(GX_TEXCACHE_32K);
}

/**
 * @note Address: 0x8005E3C4
 * @note Size: 0x5C
 */
void J3DSys::reinitGX()
{
	reinitGenMode();
	reinitLighting();
	reinitTransform();
	reinitTexture();
	reinitTevStages();
	reinitIndStages();
	reinitPixelProc();
}

/**
 * @note Address: 0x8005E420
 * @note Size: 0x4C
 */
void J3DSys::reinitGenMode()
{
	GXSetNumChans(0);
	GXSetNumTexGens(1);
	GXSetNumTevStages(1);
	GXSetNumIndStages(0);
	GXSetCullMode(GX_CULL_BACK);
	GXSetCoPlanar(GX_FALSE);
}

/**
 * @note Address: 0x8005E46C
 * @note Size: 0xAC
 */
void J3DSys::reinitLighting()
{
	GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_VTX, GX_LIGHT_NULL, GX_DF_NONE, GX_AF_NONE);
	GXSetChanCtrl(GX_COLOR1A1, GX_FALSE, GX_SRC_REG, GX_SRC_VTX, GX_LIGHT_NULL, GX_DF_NONE, GX_AF_NONE);
	GXSetChanAmbColor(GX_COLOR0A0, ColorBlack);
	GXSetChanAmbColor(GX_COLOR1A1, ColorBlack);
	GXSetChanMatColor(GX_COLOR0A0, ColorWhite);
	GXSetChanMatColor(GX_COLOR1A1, ColorWhite);
}

/**
 * @note Address: 0x8005E518
 * @note Size: 0x104
 */
void J3DSys::reinitTransform()
{
	GXSetCurrentMtx(0);
	GXSetTexCoordGen2(GX_TEXCOORD0, GX_TG_MTX3X4, GX_TG_TEX0, 0x3C, GX_FALSE, 0x7D);
	GXSetTexCoordGen2(GX_TEXCOORD1, GX_TG_MTX3X4, GX_TG_TEX1, 0x3C, GX_FALSE, 0x7D);
	GXSetTexCoordGen2(GX_TEXCOORD2, GX_TG_MTX3X4, GX_TG_TEX2, 0x3C, GX_FALSE, 0x7D);
	GXSetTexCoordGen2(GX_TEXCOORD3, GX_TG_MTX3X4, GX_TG_TEX3, 0x3C, GX_FALSE, 0x7D);
	GXSetTexCoordGen2(GX_TEXCOORD4, GX_TG_MTX3X4, GX_TG_TEX4, 0x3C, GX_FALSE, 0x7D);
	GXSetTexCoordGen2(GX_TEXCOORD5, GX_TG_MTX3X4, GX_TG_TEX5, 0x3C, GX_FALSE, 0x7D);
	GXSetTexCoordGen2(GX_TEXCOORD6, GX_TG_MTX3X4, GX_TG_TEX6, 0x3C, GX_FALSE, 0x7D);
	GXSetTexCoordGen2(GX_TEXCOORD7, GX_TG_MTX3X4, GX_TG_TEX7, 0x3C, GX_FALSE, 0x7D);
}

/**
 * @note Address: 0x8005E61C
 * @note Size: 0xA4
 */
void J3DSys::reinitTexture()
{
	GXTexObj texObj;
	GXInitTexObj(&texObj, &NullTexData, 4, 4, GX_TF_IA8, GX_CLAMP, GX_CLAMP, GX_FALSE);
	GXLoadTexObj(&texObj, GX_TEXMAP0);
	GXLoadTexObj(&texObj, GX_TEXMAP1);
	GXLoadTexObj(&texObj, GX_TEXMAP2);
	GXLoadTexObj(&texObj, GX_TEXMAP3);
	GXLoadTexObj(&texObj, GX_TEXMAP4);
	GXLoadTexObj(&texObj, GX_TEXMAP5);
	GXLoadTexObj(&texObj, GX_TEXMAP6);
	GXLoadTexObj(&texObj, GX_TEXMAP7);
}

/**
 * @note Address: 0x8005E6C0
 * @note Size: 0x308
 */
void J3DSys::reinitTevStages()
{
	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE1, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE2, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE3, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE4, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE5, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE6, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE7, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE8, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE9, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE10, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE11, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE12, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE13, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE14, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevOrder(GX_TEVSTAGE15, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	GXSetTevColor(GX_TEVREG0, ColorWhite);
	GXSetTevColor(GX_TEVREG1, ColorWhite);
	GXSetTevColor(GX_TEVREG2, ColorWhite);
	GXSetTevKColor(GX_KCOLOR0, ColorWhite);
	GXSetTevKColor(GX_KCOLOR1, ColorWhite);
	GXSetTevKColor(GX_KCOLOR2, ColorWhite);
	GXSetTevKColor(GX_KCOLOR3, ColorWhite);
	for (u32 i = 0; i < 0x10; i++) {
		GXSetTevColorIn((GXTevStageID)i, GX_CC_RASC, GX_CC_ZERO, GX_CC_ZERO, GX_CC_ZERO);
		GXSetTevColorOp((GXTevStageID)i, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
		GXSetTevAlphaIn((GXTevStageID)i, GX_CA_RASA, GX_CA_ZERO, GX_CA_ZERO, GX_CA_ZERO);
		GXSetTevAlphaOp((GXTevStageID)i, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
		GXSetTevKColorSel((GXTevStageID)i, GX_TEV_KCSEL_1_4);
		GXSetTevKAlphaSel((GXTevStageID)i, GX_TEV_KASEL_1);
		GXSetTevSwapMode((GXTevStageID)i, GX_TEV_SWAP0, GX_TEV_SWAP0);
	}
	GXSetTevSwapModeTable(GX_TEV_SWAP0, GX_CH_RED, GX_CH_GREEN, GX_CH_BLUE, GX_CH_ALPHA);
	GXSetTevSwapModeTable(GX_TEV_SWAP1, GX_CH_RED, GX_CH_RED, GX_CH_RED, GX_CH_ALPHA);
	GXSetTevSwapModeTable(GX_TEV_SWAP2, GX_CH_GREEN, GX_CH_GREEN, GX_CH_GREEN, GX_CH_ALPHA);
	GXSetTevSwapModeTable(GX_TEV_SWAP3, GX_CH_BLUE, GX_CH_BLUE, GX_CH_BLUE, GX_CH_ALPHA);
	GXSetAlphaCompare(GX_ALWAYS, 0, GX_AOP_AND, GX_ALWAYS, 0);
}

static Mtx23 IndMtx = { 0.5f, 0.0f, 0.0f, 0.0f, 0.5f, 0.0f };

/**
 * @note Address: 0x8005E9C8
 * @note Size: 0xF8
 */
void J3DSys::reinitIndStages()
{
	for (u32 i = 0; i < 0x10; i++) {
		GXSetTevDirect((GXTevStageID)i);
	}
	GXSetIndTexOrder(GX_IND_TEX_STAGE_0, GX_TEXCOORD0, GX_TEXMAP0);
	GXSetIndTexOrder(GX_IND_TEX_STAGE_1, GX_TEXCOORD1, GX_TEXMAP1);
	GXSetIndTexOrder(GX_IND_TEX_STAGE_2, GX_TEXCOORD2, GX_TEXMAP2);
	GXSetIndTexOrder(GX_IND_TEX_STAGE_3, GX_TEXCOORD3, GX_TEXMAP3);
	GXSetIndTexCoordScale(GX_IND_TEX_STAGE_0, GX_ITS_1, GX_ITS_1);
	GXSetIndTexCoordScale(GX_IND_TEX_STAGE_1, GX_ITS_1, GX_ITS_1);
	GXSetIndTexCoordScale(GX_IND_TEX_STAGE_2, GX_ITS_1, GX_ITS_1);
	GXSetIndTexCoordScale(GX_IND_TEX_STAGE_3, GX_ITS_1, GX_ITS_1);
	GXSetIndTexMtx(GX_ITM_0, IndMtx, 1);
	GXSetIndTexMtx(GX_ITM_1, IndMtx, 1);
	GXSetIndTexMtx(GX_ITM_2, IndMtx, 1);
}

/**
 * @note Address: 0x8005EAC0
 * @note Size: 0x94
 */
void J3DSys::reinitPixelProc()
{
	GXSetBlendMode(GX_BM_NONE, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_CLEAR);
	GXSetColorUpdate(GX_TRUE);
	GXSetAlphaUpdate(GX_TRUE);
	GXSetDither(GX_TRUE);
	GXSetFog(GX_FOG_NONE, 0.0f, 1.0f, 0.1f, 1.0f, ColorBlack);
	GXSetFogRangeAdj(GX_FALSE, 0, nullptr);
	GXSetZMode(GX_TRUE, GX_LEQUAL, GX_TRUE);
	GXSetZCompLoc(GX_TRUE);
}

// unused error messages from ErrorReport? the func is needed to get them to generate properly including the array of them
static void fakeFunc()
{
	char* msgs[] = { "Success\n",
		             "J3DErrType : Material has No Material Animation\n",
		             "J3DErrType : Model Data is Locked\n",
		             "J3DErrType : Binary Resource is Null\n",
		             "J3DErrType : Out Of Memory\n",
		             "J3DErrType : Argument is Invalid\n",
		             "J3DErrType : Data is Invalid\n" };
}

/**
 * @note Address: 0x8005EB54
 * @note Size: 0x4
 */
void J3DSys::ErrorReport(J3DErrType) const { }

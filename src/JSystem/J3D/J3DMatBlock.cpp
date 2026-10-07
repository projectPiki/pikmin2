#include "Dolphin/gd.h"
#include "Dolphin/gx.h"
#include "Dolphin/os.h"
#include "JSystem/J3D/J3DColorBlock.h"
#include "JSystem/J3D/J3DGXColor.h"
#include "JSystem/J3D/J3DInd.h"
#include "JSystem/J3D/J3DPE.h"
#include "JSystem/J3D/J3DTevBlock.h"
#include "JSystem/J3D/J3DTexGenBlock.h"
#include "JSystem/J3D/J3DTexMtx.h"
#include "JSystem/J3D/J3DTransform.h"
#include "JSystem/J3D/J3DTypes.h"
#include "JSystem/J3D/J3DSys.h"
#include "stl/mem.h"
#include "types.h"

static size_t SizeOfLoadMatColors  = 13;
static size_t SizeOfLoadAmbColors  = 13;
static size_t SizeOfLoadColorChans = 21;

static size_t SizeOfJ3DColorBlockLightOffLoad  = SizeOfLoadMatColors + SizeOfLoadColorChans;
static size_t SizeOfJ3DColorBlockAmbientOnLoad = SizeOfLoadMatColors + SizeOfLoadAmbColors + SizeOfLoadColorChans;

// this has to get defined here to stop an sdata2 fragment going EVERYWHERE IN THE PROJECT smh
inline u8 J3DColorChan::getAttnFn() const
{
	u8 attnFnTbl[] = { GX_AF_NONE, GX_AF_SPEC, GX_AF_NONE, GX_AF_SPOT };
	return attnFnTbl[(u32)(mChanCtrl & (3 << 9)) >> 9];
}
/**
 * @note Address: 0x800771C0
 * @note Size: 0x48
 */
void J3DColorBlockLightOff::initialize()
{
	mColorChannelNum = 0;
	for (u32 i = 0; i < ARRAY_SIZE(mMaterialColors); i++) {
		mMaterialColors[i] = j3dDefaultColInfo;
	}
	mMaterialColorOffset = 0;
	mColorChannelOffset  = 0;
}

/**
 * @note Address: 0x80077208
 * @note Size: 0x7C
 */
void J3DColorBlockAmbientOn::initialize()
{
	mColorChannelNum = 0;
	for (u32 i = 0; i < ARRAY_SIZE(mMaterialColors); i++) {
		mMaterialColors[i] = j3dDefaultColInfo;
	}
	for (u32 i = 0; i < ARRAY_SIZE(mAmbientColors); i++) {
		mAmbientColors[i] = j3dDefaultAmbInfo;
	}
	mMaterialColorOffset = 0;
	mColorChannelOffset  = 0;
}

/**
 * @note Address: 0x80077284
 * @note Size: 0x9C
 */
void J3DColorBlockLightOn::initialize()
{
	mColorChannelNum = 0;
	for (int i = 0; i < ARRAY_SIZE(mMaterialColors); i++) {
		mMaterialColors[i] = j3dDefaultColInfo;
	}
	for (int i = 0; i < ARRAY_SIZE(mAmbientColors); i++) {
		mAmbientColors[i] = j3dDefaultAmbInfo;
	}
	for (int i = 0; i < ARRAY_SIZE(mLights); i++) {
		mLights[i] = nullptr;
	}

	mMaterialColorOffset = 0;
	mColorChannelOffset  = 0;
}

/**
 * @note Address: 0x80077320
 * @note Size: 0x30
 * initialize__21J3DTexGenBlockPatchedFv
 */
void J3DTexGenBlockPatched::initialize()
{
	mTexGenCnt = 0;
	for (int i = 0; i < 8; i++) {
		mTexMatrices[i] = nullptr;
	}
	mTexMtxOffset = 0;
}

/**
 * @note Address: 0x80077350
 * @note Size: 0x20
 * initialize__15J3DTexGenBlock4Fv
 */
void J3DTexGenBlock4::initialize()
{
	mTexGenCnt = 0;
	for (int i = 0; i < 4; i++) {
		mTexMatrices[i] = nullptr;
	}
	mTexMtxOffset = 0;
}

/**
 * @note Address: 0x80077370
 * @note Size: 0x30
 * initialize__19J3DTexGenBlockBasicFv
 */
void J3DTexGenBlockBasic::initialize()
{
	mTexGenCnt = 0;
	for (int i = 0; i < 8; i++) {
		mTexMatrices[i] = nullptr;
	}
	mTexMtxOffset = 0;
}

/**
 * @note Address: 0x800773A0
 * @note Size: 0xC
 * initialize__15J3DTevBlockNullFv
 */
void J3DTevBlockNull::initialize()
{
	mTexNoOffset = 0;
}

/**
 * @note Address: 0x800773AC
 * @note Size: 0x18C
 * initialize__18J3DTevBlockPatchedFv
 */
void J3DTevBlockPatched::initialize()
{
	for (int i = 0; i < 8; i++) {
		mTexIndices[i] = 0xFFFF;
	}
	for (int i = 0; i < 8; i++) {
		mStages[i].mBPCommand1 = 0xC0 + (i * 2);
		mStages[i].mBPCommand2 = 0xC1 + (i * 2);
	}

	for (int i = 0; i < 3; i++) {
		mColors[i] = j3dDefaultTevColor;
	}
	for (int i = 0; i < 4; i++) {
		mKColors[i] = j3dDefaultTevKColor;
	}
	for (int i = 0; i < 8; i++) {
		mKColorSels[i] = 0xC;
	}
	mStageNum    = 1;
	mTexNoOffset = 0;
	mRegOffset   = 0;
}

/**
 * @note Address: 0x80077538
 * @note Size: 0x28
 * initialize__12J3DTevBlock1Fv
 */
void J3DTevBlock1::initialize()
{
	for (int i = 0; i < 1; i++) {
		mTexIndices[i] = 0xFFFF;
	}
	for (int i = 0; i < 1; i++) {
		mStages[i].mBPCommand1 = 0xC0 + (i * 2);
		mStages[i].mBPCommand2 = 0xC1 + (i * 2);
	}
	mTexNoOffset = 0;
}

/**
 * @note Address: 0x80077560
 * @note Size: 0x110
 * initialize__12J3DTevBlock2Fv
 */
void J3DTevBlock2::initialize()
{
	for (int i = 0; i < 2; i++) {
		mTexIndices[i] = 0xFFFF;
	}
	mStageNum = 1;

	for (int i = 0; i < 2; i++) {
		mStages[i].mBPCommand1 = 0xC0 + (i * 2);
		mStages[i].mBPCommand2 = 0xC1 + (i * 2);
	}

	for (int i = 0; i < 2; i++) {
		mKColorSels[i] = 0xC;
	}
	for (int i = 0; i < 2; i++) {
		mKAlphaSels[i] = 0x1C;
	}

	for (int i = 0; i < 3; i++) {
		mColors[i] = j3dDefaultTevColor;
	}
	for (int i = 0; i < 4; i++) {
		mKColors[i] = j3dDefaultTevKColor;
	}
	mTexNoOffset = 0;
	mRegOffset   = 0;
}

/**
 * @note Address: 0x80077670
 * @note Size: 0x140
 */
void J3DTevBlock4::initialize()
{
	for (int i = 0; i < 4; i++) {
		mTexIndices[i] = 0xFFFF;
	}
	mStageNum = 1;

	for (int i = 0; i < 4; i++) {
		mStages[i].mBPCommand1 = 0xC0 + (i * 2);
		mStages[i].mBPCommand2 = 0xC1 + (i * 2);
	}

	for (int i = 0; i < 4; i++) {
		mKColorSels[i] = 0xC;
	}
	for (int i = 0; i < 4; i++) {
		mKAlphaSels[i] = 0x1C;
	}

	for (int i = 0; i < 3; i++) {
		mColors[i] = j3dDefaultTevColor;
	}
	for (int i = 0; i < 4; i++) {
		mKColors[i] = j3dDefaultTevKColor;
	}
	mTexNoOffset = 0;
	mRegOffset   = 0;
}

/**
 * @note Address: 0x800777B0
 * @note Size: 0x24C
 */
void J3DTevBlock16::initialize()
{
	for (int i = 0; i < 8; i++) {
		mTexIndices[i] = 0xFFFF;
	}
	mStageNum = 1;
	for (int i = 0; i < 3; i++) {
		mColors[i] = j3dDefaultTevColor;
	}
	for (int i = 0; i < 4; i++) {
		mKColors[i] = j3dDefaultTevKColor;
	}
	for (int i = 0; i < 16; i++) {
		mKColorSels[i] = 0xC;
	}
	for (int i = 0; i < 16; i++) {
		mKAlphaSels[i] = 0x1C;
	}

	for (int i = 0; i < 16; i++) {
		mStages[i].mBPCommand1 = 0xC0 + (i * 2);
		mStages[i].mBPCommand2 = 0xC1 + (i * 2);
	}

	mTexNoOffset = 0;
	mRegOffset   = 0;
}

/**
 * @note Address: 0x800779FC
 * @note Size: 0xC
 */
void J3DIndBlockFull::initialize()
{
	mIndTexStageNum = 0;
}

/**
 * @note Address: 0x80077A08
 * @note Size: 0x24
 */
void J3DPEBlockFogOff::initialize()
{
	mAlphaComp.mAlphaCmpID = 0xFFFF;
	mZMode.mZModeID        = 0xFFFF;
	mZCompLoc              = 0xFF;
	mDither                = 1;
}

/**
 * @note Address: 0x80077A2C
 * @note Size: 0x2C
 */
void J3DPEBlockFull::initialize()
{
	mAlphaComp.mAlphaCmpID = 0xFFFF;
	mZMode.mZModeID        = 0xFFFF;
	mZCompLoc              = 0xFF;
	mDither                = 1;
	mFogOffset             = 0;
}

/**
 * @note Address: 0x80077A58
 * @note Size: 0x8
 */
u32 J3DColorBlockLightOff::countDLSize()
{
	return 0x22;
}

/**
 * @note Address: 0x80077A60
 * @note Size: 0x8
 */
u32 J3DColorBlockAmbientOn::countDLSize()
{
	return 0x2F;
}

/**
 * @note Address: 0x80077A68
 * @note Size: 0x8
 */
u32 J3DColorBlockLightOn::countDLSize()
{
	return 0x26F;
}

/**
 * @note Address: 0x80077A70
 * @note Size: 0x8
 */
u32 J3DTexGenBlockPatched::countDLSize()
{
	return 0x1A8;
}

/**
 * @note Address: 0x80077A78
 * @note Size: 0x8
 */
u32 J3DTexGenBlock4::countDLSize()
{
	return 0xFE;
}

/**
 * @note Address: 0x80077A80
 * @note Size: 0x8
 */
u32 J3DTexGenBlockBasic::countDLSize()
{
	return 0x1F2;
}

/**
 * @note Address: 0x80077A88
 * @note Size: 0x8
 */
u32 J3DTevBlockPatched::countDLSize()
{
	return 0x230;
}

/**
 * @note Address: 0x80077A90
 * @note Size: 0x8
 */
u32 J3DTevBlock1::countDLSize()
{
	return 0x69;
}

/**
 * @note Address: 0x80077A98
 * @note Size: 0x8
 */
u32 J3DTevBlock2::countDLSize()
{
	return 0x14F;
}

/**
 * @note Address: 0x80077AA0
 * @note Size: 0x8
 */
u32 J3DTevBlock4::countDLSize()
{
	return 0x244;
}

/**
 * @note Address: 0x80077AA8
 * @note Size: 0x8
 */
u32 J3DTevBlock16::countDLSize()
{
	return 1000;
}

/**
 * @note Address: 0x80077AB0
 * @note Size: 0x8
 */
u32 J3DIndBlockFull::countDLSize()
{
	return 0x8C;
}

/**
 * @note Address: 0x80077AB8
 * @note Size: 0x8
 */
u32 J3DPEBlockOpa::countDLSize()
{
	return 0x1E;
}

/**
 * @note Address: 0x80077AC0
 * @note Size: 0x8
 */
u32 J3DPEBlockTexEdge::countDLSize()
{
	return 0x1E;
}

/**
 * @note Address: 0x80077AC8
 * @note Size: 0x8
 */
u32 J3DPEBlockXlu::countDLSize()
{
	return 0x1E;
}

/**
 * @note Address: 0x80077AD0
 * @note Size: 0x8
 */
u32 J3DPEBlockFogOff::countDLSize()
{
	return 0x1E;
}

/**
 * @note Address: 0x80077AD8
 * @note Size: 0x8
 */
u32 J3DPEBlockFull::countDLSize()
{
	return 0x55;
}

/**
 * @note Address: 0x80077AE0
 * @note Size: 0x558
 */
void J3DColorBlockLightOff::load()
{
	GDOverflowCheck(SizeOfJ3DColorBlockLightOffLoad);
	mMaterialColorOffset = GDGetCurrOffset();
	loadMatColors(mMaterialColors);
	mColorChannelOffset = GDGetCurrOffset();
	J3DGDWriteXFCmdHdr(GX_XF_REG_COLOR0CNTRL, 4);
	mColorChannels[0].load();
	mColorChannels[2].load();
	mColorChannels[1].load();
	mColorChannels[3].load();
}

/**
 * @note Address: 0x80078038
 * @note Size: 0x680
 */
void J3DColorBlockAmbientOn::load()
{
	GDOverflowCheck(SizeOfJ3DColorBlockAmbientOnLoad);
	mMaterialColorOffset = GDGetCurrOffset();
	loadMatColors(mMaterialColors);
	loadAmbColors(mAmbientColors);
	mColorChannelOffset = GDGetCurrOffset();
	J3DGDWriteXFCmdHdr(GX_XF_REG_COLOR0CNTRL, 4);
	mColorChannels[0].load();
	mColorChannels[2].load();
	mColorChannels[1].load();
	mColorChannels[3].load();
}

/**
 * @note Address: 0x800786B8
 * @note Size: 0x6B0
 */
void J3DColorBlockLightOn::load()
{
	GDOverflowCheck(SizeOfJ3DColorBlockAmbientOnLoad);
	mMaterialColorOffset = GDGetCurrOffset();
	loadMatColors(mMaterialColors);
	loadAmbColors(mAmbientColors);
	mColorChannelOffset = GDGetCurrOffset();
	J3DGDWriteXFCmdHdr(GX_XF_REG_COLOR0CNTRL, 4);
	mColorChannels[0].load();
	mColorChannels[2].load();
	mColorChannels[1].load();
	mColorChannels[3].load();

	for (u32 i = 0; i < ARRAY_SIZE(mLights); i++) {
		if (mLights[i]) {
			mLights[i]->load(i);
		}
	}
}

/**
 * @note Address: 0x80078D68
 * @note Size: 0x4C
 * patch__21J3DColorBlockLightOffFv
 */
void J3DColorBlockLightOff::patch()
{
	patchMatColor();
	patchLight();
}

/**
 * @note Address: 0x80078DB4
 * @note Size: 0x1AC
 * patchMatColor__21J3DColorBlockLightOffFv
 */
void J3DColorBlockLightOff::patchMatColor()
{
	GDSetCurrOffset(mMaterialColorOffset);
	u8* startPtr = GDGetCurrPointer();
	GDOverflowCheck(SizeOfLoadMatColors);
	loadMatColors(mMaterialColors);
	DCStoreRange(startPtr, GDGetCurrPointer() - startPtr);
}

/**
 * @note Address: 0x80078F60
 * @note Size: 0x438
 */
void J3DColorBlockLightOff::patchLight()
{
	GDSetCurrOffset(mColorChannelOffset);
	u8* startPtr = GDGetCurrPointer();
	GDOverflowCheck(SizeOfLoadColorChans);
	J3DGDWriteXFCmdHdr(GX_XF_REG_COLOR0CNTRL, 4);
	mColorChannels[0].load();
	mColorChannels[2].load();
	mColorChannels[1].load();
	mColorChannels[3].load();
	DCStoreRange(startPtr, GDGetCurrPointer() - startPtr);
}

/**
 * @note Address: 0x80079398
 * @note Size: 0x4C
 */
void J3DColorBlockLightOn::patch()
{
	patchMatColor();
	patchLight();
}

/**
 * @note Address: 0x800793E4
 * @note Size: 0x1AC
 */
void J3DColorBlockLightOn::patchMatColor()
{
	GDSetCurrOffset(mMaterialColorOffset);
	u8* startPtr = GDGetCurrPointer();
	GDOverflowCheck(SizeOfLoadMatColors);
	loadMatColors(mMaterialColors);
	DCStoreRange(startPtr, GDGetCurrPointer() - startPtr);
}

/**
 * @note Address: 0x80079590
 * @note Size: 0x464
 */
void J3DColorBlockLightOn::patchLight()
{
	GDSetCurrOffset(mColorChannelOffset);
	u8* startPtr = GDGetCurrPointer();
	GDOverflowCheck(SizeOfLoadColorChans);
	J3DGDWriteXFCmdHdr(GX_XF_REG_COLOR0CNTRL, 4);
	mColorChannels[0].load();
	mColorChannels[2].load();
	mColorChannels[1].load();
	mColorChannels[3].load();
	for (u32 i = 0; i < ARRAY_SIZE(mLights); i++) {
		if (mLights[i]) {
			mLights[i]->load(i);
		}
	}
	DCStoreRange(startPtr, GDGetCurrPointer() - startPtr);
}

/**
 * @note Address: 0x800799F4
 * @note Size: 0x68
 * diff__21J3DColorBlockLightOffFUl
 */
void J3DColorBlockLightOff::diff(u32 flag)
{
	if (flag & J3DMDF_DiffMatColor) {
		diffMatColor();
	}
	if (flag & J3DMDF_DiffLight) {
		diffLight();
	}
}

/**
 * @note Address: 0x80079A5C
 * @note Size: 0x17C
 */
void J3DColorBlockLightOff::diffMatColor()
{
	GDOverflowCheck(SizeOfLoadMatColors);
	loadMatColors(mMaterialColors);
}

/**
 * @note Address: 0x80079BD8
 * @note Size: 0x404
 */
void J3DColorBlockLightOff::diffLight()
{
	GDOverflowCheck(SizeOfLoadColorChans);
	J3DGDWriteXFCmdHdr(GX_XF_REG_COLOR0CNTRL, 4);
	mColorChannels[0].load();
	mColorChannels[2].load();
	mColorChannels[1].load();
	mColorChannels[3].load();
}

/**
 * @note Address: 0x80079FDC
 * @note Size: 0x70
 * diff__20J3DColorBlockLightOnFUl
 */
void J3DColorBlockLightOn::diff(u32 flag)
{
	if (flag & J3DMDF_DiffMatColor) {
		diffMatColor();
	}
	if ((flag & J3DMDF_DiffLight) || (flag >> 4 & 0xF)) {
		diffLight();
	}
}

/**
 * @note Address: 0x8007A04C
 * @note Size: 0x17C
 */
void J3DColorBlockLightOn::diffMatColor()
{
	GDOverflowCheck(SizeOfLoadMatColors);
	loadMatColors(mMaterialColors);
}

/**
 * @note Address: 0x8007A1C8
 * @note Size: 0x434
 */
void J3DColorBlockLightOn::diffLight()
{
	GDOverflowCheck(SizeOfLoadColorChans);
	J3DGDWriteXFCmdHdr(GX_XF_REG_COLOR0CNTRL, 4);
	mColorChannels[0].load();
	mColorChannels[2].load();
	mColorChannels[1].load();
	mColorChannels[3].load();
	for (u32 i = 0; i < ARRAY_SIZE(mLights); i++) {
		if (mLights[i]) {
			mLights[i]->load(i);
		}
	}
}

/**
 * @note Address: 0x8007A5FC
 * @note Size: 0xA8
 * load__15J3DTexGenBlock4Fv
 */
void J3DTexGenBlock4::load()
{
	mTexMtxOffset = GDGetCurrOffset();
	for (u32 i = 0; i < 4; i++) {
		if (mTexMatrices[i] && mTexCoords[i].getTexGenMtx() != GX_IDENTITY) {
			mTexMatrices[i]->load(i);
		}
	}
	if (mTexGenCnt != 0) {
		loadTexCoordGens(mTexGenCnt, mTexCoords);
	}
}

/**
 * @note Address: 0x8007A6A4
 * @note Size: 0xA8
 * load__19J3DTexGenBlockBasicFv
 */
void J3DTexGenBlockBasic::load()
{
	mTexMtxOffset = GDGetCurrOffset();
	for (u32 i = 0; i < 8; i++) {
		if (mTexMatrices[i] && mTexCoords[i].getTexGenMtx() != GX_IDENTITY) {
			mTexMatrices[i]->load(i);
		}
	}
	if (mTexGenCnt != 0) {
		loadTexCoordGens(mTexGenCnt, mTexCoords);
	}
}

/**
 * @note Address: 0x8007A74C
 * @note Size: 0x90
 * patch__21J3DTexGenBlockPatchedFv
 */
void J3DTexGenBlockPatched::patch()
{
	GDSetCurrOffset(mTexMtxOffset);
	u8* start = GDGetCurrPointer();
	for (u32 i = 0; i < 8; i++) {
		if (mTexMatrices[i]) {
			mTexMatrices[i]->load(i);
		}
	}
	DCStoreRange(start, GDGetCurrPointer() - start);
}

/**
 * @note Address: 0x8007A7DC
 * @note Size: 0xAC
 * patch__15J3DTexGenBlock4Fv
 */
void J3DTexGenBlock4::patch()
{
	GDSetCurrOffset(mTexMtxOffset);
	u8* start = GDGetCurrPointer();
	for (u32 i = 0; i < 4; i++) {
		if (mTexMatrices[i] && mTexCoords[i].getTexGenMtx() != GX_IDENTITY) {
			mTexMatrices[i]->load(i);
		}
	}
	DCStoreRange(start, GDGetCurrPointer() - start);
}

/**
 * @note Address: 0x8007A888
 * @note Size: 0xAC
 * patch__19J3DTexGenBlockBasicFv
 */
void J3DTexGenBlockBasic::patch()
{
	GDSetCurrOffset(mTexMtxOffset);
	u8* start = GDGetCurrPointer();
	for (u32 i = 0; i < 8; i++) {
		if (mTexMatrices[i] && mTexCoords[i].getTexGenMtx() != GX_IDENTITY) {
			mTexMatrices[i]->load(i);
		}
	}
	DCStoreRange(start, GDGetCurrPointer() - start);
}

/**
 * @note Address: 0x8007A934
 * @note Size: 0x68
 */
void J3DTexGenBlockPatched::diff(u32 flag)
{
	if (flag >> 8 & 0xF) {
		diffTexMtx();
		if (flag & J3DMDF_DiffTexGen) {
			diffTexGen();
		}
	}
}

/**
 * @note Address: 0x8007A99C
 * @note Size: 0x58
 */
void J3DTexGenBlockPatched::diffTexMtx()
{
	for (u32 i = 0; i < 8; i++) {
		if (mTexMatrices[i]) {
			mTexMatrices[i]->load(i);
		}
	}
}

/**
 * @note Address: 0x8007A9F4
 * @note Size: 0x34
 */
void J3DTexGenBlockPatched::diffTexGen()
{
	if (mTexGenCnt != 0) {
		loadTexCoordGens(mTexGenCnt, mTexCoords);
	}
}

/**
 * @note Address: 0x8007AA28
 * @note Size: 0x240
 */
void J3DTevBlock1::load()
{
	mTexNoOffset = GDGetCurrOffset();
	GDOverflowCheck(0x69);
	if (mTexIndices[0] != 0xFFFF) {
		loadTexNo(0, mTexIndices[0]);
	}
	J3DGDSetTevOrder(GX_TEVSTAGE0, GXTexCoordID(mOrders[0].getTevOrderInfo().mTexCoordID),
	                 GXTexMapID(mOrders[0].getTevOrderInfo().mTexMapID), GXChannelID(mOrders[0].getTevOrderInfo().mChannelID),
	                 GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	loadTexCoordScale(GXTexCoordID(mOrders[0].getTevOrderInfo().mTexCoordID),
	                  J3DSys::sTexCoordScaleTable[mOrders[0].getTevOrderInfo().mTexMapID & 7]);
	mStages[0].load(0);
	mIndStages[0].load(0);
}

/**
 * @note Address: 0x8007AC68
 * @note Size: 0x504
 */
void J3DTevBlock2::load()
{
	u8 tevStageNum = mStageNum;
	mTexNoOffset   = GDGetCurrOffset();
	for (u32 i = 0; i < 2; i++) {
		if (mTexIndices[i] != 0xFFFF) {
			loadTexNo(i, mTexIndices[i]);
		}
	}
	J3DGDSetTevOrder(GX_TEVSTAGE0, GXTexCoordID(mOrders[0].getTevOrderInfo().mTexCoordID),
	                 GXTexMapID(mOrders[0].getTevOrderInfo().mTexMapID), GXChannelID(mOrders[0].getTevOrderInfo().mChannelID),
	                 GXTexCoordID(mOrders[1].getTevOrderInfo().mTexCoordID), GXTexMapID(mOrders[1].getTevOrderInfo().mTexMapID),
	                 GXChannelID(mOrders[1].getTevOrderInfo().mChannelID));
	loadTexCoordScale(GXTexCoordID(mOrders[0].getTevOrderInfo().mTexCoordID),
	                  J3DSys::sTexCoordScaleTable[mOrders[0].getTevOrderInfo().mTexMapID & 7]);
	loadTexCoordScale(GXTexCoordID(mOrders[1].getTevOrderInfo().mTexCoordID & 7),
	                  J3DSys::sTexCoordScaleTable[mOrders[1].getTevOrderInfo().mTexMapID & 7]);
	mRegOffset = GDGetCurrOffset();
	for (u32 i = 0; i < 3; i++) {
		loadTevColor(i, mColors[i]);
	}
	for (u32 i = 0; i < 4; i++) {
		loadTevKColor(i, mKColors[i]);
	}
	for (u32 i = 0; i < tevStageNum; i++) {
		mStages[i].load(i);
		mIndStages[i].load(i);
	}
	for (u32 i = 0; i < 16; i += 4) {
		J3DGDSetTevKonstantSel_SwapModeTable(GXTevStageID(i), GXTevKColorSel(mKColorSels[0]), GXTevKAlphaSel(mKAlphaSels[0]),
		                                     GXTevKColorSel(mKColorSels[1]), GXTevKAlphaSel(mKAlphaSels[1]),
		                                     GXTevColorChan(mSwapModeTables[i / 4].getR()), GXTevColorChan(mSwapModeTables[i / 4].getG()));
		J3DGDSetTevKonstantSel_SwapModeTable(GXTevStageID(i + 2), GXTevKColorSel(mKColorSels[0]), GXTevKAlphaSel(mKAlphaSels[0]),
		                                     GXTevKColorSel(mKColorSels[1]), GXTevKAlphaSel(mKAlphaSels[1]),
		                                     GXTevColorChan(mSwapModeTables[i / 4].getB()), GXTevColorChan(mSwapModeTables[i / 4].getA()));
	}
}

/**
 * @note Address: 0x8007B16C
 * @note Size: 0x528
 */
void J3DTevBlock4::load()
{
	u8 tevStageNum = mStageNum;
	mTexNoOffset   = GDGetCurrOffset();
	for (u32 i = 0; i < 4; i++) {
		if (mTexIndices[i] != 0xFFFF) {
			loadTexNo(i, mTexIndices[i]);
		}
	}
	for (u32 i = 0; i < tevStageNum; i += 2) {
		J3DGDSetTevOrder(GXTevStageID(i), GXTexCoordID(mOrders[i].getTevOrderInfo().mTexCoordID),
		                 GXTexMapID(mOrders[i].getTevOrderInfo().mTexMapID), GXChannelID(mOrders[i].getTevOrderInfo().mChannelID),
		                 GXTexCoordID(mOrders[i + 1].getTevOrderInfo().mTexCoordID), GXTexMapID(mOrders[i + 1].getTevOrderInfo().mTexMapID),
		                 GXChannelID(mOrders[i + 1].getTevOrderInfo().mChannelID));
		loadTexCoordScale(GXTexCoordID(mOrders[i].getTevOrderInfo().mTexCoordID & 7),
		                  J3DSys::sTexCoordScaleTable[mOrders[i].getTevOrderInfo().mTexMapID & 7]);
		loadTexCoordScale(GXTexCoordID(mOrders[i + 1].getTevOrderInfo().mTexCoordID & 7),
		                  J3DSys::sTexCoordScaleTable[mOrders[i + 1].getTevOrderInfo().mTexMapID & 7]);
	}
	mRegOffset = GDGetCurrOffset();
	for (u32 i = 0; i < 3; i++) {
		loadTevColor(i, mColors[i]);
	}
	for (u32 i = 0; i < 4; i++) {
		loadTevKColor(i, mKColors[i]);
	}
	for (u32 i = 0; i < tevStageNum; i++) {
		mStages[i].load(i);
		mIndStages[i].load(i);
	}
	for (u32 i = 0; i < 16; i += 4) {
		J3DGDSetTevKonstantSel_SwapModeTable(GXTevStageID(i), GXTevKColorSel(mKColorSels[0]), GXTevKAlphaSel(mKAlphaSels[0]),
		                                     GXTevKColorSel(mKColorSels[1]), GXTevKAlphaSel(mKAlphaSels[1]),
		                                     GXTevColorChan(mSwapModeTables[i / 4].getR()), GXTevColorChan(mSwapModeTables[i / 4].getG()));
		J3DGDSetTevKonstantSel_SwapModeTable(GXTevStageID(i + 2), GXTevKColorSel(mKColorSels[2]), GXTevKAlphaSel(mKAlphaSels[2]),
		                                     GXTevKColorSel(mKColorSels[3]), GXTevKAlphaSel(mKAlphaSels[3]),
		                                     GXTevColorChan(mSwapModeTables[i / 4].getB()), GXTevColorChan(mSwapModeTables[i / 4].getA()));
	}
}

/**
 * @note Address: 0x8007B694
 * @note Size: 0x52C
 */
void J3DTevBlock16::load()
{
	u8 tevStageNum = mStageNum;
	mTexNoOffset   = GDGetCurrOffset();
	for (u32 i = 0; i < 8; i++) {
		if (mTexIndices[i] != 0xffff) {
			loadTexNo(i, mTexIndices[i]);
		}
	}
	for (u32 i = 0; i < tevStageNum; i += 2) {
		J3DGDSetTevOrder(GXTevStageID(i), GXTexCoordID(mOrders[i].getTevOrderInfo().mTexCoordID),
		                 GXTexMapID(mOrders[i].getTevOrderInfo().mTexMapID), GXChannelID(mOrders[i].getTevOrderInfo().mChannelID),
		                 GXTexCoordID(mOrders[i + 1].getTevOrderInfo().mTexCoordID), GXTexMapID(mOrders[i + 1].getTevOrderInfo().mTexMapID),
		                 GXChannelID(mOrders[i + 1].getTevOrderInfo().mChannelID));
		loadTexCoordScale(GXTexCoordID(mOrders[i].getTevOrderInfo().mTexCoordID & 7),
		                  J3DSys::sTexCoordScaleTable[mOrders[i].getTevOrderInfo().mTexMapID & 7]);
		loadTexCoordScale(GXTexCoordID(mOrders[i + 1].getTevOrderInfo().mTexCoordID & 7),
		                  J3DSys::sTexCoordScaleTable[mOrders[i + 1].getTevOrderInfo().mTexMapID & 7]);
	}
	mRegOffset = GDGetCurrOffset();
	for (u32 i = 0; i < 3; i++) {
		loadTevColor(i, mColors[i]);
	}
	for (u32 i = 0; i < 4; i++) {
		loadTevKColor(i, mKColors[i]);
	}
	for (u32 i = 0; i < tevStageNum; i++) {
		mStages[i].load(i);
		mIndStages[i].load(i);
	}
	for (u32 i = 0; i < 16; i += 4) {
		J3DGDSetTevKonstantSel_SwapModeTable(GXTevStageID(i), GXTevKColorSel(mKColorSels[i]), GXTevKAlphaSel(mKAlphaSels[i]),
		                                     GXTevKColorSel(mKColorSels[i + 1]), GXTevKAlphaSel(mKAlphaSels[i + 1]),
		                                     GXTevColorChan(mSwapModeTables[i / 4].getR()), GXTevColorChan(mSwapModeTables[i / 4].getG()));
		J3DGDSetTevKonstantSel_SwapModeTable(GXTevStageID(i + 2), GXTevKColorSel(mKColorSels[i + 2]), GXTevKAlphaSel(mKAlphaSels[i + 2]),
		                                     GXTevKColorSel(mKColorSels[i + 3]), GXTevKAlphaSel(mKAlphaSels[i + 3]),
		                                     GXTevColorChan(mSwapModeTables[i / 4].getB()), GXTevColorChan(mSwapModeTables[i / 4].getA()));
	}
}

/**
 * @note Address: 0x8007BBC0
 * @note Size: 0x94
 */
void J3DTevBlockPatched::patchTexNo()
{
	GDSetCurrOffset(mTexNoOffset);
	u8* start = GDGetCurrPointer();

	for (u32 i = 0; i < 8; i++) {
		if (mTexIndices[i] != 0xFFFF) {
			loadTexNo(i, mTexIndices[i]);
		}
	}

	DCStoreRange(start, GDGetCurrPointer() - start);
}

/**
 * @note Address: 0x8007BC54
 * @note Size: 0xD0
 */
void J3DTevBlockPatched::patchTevReg()
{
	GDSetCurrOffset(mRegOffset);
	u8* start = GDGetCurrPointer();

	for (u32 i = 0; i < ARRAY_SIZE(mColors) - 1; i++) {
		J3DGDSetTevColorS10((GXTevRegID)(i + 1), (GXColorS10)mColors[i]);
	}
	for (u32 i = 0; i < ARRAY_SIZE(mKColors); i++) {
		J3DGDSetTevKColor((GXTevKColorID)i, (GXColor)mKColors[i]);
	}

	DCStoreRange(start, GDGetCurrPointer() - start);
}

/**
 * @note Address: 0x8007BD24
 * @note Size: 0x16C
 */
void J3DTevBlockPatched::patchTexNoAndTexCoordScale()
{
	GDSetCurrOffset(mTexNoOffset);
	u8* start = GDGetCurrPointer();

	u8 tevStageNum = mStageNum;
	for (u32 i = 0; i < 8; i++) {
		if (mTexIndices[i] != 0xffff) {
			loadTexNo(i, mTexIndices[i]);
		}
	}

	for (u32 i = 0; i < tevStageNum; i += 2) {
		J3DGDSetTevOrder(GXTevStageID(i), GXTexCoordID(mOrders[i].getTevOrderInfo().mTexCoordID),
		                 GXTexMapID(mOrders[i].getTevOrderInfo().mTexMapID), GXChannelID(mOrders[i].getTevOrderInfo().mChannelID),
		                 GXTexCoordID(mOrders[i + 1].getTevOrderInfo().mTexCoordID), GXTexMapID(mOrders[i + 1].getTevOrderInfo().mTexMapID),
		                 GXChannelID(mOrders[i + 1].getTevOrderInfo().mChannelID));
		loadTexCoordScale(GXTexCoordID(mOrders[i].getTevOrderInfo().mTexCoordID & 7),
		                  J3DSys::sTexCoordScaleTable[mOrders[i].getTevOrderInfo().mTexMapID & 7]);
		loadTexCoordScale(GXTexCoordID(mOrders[i + 1].getTevOrderInfo().mTexCoordID & 7),
		                  J3DSys::sTexCoordScaleTable[mOrders[i + 1].getTevOrderInfo().mTexMapID & 7]);
	}

	DCStoreRange(start, GDGetCurrPointer() - start);
}

/**
 * @note Address: 0x8007BE90
 * @note Size: 0x4C
 * patch__18J3DTevBlockPatchedFv
 */
void J3DTevBlockPatched::patch()
{
	patchTexNo();
	patchTevReg();
}

/**
 * @note Address: 0x8007BEDC
 * @note Size: 0x6C
 * TODO: needs loadTexNo
 * patchTexNo__12J3DTevBlock1Fv
 */
void J3DTevBlock1::patchTexNo()
{
	GDSetCurrOffset(mTexNoOffset);
	u8* start = GDGetCurrPointer();
	if (mTexIndices[0] != 0xFFFF) {
		loadTexNo(0, mTexIndices[0]);
	}

	DCStoreRange(start, GDGetCurrPointer() - start);
}

/**
 * @note Address: 0x8007BF48
 * @note Size: 0x4
 */
void J3DTevBlock1::patchTevReg()
{
}

/**
 * @note Address: 0x8007BF4C
 * @note Size: 0xE4
 * patchTexNoAndTexCoordScale__12J3DTevBlock1Fv
 */
void J3DTevBlock1::patchTexNoAndTexCoordScale()
{
	GDSetCurrOffset(mTexNoOffset);
	u8* start = GDGetCurrPointer();

	if (mTexIndices[0] != 0xFFFF) {
		loadTexNo(0, mTexIndices[0]);
	}

	J3DGDSetTevOrder(GX_TEVSTAGE0, GXTexCoordID(mOrders[0].getTevOrderInfo().mTexCoordID),
	                 GXTexMapID(mOrders[0].getTevOrderInfo().mTexMapID), GXChannelID(mOrders[0].getTevOrderInfo().mChannelID),
	                 GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
	loadTexCoordScale(GXTexCoordID(mOrders[0].getTevOrderInfo().mTexCoordID),
	                  J3DSys::sTexCoordScaleTable[mOrders[0].getTevOrderInfo().mTexMapID & 7]);

	DCStoreRange(start, GDGetCurrPointer() - start);
}

/**
 * @note Address: 0x8007C030
 * @note Size: 0x2C
 * patch__12J3DTevBlock1Fv
 */
void J3DTevBlock1::patch()
{
	patchTexNo();
}

/**
 * @note Address: 0x8007C05C
 * @note Size: 0x94
 */
void J3DTevBlock2::patchTexNo()
{
	GDSetCurrOffset(mTexNoOffset);
	u8* start = GDGetCurrPointer();
	for (u32 i = 0; i < 2; i++) {
		if (mTexIndices[i] != 0xFFFF) {
			loadTexNo(i, mTexIndices[i]);
		}
	}

	DCStoreRange(start, GDGetCurrPointer() - start);
}

/**
 * @note Address: 0x8007C0F0
 * @note Size: 0xD0
 */
void J3DTevBlock2::patchTevReg()
{
	GDSetCurrOffset(mRegOffset);
	u8* start = GDGetCurrPointer();
	for (u32 i = 0; i < ARRAY_SIZE(mColors) - 1; i++) {
		J3DGDSetTevColorS10((GXTevRegID)(i + 1), mColors[i]);
	}
	for (u32 i = 0; i < ARRAY_SIZE(mKColors); i++) {
		J3DGDSetTevKColor((GXTevKColorID)i, mKColors[i]);
	}

	DCStoreRange(start, GDGetCurrPointer() - start);
}

/**
 * @note Address: 0x8007C1C0
 * @note Size: 0x15C
 */
void J3DTevBlock2::patchTexNoAndTexCoordScale()
{
	GDSetCurrOffset(mTexNoOffset);
	u8* start = GDGetCurrPointer();

	for (u32 i = 0; i < 2; i++) {
		if (mTexIndices[i] != 0xFFFF) {
			loadTexNo(i, mTexIndices[i]);
		}
	}

	J3DGDSetTevOrder(GX_TEVSTAGE0, GXTexCoordID(mOrders[0].getTevOrderInfo().mTexCoordID),
	                 GXTexMapID(mOrders[0].getTevOrderInfo().mTexMapID), GXChannelID(mOrders[0].getTevOrderInfo().mChannelID),
	                 GXTexCoordID(mOrders[1].getTevOrderInfo().mTexCoordID), GXTexMapID(mOrders[1].getTevOrderInfo().mTexMapID),
	                 GXChannelID(mOrders[1].getTevOrderInfo().mChannelID));
	loadTexCoordScale(GXTexCoordID(mOrders[0].getTevOrderInfo().mTexCoordID),
	                  J3DSys::sTexCoordScaleTable[mOrders[0].getTevOrderInfo().mTexMapID & 7]);
	loadTexCoordScale(GXTexCoordID(mOrders[1].getTevOrderInfo().mTexCoordID & 7),
	                  J3DSys::sTexCoordScaleTable[mOrders[1].getTevOrderInfo().mTexMapID & 7]);

	DCStoreRange(start, GDGetCurrPointer() - start);
}

/**
 * @note Address: 0x8007C31C
 * @note Size: 0x4C
 */
void J3DTevBlock2::patch()
{
	patchTexNo();
	patchTevReg();
}

/**
 * @note Address: 0x8007C368
 * @note Size: 0x94
 */
void J3DTevBlock4::patchTexNo()
{
	GDSetCurrOffset(mTexNoOffset);
	u8* start = GDGetCurrPointer();
	for (u32 i = 0; i < 4; i++) {
		if (mTexIndices[i] != 0xFFFF) {
			loadTexNo(i, mTexIndices[i]);
		}
	}

	DCStoreRange(start, GDGetCurrPointer() - start);
}

/**
 * @note Address: 0x8007C3FC
 * @note Size: 0xD0
 */
void J3DTevBlock4::patchTevReg()
{
	GDSetCurrOffset(mRegOffset);
	u8* start = GDGetCurrPointer();
	for (u32 i = 0; i < ARRAY_SIZE(mColors) - 1; i++) {
		J3DGDSetTevColorS10((GXTevRegID)(i + 1), mColors[i]);
	}
	for (u32 i = 0; i < ARRAY_SIZE(mKColors); i++) {
		J3DGDSetTevKColor((GXTevKColorID)i, mKColors[i]);
	}

	DCStoreRange(start, GDGetCurrPointer() - start);
}

/**
 * @note Address: 0x8007C4CC
 * @note Size: 0x16C
 */
void J3DTevBlock4::patchTexNoAndTexCoordScale()
{
	GDSetCurrOffset(mTexNoOffset);
	u8* start = GDGetCurrPointer();

	u8 tevStageNum = mStageNum;
	for (u32 i = 0; i < 8; i++) {
		if (mTexIndices[i] != 0xFFFF) {
			loadTexNo(i, mTexIndices[i]);
		}
	}

	for (u32 i = 0; i < tevStageNum; i += 2) {
		J3DGDSetTevOrder(GXTevStageID(i), GXTexCoordID(mOrders[i].getTevOrderInfo().mTexCoordID),
		                 GXTexMapID(mOrders[i].getTevOrderInfo().mTexMapID), GXChannelID(mOrders[i].getTevOrderInfo().mChannelID),
		                 GXTexCoordID(mOrders[i + 1].getTevOrderInfo().mTexCoordID), GXTexMapID(mOrders[i + 1].getTevOrderInfo().mTexMapID),
		                 GXChannelID(mOrders[i + 1].getTevOrderInfo().mChannelID));
		loadTexCoordScale(GXTexCoordID(mOrders[i].getTevOrderInfo().mTexCoordID & 7),
		                  J3DSys::sTexCoordScaleTable[mOrders[i].getTevOrderInfo().mTexMapID & 7]);
		loadTexCoordScale(GXTexCoordID(mOrders[i + 1].getTevOrderInfo().mTexCoordID & 7),
		                  J3DSys::sTexCoordScaleTable[mOrders[i + 1].getTevOrderInfo().mTexMapID & 7]);
	}

	DCStoreRange(start, GDGetCurrPointer() - start);
}

/**
 * @note Address: 0x8007C638
 * @note Size: 0x4C
 */
void J3DTevBlock4::patch()
{
	patchTexNo();
	patchTevReg();
}

/**
 * @note Address: 0x8007C684
 * @note Size: 0x94
 */
void J3DTevBlock16::patchTexNo()
{
	GDSetCurrOffset(mTexNoOffset);
	u8* start = GDGetCurrPointer();
	for (u32 i = 0; i < 8; i++) {
		if (mTexIndices[i] != 0xFFFF) {
			loadTexNo(i, mTexIndices[i]);
		}
	}

	DCStoreRange(start, GDGetCurrPointer() - start);
}

/**
 * @note Address: 0x8007C718
 * @note Size: 0xD0
 */
void J3DTevBlock16::patchTevReg()
{
	GDSetCurrOffset(mRegOffset);
	u8* start = GDGetCurrPointer();
	for (u32 i = 0; i < ARRAY_SIZE(mColors) - 1; i++) {
		J3DGDSetTevColorS10((GXTevRegID)(i + 1), mColors[i]);
	}
	for (u32 i = 0; i < ARRAY_SIZE(mKColors); i++) {
		J3DGDSetTevKColor((GXTevKColorID)i, mKColors[i]);
	}

	DCStoreRange(start, GDGetCurrPointer() - start);
}

/**
 * @note Address: 0x8007C7E8
 * @note Size: 0x16C
 */
void J3DTevBlock16::patchTexNoAndTexCoordScale()
{
	GDSetCurrOffset(mTexNoOffset);
	u8* start = GDGetCurrPointer();

	u8 tevStageNum = mStageNum;
	for (u32 i = 0; i < 8; i++) {
		if (mTexIndices[i] != 0xFFFF) {
			loadTexNo(i, mTexIndices[i]);
		}
	}

	for (u32 i = 0; i < tevStageNum; i += 2) {
		J3DGDSetTevOrder(GXTevStageID(i), GXTexCoordID(mOrders[i].getTevOrderInfo().mTexCoordID),
		                 GXTexMapID(mOrders[i].getTevOrderInfo().mTexMapID), GXChannelID(mOrders[i].getTevOrderInfo().mChannelID),
		                 GXTexCoordID(mOrders[i + 1].getTevOrderInfo().mTexCoordID), GXTexMapID(mOrders[i + 1].getTevOrderInfo().mTexMapID),
		                 GXChannelID(mOrders[i + 1].getTevOrderInfo().mChannelID));
		loadTexCoordScale(GXTexCoordID(mOrders[i].getTevOrderInfo().mTexCoordID & 7),
		                  J3DSys::sTexCoordScaleTable[mOrders[i].getTevOrderInfo().mTexMapID & 7]);
		loadTexCoordScale(GXTexCoordID(mOrders[i + 1].getTevOrderInfo().mTexCoordID & 7),
		                  J3DSys::sTexCoordScaleTable[mOrders[i + 1].getTevOrderInfo().mTexMapID & 7]);
	}

	DCStoreRange(start, GDGetCurrPointer() - start);
}

/**
 * @note Address: 0x8007C954
 * @note Size: 0x4C
 */
void J3DTevBlock16::patch()
{
	patchTexNo();
	patchTevReg();
}

/**
 * @note Address: 0x8007C9A0
 * @note Size: 0xBC
 */
void J3DTevBlock::diff(u32 flag)
{
	if ((flag >> 16) & 0xF) {
		diffTexNo();
	}

	if (flag & J3DMDF_DiffTexCoordScale) {
		diffTexCoordScale();
	}

	if ((flag >> 20) & 0xF) {
		diffTevStage();
		if (flag & J3DMDF_DiffTevStageIndirect) {
			diffTevStageIndirect();
		}
	}

	if (flag & J3DMDF_DiffColorReg) {
		diffTevReg();
	}
}

/**
 * @note Address: 0x8007CA5C
 * @note Size: 0x5C
 */
void J3DTevBlockPatched::diffTexNo()
{
	for (u32 i = 0; i < 8; i++) {
		if (mTexIndices[i] != 0xFFFF) {
			loadTexNo(i, mTexIndices[i]);
		}
	}
}

/**
 * @note Address: 0x8007CAB8
 * @note Size: 0x108
 */
void J3DTevBlockPatched::diffTevStage()
{
	u8 tevStageNum = mStageNum;
	for (u32 i = 0; i < tevStageNum; i++) {
		mStages[i].load(i);
	}
}

/**
 * @note Address: 0x8007CBC0
 * @note Size: 0xA8
 */
void J3DTevBlockPatched::diffTevStageIndirect()
{
	u8 tevStageNum = mStageNum;
	for (u32 i = 0; i < tevStageNum; i++) {
		mIndStages[i].load(i);
	}
}

/**
 * @note Address: 0x8007CC68
 * @note Size: 0x98
 */
void J3DTevBlockPatched::diffTevReg()
{
	for (u32 i = 0; i < ARRAY_SIZE(mColors) - 1; i++) {
		J3DGDSetTevColorS10((GXTevRegID)(i + 1), mColors[i]);
	}
	for (u32 i = 0; i < ARRAY_SIZE(mKColors); i++) {
		J3DGDSetTevKColor((GXTevKColorID)i, mKColors[i]);
	}
}

/**
 * @note Address: 0x8007CD00
 * @note Size: 0xEC
 */
void J3DTevBlockPatched::diffTexCoordScale()
{
	u8 tevStageNum = mStageNum;
	for (u32 i = 0; i < tevStageNum; i += 2) {
		loadTexCoordScale(GXTexCoordID(mOrders[i].getTevOrderInfo().mTexCoordID & 7),
		                  J3DSys::sTexCoordScaleTable[mOrders[i].getTevOrderInfo().mTexMapID & 7]);
		loadTexCoordScale(GXTexCoordID(mOrders[i + 1].getTevOrderInfo().mTexCoordID & 7),
		                  J3DSys::sTexCoordScaleTable[mOrders[i + 1].getTevOrderInfo().mTexMapID & 7]);
	}
}

/**
 * @note Address: 0x8007CDEC
 * @note Size: 0x34
 */
void J3DTevBlock1::diffTexNo()
{
	for (u32 i = 0; i < 1; i++) {
		if (mTexIndices[i] != 0xFFFF) {
			loadTexNo(i, mTexIndices[i]);
		}
	}
}

/**
 * @note Address: 0x8007CE20
 * @note Size: 0x4
 */
void J3DTevBlock1::diffTevReg()
{
}

/**
 * @note Address: 0x8007CE24
 * @note Size: 0xF0
 */
void J3DTevBlock1::diffTevStage()
{
	for (u32 i = 0; i < 1; i++) {
		mStages[i].load(0);
	}
}

/**
 * @note Address: 0x8007CF14
 * @note Size: 0x80
 */
void J3DTevBlock1::diffTevStageIndirect()
{
	for (u32 i = 0; i < 1; i++) {
		mIndStages[i].load(0);
	}
}

/**
 * @note Address: 0x8007CF94
 * @note Size: 0x68
 */
void J3DTevBlock1::diffTexCoordScale()
{
	for (u32 i = 0; i < 1; i++) {
		loadTexCoordScale(GXTexCoordID(mOrders[0].getTevOrderInfo().mTexCoordID),
		                  J3DSys::sTexCoordScaleTable[mOrders[0].getTevOrderInfo().mTexMapID & 7]);
	}
}

/**
 * @note Address: 0x8007CFFC
 * @note Size: 0x5C
 */
void J3DTevBlock2::diffTexNo()
{
	for (u32 i = 0; i < 2; i++) {
		if (mTexIndices[i] != 0xFFFF) {
			loadTexNo(i, mTexIndices[i]);
		}
	}
}

/**
 * @note Address: 0x8007D058
 * @note Size: 0x98
 */
void J3DTevBlock2::diffTevReg()
{
	for (u32 i = 0; i < ARRAY_SIZE(mColors) - 1; i++) {
		J3DGDSetTevColorS10((GXTevRegID)(i + 1), mColors[i]);
	}
	for (u32 i = 0; i < ARRAY_SIZE(mKColors); i++) {
		J3DGDSetTevKColor((GXTevKColorID)i, mKColors[i]);
	}
}

/**
 * @note Address: 0x8007D0F0
 * @note Size: 0x108
 */
void J3DTevBlock2::diffTevStage()
{
	u8 tevStageNum = mStageNum;
	for (u32 i = 0; i < tevStageNum; i++) {
		mStages[i].load(i);
	}
}

/**
 * @note Address: 0x8007D1F8
 * @note Size: 0xA8
 */
void J3DTevBlock2::diffTevStageIndirect()
{
	u8 tevStageNum = mStageNum;
	for (u32 i = 0; i < tevStageNum; i++) {
		mIndStages[i].load(i);
	}
}

/**
 * @note Address: 0x8007D2A0
 * @note Size: 0xC4
 */
void J3DTevBlock2::diffTexCoordScale()
{
	loadTexCoordScale(GXTexCoordID(mOrders[0].getTevOrderInfo().mTexCoordID),
	                  J3DSys::sTexCoordScaleTable[mOrders[0].getTevOrderInfo().mTexMapID & 7]);
	loadTexCoordScale(GXTexCoordID(mOrders[1].getTevOrderInfo().mTexCoordID & 7),
	                  J3DSys::sTexCoordScaleTable[mOrders[1].getTevOrderInfo().mTexMapID & 7]);
}

/**
 * @note Address: 0x8007D364
 * @note Size: 0x5C
 */
void J3DTevBlock4::diffTexNo()
{
	for (u32 i = 0; i < 4; i++) {
		if (mTexIndices[i] != 0xFFFF) {
			loadTexNo(i, mTexIndices[i]);
		}
	}
}

/**
 * @note Address: 0x8007D3C0
 * @note Size: 0x98
 */
void J3DTevBlock4::diffTevReg()
{
	for (u32 i = 0; i < ARRAY_SIZE(mColors) - 1; i++) {
		J3DGDSetTevColorS10((GXTevRegID)(i + 1), mColors[i]);
	}
	for (u32 i = 0; i < ARRAY_SIZE(mKColors); i++) {
		J3DGDSetTevKColor((GXTevKColorID)i, mKColors[i]);
	}
}

/**
 * @note Address: 0x8007D458
 * @note Size: 0x108
 */
void J3DTevBlock4::diffTevStage()
{
	u8 tevStageNum = mStageNum;
	for (u32 i = 0; i < tevStageNum; i++) {
		mStages[i].load(i);
	}
}

/**
 * @note Address: 0x8007D560
 * @note Size: 0xA8
 */
void J3DTevBlock4::diffTevStageIndirect()
{
	u8 tevStageNum = mStageNum;
	for (u32 i = 0; i < tevStageNum; i++) {
		mIndStages[i].load(i);
	}
}

/**
 * @note Address: 0x8007D608
 * @note Size: 0xEC
 */
void J3DTevBlock4::diffTexCoordScale()
{
	u8 tevStageNum = mStageNum;
	for (u32 i = 0; i < tevStageNum; i += 2) {
		loadTexCoordScale(GXTexCoordID(mOrders[i].getTevOrderInfo().mTexCoordID & 7),
		                  J3DSys::sTexCoordScaleTable[mOrders[i].getTevOrderInfo().mTexMapID & 7]);
		loadTexCoordScale(GXTexCoordID(mOrders[i + 1].getTevOrderInfo().mTexCoordID & 7),
		                  J3DSys::sTexCoordScaleTable[mOrders[i + 1].getTevOrderInfo().mTexMapID & 7]);
	}
}

/**
 * @note Address: 0x8007D6F4
 * @note Size: 0x5C
 */
void J3DTevBlock16::diffTexNo()
{
	for (u32 i = 0; i < 8; i++) {
		if (mTexIndices[i] != 0xFFFF) {
			loadTexNo(i, mTexIndices[i]);
		}
	}
}

/**
 * @note Address: 0x8007D750
 * @note Size: 0x98
 */
void J3DTevBlock16::diffTevReg()
{
	for (u32 i = 0; i < ARRAY_SIZE(mColors) - 1; i++) {
		J3DGDSetTevColorS10((GXTevRegID)(i + 1), mColors[i]);
	}
	for (u32 i = 0; i < ARRAY_SIZE(mKColors); i++) {
		J3DGDSetTevKColor((GXTevKColorID)i, mKColors[i]);
	}
}

/**
 * @note Address: 0x8007D7E8
 * @note Size: 0x108
 */
void J3DTevBlock16::diffTevStage()
{
	u8 tevStageNum = mStageNum;
	for (u32 i = 0; i < tevStageNum; i++) {
		mStages[i].load(i);
	}
}

/**
 * @note Address: 0x8007D8F0
 * @note Size: 0xA8
 */
void J3DTevBlock16::diffTevStageIndirect()
{
	u8 tevStageNum = mStageNum;
	for (u32 i = 0; i < tevStageNum; i++) {
		mIndStages[i].load(i);
	}
}

/**
 * @note Address: 0x8007D998
 * @note Size: 0xEC
 */
void J3DTevBlock16::diffTexCoordScale()
{
	u8 tevStageNum = mStageNum;
	for (u32 i = 0; i < tevStageNum; i += 2) {
		loadTexCoordScale(GXTexCoordID(mOrders[i].getTevOrderInfo().mTexCoordID & 7),
		                  J3DSys::sTexCoordScaleTable[mOrders[i].getTevOrderInfo().mTexMapID & 7]);
		loadTexCoordScale(GXTexCoordID(mOrders[i + 1].getTevOrderInfo().mTexCoordID & 7),
		                  J3DSys::sTexCoordScaleTable[mOrders[i + 1].getTevOrderInfo().mTexMapID & 7]);
	}
}

/**
 * @note Address: 0x8007DA84
 * @note Size: 0xD4
 */
void J3DTevBlock16::ptrToIndex()
{
	GDSetCurrOffset(mTexNoOffset);
	u8* start = GDGetCurrPointer();

	u32 offs = 0;
	for (u32 i = 0; i < 8; i++) {
		if (mTexIndices[i] != 0xFFFF) {
			GDSetCurrOffset(mTexNoOffset + offs);
			patchTexNo_PtrToIdx(i, mTexIndices[i]);
			offs += 0x14;
			if (j3dSys.getTexture()->getResTIMG(mTexIndices[i])->mPaletteFormat == 1) {
				offs += 0x23;
			}
		}
	}

	DCStoreRange(start, GDGetCurrPointer() - start);
}

/**
 * @note Address: 0x8007DB58
 * @note Size: 0xD4
 */
void J3DTevBlockPatched::ptrToIndex()
{
	GDSetCurrOffset(mTexNoOffset);
	u8* start = GDGetCurrPointer();

	u32 offs = 0;
	for (u32 i = 0; i < 8; i++) {
		if (mTexIndices[i] != 0xFFFF) {
			GDSetCurrOffset(mTexNoOffset + offs);
			patchTexNo_PtrToIdx(i, mTexIndices[i]);
			offs += 0x14;
			if (j3dSys.getTexture()->getResTIMG(mTexIndices[i])->mPaletteFormat == 1) {
				offs += 0x23;
			}
		}
	}

	DCStoreRange(start, GDGetCurrPointer() - start);
}

/**
 * @note Address: 0x8007DC2C
 * @note Size: 0x9C
 */
void J3DTevBlock::indexToPtr_private(u32 offs)
{
	GDSetCurrOffset(offs);
	u8* start = GDGetCurrPointer();

	for (u32 i = 0;; i++) {
		u8* currPtr = GDGetCurrPointer();
		if (!isTexNoReg(currPtr)) {
			break;
		}

		u16 texNoReg = getTexNoReg(currPtr);
		loadTexNo(i, texNoReg);
	}

	DCStoreRange(start, GDGetCurrPointer() - start);
}

/**
 * @note Address: 0x8007DCC8
 * @note Size: 0x200
 */
void J3DIndBlockFull::load()
{
	u8 indTexStageNum = mIndTexStageNum;
	for (u32 i = 0; i < indTexStageNum; i++) {
		mTexMtxs[i].load(i);
	}
	for (u32 i = 0; i < indTexStageNum; i += 2) {
		J3DGDSetIndTexCoordScale(GXIndTexStageID(i), GXIndTexScale(mCoordScales[i].getScaleS()), GXIndTexScale(mCoordScales[i].getScaleT()),
		                         GXIndTexScale(mCoordScales[i + 1].getScaleS()), GXIndTexScale(mCoordScales[i + 1].getScaleT()));
	}
	loadTexCoordScale(GXTexCoordID(mOrders[0].mTexCoordID), J3DSys::sTexCoordScaleTable[mOrders[0].mTexMapID & 7]);
	loadTexCoordScale(GXTexCoordID(mOrders[1].mTexCoordID), J3DSys::sTexCoordScaleTable[mOrders[1].mTexMapID & 7]);
	loadTexCoordScale(GXTexCoordID(mOrders[2].mTexCoordID), J3DSys::sTexCoordScaleTable[mOrders[2].mTexMapID & 7]);
	loadTexCoordScale(GXTexCoordID(mOrders[3].mTexCoordID), J3DSys::sTexCoordScaleTable[mOrders[3].mTexMapID & 7]);
	J3DGDSetIndTexOrder(indTexStageNum, GXTexCoordID(mOrders[0].mTexCoordID), GXTexMapID(mOrders[0].mTexMapID),
	                    GXTexCoordID(mOrders[1].mTexCoordID), GXTexMapID(mOrders[1].mTexMapID), GXTexCoordID(mOrders[2].mTexCoordID),
	                    GXTexMapID(mOrders[2].mTexMapID), GXTexCoordID(mOrders[3].mTexCoordID), GXTexMapID(mOrders[3].mTexMapID));
}

/**
 * @note Address: 0x8007DEC8
 * @note Size: 0xDC
 */
void J3DIndBlockFull::diff(u32 flag)
{
	if (!(flag & J3DMDF_DiffTevStageIndirect)) {
		return;
	}
	u8 indTexStageNum = mIndTexStageNum;
	mTexMtxs[0].load(0);
	J3DGDSetIndTexCoordScale(GXIndTexStageID(0), GXIndTexScale(mCoordScales[0].getScaleS()), GXIndTexScale(mCoordScales[0].getScaleT()),
	                         GXIndTexScale(mCoordScales[1].getScaleS()), GXIndTexScale(mCoordScales[1].getScaleT()));
	loadTexCoordScale(GXTexCoordID(mOrders[0].mTexCoordID), J3DSys::sTexCoordScaleTable[mOrders[0].mTexMapID & 7]);
	J3DGDSetIndTexOrder(indTexStageNum, GXTexCoordID(mOrders[0].mTexCoordID), GXTexMapID(mOrders[0].mTexMapID),
	                    GXTexCoordID(mOrders[1].mTexCoordID), GXTexMapID(mOrders[1].mTexMapID), GXTexCoordID(mOrders[2].mTexCoordID),
	                    GXTexMapID(mOrders[2].mTexMapID), GXTexCoordID(mOrders[3].mTexCoordID), GXTexMapID(mOrders[3].mTexMapID));
}

/**
 * @note Address: 0x8007DFA4
 * @note Size: 0x2C8
 */
void J3DPEBlockOpa::load()
{
	GDOverflowCheck(0x1E);
	J3DGDSetAlphaCompare(GX_ALWAYS, 0, GX_AOP_AND, GX_ALWAYS, 0);
	J3DGDSetBlendMode(GX_BM_NONE, GX_BL_ONE, GX_BL_ZERO, GX_LO_COPY);
	J3DGDSetZMode(GX_TRUE, GX_LEQUAL, GX_TRUE);
	J3DGDSetZCompLoc(GX_TRUE);
}

/**
 * @note Address: 0x8007E26C
 * @note Size: 0x2E0
 */
void J3DPEBlockTexEdge::load()
{
	GDOverflowCheck(0x1E);
	J3DGDSetAlphaCompare(GX_GEQUAL, 128, GX_AOP_AND, GX_LEQUAL, 255);
	J3DGDSetBlendMode(GX_BM_NONE, GX_BL_ONE, GX_BL_ZERO, GX_LO_COPY);
	J3DGDSetZMode(GX_TRUE, GX_LEQUAL, GX_TRUE);
	J3DGDSetZCompLoc(GX_FALSE);
}

/**
 * @note Address: 0x8007E54C
 * @note Size: 0x2D4
 */
void J3DPEBlockXlu::load()
{
	GDOverflowCheck(0x1E);
	J3DGDSetAlphaCompare(GX_ALWAYS, 0, GX_AOP_AND, GX_ALWAYS, 0);
	J3DGDSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_COPY);
	J3DGDSetZMode(GX_TRUE, GX_LEQUAL, GX_FALSE);
	J3DGDSetZCompLoc(GX_TRUE);
}

/**
 * @note Address: 0x8007E820
 * @note Size: 0x49C
 */
void J3DPEBlockFogOff::load()
{
	GDOverflowCheck(0x1E);
	J3DGDSetAlphaCompare((GXCompare)mAlphaComp.getComp0(), mAlphaComp.mRef0, (GXAlphaOp)mAlphaComp.getOp(),
	                     (GXCompare)mAlphaComp.getComp1(), mAlphaComp.mRef1);
	mBlend.load(mDither);
	mZMode.load();
	loadZCompLoc(mZCompLoc);
}

/**
 * @note Address: 0x8007ECBC
 * @note Size: 0x2F8
 */
void J3DPEBlockFogOff::diffBlend()
{
	GDOverflowCheck(0xF);
	mBlend.load(mDither);
	mZMode.load();
}

/**
 * @note Address: 0x8007EFB4
 * @note Size: 0x4E4
 */
void J3DPEBlockFull::load()
{
	mFogOffset = GDGetCurrOffset();
	GDOverflowCheck(0x55);
	mFog.load();
	J3DGDSetAlphaCompare((GXCompare)mAlphaComp.getComp0(), mAlphaComp.mRef0, (GXAlphaOp)mAlphaComp.getOp(),
	                     (GXCompare)mAlphaComp.getComp1(), mAlphaComp.mRef1);
	mBlend.load(mDither);
	mZMode.load();
	loadZCompLoc(mZCompLoc);
}

/**
 * @note Address: 0x8007F498
 * @note Size: 0xB0
 */
void J3DPEBlockFull::patch()
{
	GDSetCurrOffset(mFogOffset);
	GDOverflowCheck(0x37);
	u8* start = GDGetCurrPointer();
	mFog.load();
	DCStoreRange(start, GDGetCurrPointer() - start);
}

/**
 * @note Address: 0x8007F548
 * @note Size: 0x78
 */
void J3DPEBlockFull::diffFog()
{
	GDOverflowCheck(0x37);
	mFog.load();
}

/**
 * @note Address: 0x8007F5C0
 * @note Size: 0x2F8
 */
void J3DPEBlockFull::diffBlend()
{
	GDOverflowCheck(0xF);
	mBlend.load(mDither);
	mZMode.load();
}

/**
 * @note Address: 0x8007F8B8
 * @note Size: 0x68
 */
void J3DPEBlockFull::diff(u32 flag)
{
	if (flag & J3DMDF_DiffFog) {
		diffFog();
	}
	if (flag & J3DMDF_DiffBlend) {
		diffBlend();
	}
}

/**
 * @note Address: 0x8007F920
 * @note Size: 0xE4
 */
void J3DColorBlockLightOff::reset(J3DColorBlock* block)
{
	mColorChannelNum = block->getColorChanNum();

	for (u32 i = 0; i < ARRAY_SIZE(mMaterialColors); i++) {
		mMaterialColors[i] = *block->getMatColor(i);
	}
	for (u32 i = 0; i < ARRAY_SIZE(mColorChannels); i++) {
		mColorChannels[i] = *block->getColorChan(i);
	}
}

/**
 * @note Address: 0x8007FA04
 * @note Size: 0x154
 */
void J3DColorBlockAmbientOn::reset(J3DColorBlock* block)
{
	mColorChannelNum = block->getColorChanNum();

	for (u32 i = 0; i < ARRAY_SIZE(mMaterialColors); i++) {
		mMaterialColors[i] = *block->getMatColor(i);
	}
	for (u32 i = 0; i < ARRAY_SIZE(mColorChannels); i++) {
		mColorChannels[i] = *block->getColorChan(i);
	}
	for (u32 i = 0; i < ARRAY_SIZE(mAmbientColors); i++) {
		if (block->getAmbColor(i)) {
			mAmbientColors[i] = *block->getAmbColor(i);
		}
	}
}

/**
 * @note Address: 0x8007FB58
 * @note Size: 0x154
 */
void J3DColorBlockLightOn::reset(J3DColorBlock* block)
{
	mColorChannelNum = block->getColorChanNum();

	for (u32 i = 0; i < ARRAY_SIZE(mMaterialColors); i++) {
		mMaterialColors[i] = *block->getMatColor(i);
	}
	for (u32 i = 0; i < ARRAY_SIZE(mColorChannels); i++) {
		mColorChannels[i] = *block->getColorChan(i);
	}
	for (u32 i = 0; i < ARRAY_SIZE(mAmbientColors); i++) {
		if (block->getAmbColor(i)) {
			mAmbientColors[i] = *block->getAmbColor(i);
		}
	}
}

/**
 * @note Address: 0x8007FCAC
 * @note Size: 0x11C
 */
void J3DTexGenBlockPatched::reset(J3DTexGenBlock* block)
{
	mTexGenCnt = block->getTexGenNum();
	for (u32 i = 0; i < 8; i++)
		mTexCoords[i] = *block->getTexCoord(i);
	for (u32 i = 0; i < 8; i++) {
		if (block->getTexMtx(i)) {
			if (mTexMatrices[i]) {
				memcpy(mTexMatrices[i], block->getTexMtx(i), sizeof(*mTexMatrices[i]));
				DCStoreRange(mTexMatrices[i], sizeof(*mTexMatrices[i]));
			}
		}
	}
}

/**
 * @note Address: 0x8007FDC8
 * @note Size: 0x150
 */
void J3DTexGenBlock4::reset(J3DTexGenBlock* block)
{
	mTexGenCnt = block->getTexGenNum();
	for (u32 i = 0; i < 4; i++)
		mTexCoords[i] = *block->getTexCoord(i);
	for (u32 i = 0; i < 4; i++) {
		if (block->getTexMtx(i)) {
			if (mTexMatrices[i]) {
				memcpy(mTexMatrices[i], block->getTexMtx(i), sizeof(*mTexMatrices[i]));
				DCStoreRange(mTexMatrices[i], sizeof(*mTexMatrices[i]));
			}
		}
	}

	mNbtScale = *block->getNBTScale();
}

/**
 * @note Address: 0x8007FF18
 * @note Size: 0x150
 */
void J3DTexGenBlockBasic::reset(J3DTexGenBlock* block)
{
	mTexGenCnt = block->getTexGenNum();
	for (u32 i = 0; i < 8; i++)
		mTexCoords[i] = *block->getTexCoord(i);
	for (u32 i = 0; i < 8; i++) {
		if (block->getTexMtx(i)) {
			if (mTexMatrices[i]) {
				memcpy(mTexMatrices[i], block->getTexMtx(i), sizeof(*mTexMatrices[i]));
				DCStoreRange(mTexMatrices[i], sizeof(*mTexMatrices[i]));
			}
		}
	}

	mNbtScale = *block->getNBTScale();
}

/**
 * @note Address: 0x80080068
 * @note Size: 0x1B8
 */
void J3DTevBlockPatched::reset(J3DTevBlock* block)
{
	mStageNum = block->getTevStageNum();
	for (u32 i = 0; i < 8; i++) {
		mTexIndices[i] = block->getTexNo(i);
	}
	for (u32 i = 0; i < 4; i++) {
		mColors[i] = *block->getTevColor(i);
	}
	for (u32 i = 0; i < 4; i++) {
		mKColors[i] = *block->getTevKColor(i);
	}
	for (u32 i = 0; i < 8; i++) {
		mStages[i]    = *block->getTevStage(i);
		mIndStages[i] = *block->getIndTevStage(i);
	}
}

/**
 * @note Address: 0x80080220
 * @note Size: 0xE8
 */
void J3DTevBlock1::reset(J3DTevBlock* block)
{
	mTexIndices[0] = block->getTexNo(0);
	mOrders[0]     = *block->getTevOrder(0);
	mStages[0]     = *block->getTevStage(0);
	mIndStages[0]  = *block->getIndTevStage(0);
}

/**
 * @note Address: 0x80080308
 * @note Size: 0x308
 */
void J3DTevBlock2::reset(J3DTevBlock* block)
{
	mStageNum      = block->getTevStageNum();
	mTexIndices[0] = block->getTexNo(0);
	mTexIndices[1] = block->getTexNo(1);
	mStages[0]     = *block->getTevStage(0);
	mStages[1]     = *block->getTevStage(1);
	mIndStages[0]  = *block->getIndTevStage(0);
	mIndStages[1]  = *block->getIndTevStage(1);
	mOrders[0]     = *block->getTevOrder(0);
	mOrders[1]     = *block->getTevOrder(1);
	mKColorSels[0] = block->getTevKColorSel(0);
	mKColorSels[1] = block->getTevKColorSel(1);
	mKAlphaSels[0] = block->getTevKAlphaSel(0);
	mKAlphaSels[1] = block->getTevKAlphaSel(1);
	for (u32 i = 0; i < 4; i++) {
		mColors[i] = *block->getTevColor(i);
	}
	for (u32 i = 0; i < 4; i++) {
		mKColors[i] = *block->getTevKColor(i);
	}
	for (u32 i = 0; i < 4; i++) {
		mSwapModeTables[i] = *block->getTevSwapModeTable(i);
	}
}

/**
 * @note Address: 0x80080610
 * @note Size: 0x4E0
 */
void J3DTevBlock4::reset(J3DTevBlock* block)
{
	mStageNum      = block->getTevStageNum();
	mTexIndices[0] = block->getTexNo(0);
	mTexIndices[1] = block->getTexNo(1);
	mTexIndices[2] = block->getTexNo(2);
	mTexIndices[3] = block->getTexNo(3);
	mStages[0]     = *block->getTevStage(0);
	mStages[1]     = *block->getTevStage(1);
	mStages[2]     = *block->getTevStage(2);
	mStages[3]     = *block->getTevStage(3);
	mIndStages[0]  = *block->getIndTevStage(0);
	mIndStages[1]  = *block->getIndTevStage(1);
	mIndStages[2]  = *block->getIndTevStage(2);
	mIndStages[3]  = *block->getIndTevStage(3);
	mOrders[0]     = *block->getTevOrder(0);
	mOrders[1]     = *block->getTevOrder(1);
	mOrders[2]     = *block->getTevOrder(2);
	mOrders[3]     = *block->getTevOrder(3);
	mKColorSels[0] = block->getTevKColorSel(0);
	mKColorSels[1] = block->getTevKColorSel(1);
	mKColorSels[2] = block->getTevKColorSel(2);
	mKColorSels[3] = block->getTevKColorSel(3);
	mKAlphaSels[0] = block->getTevKAlphaSel(0);
	mKAlphaSels[1] = block->getTevKAlphaSel(1);
	mKAlphaSels[2] = block->getTevKAlphaSel(2);
	mKAlphaSels[3] = block->getTevKAlphaSel(3);
	for (u32 i = 0; i < 4; i++) {
		mColors[i] = *block->getTevColor(i);
	}
	for (u32 i = 0; i < 4; i++) {
		mKColors[i] = *block->getTevKColor(i);
	}
	for (u32 i = 0; i < 4; i++) {
		mSwapModeTables[i] = *block->getTevSwapModeTable(i);
	}
}

/**
 * @note Address: 0x80080AF0
 * @note Size: 0x27C
 */
void J3DTevBlock16::reset(J3DTevBlock* block)
{
	mStageNum = block->getTevStageNum();
	for (u32 i = 0; i < 8; i++) {
		mTexIndices[i] = block->getTexNo(i);
	}
	for (u32 i = 0; i < 0x10; i++) {
		mOrders[i] = *block->getTevOrder(i);
	}
	for (u32 i = 0; i < 0x10; i++) {
		mStages[i]    = *block->getTevStage(i);
		mIndStages[i] = *block->getIndTevStage(i);
	}
	for (u32 i = 0; i < 4; i++) {
		mColors[i] = *block->getTevColor(i);
	}
	for (u32 i = 0; i < 4; i++) {
		mKColors[i] = *block->getTevKColor(i);
	}
	for (u32 i = 0; i < 0x10; i++) {
		mKColorSels[i] = block->getTevKColorSel(i);
	}
	for (u32 i = 0; i < 0x10; i++) {
		mKAlphaSels[i] = block->getTevKAlphaSel(i);
	}
	for (u32 i = 0; i < 4; i++) {
		mSwapModeTables[i] = *block->getTevSwapModeTable(i);
	}
}

/**
 * @note Address: 0x80080D6C
 * @note Size: 0x144
 */
void J3DIndBlockFull::reset(J3DIndBlock* block)
{
	mIndTexStageNum = block->getIndTexStageNum();
	for (u32 i = 0; i < 4; i++) {
		mOrders[i] = *block->getIndTexOrder(i);
	}
	for (u32 i = 0; i < 3; i++) {
		mTexMtxs[i] = *block->getIndTexMtx(i);
	}
	for (u32 i = 0; i < 4; i++) {
		mCoordScales[i] = *block->getIndTexCoordScale(i);
	}
}

/**
 * @note Address: 0x80080EB0
 * @note Size: 0x100
 */
void J3DPEBlockFogOff::reset(J3DPEBlock* block)
{
	switch (block->getType()) {
	case 'PEFL':
	case 'PEFG':
		mAlphaComp = *block->getAlphaComp();
		mBlend     = *block->getBlend();
		mZMode     = *block->getZMode();
		mZCompLoc  = block->getZCompLoc();
		break;
	}
}

/**
 * @note Address: 0x80080FB0
 * @note Size: 0x1D8
 */
void J3DPEBlockFull::reset(J3DPEBlock* block)
{
	if (block->getFog()) {
		mFog = *block->getFog();
	}

	switch (block->getType()) {
	case 'PEFL':
	case 'PEFG':
		mAlphaComp = *block->getAlphaComp();
		mBlend     = *block->getBlend();
		mZMode     = *block->getZMode();
		mZCompLoc  = block->getZCompLoc();
		break;
	}
}

/**
 * @note Address: 0x80081188
 * @note Size: 0x1B0
 */
void J3DTexGenBlockPatched::calc(const Mtx modelMtx)
{
	Mtx viewMtx;
	for (int i = 0; i < 8; i++) {
		if (!mTexMatrices[i]) {
			continue;
		}

		u32 mode = mTexMatrices[i]->getTexMtxInfo().mInfo & 0x3F;
		mTexCoords[i].resetTexMtxReg();

		switch (mode) {
		case J3DTEXMTX_EnvmapOld:
		case J3DTEXMTX_Envmap:
		case J3DTEXMTX_EnvmapBasic: {
			if (!j3dSys.checkFlag(J3DSysFlag_SkinNrmCpu)) {
				PSMTXConcat(*j3dSys.getViewMtx(), modelMtx, viewMtx);
			} else {
				PSMTXCopy(*j3dSys.getViewMtx(), viewMtx);
			}
			viewMtx[0][3] = 0.0f;
			viewMtx[1][3] = 0.0f;
			viewMtx[2][3] = 0.0f;
			mTexMatrices[i]->calc(viewMtx);
		} break;

		case J3DTEXMTX_Projmap:
		case J3DTEXMTX_ProjmapBasic: {
			if (!j3dSys.checkFlag(J3DSysFlag_SkinPosCpu)) {
				mTexMatrices[i]->calc(modelMtx);
			} else {
				mTexMatrices[i]->calc(j3dDefaultMtx);
			}
		} break;

		case J3DTEXMTX_ViewProjmap:
		case J3DTEXMTX_ViewProjmapBasic: {
			if (!j3dSys.checkFlag(J3DSysFlag_SkinPosCpu)) {
				PSMTXConcat(*j3dSys.getViewMtx(), modelMtx, viewMtx);
				mTexMatrices[i]->calc(viewMtx);
			} else {
				mTexMatrices[i]->calc(*j3dSys.getViewMtx());
			}
		} break;

		case J3DTEXMTX_EnvmapOldEffectMtx:
		case J3DTEXMTX_EnvmapEffectMtx:
		case J3DTEXMTX_Unknown5: {
			if (!j3dSys.checkFlag(J3DSysFlag_SkinNrmCpu)) {
				PSMTXCopy(modelMtx, viewMtx);
				viewMtx[0][3] = 0.0f;
				viewMtx[1][3] = 0.0f;
				viewMtx[2][3] = 0.0f;
				mTexMatrices[i]->calc(viewMtx);
			} else {
				mTexMatrices[i]->calc(j3dDefaultMtx);
			}
		} break;

		default:
			mTexMatrices[i]->calc(j3dDefaultMtx);
			break;
		}
	}
}

/**
 * @note Address: 0x80081338
 * @note Size: 0x140
 */
void J3DTexGenBlockPatched::calcWithoutViewMtx(const Mtx modelMtx)
{
	Mtx viewMtx;
	for (int i = 0; i < 8; i++) {
		if (!mTexMatrices[i]) {
			continue;
		}

		u32 mode = mTexMatrices[i]->getTexMtxInfo().mInfo & 0x3F;
		mTexCoords[i].resetTexMtxReg();

		switch (mode) {
		case J3DTEXMTX_EnvmapOld:
		case J3DTEXMTX_Envmap:
		case J3DTEXMTX_EnvmapBasic: {
			mTexMatrices[i]->calc(j3dDefaultMtx);
		} break;

		case J3DTEXMTX_Projmap:
		case J3DTEXMTX_ProjmapBasic: {
			if (!j3dSys.checkFlag(J3DSysFlag_SkinPosCpu)) {
				mTexMatrices[i]->calc(modelMtx);
			} else {
				mTexMatrices[i]->calc(j3dDefaultMtx);
			}
		} break;

		case J3DTEXMTX_ViewProjmap:
		case J3DTEXMTX_ViewProjmapBasic: {
			mTexMatrices[i]->calc(j3dDefaultMtx);
		} break;

		case J3DTEXMTX_EnvmapOldEffectMtx:
		case J3DTEXMTX_EnvmapEffectMtx:
		case J3DTEXMTX_Unknown5: {
			if (!j3dSys.checkFlag(J3DSysFlag_SkinNrmCpu)) {
				PSMTXCopy(modelMtx, viewMtx);
				viewMtx[0][3] = 0.0f;
				viewMtx[1][3] = 0.0f;
				viewMtx[2][3] = 0.0f;
				mTexMatrices[i]->calc(viewMtx);
			} else {
				mTexMatrices[i]->calc(j3dDefaultMtx);
			}
		} break;

		default:
			mTexMatrices[i]->calc(j3dDefaultMtx);
			break;
		}
	}
}

/**
 * @note Address: 0x80081478
 * @note Size: 0x140
 */
void J3DTexGenBlockPatched::calcPostTexMtx(const Mtx modelMtx)
{
	for (int i = 0; i < 8; i++) {
		if (!mTexMatrices[i]) {
			continue;
		}

		u32 mode = mTexMatrices[i]->getTexMtxInfo().mInfo & 0x3F;
		mTexCoords[i].resetTexMtxReg();

		switch (mode) {
		case J3DTEXMTX_EnvmapOld:
		case J3DTEXMTX_Envmap:
		case J3DTEXMTX_EnvmapBasic: {
			mTexCoords[i].mTexMtxReg = 0x1E;
			mTexMatrices[i]->calcPostTexMtx(j3dDefaultMtx);
		} break;

		case J3DTEXMTX_Projmap:
		case J3DTEXMTX_ProjmapBasic: {
			Mtx invMtx;
			PSMTXInverse(*j3dSys.getViewMtx(), invMtx);
			mTexCoords[i].mTexMtxReg = 0;
			mTexMatrices[i]->calcPostTexMtx(invMtx);
		} break;

		case J3DTEXMTX_ViewProjmap:
		case J3DTEXMTX_ViewProjmapBasic: {
			mTexCoords[i].mTexMtxReg = 0;
			mTexMatrices[i]->calcPostTexMtx(j3dDefaultMtx);
		} break;

		case J3DTEXMTX_EnvmapOldEffectMtx:
		case J3DTEXMTX_EnvmapEffectMtx:
		case J3DTEXMTX_Unknown5: {
			Mtx invMtx;
			PSMTXInverse(*j3dSys.getViewMtx(), invMtx);
			invMtx[0][3]             = 0.0f;
			invMtx[1][3]             = 0.0f;
			invMtx[2][3]             = 0.0f;
			mTexCoords[i].mTexMtxReg = 0x1E;
			mTexMatrices[i]->calcPostTexMtx(invMtx);
		} break;

		default:
			mTexCoords[i].mTexMtxReg = 0x3C;
			mTexMatrices[i]->calcPostTexMtx(j3dDefaultMtx);
			break;
		}
	}
}

/**
 * @note Address: 0x800815B8
 * @note Size: 0x118
 */
void J3DTexGenBlockPatched::calcPostTexMtxWithoutViewMtx(const Mtx modelMtx)
{
	for (int i = 0; i < 8; i++) {
		if (!mTexMatrices[i]) {
			continue;
		}

		u32 mode = mTexMatrices[i]->getTexMtxInfo().mInfo & 0x3F;
		mTexCoords[i].resetTexMtxReg();

		switch (mode) {
		case J3DTEXMTX_EnvmapOld:
		case J3DTEXMTX_Envmap:
		case J3DTEXMTX_EnvmapBasic: {
			mTexCoords[i].mTexMtxReg = GX_TEXMTX0;
			mTexMatrices[i]->calcPostTexMtx(j3dDefaultMtx);
		} break;

		case J3DTEXMTX_Projmap:
		case J3DTEXMTX_ProjmapBasic: {
			mTexCoords[i].mTexMtxReg = GX_TEXMTX_NULL;
			mTexMatrices[i]->calcPostTexMtx(j3dDefaultMtx);
		} break;

		case J3DTEXMTX_ViewProjmap:
		case J3DTEXMTX_ViewProjmapBasic: {
			mTexCoords[i].mTexMtxReg = GX_TEXMTX_NULL;
			mTexMatrices[i]->calcPostTexMtx(j3dDefaultMtx);
		} break;

		case J3DTEXMTX_EnvmapOldEffectMtx:
		case J3DTEXMTX_EnvmapEffectMtx:
		case J3DTEXMTX_Unknown5: {
			mTexCoords[i].mTexMtxReg = GX_TEXMTX0;
			mTexMatrices[i]->calcPostTexMtx(j3dDefaultMtx);
		} break;

		default:
			mTexCoords[i].mTexMtxReg = GX_IDENTITY;
			mTexMatrices[i]->calcPostTexMtx(j3dDefaultMtx);
			break;
		}
	}
}

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
inline GXAttnFn J3DColorChan::getAttnFn()
{
	u8 attnFnTbl[] = { GX_AF_NONE, GX_AF_SPEC, GX_AF_NONE, GX_AF_SPOT };
	return GXAttnFn(attnFnTbl[mChanCtrl >> 9 & 0x03]);
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
void J3DTevBlockNull::initialize() { mTexNoOffset = 0; }

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
void J3DIndBlockFull::initialize() { mIndTexStageNum = 0; }

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
u32 J3DColorBlockLightOff::countDLSize() { return 0x22; }

/**
 * @note Address: 0x80077A60
 * @note Size: 0x8
 */
u32 J3DColorBlockAmbientOn::countDLSize() { return 0x2F; }

/**
 * @note Address: 0x80077A68
 * @note Size: 0x8
 */
u32 J3DColorBlockLightOn::countDLSize() { return 0x26F; }

/**
 * @note Address: 0x80077A70
 * @note Size: 0x8
 */
u32 J3DTexGenBlockPatched::countDLSize() { return 0x1A8; }

/**
 * @note Address: 0x80077A78
 * @note Size: 0x8
 */
u32 J3DTexGenBlock4::countDLSize() { return 0xFE; }

/**
 * @note Address: 0x80077A80
 * @note Size: 0x8
 */
u32 J3DTexGenBlockBasic::countDLSize() { return 0x1F2; }

/**
 * @note Address: 0x80077A88
 * @note Size: 0x8
 */
u32 J3DTevBlockPatched::countDLSize() { return 0x230; }

/**
 * @note Address: 0x80077A90
 * @note Size: 0x8
 */
u32 J3DTevBlock1::countDLSize() { return 0x69; }

/**
 * @note Address: 0x80077A98
 * @note Size: 0x8
 */
u32 J3DTevBlock2::countDLSize() { return 0x14F; }

/**
 * @note Address: 0x80077AA0
 * @note Size: 0x8
 */
u32 J3DTevBlock4::countDLSize() { return 0x244; }

/**
 * @note Address: 0x80077AA8
 * @note Size: 0x8
 */
u32 J3DTevBlock16::countDLSize() { return 1000; }

/**
 * @note Address: 0x80077AB0
 * @note Size: 0x8
 */
u32 J3DIndBlockFull::countDLSize() { return 0x8C; }

/**
 * @note Address: 0x80077AB8
 * @note Size: 0x8
 */
u32 J3DPEBlockOpa::countDLSize() { return 0x1E; }

/**
 * @note Address: 0x80077AC0
 * @note Size: 0x8
 */
u32 J3DPEBlockTexEdge::countDLSize() { return 0x1E; }

/**
 * @note Address: 0x80077AC8
 * @note Size: 0x8
 */
u32 J3DPEBlockXlu::countDLSize() { return 0x1E; }

/**
 * @note Address: 0x80077AD0
 * @note Size: 0x8
 */
u32 J3DPEBlockFogOff::countDLSize() { return 0x1E; }

/**
 * @note Address: 0x80077AD8
 * @note Size: 0x8
 */
u32 J3DPEBlockFull::countDLSize() { return 0x55; }

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
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r3, SizeOfJ3DColorBlockLightOffLoad@sda21(r13)
	lwz      r4, 8(r5)
	lwz      r0, 0xc(r5)
	add      r3, r4, r3
	cmplw    r3, r0
	ble      lbl_80077B14
	bl       GDOverflowed

lbl_80077B14:
	lwz      r4, __GDCurrentDL@sda21(r13)
	li       r3, 0x10
	li       r0, 0
	li       r8, 1
	lwz      r5, 0(r4)
	li       r7, 0xc
	lwz      r4, 8(r4)
	subf     r4, r5, r4
	stw      r4, 0x18(r31)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r4, r5, 1
	stw      r4, 8(r6)
	stb      r3, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r4, r5, 1
	stw      r4, 8(r6)
	stb      r0, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r4, r5, 1
	stw      r4, 8(r6)
	stb      r8, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r4, r5, 1
	stw      r4, 8(r6)
	stb      r3, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r4, r5, 1
	stw      r4, 8(r6)
	stb      r7, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r10, 4(r31)
	lwz      r5, 8(r6)
	srwi     r9, r10, 0x18
	rlwinm   r8, r10, 0x10, 0x18, 0x1f
	addi     r4, r5, 1
	rlwinm   r7, r10, 0x18, 0x18, 0x1f
	stw      r4, 8(r6)
	stb      r9, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r4, r5, 1
	stw      r4, 8(r6)
	stb      r8, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r4, r5, 1
	stw      r4, 8(r6)
	stb      r7, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r4, r5, 1
	stw      r4, 8(r6)
	stb      r10, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r10, 8(r31)
	lwz      r5, 8(r6)
	srwi     r9, r10, 0x18
	rlwinm   r8, r10, 0x10, 0x18, 0x1f
	addi     r4, r5, 1
	rlwinm   r7, r10, 0x18, 0x18, 0x1f
	stw      r4, 8(r6)
	stb      r9, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r4, r5, 1
	stw      r4, 8(r6)
	stb      r8, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r4, r5, 1
	stw      r4, 8(r6)
	stb      r7, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r4, r5, 1
	stw      r4, 8(r6)
	stb      r10, 0(r5)
	lwz      r5, __GDCurrentDL@sda21(r13)
	li       r9, 3
	li       r7, 0xe
	addi     r4, r1, 0x14
	lwz      r6, 0(r5)
	lwz      r5, 8(r5)
	subf     r5, r6, r5
	stw      r5, 0x1c(r31)
	lwz      r8, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r8)
	addi     r5, r6, 1
	stw      r5, 8(r8)
	stb      r3, 0(r6)
	lwz      r8, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r8)
	addi     r5, r6, 1
	stw      r5, 8(r8)
	stb      r0, 0(r6)
	lwz      r8, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r8)
	addi     r5, r6, 1
	stw      r5, 8(r8)
	stb      r9, 0(r6)
	lwz      r8, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r8)
	addi     r5, r6, 1
	stw      r5, 8(r8)
	stb      r3, 0(r6)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r3, r5, 1
	stw      r3, 8(r6)
	stb      r7, 0(r5)
	lhz      r9, 0xe(r31)
	lwz      r5, lbl_80516AD8@sda21(r2)
	rlwinm   r3, r9, 0x17, 0x1e, 0x1f
	rlwinm   r7, r9, 0x19, 0x18, 0x1b
	stw      r5, 0x14(r1)
	clrlwi   r10, r9, 0x1f
	rlwimi   r7, r9, 0x1e, 0x1c, 0x1f
	rlwinm   r11, r9, 0x19, 0x1e, 0x1f
	lbzx     r8, r4, r3
	rlwimi   r10, r9, 0, 0x1e, 0x1e
	rlwimi   r10, r7, 2, 0x1a, 0x1d
	neg      r3, r8
	cmpwi    r8, 0
	or       r5, r3, r8
	subfic   r4, r8, 2
	addi     r3, r8, -2
	rlwinm   r8, r7, 7, 0x11, 0x14
	or       r3, r4, r3
	rlwinm   r7, r5, 0xb, 0x15, 0x15
	rlwinm   r6, r3, 0xa, 0x16, 0x16
	rlwimi   r10, r9, 0, 0x19, 0x19
	bne      lbl_80077D3C
	mr       r11, r0

lbl_80077D3C:
	lwz      r5, __GDCurrentDL@sda21(r13)
	slwi     r0, r11, 7
	or       r0, r10, r0
	addi     r3, r1, 0x10
	lwz      r4, 8(r5)
	or       r0, r6, r0
	or       r6, r7, r0
	addi     r0, r4, 1
	or       r8, r8, r6
	stw      r0, 8(r5)
	srwi     r0, r8, 0x18
	stb      r0, 0(r4)
	rlwinm   r7, r8, 0x10, 0x18, 0x1f
	rlwinm   r6, r8, 0x18, 0x18, 0x1f
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lwz      r0, lbl_80516AD8@sda21(r2)
	lhz      r8, 0x12(r31)
	stw      r0, 0x10(r1)
	rlwinm   r0, r8, 0x17, 0x1e, 0x1f
	rlwinm   r6, r8, 0x19, 0x18, 0x1b
	lbzx     r7, r3, r0
	clrlwi   r9, r8, 0x1f
	rlwimi   r6, r8, 0x1e, 0x1c, 0x1f
	rlwinm   r10, r8, 0x19, 0x1e, 0x1f
	neg      r0, r7
	rlwimi   r9, r8, 0, 0x1e, 0x1e
	or       r4, r0, r7
	cmpwi    r7, 0
	subfic   r3, r7, 2
	addi     r0, r7, -2
	or       r0, r3, r0
	rlwimi   r9, r6, 2, 0x1a, 0x1d
	rlwinm   r3, r8, 0x1a, 0x1f, 0x1f
	rlwinm   r8, r6, 7, 0x11, 0x14
	rlwinm   r7, r4, 0xb, 0x15, 0x15
	rlwinm   r6, r0, 0xa, 0x16, 0x16
	rlwimi   r9, r3, 6, 0x19, 0x19
	bne      lbl_80077E10
	li       r10, 0

lbl_80077E10:
	lwz      r5, __GDCurrentDL@sda21(r13)
	slwi     r0, r10, 7
	or       r0, r9, r0
	addi     r3, r1, 0xc
	lwz      r4, 8(r5)
	or       r0, r6, r0
	or       r6, r7, r0
	addi     r0, r4, 1
	or       r8, r8, r6
	stw      r0, 8(r5)
	srwi     r0, r8, 0x18
	stb      r0, 0(r4)
	rlwinm   r7, r8, 0x10, 0x18, 0x1f
	rlwinm   r6, r8, 0x18, 0x18, 0x1f
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lwz      r0, lbl_80516AD8@sda21(r2)
	lhz      r8, 0x10(r31)
	stw      r0, 0xc(r1)
	rlwinm   r0, r8, 0x17, 0x1e, 0x1f
	rlwinm   r6, r8, 0x19, 0x18, 0x1b
	lbzx     r7, r3, r0
	clrlwi   r9, r8, 0x1f
	rlwimi   r6, r8, 0x1e, 0x1c, 0x1f
	rlwinm   r10, r8, 0x19, 0x1e, 0x1f
	neg      r0, r7
	rlwimi   r9, r8, 0, 0x1e, 0x1e
	or       r4, r0, r7
	cmpwi    r7, 0
	subfic   r3, r7, 2
	addi     r0, r7, -2
	or       r0, r3, r0
	rlwimi   r9, r6, 2, 0x1a, 0x1d
	rlwinm   r3, r8, 0x1a, 0x1f, 0x1f
	rlwinm   r8, r6, 7, 0x11, 0x14
	rlwinm   r7, r4, 0xb, 0x15, 0x15
	rlwinm   r6, r0, 0xa, 0x16, 0x16
	rlwimi   r9, r3, 6, 0x19, 0x19
	bne      lbl_80077EE4
	li       r10, 0

lbl_80077EE4:
	lwz      r5, __GDCurrentDL@sda21(r13)
	slwi     r0, r10, 7
	or       r0, r9, r0
	addi     r3, r1, 8
	lwz      r4, 8(r5)
	or       r0, r6, r0
	or       r6, r7, r0
	addi     r0, r4, 1
	or       r8, r8, r6
	stw      r0, 8(r5)
	srwi     r0, r8, 0x18
	stb      r0, 0(r4)
	rlwinm   r7, r8, 0x10, 0x18, 0x1f
	rlwinm   r6, r8, 0x18, 0x18, 0x1f
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lwz      r0, lbl_80516AD8@sda21(r2)
	lhz      r10, 0x14(r31)
	stw      r0, 8(r1)
	rlwinm   r0, r10, 0x17, 0x1e, 0x1f
	rlwinm   r6, r10, 0x19, 0x18, 0x1b
	lbzx     r7, r3, r0
	clrlwi   r8, r10, 0x1f
	rlwimi   r6, r10, 0x1e, 0x1c, 0x1f
	rlwinm   r9, r10, 0x19, 0x1e, 0x1f
	neg      r0, r7
	rlwimi   r8, r10, 0, 0x1e, 0x1e
	or       r4, r0, r7
	cmpwi    r7, 0
	subfic   r3, r7, 2
	addi     r0, r7, -2
	or       r0, r3, r0
	rlwimi   r8, r6, 2, 0x1a, 0x1d
	rlwinm   r7, r6, 7, 0x11, 0x14
	rlwinm   r6, r4, 0xb, 0x15, 0x15
	rlwinm   r5, r0, 0xa, 0x16, 0x16
	rlwimi   r8, r10, 0, 0x19, 0x19
	bne      lbl_80077FB4
	li       r9, 0

lbl_80077FB4:
	lwz      r4, __GDCurrentDL@sda21(r13)
	slwi     r0, r9, 7
	or       r0, r8, r0
	lwz      r3, 8(r4)
	or       r0, r5, r0
	or       r5, r6, r0
	addi     r0, r3, 1
	or       r7, r7, r5
	stw      r0, 8(r4)
	srwi     r0, r7, 0x18
	stb      r0, 0(r3)
	rlwinm   r6, r7, 0x10, 0x18, 0x1f
	rlwinm   r5, r7, 0x18, 0x18, 0x1f
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r6, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r5, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r7, 0(r3)
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
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
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r3, SizeOfJ3DColorBlockAmbientOnLoad@sda21(r13)
	lwz      r4, 8(r5)
	lwz      r0, 0xc(r5)
	add      r3, r4, r3
	cmplw    r3, r0
	ble      lbl_8007806C
	bl       GDOverflowed

lbl_8007806C:
	lwz      r5, __GDCurrentDL@sda21(r13)
	li       r4, 0x10
	li       r3, 0
	li       r0, 1
	lwz      r6, 0(r5)
	li       r8, 0xc
	lwz      r5, 8(r5)
	subf     r5, r6, r5
	stw      r5, 0x18(r31)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r4, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r3, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r0, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r4, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r8, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r11, 4(r31)
	lwz      r6, 8(r7)
	srwi     r10, r11, 0x18
	rlwinm   r9, r11, 0x10, 0x18, 0x1f
	addi     r5, r6, 1
	rlwinm   r8, r11, 0x18, 0x18, 0x1f
	stw      r5, 8(r7)
	stb      r10, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r9, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r8, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r11, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r11, 8(r31)
	lwz      r6, 8(r7)
	srwi     r10, r11, 0x18
	rlwinm   r9, r11, 0x10, 0x18, 0x1f
	addi     r5, r6, 1
	rlwinm   r8, r11, 0x18, 0x18, 0x1f
	stw      r5, 8(r7)
	stb      r10, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r9, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r8, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r11, 0(r6)
	lwz      r8, __GDCurrentDL@sda21(r13)
	li       r7, 0xa
	lwz      r6, 8(r8)
	addi     r5, r6, 1
	stw      r5, 8(r8)
	stb      r4, 0(r6)
	lwz      r8, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r8)
	addi     r5, r6, 1
	stw      r5, 8(r8)
	stb      r3, 0(r6)
	lwz      r8, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r8)
	addi     r5, r6, 1
	stw      r5, 8(r8)
	stb      r0, 0(r6)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r0, r5, 1
	stw      r0, 8(r6)
	stb      r4, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r0, r5, 1
	stw      r0, 8(r6)
	stb      r7, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r10, 0x20(r31)
	lwz      r5, 8(r6)
	srwi     r9, r10, 0x18
	rlwinm   r8, r10, 0x10, 0x18, 0x1f
	addi     r0, r5, 1
	rlwinm   r7, r10, 0x18, 0x18, 0x1f
	stw      r0, 8(r6)
	stb      r9, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r0, r5, 1
	stw      r0, 8(r6)
	stb      r8, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r0, r5, 1
	stw      r0, 8(r6)
	stb      r7, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r0, r5, 1
	stw      r0, 8(r6)
	stb      r10, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r10, 0x24(r31)
	lwz      r5, 8(r6)
	srwi     r9, r10, 0x18
	rlwinm   r8, r10, 0x10, 0x18, 0x1f
	addi     r0, r5, 1
	rlwinm   r7, r10, 0x18, 0x18, 0x1f
	stw      r0, 8(r6)
	stb      r9, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r0, r5, 1
	stw      r0, 8(r6)
	stb      r8, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r0, r5, 1
	stw      r0, 8(r6)
	stb      r7, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r0, r5, 1
	stw      r0, 8(r6)
	stb      r10, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 0(r6)
	lwz      r0, 8(r6)
	subf     r0, r5, r0
	stw      r0, 0x1c(r31)
	lwz      r8, __GDCurrentDL@sda21(r13)
	li       r9, 3
	li       r7, 0xe
	addi     r5, r1, 0x14
	lwz      r6, 8(r8)
	addi     r0, r6, 1
	stw      r0, 8(r8)
	stb      r4, 0(r6)
	lwz      r8, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r8)
	addi     r0, r6, 1
	stw      r0, 8(r8)
	stb      r3, 0(r6)
	lwz      r8, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r8)
	addi     r0, r6, 1
	stw      r0, 8(r8)
	stb      r9, 0(r6)
	lwz      r8, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r8)
	addi     r0, r6, 1
	stw      r0, 8(r8)
	stb      r4, 0(r6)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r6)
	addi     r0, r4, 1
	stw      r0, 8(r6)
	stb      r7, 0(r4)
	lwz      r0, lbl_80516AD8@sda21(r2)
	lhz      r11, 0xe(r31)
	stw      r0, 0x14(r1)
	rlwinm   r0, r11, 0x17, 0x1e, 0x1f
	rlwinm   r7, r11, 0x19, 0x18, 0x1b
	lbzx     r8, r5, r0
	clrlwi   r9, r11, 0x1f
	rlwimi   r7, r11, 0x1e, 0x1c, 0x1f
	rlwinm   r10, r11, 0x19, 0x1e, 0x1f
	neg      r0, r8
	rlwimi   r9, r11, 0, 0x1e, 0x1e
	or       r5, r0, r8
	cmpwi    r8, 0
	subfic   r4, r8, 2
	addi     r0, r8, -2
	or       r0, r4, r0
	rlwimi   r9, r7, 2, 0x1a, 0x1d
	rlwinm   r8, r7, 7, 0x11, 0x14
	rlwinm   r7, r5, 0xb, 0x15, 0x15
	rlwinm   r6, r0, 0xa, 0x16, 0x16
	rlwimi   r9, r11, 0, 0x19, 0x19
	bne      lbl_800783BC
	mr       r10, r3

lbl_800783BC:
	lwz      r5, __GDCurrentDL@sda21(r13)
	slwi     r0, r10, 7
	or       r0, r9, r0
	addi     r3, r1, 0x10
	lwz      r4, 8(r5)
	or       r0, r6, r0
	or       r6, r7, r0
	addi     r0, r4, 1
	or       r8, r8, r6
	stw      r0, 8(r5)
	srwi     r0, r8, 0x18
	stb      r0, 0(r4)
	rlwinm   r7, r8, 0x10, 0x18, 0x1f
	rlwinm   r6, r8, 0x18, 0x18, 0x1f
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lwz      r0, lbl_80516AD8@sda21(r2)
	lhz      r8, 0x12(r31)
	stw      r0, 0x10(r1)
	rlwinm   r0, r8, 0x17, 0x1e, 0x1f
	rlwinm   r6, r8, 0x19, 0x18, 0x1b
	lbzx     r7, r3, r0
	clrlwi   r9, r8, 0x1f
	rlwimi   r6, r8, 0x1e, 0x1c, 0x1f
	rlwinm   r10, r8, 0x19, 0x1e, 0x1f
	neg      r0, r7
	rlwimi   r9, r8, 0, 0x1e, 0x1e
	or       r4, r0, r7
	cmpwi    r7, 0
	subfic   r3, r7, 2
	addi     r0, r7, -2
	or       r0, r3, r0
	rlwimi   r9, r6, 2, 0x1a, 0x1d
	rlwinm   r3, r8, 0x1a, 0x1f, 0x1f
	rlwinm   r8, r6, 7, 0x11, 0x14
	rlwinm   r7, r4, 0xb, 0x15, 0x15
	rlwinm   r6, r0, 0xa, 0x16, 0x16
	rlwimi   r9, r3, 6, 0x19, 0x19
	bne      lbl_80078490
	li       r10, 0

lbl_80078490:
	lwz      r5, __GDCurrentDL@sda21(r13)
	slwi     r0, r10, 7
	or       r0, r9, r0
	addi     r3, r1, 0xc
	lwz      r4, 8(r5)
	or       r0, r6, r0
	or       r6, r7, r0
	addi     r0, r4, 1
	or       r8, r8, r6
	stw      r0, 8(r5)
	srwi     r0, r8, 0x18
	stb      r0, 0(r4)
	rlwinm   r7, r8, 0x10, 0x18, 0x1f
	rlwinm   r6, r8, 0x18, 0x18, 0x1f
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lwz      r0, lbl_80516AD8@sda21(r2)
	lhz      r8, 0x10(r31)
	stw      r0, 0xc(r1)
	rlwinm   r0, r8, 0x17, 0x1e, 0x1f
	rlwinm   r6, r8, 0x19, 0x18, 0x1b
	lbzx     r7, r3, r0
	clrlwi   r9, r8, 0x1f
	rlwimi   r6, r8, 0x1e, 0x1c, 0x1f
	rlwinm   r10, r8, 0x19, 0x1e, 0x1f
	neg      r0, r7
	rlwimi   r9, r8, 0, 0x1e, 0x1e
	or       r4, r0, r7
	cmpwi    r7, 0
	subfic   r3, r7, 2
	addi     r0, r7, -2
	or       r0, r3, r0
	rlwimi   r9, r6, 2, 0x1a, 0x1d
	rlwinm   r3, r8, 0x1a, 0x1f, 0x1f
	rlwinm   r8, r6, 7, 0x11, 0x14
	rlwinm   r7, r4, 0xb, 0x15, 0x15
	rlwinm   r6, r0, 0xa, 0x16, 0x16
	rlwimi   r9, r3, 6, 0x19, 0x19
	bne      lbl_80078564
	li       r10, 0

lbl_80078564:
	lwz      r5, __GDCurrentDL@sda21(r13)
	slwi     r0, r10, 7
	or       r0, r9, r0
	addi     r3, r1, 8
	lwz      r4, 8(r5)
	or       r0, r6, r0
	or       r6, r7, r0
	addi     r0, r4, 1
	or       r8, r8, r6
	stw      r0, 8(r5)
	srwi     r0, r8, 0x18
	stb      r0, 0(r4)
	rlwinm   r7, r8, 0x10, 0x18, 0x1f
	rlwinm   r6, r8, 0x18, 0x18, 0x1f
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lwz      r0, lbl_80516AD8@sda21(r2)
	lhz      r10, 0x14(r31)
	stw      r0, 8(r1)
	rlwinm   r0, r10, 0x17, 0x1e, 0x1f
	rlwinm   r6, r10, 0x19, 0x18, 0x1b
	lbzx     r7, r3, r0
	clrlwi   r8, r10, 0x1f
	rlwimi   r6, r10, 0x1e, 0x1c, 0x1f
	rlwinm   r9, r10, 0x19, 0x1e, 0x1f
	neg      r0, r7
	rlwimi   r8, r10, 0, 0x1e, 0x1e
	or       r4, r0, r7
	cmpwi    r7, 0
	subfic   r3, r7, 2
	addi     r0, r7, -2
	or       r0, r3, r0
	rlwimi   r8, r6, 2, 0x1a, 0x1d
	rlwinm   r7, r6, 7, 0x11, 0x14
	rlwinm   r6, r4, 0xb, 0x15, 0x15
	rlwinm   r5, r0, 0xa, 0x16, 0x16
	rlwimi   r8, r10, 0, 0x19, 0x19
	bne      lbl_80078634
	li       r9, 0

lbl_80078634:
	lwz      r4, __GDCurrentDL@sda21(r13)
	slwi     r0, r9, 7
	or       r0, r8, r0
	lwz      r3, 8(r4)
	or       r0, r5, r0
	or       r5, r6, r0
	addi     r0, r3, 1
	or       r7, r7, r5
	stw      r0, 8(r4)
	srwi     r0, r7, 0x18
	stb      r0, 0(r3)
	rlwinm   r6, r7, 0x10, 0x18, 0x1f
	rlwinm   r5, r7, 0x18, 0x18, 0x1f
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r6, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r5, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r7, 0(r3)
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
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
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r3, SizeOfJ3DColorBlockAmbientOnLoad@sda21(r13)
	lwz      r4, 8(r5)
	lwz      r0, 0xc(r5)
	add      r3, r4, r3
	cmplw    r3, r0
	ble      lbl_800786F0
	bl       GDOverflowed

lbl_800786F0:
	lwz      r5, __GDCurrentDL@sda21(r13)
	li       r4, 0x10
	li       r3, 0
	li       r0, 1
	lwz      r6, 0(r5)
	li       r8, 0xc
	lwz      r5, 8(r5)
	subf     r5, r6, r5
	stw      r5, 0x44(r31)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r4, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r3, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r0, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r4, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r8, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r11, 4(r31)
	lwz      r6, 8(r7)
	srwi     r10, r11, 0x18
	rlwinm   r9, r11, 0x10, 0x18, 0x1f
	addi     r5, r6, 1
	rlwinm   r8, r11, 0x18, 0x18, 0x1f
	stw      r5, 8(r7)
	stb      r10, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r9, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r8, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r11, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r11, 8(r31)
	lwz      r6, 8(r7)
	srwi     r10, r11, 0x18
	rlwinm   r9, r11, 0x10, 0x18, 0x1f
	addi     r5, r6, 1
	rlwinm   r8, r11, 0x18, 0x18, 0x1f
	stw      r5, 8(r7)
	stb      r10, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r9, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r8, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r11, 0(r6)
	lwz      r8, __GDCurrentDL@sda21(r13)
	li       r7, 0xa
	lwz      r6, 8(r8)
	addi     r5, r6, 1
	stw      r5, 8(r8)
	stb      r4, 0(r6)
	lwz      r8, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r8)
	addi     r5, r6, 1
	stw      r5, 8(r8)
	stb      r3, 0(r6)
	lwz      r8, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r8)
	addi     r5, r6, 1
	stw      r5, 8(r8)
	stb      r0, 0(r6)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r0, r5, 1
	stw      r0, 8(r6)
	stb      r4, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r0, r5, 1
	stw      r0, 8(r6)
	stb      r7, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r10, 0xc(r31)
	lwz      r5, 8(r6)
	srwi     r9, r10, 0x18
	rlwinm   r8, r10, 0x10, 0x18, 0x1f
	addi     r0, r5, 1
	rlwinm   r7, r10, 0x18, 0x18, 0x1f
	stw      r0, 8(r6)
	stb      r9, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r0, r5, 1
	stw      r0, 8(r6)
	stb      r8, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r0, r5, 1
	stw      r0, 8(r6)
	stb      r7, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r0, r5, 1
	stw      r0, 8(r6)
	stb      r10, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r10, 0x10(r31)
	lwz      r5, 8(r6)
	srwi     r9, r10, 0x18
	rlwinm   r8, r10, 0x10, 0x18, 0x1f
	addi     r0, r5, 1
	rlwinm   r7, r10, 0x18, 0x18, 0x1f
	stw      r0, 8(r6)
	stb      r9, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r0, r5, 1
	stw      r0, 8(r6)
	stb      r8, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r0, r5, 1
	stw      r0, 8(r6)
	stb      r7, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r0, r5, 1
	stw      r0, 8(r6)
	stb      r10, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 0(r6)
	lwz      r0, 8(r6)
	subf     r0, r5, r0
	stw      r0, 0x48(r31)
	lwz      r8, __GDCurrentDL@sda21(r13)
	li       r9, 3
	li       r7, 0xe
	addi     r5, r1, 0x14
	lwz      r6, 8(r8)
	addi     r0, r6, 1
	stw      r0, 8(r8)
	stb      r4, 0(r6)
	lwz      r8, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r8)
	addi     r0, r6, 1
	stw      r0, 8(r8)
	stb      r3, 0(r6)
	lwz      r8, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r8)
	addi     r0, r6, 1
	stw      r0, 8(r8)
	stb      r9, 0(r6)
	lwz      r8, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r8)
	addi     r0, r6, 1
	stw      r0, 8(r8)
	stb      r4, 0(r6)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r6)
	addi     r0, r4, 1
	stw      r0, 8(r6)
	stb      r7, 0(r4)
	lwz      r0, lbl_80516AD8@sda21(r2)
	lhz      r11, 0x16(r31)
	stw      r0, 0x14(r1)
	rlwinm   r0, r11, 0x17, 0x1e, 0x1f
	rlwinm   r7, r11, 0x19, 0x18, 0x1b
	lbzx     r8, r5, r0
	clrlwi   r9, r11, 0x1f
	rlwimi   r7, r11, 0x1e, 0x1c, 0x1f
	rlwinm   r10, r11, 0x19, 0x1e, 0x1f
	neg      r0, r8
	rlwimi   r9, r11, 0, 0x1e, 0x1e
	or       r5, r0, r8
	cmpwi    r8, 0
	subfic   r4, r8, 2
	addi     r0, r8, -2
	or       r0, r4, r0
	rlwimi   r9, r7, 2, 0x1a, 0x1d
	rlwinm   r8, r7, 7, 0x11, 0x14
	rlwinm   r7, r5, 0xb, 0x15, 0x15
	rlwinm   r6, r0, 0xa, 0x16, 0x16
	rlwimi   r9, r11, 0, 0x19, 0x19
	bne      lbl_80078A40
	mr       r10, r3

lbl_80078A40:
	lwz      r5, __GDCurrentDL@sda21(r13)
	slwi     r0, r10, 7
	or       r0, r9, r0
	addi     r3, r1, 0x10
	lwz      r4, 8(r5)
	or       r0, r6, r0
	or       r6, r7, r0
	addi     r0, r4, 1
	or       r8, r8, r6
	stw      r0, 8(r5)
	srwi     r0, r8, 0x18
	stb      r0, 0(r4)
	rlwinm   r7, r8, 0x10, 0x18, 0x1f
	rlwinm   r6, r8, 0x18, 0x18, 0x1f
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lwz      r0, lbl_80516AD8@sda21(r2)
	lhz      r8, 0x1a(r31)
	stw      r0, 0x10(r1)
	rlwinm   r0, r8, 0x17, 0x1e, 0x1f
	rlwinm   r6, r8, 0x19, 0x18, 0x1b
	lbzx     r7, r3, r0
	clrlwi   r9, r8, 0x1f
	rlwimi   r6, r8, 0x1e, 0x1c, 0x1f
	rlwinm   r10, r8, 0x19, 0x1e, 0x1f
	neg      r0, r7
	rlwimi   r9, r8, 0, 0x1e, 0x1e
	or       r4, r0, r7
	cmpwi    r7, 0
	subfic   r3, r7, 2
	addi     r0, r7, -2
	or       r0, r3, r0
	rlwimi   r9, r6, 2, 0x1a, 0x1d
	rlwinm   r3, r8, 0x1a, 0x1f, 0x1f
	rlwinm   r8, r6, 7, 0x11, 0x14
	rlwinm   r7, r4, 0xb, 0x15, 0x15
	rlwinm   r6, r0, 0xa, 0x16, 0x16
	rlwimi   r9, r3, 6, 0x19, 0x19
	bne      lbl_80078B14
	li       r10, 0

lbl_80078B14:
	lwz      r5, __GDCurrentDL@sda21(r13)
	slwi     r0, r10, 7
	or       r0, r9, r0
	addi     r3, r1, 0xc
	lwz      r4, 8(r5)
	or       r0, r6, r0
	or       r6, r7, r0
	addi     r0, r4, 1
	or       r8, r8, r6
	stw      r0, 8(r5)
	srwi     r0, r8, 0x18
	stb      r0, 0(r4)
	rlwinm   r7, r8, 0x10, 0x18, 0x1f
	rlwinm   r6, r8, 0x18, 0x18, 0x1f
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lwz      r0, lbl_80516AD8@sda21(r2)
	lhz      r8, 0x18(r31)
	stw      r0, 0xc(r1)
	rlwinm   r0, r8, 0x17, 0x1e, 0x1f
	rlwinm   r6, r8, 0x19, 0x18, 0x1b
	lbzx     r7, r3, r0
	clrlwi   r9, r8, 0x1f
	rlwimi   r6, r8, 0x1e, 0x1c, 0x1f
	rlwinm   r10, r8, 0x19, 0x1e, 0x1f
	neg      r0, r7
	rlwimi   r9, r8, 0, 0x1e, 0x1e
	or       r4, r0, r7
	cmpwi    r7, 0
	subfic   r3, r7, 2
	addi     r0, r7, -2
	or       r0, r3, r0
	rlwimi   r9, r6, 2, 0x1a, 0x1d
	rlwinm   r3, r8, 0x1a, 0x1f, 0x1f
	rlwinm   r8, r6, 7, 0x11, 0x14
	rlwinm   r7, r4, 0xb, 0x15, 0x15
	rlwinm   r6, r0, 0xa, 0x16, 0x16
	rlwimi   r9, r3, 6, 0x19, 0x19
	bne      lbl_80078BE8
	li       r10, 0

lbl_80078BE8:
	lwz      r5, __GDCurrentDL@sda21(r13)
	slwi     r0, r10, 7
	or       r0, r9, r0
	addi     r3, r1, 8
	lwz      r4, 8(r5)
	or       r0, r6, r0
	or       r6, r7, r0
	addi     r0, r4, 1
	or       r8, r8, r6
	stw      r0, 8(r5)
	srwi     r0, r8, 0x18
	stb      r0, 0(r4)
	rlwinm   r7, r8, 0x10, 0x18, 0x1f
	rlwinm   r6, r8, 0x18, 0x18, 0x1f
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lwz      r0, lbl_80516AD8@sda21(r2)
	lhz      r10, 0x1c(r31)
	stw      r0, 8(r1)
	rlwinm   r0, r10, 0x17, 0x1e, 0x1f
	rlwinm   r6, r10, 0x19, 0x18, 0x1b
	lbzx     r7, r3, r0
	clrlwi   r8, r10, 0x1f
	rlwimi   r6, r10, 0x1e, 0x1c, 0x1f
	rlwinm   r9, r10, 0x19, 0x1e, 0x1f
	neg      r0, r7
	rlwimi   r8, r10, 0, 0x1e, 0x1e
	or       r4, r0, r7
	cmpwi    r7, 0
	subfic   r3, r7, 2
	addi     r0, r7, -2
	or       r0, r3, r0
	rlwimi   r8, r6, 2, 0x1a, 0x1d
	rlwinm   r7, r6, 7, 0x11, 0x14
	rlwinm   r6, r4, 0xb, 0x15, 0x15
	rlwinm   r5, r0, 0xa, 0x16, 0x16
	rlwimi   r8, r10, 0, 0x19, 0x19
	bne      lbl_80078CB8
	li       r9, 0

lbl_80078CB8:
	lwz      r4, __GDCurrentDL@sda21(r13)
	slwi     r0, r9, 7
	or       r0, r8, r0
	li       r30, 0
	lwz      r3, 8(r4)
	or       r0, r5, r0
	or       r5, r6, r0
	addi     r0, r3, 1
	or       r7, r7, r5
	stw      r0, 8(r4)
	srwi     r0, r7, 0x18
	stb      r0, 0(r3)
	rlwinm   r6, r7, 0x10, 0x18, 0x1f
	rlwinm   r5, r7, 0x18, 0x18, 0x1f
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r6, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r5, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r7, 0(r3)

lbl_80078D2C:
	lwz      r3, 0x20(r31)
	cmplwi   r3, 0
	beq      lbl_80078D40
	mr       r4, r30
	bl       load__11J3DLightObjCFUl

lbl_80078D40:
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmplwi   r30, 8
	blt      lbl_80078D2C
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
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
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r0, 0x1c(r3)
	lwz      r3, 0(r4)
	add      r0, r3, r0
	stw      r0, 8(r4)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, SizeOfLoadColorChans@sda21(r13)
	lwz      r30, 8(r4)
	lwz      r0, 0xc(r4)
	add      r3, r30, r3
	cmplw    r3, r0
	ble      lbl_80078FAC
	bl       GDOverflowed

lbl_80078FAC:
	lwz      r6, __GDCurrentDL@sda21(r13)
	li       r9, 0x10
	li       r0, 0
	li       r8, 3
	lwz      r5, 8(r6)
	li       r7, 0xe
	addi     r3, r1, 0x14
	addi     r4, r5, 1
	stw      r4, 8(r6)
	stb      r9, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r4, r5, 1
	stw      r4, 8(r6)
	stb      r0, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r4, r5, 1
	stw      r4, 8(r6)
	stb      r8, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r4, r5, 1
	stw      r4, 8(r6)
	stb      r9, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r4, r5, 1
	stw      r4, 8(r6)
	stb      r7, 0(r5)
	lwz      r4, lbl_80516AD8@sda21(r2)
	lhz      r11, 0xe(r31)
	stw      r4, 0x14(r1)
	rlwinm   r4, r11, 0x17, 0x1e, 0x1f
	rlwinm   r7, r11, 0x19, 0x18, 0x1b
	lbzx     r8, r3, r4
	clrlwi   r9, r11, 0x1f
	rlwimi   r7, r11, 0x1e, 0x1c, 0x1f
	rlwinm   r10, r11, 0x19, 0x1e, 0x1f
	neg      r3, r8
	rlwimi   r9, r11, 0, 0x1e, 0x1e
	or       r5, r3, r8
	cmpwi    r8, 0
	subfic   r4, r8, 2
	addi     r3, r8, -2
	or       r3, r4, r3
	rlwimi   r9, r7, 2, 0x1a, 0x1d
	rlwinm   r8, r7, 7, 0x11, 0x14
	rlwinm   r7, r5, 0xb, 0x15, 0x15
	rlwinm   r6, r3, 0xa, 0x16, 0x16
	rlwimi   r9, r11, 0, 0x19, 0x19
	bne      lbl_80079080
	mr       r10, r0

lbl_80079080:
	lwz      r5, __GDCurrentDL@sda21(r13)
	slwi     r0, r10, 7
	or       r0, r9, r0
	addi     r3, r1, 0x10
	lwz      r4, 8(r5)
	or       r0, r6, r0
	or       r6, r7, r0
	addi     r0, r4, 1
	or       r8, r8, r6
	stw      r0, 8(r5)
	srwi     r0, r8, 0x18
	stb      r0, 0(r4)
	rlwinm   r7, r8, 0x10, 0x18, 0x1f
	rlwinm   r6, r8, 0x18, 0x18, 0x1f
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lwz      r0, lbl_80516AD8@sda21(r2)
	lhz      r8, 0x12(r31)
	stw      r0, 0x10(r1)
	rlwinm   r0, r8, 0x17, 0x1e, 0x1f
	rlwinm   r6, r8, 0x19, 0x18, 0x1b
	lbzx     r7, r3, r0
	clrlwi   r9, r8, 0x1f
	rlwimi   r6, r8, 0x1e, 0x1c, 0x1f
	rlwinm   r10, r8, 0x19, 0x1e, 0x1f
	neg      r0, r7
	rlwimi   r9, r8, 0, 0x1e, 0x1e
	or       r4, r0, r7
	cmpwi    r7, 0
	subfic   r3, r7, 2
	addi     r0, r7, -2
	or       r0, r3, r0
	rlwimi   r9, r6, 2, 0x1a, 0x1d
	rlwinm   r3, r8, 0x1a, 0x1f, 0x1f
	rlwinm   r8, r6, 7, 0x11, 0x14
	rlwinm   r7, r4, 0xb, 0x15, 0x15
	rlwinm   r6, r0, 0xa, 0x16, 0x16
	rlwimi   r9, r3, 6, 0x19, 0x19
	bne      lbl_80079154
	li       r10, 0

lbl_80079154:
	lwz      r5, __GDCurrentDL@sda21(r13)
	slwi     r0, r10, 7
	or       r0, r9, r0
	addi     r3, r1, 0xc
	lwz      r4, 8(r5)
	or       r0, r6, r0
	or       r6, r7, r0
	addi     r0, r4, 1
	or       r8, r8, r6
	stw      r0, 8(r5)
	srwi     r0, r8, 0x18
	stb      r0, 0(r4)
	rlwinm   r7, r8, 0x10, 0x18, 0x1f
	rlwinm   r6, r8, 0x18, 0x18, 0x1f
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lwz      r0, lbl_80516AD8@sda21(r2)
	lhz      r8, 0x10(r31)
	stw      r0, 0xc(r1)
	rlwinm   r0, r8, 0x17, 0x1e, 0x1f
	rlwinm   r6, r8, 0x19, 0x18, 0x1b
	lbzx     r7, r3, r0
	clrlwi   r9, r8, 0x1f
	rlwimi   r6, r8, 0x1e, 0x1c, 0x1f
	rlwinm   r10, r8, 0x19, 0x1e, 0x1f
	neg      r0, r7
	rlwimi   r9, r8, 0, 0x1e, 0x1e
	or       r4, r0, r7
	cmpwi    r7, 0
	subfic   r3, r7, 2
	addi     r0, r7, -2
	or       r0, r3, r0
	rlwimi   r9, r6, 2, 0x1a, 0x1d
	rlwinm   r3, r8, 0x1a, 0x1f, 0x1f
	rlwinm   r8, r6, 7, 0x11, 0x14
	rlwinm   r7, r4, 0xb, 0x15, 0x15
	rlwinm   r6, r0, 0xa, 0x16, 0x16
	rlwimi   r9, r3, 6, 0x19, 0x19
	bne      lbl_80079228
	li       r10, 0

lbl_80079228:
	lwz      r5, __GDCurrentDL@sda21(r13)
	slwi     r0, r10, 7
	or       r0, r9, r0
	addi     r3, r1, 8
	lwz      r4, 8(r5)
	or       r0, r6, r0
	or       r6, r7, r0
	addi     r0, r4, 1
	or       r8, r8, r6
	stw      r0, 8(r5)
	srwi     r0, r8, 0x18
	stb      r0, 0(r4)
	rlwinm   r7, r8, 0x10, 0x18, 0x1f
	rlwinm   r6, r8, 0x18, 0x18, 0x1f
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lwz      r0, lbl_80516AD8@sda21(r2)
	lhz      r8, 0x14(r31)
	stw      r0, 8(r1)
	rlwinm   r0, r8, 0x17, 0x1e, 0x1f
	rlwinm   r6, r8, 0x19, 0x18, 0x1b
	lbzx     r7, r3, r0
	clrlwi   r9, r8, 0x1f
	rlwimi   r6, r8, 0x1e, 0x1c, 0x1f
	rlwinm   r10, r8, 0x19, 0x1e, 0x1f
	neg      r0, r7
	rlwimi   r9, r8, 0, 0x1e, 0x1e
	or       r4, r0, r7
	cmpwi    r7, 0
	subfic   r3, r7, 2
	addi     r0, r7, -2
	or       r0, r3, r0
	rlwimi   r9, r6, 2, 0x1a, 0x1d
	rlwinm   r3, r8, 0x1a, 0x1f, 0x1f
	rlwinm   r8, r6, 7, 0x11, 0x14
	rlwinm   r7, r4, 0xb, 0x15, 0x15
	rlwinm   r6, r0, 0xa, 0x16, 0x16
	rlwimi   r9, r3, 6, 0x19, 0x19
	bne      lbl_800792FC
	li       r10, 0

lbl_800792FC:
	lwz      r5, __GDCurrentDL@sda21(r13)
	slwi     r0, r10, 7
	or       r0, r9, r0
	mr       r3, r30
	lwz      r4, 8(r5)
	or       r0, r6, r0
	or       r6, r7, r0
	addi     r0, r4, 1
	or       r8, r8, r6
	stw      r0, 8(r5)
	srwi     r0, r8, 0x18
	stb      r0, 0(r4)
	rlwinm   r7, r8, 0x10, 0x18, 0x1f
	rlwinm   r6, r8, 0x18, 0x18, 0x1f
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r0, 8(r4)
	subf     r4, r30, r0
	bl       DCStoreRange
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
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
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r0, 0x48(r3)
	lwz      r3, 0(r4)
	add      r0, r3, r0
	stw      r0, 8(r4)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, SizeOfLoadColorChans@sda21(r13)
	lwz      r30, 8(r4)
	lwz      r0, 0xc(r4)
	add      r3, r30, r3
	cmplw    r3, r0
	ble      lbl_800795E0
	bl       GDOverflowed

lbl_800795E0:
	lwz      r6, __GDCurrentDL@sda21(r13)
	li       r9, 0x10
	li       r0, 0
	li       r8, 3
	lwz      r5, 8(r6)
	li       r7, 0xe
	addi     r3, r1, 0x14
	addi     r4, r5, 1
	stw      r4, 8(r6)
	stb      r9, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r4, r5, 1
	stw      r4, 8(r6)
	stb      r0, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r4, r5, 1
	stw      r4, 8(r6)
	stb      r8, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r4, r5, 1
	stw      r4, 8(r6)
	stb      r9, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r4, r5, 1
	stw      r4, 8(r6)
	stb      r7, 0(r5)
	lwz      r4, lbl_80516AD8@sda21(r2)
	lhz      r11, 0x16(r31)
	stw      r4, 0x14(r1)
	rlwinm   r4, r11, 0x17, 0x1e, 0x1f
	rlwinm   r7, r11, 0x19, 0x18, 0x1b
	lbzx     r8, r3, r4
	clrlwi   r9, r11, 0x1f
	rlwimi   r7, r11, 0x1e, 0x1c, 0x1f
	rlwinm   r10, r11, 0x19, 0x1e, 0x1f
	neg      r3, r8
	rlwimi   r9, r11, 0, 0x1e, 0x1e
	or       r5, r3, r8
	cmpwi    r8, 0
	subfic   r4, r8, 2
	addi     r3, r8, -2
	or       r3, r4, r3
	rlwimi   r9, r7, 2, 0x1a, 0x1d
	rlwinm   r8, r7, 7, 0x11, 0x14
	rlwinm   r7, r5, 0xb, 0x15, 0x15
	rlwinm   r6, r3, 0xa, 0x16, 0x16
	rlwimi   r9, r11, 0, 0x19, 0x19
	bne      lbl_800796B4
	mr       r10, r0

lbl_800796B4:
	lwz      r5, __GDCurrentDL@sda21(r13)
	slwi     r0, r10, 7
	or       r0, r9, r0
	addi     r3, r1, 0x10
	lwz      r4, 8(r5)
	or       r0, r6, r0
	or       r6, r7, r0
	addi     r0, r4, 1
	or       r8, r8, r6
	stw      r0, 8(r5)
	srwi     r0, r8, 0x18
	stb      r0, 0(r4)
	rlwinm   r7, r8, 0x10, 0x18, 0x1f
	rlwinm   r6, r8, 0x18, 0x18, 0x1f
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lwz      r0, lbl_80516AD8@sda21(r2)
	lhz      r8, 0x1a(r31)
	stw      r0, 0x10(r1)
	rlwinm   r0, r8, 0x17, 0x1e, 0x1f
	rlwinm   r6, r8, 0x19, 0x18, 0x1b
	lbzx     r7, r3, r0
	clrlwi   r9, r8, 0x1f
	rlwimi   r6, r8, 0x1e, 0x1c, 0x1f
	rlwinm   r10, r8, 0x19, 0x1e, 0x1f
	neg      r0, r7
	rlwimi   r9, r8, 0, 0x1e, 0x1e
	or       r4, r0, r7
	cmpwi    r7, 0
	subfic   r3, r7, 2
	addi     r0, r7, -2
	or       r0, r3, r0
	rlwimi   r9, r6, 2, 0x1a, 0x1d
	rlwinm   r3, r8, 0x1a, 0x1f, 0x1f
	rlwinm   r8, r6, 7, 0x11, 0x14
	rlwinm   r7, r4, 0xb, 0x15, 0x15
	rlwinm   r6, r0, 0xa, 0x16, 0x16
	rlwimi   r9, r3, 6, 0x19, 0x19
	bne      lbl_80079788
	li       r10, 0

lbl_80079788:
	lwz      r5, __GDCurrentDL@sda21(r13)
	slwi     r0, r10, 7
	or       r0, r9, r0
	addi     r3, r1, 0xc
	lwz      r4, 8(r5)
	or       r0, r6, r0
	or       r6, r7, r0
	addi     r0, r4, 1
	or       r8, r8, r6
	stw      r0, 8(r5)
	srwi     r0, r8, 0x18
	stb      r0, 0(r4)
	rlwinm   r7, r8, 0x10, 0x18, 0x1f
	rlwinm   r6, r8, 0x18, 0x18, 0x1f
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lwz      r0, lbl_80516AD8@sda21(r2)
	lhz      r8, 0x18(r31)
	stw      r0, 0xc(r1)
	rlwinm   r0, r8, 0x17, 0x1e, 0x1f
	rlwinm   r6, r8, 0x19, 0x18, 0x1b
	lbzx     r7, r3, r0
	clrlwi   r9, r8, 0x1f
	rlwimi   r6, r8, 0x1e, 0x1c, 0x1f
	rlwinm   r10, r8, 0x19, 0x1e, 0x1f
	neg      r0, r7
	rlwimi   r9, r8, 0, 0x1e, 0x1e
	or       r4, r0, r7
	cmpwi    r7, 0
	subfic   r3, r7, 2
	addi     r0, r7, -2
	or       r0, r3, r0
	rlwimi   r9, r6, 2, 0x1a, 0x1d
	rlwinm   r3, r8, 0x1a, 0x1f, 0x1f
	rlwinm   r8, r6, 7, 0x11, 0x14
	rlwinm   r7, r4, 0xb, 0x15, 0x15
	rlwinm   r6, r0, 0xa, 0x16, 0x16
	rlwimi   r9, r3, 6, 0x19, 0x19
	bne      lbl_8007985C
	li       r10, 0

lbl_8007985C:
	lwz      r5, __GDCurrentDL@sda21(r13)
	slwi     r0, r10, 7
	or       r0, r9, r0
	addi     r3, r1, 8
	lwz      r4, 8(r5)
	or       r0, r6, r0
	or       r6, r7, r0
	addi     r0, r4, 1
	or       r8, r8, r6
	stw      r0, 8(r5)
	srwi     r0, r8, 0x18
	stb      r0, 0(r4)
	rlwinm   r7, r8, 0x10, 0x18, 0x1f
	rlwinm   r6, r8, 0x18, 0x18, 0x1f
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lwz      r0, lbl_80516AD8@sda21(r2)
	lhz      r10, 0x1c(r31)
	stw      r0, 8(r1)
	rlwinm   r0, r10, 0x17, 0x1e, 0x1f
	rlwinm   r6, r10, 0x19, 0x18, 0x1b
	lbzx     r7, r3, r0
	clrlwi   r8, r10, 0x1f
	rlwimi   r6, r10, 0x1e, 0x1c, 0x1f
	rlwinm   r9, r10, 0x19, 0x1e, 0x1f
	neg      r0, r7
	rlwimi   r8, r10, 0, 0x1e, 0x1e
	or       r4, r0, r7
	cmpwi    r7, 0
	subfic   r3, r7, 2
	addi     r0, r7, -2
	or       r0, r3, r0
	rlwimi   r8, r6, 2, 0x1a, 0x1d
	rlwinm   r7, r6, 7, 0x11, 0x14
	rlwinm   r6, r4, 0xb, 0x15, 0x15
	rlwinm   r5, r0, 0xa, 0x16, 0x16
	rlwimi   r8, r10, 0, 0x19, 0x19
	bne      lbl_8007992C
	li       r9, 0

lbl_8007992C:
	lwz      r4, __GDCurrentDL@sda21(r13)
	slwi     r0, r9, 7
	or       r0, r8, r0
	li       r29, 0
	lwz      r3, 8(r4)
	or       r0, r5, r0
	or       r5, r6, r0
	addi     r0, r3, 1
	or       r7, r7, r5
	stw      r0, 8(r4)
	srwi     r0, r7, 0x18
	stb      r0, 0(r3)
	rlwinm   r6, r7, 0x10, 0x18, 0x1f
	rlwinm   r5, r7, 0x18, 0x18, 0x1f
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r6, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r5, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r7, 0(r3)

lbl_800799A0:
	lwz      r3, 0x20(r31)
	cmplwi   r3, 0
	beq      lbl_800799B4
	mr       r4, r29
	bl       load__11J3DLightObjCFUl

lbl_800799B4:
	addi     r29, r29, 1
	addi     r31, r31, 4
	cmplwi   r29, 8
	blt      lbl_800799A0
	lwz      r4, __GDCurrentDL@sda21(r13)
	mr       r3, r30
	lwz      r0, 8(r4)
	subf     r4, r30, r0
	bl       DCStoreRange
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
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
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r3, SizeOfLoadColorChans@sda21(r13)
	lwz      r4, 8(r5)
	lwz      r0, 0xc(r5)
	add      r3, r4, r3
	cmplw    r3, r0
	ble      lbl_80079C0C
	bl       GDOverflowed

lbl_80079C0C:
	lwz      r6, __GDCurrentDL@sda21(r13)
	li       r9, 0x10
	li       r0, 0
	li       r8, 3
	lwz      r5, 8(r6)
	li       r7, 0xe
	addi     r3, r1, 0x14
	addi     r4, r5, 1
	stw      r4, 8(r6)
	stb      r9, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r4, r5, 1
	stw      r4, 8(r6)
	stb      r0, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r4, r5, 1
	stw      r4, 8(r6)
	stb      r8, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r4, r5, 1
	stw      r4, 8(r6)
	stb      r9, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r4, r5, 1
	stw      r4, 8(r6)
	stb      r7, 0(r5)
	lwz      r4, lbl_80516AD8@sda21(r2)
	lhz      r11, 0xe(r31)
	stw      r4, 0x14(r1)
	rlwinm   r4, r11, 0x17, 0x1e, 0x1f
	rlwinm   r7, r11, 0x19, 0x18, 0x1b
	lbzx     r8, r3, r4
	clrlwi   r9, r11, 0x1f
	rlwimi   r7, r11, 0x1e, 0x1c, 0x1f
	rlwinm   r10, r11, 0x19, 0x1e, 0x1f
	neg      r3, r8
	rlwimi   r9, r11, 0, 0x1e, 0x1e
	or       r5, r3, r8
	cmpwi    r8, 0
	subfic   r4, r8, 2
	addi     r3, r8, -2
	or       r3, r4, r3
	rlwimi   r9, r7, 2, 0x1a, 0x1d
	rlwinm   r8, r7, 7, 0x11, 0x14
	rlwinm   r7, r5, 0xb, 0x15, 0x15
	rlwinm   r6, r3, 0xa, 0x16, 0x16
	rlwimi   r9, r11, 0, 0x19, 0x19
	bne      lbl_80079CE0
	mr       r10, r0

lbl_80079CE0:
	lwz      r5, __GDCurrentDL@sda21(r13)
	slwi     r0, r10, 7
	or       r0, r9, r0
	addi     r3, r1, 0x10
	lwz      r4, 8(r5)
	or       r0, r6, r0
	or       r6, r7, r0
	addi     r0, r4, 1
	or       r8, r8, r6
	stw      r0, 8(r5)
	srwi     r0, r8, 0x18
	stb      r0, 0(r4)
	rlwinm   r7, r8, 0x10, 0x18, 0x1f
	rlwinm   r6, r8, 0x18, 0x18, 0x1f
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lwz      r0, lbl_80516AD8@sda21(r2)
	lhz      r8, 0x12(r31)
	stw      r0, 0x10(r1)
	rlwinm   r0, r8, 0x17, 0x1e, 0x1f
	rlwinm   r6, r8, 0x19, 0x18, 0x1b
	lbzx     r7, r3, r0
	clrlwi   r9, r8, 0x1f
	rlwimi   r6, r8, 0x1e, 0x1c, 0x1f
	rlwinm   r10, r8, 0x19, 0x1e, 0x1f
	neg      r0, r7
	rlwimi   r9, r8, 0, 0x1e, 0x1e
	or       r4, r0, r7
	cmpwi    r7, 0
	subfic   r3, r7, 2
	addi     r0, r7, -2
	or       r0, r3, r0
	rlwimi   r9, r6, 2, 0x1a, 0x1d
	rlwinm   r3, r8, 0x1a, 0x1f, 0x1f
	rlwinm   r8, r6, 7, 0x11, 0x14
	rlwinm   r7, r4, 0xb, 0x15, 0x15
	rlwinm   r6, r0, 0xa, 0x16, 0x16
	rlwimi   r9, r3, 6, 0x19, 0x19
	bne      lbl_80079DB4
	li       r10, 0

lbl_80079DB4:
	lwz      r5, __GDCurrentDL@sda21(r13)
	slwi     r0, r10, 7
	or       r0, r9, r0
	addi     r3, r1, 0xc
	lwz      r4, 8(r5)
	or       r0, r6, r0
	or       r6, r7, r0
	addi     r0, r4, 1
	or       r8, r8, r6
	stw      r0, 8(r5)
	srwi     r0, r8, 0x18
	stb      r0, 0(r4)
	rlwinm   r7, r8, 0x10, 0x18, 0x1f
	rlwinm   r6, r8, 0x18, 0x18, 0x1f
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lwz      r0, lbl_80516AD8@sda21(r2)
	lhz      r8, 0x10(r31)
	stw      r0, 0xc(r1)
	rlwinm   r0, r8, 0x17, 0x1e, 0x1f
	rlwinm   r6, r8, 0x19, 0x18, 0x1b
	lbzx     r7, r3, r0
	clrlwi   r9, r8, 0x1f
	rlwimi   r6, r8, 0x1e, 0x1c, 0x1f
	rlwinm   r10, r8, 0x19, 0x1e, 0x1f
	neg      r0, r7
	rlwimi   r9, r8, 0, 0x1e, 0x1e
	or       r4, r0, r7
	cmpwi    r7, 0
	subfic   r3, r7, 2
	addi     r0, r7, -2
	or       r0, r3, r0
	rlwimi   r9, r6, 2, 0x1a, 0x1d
	rlwinm   r3, r8, 0x1a, 0x1f, 0x1f
	rlwinm   r8, r6, 7, 0x11, 0x14
	rlwinm   r7, r4, 0xb, 0x15, 0x15
	rlwinm   r6, r0, 0xa, 0x16, 0x16
	rlwimi   r9, r3, 6, 0x19, 0x19
	bne      lbl_80079E88
	li       r10, 0

lbl_80079E88:
	lwz      r5, __GDCurrentDL@sda21(r13)
	slwi     r0, r10, 7
	or       r0, r9, r0
	addi     r3, r1, 8
	lwz      r4, 8(r5)
	or       r0, r6, r0
	or       r6, r7, r0
	addi     r0, r4, 1
	or       r8, r8, r6
	stw      r0, 8(r5)
	srwi     r0, r8, 0x18
	stb      r0, 0(r4)
	rlwinm   r7, r8, 0x10, 0x18, 0x1f
	rlwinm   r6, r8, 0x18, 0x18, 0x1f
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lwz      r0, lbl_80516AD8@sda21(r2)
	lhz      r10, 0x14(r31)
	stw      r0, 8(r1)
	rlwinm   r0, r10, 0x17, 0x1e, 0x1f
	rlwinm   r6, r10, 0x19, 0x18, 0x1b
	lbzx     r7, r3, r0
	clrlwi   r8, r10, 0x1f
	rlwimi   r6, r10, 0x1e, 0x1c, 0x1f
	rlwinm   r9, r10, 0x19, 0x1e, 0x1f
	neg      r0, r7
	rlwimi   r8, r10, 0, 0x1e, 0x1e
	or       r4, r0, r7
	cmpwi    r7, 0
	subfic   r3, r7, 2
	addi     r0, r7, -2
	or       r0, r3, r0
	rlwimi   r8, r6, 2, 0x1a, 0x1d
	rlwinm   r7, r6, 7, 0x11, 0x14
	rlwinm   r6, r4, 0xb, 0x15, 0x15
	rlwinm   r5, r0, 0xa, 0x16, 0x16
	rlwimi   r8, r10, 0, 0x19, 0x19
	bne      lbl_80079F58
	li       r9, 0

lbl_80079F58:
	lwz      r4, __GDCurrentDL@sda21(r13)
	slwi     r0, r9, 7
	or       r0, r8, r0
	lwz      r3, 8(r4)
	or       r0, r5, r0
	or       r5, r6, r0
	addi     r0, r3, 1
	or       r7, r7, r5
	stw      r0, 8(r4)
	srwi     r0, r7, 0x18
	stb      r0, 0(r3)
	rlwinm   r6, r7, 0x10, 0x18, 0x1f
	rlwinm   r5, r7, 0x18, 0x18, 0x1f
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r6, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r5, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r7, 0(r3)
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
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
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r3, SizeOfLoadColorChans@sda21(r13)
	lwz      r4, 8(r5)
	lwz      r0, 0xc(r5)
	add      r3, r4, r3
	cmplw    r3, r0
	ble      lbl_8007A200
	bl       GDOverflowed

lbl_8007A200:
	lwz      r6, __GDCurrentDL@sda21(r13)
	li       r9, 0x10
	li       r0, 0
	li       r8, 3
	lwz      r5, 8(r6)
	li       r7, 0xe
	addi     r3, r1, 0x14
	addi     r4, r5, 1
	stw      r4, 8(r6)
	stb      r9, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r4, r5, 1
	stw      r4, 8(r6)
	stb      r0, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r4, r5, 1
	stw      r4, 8(r6)
	stb      r8, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r4, r5, 1
	stw      r4, 8(r6)
	stb      r9, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r4, r5, 1
	stw      r4, 8(r6)
	stb      r7, 0(r5)
	lwz      r4, lbl_80516AD8@sda21(r2)
	lhz      r11, 0x16(r31)
	stw      r4, 0x14(r1)
	rlwinm   r4, r11, 0x17, 0x1e, 0x1f
	rlwinm   r7, r11, 0x19, 0x18, 0x1b
	lbzx     r8, r3, r4
	clrlwi   r9, r11, 0x1f
	rlwimi   r7, r11, 0x1e, 0x1c, 0x1f
	rlwinm   r10, r11, 0x19, 0x1e, 0x1f
	neg      r3, r8
	rlwimi   r9, r11, 0, 0x1e, 0x1e
	or       r5, r3, r8
	cmpwi    r8, 0
	subfic   r4, r8, 2
	addi     r3, r8, -2
	or       r3, r4, r3
	rlwimi   r9, r7, 2, 0x1a, 0x1d
	rlwinm   r8, r7, 7, 0x11, 0x14
	rlwinm   r7, r5, 0xb, 0x15, 0x15
	rlwinm   r6, r3, 0xa, 0x16, 0x16
	rlwimi   r9, r11, 0, 0x19, 0x19
	bne      lbl_8007A2D4
	mr       r10, r0

lbl_8007A2D4:
	lwz      r5, __GDCurrentDL@sda21(r13)
	slwi     r0, r10, 7
	or       r0, r9, r0
	addi     r3, r1, 0x10
	lwz      r4, 8(r5)
	or       r0, r6, r0
	or       r6, r7, r0
	addi     r0, r4, 1
	or       r8, r8, r6
	stw      r0, 8(r5)
	srwi     r0, r8, 0x18
	stb      r0, 0(r4)
	rlwinm   r7, r8, 0x10, 0x18, 0x1f
	rlwinm   r6, r8, 0x18, 0x18, 0x1f
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lwz      r0, lbl_80516AD8@sda21(r2)
	lhz      r8, 0x1a(r31)
	stw      r0, 0x10(r1)
	rlwinm   r0, r8, 0x17, 0x1e, 0x1f
	rlwinm   r6, r8, 0x19, 0x18, 0x1b
	lbzx     r7, r3, r0
	clrlwi   r9, r8, 0x1f
	rlwimi   r6, r8, 0x1e, 0x1c, 0x1f
	rlwinm   r10, r8, 0x19, 0x1e, 0x1f
	neg      r0, r7
	rlwimi   r9, r8, 0, 0x1e, 0x1e
	or       r4, r0, r7
	cmpwi    r7, 0
	subfic   r3, r7, 2
	addi     r0, r7, -2
	or       r0, r3, r0
	rlwimi   r9, r6, 2, 0x1a, 0x1d
	rlwinm   r3, r8, 0x1a, 0x1f, 0x1f
	rlwinm   r8, r6, 7, 0x11, 0x14
	rlwinm   r7, r4, 0xb, 0x15, 0x15
	rlwinm   r6, r0, 0xa, 0x16, 0x16
	rlwimi   r9, r3, 6, 0x19, 0x19
	bne      lbl_8007A3A8
	li       r10, 0

lbl_8007A3A8:
	lwz      r5, __GDCurrentDL@sda21(r13)
	slwi     r0, r10, 7
	or       r0, r9, r0
	addi     r3, r1, 0xc
	lwz      r4, 8(r5)
	or       r0, r6, r0
	or       r6, r7, r0
	addi     r0, r4, 1
	or       r8, r8, r6
	stw      r0, 8(r5)
	srwi     r0, r8, 0x18
	stb      r0, 0(r4)
	rlwinm   r7, r8, 0x10, 0x18, 0x1f
	rlwinm   r6, r8, 0x18, 0x18, 0x1f
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lwz      r0, lbl_80516AD8@sda21(r2)
	lhz      r8, 0x18(r31)
	stw      r0, 0xc(r1)
	rlwinm   r0, r8, 0x17, 0x1e, 0x1f
	rlwinm   r6, r8, 0x19, 0x18, 0x1b
	lbzx     r7, r3, r0
	clrlwi   r9, r8, 0x1f
	rlwimi   r6, r8, 0x1e, 0x1c, 0x1f
	rlwinm   r10, r8, 0x19, 0x1e, 0x1f
	neg      r0, r7
	rlwimi   r9, r8, 0, 0x1e, 0x1e
	or       r4, r0, r7
	cmpwi    r7, 0
	subfic   r3, r7, 2
	addi     r0, r7, -2
	or       r0, r3, r0
	rlwimi   r9, r6, 2, 0x1a, 0x1d
	rlwinm   r3, r8, 0x1a, 0x1f, 0x1f
	rlwinm   r8, r6, 7, 0x11, 0x14
	rlwinm   r7, r4, 0xb, 0x15, 0x15
	rlwinm   r6, r0, 0xa, 0x16, 0x16
	rlwimi   r9, r3, 6, 0x19, 0x19
	bne      lbl_8007A47C
	li       r10, 0

lbl_8007A47C:
	lwz      r5, __GDCurrentDL@sda21(r13)
	slwi     r0, r10, 7
	or       r0, r9, r0
	addi     r3, r1, 8
	lwz      r4, 8(r5)
	or       r0, r6, r0
	or       r6, r7, r0
	addi     r0, r4, 1
	or       r8, r8, r6
	stw      r0, 8(r5)
	srwi     r0, r8, 0x18
	stb      r0, 0(r4)
	rlwinm   r7, r8, 0x10, 0x18, 0x1f
	rlwinm   r6, r8, 0x18, 0x18, 0x1f
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lwz      r0, lbl_80516AD8@sda21(r2)
	lhz      r10, 0x1c(r31)
	stw      r0, 8(r1)
	rlwinm   r0, r10, 0x17, 0x1e, 0x1f
	rlwinm   r6, r10, 0x19, 0x18, 0x1b
	lbzx     r7, r3, r0
	clrlwi   r8, r10, 0x1f
	rlwimi   r6, r10, 0x1e, 0x1c, 0x1f
	rlwinm   r9, r10, 0x19, 0x1e, 0x1f
	neg      r0, r7
	rlwimi   r8, r10, 0, 0x1e, 0x1e
	or       r4, r0, r7
	cmpwi    r7, 0
	subfic   r3, r7, 2
	addi     r0, r7, -2
	or       r0, r3, r0
	rlwimi   r8, r6, 2, 0x1a, 0x1d
	rlwinm   r7, r6, 7, 0x11, 0x14
	rlwinm   r6, r4, 0xb, 0x15, 0x15
	rlwinm   r5, r0, 0xa, 0x16, 0x16
	rlwimi   r8, r10, 0, 0x19, 0x19
	bne      lbl_8007A54C
	li       r9, 0

lbl_8007A54C:
	lwz      r4, __GDCurrentDL@sda21(r13)
	slwi     r0, r9, 7
	or       r0, r8, r0
	li       r30, 0
	lwz      r3, 8(r4)
	or       r0, r5, r0
	or       r5, r6, r0
	addi     r0, r3, 1
	or       r7, r7, r5
	stw      r0, 8(r4)
	srwi     r0, r7, 0x18
	stb      r0, 0(r3)
	rlwinm   r6, r7, 0x10, 0x18, 0x1f
	rlwinm   r5, r7, 0x18, 0x18, 0x1f
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r6, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r5, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r7, 0(r3)

lbl_8007A5C0:
	lwz      r3, 0x20(r31)
	cmplwi   r3, 0
	beq      lbl_8007A5D4
	mr       r4, r30
	bl       load__11J3DLightObjCFUl

lbl_8007A5D4:
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmplwi   r30, 8
	blt      lbl_8007A5C0
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
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
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r25, 0x24(r1)
	mr       r27, r3
	mr       r25, r27
	li       r26, 0
	lwz      r4, __GDCurrentDL@sda21(r13)
	lbz      r29, 0x20(r3)
	lwz      r3, 0(r4)
	lwz      r0, 8(r4)
	subf     r0, r3, r0
	stw      r0, 4(r27)

lbl_8007B1A0:
	lhz      r0, 8(r25)
	cmplwi   r0, 0xffff
	beq      lbl_8007B1B8
	mr       r3, r26
	addi     r4, r25, 8
	bl       loadTexNo__FUlRCUs

lbl_8007B1B8:
	addi     r26, r26, 1
	addi     r25, r25, 2
	cmplwi   r26, 4
	blt      lbl_8007B1A0
	lis      r3, sTexCoordScaleTable__6J3DSys@ha
	mr       r30, r27
	addi     r31, r3, sTexCoordScaleTable__6J3DSys@l
	li       r28, 0
	b        lbl_8007B2A0

lbl_8007B1DC:
	addi     r0, r28, 1
	lbz      r4, 0x10(r30)
	slwi     r0, r0, 2
	lbz      r5, 0x11(r30)
	add      r25, r27, r0
	lbz      r6, 0x12(r30)
	lbz      r7, 0x10(r25)
	mr       r3, r28
	lbz      r8, 0x11(r25)
	lbz      r9, 0x12(r25)
	bl
J3DGDSetTevOrder__F13_GXTevStageID13_GXTexCoordID11_GXTexMapID12_GXChannelID13_GXTexCoordID11_GXTexMapID12_GXChannelID
	lbz      r3, 0x11(r30)
	li       r6, 0
	lbz      r0, 0x10(r30)
	li       r9, 0
	rlwinm   r3, r3, 3, 0x1a, 0x1c
	add      r7, r31, r3
	lhz      r4, 4(r7)
	clrlwi   r3, r0, 0x1d
	lhz      r0, 6(r7)
	subfic   r5, r4, 1
	lhz      r4, 0(r7)
	subfic   r0, r0, 1
	lhz      r7, 2(r7)
	cntlzw   r5, r5
	cntlzw   r0, r0
	rlwinm   r5, r5, 0x1b, 0x18, 0x1f
	rlwinm   r8, r0, 0x1b, 0x18, 0x1f
	bl       J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
	lbz      r3, 0x11(r25)
	li       r6, 0
	lbz      r0, 0x10(r25)
	li       r9, 0
	rlwinm   r3, r3, 3, 0x1a, 0x1c
	add      r7, r31, r3
	lhz      r4, 4(r7)
	clrlwi   r3, r0, 0x1d
	lhz      r0, 6(r7)
	subfic   r5, r4, 1
	lhz      r4, 0(r7)
	subfic   r0, r0, 1
	lhz      r7, 2(r7)
	cntlzw   r5, r5
	cntlzw   r0, r0
	rlwinm   r5, r5, 0x1b, 0x18, 0x1f
	rlwinm   r8, r0, 0x1b, 0x18, 0x1f
	bl       J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
	addi     r30, r30, 8
	addi     r28, r28, 2

lbl_8007B2A0:
	cmplw    r28, r29
	blt      lbl_8007B1DC
	lwz      r4, __GDCurrentDL@sda21(r13)
	mr       r25, r27
	li       r26, 0
	lwz      r3, 0(r4)
	lwz      r0, 8(r4)
	subf     r0, r3, r0
	stw      r0, 0x90(r27)

lbl_8007B2C4:
	lwz      r5, 0x42(r25)
	addi     r3, r26, 1
	lwz      r0, 0x46(r25)
	addi     r4, r1, 0xc
	stw      r5, 0xc(r1)
	stw      r0, 0x10(r1)
	bl       J3DGDSetTevColorS10__F11_GXTevRegID11_GXColorS10
	addi     r26, r26, 1
	addi     r25, r25, 8
	cmplwi   r26, 3
	blt      lbl_8007B2C4
	li       r26, 0
	mr       r25, r27

lbl_8007B2F8:
	lwz      r0, 0x62(r25)
	mr       r3, r26
	addi     r4, r1, 8
	stw      r0, 8(r1)
	bl       J3DGDSetTevKColor__F14_GXTevKColorID8_GXColor
	addi     r26, r26, 1
	addi     r25, r25, 4
	cmplwi   r26, 4
	blt      lbl_8007B2F8
	mr       r3, r27
	mr       r4, r27
	li       r5, 0
	mtctr    r29
	cmplwi   r29, 0
	ble      lbl_8007B4B0

lbl_8007B334:
	lwz      r9, __GDCurrentDL@sda21(r13)
	addi     r6, r5, 0x10
	lwz      r25, 0x21(r3)
	li       r0, 0x61
	lwz      r8, 8(r9)
	slwi     r6, r6, 0x18
	srwi     r12, r25, 0x18
	rlwinm   r11, r25, 0x10, 0x18, 0x1f
	addi     r7, r8, 1
	rlwinm   r10, r25, 0x18, 0x18, 0x1f
	stw      r7, 8(r9)
	addi     r5, r5, 1
	stb      r0, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r7, r8, 1
	stw      r7, 8(r9)
	stb      r12, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r7, r8, 1
	stw      r7, 8(r9)
	stb      r11, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r7, r8, 1
	stw      r7, 8(r9)
	stb      r10, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r7, r8, 1
	stw      r7, 8(r9)
	stb      r25, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r25, 0x25(r3)
	addi     r3, r3, 8
	lwz      r8, 8(r9)
	srwi     r12, r25, 0x18
	rlwinm   r11, r25, 0x10, 0x18, 0x1f
	addi     r7, r8, 1
	rlwinm   r10, r25, 0x18, 0x18, 0x1f
	stw      r7, 8(r9)
	stb      r0, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r7, r8, 1
	stw      r7, 8(r9)
	stb      r12, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r7, r8, 1
	stw      r7, 8(r9)
	stb      r11, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r7, r8, 1
	stw      r7, 8(r9)
	stb      r10, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r7, r8, 1
	stw      r7, 8(r9)
	stb      r25, 0(r8)
	lwz      r8, __GDCurrentDL@sda21(r13)
	lwz      r9, 0x80(r4)
	addi     r4, r4, 4
	lwz      r7, 8(r8)
	or       r11, r9, r6
	addi     r6, r7, 1
	stw      r6, 8(r8)
	srwi     r10, r11, 0x18
	rlwinm   r9, r11, 0x10, 0x18, 0x1f
	rlwinm   r8, r11, 0x18, 0x18, 0x1f
	stb      r0, 0(r7)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r10, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r9, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r8, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r11, 0(r6)
	bdnz     lbl_8007B334

lbl_8007B4B0:
	lis      r3, j3dTevSwapTableTable@ha
	li       r0, 4
	addi     r3, r3, j3dTevSwapTableTable@l
	li       r6, 0
	li       r4, 0
	mtctr    r0

lbl_8007B4C8:
	addi     r5, r4, 0x7a
	lwz      r12, __GDCurrentDL@sda21(r13)
	lbzx     r7, r27, r5
	srwi     r0, r6, 0x1f
	lwz      r11, 8(r12)
	add      r0, r0, r6
	slwi     r7, r7, 2
	lbz      r26, 0x77(r27)
	add      r9, r3, r7
	lbz      r31, 0x73(r27)
	lbz      r8, 1(r9)
	srawi    r7, r0, 1
	lbz      r25, 0(r9)
	addi     r10, r11, 1
	lbz      r30, 0x76(r27)
	slwi     r9, r8, 2
	lbz      r28, 0x72(r27)
	li       r0, 0x61
	or       r9, r25, r9
	addi     r8, r6, 2
	stw      r10, 8(r12)
	slwi     r10, r28, 4
	or       r9, r10, r9
	addi     r29, r7, 0xf6
	stb      r0, 0(r11)
	slwi     r11, r30, 9
	srwi     r7, r8, 0x1f
	slwi     r12, r31, 0xe
	add      r7, r7, r8
	or       r11, r11, r9
	lwz      r10, __GDCurrentDL@sda21(r13)
	slwi     r28, r26, 0x13
	or       r8, r12, r11
	srawi    r7, r7, 1
	or       r25, r28, r8
	lwz      r9, 8(r10)
	rlwimi   r25, r29, 0x18, 0, 7
	addi     r11, r7, 0xf6
	addi     r8, r9, 1
	stw      r8, 8(r10)
	srwi     r7, r25, 0x18
	rlwinm   r12, r25, 0x10, 0x18, 0x1f
	rlwinm   r10, r25, 0x18, 0x18, 0x1f
	stb      r7, 0(r9)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r7, r8, 1
	stw      r7, 8(r9)
	stb      r12, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r7, r8, 1
	stw      r7, 8(r9)
	stb      r10, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r7, r8, 1
	stw      r7, 8(r9)
	stb      r25, 0(r8)
	lbzx     r5, r27, r5
	lwz      r28, __GDCurrentDL@sda21(r13)
	slwi     r5, r5, 2
	lbz      r7, 0x79(r27)
	add      r25, r3, r5
	lbz      r9, 0x75(r27)
	lbz      r5, 3(r25)
	slwi     r10, r7, 0x13
	lwz      r12, 8(r28)
	slwi     r9, r9, 0xe
	lbz      r8, 0x78(r27)
	slwi     r5, r5, 2
	lbz      r26, 2(r25)
	addi     r7, r12, 1
	lbz      r25, 0x74(r27)
	slwi     r8, r8, 9
	or       r5, r26, r5
	stw      r7, 8(r28)
	slwi     r7, r25, 4
	or       r5, r7, r5
	stb      r0, 0(r12)
	or       r0, r8, r5
	or       r0, r9, r0
	lwz      r7, __GDCurrentDL@sda21(r13)
	or       r10, r10, r0
	rlwimi   r10, r11, 0x18, 0, 7
	lwz      r5, 8(r7)
	srwi     r8, r10, 0x18
	addi     r0, r5, 1
	stw      r0, 8(r7)
	stb      r8, 0(r5)
	lwz      r7, __GDCurrentDL@sda21(r13)
	rlwinm   r9, r10, 0x10, 0x18, 0x1f
	rlwinm   r8, r10, 0x18, 0x18, 0x1f
	addi     r4, r4, 1
	lwz      r5, 8(r7)
	addi     r6, r6, 4
	addi     r0, r5, 1
	stw      r0, 8(r7)
	stb      r9, 0(r5)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r7)
	addi     r0, r5, 1
	stw      r0, 8(r7)
	stb      r8, 0(r5)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r7)
	addi     r0, r5, 1
	stw      r0, 8(r7)
	stb      r10, 0(r5)
	bdnz     lbl_8007B4C8
	lmw      r25, 0x24(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
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
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r25, 0x24(r1)
	mr       r27, r3
	mr       r25, r27
	li       r26, 0
	lwz      r4, __GDCurrentDL@sda21(r13)
	lbz      r29, 0x58(r3)
	lwz      r3, 0(r4)
	lwz      r0, 8(r4)
	subf     r0, r3, r0
	stw      r0, 4(r27)

lbl_8007B6C8:
	lhz      r0, 8(r25)
	cmplwi   r0, 0xffff
	beq      lbl_8007B6E0
	mr       r3, r26
	addi     r4, r25, 8
	bl       loadTexNo__FUlRCUs

lbl_8007B6E0:
	addi     r26, r26, 1
	addi     r25, r25, 2
	cmplwi   r26, 8
	blt      lbl_8007B6C8
	lis      r3, sTexCoordScaleTable__6J3DSys@ha
	mr       r30, r27
	addi     r31, r3, sTexCoordScaleTable__6J3DSys@l
	li       r28, 0
	b        lbl_8007B7C8

lbl_8007B704:
	addi     r0, r28, 1
	lbz      r4, 0x18(r30)
	slwi     r0, r0, 2
	lbz      r5, 0x19(r30)
	add      r25, r27, r0
	lbz      r6, 0x1a(r30)
	lbz      r7, 0x18(r25)
	mr       r3, r28
	lbz      r8, 0x19(r25)
	lbz      r9, 0x1a(r25)
	bl
J3DGDSetTevOrder__F13_GXTevStageID13_GXTexCoordID11_GXTexMapID12_GXChannelID13_GXTexCoordID11_GXTexMapID12_GXChannelID
	lbz      r3, 0x19(r30)
	li       r6, 0
	lbz      r0, 0x18(r30)
	li       r9, 0
	rlwinm   r3, r3, 3, 0x1a, 0x1c
	add      r7, r31, r3
	lhz      r4, 4(r7)
	clrlwi   r3, r0, 0x1d
	lhz      r0, 6(r7)
	subfic   r5, r4, 1
	lhz      r4, 0(r7)
	subfic   r0, r0, 1
	lhz      r7, 2(r7)
	cntlzw   r5, r5
	cntlzw   r0, r0
	rlwinm   r5, r5, 0x1b, 0x18, 0x1f
	rlwinm   r8, r0, 0x1b, 0x18, 0x1f
	bl       J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
	lbz      r3, 0x19(r25)
	li       r6, 0
	lbz      r0, 0x18(r25)
	li       r9, 0
	rlwinm   r3, r3, 3, 0x1a, 0x1c
	add      r7, r31, r3
	lhz      r4, 4(r7)
	clrlwi   r3, r0, 0x1d
	lhz      r0, 6(r7)
	subfic   r5, r4, 1
	lhz      r4, 0(r7)
	subfic   r0, r0, 1
	lhz      r7, 2(r7)
	cntlzw   r5, r5
	cntlzw   r0, r0
	rlwinm   r5, r5, 0x1b, 0x18, 0x1f
	rlwinm   r8, r0, 0x1b, 0x18, 0x1f
	bl       J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
	addi     r30, r30, 8
	addi     r28, r28, 2

lbl_8007B7C8:
	cmplw    r28, r29
	blt      lbl_8007B704
	lwz      r4, __GDCurrentDL@sda21(r13)
	mr       r25, r27
	li       r26, 0
	lwz      r3, 0(r4)
	lwz      r0, 8(r4)
	subf     r0, r3, r0
	stw      r0, 0x170(r27)

lbl_8007B7EC:
	lwz      r5, 0xda(r25)
	addi     r3, r26, 1
	lwz      r0, 0xde(r25)
	addi     r4, r1, 0xc
	stw      r5, 0xc(r1)
	stw      r0, 0x10(r1)
	bl       J3DGDSetTevColorS10__F11_GXTevRegID11_GXColorS10
	addi     r26, r26, 1
	addi     r25, r25, 8
	cmplwi   r26, 3
	blt      lbl_8007B7EC
	li       r26, 0
	mr       r25, r27

lbl_8007B820:
	lwz      r0, 0xfa(r25)
	mr       r3, r26
	addi     r4, r1, 8
	stw      r0, 8(r1)
	bl       J3DGDSetTevKColor__F14_GXTevKColorID8_GXColor
	addi     r26, r26, 1
	addi     r25, r25, 4
	cmplwi   r26, 4
	blt      lbl_8007B820
	mr       r3, r27
	mr       r4, r27
	li       r5, 0
	mtctr    r29
	cmplwi   r29, 0
	ble      lbl_8007B9D8

lbl_8007B85C:
	lwz      r9, __GDCurrentDL@sda21(r13)
	addi     r6, r5, 0x10
	lwz      r25, 0x59(r3)
	li       r0, 0x61
	lwz      r8, 8(r9)
	slwi     r6, r6, 0x18
	srwi     r12, r25, 0x18
	rlwinm   r11, r25, 0x10, 0x18, 0x1f
	addi     r7, r8, 1
	rlwinm   r10, r25, 0x18, 0x18, 0x1f
	stw      r7, 8(r9)
	addi     r5, r5, 1
	stb      r0, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r7, r8, 1
	stw      r7, 8(r9)
	stb      r12, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r7, r8, 1
	stw      r7, 8(r9)
	stb      r11, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r7, r8, 1
	stw      r7, 8(r9)
	stb      r10, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r7, r8, 1
	stw      r7, 8(r9)
	stb      r25, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r25, 0x5d(r3)
	addi     r3, r3, 8
	lwz      r8, 8(r9)
	srwi     r12, r25, 0x18
	rlwinm   r11, r25, 0x10, 0x18, 0x1f
	addi     r7, r8, 1
	rlwinm   r10, r25, 0x18, 0x18, 0x1f
	stw      r7, 8(r9)
	stb      r0, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r7, r8, 1
	stw      r7, 8(r9)
	stb      r12, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r7, r8, 1
	stw      r7, 8(r9)
	stb      r11, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r7, r8, 1
	stw      r7, 8(r9)
	stb      r10, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r7, r8, 1
	stw      r7, 8(r9)
	stb      r25, 0(r8)
	lwz      r8, __GDCurrentDL@sda21(r13)
	lwz      r9, 0x130(r4)
	addi     r4, r4, 4
	lwz      r7, 8(r8)
	or       r11, r9, r6
	addi     r6, r7, 1
	stw      r6, 8(r8)
	srwi     r10, r11, 0x18
	rlwinm   r9, r11, 0x10, 0x18, 0x1f
	rlwinm   r8, r11, 0x18, 0x18, 0x1f
	stb      r0, 0(r7)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r10, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r9, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r8, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r11, 0(r6)
	bdnz     lbl_8007B85C

lbl_8007B9D8:
	lis      r3, j3dTevSwapTableTable@ha
	li       r0, 4
	addi     r3, r3, j3dTevSwapTableTable@l
	li       r7, 0
	li       r4, 0
	mtctr    r0

lbl_8007B9F0:
	addi     r6, r4, 0x12a
	add      r5, r27, r7
	lbzx     r8, r27, r6
	srwi     r0, r7, 0x1f
	lwz      r12, __GDCurrentDL@sda21(r13)
	add      r0, r0, r7
	slwi     r8, r8, 2
	lbz      r11, 0x10a(r5)
	add      r25, r3, r8
	lwz      r28, 8(r12)
	lbz      r9, 1(r25)
	srawi    r8, r0, 1
	lbz      r26, 0x11b(r5)
	addi     r10, r28, 1
	lbz      r31, 0x10b(r5)
	addi     r30, r8, 0xf6
	slwi     r8, r9, 2
	lbz      r29, 0x11a(r5)
	lbz      r25, 0(r25)
	li       r0, 0x61
	slwi     r11, r11, 4
	addi     r9, r7, 2
	stw      r10, 8(r12)
	or       r10, r25, r8
	slwi     r12, r29, 9
	slwi     r29, r26, 0x13
	stb      r0, 0(r28)
	or       r10, r11, r10
	srwi     r8, r9, 0x1f
	slwi     r28, r31, 0xe
	or       r10, r12, r10
	lwz      r11, __GDCurrentDL@sda21(r13)
	or       r10, r28, r10
	add      r8, r8, r9
	or       r25, r29, r10
	lwz      r10, 8(r11)
	rlwimi   r25, r30, 0x18, 0, 7
	srawi    r8, r8, 1
	addi     r9, r10, 1
	stw      r9, 8(r11)
	srwi     r9, r25, 0x18
	addi     r11, r8, 0xf6
	rlwinm   r28, r25, 0x10, 0x18, 0x1f
	stb      r9, 0(r10)
	rlwinm   r12, r25, 0x18, 0x18, 0x1f
	lwz      r10, __GDCurrentDL@sda21(r13)
	lwz      r9, 8(r10)
	addi     r8, r9, 1
	stw      r8, 8(r10)
	stb      r28, 0(r9)
	lwz      r10, __GDCurrentDL@sda21(r13)
	lwz      r9, 8(r10)
	addi     r8, r9, 1
	stw      r8, 8(r10)
	stb      r12, 0(r9)
	lwz      r10, __GDCurrentDL@sda21(r13)
	lwz      r9, 8(r10)
	addi     r8, r9, 1
	stw      r8, 8(r10)
	stb      r25, 0(r9)
	lbzx     r6, r27, r6
	lwz      r29, __GDCurrentDL@sda21(r13)
	slwi     r6, r6, 2
	lbz      r8, 0x11d(r5)
	add      r25, r3, r6
	lwz      r28, 8(r29)
	lbz      r6, 3(r25)
	slwi     r10, r8, 0x13
	lbz      r9, 0x10d(r5)
	addi     r12, r28, 1
	lbz      r8, 0x11c(r5)
	slwi     r6, r6, 2
	lbz      r26, 2(r25)
	slwi     r9, r9, 0xe
	lbz      r25, 0x10c(r5)
	slwi     r8, r8, 9
	or       r5, r26, r6
	stw      r12, 8(r29)
	slwi     r6, r25, 4
	or       r5, r6, r5
	stb      r0, 0(r28)
	or       r0, r8, r5
	or       r0, r9, r0
	lwz      r6, __GDCurrentDL@sda21(r13)
	or       r10, r10, r0
	rlwimi   r10, r11, 0x18, 0, 7
	lwz      r5, 8(r6)
	srwi     r8, r10, 0x18
	addi     r0, r5, 1
	stw      r0, 8(r6)
	stb      r8, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	rlwinm   r9, r10, 0x10, 0x18, 0x1f
	rlwinm   r8, r10, 0x18, 0x18, 0x1f
	addi     r4, r4, 1
	lwz      r5, 8(r6)
	addi     r7, r7, 4
	addi     r0, r5, 1
	stw      r0, 8(r6)
	stb      r9, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r0, r5, 1
	stw      r0, 8(r6)
	stb      r8, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r0, r5, 1
	stw      r0, 8(r6)
	stb      r10, 0(r5)
	bdnz     lbl_8007B9F0
	lmw      r25, 0x24(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
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
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r26, r3
	mr       r27, r26
	li       r25, 0
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r0, 4(r3)
	lwz      r3, 0(r4)
	add      r0, r3, r0
	stw      r0, 8(r4)
	lwz      r3, __GDCurrentDL@sda21(r13)
	lbz      r28, 0xd0(r26)
	lwz      r30, 8(r3)

lbl_8007BD60:
	lhz      r0, 8(r27)
	cmplwi   r0, 0xffff
	beq      lbl_8007BD78
	mr       r3, r25
	addi     r4, r27, 8
	bl       loadTexNo__FUlRCUs

lbl_8007BD78:
	addi     r25, r25, 1
	addi     r27, r27, 2
	cmplwi   r25, 8
	blt      lbl_8007BD60
	lis      r3, sTexCoordScaleTable__6J3DSys@ha
	mr       r29, r26
	addi     r31, r3, sTexCoordScaleTable__6J3DSys@l
	li       r27, 0
	b        lbl_8007BE60

lbl_8007BD9C:
	addi     r0, r27, 1
	lbz      r4, 0x18(r29)
	slwi     r0, r0, 2
	lbz      r5, 0x19(r29)
	add      r25, r26, r0
	lbz      r6, 0x1a(r29)
	lbz      r7, 0x18(r25)
	mr       r3, r27
	lbz      r8, 0x19(r25)
	lbz      r9, 0x1a(r25)
	bl
J3DGDSetTevOrder__F13_GXTevStageID13_GXTexCoordID11_GXTexMapID12_GXChannelID13_GXTexCoordID11_GXTexMapID12_GXChannelID
	lbz      r3, 0x19(r29)
	li       r6, 0
	lbz      r0, 0x18(r29)
	li       r9, 0
	rlwinm   r3, r3, 3, 0x1a, 0x1c
	add      r7, r31, r3
	lhz      r4, 4(r7)
	clrlwi   r3, r0, 0x1d
	lhz      r0, 6(r7)
	subfic   r5, r4, 1
	lhz      r4, 0(r7)
	subfic   r0, r0, 1
	lhz      r7, 2(r7)
	cntlzw   r5, r5
	cntlzw   r0, r0
	rlwinm   r5, r5, 0x1b, 0x18, 0x1f
	rlwinm   r8, r0, 0x1b, 0x18, 0x1f
	bl       J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
	lbz      r3, 0x19(r25)
	li       r6, 0
	lbz      r0, 0x18(r25)
	li       r9, 0
	rlwinm   r3, r3, 3, 0x1a, 0x1c
	add      r7, r31, r3
	lhz      r4, 4(r7)
	clrlwi   r3, r0, 0x1d
	lhz      r0, 6(r7)
	subfic   r5, r4, 1
	lhz      r4, 0(r7)
	subfic   r0, r0, 1
	lhz      r7, 2(r7)
	cntlzw   r5, r5
	cntlzw   r0, r0
	rlwinm   r5, r5, 0x1b, 0x18, 0x1f
	rlwinm   r8, r0, 0x1b, 0x18, 0x1f
	bl       J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
	addi     r29, r29, 8
	addi     r27, r27, 2

lbl_8007BE60:
	cmplw    r27, r28
	blt      lbl_8007BD9C
	lwz      r4, __GDCurrentDL@sda21(r13)
	mr       r3, r30
	lwz      r0, 8(r4)
	subf     r4, r30, r0
	bl       DCStoreRange
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
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
void J3DTevBlock1::patchTevReg() { }

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
void J3DTevBlock1::patch() { patchTexNo(); }

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
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r26, r3
	mr       r27, r26
	li       r25, 0
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r0, 4(r3)
	lwz      r3, 0(r4)
	add      r0, r3, r0
	stw      r0, 8(r4)
	lwz      r3, __GDCurrentDL@sda21(r13)
	lbz      r28, 0x20(r26)
	lwz      r30, 8(r3)

lbl_8007C508:
	lhz      r0, 8(r27)
	cmplwi   r0, 0xffff
	beq      lbl_8007C520
	mr       r3, r25
	addi     r4, r27, 8
	bl       loadTexNo__FUlRCUs

lbl_8007C520:
	addi     r25, r25, 1
	addi     r27, r27, 2
	cmplwi   r25, 8
	blt      lbl_8007C508
	lis      r3, sTexCoordScaleTable__6J3DSys@ha
	mr       r29, r26
	addi     r31, r3, sTexCoordScaleTable__6J3DSys@l
	li       r27, 0
	b        lbl_8007C608

lbl_8007C544:
	addi     r0, r27, 1
	lbz      r4, 0x10(r29)
	slwi     r0, r0, 2
	lbz      r5, 0x11(r29)
	add      r25, r26, r0
	lbz      r6, 0x12(r29)
	lbz      r7, 0x10(r25)
	mr       r3, r27
	lbz      r8, 0x11(r25)
	lbz      r9, 0x12(r25)
	bl
J3DGDSetTevOrder__F13_GXTevStageID13_GXTexCoordID11_GXTexMapID12_GXChannelID13_GXTexCoordID11_GXTexMapID12_GXChannelID
	lbz      r3, 0x11(r29)
	li       r6, 0
	lbz      r0, 0x10(r29)
	li       r9, 0
	rlwinm   r3, r3, 3, 0x1a, 0x1c
	add      r7, r31, r3
	lhz      r4, 4(r7)
	clrlwi   r3, r0, 0x1d
	lhz      r0, 6(r7)
	subfic   r5, r4, 1
	lhz      r4, 0(r7)
	subfic   r0, r0, 1
	lhz      r7, 2(r7)
	cntlzw   r5, r5
	cntlzw   r0, r0
	rlwinm   r5, r5, 0x1b, 0x18, 0x1f
	rlwinm   r8, r0, 0x1b, 0x18, 0x1f
	bl       J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
	lbz      r3, 0x11(r25)
	li       r6, 0
	lbz      r0, 0x10(r25)
	li       r9, 0
	rlwinm   r3, r3, 3, 0x1a, 0x1c
	add      r7, r31, r3
	lhz      r4, 4(r7)
	clrlwi   r3, r0, 0x1d
	lhz      r0, 6(r7)
	subfic   r5, r4, 1
	lhz      r4, 0(r7)
	subfic   r0, r0, 1
	lhz      r7, 2(r7)
	cntlzw   r5, r5
	cntlzw   r0, r0
	rlwinm   r5, r5, 0x1b, 0x18, 0x1f
	rlwinm   r8, r0, 0x1b, 0x18, 0x1f
	bl       J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
	addi     r29, r29, 8
	addi     r27, r27, 2

lbl_8007C608:
	cmplw    r27, r28
	blt      lbl_8007C544
	lwz      r4, __GDCurrentDL@sda21(r13)
	mr       r3, r30
	lwz      r0, 8(r4)
	subf     r4, r30, r0
	bl       DCStoreRange
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
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
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r26, r3
	mr       r27, r26
	li       r25, 0
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r0, 4(r3)
	lwz      r3, 0(r4)
	add      r0, r3, r0
	stw      r0, 8(r4)
	lwz      r3, __GDCurrentDL@sda21(r13)
	lbz      r28, 0x58(r26)
	lwz      r30, 8(r3)

lbl_8007C824:
	lhz      r0, 8(r27)
	cmplwi   r0, 0xffff
	beq      lbl_8007C83C
	mr       r3, r25
	addi     r4, r27, 8
	bl       loadTexNo__FUlRCUs

lbl_8007C83C:
	addi     r25, r25, 1
	addi     r27, r27, 2
	cmplwi   r25, 8
	blt      lbl_8007C824
	lis      r3, sTexCoordScaleTable__6J3DSys@ha
	mr       r29, r26
	addi     r31, r3, sTexCoordScaleTable__6J3DSys@l
	li       r27, 0
	b        lbl_8007C924

lbl_8007C860:
	addi     r0, r27, 1
	lbz      r4, 0x18(r29)
	slwi     r0, r0, 2
	lbz      r5, 0x19(r29)
	add      r25, r26, r0
	lbz      r6, 0x1a(r29)
	lbz      r7, 0x18(r25)
	mr       r3, r27
	lbz      r8, 0x19(r25)
	lbz      r9, 0x1a(r25)
	bl
J3DGDSetTevOrder__F13_GXTevStageID13_GXTexCoordID11_GXTexMapID12_GXChannelID13_GXTexCoordID11_GXTexMapID12_GXChannelID
	lbz      r3, 0x19(r29)
	li       r6, 0
	lbz      r0, 0x18(r29)
	li       r9, 0
	rlwinm   r3, r3, 3, 0x1a, 0x1c
	add      r7, r31, r3
	lhz      r4, 4(r7)
	clrlwi   r3, r0, 0x1d
	lhz      r0, 6(r7)
	subfic   r5, r4, 1
	lhz      r4, 0(r7)
	subfic   r0, r0, 1
	lhz      r7, 2(r7)
	cntlzw   r5, r5
	cntlzw   r0, r0
	rlwinm   r5, r5, 0x1b, 0x18, 0x1f
	rlwinm   r8, r0, 0x1b, 0x18, 0x1f
	bl       J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
	lbz      r3, 0x19(r25)
	li       r6, 0
	lbz      r0, 0x18(r25)
	li       r9, 0
	rlwinm   r3, r3, 3, 0x1a, 0x1c
	add      r7, r31, r3
	lhz      r4, 4(r7)
	clrlwi   r3, r0, 0x1d
	lhz      r0, 6(r7)
	subfic   r5, r4, 1
	lhz      r4, 0(r7)
	subfic   r0, r0, 1
	lhz      r7, 2(r7)
	cntlzw   r5, r5
	cntlzw   r0, r0
	rlwinm   r5, r5, 0x1b, 0x18, 0x1f
	rlwinm   r8, r0, 0x1b, 0x18, 0x1f
	bl       J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
	addi     r29, r29, 8
	addi     r27, r27, 2

lbl_8007C924:
	cmplw    r27, r28
	blt      lbl_8007C860
	lwz      r4, __GDCurrentDL@sda21(r13)
	mr       r3, r30
	lwz      r0, 8(r4)
	subf     r4, r30, r0
	bl       DCStoreRange
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
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
void J3DTevBlock1::diffTevReg() { }

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
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r27, r3
	lis      r3, j3dSys@ha
	li       r29, 0
	addi     r26, r3, j3dSys@l
	mr       r30, r27
	li       r28, 0
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r0, 4(r27)
	lwz      r4, 0(r5)
	add      r0, r4, r0
	stw      r0, 8(r5)
	lwz      r3, __GDCurrentDL@sda21(r13)
	lwz      r31, 8(r3)

lbl_8007DB9C:
	lhz      r0, 8(r30)
	cmplwi   r0, 0xffff
	beq      lbl_8007DBF4
	lwz      r6, __GDCurrentDL@sda21(r13)
	mr       r3, r28
	lwz      r5, 4(r27)
	addi     r4, r30, 8
	lwz      r0, 0(r6)
	add      r0, r29, r0
	add      r0, r5, r0
	stw      r0, 8(r6)
	bl       patchTexNo_PtrToIdx__FUlRCUs
	lwz      r3, 0x58(r26)
	addi     r29, r29, 0x14
	lhz      r0, 8(r30)
	lwz      r4, 4(r3)
	slwi     r3, r0, 5
	addi     r0, r3, 8
	lbzx     r0, r4, r0
	cmplwi   r0, 1
	bne      lbl_8007DBF4
	addi     r29, r29, 0x23

lbl_8007DBF4:
	addi     r28, r28, 1
	addi     r30, r30, 2
	cmplwi   r28, 8
	blt      lbl_8007DB9C
	lwz      r4, __GDCurrentDL@sda21(r13)
	mr       r3, r31
	lwz      r0, 8(r4)
	subf     r4, r31, r0
	bl       DCStoreRange
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
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
	loadTexCoordScale(GXTexCoordID(mOrders[0].getCoord()), J3DSys::sTexCoordScaleTable[mOrders[0].getMap() & 7]);
	loadTexCoordScale(GXTexCoordID(mOrders[1].getCoord()), J3DSys::sTexCoordScaleTable[mOrders[1].getMap() & 7]);
	loadTexCoordScale(GXTexCoordID(mOrders[2].getCoord()), J3DSys::sTexCoordScaleTable[mOrders[2].getMap() & 7]);
	loadTexCoordScale(GXTexCoordID(mOrders[3].getCoord()), J3DSys::sTexCoordScaleTable[mOrders[3].getMap() & 7]);
	J3DGDSetIndTexOrder(indTexStageNum, GXTexCoordID(mOrders[0].getCoord()), GXTexMapID(mOrders[0].getMap()),
	                    GXTexCoordID(mOrders[1].getCoord()), GXTexMapID(mOrders[1].getMap()), GXTexCoordID(mOrders[2].getCoord()),
	                    GXTexMapID(mOrders[2].getMap()), GXTexCoordID(mOrders[3].getCoord()), GXTexMapID(mOrders[3].getMap()));
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	mr       r29, r30
	stw      r28, 0x10(r1)
	li       r28, 0
	lbz      r31, 4(r3)
	b        lbl_8007DD10

lbl_8007DCF8:
	lbz      r5, 0x30(r29)
	addi     r3, r28, 1
	addi     r4, r29, 0x18
	bl       J3DGDSetIndTexMtx__F14_GXIndTexMtxIDPA3_fSc
	addi     r29, r29, 0x1c
	addi     r28, r28, 1

lbl_8007DD10:
	cmplw    r28, r31
	blt      lbl_8007DCF8
	mr       r29, r30
	li       r28, 0
	b        lbl_8007DD44

lbl_8007DD24:
	lbz      r4, 0x6c(r29)
	mr       r3, r28
	lbz      r5, 0x6d(r29)
	lbz      r6, 0x70(r29)
	lbz      r7, 0x71(r29)
	bl
J3DGDSetIndTexCoordScale__F16_GXIndTexStageID14_GXIndTexScale14_GXIndTexScale14_GXIndTexScale14_GXIndTexScale
	addi     r29, r29, 8
	addi     r28, r28, 2

lbl_8007DD44:
	cmplw    r28, r31
	blt      lbl_8007DD24
	lbz      r4, 6(r30)
	lis      r3, sTexCoordScaleTable__6J3DSys@ha
	addi     r0, r3, sTexCoordScaleTable__6J3DSys@l
	lbz      r3, 5(r30)
	rlwinm   r4, r4, 3, 0x1a, 0x1c
	li       r6, 0
	add      r7, r0, r4
	li       r9, 0
	lhz      r4, 4(r7)
	lhz      r0, 6(r7)
	subfic   r5, r4, 1
	lhz      r4, 0(r7)
	subfic   r0, r0, 1
	lhz      r7, 2(r7)
	cntlzw   r5, r5
	cntlzw   r0, r0
	rlwinm   r5, r5, 0x1b, 0x18, 0x1f
	rlwinm   r8, r0, 0x1b, 0x18, 0x1f
	bl       J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
	lbz      r4, 0xa(r30)
	lis      r3, sTexCoordScaleTable__6J3DSys@ha
	addi     r0, r3, sTexCoordScaleTable__6J3DSys@l
	lbz      r3, 9(r30)
	rlwinm   r4, r4, 3, 0x1a, 0x1c
	li       r6, 0
	add      r7, r0, r4
	li       r9, 0
	lhz      r4, 4(r7)
	lhz      r0, 6(r7)
	subfic   r5, r4, 1
	lhz      r4, 0(r7)
	subfic   r0, r0, 1
	lhz      r7, 2(r7)
	cntlzw   r5, r5
	cntlzw   r0, r0
	rlwinm   r5, r5, 0x1b, 0x18, 0x1f
	rlwinm   r8, r0, 0x1b, 0x18, 0x1f
	bl       J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
	lbz      r4, 0xe(r30)
	lis      r3, sTexCoordScaleTable__6J3DSys@ha
	addi     r0, r3, sTexCoordScaleTable__6J3DSys@l
	lbz      r3, 0xd(r30)
	rlwinm   r4, r4, 3, 0x1a, 0x1c
	li       r6, 0
	add      r7, r0, r4
	li       r9, 0
	lhz      r4, 4(r7)
	lhz      r0, 6(r7)
	subfic   r5, r4, 1
	lhz      r4, 0(r7)
	subfic   r0, r0, 1
	lhz      r7, 2(r7)
	cntlzw   r5, r5
	cntlzw   r0, r0
	rlwinm   r5, r5, 0x1b, 0x18, 0x1f
	rlwinm   r8, r0, 0x1b, 0x18, 0x1f
	bl       J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
	lbz      r4, 0x12(r30)
	lis      r3, sTexCoordScaleTable__6J3DSys@ha
	addi     r0, r3, sTexCoordScaleTable__6J3DSys@l
	lbz      r3, 0x11(r30)
	rlwinm   r4, r4, 3, 0x1a, 0x1c
	li       r6, 0
	add      r7, r0, r4
	li       r9, 0
	lhz      r4, 4(r7)
	lhz      r0, 6(r7)
	subfic   r5, r4, 1
	lhz      r4, 0(r7)
	subfic   r0, r0, 1
	lhz      r7, 2(r7)
	cntlzw   r5, r5
	cntlzw   r0, r0
	rlwinm   r5, r5, 0x1b, 0x18, 0x1f
	rlwinm   r8, r0, 0x1b, 0x18, 0x1f
	bl       J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
	lbz      r0, 0x12(r30)
	mr       r3, r31
	stw      r0, 8(r1)
	lbz      r4, 5(r30)
	lbz      r5, 6(r30)
	lbz      r6, 9(r30)
	lbz      r7, 0xa(r30)
	lbz      r8, 0xd(r30)
	lbz      r9, 0xe(r30)
	lbz      r10, 0x11(r30)
	bl
J3DGDSetIndTexOrder__FUl13_GXTexCoordID11_GXTexMapID13_GXTexCoordID11_GXTexMapID13_GXTexCoordID11_GXTexMapID13_GXTexCoordID11_GXTexMapID
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
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
	loadTexCoordScale(GXTexCoordID(mOrders[0].getCoord()), J3DSys::sTexCoordScaleTable[mOrders[0].getMap() & 7]);
	J3DGDSetIndTexOrder(indTexStageNum, GXTexCoordID(mOrders[0].getCoord()), GXTexMapID(mOrders[0].getMap()),
	                    GXTexCoordID(mOrders[1].getCoord()), GXTexMapID(mOrders[1].getMap()), GXTexCoordID(mOrders[2].getCoord()),
	                    GXTexMapID(mOrders[2].getMap()), GXTexCoordID(mOrders[3].getCoord()), GXTexMapID(mOrders[3].getMap()));
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	rlwinm.  r0, r4, 0, 4, 4
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	beq      lbl_8007DF8C
	lbz      r31, 4(r30)
	addi     r4, r30, 0x18
	lbz      r5, 0x30(r30)
	li       r3, 1
	bl       J3DGDSetIndTexMtx__F14_GXIndTexMtxIDPA3_fSc
	lbz      r4, 0x6c(r30)
	li       r3, 0
	lbz      r5, 0x6d(r30)
	lbz      r6, 0x70(r30)
	lbz      r7, 0x71(r30)
	bl
J3DGDSetIndTexCoordScale__F16_GXIndTexStageID14_GXIndTexScale14_GXIndTexScale14_GXIndTexScale14_GXIndTexScale
	lbz      r4, 6(r30)
	lis      r3, sTexCoordScaleTable__6J3DSys@ha
	addi     r0, r3, sTexCoordScaleTable__6J3DSys@l
	lbz      r3, 5(r30)
	rlwinm   r4, r4, 3, 0x1a, 0x1c
	li       r6, 0
	add      r7, r0, r4
	li       r9, 0
	lhz      r4, 4(r7)
	lhz      r0, 6(r7)
	subfic   r5, r4, 1
	lhz      r4, 0(r7)
	subfic   r0, r0, 1
	lhz      r7, 2(r7)
	cntlzw   r5, r5
	cntlzw   r0, r0
	rlwinm   r5, r5, 0x1b, 0x18, 0x1f
	rlwinm   r8, r0, 0x1b, 0x18, 0x1f
	bl       J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
	lbz      r0, 0x12(r30)
	mr       r3, r31
	stw      r0, 8(r1)
	lbz      r4, 5(r30)
	lbz      r5, 6(r30)
	lbz      r6, 9(r30)
	lbz      r7, 0xa(r30)
	lbz      r8, 0xd(r30)
	lbz      r9, 0xe(r30)
	lbz      r10, 0x11(r30)
	bl
J3DGDSetIndTexOrder__FUl13_GXTexCoordID11_GXTexMapID13_GXTexCoordID11_GXTexMapID13_GXTexCoordID11_GXTexMapID13_GXTexCoordID11_GXTexMapID

lbl_8007DF8C:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
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
	mAlphaComp.load(); // this needs fixing
	mBlend.load(mDither);
	mZMode.load();
	loadZCompLoc(mZCompLoc);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	lwz      r0, 0xc(r4)
	addi     r3, r3, 0x1e
	cmplw    r3, r0
	ble      lbl_8007E858
	bl       GDOverflowed

lbl_8007E858:
	lhz      r0, 4(r31)
	lis      r3, j3dAlphaCmpTable@ha
	lwz      r8, __GDCurrentDL@sda21(r13)
	addi     r4, r3, j3dAlphaCmpTable@l
	mulli    r5, r0, 3
	lbz      r10, 7(r31)
	lwz      r7, 8(r8)
	li       r0, 0x61
	li       r29, 0xfe
	add      r3, r4, r5
	lbzx     r9, r4, r5
	addi     r5, r7, 1
	lbz      r4, 2(r3)
	li       r30, 0
	lbz      r6, 1(r3)
	rlwinm   r3, r10, 8, 0x10, 0x17
	lbz      r10, 6(r31)
	slwi     r4, r4, 0x13
	slwi     r6, r6, 0x16
	li       r12, 0x1f
	stw      r5, 8(r8)
	rlwimi   r3, r10, 0, 0x18, 0x1f
	rlwimi   r3, r9, 0x10, 8, 0xf
	li       r11, 0xe7
	stb      r0, 0(r7)
	or       r3, r4, r3
	or       r3, r6, r3
	lwz      r5, __GDCurrentDL@sda21(r13)
	oris     r9, r3, 0xf300
	srwi     r8, r9, 0x18
	lwz      r4, 8(r5)
	rlwinm   r7, r9, 0x10, 0x18, 0x1f
	rlwinm   r6, r9, 0x18, 0x18, 0x1f
	addi     r3, r4, 1
	stw      r3, 8(r5)
	stb      r8, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r3, r4, 1
	stw      r3, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r3, r4, 1
	stw      r3, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r3, r4, 1
	stw      r3, 8(r5)
	stb      r9, 0(r4)
	lwz      r10, __GDCurrentDL@sda21(r13)
	lbz      r4, 8(r31)
	lwz      r9, 8(r10)
	lbz      r3, 0xf(r31)
	cmpwi    r4, 1
	lbz      r7, 0xb(r31)
	addi     r8, r9, 1
	lbz      r6, 0xa(r31)
	lbz      r5, 9(r31)
	stw      r8, 8(r10)
	stb      r0, 0(r9)
	lwz      r10, __GDCurrentDL@sda21(r13)
	lwz      r9, 8(r10)
	addi     r8, r9, 1
	stw      r8, 8(r10)
	stb      r29, 0(r9)
	lwz      r10, __GDCurrentDL@sda21(r13)
	lwz      r9, 8(r10)
	addi     r8, r9, 1
	stw      r8, 8(r10)
	stb      r30, 0(r9)
	lwz      r10, __GDCurrentDL@sda21(r13)
	lwz      r9, 8(r10)
	addi     r8, r9, 1
	stw      r8, 8(r10)
	stb      r12, 0(r9)
	lwz      r10, __GDCurrentDL@sda21(r13)
	lwz      r9, 8(r10)
	addi     r8, r9, 1
	stw      r8, 8(r10)
	stb      r11, 0(r9)
	lwz      r10, __GDCurrentDL@sda21(r13)
	lwz      r9, 8(r10)
	addi     r8, r9, 1
	stw      r8, 8(r10)
	stb      r0, 0(r9)
	beq      lbl_8007E9C0
	cmpwi    r4, 3
	bne      lbl_8007E9C4

lbl_8007E9C0:
	li       r30, 1

lbl_8007E9C4:
	subfic   r9, r4, 3
	clrlwi   r8, r30, 0x18
	subfic   r0, r4, 2
	lwz      r11, __GDCurrentDL@sda21(r13)
	cntlzw   r0, r0
	rlwinm   r3, r3, 2, 0x16, 0x1d
	rlwinm   r0, r0, 0x1c, 0x17, 0x1e
	slwi     r6, r6, 5
	or       r8, r0, r8
	cntlzw   r30, r9
	or       r8, r3, r8
	lwz      r10, 8(r11)
	or       r12, r6, r8
	slwi     r5, r5, 8
	rlwinm   r8, r30, 6, 0xd, 0x14
	addi     r9, r10, 1
	or       r12, r5, r12
	slwi     r7, r7, 0xc
	or       r12, r8, r12
	stw      r9, 8(r11)
	or       r9, r7, r12
	cmpwi    r4, 1
	oris     r9, r9, 0x4100
	srwi     r9, r9, 0x18
	stb      r9, 0(r10)
	li       r9, 0
	beq      lbl_8007EA38
	cmpwi    r4, 3
	bne      lbl_8007EA3C

lbl_8007EA38:
	li       r9, 1

lbl_8007EA3C:
	clrlwi   r9, r9, 0x18
	lwz      r12, __GDCurrentDL@sda21(r13)
	or       r9, r0, r9
	cmpwi    r4, 1
	or       r9, r3, r9
	lwz      r11, 8(r12)
	or       r10, r6, r9
	li       r9, 0
	or       r30, r5, r10
	addi     r10, r11, 1
	or       r30, r8, r30
	stw      r10, 8(r12)
	or       r10, r7, r30
	oris     r10, r10, 0x4100
	rlwinm   r10, r10, 0x10, 0x18, 0x1f
	stb      r10, 0(r11)
	beq      lbl_8007EA88
	cmpwi    r4, 3
	bne      lbl_8007EA8C

lbl_8007EA88:
	li       r9, 1

lbl_8007EA8C:
	clrlwi   r9, r9, 0x18
	lwz      r12, __GDCurrentDL@sda21(r13)
	or       r9, r0, r9
	cmpwi    r4, 1
	or       r9, r3, r9
	lwz      r11, 8(r12)
	or       r10, r6, r9
	li       r9, 0
	or       r30, r5, r10
	addi     r10, r11, 1
	or       r30, r8, r30
	stw      r10, 8(r12)
	or       r10, r7, r30
	oris     r10, r10, 0x4100
	rlwinm   r10, r10, 0x18, 0x18, 0x1f
	stb      r10, 0(r11)
	beq      lbl_8007EAD8
	cmpwi    r4, 3
	bne      lbl_8007EADC

lbl_8007EAD8:
	li       r9, 1

lbl_8007EADC:
	or       r0, r0, r9
	lwz      r10, __GDCurrentDL@sda21(r13)
	or       r0, r3, r0
	lis      r3, j3dZModeTable@ha
	or       r0, r6, r0
	lwz      r4, 8(r10)
	or       r0, r5, r0
	addi     r9, r3, j3dZModeTable@l
	or       r3, r8, r0
	li       r6, 0
	or       r3, r7, r3
	addi     r0, r4, 1
	stw      r0, 8(r10)
	ori      r3, r3, 0
	li       r0, 0x61
	li       r7, 0xfe
	stb      r3, 0(r4)
	lhz      r3, 0xc(r31)
	lwz      r8, __GDCurrentDL@sda21(r13)
	mulli    r3, r3, 3
	lwz      r5, 8(r8)
	add      r4, r9, r3
	lbzx     r11, r9, r3
	lbz      r10, 2(r4)
	addi     r3, r5, 1
	lbz      r9, 1(r4)
	rlwinm   r4, r10, 4, 0x14, 0x1b
	stw      r3, 8(r8)
	slwi     r3, r9, 1
	or       r3, r11, r3
	stb      r0, 0(r5)
	or       r3, r4, r3
	oris     r11, r3, 0x4000
	lwz      r5, __GDCurrentDL@sda21(r13)
	srwi     r10, r11, 0x18
	rlwinm   r9, r11, 0x10, 0x18, 0x1f
	rlwinm   r8, r11, 0x18, 0x18, 0x1f
	lwz      r4, 8(r5)
	addi     r3, r4, 1
	stw      r3, 8(r5)
	stb      r10, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r3, r4, 1
	stw      r3, 8(r5)
	stb      r9, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r3, r4, 1
	stw      r3, 8(r5)
	stb      r8, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r3, r4, 1
	stw      r3, 8(r5)
	stb      r11, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lbz      r9, 0xe(r31)
	lwz      r4, 8(r5)
	addi     r3, r4, 1
	stw      r3, 8(r5)
	stb      r0, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r3, r4, 1
	stw      r3, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r3, r4, 1
	stw      r3, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r3, r4, 1
	stw      r3, 8(r5)
	stb      r6, 0(r4)
	lwz      r8, __GDCurrentDL@sda21(r13)
	rlwinm   r3, r9, 6, 0x12, 0x19
	oris     r10, r3, 0x4300
	li       r9, 0x40
	lwz      r4, 8(r8)
	srwi     r7, r10, 0x18
	rlwinm   r6, r10, 0x10, 0x18, 0x1f
	rlwinm   r5, r10, 0x18, 0x18, 0x1f
	addi     r3, r4, 1
	stw      r3, 8(r8)
	stb      r9, 0(r4)
	lwz      r8, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r8)
	addi     r3, r4, 1
	stw      r3, 8(r8)
	stb      r0, 0(r4)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r7, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r6, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r5, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r10, 0(r3)
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
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
	mAlphaComp.load(); // needs fixing
	mBlend.load(mDither);
	mZMode.load();
	loadZCompLoc(mZCompLoc);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 0(r4)
	lwz      r0, 8(r4)
	subf     r0, r3, r0
	stw      r0, 0x3c(r31)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	lwz      r0, 0xc(r4)
	addi     r3, r3, 0x55
	cmplw    r3, r0
	ble      lbl_8007F000
	bl       GDOverflowed

lbl_8007F000:
	lwz      r0, 0x18(r31)
	addi     r4, r1, 8
	stw      r0, 8(r1)
	lbz      r3, 4(r31)
	lfs      f1, 8(r31)
	lfs      f2, 0xc(r31)
	lfs      f3, 0x10(r31)
	lfs      f4, 0x14(r31)
	bl       J3DGDSetFog__F10_GXFogTypeffff8_GXColor
	lbz      r3, 5(r31)
	addi     r5, r31, 0x1c
	lhz      r4, 6(r31)
	bl       J3DGDSetFogRangeAdj__FUcUsP14_GXFogAdjTable
	lhz      r0, 0x30(r31)
	lis      r3, j3dAlphaCmpTable@ha
	lwz      r8, __GDCurrentDL@sda21(r13)
	addi     r4, r3, j3dAlphaCmpTable@l
	mulli    r5, r0, 3
	lbz      r10, 0x33(r31)
	lwz      r7, 8(r8)
	li       r0, 0x61
	li       r29, 0xfe
	add      r3, r4, r5
	lbzx     r9, r4, r5
	addi     r5, r7, 1
	lbz      r4, 2(r3)
	li       r30, 0
	lbz      r6, 1(r3)
	rlwinm   r3, r10, 8, 0x10, 0x17
	lbz      r10, 0x32(r31)
	slwi     r4, r4, 0x13
	slwi     r6, r6, 0x16
	li       r12, 0x1f
	stw      r5, 8(r8)
	rlwimi   r3, r10, 0, 0x18, 0x1f
	rlwimi   r3, r9, 0x10, 8, 0xf
	li       r11, 0xe7
	stb      r0, 0(r7)
	or       r3, r4, r3
	or       r3, r6, r3
	lwz      r5, __GDCurrentDL@sda21(r13)
	oris     r9, r3, 0xf300
	srwi     r8, r9, 0x18
	lwz      r4, 8(r5)
	rlwinm   r7, r9, 0x10, 0x18, 0x1f
	rlwinm   r6, r9, 0x18, 0x18, 0x1f
	addi     r3, r4, 1
	stw      r3, 8(r5)
	stb      r8, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r3, r4, 1
	stw      r3, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r3, r4, 1
	stw      r3, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r3, r4, 1
	stw      r3, 8(r5)
	stb      r9, 0(r4)
	lwz      r10, __GDCurrentDL@sda21(r13)
	lbz      r4, 0x34(r31)
	lwz      r9, 8(r10)
	lbz      r3, 0x3b(r31)
	cmpwi    r4, 1
	lbz      r7, 0x37(r31)
	addi     r8, r9, 1
	lbz      r6, 0x36(r31)
	lbz      r5, 0x35(r31)
	stw      r8, 8(r10)
	stb      r0, 0(r9)
	lwz      r10, __GDCurrentDL@sda21(r13)
	lwz      r9, 8(r10)
	addi     r8, r9, 1
	stw      r8, 8(r10)
	stb      r29, 0(r9)
	lwz      r10, __GDCurrentDL@sda21(r13)
	lwz      r9, 8(r10)
	addi     r8, r9, 1
	stw      r8, 8(r10)
	stb      r30, 0(r9)
	lwz      r10, __GDCurrentDL@sda21(r13)
	lwz      r9, 8(r10)
	addi     r8, r9, 1
	stw      r8, 8(r10)
	stb      r12, 0(r9)
	lwz      r10, __GDCurrentDL@sda21(r13)
	lwz      r9, 8(r10)
	addi     r8, r9, 1
	stw      r8, 8(r10)
	stb      r11, 0(r9)
	lwz      r10, __GDCurrentDL@sda21(r13)
	lwz      r9, 8(r10)
	addi     r8, r9, 1
	stw      r8, 8(r10)
	stb      r0, 0(r9)
	beq      lbl_8007F19C
	cmpwi    r4, 3
	bne      lbl_8007F1A0

lbl_8007F19C:
	li       r30, 1

lbl_8007F1A0:
	subfic   r9, r4, 3
	clrlwi   r8, r30, 0x18
	subfic   r0, r4, 2
	lwz      r11, __GDCurrentDL@sda21(r13)
	cntlzw   r0, r0
	rlwinm   r3, r3, 2, 0x16, 0x1d
	rlwinm   r0, r0, 0x1c, 0x17, 0x1e
	slwi     r6, r6, 5
	or       r8, r0, r8
	cntlzw   r30, r9
	or       r8, r3, r8
	lwz      r10, 8(r11)
	or       r12, r6, r8
	slwi     r5, r5, 8
	rlwinm   r8, r30, 6, 0xd, 0x14
	addi     r9, r10, 1
	or       r12, r5, r12
	slwi     r7, r7, 0xc
	or       r12, r8, r12
	stw      r9, 8(r11)
	or       r9, r7, r12
	cmpwi    r4, 1
	oris     r9, r9, 0x4100
	srwi     r9, r9, 0x18
	stb      r9, 0(r10)
	li       r9, 0
	beq      lbl_8007F214
	cmpwi    r4, 3
	bne      lbl_8007F218

lbl_8007F214:
	li       r9, 1

lbl_8007F218:
	clrlwi   r9, r9, 0x18
	lwz      r12, __GDCurrentDL@sda21(r13)
	or       r9, r0, r9
	cmpwi    r4, 1
	or       r9, r3, r9
	lwz      r11, 8(r12)
	or       r10, r6, r9
	li       r9, 0
	or       r30, r5, r10
	addi     r10, r11, 1
	or       r30, r8, r30
	stw      r10, 8(r12)
	or       r10, r7, r30
	oris     r10, r10, 0x4100
	rlwinm   r10, r10, 0x10, 0x18, 0x1f
	stb      r10, 0(r11)
	beq      lbl_8007F264
	cmpwi    r4, 3
	bne      lbl_8007F268

lbl_8007F264:
	li       r9, 1

lbl_8007F268:
	clrlwi   r9, r9, 0x18
	lwz      r12, __GDCurrentDL@sda21(r13)
	or       r9, r0, r9
	cmpwi    r4, 1
	or       r9, r3, r9
	lwz      r11, 8(r12)
	or       r10, r6, r9
	li       r9, 0
	or       r30, r5, r10
	addi     r10, r11, 1
	or       r30, r8, r30
	stw      r10, 8(r12)
	or       r10, r7, r30
	oris     r10, r10, 0x4100
	rlwinm   r10, r10, 0x18, 0x18, 0x1f
	stb      r10, 0(r11)
	beq      lbl_8007F2B4
	cmpwi    r4, 3
	bne      lbl_8007F2B8

lbl_8007F2B4:
	li       r9, 1

lbl_8007F2B8:
	or       r0, r0, r9
	lwz      r10, __GDCurrentDL@sda21(r13)
	or       r0, r3, r0
	lis      r3, j3dZModeTable@ha
	or       r0, r6, r0
	lwz      r4, 8(r10)
	or       r0, r5, r0
	addi     r9, r3, j3dZModeTable@l
	or       r3, r8, r0
	li       r6, 0
	or       r3, r7, r3
	addi     r0, r4, 1
	stw      r0, 8(r10)
	ori      r3, r3, 0
	li       r0, 0x61
	li       r7, 0xfe
	stb      r3, 0(r4)
	lhz      r3, 0x38(r31)
	lwz      r8, __GDCurrentDL@sda21(r13)
	mulli    r3, r3, 3
	lwz      r5, 8(r8)
	add      r4, r9, r3
	lbzx     r11, r9, r3
	lbz      r10, 2(r4)
	addi     r3, r5, 1
	lbz      r9, 1(r4)
	rlwinm   r4, r10, 4, 0x14, 0x1b
	stw      r3, 8(r8)
	slwi     r3, r9, 1
	or       r3, r11, r3
	stb      r0, 0(r5)
	or       r3, r4, r3
	oris     r11, r3, 0x4000
	lwz      r5, __GDCurrentDL@sda21(r13)
	srwi     r10, r11, 0x18
	rlwinm   r9, r11, 0x10, 0x18, 0x1f
	rlwinm   r8, r11, 0x18, 0x18, 0x1f
	lwz      r4, 8(r5)
	addi     r3, r4, 1
	stw      r3, 8(r5)
	stb      r10, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r3, r4, 1
	stw      r3, 8(r5)
	stb      r9, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r3, r4, 1
	stw      r3, 8(r5)
	stb      r8, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r3, r4, 1
	stw      r3, 8(r5)
	stb      r11, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lbz      r9, 0x3a(r31)
	lwz      r4, 8(r5)
	addi     r3, r4, 1
	stw      r3, 8(r5)
	stb      r0, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r3, r4, 1
	stw      r3, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r3, r4, 1
	stw      r3, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r3, r4, 1
	stw      r3, 8(r5)
	stb      r6, 0(r4)
	lwz      r8, __GDCurrentDL@sda21(r13)
	rlwinm   r3, r9, 6, 0x12, 0x19
	oris     r10, r3, 0x4300
	li       r9, 0x40
	lwz      r4, 8(r8)
	srwi     r7, r10, 0x18
	rlwinm   r6, r10, 0x10, 0x18, 0x1f
	rlwinm   r5, r10, 0x18, 0x18, 0x1f
	addi     r3, r4, 1
	stw      r3, 8(r8)
	stb      r9, 0(r4)
	lwz      r8, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r8)
	addi     r3, r4, 1
	stw      r3, 8(r8)
	stb      r0, 0(r4)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r7, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r6, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r5, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r10, 0(r3)
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
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

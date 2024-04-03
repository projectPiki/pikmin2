#include "JSystem/J3D/J3DMaterialFactory.h"
#include "Dolphin/gx.h"
#include "JSystem/J3D/J3DColorBlock.h"
#include "JSystem/J3D/J3DDisplayListObj.h"
#include "JSystem/J3D/J3DGXColor.h"
#include "JSystem/J3D/J3DInd.h"
#include "JSystem/J3D/J3DMaterial.h"
#include "JSystem/J3D/J3DPE.h"
#include "JSystem/J3D/J3DTevBlock.h"
#include "JSystem/J3D/J3DTexGenBlock.h"
#include "JSystem/J3D/J3DTypes.h"
#include "JSystem/JSupport/JSU.h"

/**
 * @note Address: 0x8006C3A4
 * @note Size: 0x248
 * TODO: Rename _SDK_GX*
 */
J3DMaterialFactory::J3DMaterialFactory(const J3DMaterialBlock& block)
{
	mMaterialNum   = block.mNumMaterials;
	mInitData      = JSUConvertOffsetToPtr<J3DMaterialInitData>(&block, block.mMatEntryDataOffset);
	mMatRemapTable = JSUConvertOffsetToPtr<u16>(&block, block.mMatRemapTableOffset);
	if (block.mIndTextureInfoOffset != nullptr && (u32)block.mIndTextureInfoOffset - (u32)block.mStringTableOffset > 4) {
		mIndInitData = JSUConvertOffsetToPtr<J3DIndInitData>(&block, block.mIndTextureInfoOffset);
	} else {
		mIndInitData = nullptr;
	}
	mCullModeInfo         = JSUConvertOffsetToPtr<_GXCullMode>(&block, block.mCullModeInfoOffset);
	mColorData            = JSUConvertOffsetToPtr<GXColor>(&block, block.mMatColorsOffset);
	mNumColorChans        = JSUConvertOffsetToPtr<u8>(&block, block.mNumColorChansOffset);
	mColorChanInfo        = JSUConvertOffsetToPtr<J3DColorChanInfo>(&block, block.mColorChanInfoOffset);
	mAmbientColors        = JSUConvertOffsetToPtr<GXColor>(&block, block.mAmbientColorOffset);
	mLightInfo            = JSUConvertOffsetToPtr<J3DLightInfo>(&block, block.mLightInfoOffset);
	mNumTexCoords         = JSUConvertOffsetToPtr<u8>(&block, block.mNumTexCoordsOffset);
	mTexCoordInfo         = JSUConvertOffsetToPtr<J3DTexCoord>(&block, block.mTexCoordInfoOffset);
	mTexCoord2Info        = JSUConvertOffsetToPtr<J3DTexCoord2Info>(&block, block.mTexCoord2InfoOffset);
	mTexMtxInfo           = JSUConvertOffsetToPtr<J3DTexMtxInfo>(&block, block.mTexMtxInfoOffset);
	mTexMtxInfo2          = JSUConvertOffsetToPtr<J3DTexMtxInfo>(&block, block.mTexMtxInfo2Offset);
	mTextureRemapTable    = JSUConvertOffsetToPtr<u16>(&block, block.mTextureRemapTableOffset);
	mTevOrderInfo         = JSUConvertOffsetToPtr<J3DTevOrderInfo>(&block, block.mTevOrderInfoOffset);
	mTevColors            = JSUConvertOffsetToPtr<GXColorS10>(&block, block.mTevColorsOffset);
	mTevKColors           = JSUConvertOffsetToPtr<GXColor>(&block, block.mTevKColorsOffset);
	mNumTevStages         = JSUConvertOffsetToPtr<u8>(&block, block.mNumTevStagesOffset);
	mTevStageInfo         = JSUConvertOffsetToPtr<J3DTevStageInfo>(&block, block.mTevStageInfoOffset);
	mTevSwapModeInfo      = JSUConvertOffsetToPtr<J3DTevSwapModeInfo>(&block, block.mTevSwapModeInfoOffset);
	mTevSwapModeTableInfo = JSUConvertOffsetToPtr<J3DTevSwapModeTableInfo>(&block, block.mTevSwapModeTableInfoOffset);
	mFogInfo              = JSUConvertOffsetToPtr<J3DFogInfo>(&block, block.mFogInfoOffset);
	mAlphaCompInfo        = JSUConvertOffsetToPtr<J3DAlphaCompInfo>(&block, block.mAlphaCompInfoOffset);
	mBlendInfo            = JSUConvertOffsetToPtr<J3DBlendInfo>(&block, block.mBlendInfoOffset);
	mZModeInfo            = JSUConvertOffsetToPtr<J3DZModeInfo>(&block, block.mZModeInfoOffset);
	mZCompareInfo         = JSUConvertOffsetToPtr<u8>(&block, block.mZCompareInfoOffset);
	mDitherInfo           = JSUConvertOffsetToPtr<u8>(&block, block.mDitherInfoOffset);
	mNBTScaleInfo         = JSUConvertOffsetToPtr<J3DNBTScaleInfo>(&block, block.mNBTScaleInfoOffset);

	mDisplayLists = nullptr;
	mPatchInfo    = nullptr;
	mCurrMtxInfo  = nullptr;
	mPEModes      = nullptr;
}

/**
 * @note Address: 0x8006C5EC
 * @note Size: 0x88
 * __ct__18J3DMaterialFactoryFRC18J3DMaterialDLBlock
 */
J3DMaterialFactory::J3DMaterialFactory(const J3DMaterialDLBlock& block)
{
	mMaterialNum  = block.mEntries;
	mInitData     = nullptr;
	mDisplayLists = JSUConvertOffsetToPtr<J3DDisplayListInit>(&block, block.mPacketOffset);
	mPatchInfo    = JSUConvertOffsetToPtr<J3DPatchingInfo>(&block, block.mSubPacketLocationOffset);
	mCurrMtxInfo  = JSUConvertOffsetToPtr<J3DCurrentMtxInfo>(&block, block.mMatrixIndexOffset);
	mPEModes      = JSUConvertOffsetToPtr<u8>(&block, block.mPixelEngineModesOffset);
}

/**
 * @note Address: 0x8006C674
 * @note Size: 0x48
 */
u32 J3DMaterialFactory::countUniqueMaterials()
{
	// Man if ONLY there were an easier way to do this!
	u16 count;

	for (count = 0; count < mMaterialNum; count++) { }

	return count;
}

/**
 * @note Address: 0x8006C6BC
 * @note Size: 0x7C
 * create__18J3DMaterialFactoryCFP11J3DMaterialQ218J3DMaterialFactory12MaterialTypeiUl
 */
J3DMaterial* J3DMaterialFactory::create(J3DMaterial* material, MaterialType type, int p3, u32 flags) const
{
	switch (type) {
	case NORMAL:
		material = createNormalMaterial(material, p3, flags);
		break;
	case LOCKED:
		material = createLockedMaterial(material, p3, flags);
		break;
	case PATCHED:
		material = createPatchedMaterial(material, p3, flags);
		break;
	}
	return material;
}

/**
 * @note Address: 0x8006C738
 * @note Size: 0xA0C
 */
J3DMaterial* J3DMaterialFactory::createNormalMaterial(J3DMaterial*, int, u32) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x120(r1)
	  mflr      r0
	  stw       r0, 0x124(r1)
	  lwz       r0, 0x78(r3)
	  stmw      r19, 0xEC(r1)
	  mr        r30, r3
	  cmplwi    r0, 0
	  mr        r31, r4
	  mr        r29, r5
	  beq-      .loc_0x30
	  bl        0x1520
	  b         .loc_0x9F8

	.loc_0x30:
	  lwz       r3, 0x8(r30)
	  rlwinm    r27,r29,1,0,30
	  li        r5, 0
	  lwz       r4, 0x4(r30)
	  lhzx      r0, r3, r27
	  mr        r3, r5
	  mulli     r0, r0, 0x14C
	  add       r4, r4, r0
	  lbz       r0, 0x4(r4)
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x64
	  lwz       r3, 0x4C(r30)
	  lbzx      r3, r3, r0

	.loc_0x64:
	  lhz       r0, 0x84(r4)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x74
	  li        r5, 0x1

	.loc_0x74:
	  lhz       r0, 0x86(r4)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x84
	  addi      r5, r5, 0x1

	.loc_0x84:
	  lhz       r0, 0x88(r4)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x94
	  addi      r5, r5, 0x1

	.loc_0x94:
	  lhz       r0, 0x8A(r4)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xA4
	  addi      r5, r5, 0x1

	.loc_0xA4:
	  lhz       r0, 0x8C(r4)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xB4
	  addi      r5, r5, 0x1

	.loc_0xB4:
	  lhz       r0, 0x8E(r4)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xC4
	  addi      r5, r5, 0x1

	.loc_0xC4:
	  lhz       r0, 0x90(r4)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xD4
	  addi      r5, r5, 0x1

	.loc_0xD4:
	  lhz       r0, 0x92(r4)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xE4
	  addi      r5, r5, 0x1

	.loc_0xE4:
	  cmplw     r3, r5
	  beq-      .loc_0x104
	  cmplwi    r5, 0
	  beq-      .loc_0x104
	  cmplw     r3, r5
	  ble-      .loc_0x108
	  mr        r5, r3
	  b         .loc_0x108

	.loc_0x104:
	  mr        r5, r3

	.loc_0x108:
	  rlwinm    r28,r6,16,27,31
	  cmplw     r5, r28
	  ble-      .loc_0x118
	  mr        r28, r5

	.loc_0x118:
	  cmplwi    r28, 0x8
	  li        r25, 0x8
	  bgt-      .loc_0x128
	  mr        r25, r28

	.loc_0x128:
	  lbz       r0, 0x3(r4)
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x140
	  lwz       r3, 0x24(r30)
	  lbzx      r26, r3, r0
	  b         .loc_0x144

	.loc_0x140:
	  li        r26, 0

	.loc_0x144:
	  li        r0, 0x4
	  cmplwi    r31, 0
	  subc      r3, r0, r26
	  rlwinm    r23,r6,0,0,1
	  rlwinm    r0,r6,0,4,5
	  rlwinm    r22,r6,0,2,3
	  subfe     r3, r3, r3
	  rlwinm    r21,r6,8,31,31
	  andc      r24, r0, r3
	  bne-      .loc_0x1A4
	  li        r3, 0x4C
	  bl        -0x48A04
	  mr.       r31, r3
	  beq-      .loc_0x1A4
	  lis       r4, 0x804A
	  lis       r5, 0x3CF4
	  addi      r0, r4, 0x15D8
	  lis       r4, 0xF4
	  stw       r0, 0x0(r31)
	  subi      r5, r5, 0x3100
	  subi      r0, r4, 0x30C4
	  stw       r5, 0x40(r31)
	  stw       r0, 0x44(r31)
	  bl        -0xA140

	.loc_0x1A4:
	  mr        r3, r23
	  bl        -0xB400
	  stw       r3, 0x24(r31)
	  mr        r3, r24
	  bl        -0xB0B0
	  stw       r3, 0x28(r31)
	  rlwinm    r3,r28,0,16,31
	  bl        -0xAE8C
	  stw       r3, 0x2C(r31)
	  mr        r3, r21
	  bl        -0xA788
	  stw       r3, 0x30(r31)
	  mr        r3, r22
	  lwz       r4, 0x8(r30)
	  lwz       r5, 0x4(r30)
	  lhzx      r0, r4, r27
	  mulli     r0, r0, 0x14C
	  lbzx      r4, r5, r0
	  bl        -0xA590
	  stw       r3, 0x34(r31)
	  mr        r3, r30
	  lwz       r5, 0x8(r30)
	  mr        r4, r29
	  sth       r29, 0x14(r31)
	  lwz       r6, 0x4(r30)
	  lhzx      r0, r5, r27
	  mulli     r0, r0, 0x14C
	  lbzx      r0, r6, r0
	  stw       r0, 0x10(r31)
	  bl        0x1AB0
	  mr        r4, r3
	  lwz       r3, 0x24(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r29
	  bl        0x1EFC
	  mr        r4, r3
	  lwz       r3, 0x24(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r29
	  bl        0x1CC4
	  mr        r4, r3
	  lwz       r3, 0x28(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x78
	  bl        0x29DC
	  lwz       r6, 0x78(r1)
	  addi      r4, r1, 0x88
	  lwz       r5, 0x7C(r1)
	  lwz       r3, 0x80(r1)
	  lwz       r0, 0x84(r1)
	  stw       r6, 0x88(r1)
	  stw       r5, 0x8C(r1)
	  stw       r3, 0x90(r1)
	  stw       r0, 0x94(r1)
	  lwz       r3, 0x28(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0xB4
	  bl        0x257C
	  lwz       r3, 0x34(r31)
	  addi      r4, r1, 0xB4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x4C
	  bl        0x27A0
	  lwz       r3, 0x34(r31)
	  addi      r4, r1, 0x4C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x48
	  bl        0x27F8
	  lwz       r3, 0x34(r31)
	  addi      r4, r1, 0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x14
	  bl        0x284C
	  lhz       r0, 0x14(r1)
	  addi      r4, r1, 0x18
	  sth       r0, 0x18(r1)
	  lwz       r3, 0x34(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r29
	  bl        0x2880
	  mr        r4, r3
	  lwz       r3, 0x34(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x5C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r29
	  bl        0x2894
	  mr        r4, r3
	  lwz       r3, 0x34(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r29
	  bl        0x1FA0
	  mr        r4, r3
	  lwz       r3, 0x2C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x94(r12)
	  mtctr     r12
	  bctrl
	  li        r19, 0
	  b         .loc_0x40C

	.loc_0x3E0:
	  mr        r3, r30
	  mr        r4, r29
	  bl        0x1D90
	  mr        r5, r3
	  lwz       r3, 0x2C(r31)
	  rlwinm    r4,r19,0,24,31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x40C:
	  rlwinm    r5,r19,0,24,31
	  cmplw     r5, r25
	  blt+      .loc_0x3E0
	  li        r19, 0
	  b         .loc_0x458

	.loc_0x420:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x40
	  bl        0x1D94
	  lwz       r0, 0x40(r1)
	  rlwinm    r4,r19,0,24,31
	  addi      r5, r1, 0x44
	  stw       r0, 0x44(r1)
	  lwz       r3, 0x2C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x458:
	  rlwinm    r6,r19,0,24,31
	  cmplw     r6, r28
	  blt+      .loc_0x420
	  lwz       r24, 0x4(r30)
	  li        r23, 0
	  lwz       r25, 0x8(r30)
	  b         .loc_0x54C

	.loc_0x474:
	  lhzx      r0, r27, r25
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x60
	  mulli     r0, r0, 0x14C
	  add       r20, r24, r0
	  bl        0x1F08
	  lwz       r3, 0x60(r1)
	  rlwinm    r21,r23,0,24,31
	  lwz       r0, 0x64(r1)
	  mr        r4, r21
	  stw       r3, 0x68(r1)
	  addi      r5, r1, 0x68
	  stw       r0, 0x6C(r1)
	  lwz       r3, 0x2C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r3,r21,1,0,30
	  addi      r22, r3, 0x104
	  lhzx      r0, r20, r22
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x548
	  lwz       r3, 0x2C(r31)
	  rlwinm    r4,r0,2,14,29
	  lwz       r5, 0x54(r30)
	  addi      r0, r4, 0x1
	  lwz       r12, 0x0(r3)
	  mr        r4, r21
	  lbzx      r19, r5, r0
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  lbz       r6, 0x7(r3)
	  rlwinm    r0,r19,2,22,29
	  lwz       r5, 0x54(r30)
	  mr        r4, r21
	  rlwinm    r6,r6,0,30,27
	  or        r0, r6, r0
	  stb       r0, 0x7(r3)
	  lwz       r3, 0x2C(r31)
	  lhzx      r0, r20, r22
	  lwz       r12, 0x0(r3)
	  rlwinm    r0,r0,2,0,29
	  lwz       r12, 0xA4(r12)
	  lbzx      r19, r5, r0
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x7(r3)
	  rlwinm    r0,r0,0,0,29
	  or        r0, r0, r19
	  stb       r0, 0x7(r3)

	.loc_0x548:
	  addi      r23, r23, 0x1

	.loc_0x54C:
	  rlwinm    r6,r23,0,24,31
	  cmplw     r6, r28
	  blt+      .loc_0x474
	  li        r19, 0
	  b         .loc_0x594

	.loc_0x560:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x3C
	  rlwinm    r6,r19,0,24,31
	  bl        0x1D5C
	  lwz       r3, 0x2C(r31)
	  rlwinm    r4,r19,0,24,31
	  addi      r5, r1, 0x3C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x594:
	  rlwinm    r0,r19,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x560
	  li        r19, 0
	  b         .loc_0x5DC

	.loc_0x5A8:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x58
	  rlwinm    r6,r19,0,24,31
	  bl        0x1C7C
	  lwz       r3, 0x2C(r31)
	  rlwinm    r4,r19,0,24,31
	  addi      r5, r1, 0x58
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x5DC:
	  rlwinm    r0,r19,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x5A8
	  li        r19, 0
	  b         .loc_0x62C

	.loc_0x5F0:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x8
	  rlwinm    r6,r19,0,24,31
	  bl        0x1E54
	  lbz       r0, 0x8(r1)
	  rlwinm    r4,r19,0,24,31
	  addi      r5, r1, 0xC
	  stb       r0, 0xC(r1)
	  lwz       r3, 0x2C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xB4(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x62C:
	  rlwinm    r0,r19,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x5F0
	  li        r19, 0
	  b         .loc_0x674

	.loc_0x640:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x38
	  rlwinm    r6,r19,0,24,31
	  bl        0x1844
	  lwz       r3, 0x24(r31)
	  rlwinm    r4,r19,0,24,31
	  addi      r5, r1, 0x38
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x674:
	  rlwinm    r0,r19,0,24,31
	  cmplwi    r0, 0x2
	  blt+      .loc_0x640
	  li        r19, 0
	  b         .loc_0x6BC

	.loc_0x688:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x34
	  rlwinm    r6,r19,0,24,31
	  bl        0x15A0
	  lwz       r3, 0x24(r31)
	  rlwinm    r4,r19,0,24,31
	  addi      r5, r1, 0x34
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x6BC:
	  rlwinm    r0,r19,0,24,31
	  cmplwi    r0, 0x2
	  blt+      .loc_0x688
	  li        r19, 0
	  b         .loc_0x70C

	.loc_0x6D0:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x10
	  rlwinm    r6,r19,0,24,31
	  bl        0x1620
	  lhz       r0, 0x10(r1)
	  rlwinm    r4,r19,0,24,31
	  addi      r5, r1, 0x1C
	  sth       r0, 0x1C(r1)
	  lwz       r3, 0x24(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x54(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x70C:
	  rlwinm    r0,r19,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x6D0
	  li        r19, 0
	  b         .loc_0x760

	.loc_0x720:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x50
	  bl        0x1830
	  lwz       r3, 0x50(r1)
	  rlwinm    r4,r19,0,24,31
	  lhz       r0, 0x54(r1)
	  addi      r5, r1, 0x70
	  stw       r3, 0x70(r1)
	  sth       r0, 0x74(r1)
	  lwz       r3, 0x28(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x760:
	  rlwinm    r6,r19,0,24,31
	  cmplw     r6, r26
	  blt+      .loc_0x720
	  li        r19, 0
	  b         .loc_0x7A4

	.loc_0x774:
	  mr        r3, r30
	  mr        r4, r29
	  rlwinm    r5,r19,0,24,31
	  bl        0x1860
	  mr        r5, r3
	  lwz       r3, 0x28(r31)
	  rlwinm    r4,r19,0,24,31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x7A4:
	  rlwinm    r0,r19,0,24,31
	  cmplwi    r0, 0x8
	  blt+      .loc_0x774
	  lwz       r3, 0x8(r30)
	  li        r20, 0
	  lwz       r4, 0x4(r30)
	  lhzx      r0, r3, r27
	  mulli     r0, r0, 0x14C
	  add       r19, r4, r0
	  b         .loc_0x814

	.loc_0x7CC:
	  rlwinm    r4,r20,0,24,31
	  addi      r0, r4, 0x9C
	  lbzx      r5, r19, r0
	  cmplwi    r5, 0xFF
	  beq-      .loc_0x7F8
	  lwz       r3, 0x2C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x810

	.loc_0x7F8:
	  lwz       r3, 0x2C(r31)
	  li        r5, 0xC
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x810:
	  addi      r20, r20, 0x1

	.loc_0x814:
	  rlwinm    r0,r20,0,24,31
	  cmplw     r0, r28
	  blt+      .loc_0x7CC
	  li        r20, 0
	  b         .loc_0x870

	.loc_0x828:
	  rlwinm    r4,r20,0,24,31
	  addi      r0, r4, 0xAC
	  lbzx      r5, r19, r0
	  cmplwi    r5, 0xFF
	  beq-      .loc_0x854
	  lwz       r3, 0x2C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x88(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x86C

	.loc_0x854:
	  lwz       r3, 0x2C(r31)
	  li        r5, 0x1C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x88(r12)
	  mtctr     r12
	  bctrl

	.loc_0x86C:
	  addi      r20, r20, 0x1

	.loc_0x870:
	  rlwinm    r0,r20,0,24,31
	  cmplw     r0, r28
	  blt+      .loc_0x828
	  lwz       r0, 0xC(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x9F4
	  mr        r3, r30
	  mr        r4, r29
	  bl        0x1C60
	  mr        r21, r3
	  mr        r3, r30
	  mr        r4, r29
	  bl        0x1C50
	  mr        r4, r3
	  lwz       r3, 0x30(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r20,r21,0,24,31
	  li        r19, 0
	  b         .loc_0x8FC

	.loc_0x8C8:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x98
	  rlwinm    r6,r19,0,24,31
	  bl        0x1CA0
	  lwz       r3, 0x30(r31)
	  rlwinm    r4,r19,0,24,31
	  addi      r5, r1, 0x98
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x8FC:
	  rlwinm    r0,r19,0,24,31
	  cmplw     r0, r20
	  blt+      .loc_0x8C8
	  rlwinm    r20,r21,0,24,31
	  li        r19, 0
	  b         .loc_0x950

	.loc_0x914:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x2C
	  rlwinm    r6,r19,0,24,31
	  bl        0x1BF4
	  lwz       r0, 0x2C(r1)
	  rlwinm    r4,r19,0,24,31
	  addi      r5, r1, 0x30
	  stw       r0, 0x30(r1)
	  lwz       r3, 0x30(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x950:
	  rlwinm    r0,r19,0,24,31
	  cmplw     r0, r20
	  blt+      .loc_0x914
	  rlwinm    r20,r21,0,24,31
	  li        r19, 0
	  b         .loc_0x99C

	.loc_0x968:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x28
	  rlwinm    r6,r19,0,24,31
	  bl        0x1E74
	  lwz       r3, 0x30(r31)
	  rlwinm    r4,r19,0,24,31
	  addi      r5, r1, 0x28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x99C:
	  rlwinm    r0,r19,0,24,31
	  cmplw     r0, r20
	  blt+      .loc_0x968
	  li        r19, 0
	  b         .loc_0x9E8

	.loc_0x9B0:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x20
	  bl        0x1C9C
	  lwz       r0, 0x20(r1)
	  rlwinm    r4,r19,0,24,31
	  addi      r5, r1, 0x24
	  stw       r0, 0x24(r1)
	  lwz       r3, 0x2C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC0(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x9E8:
	  rlwinm    r6,r19,0,24,31
	  cmplw     r6, r28
	  blt+      .loc_0x9B0

	.loc_0x9F4:
	  mr        r3, r31

	.loc_0x9F8:
	  lmw       r19, 0xEC(r1)
	  lwz       r0, 0x124(r1)
	  mtlr      r0
	  addi      r1, r1, 0x120
	  blr
	*/
}

/**
 * @note Address: 0x8006D170
 * @note Size: 0x924
 */
J3DPatchedMaterial* J3DMaterialFactory::createPatchedMaterial(J3DMaterial*, int, u32) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0xF0(r1)
	  mflr      r0
	  stw       r0, 0xF4(r1)
	  stmw      r18, 0xB8(r1)
	  mr.       r31, r4
	  mr        r30, r3
	  mr        r29, r5
	  mr        r18, r6
	  bne-      .loc_0x74
	  li        r3, 0x4C
	  bl        -0x492F4
	  mr.       r19, r3
	  beq-      .loc_0x70
	  lis       r4, 0x804A
	  lis       r5, 0x3CF4
	  addi      r0, r4, 0x15D8
	  stw       r0, 0x0(r19)
	  subi      r5, r5, 0x3100
	  lis       r4, 0xF4
	  stw       r5, 0x40(r19)
	  subi      r0, r4, 0x30C4
	  stw       r0, 0x44(r19)
	  bl        -0xAA30
	  lis       r4, 0x804A
	  mr        r3, r19
	  addi      r0, r4, 0x15A8
	  stw       r0, 0x0(r19)
	  bl        -0x99FC

	.loc_0x70:
	  mr        r31, r19

	.loc_0x74:
	  rlwinm    r4,r18,0,6,7
	  lis       r3, 0x4000
	  neg       r0, r4
	  or        r0, r0, r4
	  rlwinm    r28,r0,1,31,31
	  bl        -0xBD18
	  stw       r3, 0x24(r31)
	  li        r3, 0x5C
	  bl        -0x49360
	  mr.       r19, r3
	  beq-      .loc_0xE0
	  lis       r4, 0x804A
	  lis       r3, 0x804A
	  addi      r0, r4, 0x171C
	  mr        r18, r19
	  stw       r0, 0x0(r19)
	  addi      r0, r3, 0x27CC
	  lis       r4, 0x8006
	  addi      r3, r18, 0x8
	  stw       r0, 0x0(r19)
	  addi      r4, r4, 0x19FC
	  li        r5, 0
	  li        r6, 0x6
	  li        r7, 0x8
	  bl        0x545F8
	  mr        r3, r18
	  bl        0xA0D4

	.loc_0xE0:
	  stw       r19, 0x28(r31)
	  li        r3, 0xD8
	  bl        -0x493B4
	  mr.       r25, r3
	  beq-      .loc_0x1A4
	  lis       r4, 0x804A
	  lis       r3, 0x804A
	  addi      r0, r4, 0x2B08
	  mr        r20, r25
	  stw       r0, 0x0(r25)
	  addi      r0, r3, 0x2618
	  lis       r4, 0x8006
	  addi      r3, r20, 0x18
	  stw       r0, 0x0(r25)
	  addi      r4, r4, 0x2114
	  li        r5, 0
	  li        r6, 0x4
	  li        r7, 0x8
	  bl        0x545A4
	  lis       r4, 0x8006
	  addi      r3, r20, 0x38
	  addi      r4, r4, 0x1ED4
	  li        r5, 0
	  li        r6, 0x8
	  li        r7, 0x8
	  bl        0x54588
	  lis       r4, 0x8006
	  addi      r3, r20, 0x78
	  addi      r4, r4, 0x1DF0
	  li        r5, 0
	  li        r6, 0x4
	  li        r7, 0x8
	  bl        0x5456C
	  lis       r4, 0x8006
	  addi      r3, r20, 0x98
	  addi      r4, r4, 0x1DEC
	  li        r5, 0
	  li        r6, 0x8
	  li        r7, 0x4
	  bl        0x54550
	  lis       r4, 0x8006
	  addi      r3, r20, 0xB8
	  addi      r4, r4, 0x17F0
	  li        r5, 0
	  li        r6, 0x4
	  li        r7, 0x4
	  bl        0x54534
	  mr        r3, r20
	  bl        0xA09C

	.loc_0x1A4:
	  stw       r25, 0x2C(r31)
	  mr        r3, r28
	  bl        -0xB1A0
	  stw       r3, 0x30(r31)
	  rlwinm    r24,r29,1,0,30
	  lwz       r4, 0x8(r30)
	  lis       r3, 0x1000
	  lwz       r5, 0x4(r30)
	  lhzx      r0, r4, r24
	  mulli     r0, r0, 0x14C
	  lbzx      r4, r5, r0
	  bl        -0xAFAC
	  stw       r3, 0x34(r31)
	  mr        r3, r30
	  lwz       r5, 0x8(r30)
	  mr        r4, r29
	  sth       r29, 0x14(r31)
	  lwz       r6, 0x4(r30)
	  lhzx      r0, r5, r24
	  mulli     r0, r0, 0x14C
	  lbzx      r0, r6, r0
	  stw       r0, 0x10(r31)
	  bl        0x1728
	  mr        r4, r3
	  lwz       r3, 0x2C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x94(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r29
	  bl        0x1070
	  mr        r4, r3
	  lwz       r3, 0x24(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r29
	  bl        0x14BC
	  mr        r4, r3
	  lwz       r3, 0x24(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x88
	  bl        0x1BA8
	  lwz       r3, 0x34(r31)
	  addi      r4, r1, 0x88
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x40
	  bl        0x1DCC
	  lwz       r3, 0x34(r31)
	  addi      r4, r1, 0x40
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x3C
	  bl        0x1E24
	  lwz       r3, 0x34(r31)
	  addi      r4, r1, 0x3C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0xC
	  bl        0x1E78
	  lhz       r0, 0xC(r1)
	  addi      r4, r1, 0x10
	  sth       r0, 0x10(r1)
	  lwz       r3, 0x34(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r29
	  bl        0x1EAC
	  mr        r4, r3
	  lwz       r3, 0x34(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x5C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r29
	  bl        0x1EC0
	  mr        r4, r3
	  lwz       r3, 0x34(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x98(r12)
	  mtctr     r12
	  bctrl
	  mr        r25, r3
	  li        r18, 0
	  b         .loc_0x3A0

	.loc_0x370:
	  mr        r3, r30
	  mr        r4, r29
	  rlwinm    r5,r18,0,24,31
	  bl        0x13C4
	  mr        r5, r3
	  lwz       r3, 0x2C(r31)
	  rlwinm    r4,r18,0,24,31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  addi      r18, r18, 0x1

	.loc_0x3A0:
	  rlwinm    r0,r18,0,24,31
	  cmplwi    r0, 0x8
	  blt+      .loc_0x370
	  rlwinm    r19,r25,0,24,31
	  li        r18, 0
	  b         .loc_0x3F4

	.loc_0x3B8:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x34
	  rlwinm    r6,r18,0,24,31
	  bl        0x13C0
	  lwz       r0, 0x34(r1)
	  rlwinm    r4,r18,0,24,31
	  addi      r5, r1, 0x38
	  stw       r0, 0x38(r1)
	  lwz       r3, 0x2C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  addi      r18, r18, 0x1

	.loc_0x3F4:
	  rlwinm    r0,r18,0,24,31
	  cmplw     r0, r19
	  blt+      .loc_0x3B8
	  li        r18, 0
	  b         .loc_0x43C

	.loc_0x408:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x30
	  rlwinm    r6,r18,0,24,31
	  bl        0x147C
	  lwz       r3, 0x2C(r31)
	  rlwinm    r4,r18,0,24,31
	  addi      r5, r1, 0x30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  addi      r18, r18, 0x1

	.loc_0x43C:
	  rlwinm    r0,r18,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x408
	  li        r18, 0
	  b         .loc_0x484

	.loc_0x450:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x5C
	  rlwinm    r6,r18,0,24,31
	  bl        0x139C
	  lwz       r3, 0x2C(r31)
	  rlwinm    r4,r18,0,24,31
	  addi      r5, r1, 0x5C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  addi      r18, r18, 0x1

	.loc_0x484:
	  rlwinm    r0,r18,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x450
	  lwz       r26, 0x4(r30)
	  rlwinm    r19,r25,0,24,31
	  lwz       r27, 0x8(r30)
	  li        r21, 0
	  b         .loc_0x580

	.loc_0x4A4:
	  lhzx      r0, r24, r27
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x4C
	  mulli     r0, r0, 0x14C
	  rlwinm    r6,r21,0,24,31
	  add       r20, r26, r0
	  bl        0x149C
	  lwz       r3, 0x4C(r1)
	  rlwinm    r23,r21,0,24,31
	  lwz       r0, 0x50(r1)
	  mr        r4, r23
	  stw       r3, 0x54(r1)
	  addi      r5, r1, 0x54
	  stw       r0, 0x58(r1)
	  lwz       r3, 0x2C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r3,r23,1,0,30
	  addi      r22, r3, 0x104
	  lhzx      r0, r20, r22
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x57C
	  lwz       r3, 0x2C(r31)
	  rlwinm    r4,r0,2,14,29
	  lwz       r5, 0x54(r30)
	  addi      r0, r4, 0x1
	  lwz       r12, 0x0(r3)
	  mr        r4, r23
	  lbzx      r18, r5, r0
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  lbz       r6, 0x7(r3)
	  rlwinm    r0,r18,2,22,29
	  lwz       r5, 0x54(r30)
	  mr        r4, r23
	  rlwinm    r6,r6,0,30,27
	  or        r0, r6, r0
	  stb       r0, 0x7(r3)
	  lwz       r3, 0x2C(r31)
	  lhzx      r0, r20, r22
	  lwz       r12, 0x0(r3)
	  rlwinm    r0,r0,2,0,29
	  lwz       r12, 0xA4(r12)
	  lbzx      r18, r5, r0
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x7(r3)
	  rlwinm    r0,r0,0,0,29
	  or        r0, r0, r18
	  stb       r0, 0x7(r3)

	.loc_0x57C:
	  addi      r21, r21, 0x1

	.loc_0x580:
	  rlwinm    r0,r21,0,24,31
	  cmplw     r0, r19
	  blt+      .loc_0x4A4
	  lwz       r3, 0x8(r30)
	  rlwinm    r20,r25,0,24,31
	  lwz       r4, 0x4(r30)
	  li        r19, 0
	  lhzx      r0, r3, r24
	  mulli     r0, r0, 0x14C
	  add       r18, r4, r0
	  b         .loc_0x5F4

	.loc_0x5AC:
	  rlwinm    r4,r19,0,24,31
	  addi      r0, r4, 0x9C
	  lbzx      r5, r18, r0
	  cmplwi    r5, 0xFF
	  beq-      .loc_0x5D8
	  lwz       r3, 0x2C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x5F0

	.loc_0x5D8:
	  lwz       r3, 0x2C(r31)
	  li        r5, 0xC
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x5F0:
	  addi      r19, r19, 0x1

	.loc_0x5F4:
	  rlwinm    r0,r19,0,24,31
	  cmplw     r0, r20
	  blt+      .loc_0x5AC
	  li        r18, 0
	  b         .loc_0x63C

	.loc_0x608:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x2C
	  rlwinm    r6,r18,0,24,31
	  bl        0xBE8
	  lwz       r3, 0x24(r31)
	  rlwinm    r4,r18,0,24,31
	  addi      r5, r1, 0x2C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl
	  addi      r18, r18, 0x1

	.loc_0x63C:
	  rlwinm    r0,r18,0,24,31
	  cmplwi    r0, 0x2
	  blt+      .loc_0x608
	  li        r18, 0
	  b         .loc_0x68C

	.loc_0x650:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x8
	  rlwinm    r6,r18,0,24,31
	  bl        0xC68
	  lhz       r0, 0x8(r1)
	  rlwinm    r4,r18,0,24,31
	  addi      r5, r1, 0x14
	  sth       r0, 0x14(r1)
	  lwz       r3, 0x24(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x54(r12)
	  mtctr     r12
	  bctrl
	  addi      r18, r18, 0x1

	.loc_0x68C:
	  rlwinm    r0,r18,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x650
	  lwz       r3, 0x8(r30)
	  lwz       r4, 0x4(r30)
	  lhzx      r0, r3, r24
	  mulli     r3, r0, 0x14C
	  addi      r0, r3, 0x3
	  lbzx      r0, r4, r0
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x6C4
	  lwz       r3, 0x24(r30)
	  lbzx      r18, r3, r0
	  b         .loc_0x6C8

	.loc_0x6C4:
	  li        r18, 0

	.loc_0x6C8:
	  mr        r3, r30
	  mr        r4, r29
	  bl        0xE1C
	  mr        r4, r3
	  lwz       r3, 0x28(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r19, 0
	  b         .loc_0x724

	.loc_0x6F4:
	  mr        r3, r30
	  mr        r4, r29
	  rlwinm    r5,r19,0,24,31
	  bl        0xEA8
	  mr        r5, r3
	  lwz       r3, 0x28(r31)
	  rlwinm    r4,r19,0,24,31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x724:
	  rlwinm    r0,r19,0,24,31
	  cmplwi    r0, 0x8
	  blt+      .loc_0x6F4
	  li        r19, 0
	  b         .loc_0x778

	.loc_0x738:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x44
	  bl        0xDE0
	  lwz       r3, 0x44(r1)
	  rlwinm    r4,r19,0,24,31
	  lhz       r0, 0x48(r1)
	  addi      r5, r1, 0x64
	  stw       r3, 0x64(r1)
	  sth       r0, 0x68(r1)
	  lwz       r3, 0x28(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x778:
	  rlwinm    r6,r19,0,24,31
	  cmplw     r6, r18
	  blt+      .loc_0x738
	  cmplwi    r28, 0
	  beq-      .loc_0x90C
	  lwz       r0, 0xC(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x90C
	  mr        r3, r30
	  mr        r4, r29
	  bl        0x1318
	  mr        r21, r3
	  mr        r3, r30
	  mr        r4, r29
	  bl        0x1308
	  mr        r4, r3
	  lwz       r3, 0x30(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r20,r21,0,24,31
	  li        r18, 0
	  b         .loc_0x80C

	.loc_0x7D8:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x6C
	  rlwinm    r6,r18,0,24,31
	  bl        0x1358
	  lwz       r3, 0x30(r31)
	  rlwinm    r4,r18,0,24,31
	  addi      r5, r1, 0x6C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl
	  addi      r18, r18, 0x1

	.loc_0x80C:
	  rlwinm    r0,r18,0,24,31
	  cmplw     r0, r20
	  blt+      .loc_0x7D8
	  rlwinm    r20,r21,0,24,31
	  li        r18, 0
	  b         .loc_0x860

	.loc_0x824:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x24
	  rlwinm    r6,r18,0,24,31
	  bl        0x12AC
	  lwz       r0, 0x24(r1)
	  rlwinm    r4,r18,0,24,31
	  addi      r5, r1, 0x28
	  stw       r0, 0x28(r1)
	  lwz       r3, 0x30(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  addi      r18, r18, 0x1

	.loc_0x860:
	  rlwinm    r0,r18,0,24,31
	  cmplw     r0, r20
	  blt+      .loc_0x824
	  rlwinm    r20,r21,0,24,31
	  li        r18, 0
	  b         .loc_0x8AC

	.loc_0x878:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x20
	  rlwinm    r6,r18,0,24,31
	  bl        0x152C
	  lwz       r3, 0x30(r31)
	  rlwinm    r4,r18,0,24,31
	  addi      r5, r1, 0x20
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  addi      r18, r18, 0x1

	.loc_0x8AC:
	  rlwinm    r0,r18,0,24,31
	  cmplw     r0, r20
	  blt+      .loc_0x878
	  rlwinm    r20,r25,0,24,31
	  li        r18, 0
	  b         .loc_0x900

	.loc_0x8C4:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x18
	  rlwinm    r6,r18,0,24,31
	  bl        0x134C
	  lwz       r0, 0x18(r1)
	  rlwinm    r4,r18,0,24,31
	  addi      r5, r1, 0x1C
	  stw       r0, 0x1C(r1)
	  lwz       r3, 0x2C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC0(r12)
	  mtctr     r12
	  bctrl
	  addi      r18, r18, 0x1

	.loc_0x900:
	  rlwinm    r0,r18,0,24,31
	  cmplw     r0, r20
	  blt+      .loc_0x8C4

	.loc_0x90C:
	  mr        r3, r31
	  lmw       r18, 0xB8(r1)
	  lwz       r0, 0xF4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xF0
	  blr
	*/
}

/**
 * @note Address: 0x8006DADC
 * @note Size: 0x1A4
 * TODO: texGenNumIndex is probably from a const function. bit shifts need fixing.
 */
void J3DMaterialFactory::modifyPatchedCurrentMtx(J3DMaterial* material, int index) const
{
	J3DTexCoord coords[8];
	u32 texGenNumIndex = getMaterialInitData(index).mNumTexGensIndex;
	u16 texGenNum      = (texGenNumIndex != 0xFF) ? mNumTexCoords[texGenNumIndex] : 0;
	for (int i = 1; i < 8; i++) {
		coords[i].mTexMtxReg = coords[i % 4].mTexMtxReg;
	}
	for (u8 i = 0; i < texGenNum; i++) {
		J3DTexCoord newCoord = newTexCoord(index, i);
		coords[i]            = newCoord;
	}
	material->mCurrentMtx.mMtxIdxRegA = (u32)(coords[3].mTexGenMtx) << 0x18 | (u32)(coords[2].mTexGenMtx) << 0x12
	                                  | (u32)(coords[1].mTexGenMtx) << 0xC | (u32)(coords[0].mTexGenMtx) << 0x6;
	material->mCurrentMtx.mMtxIdxRegB = (u32)(coords[7].mTexGenMtx) << 0x12 | (u32)(coords[6].mTexGenMtx) << 0xC
	                                  | (u32)(coords[5].mTexGenMtx) << 0x6 | (u32)(coords[4].mTexGenMtx);
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	lis      r6, j3dDefaultTexCoordInfo@ha
	stw      r0, 0x64(r1)
	slwi     r0, r5, 1
	addi     r6, r6, j3dDefaultTexCoordInfo@l
	stmw     r27, 0x4c(r1)
	mr       r29, r3
	lwz      r3, 8(r3)
	mr       r31, r5
	mr       r30, r4
	lwz      r5, 4(r29)
	lhzx     r0, r3, r0
	lbz      r7, 2(r6)
	mulli    r3, r0, 0x14c
	lbz      r4, 0(r6)
	lbz      r6, 1(r6)
	stb      r4, 0x10(r1)
	addi     r0, r3, 3
	lbzx     r0, r5, r0
	stb      r6, 0x11(r1)
	cmplwi   r0, 0xff
	stb      r7, 0x12(r1)
	sth      r7, 0x14(r1)
	stb      r4, 0x16(r1)
	stb      r6, 0x17(r1)
	stb      r7, 0x18(r1)
	sth      r7, 0x1a(r1)
	stb      r4, 0x1c(r1)
	stb      r6, 0x1d(r1)
	stb      r7, 0x1e(r1)
	sth      r7, 0x20(r1)
	stb      r4, 0x22(r1)
	stb      r6, 0x23(r1)
	stb      r7, 0x24(r1)
	sth      r7, 0x26(r1)
	stb      r4, 0x28(r1)
	stb      r6, 0x29(r1)
	stb      r7, 0x2a(r1)
	sth      r7, 0x2c(r1)
	stb      r4, 0x2e(r1)
	stb      r6, 0x2f(r1)
	stb      r7, 0x30(r1)
	sth      r7, 0x32(r1)
	stb      r4, 0x34(r1)
	stb      r6, 0x35(r1)
	stb      r7, 0x36(r1)
	sth      r7, 0x38(r1)
	stb      r4, 0x3a(r1)
	stb      r6, 0x3b(r1)
	stb      r7, 0x3c(r1)
	sth      r7, 0x3e(r1)
	beq      lbl_8006DBBC
	lwz      r3, 0x24(r29)
	lbzx     r28, r3, r0
	b        lbl_8006DBC0

lbl_8006DBBC:
	li       r28, 0

lbl_8006DBC0:
	li       r27, 0
	b        lbl_8006DC04

lbl_8006DBC8:
	mr       r4, r29
	mr       r5, r31
	addi     r3, r1, 8
	bl       newTexCoord__18J3DMaterialFactoryCFii
	clrlwi   r0, r27, 0x18
	addi     r6, r1, 0x10
	mulli    r4, r0, 6
	lbz      r5, 8(r1)
	lbz      r3, 9(r1)
	addi     r27, r27, 1
	lbz      r0, 0xa(r1)
	add      r6, r6, r4
	stb      r5, 0(r6)
	stb      r3, 1(r6)
	stb      r0, 2(r6)

lbl_8006DC04:
	clrlwi   r6, r27, 0x18
	cmplw    r6, r28
	blt      lbl_8006DBC8
	lbz      r3, 0x12(r1)
	lbz      r0, 0x18(r1)
	lbz      r4, 0x1e(r1)
	slwi     r3, r3, 6
	slwi     r0, r0, 0xc
	lbz      r7, 0x30(r1)
	lbz      r5, 0x24(r1)
	slwi     r4, r4, 0x12
	or       r0, r3, r0
	lbz      r3, 0x36(r1)
	lbz      r6, 0x3c(r1)
	slwi     r5, r5, 0x18
	or       r4, r4, r0
	lbz      r8, 0x2a(r1)
	rlwinm   r0, r7, 6, 0x12, 0x19
	rlwinm   r3, r3, 0xc, 0xc, 0x13
	or       r5, r5, r4
	rlwinm   r4, r6, 0x12, 6, 0xd
	or       r0, r8, r0
	stw      r5, 0x40(r30)
	or       r0, r3, r0
	or       r0, r4, r0
	stw      r0, 0x44(r30)
	lmw      r27, 0x4c(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/**
 * @note Address: 0x8006DC80
 * @note Size: 0x2B8
 */
J3DLockedMaterial* J3DMaterialFactory::createLockedMaterial(J3DMaterial* material, int index, u32 flags) const
{
	if (material == nullptr) {
		material = new J3DLockedMaterial;
	}
	material->mColorBlock             = new J3DColorBlockNull;
	material->mTexGenBlock            = new J3DTexGenBlockNull;
	material->mTevBlock               = new J3DTevBlockNull;
	material->mIndBlock               = new J3DIndBlockNull;
	material->mPEBlock                = new J3DPEBlockNull;
	material->mIndex                  = index;
	material->mMaterialMode           = mPEModes[index];
	material->mCurrentMtx.mMtxIdxRegA = mCurrMtxInfo[index].mMtxIdxRegA;
	material->mCurrentMtx.mMtxIdxRegB = mCurrMtxInfo[index].mMtxIdxRegB;
	material->mColorBlock->setMatColorOffset(mPatchInfo[index]._00);
	material->mColorBlock->setColorChanOffset(mPatchInfo[index]._02);
	material->mTexGenBlock->setTexMtxOffset(mPatchInfo[index]._04);
	material->mTevBlock->setTexNoOffset(mPatchInfo[index]._06);
	material->mTevBlock->setTevRegOffset(mPatchInfo[index]._08);
	material->mPEBlock->setFogOffset(mPatchInfo[index]._0A);
	if (material->mSharedDLObj == nullptr) {
		material->mSharedDLObj = new J3DDisplayListObj;
		material->mSharedDLObj->setSingleDisplayList((u8*)(&mDisplayLists[index]) + mDisplayLists[index]._00, mDisplayLists[index]._04);
	}
	return static_cast<J3DLockedMaterial*>(material);
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr.       r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  bne-      .loc_0x168
	  li        r3, 0x4C
	  bl        -0x49E0C
	  mr.       r29, r3
	  beq-      .loc_0x78
	  lis       r4, 0x804A
	  lis       r5, 0x3CF4
	  addi      r0, r4, 0x15D8
	  stw       r0, 0x0(r29)
	  subi      r5, r5, 0x3100
	  lis       r4, 0xF4
	  stw       r5, 0x40(r29)
	  subi      r0, r4, 0x30C4
	  stw       r0, 0x44(r29)
	  bl        -0xB548
	  lis       r4, 0x804A
	  mr        r3, r29
	  addi      r0, r4, 0x1578
	  stw       r0, 0x0(r29)
	  bl        -0xA458

	.loc_0x78:
	  li        r3, 0x4
	  bl        -0x49E58
	  cmplwi    r3, 0
	  beq-      .loc_0xA0
	  lis       r5, 0x804A
	  lis       r4, 0x804A
	  addi      r0, r5, 0x1788
	  stw       r0, 0x0(r3)
	  addi      r0, r4, 0x1DA4
	  stw       r0, 0x0(r3)

	.loc_0xA0:
	  stw       r3, 0x24(r29)
	  li        r3, 0x4
	  bl        -0x49E84
	  cmplwi    r3, 0
	  beq-      .loc_0xCC
	  lis       r5, 0x804A
	  lis       r4, 0x804A
	  addi      r0, r5, 0x171C
	  stw       r0, 0x0(r3)
	  addi      r0, r4, 0x1D38
	  stw       r0, 0x0(r3)

	.loc_0xCC:
	  stw       r3, 0x28(r29)
	  li        r3, 0x8
	  bl        -0x49EB0
	  mr.       r31, r3
	  beq-      .loc_0xFC
	  lis       r5, 0x804A
	  lis       r4, 0x804A
	  addi      r0, r5, 0x2B08
	  stw       r0, 0x0(r31)
	  addi      r0, r4, 0x1C5C
	  stw       r0, 0x0(r31)
	  bl        0x9628

	.loc_0xFC:
	  stw       r31, 0x2C(r29)
	  li        r3, 0x4
	  bl        -0x49EE0
	  cmplwi    r3, 0
	  beq-      .loc_0x128
	  lis       r5, 0x804A
	  lis       r4, 0x804A
	  addi      r0, r5, 0x16D0
	  stw       r0, 0x0(r3)
	  addi      r0, r4, 0x1684
	  stw       r0, 0x0(r3)

	.loc_0x128:
	  stw       r3, 0x30(r29)
	  li        r3, 0x4
	  bl        -0x49F0C
	  cmplwi    r3, 0
	  beq-      .loc_0x154
	  lis       r5, 0x804A
	  lis       r4, 0x804A
	  addi      r0, r5, 0x1608
	  stw       r0, 0x0(r3)
	  addi      r0, r4, 0x1BE0
	  stw       r0, 0x0(r3)

	.loc_0x154:
	  stw       r3, 0x34(r29)
	  lwz       r3, 0x84(r28)
	  sth       r30, 0x14(r29)
	  lbzx      r0, r3, r30
	  stw       r0, 0x10(r29)

	.loc_0x168:
	  lwz       r0, 0x80(r28)
	  rlwinm    r31,r30,3,0,28
	  lwz       r4, 0x7C(r28)
	  rlwinm    r30,r30,4,0,27
	  add       r3, r0, r31
	  lwz       r0, 0x0(r3)
	  stw       r0, 0x40(r29)
	  lwz       r0, 0x4(r3)
	  stw       r0, 0x44(r29)
	  lwz       r3, 0x24(r29)
	  lhzx      r4, r4, r30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x24(r29)
	  lwz       r0, 0x7C(r28)
	  lwz       r12, 0x0(r3)
	  add       r4, r0, r30
	  lwz       r12, 0x80(r12)
	  lhz       r4, 0x2(r4)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x28(r29)
	  lwz       r0, 0x7C(r28)
	  lwz       r12, 0x0(r3)
	  add       r4, r0, r30
	  lwz       r12, 0x64(r12)
	  lhz       r4, 0x4(r4)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2C(r29)
	  lwz       r0, 0x7C(r28)
	  lwz       r12, 0x0(r3)
	  add       r4, r0, r30
	  lwz       r12, 0xD0(r12)
	  lhz       r4, 0x6(r4)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2C(r29)
	  lwz       r0, 0x7C(r28)
	  lwz       r12, 0x0(r3)
	  add       r4, r0, r30
	  lwz       r12, 0xD4(r12)
	  lhz       r4, 0x8(r4)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x34(r29)
	  lwz       r0, 0x7C(r28)
	  lwz       r12, 0x0(r3)
	  add       r4, r0, r30
	  lwz       r12, 0x74(r12)
	  lhz       r4, 0xA(r4)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x48(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x294
	  li        r3, 0x10
	  bl        -0x4A030
	  cmplwi    r3, 0
	  beq-      .loc_0x274
	  li        r0, 0
	  stw       r0, 0x0(r3)
	  stw       r0, 0x4(r3)
	  stw       r0, 0x8(r3)
	  stw       r0, 0xC(r3)

	.loc_0x274:
	  lwz       r0, 0x78(r28)
	  stw       r3, 0x48(r29)
	  add       r4, r0, r31
	  lwz       r0, 0x0(r4)
	  lwz       r3, 0x48(r29)
	  lwz       r5, 0x4(r4)
	  add       r4, r0, r4
	  bl        -0xE5C4

	.loc_0x294:
	  lwz       r0, 0x24(r1)
	  mr        r3, r29
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/**
 * @note Address: 0x8006DF38
 * @note Size: 0x4
 */
void J3DTevBlock::setTevRegOffset(u32) { }

/**
 * @note Address: 0x8006DF3C
 * @note Size: 0x8
 */
void J3DTevBlock::setTexNoOffset(u32 a1) { mTexNoOffset = a1; }

/**
 * @note Address: 0x8006DF44
 * @note Size: 0x80
 * calcSize__18J3DMaterialFactoryCFP11J3DMaterialQ218J3DMaterialFactory12MaterialTypeiUl
 */
size_t J3DMaterialFactory::calcSize(J3DMaterial* material, MaterialType type, int p3, u32 flags) const
{
	size_t size = 0;
	switch (type) {
	case NORMAL:
		size = calcSizeNormalMaterial(material, p3, flags);
		break;
	case LOCKED:
		size = calcSizeLockedMaterial(material, p3, flags);
		break;
	case PATCHED:
		size = calcSizePatchedMaterial(material, p3, flags);
		break;
	}
	return size;
}

/**
 * @note Address: 0x8006DFC4
 * @note Size: 0x258
 */
size_t J3DMaterialFactory::calcSizeNormalMaterial(J3DMaterial*, int, u32) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  lwz       r0, 0x78(r3)
	  stmw      r25, 0x14(r1)
	  mr        r29, r3
	  cmplwi    r0, 0
	  li        r30, 0
	  beq-      .loc_0x2C
	  bl        0x370
	  b         .loc_0x244

	.loc_0x2C:
	  lwz       r3, 0x8(r29)
	  rlwinm    r31,r5,1,0,30
	  li        r7, 0
	  lwz       r5, 0x4(r29)
	  lhzx      r0, r3, r31
	  mr        r3, r7
	  mulli     r0, r0, 0x14C
	  add       r5, r5, r0
	  lbz       r0, 0x4(r5)
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x60
	  lwz       r3, 0x4C(r29)
	  lbzx      r3, r3, r0

	.loc_0x60:
	  lhz       r0, 0x84(r5)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x70
	  li        r7, 0x1

	.loc_0x70:
	  lhz       r0, 0x86(r5)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x80
	  addi      r7, r7, 0x1

	.loc_0x80:
	  lhz       r0, 0x88(r5)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x90
	  addi      r7, r7, 0x1

	.loc_0x90:
	  lhz       r0, 0x8A(r5)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xA0
	  addi      r7, r7, 0x1

	.loc_0xA0:
	  lhz       r0, 0x8C(r5)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xB0
	  addi      r7, r7, 0x1

	.loc_0xB0:
	  lhz       r0, 0x8E(r5)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xC0
	  addi      r7, r7, 0x1

	.loc_0xC0:
	  lhz       r0, 0x90(r5)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xD0
	  addi      r7, r7, 0x1

	.loc_0xD0:
	  lhz       r0, 0x92(r5)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xE0
	  addi      r7, r7, 0x1

	.loc_0xE0:
	  cmplw     r3, r7
	  beq-      .loc_0x100
	  cmplwi    r7, 0
	  beq-      .loc_0x100
	  cmplw     r3, r7
	  ble-      .loc_0x104
	  mr        r7, r3
	  b         .loc_0x104

	.loc_0x100:
	  mr        r7, r3

	.loc_0x104:
	  rlwinm    r28,r6,16,27,31
	  cmplw     r7, r28
	  ble-      .loc_0x114
	  mr        r28, r7

	.loc_0x114:
	  lbz       r0, 0x3(r5)
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x12C
	  lwz       r3, 0x24(r29)
	  lbzx      r3, r3, r0
	  b         .loc_0x130

	.loc_0x12C:
	  li        r3, 0

	.loc_0x130:
	  li        r0, 0x4
	  cmplwi    r4, 0
	  subc      r3, r0, r3
	  rlwinm    r26,r6,0,2,3
	  subfe     r4, r3, r3
	  rlwinm    r0,r6,0,4,5
	  rlwinm    r3,r6,0,0,1
	  rlwinm    r25,r6,8,31,31
	  andc      r27, r0, r4
	  bne-      .loc_0x15C
	  li        r30, 0x4C

	.loc_0x15C:
	  bl        -0xBAC8
	  add       r30, r30, r3
	  mr        r3, r27
	  bl        -0xBA84
	  rlwinm    r0,r28,0,16,31
	  add       r30, r30, r3
	  mr        r3, r0
	  bl        -0xBA68
	  add       r30, r30, r3
	  mr        r3, r25
	  bl        -0xBA2C
	  lwz       r4, 0x8(r29)
	  add       r30, r30, r3
	  lwz       r5, 0x4(r29)
	  mr        r3, r26
	  lhzx      r0, r4, r31
	  mulli     r0, r0, 0x14C
	  lbzx      r4, r5, r0
	  bl        -0xBA38
	  lwz       r4, 0x8(r29)
	  add       r30, r30, r3
	  lwz       r3, 0x4(r29)
	  lhzx      r0, r4, r31
	  mulli     r0, r0, 0x14C
	  add       r3, r3, r0
	  lhz       r0, 0x48(r3)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x1D0
	  addi      r30, r30, 0x94

	.loc_0x1D0:
	  lhz       r0, 0x4A(r3)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x1E0
	  addi      r30, r30, 0x94

	.loc_0x1E0:
	  lhz       r0, 0x4C(r3)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x1F0
	  addi      r30, r30, 0x94

	.loc_0x1F0:
	  lhz       r0, 0x4E(r3)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x200
	  addi      r30, r30, 0x94

	.loc_0x200:
	  lhz       r0, 0x50(r3)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x210
	  addi      r30, r30, 0x94

	.loc_0x210:
	  lhz       r0, 0x52(r3)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x220
	  addi      r30, r30, 0x94

	.loc_0x220:
	  lhz       r0, 0x54(r3)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x230
	  addi      r30, r30, 0x94

	.loc_0x230:
	  lhz       r0, 0x56(r3)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x240
	  addi      r30, r30, 0x94

	.loc_0x240:
	  mr        r3, r30

	.loc_0x244:
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/**
 * @note Address: 0x8006E21C
 * @note Size: 0x13C
 */
size_t J3DMaterialFactory::calcSizePatchedMaterial(J3DMaterial*, int, u32) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  cmplwi    r4, 0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r5
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  bne-      .loc_0x34
	  li        r30, 0x4C

	.loc_0x34:
	  rlwinm    r4,r6,0,6,7
	  lis       r3, 0x4000
	  neg       r0, r4
	  or        r0, r0, r4
	  rlwinm    r31,r0,1,31,31
	  bl        -0xBC0C
	  add       r30, r30, r3
	  mr        r3, r31
	  addi      r30, r30, 0x134
	  bl        -0xBB58
	  lwz       r4, 0x8(r28)
	  rlwinm    r31,r29,1,0,30
	  add       r30, r30, r3
	  lwz       r5, 0x4(r28)
	  lhzx      r0, r4, r31
	  lis       r3, 0x1000
	  mulli     r0, r0, 0x14C
	  lbzx      r4, r5, r0
	  bl        -0xBB68
	  lwz       r4, 0x8(r28)
	  add       r30, r30, r3
	  lwz       r3, 0x4(r28)
	  lhzx      r0, r4, r31
	  mulli     r0, r0, 0x14C
	  add       r3, r3, r0
	  lhz       r0, 0x48(r3)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xA8
	  addi      r30, r30, 0x94

	.loc_0xA8:
	  lhz       r0, 0x4A(r3)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xB8
	  addi      r30, r30, 0x94

	.loc_0xB8:
	  lhz       r0, 0x4C(r3)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xC8
	  addi      r30, r30, 0x94

	.loc_0xC8:
	  lhz       r0, 0x4E(r3)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xD8
	  addi      r30, r30, 0x94

	.loc_0xD8:
	  lhz       r0, 0x50(r3)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xE8
	  addi      r30, r30, 0x94

	.loc_0xE8:
	  lhz       r0, 0x52(r3)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xF8
	  addi      r30, r30, 0x94

	.loc_0xF8:
	  lhz       r0, 0x54(r3)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x108
	  addi      r30, r30, 0x94

	.loc_0x108:
	  lhz       r0, 0x56(r3)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x118
	  addi      r30, r30, 0x94

	.loc_0x118:
	  lwz       r0, 0x24(r1)
	  mr        r3, r30
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/**
 * @note Address: 0x8006E358
 * @note Size: 0x18
 */
size_t J3DMaterialFactory::calcSizeLockedMaterial(J3DMaterial*, int, u32) const
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  li        r3, 0
	  bne-      .loc_0x10
	  li        r3, 0x64

	.loc_0x10:
	  addi      r3, r3, 0x10
	  blr
	*/
}

/**
 * @note Address: 0x8006E370
 * @note Size: 0x90
 */
J3DGXColor J3DMaterialFactory::newMatColor(int p1, int p2) const
{
	// s16 matColorIndex = _04[_08[p1]]._08[p2];
	// if (matColorIndex == -1) {
	// 	return J3DGXColor();
	// } else {
	// 	return J3DGXColor(_10[matColorIndex].r, _10[matColorIndex].g, _10[matColorIndex].b, _10[matColorIndex].a);
	// }
	// static const J3DGXColor defaultMatColor = J3DGXColor(0xFF, 0xFF, 0xFF, 0xFF);
	// return (getMaterialInitData(p1)->mMatColorIndices[p2] != 0xFFFF) ? _10[getMaterialInitData(p1)->mMatColorIndices[p2]]
	//                                                                   : J3DGXColor(0xFF, 0xFF, 0xFF, 0xFF);
	//   : defaultMatColor;
	// const u32 defaultMatColorRaw = 0xFFFFFFFF;
	// J3DGXColor defaultMatColor   = defaultMatColorRaw;
	J3DGXColor defaultMatColor = 0xFFFFFFFF;
	// if (getMaterialInitData(p1).mMatColorIndices[p2] != 0xFFFF) {
	// 	return J3DGXColor(_10[getMaterialInitData(p1).mMatColorIndices[p2]]);
	// } else {
	// 	return J3DGXColor(defaultMatColor);
	// }
	return (getMaterialInitData(p1).mMatColorIndex[p2] != 0xFFFF) ? J3DGXColor(mColorData[getMaterialInitData(p1).mMatColorIndex[p2]])
	                                                              : J3DGXColor(defaultMatColor);
	//  : J3DGXColor(defaultMatColor);
	/*
	stwu     r1, -0x10(r1)
	slwi     r0, r6, 1
	lwz      r7, 8(r4)
	slwi     r5, r5, 1
	lwz      r8, lbl_80516A80@sda21(r2)
	lhzx     r5, r7, r5
	stw      r8, 8(r1)
	mulli    r5, r5, 0x14c
	lwz      r6, 4(r4)
	lbz      r7, 9(r1)
	lbz      r8, 0xa(r1)
	addi     r5, r5, 8
	lbz      r9, 0xb(r1)
	add      r0, r5, r0
	lhzx     r0, r6, r0
	cmplwi   r0, 0xffff
	beq      lbl_8006E3E4
	lwz      r4, 0x10(r4)
	rlwinm   r0, r0, 2, 0xe, 0x1d
	add      r4, r4, r0
	lbz      r0, 0(r4)
	stb      r0, 0(r3)
	lbz      r0, 1(r4)
	stb      r0, 1(r3)
	lbz      r0, 2(r4)
	stb      r0, 2(r3)
	lbz      r0, 3(r4)
	stb      r0, 3(r3)
	b        lbl_8006E3F8

lbl_8006E3E4:
	lbz      r0, 8(r1)
	stb      r0, 0(r3)
	stb      r7, 1(r3)
	stb      r8, 2(r3)
	stb      r9, 3(r3)

lbl_8006E3F8:
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x8006E400
 * @note Size: 0x38
 */
u8 J3DMaterialFactory::newColorChanNum(int initDataIndexIndex) const
{
	if (getMaterialInitData(initDataIndexIndex).mNumberColorChanControls != 0xFF) {
		return mNumColorChans[getMaterialInitData(initDataIndexIndex).mNumberColorChanControls];
	}
	return 0;
}

/**
 * @note Address: 0x8006E438
 * @note Size: 0x194
 */
J3DColorChan J3DMaterialFactory::newColorChan(int, int) const
{
	/*
	lwz      r7, 8(r4)
	slwi     r5, r5, 1
	slwi     r0, r6, 1
	lwz      r6, 4(r4)
	lhzx     r5, r7, r5
	mulli    r5, r5, 0x14c
	addi     r5, r5, 0xc
	add      r0, r5, r0
	lhzx     r0, r6, r0
	cmplwi   r0, 0xffff
	beq      lbl_8006E518
	lwz      r4, 0x18(r4)
	rlwinm   r0, r0, 3, 0xd, 0x1c
	add      r8, r4, r0
	lbz      r10, 5(r8)
	lbz      r0, 2(r8)
	lbz      r5, 0(r8)
	addi     r7, r10, -255
	subfic   r6, r10, 0xff
	lbz      r4, 1(r8)
	nor      r6, r7, r6
	rlwinm   r7, r5, 1, 0xf, 0x1e
	srawi    r5, r6, 0x1f
	lbz      r9, 4(r8)
	andc     r5, r10, r5
	or       r4, r7, r4
	rlwinm   r6, r4, 0, 0x1a, 0x18
	rlwinm   r11, r0, 7, 0x12, 0x12
	rlwinm   r5, r5, 6, 0x12, 0x19
	cntlzw   r4, r9
	or       r12, r6, r5
	lbz      r6, 3(r8)
	rlwinm   r5, r4, 0x1b, 0x1f, 0x1f
	neg      r4, r9
	rlwimi   r12, r0, 2, 0x1d, 0x1d
	rlwinm   r10, r0, 7, 0x11, 0x11
	rlwimi   r12, r0, 2, 0x1c, 0x1c
	neg      r5, r5
	andc     r5, r6, r5
	subfic   r6, r9, 2
	rlwimi   r12, r0, 2, 0x1b, 0x1b
	or       r4, r4, r9
	rlwimi   r12, r0, 2, 0x1a, 0x1a
	slwi     r7, r5, 7
	rlwimi   r12, r0, 7, 0x14, 0x14
	addi     r5, r9, -2
	rlwimi   r12, r0, 7, 0x13, 0x13
	rlwimi   r11, r12, 0, 0x13, 0x1f
	or       r0, r6, r5
	rlwimi   r10, r11, 0, 0x12, 0x1f
	rlwinm   r5, r10, 0, 0x19, 0x16
	or       r5, r5, r7
	rlwimi   r5, r0, 0xa, 0x16, 0x16
	rlwimi   r5, r4, 0xb, 0x15, 0x15
	sth      r5, 0(r3)
	blr

lbl_8006E518:
	addi     r8, r2, j3dDefaultColorChanInfo@sda21
	lis      r4, 0x0000FFFF@ha
	lbz      r10, 5(r8)
	addi     r4, r4, 0x0000FFFF@l
	lbz      r0, 2(r8)
	lbz      r5, j3dDefaultColorChanInfo@sda21(r2)
	subf     r7, r4, r10
	subf     r6, r10, r4
	lbz      r4, 1(r8)
	nor      r6, r7, r6
	rlwinm   r7, r5, 1, 0xf, 0x1e
	srawi    r5, r6, 0x1f
	lbz      r9, 4(r8)
	andc     r5, r10, r5
	or       r4, r7, r4
	rlwinm   r6, r4, 0, 0x1a, 0x18
	rlwinm   r11, r0, 7, 0x12, 0x12
	rlwinm   r5, r5, 6, 0x12, 0x19
	cntlzw   r4, r9
	or       r12, r6, r5
	lbz      r6, 3(r8)
	rlwinm   r5, r4, 0x1b, 0x1f, 0x1f
	neg      r4, r9
	rlwimi   r12, r0, 2, 0x1d, 0x1d
	rlwinm   r10, r0, 7, 0x11, 0x11
	rlwimi   r12, r0, 2, 0x1c, 0x1c
	neg      r5, r5
	andc     r5, r6, r5
	subfic   r6, r9, 2
	rlwimi   r12, r0, 2, 0x1b, 0x1b
	or       r4, r4, r9
	rlwimi   r12, r0, 2, 0x1a, 0x1a
	slwi     r7, r5, 7
	rlwimi   r12, r0, 7, 0x14, 0x14
	addi     r5, r9, -2
	rlwimi   r12, r0, 7, 0x13, 0x13
	rlwimi   r11, r12, 0, 0x13, 0x1f
	or       r0, r6, r5
	rlwimi   r10, r11, 0, 0x12, 0x1f
	rlwinm   r5, r10, 0, 0x19, 0x16
	or       r5, r5, r7
	rlwimi   r5, r0, 0xa, 0x16, 0x16
	rlwimi   r5, r4, 0xb, 0x15, 0x15
	sth      r5, 0(r3)
	blr
	*/
}

/**
 * @note Address: 0x8006E5CC
 * @note Size: 0x90
 */
J3DGXColor J3DMaterialFactory::newAmbColor(int, int) const
{
	/*
	stwu     r1, -0x10(r1)
	slwi     r0, r6, 1
	lwz      r7, 8(r4)
	slwi     r5, r5, 1
	lwz      r8, lbl_80516A84@sda21(r2)
	lhzx     r5, r7, r5
	stw      r8, 8(r1)
	mulli    r5, r5, 0x14c
	lwz      r6, 4(r4)
	lbz      r7, 9(r1)
	lbz      r8, 0xa(r1)
	addi     r5, r5, 0x14
	lbz      r9, 0xb(r1)
	add      r0, r5, r0
	lhzx     r0, r6, r0
	cmplwi   r0, 0xffff
	beq      lbl_8006E640
	lwz      r4, 0x1c(r4)
	rlwinm   r0, r0, 2, 0xe, 0x1d
	add      r4, r4, r0
	lbz      r0, 0(r4)
	stb      r0, 0(r3)
	lbz      r0, 1(r4)
	stb      r0, 1(r3)
	lbz      r0, 2(r4)
	stb      r0, 2(r3)
	lbz      r0, 3(r4)
	stb      r0, 3(r3)
	b        lbl_8006E654

lbl_8006E640:
	lbz      r0, 8(r1)
	stb      r0, 0(r3)
	stb      r7, 1(r3)
	stb      r8, 2(r3)
	stb      r9, 3(r3)

lbl_8006E654:
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x8006E65C
 * @note Size: 0x38
 */
u8 J3DMaterialFactory::newTexGenNum(int index) const
{
	if (getMaterialInitData(index).mNumTexGensIndex != 0xFF) {
		return mNumTexCoords[getMaterialInitData(index).mNumTexGensIndex];
	}
	return 0;
}

/**
 * @note Address: 0x8006E694
 * @note Size: 0x84
 */
J3DTexCoord J3DMaterialFactory::newTexCoord(int p1, int p2) const
{
	if (getMaterialInitData(p1).mTexGenInfoIndex[p2] != 0xFFFF) {
		return *(J3DTexCoord*)&mTexCoordInfo[getMaterialInitData(p1).mTexGenInfoIndex[p2]];
	}
	return *(J3DTexCoord*)&j3dDefaultTexCoordInfo[0];
	/*
	lwz      r7, 8(r4)
	slwi     r5, r5, 1
	slwi     r0, r6, 1
	lwz      r6, 4(r4)
	lhzx     r5, r7, r5
	mulli    r5, r5, 0x14c
	addi     r5, r5, 0x28
	add      r0, r5, r0
	lhzx     r0, r6, r0
	cmplwi   r0, 0xffff
	beq      lbl_8006E6F0
	lwz      r4, 0x28(r4)
	rlwinm   r0, r0, 2, 0xe, 0x1d
	add      r4, r4, r0
	lbz      r0, 0(r4)
	stb      r0, 0(r3)
	lbz      r0, 1(r4)
	stb      r0, 1(r3)
	lbz      r0, 2(r4)
	stb      r0, 2(r3)
	lbz      r0, 2(r3)
	sth      r0, 4(r3)
	blr

lbl_8006E6F0:
	lis      r4, j3dDefaultTexCoordInfo@ha
	lbzu     r0, j3dDefaultTexCoordInfo@l(r4)
	stb      r0, 0(r3)
	lbz      r0, 1(r4)
	stb      r0, 1(r3)
	lbz      r0, 2(r4)
	stb      r0, 2(r3)
	lbz      r0, 2(r3)
	sth      r0, 4(r3)
	blr
	*/
}

/**
 * @note Address: 0x8006E718
 * @note Size: 0x158
 */
J3DTexMtx J3DMaterialFactory::newTexMtx(int, int) const
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lwz      r6, 8(r3)
	slwi     r4, r4, 1
	stw      r0, 0x24(r1)
	slwi     r0, r5, 1
	stw      r31, 0x1c(r1)
	lwz      r31, 4(r3)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	li       r3, 0
	lhzx     r4, r6, r4
	mulli    r4, r4, 0x14c
	addi     r4, r4, 0x48
	add      r30, r4, r0
	lhzx     r0, r31, r30
	cmplwi   r0, 0xffff
	beq      lbl_8006E854
	li       r3, 0x94
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8006E854
	lhzx     r0, r31, r30
	lwz      r4, 0x30(r29)
	mulli    r0, r0, 0x64
	add      r4, r4, r0
	lfs      f0, 0x24(r4)
	stfs     f0, 0x24(r3)
	lfs      f0, 0x28(r4)
	stfs     f0, 0x28(r3)
	lfs      f0, 0x2c(r4)
	stfs     f0, 0x2c(r3)
	lfs      f0, 0x30(r4)
	stfs     f0, 0x30(r3)
	lfs      f0, 0x34(r4)
	stfs     f0, 0x34(r3)
	lfs      f0, 0x38(r4)
	stfs     f0, 0x38(r3)
	lfs      f0, 0x3c(r4)
	stfs     f0, 0x3c(r3)
	lfs      f0, 0x40(r4)
	stfs     f0, 0x40(r3)
	lfs      f0, 0x44(r4)
	stfs     f0, 0x44(r3)
	lfs      f0, 0x48(r4)
	stfs     f0, 0x48(r3)
	lfs      f0, 0x4c(r4)
	stfs     f0, 0x4c(r3)
	lfs      f0, 0x50(r4)
	stfs     f0, 0x50(r3)
	lfs      f0, 0x54(r4)
	stfs     f0, 0x54(r3)
	lfs      f0, 0x58(r4)
	stfs     f0, 0x58(r3)
	lfs      f0, 0x5c(r4)
	stfs     f0, 0x5c(r3)
	lfs      f0, 0x60(r4)
	stfs     f0, 0x60(r3)
	lfs      f0, 4(r4)
	stfs     f0, 4(r3)
	lfs      f0, 8(r4)
	stfs     f0, 8(r3)
	lfs      f0, 0xc(r4)
	stfs     f0, 0xc(r3)
	lbz      r0, 0(r4)
	stb      r0, 0(r3)
	lbz      r0, 1(r4)
	stb      r0, 1(r3)
	lfs      f0, 0x10(r4)
	stfs     f0, 0x10(r3)
	lfs      f0, 0x14(r4)
	stfs     f0, 0x14(r3)
	lha      r0, 0x18(r4)
	sth      r0, 0x18(r3)
	lfs      f0, 0x1c(r4)
	stfs     f0, 0x1c(r3)
	lfs      f0, 0x20(r4)
	stfs     f0, 0x20(r3)

lbl_8006E854:
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
 * @note Address: 0x8006E870
 * @note Size: 0x40
 */
u8 J3DMaterialFactory::newCullMode(int index) const
{
	if (getMaterialInitData(index).mCullModeIndex != 0xFF) {
		return (GXCullMode)(mCullModeInfo[getMaterialInitData(index).mCullModeIndex] & 0xFF);
	}
	return (GXCullMode)0xFF;
}

/**
 * @note Address: 0x8006E8B0
 * @note Size: 0x48
 */
u16 J3DMaterialFactory::newTexNo(int p1, int p2) const
{
	if (getMaterialInitData(p1).mTextureIndex[p2] != 0xFFFF) {
		return mTextureRemapTable[getMaterialInitData(p1).mTextureIndex[p2]];
	}
	return 0xFFFF;
}

/**
 * @note Address: 0x8006E8F8
 * @note Size: 0x74
 */
J3DTevOrder J3DMaterialFactory::newTevOrder(int p1, int p2) const
{
	u16 v1 = getMaterialInitData(p1).mTevOrderInfoIndex[p2];
	if (v1 != 0xFFFF) {
		return J3DTevOrder(mTevOrderInfo[v1]);
	}
	return J3DTevOrder();
}

/**
 * @note Address: 0x8006E96C
 * @note Size: 0x98
 */
J3DGXColorS10 J3DMaterialFactory::newTevColor(int p1, int p2) const
{
	u16 v1              = getMaterialInitData(p1).mTevColorIndex[p2];
	J3DGXColorS10 color = 0;
	if (v1 != 0xFFFF) {
		color = mTevColors[v1];
	}
	return color;
	/*
	stwu     r1, -0x10(r1)
	slwi     r0, r6, 1
	lwz      r7, 8(r4)
	slwi     r5, r5, 1
	lwz      r8, lbl_80520E48@sda21(r2)
	lhzx     r5, r7, r5
	lwz      r7, lbl_80520E4C@sda21(r2)
	mulli    r5, r5, 0x14c
	lwz      r6, 4(r4)
	stw      r8, 8(r1)
	addi     r5, r5, 0xdc
	stw      r7, 0xc(r1)
	add      r0, r5, r0
	lha      r7, 0xa(r1)
	lhzx     r0, r6, r0
	lha      r5, 0xc(r1)
	cmplwi   r0, 0xffff
	lha      r6, 0xe(r1)
	beq      lbl_8006E9E8
	lwz      r4, 0x44(r4)
	rlwinm   r0, r0, 3, 0xd, 0x1c
	add      r4, r4, r0
	lha      r0, 0(r4)
	sth      r0, 0(r3)
	lha      r0, 2(r4)
	sth      r0, 2(r3)
	lha      r0, 4(r4)
	sth      r0, 4(r3)
	lha      r0, 6(r4)
	sth      r0, 6(r3)
	b        lbl_8006E9FC

lbl_8006E9E8:
	lha      r0, 8(r1)
	sth      r0, 0(r3)
	sth      r7, 2(r3)
	sth      r5, 4(r3)
	sth      r6, 6(r3)

lbl_8006E9FC:
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x8006EA04
 * @note Size: 0x90
 */
J3DGXColor J3DMaterialFactory::newTevKColor(int p1, int p2) const
{
	u16 v1 = getMaterialInitData(p1).mTevKColorIndex[p2];
	J3DGXColor color(0xFF, 0xFF, 0xFF, 0xFF);
	if (v1 != 0xFFFF) {
		color = J3DGXColor(mTevKColors[v1]);
	}
	return color;
	/*
	stwu     r1, -0x10(r1)
	slwi     r0, r6, 1
	lwz      r7, 8(r4)
	slwi     r5, r5, 1
	lwz      r8, lbl_80516A88@sda21(r2)
	lhzx     r5, r7, r5
	stw      r8, 8(r1)
	mulli    r5, r5, 0x14c
	lwz      r6, 4(r4)
	lbz      r7, 9(r1)
	lbz      r8, 0xa(r1)
	addi     r5, r5, 0x94
	lbz      r9, 0xb(r1)
	add      r0, r5, r0
	lhzx     r0, r6, r0
	cmplwi   r0, 0xffff
	beq      lbl_8006EA78
	lwz      r4, 0x48(r4)
	rlwinm   r0, r0, 2, 0xe, 0x1d
	add      r4, r4, r0
	lbz      r0, 0(r4)
	stb      r0, 0(r3)
	lbz      r0, 1(r4)
	stb      r0, 1(r3)
	lbz      r0, 2(r4)
	stb      r0, 2(r3)
	lbz      r0, 3(r4)
	stb      r0, 3(r3)
	b        lbl_8006EA8C

lbl_8006EA78:
	lbz      r0, 8(r1)
	stb      r0, 0(r3)
	stb      r7, 1(r3)
	stb      r8, 2(r3)
	stb      r9, 3(r3)

lbl_8006EA8C:
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x8006EA94
 * @note Size: 0x38
 */
u8 J3DMaterialFactory::newTevStageNum(int p1) const
{
	if (getMaterialInitData(p1).mNumTevStagesIndex != 0xFF) {
		return mNumTevStages[getMaterialInitData(p1).mNumTevStagesIndex];
	}
	return 0xFF;
}

/**
 * @note Address: 0x8006EACC
 * @note Size: 0x60
 * newTevStage__18J3DMaterialFactoryCFii
 */
J3DTevStage J3DMaterialFactory::newTevStage(int p1, int p2) const
{
	if (getMaterialInitData(p1).mTevStageInfoIndex[p2] != 0xFFFF) {
		// return mTevStageInfo[getMaterialInitData(p1).mTevStageInfoIndex[p2]];
	}
	return J3DTevStage();
}

/**
 * @note Address: 0x8006EB8C
 * @note Size: 0x9C
 */
J3DTevSwapModeTable J3DMaterialFactory::newTevSwapModeTable(int, int) const
{
	/*
	lwz      r7, 8(r4)
	slwi     r5, r5, 1
	slwi     r0, r6, 1
	lwz      r6, 4(r4)
	lhzx     r5, r7, r5
	mulli    r5, r5, 0x14c
	addi     r5, r5, 0x124
	add      r0, r5, r0
	lhzx     r0, r6, r0
	cmplwi   r0, 0xffff
	beq      lbl_8006EBF4
	lwz      r4, 0x58(r4)
	rlwinm   r0, r0, 2, 0xe, 0x1d
	add      r6, r4, r0
	lbz      r5, 2(r6)
	lbz      r0, 1(r6)
	lbz      r4, 0(r6)
	slwi     r5, r5, 2
	slwi     r0, r0, 4
	lbz      r6, 3(r6)
	add      r0, r0, r5
	slwi     r4, r4, 6
	add      r0, r0, r6
	add      r0, r4, r0
	stb      r0, 0(r3)
	blr

lbl_8006EBF4:
	addi     r6, r2, j3dDefaultTevSwapModeTable@sda21
	lbz      r4, j3dDefaultTevSwapModeTable@sda21(r2)
	lbz      r5, 2(r6)
	lbz      r0, 1(r6)
	slwi     r4, r4, 6
	slwi     r5, r5, 2
	lbz      r6, 3(r6)
	slwi     r0, r0, 4
	add      r0, r0, r5
	add      r0, r0, r6
	add      r0, r4, r0
	stb      r0, 0(r3)
	blr
	*/
}

/**
 * @note Address: 0x8006EC28
 * @note Size: 0x28
 */
u8 J3DMaterialFactory::newIndTexStageNum(int p1) const
{
	if (mIndInitData[p1]._00 == 1) {
		return mIndInitData[p1].mIndTexStageNum;
	}
	return 0;
}

/**
 * @note Address: 0x8006EC50
 * @note Size: 0x60
 */
J3DIndTexOrder J3DMaterialFactory::newIndTexOrder(int p1, int p2) const
{
	// return (_0C[p1]._00 == 1) ? _0C[p1].mIndTexOrders[p2] : j3dDefaultIndTexOrderNull;

	// J3DIndTexOrder order;
	// order = (_0C[p1]._00 != 1) ? j3dDefaultIndTexOrderNull : _0C[p1].mIndTexOrders[p2];
	// return order;

	J3DIndTexOrder order = j3dDefaultIndTexOrderNull;
	if (getIndInitData(p1)._00 == 1) {
		order = getIndInitData(p1).mIndTexOrders[p2];
	}
	return order;

	// J3DIndTexOrder order;
	// if (_0C[p1]._00 == 1) {
	// 	order = _0C[p1].mIndTexOrders[p2];
	// } else {
	// 	order = j3dDefaultIndTexOrderNull;
	// }
	// return order;

	/*
	mulli    r0, r5, 0x138
	lwz      r4, 0xc(r4)
	stwu     r1, -0x10(r1)
	addi     r5, r2, j3dDefaultIndTexOrderNull@sda21
	add      r8, r4, r0
	lbz      r7, j3dDefaultIndTexOrderNull@sda21(r2)
	lbz      r0, 0(r8)
	lbz      r5, 1(r5)
	cmplwi   r0, 1
	stb      r7, 8(r1)
	stb      r5, 9(r1)
	bne      lbl_8006ECA0
	slwi     r4, r6, 2
	addi     r4, r4, 4
	add      r4, r8, r4
	lbz      r0, 0(r4)
	stb      r0, 0(r3)
	lbz      r0, 1(r4)
	stb      r0, 1(r3)
	b        lbl_8006ECA8

lbl_8006ECA0:
	lwz      r0, 8(r1)
	stw      r0, 0(r3)

lbl_8006ECA8:
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x8006ECB0
 * @note Size: 0xE0
 */
J3DIndTexMtx J3DMaterialFactory::newIndTexMtx(int p1, int p2) const
{
	J3DIndTexMtx indTexMtx;
	if (mIndInitData[p1]._00 == 1) {
		indTexMtx = J3DIndTexMtx(mIndInitData[p1].mIndTexMatrices[p2]);
	}
	return indTexMtx;

	// return (_0C[p1]._00 != 1) ? J3DIndTexMtx() : J3DIndTexMtx(_0C[p2].mIndTexMatrices[p2]);

	// if (_0C[p1]._00 == 1) {
	// 	return J3DIndTexMtx(_0C[p2].mIndTexMatrices[p2]);
	// }
	// return J3DIndTexMtx();

	/*
	mulli    r0, r5, 0x138
	stwu     r1, -0x30(r1)
	lwz      r4, 0xc(r4)
	lis      r5, j3dDefaultIndTexMtxInfo@ha
	lfsu     f2, j3dDefaultIndTexMtxInfo@l(r5)
	add      r7, r4, r0
	lfs      f1, 4(r5)
	lfs      f0, 8(r5)
	lbz      r0, 0(r7)
	stfs     f2, 8(r1)
	lfs      f2, 0xc(r5)
	cmplwi   r0, 1
	stfs     f1, 0xc(r1)
	lfs      f1, 0x10(r5)
	stfs     f0, 0x10(r1)
	lfs      f0, 0x14(r5)
	lbz      r0, 0x18(r5)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	stb      r0, 0x20(r1)
	bne      lbl_8006ED50
	mulli    r4, r6, 0x1c
	addi     r4, r4, 0x14
	add      r4, r7, r4
	lfs      f0, 0(r4)
	stfs     f0, 0(r3)
	lfs      f0, 4(r4)
	stfs     f0, 4(r3)
	lfs      f0, 8(r4)
	stfs     f0, 8(r3)
	lfs      f0, 0xc(r4)
	stfs     f0, 0xc(r3)
	lfs      f0, 0x10(r4)
	stfs     f0, 0x10(r3)
	lfs      f0, 0x14(r4)
	stfs     f0, 0x14(r3)
	lbz      r0, 0x18(r4)
	stb      r0, 0x18(r3)
	b        lbl_8006ED88

lbl_8006ED50:
	lwz      r0, 8(r1)
	lwz      r4, 0xc(r1)
	stw      r0, 0(r3)
	lwz      r0, 0x10(r1)
	stw      r4, 4(r3)
	lwz      r4, 0x14(r1)
	stw      r0, 8(r3)
	lwz      r0, 0x18(r1)
	stw      r4, 0xc(r3)
	lwz      r4, 0x1c(r1)
	stw      r0, 0x10(r3)
	lwz      r0, 0x20(r1)
	stw      r4, 0x14(r3)
	stw      r0, 0x18(r3)

lbl_8006ED88:
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x8006ED90
 * @note Size: 0x194
 */
J3DIndTevStage J3DMaterialFactory::newIndTevStage(int, int) const
{
	/*
	lis      r7, j3dDefaultIndTevStageInfo@ha
	lwz      r4, 0xc(r4)
	addi     r10, r7, j3dDefaultIndTevStageInfo@l
	lbz      r8, 0(r10)
	mulli    r0, r5, 0x138
	lbz      r5, 1(r10)
	lbz      r7, 2(r10)
	rlwinm   r9, r8, 0, 0x1e, 0x1b
	slwi     r8, r5, 2
	lbz      r5, 3(r10)
	or       r8, r9, r8
	slwi     r7, r7, 4
	rlwinm   r8, r8, 0, 0x1c, 0x18
	slwi     r9, r5, 9
	or       r8, r8, r7
	lbz      r7, 4(r10)
	rlwimi   r9, r8, 0, 0x17, 0x1f
	lbz      r5, 5(r10)
	slwi     r8, r7, 0xd
	lbz      r7, 6(r10)
	rlwinm   r9, r9, 0, 0x13, 0xf
	slwi     r5, r5, 0x10
	or       r8, r9, r8
	slwi     r7, r7, 0x14
	add      r9, r4, r0
	rlwinm   r8, r8, 0, 0x10, 0xc
	lbz      r0, 0(r9)
	or       r4, r8, r5
	lbz      r5, 7(r10)
	rlwinm   r8, r4, 0, 0xc, 0xa
	lbz      r4, 8(r10)
	or       r7, r8, r7
	cmplwi   r0, 1
	slwi     r5, r5, 0x13
	slwi     r0, r4, 7
	rlwinm   r7, r7, 0, 0xd, 0xb
	or       r5, r7, r5
	rlwinm   r4, r5, 0, 0x19, 0x16
	or       r0, r4, r0
	bne      lbl_8006EF1C
	mulli    r4, r6, 0xc
	li       r0, 0
	stw      r0, 0(r3)
	addi     r4, r4, 0x78
	lwz      r5, 0(r3)
	add      r4, r9, r4
	lbz      r0, 0(r4)
	rlwinm   r5, r5, 0, 0, 0x1d
	or       r0, r5, r0
	stw      r0, 0(r3)
	lwz      r5, 0(r3)
	lbz      r0, 1(r4)
	rlwinm   r5, r5, 0, 0x1e, 0x1b
	slwi     r0, r0, 2
	or       r0, r5, r0
	stw      r0, 0(r3)
	lwz      r5, 0(r3)
	lbz      r0, 2(r4)
	rlwinm   r5, r5, 0, 0x1c, 0x18
	slwi     r0, r0, 4
	or       r0, r5, r0
	stw      r0, 0(r3)
	lwz      r5, 0(r3)
	lbz      r0, 3(r4)
	rlwinm   r5, r5, 0, 0x17, 0x12
	slwi     r0, r0, 9
	or       r0, r5, r0
	stw      r0, 0(r3)
	lwz      r5, 0(r3)
	lbz      r0, 4(r4)
	rlwinm   r5, r5, 0, 0x13, 0xf
	slwi     r0, r0, 0xd
	or       r0, r5, r0
	stw      r0, 0(r3)
	lwz      r5, 0(r3)
	lbz      r0, 5(r4)
	rlwinm   r5, r5, 0, 0x10, 0xc
	slwi     r0, r0, 0x10
	or       r0, r5, r0
	stw      r0, 0(r3)
	lwz      r5, 0(r3)
	lbz      r0, 6(r4)
	rlwinm   r5, r5, 0, 0xc, 0xa
	slwi     r0, r0, 0x14
	or       r0, r5, r0
	stw      r0, 0(r3)
	lwz      r5, 0(r3)
	lbz      r0, 7(r4)
	rlwinm   r5, r5, 0, 0xd, 0xb
	slwi     r0, r0, 0x13
	or       r0, r5, r0
	stw      r0, 0(r3)
	lwz      r5, 0(r3)
	lbz      r0, 8(r4)
	rlwinm   r4, r5, 0, 0x19, 0x16
	slwi     r0, r0, 7
	or       r0, r4, r0
	stw      r0, 0(r3)
	blr

lbl_8006EF1C:
	stw      r0, 0(r3)
	blr
	*/
}

/**
 * @note Address: 0x8006EF24
 * @note Size: 0x60
 */
J3DIndTexCoordScale J3DMaterialFactory::newIndTexCoordScale(int, int) const
{
	/*
	mulli    r0, r5, 0x138
	lwz      r4, 0xc(r4)
	stwu     r1, -0x10(r1)
	addi     r5, r2, j3dDefaultIndTexCoordScaleInfo@sda21
	add      r8, r4, r0
	lbz      r7, j3dDefaultIndTexCoordScaleInfo@sda21(r2)
	lbz      r0, 0(r8)
	lbz      r5, 1(r5)
	cmplwi   r0, 1
	stb      r7, 8(r1)
	stb      r5, 9(r1)
	bne      lbl_8006EF74
	slwi     r4, r6, 2
	addi     r4, r4, 0x68
	add      r4, r8, r4
	lbz      r0, 0(r4)
	stb      r0, 0(r3)
	lbz      r0, 1(r4)
	stb      r0, 1(r3)
	b        lbl_8006EF7C

lbl_8006EF74:
	lwz      r0, 8(r1)
	stw      r0, 0(r3)

lbl_8006EF7C:
	addi     r1, r1, 0x10
	blr
	*/
}

// TODO: getMaterialInitData__18J3DMaterialFactoryCFUs was UNUSED here

/**
 * @note Address: 0x8006EF84
 * @note Size: 0x24C
 */
J3DFog J3DMaterialFactory::newFog(int) const
{
	/*
	stwu     r1, -0x80(r1)
	slwi     r0, r5, 1
	lwz      r6, 8(r4)
	lis      r5, j3dDefaultFogInfo@ha
	stmw     r26, 0x68(r1)
	addi     r31, r5, j3dDefaultFogInfo@l
	lwz      r7, 4(r4)
	lhzx     r0, r6, r0
	lhz      r10, 0x18(r31)
	mulli    r5, r0, 0x14c
	lhz      r9, 0x1a(r31)
	lhz      r8, 0x1c(r31)
	lhz      r6, 0x1e(r31)
	addi     r0, r5, 0x144
	lhz      r5, 0x20(r31)
	lhzx     r26, r7, r0
	sth      r10, 0x4c(r1)
	lbz      r30, 0(r31)
	cmplwi   r26, 0xffff
	sth      r9, 0x4e(r1)
	lbz      r29, 1(r31)
	sth      r8, 0x50(r1)
	lhz      r28, 2(r31)
	sth      r6, 0x52(r1)
	lfs      f3, 4(r31)
	sth      r5, 0x54(r1)
	lfs      f2, 8(r31)
	lfs      f1, 0xc(r31)
	lfs      f0, 0x10(r31)
	lbz      r12, 0x14(r31)
	lbz      r11, 0x15(r31)
	lbz      r7, 0x16(r31)
	lbz      r0, 0x17(r31)
	lhz      r10, 0x22(r31)
	lhz      r9, 0x24(r31)
	lhz      r8, 0x26(r31)
	lhz      r6, 0x28(r31)
	lhz      r5, 0x2a(r31)
	stb      r30, 0x34(r1)
	stb      r29, 0x35(r1)
	sth      r28, 0x36(r1)
	stfs     f3, 0x38(r1)
	stfs     f2, 0x3c(r1)
	stfs     f1, 0x40(r1)
	stfs     f0, 0x44(r1)
	stb      r12, 0x48(r1)
	stb      r11, 0x49(r1)
	stb      r7, 0x4a(r1)
	stb      r0, 0x4b(r1)
	sth      r10, 0x56(r1)
	sth      r9, 0x58(r1)
	sth      r8, 0x5a(r1)
	sth      r6, 0x5c(r1)
	sth      r5, 0x5e(r1)
	beq      lbl_8006F16C
	mulli    r0, r26, 0x2c
	lwz      r4, 0x5c(r4)
	add      r8, r4, r0
	lwz      r0, 0x18(r8)
	lwz      r4, 0x1c(r8)
	stw      r0, 0x20(r1)
	lwz      r0, 0x20(r8)
	stw      r4, 0x24(r1)
	lwz      r4, 0(r8)
	stw      r0, 0x28(r1)
	lwz      r7, 4(r8)
	stw      r4, 8(r1)
	lwz      r6, 8(r8)
	lwz      r5, 0xc(r8)
	lwz      r4, 0x10(r8)
	lwz      r0, 0x14(r8)
	lwz      r28, 0x24(r8)
	stw      r0, 0x1c(r1)
	lwz      r29, 0x28(r8)
	stw      r7, 0xc(r1)
	lhz      r7, 0x20(r1)
	stw      r6, 0x10(r1)
	lhz      r6, 0x22(r1)
	stw      r5, 0x14(r1)
	lhz      r5, 0x24(r1)
	stw      r4, 0x18(r1)
	lhz      r4, 0x26(r1)
	lhz      r0, 0x28(r1)
	sth      r7, 0x4c(r1)
	lbz      r30, 8(r1)
	lbz      r31, 9(r1)
	lhz      r12, 0xa(r1)
	lfs      f3, 0xc(r1)
	lfs      f2, 0x10(r1)
	lfs      f1, 0x14(r1)
	lfs      f0, 0x18(r1)
	lbz      r11, 0x1c(r1)
	lbz      r10, 0x1d(r1)
	lbz      r9, 0x1e(r1)
	lbz      r8, 0x1f(r1)
	lhz      r7, 0x2a(r1)
	stw      r28, 0x2c(r1)
	sth      r6, 0x4e(r1)
	lhz      r6, 0x2c(r1)
	sth      r5, 0x50(r1)
	lhz      r5, 0x2e(r1)
	stw      r29, 0x30(r1)
	sth      r4, 0x52(r1)
	lhz      r4, 0x30(r1)
	sth      r0, 0x54(r1)
	lhz      r0, 0x32(r1)
	stb      r30, 0x34(r1)
	stb      r31, 0x35(r1)
	sth      r12, 0x36(r1)
	stfs     f3, 0x38(r1)
	stfs     f2, 0x3c(r1)
	stfs     f1, 0x40(r1)
	stfs     f0, 0x44(r1)
	stb      r11, 0x48(r1)
	stb      r10, 0x49(r1)
	stb      r9, 0x4a(r1)
	stb      r8, 0x4b(r1)
	sth      r7, 0x56(r1)
	sth      r6, 0x58(r1)
	sth      r5, 0x5a(r1)
	sth      r4, 0x5c(r1)
	sth      r0, 0x5e(r1)

lbl_8006F16C:
	lwz      r0, 0x34(r1)
	lwz      r4, 0x38(r1)
	stw      r0, 0(r3)
	lwz      r0, 0x3c(r1)
	stw      r4, 4(r3)
	lwz      r4, 0x40(r1)
	stw      r0, 8(r3)
	lwz      r0, 0x44(r1)
	stw      r4, 0xc(r3)
	lwz      r4, 0x48(r1)
	stw      r0, 0x10(r3)
	lwz      r0, 0x4c(r1)
	stw      r4, 0x14(r3)
	lwz      r4, 0x50(r1)
	stw      r0, 0x18(r3)
	lwz      r0, 0x54(r1)
	stw      r4, 0x1c(r3)
	lwz      r4, 0x58(r1)
	stw      r0, 0x20(r3)
	lwz      r0, 0x5c(r1)
	stw      r4, 0x24(r3)
	stw      r0, 0x28(r3)
	lmw      r26, 0x68(r1)
	addi     r1, r1, 0x80
	blr
	*/
}

/**
 * @note Address: 0x8006F1D0
 * @note Size: 0x80
 */
J3DAlphaComp J3DMaterialFactory::newAlphaComp(int id) const
{
	u16 v1 = getMaterialInitData(id).mAlphaCompareIndex;
	if (v1 != 0xFFFF) {
		return J3DAlphaComp(mAlphaCompInfo[v1]);
	}
	return J3DAlphaComp();
	/*
	lwz      r6, 8(r4)
	slwi     r0, r5, 1
	lwz      r7, 4(r4)
	lhzx     r0, r6, r0
	mulli    r5, r0, 0x14c
	addi     r0, r5, 0x146
	lhzx     r0, r7, r0
	cmplwi   r0, 0xffff
	beq      lbl_8006F234
	lwz      r4, 0x60(r4)
	rlwinm   r0, r0, 3, 0xd, 0x1c
	add      r6, r4, r0
	lbz      r0, 2(r6)
	lbz      r4, 0(r6)
	lbz      r5, 3(r6)
	slwi     r0, r0, 3
	slwi     r4, r4, 5
	add      r0, r0, r5
	add      r0, r4, r0
	sth      r0, 0(r3)
	lbz      r0, 1(r6)
	stb      r0, 2(r3)
	lbz      r0, 4(r6)
	stb      r0, 3(r3)
	blr

lbl_8006F234:
	lis      r4, 0x0000FFFF@ha
	li       r0, 0
	addi     r4, r4, 0x0000FFFF@l
	sth      r4, 0(r3)
	stb      r0, 2(r3)
	stb      r0, 3(r3)
	blr
	*/
}

/**
 * @note Address: 0x8006F250
 * @note Size: 0x7C
 */
J3DBlend J3DMaterialFactory::newBlend(int p1) const
{
	u16 v1 = getMaterialInitData(p1).mBlendModeIndex;
	if (v1 != 0xFFFF) {
		return J3DBlend(mBlendInfo[v1]);
	}
	return J3DBlend();
}

/**
 * @note Address: 0x8006F2CC
 * @note Size: 0x60
 */
J3DZMode J3DMaterialFactory::newZMode(int p1) const
{
	u8 v1 = getMaterialInitData(p1).mZModeIndex;
	if (v1 != 0xFF) {
		return J3DZMode(mZModeInfo[v1]);
	}
	return J3DZMode();
}

/**
 * @note Address: 0x8006F32C
 * @note Size: 0x38
 */
u8 J3DMaterialFactory::newZCompLoc(int p1) const
{
	u8 v1 = getMaterialInitData(p1).mZCompLocIndex;
	if (v1 != 0xFF) {
		return mZCompareInfo[v1];
	}
	return 0;
}

/**
 * @note Address: 0x8006F364
 * @note Size: 0x38
 */
u8 J3DMaterialFactory::newDither(int p1) const
{
	u8 v1 = getMaterialInitData(p1).mDitherIndex;
	if (v1 != 0xFF) {
		return mDitherInfo[v1];
	}
	return 1;
}

/**
 * @note Address: 0x8006F39C
 * @note Size: 0xA8
 */
J3DNBTScale J3DMaterialFactory::newNBTScale(int p1) const
{
	u16 v1 = getMaterialInitData(p1).mNBTScaleIndex;
	// return (v1 == 0xFFFF) ? J3DNBTScale() : J3DNBTScale(_74[v1]);
	J3DNBTScale scale = J3DNBTScale((v1 == 0xFFFF) ? j3dDefaultNBTScaleInfo : mNBTScaleInfo[v1]);
	return scale;
	/*
	stwu     r1, -0x20(r1)
	slwi     r0, r5, 1
	lwz      r6, 8(r4)
	lis      r5, j3dDefaultNBTScaleInfo@ha
	addi     r8, r5, j3dDefaultNBTScaleInfo@l
	lwz      r7, 4(r4)
	lhzx     r0, r6, r0
	lbz      r6, 0(r8)
	mulli    r5, r0, 0x14c
	lfs      f2, 4(r8)
	lfs      f1, 8(r8)
	lfs      f0, 0xc(r8)
	addi     r0, r5, 0x14a
	stb      r6, 8(r1)
	lhzx     r0, r7, r0
	stfs     f2, 0xc(r1)
	cmplwi   r0, 0xffff
	stfs     f1, 0x10(r1)
	stfs     f0, 0x14(r1)
	beq      lbl_8006F41C
	lwz      r4, 0x74(r4)
	rlwinm   r0, r0, 4, 0xc, 0x1b
	add      r4, r4, r0
	lbz      r0, 0(r4)
	stb      r0, 0(r3)
	lfs      f0, 4(r4)
	stfs     f0, 4(r3)
	lfs      f0, 8(r4)
	stfs     f0, 8(r3)
	lfs      f0, 0xc(r4)
	stfs     f0, 0xc(r3)
	b        lbl_8006F43C

lbl_8006F41C:
	lwz      r4, 8(r1)
	lwz      r0, 0xc(r1)
	stw      r4, 0(r3)
	lwz      r4, 0x10(r1)
	stw      r0, 4(r3)
	lwz      r0, 0x14(r1)
	stw      r4, 8(r3)
	stw      r0, 0xc(r3)

lbl_8006F43C:
	addi     r1, r1, 0x20
	blr
	*/
}

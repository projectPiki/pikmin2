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
#include "JSystem/J3D/J3DTypes.h"
#include "types.h"

static size_t SizeOfLoadMatColors  = 0x0D;
static size_t SizeOfLoadAmbColors  = 0x0D;
static size_t SizeOfLoadColorChans = 0x15;

/**
 * @note Address: 0x800771C0
 * @note Size: 0x48
 */
void J3DColorBlockLightOff::initialize()
{
	mColorChannelNum = 0;
	for (int i = 0; i < 2; i++) {
		mMaterialColors[i] = j3dDefaultColInfo;
	}
	mMaterialColorOffset = 0;
	mColorChannelOffset  = 0;
	/*
	li       r7, 0
	addi     r8, r2, j3dDefaultColInfo@sda21
	stb      r7, 0xc(r3)
	lbz      r6, j3dDefaultColInfo@sda21(r2)
	lbz      r5, 1(r8)
	stb      r6, 4(r3)
	lbz      r4, 2(r8)
	stb      r5, 5(r3)
	lbz      r0, 3(r8)
	stb      r4, 6(r3)
	stb      r0, 7(r3)
	stb      r6, 8(r3)
	stb      r5, 9(r3)
	stb      r4, 0xa(r3)
	stb      r0, 0xb(r3)
	stw      r7, 0x18(r3)
	stw      r7, 0x1c(r3)
	blr
	*/
}

/**
 * @note Address: 0x80077208
 * @note Size: 0x7C
 */
void J3DColorBlockAmbientOn::initialize()
{
	mColorChannelNum = 0;
	for (int i = 0; i < 2; i++) {
		mMaterialColors[i] = j3dDefaultColInfo;
	}
	for (int i = 0; i < 2; i++) {
		mAmbientColors[i] = j3dDefaultAmbInfo;
	}
	mMaterialColorOffset = 0;
	mColorChannelOffset  = 0;
	/*
	li       r9, 0
	addi     r5, r2, j3dDefaultColInfo@sda21
	stb      r9, 0xc(r3)
	addi     r10, r2, j3dDefaultAmbInfo@sda21
	lbz      r4, j3dDefaultColInfo@sda21(r2)
	lbz      r0, 1(r5)
	stb      r4, 4(r3)
	lbz      r8, 2(r5)
	stb      r0, 5(r3)
	lbz      r7, 3(r5)
	stb      r8, 6(r3)
	lbz      r6, j3dDefaultAmbInfo@sda21(r2)
	stb      r7, 7(r3)
	lbz      r5, 1(r10)
	stb      r4, 8(r3)
	lbz      r4, 2(r10)
	stb      r0, 9(r3)
	lbz      r0, 3(r10)
	stb      r8, 0xa(r3)
	stb      r7, 0xb(r3)
	stb      r6, 0x20(r3)
	stb      r5, 0x21(r3)
	stb      r4, 0x22(r3)
	stb      r0, 0x23(r3)
	stb      r6, 0x24(r3)
	stb      r5, 0x25(r3)
	stb      r4, 0x26(r3)
	stb      r0, 0x27(r3)
	stw      r9, 0x18(r3)
	stw      r9, 0x1c(r3)
	blr
	*/
}

/**
 * @note Address: 0x80077284
 * @note Size: 0x9C
 */
void J3DColorBlockLightOn::initialize()
{
	mColorChannelNum = 0;
	for (int i = 0; i < 2; i++) {
		mMaterialColors[i] = j3dDefaultColInfo;
	}
	for (int i = 0; i < 2; i++) {
		mAmbientColors[i] = j3dDefaultAmbInfo;
	}
	for (int i = 0; i < 8; i++) {
		mLights[i] = nullptr;
	}

	mMaterialColorOffset = 0;
	mColorChannelOffset  = 0;
	/*
	li       r9, 0
	addi     r5, r2, j3dDefaultColInfo@sda21
	stb      r9, 0x14(r3)
	addi     r10, r2, j3dDefaultAmbInfo@sda21
	lbz      r4, j3dDefaultColInfo@sda21(r2)
	lbz      r0, 1(r5)
	stb      r4, 4(r3)
	lbz      r8, 2(r5)
	stb      r0, 5(r3)
	lbz      r7, 3(r5)
	stb      r8, 6(r3)
	lbz      r6, j3dDefaultAmbInfo@sda21(r2)
	stb      r7, 7(r3)
	lbz      r5, 1(r10)
	stb      r4, 8(r3)
	lbz      r4, 2(r10)
	stb      r0, 9(r3)
	lbz      r0, 3(r10)
	stb      r8, 0xa(r3)
	stb      r7, 0xb(r3)
	stb      r6, 0xc(r3)
	stb      r5, 0xd(r3)
	stb      r4, 0xe(r3)
	stb      r0, 0xf(r3)
	stb      r6, 0x10(r3)
	stb      r5, 0x11(r3)
	stb      r4, 0x12(r3)
	stb      r0, 0x13(r3)
	stw      r9, 0x20(r3)
	stw      r9, 0x24(r3)
	stw      r9, 0x28(r3)
	stw      r9, 0x2c(r3)
	stw      r9, 0x30(r3)
	stw      r9, 0x34(r3)
	stw      r9, 0x38(r3)
	stw      r9, 0x3c(r3)
	stw      r9, 0x44(r3)
	stw      r9, 0x48(r3)
	blr
	*/
}

/**
 * @note Address: 0x80077320
 * @note Size: 0x30
 * initialize__21J3DTexGenBlockPatchedFv
 */
void J3DTexGenBlockPatched::initialize()
{
	mTexgenCnt = 0;
	for (int i = 0; i < 8; i++) {
		mTexMatrices[i] = nullptr;
	}
	mDlistOffs = 0;
}

/**
 * @note Address: 0x80077350
 * @note Size: 0x20
 * initialize__15J3DTexGenBlock4Fv
 */
void J3DTexGenBlock4::initialize()
{
	mTexgenCnt = 0;
	for (int i = 0; i < 4; i++) {
		mTexMatrices[i] = nullptr;
	}
	mDlistOffs = 0;
}

/**
 * @note Address: 0x80077370
 * @note Size: 0x30
 * initialize__19J3DTexGenBlockBasicFv
 */
void J3DTexGenBlockBasic::initialize()
{
	mTexgenCnt = 0;
	for (int i = 0; i < 8; i++) {
		mTexMatrices[i] = nullptr;
	}
	mDlistOffs = 0;
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
		mStages[i]._00 = 0xC0 + (i * 2);
		mStages[i]._04 = 0xC1 + (i * 2);
	}

	for (int i = 0; i < 3; i++) {
		mColors[i] = j3dDefaultTevColor;
	}
	for (int i = 0; i < 4; i++) {
		mKColors[i] = j3dDefaultTevKColor;
	}
	for (int i = 0; i < 8; i++) {
		_C8[i] = 0xC;
	}
	mStageNum    = 1;
	mTexNoOffset = 0;
	mRegOffset   = 0;
	/*
	stwu     r1, -0x40(r1)
	lis      r4, 0x0000FFFF@ha
	addi     r11, r4, 0x0000FFFF@l
	li       r10, 0xc0
	stmw     r18, 8(r1)
	addi     r18, r2, j3dDefaultTevColor@sda21
	li       r9, 0xc1
	li       r8, 0xc2
	li       r7, 0xc3
	li       r19, 0xc4
	li       r20, 0xc5
	li       r21, 0xc6
	li       r22, 0xc7
	li       r23, 0xc8
	li       r24, 0xc9
	li       r25, 0xca
	li       r26, 0xcb
	li       r27, 0xcc
	li       r28, 0xcd
	li       r29, 0xce
	li       r30, 0xcf
	lha      r31, j3dDefaultTevColor@sda21(r2)
	lha      r12, 2(r18)
	addi     r4, r2, j3dDefaultTevKColor@sda21
	li       r6, 0xc
	li       r5, 1
	li       r0, 0
	sth      r11, 8(r3)
	sth      r11, 0xa(r3)
	sth      r11, 0xc(r3)
	sth      r11, 0xe(r3)
	sth      r11, 0x10(r3)
	sth      r11, 0x12(r3)
	sth      r11, 0x14(r3)
	sth      r11, 0x16(r3)
	lha      r11, 4(r18)
	stb      r10, 0x38(r3)
	lha      r10, 6(r18)
	stb      r9, 0x3c(r3)
	lbz      r9, j3dDefaultTevKColor@sda21(r2)
	stb      r8, 0x40(r3)
	lbz      r8, 1(r4)
	stb      r7, 0x44(r3)
	lbz      r7, 2(r4)
	stb      r19, 0x48(r3)
	lbz      r4, 3(r4)
	stb      r20, 0x4c(r3)
	stb      r21, 0x50(r3)
	stb      r22, 0x54(r3)
	stb      r23, 0x58(r3)
	stb      r24, 0x5c(r3)
	stb      r25, 0x60(r3)
	stb      r26, 0x64(r3)
	stb      r27, 0x68(r3)
	stb      r28, 0x6c(r3)
	stb      r29, 0x70(r3)
	stb      r30, 0x74(r3)
	sth      r31, 0x98(r3)
	sth      r12, 0x9a(r3)
	sth      r11, 0x9c(r3)
	sth      r10, 0x9e(r3)
	sth      r31, 0xa0(r3)
	sth      r12, 0xa2(r3)
	sth      r11, 0xa4(r3)
	sth      r10, 0xa6(r3)
	sth      r31, 0xa8(r3)
	sth      r12, 0xaa(r3)
	sth      r11, 0xac(r3)
	sth      r10, 0xae(r3)
	stb      r9, 0xb8(r3)
	stb      r8, 0xb9(r3)
	stb      r7, 0xba(r3)
	stb      r4, 0xbb(r3)
	stb      r9, 0xbc(r3)
	stb      r8, 0xbd(r3)
	stb      r7, 0xbe(r3)
	stb      r4, 0xbf(r3)
	stb      r9, 0xc0(r3)
	stb      r8, 0xc1(r3)
	stb      r7, 0xc2(r3)
	stb      r4, 0xc3(r3)
	stb      r9, 0xc4(r3)
	stb      r8, 0xc5(r3)
	stb      r7, 0xc6(r3)
	stb      r4, 0xc7(r3)
	stb      r6, 0xc8(r3)
	stb      r6, 0xc9(r3)
	stb      r6, 0xca(r3)
	stb      r6, 0xcb(r3)
	stb      r6, 0xcc(r3)
	stb      r6, 0xcd(r3)
	stb      r6, 0xce(r3)
	stb      r6, 0xcf(r3)
	stb      r5, 0xd0(r3)
	stw      r0, 4(r3)
	stw      r0, 0xd4(r3)
	lmw      r18, 8(r1)
	addi     r1, r1, 0x40
	blr
	*/
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
		mStages[i]._00 = 0xC0 + (i * 2);
		mStages[i]._04 = 0xC1 + (i * 2);
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
		mStages[i]._00 = 0xC0 + (i * 2);
		mStages[i]._04 = 0xC1 + (i * 2);
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
	/*
	stwu     r1, -0x10(r1)
	lis      r4, 0x0000FFFF@ha
	addi     r4, r4, 0x0000FFFF@l
	li       r0, 1
	stw      r31, 0xc(r1)
	addi     r31, r2, j3dDefaultTevColor@sda21
	li       r8, 0xc0
	li       r7, 0xc1
	stw      r30, 8(r1)
	li       r6, 0xc2
	li       r5, 0xc3
	li       r12, 0x1c
	sth      r4, 8(r3)
	addi     r30, r2, j3dDefaultTevKColor@sda21
	lha      r11, j3dDefaultTevColor@sda21(r2)
	sth      r4, 0xa(r3)
	li       r4, 0xc
	lha      r10, 2(r31)
	stb      r0, 0x34(r3)
	li       r0, 0
	lha      r9, 4(r31)
	stb      r8, 0x35(r3)
	lha      r8, 6(r31)
	stb      r7, 0x39(r3)
	lbz      r7, j3dDefaultTevKColor@sda21(r2)
	stb      r6, 0x3d(r3)
	lbz      r6, 1(r30)
	stb      r5, 0x41(r3)
	lbz      r5, 2(r30)
	stb      r4, 0x55(r3)
	stb      r4, 0x56(r3)
	lbz      r4, 3(r30)
	stb      r12, 0x57(r3)
	stb      r12, 0x58(r3)
	sth      r11, 0x14(r3)
	sth      r10, 0x16(r3)
	sth      r9, 0x18(r3)
	sth      r8, 0x1a(r3)
	sth      r11, 0x1c(r3)
	sth      r10, 0x1e(r3)
	sth      r9, 0x20(r3)
	sth      r8, 0x22(r3)
	sth      r11, 0x24(r3)
	sth      r10, 0x26(r3)
	sth      r9, 0x28(r3)
	sth      r8, 0x2a(r3)
	stb      r7, 0x45(r3)
	stb      r6, 0x46(r3)
	stb      r5, 0x47(r3)
	stb      r4, 0x48(r3)
	stb      r7, 0x49(r3)
	stb      r6, 0x4a(r3)
	stb      r5, 0x4b(r3)
	stb      r4, 0x4c(r3)
	stb      r7, 0x4d(r3)
	stb      r6, 0x4e(r3)
	stb      r5, 0x4f(r3)
	stb      r4, 0x50(r3)
	stb      r7, 0x51(r3)
	stb      r6, 0x52(r3)
	stb      r5, 0x53(r3)
	stb      r4, 0x54(r3)
	stw      r0, 4(r3)
	stw      r0, 0x68(r3)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	addi     r1, r1, 0x10
	blr
	*/
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
		mStages[i]._00 = 0xC0 + (i * 2);
		mStages[i]._04 = 0xC1 + (i * 2);
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
	/*
	stwu     r1, -0x20(r1)
	lis      r4, 0x0000FFFF@ha
	addi     r10, r4, 0x0000FFFF@l
	li       r0, 1
	stmw     r27, 0xc(r1)
	li       r9, 0xc0
	li       r8, 0xc1
	li       r7, 0xc2
	li       r6, 0xc3
	li       r5, 0xc4
	li       r4, 0xc5
	li       r29, 0xc6
	li       r30, 0xc7
	li       r31, 0xc
	li       r12, 0x1c
	lha      r11, j3dDefaultTevColor@sda21(r2)
	addi     r28, r2, j3dDefaultTevColor@sda21
	addi     r27, r2, j3dDefaultTevKColor@sda21
	sth      r10, 8(r3)
	sth      r10, 0xa(r3)
	sth      r10, 0xc(r3)
	sth      r10, 0xe(r3)
	lha      r10, 2(r28)
	stb      r0, 0x20(r3)
	li       r0, 0
	stb      r9, 0x21(r3)
	lha      r9, 4(r28)
	stb      r8, 0x25(r3)
	lha      r8, 6(r28)
	stb      r7, 0x29(r3)
	lbz      r7, j3dDefaultTevKColor@sda21(r2)
	stb      r6, 0x2d(r3)
	lbz      r6, 1(r27)
	stb      r5, 0x31(r3)
	lbz      r5, 2(r27)
	stb      r4, 0x35(r3)
	lbz      r4, 3(r27)
	stb      r29, 0x39(r3)
	stb      r30, 0x3d(r3)
	stb      r31, 0x72(r3)
	stb      r31, 0x73(r3)
	stb      r31, 0x74(r3)
	stb      r31, 0x75(r3)
	stb      r12, 0x76(r3)
	stb      r12, 0x77(r3)
	stb      r12, 0x78(r3)
	stb      r12, 0x79(r3)
	sth      r11, 0x42(r3)
	sth      r10, 0x44(r3)
	sth      r9, 0x46(r3)
	sth      r8, 0x48(r3)
	sth      r11, 0x4a(r3)
	sth      r10, 0x4c(r3)
	sth      r9, 0x4e(r3)
	sth      r8, 0x50(r3)
	sth      r11, 0x52(r3)
	sth      r10, 0x54(r3)
	sth      r9, 0x56(r3)
	sth      r8, 0x58(r3)
	stb      r7, 0x62(r3)
	stb      r6, 0x63(r3)
	stb      r5, 0x64(r3)
	stb      r4, 0x65(r3)
	stb      r7, 0x66(r3)
	stb      r6, 0x67(r3)
	stb      r5, 0x68(r3)
	stb      r4, 0x69(r3)
	stb      r7, 0x6a(r3)
	stb      r6, 0x6b(r3)
	stb      r5, 0x6c(r3)
	stb      r4, 0x6d(r3)
	stb      r7, 0x6e(r3)
	stb      r6, 0x6f(r3)
	stb      r5, 0x70(r3)
	stb      r4, 0x71(r3)
	stw      r0, 4(r3)
	stw      r0, 0x90(r3)
	lmw      r27, 0xc(r1)
	addi     r1, r1, 0x20
	blr
	*/
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
		mStages[i]._00 = 0xC0 + (i * 2);
		mStages[i]._04 = 0xC1 + (i * 2);
	}

	mTexNoOffset = 0;
	mRegOffset   = 0;
	/*
	stwu     r1, -0x30(r1)
	lis      r4, 0x0000FFFF@ha
	addi     r10, r4, 0x0000FFFF@l
	addi     r11, r2, j3dDefaultTevColor@sda21
	stmw     r25, 0x14(r1)
	addi     r25, r2, j3dDefaultTevKColor@sda21
	li       r26, 1
	lha      r27, j3dDefaultTevColor@sda21(r2)
	lha      r28, 2(r11)
	li       r9, 0xc
	lha      r29, 4(r11)
	li       r8, 0x1c
	lha      r30, 6(r11)
	li       r0, 2
	lbz      r31, j3dDefaultTevKColor@sda21(r2)
	mr       r5, r3
	lbz      r12, 1(r25)
	li       r7, 0
	lbz      r11, 2(r25)
	li       r4, 0xc0
	li       r6, 0xc1
	sth      r10, 8(r3)
	sth      r10, 0xa(r3)
	sth      r10, 0xc(r3)
	sth      r10, 0xe(r3)
	sth      r10, 0x10(r3)
	sth      r10, 0x12(r3)
	sth      r10, 0x14(r3)
	sth      r10, 0x16(r3)
	lbz      r10, 3(r25)
	stb      r26, 0x58(r3)
	sth      r27, 0xda(r3)
	sth      r28, 0xdc(r3)
	sth      r29, 0xde(r3)
	sth      r30, 0xe0(r3)
	sth      r27, 0xe2(r3)
	sth      r28, 0xe4(r3)
	sth      r29, 0xe6(r3)
	sth      r30, 0xe8(r3)
	sth      r27, 0xea(r3)
	sth      r28, 0xec(r3)
	sth      r29, 0xee(r3)
	sth      r30, 0xf0(r3)
	stb      r31, 0xfa(r3)
	stb      r12, 0xfb(r3)
	stb      r11, 0xfc(r3)
	stb      r10, 0xfd(r3)
	stb      r31, 0xfe(r3)
	stb      r12, 0xff(r3)
	stb      r11, 0x100(r3)
	stb      r10, 0x101(r3)
	stb      r31, 0x102(r3)
	stb      r12, 0x103(r3)
	stb      r11, 0x104(r3)
	stb      r10, 0x105(r3)
	stb      r31, 0x106(r3)
	stb      r12, 0x107(r3)
	stb      r11, 0x108(r3)
	stb      r10, 0x109(r3)
	stb      r9, 0x10a(r3)
	stb      r9, 0x10b(r3)
	stb      r9, 0x10c(r3)
	stb      r9, 0x10d(r3)
	stb      r9, 0x10e(r3)
	stb      r9, 0x10f(r3)
	stb      r9, 0x110(r3)
	stb      r9, 0x111(r3)
	stb      r9, 0x112(r3)
	stb      r9, 0x113(r3)
	stb      r9, 0x114(r3)
	stb      r9, 0x115(r3)
	stb      r9, 0x116(r3)
	stb      r9, 0x117(r3)
	stb      r9, 0x118(r3)
	stb      r9, 0x119(r3)
	stb      r8, 0x11a(r3)
	stb      r8, 0x11b(r3)
	stb      r8, 0x11c(r3)
	stb      r8, 0x11d(r3)
	stb      r8, 0x11e(r3)
	stb      r8, 0x11f(r3)
	stb      r8, 0x120(r3)
	stb      r8, 0x121(r3)
	stb      r8, 0x122(r3)
	stb      r8, 0x123(r3)
	stb      r8, 0x124(r3)
	stb      r8, 0x125(r3)
	stb      r8, 0x126(r3)
	stb      r8, 0x127(r3)
	stb      r8, 0x128(r3)
	stb      r8, 0x129(r3)
	mtctr    r0

lbl_80077920:
	stb      r4, 0x59(r5)
	addi     r0, r7, 1
	slwi     r9, r0, 1
	addi     r4, r4, 0x10
	stb      r6, 0x5d(r5)
	addi     r8, r9, 0xc0
	addi     r0, r7, 2
	addi     r10, r9, 0xc1
	stb      r8, 0x61(r5)
	slwi     r11, r0, 1
	addi     r9, r11, 0xc0
	addi     r0, r7, 3
	stb      r10, 0x65(r5)
	slwi     r10, r0, 1
	addi     r8, r11, 0xc1
	addi     r0, r7, 4
	stb      r9, 0x69(r5)
	slwi     r12, r0, 1
	addi     r11, r10, 0xc0
	addi     r0, r7, 5
	stb      r8, 0x6d(r5)
	slwi     r25, r0, 1
	addi     r10, r10, 0xc1
	addi     r9, r12, 0xc0
	stb      r11, 0x71(r5)
	addi     r8, r12, 0xc1
	addi     r12, r25, 0xc0
	addi     r11, r25, 0xc1
	stb      r10, 0x75(r5)
	addi     r0, r7, 6
	slwi     r25, r0, 1
	addi     r6, r6, 0x10
	stb      r9, 0x79(r5)
	addi     r0, r7, 7
	slwi     r26, r0, 1
	addi     r10, r25, 0xc0
	stb      r8, 0x7d(r5)
	addi     r9, r25, 0xc1
	addi     r8, r26, 0xc0
	addi     r0, r26, 0xc1
	stb      r12, 0x81(r5)
	addi     r7, r7, 8
	stb      r11, 0x85(r5)
	stb      r10, 0x89(r5)
	stb      r9, 0x8d(r5)
	stb      r8, 0x91(r5)
	stb      r0, 0x95(r5)
	addi     r5, r5, 0x40
	bdnz     lbl_80077920
	li       r0, 0
	stw      r0, 4(r3)
	stw      r0, 0x170(r3)
	lmw      r25, 0x14(r1)
	addi     r1, r1, 0x30
	blr
	*/
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
	mAlphaComp._00 = 0xFFFF;
	mZMode._00     = 0xFFFF;
	_0E            = 0xFF;
	mDither        = 1;
}

/**
 * @note Address: 0x80077A2C
 * @note Size: 0x2C
 */
void J3DPEBlockFull::initialize()
{
	mAlphaComp._00 = 0xFFFF;
	mZMode._00     = 0xFFFF;
	_3A            = 0xFF;
	mDither        = 1;
	mFogOffset     = 0;
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
	__GDCurrentDL->pDisplayListData = __GDCurrentDL->begin + mMaterialColorOffset;
	u8* data                        = __GDCurrentDL->pDisplayListData;
	if (__GDCurrentDL->end < data + SizeOfLoadMatColors) {
		GDOverflowed();
	}
	__GDWrite(0x10);
	__GDWrite(0x00);
	__GDWrite(0x01);
	__GDWrite(0x10);
	__GDWrite(0x0C);
	// J3DGXColor color = _04[0];
	// __GDWrite(color.a);
	// __GDWrite(color.b);
	// __GDWrite(color.g);
	// __GDWrite(color.r);
	// color = _04[1];
	// __GDWrite(color.a);
	// __GDWrite(color.b);
	// __GDWrite(color.g);
	// __GDWrite(color.r);
	for (int i = 0; i < 2; i++) {
		J3DGXColor color = mMaterialColors[i];
		__GDWrite(color.a);
		__GDWrite(color.b);
		__GDWrite(color.g);
		__GDWrite(color.r);
	}
	// for (int i = 0; i < 2; i++) {
	// 	const u8* color = _04[i].asBytes();
	// 	__GDWrite(color[3]);
	// 	__GDWrite(color[2]);
	// 	__GDWrite(color[1]);
	// 	__GDWrite(color[0]);
	// }
	DCStoreRange(data, __GDCurrentDL->pDisplayListData - data);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r0, 0x18(r3)
	lwz      r3, 0(r4)
	add      r0, r3, r0
	stw      r0, 8(r4)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, SizeOfLoadMatColors@sda21(r13)
	lwz      r31, 8(r4)
	lwz      r0, 0xc(r4)
	add      r3, r31, r3
	cmplw    r3, r0
	ble      lbl_80078E00
	bl       GDOverflowed

lbl_80078E00:
	lwz      r5, __GDCurrentDL@sda21(r13)
	li       r9, 0x10
	li       r8, 0
	li       r7, 1
	lwz      r4, 8(r5)
	li       r6, 0xc
	mr       r3, r31
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r9, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r9, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r9, 4(r30)
	lwz      r4, 8(r5)
	srwi     r8, r9, 0x18
	rlwinm   r7, r9, 0x10, 0x18, 0x1f
	addi     r0, r4, 1
	rlwinm   r6, r9, 0x18, 0x18, 0x1f
	stw      r0, 8(r5)
	stb      r8, 0(r4)
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
	stb      r9, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r9, 8(r30)
	lwz      r4, 8(r5)
	srwi     r8, r9, 0x18
	rlwinm   r7, r9, 0x10, 0x18, 0x1f
	addi     r0, r4, 1
	rlwinm   r6, r9, 0x18, 0x18, 0x1f
	stw      r0, 8(r5)
	stb      r8, 0(r4)
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
	stb      r9, 0(r4)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r0, 8(r4)
	subf     r4, r31, r0
	bl       DCStoreRange
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x80078F60
 * @note Size: 0x438
 */
void J3DColorBlockLightOff::patchLight()
{
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
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r0, 0x44(r3)
	lwz      r3, 0(r4)
	add      r0, r3, r0
	stw      r0, 8(r4)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, SizeOfLoadMatColors@sda21(r13)
	lwz      r31, 8(r4)
	lwz      r0, 0xc(r4)
	add      r3, r31, r3
	cmplw    r3, r0
	ble      lbl_80079430
	bl       GDOverflowed

lbl_80079430:
	lwz      r5, __GDCurrentDL@sda21(r13)
	li       r9, 0x10
	li       r8, 0
	li       r7, 1
	lwz      r4, 8(r5)
	li       r6, 0xc
	mr       r3, r31
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r9, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r9, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r9, 4(r30)
	lwz      r4, 8(r5)
	srwi     r8, r9, 0x18
	rlwinm   r7, r9, 0x10, 0x18, 0x1f
	addi     r0, r4, 1
	rlwinm   r6, r9, 0x18, 0x18, 0x1f
	stw      r0, 8(r5)
	stb      r8, 0(r4)
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
	stb      r9, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r9, 8(r30)
	lwz      r4, 8(r5)
	srwi     r8, r9, 0x18
	rlwinm   r7, r9, 0x10, 0x18, 0x1f
	addi     r0, r4, 1
	rlwinm   r6, r9, 0x18, 0x18, 0x1f
	stw      r0, 8(r5)
	stb      r8, 0(r4)
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
	stb      r9, 0(r4)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r0, 8(r4)
	subf     r4, r31, r0
	bl       DCStoreRange
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x80079590
 * @note Size: 0x464
 */
void J3DColorBlockLightOn::patchLight()
{
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
void J3DColorBlockLightOff::diff(u32 p1)
{
	if (p1 & 1) {
		diffMatColor();
	}
	if (p1 & 2) {
		diffLight();
	}
}

/**
 * @note Address: 0x80079A5C
 * @note Size: 0x17C
 */
void J3DColorBlockLightOff::diffMatColor()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r3, SizeOfLoadMatColors@sda21(r13)
	lwz      r4, 8(r5)
	lwz      r0, 0xc(r5)
	add      r3, r4, r3
	cmplw    r3, r0
	ble      lbl_80079A90
	bl       GDOverflowed

lbl_80079A90:
	lwz      r4, __GDCurrentDL@sda21(r13)
	li       r8, 0x10
	li       r7, 0
	li       r6, 1
	lwz      r3, 8(r4)
	li       r5, 0xc
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r8, 0(r3)
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
	stb      r8, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r5, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r8, 4(r31)
	lwz      r3, 8(r4)
	srwi     r7, r8, 0x18
	rlwinm   r6, r8, 0x10, 0x18, 0x1f
	addi     r0, r3, 1
	rlwinm   r5, r8, 0x18, 0x18, 0x1f
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
	stb      r8, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r31)
	lwz      r3, 8(r4)
	srwi     r7, r8, 0x18
	rlwinm   r6, r8, 0x10, 0x18, 0x1f
	addi     r0, r3, 1
	rlwinm   r5, r8, 0x18, 0x18, 0x1f
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
	stb      r8, 0(r3)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x80079BD8
 * @note Size: 0x404
 */
void J3DColorBlockLightOff::diffLight()
{
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
void J3DColorBlockLightOn::diff(u32 p1)
{
	if (p1 & 1) {
		diffMatColor();
	}
	if (p1 & 2 || p1 & 0xF0) {
		diffLight();
	}
}

/**
 * @note Address: 0x8007A04C
 * @note Size: 0x17C
 */
void J3DColorBlockLightOn::diffMatColor()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r3, SizeOfLoadMatColors@sda21(r13)
	lwz      r4, 8(r5)
	lwz      r0, 0xc(r5)
	add      r3, r4, r3
	cmplw    r3, r0
	ble      lbl_8007A080
	bl       GDOverflowed

lbl_8007A080:
	lwz      r4, __GDCurrentDL@sda21(r13)
	li       r8, 0x10
	li       r7, 0
	li       r6, 1
	lwz      r3, 8(r4)
	li       r5, 0xc
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r8, 0(r3)
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
	stb      r8, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r5, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r8, 4(r31)
	lwz      r3, 8(r4)
	srwi     r7, r8, 0x18
	rlwinm   r6, r8, 0x10, 0x18, 0x1f
	addi     r0, r3, 1
	rlwinm   r5, r8, 0x18, 0x18, 0x1f
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
	stb      r8, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r31)
	lwz      r3, 8(r4)
	srwi     r7, r8, 0x18
	rlwinm   r6, r8, 0x10, 0x18, 0x1f
	addi     r0, r3, 1
	rlwinm   r5, r8, 0x18, 0x18, 0x1f
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
	stb      r8, 0(r3)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x8007A1C8
 * @note Size: 0x434
 */
void J3DColorBlockLightOn::diffLight()
{
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
	mDlistOffs = __GDCurrentDL->pDisplayListData - __GDCurrentDL->begin;
	for (int i = 0; i < 4; i++) {
		if (mTexMatrices[i] && mTexCoords->mTexGenMtx != 0x3C) {
			mTexMatrices[i]->load(i);
		}
	}
	if (mTexgenCnt != 0) {
		loadTexCoordGens(mTexgenCnt, mTexCoords);
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	li       r29, 0
	stw      r28, 0x10(r1)
	mr       r28, r3
	mr       r31, r28
	lwz      r4, __GDCurrentDL@sda21(r13)
	mr       r30, r28
	lwz      r3, 0(r4)
	lwz      r0, 8(r4)
	subf     r0, r3, r0
	stw      r0, 0x58(r28)

lbl_8007A63C:
	lwz      r3, 0x38(r31)
	cmplwi   r3, 0
	beq      lbl_8007A65C
	lbz      r0, 0xa(r30)
	cmplwi   r0, 0x3c
	beq      lbl_8007A65C
	mr       r4, r29
	bl       load__9J3DTexMtxCFUl

lbl_8007A65C:
	addi     r29, r29, 1
	addi     r30, r30, 6
	cmplwi   r29, 4
	addi     r31, r31, 4
	blt      lbl_8007A63C
	lwz      r3, 4(r28)
	cmplwi   r3, 0
	beq      lbl_8007A684
	addi     r4, r28, 8
	bl       loadTexCoordGens__FUlP11J3DTexCoord

lbl_8007A684:
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
 * @note Address: 0x8007A6A4
 * @note Size: 0xA8
 * load__19J3DTexGenBlockBasicFv
 */
void J3DTexGenBlockBasic::load()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	li       r29, 0
	stw      r28, 0x10(r1)
	mr       r28, r3
	mr       r31, r28
	lwz      r4, __GDCurrentDL@sda21(r13)
	mr       r30, r28
	lwz      r3, 0(r4)
	lwz      r0, 8(r4)
	subf     r0, r3, r0
	stw      r0, 0x58(r28)

lbl_8007A6E4:
	lwz      r3, 0x38(r31)
	cmplwi   r3, 0
	beq      lbl_8007A704
	lbz      r0, 0xa(r30)
	cmplwi   r0, 0x3c
	beq      lbl_8007A704
	mr       r4, r29
	bl       load__9J3DTexMtxCFUl

lbl_8007A704:
	addi     r29, r29, 1
	addi     r30, r30, 6
	cmplwi   r29, 8
	addi     r31, r31, 4
	blt      lbl_8007A6E4
	lwz      r3, 4(r28)
	cmplwi   r3, 0
	beq      lbl_8007A72C
	addi     r4, r28, 8
	bl       loadTexCoordGens__FUlP11J3DTexCoord

lbl_8007A72C:
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
 * @note Address: 0x8007A74C
 * @note Size: 0x90
 * patch__21J3DTexGenBlockPatchedFv
 */
void J3DTexGenBlockPatched::patch()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	li       r29, 0
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r0, 0x58(r3)
	lwz      r3, 0(r4)
	add      r0, r3, r0
	stw      r0, 8(r4)
	lwz      r3, __GDCurrentDL@sda21(r13)
	lwz      r31, 8(r3)

lbl_8007A788:
	lwz      r3, 0x38(r30)
	cmplwi   r3, 0
	beq      lbl_8007A79C
	mr       r4, r29
	bl       load__9J3DTexMtxCFUl

lbl_8007A79C:
	addi     r29, r29, 1
	addi     r30, r30, 4
	cmplwi   r29, 8
	blt      lbl_8007A788
	lwz      r4, __GDCurrentDL@sda21(r13)
	mr       r3, r31
	lwz      r0, 8(r4)
	subf     r4, r31, r0
	bl       DCStoreRange
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
 * @note Address: 0x8007A7DC
 * @note Size: 0xAC
 * patch__15J3DTexGenBlock4Fv
 */
void J3DTexGenBlock4::patch()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	mr       r29, r3
	stw      r28, 0x10(r1)
	li       r28, 0
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r0, 0x58(r3)
	lwz      r4, 0(r5)
	add      r0, r4, r0
	stw      r0, 8(r5)
	lwz      r3, __GDCurrentDL@sda21(r13)
	lwz      r31, 8(r3)

lbl_8007A820:
	lwz      r3, 0x38(r30)
	cmplwi   r3, 0
	beq      lbl_8007A840
	lbz      r0, 0xa(r29)
	cmplwi   r0, 0x3c
	beq      lbl_8007A840
	mr       r4, r28
	bl       load__9J3DTexMtxCFUl

lbl_8007A840:
	addi     r28, r28, 1
	addi     r29, r29, 6
	cmplwi   r28, 4
	addi     r30, r30, 4
	blt      lbl_8007A820
	lwz      r4, __GDCurrentDL@sda21(r13)
	mr       r3, r31
	lwz      r0, 8(r4)
	subf     r4, r31, r0
	bl       DCStoreRange
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
 * @note Address: 0x8007A888
 * @note Size: 0xAC
 * patch__19J3DTexGenBlockBasicFv
 */
void J3DTexGenBlockBasic::patch()
{
	__GDCurrentDL->pDisplayListData = __GDCurrentDL->begin + mDlistOffs;
	u8* data                        = __GDCurrentDL->pDisplayListData;
	for (u32 i = 0; i < 8; i++) {
		if (mTexMatrices[i] && mTexCoords[i].mTexGenMtx != 0x3C) {
			mTexMatrices[i]->load(i);
		}
	}
	DCStoreRange(data, __GDCurrentDL->pDisplayListData - data);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	mr       r29, r3
	stw      r28, 0x10(r1)
	li       r28, 0
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r0, 0x58(r3)
	lwz      r4, 0(r5)
	add      r0, r4, r0
	stw      r0, 8(r5)
	lwz      r3, __GDCurrentDL@sda21(r13)
	lwz      r31, 8(r3)

lbl_8007A8CC:
	lwz      r3, 0x38(r30)
	cmplwi   r3, 0
	beq      lbl_8007A8EC
	lbz      r0, 0xa(r29)
	cmplwi   r0, 0x3c
	beq      lbl_8007A8EC
	mr       r4, r28
	bl       load__9J3DTexMtxCFUl

lbl_8007A8EC:
	addi     r28, r28, 1
	addi     r29, r29, 6
	cmplwi   r28, 8
	addi     r30, r30, 4
	blt      lbl_8007A8CC
	lwz      r4, __GDCurrentDL@sda21(r13)
	mr       r3, r31
	lwz      r0, 8(r4)
	subf     r4, r31, r0
	bl       DCStoreRange
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
 * @note Address: 0x8007A934
 * @note Size: 0x68
 */
void J3DTexGenBlockPatched::diff(u32 p1)
{
	if ((p1 >> 8 & 0xF) != 0) {
		diffTexMtx();
		if ((p1 & 0x1000) != 0) {
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
		if (mTexMatrices[i] != nullptr) {
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
	if (mTexgenCnt != 0) {
		loadTexCoordGens(mTexgenCnt, mTexCoords);
	}
}

/**
 * @note Address: 0x8007AA28
 * @note Size: 0x240
 */
void J3DTevBlock1::load()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 0(r4)
	lwz      r0, 8(r4)
	subf     r0, r3, r0
	stw      r0, 4(r31)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	lwz      r0, 0xc(r4)
	addi     r3, r3, 0x69
	cmplw    r3, r0
	ble      lbl_8007AA6C
	bl       GDOverflowed

lbl_8007AA6C:
	lhz      r0, 8(r31)
	cmplwi   r0, 0xffff
	beq      lbl_8007AA84
	addi     r4, r31, 8
	li       r3, 0
	bl       loadTexNo__FUlRCUs

lbl_8007AA84:
	lbz      r4, 0xa(r31)
	li       r3, 0
	lbz      r5, 0xb(r31)
	li       r7, 0xff
	lbz      r6, 0xc(r31)
	li       r8, 0xff
	li       r9, 0xff
	bl
J3DGDSetTevOrder__F13_GXTevStageID13_GXTexCoordID11_GXTexMapID12_GXChannelID13_GXTexCoordID11_GXTexMapID12_GXChannelID
	lbz      r4, 0xb(r31)
	lis      r3, sTexCoordScaleTable__6J3DSys@ha
	addi     r0, r3, sTexCoordScaleTable__6J3DSys@l
	lbz      r3, 0xa(r31)
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
	lwz      r5, __GDCurrentDL@sda21(r13)
	li       r0, 0x61
	lwz      r9, 0xe(r31)
	lwz      r4, 8(r5)
	srwi     r8, r9, 0x18
	rlwinm   r7, r9, 0x10, 0x18, 0x1f
	addi     r3, r4, 1
	rlwinm   r6, r9, 0x18, 0x18, 0x1f
	stw      r3, 8(r5)
	stb      r0, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
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
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r9, 0x12(r31)
	lwz      r4, 8(r5)
	srwi     r8, r9, 0x18
	rlwinm   r7, r9, 0x10, 0x18, 0x1f
	addi     r3, r4, 1
	rlwinm   r6, r9, 0x18, 0x18, 0x1f
	stw      r3, 8(r5)
	stb      r0, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
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
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r3, 0x18(r31)
	lwz      r4, 8(r5)
	oris     r8, r3, 0x1000
	addi     r3, r4, 1
	stw      r3, 8(r5)
	srwi     r7, r8, 0x18
	rlwinm   r6, r8, 0x10, 0x18, 0x1f
	rlwinm   r5, r8, 0x18, 0x18, 0x1f
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
	stb      r8, 0(r3)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x8007AC68
 * @note Size: 0x504
 */
void J3DTevBlock2::load()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r25, 0x24(r1)
	mr       r30, r3
	mr       r25, r30
	li       r26, 0
	lwz      r4, __GDCurrentDL@sda21(r13)
	lbz      r31, 0x34(r3)
	lwz      r3, 0(r4)
	lwz      r0, 8(r4)
	subf     r0, r3, r0
	stw      r0, 4(r30)

lbl_8007AC9C:
	lhz      r0, 8(r25)
	cmplwi   r0, 0xffff
	beq      lbl_8007ACB4
	mr       r3, r26
	addi     r4, r25, 8
	bl       loadTexNo__FUlRCUs

lbl_8007ACB4:
	addi     r26, r26, 1
	addi     r25, r25, 2
	cmplwi   r26, 2
	blt      lbl_8007AC9C
	lbz      r4, 0xc(r30)
	li       r3, 0
	lbz      r5, 0xd(r30)
	lbz      r6, 0xe(r30)
	lbz      r7, 0x10(r30)
	lbz      r8, 0x11(r30)
	lbz      r9, 0x12(r30)
	bl
J3DGDSetTevOrder__F13_GXTevStageID13_GXTexCoordID11_GXTexMapID12_GXChannelID13_GXTexCoordID11_GXTexMapID12_GXChannelID
	lbz      r4, 0xd(r30)
	lis      r3, sTexCoordScaleTable__6J3DSys@ha
	addi     r0, r3, sTexCoordScaleTable__6J3DSys@l
	lbz      r3, 0xc(r30)
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
	lbz      r4, 0x11(r30)
	lis      r3, sTexCoordScaleTable__6J3DSys@ha
	addi     r3, r3, sTexCoordScaleTable__6J3DSys@l
	lbz      r0, 0x10(r30)
	rlwinm   r4, r4, 3, 0x1a, 0x1c
	li       r6, 0
	add      r7, r3, r4
	clrlwi   r3, r0, 0x1d
	lhz      r4, 4(r7)
	li       r9, 0
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
	lwz      r4, __GDCurrentDL@sda21(r13)
	mr       r25, r30
	li       r26, 0
	lwz      r3, 0(r4)
	lwz      r0, 8(r4)
	subf     r0, r3, r0
	stw      r0, 0x68(r30)

lbl_8007AD9C:
	lwz      r5, 0x14(r25)
	addi     r3, r26, 1
	lwz      r0, 0x18(r25)
	addi     r4, r1, 0xc
	stw      r5, 0xc(r1)
	stw      r0, 0x10(r1)
	bl       J3DGDSetTevColorS10__F11_GXTevRegID11_GXColorS10
	addi     r26, r26, 1
	addi     r25, r25, 8
	cmplwi   r26, 3
	blt      lbl_8007AD9C
	li       r26, 0
	mr       r25, r30

lbl_8007ADD0:
	lwz      r0, 0x45(r25)
	mr       r3, r26
	addi     r4, r1, 8
	stw      r0, 8(r1)
	bl       J3DGDSetTevKColor__F14_GXTevKColorID8_GXColor
	addi     r26, r26, 1
	addi     r25, r25, 4
	cmplwi   r26, 4
	blt      lbl_8007ADD0
	mr       r3, r30
	mr       r4, r30
	li       r5, 0
	mtctr    r31
	cmplwi   r31, 0
	ble      lbl_8007AF88

lbl_8007AE0C:
	lwz      r9, __GDCurrentDL@sda21(r13)
	addi     r6, r5, 0x10
	lwz      r25, 0x35(r3)
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
	lwz      r25, 0x39(r3)
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
	lwz      r9, 0x60(r4)
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
	bdnz     lbl_8007AE0C

lbl_8007AF88:
	lis      r3, j3dTevSwapTableTable@ha
	li       r0, 4
	addi     r3, r3, j3dTevSwapTableTable@l
	li       r6, 0
	li       r4, 0
	mtctr    r0

lbl_8007AFA0:
	addi     r5, r4, 0x59
	lwz      r12, __GDCurrentDL@sda21(r13)
	lbzx     r7, r30, r5
	srwi     r0, r6, 0x1f
	lwz      r11, 8(r12)
	add      r0, r0, r6
	slwi     r7, r7, 2
	lbz      r26, 0x58(r30)
	add      r9, r3, r7
	lbz      r27, 0x56(r30)
	lbz      r8, 1(r9)
	srawi    r7, r0, 1
	lbz      r25, 0(r9)
	addi     r10, r11, 1
	lbz      r28, 0x57(r30)
	slwi     r9, r8, 2
	lbz      r31, 0x55(r30)
	li       r0, 0x61
	or       r9, r25, r9
	addi     r8, r6, 2
	stw      r10, 8(r12)
	slwi     r10, r31, 4
	or       r9, r10, r9
	addi     r29, r7, 0xf6
	stb      r0, 0(r11)
	slwi     r11, r28, 9
	srwi     r7, r8, 0x1f
	slwi     r12, r27, 0xe
	add      r7, r7, r8
	or       r11, r11, r9
	lwz      r10, __GDCurrentDL@sda21(r13)
	slwi     r31, r26, 0x13
	or       r8, r12, r11
	srawi    r7, r7, 1
	or       r25, r31, r8
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
	lbzx     r5, r30, r5
	lwz      r31, __GDCurrentDL@sda21(r13)
	slwi     r5, r5, 2
	lbz      r7, 0x58(r30)
	add      r25, r3, r5
	lbz      r9, 0x56(r30)
	lbz      r5, 3(r25)
	slwi     r10, r7, 0x13
	lwz      r12, 8(r31)
	slwi     r9, r9, 0xe
	lbz      r8, 0x57(r30)
	slwi     r5, r5, 2
	lbz      r26, 2(r25)
	addi     r7, r12, 1
	lbz      r25, 0x55(r30)
	slwi     r8, r8, 9
	or       r5, r26, r5
	stw      r7, 8(r31)
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
	bdnz     lbl_8007AFA0
	lmw      r25, 0x24(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/**
 * @note Address: 0x8007B16C
 * @note Size: 0x528
 */
void J3DTevBlock4::load()
{
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
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	li       r29, 0
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r0, 4(r3)
	lwz      r3, 0(r4)
	add      r0, r3, r0
	stw      r0, 8(r4)
	lwz      r3, __GDCurrentDL@sda21(r13)
	lwz      r31, 8(r3)

lbl_8007BBFC:
	lhz      r0, 8(r30)
	cmplwi   r0, 0xffff
	beq      lbl_8007BC14
	mr       r3, r29
	addi     r4, r30, 8
	bl       loadTexNo__FUlRCUs

lbl_8007BC14:
	addi     r29, r29, 1
	addi     r30, r30, 2
	cmplwi   r29, 8
	blt      lbl_8007BBFC
	lwz      r4, __GDCurrentDL@sda21(r13)
	mr       r3, r31
	lwz      r0, 8(r4)
	subf     r4, r31, r0
	bl       DCStoreRange
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
 * @note Address: 0x8007BC54
 * @note Size: 0xD0
 */
void J3DTevBlockPatched::patchTevReg()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	li       r29, 0
	stw      r28, 0x20(r1)
	mr       r28, r3
	mr       r30, r28
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r0, 0xd4(r3)
	lwz      r3, 0(r4)
	add      r0, r3, r0
	stw      r0, 8(r4)
	lwz      r3, __GDCurrentDL@sda21(r13)
	lwz      r31, 8(r3)

lbl_8007BC98:
	lwz      r5, 0x98(r30)
	addi     r3, r29, 1
	lwz      r0, 0x9c(r30)
	addi     r4, r1, 0xc
	stw      r5, 0xc(r1)
	stw      r0, 0x10(r1)
	bl       J3DGDSetTevColorS10__F11_GXTevRegID11_GXColorS10
	addi     r29, r29, 1
	addi     r30, r30, 8
	cmplwi   r29, 3
	blt      lbl_8007BC98
	li       r29, 0
	mr       r30, r28

lbl_8007BCCC:
	lwz      r0, 0xb8(r30)
	mr       r3, r29
	addi     r4, r1, 8
	stw      r0, 8(r1)
	bl       J3DGDSetTevKColor__F14_GXTevKColorID8_GXColor
	addi     r29, r29, 1
	addi     r30, r30, 4
	cmplwi   r29, 4
	blt      lbl_8007BCCC
	lwz      r4, __GDCurrentDL@sda21(r13)
	mr       r3, r31
	lwz      r0, 8(r4)
	subf     r4, r31, r0
	bl       DCStoreRange
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x8007BD24
 * @note Size: 0x16C
 */
void J3DTevBlockPatched::patchTexNoAndTexCoordScale()
{
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
	__GDCurrentDL->pDisplayListData = __GDCurrentDL->begin + mTexNoOffset;
	u8* data                        = __GDCurrentDL->pDisplayListData;
	if (mTexIndices[0] != 0xFFFF) {
		// loadTexNo(0, mTexIndices);
	}
	DCStoreRange(data, __GDCurrentDL->pDisplayListData - data);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r0, 4(r3)
	lwz      r4, 0(r5)
	add      r0, r4, r0
	stw      r0, 8(r5)
	lhz      r0, 8(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	cmplwi   r0, 0xffff
	lwz      r31, 8(r4)
	beq      lbl_8007BF20
	addi     r4, r3, 8
	li       r3, 0
	bl       loadTexNo__FUlRCUs

lbl_8007BF20:
	lwz      r4, __GDCurrentDL@sda21(r13)
	mr       r3, r31
	lwz      r0, 8(r4)
	subf     r4, r31, r0
	bl       DCStoreRange
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
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
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r0, 4(r3)
	lwz      r3, 0(r4)
	add      r0, r3, r0
	stw      r0, 8(r4)
	lhz      r0, 8(r30)
	lwz      r3, __GDCurrentDL@sda21(r13)
	cmplwi   r0, 0xffff
	lwz      r31, 8(r3)
	beq      lbl_8007BF98
	addi     r4, r30, 8
	li       r3, 0
	bl       loadTexNo__FUlRCUs

lbl_8007BF98:
	lbz      r4, 0xa(r30)
	li       r3, 0
	lbz      r5, 0xb(r30)
	li       r7, 0xff
	lbz      r6, 0xc(r30)
	li       r8, 0xff
	li       r9, 0xff
	bl
J3DGDSetTevOrder__F13_GXTevStageID13_GXTexCoordID11_GXTexMapID12_GXChannelID13_GXTexCoordID11_GXTexMapID12_GXChannelID
	lbz      r4, 0xb(r30)
	lis      r3, sTexCoordScaleTable__6J3DSys@ha
	addi     r0, r3, sTexCoordScaleTable__6J3DSys@l
	lbz      r3, 0xa(r30)
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
	lwz      r4, __GDCurrentDL@sda21(r13)
	mr       r3, r31
	lwz      r0, 8(r4)
	subf     r4, r31, r0
	bl       DCStoreRange
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
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
	__GDCurrentDL->pDisplayListData = __GDCurrentDL->begin + mTexNoOffset;
	u8* start                       = __GDCurrentDL->pDisplayListData;
	for (u32 i = 0; i < 2; i++) {
		if (mTexIndices[i] != 0xFFFF) {
			loadTexNo(i, mTexIndices[i]);
		}
	}
	DCStoreRange(start, __GDCurrentDL->pDisplayListData - start);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	li       r29, 0
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r0, 4(r3)
	lwz      r3, 0(r4)
	add      r0, r3, r0
	stw      r0, 8(r4)
	lwz      r3, __GDCurrentDL@sda21(r13)
	lwz      r31, 8(r3)

lbl_8007C098:
	lhz      r0, 8(r30)
	cmplwi   r0, 0xffff
	beq      lbl_8007C0B0
	mr       r3, r29
	addi     r4, r30, 8
	bl       loadTexNo__FUlRCUs

lbl_8007C0B0:
	addi     r29, r29, 1
	addi     r30, r30, 2
	cmplwi   r29, 2
	blt      lbl_8007C098
	lwz      r4, __GDCurrentDL@sda21(r13)
	mr       r3, r31
	lwz      r0, 8(r4)
	subf     r4, r31, r0
	bl       DCStoreRange
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
 * @note Address: 0x8007C0F0
 * @note Size: 0xD0
 */
void J3DTevBlock2::patchTevReg()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	li       r29, 0
	stw      r28, 0x20(r1)
	mr       r28, r3
	mr       r30, r28
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r0, 0x68(r3)
	lwz      r3, 0(r4)
	add      r0, r3, r0
	stw      r0, 8(r4)
	lwz      r3, __GDCurrentDL@sda21(r13)
	lwz      r31, 8(r3)

lbl_8007C134:
	lwz      r5, 0x14(r30)
	addi     r3, r29, 1
	lwz      r0, 0x18(r30)
	addi     r4, r1, 0xc
	stw      r5, 0xc(r1)
	stw      r0, 0x10(r1)
	bl       J3DGDSetTevColorS10__F11_GXTevRegID11_GXColorS10
	addi     r29, r29, 1
	addi     r30, r30, 8
	cmplwi   r29, 3
	blt      lbl_8007C134
	li       r29, 0
	mr       r30, r28

lbl_8007C168:
	lwz      r0, 0x45(r30)
	mr       r3, r29
	addi     r4, r1, 8
	stw      r0, 8(r1)
	bl       J3DGDSetTevKColor__F14_GXTevKColorID8_GXColor
	addi     r29, r29, 1
	addi     r30, r30, 4
	cmplwi   r29, 4
	blt      lbl_8007C168
	lwz      r4, __GDCurrentDL@sda21(r13)
	mr       r3, r31
	lwz      r0, 8(r4)
	subf     r4, r31, r0
	bl       DCStoreRange
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x8007C1C0
 * @note Size: 0x15C
 */
void J3DTevBlock2::patchTexNoAndTexCoordScale()
{
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
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r0, 4(r3)
	lwz      r3, 0(r4)
	add      r0, r3, r0
	stw      r0, 8(r4)
	lwz      r3, __GDCurrentDL@sda21(r13)
	lwz      r31, 8(r3)

lbl_8007C204:
	lhz      r0, 8(r29)
	cmplwi   r0, 0xffff
	beq      lbl_8007C21C
	mr       r3, r28
	addi     r4, r29, 8
	bl       loadTexNo__FUlRCUs

lbl_8007C21C:
	addi     r28, r28, 1
	addi     r29, r29, 2
	cmplwi   r28, 2
	blt      lbl_8007C204
	lbz      r4, 0xc(r30)
	li       r3, 0
	lbz      r5, 0xd(r30)
	lbz      r6, 0xe(r30)
	lbz      r7, 0x10(r30)
	lbz      r8, 0x11(r30)
	lbz      r9, 0x12(r30)
	bl
J3DGDSetTevOrder__F13_GXTevStageID13_GXTexCoordID11_GXTexMapID12_GXChannelID13_GXTexCoordID11_GXTexMapID12_GXChannelID
	lbz      r4, 0xd(r30)
	lis      r3, sTexCoordScaleTable__6J3DSys@ha
	addi     r0, r3, sTexCoordScaleTable__6J3DSys@l
	lbz      r3, 0xc(r30)
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
	lbz      r4, 0x11(r30)
	lis      r3, sTexCoordScaleTable__6J3DSys@ha
	addi     r3, r3, sTexCoordScaleTable__6J3DSys@l
	lbz      r0, 0x10(r30)
	rlwinm   r4, r4, 3, 0x1a, 0x1c
	li       r6, 0
	add      r7, r3, r4
	clrlwi   r3, r0, 0x1d
	lhz      r4, 4(r7)
	li       r9, 0
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
	lwz      r4, __GDCurrentDL@sda21(r13)
	mr       r3, r31
	lwz      r0, 8(r4)
	subf     r4, r31, r0
	bl       DCStoreRange
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
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	li       r29, 0
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r0, 4(r3)
	lwz      r3, 0(r4)
	add      r0, r3, r0
	stw      r0, 8(r4)
	lwz      r3, __GDCurrentDL@sda21(r13)
	lwz      r31, 8(r3)

lbl_8007C3A4:
	lhz      r0, 8(r30)
	cmplwi   r0, 0xffff
	beq      lbl_8007C3BC
	mr       r3, r29
	addi     r4, r30, 8
	bl       loadTexNo__FUlRCUs

lbl_8007C3BC:
	addi     r29, r29, 1
	addi     r30, r30, 2
	cmplwi   r29, 4
	blt      lbl_8007C3A4
	lwz      r4, __GDCurrentDL@sda21(r13)
	mr       r3, r31
	lwz      r0, 8(r4)
	subf     r4, r31, r0
	bl       DCStoreRange
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
 * @note Address: 0x8007C3FC
 * @note Size: 0xD0
 */
void J3DTevBlock4::patchTevReg()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	li       r29, 0
	stw      r28, 0x20(r1)
	mr       r28, r3
	mr       r30, r28
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r0, 0x90(r3)
	lwz      r3, 0(r4)
	add      r0, r3, r0
	stw      r0, 8(r4)
	lwz      r3, __GDCurrentDL@sda21(r13)
	lwz      r31, 8(r3)

lbl_8007C440:
	lwz      r5, 0x42(r30)
	addi     r3, r29, 1
	lwz      r0, 0x46(r30)
	addi     r4, r1, 0xc
	stw      r5, 0xc(r1)
	stw      r0, 0x10(r1)
	bl       J3DGDSetTevColorS10__F11_GXTevRegID11_GXColorS10
	addi     r29, r29, 1
	addi     r30, r30, 8
	cmplwi   r29, 3
	blt      lbl_8007C440
	li       r29, 0
	mr       r30, r28

lbl_8007C474:
	lwz      r0, 0x62(r30)
	mr       r3, r29
	addi     r4, r1, 8
	stw      r0, 8(r1)
	bl       J3DGDSetTevKColor__F14_GXTevKColorID8_GXColor
	addi     r29, r29, 1
	addi     r30, r30, 4
	cmplwi   r29, 4
	blt      lbl_8007C474
	lwz      r4, __GDCurrentDL@sda21(r13)
	mr       r3, r31
	lwz      r0, 8(r4)
	subf     r4, r31, r0
	bl       DCStoreRange
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x8007C4CC
 * @note Size: 0x16C
 */
void J3DTevBlock4::patchTexNoAndTexCoordScale()
{
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
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	li       r29, 0
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r0, 4(r3)
	lwz      r3, 0(r4)
	add      r0, r3, r0
	stw      r0, 8(r4)
	lwz      r3, __GDCurrentDL@sda21(r13)
	lwz      r31, 8(r3)

lbl_8007C6C0:
	lhz      r0, 8(r30)
	cmplwi   r0, 0xffff
	beq      lbl_8007C6D8
	mr       r3, r29
	addi     r4, r30, 8
	bl       loadTexNo__FUlRCUs

lbl_8007C6D8:
	addi     r29, r29, 1
	addi     r30, r30, 2
	cmplwi   r29, 8
	blt      lbl_8007C6C0
	lwz      r4, __GDCurrentDL@sda21(r13)
	mr       r3, r31
	lwz      r0, 8(r4)
	subf     r4, r31, r0
	bl       DCStoreRange
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
 * @note Address: 0x8007C718
 * @note Size: 0xD0
 */
void J3DTevBlock16::patchTevReg()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	li       r29, 0
	stw      r28, 0x20(r1)
	mr       r28, r3
	mr       r30, r28
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r0, 0x170(r3)
	lwz      r3, 0(r4)
	add      r0, r3, r0
	stw      r0, 8(r4)
	lwz      r3, __GDCurrentDL@sda21(r13)
	lwz      r31, 8(r3)

lbl_8007C75C:
	lwz      r5, 0xda(r30)
	addi     r3, r29, 1
	lwz      r0, 0xde(r30)
	addi     r4, r1, 0xc
	stw      r5, 0xc(r1)
	stw      r0, 0x10(r1)
	bl       J3DGDSetTevColorS10__F11_GXTevRegID11_GXColorS10
	addi     r29, r29, 1
	addi     r30, r30, 8
	cmplwi   r29, 3
	blt      lbl_8007C75C
	li       r29, 0
	mr       r30, r28

lbl_8007C790:
	lwz      r0, 0xfa(r30)
	mr       r3, r29
	addi     r4, r1, 8
	stw      r0, 8(r1)
	bl       J3DGDSetTevKColor__F14_GXTevKColorID8_GXColor
	addi     r29, r29, 1
	addi     r30, r30, 4
	cmplwi   r29, 4
	blt      lbl_8007C790
	lwz      r4, __GDCurrentDL@sda21(r13)
	mr       r3, r31
	lwz      r0, 8(r4)
	subf     r4, r31, r0
	bl       DCStoreRange
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x8007C7E8
 * @note Size: 0x16C
 */
void J3DTevBlock16::patchTexNoAndTexCoordScale()
{
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
void J3DTevBlock::diff(u32)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	rlwinm.  r0, r4, 0x10, 0x1c, 0x1f
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	beq      lbl_8007C9D4
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8007C9D4:
	rlwinm.  r0, r31, 0, 5, 5
	beq      lbl_8007C9F0
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8007C9F0:
	rlwinm.  r0, r31, 0xc, 0x1c, 0x1f
	beq      lbl_8007CA28
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	rlwinm.  r0, r31, 0, 4, 4
	beq      lbl_8007CA28
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl

lbl_8007CA28:
	rlwinm.  r0, r31, 0, 7, 7
	beq      lbl_8007CA44
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl

lbl_8007CA44:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
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
	/*
	lbz      r0, 0xd0(r3)
	mtctr    r0
	cmplwi   r0, 0
	blelr

lbl_8007CAC8:
	lwz      r5, __GDCurrentDL@sda21(r13)
	li       r9, 0x61
	lwz      r10, 0x38(r3)
	lwz      r4, 8(r5)
	srwi     r8, r10, 0x18
	rlwinm   r7, r10, 0x10, 0x18, 0x1f
	addi     r0, r4, 1
	rlwinm   r6, r10, 0x18, 0x18, 0x1f
	stw      r0, 8(r5)
	stb      r9, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
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
	stb      r10, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r10, 0x3c(r3)
	addi     r3, r3, 8
	lwz      r4, 8(r5)
	srwi     r8, r10, 0x18
	rlwinm   r7, r10, 0x10, 0x18, 0x1f
	addi     r0, r4, 1
	rlwinm   r6, r10, 0x18, 0x18, 0x1f
	stw      r0, 8(r5)
	stb      r9, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
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
	stb      r10, 0(r4)
	bdnz     lbl_8007CAC8
	blr
	*/
}

/**
 * @note Address: 0x8007CBC0
 * @note Size: 0xA8
 */
void J3DTevBlockPatched::diffTevStageIndirect()
{
	/*
	lbz      r0, 0xd0(r3)
	li       r11, 0
	mtctr    r0
	cmplwi   r0, 0
	blelr

lbl_8007CBD4:
	lwz      r5, __GDCurrentDL@sda21(r13)
	addi     r0, r11, 0x10
	lwz      r6, 0x78(r3)
	slwi     r0, r0, 0x18
	lwz      r4, 8(r5)
	li       r9, 0x61
	or       r10, r6, r0
	addi     r3, r3, 4
	addi     r0, r4, 1
	addi     r11, r11, 1
	stw      r0, 8(r5)
	srwi     r8, r10, 0x18
	rlwinm   r7, r10, 0x10, 0x18, 0x1f
	rlwinm   r6, r10, 0x18, 0x18, 0x1f
	stb      r9, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
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
	stb      r10, 0(r4)
	bdnz     lbl_8007CBD4
	blr
	*/
}

/**
 * @note Address: 0x8007CC68
 * @note Size: 0x98
 */
void J3DTevBlockPatched::diffTevReg()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	li       r30, 0
	stw      r29, 0x24(r1)
	mr       r29, r3
	mr       r31, r29

lbl_8007CC8C:
	lwz      r5, 0x98(r31)
	addi     r3, r30, 1
	lwz      r0, 0x9c(r31)
	addi     r4, r1, 0xc
	stw      r5, 0xc(r1)
	stw      r0, 0x10(r1)
	bl       J3DGDSetTevColorS10__F11_GXTevRegID11_GXColorS10
	addi     r30, r30, 1
	addi     r31, r31, 8
	cmplwi   r30, 3
	blt      lbl_8007CC8C
	li       r30, 0
	mr       r31, r29

lbl_8007CCC0:
	lwz      r0, 0xb8(r31)
	mr       r3, r30
	addi     r4, r1, 8
	stw      r0, 8(r1)
	bl       J3DGDSetTevKColor__F14_GXTevKColorID8_GXColor
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmplwi   r30, 4
	blt      lbl_8007CCC0
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
 * @note Address: 0x8007CD00
 * @note Size: 0xEC
 */
void J3DTevBlockPatched::diffTexCoordScale()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	lis      r3, sTexCoordScaleTable__6J3DSys@ha
	li       r28, 0
	mr       r30, r27
	addi     r31, r3, sTexCoordScaleTable__6J3DSys@l
	lbz      r29, 0xd0(r27)
	b        lbl_8007CDD0

lbl_8007CD2C:
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
	addi     r0, r28, 1
	li       r6, 0
	slwi     r0, r0, 2
	li       r9, 0
	add      r4, r27, r0
	lbz      r3, 0x19(r4)
	lbz      r0, 0x18(r4)
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

lbl_8007CDD0:
	cmplw    r28, r29
	blt      lbl_8007CD2C
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
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
	/*
	lwz      r5, __GDCurrentDL@sda21(r13)
	li       r9, 0x61
	lwz      r10, 0xe(r3)
	lwz      r4, 8(r5)
	srwi     r8, r10, 0x18
	rlwinm   r7, r10, 0x10, 0x18, 0x1f
	addi     r0, r4, 1
	rlwinm   r6, r10, 0x18, 0x18, 0x1f
	stw      r0, 8(r5)
	stb      r9, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
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
	stb      r10, 0(r4)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r8, 0x12(r3)
	lwz      r3, 8(r4)
	srwi     r7, r8, 0x18
	rlwinm   r6, r8, 0x10, 0x18, 0x1f
	addi     r0, r3, 1
	rlwinm   r5, r8, 0x18, 0x18, 0x1f
	stw      r0, 8(r4)
	stb      r9, 0(r3)
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
	stb      r8, 0(r3)
	blr
	*/
}

/**
 * @note Address: 0x8007CF14
 * @note Size: 0x80
 */
void J3DTevBlock1::diffTevStageIndirect()
{
	/*
	lwz      r4, __GDCurrentDL@sda21(r13)
	li       r8, 0x61
	lwz      r0, 0x18(r3)
	lwz      r3, 8(r4)
	oris     r9, r0, 0x1000
	addi     r0, r3, 1
	stw      r0, 8(r4)
	srwi     r7, r9, 0x18
	rlwinm   r6, r9, 0x10, 0x18, 0x1f
	rlwinm   r5, r9, 0x18, 0x18, 0x1f
	stb      r8, 0(r3)
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
	stb      r9, 0(r3)
	blr
	*/
}

/**
 * @note Address: 0x8007CF94
 * @note Size: 0x68
 */
void J3DTevBlock1::diffTexCoordScale()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, sTexCoordScaleTable__6J3DSys@ha
	li       r6, 0
	stw      r0, 0x14(r1)
	addi     r0, r4, sTexCoordScaleTable__6J3DSys@l
	li       r9, 0
	lbz      r5, 0xb(r3)
	lbz      r3, 0xa(r3)
	rlwinm   r4, r5, 3, 0x1a, 0x1c
	add      r7, r0, r4
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
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
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
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	li       r30, 0
	stw      r29, 0x24(r1)
	mr       r29, r3
	mr       r31, r29

lbl_8007D07C:
	lwz      r5, 0x14(r31)
	addi     r3, r30, 1
	lwz      r0, 0x18(r31)
	addi     r4, r1, 0xc
	stw      r5, 0xc(r1)
	stw      r0, 0x10(r1)
	bl       J3DGDSetTevColorS10__F11_GXTevRegID11_GXColorS10
	addi     r30, r30, 1
	addi     r31, r31, 8
	cmplwi   r30, 3
	blt      lbl_8007D07C
	li       r30, 0
	mr       r31, r29

lbl_8007D0B0:
	lwz      r0, 0x45(r31)
	mr       r3, r30
	addi     r4, r1, 8
	stw      r0, 8(r1)
	bl       J3DGDSetTevKColor__F14_GXTevKColorID8_GXColor
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmplwi   r30, 4
	blt      lbl_8007D0B0
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
 * @note Address: 0x8007D0F0
 * @note Size: 0x108
 */
void J3DTevBlock2::diffTevStage()
{
	if (mStageNum == 0) {
		return;
	}
	for (int i = 0; i < 2; i++) {
		J3DTevStage* stage = mStages + i;
		__GDWrite(0x61);
		__GDWrite(stage->_03);
		__GDWrite(stage->_02);
		__GDWrite(stage->_01);
		__GDWrite(stage->_00);
		__GDWrite(0x61);
		__GDWrite(stage->_07);
		__GDWrite(stage->_06);
		__GDWrite(stage->_05);
		__GDWrite(stage->_04);
	}
	/*
	lbz      r0, 0x34(r3)
	mtctr    r0
	cmplwi   r0, 0
	blelr

lbl_8007D100:
	lwz      r5, __GDCurrentDL@sda21(r13)
	li       r9, 0x61
	lwz      r10, 0x35(r3)
	lwz      r4, 8(r5)
	srwi     r8, r10, 0x18
	rlwinm   r7, r10, 0x10, 0x18, 0x1f
	addi     r0, r4, 1
	rlwinm   r6, r10, 0x18, 0x18, 0x1f
	stw      r0, 8(r5)
	stb      r9, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
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
	stb      r10, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r10, 0x39(r3)
	addi     r3, r3, 8
	lwz      r4, 8(r5)
	srwi     r8, r10, 0x18
	rlwinm   r7, r10, 0x10, 0x18, 0x1f
	addi     r0, r4, 1
	rlwinm   r6, r10, 0x18, 0x18, 0x1f
	stw      r0, 8(r5)
	stb      r9, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
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
	stb      r10, 0(r4)
	bdnz     lbl_8007D100
	blr
	*/
}

/**
 * @note Address: 0x8007D1F8
 * @note Size: 0xA8
 */
void J3DTevBlock2::diffTevStageIndirect()
{
	/*
	lbz      r0, 0x34(r3)
	li       r11, 0
	mtctr    r0
	cmplwi   r0, 0
	blelr

lbl_8007D20C:
	lwz      r5, __GDCurrentDL@sda21(r13)
	addi     r0, r11, 0x10
	lwz      r6, 0x60(r3)
	slwi     r0, r0, 0x18
	lwz      r4, 8(r5)
	li       r9, 0x61
	or       r10, r6, r0
	addi     r3, r3, 4
	addi     r0, r4, 1
	addi     r11, r11, 1
	stw      r0, 8(r5)
	srwi     r8, r10, 0x18
	rlwinm   r7, r10, 0x10, 0x18, 0x1f
	rlwinm   r6, r10, 0x18, 0x18, 0x1f
	stb      r9, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
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
	stb      r10, 0(r4)
	bdnz     lbl_8007D20C
	blr
	*/
}

/**
 * @note Address: 0x8007D2A0
 * @note Size: 0xC4
 */
void J3DTevBlock2::diffTexCoordScale()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r6, 0
	li       r9, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lis      r3, sTexCoordScaleTable__6J3DSys@ha
	lbz      r4, 0xd(r31)
	addi     r0, r3, sTexCoordScaleTable__6J3DSys@l
	lbz      r3, 0xc(r31)
	rlwinm   r4, r4, 3, 0x1a, 0x1c
	add      r7, r0, r4
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
	lbz      r4, 0x11(r31)
	lis      r3, sTexCoordScaleTable__6J3DSys@ha
	addi     r3, r3, sTexCoordScaleTable__6J3DSys@l
	lbz      r0, 0x10(r31)
	rlwinm   r4, r4, 3, 0x1a, 0x1c
	li       r6, 0
	add      r7, r3, r4
	clrlwi   r3, r0, 0x1d
	lhz      r4, 4(r7)
	li       r9, 0
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
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
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
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	li       r30, 0
	stw      r29, 0x24(r1)
	mr       r29, r3
	mr       r31, r29

lbl_8007D3E4:
	lwz      r5, 0x42(r31)
	addi     r3, r30, 1
	lwz      r0, 0x46(r31)
	addi     r4, r1, 0xc
	stw      r5, 0xc(r1)
	stw      r0, 0x10(r1)
	bl       J3DGDSetTevColorS10__F11_GXTevRegID11_GXColorS10
	addi     r30, r30, 1
	addi     r31, r31, 8
	cmplwi   r30, 3
	blt      lbl_8007D3E4
	li       r30, 0
	mr       r31, r29

lbl_8007D418:
	lwz      r0, 0x62(r31)
	mr       r3, r30
	addi     r4, r1, 8
	stw      r0, 8(r1)
	bl       J3DGDSetTevKColor__F14_GXTevKColorID8_GXColor
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmplwi   r30, 4
	blt      lbl_8007D418
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
 * @note Address: 0x8007D458
 * @note Size: 0x108
 */
void J3DTevBlock4::diffTevStage()
{
	/*
	lbz      r0, 0x20(r3)
	mtctr    r0
	cmplwi   r0, 0
	blelr

lbl_8007D468:
	lwz      r5, __GDCurrentDL@sda21(r13)
	li       r9, 0x61
	lwz      r10, 0x21(r3)
	lwz      r4, 8(r5)
	srwi     r8, r10, 0x18
	rlwinm   r7, r10, 0x10, 0x18, 0x1f
	addi     r0, r4, 1
	rlwinm   r6, r10, 0x18, 0x18, 0x1f
	stw      r0, 8(r5)
	stb      r9, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
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
	stb      r10, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r10, 0x25(r3)
	addi     r3, r3, 8
	lwz      r4, 8(r5)
	srwi     r8, r10, 0x18
	rlwinm   r7, r10, 0x10, 0x18, 0x1f
	addi     r0, r4, 1
	rlwinm   r6, r10, 0x18, 0x18, 0x1f
	stw      r0, 8(r5)
	stb      r9, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
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
	stb      r10, 0(r4)
	bdnz     lbl_8007D468
	blr
	*/
}

/**
 * @note Address: 0x8007D560
 * @note Size: 0xA8
 */
void J3DTevBlock4::diffTevStageIndirect()
{
	/*
	lbz      r0, 0x20(r3)
	li       r11, 0
	mtctr    r0
	cmplwi   r0, 0
	blelr

lbl_8007D574:
	lwz      r5, __GDCurrentDL@sda21(r13)
	addi     r0, r11, 0x10
	lwz      r6, 0x80(r3)
	slwi     r0, r0, 0x18
	lwz      r4, 8(r5)
	li       r9, 0x61
	or       r10, r6, r0
	addi     r3, r3, 4
	addi     r0, r4, 1
	addi     r11, r11, 1
	stw      r0, 8(r5)
	srwi     r8, r10, 0x18
	rlwinm   r7, r10, 0x10, 0x18, 0x1f
	rlwinm   r6, r10, 0x18, 0x18, 0x1f
	stb      r9, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
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
	stb      r10, 0(r4)
	bdnz     lbl_8007D574
	blr
	*/
}

/**
 * @note Address: 0x8007D608
 * @note Size: 0xEC
 */
void J3DTevBlock4::diffTexCoordScale()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	lis      r3, sTexCoordScaleTable__6J3DSys@ha
	li       r28, 0
	mr       r30, r27
	addi     r31, r3, sTexCoordScaleTable__6J3DSys@l
	lbz      r29, 0x20(r27)
	b        lbl_8007D6D8

lbl_8007D634:
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
	addi     r0, r28, 1
	li       r6, 0
	slwi     r0, r0, 2
	li       r9, 0
	add      r4, r27, r0
	lbz      r3, 0x11(r4)
	lbz      r0, 0x10(r4)
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

lbl_8007D6D8:
	cmplw    r28, r29
	blt      lbl_8007D634
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
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
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	li       r30, 0
	stw      r29, 0x24(r1)
	mr       r29, r3
	mr       r31, r29

lbl_8007D774:
	lwz      r5, 0xda(r31)
	addi     r3, r30, 1
	lwz      r0, 0xde(r31)
	addi     r4, r1, 0xc
	stw      r5, 0xc(r1)
	stw      r0, 0x10(r1)
	bl       J3DGDSetTevColorS10__F11_GXTevRegID11_GXColorS10
	addi     r30, r30, 1
	addi     r31, r31, 8
	cmplwi   r30, 3
	blt      lbl_8007D774
	li       r30, 0
	mr       r31, r29

lbl_8007D7A8:
	lwz      r0, 0xfa(r31)
	mr       r3, r30
	addi     r4, r1, 8
	stw      r0, 8(r1)
	bl       J3DGDSetTevKColor__F14_GXTevKColorID8_GXColor
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmplwi   r30, 4
	blt      lbl_8007D7A8
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
 * @note Address: 0x8007D7E8
 * @note Size: 0x108
 */
void J3DTevBlock16::diffTevStage()
{
	/*
	lbz      r0, 0x58(r3)
	mtctr    r0
	cmplwi   r0, 0
	blelr

lbl_8007D7F8:
	lwz      r5, __GDCurrentDL@sda21(r13)
	li       r9, 0x61
	lwz      r10, 0x59(r3)
	lwz      r4, 8(r5)
	srwi     r8, r10, 0x18
	rlwinm   r7, r10, 0x10, 0x18, 0x1f
	addi     r0, r4, 1
	rlwinm   r6, r10, 0x18, 0x18, 0x1f
	stw      r0, 8(r5)
	stb      r9, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
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
	stb      r10, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r10, 0x5d(r3)
	addi     r3, r3, 8
	lwz      r4, 8(r5)
	srwi     r8, r10, 0x18
	rlwinm   r7, r10, 0x10, 0x18, 0x1f
	addi     r0, r4, 1
	rlwinm   r6, r10, 0x18, 0x18, 0x1f
	stw      r0, 8(r5)
	stb      r9, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
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
	stb      r10, 0(r4)
	bdnz     lbl_8007D7F8
	blr
	*/
}

/**
 * @note Address: 0x8007D8F0
 * @note Size: 0xA8
 */
void J3DTevBlock16::diffTevStageIndirect()
{
	/*
	lbz      r0, 0x58(r3)
	li       r11, 0
	mtctr    r0
	cmplwi   r0, 0
	blelr

lbl_8007D904:
	lwz      r5, __GDCurrentDL@sda21(r13)
	addi     r0, r11, 0x10
	lwz      r6, 0x130(r3)
	slwi     r0, r0, 0x18
	lwz      r4, 8(r5)
	li       r9, 0x61
	or       r10, r6, r0
	addi     r3, r3, 4
	addi     r0, r4, 1
	addi     r11, r11, 1
	stw      r0, 8(r5)
	srwi     r8, r10, 0x18
	rlwinm   r7, r10, 0x10, 0x18, 0x1f
	rlwinm   r6, r10, 0x18, 0x18, 0x1f
	stb      r9, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
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
	stb      r10, 0(r4)
	bdnz     lbl_8007D904
	blr
	*/
}

/**
 * @note Address: 0x8007D998
 * @note Size: 0xEC
 */
void J3DTevBlock16::diffTexCoordScale()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	lis      r3, sTexCoordScaleTable__6J3DSys@ha
	li       r28, 0
	mr       r30, r27
	addi     r31, r3, sTexCoordScaleTable__6J3DSys@l
	lbz      r29, 0x58(r27)
	b        lbl_8007DA68

lbl_8007D9C4:
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
	addi     r0, r28, 1
	li       r6, 0
	slwi     r0, r0, 2
	li       r9, 0
	add      r4, r27, r0
	lbz      r3, 0x19(r4)
	lbz      r0, 0x18(r4)
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

lbl_8007DA68:
	cmplw    r28, r29
	blt      lbl_8007D9C4
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x8007DA84
 * @note Size: 0xD4
 */
void J3DTevBlock16::ptrToIndex()
{
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

lbl_8007DAC8:
	lhz      r0, 8(r30)
	cmplwi   r0, 0xffff
	beq      lbl_8007DB20
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
	bne      lbl_8007DB20
	addi     r29, r29, 0x23

lbl_8007DB20:
	addi     r28, r28, 1
	addi     r30, r30, 2
	cmplwi   r28, 8
	blt      lbl_8007DAC8
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
 * @note Address: 0x8007DB58
 * @note Size: 0xD4
 */
void J3DTevBlockPatched::ptrToIndex()
{
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
void J3DTevBlock::indexToPtr_private(u32 p1)
{
	__GDCurrentDL->pDisplayListData = __GDCurrentDL->begin + p1;
	u8* start                       = __GDCurrentDL->pDisplayListData;
	// int i                           = 0;
	for (int i = 0;; i++) {
		u8* data = __GDCurrentDL->pDisplayListData;
		if (!isTexNoReg(data)) {
			break;
		}
		loadTexNo(i, getTexNoReg(data));
		// i++;
	}
	DCStoreRange(start, __GDCurrentDL->pDisplayListData - start);
	return;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	li       r29, 0
	lwz      r3, __GDCurrentDL@sda21(r13)
	lwz      r0, 0(r3)
	add      r0, r0, r4
	stw      r0, 8(r3)
	lwz      r3, __GDCurrentDL@sda21(r13)
	lwz      r31, 8(r3)

lbl_8007DC60:
	lwz      r3, __GDCurrentDL@sda21(r13)
	lwz      r30, 8(r3)
	mr       r3, r30
	bl       isTexNoReg__FPv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8007DC98
	mr       r3, r30
	bl       getTexNoReg__FPv
	sth      r3, 8(r1)
	mr       r3, r29
	addi     r4, r1, 8
	bl       loadTexNo__FUlRCUs
	addi     r29, r29, 1
	b        lbl_8007DC60

lbl_8007DC98:
	lwz      r4, __GDCurrentDL@sda21(r13)
	mr       r3, r31
	lwz      r0, 8(r4)
	subf     r4, r31, r0
	bl       DCStoreRange
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
 * @note Address: 0x8007DCC8
 * @note Size: 0x200
 */
void J3DIndBlockFull::load()
{
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
void J3DIndBlockFull::diff(u32)
{
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
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	lwz      r0, 0xc(r4)
	addi     r3, r3, 0x1e
	cmplw    r3, r0
	ble      lbl_8007DFD0
	bl       GDOverflowed

lbl_8007DFD0:
	lwz      r7, __GDCurrentDL@sda21(r13)
	li       r5, 0x61
	li       r31, 0xf3
	li       r12, 0x3f
	lwz      r6, 8(r7)
	li       r4, 0
	li       r3, 0xfe
	li       r11, 0x1f
	addi     r0, r6, 1
	li       r10, 0xe3
	stw      r0, 8(r7)
	li       r9, 0x41
	li       r8, 0x31
	stb      r5, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r31, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r12, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r4, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r4, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r5, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r3, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r4, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r11, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r10, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r5, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r9, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r4, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r8, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r4, 0(r6)
	lwz      r9, __GDCurrentDL@sda21(r13)
	li       r0, 0x40
	li       r10, 0x17
	li       r7, 0x43
	lwz      r8, 8(r9)
	addi     r6, r8, 1
	stw      r6, 8(r9)
	stb      r5, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r6, r8, 1
	stw      r6, 8(r9)
	stb      r0, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r6, r8, 1
	stw      r6, 8(r9)
	stb      r4, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r6, r8, 1
	stw      r6, 8(r9)
	stb      r4, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r6, r8, 1
	stw      r6, 8(r9)
	stb      r10, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r6, r8, 1
	stw      r6, 8(r9)
	stb      r5, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r6, r8, 1
	stw      r6, 8(r9)
	stb      r3, 0(r8)
	lwz      r8, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r8)
	addi     r3, r6, 1
	stw      r3, 8(r8)
	stb      r4, 0(r6)
	lwz      r8, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r8)
	addi     r3, r6, 1
	stw      r3, 8(r8)
	stb      r4, 0(r6)
	lwz      r8, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r8)
	addi     r3, r6, 1
	stw      r3, 8(r8)
	stb      r0, 0(r6)
	lwz      r8, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r8)
	addi     r3, r6, 1
	stw      r3, 8(r8)
	stb      r5, 0(r6)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r3, r5, 1
	stw      r3, 8(r6)
	stb      r7, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r3, r5, 1
	stw      r3, 8(r6)
	stb      r4, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r3, r5, 1
	stw      r3, 8(r6)
	stb      r4, 0(r5)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r3, r4, 1
	stw      r3, 8(r5)
	stb      r0, 0(r4)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x8007E26C
 * @note Size: 0x2E0
 */
void J3DPEBlockTexEdge::load()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	lwz      r0, 0xc(r4)
	addi     r3, r3, 0x1e
	cmplw    r3, r0
	ble      lbl_8007E2A0
	bl       GDOverflowed

lbl_8007E2A0:
	lwz      r7, __GDCurrentDL@sda21(r13)
	li       r5, 0x61
	li       r29, 0xf3
	li       r30, 0x1e
	lwz      r6, 8(r7)
	li       r31, 0xff
	li       r12, 0x80
	li       r4, 0xfe
	addi     r0, r6, 1
	li       r3, 0
	stw      r0, 8(r7)
	li       r11, 0x1f
	li       r10, 0xe3
	li       r9, 0x41
	stb      r5, 0(r6)
	li       r8, 0x31
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r29, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r30, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r31, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r12, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r5, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r4, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r3, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r11, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r10, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r5, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r9, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r3, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r8, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r3, 0(r6)
	lwz      r9, __GDCurrentDL@sda21(r13)
	li       r0, 0x40
	li       r10, 0x17
	li       r6, 0x43
	lwz      r8, 8(r9)
	addi     r7, r8, 1
	stw      r7, 8(r9)
	stb      r5, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r7, r8, 1
	stw      r7, 8(r9)
	stb      r0, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r7, r8, 1
	stw      r7, 8(r9)
	stb      r3, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r7, r8, 1
	stw      r7, 8(r9)
	stb      r3, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r7, r8, 1
	stw      r7, 8(r9)
	stb      r10, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r7, r8, 1
	stw      r7, 8(r9)
	stb      r5, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r7, r8, 1
	stw      r7, 8(r9)
	stb      r4, 0(r8)
	lwz      r8, __GDCurrentDL@sda21(r13)
	lwz      r7, 8(r8)
	addi     r4, r7, 1
	stw      r4, 8(r8)
	stb      r3, 0(r7)
	lwz      r8, __GDCurrentDL@sda21(r13)
	lwz      r7, 8(r8)
	addi     r4, r7, 1
	stw      r4, 8(r8)
	stb      r3, 0(r7)
	lwz      r8, __GDCurrentDL@sda21(r13)
	lwz      r7, 8(r8)
	addi     r4, r7, 1
	stw      r4, 8(r8)
	stb      r0, 0(r7)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r7)
	addi     r0, r4, 1
	stw      r0, 8(r7)
	stb      r5, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r3, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r3, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r3, 0(r4)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x8007E54C
 * @note Size: 0x2D4
 */
void J3DPEBlockXlu::load()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	lwz      r0, 0xc(r4)
	addi     r3, r3, 0x1e
	cmplw    r3, r0
	ble      lbl_8007E57C
	bl       GDOverflowed

lbl_8007E57C:
	lwz      r7, __GDCurrentDL@sda21(r13)
	li       r5, 0x61
	li       r30, 0xf3
	li       r31, 0x3f
	lwz      r6, 8(r7)
	li       r4, 0
	li       r3, 0xfe
	li       r12, 0x1f
	addi     r0, r6, 1
	li       r11, 0xe3
	stw      r0, 8(r7)
	li       r10, 0x41
	li       r9, 0x34
	li       r8, 0xa1
	stb      r5, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r30, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r31, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r4, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r4, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r5, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r3, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r4, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r12, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r11, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r5, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r10, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r0, r6, 1
	stw      r0, 8(r7)
	stb      r4, 0(r6)
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
	lwz      r9, __GDCurrentDL@sda21(r13)
	li       r0, 0x40
	li       r10, 7
	li       r7, 0x43
	lwz      r8, 8(r9)
	addi     r6, r8, 1
	stw      r6, 8(r9)
	stb      r5, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r6, r8, 1
	stw      r6, 8(r9)
	stb      r0, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r6, r8, 1
	stw      r6, 8(r9)
	stb      r4, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r6, r8, 1
	stw      r6, 8(r9)
	stb      r4, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r6, r8, 1
	stw      r6, 8(r9)
	stb      r10, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r6, r8, 1
	stw      r6, 8(r9)
	stb      r5, 0(r8)
	lwz      r9, __GDCurrentDL@sda21(r13)
	lwz      r8, 8(r9)
	addi     r6, r8, 1
	stw      r6, 8(r9)
	stb      r3, 0(r8)
	lwz      r8, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r8)
	addi     r3, r6, 1
	stw      r3, 8(r8)
	stb      r4, 0(r6)
	lwz      r8, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r8)
	addi     r3, r6, 1
	stw      r3, 8(r8)
	stb      r4, 0(r6)
	lwz      r8, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r8)
	addi     r3, r6, 1
	stw      r3, 8(r8)
	stb      r0, 0(r6)
	lwz      r8, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r8)
	addi     r3, r6, 1
	stw      r3, 8(r8)
	stb      r5, 0(r6)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r3, r5, 1
	stw      r3, 8(r6)
	stb      r7, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r3, r5, 1
	stw      r3, 8(r6)
	stb      r4, 0(r5)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r3, r5, 1
	stw      r3, 8(r6)
	stb      r4, 0(r5)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r3, r4, 1
	stw      r3, 8(r5)
	stb      r0, 0(r4)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x8007E820
 * @note Size: 0x49C
 */
void J3DPEBlockFogOff::load()
{
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
	addi     r3, r3, 0xf
	cmplw    r3, r0
	ble      lbl_8007ECF4
	bl       GDOverflowed

lbl_8007ECF4:
	lwz      r10, __GDCurrentDL@sda21(r13)
	li       r0, 0x61
	lbz      r4, 8(r31)
	li       r29, 0xfe
	lwz      r9, 8(r10)
	li       r30, 0
	lbz      r3, 0xf(r31)
	li       r12, 0x1f
	lbz      r7, 0xb(r31)
	addi     r8, r9, 1
	lbz      r6, 0xa(r31)
	li       r11, 0xe7
	lbz      r5, 9(r31)
	cmpwi    r4, 1
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
	beq      lbl_8007EDA4
	cmpwi    r4, 3
	bne      lbl_8007EDA8

lbl_8007EDA4:
	li       r30, 1

lbl_8007EDA8:
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
	beq      lbl_8007EE1C
	cmpwi    r4, 3
	bne      lbl_8007EE20

lbl_8007EE1C:
	li       r9, 1

lbl_8007EE20:
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
	beq      lbl_8007EE6C
	cmpwi    r4, 3
	bne      lbl_8007EE70

lbl_8007EE6C:
	li       r9, 1

lbl_8007EE70:
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
	beq      lbl_8007EEBC
	cmpwi    r4, 3
	bne      lbl_8007EEC0

lbl_8007EEBC:
	li       r9, 1

lbl_8007EEC0:
	or       r0, r0, r9
	lwz      r10, __GDCurrentDL@sda21(r13)
	or       r0, r3, r0
	lis      r3, j3dZModeTable@ha
	or       r0, r6, r0
	lwz      r4, 8(r10)
	or       r0, r5, r0
	addi     r9, r3, j3dZModeTable@l
	or       r3, r8, r0
	li       r6, 0x61
	addi     r0, r4, 1
	or       r3, r7, r3
	stw      r0, 8(r10)
	ori      r0, r3, 0
	stb      r0, 0(r4)
	lhz      r0, 0xc(r31)
	lwz      r5, __GDCurrentDL@sda21(r13)
	mulli    r0, r0, 3
	lwz      r4, 8(r5)
	add      r3, r9, r0
	lbzx     r9, r9, r0
	lbz      r8, 2(r3)
	addi     r0, r4, 1
	lbz      r7, 1(r3)
	rlwinm   r3, r8, 4, 0x14, 0x1b
	stw      r0, 8(r5)
	slwi     r0, r7, 1
	or       r0, r9, r0
	stb      r6, 0(r4)
	or       r0, r3, r0
	oris     r8, r0, 0x4000
	lwz      r4, __GDCurrentDL@sda21(r13)
	srwi     r7, r8, 0x18
	rlwinm   r6, r8, 0x10, 0x18, 0x1f
	rlwinm   r5, r8, 0x18, 0x18, 0x1f
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
	stb      r8, 0(r3)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r0, 0x24(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x8007EFB4
 * @note Size: 0x4E4
 */
void J3DPEBlockFull::load()
{
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
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r0, 0x3c(r3)
	lwz      r3, 0(r4)
	add      r0, r3, r0
	stw      r0, 8(r4)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	lwz      r0, 0xc(r4)
	addi     r3, r3, 0x37
	cmplw    r3, r0
	ble      lbl_8007F4E0
	bl       GDOverflowed

lbl_8007F4E0:
	lwz      r3, __GDCurrentDL@sda21(r13)
	addi     r4, r1, 8
	lwz      r0, 0x18(r30)
	lwz      r31, 8(r3)
	stw      r0, 8(r1)
	lbz      r3, 4(r30)
	lfs      f1, 8(r30)
	lfs      f2, 0xc(r30)
	lfs      f3, 0x10(r30)
	lfs      f4, 0x14(r30)
	bl       J3DGDSetFog__F10_GXFogTypeffff8_GXColor
	lbz      r3, 5(r30)
	addi     r5, r30, 0x1c
	lhz      r4, 6(r30)
	bl       J3DGDSetFogRangeAdj__FUcUsP14_GXFogAdjTable
	lwz      r4, __GDCurrentDL@sda21(r13)
	mr       r3, r31
	lwz      r0, 8(r4)
	subf     r4, r31, r0
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
 * @note Address: 0x8007F548
 * @note Size: 0x78
 */
void J3DPEBlockFull::diffFog()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	lwz      r0, 0xc(r4)
	addi     r3, r3, 0x37
	cmplw    r3, r0
	ble      lbl_8007F578
	bl       GDOverflowed

lbl_8007F578:
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
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x8007F5C0
 * @note Size: 0x2F8
 */
void J3DPEBlockFull::diffBlend()
{
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
	addi     r3, r3, 0xf
	cmplw    r3, r0
	ble      lbl_8007F5F8
	bl       GDOverflowed

lbl_8007F5F8:
	lwz      r10, __GDCurrentDL@sda21(r13)
	li       r0, 0x61
	lbz      r4, 0x34(r31)
	li       r29, 0xfe
	lwz      r9, 8(r10)
	li       r30, 0
	lbz      r3, 0x3b(r31)
	li       r12, 0x1f
	lbz      r7, 0x37(r31)
	addi     r8, r9, 1
	lbz      r6, 0x36(r31)
	li       r11, 0xe7
	lbz      r5, 0x35(r31)
	cmpwi    r4, 1
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
	beq      lbl_8007F6A8
	cmpwi    r4, 3
	bne      lbl_8007F6AC

lbl_8007F6A8:
	li       r30, 1

lbl_8007F6AC:
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
	beq      lbl_8007F720
	cmpwi    r4, 3
	bne      lbl_8007F724

lbl_8007F720:
	li       r9, 1

lbl_8007F724:
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
	beq      lbl_8007F770
	cmpwi    r4, 3
	bne      lbl_8007F774

lbl_8007F770:
	li       r9, 1

lbl_8007F774:
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
	beq      lbl_8007F7C0
	cmpwi    r4, 3
	bne      lbl_8007F7C4

lbl_8007F7C0:
	li       r9, 1

lbl_8007F7C4:
	or       r0, r0, r9
	lwz      r10, __GDCurrentDL@sda21(r13)
	or       r0, r3, r0
	lis      r3, j3dZModeTable@ha
	or       r0, r6, r0
	lwz      r4, 8(r10)
	or       r0, r5, r0
	addi     r9, r3, j3dZModeTable@l
	or       r3, r8, r0
	li       r6, 0x61
	addi     r0, r4, 1
	or       r3, r7, r3
	stw      r0, 8(r10)
	ori      r0, r3, 0
	stb      r0, 0(r4)
	lhz      r0, 0x38(r31)
	lwz      r5, __GDCurrentDL@sda21(r13)
	mulli    r0, r0, 3
	lwz      r4, 8(r5)
	add      r3, r9, r0
	lbzx     r9, r9, r0
	lbz      r8, 2(r3)
	addi     r0, r4, 1
	lbz      r7, 1(r3)
	rlwinm   r3, r8, 4, 0x14, 0x1b
	stw      r0, 8(r5)
	slwi     r0, r7, 1
	or       r0, r9, r0
	stb      r6, 0(r4)
	or       r0, r3, r0
	oris     r8, r0, 0x4000
	lwz      r4, __GDCurrentDL@sda21(r13)
	srwi     r7, r8, 0x18
	rlwinm   r6, r8, 0x10, 0x18, 0x1f
	rlwinm   r5, r8, 0x18, 0x18, 0x1f
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
	stb      r8, 0(r3)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r0, 0x24(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x8007F8B8
 * @note Size: 0x68
 */
void J3DPEBlockFull::diff(u32 p1)
{
	if ((p1 & 0x10000000) != 0) {
		diffFog();
	}
	if ((p1 & 0x20000000) != 0) {
		diffBlend();
	}
}

/**
 * @note Address: 0x8007F920
 * @note Size: 0xE4
 */
void J3DColorBlockLightOff::reset(J3DColorBlock*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	stb      r3, 0xc(r28)
	mr       r31, r28
	li       r30, 0

lbl_8007F964:
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0(r3)
	addi     r30, r30, 1
	cmplwi   r30, 2
	stb      r0, 4(r31)
	lbz      r0, 1(r3)
	stb      r0, 5(r31)
	lbz      r0, 2(r3)
	stb      r0, 6(r31)
	lbz      r0, 3(r3)
	stb      r0, 7(r31)
	addi     r31, r31, 4
	blt      lbl_8007F964
	li       r30, 0
	mr       r31, r28

lbl_8007F9B4:
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 0x5c(r12)
	mtctr    r12
	bctrl
	lhz      r0, 0(r3)
	addi     r30, r30, 1
	cmplwi   r30, 4
	sth      r0, 0xe(r31)
	addi     r31, r31, 2
	blt      lbl_8007F9B4
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
 * @note Address: 0x8007FA04
 * @note Size: 0x154
 */
void J3DColorBlockAmbientOn::reset(J3DColorBlock*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	stb      r3, 0xc(r28)
	mr       r31, r28
	li       r30, 0

lbl_8007FA48:
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0(r3)
	addi     r30, r30, 1
	cmplwi   r30, 2
	stb      r0, 4(r31)
	lbz      r0, 1(r3)
	stb      r0, 5(r31)
	lbz      r0, 2(r3)
	stb      r0, 6(r31)
	lbz      r0, 3(r3)
	stb      r0, 7(r31)
	addi     r31, r31, 4
	blt      lbl_8007FA48
	li       r30, 0
	mr       r31, r28

lbl_8007FA98:
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 0x5c(r12)
	mtctr    r12
	bctrl
	lhz      r0, 0(r3)
	addi     r30, r30, 1
	cmplwi   r30, 4
	sth      r0, 0xe(r31)
	addi     r31, r31, 2
	blt      lbl_8007FA98
	li       r30, 0
	mr       r31, r28

lbl_8007FAD0:
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_8007FB28
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0(r3)
	stb      r0, 0x20(r31)
	lbz      r0, 1(r3)
	stb      r0, 0x21(r31)
	lbz      r0, 2(r3)
	stb      r0, 0x22(r31)
	lbz      r0, 3(r3)
	stb      r0, 0x23(r31)

lbl_8007FB28:
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmplwi   r30, 2
	blt      lbl_8007FAD0
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
 * @note Address: 0x8007FB58
 * @note Size: 0x154
 */
void J3DColorBlockLightOn::reset(J3DColorBlock*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	stb      r3, 0x14(r28)
	mr       r31, r28
	li       r30, 0

lbl_8007FB9C:
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0(r3)
	addi     r30, r30, 1
	cmplwi   r30, 2
	stb      r0, 4(r31)
	lbz      r0, 1(r3)
	stb      r0, 5(r31)
	lbz      r0, 2(r3)
	stb      r0, 6(r31)
	lbz      r0, 3(r3)
	stb      r0, 7(r31)
	addi     r31, r31, 4
	blt      lbl_8007FB9C
	li       r30, 0
	mr       r31, r28

lbl_8007FBEC:
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 0x5c(r12)
	mtctr    r12
	bctrl
	lhz      r0, 0(r3)
	addi     r30, r30, 1
	cmplwi   r30, 4
	sth      r0, 0x16(r31)
	addi     r31, r31, 2
	blt      lbl_8007FBEC
	li       r30, 0
	mr       r31, r28

lbl_8007FC24:
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_8007FC7C
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0(r3)
	stb      r0, 0xc(r31)
	lbz      r0, 1(r3)
	stb      r0, 0xd(r31)
	lbz      r0, 2(r3)
	stb      r0, 0xe(r31)
	lbz      r0, 3(r3)
	stb      r0, 0xf(r31)

lbl_8007FC7C:
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmplwi   r30, 2
	blt      lbl_8007FC24
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
 * @note Address: 0x8007FCAC
 * @note Size: 0x11C
 */
void J3DTexGenBlockPatched::reset(J3DTexGenBlock*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r28)
	mr       r31, r28
	li       r30, 0

lbl_8007FCF0:
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0(r3)
	addi     r30, r30, 1
	cmplwi   r30, 8
	stb      r0, 8(r31)
	lbz      r0, 1(r3)
	stb      r0, 9(r31)
	lbz      r0, 2(r3)
	stb      r0, 0xa(r31)
	addi     r31, r31, 6
	blt      lbl_8007FCF0
	li       r30, 0
	mr       r31, r28

lbl_8007FD38:
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_8007FD98
	lwz      r0, 0x38(r31)
	cmplwi   r0, 0
	beq      lbl_8007FD98
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x38(r31)
	li       r5, 0x94
	bl       memcpy
	lwz      r3, 0x38(r31)
	li       r4, 0x94
	bl       DCStoreRange

lbl_8007FD98:
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmplwi   r30, 8
	blt      lbl_8007FD38
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
 * @note Address: 0x8007FDC8
 * @note Size: 0x150
 */
void J3DTexGenBlock4::reset(J3DTexGenBlock*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r28)
	mr       r31, r28
	li       r30, 0

lbl_8007FE0C:
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0(r3)
	addi     r30, r30, 1
	cmplwi   r30, 4
	stb      r0, 8(r31)
	lbz      r0, 1(r3)
	stb      r0, 9(r31)
	lbz      r0, 2(r3)
	stb      r0, 0xa(r31)
	addi     r31, r31, 6
	blt      lbl_8007FE0C
	li       r30, 0
	mr       r31, r28

lbl_8007FE54:
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_8007FEB4
	lwz      r0, 0x38(r31)
	cmplwi   r0, 0
	beq      lbl_8007FEB4
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x38(r31)
	li       r5, 0x94
	bl       memcpy
	lwz      r3, 0x38(r31)
	li       r4, 0x94
	bl       DCStoreRange

lbl_8007FEB4:
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmplwi   r30, 4
	blt      lbl_8007FE54
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x5c(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0(r3)
	stb      r0, 0x5c(r28)
	lfs      f0, 4(r3)
	stfs     f0, 0x60(r28)
	lfs      f0, 8(r3)
	stfs     f0, 0x64(r28)
	lfs      f0, 0xc(r3)
	stfs     f0, 0x68(r28)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x8007FF18
 * @note Size: 0x150
 */
void J3DTexGenBlockBasic::reset(J3DTexGenBlock*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r28)
	mr       r31, r28
	li       r30, 0

lbl_8007FF5C:
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0(r3)
	addi     r30, r30, 1
	cmplwi   r30, 8
	stb      r0, 8(r31)
	lbz      r0, 1(r3)
	stb      r0, 9(r31)
	lbz      r0, 2(r3)
	stb      r0, 0xa(r31)
	addi     r31, r31, 6
	blt      lbl_8007FF5C
	li       r30, 0
	mr       r31, r28

lbl_8007FFA4:
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_80080004
	lwz      r0, 0x38(r31)
	cmplwi   r0, 0
	beq      lbl_80080004
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x38(r31)
	li       r5, 0x94
	bl       memcpy
	lwz      r3, 0x38(r31)
	li       r4, 0x94
	bl       DCStoreRange

lbl_80080004:
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmplwi   r30, 8
	blt      lbl_8007FFA4
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x5c(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0(r3)
	stb      r0, 0x5c(r28)
	lfs      f0, 4(r3)
	stfs     f0, 0x60(r28)
	lfs      f0, 8(r3)
	stfs     f0, 0x64(r28)
	lfs      f0, 0xc(r3)
	stfs     f0, 0x68(r28)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
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
void J3DTevBlock1::reset(J3DTevBlock*)
{

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 0
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	sth      r3, 8(r30)
	mr       r3, r31
	li       r4, 0
	lwz      r12, 0(r31)
	lwz      r12, 0x5c(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0(r3)
	li       r4, 0
	stb      r0, 0xa(r30)
	lbz      r0, 1(r3)
	stb      r0, 0xb(r30)
	lbz      r0, 2(r3)
	mr       r3, r31
	stb      r0, 0xc(r30)
	lwz      r12, 0(r31)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	lbz      r0, 1(r3)
	li       r4, 0
	stb      r0, 0xf(r30)
	lbz      r0, 2(r3)
	stb      r0, 0x10(r30)
	lbz      r0, 3(r3)
	stb      r0, 0x11(r30)
	lbz      r0, 5(r3)
	stb      r0, 0x13(r30)
	lbz      r0, 6(r3)
	stb      r0, 0x14(r30)
	lbz      r0, 7(r3)
	mr       r3, r31
	stb      r0, 0x15(r30)
	lwz      r12, 0(r31)
	lwz      r12, 0xc4(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0(r3)
	stw      r0, 0x18(r30)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
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
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	stb      r3, 4(r28)
	mr       r31, r28
	li       r30, 0

lbl_80080DB0:
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0(r3)
	addi     r30, r30, 1
	cmplwi   r30, 4
	stb      r0, 5(r31)
	lbz      r0, 1(r3)
	stb      r0, 6(r31)
	addi     r31, r31, 4
	blt      lbl_80080DB0
	li       r30, 0
	mr       r31, r28

lbl_80080DF0:
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0(r3)
	addi     r30, r30, 1
	cmplwi   r30, 3
	stfs     f0, 0x18(r31)
	lfs      f0, 4(r3)
	stfs     f0, 0x1c(r31)
	lfs      f0, 8(r3)
	stfs     f0, 0x20(r31)
	lfs      f0, 0xc(r3)
	stfs     f0, 0x24(r31)
	lfs      f0, 0x10(r3)
	stfs     f0, 0x28(r31)
	lfs      f0, 0x14(r3)
	stfs     f0, 0x2c(r31)
	lbz      r0, 0x18(r3)
	stb      r0, 0x30(r31)
	addi     r31, r31, 0x1c
	blt      lbl_80080DF0
	li       r30, 0
	mr       r31, r28

lbl_80080E58:
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0(r3)
	addi     r30, r30, 1
	cmplwi   r30, 4
	stb      r0, 0x6c(r31)
	lbz      r0, 1(r3)
	stb      r0, 0x6d(r31)
	addi     r31, r31, 4
	blt      lbl_80080E58
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
 * @note Address: 0x80080EB0
 * @note Size: 0x100
 */
void J3DPEBlockFogOff::reset(J3DPEBlock*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x5045464C@ha
	addi     r0, r4, 0x5045464C@l
	cmpw     r3, r0
	beq      lbl_80080F04
	bge      lbl_80080F98
	addi     r0, r4, 0x4647
	cmpw     r3, r0
	beq      lbl_80080F04
	b        lbl_80080F98

lbl_80080F04:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lhz      r0, 0(r3)
	sth      r0, 4(r30)
	lbz      r0, 2(r3)
	stb      r0, 6(r30)
	lbz      r0, 3(r3)
	mr       r3, r31
	stb      r0, 7(r30)
	lwz      r12, 0(r31)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0(r3)
	stb      r0, 8(r30)
	lbz      r0, 1(r3)
	stb      r0, 9(r30)
	lbz      r0, 2(r3)
	stb      r0, 0xa(r30)
	lbz      r0, 3(r3)
	mr       r3, r31
	stb      r0, 0xb(r30)
	lwz      r12, 0(r31)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	lhz      r0, 0(r3)
	mr       r3, r31
	sth      r0, 0xc(r30)
	lwz      r12, 0(r31)
	lwz      r12, 0x60(r12)
	mtctr    r12
	bctrl
	stb      r3, 0xe(r30)

lbl_80080F98:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x80080FB0
 * @note Size: 0x1D8
 */
void J3DPEBlockFull::reset(J3DPEBlock*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_800810A4
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0(r3)
	stb      r0, 4(r30)
	lbz      r0, 1(r3)
	stb      r0, 5(r30)
	lhz      r0, 2(r3)
	sth      r0, 6(r30)
	lfs      f0, 4(r3)
	stfs     f0, 8(r30)
	lfs      f0, 8(r3)
	stfs     f0, 0xc(r30)
	lfs      f0, 0xc(r3)
	stfs     f0, 0x10(r30)
	lfs      f0, 0x10(r3)
	stfs     f0, 0x14(r30)
	lbz      r0, 0x14(r3)
	stb      r0, 0x18(r30)
	lbz      r0, 0x15(r3)
	stb      r0, 0x19(r30)
	lbz      r0, 0x16(r3)
	stb      r0, 0x1a(r30)
	lbz      r0, 0x17(r3)
	stb      r0, 0x1b(r30)
	lhz      r0, 0x18(r3)
	sth      r0, 0x1c(r30)
	lhz      r0, 0x1a(r3)
	sth      r0, 0x1e(r30)
	lhz      r0, 0x1c(r3)
	sth      r0, 0x20(r30)
	lhz      r0, 0x1e(r3)
	sth      r0, 0x22(r30)
	lhz      r0, 0x20(r3)
	sth      r0, 0x24(r30)
	lhz      r0, 0x22(r3)
	sth      r0, 0x26(r30)
	lhz      r0, 0x24(r3)
	sth      r0, 0x28(r30)
	lhz      r0, 0x26(r3)
	sth      r0, 0x2a(r30)
	lhz      r0, 0x28(r3)
	sth      r0, 0x2c(r30)
	lhz      r0, 0x2a(r3)
	sth      r0, 0x2e(r30)

lbl_800810A4:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x5045464C@ha
	addi     r0, r4, 0x5045464C@l
	cmpw     r3, r0
	beq      lbl_800810DC
	bge      lbl_80081170
	addi     r0, r4, 0x4647
	cmpw     r3, r0
	beq      lbl_800810DC
	b        lbl_80081170

lbl_800810DC:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lhz      r0, 0(r3)
	sth      r0, 0x30(r30)
	lbz      r0, 2(r3)
	stb      r0, 0x32(r30)
	lbz      r0, 3(r3)
	mr       r3, r31
	stb      r0, 0x33(r30)
	lwz      r12, 0(r31)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0(r3)
	stb      r0, 0x34(r30)
	lbz      r0, 1(r3)
	stb      r0, 0x35(r30)
	lbz      r0, 2(r3)
	stb      r0, 0x36(r30)
	lbz      r0, 3(r3)
	mr       r3, r31
	stb      r0, 0x37(r30)
	lwz      r12, 0(r31)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	lhz      r0, 0(r3)
	mr       r3, r31
	sth      r0, 0x38(r30)
	lwz      r12, 0(r31)
	lwz      r12, 0x60(r12)
	mtctr    r12
	bctrl
	stb      r3, 0x3a(r30)

lbl_80081170:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x80081188
 * @note Size: 0x1B0
 */
void J3DTexGenBlockPatched::calc(const f32 (*)[4])
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	lis      r5, j3dSys@ha
	stw      r0, 0x54(r1)
	stmw     r27, 0x3c(r1)
	mr       r27, r4
	li       r28, 0
	mr       r30, r3
	mr       r29, r3
	addi     r31, r5, j3dSys@l

lbl_800811B0:
	lwz      r3, 0x38(r30)
	cmplwi   r3, 0
	beq      lbl_80081310
	lbz      r3, 1(r3)
	lbz      r0, 0xa(r29)
	clrlwi   r4, r3, 0x1a
	cmplwi   r4, 0xb
	sth      r0, 0xc(r29)
	bgt      lbl_80081300
	lis      r3, lbl_804A20F0@ha
	slwi     r0, r4, 2
	addi     r3, r3, lbl_804A20F0@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_800811EC

lbl_800811EC:
	lwz      r0, 0x34(r31)
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	bne      lbl_80081210
	lis      r3, j3dSys@ha
	mr       r4, r27
	addi     r3, r3, j3dSys@l
	addi     r5, r1, 8
	bl       PSMTXConcat
	b        lbl_80081220

lbl_80081210:
	lis      r3, j3dSys@ha
	addi     r4, r1, 8
	addi     r3, r3, j3dSys@l
	bl       PSMTXCopy

lbl_80081220:
	lfs      f0, lbl_80516ADC@sda21(r2)
	addi     r4, r1, 8
	stfs     f0, 0x14(r1)
	stfs     f0, 0x24(r1)
	stfs     f0, 0x34(r1)
	lwz      r3, 0x38(r30)
	bl       calc__9J3DTexMtxFPA4_Cf
	b        lbl_80081310
	.global  lbl_80081240

lbl_80081240:
	lwz      r0, 0x34(r31)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	bne      lbl_8008125C
	lwz      r3, 0x38(r30)
	mr       r4, r27
	bl       calc__9J3DTexMtxFPA4_Cf
	b        lbl_80081310

lbl_8008125C:
	lis      r4, j3dDefaultMtx@ha
	lwz      r3, 0x38(r30)
	addi     r4, r4, j3dDefaultMtx@l
	bl       calc__9J3DTexMtxFPA4_Cf
	b        lbl_80081310
	.global  lbl_80081270

lbl_80081270:
	lwz      r0, 0x34(r31)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	bne      lbl_800812A0
	lis      r3, j3dSys@ha
	mr       r4, r27
	addi     r3, r3, j3dSys@l
	addi     r5, r1, 8
	bl       PSMTXConcat
	lwz      r3, 0x38(r30)
	addi     r4, r1, 8
	bl       calc__9J3DTexMtxFPA4_Cf
	b        lbl_80081310

lbl_800812A0:
	lis      r4, j3dSys@ha
	lwz      r3, 0x38(r30)
	addi     r4, r4, j3dSys@l
	bl       calc__9J3DTexMtxFPA4_Cf
	b        lbl_80081310
	.global  lbl_800812B4

lbl_800812B4:
	lwz      r0, 0x34(r31)
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	bne      lbl_800812EC
	mr       r3, r27
	addi     r4, r1, 8
	bl       PSMTXCopy
	lfs      f0, lbl_80516ADC@sda21(r2)
	addi     r4, r1, 8
	stfs     f0, 0x14(r1)
	stfs     f0, 0x24(r1)
	stfs     f0, 0x34(r1)
	lwz      r3, 0x38(r30)
	bl       calc__9J3DTexMtxFPA4_Cf
	b        lbl_80081310

lbl_800812EC:
	lis      r4, j3dDefaultMtx@ha
	lwz      r3, 0x38(r30)
	addi     r4, r4, j3dDefaultMtx@l
	bl       calc__9J3DTexMtxFPA4_Cf
	b        lbl_80081310
	.global  lbl_80081300

lbl_80081300:
	lis      r4, j3dDefaultMtx@ha
	lwz      r3, 0x38(r30)
	addi     r4, r4, j3dDefaultMtx@l
	bl       calc__9J3DTexMtxFPA4_Cf

lbl_80081310:
	addi     r28, r28, 1
	addi     r29, r29, 6
	cmpwi    r28, 8
	addi     r30, r30, 4
	blt      lbl_800811B0
	lmw      r27, 0x3c(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/**
 * @note Address: 0x80081338
 * @note Size: 0x140
 */
void J3DTexGenBlockPatched::calcWithoutViewMtx(const f32 (*)[4])
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	lis      r5, j3dSys@ha
	stw      r0, 0x54(r1)
	stmw     r27, 0x3c(r1)
	mr       r27, r4
	li       r28, 0
	mr       r30, r3
	mr       r29, r3
	addi     r31, r5, j3dSys@l

lbl_80081360:
	lwz      r3, 0x38(r30)
	cmplwi   r3, 0
	beq      lbl_80081450
	lbz      r3, 1(r3)
	lbz      r0, 0xa(r29)
	clrlwi   r4, r3, 0x1a
	cmplwi   r4, 0xb
	sth      r0, 0xc(r29)
	bgt      lbl_80081440
	lis      r3, lbl_804A2120@ha
	slwi     r0, r4, 2
	addi     r3, r3, lbl_804A2120@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_8008139C

lbl_8008139C:
	lis      r4, j3dDefaultMtx@ha
	lwz      r3, 0x38(r30)
	addi     r4, r4, j3dDefaultMtx@l
	bl       calc__9J3DTexMtxFPA4_Cf
	b        lbl_80081450
	.global  lbl_800813B0

lbl_800813B0:
	lwz      r0, 0x34(r31)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	bne      lbl_800813CC
	lwz      r3, 0x38(r30)
	mr       r4, r27
	bl       calc__9J3DTexMtxFPA4_Cf
	b        lbl_80081450

lbl_800813CC:
	lis      r4, j3dDefaultMtx@ha
	lwz      r3, 0x38(r30)
	addi     r4, r4, j3dDefaultMtx@l
	bl       calc__9J3DTexMtxFPA4_Cf
	b        lbl_80081450
	.global  lbl_800813E0

lbl_800813E0:
	lis      r4, j3dDefaultMtx@ha
	lwz      r3, 0x38(r30)
	addi     r4, r4, j3dDefaultMtx@l
	bl       calc__9J3DTexMtxFPA4_Cf
	b        lbl_80081450
	.global  lbl_800813F4

lbl_800813F4:
	lwz      r0, 0x34(r31)
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	bne      lbl_8008142C
	mr       r3, r27
	addi     r4, r1, 8
	bl       PSMTXCopy
	lfs      f0, lbl_80516ADC@sda21(r2)
	addi     r4, r1, 8
	stfs     f0, 0x14(r1)
	stfs     f0, 0x24(r1)
	stfs     f0, 0x34(r1)
	lwz      r3, 0x38(r30)
	bl       calc__9J3DTexMtxFPA4_Cf
	b        lbl_80081450

lbl_8008142C:
	lis      r4, j3dDefaultMtx@ha
	lwz      r3, 0x38(r30)
	addi     r4, r4, j3dDefaultMtx@l
	bl       calc__9J3DTexMtxFPA4_Cf
	b        lbl_80081450
	.global  lbl_80081440

lbl_80081440:
	lis      r4, j3dDefaultMtx@ha
	lwz      r3, 0x38(r30)
	addi     r4, r4, j3dDefaultMtx@l
	bl       calc__9J3DTexMtxFPA4_Cf

lbl_80081450:
	addi     r28, r28, 1
	addi     r29, r29, 6
	cmpwi    r28, 8
	addi     r30, r30, 4
	blt      lbl_80081360
	lmw      r27, 0x3c(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/**
 * @note Address: 0x80081478
 * @note Size: 0x140
 */
void J3DTexGenBlockPatched::calcPostTexMtx(const f32 (*)[4])
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stw      r31, 0x7c(r1)
	mr       r31, r3
	stw      r30, 0x78(r1)
	mr       r30, r3
	stw      r29, 0x74(r1)
	li       r29, 0

lbl_8008149C:
	lwz      r3, 0x38(r31)
	cmplwi   r3, 0
	beq      lbl_80081588
	lbz      r3, 1(r3)
	lbz      r0, 0xa(r30)
	clrlwi   r4, r3, 0x1a
	cmplwi   r4, 0xb
	sth      r0, 0xc(r30)
	bgt      lbl_80081570
	lis      r3, lbl_804A2150@ha
	slwi     r0, r4, 2
	addi     r3, r3, lbl_804A2150@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_800814D8

lbl_800814D8:
	li       r0, 0x1e
	lis      r3, j3dDefaultMtx@ha
	sth      r0, 0xc(r30)
	addi     r4, r3, j3dDefaultMtx@l
	lwz      r3, 0x38(r31)
	bl       calcPostTexMtx__9J3DTexMtxFPA4_Cf
	b        lbl_80081588
	.global  lbl_800814F4

lbl_800814F4:
	lis      r3, j3dSys@ha
	addi     r4, r1, 0x38
	addi     r3, r3, j3dSys@l
	bl       PSMTXInverse
	li       r0, 0
	addi     r4, r1, 0x38
	sth      r0, 0xc(r30)
	lwz      r3, 0x38(r31)
	bl       calcPostTexMtx__9J3DTexMtxFPA4_Cf
	b        lbl_80081588
	.global  lbl_8008151C

lbl_8008151C:
	li       r0, 0
	lis      r3, j3dDefaultMtx@ha
	sth      r0, 0xc(r30)
	addi     r4, r3, j3dDefaultMtx@l
	lwz      r3, 0x38(r31)
	bl       calcPostTexMtx__9J3DTexMtxFPA4_Cf
	b        lbl_80081588
	.global  lbl_80081538

lbl_80081538:
	lis      r3, j3dSys@ha
	addi     r4, r1, 8
	addi     r3, r3, j3dSys@l
	bl       PSMTXInverse
	lfs      f0, lbl_80516ADC@sda21(r2)
	li       r0, 0x1e
	addi     r4, r1, 8
	stfs     f0, 0x14(r1)
	stfs     f0, 0x24(r1)
	stfs     f0, 0x34(r1)
	sth      r0, 0xc(r30)
	lwz      r3, 0x38(r31)
	bl       calcPostTexMtx__9J3DTexMtxFPA4_Cf
	b        lbl_80081588
	.global  lbl_80081570

lbl_80081570:
	li       r0, 0x3c
	lis      r3, j3dDefaultMtx@ha
	sth      r0, 0xc(r30)
	addi     r4, r3, j3dDefaultMtx@l
	lwz      r3, 0x38(r31)
	bl       calcPostTexMtx__9J3DTexMtxFPA4_Cf

lbl_80081588:
	addi     r29, r29, 1
	addi     r30, r30, 6
	cmpwi    r29, 8
	addi     r31, r31, 4
	blt      lbl_8008149C
	lwz      r0, 0x84(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	lwz      r29, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/**
 * @note Address: 0x800815B8
 * @note Size: 0x118
 */
void J3DTexGenBlockPatched::calcPostTexMtxWithoutViewMtx(const f32 (*)[4])
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	li       r29, 0

lbl_800815DC:
	lwz      r3, 0x38(r31)
	cmplwi   r3, 0
	beq      lbl_800816A0
	lbz      r3, 1(r3)
	lbz      r0, 0xa(r30)
	clrlwi   r4, r3, 0x1a
	cmplwi   r4, 0xb
	sth      r0, 0xc(r30)
	bgt      lbl_80081688
	lis      r3, lbl_804A2180@ha
	slwi     r0, r4, 2
	addi     r3, r3, lbl_804A2180@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_80081618

lbl_80081618:
	li       r0, 0x1e
	lis      r3, j3dDefaultMtx@ha
	sth      r0, 0xc(r30)
	addi     r4, r3, j3dDefaultMtx@l
	lwz      r3, 0x38(r31)
	bl       calcPostTexMtx__9J3DTexMtxFPA4_Cf
	b        lbl_800816A0
	.global  lbl_80081634

lbl_80081634:
	li       r0, 0
	lis      r3, j3dDefaultMtx@ha
	sth      r0, 0xc(r30)
	addi     r4, r3, j3dDefaultMtx@l
	lwz      r3, 0x38(r31)
	bl       calcPostTexMtx__9J3DTexMtxFPA4_Cf
	b        lbl_800816A0
	.global  lbl_80081650

lbl_80081650:
	li       r0, 0
	lis      r3, j3dDefaultMtx@ha
	sth      r0, 0xc(r30)
	addi     r4, r3, j3dDefaultMtx@l
	lwz      r3, 0x38(r31)
	bl       calcPostTexMtx__9J3DTexMtxFPA4_Cf
	b        lbl_800816A0
	.global  lbl_8008166C

lbl_8008166C:
	li       r0, 0x1e
	lis      r3, j3dDefaultMtx@ha
	sth      r0, 0xc(r30)
	addi     r4, r3, j3dDefaultMtx@l
	lwz      r3, 0x38(r31)
	bl       calcPostTexMtx__9J3DTexMtxFPA4_Cf
	b        lbl_800816A0
	.global  lbl_80081688

lbl_80081688:
	li       r0, 0x3c
	lis      r3, j3dDefaultMtx@ha
	sth      r0, 0xc(r30)
	addi     r4, r3, j3dDefaultMtx@l
	lwz      r3, 0x38(r31)
	bl       calcPostTexMtx__9J3DTexMtxFPA4_Cf

lbl_800816A0:
	addi     r29, r29, 1
	addi     r30, r30, 6
	cmpwi    r29, 8
	addi     r31, r31, 4
	blt      lbl_800815DC
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
 * @note Address: 0x800816D0
 * @note Size: 0xC
 */
// void J3DPEBlockFull::getType()
// {
// 	/*
// 	lis      r3, 0x5045464C@ha
// 	addi     r3, r3, 0x5045464C@l
// 	blr
// 	*/
// }

/**
 * @note Address: 0x800816DC
 * @note Size: 0xAC
 * setFog__14J3DPEBlockFullFP6J3DFog
 */
void J3DPEBlockFull::setFog(J3DFog* fog) { mFog = *fog; }

/**
 * @note Address: 0x80081788
 * @note Size: 0xAC
 * setFog__14J3DPEBlockFullF6J3DFog
 */
void J3DPEBlockFull::setFog(J3DFog fog) { mFog = fog; }

/**
 * @note Address: 0x80081834
 * @note Size: 0x8
 * getFog__14J3DPEBlockFullFv
 */
J3DFog* J3DPEBlockFull::getFog() { return &mFog; }

/**
 * @note Address: 0x8008183C
 * @note Size: 0x1C
 * setAlphaComp__14J3DPEBlockFullFRC12J3DAlphaComp
 */
void J3DPEBlockFull::setAlphaComp(const J3DAlphaComp& alphaComp) { mAlphaComp = alphaComp; }

/**
 * @note Address: 0x80081858
 * @note Size: 0x1C
 * setAlphaComp__14J3DPEBlockFullFPC12J3DAlphaComp
 */
void J3DPEBlockFull::setAlphaComp(const J3DAlphaComp* alphaComp) { mAlphaComp = *alphaComp; }

/**
 * @note Address: 0x80081874
 * @note Size: 0x8
 * getAlphaComp__14J3DPEBlockFullFv
 */
J3DAlphaComp* J3DPEBlockFull::getAlphaComp() { return &mAlphaComp; }

/**
 * @note Address: 0x8008187C
 * @note Size: 0x24
 * setBlend__14J3DPEBlockFullFRC8J3DBlend
 */
void J3DPEBlockFull::setBlend(const J3DBlend& blend) { mBlend = blend; }

/**
 * @note Address: 0x800818A0
 * @note Size: 0x24
 * setBlend__14J3DPEBlockFullFPC8J3DBlend
 */
void J3DPEBlockFull::setBlend(const J3DBlend* blend) { mBlend = *blend; }

/**
 * @note Address: 0x800818C4
 * @note Size: 0x8
 * getBlend__14J3DPEBlockFullFv
 */
J3DBlend* J3DPEBlockFull::getBlend() { return &mBlend; }

/**
 * @note Address: 0x800818CC
 * @note Size: 0xC
 */
void J3DPEBlockFull::setZMode(J3DZMode zMode)
{
	/*
	lhz      r0, 0(r4)
	sth      r0, 0x38(r3)
	blr
	*/
}

/**
 * @note Address: 0x800818D8
 * @note Size: 0xC
 */
void J3DPEBlockFull::setZMode(const J3DZMode* zMode)
{
	/*
	lhz      r0, 0(r4)
	sth      r0, 0x38(r3)
	blr
	*/
}

/**
 * @note Address: 0x800818E4
 * @note Size: 0x8
 */
J3DZMode* J3DPEBlockFull::getZMode() { return &mZMode; }

/**
 * @note Address: 0x800818EC
 * @note Size: 0x8
 */
void J3DPEBlockFull::setZCompLoc(u8 zCompLoc) { _3A = zCompLoc; }

/**
 * @note Address: 0x800818F4
 * @note Size: 0xC
 */
void J3DPEBlockFull::setZCompLoc(const u8* zCompLoc) { _3A = *zCompLoc; }

/**
 * @note Address: 0x80081900
 * @note Size: 0x8
 */
u8 J3DPEBlockFull::getZCompLoc() const { return _3A; }

/**
 * @note Address: 0x80081908
 * @note Size: 0x8
 */
// void J3DPEBlockFull::setDither(u8 a1)
// {
// 	// Generated from stb r4, 0x3B(r3)
// 	_3B = a1;
// }

/**
 * @note Address: 0x80081910
 * @note Size: 0xC
 */
// void J3DPEBlockFull::setDither(const u8*)
// {
// 	/*
// 	lbz      r0, 0(r4)
// 	stb      r0, 0x3b(r3)
// 	blr
// 	*/
// }

/**
 * @note Address: 0x8008191C
 * @note Size: 0x8
 */
// void J3DPEBlockFull::getDither() const
// {
// 	/*
// 	lbz      r3, 0x3b(r3)
// 	blr
// 	*/
// }

/**
 * @note Address: 0x80081924
 * @note Size: 0x8
 */
// void J3DPEBlockFull::getFogOffset() const
// {
// 	/*
// 	lwz      r3, 0x3c(r3)
// 	blr
// 	*/
// }

/**
 * @note Address: 0x8008192C
 * @note Size: 0x8
 */
// void J3DPEBlockFull::setFogOffset(u32 a1)
// {
// 	// Generated from stw r4, 0x3C(r3)
// 	_3C = a1;
// }

/**
 * @note Address: 0x80081934
 * @note Size: 0x5C
 * __dt__14J3DPEBlockFullFv
 */
// J3DPEBlockFull::~J3DPEBlockFull()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	or.      r31, r3, r3
// 	beq      lbl_80081978
// 	lis      r3, __vt__14J3DPEBlockFull@ha
// 	addi     r0, r3, __vt__14J3DPEBlockFull@l
// 	stw      r0, 0(r31)
// 	beq      lbl_80081968
// 	lis      r3, __vt__10J3DPEBlock@ha
// 	addi     r0, r3, __vt__10J3DPEBlock@l
// 	stw      r0, 0(r31)

// lbl_80081968:
// 	extsh.   r0, r4
// 	ble      lbl_80081978
// 	mr       r3, r31
// 	bl       __dl__FPv

// lbl_80081978:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r31
// 	lwz      r31, 0xc(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/**
 * @note Address: 0x80081990
 * @note Size: 0x34
 */
void J3DPEBlockFogOff::diff(u32)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	rlwinm.  r0, r4, 0, 2, 2
	beq      lbl_800819B4
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_800819B4:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x800819C4
 * @note Size: 0xC
 */
JBlockType J3DPEBlockFogOff::getType() { return JBT_PEFogOff; }

/**
 * @note Address: 0x800819D0
 * @note Size: 0x1C
 */
void J3DPEBlockFogOff::setAlphaComp(const J3DAlphaComp& alphaComp) { mAlphaComp = alphaComp; }

/**
 * @note Address: 0x800819EC
 * @note Size: 0x1C
 */
void J3DPEBlockFogOff::setAlphaComp(const J3DAlphaComp* alphaComp) { mAlphaComp = *alphaComp; }

/**
 * @note Address: 0x80081A08
 * @note Size: 0x8
 */
J3DAlphaComp* J3DPEBlockFogOff::getAlphaComp() { return &mAlphaComp; }

/**
 * @note Address: 0x80081A10
 * @note Size: 0x24
 */
void J3DPEBlockFogOff::setBlend(const J3DBlend& blend) { mBlend = blend; }

/**
 * @note Address: 0x80081A34
 * @note Size: 0x24
 */
void J3DPEBlockFogOff::setBlend(const J3DBlend* blend) { mBlend = *blend; }

/**
 * @note Address: 0x80081A58
 * @note Size: 0x8
 */
J3DBlend* J3DPEBlockFogOff::getBlend() { return &mBlend; }

/**
 * @note Address: 0x80081A60
 * @note Size: 0xC
 */
void J3DPEBlockFogOff::setZMode(J3DZMode zMode)
{
	/*
	lhz      r0, 0(r4)
	sth      r0, 0xc(r3)
	blr
	*/
}

/**
 * @note Address: 0x80081A6C
 * @note Size: 0xC
 */
void J3DPEBlockFogOff::setZMode(const J3DZMode* zMode)
{
	/*
	lhz      r0, 0(r4)
	sth      r0, 0xc(r3)
	blr
	*/
}

/**
 * @note Address: 0x80081A78
 * @note Size: 0x8
 */
J3DZMode* J3DPEBlockFogOff::getZMode() { return &mZMode; }

/**
 * @note Address: 0x80081A80
 * @note Size: 0x8
 */
void J3DPEBlockFogOff::setZCompLoc(u8 a1)
{
	// Generated from stb r4, 0xE(r3)
	_0E = a1;
}

/**
 * @note Address: 0x80081A88
 * @note Size: 0xC
 */
void J3DPEBlockFogOff::setZCompLoc(const u8* zCompLoc) { _0E = *zCompLoc; }

/**
 * @note Address: 0x80081A94
 * @note Size: 0x8
 */
u8 J3DPEBlockFogOff::getZCompLoc() const { return _0E; }

/**
 * @note Address: 0x80081A9C
 * @note Size: 0x8
 */
void J3DPEBlockFogOff::setDither(u8 dither)
{
	// Generated from stb r4, 0xF(r3)
	mDither = dither;
}

/**
 * @note Address: 0x80081AA4
 * @note Size: 0xC
 */
void J3DPEBlockFogOff::setDither(const u8* dither) { mDither = *dither; }

/**
 * @note Address: 0x80081AB0
 * @note Size: 0x8
 */
u8 J3DPEBlockFogOff::getDither() const { return mDither; }

/**
 * @note Address: 0x80081AB8
 * @note Size: 0x5C
 */
// J3DPEBlockFogOff::~J3DPEBlockFogOff() { }

/**
 * @note Address: 0x80081B14
 * @note Size: 0xA0
 */
void J3DTevBlock16::indexToPtr()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r0, 4(r3)
	lwz      r3, 0(r4)
	add      r0, r3, r0
	stw      r0, 8(r4)
	lwz      r3, __GDCurrentDL@sda21(r13)
	lwz      r30, 8(r3)

lbl_80081B4C:
	lwz      r3, __GDCurrentDL@sda21(r13)
	lwz      r29, 8(r3)
	mr       r3, r29
	bl       isTexNoReg__FPv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80081B84
	mr       r3, r29
	bl       getTexNoReg__FPv
	sth      r3, 8(r1)
	mr       r3, r31
	addi     r4, r1, 8
	bl       loadTexNo__FUlRCUs
	addi     r31, r31, 1
	b        lbl_80081B4C

lbl_80081B84:
	lwz      r4, __GDCurrentDL@sda21(r13)
	mr       r3, r30
	lwz      r0, 8(r4)
	subf     r4, r30, r0
	bl       DCStoreRange
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
 * @note Address: 0x80081BB4
 * @note Size: 0xC
 */
JBlockType J3DTevBlock16::getType() { return JBT_Tev16; }

/**
 * @note Address: 0x80081BC0
 * @note Size: 0x10
 */
void J3DTevBlock16::setTexNo(u32 index, u16 texNo) { mTexIndices[index] = texNo; }

/**
 * @note Address: 0x80081BD0
 * @note Size: 0x14
 */
void J3DTevBlock16::setTexNo(u32 index, const u16* texNo) { mTexIndices[index] = *texNo; }

/**
 * @note Address: 0x80081BE4
 * @note Size: 0x10
 */
u16 J3DTevBlock16::getTexNo(u32 index) const { return mTexIndices[index]; }

/**
 * @note Address: 0x80081BF4
 * @note Size: 0x24
 */
void J3DTevBlock16::setTevOrder(u32 index, J3DTevOrder order) { mOrders[index] = order; }

/**
 * @note Address: 0x80081C18
 * @note Size: 0x24
 */
void J3DTevBlock16::setTevOrder(u32 index, const J3DTevOrder* order) { mOrders[index] = *order; }

/**
 * @note Address: 0x80081C3C
 * @note Size: 0x14
 */
J3DTevOrder* J3DTevBlock16::getTevOrder(u32 index) { return mOrders + index; }

/**
 * @note Address: 0x80081C50
 * @note Size: 0x2C
 */
void J3DTevBlock16::setTevColor(u32 index, J3DGXColorS10 color) { mColors[index] = color; }

/**
 * @note Address: 0x80081C7C
 * @note Size: 0x2C
 */
void J3DTevBlock16::setTevColor(u32 index, const J3DGXColorS10* color) { mColors[index] = *color; }

/**
 * @note Address: 0x80081CA8
 * @note Size: 0x14
 */
J3DGXColorS10* J3DTevBlock16::getTevColor(u32 index) { return mColors + index; }

/**
 * @note Address: 0x80081CBC
 * @note Size: 0x2C
 */
void J3DTevBlock16::setTevKColor(u32 index, J3DGXColor color) { mKColors[index] = color; }

/**
 * @note Address: 0x80081CE8
 * @note Size: 0x2C
 */
void J3DTevBlock16::setTevKColor(u32 index, const J3DGXColor* color) { mKColors[index] = *color; }

/**
 * @note Address: 0x80081D14
 * @note Size: 0x14
 */
J3DGXColor* J3DTevBlock16::getTevKColor(u32 index) { return mKColors + index; }

/**
 * @note Address: 0x80081D28
 * @note Size: 0xC
 */
void J3DTevBlock16::setTevKColorSel(u32 index, u8 sel) { mKColorSels[index] = sel; }

/**
 * @note Address: 0x80081D34
 * @note Size: 0x10
 */
void J3DTevBlock16::setTevKColorSel(u32 index, const u8* sel) { mKColorSels[index] = *sel; }

/**
 * @note Address: 0x80081D44
 * @note Size: 0xC
 */
GXTevKColorSel J3DTevBlock16::getTevKColorSel(u32 index) { return (GXTevKColorSel)mKColorSels[index]; }

/**
 * @note Address: 0x80081D50
 * @note Size: 0xC
 */
void J3DTevBlock16::setTevKAlphaSel(u32 index, u8 sel) { mKAlphaSels[index] = sel; }

/**
 * @note Address: 0x80081D5C
 * @note Size: 0x10
 */
void J3DTevBlock16::setTevKAlphaSel(u32 index, const u8* sel) { mKAlphaSels[index] = *sel; }

/**
 * @note Address: 0x80081D6C
 * @note Size: 0xC
 */
u8 J3DTevBlock16::getTevKAlphaSel(u32 index) { return mKAlphaSels[index]; }

/**
 * @note Address: 0x80081D78
 * @note Size: 0x8
 */
void J3DTevBlock16::setTevStageNum(u8 stageNum) { mStageNum = stageNum; }

/**
 * @note Address: 0x80081D80
 * @note Size: 0xC
 */
void J3DTevBlock16::setTevStageNum(const u8* stageNum) { mStageNum = *stageNum; }

/**
 * @note Address: 0x80081D8C
 * @note Size: 0x8
 */
u8 J3DTevBlock16::getTevStageNum() const { return mStageNum; }

/**
 * @note Address: 0x80081D94
 * @note Size: 0x3C
 */
void J3DTevBlock16::setTevStage(u32 index, J3DTevStage stage) { mStages[index] = stage; }

/**
 * @note Address: 0x80081DD0
 * @note Size: 0x3C
 */
void J3DTevBlock16::setTevStage(u32 index, const J3DTevStage* stage) { mStages[index] = *stage; }

/**
 * @note Address: 0x80081E0C
 * @note Size: 0x14
 */
J3DTevStage* J3DTevBlock16::getTevStage(u32 index) { return mStages + index; }

/**
 * @note Address: 0x80081E20
 * @note Size: 0x38
 */
void J3DTevBlock16::setTevSwapModeInfo(u32 index, J3DTevSwapModeInfo info)
{
	/*
	slwi     r0, r4, 3
	lbz      r4, 1(r5)
	add      r6, r3, r0
	lbz      r0, 0(r5)
	lbz      r5, 0x60(r6)
	slwi     r3, r4, 2
	rlwinm   r4, r5, 0, 0x1e, 0x1b
	or       r3, r4, r3
	stb      r3, 0x60(r6)
	lbz      r3, 0x60(r6)
	rlwinm   r3, r3, 0, 0, 0x1d
	or       r0, r3, r0
	stb      r0, 0x60(r6)
	blr
	*/
}

/**
 * @note Address: 0x80081E58
 * @note Size: 0x38
 */
void J3DTevBlock16::setTevSwapModeInfo(u32 index, const J3DTevSwapModeInfo* info)
{
	/*
	slwi     r0, r4, 3
	lbz      r4, 1(r5)
	add      r6, r3, r0
	lbz      r0, 0(r5)
	lbz      r5, 0x60(r6)
	slwi     r3, r4, 2
	rlwinm   r4, r5, 0, 0x1e, 0x1b
	or       r3, r4, r3
	stb      r3, 0x60(r6)
	lbz      r3, 0x60(r6)
	rlwinm   r3, r3, 0, 0, 0x1d
	or       r0, r3, r0
	stb      r0, 0x60(r6)
	blr
	*/
}

/**
 * @note Address: 0x80081E90
 * @note Size: 0x10
 */
void J3DTevBlock16::setTevSwapModeTable(u32 index, J3DTevSwapModeTable table) { mSwapModeTables[index] = table; }

/**
 * @note Address: 0x80081EA0
 * @note Size: 0x10
 */
void J3DTevBlock16::setTevSwapModeTable(u32 index, const J3DTevSwapModeTable* table) { mSwapModeTables[index] = *table; }

/**
 * @note Address: 0x80081EB0
 * @note Size: 0x10
 */
J3DTevSwapModeTable* J3DTevBlock16::getTevSwapModeTable(u32 index) { return mSwapModeTables + index; }

/**
 * @note Address: 0x80081EC0
 * @note Size: 0x14
 */
void J3DTevBlock16::setIndTevStage(u32 index, J3DIndTevStage stage) { mIndStages[index] = stage; }

/**
 * @note Address: 0x80081ED4
 * @note Size: 0x14
 */
void J3DTevBlock16::setIndTevStage(u32 index, const J3DIndTevStage* stage) { mIndStages[index] = *stage; }

/**
 * @note Address: 0x80081EE8
 * @note Size: 0x14
 */
J3DIndTevStage* J3DTevBlock16::getIndTevStage(u32 index) { return mIndStages + index; }

/**
 * @note Address: 0x80081EFC
 * @note Size: 0x8
 */
u32 J3DTevBlock16::getTexNoOffset() const
{
	return mTexNoOffset;
	/*
	lwz      r3, 4(r3)
	blr
	*/
}

/**
 * @note Address: 0x80081F04
 * @note Size: 0x8
 */
u32 J3DTevBlock16::getTevRegOffset() const
{
	return mRegOffset;
	/*
	lwz      r3, 0x170(r3)
	blr
	*/
}

/**
 * @note Address: 0x80081F0C
 * @note Size: 0x8
 */
void J3DTevBlock16::setTevRegOffset(u32 offset)
{
	// Generated from stw r4, 0x170(r3)
	mRegOffset = offset;
}

/**
 * @note Address: 0x80081F14
 * @note Size: 0x5C
 */
J3DTevBlock16::~J3DTevBlock16()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_80081F58
	lis      r3, __vt__13J3DTevBlock16@ha
	addi     r0, r3, __vt__13J3DTevBlock16@l
	stw      r0, 0(r31)
	beq      lbl_80081F48
	lis      r3, __vt__11J3DTevBlock@ha
	addi     r0, r3, __vt__11J3DTevBlock@l
	stw      r0, 0(r31)

lbl_80081F48:
	extsh.   r0, r4
	ble      lbl_80081F58
	mr       r3, r31
	bl       __dl__FPv

lbl_80081F58:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x80081F70
 * @note Size: 0x4
 */
void J3DTevBlock4::ptrToIndex() { }

/**
 * @note Address: 0x80081F74
 * @note Size: 0xA0
 */
void J3DTevBlock4::indexToPtr()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r0, 4(r3)
	lwz      r3, 0(r4)
	add      r0, r3, r0
	stw      r0, 8(r4)
	lwz      r3, __GDCurrentDL@sda21(r13)
	lwz      r30, 8(r3)

lbl_80081FAC:
	lwz      r3, __GDCurrentDL@sda21(r13)
	lwz      r29, 8(r3)
	mr       r3, r29
	bl       isTexNoReg__FPv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80081FE4
	mr       r3, r29
	bl       getTexNoReg__FPv
	sth      r3, 8(r1)
	mr       r3, r31
	addi     r4, r1, 8
	bl       loadTexNo__FUlRCUs
	addi     r31, r31, 1
	b        lbl_80081FAC

lbl_80081FE4:
	lwz      r4, __GDCurrentDL@sda21(r13)
	mr       r3, r30
	lwz      r0, 8(r4)
	subf     r4, r30, r0
	bl       DCStoreRange
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
 * @note Address: 0x80082014
 * @note Size: 0xC
 */
JBlockType J3DTevBlock4::getType() { return JBT_Tev4; }

/**
 * @note Address: 0x80082020
 * @note Size: 0x10
 */
void J3DTevBlock4::setTexNo(u32 index, u16 texNo) { mTexIndices[index] = texNo; }

/**
 * @note Address: 0x80082030
 * @note Size: 0x14
 */
void J3DTevBlock4::setTexNo(u32 index, const u16* texNo) { mTexIndices[index] = *texNo; }

/**
 * @note Address: 0x80082044
 * @note Size: 0x10
 */
u16 J3DTevBlock4::getTexNo(u32 index) const { return mTexIndices[index]; }

/**
 * @note Address: 0x80082054
 * @note Size: 0x24
 */
void J3DTevBlock4::setTevOrder(u32 index, J3DTevOrder order) { mOrders[index] = order; }

/**
 * @note Address: 0x80082078
 * @note Size: 0x24
 */
void J3DTevBlock4::setTevOrder(u32 index, const J3DTevOrder* order) { mOrders[index] = *order; }

/**
 * @note Address: 0x8008209C
 * @note Size: 0x14
 */
J3DTevOrder* J3DTevBlock4::getTevOrder(u32 index) { return mOrders + index; }

/**
 * @note Address: 0x800820B0
 * @note Size: 0x2C
 */
void J3DTevBlock4::setTevColor(u32 index, J3DGXColorS10 color) { mColors[index] = color; }

/**
 * @note Address: 0x800820DC
 * @note Size: 0x2C
 */
void J3DTevBlock4::setTevColor(u32 index, const J3DGXColorS10* color) { mColors[index] = *color; }

/**
 * @note Address: 0x80082108
 * @note Size: 0x14
 */
J3DGXColorS10* J3DTevBlock4::getTevColor(u32 index) { return mColors + index; }

/**
 * @note Address: 0x8008211C
 * @note Size: 0x2C
 */
void J3DTevBlock4::setTevKColor(u32 index, J3DGXColor color) { mKColors[index] = color; }

/**
 * @note Address: 0x80082148
 * @note Size: 0x2C
 */
void J3DTevBlock4::setTevKColor(u32 index, const J3DGXColor* color) { mKColors[index] = *color; }

/**
 * @note Address: 0x80082174
 * @note Size: 0x14
 */
J3DGXColor* J3DTevBlock4::getTevKColor(u32 index) { return mKColors + index; }

/**
 * @note Address: 0x80082188
 * @note Size: 0xC
 */
void J3DTevBlock4::setTevKColorSel(u32 index, u8 sel) { mKColorSels[index] = sel; }

/**
 * @note Address: 0x80082194
 * @note Size: 0x10
 */
void J3DTevBlock4::setTevKColorSel(u32 index, const u8* sel) { mKColorSels[index] = *sel; }

/**
 * @note Address: 0x800821A4
 * @note Size: 0xC
 */
GXTevKColorSel J3DTevBlock4::getTevKColorSel(u32 index) { return (GXTevKColorSel)mKColorSels[index]; }

/**
 * @note Address: 0x800821B0
 * @note Size: 0xC
 */
void J3DTevBlock4::setTevKAlphaSel(u32 index, u8 sel) { mKAlphaSels[index] = sel; }

/**
 * @note Address: 0x800821BC
 * @note Size: 0x10
 */
void J3DTevBlock4::setTevKAlphaSel(u32 index, const u8* sel) { mKAlphaSels[index] = *sel; }

/**
 * @note Address: 0x800821CC
 * @note Size: 0xC
 */
u8 J3DTevBlock4::getTevKAlphaSel(u32 index) { return mKAlphaSels[index]; }

/**
 * @note Address: 0x800821D8
 * @note Size: 0x8
 */
void J3DTevBlock4::setTevStageNum(u8 stageNum) { mStageNum = stageNum; }

/**
 * @note Address: 0x800821E0
 * @note Size: 0xC
 */
void J3DTevBlock4::setTevStageNum(const u8* stageNum) { mStageNum = *stageNum; }

/**
 * @note Address: 0x800821EC
 * @note Size: 0x8
 */
u8 J3DTevBlock4::getTevStageNum() const { return mStageNum; }

/**
 * @note Address: 0x800821F4
 * @note Size: 0x3C
 */
void J3DTevBlock4::setTevStage(u32 index, J3DTevStage stage) { mStages[index] = stage; }

/**
 * @note Address: 0x80082230
 * @note Size: 0x3C
 */
void J3DTevBlock4::setTevStage(u32 index, const J3DTevStage* stage) { mStages[index] = *stage; }

/**
 * @note Address: 0x8008226C
 * @note Size: 0x14
 */
J3DTevStage* J3DTevBlock4::getTevStage(u32 index) { return mStages + index; }

/**
 * @note Address: 0x80082280
 * @note Size: 0x38
 */
void J3DTevBlock4::setTevSwapModeInfo(u32 index, J3DTevSwapModeInfo info)
{
	/*
	slwi     r0, r4, 3
	lbz      r4, 1(r5)
	add      r6, r3, r0
	lbz      r0, 0(r5)
	lbz      r5, 0x28(r6)
	slwi     r3, r4, 2
	rlwinm   r4, r5, 0, 0x1e, 0x1b
	or       r3, r4, r3
	stb      r3, 0x28(r6)
	lbz      r3, 0x28(r6)
	rlwinm   r3, r3, 0, 0, 0x1d
	or       r0, r3, r0
	stb      r0, 0x28(r6)
	blr
	*/
}

/**
 * @note Address: 0x800822B8
 * @note Size: 0x38
 */
void J3DTevBlock4::setTevSwapModeInfo(u32 index, const J3DTevSwapModeInfo* info)
{
	/*
	slwi     r0, r4, 3
	lbz      r4, 1(r5)
	add      r6, r3, r0
	lbz      r0, 0(r5)
	lbz      r5, 0x28(r6)
	slwi     r3, r4, 2
	rlwinm   r4, r5, 0, 0x1e, 0x1b
	or       r3, r4, r3
	stb      r3, 0x28(r6)
	lbz      r3, 0x28(r6)
	rlwinm   r3, r3, 0, 0, 0x1d
	or       r0, r3, r0
	stb      r0, 0x28(r6)
	blr
	*/
}

/**
 * @note Address: 0x800822F0
 * @note Size: 0x10
 */
void J3DTevBlock4::setTevSwapModeTable(u32 index, J3DTevSwapModeTable table) { mSwapModeTables[index] = table; }

/**
 * @note Address: 0x80082300
 * @note Size: 0x10
 */
void J3DTevBlock4::setTevSwapModeTable(u32 index, const J3DTevSwapModeTable* table) { mSwapModeTables[index] = *table; }

/**
 * @note Address: 0x80082310
 * @note Size: 0x10
 */
J3DTevSwapModeTable* J3DTevBlock4::getTevSwapModeTable(u32 index) { return mSwapModeTables + index; }

/**
 * @note Address: 0x80082320
 * @note Size: 0x14
 */
void J3DTevBlock4::setIndTevStage(u32 index, J3DIndTevStage stage) { mIndStages[index] = stage; }

/**
 * @note Address: 0x80082334
 * @note Size: 0x14
 */
void J3DTevBlock4::setIndTevStage(u32 index, const J3DIndTevStage* stage) { mIndStages[index] = *stage; }

/**
 * @note Address: 0x80082348
 * @note Size: 0x14
 */
J3DIndTevStage* J3DTevBlock4::getIndTevStage(u32 index) { return mIndStages + index; }

/**
 * @note Address: 0x8008235C
 * @note Size: 0x8
 */
u32 J3DTevBlock4::getTexNoOffset() const { return mTexNoOffset; }

/**
 * @note Address: 0x80082364
 * @note Size: 0x8
 */
u32 J3DTevBlock4::getTevRegOffset() const { return mRegOffset; }

/**
 * @note Address: 0x8008236C
 * @note Size: 0x8
 */
void J3DTevBlock4::setTevRegOffset(u32 offset) { mRegOffset = offset; }

/**
 * @note Address: 0x80082374
 * @note Size: 0x5C
 */
J3DTevBlock4::~J3DTevBlock4()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_800823B8
	lis      r3, __vt__12J3DTevBlock4@ha
	addi     r0, r3, __vt__12J3DTevBlock4@l
	stw      r0, 0(r31)
	beq      lbl_800823A8
	lis      r3, __vt__11J3DTevBlock@ha
	addi     r0, r3, __vt__11J3DTevBlock@l
	stw      r0, 0(r31)

lbl_800823A8:
	extsh.   r0, r4
	ble      lbl_800823B8
	mr       r3, r31
	bl       __dl__FPv

lbl_800823B8:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x800823D0
 * @note Size: 0x4
 */
void J3DTevBlock2::ptrToIndex() { }

/**
 * @note Address: 0x800823D4
 * @note Size: 0xA0
 */
void J3DTevBlock2::indexToPtr()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r0, 4(r3)
	lwz      r3, 0(r4)
	add      r0, r3, r0
	stw      r0, 8(r4)
	lwz      r3, __GDCurrentDL@sda21(r13)
	lwz      r30, 8(r3)

lbl_8008240C:
	lwz      r3, __GDCurrentDL@sda21(r13)
	lwz      r29, 8(r3)
	mr       r3, r29
	bl       isTexNoReg__FPv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80082444
	mr       r3, r29
	bl       getTexNoReg__FPv
	sth      r3, 8(r1)
	mr       r3, r31
	addi     r4, r1, 8
	bl       loadTexNo__FUlRCUs
	addi     r31, r31, 1
	b        lbl_8008240C

lbl_80082444:
	lwz      r4, __GDCurrentDL@sda21(r13)
	mr       r3, r30
	lwz      r0, 8(r4)
	subf     r4, r30, r0
	bl       DCStoreRange
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
 * @note Address: 0x80082474
 * @note Size: 0xC
 */
JBlockType J3DTevBlock2::getType() { return JBT_Tev2; }

/**
 * @note Address: 0x80082480
 * @note Size: 0x10
 */
void J3DTevBlock2::setTexNo(u32 index, u16 texNo) { mTexIndices[index] = texNo; }

/**
 * @note Address: 0x80082490
 * @note Size: 0x14
 */
void J3DTevBlock2::setTexNo(u32 index, const u16* texNo) { mTexIndices[index] = *texNo; }

/**
 * @note Address: 0x800824A4
 * @note Size: 0x10
 */
u16 J3DTevBlock2::getTexNo(u32 index) const { return mTexIndices[index]; }

/**
 * @note Address: 0x800824B4
 * @note Size: 0x24
 */
void J3DTevBlock2::setTevOrder(u32 index, J3DTevOrder order) { mOrders[index] = order; }

/**
 * @note Address: 0x800824D8
 * @note Size: 0x24
 */
void J3DTevBlock2::setTevOrder(u32 index, const J3DTevOrder* order) { mOrders[index] = *order; }

/**
 * @note Address: 0x800824FC
 * @note Size: 0x14
 */
J3DTevOrder* J3DTevBlock2::getTevOrder(u32 index) { return mOrders + index; }

/**
 * @note Address: 0x80082510
 * @note Size: 0x2C
 */
void J3DTevBlock2::setTevColor(u32 index, J3DGXColorS10 color) { mColors[index] = color; }

/**
 * @note Address: 0x8008253C
 * @note Size: 0x2C
 */
void J3DTevBlock2::setTevColor(u32 index, const J3DGXColorS10* color) { mColors[index] = *color; }

/**
 * @note Address: 0x80082568
 * @note Size: 0x14
 */
J3DGXColorS10* J3DTevBlock2::getTevColor(u32 index) { return mColors + index; }

/**
 * @note Address: 0x8008257C
 * @note Size: 0x2C
 */
void J3DTevBlock2::setTevKColor(u32 index, J3DGXColor color) { mKColors[index] = color; }

/**
 * @note Address: 0x800825A8
 * @note Size: 0x2C
 */
void J3DTevBlock2::setTevKColor(u32 index, const J3DGXColor* color) { mKColors[index] = *color; }

/**
 * @note Address: 0x800825D4
 * @note Size: 0x14
 */
J3DGXColor* J3DTevBlock2::getTevKColor(u32 index) { return mKColors + index; }

/**
 * @note Address: 0x800825E8
 * @note Size: 0xC
 */
void J3DTevBlock2::setTevKColorSel(u32 index, u8 sel) { mKColorSels[index] = sel; }

/**
 * @note Address: 0x800825F4
 * @note Size: 0x10
 */
void J3DTevBlock2::setTevKColorSel(u32 index, const u8* sel) { mKColorSels[index] = *sel; }

/**
 * @note Address: 0x80082604
 * @note Size: 0xC
 */
GXTevKColorSel J3DTevBlock2::getTevKColorSel(u32 index) { return (GXTevKColorSel)mKColorSels[index]; }

/**
 * @note Address: 0x80082610
 * @note Size: 0xC
 */
void J3DTevBlock2::setTevKAlphaSel(u32 index, u8 sel) { mKAlphaSels[index] = sel; }

/**
 * @note Address: 0x8008261C
 * @note Size: 0x10
 */
void J3DTevBlock2::setTevKAlphaSel(u32 index, const u8* sel) { mKAlphaSels[index] = *sel; }

/**
 * @note Address: 0x8008262C
 * @note Size: 0xC
 */
u8 J3DTevBlock2::getTevKAlphaSel(u32 index) { return mKAlphaSels[index]; }

/**
 * @note Address: 0x80082638
 * @note Size: 0x8
 */
void J3DTevBlock2::setTevStageNum(u8 stageNum) { mStageNum = stageNum; }

/**
 * @note Address: 0x80082640
 * @note Size: 0xC
 */
void J3DTevBlock2::setTevStageNum(const u8* stageNum) { mStageNum = *stageNum; }

/**
 * @note Address: 0x8008264C
 * @note Size: 0x8
 */
u8 J3DTevBlock2::getTevStageNum() const { return mStageNum; }

/**
 * @note Address: 0x80082654
 * @note Size: 0x3C
 */
void J3DTevBlock2::setTevStage(u32 index, J3DTevStage stage) { mStages[index] = stage; }

/**
 * @note Address: 0x80082690
 * @note Size: 0x3C
 */
void J3DTevBlock2::setTevStage(u32 index, const J3DTevStage* stage) { mStages[index] = *stage; }

/**
 * @note Address: 0x800826CC
 * @note Size: 0x14
 */
J3DTevStage* J3DTevBlock2::getTevStage(u32 index) { return mStages + index; }

/**
 * @note Address: 0x800826E0
 * @note Size: 0x38
 */
void J3DTevBlock2::setTevSwapModeInfo(u32 index, J3DTevSwapModeInfo info)
{
	/*
	slwi     r0, r4, 3
	lbz      r4, 1(r5)
	add      r6, r3, r0
	lbz      r0, 0(r5)
	lbz      r5, 0x3c(r6)
	slwi     r3, r4, 2
	rlwinm   r4, r5, 0, 0x1e, 0x1b
	or       r3, r4, r3
	stb      r3, 0x3c(r6)
	lbz      r3, 0x3c(r6)
	rlwinm   r3, r3, 0, 0, 0x1d
	or       r0, r3, r0
	stb      r0, 0x3c(r6)
	blr
	*/
}

/**
 * @note Address: 0x80082718
 * @note Size: 0x38
 */
void J3DTevBlock2::setTevSwapModeInfo(u32 index, const J3DTevSwapModeInfo* info)
{
	/*
	slwi     r0, r4, 3
	lbz      r4, 1(r5)
	add      r6, r3, r0
	lbz      r0, 0(r5)
	lbz      r5, 0x3c(r6)
	slwi     r3, r4, 2
	rlwinm   r4, r5, 0, 0x1e, 0x1b
	or       r3, r4, r3
	stb      r3, 0x3c(r6)
	lbz      r3, 0x3c(r6)
	rlwinm   r3, r3, 0, 0, 0x1d
	or       r0, r3, r0
	stb      r0, 0x3c(r6)
	blr
	*/
}

/**
 * @note Address: 0x80082750
 * @note Size: 0x10
 */
void J3DTevBlock2::setTevSwapModeTable(u32 index, J3DTevSwapModeTable table) { mSwapModeTables[index] = table; }

/**
 * @note Address: 0x80082760
 * @note Size: 0x10
 */
void J3DTevBlock2::setTevSwapModeTable(u32 index, const J3DTevSwapModeTable* table) { mSwapModeTables[index] = *table; }

/**
 * @note Address: 0x80082770
 * @note Size: 0x10
 */
J3DTevSwapModeTable* J3DTevBlock2::getTevSwapModeTable(u32 index) { return mSwapModeTables + index; }

/**
 * @note Address: 0x80082780
 * @note Size: 0x14
 */
void J3DTevBlock2::setIndTevStage(u32 index, J3DIndTevStage stage) { mIndStages[index] = stage; }

/**
 * @note Address: 0x80082794
 * @note Size: 0x14
 */
void J3DTevBlock2::setIndTevStage(u32 index, const J3DIndTevStage* stage) { mIndStages[index] = *stage; }

/**
 * @note Address: 0x800827A8
 * @note Size: 0x14
 */
J3DIndTevStage* J3DTevBlock2::getIndTevStage(u32 index) { return mIndStages + index; }

/**
 * @note Address: 0x800827BC
 * @note Size: 0x8
 */
u32 J3DTevBlock2::getTexNoOffset() const
{
	return mTexNoOffset;
	/*
	lwz      r3, 4(r3)
	blr
	*/
}

/**
 * @note Address: 0x800827C4
 * @note Size: 0x8
 */
u32 J3DTevBlock2::getTevRegOffset() const
{
	return mRegOffset;
	/*
	lwz      r3, 0x68(r3)
	blr
	*/
}

/**
 * @note Address: 0x800827CC
 * @note Size: 0x8
 */
void J3DTevBlock2::setTevRegOffset(u32 a1)
{
	// Generated from stw r4, 0x68(r3)
	mRegOffset = a1;
}

/**
 * @note Address: 0x800827D4
 * @note Size: 0x5C
 */
J3DTevBlock2::~J3DTevBlock2()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_80082818
	lis      r3, __vt__12J3DTevBlock2@ha
	addi     r0, r3, __vt__12J3DTevBlock2@l
	stw      r0, 0(r31)
	beq      lbl_80082808
	lis      r3, __vt__11J3DTevBlock@ha
	addi     r0, r3, __vt__11J3DTevBlock@l
	stw      r0, 0(r31)

lbl_80082808:
	extsh.   r0, r4
	ble      lbl_80082818
	mr       r3, r31
	bl       __dl__FPv

lbl_80082818:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x80082830
 * @note Size: 0x4
 */
void J3DTevBlock1::ptrToIndex() { }

/**
 * @note Address: 0x80082834
 * @note Size: 0xA0
 */
void J3DTevBlock1::indexToPtr()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r0, 4(r3)
	lwz      r3, 0(r4)
	add      r0, r3, r0
	stw      r0, 8(r4)
	lwz      r3, __GDCurrentDL@sda21(r13)
	lwz      r30, 8(r3)

lbl_8008286C:
	lwz      r3, __GDCurrentDL@sda21(r13)
	lwz      r29, 8(r3)
	mr       r3, r29
	bl       isTexNoReg__FPv
	clrlwi.  r0, r3, 0x18
	beq      lbl_800828A4
	mr       r3, r29
	bl       getTexNoReg__FPv
	sth      r3, 8(r1)
	mr       r3, r31
	addi     r4, r1, 8
	bl       loadTexNo__FUlRCUs
	addi     r31, r31, 1
	b        lbl_8008286C

lbl_800828A4:
	lwz      r4, __GDCurrentDL@sda21(r13)
	mr       r3, r30
	lwz      r0, 8(r4)
	subf     r4, r30, r0
	bl       DCStoreRange
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
 * @note Address: 0x800828D4
 * @note Size: 0xC
 */
JBlockType J3DTevBlock1::getType() { return JBT_Tev1; }

/**
 * @note Address: 0x800828E0
 * @note Size: 0x10
 */
void J3DTevBlock1::setTexNo(u32 index, u16 texNo) { mTexIndices[index] = texNo; }

/**
 * @note Address: 0x800828F0
 * @note Size: 0x14
 */
void J3DTevBlock1::setTexNo(u32 index, const u16* texNo) { mTexIndices[index] = *texNo; }

/**
 * @note Address: 0x80082904
 * @note Size: 0x10
 */
u16 J3DTevBlock1::getTexNo(u32 index) const { return mTexIndices[index]; }

/**
 * @note Address: 0x80082914
 * @note Size: 0x24
 */
void J3DTevBlock1::setTevOrder(u32 index, J3DTevOrder order) { mOrders[index] = order; }

/**
 * @note Address: 0x80082938
 * @note Size: 0x24
 */
void J3DTevBlock1::setTevOrder(u32 index, const J3DTevOrder* order) { mOrders[index] = *order; }

/**
 * @note Address: 0x8008295C
 * @note Size: 0x14
 */
J3DTevOrder* J3DTevBlock1::getTevOrder(u32 index) { return mOrders + index; }

/**
 * @note Address: 0x80082970
 * @note Size: 0x4
 */
void J3DTevBlock1::setTevStageNum(u8) { }

/**
 * @note Address: 0x80082974
 * @note Size: 0x4
 */
void J3DTevBlock1::setTevStageNum(const u8*) { }

/**
 * @note Address: 0x80082978
 * @note Size: 0x8
 */
u8 J3DTevBlock1::getTevStageNum() const { return 0x1; }

/**
 * @note Address: 0x80082980
 * @note Size: 0x3C
 */
void J3DTevBlock1::setTevStage(u32 index, J3DTevStage stage) { mStages[index] = stage; }

/**
 * @note Address: 0x800829BC
 * @note Size: 0x3C
 */
void J3DTevBlock1::setTevStage(u32 index, const J3DTevStage* stage) { mStages[index] = *stage; }

/**
 * @note Address: 0x800829F8
 * @note Size: 0x14
 */
J3DTevStage* J3DTevBlock1::getTevStage(u32 index) { return mStages + index; }

/**
 * @note Address: 0x80082A0C
 * @note Size: 0x14
 */
void J3DTevBlock1::setIndTevStage(u32 index, J3DIndTevStage stage) { mIndStages[index] = stage; }

/**
 * @note Address: 0x80082A20
 * @note Size: 0x14
 */
void J3DTevBlock1::setIndTevStage(u32 index, const J3DIndTevStage* stage) { mIndStages[index] = *stage; }

/**
 * @note Address: 0x80082A34
 * @note Size: 0x14
 */
J3DIndTevStage* J3DTevBlock1::getIndTevStage(u32 index) { return mIndStages + index; }

/**
 * @note Address: 0x80082A48
 * @note Size: 0x8
 */
u32 J3DTevBlock1::getTexNoOffset() const
{
	return mTexNoOffset;
	/*
	lwz      r3, 4(r3)
	blr
	*/
}

/**
 * @note Address: 0x80082A50
 * @note Size: 0x5C
 */
J3DTevBlock1::~J3DTevBlock1()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_80082A94
	lis      r3, __vt__12J3DTevBlock1@ha
	addi     r0, r3, __vt__12J3DTevBlock1@l
	stw      r0, 0(r31)
	beq      lbl_80082A84
	lis      r3, __vt__11J3DTevBlock@ha
	addi     r0, r3, __vt__11J3DTevBlock@l
	stw      r0, 0(r31)

lbl_80082A84:
	extsh.   r0, r4
	ble      lbl_80082A94
	mr       r3, r31
	bl       __dl__FPv

lbl_80082A94:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x80082AAC
 * @note Size: 0x4
 */
void J3DTevBlockPatched::load() { }

/**
 * @note Address: 0x80082AB0
 * @note Size: 0xA0
 */
void J3DTevBlockPatched::indexToPtr()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r0, 4(r3)
	lwz      r3, 0(r4)
	add      r0, r3, r0
	stw      r0, 8(r4)
	lwz      r3, __GDCurrentDL@sda21(r13)
	lwz      r30, 8(r3)

lbl_80082AE8:
	lwz      r3, __GDCurrentDL@sda21(r13)
	lwz      r29, 8(r3)
	mr       r3, r29
	bl       isTexNoReg__FPv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80082B20
	mr       r3, r29
	bl       getTexNoReg__FPv
	sth      r3, 8(r1)
	mr       r3, r31
	addi     r4, r1, 8
	bl       loadTexNo__FUlRCUs
	addi     r31, r31, 1
	b        lbl_80082AE8

lbl_80082B20:
	lwz      r4, __GDCurrentDL@sda21(r13)
	mr       r3, r30
	lwz      r0, 8(r4)
	subf     r4, r30, r0
	bl       DCStoreRange
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
 * @note Address: 0x80082B50
 * @note Size: 0xC
 */
JBlockType J3DTevBlockPatched::getType() { return JBT_TevPatched; }

/**
 * @note Address: 0x80082B5C
 * @note Size: 0x8
 */
void J3DTevBlockPatched::setTevStageNum(u8 stageNum) { mStageNum = stageNum; }

/**
 * @note Address: 0x80082B64
 * @note Size: 0xC
 */
void J3DTevBlockPatched::setTevStageNum(const u8* stageNum) { mStageNum = *stageNum; }

/**
 * @note Address: 0x80082B70
 * @note Size: 0x8
 */
u8 J3DTevBlockPatched::getTevStageNum() const { return mStageNum; }

/**
 * @note Address: 0x80082B78
 * @note Size: 0x10
 */
void J3DTevBlockPatched::setTexNo(u32 index, u16 texNo) { mTexIndices[index] = texNo; }

/**
 * @note Address: 0x80082B88
 * @note Size: 0x14
 */
void J3DTevBlockPatched::setTexNo(u32 index, const u16* texNo) { mTexIndices[index] = *texNo; }

/**
 * @note Address: 0x80082B9C
 * @note Size: 0x10
 */
u16 J3DTevBlockPatched::getTexNo(u32 index) const { return mTexIndices[index]; }

/**
 * @note Address: 0x80082BAC
 * @note Size: 0x24
 */
void J3DTevBlockPatched::setTevOrder(u32 index, J3DTevOrder order) { mOrders[index] = order; }

/**
 * @note Address: 0x80082BD0
 * @note Size: 0x24
 */
void J3DTevBlockPatched::setTevOrder(u32 index, const J3DTevOrder* order) { mOrders[index] = *order; }

/**
 * @note Address: 0x80082BF4
 * @note Size: 0x14
 */
J3DTevOrder* J3DTevBlockPatched::getTevOrder(u32 index) { return mOrders + index; }

/**
 * @note Address: 0x80082C08
 * @note Size: 0x3C
 */
void J3DTevBlockPatched::setTevStage(u32 index, J3DTevStage stage) { mStages[index] = stage; }

/**
 * @note Address: 0x80082C44
 * @note Size: 0x3C
 */
void J3DTevBlockPatched::setTevStage(u32 index, const J3DTevStage* stage) { mStages[index] = *stage; }

/**
 * @note Address: 0x80082C80
 * @note Size: 0x14
 */
J3DTevStage* J3DTevBlockPatched::getTevStage(u32 index) { return mStages + index; }

/**
 * @note Address: 0x80082C94
 * @note Size: 0x14
 */
void J3DTevBlockPatched::setIndTevStage(u32 index, J3DIndTevStage stage) { mIndStages[index] = stage; }

/**
 * @note Address: 0x80082CA8
 * @note Size: 0x14
 */
void J3DTevBlockPatched::setIndTevStage(u32 index, const J3DIndTevStage* stage) { mIndStages[index] = *stage; }

/**
 * @note Address: 0x80082CBC
 * @note Size: 0x14
 */
J3DIndTevStage* J3DTevBlockPatched::getIndTevStage(u32 index) { return mIndStages + index; }

/**
 * @note Address: 0x80082CD0
 * @note Size: 0x2C
 */
void J3DTevBlockPatched::setTevColor(u32 index, J3DGXColorS10 color) { mColors[index] = color; }

/**
 * @note Address: 0x80082CFC
 * @note Size: 0x2C
 */
void J3DTevBlockPatched::setTevColor(u32 index, const J3DGXColorS10* color) { mColors[index] = *color; }

/**
 * @note Address: 0x80082D28
 * @note Size: 0x14
 */
J3DGXColorS10* J3DTevBlockPatched::getTevColor(u32 index) { return mColors + index; }

/**
 * @note Address: 0x80082D3C
 * @note Size: 0x2C
 */
void J3DTevBlockPatched::setTevKColor(u32 index, J3DGXColor color) { mKColors[index] = color; }

/**
 * @note Address: 0x80082D68
 * @note Size: 0x2C
 */
void J3DTevBlockPatched::setTevKColor(u32 index, const J3DGXColor* color) { mKColors[index] = *color; }

/**
 * @note Address: 0x80082D94
 * @note Size: 0x14
 */
J3DGXColor* J3DTevBlockPatched::getTevKColor(u32 index) { return mKColors + index; }

/**
 * @note Address: 0x80082DA8
 * @note Size: 0xC
 */
void J3DTevBlockPatched::setTevKColorSel(u32 index, u8 sel) { _C8[index] = sel; }

/**
 * @note Address: 0x80082DB4
 * @note Size: 0x10
 */
void J3DTevBlockPatched::setTevKColorSel(u32 index, const u8* sel) { _C8[index] = *sel; }

/**
 * @note Address: 0x80082DC4
 * @note Size: 0xC
 */
GXTevKColorSel J3DTevBlockPatched::getTevKColorSel(u32 index) { return (GXTevKColorSel)_C8[index]; }

/**
 * @note Address: 0x80082DD0
 * @note Size: 0x8
 */
u32 J3DTevBlockPatched::getTexNoOffset() const { return mTexNoOffset; }

/**
 * @note Address: 0x80082DD8
 * @note Size: 0x8
 */
u32 J3DTevBlockPatched::getTevRegOffset() const { return mRegOffset; }

/**
 * @note Address: 0x80082DE0
 * @note Size: 0x8
 */
void J3DTevBlockPatched::setTevRegOffset(u32 offset) { mRegOffset = offset; }

/**
 * @note Address: 0x80082DE8
 * @note Size: 0x5C
 */
J3DTevBlockPatched::~J3DTevBlockPatched()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_80082E2C
	lis      r3, __vt__18J3DTevBlockPatched@ha
	addi     r0, r3, __vt__18J3DTevBlockPatched@l
	stw      r0, 0(r31)
	beq      lbl_80082E1C
	lis      r3, __vt__11J3DTevBlock@ha
	addi     r0, r3, __vt__11J3DTevBlock@l
	stw      r0, 0(r31)

lbl_80082E1C:
	extsh.   r0, r4
	ble      lbl_80082E2C
	mr       r3, r31
	bl       __dl__FPv

lbl_80082E2C:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x80082E44
 * @note Size: 0xC
 */
JBlockType J3DTexGenBlockBasic::getType() { return JBT_TexGenBasic; }

/**
 * @note Address: 0x80082E50
 * @note Size: 0x24
 */
void J3DTexGenBlockBasic::setNBTScale(J3DNBTScale scale) { mNbtScale = scale; }

/**
 * @note Address: 0x80082E74
 * @note Size: 0x24
 */
void J3DTexGenBlockBasic::setNBTScale(const J3DNBTScale* scale) { mNbtScale = *scale; }

/**
 * @note Address: 0x80082E98
 * @note Size: 0x8
 */
J3DNBTScale* J3DTexGenBlockBasic::getNBTScale() { return &mNbtScale; }

/**
 * @note Address: 0x80082EA0
 * @note Size: 0x6C
 */
// J3DTexGenBlockBasic::~J3DTexGenBlockBasic() { }

/**
 * @note Address: 0x80082F0C
 * @note Size: 0x8
 */
void J3DTexGenBlockPatched::setTexGenNum(u32 texGenNum) { mTexgenCnt = texGenNum; }

/**
 * @note Address: 0x80082F14
 * @note Size: 0xC
 */
void J3DTexGenBlockPatched::setTexGenNum(const u32* texGenNum) { mTexgenCnt = *texGenNum; }

/**
 * @note Address: 0x80082F20
 * @note Size: 0x8
 */
u32 J3DTexGenBlockPatched::getTexGenNum() const { return mTexgenCnt; }

/**
 * @note Address: 0x80082F28
 * @note Size: 0x24
 */
void J3DTexGenBlockPatched::setTexCoord(u32 index, const J3DTexCoord* coord)
{
	/*
	mulli    r7, r4, 6
	lbz      r6, 0(r5)
	lbz      r4, 1(r5)
	lbz      r0, 2(r5)
	add      r3, r3, r7
	stb      r6, 8(r3)
	stb      r4, 9(r3)
	stb      r0, 0xa(r3)
	blr
	*/
}

/**
 * @note Address: 0x80082F4C
 * @note Size: 0x14
 */
J3DTexCoord* J3DTexGenBlockPatched::getTexCoord(u32 index)
{
	/*
	mulli    r4, r4, 6
	mr       r0, r3
	addi     r3, r4, 8
	add      r3, r0, r3
	blr
	*/
}

/**
 * @note Address: 0x80082F60
 * @note Size: 0x10
 */
void J3DTexGenBlockPatched::setTexMtx(u32 index, J3DTexMtx* texMtx)
{
	/*
	slwi     r0, r4, 2
	add      r3, r3, r0
	stw      r5, 0x38(r3)
	blr
	*/
}

/**
 * @note Address: 0x80082F70
 * @note Size: 0x10
 */
J3DTexMtx* J3DTexGenBlockPatched::getTexMtx(u32 index)
{
	/*
	slwi     r0, r4, 2
	add      r3, r3, r0
	lwz      r3, 0x38(r3)
	blr
	*/
}

/**
 * @note Address: 0x80082F80
 * @note Size: 0x8
 */
u32 J3DTexGenBlockPatched::getTexMtxOffset() const { return mDlistOffs; }

/**
 * @note Address: 0x80082F88
 * @note Size: 0x8
 */
void J3DTexGenBlockPatched::setTexMtxOffset(u32 offset) { mDlistOffs = offset; }

/**
 * @note Address: 0x80082F90
 * @note Size: 0xC
 */
JBlockType J3DTexGenBlock4::getType() { return JBT_TexGen4; }

/**
 * @note Address: 0x80082F9C
 * @note Size: 0x24
 */
void J3DTexGenBlock4::setNBTScale(J3DNBTScale scale) { mNbtScale = scale; }

/**
 * @note Address: 0x80082FC0
 * @note Size: 0x24
 */
void J3DTexGenBlock4::setNBTScale(const J3DNBTScale* scale) { mNbtScale = *scale; }

/**
 * @note Address: 0x80082FE4
 * @note Size: 0x8
 */
J3DNBTScale* J3DTexGenBlock4::getNBTScale() { return &mNbtScale; }

/**
 * @note Address: 0x80082FEC
 * @note Size: 0x6C
 */
// J3DTexGenBlock4::~J3DTexGenBlock4() { }

/**
 * @note Address: 0x80083058
 * @note Size: 0x4
 */
void J3DTexGenBlockPatched::load() { }

/**
 * @note Address: 0x8008305C
 * @note Size: 0xC
 */
JBlockType J3DTexGenBlockPatched::getType() { return JBT_TexGenPatched; }

/**
 * @note Address: 0x80083068
 * @note Size: 0xC
 */
JBlockType J3DColorBlockLightOn::getType() { return JBT_ColorLightOn; }

/**
 * @note Address: 0x80083074
 * @note Size: 0x2C
 */
void J3DColorBlockLightOn::setMatColor(u32 index, J3DGXColor color) { mMaterialColors[index] = color; }

/**
 * @note Address: 0x800830A0
 * @note Size: 0x2C
 */
void J3DColorBlockLightOn::setMatColor(u32 index, const J3DGXColor* color) { mMaterialColors[index] = *color; }

/**
 * @note Address: 0x800830CC
 * @note Size: 0x14
 */
J3DGXColor* J3DColorBlockLightOn::getMatColor(u32 index) { return mMaterialColors + index; }

/**
 * @note Address: 0x800830E0
 * @note Size: 0x2C
 */
void J3DColorBlockLightOn::setAmbColor(u32 index, J3DGXColor color) { mAmbientColors[index] = color; }

/**
 * @note Address: 0x8008310C
 * @note Size: 0x2C
 */
void J3DColorBlockLightOn::setAmbColor(u32 index, const J3DGXColor* color) { mAmbientColors[index] = *color; }

/**
 * @note Address: 0x80083138
 * @note Size: 0x14
 */
J3DGXColor* J3DColorBlockLightOn::getAmbColor(u32 index) { return mAmbientColors + index; }

/**
 * @note Address: 0x8008314C
 * @note Size: 0xC
 */
void J3DColorBlockLightOn::setColorChanNum(const u8* colorChanNum) { mColorChannelNum = *colorChanNum; }

/**
 * @note Address: 0x80083158
 * @note Size: 0x8
 */
void J3DColorBlockLightOn::setColorChanNum(u8 colorChanNum) { mColorChannelNum = colorChanNum; }

/**
 * @note Address: 0x80083160
 * @note Size: 0x8
 */
u8 J3DColorBlockLightOn::getColorChanNum() const { return mColorChannelNum; }

/**
 * @note Address: 0x80083168
 * @note Size: 0x14
 */
void J3DColorBlockLightOn::setColorChan(u32 index, const J3DColorChan* colorChan) { mColorChannels[index] = *colorChan; }

/**
 * @note Address: 0x8008317C
 * @note Size: 0x14
 */
void J3DColorBlockLightOn::setColorChan(u32 index, const J3DColorChan& colorChan) { mColorChannels[index] = colorChan; }

/**
 * @note Address: 0x80083190
 * @note Size: 0x14
 */
J3DColorChan* J3DColorBlockLightOn::getColorChan(u32 index) { return mColorChannels + index; }

/**
 * @note Address: 0x800831A4
 * @note Size: 0x10
 */
void J3DColorBlockLightOn::setLight(u32 index, J3DLightObj* light) { mLights[index] = light; }

/**
 * @note Address: 0x800831B4
 * @note Size: 0x10
 */
J3DLightObj* J3DColorBlockLightOn::getLight(u32 index) { return mLights[index]; }

/**
 * @note Address: 0x800831C4
 * @note Size: 0x8
 */
void J3DColorBlockLightOn::setCullMode(u8 cullMode) { mCullMode = cullMode; }

/**
 * @note Address: 0x800831CC
 * @note Size: 0xC
 */
void J3DColorBlockLightOn::setCullMode(const u8* cullMode) { mCullMode = *cullMode; }

/**
 * @note Address: 0x800831D8
 * @note Size: 0x8
 */
u8 J3DColorBlockLightOn::getCullMode() const { return mCullMode; }

/**
 * @note Address: 0x800831E0
 * @note Size: 0x8
 */
u32 J3DColorBlockLightOn::getMatColorOffset() const { return mMaterialColorOffset; }

/**
 * @note Address: 0x800831E8
 * @note Size: 0x8
 */
u32 J3DColorBlockLightOn::getColorChanOffset() const { return mColorChannelOffset; }

/**
 * @note Address: 0x800831F0
 * @note Size: 0x8
 */
void J3DColorBlockLightOn::setMatColorOffset(u32 offset) { mMaterialColorOffset = offset; }

/**
 * @note Address: 0x800831F8
 * @note Size: 0x8
 */
void J3DColorBlockLightOn::setColorChanOffset(u32 offset) { mColorChannelOffset = offset; }

/**
 * @note Address: 0x80083200
 * @note Size: 0x5C
 */
// J3DColorBlockLightOn::~J3DColorBlockLightOn() { }

/**
 * @note Address: 0x8008325C
 * @note Size: 0xC
 */
JBlockType J3DColorBlockAmbientOn::getType() { return JBT_ColorAmbientOn; }

/**
 * @note Address: 0x80083268
 * @note Size: 0x2C
 */
void J3DColorBlockAmbientOn::setAmbColor(u32 index, J3DGXColor color) { mAmbientColors[index] = color; }

/**
 * @note Address: 0x80083294
 * @note Size: 0x2C
 */
void J3DColorBlockAmbientOn::setAmbColor(u32 index, const J3DGXColor* color) { mAmbientColors[index] = *color; }

/**
 * @note Address: 0x800832C0
 * @note Size: 0x14
 */
J3DGXColor* J3DColorBlockAmbientOn::getAmbColor(u32 index) { return mAmbientColors + index; }

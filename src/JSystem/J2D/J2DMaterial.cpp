#include "Dolphin/gx.h"
#include "JSystem/J2D/J2DAnm.h"
#include "JSystem/J2D/J2DIndBlock.h"
#include "JSystem/J2D/J2DMaterial.h"
#include "JSystem/J2D/J2DTevBlock.h"
#include "JSystem/J2D/J2DTypes.h"
#include "JSystem/J3D/J3DTypes.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/J3D/J3DAnmTexPattern.h"
#include "JSystem/J3D/J3DAnmTevRegKey.h"
#include "JSystem/JUtility/JUTTexture.h"
#include "types.h"

/**
 * @note Address: 0x80051EA4
 * @note Size: 0x120
 * __ct__11J2DMaterialFv
 */
J2DMaterial::J2DMaterial()
    : mColorBlock()
    , mTexGenBlock()
    , mPeBlock()
{
	mPane         = nullptr;
	mIndex        = -1;
	mTevBlock     = nullptr;
	mIndBlock     = nullptr;
	mAnmPtr       = nullptr;
	mMaterialMode = 1;
	mIsVisible    = 1;
}

/**
 * @note Address: 0x8005203C
 * @note Size: 0x14C
 */
J2DMaterial::J2DMaterial(u32 flag)
{
	mPane              = nullptr;
	mIndex             = -1;
	mTevBlock          = createTevBlock((flag >> 16) & 0x1F, true);
	mIndBlock          = createIndBlock((flag >> 24) & 0x1, true);
	mAnmPtr            = nullptr;
	mMaterialMode      = 1;
	mIsVisible         = 1;
	mMaterialAlphaCalc = 1;
}

/**
 * @note Address: 0x80052188
 * @note Size: 0xC0
 */
J2DMaterial::~J2DMaterial()
{
	delete mTevBlock;
	delete mIndBlock;
	delete mAnmPtr;
}

/**
 * @note Address: 0x80052248
 * @note Size: 0x84
 */
void J2DMaterial::setGX()
{
	if (!mIsVisible) {
		return;
	}

	mColorBlock.setGX();
	mTexGenBlock.setGX();

	if (mTevBlock) {
		mTevBlock->setGX();
	}

	if (mIndBlock) {
		mIndBlock->setGX();
	}

	mPeBlock.setGX();
}

/**
 * @note Address: 0x800522CC
 * @note Size: 0x1B4
 */
J2DTevBlock* J2DMaterial::createTevBlock(int stageCount, bool p2)
{
	if (p2) {
		if (stageCount <= 1) {
			return new J2DTevBlock1();
		}
		if (stageCount == 2) {
			return new J2DTevBlock2();
		}
		if (stageCount <= 4) {
			return new J2DTevBlock4();
		}
		if (stageCount <= 8) {
			return new J2DTevBlock8();
		}
		return new J2DTevBlock16();
	}
	if (stageCount <= 1) {
		return new (-4) J2DTevBlock1();
	}
	if (stageCount == 2) {
		return new (-4) J2DTevBlock2();
	}
	if (stageCount <= 4) {
		return new (-4) J2DTevBlock4();
	}
	if (stageCount <= 8) {
		return new (-4) J2DTevBlock8();
	}
	return new (-4) J2DTevBlock16();
}

/**
 * @note Address: 0x80052480
 * @note Size: 0x1D8
 */
J2DIndBlock* J2DMaterial::createIndBlock(int stageCount, bool p2)
{
	if (p2) {
		if (stageCount != 0) {
			return new J2DIndBlockFull();
		}
		return new J2DIndBlockNull();
	}
	if (stageCount != 0) {
		return new (-4) J2DIndBlockFull();
	}
	return new (-4) J2DIndBlockNull();
}

/**
 * @note Address: 0x800526C8
 * @note Size: 0xC8
 */
void J2DMaterial::makeAnmPointer()
{
	if (!mAnmPtr) {
		mAnmPtr = new J2DMaterialAnmPointer;
	}
}

/**
 * @note Address: 0x80052790
 * @note Size: 0x144
 */
void J2DMaterial::setAnimation(J2DAnmColor* animation)
{
	if (animation || mAnmPtr) {
		makeAnmPointer();
		mAnmPtr->mColorAnm    = animation;
		mAnmPtr->mColorIds[0] = -1;

		if (animation) {
			u32 count = animation->getUpdateMaterialNum();
			u16 index = mIndex;
			for (u16 i = 0; i < count; i++) {
				if (index == animation->getUpdateMaterialID(i)) {
					mAnmPtr->mColorIds[0] = i;
					return;
				}
			}
		}
	}
}

/**
 * @note Address: 0x800528D4
 * @note Size: 0x1A4
 */
void J2DMaterial::setAnimation(J2DAnmTextureSRTKey* animation)
{
	if (animation || mAnmPtr) {
		makeAnmPointer();
		mAnmPtr->mSRTAnm = animation;
		for (int i = 0; i < 8; i++) {
			mAnmPtr->mSRTIds[i] = -1;
		}

		if (animation) {
			u32 count = animation->getUpdateMaterialNum();
			u32 index = getIndex();
			for (u16 i = 0; i < (u16)count; i++) {
				if ((u16)index == animation->getUpdateMaterialID(i)) {
					mAnmPtr->mSRTIds[animation->getUpdateTexMtxID(i)] = i;
				}
			}
		}
	}
}

/**
 * @note Address: 0x80052A78
 * @note Size: 0x194
 */
void J2DMaterial::setAnimation(J2DAnmTexPattern* animation)
{
	if (animation || mAnmPtr) {
		makeAnmPointer();
		mAnmPtr->mPatternAnm = animation;
		for (int i = 0; i < 8; i++) {
			mAnmPtr->mPatternIds[i] = -1;
		}

		if (animation) {
			u32 count                        = animation->getUpdateMaterialNum();
			u32 index                        = getIndex();
			J3DAnmTexPatternFullTable* table = animation->getAnmTable();
			for (u16 i = 0; i < count; i++) {
				if (index == animation->getUpdateMaterialID(i)) {
					mAnmPtr->mPatternIds[((u8*)(table->mData[(u32)i * 2]))[4]] = i; // NB: need to fix up this struct eventually
				}
			}
		}
	}
}

/**
 * @note Address: 0x80052C0C
 * @note Size: 0x1FC
 */
void J2DMaterial::setAnimation(J2DAnmTevRegKey* animation)
{
	if (animation || mAnmPtr) {
		makeAnmPointer();
		mAnmPtr->mTevAnm = animation;
		for (int i = 0; i < 4; i++) {
			mAnmPtr->mTevCRegIds[i] = -1;
		}

		if (animation) {
			u32 cCount = animation->getCRegUpdateMaterialNum();
			u32 cIndex = getIndex();
			for (u16 i = 0; i < cCount; i++) {
				if (cIndex == animation->getCRegUpdateMaterialID(i)) {
					mAnmPtr->mTevCRegIds[((u8*)&(animation->getAnmCRegKeyTable()[i].mTables[4]))[0]] = i;
				}
			}
		}

		for (int i = 0; i < 4; i++) {
			mAnmPtr->mTevKRegIds[i] = -1;
		}

		if (animation) {

			u32 kCount = animation->getKRegUpdateMaterialNum();
			u32 kIndex = getIndex();
			for (u16 i = 0; i < kCount; i++) {
				if (kIndex == animation->getKRegUpdateMaterialID(i)) {
					mAnmPtr->mTevKRegIds[((u8*)&(animation->getAnmKRegKeyTable()[i].mTables[4]))[0]] = i;
				}
			}
		}
	}
}

/**
 * @note Address: 0x80052E08
 * @note Size: 0x470
 */
void J2DMaterial::animation()
{
	if (!mAnmPtr) {
		return;
	}

	if (mAnmPtr->mColorAnm && mAnmPtr->mColorIds[0] != 0xFFFF) {
		GXColor color;
		mAnmPtr->mColorAnm->getColor(mAnmPtr->mColorIds[0], &color);
		getColorBlock()->setMatColor(0, color);
	}

	if (mAnmPtr->mSRTAnm) {
		for (u8 i = 0; i < 8; i++) {
			if (mAnmPtr->mSRTIds[i] != 0xFFFF) {
				J3DTextureSRTInfo info3D;
				mAnmPtr->mSRTAnm->getTransform(mAnmPtr->mSRTIds[i], &info3D);
				J2DTextureSRTInfo info2D;
				info2D.mScaleX       = info3D.mScaleX;
				info2D.mScaleY       = info3D.mScaleY;
				info2D.mRotationDeg  = (360.0f * f32((u16)info3D.mRotation)) / 65535.0f;
				info2D.mTranslationX = info3D.mTranslationX;
				info2D.mTranslationY = info3D.mTranslationY;

				J2DTexMtx texMtx;
				getTexGenBlock()->getTexMtx(i, texMtx);

				texMtx.getTexMtxInfo().mTextureSRTInfo = info2D;
				getTexGenBlock()->setTexMtx(i, texMtx);
				getTexGenBlock()->getTexCoord(i).setTexGenMtx(i * 3 + 30);
			}
		}
	}

	if (getTevBlock() && mAnmPtr->mPatternAnm) {
		for (u8 i = 0; i < 8; i++) {
			if (mAnmPtr->mPatternIds[i] != 0xFFFF) {
				JUTTexture* texture = getTevBlock()->getTexture(i);
				if (!texture) {
					continue;
				}

				u16 idx = mAnmPtr->mPatternIds[i];
				u16 texNo;
				mAnmPtr->mPatternAnm->getTexNo(idx, &texNo);
				getTevBlock()->setTexNo(i, texNo);

				ResTIMG* img = mAnmPtr->mPatternAnm->getResTIMG(idx);
				if (texture->getTexInfo() != img) {
					JUTPalette* palette = nullptr;
					u32 tlut            = GX_TLUT0;
					if (img->mPaletteFormat != 0) {
						palette = mAnmPtr->mPatternAnm->getPalette(idx);
						if (palette->getNumColors() > 256) {
							tlut = i % 4 + 16;
						} else {
							tlut = i;
						}
					}

					texture->storeTIMG(img, palette, (GXTlut)tlut);
				}
			}
		}
	}

	if (getTevBlock() && mAnmPtr->mTevAnm) {
		for (u8 i = 0; i < 4; i++) {
			if (mAnmPtr->mTevCRegIds[i] != 0xFFFF) {
				J2DGXColorS10 color;
				mAnmPtr->mTevAnm->getTevColorReg(mAnmPtr->mTevCRegIds[i], &color);
				getTevBlock()->setTevColor(i, color);
			}
		}

		for (u8 i = 0; i < 4; i++) {
			u16 idx = mAnmPtr->mTevKRegIds[i];
			if (idx != 0xFFFF) {
				JUtility::TColor konstColor;
				mAnmPtr->mTevAnm->getTevKonstReg(idx, &konstColor);
				getTevBlock()->setTevKColor(i, konstColor);
			}
		}
	}
	/*
	stwu     r1, -0x110(r1)
	mflr     r0
	stw      r0, 0x114(r1)
	stfd     f31, 0x100(r1)
	psq_st   f31, 264(r1), 0, qr0
	stfd     f30, 0xf0(r1)
	psq_st   f30, 248(r1), 0, qr0
	stfd     f29, 0xe0(r1)
	psq_st   f29, 232(r1), 0, qr0
	stfd     f28, 0xd0(r1)
	psq_st   f28, 216(r1), 0, qr0
	stfd     f27, 0xc0(r1)
	psq_st   f27, 200(r1), 0, qr0
	stmw     r26, 0xa8(r1)
	mr       r28, r3
	lwz      r4, 0x84(r3)
	cmplwi   r4, 0
	beq      lbl_8005323C
	lwz      r3, 0(r4)
	cmplwi   r3, 0
	beq      lbl_80052ECC
	lhz      r4, 0x10(r4)
	cmplwi   r4, 0xffff
	beq      lbl_80052ECC
	lwz      r12, 0(r3)
	addi     r5, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x20(r1)
	stw      r0, 0xc(r1)
	lbz      r5, 0xc(r1)
	lbz      r4, 0xd(r1)
	lbz      r3, 0xe(r1)
	lbz      r0, 0xf(r1)
	stb      r5, 0x14(r1)
	stb      r4, 0x15(r1)
	stb      r3, 0x16(r1)
	stb      r0, 0x17(r1)
	lwz      r0, 0x14(r1)
	stw      r0, 0x18(r1)
	lbz      r3, 0x18(r1)
	lbz      r0, 0x19(r1)
	stb      r3, 0x10(r28)
	lbz      r3, 0x1a(r1)
	stb      r0, 0x11(r28)
	lbz      r0, 0x1b(r1)
	stb      r3, 0x12(r28)
	stb      r0, 0x13(r28)

lbl_80052ECC:
	lwz      r3, 0x84(r28)
	lwz      r0, 4(r3)
	cmplwi   r0, 0
	beq      lbl_8005300C
	lis      r3, j2dDefaultTexMtxInfo@ha
	li       r30, 0
	addi     r31, r3, j2dDefaultTexMtxInfo@l
	li       r29, 0
	b        lbl_80053000

lbl_80052EF0:
	rlwinm   r3, r30, 1, 0x17, 0x1e
	lwz      r5, 0x84(r28)
	addi     r0, r3, 0x12
	clrlwi   r27, r30, 0x18
	lhzx     r4, r5, r0
	cmplwi   r4, 0xffff
	beq      lbl_80052FF8
	lwz      r3, 4(r5)
	addi     r5, r1, 0x34
	lfs      f1, 8(r3)
	bl       calcTransform__19J2DAnmTextureSRTKeyCFfUsP17J3DTextureSRTInfo
	lha      r4, 0x3c(r1)
	lis      r0, 0x4330
	lis      r3, j2dDefaultTexMtxInfo@ha
	lfs      f7, 4(r31)
	clrlwi   r4, r4, 0x10
	lfs      f6, 8(r31)
	stw      r4, 0xa4(r1)
	addi     r6, r3, j2dDefaultTexMtxInfo@l
	lfs      f5, 0xc(r31)
	mr       r4, r27
	stw      r0, 0xa0(r1)
	addi     r3, r28, 0x28
	lfd      f1, lbl_805168D0@sda21(r2)
	addi     r5, r1, 0x48
	lfd      f0, 0xa0(r1)
	lfs      f2, lbl_805168C8@sda21(r2)
	fsubs    f1, f0, f1
	lbz      r6, 0(r6)
	lbz      r0, 1(r31)
	lfs      f0, lbl_805168CC@sda21(r2)
	fmuls    f1, f2, f1
	lfs      f4, 0x10(r31)
	lfs      f3, 0x14(r31)
	lfs      f2, 0x18(r31)
	fdivs    f29, f1, f0
	lfs      f1, 0x1c(r31)
	lfs      f0, 0x20(r31)
	stfs     f7, 0x4c(r1)
	lfs      f31, 0x34(r1)
	stfs     f6, 0x50(r1)
	stfs     f5, 0x54(r1)
	lfs      f30, 0x38(r1)
	stb      r6, 0x48(r1)
	lfs      f28, 0x40(r1)
	stb      r0, 0x49(r1)
	lfs      f27, 0x44(r1)
	stfs     f4, 0x58(r1)
	stfs     f3, 0x5c(r1)
	stfs     f2, 0x60(r1)
	stfs     f1, 0x64(r1)
	stfs     f0, 0x68(r1)
	bl       getTexMtx__14J2DTexGenBlockFUlR9J2DTexMtx
	stfs     f31, 0x58(r1)
	mr       r4, r27
	addi     r3, r28, 0x28
	addi     r5, r1, 0x48
	stfs     f30, 0x5c(r1)
	stfs     f29, 0x60(r1)
	stfs     f28, 0x64(r1)
	stfs     f27, 0x68(r1)
	bl       setTexMtx__14J2DTexGenBlockFUlR9J2DTexMtx
	slwi     r0, r27, 2
	addi     r4, r29, 0x1e
	add      r3, r28, r0
	stb      r4, 0x2e(r3)

lbl_80052FF8:
	addi     r30, r30, 1
	addi     r29, r29, 3

lbl_80053000:
	clrlwi   r0, r30, 0x18
	cmplwi   r0, 8
	blt      lbl_80052EF0

lbl_8005300C:
	lwz      r0, 0x70(r28)
	cmplwi   r0, 0
	beq      lbl_80053134
	lwz      r3, 0x84(r28)
	lwz      r0, 8(r3)
	cmplwi   r0, 0
	beq      lbl_80053134
	li       r30, 0
	b        lbl_80053128

lbl_80053030:
	rlwinm   r29, r30, 1, 0x17, 0x1e
	lwz      r3, 0x84(r28)
	addi     r0, r29, 0x22
	clrlwi   r27, r30, 0x18
	lhzx     r0, r3, r0
	cmplwi   r0, 0xffff
	beq      lbl_80053124
	lwz      r3, 0x70(r28)
	mr       r4, r27
	lwz      r12, 0(r3)
	lwz      r12, 0xa0(r12)
	mtctr    r12
	bctrl
	or.      r31, r3, r3
	beq      lbl_80053124
	lwz      r3, 0x84(r28)
	addi     r0, r29, 0x22
	addi     r5, r1, 8
	lhzx     r26, r3, r0
	lwz      r3, 8(r3)
	mr       r4, r26
	bl       getTexNo__16J2DAnmTexPatternCFUsPUs
	lwz      r3, 0x70(r28)
	mr       r4, r27
	lhz      r5, 8(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x84(r28)
	mr       r4, r26
	lwz      r3, 8(r3)
	bl       getResTIMG__16J2DAnmTexPatternCFUs
	lwz      r0, 0x20(r31)
	mr       r29, r3
	cmplw    r0, r29
	beq      lbl_80053124
	lbz      r0, 8(r29)
	li       r5, 0
	li       r6, 0
	cmplwi   r0, 0
	beq      lbl_80053118
	lwz      r3, 0x84(r28)
	mr       r4, r26
	lwz      r3, 8(r3)
	bl       getPalette__16J2DAnmTexPatternCFUs
	lhz      r0, 0x14(r3)
	mr       r5, r3
	cmplwi   r0, 0x100
	ble      lbl_80053114
	slwi     r0, r30, 0x1e
	srwi     r3, r27, 0x1f
	subf     r0, r3, r0
	rotlwi   r0, r0, 2
	add      r3, r0, r3
	addi     r6, r3, 0x10
	b        lbl_80053118

lbl_80053114:
	mr       r6, r27

lbl_80053118:
	mr       r3, r31
	mr       r4, r29
	bl       storeTIMG__10JUTTextureFPC7ResTIMGP10JUTPalette7_GXTlut

lbl_80053124:
	addi     r30, r30, 1

lbl_80053128:
	clrlwi   r0, r30, 0x18
	cmplwi   r0, 8
	blt      lbl_80053030

lbl_80053134:
	lwz      r0, 0x70(r28)
	cmplwi   r0, 0
	beq      lbl_8005323C
	lwz      r3, 0x84(r28)
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	beq      lbl_8005323C
	li       r26, 0
	b        lbl_800531C0

lbl_80053158:
	rlwinm   r3, r26, 1, 0x17, 0x1e
	lwz      r5, 0x84(r28)
	addi     r0, r3, 0x32
	clrlwi   r27, r26, 0x18
	lhzx     r4, r5, r0
	cmplwi   r4, 0xffff
	beq      lbl_800531BC
	lwz      r3, 0xc(r5)
	addi     r5, r1, 0x2c
	bl       getTevColorReg__15J2DAnmTevRegKeyCFUsP11_GXColorS10
	lha      r7, 0x2c(r1)
	mr       r4, r27
	lha      r6, 0x2e(r1)
	addi     r5, r1, 0x24
	lha      r3, 0x30(r1)
	lha      r0, 0x32(r1)
	sth      r7, 0x24(r1)
	sth      r6, 0x26(r1)
	sth      r3, 0x28(r1)
	sth      r0, 0x2a(r1)
	lwz      r3, 0x70(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl

lbl_800531BC:
	addi     r26, r26, 1

lbl_800531C0:
	clrlwi   r0, r26, 0x18
	cmplwi   r0, 4
	blt      lbl_80053158
	li       r26, 0
	b        lbl_80053230

lbl_800531D4:
	rlwinm   r3, r26, 1, 0x17, 0x1e
	lwz      r4, 0x84(r28)
	addi     r0, r3, 0x3a
	clrlwi   r27, r26, 0x18
	lhzx     r4, r4, r0
	cmplwi   r4, 0xffff
	beq      lbl_8005322C
	li       r0, -1
	addi     r5, r1, 0x1c
	stw      r0, 0x1c(r1)
	lwz      r3, 0x84(r28)
	lwz      r3, 0xc(r3)
	bl       getTevKonstReg__15J2DAnmTevRegKeyCFUsP8_GXColor
	lwz      r0, 0x1c(r1)
	mr       r4, r27
	addi     r5, r1, 0x10
	stw      r0, 0x10(r1)
	lwz      r3, 0x70(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl

lbl_8005322C:
	addi     r26, r26, 1

lbl_80053230:
	clrlwi   r0, r26, 0x18
	cmplwi   r0, 4
	blt      lbl_800531D4

lbl_8005323C:
	psq_l    f31, 264(r1), 0, qr0
	lfd      f31, 0x100(r1)
	psq_l    f30, 248(r1), 0, qr0
	lfd      f30, 0xf0(r1)
	psq_l    f29, 232(r1), 0, qr0
	lfd      f29, 0xe0(r1)
	psq_l    f28, 216(r1), 0, qr0
	lfd      f28, 0xd0(r1)
	psq_l    f27, 200(r1), 0, qr0
	lfd      f27, 0xc0(r1)
	lmw      r26, 0xa8(r1)
	lwz      r0, 0x114(r1)
	mtlr     r0
	addi     r1, r1, 0x110
	blr
	*/
}

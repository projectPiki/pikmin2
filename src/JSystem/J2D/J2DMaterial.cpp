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
		mAnmPtr->mColorAnm = animation;
		mAnmPtr->mColorIds = -1;

		if (animation) {
			u32 count = animation->getUpdateMaterialNum();
			u16 index = mIndex;
			for (u16 i = 0; i < count; i++) {
				if (index == animation->getUpdateMaterialID(i)) {
					mAnmPtr->mColorIds = i;
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

	if (mAnmPtr->mColorAnm && mAnmPtr->mColorIds != 0xFFFF) {
		GXColor color;
		mAnmPtr->mColorAnm->getColor(mAnmPtr->mColorIds, &color);
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
					GXTlut tlut         = GX_TLUT0;
					if (img->mPaletteFormat != 0) {
						palette = mAnmPtr->mPatternAnm->getPalette(idx);
						if (palette->getNumColors() > 256) {
							tlut = (GXTlut)(i % 4 + 16);
						} else {
							tlut = (GXTlut)i;
						}
					}

					texture->storeTIMG(img, palette, tlut);
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
}

#include "JSystem/J3D/J3DAnmBase.h"
#include "JSystem/J3D/J3DAnmCluster.h"
#include "JSystem/J3D/J3DAnmColor.h"
#include "JSystem/J3D/J3DAnmTevRegKey.h"
#include "JSystem/J3D/J3DAnmTexPattern.h"
#include "JSystem/J3D/J3DAnmTextureSRTKey.h"
#include "JSystem/J3D/J3DAnmTransform.h"
#include "JSystem/J3D/J3DAnmVtxColor.h"
#include "JSystem/J3D/J3DFrameCtrl.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/JUtility/JUTNameTab.h"
#include "types.h"

template <class T>
f32 J3DGetKeyFrameInterpolation(f32, J3DAnmKeyTableBase*, T*);

/**
 * @note Address: 0x80067678
 * @note Size: 0x30
 */
void J3DFrameCtrl::init(s16 i_end)
{
	mAttribute = 2;
	mState     = 0;
	mStart     = 0;
	mEnd       = i_end;
	mLoop      = 0;
	mRate      = 1.0f;
	mFrame     = 0.0f;
}

/**
 * @note Address: 0x800676A8
 * @note Size: 0x474
 */
void J3DFrameCtrl::update()
{
	mState = 0;
	mFrame += mRate;
	switch (mAttribute) {
	case 0:
		if (mFrame < mStart) {
			mFrame = mStart;
			mRate  = 0.0f;
			mState |= 1;
		}
		if (mFrame >= mEnd) {
			mFrame = mEnd - 0.001f;
			mRate  = 0.0f;
			mState |= 1;
		}
		break;
	case 1:
		if (mFrame < mStart) {
			mFrame = mStart;
			mRate  = 0.0f;
			mState |= 1;
		}
		if (mFrame >= mEnd) {
			mFrame = mStart;
			mRate  = 0.0f;
			mState |= 1;
		}
		break;
	case 2:
		while (mFrame < mStart) {
			mState |= 2;
			if (mLoop - mStart <= 0.0f) {
				break;
			}
			mFrame += mLoop - mStart;
		}
		while (mFrame >= mEnd) {
			mState |= 2;
			if (mEnd - mLoop <= 0.0f) {
				break;
			}
			mFrame -= mEnd - mLoop;
		}
		break;
	case 3:
		if (mFrame >= mEnd) {
			mFrame = mEnd - (mFrame - mEnd);
			mRate  = -mRate;
		}
		if (mFrame < mStart) {
			mFrame = mStart - (mFrame - mStart);
			mRate  = 0.0f;
			mState |= 1;
		}
		break;
	case 4:
		if (mFrame >= mEnd - 1.0f) {
			mFrame = (mEnd - 1.0f) - (mFrame - (mEnd - 1.0f));
			mRate  = -mRate;
		}
		if (mFrame < mStart) {
			mFrame = mStart - (mFrame - mStart);
			mRate  = -mRate;
			mState |= 2;
		}
		break;
	}
}

/**
 * @note Address: 0x80067B1C
 * @note Size: 0x360
 */
void J3DAnmTransformFull::getTransform(u16 idx, J3DTransformInfo* info) const
{
	u16 tableIdx                     = idx * 3;
	J3DAnmTransformFullTable* xTable = &mTable[tableIdx];
	J3DAnmTransformFullTable* yTable = &mTable[tableIdx + 1];
	J3DAnmTransformFullTable* zTable = &mTable[tableIdx + 2];

	if (getFrame() < 0.0f) {
		info->mScale.x = mScaleVals[xTable->mScaleOffset];
		info->mScale.y = mScaleVals[yTable->mScaleOffset];
		info->mScale.z = mScaleVals[zTable->mScaleOffset];

		info->mRotation.x = mRotationVals[xTable->mRotationOffset];
		info->mRotation.y = mRotationVals[yTable->mRotationOffset];
		info->mRotation.z = mRotationVals[zTable->mRotationOffset];

		info->mTranslation.x = mTranslationVals[xTable->mTranslationOffset];
		info->mTranslation.y = mTranslationVals[yTable->mTranslationOffset];
		info->mTranslation.z = mTranslationVals[zTable->mTranslationOffset];

	} else {
		u32 maxFrame = (int)(getFrame() + 0.5f);

		// X VALUES
		if (maxFrame >= xTable->mScaleMaxFrame) {
			info->mScale.x = mScaleVals[xTable->mScaleMaxFrame - 1 + xTable->mScaleOffset];
		} else {
			info->mScale.x = mScaleVals[xTable->mScaleOffset + maxFrame];
		}

		if (maxFrame >= xTable->mRotationMaxFrame) {
			info->mRotation.x = mRotationVals[xTable->mRotationMaxFrame - 1 + xTable->mRotationOffset];
		} else {
			info->mRotation.x = mRotationVals[xTable->mRotationOffset + maxFrame];
		}

		if (maxFrame >= xTable->mTranslationMaxFrame) {
			info->mTranslation.x = mTranslationVals[xTable->mTranslationMaxFrame - 1 + xTable->mTranslationOffset];
		} else {
			info->mTranslation.x = mTranslationVals[xTable->mTranslationOffset + maxFrame];
		}

		// Y VALUES
		if (maxFrame >= yTable->mScaleMaxFrame) {
			info->mScale.y = mScaleVals[yTable->mScaleMaxFrame - 1 + yTable->mScaleOffset];
		} else {
			info->mScale.y = mScaleVals[yTable->mScaleOffset + maxFrame];
		}

		if (maxFrame >= yTable->mRotationMaxFrame) {
			info->mRotation.y = mRotationVals[yTable->mRotationMaxFrame - 1 + yTable->mRotationOffset];
		} else {
			info->mRotation.y = mRotationVals[yTable->mRotationOffset + maxFrame];
		}

		if (maxFrame >= yTable->mTranslationMaxFrame) {
			info->mTranslation.y = mTranslationVals[yTable->mTranslationMaxFrame - 1 + yTable->mTranslationOffset];
		} else {
			info->mTranslation.y = mTranslationVals[yTable->mTranslationOffset + maxFrame];
		}

		// Z VALUES
		if (maxFrame >= zTable->mScaleMaxFrame) {
			info->mScale.z = mScaleVals[zTable->mScaleMaxFrame - 1 + zTable->mScaleOffset];
		} else {
			info->mScale.z = mScaleVals[zTable->mScaleOffset + maxFrame];
		}

		if (maxFrame >= zTable->mRotationMaxFrame) {
			info->mRotation.z = mRotationVals[zTable->mRotationMaxFrame - 1 + zTable->mRotationOffset];
		} else {
			info->mRotation.z = mRotationVals[zTable->mRotationOffset + maxFrame];
		}

		if (maxFrame >= zTable->mTranslationMaxFrame) {
			info->mTranslation.z = mTranslationVals[zTable->mTranslationMaxFrame - 1 + zTable->mTranslationOffset];
		} else {
			info->mTranslation.z = mTranslationVals[zTable->mTranslationOffset + maxFrame];
		}
	}
}

/**
 * @note Address: 0x80067E7C
 * @note Size: 0x420
 * TODO: Needs J3DGetKeyFrameAnimation to be defined.
 */
void J3DAnmTransformKey::calcTransform(f32 p1, u16 p2, J3DTransformInfo* info) const
{
	u16 idx                       = p2 * 3;
	J3DAnmTransformKeyTable* xInf = &mTable[idx];
	J3DAnmTransformKeyTable* yInf = &mTable[idx + 1];
	J3DAnmTransformKeyTable* zInf = &mTable[idx + 2];

	switch (xInf->mScaleInfo.mMaxFrame) {
	case 0:
		info->mScale.x = 1;
		break;
	case 1:
		info->mScale.x = mScaleVals[xInf->mScaleInfo.mOffset];
		break;
	default:
		info->mScale.x = J3DGetKeyFrameInterpolation<f32>(p1, &xInf->mScaleInfo, &mScaleVals[xInf->mScaleInfo.mOffset]);
	}

	switch (yInf->mScaleInfo.mMaxFrame) {
	case 0:
		info->mScale.y = 1;
		break;
	case 1:
		info->mScale.y = mScaleVals[yInf->mScaleInfo.mOffset];
		break;
	default:
		info->mScale.y = J3DGetKeyFrameInterpolation<f32>(p1, &yInf->mScaleInfo, &mScaleVals[yInf->mScaleInfo.mOffset]);
	}

	switch (zInf->mScaleInfo.mMaxFrame) {
	case 0:
		info->mScale.z = 1;
		break;
	case 1:
		info->mScale.z = mScaleVals[zInf->mScaleInfo.mOffset];
		break;
	default:
		info->mScale.z = J3DGetKeyFrameInterpolation<f32>(p1, &zInf->mScaleInfo, &mScaleVals[zInf->mScaleInfo.mOffset]);
	}

	switch (xInf->mRotationInfo.mMaxFrame) {
	case 0:
		info->mRotation.x = 0;
		break;
	case 1:
		info->mRotation.x = mRotationVals[xInf->mRotationInfo.mOffset] << _20;
		break;
	default:
		info->mRotation.x
		    = static_cast<s32>(J3DGetKeyFrameInterpolation<s16>(p1, &xInf->mRotationInfo, &mRotationVals[xInf->mRotationInfo.mOffset]))
		   << _20;
	}

	switch (yInf->mRotationInfo.mMaxFrame) {
	case 0:
		info->mRotation.y = 0;
		break;
	case 1:
		info->mRotation.y = mRotationVals[yInf->mRotationInfo.mOffset] << _20;
		break;
	default:
		info->mRotation.y
		    = static_cast<s32>(J3DGetKeyFrameInterpolation<s16>(p1, &yInf->mRotationInfo, &mRotationVals[yInf->mRotationInfo.mOffset]))
		   << _20;
	}

	switch (zInf->mRotationInfo.mMaxFrame) {
	case 0:
		info->mRotation.z = 0;
		break;
	case 1:
		info->mRotation.z = mRotationVals[zInf->mRotationInfo.mOffset] << _20;
		break;
	default:
		info->mRotation.z
		    = static_cast<s32>(J3DGetKeyFrameInterpolation<s16>(p1, &zInf->mRotationInfo, &mRotationVals[zInf->mRotationInfo.mOffset]))
		   << _20;
	}

	switch (xInf->mTranslationInfo.mMaxFrame) {
	case 0:
		info->mTranslation.x = 0;
		break;
	case 1:
		info->mTranslation.x = mTranslationVals[xInf->mTranslationInfo.mOffset];
		break;
	default:
		info->mTranslation.x
		    = J3DGetKeyFrameInterpolation<f32>(p1, &xInf->mTranslationInfo, &mTranslationVals[xInf->mTranslationInfo.mOffset]);
	}

	switch (yInf->mTranslationInfo.mMaxFrame) {
	case 0:
		info->mTranslation.y = 0;
		break;
	case 1:
		info->mTranslation.y = mTranslationVals[yInf->mTranslationInfo.mOffset];
		break;
	default:
		info->mTranslation.y
		    = J3DGetKeyFrameInterpolation<f32>(p1, &yInf->mTranslationInfo, &mTranslationVals[yInf->mTranslationInfo.mOffset]);
	}

	switch (zInf->mTranslationInfo.mMaxFrame) {
	case 0:
		info->mTranslation.z = 0;
		break;
	case 1:
		info->mTranslation.z = mTranslationVals[zInf->mTranslationInfo.mOffset];
		break;
	default:
		info->mTranslation.z
		    = J3DGetKeyFrameInterpolation<f32>(p1, &zInf->mTranslationInfo, &mTranslationVals[zInf->mTranslationInfo.mOffset]);
	}
}

/**
 * @note Address: 0x8006829C
 * @note Size: 0x268
 */
void J3DAnmTextureSRTKey::calcTransform(f32 p1, u16 p2, J3DTextureSRTInfo* info) const
{
	u16 idx                       = p2 * 3;
	J3DAnmTransformKeyTable* xInf = &mTable1[idx];
	J3DAnmTransformKeyTable* yInf = &mTable1[idx + 1];
	J3DAnmTransformKeyTable* zInf = &mTable1[idx + 2];

	switch (xInf->mScaleInfo.mMaxFrame) {
	case 0:
		info->mScaleX = 1;
		break;
	case 1:
		info->mScaleX = mScale1Vals[xInf->mScaleInfo.mOffset];
		break;
	default:
		info->mScaleX = J3DGetKeyFrameInterpolation<f32>(p1, &xInf->mScaleInfo, &mScale1Vals[xInf->mScaleInfo.mOffset]);
	}

	switch (yInf->mScaleInfo.mMaxFrame) {
	case 0:
		info->mScaleY = 1;
		break;
	case 1:
		info->mScaleY = mScale1Vals[yInf->mScaleInfo.mOffset];
		break;
	default:
		info->mScaleY = J3DGetKeyFrameInterpolation<f32>(p1, &yInf->mScaleInfo, &mScale1Vals[yInf->mScaleInfo.mOffset]);
	}

	switch (zInf->mRotationInfo.mMaxFrame) {
	case 0:
		info->mRotation = 0;
		break;
	case 1:
		info->mRotation = mRotation1Vals[zInf->mRotationInfo.mOffset] << _0C;
		break;
	default:
		info->mRotation
		    = static_cast<s32>(J3DGetKeyFrameInterpolation<s16>(p1, &zInf->mRotationInfo, &mRotation1Vals[zInf->mRotationInfo.mOffset]))
		   << _0C;
	}

	switch (xInf->mTranslationInfo.mMaxFrame) {
	case 0:
		info->mTranslationX = 0;
		break;
	case 1:
		info->mTranslationX = mTranslation1Vals[xInf->mTranslationInfo.mOffset];
		break;
	default:
		info->mTranslationX
		    = J3DGetKeyFrameInterpolation<f32>(p1, &xInf->mTranslationInfo, &mTranslation1Vals[xInf->mTranslationInfo.mOffset]);
	}

	switch (yInf->mTranslationInfo.mMaxFrame) {
	case 0:
		info->mTranslationY = 0;
		break;
	case 1:
		info->mTranslationY = mTranslation1Vals[yInf->mTranslationInfo.mOffset];
		break;
	default:
		info->mTranslationY
		    = J3DGetKeyFrameInterpolation<f32>(p1, &yInf->mTranslationInfo, &mTranslation1Vals[yInf->mTranslationInfo.mOffset]);
	}
}

/**
 * @note Address: 0x80068504
 * @note Size: 0x94
 */
f32 J3DAnmClusterFull::getWeight(u16 idx) const
{
	int index      = idx;
	int maxFrame   = (getFrame() + 0.5f);
	int tableFrame = mTables[index].mMaxFrame;
	if (getFrame() < 0.0f) {
		return mWeights[mTables[index].mOffset];
	}
	if (maxFrame >= tableFrame) {
		return mWeights[tableFrame - 1 + mTables[index].mOffset];
	}

	return mWeights[maxFrame + mTables[index].mOffset];
}

/**
 * @note Address: 0x80068598
 * @note Size: 0x84
 * getWeight__16J3DAnmClusterKeyCFUs
 */
f32 J3DAnmClusterKey::getWeight(u16 idx) const
{
	switch (mTables[idx].mMaxFrame) {
	case 0:
		return 1.0f;
	case 1:
		return mWeights[mTables[idx].mOffset];
	}

	return J3DGetKeyFrameInterpolation<f32>(mCurrentFrame, &mTables[idx], &mWeights[mTables[idx].mOffset]);
}

/**
 * @note Address: 0x8006861C
 * @note Size: 0x178
 */
void J3DAnmVtxColorFull::getColor(u8 col, u16 idx, GXColor* outColor) const
{
	int index                   = idx;
	J3DAnmColorFullTable* table = &getAnmTable(col)[idx];
	if (getFrame() < 0.0f) {
		outColor->r = mRedVals[table->mData[J3DAnmColorFullTable::RED][J3DAnmColorFullTable::Offset]];
		outColor->g = mGreenVals[table->mData[J3DAnmColorFullTable::GREEN][J3DAnmColorFullTable::Offset]];
		outColor->b = mBlueVals[table->mData[J3DAnmColorFullTable::BLUE][J3DAnmColorFullTable::Offset]];
		outColor->a = mAlphaVals[table->mData[J3DAnmColorFullTable::ALPHA][J3DAnmColorFullTable::Offset]];
		return;
	}

	int maxFrame = getFrame() + 0.5f;
	int redMax   = table->mData[J3DAnmColorFullTable::RED][J3DAnmColorFullTable::MaxFrame];
	if (maxFrame >= redMax) {
		outColor->r = mRedVals[table->mData[J3DAnmColorFullTable::RED][J3DAnmColorFullTable::Offset] - 1 + redMax];
	} else {
		outColor->r = mRedVals[table->mData[J3DAnmColorFullTable::RED][J3DAnmColorFullTable::Offset] + maxFrame];
	}

	int greenMax = table->mData[J3DAnmColorFullTable::GREEN][J3DAnmColorFullTable::MaxFrame];
	if (maxFrame >= greenMax) {
		outColor->g = mGreenVals[table->mData[J3DAnmColorFullTable::GREEN][J3DAnmColorFullTable::Offset] - 1 + greenMax];
	} else {
		outColor->g = mGreenVals[table->mData[J3DAnmColorFullTable::GREEN][J3DAnmColorFullTable::Offset] + maxFrame];
	}

	int blueMax = table->mData[J3DAnmColorFullTable::BLUE][J3DAnmColorFullTable::MaxFrame];
	if (maxFrame >= blueMax) {
		outColor->b = mBlueVals[table->mData[J3DAnmColorFullTable::BLUE][J3DAnmColorFullTable::Offset] - 1 + blueMax];
	} else {
		outColor->b = mBlueVals[table->mData[J3DAnmColorFullTable::BLUE][J3DAnmColorFullTable::Offset] + maxFrame];
	}

	int alphaMax = table->mData[J3DAnmColorFullTable::ALPHA][J3DAnmColorFullTable::MaxFrame];
	if (maxFrame >= alphaMax) {
		outColor->a = mAlphaVals[table->mData[J3DAnmColorFullTable::ALPHA][J3DAnmColorFullTable::Offset] - 1 + alphaMax];
	} else {
		outColor->a = mAlphaVals[table->mData[J3DAnmColorFullTable::ALPHA][J3DAnmColorFullTable::Offset] + maxFrame];
	}
}

/**
 * @note Address: 0x80068794
 * @note Size: 0x2F4
 */
void J3DAnmVtxColorKey::getColor(u8 col, u16 idx, GXColor* outColor) const
{
	int index                  = idx;
	J3DAnmColorKeyTable* table = &getAnmTable(col)[idx];
	if (getFrame() < 0.0f) {
		outColor->r = mRedVals[table->mColorInfo[J3DAnmColorKeyTable::RED].mOffset];
		outColor->g = mGreenVals[table->mColorInfo[J3DAnmColorKeyTable::GREEN].mOffset];
		outColor->b = mBlueVals[table->mColorInfo[J3DAnmColorKeyTable::BLUE].mOffset];
		outColor->a = mAlphaVals[table->mColorInfo[J3DAnmColorKeyTable::ALPHA].mOffset];
		return;
	}

	// int maxFrame = getFrame() + 0.5f;
	// int redMax = table->mData[J3DAnmColorFullTable::RED][J3DAnmColorFullTable::MaxFrame];
	// if (maxFrame >= redMax) {
	// 	outColor->r = mRedVals[table->mData[J3DAnmColorFullTable::RED][J3DAnmColorFullTable::Offset] - 1 + redMax];
	// } else {
	// 	outColor->r = mRedVals[table->mData[J3DAnmColorFullTable::RED][J3DAnmColorFullTable::Offset] + maxFrame];
	// }

	// int greenMax = table->mData[J3DAnmColorFullTable::GREEN][J3DAnmColorFullTable::MaxFrame];
	// if (maxFrame >= greenMax) {
	// 	outColor->g = mGreenVals[table->mData[J3DAnmColorFullTable::GREEN][J3DAnmColorFullTable::Offset] - 1 + greenMax];
	// } else {
	// 	outColor->g = mGreenVals[table->mData[J3DAnmColorFullTable::GREEN][J3DAnmColorFullTable::Offset] + maxFrame];
	// }

	// int blueMax = table->mData[J3DAnmColorFullTable::BLUE][J3DAnmColorFullTable::MaxFrame];
	// if (maxFrame >= blueMax) {
	// 	outColor->b = mBlueVals[table->mData[J3DAnmColorFullTable::BLUE][J3DAnmColorFullTable::Offset] - 1 + blueMax];
	// } else {
	// 	outColor->b = mBlueVals[table->mData[J3DAnmColorFullTable::BLUE][J3DAnmColorFullTable::Offset] + maxFrame];
	// }

	// int alphaMax = table->mData[J3DAnmColorFullTable::ALPHA][J3DAnmColorFullTable::MaxFrame];
	// if (maxFrame >= alphaMax) {
	// 	outColor->a = mAlphaVals[table->mData[J3DAnmColorFullTable::ALPHA][J3DAnmColorFullTable::Offset] - 1 + alphaMax];
	// } else {
	// 	outColor->a = mAlphaVals[table->mData[J3DAnmColorFullTable::ALPHA][J3DAnmColorFullTable::Offset] + maxFrame];
	// }
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	clrlwi   r0, r5, 0x10
	mr       r29, r3
	rlwinm   r3, r4, 2, 0x16, 0x1d
	mr       r30, r6
	add      r3, r29, r3
	mulli    r0, r0, 0x18
	lwz      r3, 0x18(r3)
	add      r31, r3, r0
	lhz      r0, 0(r31)
	cmpwi    r0, 1
	beq      lbl_800687FC
	bge      lbl_80068814
	cmpwi    r0, 0
	bge      lbl_800687F0
	b        lbl_80068814

lbl_800687F0:
	li       r0, 0
	stb      r0, 0(r30)
	b        lbl_80068878

lbl_800687FC:
	lhz      r0, 2(r31)
	lwz      r3, 0x20(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	stb      r0, 0(r30)
	b        lbl_80068878

lbl_80068814:
	lhz      r0, 2(r31)
	mr       r3, r31
	lwz      r4, 0x20(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J3DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516A1C@sda21(r2)
	fcmpo    cr0, f31, f0
	cror     2, 0, 2
	bne      lbl_80068850
	li       r0, 0
	stb      r0, 0(r30)
	b        lbl_80068878

lbl_80068850:
	lfs      f0, lbl_80516A34@sda21(r2)
	fcmpo    cr0, f31, f0
	cror     2, 0, 2
	bne      lbl_80068870
	psq_st   f31, 20(r1), 1, qr2
	lbz      r0, 0x14(r1)
	stb      r0, 0(r30)
	b        lbl_80068878

lbl_80068870:
	li       r0, 0xff
	stb      r0, 0(r30)

lbl_80068878:
	lhz      r0, 6(r31)
	cmpwi    r0, 1
	beq      lbl_800688A0
	bge      lbl_800688B8
	cmpwi    r0, 0
	bge      lbl_80068894
	b        lbl_800688B8

lbl_80068894:
	li       r0, 0
	stb      r0, 1(r30)
	b        lbl_8006891C

lbl_800688A0:
	lhz      r0, 8(r31)
	lwz      r3, 0x24(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	stb      r0, 1(r30)
	b        lbl_8006891C

lbl_800688B8:
	lhz      r0, 8(r31)
	addi     r3, r31, 6
	lwz      r4, 0x24(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J3DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516A1C@sda21(r2)
	fcmpo    cr0, f31, f0
	cror     2, 0, 2
	bne      lbl_800688F4
	li       r0, 0
	stb      r0, 1(r30)
	b        lbl_8006891C

lbl_800688F4:
	lfs      f0, lbl_80516A34@sda21(r2)
	fcmpo    cr0, f31, f0
	cror     2, 0, 2
	bne      lbl_80068914
	psq_st   f31, 16(r1), 1, qr2
	lbz      r0, 0x10(r1)
	stb      r0, 1(r30)
	b        lbl_8006891C

lbl_80068914:
	li       r0, 0xff
	stb      r0, 1(r30)

lbl_8006891C:
	lhz      r0, 0xc(r31)
	cmpwi    r0, 1
	beq      lbl_80068944
	bge      lbl_8006895C
	cmpwi    r0, 0
	bge      lbl_80068938
	b        lbl_8006895C

lbl_80068938:
	li       r0, 0
	stb      r0, 2(r30)
	b        lbl_800689C0

lbl_80068944:
	lhz      r0, 0xe(r31)
	lwz      r3, 0x28(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	stb      r0, 2(r30)
	b        lbl_800689C0

lbl_8006895C:
	lhz      r0, 0xe(r31)
	addi     r3, r31, 0xc
	lwz      r4, 0x28(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J3DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516A1C@sda21(r2)
	fcmpo    cr0, f31, f0
	cror     2, 0, 2
	bne      lbl_80068998
	li       r0, 0
	stb      r0, 2(r30)
	b        lbl_800689C0

lbl_80068998:
	lfs      f0, lbl_80516A34@sda21(r2)
	fcmpo    cr0, f31, f0
	cror     2, 0, 2
	bne      lbl_800689B8
	psq_st   f31, 12(r1), 1, qr2
	lbz      r0, 0xc(r1)
	stb      r0, 2(r30)
	b        lbl_800689C0

lbl_800689B8:
	li       r0, 0xff
	stb      r0, 2(r30)

lbl_800689C0:
	lhz      r0, 0x12(r31)
	cmpwi    r0, 1
	beq      lbl_800689E8
	bge      lbl_80068A00
	cmpwi    r0, 0
	bge      lbl_800689DC
	b        lbl_80068A00

lbl_800689DC:
	li       r0, 0
	stb      r0, 3(r30)
	b        lbl_80068A64

lbl_800689E8:
	lhz      r0, 0x14(r31)
	lwz      r3, 0x2c(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	stb      r0, 3(r30)
	b        lbl_80068A64

lbl_80068A00:
	lhz      r0, 0x14(r31)
	addi     r3, r31, 0x12
	lwz      r4, 0x2c(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J3DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516A1C@sda21(r2)
	fcmpo    cr0, f31, f0
	cror     2, 0, 2
	bne      lbl_80068A3C
	li       r0, 0
	stb      r0, 3(r30)
	b        lbl_80068A64

lbl_80068A3C:
	lfs      f0, lbl_80516A34@sda21(r2)
	fcmpo    cr0, f31, f0
	cror     2, 0, 2
	bne      lbl_80068A5C
	psq_st   f31, 8(r1), 1, qr2
	lbz      r0, 8(r1)
	stb      r0, 3(r30)
	b        lbl_80068A64

lbl_80068A5C:
	li       r0, 0xff
	stb      r0, 3(r30)

lbl_80068A64:
	psq_l    f31, 56(r1), 0, qr0
	lwz      r0, 0x44(r1)
	lfd      f31, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/**
 * @note Address: 0x80068A88
 * @note Size: 0xA8
 */
void J3DAnmColor::searchUpdateMaterialID(J3DModelData* data)
{
	for (u16 i = 0; i < mUpdateMaterialNum; i++) {
		JUTNameTab* matNameTable = data->mMaterialTable.mMaterialNames;
		int index                = matNameTable->getIndex(mNameTab.getName(i));
		if (index != -1) {
			mUpdateMaterialID[i] = index;
		} else {
			mUpdateMaterialID[i] = 0xFFFF;
		}
	}
}

/**
 * @note Address: 0x80068B30
 * @note Size: 0x170
 */
void J3DAnmColorFull::getColor(u16 tableIndex, GXColor* color) const
{
	J3DAnmColorFullTable* table = mTable + tableIndex;
	if (getFrame() < 0.0f) {
		color->r = mRedVals[table->mData[J3DAnmColorFullTable::RED][J3DAnmColorFullTable::Offset]];
		color->g = mGreenVals[table->mData[J3DAnmColorFullTable::GREEN][J3DAnmColorFullTable::Offset]];
		color->b = mBlueVals[table->mData[J3DAnmColorFullTable::BLUE][J3DAnmColorFullTable::Offset]];
		color->a = mAlphaVals[table->mData[J3DAnmColorFullTable::ALPHA][J3DAnmColorFullTable::Offset]];
		return;
	}

	int frame  = getFrame() + 0.5f;
	int redMax = table->mData[J3DAnmColorFullTable::RED][J3DAnmColorFullTable::MaxFrame];
	if (frame >= redMax) {
		color->r = mRedVals[table->mData[J3DAnmColorFullTable::RED][J3DAnmColorFullTable::Offset] - 1 + redMax];
	} else {
		color->r = mRedVals[table->mData[J3DAnmColorFullTable::RED][J3DAnmColorFullTable::Offset] + frame];
	}

	int greenMax = table->mData[J3DAnmColorFullTable::GREEN][J3DAnmColorFullTable::MaxFrame];
	if (frame >= greenMax) {
		color->g = mGreenVals[table->mData[J3DAnmColorFullTable::GREEN][J3DAnmColorFullTable::Offset] - 1 + greenMax];
	} else {
		color->g = mGreenVals[table->mData[J3DAnmColorFullTable::GREEN][J3DAnmColorFullTable::Offset] + frame];
	}

	int blueMax = table->mData[J3DAnmColorFullTable::BLUE][J3DAnmColorFullTable::MaxFrame];
	if (frame >= blueMax) {
		color->b = mBlueVals[table->mData[J3DAnmColorFullTable::BLUE][J3DAnmColorFullTable::Offset] - 1 + blueMax];
	} else {
		color->b = mBlueVals[table->mData[J3DAnmColorFullTable::BLUE][J3DAnmColorFullTable::Offset] + frame];
	}

	int alphaMax = table->mData[J3DAnmColorFullTable::ALPHA][J3DAnmColorFullTable::MaxFrame];
	if (frame >= alphaMax) {
		color->a = mAlphaVals[table->mData[J3DAnmColorFullTable::ALPHA][J3DAnmColorFullTable::Offset] - 1 + alphaMax];
	} else {
		color->a = mAlphaVals[table->mData[J3DAnmColorFullTable::ALPHA][J3DAnmColorFullTable::Offset] + frame];
	}
}

/**
 * @note Address: 0x80068CA0
 * @note Size: 0x2CC
 */
void J3DAnmColorKey::getColor(u16, _GXColor*) const
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	clrlwi   r0, r4, 0x10
	mr       r29, r3
	mulli    r0, r0, 0x18
	lwz      r3, 0x3c(r3)
	mr       r30, r5
	add      r31, r3, r0
	lhz      r0, 0(r31)
	cmpwi    r0, 1
	beq      lbl_80068D00
	bge      lbl_80068D18
	cmpwi    r0, 0
	bge      lbl_80068CF4
	b        lbl_80068D18

lbl_80068CF4:
	li       r0, 0
	stb      r0, 0(r30)
	b        lbl_80068D74

lbl_80068D00:
	lhz      r0, 2(r31)
	lwz      r3, 0x2c(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	stb      r0, 0(r30)
	b        lbl_80068D74

lbl_80068D18:
	lhz      r0, 2(r31)
	mr       r3, r31
	lwz      r4, 0x2c(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J3DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516A1C@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_80068D50
	li       r0, 0
	stb      r0, 0(r30)
	b        lbl_80068D74

lbl_80068D50:
	lfs      f0, lbl_80516A34@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_80068D68
	li       r0, 0xff
	stb      r0, 0(r30)
	b        lbl_80068D74

lbl_80068D68:
	psq_st   f31, 20(r1), 1, qr2
	lbz      r0, 0x14(r1)
	stb      r0, 0(r30)

lbl_80068D74:
	lhz      r0, 6(r31)
	cmpwi    r0, 1
	beq      lbl_80068D9C
	bge      lbl_80068DB4
	cmpwi    r0, 0
	bge      lbl_80068D90
	b        lbl_80068DB4

lbl_80068D90:
	li       r0, 0
	stb      r0, 1(r30)
	b        lbl_80068E10

lbl_80068D9C:
	lhz      r0, 8(r31)
	lwz      r3, 0x30(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	stb      r0, 1(r30)
	b        lbl_80068E10

lbl_80068DB4:
	lhz      r0, 8(r31)
	addi     r3, r31, 6
	lwz      r4, 0x30(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J3DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516A1C@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_80068DEC
	li       r0, 0
	stb      r0, 1(r30)
	b        lbl_80068E10

lbl_80068DEC:
	lfs      f0, lbl_80516A34@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_80068E04
	li       r0, 0xff
	stb      r0, 1(r30)
	b        lbl_80068E10

lbl_80068E04:
	psq_st   f31, 16(r1), 1, qr2
	lbz      r0, 0x10(r1)
	stb      r0, 1(r30)

lbl_80068E10:
	lhz      r0, 0xc(r31)
	cmpwi    r0, 1
	beq      lbl_80068E38
	bge      lbl_80068E50
	cmpwi    r0, 0
	bge      lbl_80068E2C
	b        lbl_80068E50

lbl_80068E2C:
	li       r0, 0
	stb      r0, 2(r30)
	b        lbl_80068EAC

lbl_80068E38:
	lhz      r0, 0xe(r31)
	lwz      r3, 0x34(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	stb      r0, 2(r30)
	b        lbl_80068EAC

lbl_80068E50:
	lhz      r0, 0xe(r31)
	addi     r3, r31, 0xc
	lwz      r4, 0x34(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J3DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516A1C@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_80068E88
	li       r0, 0
	stb      r0, 2(r30)
	b        lbl_80068EAC

lbl_80068E88:
	lfs      f0, lbl_80516A34@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_80068EA0
	li       r0, 0xff
	stb      r0, 2(r30)
	b        lbl_80068EAC

lbl_80068EA0:
	psq_st   f31, 12(r1), 1, qr2
	lbz      r0, 0xc(r1)
	stb      r0, 2(r30)

lbl_80068EAC:
	lhz      r0, 0x12(r31)
	cmpwi    r0, 1
	beq      lbl_80068ED4
	bge      lbl_80068EEC
	cmpwi    r0, 0
	bge      lbl_80068EC8
	b        lbl_80068EEC

lbl_80068EC8:
	li       r0, 0
	stb      r0, 3(r30)
	b        lbl_80068F48

lbl_80068ED4:
	lhz      r0, 0x14(r31)
	lwz      r3, 0x38(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	stb      r0, 3(r30)
	b        lbl_80068F48

lbl_80068EEC:
	lhz      r0, 0x14(r31)
	addi     r3, r31, 0x12
	lwz      r4, 0x38(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J3DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516A1C@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_80068F24
	li       r0, 0
	stb      r0, 3(r30)
	b        lbl_80068F48

lbl_80068F24:
	lfs      f0, lbl_80516A34@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_80068F3C
	li       r0, 0xff
	stb      r0, 3(r30)
	b        lbl_80068F48

lbl_80068F3C:
	psq_st   f31, 8(r1), 1, qr2
	lbz      r0, 8(r1)
	stb      r0, 3(r30)

lbl_80068F48:
	psq_l    f31, 56(r1), 0, qr0
	lwz      r0, 0x44(r1)
	lfd      f31, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/**
 * @note Address: 0x80068F6C
 * @note Size: 0xB4
 */
void J3DAnmTexPattern::getTexNo(u16 idx, u16* texNo) const
{
	int index                        = idx;
	J3DAnmTexPatternFullTable* table = mAnmTable;
	u32 maxFrame                     = table[index].mData[0][0];
	if (getFrame() < 0.0f) {
		*texNo = _0C[table[index].mData[0][1]];
		return;
	}

	if (getFrame() >= (f32)maxFrame) {
		*texNo = _0C[maxFrame - 1 + table[index].mData[0][1]];
		return;
	}

	*texNo = _0C[(int)mCurrentFrame + table[index].mData[0][1]];
}

/**
 * @note Address: 0x80069020
 * @note Size: 0x124
 */
void J3DAnmTextureSRTKey::searchUpdateMaterialID(J3DModelData*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, 0x55555556@ha
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r30, r3
	mr       r31, r4
	li       r28, 0
	addi     r29, r5, 0x55555556@l
	b        lbl_80069094

lbl_80069048:
	lwz      r27, 0x64(r31)
	mr       r4, r28
	addi     r3, r30, 0x30
	bl       getName__10JUTNameTabCFUs
	mr       r4, r3
	mr       r3, r27
	bl       getIndex__10JUTNameTabCFPCc
	cmpwi    r3, -1
	beq      lbl_8006907C
	lwz      r4, 0x2c(r30)
	rlwinm   r0, r28, 1, 0xf, 0x1e
	sthx     r3, r4, r0
	b        lbl_80069090

lbl_8006907C:
	lis      r4, 0x0000FFFF@ha
	lwz      r3, 0x2c(r30)
	addi     r4, r4, 0x0000FFFF@l
	rlwinm   r0, r28, 1, 0xf, 0x1e
	sthx     r4, r3, r0

lbl_80069090:
	addi     r28, r28, 1

lbl_80069094:
	lhz      r0, 0x14(r30)
	clrlwi   r4, r28, 0x10
	mulhw    r3, r29, r0
	srwi     r0, r3, 0x1f
	add      r0, r3, r0
	clrlwi   r0, r0, 0x10
	cmplw    r4, r0
	blt      lbl_80069048
	lis      r3, 0x55555556@ha
	li       r28, 0
	addi     r29, r3, 0x55555556@l
	b        lbl_80069110

lbl_800690C4:
	lwz      r27, 0x64(r31)
	mr       r4, r28
	addi     r3, r30, 0x64
	bl       getName__10JUTNameTabCFUs
	mr       r4, r3
	mr       r3, r27
	bl       getIndex__10JUTNameTabCFPCc
	cmpwi    r3, -1
	beq      lbl_800690F8
	lwz      r4, 0x60(r30)
	rlwinm   r0, r28, 1, 0xf, 0x1e
	sthx     r3, r4, r0
	b        lbl_8006910C

lbl_800690F8:
	lis      r4, 0x0000FFFF@ha
	lwz      r3, 0x60(r30)
	addi     r4, r4, 0x0000FFFF@l
	rlwinm   r0, r28, 1, 0xf, 0x1e
	sthx     r4, r3, r0

lbl_8006910C:
	addi     r28, r28, 1

lbl_80069110:
	lhz      r0, 0x4a(r30)
	clrlwi   r4, r28, 0x10
	mulhw    r3, r29, r0
	srwi     r0, r3, 0x1f
	add      r0, r3, r0
	clrlwi   r0, r0, 0x10
	cmplw    r4, r0
	blt      lbl_800690C4
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x80069144
 * @note Size: 0x2CC
 */
void J3DAnmTevRegKey::getTevColorReg(u16 p1, _GXColorS10* color) const
{
	// _48[p1].mTables[0].getColorField(mCurrentFrame, &color->r, _50);
	// _48[p1].mTables[1].getColorField(mCurrentFrame, &color->g, _54);
	// _48[p1].mTables[2].getColorField(mCurrentFrame, &color->b, _58);
	// _48[p1].mTables[3].getColorField(mCurrentFrame, &color->a, _5C);
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	clrlwi   r0, r4, 0x10
	mr       r29, r3
	mulli    r0, r0, 0x1c
	lwz      r3, 0x48(r3)
	mr       r30, r5
	add      r31, r3, r0
	lhz      r0, 0(r31)
	cmpwi    r0, 1
	beq      lbl_800691A4
	bge      lbl_800691BC
	cmpwi    r0, 0
	bge      lbl_80069198
	b        lbl_800691BC

lbl_80069198:
	li       r0, 0
	sth      r0, 0(r30)
	b        lbl_80069218

lbl_800691A4:
	lhz      r0, 2(r31)
	lwz      r3, 0x50(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	sth      r0, 0(r30)
	b        lbl_80069218

lbl_800691BC:
	lhz      r0, 2(r31)
	mr       r3, r31
	lwz      r4, 0x50(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J3DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516A40@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_800691F4
	li       r0, -1024
	sth      r0, 0(r30)
	b        lbl_80069218

lbl_800691F4:
	lfs      f0, lbl_80516A44@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_8006920C
	li       r0, 0x3ff
	sth      r0, 0(r30)
	b        lbl_80069218

lbl_8006920C:
	psq_st   f31, 20(r1), 1, qr5
	lha      r0, 0x14(r1)
	sth      r0, 0(r30)

lbl_80069218:
	lhz      r0, 6(r31)
	cmpwi    r0, 1
	beq      lbl_80069240
	bge      lbl_80069258
	cmpwi    r0, 0
	bge      lbl_80069234
	b        lbl_80069258

lbl_80069234:
	li       r0, 0
	sth      r0, 2(r30)
	b        lbl_800692B4

lbl_80069240:
	lhz      r0, 8(r31)
	lwz      r3, 0x54(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	sth      r0, 2(r30)
	b        lbl_800692B4

lbl_80069258:
	lhz      r0, 8(r31)
	addi     r3, r31, 6
	lwz      r4, 0x54(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J3DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516A40@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_80069290
	li       r0, -1024
	sth      r0, 2(r30)
	b        lbl_800692B4

lbl_80069290:
	lfs      f0, lbl_80516A44@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_800692A8
	li       r0, 0x3ff
	sth      r0, 2(r30)
	b        lbl_800692B4

lbl_800692A8:
	psq_st   f31, 16(r1), 1, qr5
	lha      r0, 0x10(r1)
	sth      r0, 2(r30)

lbl_800692B4:
	lhz      r0, 0xc(r31)
	cmpwi    r0, 1
	beq      lbl_800692DC
	bge      lbl_800692F4
	cmpwi    r0, 0
	bge      lbl_800692D0
	b        lbl_800692F4

lbl_800692D0:
	li       r0, 0
	sth      r0, 4(r30)
	b        lbl_80069350

lbl_800692DC:
	lhz      r0, 0xe(r31)
	lwz      r3, 0x58(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	sth      r0, 4(r30)
	b        lbl_80069350

lbl_800692F4:
	lhz      r0, 0xe(r31)
	addi     r3, r31, 0xc
	lwz      r4, 0x58(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J3DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516A40@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_8006932C
	li       r0, -1024
	sth      r0, 4(r30)
	b        lbl_80069350

lbl_8006932C:
	lfs      f0, lbl_80516A44@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_80069344
	li       r0, 0x3ff
	sth      r0, 4(r30)
	b        lbl_80069350

lbl_80069344:
	psq_st   f31, 12(r1), 1, qr5
	lha      r0, 0xc(r1)
	sth      r0, 4(r30)

lbl_80069350:
	lhz      r0, 0x12(r31)
	cmpwi    r0, 1
	beq      lbl_80069378
	bge      lbl_80069390
	cmpwi    r0, 0
	bge      lbl_8006936C
	b        lbl_80069390

lbl_8006936C:
	li       r0, 0
	sth      r0, 6(r30)
	b        lbl_800693EC

lbl_80069378:
	lhz      r0, 0x14(r31)
	lwz      r3, 0x5c(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	sth      r0, 6(r30)
	b        lbl_800693EC

lbl_80069390:
	lhz      r0, 0x14(r31)
	addi     r3, r31, 0x12
	lwz      r4, 0x5c(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J3DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516A40@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_800693C8
	li       r0, -1024
	sth      r0, 6(r30)
	b        lbl_800693EC

lbl_800693C8:
	lfs      f0, lbl_80516A44@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_800693E0
	li       r0, 0x3ff
	sth      r0, 6(r30)
	b        lbl_800693EC

lbl_800693E0:
	psq_st   f31, 8(r1), 1, qr5
	lha      r0, 8(r1)
	sth      r0, 6(r30)

lbl_800693EC:
	psq_l    f31, 56(r1), 0, qr0
	lwz      r0, 0x44(r1)
	lfd      f31, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/**
 * @note Address: 0x80069410
 * @note Size: 0x2CC
 */
void J3DAnmTevRegKey::getTevKonstReg(u16, _GXColor*) const
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	clrlwi   r0, r4, 0x10
	mr       r29, r3
	mulli    r0, r0, 0x1c
	lwz      r3, 0x4c(r3)
	mr       r30, r5
	add      r31, r3, r0
	lhz      r0, 0(r31)
	cmpwi    r0, 1
	beq      lbl_80069470
	bge      lbl_80069488
	cmpwi    r0, 0
	bge      lbl_80069464
	b        lbl_80069488

lbl_80069464:
	li       r0, 0
	stb      r0, 0(r30)
	b        lbl_800694E4

lbl_80069470:
	lhz      r0, 2(r31)
	lwz      r3, 0x60(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	stb      r0, 0(r30)
	b        lbl_800694E4

lbl_80069488:
	lhz      r0, 2(r31)
	mr       r3, r31
	lwz      r4, 0x60(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J3DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516A1C@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_800694C0
	li       r0, 0
	stb      r0, 0(r30)
	b        lbl_800694E4

lbl_800694C0:
	lfs      f0, lbl_80516A34@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_800694D8
	li       r0, 0xff
	stb      r0, 0(r30)
	b        lbl_800694E4

lbl_800694D8:
	psq_st   f31, 20(r1), 1, qr2
	lbz      r0, 0x14(r1)
	stb      r0, 0(r30)

lbl_800694E4:
	lhz      r0, 6(r31)
	cmpwi    r0, 1
	beq      lbl_8006950C
	bge      lbl_80069524
	cmpwi    r0, 0
	bge      lbl_80069500
	b        lbl_80069524

lbl_80069500:
	li       r0, 0
	stb      r0, 1(r30)
	b        lbl_80069580

lbl_8006950C:
	lhz      r0, 8(r31)
	lwz      r3, 0x64(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	stb      r0, 1(r30)
	b        lbl_80069580

lbl_80069524:
	lhz      r0, 8(r31)
	addi     r3, r31, 6
	lwz      r4, 0x64(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J3DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516A1C@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_8006955C
	li       r0, 0
	stb      r0, 1(r30)
	b        lbl_80069580

lbl_8006955C:
	lfs      f0, lbl_80516A34@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_80069574
	li       r0, 0xff
	stb      r0, 1(r30)
	b        lbl_80069580

lbl_80069574:
	psq_st   f31, 16(r1), 1, qr2
	lbz      r0, 0x10(r1)
	stb      r0, 1(r30)

lbl_80069580:
	lhz      r0, 0xc(r31)
	cmpwi    r0, 1
	beq      lbl_800695A8
	bge      lbl_800695C0
	cmpwi    r0, 0
	bge      lbl_8006959C
	b        lbl_800695C0

lbl_8006959C:
	li       r0, 0
	stb      r0, 2(r30)
	b        lbl_8006961C

lbl_800695A8:
	lhz      r0, 0xe(r31)
	lwz      r3, 0x68(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	stb      r0, 2(r30)
	b        lbl_8006961C

lbl_800695C0:
	lhz      r0, 0xe(r31)
	addi     r3, r31, 0xc
	lwz      r4, 0x68(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J3DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516A1C@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_800695F8
	li       r0, 0
	stb      r0, 2(r30)
	b        lbl_8006961C

lbl_800695F8:
	lfs      f0, lbl_80516A34@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_80069610
	li       r0, 0xff
	stb      r0, 2(r30)
	b        lbl_8006961C

lbl_80069610:
	psq_st   f31, 12(r1), 1, qr2
	lbz      r0, 0xc(r1)
	stb      r0, 2(r30)

lbl_8006961C:
	lhz      r0, 0x12(r31)
	cmpwi    r0, 1
	beq      lbl_80069644
	bge      lbl_8006965C
	cmpwi    r0, 0
	bge      lbl_80069638
	b        lbl_8006965C

lbl_80069638:
	li       r0, 0
	stb      r0, 3(r30)
	b        lbl_800696B8

lbl_80069644:
	lhz      r0, 0x14(r31)
	lwz      r3, 0x6c(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	stb      r0, 3(r30)
	b        lbl_800696B8

lbl_8006965C:
	lhz      r0, 0x14(r31)
	addi     r3, r31, 0x12
	lwz      r4, 0x6c(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J3DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516A1C@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_80069694
	li       r0, 0
	stb      r0, 3(r30)
	b        lbl_800696B8

lbl_80069694:
	lfs      f0, lbl_80516A34@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_800696AC
	li       r0, 0xff
	stb      r0, 3(r30)
	b        lbl_800696B8

lbl_800696AC:
	psq_st   f31, 8(r1), 1, qr2
	lbz      r0, 8(r1)
	stb      r0, 3(r30)

lbl_800696B8:
	psq_l    f31, 56(r1), 0, qr0
	lwz      r0, 0x44(r1)
	lfd      f31, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/**
 * @note Address: 0x800696DC
 * @note Size: 0x10C
 * searchUpdateMaterialID__15J3DAnmTevRegKeyFP12J3DModelData
 */
void J3DAnmTevRegKey::searchUpdateMaterialID(J3DModelData* data)
{
	u16 i;
	for (i = 0; i < mCRegUpdateMaterialNum; i++) {
		JUTNameTab* nameTable = data->mMaterialTable.mMaterialNames;
		int index             = nameTable->getIndex(mCRegNameTable.getName(i));
		if (index != -1) {
			mCRegUpdateMaterialID[i] = index;
		} else {
			mCRegUpdateMaterialID[i] = 0xFFFF;
		}
	}
	for (i = 0; i < mKRegUpdateMaterialNum; i++) {
		JUTNameTab* nameTable = data->mMaterialTable.mMaterialNames;
		int index             = nameTable->getIndex(mKRegNameTable.getName(i));
		if (index != -1) {
			mKRegUpdateMaterialID[i] = index;
		} else {
			mKRegUpdateMaterialID[i] = 0xFFFF;
		}
	}
}

/**
 * @note Address: 0x800697E8
 * @note Size: 0x84
 * __dt__14J3DAnmColorKeyFv
 */
// J3DAnmColorKey::~J3DAnmColorKey() { }

/**
 * @note Address: 0x8006986C
 * @note Size: 0x8
 */
// J3DAnmKind J3DAnmColorKey::getKind() const { return J3DAnmKind_ColorKey; }

/**
 * @note Address: 0x80069874
 * @note Size: 0x48
 * __dt__10J3DAnmBaseFv
 */
// J3DAnmBase::~J3DAnmBase() { }

/**
 * @note Address: 0x800698BC
 * @note Size: 0x74
 * __dt__11J3DAnmColorFv
 */
// J3DAnmColor::~J3DAnmColor() { }

/**
 * @note Address: 0x80069930
 * @note Size: 0x8
 */
// J3DAnmKind J3DAnmColor::getKind() const { return J3DAnmKind_Color; }

/**
 * @note Address: 0x80069938
 * @note Size: 0x4
 */
// void J3DAnmColor::getColor(u16, _GXColor*) const { }

/**
 * @note Address: 0x8006993C
 * @note Size: 0x84
 * __dt__15J3DAnmColorFullFv
 */
// J3DAnmColorFull::~J3DAnmColorFull() { }

/**
 * @note Address: 0x800699C0
 * @note Size: 0x8
 */
// J3DAnmKind J3DAnmColorFull::getKind() const { return J3DAnmKind_ColorFull; }

/**
 * @note Address: 0x800699C8
 * @note Size: 0x6C
 * __dt__17J3DAnmVtxColorKeyFv
 */
// J3DAnmVtxColorKey::~J3DAnmVtxColorKey() { }

/**
 * @note Address: 0x80069A34
 * @note Size: 0x8
 */
// J3DAnmKind J3DAnmVtxColorKey::getKind() const { return J3DAnmKind_VtxColorKey; }

/**
 * @note Address: 0x80069A3C
 * @note Size: 0x5C
 * __dt__14J3DAnmVtxColorFv
 */
// J3DAnmVtxColor::~J3DAnmVtxColor() { }

/**
 * @note Address: 0x80069A98
 * @note Size: 0x8
 */
// J3DAnmKind J3DAnmVtxColor::getKind() const { return J3DAnmKind_VtxColor; }

/**
 * @note Address: 0x80069AA0
 * @note Size: 0x4
 */
// void J3DAnmVtxColor::getColor(u8, u16, _GXColor*) const { }

/**
 * @note Address: 0x80069AA4
 * @note Size: 0x6C
 * __dt__18J3DAnmVtxColorFullFv
 */
// J3DAnmVtxColorFull::~J3DAnmVtxColorFull() { }

/**
 * @note Address: 0x80069B10
 * @note Size: 0x8
 */
// J3DAnmKind J3DAnmVtxColorFull::getKind() const { return J3DAnmKind_VtxColorFull; }

/**
 * @note Address: 0x80069B18
 * @note Size: 0x6C
 * __dt__16J3DAnmClusterKeyFv
 */
// J3DAnmClusterKey::~J3DAnmClusterKey() { }

/**
 * @note Address: 0x80069B84
 * @note Size: 0x8
 */
// J3DAnmKind J3DAnmClusterKey::getKind() const { return J3DAnmKind_ClusterKey; }

/**
 * @note Address: 0x80069B8C
 * @note Size: 0x5C
 * __dt__13J3DAnmClusterFv
 */
// J3DAnmCluster::~J3DAnmCluster() { }

/**
 * @note Address: 0x80069BE8
 * @note Size: 0x8
 */
// J3DAnmKind J3DAnmCluster::getKind() const { return J3DAnmKind_Cluster; }

/**
 * @note Address: 0x80069BF0
 * @note Size: 0x8
 */
f32 J3DAnmCluster::getWeight(u16) const
{
	/*
	lfs      f1, lbl_80516A18@sda21(r2)
	blr
	*/
}

/**
 * @note Address: 0x80069BF8
 * @note Size: 0x6C
 * __dt__17J3DAnmClusterFullFv
 */
// J3DAnmClusterFull::~J3DAnmClusterFull() { }

/**
 * @note Address: 0x80069C64
 * @note Size: 0x8
 */
// J3DAnmKind J3DAnmClusterFull::getKind() const { return J3DAnmKind_ClusterFull; }

/**
 * @note Address: 0x80069C6C
 * @note Size: 0x6C
 * __dt__19J3DAnmTransformFullFv
 */
// J3DAnmTransformFull::~J3DAnmTransformFull() { }

/**
 * @note Address: 0x80069CD8
 * @note Size: 0x8
 */
// J3DAnmKind J3DAnmTransformFull::getKind() const { return J3DAnmKind_TransformFull; }

/**
 * @note Address: 0x80069CE0
 * @note Size: 0x5C
 * __dt__15J3DAnmTransformFv
 */
// J3DAnmTransform::~J3DAnmTransform() { }

/**
 * @note Address: 0x80069D3C
 * @note Size: 0x8
 */
// J3DAnmKind J3DAnmTransform::getKind() const { return J3DAnmKind_Transform; }

template <typename T>
f32 J3DGetKeyFrameInterpolation(f32 frame, J3DAnmKeyTableBase* table, T* values)
{
	if (frame < values[0]) {
		return values[1];
	} else {
		if (table->mType == 0) {
			if (values[(table->mMaxFrame - 1) * 3] <= frame) {
				return values[(table->mMaxFrame - 1) * 3 + 1];
			} else {
				u32 tmp = table->mMaxFrame;
				while (tmp > 1) {
					u32 halfTmp = tmp / 2;
					u32 upIdx   = halfTmp * 3;
					if (frame >= values[upIdx]) {
						values = values + upIdx;
						tmp -= halfTmp;
					} else {
						tmp = halfTmp;
					}
				}
				return J3DHermiteInterpolation<T>(frame, &values[0], &values[1], &values[2], &values[3], &values[4], &values[5]);
			}
		} else if (values[(table->mMaxFrame - 1) * 4] <= frame) {
			return values[(table->mMaxFrame - 1) * 4 + 1];
		} else {
			u32 tmp = table->mMaxFrame;
			while (tmp > 1) {
				u32 halfTmp = tmp / 2;
				u32 upIdx   = halfTmp * 4;
				if (frame >= values[upIdx]) {
					values = values + upIdx;
					tmp -= halfTmp;
				} else {
					tmp = halfTmp;
				}
			}
			return J3DHermiteInterpolation<T>(frame, &values[0], &values[1], &values[3], &values[4], &values[5], &values[6]);
		}
	}
}
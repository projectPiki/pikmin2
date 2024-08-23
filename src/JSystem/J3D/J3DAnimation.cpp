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
	mAttribute = J3DAA_UNKNOWN_2;
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
	case J3DAA_UNKNOWN_0:
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
	case J3DAA_UNKNOWN_1:
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
	case J3DAA_UNKNOWN_2:
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
	case J3DAA_UNKNOWN_3:
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
	case J3DAA_UNKNOWN_4:
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
void J3DAnmTextureSRTKey::calcTransform(f32 frame, u16 index, J3DTextureSRTInfo* info) const
{
	u16 idx                       = index * 3;
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
		info->mScaleX = J3DGetKeyFrameInterpolation<f32>(frame, &xInf->mScaleInfo, &mScale1Vals[xInf->mScaleInfo.mOffset]);
	}

	switch (yInf->mScaleInfo.mMaxFrame) {
	case 0:
		info->mScaleY = 1;
		break;
	case 1:
		info->mScaleY = mScale1Vals[yInf->mScaleInfo.mOffset];
		break;
	default:
		info->mScaleY = J3DGetKeyFrameInterpolation<f32>(frame, &yInf->mScaleInfo, &mScale1Vals[yInf->mScaleInfo.mOffset]);
	}

	switch (zInf->mRotationInfo.mMaxFrame) {
	case 0:
		info->mRotation = 0;
		break;
	case 1:
		info->mRotation = mRotation1Vals[zInf->mRotationInfo.mOffset] << mRotationScale;
		break;
	default:
		info->mRotation
		    = static_cast<s32>(J3DGetKeyFrameInterpolation<s16>(frame, &zInf->mRotationInfo, &mRotation1Vals[zInf->mRotationInfo.mOffset]))
		   << mRotationScale;
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
		    = J3DGetKeyFrameInterpolation<f32>(frame, &xInf->mTranslationInfo, &mTranslation1Vals[xInf->mTranslationInfo.mOffset]);
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
		    = J3DGetKeyFrameInterpolation<f32>(frame, &yInf->mTranslationInfo, &mTranslation1Vals[yInf->mTranslationInfo.mOffset]);
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
	f32 frame;
	u16 index                  = idx * 3;
	J3DAnmColorKeyTable* table = &getAnmTable(col)[idx];
	switch (table->mColorInfo[J3DAnmColorFullTable::RED].mMaxFrame) {
	case 0:
		outColor->r = 0;
		break;
	case 1:
		outColor->r = mRedVals[table->mColorInfo[J3DAnmColorFullTable::RED].mOffset];
		break;
	default:
		frame = J3DGetKeyFrameInterpolation<s16>(mCurrentFrame, &table->mColorInfo[J3DAnmColorFullTable::RED],
		                                         &mRedVals[table->mColorInfo[J3DAnmColorFullTable::RED].mOffset]);
		if (frame <= 0.0f) {
			outColor->r = 0;
		} else if (frame <= 255.0f) {
			OSf32tou8(&frame, &outColor->r);
		} else {
			outColor->r = 255;
		}
	}

	switch (table->mColorInfo[J3DAnmColorFullTable::GREEN].mMaxFrame) {
	case 0:
		outColor->g = 0;
		break;
	case 1:
		outColor->g = mGreenVals[table->mColorInfo[J3DAnmColorFullTable::GREEN].mOffset];
		break;
	default:
		frame = J3DGetKeyFrameInterpolation<s16>(mCurrentFrame, &table->mColorInfo[J3DAnmColorFullTable::GREEN],
		                                         &mGreenVals[table->mColorInfo[J3DAnmColorFullTable::GREEN].mOffset]);
		if (frame <= 0.0f) {
			outColor->g = 0;
		} else if (frame <= 255.0f) {
			OSf32tou8(&frame, &outColor->g);
		} else {
			outColor->g = 255;
		}
	}

	switch (table->mColorInfo[J3DAnmColorFullTable::BLUE].mMaxFrame) {
	case 0:
		outColor->b = 0;
		break;
	case 1:
		outColor->b = mBlueVals[table->mColorInfo[J3DAnmColorFullTable::BLUE].mOffset];
		break;
	default:
		frame = J3DGetKeyFrameInterpolation<s16>(mCurrentFrame, &table->mColorInfo[J3DAnmColorFullTable::BLUE],
		                                         &mBlueVals[table->mColorInfo[J3DAnmColorFullTable::BLUE].mOffset]);
		if (frame <= 0.0f) {
			outColor->b = 0;
		} else if (frame <= 255.0f) {
			OSf32tou8(&frame, &outColor->b);
		} else {
			outColor->b = 255;
		}
	}

	switch (table->mColorInfo[J3DAnmColorFullTable::ALPHA].mMaxFrame) {
	case 0:
		outColor->a = 0;
		break;
	case 1:
		outColor->a = mAlphaVals[table->mColorInfo[J3DAnmColorFullTable::ALPHA].mOffset];
		break;
	default:
		frame = J3DGetKeyFrameInterpolation<s16>(mCurrentFrame, &table->mColorInfo[J3DAnmColorFullTable::ALPHA],
		                                         &mAlphaVals[table->mColorInfo[J3DAnmColorFullTable::ALPHA].mOffset]);
		if (frame <= 0.0f) {
			outColor->a = 0;
		} else if (frame <= 255.0f) {
			OSf32tou8(&frame, &outColor->a);
		} else {
			outColor->a = 255;
		}
	}
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
void J3DAnmColorKey::getColor(u16 tableIndex, GXColor* outColor) const
{
	f32 frame;
	J3DAnmColorKeyTable* table = mTable + tableIndex;
	switch (table->mColorInfo[J3DAnmColorFullTable::RED].mMaxFrame) {
	case 0:
		outColor->r = 0;
		break;
	case 1:
		outColor->r = mRedValue[table->mColorInfo[J3DAnmColorFullTable::RED].mOffset];
		break;
	default:
		frame = J3DGetKeyFrameInterpolation<s16>(mCurrentFrame, &table->mColorInfo[J3DAnmColorFullTable::RED],
		                                         &mRedValue[table->mColorInfo[J3DAnmColorFullTable::RED].mOffset]);
		if (frame < 0.0f) {
			outColor->r = 0;
		} else if (frame > 255.0f) {
			outColor->r = 255;
		} else {
			OSf32tou8(&frame, &outColor->r);
		}
	}

	switch (table->mColorInfo[J3DAnmColorFullTable::GREEN].mMaxFrame) {
	case 0:
		outColor->g = 0;
		break;
	case 1:
		outColor->g = mGreenValue[table->mColorInfo[J3DAnmColorFullTable::GREEN].mOffset];
		break;
	default:
		frame = J3DGetKeyFrameInterpolation<s16>(mCurrentFrame, &table->mColorInfo[J3DAnmColorFullTable::GREEN],
		                                         &mGreenValue[table->mColorInfo[J3DAnmColorFullTable::GREEN].mOffset]);
		if (frame < 0.0f) {
			outColor->g = 0;
		} else if (frame > 255.0f) {
			outColor->g = 255;
		} else {
			OSf32tou8(&frame, &outColor->g);
		}
	}

	switch (table->mColorInfo[J3DAnmColorFullTable::BLUE].mMaxFrame) {
	case 0:
		outColor->b = 0;
		break;
	case 1:
		outColor->b = mBlueValue[table->mColorInfo[J3DAnmColorFullTable::BLUE].mOffset];
		break;
	default:
		frame = J3DGetKeyFrameInterpolation<s16>(mCurrentFrame, &table->mColorInfo[J3DAnmColorFullTable::BLUE],
		                                         &mBlueValue[table->mColorInfo[J3DAnmColorFullTable::BLUE].mOffset]);
		if (frame < 0.0f) {
			outColor->b = 0;
		} else if (frame > 255.0f) {
			outColor->b = 255;
		} else {
			OSf32tou8(&frame, &outColor->b);
		}
	}

	switch (table->mColorInfo[J3DAnmColorFullTable::ALPHA].mMaxFrame) {
	case 0:
		outColor->a = 0;
		break;
	case 1:
		outColor->a = mAlphaValue[table->mColorInfo[J3DAnmColorFullTable::ALPHA].mOffset];
		break;
	default:
		frame = J3DGetKeyFrameInterpolation<s16>(mCurrentFrame, &table->mColorInfo[J3DAnmColorFullTable::ALPHA],
		                                         &mAlphaValue[table->mColorInfo[J3DAnmColorFullTable::ALPHA].mOffset]);
		if (frame < 0.0f) {
			outColor->a = 0;
		} else if (frame > 255.0f) {
			outColor->a = 255;
		} else {
			OSf32tou8(&frame, &outColor->a);
		}
	}
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
void J3DAnmTextureSRTKey::searchUpdateMaterialID(J3DMaterialTable* table)
{
	for (u16 i = 0; i < getUpdateMaterialNum(); i++) {
		s32 materialID = table->getMaterialName()->getIndex(getUpdateMaterialName()->getName(i));
		if (materialID != -1) {
			mUpdateMaterialID[i] = materialID;
		} else {
			mUpdateMaterialID[i] = 0xFFFF;
		}
	}
	for (u16 i = 0; i < getPostUpdateMaterialNum(); i++) {
		s32 materialID = table->getMaterialName()->getIndex(getPostUpdateMaterialName()->getName(i));
		if (materialID != -1) {
			mPostUpdateMaterialID[i] = materialID;
		} else {
			mPostUpdateMaterialID[i] = 0xFFFF;
		}
	}
}

/**
 * @note Address: 0x80069020
 * @note Size: 0x124
 */
void J3DAnmTextureSRTKey::searchUpdateMaterialID(J3DModelData* modelData) { searchUpdateMaterialID(&modelData->getMaterialTable()); }

/**
 * @note Address: 0x80069144
 * @note Size: 0x2CC
 */
void J3DAnmTevRegKey::getTevColorReg(u16 tableIndex, _GXColorS10* outColor) const
{
	f32 frame;
	J3DAnmCRegKeyTable* table = mCRegKeyTable + tableIndex;
	switch (table->mTables[J3DAnmColorFullTable::RED].mMaxFrame) {
	case 0:
		outColor->r = 0;
		break;
	case 1:
		outColor->r = mCRedVals[table->mTables[J3DAnmColorFullTable::RED].mOffset];
		break;
	default:
		frame = J3DGetKeyFrameInterpolation<s16>(mCurrentFrame, &table->mTables[J3DAnmColorFullTable::RED],
		                                         &mCRedVals[table->mTables[J3DAnmColorFullTable::RED].mOffset]);
		if (frame < -1024.0f) {
			outColor->r = -1024;
		} else if (frame > 1023.0f) {
			outColor->r = 1023;
		} else {
			OSf32tos16(&frame, &outColor->r);
		}
	}

	switch (table->mTables[J3DAnmColorFullTable::GREEN].mMaxFrame) {
	case 0:
		outColor->g = 0;
		break;
	case 1:
		outColor->g = mCGreenVals[table->mTables[J3DAnmColorFullTable::GREEN].mOffset];
		break;
	default:
		frame = J3DGetKeyFrameInterpolation<s16>(mCurrentFrame, &table->mTables[J3DAnmColorFullTable::GREEN],
		                                         &mCGreenVals[table->mTables[J3DAnmColorFullTable::GREEN].mOffset]);
		if (frame < -1024.0f) {
			outColor->g = -1024;
		} else if (frame > 1023.0f) {
			outColor->g = 1023;
		} else {
			OSf32tos16(&frame, &outColor->g);
		}
	}

	switch (table->mTables[J3DAnmColorFullTable::BLUE].mMaxFrame) {
	case 0:
		outColor->b = 0;
		break;
	case 1:
		outColor->b = mCBlueVals[table->mTables[J3DAnmColorFullTable::BLUE].mOffset];
		break;
	default:
		frame = J3DGetKeyFrameInterpolation<s16>(mCurrentFrame, &table->mTables[J3DAnmColorFullTable::BLUE],
		                                         &mCBlueVals[table->mTables[J3DAnmColorFullTable::BLUE].mOffset]);
		if (frame < -1024.0f) {
			outColor->b = -1024;
		} else if (frame > 1023.0f) {
			outColor->b = 1023;
		} else {
			OSf32tos16(&frame, &outColor->b);
		}
	}

	switch (table->mTables[J3DAnmColorFullTable::ALPHA].mMaxFrame) {
	case 0:
		outColor->a = 0;
		break;
	case 1:
		outColor->a = mCAlphaVals[table->mTables[J3DAnmColorFullTable::ALPHA].mOffset];
		break;
	default:
		frame = J3DGetKeyFrameInterpolation<s16>(mCurrentFrame, &table->mTables[J3DAnmColorFullTable::ALPHA],
		                                         &mCAlphaVals[table->mTables[J3DAnmColorFullTable::ALPHA].mOffset]);
		if (frame < -1024.0f) {
			outColor->a = -1024;
		} else if (frame > 1023.0f) {
			outColor->a = 1023;
		} else {
			OSf32tos16(&frame, &outColor->a);
		}
	}
}

/**
 * @note Address: 0x80069410
 * @note Size: 0x2CC
 */
void J3DAnmTevRegKey::getTevKonstReg(u16 tableIndex, GXColor* outColor) const
{
	f32 frame;
	J3DAnmKRegKeyTable* table = mKRegKeyTable + tableIndex;
	switch (table->mTables[J3DAnmColorFullTable::RED].mMaxFrame) {
	case 0:
		outColor->r = 0;
		break;
	case 1:
		outColor->r = mKRedVals[table->mTables[J3DAnmColorFullTable::RED].mOffset];
		break;
	default:
		frame = J3DGetKeyFrameInterpolation<s16>(mCurrentFrame, &table->mTables[J3DAnmColorFullTable::RED],
		                                         &mKRedVals[table->mTables[J3DAnmColorFullTable::RED].mOffset]);
		if (frame < 0.0f) {
			outColor->r = 0;
		} else if (frame > 255.0f) {
			outColor->r = 255;
		} else {
			OSf32tou8(&frame, &outColor->r);
		}
	}

	switch (table->mTables[J3DAnmColorFullTable::GREEN].mMaxFrame) {
	case 0:
		outColor->g = 0;
		break;
	case 1:
		outColor->g = mKGreenVals[table->mTables[J3DAnmColorFullTable::GREEN].mOffset];
		break;
	default:
		frame = J3DGetKeyFrameInterpolation<s16>(mCurrentFrame, &table->mTables[J3DAnmColorFullTable::GREEN],
		                                         &mKGreenVals[table->mTables[J3DAnmColorFullTable::GREEN].mOffset]);
		if (frame < 0.0f) {
			outColor->g = 0;
		} else if (frame > 255.0f) {
			outColor->g = 255;
		} else {
			OSf32tou8(&frame, &outColor->g);
		}
	}

	switch (table->mTables[J3DAnmColorFullTable::BLUE].mMaxFrame) {
	case 0:
		outColor->b = 0;
		break;
	case 1:
		outColor->b = mKBlueVals[table->mTables[J3DAnmColorFullTable::BLUE].mOffset];
		break;
	default:
		frame = J3DGetKeyFrameInterpolation<s16>(mCurrentFrame, &table->mTables[J3DAnmColorFullTable::BLUE],
		                                         &mKBlueVals[table->mTables[J3DAnmColorFullTable::BLUE].mOffset]);
		if (frame < 0.0f) {
			outColor->b = 0;
		} else if (frame > 255.0f) {
			outColor->b = 255;
		} else {
			OSf32tou8(&frame, &outColor->b);
		}
	}

	switch (table->mTables[J3DAnmColorFullTable::ALPHA].mMaxFrame) {
	case 0:
		outColor->a = 0;
		break;
	case 1:
		outColor->a = mKAlphaVals[table->mTables[J3DAnmColorFullTable::ALPHA].mOffset];
		break;
	default:
		frame = J3DGetKeyFrameInterpolation<s16>(mCurrentFrame, &table->mTables[J3DAnmColorFullTable::ALPHA],
		                                         &mKAlphaVals[table->mTables[J3DAnmColorFullTable::ALPHA].mOffset]);
		if (frame < 0.0f) {
			outColor->a = 0;
		} else if (frame > 255.0f) {
			outColor->a = 255;
		} else {
			OSf32tou8(&frame, &outColor->a);
		}
	}
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

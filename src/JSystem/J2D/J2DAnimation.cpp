#include "JSystem/J2D/J2DAnm.h"
#include "JSystem/J2D/J2DScreen.h"
#include "JSystem/J3D/J3DAnmTransform.h"
#include "JSystem/J3D/J3DAnmVisibilityFull.h"
#include "JSystem/JUtility/JUTResource.h"
#include "JSystem/J3D/J3DAnmTexPattern.h"
#include "JSystem/J3D/J3DAnmTevRegKey.h"
#include "types.h"

template <class T>
f32 J2DGetKeyFrameInterpolation(f32, J3DAnmKeyTableBase*, T*);

/**
 * @note Address: 0x8005AF0C
 * @note Size: 0x56C
 */
void J2DAnmTransformFull::getTransform(u16 transformIndex, J3DTransformInfo* transformInfo) const
{
	u16 idx                         = (transformIndex * 3);
	J3DAnmTransformFullTable* xPart = &mTable[idx];
	J3DAnmTransformFullTable* yPart = &mTable[idx + 1];
	J3DAnmTransformFullTable* zPart = &mTable[idx + 2];

	u16 xMaxFrame = xPart->mScaleMaxFrame;
	if (getFrame() < 0) {
		transformInfo->mScale.x = mScaleVals[xPart->mScaleOffset];
	} else if (getFrame() >= xMaxFrame) {
		transformInfo->mScale.x = mScaleVals[(xPart->mScaleOffset + (xMaxFrame - 1))];
	} else {
		transformInfo->mScale.x = mScaleVals[(xPart->mScaleOffset + (int)getFrame())];
	}

	u16 yMaxFrame = yPart->mScaleMaxFrame;
	if (getFrame() < 0) {
		transformInfo->mScale.y = mScaleVals[yPart->mScaleOffset];
	} else if (getFrame() >= yMaxFrame) {
		transformInfo->mScale.y = mScaleVals[(yPart->mScaleOffset + (yMaxFrame - 1))];
	} else {
		transformInfo->mScale.y = mScaleVals[(yPart->mScaleOffset + (int)getFrame())];
	}

	u16 zMaxFrame = zPart->mScaleMaxFrame;
	if (getFrame() < 0) {
		transformInfo->mScale.z = mScaleVals[zPart->mScaleOffset];
	} else if (getFrame() >= zMaxFrame) {
		transformInfo->mScale.z = mScaleVals[(zPart->mScaleOffset + (zMaxFrame - 1))];
	} else {
		transformInfo->mScale.z = mScaleVals[(zPart->mScaleOffset + (int)getFrame())];
	}

	xMaxFrame = xPart->mRotationMaxFrame;
	if (getFrame() < 0) {
		transformInfo->mRotation.x = mRotationVals[xPart->mRotationOffset];
	} else if (getFrame() >= xMaxFrame) {
		transformInfo->mRotation.x = mRotationVals[(xPart->mRotationOffset + (xMaxFrame - 1))];
	} else {
		transformInfo->mRotation.x = mRotationVals[(xPart->mRotationOffset + (int)getFrame())];
	}

	yMaxFrame = yPart->mRotationMaxFrame;
	if (getFrame() < 0) {
		transformInfo->mRotation.y = mRotationVals[yPart->mRotationOffset];
	} else if (getFrame() >= yMaxFrame) {
		transformInfo->mRotation.y = mRotationVals[(yPart->mRotationOffset + (yMaxFrame - 1))];
	} else {
		transformInfo->mRotation.y = mRotationVals[(yPart->mRotationOffset + (int)getFrame())];
	}

	zMaxFrame = zPart->mRotationMaxFrame;
	if (getFrame() < 0) {
		transformInfo->mRotation.z = mRotationVals[zPart->mRotationOffset];
	} else if (getFrame() >= zMaxFrame) {
		transformInfo->mRotation.z = mRotationVals[(zPart->mRotationOffset + (zMaxFrame - 1))];
	} else {
		transformInfo->mRotation.z = mRotationVals[(zPart->mRotationOffset + (int)getFrame())];
	}

	xMaxFrame = xPart->mTranslationMaxFrame;
	if (getFrame() < 0) {
		transformInfo->mTranslation.x = mTranslationVals[xPart->mTranslationOffset];
	} else if (getFrame() >= xMaxFrame) {
		transformInfo->mTranslation.x = mTranslationVals[(xPart->mTranslationOffset + (xMaxFrame - 1))];
	} else {
		transformInfo->mTranslation.x = mTranslationVals[(xPart->mTranslationOffset + (int)getFrame())];
	}

	yMaxFrame = yPart->mTranslationMaxFrame;
	if (getFrame() < 0) {
		transformInfo->mTranslation.y = mTranslationVals[yPart->mTranslationOffset];
	} else if (getFrame() >= yMaxFrame) {
		transformInfo->mTranslation.y = mTranslationVals[(yPart->mTranslationOffset + (yMaxFrame - 1))];
	} else {
		transformInfo->mTranslation.y = mTranslationVals[(yPart->mTranslationOffset + (int)getFrame())];
	}

	zMaxFrame = zPart->mTranslationMaxFrame;
	if (getFrame() < 0) {
		transformInfo->mTranslation.z = mTranslationVals[zPart->mTranslationOffset];
	} else if (getFrame() >= zMaxFrame) {
		transformInfo->mTranslation.z = mTranslationVals[(zPart->mTranslationOffset + (zMaxFrame - 1))];
	} else {
		transformInfo->mTranslation.z = mTranslationVals[(zPart->mTranslationOffset + (int)getFrame())];
	}
}

/**
 * @note Address: 0x8005B478
 * @note Size: 0x420
 */
void J2DAnmTransformKey::calcTransform(f32 frame, u16 transformIndex, J3DTransformInfo* transformInfo) const
{
	u16 idx                       = transformIndex * 3;
	J3DAnmTransformKeyTable* xInf = &mInfoTable[idx];
	J3DAnmTransformKeyTable* yInf = &mInfoTable[idx + 1];
	J3DAnmTransformKeyTable* zInf = &mInfoTable[idx + 2];

	switch (xInf->mScaleInfo.mMaxFrame) {
	case 0:
		transformInfo->mScale.x = 1;
		break;
	case 1:
		transformInfo->mScale.x = mScaleVals[xInf->mScaleInfo.mOffset];
		break;
	default:
		transformInfo->mScale.x = J2DGetKeyFrameInterpolation<f32>(frame, &xInf->mScaleInfo, &mScaleVals[xInf->mScaleInfo.mOffset]);
	}

	switch (yInf->mScaleInfo.mMaxFrame) {
	case 0:
		transformInfo->mScale.y = 1;
		break;
	case 1:
		transformInfo->mScale.y = mScaleVals[yInf->mScaleInfo.mOffset];
		break;
	default:
		transformInfo->mScale.y = J2DGetKeyFrameInterpolation<f32>(frame, &yInf->mScaleInfo, &mScaleVals[yInf->mScaleInfo.mOffset]);
	}

	switch (zInf->mScaleInfo.mMaxFrame) {
	case 0:
		transformInfo->mScale.z = 1;
		break;
	case 1:
		transformInfo->mScale.z = mScaleVals[zInf->mScaleInfo.mOffset];
		break;
	default:
		transformInfo->mScale.z = J2DGetKeyFrameInterpolation<f32>(frame, &zInf->mScaleInfo, &mScaleVals[zInf->mScaleInfo.mOffset]);
	}

	switch (xInf->mRotationInfo.mMaxFrame) {
	case 0:
		transformInfo->mRotation.x = 0;
		break;
	case 1:
		transformInfo->mRotation.x = mRotationVals[xInf->mRotationInfo.mOffset] << mRotationScale;
		break;
	default:
		transformInfo->mRotation.x
		    = static_cast<s32>(J2DGetKeyFrameInterpolation<s16>(frame, &xInf->mRotationInfo, &mRotationVals[xInf->mRotationInfo.mOffset]))
		   << mRotationScale;
	}

	switch (yInf->mRotationInfo.mMaxFrame) {
	case 0:
		transformInfo->mRotation.y = 0;
		break;
	case 1:
		transformInfo->mRotation.y = mRotationVals[yInf->mRotationInfo.mOffset] << mRotationScale;
		break;
	default:
		transformInfo->mRotation.y
		    = static_cast<s32>(J2DGetKeyFrameInterpolation<s16>(frame, &yInf->mRotationInfo, &mRotationVals[yInf->mRotationInfo.mOffset]))
		   << mRotationScale;
	}

	switch (zInf->mRotationInfo.mMaxFrame) {
	case 0:
		transformInfo->mRotation.z = 0;
		break;
	case 1:
		transformInfo->mRotation.z = mRotationVals[zInf->mRotationInfo.mOffset] << mRotationScale;
		break;
	default:
		transformInfo->mRotation.z
		    = static_cast<s32>(J2DGetKeyFrameInterpolation<s16>(frame, &zInf->mRotationInfo, &mRotationVals[zInf->mRotationInfo.mOffset]))
		   << mRotationScale;
	}

	switch (xInf->mTranslationInfo.mMaxFrame) {
	case 0:
		transformInfo->mTranslation.x = 0;
		break;
	case 1:
		transformInfo->mTranslation.x = mTranslationVals[xInf->mTranslationInfo.mOffset];
		break;
	default:
		transformInfo->mTranslation.x
		    = J2DGetKeyFrameInterpolation<f32>(frame, &xInf->mTranslationInfo, &mTranslationVals[xInf->mTranslationInfo.mOffset]);
	}

	switch (yInf->mTranslationInfo.mMaxFrame) {
	case 0:
		transformInfo->mTranslation.y = 0;
		break;
	case 1:
		transformInfo->mTranslation.y = mTranslationVals[yInf->mTranslationInfo.mOffset];
		break;
	default:
		transformInfo->mTranslation.y
		    = J2DGetKeyFrameInterpolation<f32>(frame, &yInf->mTranslationInfo, &mTranslationVals[yInf->mTranslationInfo.mOffset]);
	}

	switch (zInf->mTranslationInfo.mMaxFrame) {
	case 0:
		transformInfo->mTranslation.z = 0;
		break;
	case 1:
		transformInfo->mTranslation.z = mTranslationVals[zInf->mTranslationInfo.mOffset];
		break;
	default:
		transformInfo->mTranslation.z
		    = J2DGetKeyFrameInterpolation<f32>(frame, &zInf->mTranslationInfo, &mTranslationVals[zInf->mTranslationInfo.mOffset]);
	}
}

/**
 * @note Address: 0x8005B898
 * @note Size: 0xAC
 */
void J2DAnmColor::searchUpdateMaterialID(J2DScreen* screen)
{
	if (screen != nullptr && screen->mNameTab != nullptr) {
		for (u16 i = 0; i < mUpdateMaterialNum; i++) {
			int index = screen->mNameTab->getIndex(mNameTab.getName(i));
			if (index != -1) {
				mUpdateMaterialID[i] = index;
			} else {
				mUpdateMaterialID[i] = 0xFFFF;
			}
		}
	}
}

/**
 * @note Address: 0x8005B944
 * @note Size: 0x238
 */
void J2DAnmColorFull::getColor(u16 idx, GXColor* color) const
{
	J3DAnmColorFullTable* info = &mTables[idx];

	u16 maxFrame = info->mData[0][0];
	if (getFrame() < 0) {
		color->r = mRedVals[info->mData[0][1]];
	} else if (getFrame() >= maxFrame) {
		color->r = mRedVals[info->mData[0][1] + (maxFrame - 1)];
	} else {
		color->r = mRedVals[info->mData[0][1] + (int)getFrame()];
	}

	maxFrame = info->mData[1][0];
	if (getFrame() < 0) {
		color->g = mGreenVals[info->mData[1][1]];
	} else if (getFrame() >= maxFrame) {
		color->g = mGreenVals[info->mData[1][1] + (maxFrame - 1)];
	} else {
		color->g = mGreenVals[info->mData[1][1] + (int)getFrame()];
	}

	maxFrame = info->mData[2][0];
	if (getFrame() < 0) {
		color->b = mBlueVals[info->mData[2][1]];
	} else if (getFrame() >= maxFrame) {
		color->b = mBlueVals[info->mData[2][1] + (maxFrame - 1)];
	} else {
		color->b = mBlueVals[info->mData[2][1] + (int)getFrame()];
	}

	maxFrame = info->mData[3][0];
	if (getFrame() < 0) {
		color->a = mAlphaVals[info->mData[3][1]];
	} else if (getFrame() >= maxFrame) {
		color->a = mAlphaVals[info->mData[3][1] + (maxFrame - 1)];
	} else {
		color->a = mAlphaVals[info->mData[3][1] + (int)getFrame()];
	}
}

/**
 * @note Address: 0x8005BB7C
 * @note Size: 0x2CC
 */
void J2DAnmColorKey::getColor(u16 idx, GXColor* color) const
{
	J3DAnmColorKeyTable* info = &mTables[idx];
	f32 val;

	switch (info->mColorInfo[0].mMaxFrame) {
	case 0:
		color->r = 0;
		break;
	case 1:
		color->r = mRedVals[info->mColorInfo[0].mOffset];
		break;
	default:
		val = J2DGetKeyFrameInterpolation<s16>(getFrame(), &info->mColorInfo[0], &mRedVals[info->mColorInfo[0].mOffset]);
		if (val < 0) {
			color->r = 0;
		} else if (val > 255) {
			color->r = 255;
		} else {
			OSf32tou8(&val, &color->r);
		}
	}

	switch (info->mColorInfo[1].mMaxFrame) {
	case 0:
		color->g = 0;
		break;
	case 1:
		color->g = mGreenVals[info->mColorInfo[1].mOffset];
		break;
	default:
		val = J2DGetKeyFrameInterpolation<s16>(getFrame(), &info->mColorInfo[1], &mGreenVals[info->mColorInfo[1].mOffset]);
		if (val < 0) {
			color->g = 0;
		} else if (val > 255) {
			color->g = 255;
		} else {
			OSf32tou8(&val, &color->g);
		}
	}

	switch (info->mColorInfo[2].mMaxFrame) {
	case 0:
		color->b = 0;
		break;
	case 1:
		color->b = mBlueVals[info->mColorInfo[2].mOffset];
		break;
	default:
		val = J2DGetKeyFrameInterpolation<s16>(getFrame(), &info->mColorInfo[2], &mBlueVals[info->mColorInfo[2].mOffset]);
		if (val < 0) {
			color->b = 0;
		} else if (val > 255) {
			color->b = 255;
		} else {
			OSf32tou8(&val, &color->b);
		}
	}

	switch (info->mColorInfo[3].mMaxFrame) {
	case 0:
		color->a = 0;
		break;
	case 1:
		color->a = mAlphaVals[info->mColorInfo[3].mOffset];
		break;
	default:
		val = J2DGetKeyFrameInterpolation<s16>(getFrame(), &info->mColorInfo[3], &mAlphaVals[info->mColorInfo[3].mOffset]);
		if (val < 0) {
			color->a = 0;
		} else if (val > 255) {
			color->a = 255;
		} else {
			OSf32tou8(&val, &color->a);
		}
	}
}

/**
 * @note Address: 0x8005BE48
 * @note Size: 0x240
 */
void J2DAnmVtxColorFull::getColor(u8 tableIdx, u16 idx, GXColor* color) const
{
	J3DAnmColorFullTable* info = &mInfoTables[tableIdx][idx];

	u16 maxFrame = info->mData[0][0];
	if (getFrame() < 0) {
		color->r = mRedVals[info->mData[0][1]];
	} else if (getFrame() >= maxFrame) {
		color->r = mRedVals[info->mData[0][1] + (maxFrame - 1)];
	} else {
		color->r = mRedVals[info->mData[0][1] + (int)getFrame()];
	}

	maxFrame = info->mData[1][0];
	if (getFrame() < 0) {
		color->g = mGreenVals[info->mData[1][1]];
	} else if (getFrame() >= maxFrame) {
		color->g = mGreenVals[info->mData[1][1] + (maxFrame - 1)];
	} else {
		color->g = mGreenVals[info->mData[1][1] + (int)getFrame()];
	}
	maxFrame = info->mData[2][0];
	if (getFrame() < 0) {
		color->b = mBlueVals[info->mData[2][1]];
	} else if (getFrame() >= maxFrame) {
		color->b = mBlueVals[info->mData[2][1] + (maxFrame - 1)];
	} else {
		color->b = mBlueVals[info->mData[2][1] + (int)getFrame()];
	}

	maxFrame = info->mData[3][0];
	if (getFrame() < 0) {
		color->a = mAlphaVals[info->mData[3][1]];
	} else if (getFrame() >= maxFrame) {
		color->a = mAlphaVals[info->mData[3][1] + (maxFrame - 1)];
	} else {
		color->a = mAlphaVals[info->mData[3][1] + (int)getFrame()];
	}
}

/**
 * @note Address: 0x8005C088
 * @note Size: 0x2F4
 */
void J2DAnmVtxColorKey::getColor(u8 tableIdx, u16 idx, GXColor* color) const
{
	J3DAnmColorKeyTable* info = &mInfoTables[tableIdx][idx];
	f32 val;
	switch (info->mColorInfo[0].mMaxFrame) {
	case 0:
		color->r = 0;
		break;
	case 1:
		color->r = mRedVals[info->mColorInfo[0].mOffset];
		break;
	default:
		val = J2DGetKeyFrameInterpolation<s16>(getFrame(), &info->mColorInfo[0], &mRedVals[info->mColorInfo[0].mOffset]);
		if ((val <= 0)) {
			color->r = 0;
		} else if (val <= 255) {
			OSf32tou8(&val, &color->r);
		} else {
			color->r = 255;
		}
	}

	switch (info->mColorInfo[1].mMaxFrame) {
	case 0:
		color->g = 0;
		break;
	case 1:
		color->g = mGreenVals[info->mColorInfo[1].mOffset];
		break;
	default:
		val = J2DGetKeyFrameInterpolation<s16>(getFrame(), &info->mColorInfo[1], &mGreenVals[info->mColorInfo[1].mOffset]);
		if (val <= 0) {
			color->g = 0;
		} else if (val <= 255) {
			OSf32tou8(&val, &color->g);
		} else {
			color->g = 255;
		}
	}

	switch (info->mColorInfo[2].mMaxFrame) {
	case 0:
		color->b = 0;
		break;
	case 1:
		color->b = mBlueVals[info->mColorInfo[2].mOffset];
		break;
	default:
		val = J2DGetKeyFrameInterpolation<s16>(getFrame(), &info->mColorInfo[2], &mBlueVals[info->mColorInfo[2].mOffset]);
		if (val <= 0) {
			color->b = 0;
		} else if (val <= 255) {
			OSf32tou8(&val, &color->b);
		} else {
			color->b = 255;
		}
	}

	switch (info->mColorInfo[3].mMaxFrame) {
	case 0:
		color->a = 0;
		break;
	case 1:
		color->a = mAlphaVals[info->mColorInfo[3].mOffset];
		break;
	default:
		val = J2DGetKeyFrameInterpolation<s16>(getFrame(), &info->mColorInfo[3], &mAlphaVals[info->mColorInfo[3].mOffset]);
		if (val <= 0) {
			color->a = 0;
		} else if (val <= 255) {
			OSf32tou8(&val, &color->a);
		} else {
			color->a = 255;
		}
	}
}

/**
 * @note Address: 0x8005C37C
 * @note Size: 0x268
 */
void J2DAnmTextureSRTKey::calcTransform(f32 frame, u16 inputIdx, J3DTextureSRTInfo* texInfo) const
{
	u16 idx                       = inputIdx * 3;
	J3DAnmTransformKeyTable* xInf = &mInfoTable[idx];
	J3DAnmTransformKeyTable* yInf = &mInfoTable[idx + 1];
	J3DAnmTransformKeyTable* zInf = &mInfoTable[idx + 2];

	switch (xInf->mScaleInfo.mMaxFrame) {
	case 0:
		texInfo->mScaleX = 1;
		break;
	case 1:
		texInfo->mScaleX = mScaleVals[xInf->mScaleInfo.mOffset];
		break;
	default:
		texInfo->mScaleX = J2DGetKeyFrameInterpolation<f32>(frame, &xInf->mScaleInfo, &mScaleVals[xInf->mScaleInfo.mOffset]);
	}

	switch (yInf->mScaleInfo.mMaxFrame) {
	case 0:
		texInfo->mScaleY = 1;
		break;
	case 1:
		texInfo->mScaleY = mScaleVals[yInf->mScaleInfo.mOffset];
		break;
	default:
		texInfo->mScaleY = J2DGetKeyFrameInterpolation<f32>(frame, &yInf->mScaleInfo, &mScaleVals[yInf->mScaleInfo.mOffset]);
	}

	switch (zInf->mRotationInfo.mMaxFrame) {
	case 0:
		texInfo->mRotation = 0;
		break;
	case 1:
		texInfo->mRotation = mRotationVals[zInf->mRotationInfo.mOffset] << _10;
		break;
	default:
		texInfo->mRotation
		    = static_cast<s32>(J2DGetKeyFrameInterpolation<s16>(frame, &zInf->mRotationInfo, &mRotationVals[zInf->mRotationInfo.mOffset]))
		   << _10;
	}

	switch (xInf->mTranslationInfo.mMaxFrame) {
	case 0:
		texInfo->mTranslationX = 0;
		break;
	case 1:
		texInfo->mTranslationX = mTranslationVals[xInf->mTranslationInfo.mOffset];
		break;
	default:
		texInfo->mTranslationX
		    = J2DGetKeyFrameInterpolation<f32>(frame, &xInf->mTranslationInfo, &mTranslationVals[xInf->mTranslationInfo.mOffset]);
	}

	switch (yInf->mTranslationInfo.mMaxFrame) {
	case 0:
		texInfo->mTranslationY = 0;
		break;
	case 1:
		texInfo->mTranslationY = mTranslationVals[yInf->mTranslationInfo.mOffset];
		break;
	default:
		texInfo->mTranslationY
		    = J2DGetKeyFrameInterpolation<f32>(frame, &yInf->mTranslationInfo, &mTranslationVals[yInf->mTranslationInfo.mOffset]);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x274
 */
void J2DAnmTextureSRTKey::calcPostTransform(f32, u16, J3DTextureSRTInfo*) const
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8005C5E4
 * @note Size: 0xCC
 * searchUpdateMaterialID__19J2DAnmTextureSRTKeyFP9J2DScreen
 */
void J2DAnmTextureSRTKey::searchUpdateMaterialID(J2DScreen* screen)
{
	if (screen && screen->mNameTab) {
		for (u16 entry = 0; entry < getUpdateMaterialNum(); entry++) {
			s32 idx = screen->mNameTab->getIndex(mNameTab.getName(entry));
			if (idx != -1) {
				mUpdateMaterialID[entry] = idx;
			} else {
				mUpdateMaterialID[entry] = 0xFFFF;
			}
		}
	}
}

/**
 * @note Address: 0x8005C6B0
 * @note Size: 0x1D4
 * searchUpdateMaterialID__16J2DAnmTexPatternFP9J2DScreen
 */
void J2DAnmTexPattern::searchUpdateMaterialID(J2DScreen* screen)
{
	if (screen && screen->mNameTab && screen->mTexRes) {
		for (u16 entryIndex = 0; entryIndex < this->getUpdateMaterialNum(); entryIndex++) {
			s32 nameIndex = screen->mNameTab->getIndex(mNameTab.getName(entryIndex));
			if (nameIndex != -1) {
				mUpdateMaterialID[entryIndex] = nameIndex;
			} else {
				mUpdateMaterialID[entryIndex] = 0xFFFF;
			}
		}

		delete[] mImgPtrArray;
		mImgPtrArray = new J2DAnmTexPatternTIMGPointer[screen->mTexRes->mCount];

		if (mImgPtrArray) {
			JUTResReference resRef;

			for (u16 i = 0; i < screen->mTexRes->mCount; i++) {
				s8* resReference       = screen->mTexRes->getResReference(i);
				ResTIMG* imageResource = nullptr;

				if (resReference) {
					imageResource = (ResTIMG*)resRef.getResource(resReference, 'TIMG', nullptr);
					if (!imageResource && J2DScreen::getDataManage()) {
						imageResource = (ResTIMG*)J2DScreen::getDataManage()->get(screen->mTexRes->getName(i));
					}
				}

				mImgPtrArray[i].mImg = imageResource;
				if (imageResource && imageResource->mPaletteFormat) {
					JUTPalette* palette
					    = new JUTPalette(GX_TLUT0, (GXTlutFmt)imageResource->mColorFormat, (JUTTransparency)imageResource->mTransparency,
					                     imageResource->mPaletteEntryCount, ((u8*)imageResource) + imageResource->mPaletteOffset);
					mImgPtrArray[i].mPalette = palette;
				}
			}
		}
	}
}

/**
 * @note Address: 0x8005C884
 * @note Size: 0x10
 * __ct__Q216J2DAnmTexPattern27J2DAnmTexPatternTIMGPointerFv
 */
J2DAnmTexPattern::J2DAnmTexPatternTIMGPointer::J2DAnmTexPatternTIMGPointer()
    : mImg(nullptr)
    , mPalette(nullptr)
{
}

/**
 * @note Address: 0x8005C894
 * @note Size: 0x54
 * __dt__Q216J2DAnmTexPattern27J2DAnmTexPatternTIMGPointerFv
 */
J2DAnmTexPattern::J2DAnmTexPatternTIMGPointer::~J2DAnmTexPatternTIMGPointer() { delete mPalette; }

/**
 * @note Address: 0x8005C8E8
 * @note Size: 0xB4
 */
void J2DAnmTexPattern::getTexNo(u16 idx, u16* texNo) const
{
	u16 maxFrame = mAnmTable[idx].mData[0][0];
	f32 frame    = getFrame();
	if (frame < 0) {
		*texNo = mValues[mAnmTable[idx].mData[0][1]];
	} else if (frame >= maxFrame) {
		*texNo = mValues[mAnmTable[idx].mData[0][1] + (maxFrame - 1)];
	} else {
		*texNo = mValues[mAnmTable[idx].mData[0][1] + (int)frame];
	}
}

/**
 * @note Address: 0x8005C99C
 * @note Size: 0xC4
 */
ResTIMG* J2DAnmTexPattern::getResTIMG(u16 idx) const
{
	if (!mImgPtrArray) {
		return nullptr;
	}

	u16 texNo;
	this->getTexNo(idx, &texNo);
	return mImgPtrArray[texNo].mImg;
}

/**
 * @note Address: 0x8005CA60
 * @note Size: 0xC8
 */
JUTPalette* J2DAnmTexPattern::getPalette(u16 idx) const
{
	if (!mImgPtrArray) {
		return nullptr;
	}

	u16 texNo;
	this->getTexNo(idx, &texNo);
	return mImgPtrArray[texNo].mPalette;
}

/**
 * @note Address: 0x8005CB28
 * @note Size: 0xA8
 */
void J2DAnmVisibilityFull::getVisibility(u16 p1, u8* visibility) const
{
	u16 maxFrame = mTable[p1]._00[0];
	if (getFrame() < 0) {
		*visibility = mValues[mTable[p1]._00[1]];
	} else if (getFrame() >= maxFrame) {
		*visibility = mValues[mTable[p1]._00[1] + (maxFrame - 1)];
	} else {
		int frame   = getFrame();
		*visibility = mValues[mTable[p1]._00[1] + frame];
	}
}

/**
 * @note Address: 0x8005CBD0
 * @note Size: 0x2CC
 */
void J2DAnmTevRegKey::getTevColorReg(u16 idx, GXColorS10* color) const
{
	J3DAnmCRegKeyTable* info = &mCRegKeyTable[idx];
	f32 val;

	switch (info->mTables[0].mMaxFrame) {
	case 0:
		color->r = 0;
		break;
	case 1:
		color->r = mCRedVals[info->mTables[0].mOffset];
		break;
	default:
		val = J2DGetKeyFrameInterpolation<s16>(getFrame(), &info->mTables[0], &mCRedVals[info->mTables[0].mOffset]);
		if (val < -1024) {
			color->r = -1024;
		} else if (val > 1023) {
			color->r = 1023;
		} else {
			OSf32tos16(&val, &color->r);
		}
	}

	switch (info->mTables[1].mMaxFrame) {
	case 0:
		color->g = 0;
		break;
	case 1:
		color->g = mCGreenVals[info->mTables[1].mOffset];
		break;
	default:
		val = J2DGetKeyFrameInterpolation<s16>(getFrame(), &info->mTables[1], &mCGreenVals[info->mTables[1].mOffset]);
		if (val < -1024) {
			color->g = -1024;
		} else if (val > 1023) {
			color->g = 1023;
		} else {
			OSf32tos16(&val, &color->g);
		}
	}

	switch (info->mTables[2].mMaxFrame) {
	case 0:
		color->b = 0;
		break;
	case 1:
		color->b = mCBlueVals[info->mTables[2].mOffset];
		break;
	default:
		val = J2DGetKeyFrameInterpolation<s16>(getFrame(), &info->mTables[2], &mCBlueVals[info->mTables[2].mOffset]);
		if (val < -1024) {
			color->b = -1024;
		} else if (val > 1023) {
			color->b = 1023;
		} else {
			OSf32tos16(&val, &color->b);
		}
	}

	switch (info->mTables[3].mMaxFrame) {
	case 0:
		color->a = 0;
		break;
	case 1:
		color->a = mCAlphaVals[info->mTables[3].mOffset];
		break;
	default:
		val = J2DGetKeyFrameInterpolation<s16>(getFrame(), &info->mTables[3], &mCAlphaVals[info->mTables[3].mOffset]);
		if (val < -1024) {
			color->a = -1024;
		} else if (val > 1023) {
			color->a = 1023;
		} else {
			OSf32tos16(&val, &color->a);
		}
	}
}

/**
 * @note Address: 0x8005CE9C
 * @note Size: 0x2CC
 */
void J2DAnmTevRegKey::getTevKonstReg(u16 idx, GXColor* color) const
{
	J3DAnmKRegKeyTable* info = &mKRegKeyTable[idx];
	f32 val;
	switch (info->mTables[0].mMaxFrame) {
	case 0:
		color->r = 0;
		break;
	case 1:
		color->r = mKRedVals[info->mTables[0].mOffset];
		break;
	default:
		val = J2DGetKeyFrameInterpolation<s16>(getFrame(), &info->mTables[0], &mKRedVals[info->mTables[0].mOffset]);
		if (val < 0) {
			color->r = 0;
		} else if (val > 255) {
			color->r = 255;
		} else {
			OSf32tou8(&val, &color->r);
		}
	}

	switch (info->mTables[1].mMaxFrame) {
	case 0:
		color->g = 0;
		break;
	case 1:
		color->g = mKGreenVals[info->mTables[1].mOffset];
		break;
	default:
		val = J2DGetKeyFrameInterpolation<s16>(getFrame(), &info->mTables[1], &mKGreenVals[info->mTables[1].mOffset]);
		if (val < 0) {
			color->g = 0;
		} else if (val > 255) {
			color->g = 255;
		} else {
			OSf32tou8(&val, &color->g);
		}
	}

	switch (info->mTables[2].mMaxFrame) {
	case 0:
		color->b = 0;
		break;
	case 1:
		color->b = mKBlueVals[info->mTables[2].mOffset];
		break;
	default:
		val = J2DGetKeyFrameInterpolation<s16>(getFrame(), &info->mTables[2], &mKBlueVals[info->mTables[2].mOffset]);
		if (val < 0) {
			color->b = 0;
		} else if (val > 255) {
			color->b = 255;
		} else {
			OSf32tou8(&val, &color->b);
		}
	}

	switch (info->mTables[3].mMaxFrame) {
	case 0:
		color->a = 0;
		break;
	case 1:
		color->a = mKAlphaVals[info->mTables[3].mOffset];
		break;
	default:
		val = J2DGetKeyFrameInterpolation<s16>(getFrame(), &info->mTables[3], &mKAlphaVals[info->mTables[3].mOffset]);
		if (val < 0) {
			color->a = 0;
		} else if (val > 255) {
			color->a = 255;
		} else {
			OSf32tou8(&val, &color->a);
		}
	}
}

/**
 * @note Address: 0x8005D168
 * @note Size: 0x10C
 * searchUpdateMaterialID__15J2DAnmTevRegKeyFP9J2DScreen
 */
void J2DAnmTevRegKey::searchUpdateMaterialID(J2DScreen* screen)
{
	if (screen != nullptr && screen->mNameTab != nullptr) {
		for (u16 i = 0; i < mCRegUpdateMaterialNum; i++) {
			int index = screen->mNameTab->getIndex(mCRegNameTab.getName(i));
			if (index != -1) {
				mCRegUpdateMaterialID[i] = index;
			} else {
				mCRegUpdateMaterialID[i] = 0xFFFF;
			}
		}

		for (u16 i = 0; i < mKRegUpdateMaterialNum; i++) {
			int index = screen->mNameTab->getIndex(mKRegNameTab.getName(i));
			if (index != -1) {
				mKRegUpdateMaterialID[i] = index;
			} else {
				mKRegUpdateMaterialID[i] = 0xFFFF;
			}
		}
	}
}

template <class T>
f32 J2DGetKeyFrameInterpolation(f32 currentFrame, J3DAnmKeyTableBase* keyTable, T* keyValues)
{
	if (currentFrame < keyValues[0]) {
		return keyValues[1];
	}

	if (keyTable->mType == 0) {
		if (keyValues[(keyTable->mMaxFrame - 1) * 3] <= currentFrame) {
			return keyValues[(keyTable->mMaxFrame - 1) * 3 + 1];
		}

		u32 frameCount = keyTable->mMaxFrame;
		while (frameCount > 1) {
			u32 halfFrameCount = frameCount / 2;
			u32 upperIndex     = halfFrameCount * 3;
			if (currentFrame >= keyValues[upperIndex]) {
				keyValues = keyValues + upperIndex;
				frameCount -= halfFrameCount;
			} else {
				frameCount = halfFrameCount;
			}
		}

		return J2DHermiteInterpolation<T>(currentFrame, &keyValues[0], &keyValues[1], &keyValues[2], &keyValues[3], &keyValues[4],
		                                  &keyValues[5]);
	}

	if (keyValues[(keyTable->mMaxFrame - 1) * 4] <= currentFrame) {
		return keyValues[(keyTable->mMaxFrame - 1) * 4 + 1];
	}

	u32 frameCount = keyTable->mMaxFrame;
	while (frameCount > 1) {
		u32 halfFrameCount = frameCount / 2;
		u32 upperIndex     = halfFrameCount * 4;
		if (currentFrame >= keyValues[upperIndex]) {
			keyValues = keyValues + upperIndex;
			frameCount -= halfFrameCount;
		} else {
			frameCount = halfFrameCount;
		}
	}

	return J2DHermiteInterpolation<T>(currentFrame, &keyValues[0], &keyValues[1], &keyValues[3], &keyValues[4], &keyValues[5],
	                                  &keyValues[6]);
}
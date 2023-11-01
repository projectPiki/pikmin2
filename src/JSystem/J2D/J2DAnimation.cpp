#include "JSystem/J2D/J2DAnm.h"
#include "JSystem/J2D/J2DPane.h"
#include "JSystem/J3D/J3DAnmTransform.h"
#include "JSystem/J3D/J3DAnmVisibilityFull.h"
#include "JSystem/JUtility/JUTResource.h"
#include "JSystem/J3D/J3DAnmTexPattern.h"
#include "JSystem/J3D/J3DAnmTevRegKey.h"
#include "types.h"

template <class T>
f32 J2DGetKeyFrameInterpolation(f32, J3DAnmKeyTableBase*, T*);

/*
 * --INFO--
 * Address:	8005AF0C
 * Size:	00056C
 */
void J2DAnmTransformFull::getTransform(u16 p1, J3DTransformInfo* transformInfo) const
{
	u16 idx                         = (p1 * 3);
	J3DAnmTransformFullTable* xPart = &mTable[idx];
	J3DAnmTransformFullTable* yPart = &mTable[idx + 1];
	J3DAnmTransformFullTable* zPart = &mTable[idx + 2];
	u16 xMaxFrame                   = xPart->mScaleMaxFrame;
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

/*
 * --INFO--
 * Address:	8005B478
 * Size:	000420
 */
void J2DAnmTransformKey::calcTransform(f32 p1, u16 p2, J3DTransformInfo* transformInfo) const
{
	u16 idx                       = p2 * 3;
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
		transformInfo->mScale.x = J2DGetKeyFrameInterpolation<f32>(p1, &xInf->mScaleInfo, &mScaleVals[xInf->mScaleInfo.mOffset]);
	}

	switch (yInf->mScaleInfo.mMaxFrame) {
	case 0:
		transformInfo->mScale.y = 1;
		break;
	case 1:
		transformInfo->mScale.y = mScaleVals[yInf->mScaleInfo.mOffset];
		break;
	default:
		transformInfo->mScale.y = J2DGetKeyFrameInterpolation<f32>(p1, &yInf->mScaleInfo, &mScaleVals[yInf->mScaleInfo.mOffset]);
	}

	switch (zInf->mScaleInfo.mMaxFrame) {
	case 0:
		transformInfo->mScale.z = 1;
		break;
	case 1:
		transformInfo->mScale.z = mScaleVals[zInf->mScaleInfo.mOffset];
		break;
	default:
		transformInfo->mScale.z = J2DGetKeyFrameInterpolation<f32>(p1, &zInf->mScaleInfo, &mScaleVals[zInf->mScaleInfo.mOffset]);
	}

	switch (xInf->mRotationInfo.mMaxFrame) {
	case 0:
		transformInfo->mRotation.x = 0;
		break;
	case 1:
		transformInfo->mRotation.x = mRotationVals[xInf->mRotationInfo.mOffset] << _24;
		break;
	default:
		transformInfo->mRotation.x
		    = static_cast<s32>(J2DGetKeyFrameInterpolation<s16>(p1, &xInf->mRotationInfo, &mRotationVals[xInf->mRotationInfo.mOffset]))
		   << _24;
	}

	switch (yInf->mRotationInfo.mMaxFrame) {
	case 0:
		transformInfo->mRotation.y = 0;
		break;
	case 1:
		transformInfo->mRotation.y = mRotationVals[yInf->mRotationInfo.mOffset] << _24;
		break;
	default:
		transformInfo->mRotation.y
		    = static_cast<s32>(J2DGetKeyFrameInterpolation<s16>(p1, &yInf->mRotationInfo, &mRotationVals[yInf->mRotationInfo.mOffset]))
		   << _24;
	}

	switch (zInf->mRotationInfo.mMaxFrame) {
	case 0:
		transformInfo->mRotation.z = 0;
		break;
	case 1:
		transformInfo->mRotation.z = mRotationVals[zInf->mRotationInfo.mOffset] << _24;
		break;
	default:
		transformInfo->mRotation.z
		    = static_cast<s32>(J2DGetKeyFrameInterpolation<s16>(p1, &zInf->mRotationInfo, &mRotationVals[zInf->mRotationInfo.mOffset]))
		   << _24;
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
		    = J2DGetKeyFrameInterpolation<f32>(p1, &xInf->mTranslationInfo, &mTranslationVals[xInf->mTranslationInfo.mOffset]);
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
		    = J2DGetKeyFrameInterpolation<f32>(p1, &yInf->mTranslationInfo, &mTranslationVals[yInf->mTranslationInfo.mOffset]);
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
		    = J2DGetKeyFrameInterpolation<f32>(p1, &zInf->mTranslationInfo, &mTranslationVals[zInf->mTranslationInfo.mOffset]);
	}
}

/*
 * --INFO--
 * Address:	8005B898
 * Size:	0000AC
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

/*
 * --INFO--
 * Address:	8005B944
 * Size:	000238
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

/*
 * --INFO--
 * Address:	8005BB7C
 * Size:	0002CC
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

/*
 * --INFO--
 * Address:	8005BE48
 * Size:	000240
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

/*
 * --INFO--
 * Address:	8005C088
 * Size:	0002F4
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

/*
 * --INFO--
 * Address:	8005C37C
 * Size:	000268
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

/*
 * --INFO--
 * Address:	........
 * Size:	000274
 */
void J2DAnmTextureSRTKey::calcPostTransform(f32, u16, J3DTextureSRTInfo*) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8005C5E4
 * Size:	0000CC
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

/*
 * --INFO--
 * Address:	8005C6B0
 * Size:	0001D4
 * searchUpdateMaterialID__16J2DAnmTexPatternFP9J2DScreen
 */
void J2DAnmTexPattern::searchUpdateMaterialID(J2DScreen* screen)
{
	if (screen && screen->mNameTab && screen->mTexRes) {
		for (u16 entry = 0; entry < this->getUpdateMaterialNum(); entry++) {
			s32 idx = screen->mNameTab->getIndex(mNameTab.getName(entry));
			if (idx != -1) {
				mUpdateMaterialID[entry] = idx;
			} else {
				mUpdateMaterialID[entry] = 0xFFFF;
			}
		}

		delete[] mImgPtrArray;
		mImgPtrArray = new J2DAnmTexPatternTIMGPointer[screen->mTexRes->mCount];
		if (mImgPtrArray) {
			JUTResReference resRef;
			for (u16 i = 0; i < screen->mTexRes->mCount; i++) {
				s8* var1      = screen->mTexRes->getResReference(i);
				ResTIMG* var2 = nullptr;
				if (var1) {
					var2 = (ResTIMG*)resRef.getResource(var1, 'TIMG', nullptr);
					if (!var2 && J2DScreen::getDataManage()) {
						var2 = (ResTIMG*)J2DScreen::getDataManage()->get(screen->mTexRes->getName(i));
					}
				}
				mImgPtrArray[i].mImg = var2;
				if (var2 && var2->mPaletteFormat) {
					JUTPalette* palette      = new JUTPalette(GX_TLUT0, (GXTlutFmt)var2->mLutFormat, (JUTTransparency)var2->mTransparency,
                                                         var2->mPaletteEntryCount, ((u8*)var2) + var2->mPaletteOffset);
					mImgPtrArray[i].mPalette = palette;
				}
			}
		}
	}
}

/*
 * --INFO--
 * Address:	8005C884
 * Size:	000010
 * __ct__Q216J2DAnmTexPattern27J2DAnmTexPatternTIMGPointerFv
 */
J2DAnmTexPattern::J2DAnmTexPatternTIMGPointer::J2DAnmTexPatternTIMGPointer()
    : mImg(nullptr)
    , mPalette(nullptr)
{
}

/*
 * --INFO--
 * Address:	8005C894
 * Size:	000054
 * __dt__Q216J2DAnmTexPattern27J2DAnmTexPatternTIMGPointerFv
 */
J2DAnmTexPattern::J2DAnmTexPatternTIMGPointer::~J2DAnmTexPatternTIMGPointer() { delete mPalette; }

/*
 * --INFO--
 * Address:	8005C8E8
 * Size:	0000B4
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

/*
 * --INFO--
 * Address:	8005C99C
 * Size:	0000C4
 */
ResTIMG* J2DAnmTexPattern::getResTIMG(u16 idx) const
{
	if (!mImgPtrArray) {
		return nullptr;
	} else {
		u16 texNo;
		this->getTexNo(idx, &texNo);
		return mImgPtrArray[texNo].mImg;
	}
}

/*
 * --INFO--
 * Address:	8005CA60
 * Size:	0000C8
 */
JUTPalette* J2DAnmTexPattern::getPalette(u16 idx) const
{
	if (!mImgPtrArray) {
		return nullptr;
	} else {
		u16 texNo;
		this->getTexNo(idx, &texNo);
		return mImgPtrArray[texNo].mPalette;
	}
}

/*
 * --INFO--
 * Address:	8005CB28
 * Size:	0000A8
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

/*
 * --INFO--
 * Address:	8005CBD0
 * Size:	0002CC
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

/*
 * --INFO--
 * Address:	8005CE9C
 * Size:	0002CC
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

/*
 * --INFO--
 * Address:	8005D168
 * Size:	00010C
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
f32 J2DGetKeyFrameInterpolation(f32 p1, J3DAnmKeyTableBase* table, T* values)
{
	if (p1 < values[0]) {
		return values[1];
	} else {
		if (table->mType == 0) {
			if (values[(table->mMaxFrame - 1) * 3] <= p1) {
				return values[(table->mMaxFrame - 1) * 3 + 1];
			} else {
				u32 tmp = table->mMaxFrame;
				while (tmp > 1) {
					u32 halfTmp = tmp / 2;
					u32 upIdx   = halfTmp * 3;
					if (p1 >= values[upIdx]) {
						values = values + upIdx;
						tmp -= halfTmp;
					} else {
						tmp = halfTmp;
					}
				}
				return J2DHermiteInterpolation<T>(p1, &values[0], &values[1], &values[2], &values[3], &values[4], &values[5]);
			}
		} else if (values[(table->mMaxFrame - 1) * 4] <= p1) {
			return values[(table->mMaxFrame - 1) * 4 + 1];
		} else {
			u32 tmp = table->mMaxFrame;
			while (tmp > 1) {
				u32 halfTmp = tmp / 2;
				u32 upIdx   = halfTmp * 4;
				if (p1 >= values[upIdx]) {
					values = values + upIdx;
					tmp -= halfTmp;
				} else {
					tmp = halfTmp;
				}
			}
			return J2DHermiteInterpolation<T>(p1, &values[0], &values[1], &values[3], &values[4], &values[5], &values[6]);
		}
	}
}

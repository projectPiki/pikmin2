#include "JSystem/J2D/J2DAnm.h"
#include "JSystem/J2D/J2DAnmLoader.h"
#include "JSystem/JSupport/JSU.h"

/**
 * @note Address: 0x8004791C
 * @note Size: 0x79C
 */
J2DAnmBase* J2DAnmLoaderDataBase::load(const void* data)
{
	const J2DAnmDataHeader* hdr = (const J2DAnmDataHeader*)data;

	if (hdr == nullptr) {
		return nullptr;
	} else if (hdr->mMagic == 'J3D1') {
		switch (hdr->mType) {
		case 'bck1': {
			J2DAnmKeyLoader_v15 loader;
			loader.mResource = new J2DAnmTransformKey();
			return loader.load(data);
			break;
		}
		case 'bpk1': {
			J2DAnmKeyLoader_v15 loader;
			loader.mResource = new J2DAnmColorKey();
			return loader.load(data);
			break;
		}
		case 'blk1':
			return nullptr;
		case 'btk1': {
			J2DAnmKeyLoader_v15 loader;
			loader.mResource = new J2DAnmTextureSRTKey();
			return loader.load(data);
			break;
		}
		case 'brk1': {
			J2DAnmKeyLoader_v15 loader;
			loader.mResource = new J2DAnmTevRegKey();
			return loader.load(data);
			break;
		}
		case 'bxk1': {
			J2DAnmKeyLoader_v15 loader;
			loader.mResource = new J2DAnmVtxColorKey();
			return loader.load(data);
			break;
		}
		case 'bca1': {
			J2DAnmFullLoader_v15 loader;
			loader.mResource = new J2DAnmTransformFull();
			return loader.load(data);
			break;
		}
		case 'bpa1': {
			J2DAnmFullLoader_v15 loader;
			loader.mResource = new J2DAnmColorFull();
			return loader.load(data);
			break;
		}
		case 'btp1': {
			J2DAnmFullLoader_v15 loader;
			loader.mResource = new J2DAnmTexPattern();
			return loader.load(data);
		}
		case 'bva1': {
			J2DAnmFullLoader_v15 loader;
			loader.mResource = new J2DAnmVisibilityFull();
			return loader.load(data);
			break;
		}
		case 'bla1':
			return nullptr;
		case 'bxa1': {
			J2DAnmFullLoader_v15 loader;
			loader.mResource = new J2DAnmVtxColorFull();
			return loader.load(data);
		}
		}
		return nullptr;
	} else {
		return nullptr;
	}
}

/**
 * @note Address: 0x8004822C
 * @note Size: 0x1C
 * __ct__19J2DAnmKeyLoader_v15Fv
 */
J2DAnmKeyLoader_v15::J2DAnmKeyLoader_v15() { }

/**
 * @note Address: 0x80048290
 * @note Size: 0x5C
 * __dt__19J2DAnmKeyLoader_v15Fv
 */
J2DAnmKeyLoader_v15::~J2DAnmKeyLoader_v15() { }

/**
 * @note Address: 0x800482EC
 * @note Size: 0x104
 */
J2DAnmBase* J2DAnmKeyLoader_v15::load(const void* data)
{
	const J2DAnmDataHeader* hdr          = (const J2DAnmDataHeader*)data;
	const J2DAnmDataBlockHeader* dataPtr = &hdr->mFirst;

	for (s32 i = 0; i < hdr->mCount; i++) {
		switch (dataPtr->mType) {
		case 'ANK1':
			readAnmTransform((J3DAnmTransformKeyData*)dataPtr);
			break;
		case 'PAK1':
			readAnmColor((J3DAnmColorKeyData*)dataPtr);
			break;
		case 'TTK1':
			readAnmTextureSRT((J3DAnmTextureSRTKeyData*)dataPtr);
			break;
		case 'VCK1':
			readAnmVtxColor((J3DAnmVtxColorKeyData*)dataPtr);
			break;
		case 'TRK1':
			readAnmTevReg((J3DAnmTevRegKeyData*)dataPtr);
			break;
		}
		dataPtr = (J2DAnmDataBlockHeader*)((s32)dataPtr + dataPtr->mNextOffset);
	}
	return mResource;
}

/**
 * @note Address: 0x800483F0
 * @note Size: 0x154
 */
void J2DAnmKeyLoader_v15::setResource(J2DAnmBase* anm, const void* data)
{
	const J2DAnmDataHeader* hdr          = (const J2DAnmDataHeader*)data;
	const J2DAnmDataBlockHeader* dataPtr = &hdr->mFirst;

	for (s32 i = 0; i < hdr->mCount; i++) {
		switch (dataPtr->mType) {
		case 'ANK1':
			if (anm->getKind() == J2DANM_Transform) {
				setAnmTransform((J2DAnmTransformKey*)anm, (J3DAnmTransformKeyData*)dataPtr);
			}
			break;
		case 'PAK1':
			if (anm->getKind() == J2DANM_Color) {
				setAnmColor((J2DAnmColorKey*)anm, (J3DAnmColorKeyData*)dataPtr);
			}
			break;
		case 'TTK1':
			if (anm->getKind() == J2DANM_TextureSRT) {
				setAnmTextureSRT((J2DAnmTextureSRTKey*)anm, (J3DAnmTextureSRTKeyData*)dataPtr);
			}
			break;
		case 'TRK1':
			if (anm->getKind() == J2DANM_TevReg) {
				setAnmTevReg((J2DAnmTevRegKey*)anm, (J3DAnmTevRegKeyData*)dataPtr);
			}
			break;
		case 'VCK1':
			if (anm->getKind() == J2DANM_VtxColor) {
				setAnmVtxColor((J2DAnmVtxColorKey*)anm, (J3DAnmVtxColorKeyData*)dataPtr);
			}
			break;
		}
		dataPtr = (J2DAnmDataBlockHeader*)((s32)dataPtr + dataPtr->mNextOffset);
	}
}

/**
 * @note Address: 0x80048544
 * @note Size: 0x28
 */
void J2DAnmKeyLoader_v15::readAnmTransform(const J3DAnmTransformKeyData* data)
{
	setAnmTransform(static_cast<J2DAnmTransformKey*>(mResource), data);
}

/**
 * @note Address: 0x8004856C
 * @note Size: 0x9C
 */
void J2DAnmKeyLoader_v15::setAnmTransform(J2DAnmTransformKey* anm, const J3DAnmTransformKeyData* data)
{
	anm->_22              = data->mExtraInfo1;
	anm->mTotalFrameCount = data->mTotalFrameCount;
	anm->mAttribute       = data->mAttribute;
	anm->mRotationScale   = data->mRotationScale;
	anm->mCurrentFrame    = 0;
	anm->mInfoTable       = JSUConvertOffsetToPtr<J3DAnmTransformKeyTable>(data, (void*)data->mTableOffset);
	anm->mScaleVals       = JSUConvertOffsetToPtr<f32>(data, (void*)data->mScaleOffset);
	anm->mRotationVals    = JSUConvertOffsetToPtr<s16>(data, (void*)data->mRotationOffset);
	anm->mTranslationVals = JSUConvertOffsetToPtr<f32>(data, (void*)data->mTranslateOffset);
}

/**
 * @note Address: 0x80048608
 * @note Size: 0x28
 */
void J2DAnmKeyLoader_v15::readAnmTextureSRT(const J3DAnmTextureSRTKeyData* data)
{
	setAnmTextureSRT(static_cast<J2DAnmTextureSRTKey*>(mResource), data);
}

/**
 * @note Address: 0x80048630
 * @note Size: 0x1EC
 */
void J2DAnmKeyLoader_v15::setAnmTextureSRT(J2DAnmTextureSRTKey* anm, const J3DAnmTextureSRTKeyData* data)
{
	anm->mUpdateMaterialNum = data->mExtraInfo1;
	anm->mTotalFrameCount   = data->mTotalFrameCount;
	anm->mAttribute         = data->mAttribute;
	anm->_10                = data->mRotationScale;
	anm->mCurrentFrame      = 0;
	anm->mUpdateMaterialNum = data->mExtraInfo1;
	anm->_1C                = data->mExtraInfo2;
	anm->_1E                = data->mRotationNum;
	anm->_20                = data->mTranslationNum;
	anm->mInfoTable         = JSUConvertOffsetToPtr<J3DAnmTransformKeyTable>(data, (void*)data->mTableOffset);
	anm->mUpdateMaterialID  = JSUConvertOffsetToPtr<u16>(data, (void*)data->mUpdateMatIDOffset);
	anm->mNameTab.setResource(JSUConvertOffsetToPtr<ResNTAB>(data, (void*)data->mNameTab1Offset));
	anm->mUpdateTexMtxID  = JSUConvertOffsetToPtr<u8>(data, (void*)data->mUpdateTexMtxIDOffset);
	anm->_48              = JSUConvertOffsetToPtr<Vec>(data, (void*)data->mSrtCenterOffset);
	anm->mScaleVals       = JSUConvertOffsetToPtr<f32>(data, (void*)data->mScaleValOffset);
	anm->mRotationVals    = JSUConvertOffsetToPtr<s16>(data, (void*)data->mRotValOffset);
	anm->mTranslationVals = JSUConvertOffsetToPtr<f32>(data, (void*)data->mTransValOffset);

	if (data->mNameTab2Offset != 0) {
		anm->mNameTab2.setResource(JSUConvertOffsetToPtr<ResNTAB>(data, (void*)data->mNameTab2Offset));
	}

	anm->_60 = data->mPostTrackNum;
	anm->_4C = data->_36;
	anm->_4E = data->_38;
	anm->_50 = data->_3A;
	anm->_64 = JSUConvertOffsetToPtr<J3DAnmTransformKeyTable>(data, (void*)data->mTransformKeyTableOffset);
	anm->_6C = JSUConvertOffsetToPtr<u16>(data, (void*)data->mPostUpdateMaterialIDOffset);
	anm->_68 = JSUConvertOffsetToPtr<u8>(data, (void*)data->mPostUpdateTexMtxIDOffset);
	anm->_80 = JSUConvertOffsetToPtr<Vec>(data, (void*)data->mPostSRTCenterOffset);
	anm->_54 = JSUConvertOffsetToPtr<f32>(data, (void*)data->_50);
	anm->_58 = JSUConvertOffsetToPtr<s16>(data, (void*)data->_54);
	anm->_5C = JSUConvertOffsetToPtr<f32>(data, (void*)data->_58);

	switch (data->mTexMtxCalcType) {
	case 0:
		anm->_84 = 0;
		break;
	case 1:
		anm->_84 = 1;
		break;
	default:
		anm->_84 = 0;
		break;
	}
}

/**
 * @note Address: 0x8004881C
 * @note Size: 0x28
 */
void J2DAnmKeyLoader_v15::readAnmColor(const J3DAnmColorKeyData* data) { setAnmColor(static_cast<J2DAnmColorKey*>(mResource), data); }

/**
 * @note Address: 0x80048844
 * @note Size: 0xEC
 */
void J2DAnmKeyLoader_v15::setAnmColor(J2DAnmColorKey* anm, const J3DAnmColorKeyData* data)
{
	anm->mTotalFrameCount   = data->mTotalFrameCount;
	anm->mAttribute         = data->mAttribute;
	anm->mCurrentFrame      = 0;
	anm->mUpdateMaterialNum = data->mUpdateMaterialNum;
	anm->_10                = data->_10;
	anm->_12                = data->_12;
	anm->_14                = data->_14;
	anm->_16                = data->_16;
	anm->mTables            = JSUConvertOffsetToPtr<J3DAnmColorKeyTable>(data, (void*)data->mTableOffset);
	anm->mRedVals           = JSUConvertOffsetToPtr<s16>(data, (void*)data->mRValOffset);
	anm->mGreenVals         = JSUConvertOffsetToPtr<s16>(data, (void*)data->mGValOffset);
	anm->mBlueVals          = JSUConvertOffsetToPtr<s16>(data, (void*)data->mBValOffset);
	anm->mAlphaVals         = JSUConvertOffsetToPtr<s16>(data, (void*)data->mAValOffset);
	anm->mUpdateMaterialID  = JSUConvertOffsetToPtr<u16>(data, (void*)data->mUpdateMaterialIDOffset);
	anm->mNameTab.setResource(JSUConvertOffsetToPtr<ResNTAB>(data, (void*)data->mNameTabOffset));
}

/**
 * @note Address: 0x80048930
 * @note Size: 0x28
 */
void J2DAnmKeyLoader_v15::readAnmVtxColor(const J3DAnmVtxColorKeyData* data)
{
	setAnmVtxColor(static_cast<J2DAnmVtxColorKey*>(mResource), data);
}

/**
 * @note Address: 0x80048958
 * @note Size: 0xFC
 */
void J2DAnmKeyLoader_v15::setAnmVtxColor(J2DAnmVtxColorKey* anm, const J3DAnmVtxColorKeyData* data)
{
	anm->mTotalFrameCount      = data->mTotalFrameCount;
	anm->mAttribute            = data->mAttribute;
	anm->mCurrentFrame         = 0;
	anm->mAnmTableNum[0]       = data->mAnmTableNum[0];
	anm->mAnmTableNum[1]       = data->mAnmTableNum[1];
	anm->mInfoTables[0]        = JSUConvertOffsetToPtr<J3DAnmColorKeyTable>(data, (void*)data->mTableOffsets[0]);
	anm->mInfoTables[1]        = JSUConvertOffsetToPtr<J3DAnmColorKeyTable>(data, (void*)data->mTableOffsets[1]);
	anm->mVtxColorIndexData[0] = JSUConvertOffsetToPtr<J3DAnmVtxColorIndexData>(data, (void*)data->mVtxColoIndexDataOffset[0]);
	anm->mVtxColorIndexData[1] = JSUConvertOffsetToPtr<J3DAnmVtxColorIndexData>(data, (void*)data->mVtxColoIndexDataOffset[1]);
	anm->mVtxColorIndexPtr[0]  = JSUConvertOffsetToPtr<u16>(data, (void*)data->mVtxColorIndexPointerOffset[0]);
	anm->mVtxColorIndexPtr[1]  = JSUConvertOffsetToPtr<u16>(data, (void*)data->mVtxColorIndexPointerOffset[1]);
	anm->mRedVals              = JSUConvertOffsetToPtr<s16>(data, (void*)data->mRValOffset);
	anm->mGreenVals            = JSUConvertOffsetToPtr<s16>(data, (void*)data->mGValOffset);
	anm->mBlueVals             = JSUConvertOffsetToPtr<s16>(data, (void*)data->mBValOffset);
	anm->mAlphaVals            = JSUConvertOffsetToPtr<s16>(data, (void*)data->mAValOffset);
}

/**
 * @note Address: 0x80048A54
 * @note Size: 0x104
 */
J2DAnmBase* J2DAnmFullLoader_v15::load(const void* data)
{
	const J2DAnmDataHeader* hdr          = (const J2DAnmDataHeader*)data;
	const J2DAnmDataBlockHeader* dataPtr = &hdr->mFirst;

	for (s32 i = 0; i < hdr->mCount; i++) {
		switch (dataPtr->mType) {
		case 'ANF1':
			readAnmTransform((J3DAnmTransformFullData*)dataPtr);
			break;
		case 'PAF1':
			readAnmColor((J3DAnmColorFullData*)dataPtr);
			break;
		case 'TPT1':
			readAnmTexPattern((J3DAnmTexPatternFullData*)dataPtr);
			break;
		case 'VAF1':
			readAnmVisibility((J3DAnmVisibilityFullData*)dataPtr);
			break;
		case 'VCF1':
			readAnmVtxColor((J3DAnmVtxColorFullData*)dataPtr);
			break;
		}
		dataPtr = (J2DAnmDataBlockHeader*)((s32)dataPtr + dataPtr->mNextOffset);
	}
	return mResource;
}

/**
 * @note Address: 0x80048B58
 * @note Size: 0x154
 */
void J2DAnmFullLoader_v15::setResource(J2DAnmBase* anm, const void* data)
{
	const J2DAnmDataHeader* hdr          = (const J2DAnmDataHeader*)data;
	const J2DAnmDataBlockHeader* dataPtr = &hdr->mFirst;

	for (s32 i = 0; i < hdr->mCount; i++) {
		switch (dataPtr->mType) {
		case 'ANF1':
			if (anm->getKind() == J2DANM_Transform)
				setAnmTransform((J2DAnmTransformFull*)anm, (J3DAnmTransformFullData*)dataPtr);
			break;
		case 'PAF1':
			if (anm->getKind() == J2DANM_Color)
				setAnmColor((J2DAnmColorFull*)anm, (J3DAnmColorFullData*)dataPtr);
			break;
		case 'TPT1':
			if (anm->getKind() == J2DANM_TexturePattern)
				setAnmTexPattern((J2DAnmTexPattern*)anm, (J3DAnmTexPatternFullData*)dataPtr);
			break;
		case 'VAF1':
			if (anm->getKind() == J2DANM_VisibilityFull)
				setAnmVisibility((J2DAnmVisibilityFull*)anm, (J3DAnmVisibilityFullData*)dataPtr);
			break;
		case 'VCF1':
			if (anm->getKind() == J2DANM_VtxColor)
				setAnmVtxColor((J2DAnmVtxColorFull*)anm, (J3DAnmVtxColorFullData*)dataPtr);
			break;
		}
		dataPtr = (J2DAnmDataBlockHeader*)((s32)dataPtr + dataPtr->mNextOffset);
	}
}

/**
 * @note Address: 0x80048CAC
 * @note Size: 0x1C
 * __ct__20J2DAnmFullLoader_v15Fv
 */
J2DAnmFullLoader_v15::J2DAnmFullLoader_v15() { }

/**
 * @note Address: 0x80048CC8
 * @note Size: 0x5C
 * __dt__20J2DAnmFullLoader_v15Fv
 */
J2DAnmFullLoader_v15::~J2DAnmFullLoader_v15() { }

/**
 * @note Address: 0x80048D24
 * @note Size: 0x28
 * readAnmTransform__20J2DAnmFullLoader_v15FPC23J3DAnmTransformFullData
 */
void J2DAnmFullLoader_v15::readAnmTransform(const J3DAnmTransformFullData* data)
{
	setAnmTransform(static_cast<J2DAnmTransformFull*>(mResource), data);
}

/**
 * @note Address: 0x80048D4C
 * @note Size: 0x94
 * setAnmTransform__20J2DAnmFullLoader_v15FP19J2DAnmTransformFullPC23J3DAnmTransformFullData
 */
void J2DAnmFullLoader_v15::setAnmTransform(J2DAnmTransformFull* anm, const J3DAnmTransformFullData* data)
{
	anm->_22              = data->mExtraInfo1;
	anm->mTotalFrameCount = data->mTotalFrameCount;
	anm->mAttribute       = data->mAttribute;
	anm->mCurrentFrame    = 0;
	anm->mTable           = JSUConvertOffsetToPtr<J3DAnmTransformFullTable>(data, (void*)data->mTableOffset);
	anm->mScaleVals       = JSUConvertOffsetToPtr<f32>(data, (void*)data->mScaleValOffset);
	anm->mRotationVals    = JSUConvertOffsetToPtr<s16>(data, (void*)data->mRotValOffset);
	anm->mTranslationVals = JSUConvertOffsetToPtr<f32>(data, (void*)data->mTransValOffset);
}

/**
 * @note Address: 0x80048DE0
 * @note Size: 0x28
 * readAnmColor__20J2DAnmFullLoader_v15FPC19J3DAnmColorFullData
 */
void J2DAnmFullLoader_v15::readAnmColor(const J3DAnmColorFullData* data) { setAnmColor(static_cast<J2DAnmColorFull*>(mResource), data); }

/**
 * @note Address: 0x80048E08
 * @note Size: 0xCC
 * setAnmColor__20J2DAnmFullLoader_v15FP15J2DAnmColorFullPC19J3DAnmColorFullData
 */
void J2DAnmFullLoader_v15::setAnmColor(J2DAnmColorFull* anm, const J3DAnmColorFullData* data)
{
	anm->mTotalFrameCount   = data->mFrameMax;
	anm->mAttribute         = data->_08;
	anm->mCurrentFrame      = 0;
	anm->mUpdateMaterialNum = data->mUpdateMaterialNum;
	anm->mTables            = JSUConvertOffsetToPtr<J3DAnmColorFullTable>(data, (void*)data->mTableOffset);
	anm->mRedVals           = JSUConvertOffsetToPtr<u8>(data, (void*)data->mRValuesOffset);
	anm->mGreenVals         = JSUConvertOffsetToPtr<u8>(data, (void*)data->mGValuesOffset);
	anm->mBlueVals          = JSUConvertOffsetToPtr<u8>(data, (void*)data->mBValuesOffset);
	anm->mAlphaVals         = JSUConvertOffsetToPtr<u8>(data, (void*)data->mAValuesOffset);
	anm->mUpdateMaterialID  = JSUConvertOffsetToPtr<u16>(data, (void*)data->mUpdateMaterialIDOffset);
	anm->mNameTab.setResource(JSUConvertOffsetToPtr<ResNTAB>(data, (void*)data->mNameTabOffset));
}

/**
 * @note Address: 0x80048ED4
 * @note Size: 0x28
 */
void J2DAnmFullLoader_v15::readAnmTexPattern(const J3DAnmTexPatternFullData* data)
{
	setAnmTexPattern(static_cast<J2DAnmTexPattern*>(mResource), data);
}

/**
 * @note Address: 0x80048EFC
 * @note Size: 0xA4
 */
void J2DAnmFullLoader_v15::setAnmTexPattern(J2DAnmTexPattern* anm, const J3DAnmTexPatternFullData* data)
{
	anm->mTotalFrameCount   = data->mTotalFrameCount;
	anm->mAttribute         = data->mAttribute;
	anm->mCurrentFrame      = 0;
	anm->mUpdateMaterialNum = data->mExtraInfo1;
	anm->_18                = data->mExtraInfo2;
	anm->mAnmTable          = JSUConvertOffsetToPtr<J3DAnmTexPatternFullTable>(data, (void*)data->mTableOffset);
	anm->mValues            = JSUConvertOffsetToPtr<u16>(data, (void*)data->mValuesOffset);
	anm->mUpdateMaterialID  = JSUConvertOffsetToPtr<u16>(data, (void*)data->mUpdateMaterialIDOffset);
	anm->mNameTab.setResource(JSUConvertOffsetToPtr<ResNTAB>(data, (void*)data->mNameTabOffset));
}

/**
 * @note Address: 0x80048FA0
 * @note Size: 0x28
 */
void J2DAnmKeyLoader_v15::readAnmTevReg(const J3DAnmTevRegKeyData* data) { setAnmTevReg(static_cast<J2DAnmTevRegKey*>(mResource), data); }

/**
 * @note Address: 0x80048FC8
 * @note Size: 0x18C
 */
void J2DAnmKeyLoader_v15::setAnmTevReg(J2DAnmTevRegKey* anm, const J3DAnmTevRegKeyData* data)
{
	anm->mTotalFrameCount       = data->mTotalFrameCount;
	anm->mAttribute             = data->mAttribute;
	anm->mCurrentFrame          = 0;
	anm->mCRegUpdateMaterialNum = data->mCRegUpdateMaterialNum;
	anm->mCRegKeyTable          = JSUConvertOffsetToPtr<J3DAnmCRegKeyTable>(data, (void*)data->mCRegTableOffset);
	anm->mCRegUpdateMaterialID  = JSUConvertOffsetToPtr<u16>(data, (void*)data->mCRegUpdateMaterialIDOffset);
	anm->mCRegNameTab.setResource(JSUConvertOffsetToPtr<ResNTAB>(data, (void*)data->mCRegNameTabOffset));
	anm->mKRegUpdateMaterialNum = data->mKRegUpdateMaterialNum;
	anm->mKRegKeyTable          = JSUConvertOffsetToPtr<J3DAnmKRegKeyTable>(data, (void*)data->mKRegTableOffset);
	anm->mKRegUpdateMaterialID  = JSUConvertOffsetToPtr<u16>(data, (void*)data->mKRegUpdateMaterialIDOffset);
	anm->mKRegNameTab.setResource(JSUConvertOffsetToPtr<ResNTAB>(data, (void*)data->mKRegNameTabOffset));
	anm->_14         = data->_10;
	anm->_16         = data->_12;
	anm->_18         = data->_14;
	anm->_1A         = data->_16;
	anm->mCRedVals   = JSUConvertOffsetToPtr<s16>(data, (void*)data->mCRValuesOffset);
	anm->mCGreenVals = JSUConvertOffsetToPtr<s16>(data, (void*)data->mCGValuesOffset);
	anm->mCBlueVals  = JSUConvertOffsetToPtr<s16>(data, (void*)data->mCBValuesOffset);
	anm->mCAlphaVals = JSUConvertOffsetToPtr<s16>(data, (void*)data->mCAValuesOffset);
	anm->_1C         = data->_18;
	anm->_1E         = data->_1A;
	anm->_20         = data->_1C;
	anm->_22         = data->_1E;
	anm->mKRedVals   = JSUConvertOffsetToPtr<s16>(data, (void*)data->mKRValuesOffset);
	anm->mKGreenVals = JSUConvertOffsetToPtr<s16>(data, (void*)data->mKGValuesOffset);
	anm->mKBlueVals  = JSUConvertOffsetToPtr<s16>(data, (void*)data->mKBValuesOffset);
	anm->mKAlphaVals = JSUConvertOffsetToPtr<s16>(data, (void*)data->mKAValuesOffset);
}

/**
 * @note Address: 0x80049154
 * @note Size: 0x28
 */
void J2DAnmFullLoader_v15::readAnmVisibility(const J3DAnmVisibilityFullData* data)
{
	setAnmVisibility(static_cast<J2DAnmVisibilityFull*>(mResource), data);
}

/**
 * @note Address: 0x8004917C
 * @note Size: 0x7C
 */
void J2DAnmFullLoader_v15::setAnmVisibility(J2DAnmVisibilityFull* anm, const J3DAnmVisibilityFullData* data)
{
	anm->mTotalFrameCount = data->mTotalFrameCount;
	anm->mAttribute       = data->mAttribute;
	anm->mCurrentFrame    = 0;
	anm->mAnimTableNum1   = data->mExtraInfo1;
	anm->mAnimTableNum2   = data->mExtraInfo2;
	anm->mTable           = JSUConvertOffsetToPtr<J3DAnmVisibilityFullTable>(data, (void*)data->mTableOffset);
	anm->mValues          = JSUConvertOffsetToPtr<u8>(data, (void*)data->mValuesOffset);
}

/**
 * @note Address: 0x800491F8
 * @note Size: 0x28
 * readAnmVtxColor__20J2DAnmFullLoader_v15FPC22J3DAnmVtxColorFullData
 */
void J2DAnmFullLoader_v15::readAnmVtxColor(const J3DAnmVtxColorFullData* data)
{
	setAnmVtxColor(static_cast<J2DAnmVtxColorFull*>(mResource), data);
}

/**
 * @note Address: 0x80049220
 * @note Size: 0xFC
 * setAnmVtxColor__20J2DAnmFullLoader_v15FP18J2DAnmVtxColorFullPC22J3DAnmVtxColorFullData
 */
void J2DAnmFullLoader_v15::setAnmVtxColor(J2DAnmVtxColorFull* anm, const J3DAnmVtxColorFullData* data)
{
	anm->mTotalFrameCount      = data->mTotalFrameCount;
	anm->mAttribute            = data->mAttribute;
	anm->mCurrentFrame         = 0;
	anm->mAnmTableNum[0]       = data->mExtraInfo1;
	anm->mAnmTableNum[1]       = data->mExtraInfo2;
	anm->mInfoTables[0]        = JSUConvertOffsetToPtr<J3DAnmColorFullTable>(data, (void*)data->mTableOffsets[0]);
	anm->mInfoTables[1]        = JSUConvertOffsetToPtr<J3DAnmColorFullTable>(data, (void*)data->mTableOffsets[1]);
	anm->mVtxColorIndexData[0] = JSUConvertOffsetToPtr<J3DAnmVtxColorIndexData>(data, (void*)data->mVtxColorIndexDataOffsets[0]);
	anm->mVtxColorIndexData[1] = JSUConvertOffsetToPtr<J3DAnmVtxColorIndexData>(data, (void*)data->mVtxColorIndexDataOffsets[1]);
	anm->mVtxColorIndexPtr[0]  = JSUConvertOffsetToPtr<u16>(data, (void*)data->mVtxColorIndexPointerOffsets[0]);
	anm->mVtxColorIndexPtr[1]  = JSUConvertOffsetToPtr<u16>(data, (void*)data->mVtxColorIndexPointerOffsets[1]);
	anm->mRedVals              = JSUConvertOffsetToPtr<u8>(data, (void*)data->mRValuesOffset);
	anm->mGreenVals            = JSUConvertOffsetToPtr<u8>(data, (void*)data->mGValuesOffset);
	anm->mBlueVals             = JSUConvertOffsetToPtr<u8>(data, (void*)data->mBValuesOffset);
	anm->mAlphaVals            = JSUConvertOffsetToPtr<u8>(data, (void*)data->mAValuesOffset);
}

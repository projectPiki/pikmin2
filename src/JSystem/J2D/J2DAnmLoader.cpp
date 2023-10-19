#include "JSystem/J2D/J2DAnm.h"
#include "JSystem/J2D/J2DAnmLoader.h"
#include "JSystem/JSupport/JSU.h"

/*
 * --INFO--
 * Address:	8004791C
 * Size:	00079C
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

/*
 * --INFO--
 * Address:	8004822C
 * Size:	00001C
 * __ct__19J2DAnmKeyLoader_v15Fv
 */
J2DAnmKeyLoader_v15::J2DAnmKeyLoader_v15() { }

/*
 * --INFO--
 * Address:	80048290
 * Size:	00005C
 * __dt__19J2DAnmKeyLoader_v15Fv
 */
J2DAnmKeyLoader_v15::~J2DAnmKeyLoader_v15() { }

/*
 * --INFO--
 * Address:	800482EC
 * Size:	000104
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

/*
 * --INFO--
 * Address:	800483F0
 * Size:	000154
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

/*
 * --INFO--
 * Address:	80048544
 * Size:	000028
 */
void J2DAnmKeyLoader_v15::readAnmTransform(const J3DAnmTransformKeyData* data)
{
	setAnmTransform(static_cast<J2DAnmTransformKey*>(mResource), data);
}

/*
 * --INFO--
 * Address:	8004856C
 * Size:	00009C
 */
void J2DAnmKeyLoader_v15::setAnmTransform(J2DAnmTransformKey* anm, const J3DAnmTransformKeyData* data)
{
	anm->_22              = data->_0C;
	anm->mFrameLength     = data->mFrameMax;
	anm->_04              = data->_08;
	anm->_24              = data->_09;
	anm->mCurrentFrame    = 0;
	anm->mInfoTable       = JSUConvertOffsetToPtr<J3DAnmTransformKeyTable>(data, (void*)data->mTableOffset);
	anm->mScaleVals       = JSUConvertOffsetToPtr<f32>(data, (void*)data->mScaleOffset);
	anm->mRotationVals    = JSUConvertOffsetToPtr<s16>(data, (void*)data->mRotationOffset);
	anm->mTranslationVals = JSUConvertOffsetToPtr<f32>(data, (void*)data->mTranslateOffset);
}

/*
 * --INFO--
 * Address:	80048608
 * Size:	000028
 */
void J2DAnmKeyLoader_v15::readAnmTextureSRT(const J3DAnmTextureSRTKeyData* data)
{
	setAnmTextureSRT(static_cast<J2DAnmTextureSRTKey*>(mResource), data);
}

/*
 * --INFO--
 * Address:	80048630
 * Size:	0001EC
 */
void J2DAnmKeyLoader_v15::setAnmTextureSRT(J2DAnmTextureSRTKey* anm, const J3DAnmTextureSRTKeyData* data)
{
	anm->mUpdateMaterialNum = data->_0C;
	anm->mFrameLength       = data->mFrameMax;
	anm->_04                = data->_08;
	anm->_10                = data->_09;
	anm->mCurrentFrame      = 0;
	anm->mUpdateMaterialNum = data->_0C;
	anm->_1C                = data->_0E;
	anm->_1E                = data->_10;
	anm->_20                = data->_12;
	anm->mInfoTable         = JSUConvertOffsetToPtr<J3DAnmTransformKeyTable>(data, (void*)data->mTableOffset);
	anm->mUpdateMaterialID  = JSUConvertOffsetToPtr<u16>(data, (void*)data->mUpdateMatIDOffset);
	anm->mNameTab.setResource(JSUConvertOffsetToPtr<ResNTAB>(data, (void*)data->mNameTab1Offset));
	anm->mUpdateTexMtxID  = JSUConvertOffsetToPtr<u8>(data, (void*)data->mUpdateTexMtxIDOffset);
	anm->_48              = JSUConvertOffsetToPtr<Vec>(data, (void*)data->unkOffset);
	anm->mScaleVals       = JSUConvertOffsetToPtr<f32>(data, (void*)data->mScaleValOffset);
	anm->mRotationVals    = JSUConvertOffsetToPtr<s16>(data, (void*)data->mRotValOffset);
	anm->mTranslationVals = JSUConvertOffsetToPtr<f32>(data, (void*)data->mTransValOffset);

	if (data->mNameTab2Offset != 0) {
		anm->mNameTab2.setResource(JSUConvertOffsetToPtr<ResNTAB>(data, (void*)data->mNameTab2Offset));
	}

	anm->_60 = data->_34;
	anm->_4C = data->_36;
	anm->_4E = data->_38;
	anm->_50 = data->_3A;
	anm->_64 = JSUConvertOffsetToPtr<J3DAnmTransformKeyTable>(data, (void*)data->mInfoTable2Offset);
	anm->_6C = JSUConvertOffsetToPtr<u16>(data, (void*)data->_40);
	anm->_68 = JSUConvertOffsetToPtr<u8>(data, (void*)data->_48);
	anm->_80 = JSUConvertOffsetToPtr<Vec>(data, (void*)data->_4C);
	anm->_54 = JSUConvertOffsetToPtr<f32>(data, (void*)data->_50);
	anm->_58 = JSUConvertOffsetToPtr<s16>(data, (void*)data->_54);
	anm->_5C = JSUConvertOffsetToPtr<f32>(data, (void*)data->_58);

	switch (data->_5C) {
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

/*
 * --INFO--
 * Address:	8004881C
 * Size:	000028
 */
void J2DAnmKeyLoader_v15::readAnmColor(const J3DAnmColorKeyData* data) { setAnmColor(static_cast<J2DAnmColorKey*>(mResource), data); }

/*
 * --INFO--
 * Address:	80048844
 * Size:	0000EC
 */
void J2DAnmKeyLoader_v15::setAnmColor(J2DAnmColorKey* anm, const J3DAnmColorKeyData* data)
{
	anm->mFrameLength       = data->mFrameMax;
	anm->_04                = data->_08;
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

/*
 * --INFO--
 * Address:	80048930
 * Size:	000028
 */
void J2DAnmKeyLoader_v15::readAnmVtxColor(const J3DAnmVtxColorKeyData* data)
{
	setAnmVtxColor(static_cast<J2DAnmVtxColorKey*>(mResource), data);
}

/*
 * --INFO--
 * Address:	80048958
 * Size:	0000FC
 */
void J2DAnmKeyLoader_v15::setAnmVtxColor(J2DAnmVtxColorKey* anm, const J3DAnmVtxColorKeyData* data)
{
	anm->mFrameLength          = data->mFrameMax;
	anm->_04                   = data->_08;
	anm->mCurrentFrame         = 0;
	anm->mAnmTableNum[0]       = data->mAnmTableNum[0];
	anm->mAnmTableNum[1]       = data->mAnmTableNum[1];
	anm->mInfoTables[0]        = JSUConvertOffsetToPtr<J3DAnmColorKeyTable>(data, (void*)data->mTableOffsets[0]);
	anm->mInfoTables[1]        = JSUConvertOffsetToPtr<J3DAnmColorKeyTable>(data, (void*)data->mTableOffsets[1]);
	anm->mVtxColorIndexData[0] = JSUConvertOffsetToPtr<J3DAnmVtxColorIndexData>(data, (void*)data->mVtxColoIndexDataOffset[0]);
	anm->mVtxColorIndexData[1] = JSUConvertOffsetToPtr<J3DAnmVtxColorIndexData>(data, (void*)data->mVtxColoIndexDataOffset[1]);
	anm->mVtxColorIndexPtr[0]  = JSUConvertOffsetToPtr<u16>(data, (void*)data->mVtxColoIndexPointerOffset[0]);
	anm->mVtxColorIndexPtr[1]  = JSUConvertOffsetToPtr<u16>(data, (void*)data->mVtxColoIndexPointerOffset[1]);
	anm->mRedVals              = JSUConvertOffsetToPtr<s16>(data, (void*)data->mRValOffset);
	anm->mGreenVals            = JSUConvertOffsetToPtr<s16>(data, (void*)data->mGValOffset);
	anm->mBlueVals             = JSUConvertOffsetToPtr<s16>(data, (void*)data->mBValOffset);
	anm->mAlphaVals            = JSUConvertOffsetToPtr<s16>(data, (void*)data->mAValOffset);
}

/*
 * --INFO--
 * Address:	80048A54
 * Size:	000104
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

/*
 * --INFO--
 * Address:	80048B58
 * Size:	000154
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

/*
 * --INFO--
 * Address:	80048CAC
 * Size:	00001C
 * __ct__20J2DAnmFullLoader_v15Fv
 */
J2DAnmFullLoader_v15::J2DAnmFullLoader_v15() { }

/*
 * --INFO--
 * Address:	80048CC8
 * Size:	00005C
 * __dt__20J2DAnmFullLoader_v15Fv
 */
J2DAnmFullLoader_v15::~J2DAnmFullLoader_v15() { }

/*
 * --INFO--
 * Address:	80048D24
 * Size:	000028
 * readAnmTransform__20J2DAnmFullLoader_v15FPC23J3DAnmTransformFullData
 */
void J2DAnmFullLoader_v15::readAnmTransform(const J3DAnmTransformFullData* data)
{
	setAnmTransform(static_cast<J2DAnmTransformFull*>(mResource), data);
}

/*
 * --INFO--
 * Address:	80048D4C
 * Size:	000094
 * setAnmTransform__20J2DAnmFullLoader_v15FP19J2DAnmTransformFullPC23J3DAnmTransformFullData
 */
void J2DAnmFullLoader_v15::setAnmTransform(J2DAnmTransformFull* anm, const J3DAnmTransformFullData* data)
{
	anm->_22              = data->_0C;
	anm->mFrameLength     = data->mFrameMax;
	anm->_04              = data->_08;
	anm->mCurrentFrame    = 0;
	anm->mTable           = JSUConvertOffsetToPtr<J3DAnmTransformFullTable>(data, (void*)data->mTableOffset);
	anm->mScaleVals       = JSUConvertOffsetToPtr<f32>(data, (void*)data->mScaleValOffset);
	anm->mRotationVals    = JSUConvertOffsetToPtr<s16>(data, (void*)data->mRotValOffset);
	anm->mTranslationVals = JSUConvertOffsetToPtr<f32>(data, (void*)data->mTransValOffset);
}

/*
 * --INFO--
 * Address:	80048DE0
 * Size:	000028
 * readAnmColor__20J2DAnmFullLoader_v15FPC19J3DAnmColorFullData
 */
void J2DAnmFullLoader_v15::readAnmColor(const J3DAnmColorFullData* data) { setAnmColor(static_cast<J2DAnmColorFull*>(mResource), data); }

/*
 * --INFO--
 * Address:	80048E08
 * Size:	0000CC
 * setAnmColor__20J2DAnmFullLoader_v15FP15J2DAnmColorFullPC19J3DAnmColorFullData
 */
void J2DAnmFullLoader_v15::setAnmColor(J2DAnmColorFull* anm, const J3DAnmColorFullData* data)
{
	anm->mFrameLength       = data->mFrameMax;
	anm->_04                = data->_08;
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

/*
 * --INFO--
 * Address:	80048ED4
 * Size:	000028
 */
void J2DAnmFullLoader_v15::readAnmTexPattern(const J3DAnmTexPatternFullData* data)
{
	setAnmTexPattern(static_cast<J2DAnmTexPattern*>(mResource), data);
}

/*
 * --INFO--
 * Address:	80048EFC
 * Size:	0000A4
 */
void J2DAnmFullLoader_v15::setAnmTexPattern(J2DAnmTexPattern* anm, const J3DAnmTexPatternFullData* data)
{
	anm->mFrameLength       = data->mFrameMax;
	anm->_04                = data->_08;
	anm->mCurrentFrame      = 0;
	anm->mUpdateMaterialNum = data->_0C;
	anm->_18                = data->_0E;
	anm->mAnmTable          = JSUConvertOffsetToPtr<J3DAnmTexPatternFullTable>(data, (void*)data->mTableOffset);
	anm->mValues            = JSUConvertOffsetToPtr<u16>(data, (void*)data->mValuesOffset);
	anm->mUpdateMaterialID  = JSUConvertOffsetToPtr<u16>(data, (void*)data->mUpdateMaterialIDOffset);
	anm->mNameTab.setResource(JSUConvertOffsetToPtr<ResNTAB>(data, (void*)data->mNameTabOffset));
}

/*
 * --INFO--
 * Address:	80048FA0
 * Size:	000028
 */
void J2DAnmKeyLoader_v15::readAnmTevReg(const J3DAnmTevRegKeyData* data) { setAnmTevReg(static_cast<J2DAnmTevRegKey*>(mResource), data); }

/*
 * --INFO--
 * Address:	80048FC8
 * Size:	00018C
 */
void J2DAnmKeyLoader_v15::setAnmTevReg(J2DAnmTevRegKey* anm, const J3DAnmTevRegKeyData* data)
{
	anm->mFrameLength           = data->mFrameMax;
	anm->_04                    = data->_08;
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

/*
 * --INFO--
 * Address:	80049154
 * Size:	000028
 */
void J2DAnmFullLoader_v15::readAnmVisibility(const J3DAnmVisibilityFullData* data)
{
	setAnmVisibility(static_cast<J2DAnmVisibilityFull*>(mResource), data);
}

/*
 * --INFO--
 * Address:	8004917C
 * Size:	00007C
 */
void J2DAnmFullLoader_v15::setAnmVisibility(J2DAnmVisibilityFull* anm, const J3DAnmVisibilityFullData* data)
{
	anm->mFrameLength  = data->mFrameMax;
	anm->_04           = data->_08;
	anm->mCurrentFrame = 0;
	anm->_10           = data->_0C;
	anm->_12           = data->_0E;
	anm->mTable        = JSUConvertOffsetToPtr<J3DAnmVisibilityFullTable>(data, (void*)data->mTableOffset);
	anm->mValues       = JSUConvertOffsetToPtr<u8>(data, (void*)data->mValuesOffset);
}

/*
 * --INFO--
 * Address:	800491F8
 * Size:	000028
 * readAnmVtxColor__20J2DAnmFullLoader_v15FPC22J3DAnmVtxColorFullData
 */
void J2DAnmFullLoader_v15::readAnmVtxColor(const J3DAnmVtxColorFullData* data)
{
	setAnmVtxColor(static_cast<J2DAnmVtxColorFull*>(mResource), data);
}

/*
 * --INFO--
 * Address:	80049220
 * Size:	0000FC
 * setAnmVtxColor__20J2DAnmFullLoader_v15FP18J2DAnmVtxColorFullPC22J3DAnmVtxColorFullData
 */
void J2DAnmFullLoader_v15::setAnmVtxColor(J2DAnmVtxColorFull* anm, const J3DAnmVtxColorFullData* data)
{
	anm->mFrameLength          = data->mFrameMax;
	anm->_04                   = data->_08;
	anm->mCurrentFrame         = 0;
	anm->mAnmTableNum[0]       = data->_0C;
	anm->mAnmTableNum[1]       = data->_0E;
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

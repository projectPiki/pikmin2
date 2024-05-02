#include "JSystem/J3D/J3DAnmLoader.h"
#include "JSystem/J3D/J3DAnmBase.h"
#include "JSystem/J3D/J3DAnmCluster.h"
#include "JSystem/J3D/J3DAnmColor.h"
#include "JSystem/J3D/J3DAnmTevRegKey.h"
#include "JSystem/J3D/J3DAnmTexPattern.h"
#include "JSystem/J3D/J3DAnmTextureSRTKey.h"
#include "JSystem/J3D/J3DAnmTransform.h"
#include "JSystem/J3D/J3DAnmVisibilityFull.h"
#include "JSystem/J3D/J3DAnmVtxColor.h"
#include "JSystem/J3D/J3DFileBlock.h"
#include "JSystem/J3D/J3DMaterial.h"
#include "JSystem/JGeometry.h"
#include "JSystem/JSupport/JSU.h"
#include "JSystem/JUtility/JUTNameTab.h"
#include "types.h"

/**
 * @note Address: 0x800725A0
 * @note Size: 0x8C4
 */
J3DAnmBase* J3DAnmLoaderDataBase::load(const void* stream)
{
	if (stream == nullptr) {
		return nullptr;
	}
	J3DFileHeader* header = (J3DFileHeader*)stream;
	if (header->mJ3dVersion == 'J3D1') {
		switch (header->mFileVersion) {
		case 'bck1': {
			J3DAnmKeyLoader_v15 loader;
			loader.mAnimation = new J3DAnmTransformKey();
			return loader.load(stream);
		} break;
		case 'bpk1': {
			J3DAnmKeyLoader_v15 loader;
			loader.mAnimation = new J3DAnmColorKey();
			return loader.load(stream);
		} break;
		case 'blk1': {
			J3DAnmKeyLoader_v15 loader;
			loader.mAnimation = new J3DAnmClusterKey();
			return loader.load(stream);
		} break;
		case 'btk1': {
			J3DAnmKeyLoader_v15 loader;
			loader.mAnimation = new J3DAnmTextureSRTKey();
			return loader.load(stream);
		} break;
		case 'brk1': {
			J3DAnmKeyLoader_v15 loader;
			loader.mAnimation = new J3DAnmTevRegKey();
			return loader.load(stream);
		} break;
		case 'bxk1': {
			J3DAnmKeyLoader_v15 loader;
			loader.mAnimation = new J3DAnmVtxColorKey();
			return loader.load(stream);
		} break;
		case 'bca1': {
			J3DAnmFullLoader_v15 loader;
			loader.mAnimation = new J3DAnmTransformFull();
			return loader.load(stream);
		} break;
		case 'bpa1': {
			J3DAnmFullLoader_v15 loader;
			loader.mAnimation = new J3DAnmColorFull();
			return loader.load(stream);
		} break;
		case 'btp1': {
			J3DAnmFullLoader_v15 loader;
			loader.mAnimation = new J3DAnmTexPattern();
			return loader.load(stream);
		} break;
		case 'bva1': {
			J3DAnmFullLoader_v15 loader;
			loader.mAnimation = new J3DAnmVisibilityFull();
			return loader.load(stream);
		} break;
		case 'bla1': {
			J3DAnmFullLoader_v15 loader;
			loader.mAnimation = new J3DAnmClusterFull();
			return loader.load(stream);
		} break;
		case 'bxa1': {
			J3DAnmFullLoader_v15 loader;
			loader.mAnimation = new J3DAnmVtxColorFull();
			return loader.load(stream);
		} break;
		default:
			return nullptr;
		}
	}
	return nullptr;
}

/**
 * @note Address: 0x80072E64
 * @note Size: 0x1C
 * __ct__20J3DAnmFullLoader_v15Fv
 */
J3DAnmFullLoader_v15::J3DAnmFullLoader_v15() { }

/**
 * @note Address: 0x80072E80
 * @note Size: 0x48
 * __dt__12J3DAnmLoaderFv
 */
J3DAnmLoader::~J3DAnmLoader() { }

/**
 * @note Address: 0x80072EC8
 * @note Size: 0x5C
 * __dt__20J3DAnmFullLoader_v15Fv
 */
J3DAnmFullLoader_v15::~J3DAnmFullLoader_v15() { }

/**
 * @note Address: 0x80072F24
 * @note Size: 0x1C
 * __ct__19J3DAnmKeyLoader_v15Fv
 */
J3DAnmKeyLoader_v15::J3DAnmKeyLoader_v15() { }

/**
 * @note Address: 0x80072F40
 * @note Size: 0x5C
 * __dt__19J3DAnmKeyLoader_v15Fv
 */
J3DAnmKeyLoader_v15::~J3DAnmKeyLoader_v15() { }

/**
 * @note Address: 0x80072F9C
 * @note Size: 0x128
 * load__20J3DAnmFullLoader_v15FPCv
 * TODO: Regswap.
 */
J3DAnmBase* J3DAnmFullLoader_v15::load(const void* stream)
{
	const J3DFileHeader* header = reinterpret_cast<const J3DFileHeader*>(stream);
	// int blockCount              = header->mBlockCount;
	// const J3DFileBlockBase* nextBlock = reinterpret_cast<const J3DFileBlockBase*>(reinterpret_cast<const J3DFileHeader*>(stream) + 1);
	const J3DFileBlockBase* nextBlock = header->getFirstBlock();
	for (u32 i = 0; i < header->mBlockCount; i++) {
		switch (nextBlock->mBlockType) {
		case J3DFBT_AnmTransformFull:
			readAnmTransform((const J3DAnmTransformFullData*)nextBlock);
			break;
		case J3DFBT_AnmColorFull:
			readAnmColor((const J3DAnmColorFullData*)nextBlock);
			break;
		case J3DFBT_AnmTexPattern:
			readAnmTexPattern((const J3DAnmTexPatternFullData*)nextBlock);
			break;
		case J3DFBT_AnmClusterFull:
			readAnmCluster((const J3DAnmClusterFullData*)nextBlock);
			break;
		case J3DFBT_AnmVisibilityFull:
			readAnmVisibility((const J3DAnmVisibilityFullData*)nextBlock);
			break;
		case J3DFBT_AnmVtxColorFull:
			readAnmVtxColor((const J3DAnmVtxColorFullData*)nextBlock);
			break;
		}
		nextBlock = nextBlock->getNext();
	}
	return mAnimation;
}

/**
 * @note Address: 0x800730C4
 * @note Size: 0x140
 * TODO: Regswap
 * setResource__20J3DAnmFullLoader_v15FP10J3DAnmBasePCv
 */
void J3DAnmFullLoader_v15::setResource(J3DAnmBase* resource, const void* stream)
{
	const J3DFileHeader* header       = reinterpret_cast<const J3DFileHeader*>(stream);
	const J3DFileBlockBase* nextBlock = header->getFirstBlock();
	for (u32 i = 0; i < header->mBlockCount; i++) {
		switch (nextBlock->mBlockType) {
		case J3DFBT_AnmTransformFull:
			setAnmTransform((J3DAnmTransformFull*)resource, (const J3DAnmTransformFullData*)nextBlock);
			break;
		case J3DFBT_AnmColorFull:
			setAnmColor((J3DAnmColorFull*)resource, (const J3DAnmColorFullData*)nextBlock);
			break;
		case J3DFBT_AnmTexPattern:
			setAnmTexPattern((J3DAnmTexPattern*)resource, (const J3DAnmTexPatternFullData*)nextBlock);
			break;
		case J3DFBT_AnmClusterFull:
			setAnmCluster((J3DAnmClusterFull*)resource, (const J3DAnmClusterFullData*)nextBlock);
			break;
		case J3DFBT_AnmVisibilityFull:
			setAnmVisibility((J3DAnmVisibilityFull*)resource, (const J3DAnmVisibilityFullData*)nextBlock);
			break;
		case J3DFBT_AnmVtxColorFull:
			setAnmVtxColor((J3DAnmVtxColorFull*)resource, (const J3DAnmVtxColorFullData*)nextBlock);
			break;
		}
		nextBlock = nextBlock->getNext();
	}
}

/**
 * @note Address: 0x80073204
 * @note Size: 0x28
 */
void J3DAnmFullLoader_v15::readAnmTransform(const J3DAnmTransformFullData* data)
{
	setAnmTransform((J3DAnmTransformFull*)mAnimation, data);
}

/**
 * @note Address: 0x8007322C
 * @note Size: 0x94
 */
void J3DAnmFullLoader_v15::setAnmTransform(J3DAnmTransformFull* animation, const J3DAnmTransformFullData* data)
{
	animation->mUpdateMaterialNum = data->mExtraInfo1;
	animation->mTotalFrameCount   = data->mTotalFrameCount;
	animation->mAttribute         = data->mAttribute;
	animation->mCurrentFrame      = 0.0f;

	animation->mTable           = JSUConvertOffsetToPtr<J3DAnmTransformFullTable>(data, (void*)data->mTableOffset);
	animation->mScaleVals       = JSUConvertOffsetToPtr<f32>(data, (void*)data->mScaleValOffset);
	animation->mRotationVals    = JSUConvertOffsetToPtr<s16>(data, (void*)data->mRotValOffset);
	animation->mTranslationVals = JSUConvertOffsetToPtr<f32>(data, (void*)data->mTransValOffset);
}

/**
 * @note Address: 0x800732C0
 * @note Size: 0x28
 */
void J3DAnmFullLoader_v15::readAnmColor(const J3DAnmColorFullData* data) { setAnmColor((J3DAnmColorFull*)mAnimation, data); }

/**
 * @note Address: 0x800732E8
 * @note Size: 0xCC
 */
void J3DAnmFullLoader_v15::setAnmColor(J3DAnmColorFull* animation, const J3DAnmColorFullData* data)
{
	animation->mTotalFrameCount   = data->mFrameMax;
	animation->mAttribute         = data->_08;
	animation->mCurrentFrame      = 0.0f;
	animation->mUpdateMaterialNum = data->mUpdateMaterialNum;

	animation->mTable            = JSUConvertOffsetToPtr<J3DAnmColorFullTable>(data, (void*)data->mTableOffset);
	animation->mRedVals          = JSUConvertOffsetToPtr<u8>(data, (void*)data->mRValuesOffset);
	animation->mGreenVals        = JSUConvertOffsetToPtr<u8>(data, (void*)data->mGValuesOffset);
	animation->mBlueVals         = JSUConvertOffsetToPtr<u8>(data, (void*)data->mBValuesOffset);
	animation->mAlphaVals        = JSUConvertOffsetToPtr<u8>(data, (void*)data->mAValuesOffset);
	animation->mUpdateMaterialID = JSUConvertOffsetToPtr<u16>(data, (void*)data->mUpdateMaterialIDOffset);
	animation->mNameTab.setResource(JSUConvertOffsetToPtr<ResNTAB>(data, (void*)data->mNameTabOffset));
}

/**
 * @note Address: 0x800733B4
 * @note Size: 0x28
 */
void J3DAnmFullLoader_v15::readAnmTexPattern(const J3DAnmTexPatternFullData* data)
{
	setAnmTexPattern((J3DAnmTexPattern*)mAnimation, data);
}

/**
 * @note Address: 0x800733DC
 * @note Size: 0xA4
 */
void J3DAnmFullLoader_v15::setAnmTexPattern(J3DAnmTexPattern* animation, const J3DAnmTexPatternFullData* data)
{
	animation->mTotalFrameCount   = data->mTotalFrameCount;
	animation->mAttribute         = data->mAttribute;
	animation->mCurrentFrame      = 0.0f;
	animation->mUpdateMaterialNum = data->mExtraInfo1;
	animation->_14                = data->mExtraInfo2;

	animation->mAnmTable         = JSUConvertOffsetToPtr<J3DAnmTexPatternFullTable>(data, (void*)data->mTableOffset);
	animation->_0C               = JSUConvertOffsetToPtr<u16>(data, (void*)data->mValuesOffset);
	animation->mUpdateMaterialID = JSUConvertOffsetToPtr<u16>(data, (void*)data->mUpdateMaterialIDOffset);
	animation->mNameTab.setResource(JSUConvertOffsetToPtr<ResNTAB>(data, (void*)data->mNameTabOffset));
}

/**
 * @note Address: 0x80073480
 * @note Size: 0x28
 */
void J3DAnmFullLoader_v15::readAnmVisibility(const J3DAnmVisibilityFullData* data)
{
	setAnmVisibility((J3DAnmVisibilityFull*)mAnimation, data);
}

/**
 * @note Address: 0x800734A8
 * @note Size: 0x7C
 */
void J3DAnmFullLoader_v15::setAnmVisibility(J3DAnmVisibilityFull* animation, const J3DAnmVisibilityFullData* data)
{
	animation->mTotalFrameCount = data->mTotalFrameCount;
	animation->mAttribute       = data->mAttribute;
	animation->mCurrentFrame    = 0.0f;
	animation->_0C              = data->mExtraInfo1;
	animation->_0E              = data->mExtraInfo2;

	animation->mTable  = JSUConvertOffsetToPtr<J3DAnmVisibilityFullTable>(data, (void*)data->mTableOffset);
	animation->mValues = JSUConvertOffsetToPtr<u8>(data, (void*)data->mValuesOffset);
}

/**
 * @note Address: 0x80073524
 * @note Size: 0x28
 */
void J3DAnmFullLoader_v15::readAnmCluster(const J3DAnmClusterFullData* data) { setAnmCluster((J3DAnmClusterFull*)mAnimation, data); }

/**
 * @note Address: 0x8007354C
 * @note Size: 0x6C
 */
void J3DAnmFullLoader_v15::setAnmCluster(J3DAnmClusterFull* animation, const J3DAnmClusterFullData* data)
{
	animation->mTotalFrameCount = data->mTotalFrameCount;
	animation->mAttribute       = data->mAttribute;
	animation->mCurrentFrame    = 0.0f;

	animation->mTables  = JSUConvertOffsetToPtr<J3DAnmClusterFullTable>(data, data->mTablesOffset);
	animation->mWeights = JSUConvertOffsetToPtr<f32>(data, data->mWeightsOffset);
}

/**
 * @note Address: 0x800735B8
 * @note Size: 0x28
 */
void J3DAnmFullLoader_v15::readAnmVtxColor(const J3DAnmVtxColorFullData* data) { setAnmVtxColor((J3DAnmVtxColorFull*)mAnimation, data); }

/**
 * @note Address: 0x800735E0
 * @note Size: 0x170
 * TODO: Type of J3DAnmVtxColorIndexData::_04 is wrong? It might be u16*...
 * setAnmVtxColor__20J3DAnmFullLoader_v15FP18J3DAnmVtxColorFullPC22J3DAnmVtxColorFullData
 */
void J3DAnmFullLoader_v15::setAnmVtxColor(J3DAnmVtxColorFull* animation, const J3DAnmVtxColorFullData* data)
{
	animation->mTotalFrameCount = data->mTotalFrameCount;
	animation->mAttribute       = data->mAttribute;
	animation->mCurrentFrame    = 0.0f;
	animation->mAnmTableNum[0]  = data->mExtraInfo1;
	animation->mAnmTableNum[1]  = data->mExtraInfo2;

	animation->mTable[0]                = JSUConvertOffsetToPtr<J3DAnmColorFullTable>(data, (void*)data->mTableOffsets[0]);
	animation->mTable[1]                = JSUConvertOffsetToPtr<J3DAnmColorFullTable>(data, (void*)data->mTableOffsets[1]);
	animation->mAnmVtxColorIndexData[0] = JSUConvertOffsetToPtr<J3DAnmVtxColorIndexData>(data, (void*)data->mVtxColorIndexDataOffsets[0]);
	animation->mAnmVtxColorIndexData[1] = JSUConvertOffsetToPtr<J3DAnmVtxColorIndexData>(data, (void*)data->mVtxColorIndexDataOffsets[1]);
	u16* v1                             = JSUConvertOffsetToPtr<u16>(data, (void*)data->mVtxColorIndexPointerOffsets[0]);
	u16* v2                             = JSUConvertOffsetToPtr<u16>(data, (void*)data->mVtxColorIndexPointerOffsets[1]);

	for (int i = 0; i < animation->mAnmTableNum[0]; i++) {
		animation->mAnmVtxColorIndexData[0][i].mData = (void*)(v1 + (u32)animation->mAnmVtxColorIndexData[0][i].mData);
	}
	for (int i = 0; i < animation->mAnmTableNum[1]; i++) {
		animation->mAnmVtxColorIndexData[1][i].mData = (void*)(v2 + (u32)animation->mAnmVtxColorIndexData[1][i].mData);
	}

	animation->mRedVals   = JSUConvertOffsetToPtr<u8>(data, (void*)data->mRValuesOffset);
	animation->mGreenVals = JSUConvertOffsetToPtr<u8>(data, (void*)data->mGValuesOffset);
	animation->mBlueVals  = JSUConvertOffsetToPtr<u8>(data, (void*)data->mBValuesOffset);
	animation->mAlphaVals = JSUConvertOffsetToPtr<u8>(data, (void*)data->mAValuesOffset);
}

/**
 * @note Address: 0x80073750
 * @note Size: 0x128
 * load__19J3DAnmKeyLoader_v15FPCv
 */
J3DAnmBase* J3DAnmKeyLoader_v15::load(const void* stream)
{
	const J3DFileHeader* header = reinterpret_cast<const J3DFileHeader*>(stream);
	// int blockCount              = header->mBlockCount;
	// const J3DFileBlockBase* nextBlock = reinterpret_cast<const J3DFileBlockBase*>(reinterpret_cast<const J3DFileHeader*>(stream) + 1);
	const J3DFileBlockBase* nextBlock = header->getFirstBlock();
	for (u32 i = 0; i < header->mBlockCount; i++) {
		switch (nextBlock->mBlockType) {
		case J3DFBT_AnmTransformKey:
			readAnmTransform((const J3DAnmTransformKeyData*)nextBlock);
			break;
		case J3DFBT_AnmColorKey:
			readAnmColor((const J3DAnmColorKeyData*)nextBlock);
			break;
		case J3DFBT_AnmClusterKey:
			readAnmCluster((const J3DAnmClusterKeyData*)nextBlock);
			break;
		case J3DFBT_AnmTextureSRTKey:
			readAnmTextureSRT((const J3DAnmTextureSRTKeyData*)nextBlock);
			break;
		case J3DFBT_AnmTevRegKey:
			readAnmTevReg((const J3DAnmTevRegKeyData*)nextBlock);
			break;
		case J3DFBT_AnmVtxColorKey:
			readAnmVtxColor((const J3DAnmVtxColorKeyData*)nextBlock);
			break;
		}
		nextBlock = nextBlock->getNext();
	}
	return mAnimation;
}

/**
 * @note Address: 0x80073878
 * @note Size: 0x140
 * setResource__19J3DAnmKeyLoader_v15FP10J3DAnmBasePCv
 */
void J3DAnmKeyLoader_v15::setResource(J3DAnmBase* resource, const void* stream)
{
	const J3DFileHeader* header       = reinterpret_cast<const J3DFileHeader*>(stream);
	const J3DFileBlockBase* nextBlock = header->getFirstBlock();
	for (u32 i = 0; i < header->mBlockCount; i++) {
		switch (nextBlock->mBlockType) {
		case J3DFBT_AnmTransformKey:
			setAnmTransform((J3DAnmTransformKey*)resource, (const J3DAnmTransformKeyData*)nextBlock);
			break;
		case J3DFBT_AnmColorKey:
			setAnmColor((J3DAnmColorKey*)resource, (const J3DAnmColorKeyData*)nextBlock);
			break;
		case J3DFBT_AnmClusterKey:
			setAnmCluster((J3DAnmClusterKey*)resource, (const J3DAnmClusterKeyData*)nextBlock);
			break;
		case J3DFBT_AnmTextureSRTKey:
			setAnmTextureSRT((J3DAnmTextureSRTKey*)resource, (const J3DAnmTextureSRTKeyData*)nextBlock);
			break;
		case J3DFBT_AnmTevRegKey:
			setAnmTevReg((J3DAnmTevRegKey*)resource, (const J3DAnmTevRegKeyData*)nextBlock);
			break;
		case J3DFBT_AnmVtxColorKey:
			setAnmVtxColor((J3DAnmVtxColorKey*)resource, (const J3DAnmVtxColorKeyData*)nextBlock);
			break;
		}
		nextBlock = nextBlock->getNext();
	}
}

/**
 * @note Address: 0x800739B8
 * @note Size: 0x28
 * readAnmTransform__19J3DAnmKeyLoader_v15FPC22J3DAnmTransformKeyData
 */
void J3DAnmKeyLoader_v15::readAnmTransform(const J3DAnmTransformKeyData* data) { setAnmTransform((J3DAnmTransformKey*)mAnimation, data); }

/**
 * @note Address: 0x800739E0
 * @note Size: 0x9C
 * setAnmTransform__19J3DAnmKeyLoader_v15FP18J3DAnmTransformKeyPC22J3DAnmTransformKeyData
 */
void J3DAnmKeyLoader_v15::setAnmTransform(J3DAnmTransformKey* animation, const J3DAnmTransformKeyData* data)
{
	animation->mUpdateMaterialNum = data->mExtraInfo1;
	animation->mTotalFrameCount   = data->mTotalFrameCount;
	animation->mAttribute         = data->mAttribute;
	animation->_20                = data->mRotationScale;
	animation->mCurrentFrame      = 0.0f;

	animation->mTable           = JSUConvertOffsetToPtr<J3DAnmTransformKeyTable>(data, (void*)data->mTableOffset);
	animation->mScaleVals       = JSUConvertOffsetToPtr<f32>(data, (void*)data->mScaleOffset);
	animation->mRotationVals    = JSUConvertOffsetToPtr<s16>(data, (void*)data->mRotationOffset);
	animation->mTranslationVals = JSUConvertOffsetToPtr<f32>(data, (void*)data->mTranslateOffset);
}

/**
 * @note Address: 0x80073A7C
 * @note Size: 0x28
 * readAnmTextureSRT__19J3DAnmKeyLoader_v15FPC23J3DAnmTextureSRTKeyData
 */
void J3DAnmKeyLoader_v15::readAnmTextureSRT(const J3DAnmTextureSRTKeyData* data)
{
	setAnmTextureSRT((J3DAnmTextureSRTKey*)mAnimation, data);
}

/**
 * @note Address: 0x80073AA4
 * @note Size: 0x1D8
 * setAnmTextureSRT__19J3DAnmKeyLoader_v15FP19J3DAnmTextureSRTKeyPC23J3DAnmTextureSRTKeyData
 */
void J3DAnmKeyLoader_v15::setAnmTextureSRT(J3DAnmTextureSRTKey* animation, const J3DAnmTextureSRTKeyData* data)
{
	animation->mTrackNum        = data->mExtraInfo1;
	animation->mTotalFrameCount = data->mTotalFrameCount;
	animation->mAttribute       = data->mAttribute;
	animation->mRotationScale   = data->mRotationScale;
	animation->mCurrentFrame    = 0.0f;
	animation->mTrackNum        = data->mExtraInfo1;
	animation->mScaleNum        = data->mExtraInfo2;
	animation->mRotNum          = data->mRotationNum;
	animation->mTransNum        = data->mTranslationNum;

	animation->mTable1           = JSUConvertOffsetToPtr<J3DAnmTransformKeyTable>(data, (void*)data->mTableOffset);
	animation->mUpdateMaterialID = JSUConvertOffsetToPtr<u16>(data, (void*)data->mUpdateMatIDOffset);
	animation->mUpdateMaterialName.setResource(JSUConvertOffsetToPtr<ResNTAB>(data, (void*)data->mNameTab1Offset));
	animation->mUpdateTexMtxID   = JSUConvertOffsetToPtr<u8>(data, (void*)data->mUpdateTexMtxIDOffset);
	animation->mSRTCenter        = JSUConvertOffsetToPtr<Vec>(data, (void*)data->mSrtCenterOffset);
	animation->mScale1Vals       = JSUConvertOffsetToPtr<f32>(data, (void*)data->mScaleValOffset);
	animation->mRotation1Vals    = JSUConvertOffsetToPtr<s16>(data, (void*)data->mRotValOffset);
	animation->mTranslation1Vals = JSUConvertOffsetToPtr<f32>(data, (void*)data->mTransValOffset);
	if (data->mNameTab2Offset != nullptr) {
		animation->mPostUpdateMaterialName.setResource(JSUConvertOffsetToPtr<ResNTAB>(data, (void*)data->mNameTab2Offset));
	}
	animation->mPostTrackNum         = data->mPostTrackNum;
	animation->_44                   = data->_36;
	animation->_46                   = data->_38;
	animation->_48                   = data->_3A;
	animation->mTransformKeyTable    = JSUConvertOffsetToPtr<J3DAnmTransformKeyTable>(data, (void*)data->mTransformKeyTableOffset);
	animation->mPostUpdateMaterialID = JSUConvertOffsetToPtr<u16>(data, (void*)data->mPostUpdateMaterialIDOffset);
	animation->mPostUpdateTexMtxID   = JSUConvertOffsetToPtr<u8>(data, (void*)data->mPostUpdateTexMtxIDOffset);
	animation->mPostSRTCenter        = JSUConvertOffsetToPtr<Vec>(data, (void*)data->mPostSRTCenterOffset);
	animation->_4C                   = JSUConvertOffsetToPtr<f32>(data, (void*)data->_50);
	animation->_50                   = JSUConvertOffsetToPtr<s16>(data, (void*)data->_54);
	animation->_54                   = JSUConvertOffsetToPtr<f32>(data, (void*)data->_58);

	switch (data->mTexMtxCalcType) {
	case 0:
	case 1:
		animation->mTexMtxCalcType = data->mTexMtxCalcType;
		break;
	default:
		animation->mTexMtxCalcType = 0;
	}
}

/**
 * @note Address: 0x80073C7C
 * @note Size: 0x28
 * readAnmColor__19J3DAnmKeyLoader_v15FPC18J3DAnmColorKeyData
 */
void J3DAnmKeyLoader_v15::readAnmColor(const J3DAnmColorKeyData* data) { setAnmColor((J3DAnmColorKey*)mAnimation, data); }

/**
 * @note Address: 0x80073CA4
 * @note Size: 0xEC
 * setAnmColor__19J3DAnmKeyLoader_v15FP14J3DAnmColorKeyPC18J3DAnmColorKeyData
 */
void J3DAnmKeyLoader_v15::setAnmColor(J3DAnmColorKey* animation, const J3DAnmColorKeyData* data)
{
	animation->mTotalFrameCount   = data->mTotalFrameCount;
	animation->mAttribute         = data->mAttribute;
	animation->mCurrentFrame      = 0.0f;
	animation->mUpdateMaterialNum = data->mUpdateMaterialNum;
	animation->_0C                = data->_10;
	animation->_0E                = data->_12;
	animation->_10                = data->_14;
	animation->_12                = data->_16;
	animation->mTable             = JSUConvertOffsetToPtr<J3DAnmColorKeyTable>(data, (void*)data->mTableOffset);
	animation->mRedValue          = JSUConvertOffsetToPtr<s16>(data, (void*)data->mRValOffset);
	animation->mGreenValue        = JSUConvertOffsetToPtr<s16>(data, (void*)data->mGValOffset);
	animation->mBlueValue         = JSUConvertOffsetToPtr<s16>(data, (void*)data->mBValOffset);
	animation->mAlphaValue        = JSUConvertOffsetToPtr<s16>(data, (void*)data->mAValOffset);
	animation->mUpdateMaterialID  = JSUConvertOffsetToPtr<u16>(data, (void*)data->mUpdateMaterialIDOffset);

	animation->mNameTab.setResource(JSUConvertOffsetToPtr<ResNTAB>(data, (void*)data->mNameTabOffset));
}

/**
 * @note Address: 0x80073D90
 * @note Size: 0x28
 * readAnmCluster__19J3DAnmKeyLoader_v15FPC20J3DAnmClusterKeyData
 */
void J3DAnmKeyLoader_v15::readAnmCluster(const J3DAnmClusterKeyData* data) { setAnmCluster((J3DAnmClusterKey*)mAnimation, data); }

/**
 * @note Address: 0x80073DB8
 * @note Size: 0x6C
 * setAnmCluster__19J3DAnmKeyLoader_v15FP16J3DAnmClusterKeyPC20J3DAnmClusterKeyData
 */
void J3DAnmKeyLoader_v15::setAnmCluster(J3DAnmClusterKey* animation, const J3DAnmClusterKeyData* data)
{
	animation->mTotalFrameCount = data->mTotalFrameCount;
	animation->mAttribute       = data->mAttribute;
	animation->mCurrentFrame    = 0.0f;
	animation->mTables          = JSUConvertOffsetToPtr<J3DAnmClusterKeyTable>(data, (void*)data->mTableOffset);
	animation->mWeights         = JSUConvertOffsetToPtr<f32>(data, (void*)data->mWeightsOffset);
}

/**
 * @note Address: 0x80073E24
 * @note Size: 0x28
 * readAnmTevReg__19J3DAnmKeyLoader_v15FPC19J3DAnmTevRegKeyData
 */
void J3DAnmKeyLoader_v15::readAnmTevReg(const J3DAnmTevRegKeyData* data) { setAnmTevReg((J3DAnmTevRegKey*)mAnimation, data); }

/**
 * @note Address: 0x80073E4C
 * @note Size: 0x18C
 * setAnmTevReg__19J3DAnmKeyLoader_v15FP15J3DAnmTevRegKeyPC19J3DAnmTevRegKeyData
 */
void J3DAnmKeyLoader_v15::setAnmTevReg(J3DAnmTevRegKey* animation, const J3DAnmTevRegKeyData* data)
{
	animation->mTotalFrameCount       = data->mTotalFrameCount;
	animation->mAttribute             = data->mAttribute;
	animation->mCurrentFrame          = 0.0f;
	animation->mCRegUpdateMaterialNum = data->mCRegUpdateMaterialNum;
	animation->mCRegKeyTable          = JSUConvertOffsetToPtr<J3DAnmCRegKeyTable>(data, (void*)data->mCRegTableOffset);
	animation->mCRegUpdateMaterialID  = JSUConvertOffsetToPtr<u16>(data, (void*)data->mCRegUpdateMaterialIDOffset);
	animation->mCRegNameTable.setResource(JSUConvertOffsetToPtr<ResNTAB>(data, (void*)data->mCRegNameTabOffset));
	animation->mKRegUpdateMaterialNum = data->mKRegUpdateMaterialNum;
	animation->mKRegKeyTable          = JSUConvertOffsetToPtr<J3DAnmKRegKeyTable>(data, (void*)data->mKRegTableOffset);
	animation->mKRegUpdateMaterialID  = JSUConvertOffsetToPtr<u16>(data, (void*)data->mKRegUpdateMaterialIDOffset);
	animation->mKRegNameTable.setResource(JSUConvertOffsetToPtr<ResNTAB>(data, (void*)data->mKRegNameTabOffset));
	animation->_10         = data->_10;
	animation->_12         = data->_12;
	animation->_14         = data->_14;
	animation->_16         = data->_16;
	animation->mCRedVals   = JSUConvertOffsetToPtr<s16>(data, (void*)data->mCRValuesOffset);
	animation->mCGreenVals = JSUConvertOffsetToPtr<s16>(data, (void*)data->mCGValuesOffset);
	animation->mCBlueVals  = JSUConvertOffsetToPtr<s16>(data, (void*)data->mCBValuesOffset);
	animation->mCAlphaVals = JSUConvertOffsetToPtr<s16>(data, (void*)data->mCAValuesOffset);
	animation->_18         = data->_18;
	animation->_1A         = data->_1A;
	animation->_1C         = data->_1C;
	animation->_1E         = data->_1E;
	animation->mKRedVals   = JSUConvertOffsetToPtr<s16>(data, (void*)data->mKRValuesOffset);
	animation->mKGreenVals = JSUConvertOffsetToPtr<s16>(data, (void*)data->mKGValuesOffset);
	animation->mKBlueVals  = JSUConvertOffsetToPtr<s16>(data, (void*)data->mKBValuesOffset);
	animation->mKAlphaVals = JSUConvertOffsetToPtr<s16>(data, (void*)data->mKAValuesOffset);
}

/**
 * @note Address: 0x80073FD8
 * @note Size: 0x28
 * readAnmVtxColor__19J3DAnmKeyLoader_v15FPC21J3DAnmVtxColorKeyData
 */
void J3DAnmKeyLoader_v15::readAnmVtxColor(const J3DAnmVtxColorKeyData* data) { setAnmVtxColor((J3DAnmVtxColorKey*)mAnimation, data); }

/**
 * @note Address: 0x80074000
 * @note Size: 0x170
 * setAnmVtxColor__19J3DAnmKeyLoader_v15FP17J3DAnmVtxColorKeyPC21J3DAnmVtxColorKeyData
 */
void J3DAnmKeyLoader_v15::setAnmVtxColor(J3DAnmVtxColorKey* animation, const J3DAnmVtxColorKeyData* data)
{
	animation->mTotalFrameCount = data->mTotalFrameCount;
	animation->mAttribute       = data->mAttribute;
	animation->mCurrentFrame    = 0.0f;
	animation->mAnmTableNum[0]  = data->mAnmTableNum[0];
	animation->mAnmTableNum[1]  = data->mAnmTableNum[1];

	animation->mTable[0]                = JSUConvertOffsetToPtr<J3DAnmColorKeyTable>(data, (void*)data->mTableOffsets[0]);
	animation->mTable[1]                = JSUConvertOffsetToPtr<J3DAnmColorKeyTable>(data, (void*)data->mTableOffsets[1]);
	animation->mAnmVtxColorIndexData[0] = JSUConvertOffsetToPtr<J3DAnmVtxColorIndexData>(data, (void*)data->mVtxColoIndexDataOffset[0]);
	animation->mAnmVtxColorIndexData[1] = JSUConvertOffsetToPtr<J3DAnmVtxColorIndexData>(data, (void*)data->mVtxColoIndexDataOffset[1]);

	u16* vtxColors0 = JSUConvertOffsetToPtr<u16>(data, (void*)data->mVtxColorIndexPointerOffset[0]);
	u16* vtxColors1 = JSUConvertOffsetToPtr<u16>(data, (void*)data->mVtxColorIndexPointerOffset[1]);

	for (int i = 0; i < animation->mAnmTableNum[0]; i++) {
		animation->mAnmVtxColorIndexData[0][i].mData = (void*)(vtxColors0 + (u32)animation->mAnmVtxColorIndexData[0][i].mData);
	}

	for (int i = 0; i < animation->mAnmTableNum[1]; i++) {
		animation->mAnmVtxColorIndexData[1][i].mData = (void*)(vtxColors1 + (u32)animation->mAnmVtxColorIndexData[1][i].mData);
	}

	animation->mRedVals   = JSUConvertOffsetToPtr<s16>(data, (void*)data->mRValOffset);
	animation->mGreenVals = JSUConvertOffsetToPtr<s16>(data, (void*)data->mGValOffset);
	animation->mBlueVals  = JSUConvertOffsetToPtr<s16>(data, (void*)data->mBValOffset);
	animation->mAlphaVals = JSUConvertOffsetToPtr<s16>(data, (void*)data->mAValOffset);
}

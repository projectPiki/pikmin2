#ifndef _JSYSTEM_J3D_J3DFILEBLOCK_H
#define _JSYSTEM_J3D_J3DFILEBLOCK_H

#include "types.h"

struct J3DFileBlockBase;

/**
 * @fabricated
 * @size{0x20}
 */
struct J3DFileHeader {
	u32 mJ3dVersion;  // _00
	u32 mFileVersion; // _04
	u8 _08[4];        // _08
	u32 mBlockCount;  // _0C
	u8 _10[0x10];     // _10

	const J3DFileBlockBase* getFirstBlock() const { return reinterpret_cast<const J3DFileBlockBase*>(this + 1); }
};

/**
 * @fabricated
 * @size{0x8}
 */
struct J3DFileBlockBase {
	u32 mBlockType; // _00
	int mSize;      // _04

	const J3DFileBlockBase* getNext() const
	{
		return reinterpret_cast<const J3DFileBlockBase*>(reinterpret_cast<const u8*>(this) + this->mSize);
	}
};

/**
 * @fabricated
 */
enum J3DFileBlockType {
	J3DFBT_Draw        = 'DRW1',
	J3DFBT_Envelope    = 'EVP1',
	J3DFBT_Info        = 'INF1',
	J3DFBT_Joint       = 'JNT1',
	J3DFBT_MaterialV21 = 'MAT2',
	J3DFBT_Material    = 'MAT3',
	J3DFBT_MaterialDL  = 'MDL3',
	J3DFBT_Texture     = 'TEX1',
	J3DFBT_Shape       = 'SHP1',
	J3DFBT_Vertex      = 'VTX1',

	//  Anm Block Types:
	J3DFBT_AnmTexPattern     = 'TPT1',
	J3DFBT_AnmClusterFull    = 'CLF1',
	J3DFBT_AnmClusterKey     = 'CLK1',
	J3DFBT_AnmTransformFull  = 'ANF1',
	J3DFBT_AnmTransformKey   = 'ANK1',
	J3DFBT_AnmColorFull      = 'PAF1',
	J3DFBT_AnmColorKey       = 'PAK1',
	J3DFBT_AnmVtxColorFull   = 'VCF1',
	J3DFBT_AnmVtxColorKey    = 'VCK1',
	J3DFBT_AnmVisibilityFull = 'VAF1',
	J3DFBT_AnmTextureSRTKey  = 'TTK1',
	J3DFBT_AnmTevRegKey      = 'TRK1',
};

/**
 *    Block members courtesy of https://wiki.cloudmodding.com/tww/BMD_and_BDL
 */

struct J3DDrawBlock : J3DFileBlockBase {
	u16 mCount;                   // _08
	void* mMatrixTypeArrayOffset; // _0C
	void* mDataArrayOffset;       // _14
};

struct J3DEnvelopeBlock : J3DFileBlockBase {
	u16 mCount;                   // _08
	void* mJointCountTableOffset; // _0C
	void* mIndexTableOffset;      // _10
	void* mWeightTableOffset;     // _14
	void* mInvBindTableOffset;    // _18
};

struct J3DJointBlock : J3DFileBlockBase {
	u16 mCount;            // _08
	u32 mJointInitData;    // _0C
	u32 mRemapTableOffset; // _10
	u32 mNameTableOffset;  // _14
};

struct J3DMaterialBlock : J3DFileBlockBase {
	u16 mNumMaterials;                 // _08
	void* mMatEntryDataOffset;         // _0C
	void* mMatRemapTableOffset;        // _10
	void* mStringTableOffset;          // _14
	void* mIndTextureInfoOffset;       // _18
	void* mCullModeInfoOffset;         // _1C
	void* mMatColorsOffset;            // _20
	void* mNumColorChansOffset;        // _24
	void* mColorChanInfoOffset;        // _28
	void* mAmbientColorOffset;         // _2C
	void* mLightInfoOffset;            // _30
	void* mNumTexCoordsOffset;         // _34
	void* mTexCoordInfoOffset;         // _38
	void* mTexCoord2InfoOffset;        // _3C
	void* mTexMtxInfoOffset;           // _40
	void* mTexMtxInfo2Offset;          // _44
	void* mTextureRemapTableOffset;    // _48
	void* mTevOrderInfoOffset;         // _4C
	void* mTevColorsOffset;            // _50
	void* mTevKColorsOffset;           // _54
	void* mNumTevStagesOffset;         // _58
	void* mTevStageInfoOffset;         // _5C
	void* mTevSwapModeInfoOffset;      // _60
	void* mTevSwapModeTableInfoOffset; // _64
	void* mFogInfoOffset;              // _68
	void* mAlphaCompInfoOffset;        // _6C
	void* mBlendInfoOffset;            // _70
	void* mZModeInfoOffset;            // _74
	void* mZCompareInfoOffset;         // _78
	void* mDitherInfoOffset;           // _7C
	void* mNBTScaleInfoOffset;         // _80
};

struct J3DMaterialBlock_v21 : J3DFileBlockBase {
	u16 mNumMaterials;                 // _08
	void* mMatEntryDataOffset;         // _0C
	void* mMatRemapTableOffset;        // _10
	void* mIndTexInfoOffset;           // _14
	void* mCullModeInfoOffset;         // _18
	void* mMatColorsOffset;            // _1C
	void* mNumColorChansOffset;        // _20
	void* mColorChanInfoOffset;        // _24
	void* mNumTexCoordsOffset;         // _28
	void* mTexCoordInfoOffset;         // _2C
	void* mTexCoord2InfoOffset;        // _30
	void* mTexMtxInfoOffset;           // _34
	void* mTexMtxInfo2Offset;          // _38
	void* mTextureRemapTableOffset;    // _3C
	void* mTevOrderInfoOffset;         // _40
	void* mTevColorsOffset;            // _44
	void* mTevKColorsOffset;           // _48
	void* mNumTevStagesOffset;         // _4C
	void* mTevStageInfoOffset;         // _50
	void* mTevSwapModeInfoOffset;      // _54
	void* mTevSwapModeTableInfoOffset; // _58
	void* mFogInfoOffset;              // _5C
	void* mAlphaCompInfoOffset;        // _60
	void* mBlendInfoOffset;            // _64
	void* mZModeInfoOffset;            // _68
	void* mZCompareInfoOffset;         // _6C
	void* mDitherInfoOffset;           // _70
	void* mNBTScaleInfoOffset;         // _74
};

struct J3DMaterialDLBlock : J3DFileBlockBase {
	u16 mEntries;                   // _08
	void* mPacketOffset;            // _0C
	void* mSubPacketLocationOffset; // _10
	void* mMatrixIndexOffset;       // _14
	void* mPixelEngineModesOffset;  // _18
	void* mIndexesOffset;           // _1C
	void* mStringTableOffset;       // _20
};

struct J3DModelInfoBlock : J3DFileBlockBase {
	u16 mFlags;                 // _08
	u32 mMatrixGroupCount;      // _0C
	u32 mVertexCount;           // _10
	void* mHierarchyDataOffset; // _14
};

struct J3DShapeBlock : J3DFileBlockBase {
	u16 mShapeNum;             // _08
	u32 mShapeDataOffset;      // _0C
	u32 mRemapTableOffset;     // _10
	u32 mNameTableOffset;      // _14
	u32 mAttribTableOffset;    // _18
	u32 mMatrixTableOffset;    // _1C
	u32 mPrimDataOffset;       // _20
	u32 mMatrixInitDataOffset; // _24
	u32 mMtxGroupTableOffset;  // _28
};

struct J3DTextureBlock : J3DFileBlockBase {
	u16 mTextureCount;      // _08
	void* mTexHeaderOffset; // _0C
	void* mTexNameOffset;   // _10
};

struct J3DVertexBlock : J3DFileBlockBase {
	void* mVertexFormatOffset;    // _08
	void* mPositionDataOffset;    // _0C
	void* mNormalDataOffset;      // _10
	void* mNBTDataOffset;         // _14
	void* mColorDataOffset[2];    // _18
	void* mTexCoordDataOffset[8]; // _20
};

#endif

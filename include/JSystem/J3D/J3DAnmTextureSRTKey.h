#ifndef _JSYSTEM_J3D_J3DANMTEXTURESRTKEY_H
#define _JSYSTEM_J3D_J3DANMTEXTURESRTKEY_H

#include "JSystem/J3D/J3DAnmBase.h"
#include "JSystem/J3D/J3DAnmTransform.h"
#include "JSystem/JGeometry.h"
#include "JSystem/JUtility/JUTNameTab.h"
#include "types.h"

/**
 * @size{0x7C}
 */
struct J3DAnmTextureSRTKey : public J3DAnmBase {
	inline J3DAnmTextureSRTKey()
	    : mUpdateMaterialName()
	    , mPostUpdateMaterialName()
	{
		mRotationScale     = 0;
		mTransNum          = 0;
		mRotNum            = 0;
		mScaleNum          = 0;
		mTrackNum          = 0;
		mTable1            = nullptr;
		mTranslation1Vals  = nullptr;
		mScale1Vals        = nullptr;
		mRotation1Vals     = nullptr;
		_48                = 0;
		_46                = 0;
		_44                = 0;
		mPostTrackNum      = 0;
		mTransformKeyTable = nullptr;
		_54                = nullptr;
		_4C                = nullptr;
		_50                = nullptr;
		mTexMtxCalcType    = 0;
	}

	virtual ~J3DAnmTextureSRTKey() { } // _08 (weak)
	virtual J3DAnmKind getKind() const // _0C (weak)
	{
		return J3DAnmKind_TextureSRTKey;
	}

	void calcTransform(f32, u16, struct J3DTextureSRTInfo*) const;
	void searchUpdateMaterialID(struct J3DModelData*);
	void searchUpdateMaterialID(struct J3DMaterialTable*);

	void getTransform(u16 index, J3DTextureSRTInfo* pSRTInfo) const { calcTransform(getFrame(), index, pSRTInfo); }

	u16 getUpdateMaterialID(u16 idx) const { return mUpdateMaterialID[idx]; }
	u16 getUpdateMaterialNum() const { return mTrackNum / 3; }
	JUTNameTab* getUpdateMaterialName() { return &mUpdateMaterialName; }
	u16 getUpdateTexMtxID(u16 idx) const { return mUpdateTexMtxID[idx]; }

	u16 getPostUpdateMaterialID(u16 idx) const { return mPostUpdateMaterialID[idx]; }
	u16 getPostUpdateMaterialNum() const { return mPostTrackNum / 3; }
	JUTNameTab* getPostUpdateMaterialName() { return &mPostUpdateMaterialName; }
	u16 getPostUpdateTexMtxID(u16 idx) const { return mPostUpdateTexMtxID[idx]; }

	// _00     = VTBL
	// _00-_0C = J3DAnmBase
	u32 mRotationScale;                          // _0C
	J3DAnmTransformKeyTable* mTable1;            // _10
	u16 mTrackNum;                               // _14
	u16 mScaleNum;                               // _16
	u16 mRotNum;                                 // _18
	u16 mTransNum;                               // _1A
	f32* mScale1Vals;                            // _1C
	s16* mRotation1Vals;                         // _20
	f32* mTranslation1Vals;                      // _24
	u8* mUpdateTexMtxID;                         // _28
	u16* mUpdateMaterialID;                      // _2C
	JUTNameTab mUpdateMaterialName;              // _30
	Vec* mSRTCenter;                             // _40
	u16 _44;                                     // _44
	u16 _46;                                     // _46
	u16 _48;                                     // _48
	u16 mPostTrackNum;                           // _4A
	f32* _4C;                                    // _4C
	s16* _50;                                    // _50
	f32* _54;                                    // _54
	J3DAnmTransformKeyTable* mTransformKeyTable; // _58
	u8* mPostUpdateTexMtxID;                     // _5C
	u16* mPostUpdateMaterialID;                  // _60
	JUTNameTab mPostUpdateMaterialName;          // _64
	Vec* mPostSRTCenter;                         // _74
	u32 mTexMtxCalcType;                         // _78
};

struct J3DAnmTextureSRTKeyData : J3DAnmFullData {
	u16 mRotationNum;                // _10
	u16 mTranslationNum;             // _12
	s32 mTableOffset;                // _14
	s32 mUpdateMatIDOffset;          // _18
	s32 mNameTab1Offset;             // _1C
	s32 mUpdateTexMtxIDOffset;       // _20
	s32 mSrtCenterOffset;            // _24
	s32 mScaleValOffset;             // _28
	s32 mRotValOffset;               // _2C
	s32 mTransValOffset;             // _30
	u16 mPostTrackNum;               // _34
	u16 _36;                         // _36
	u16 _38;                         // _38
	u16 _3A;                         // _3A
	s32 mTransformKeyTableOffset;    // _3C
	s32 mPostUpdateMaterialIDOffset; // _40
	u32 mNameTab2Offset;             // _44
	s32 mPostUpdateTexMtxIDOffset;   // _48
	s32 mPostSRTCenterOffset;        // _4C
	s32 _50;                         // _50
	s32 _54;                         // _54
	s32 _58;                         // _58
	s32 mTexMtxCalcType;             // _5C
};

#endif

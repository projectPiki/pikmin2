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
	    : mNameTab1()
	    , mNameTab2()
	{
		_0C                = 0;
		_1A                = 0;
		_18                = 0;
		mAnimTableNum2                = 0;
		mAnimTableNum1 = 0;
		mTable1            = nullptr;
		mTranslation1Vals  = nullptr;
		mScale1Vals        = nullptr;
		mRotation1Vals     = nullptr;
		_48                = 0;
		_46                = 0;
		_44                = 0;
		_4A                = 0;
		mTransformKeyTable                = nullptr;
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

	void getTransform(u16 param_0, J3DTextureSRTInfo* pSRTInfo) const { calcTransform(getFrame(), param_0, pSRTInfo); }

	u16 getUpdateMaterialID(u16 idx) const { return mUpdateMaterialID[idx]; }
	u16 getUpdateMaterialNum() const { return mAnimTableNum1 / 3; }

	// _00     = VTBL
	// _00-_0C = J3DAnmBase
	u32 _0C;                          // _0C
	J3DAnmTransformKeyTable* mTable1; // _10
	u16 mAnimTableNum1;           // _14
	u16 mAnimTableNum2;                          // _16
	u16 _18;                          // _18
	u16 _1A;                          // _1A
	f32* mScale1Vals;                 // _1C
	s16* mRotation1Vals;              // _20
	f32* mTranslation1Vals;           // _24
	u8* mUpdateTexMtxID;              // _28
	u16* mUpdateMaterialID;           // _2C
	JUTNameTab mNameTab1;                   // _30
	Vec* _40;                         // _40
	u16 _44;                          // _44
	u16 _46;                          // _46
	u16 _48;                          // _48
	u16 _4A;                          // _4A
	f32* _4C;                         // _4C
	s16* _50;                         // _50
	f32* _54;                         // _54
	J3DAnmTransformKeyTable* mTransformKeyTable;     // _58
	u8* _5C;                          // _5C
	u16* _60;                         // _60
	JUTNameTab mNameTab2;                   // _64
	Vec* _74;                         // _74
	u32 mTexMtxCalcType;              // _78
};

struct J3DAnmTextureSRTKeyData : J3DAnmFullData {
	u16 _10;                   // _10
	u16 _12;                   // _12
	s32 mTableOffset;          // _14
	s32 mUpdateMatIDOffset;    // _18
	s32 mNameTab1Offset;       // _1C
	s32 mUpdateTexMtxIDOffset; // _20
	s32 _24;             // _24
	s32 mScaleValOffset;       // _28
	s32 mRotValOffset;         // _2C
	s32 mTransValOffset;       // _30
	u16 _34;                   // _34
	u16 _36;                   // _36
	u16 _38;                   // _38
	u16 _3A;                   // _3A
	s32 mTransformKeyTableOffset;     // _3C
	s32 _40;                   // _40
	u32 mNameTab2Offset;       // _44
	s32 _48;                   // _48
	s32 _4C;                   // _4C
	s32 _50;                   // _50
	s32 _54;                   // _54
	s32 _58;                   // _58
	s32 _5C;                   // _5C
};

#endif

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
	    : _30()
	    , _64()
	{
		_0C                = 0;
		_1A                = 0;
		_18                = 0;
		_16                = 0;
		mUpdateMaterialNum = 0;
		_10                = nullptr;
		_24                = nullptr;
		_1C                = nullptr;
		_20                = nullptr;
		_48                = 0;
		_46                = 0;
		_44                = 0;
		_4A                = 0;
		_58                = nullptr;
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
	u16 getUpdateMaterialNum() const { return mUpdateMaterialNum / 3; }

	// _00     = VTBL
	// _00-_0C = J3DAnmBase
	u32 _0C;                      // _0C
	J3DAnmTransformKeyTable* _10; // _10
	u16 mUpdateMaterialNum;       // _14
	u16 _16;                      // _16
	u16 _18;                      // _18
	u16 _1A;                      // _1A
	f32* _1C;                     // _1C
	s16* _20;                     // _20
	f32* _24;                     // _24
	u8* mUpdateTexMtxID;          // _28
	u16* mUpdateMaterialID;       // _2C
	JUTNameTab _30;               // _30
	Vec* _40;                     // _40
	u16 _44;                      // _44
	u16 _46;                      // _46
	u16 _48;                      // _48
	u16 _4A;                      // _4A
	f32* _4C;                     // _4C
	s16* _50;                     // _50
	f32* _54;                     // _54
	J3DAnmTransformKeyTable* _58; // _58
	u8* _5C;                      // _5C
	u16* _60;                     // _60
	JUTNameTab _64;               // _64
	Vec* _74;                     // _74
	u32 mTexMtxCalcType;          // _78
};

struct J3DAnmTextureSRTKeyData : J3DAnmFullData {
	u16 _10;                   // _10
	u16 _12;                   // _12
	s32 mTableOffset;          // _14
	s32 mUpdateMatIDOffset;    // _18
	s32 mNameTab1Offset;       // _1C
	s32 mUpdateTexMtxIDOffset; // _20
	s32 unkOffset;             // _24
	s32 mScaleValOffset;       // _28
	s32 mRotValOffset;         // _2C
	s32 mTransValOffset;       // _30
	u16 _34;                   // _34
	u16 _36;                   // _36
	u16 _38;                   // _38
	u16 _3A;                   // _3A
	s32 mInfoTable2Offset;     // _3C
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

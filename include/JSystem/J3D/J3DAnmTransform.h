#ifndef _JSYSTEM_J3D_J3DANMTRANSFORM_H
#define _JSYSTEM_J3D_J3DANMTRANSFORM_H

#include "JSystem/J3D/J3DAnmBase.h"
#include "JSystem/J3D/J3DFileBlock.h"
#include "types.h"

struct J3DTransformInfo;

struct J3DAnmTransformFullTable;
struct J3DAnmTransformKeyTable;

struct J3DAnmTransform : public J3DAnmBase {
	inline J3DAnmTransform()
	    : mScaleVals(nullptr)
	    , mRotationVals(nullptr)
	    , mTranslationVals(nullptr)
	    , _18(0)
	    , _1A(0)
	    , _1C(0)
	    , mUpdateMaterialNum(0)
	{
	}

	virtual ~J3DAnmTransform() { }     // _08 (weak)
	virtual J3DAnmKind getKind() const // _0C (weak)
	{
		return J3DAnmKind_Transform;
	}
	virtual void getTransform(u16, J3DTransformInfo*) const = 0; // _10

	// _00     = VTBL
	// _00-_0C = J3DAnmBase
	f32* mScaleVals;        // _0C
	s16* mRotationVals;     // _10
	f32* mTranslationVals;  // _14
	u16 _18;                // _18
	u16 _1A;                // _1A
	u16 _1C;                // _1C
	u16 mUpdateMaterialNum; // _1E
};

/**
 * @size{0x24}
 */
struct J3DAnmTransformFull : public J3DAnmTransform {
	inline J3DAnmTransformFull()
	    : mTable(nullptr)
	{
	}

	virtual ~J3DAnmTransformFull() { }                                      // _08 (weak)
	virtual J3DAnmKind getKind() const { return J3DAnmKind_TransformFull; } // _0C (weak)
	virtual void getTransform(u16, J3DTransformInfo*) const;                // _10

	// _00     = VTBL
	// _00-_20 = J3DAnmTransform
	J3DAnmTransformFullTable* mTable; // _20
};

struct J3DAnmTransformFullData : J3DAnmFullData {
	int _10;             // _10
	s32 mTableOffset;    // _14
	s32 mScaleValOffset; // _18
	s32 mRotValOffset;   // _1C
	s32 mTransValOffset; // _20
};

struct J3DAnmTransformFullTable {
	u16 mScaleMaxFrame;       // _00
	u16 mScaleOffset;         // _02
	u16 mRotationMaxFrame;    // _04
	u16 mRotationOffset;      // _06
	u16 mTranslationMaxFrame; // _08
	u16 mTranslationOffset;   // _0A
};

/**
 * @size{0x28}
 */
struct J3DAnmTransformKey : public J3DAnmTransform {
	inline J3DAnmTransformKey()
	    : J3DAnmTransform()
	    , _20(0)
	    , mTable(nullptr)
	{
	}

	virtual ~J3DAnmTransformKey() { }  // _08 (weak)
	virtual J3DAnmKind getKind() const // _0C (weak)
	{
		return J3DAnmKind_TransformKey;
	}
	virtual void getTransform(u16 p1, J3DTransformInfo* p2) const { calcTransform(mCurrentFrame, p1, p2); } // _10 (weak)

	void calcTransform(f32, u16, J3DTransformInfo*) const;

	// _00     = VTBL
	// _00-_20 = J3DAnmTransform
	int _20;                         // _20
	J3DAnmTransformKeyTable* mTable; // _24
};

struct J3DAnmTransformKeyData : public J3DAnmFullData {
	u32 _10;              // _10
	s32 mTableOffset;     // _14
	s32 mScaleOffset;     // _18
	s32 mRotationOffset;  // _1C
	s32 mTranslateOffset; // _20
};

struct J3DAnmTransformKeyTable {
	J3DAnmKeyTableBase mScaleInfo;       // _00
	J3DAnmKeyTableBase mRotationInfo;    // _06
	J3DAnmKeyTableBase mTranslationInfo; // _0C
};

#endif

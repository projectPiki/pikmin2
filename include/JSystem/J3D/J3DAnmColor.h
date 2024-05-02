#ifndef _JSYSTEM_J3D_J3DANMCOLOR_H
#define _JSYSTEM_J3D_J3DANMCOLOR_H

#include "JSystem/J3D/J3DAnmBase.h"
#include "JSystem/J3D/J3DFileBlock.h"
#include "JSystem/JUtility/JUTNameTab.h"
#include "types.h"

struct J3DAnmColorKeyTable;
struct J3DAnmColorFullTable;
struct J3DModelData;

struct J3DAnmColor : public J3DAnmBase {
	inline J3DAnmColor()
	    : _0C(0)
	    , _0E(0)
	    , _10(0)
	    , _12(0)
	    , mUpdateMaterialNum(0)
	    , mUpdateMaterialID(nullptr)
	    , mNameTab()
	{
	}

	virtual ~J3DAnmColor() { }                                      // _08 (weak)
	virtual J3DAnmKind getKind() const { return J3DAnmKind_Color; } // _0C (weak)
	virtual void getColor(u16, GXColor*) const { }                  // _10 (weak)

	void searchUpdateMaterialID(J3DModelData*);

	u16 getUpdateMaterialNum() const { return mUpdateMaterialNum; }
	bool isValidUpdateMaterialID(u16 id) const { return mUpdateMaterialID[id] != 0xFFFF; }
	u16 getUpdateMaterialID(u16 idx) const { return mUpdateMaterialID[idx]; }

	// _00     = VTBL
	// _00-_0C = J3DAnmBase
	u16 _0C;                // _0C
	u16 _0E;                // _0E
	u16 _10;                // _10
	u16 _12;                // _12
	u16 mUpdateMaterialNum; // _14
	u16* mUpdateMaterialID; // _18
	JUTNameTab mNameTab;    // _1C
};

struct J3DAnmColorFullTable {
	enum Colors {
		RED   = 0,
		GREEN = 1,
		BLUE  = 2,
		ALPHA = 3,
	};

	enum Kind {
		MaxFrame = 0,
		Offset   = 1,
	};

	inline void getField(u32 fieldIndex, int p2, u8* result, u8* values)
	{
		if (p2 >= mData[fieldIndex][0]) {
			*result = values[mData[fieldIndex][0] - 1 + mData[fieldIndex][1]];
		} else {
			*result = values[mData[fieldIndex][1] + p2];
		}
	}

	u16 mData[4][2]; // _00, R=0, G=1, B=2, A=3 || MaxFrame=0, Offset=1
};

/**
 * @size{0x40}
 */
struct J3DAnmColorFull : public J3DAnmColor {
	inline J3DAnmColorFull()
	    : mRedVals(nullptr)
	    , mGreenVals(nullptr)
	    , mBlueVals(nullptr)
	    , mAlphaVals(nullptr)
	    , mTable(nullptr)
	{
	}

	virtual ~J3DAnmColorFull() { }                                      // _08 (weak)
	virtual J3DAnmKind getKind() const { return J3DAnmKind_ColorFull; } // _0C (weak)
	virtual void getColor(u16, GXColor*) const;                         // _10

	// _00     = VTBL
	// _00-_2C = J3DAnmColor
	u8* mRedVals;                 // _2C
	u8* mGreenVals;               // _30
	u8* mBlueVals;                // _34
	u8* mAlphaVals;               // _38
	J3DAnmColorFullTable* mTable; // _3C
};

struct J3DAnmColorFullData : J3DFileBlockBase {
	u8 _08;                      // _08
	u8 _09[3];                   // _09
	s16 mFrameMax;               // _0C
	u16 mUpdateMaterialNum;      // _0E
	u8 _12[0x18 - 0x10];         // _10
	s32 mTableOffset;            // _18
	s32 mUpdateMaterialIDOffset; // _1C
	s32 mNameTabOffset;          // _20
	s32 mRValuesOffset;          // _24
	s32 mGValuesOffset;          // _28
	s32 mBValuesOffset;          // _2C
	s32 mAValuesOffset;          // _30
};

/**
 * @size{0x40}
 */
struct J3DAnmColorKey : public J3DAnmColor {
	inline J3DAnmColorKey()
	    : mRedValue(nullptr)
	    , mGreenValue(nullptr)
	    , mBlueValue(nullptr)
	    , mAlphaValue(nullptr)
	    , mTable(nullptr)
	{
	}

	virtual ~J3DAnmColorKey() { }                                      // _08 (weak)
	virtual J3DAnmKind getKind() const { return J3DAnmKind_ColorKey; } // _0C (weak)
	virtual void getColor(u16, GXColor*) const;                        // _10

	s16* mRedValue;              // _2C
	s16* mGreenValue;            // _30
	s16* mBlueValue;             // _34
	s16* mAlphaValue;            // _38
	J3DAnmColorKeyTable* mTable; // _3C
};

struct J3DAnmColorKeyData : J3DFileBlockBase {
	u8 mAttribute;               // _08
	u8 _09[3];                   // _09
	s16 mTotalFrameCount;        // _0C
	u16 mUpdateMaterialNum;      // _0E
	u16 _10;                     // _10
	u16 _12;                     // _12
	u16 _14;                     // _14
	u16 _16;                     // _16
	s32 mTableOffset;            // _18
	s32 mUpdateMaterialIDOffset; // _1C
	s32 mNameTabOffset;          // _20
	s32 mRValOffset;             // _24
	s32 mGValOffset;             // _28
	s32 mBValOffset;             // _2C
	s32 mAValOffset;             // _30
};

/**
 * @size{0x18}
 */
struct J3DAnmColorKeyTable {
	enum Color {
		RED   = 0,
		GREEN = 1,
		BLUE  = 2,
		ALPHA = 3,
	};
	J3DAnmKeyTableBase mColorInfo[4]; // _00, R=0, G=1, B=2, A=3
};

#endif

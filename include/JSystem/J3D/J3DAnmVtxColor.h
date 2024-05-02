#ifndef _JSYSTEM_J3D_J3DANMVTXCOLOR_H
#define _JSYSTEM_J3D_J3DANMVTXCOLOR_H

#include "JSystem/J3D/J3DAnmBase.h"
#include "JSystem/J3D/J3DAnmColor.h"
#include "JSystem/J3D/J3DFileBlock.h"
#include "types.h"

struct J3DAnmVtxColorIndexData {
	u16 mNum;    // _00
	void* mData; // _04
};

struct J3DAnmVtxColor : public J3DAnmBase {
	inline J3DAnmVtxColor()
	{
		mAnmTableNum[0]          = 0;
		mAnmTableNum[1]          = 0;
		mAnmVtxColorIndexData[0] = nullptr;
		mAnmVtxColorIndexData[1] = nullptr;
	}

	virtual ~J3DAnmVtxColor() { }                                      // _08 (weak)
	virtual J3DAnmKind getKind() const { return J3DAnmKind_VtxColor; } // _0C (weak)
	virtual void getColor(u8, u16, GXColor*) const { }                 // _10 (weak)

	inline u16 getAnmTableNum(u8 idx) { return mAnmTableNum[idx]; }
	inline J3DAnmVtxColorIndexData* getAnmVtxColorIndexData(u8 p1, u16 p2) { return &mAnmVtxColorIndexData[p1][p2]; }

	// _00     = VTBL
	// _00-_0C = J3DAnmBase
	u16 mAnmTableNum[2];                               // _0C, table nums
	J3DAnmVtxColorIndexData* mAnmVtxColorIndexData[2]; // _10
};

/**
 * @size{0x30}
 */
struct J3DAnmVtxColorFull : public J3DAnmVtxColor {
	// Note: This does not initialize all members, unlike most of the other J3DAnm*Key and J3DAnm*Full classes.
	inline J3DAnmVtxColorFull()
	{
		mTable[0] = nullptr;
		mTable[1] = nullptr;
	}

	virtual ~J3DAnmVtxColorFull() { }                                      // _08 (weak)
	virtual J3DAnmKind getKind() const { return J3DAnmKind_VtxColorFull; } // _0C (weak)
	virtual void getColor(u8, u16, GXColor*) const;                        // _10

	inline J3DAnmColorFullTable* getAnmTable(u8 idx) const { return mTable[idx]; }

	// _00     = VTBL
	// _00-_18 = J3DAnmVtxColor
	J3DAnmColorFullTable* mTable[2]; // _18
	u8* mRedVals;                    // _20
	u8* mGreenVals;                  // _24
	u8* mBlueVals;                   // _28
	u8* mAlphaVals;                  // _2C
};

struct J3DAnmVtxColorFullData : J3DAnmFullData {
	u8 _10[0x18 - 0x10];                 // _10
	s32 mTableOffsets[2];                // _18
	s32 mVtxColorIndexDataOffsets[2];    // _20
	s32 mVtxColorIndexPointerOffsets[2]; // _28
	s32 mRValuesOffset;                  // _30
	s32 mGValuesOffset;                  // _34
	s32 mBValuesOffset;                  // _38
	s32 mAValuesOffset;                  // _3C
};

/**
 * @size{0x30}
 */
struct J3DAnmVtxColorKey : public J3DAnmVtxColor {
	// Note: This does not initialize all members, unlike most of the other J3DAnm*Key and J3DAnm*Full classes.
	inline J3DAnmVtxColorKey()
	{
		mTable[0] = nullptr;
		mTable[1] = nullptr;
	}

	virtual ~J3DAnmVtxColorKey() { }                                      // _08 (weak)
	virtual J3DAnmKind getKind() const { return J3DAnmKind_VtxColorKey; } // _0C (weak)
	virtual void getColor(u8, u16, GXColor*) const;                       // _10

	inline J3DAnmColorKeyTable* getAnmTable(u8 idx) const { return mTable[idx]; }

	J3DAnmColorKeyTable* mTable[2]; // _18
	s16* mRedVals;                  // _20
	s16* mGreenVals;                // _24
	s16* mBlueVals;                 // _28
	s16* mAlphaVals;                // _2C
};

struct J3DAnmVtxColorKeyData : J3DFileBlockBase {
	u8 mAttribute;                      // _08
	u8 _09;                             // _09
	s16 mTotalFrameCount;               // _0A
	u16 mAnmTableNum[2];                // _0C
	u8 _10[0x18 - 0x10];                // _10
	s32 mTableOffsets[2];               // _18
	s32 mVtxColoIndexDataOffset[2];     // _20
	s32 mVtxColorIndexPointerOffset[2]; // _28
	s32 mRValOffset;                    // _30
	s32 mGValOffset;                    // _34
	s32 mBValOffset;                    // _38
	s32 mAValOffset;                    // _3C
};

#endif

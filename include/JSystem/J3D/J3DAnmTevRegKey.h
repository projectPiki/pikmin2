#ifndef _JSYSTEM_J3D_J3DANMTEVREGKEY_H
#define _JSYSTEM_J3D_J3DANMTEVREGKEY_H

#include "Dolphin/gx.h"
#include "JSystem/J3D/J3DAnmBase.h"
#include "JSystem/J3D/J3DFileBlock.h"
#include "JSystem/JUtility/JUTNameTab.h"
#include "types.h"

struct J3DAnmCRegKeyTable;
struct J3DAnmKRegKeyTable;

/**
 * @size{0x70}
 */
struct J3DAnmTevRegKey : public J3DAnmBase {
	inline J3DAnmTevRegKey()
	    : mCRegNameTable()
	    , mKRegNameTable()
	{
		mKRegUpdateMaterialNum = 0;
		mCRegUpdateMaterialNum = 0;
		_16                    = 0;
		_14                    = 0;
		_12                    = 0;
		_10                    = 0;
		_1E                    = 0;
		_1C                    = 0;
		_1A                    = 0;
		_18                    = 0;
		mKRegUpdateMaterialID  = nullptr;
		mCRegUpdateMaterialID  = nullptr;
		mCAlphaVals            = nullptr;
		mCBlueVals             = nullptr;
		mCGreenVals            = nullptr;
		mCRedVals              = nullptr;
		mKAlphaVals            = nullptr;
		mKBlueVals             = nullptr;
		mKGreenVals            = nullptr;
		mKRedVals              = nullptr;
	}

	virtual ~J3DAnmTevRegKey() { }     // _08 (weak)
	virtual J3DAnmKind getKind() const // _0C (weak)
	{
		return J3DAnmKind_TevRegKey;
	}

	void getTevColorReg(u16, GXColorS10*) const;
	void getTevKonstReg(u16, GXColor*) const;
	void searchUpdateMaterialID(struct J3DModelData*);

	u16 getCRegUpdateMaterialNum() const { return mCRegUpdateMaterialNum; }
	u16 getKRegUpdateMaterialNum() const { return mKRegUpdateMaterialNum; }

	u16 getCRegUpdateMaterialID(u16 idx) const { return mCRegUpdateMaterialID[idx]; }
	u16 getKRegUpdateMaterialID(u16 idx) const { return mKRegUpdateMaterialID[idx]; }

	// _00     = VTBL
	// _00-_0C = J3DAnmBase
	u16 mCRegUpdateMaterialNum;        // _0C
	u16 mKRegUpdateMaterialNum;        // _0E
	u16 _10;                           // _10
	u16 _12;                           // _12
	u16 _14;                           // _14
	u16 _16;                           // _16
	u16 _18;                           // _18
	u16 _1A;                           // _1A
	u16 _1C;                           // _1C
	u16 _1E;                           // _1E
	u16* mCRegUpdateMaterialID;        // _20
	JUTNameTab mCRegNameTable;         // _24
	u16* mKRegUpdateMaterialID;        // _34
	JUTNameTab mKRegNameTable;         // _38
	J3DAnmCRegKeyTable* mCRegKeyTable; // _48
	J3DAnmKRegKeyTable* mKRegKeyTable; // _4C
	s16* mCRedVals;                    // _50
	s16* mCGreenVals;                  // _54
	s16* mCBlueVals;                   // _58
	s16* mCAlphaVals;                  // _5C
	s16* mKRedVals;                    // _60
	s16* mKGreenVals;                  // _64
	s16* mKBlueVals;                   // _68
	s16* mKAlphaVals;                  // _6C
};

struct J3DAnmTevRegKeyData : J3DFileBlockBase {
	u8 mAttribute;                   // _08
	u8 _09;                          // _09
	s16 mTotalFrameCount;            // _0A
	u16 mCRegUpdateMaterialNum;      // _0C
	u16 mKRegUpdateMaterialNum;      // _0E
	u16 _10;                         // _10
	u16 _12;                         // _12
	u16 _14;                         // _14
	u16 _16;                         // _16
	u16 _18;                         // _18
	u16 _1A;                         // _1A
	u16 _1C;                         // _1C
	u16 _1E;                         // _1E
	s32 mCRegTableOffset;            // _20
	s32 mKRegTableOffset;            // _24
	s32 mCRegUpdateMaterialIDOffset; // _28
	s32 mKRegUpdateMaterialIDOffset; // _2C
	s32 mCRegNameTabOffset;          // _30
	s32 mKRegNameTabOffset;          // _34
	s32 mCRValuesOffset;             // _38
	s32 mCGValuesOffset;             // _3C
	s32 mCBValuesOffset;             // _40
	s32 mCAValuesOffset;             // _44
	s32 mKRValuesOffset;             // _48
	s32 mKGValuesOffset;             // _4C
	s32 mKBValuesOffset;             // _50
	s32 mKAValuesOffset;             // _54
};

/**
 * @size{0x1C}
 */
struct J3DAnmCRegKeyTable {
	J3DAnmKeyTableBase mTables[4]; // _00, R=0, G=1, B=2, A=3
	u8 _18[0x4];                   // _18
};

/**
 * @size{0x1C}
 */
struct J3DAnmKRegKeyTable {
	J3DAnmKeyTableBase mTables[4]; // _00, R=0, G=1, B=2, A=3
	u8 _18[0x4];                   // _18
};

#endif

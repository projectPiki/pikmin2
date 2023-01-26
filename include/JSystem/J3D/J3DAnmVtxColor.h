#ifndef _JSYSTEM_J3D_J3DANMVTXCOLOR_H
#define _JSYSTEM_J3D_J3DANMVTXCOLOR_H

#include "JSystem/J3D/J3DAnmBase.h"
#include "JSystem/J3D/J3DAnmColor.h"
#include "JSystem/J3D/J3DFileBlock.h"
#include "types.h"

struct J3DAnmVtxColorIndexData {
	u16 _00; // _00
	s32 _04; // _04
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

	// _00     = VTBL
	// _00-_18 = J3DAnmVtxColor
	J3DAnmColorFullTable* mTable[2]; // _18
	u8* mRedVals;                    // _20
	u8* mGreenVals;                  // _24
	u8* mBlueVals;                   // _28
	u8* mAlphaVals;                  // _2C
};

struct J3DAnmVtxColorFullData : J3DAnmFullData {
	u8 _10[8]; // _10
	void* _18; // _18
	void* _1C; // _1C
	void* _20; // _20
	void* _24; // _24
	void* _28; // _28
	void* _2C; // _2C
	void* _30; // _30
	void* _34; // _34
	void* _38; // _38
	void* _3C; // _3C
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

	J3DAnmColorKeyTable* mTable[2]; // _18
	s16* mRedVals;                  // _20
	s16* mGreenVals;                // _24
	s16* mBlueVals;                 // _28
	s16* mAlphaVals;                // _2C
};

struct J3DAnmVtxColorKeyData : J3DFileBlockBase {
	u8 _08;    // _08
	s16 _0A;   // _0A
	u16 _0C;   // _0C
	u16 _0E;   // _0E
	u8 _10[8]; // _10 - unknown/filler
	void* _18; // _18
	void* _1C; // _1C
	void* _20; // _20
	void* _24; // _24
	void* _28; // _28
	void* _2C; // _2C
	void* _30; // _30
	void* _34; // _34
	void* _38; // _38
	void* _3C; // _3C
};

#endif

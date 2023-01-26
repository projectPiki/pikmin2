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
	    : _24()
	    , _38()
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
		_5C                    = nullptr;
		_58                    = nullptr;
		_54                    = nullptr;
		_50                    = nullptr;
		_6C                    = nullptr;
		_68                    = nullptr;
		_64                    = nullptr;
		_60                    = nullptr;
	}

	virtual ~J3DAnmTevRegKey() { }     // _08 (weak)
	virtual J3DAnmKind getKind() const // _0C (weak)
	{
		return J3DAnmKind_TevRegKey;
	}

	void getTevColorReg(unsigned short, GXColorS10*) const;
	void getTevKonstReg(unsigned short, GXColor*) const;
	void searchUpdateMaterialID(struct J3DModelData*);

	u16 getCRegUpdateMaterialNum() const { return mCRegUpdateMaterialNum; }
	u16 getKRegUpdateMaterialNum() const { return mKRegUpdateMaterialNum; }

	u16 getCRegUpdateMaterialID(u16 idx) const { return mCRegUpdateMaterialID[idx]; }
	u16 getKRegUpdateMaterialID(u16 idx) const { return mKRegUpdateMaterialID[idx]; }

	// _00     = VTBL
	// _00-_0C = J3DAnmBase
	u16 mCRegUpdateMaterialNum; // _0C
	u16 mKRegUpdateMaterialNum; // _0E
	u16 _10;                    // _10
	u16 _12;                    // _12
	u16 _14;                    // _14
	u16 _16;                    // _16
	u16 _18;                    // _18
	u16 _1A;                    // _1A
	u16 _1C;                    // _1C
	u16 _1E;                    // _1E
	u16* mCRegUpdateMaterialID; // _20
	JUTNameTab _24;             // _24
	u16* mKRegUpdateMaterialID; // _34
	JUTNameTab _38;             // _38
	J3DAnmCRegKeyTable* _48;    // _48
	J3DAnmKRegKeyTable* _4C;    // _4C
	s16* _50;                   // _50
	s16* _54;                   // _54
	s16* _58;                   // _58
	s16* _5C;                   // _5C
	s16* _60;                   // _60
	s16* _64;                   // _64
	s16* _68;                   // _68
	s16* _6C;                   // _6C
};

struct J3DAnmTevRegKeyData : J3DFileBlockBase {
	u8 _08;    // _08
	s16 _0A;   // _0A
	u16 _0C;   // _0C
	u16 _0E;   // _0E
	u16 _10;   // _10
	u16 _12;   // _12
	u16 _14;   // _14
	u16 _16;   // _16
	u16 _18;   // _18
	u16 _1A;   // _1A
	u16 _1C;   // _1C
	u16 _1E;   // _1E
	void* _20; // _20
	void* _24; // _24
	void* _28; // _28
	void* _2C; // _2C
	void* _30; // _30
	void* _34; // _34
	void* _38; // _38
	void* _3C; // _3C
	void* _40; // _40
	void* _44; // _44
	void* _48; // _48
	void* _4C; // _4C
	void* _50; // _50
	void* _54; // _54
};

/**
 * @size{0x1C}
 */
struct J3DAnmCRegKeyTable {
	J3DAnmKeyTableBase _00[4]; // _00
	u8 _18[0x4];               // _18
};

/**
 * @size{0x1C}
 */
struct J3DAnmKRegKeyTable {
	J3DAnmKeyTableBase _00[4]; // _00
	u8 _18[0x4];               // _18
};

#endif

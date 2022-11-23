#ifndef _JSYSTEM_J3D_J3DANMCOLOR_H
#define _JSYSTEM_J3D_J3DANMCOLOR_H

#include "JSystem/J3D/J3DAnmBase.h"
#include "JSystem/J3D/J3DFileBlock.h"
#include "JSystem/JUT/JUTNameTab.h"
#include "types.h"

struct J3DAnmColorKeyTable;
struct J3DAnmColorFullTable;

struct J3DAnmColor : public J3DAnmBase {
	inline J3DAnmColor()
	    : _0C(0)
	    , _0E(0)
	    , _10(0)
	    , _12(0)
	    , _14(0)
	    , _18(nullptr)
	    , m_nameTab()
	{
	}

	virtual ~J3DAnmColor() { }                                      // _08 (weak)
	virtual J3DAnmKind getKind() const { return J3DAnmKind_Color; } // _0C (weak)
	virtual void getColor(unsigned short, GXColor*) const { }       // _10 (weak)

	void searchUpdateMaterialID(struct J3DModelData*);

	u16 _0C;              // _0C
	u16 _0E;              // _0E
	u16 _10;              // _10
	u16 _12;              // _12
	u16 _14;              // _14
	u16* _18;             // _18
	JUTNameTab m_nameTab; // _1C
};

/**
 * @size{0x40}
 */
struct J3DAnmColorFull : public J3DAnmColor {
	inline J3DAnmColorFull()
	    : _2C(nullptr)
	    , _30(nullptr)
	    , _34(nullptr)
	    , _38(nullptr)
	    , _3C(nullptr)
	{
	}

	virtual ~J3DAnmColorFull() { }                                      // _08 (weak)
	virtual J3DAnmKind getKind() const { return J3DAnmKind_ColorFull; } // _0C (weak)
	virtual void getColor(unsigned short, GXColor*) const;              // _10

	u8* _2C;                   // _2C
	u8* _30;                   // _30
	u8* _34;                   // _34
	u8* _38;                   // _38
	J3DAnmColorFullTable* _3C; // _3C
};

struct J3DAnmColorFullData : J3DFileBlockBase {
	u8 _08;  // _08
	s16 _0A; // _0A
	s16 _0C; // _0C
	u16 _0E; // _0E

	u8 _10[8]; // _10
	void* _18; // _18
	void* _1C; // _1C
	void* _20; // _20
	void* _24; // _24
	void* _28; // _28
	void* _2C; // _2C
	void* _30; // _30
};

struct J3DAnmColorFullTable {
};

/**
 * @size{0x40}
 */
struct J3DAnmColorKey : public J3DAnmColor {
	inline J3DAnmColorKey()
	    : _2C(nullptr)
	    , _30(nullptr)
	    , _34(nullptr)
	    , _38(nullptr)
	    , m_table(nullptr)
	{
	}

	virtual ~J3DAnmColorKey() { }                                      // _08 (weak)
	virtual J3DAnmKind getKind() const { return J3DAnmKind_ColorKey; } // _0C (weak)
	virtual void getColor(unsigned short, GXColor*) const;             // _10

	s16* _2C;                     // _2C
	s16* _30;                     // _30
	s16* _34;                     // _34
	s16* _38;                     // _38
	J3DAnmColorKeyTable* m_table; // _3C
};

struct J3DAnmColorKeyData : J3DFileBlockBase {
	u8 _08; // _08
	u32 : 0;
	s16 _0C;   // _0C
	u16 _0E;   // _0E
	u16 _10;   // _10
	u16 _12;   // _12
	u16 _14;   // _14
	u16 _16;   // _16
	void* _18; // _18
	void* _1C; // _1C
	void* _20; // _20
	void* _24; // _24
	void* _28; // _28
	void* _2C; // _28
	void* _30; // _30
};

/**
 * @size{0x18}
 */
struct J3DAnmColorKeyTable {
	J3DAnmKeyTableBase _00[4];
};

#endif

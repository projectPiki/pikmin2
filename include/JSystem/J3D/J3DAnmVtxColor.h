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
	    : _0C(0)
	    , _0E(0)
	    , _10(nullptr)
	    , _14(nullptr)
	{
	}

	virtual ~J3DAnmVtxColor() { }                                            // _08 (weak)
	virtual J3DAnmKind getKind() const { return J3DAnmKind_VtxColor; }       // _0C (weak)
	virtual void getColor(unsigned char, unsigned short, GXColor*) const { } // _10 (weak)

	u16 _0C;                      // _0C
	u16 _0E;                      // _0E
	J3DAnmVtxColorIndexData* _10; // _10
	J3DAnmVtxColorIndexData* _14; // _14
};

/**
 * @size{0x30}
 */
struct J3DAnmVtxColorFull : public J3DAnmVtxColor {
	// Note: This does not initialize all members, unlike most of the other J3DAnm*Key and J3DAnm*Full classes.
	inline J3DAnmVtxColorFull()
	    : _18(nullptr)
	    , _1C(nullptr)
	{
	}

	virtual ~J3DAnmVtxColorFull() { }                                      // _08 (weak)
	virtual J3DAnmKind getKind() const { return J3DAnmKind_VtxColorFull; } // _0C (weak)
	virtual void getColor(unsigned char, unsigned short, GXColor*) const;  // _10

	J3DAnmColorFullTable* _18; // _18
	J3DAnmColorFullTable* _1C; // _1C
	u8* _20;                   // _20
	u8* _24;                   // _24
	u8* _28;                   // _28
	u8* _2C;                   // _2C
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
	    : _18(nullptr)
	    , _1C(nullptr)
	{
	}

	virtual ~J3DAnmVtxColorKey() { }                                      // _08 (weak)
	virtual J3DAnmKind getKind() const { return J3DAnmKind_VtxColorKey; } // _0C (weak)
	virtual void getColor(unsigned char, unsigned short, GXColor*) const; // _10

	J3DAnmColorKeyTable* _18; // _18
	J3DAnmColorKeyTable* _1C; // _1C
	s16* _20;                 // _20
	s16* _24;                 // _24
	s16* _28;                 // _28
	s16* _2C;                 // _2C
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

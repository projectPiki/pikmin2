#ifndef _JSYSTEM_J3D_J3DANMTEXTURESRTKEY_H
#define _JSYSTEM_J3D_J3DANMTEXTURESRTKEY_H

#include "JSystem/J3D/J3DAnmBase.h"
#include "JSystem/J3D/J3DAnmTransform.h"
#include "JSystem/JGeometry.h"
#include "JSystem/JUT/JUTNameTab.h"
#include "types.h"

/**
 * @size{0x7C}
 */
struct J3DAnmTextureSRTKey : public J3DAnmBase {
	inline J3DAnmTextureSRTKey()
	    : _30()
	    , _64()
	{
		_0C = 0;
		_1A = 0;
		_18 = 0;
		_16 = 0;
		_14 = 0;
		_10 = nullptr;
		_24 = nullptr;
		_1C = nullptr;
		_20 = nullptr;
		_48 = 0;
		_46 = 0;
		_44 = 0;
		_4A = 0;
		_58 = nullptr;
		_54 = nullptr;
		_4C = nullptr;
		_50 = nullptr;
		_78 = 0;
	}

	virtual ~J3DAnmTextureSRTKey() { } // _08 (weak)
	/**
	 * @reifiedAddress{80074368}
	 * @reifiedFile{JSystem/J3D/J3DAnmLoader.cpp}
	 */
	virtual J3DAnmKind getKind() const // _0C (weak)
	{
		return J3DAnmKind_TextureSRTKey;
	}

	void calcTransform(float, unsigned short, struct J3DTextureSRTInfo*) const;
	void searchUpdateMaterialID(struct J3DModelData*);

	u32 _0C;                      // _0C
	J3DAnmTransformKeyTable* _10; // _10
	u16 _14;                      // _14
	u16 _16;                      // _16
	u16 _18;                      // _18
	u16 _1A;                      // _1A
	f32* _1C;                     // _1C
	s16* _20;                     // _20
	f32* _24;                     // _24
	u8* _28;                      // _28
	u16* _2C;                     // _2C
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
	u32 _78;                      // _78
};

struct J3DAnmTextureSRTKeyData : J3DAnmFullData {
	u16 _10;   // _10
	u16 _12;   // _12
	void* _14; // _14
	void* _18; // _18
	void* _1C; // _1C
	void* _20; // _20
	void* _24; // _24
	void* _28; // _28
	void* _2C; // _2C
	void* _30; // _30
	u16 _34;   // _34
	u16 _36;   // _36
	u16 _38;   // _38
	u16 _3A;   // _3A
	void* _3C; // _3C
	void* _40; // _40
	void* _44; // _44
	void* _48; // _48
	void* _4C; // _4C
	void* _50; // _50
	void* _54; // _54
	void* _58; // _58
	int _5C;   // _5C
};

#endif

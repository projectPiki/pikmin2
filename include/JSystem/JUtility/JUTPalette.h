#ifndef _JSYSTEM_JUT_JUTPALETTE_H
#define _JSYSTEM_JUT_JUTPALETTE_H

#include "Dolphin/gx.h"
#include "types.h"

struct ResTLUT;
typedef u8 _JUTTransparency;
enum JUTTransparency { Transparency_0 = 0, Transparency_1, Transparency_2 };

// Size: 0x18
struct JUTPalette {
	/** @fabricated */
	inline JUTPalette() { }
	/** @fabricated */
	inline JUTPalette(u32 id, ResTLUT* lut) { storeTLUT((_GXTlut)id, lut); }

	bool load();
	void storeTLUT(_GXTlut, _GXTlutFmt, JUTTransparency, u16, void*);
	void storeTLUT(_GXTlut, ResTLUT*);
	// void storeTLUT(_GXTlut id, _GXTlutFmt format, JUTTransparency
	// transparency, u16 p4, void* p5) { 	mTlutID = id; 	mTlutFormat =
	// format; 	mTransparency = transparency; 	_14 = p4; 	_10 = (u8*)p5;
	// 	GXInitTlutObj(&mTlutObj, _10, mTlutFormat, _14);
	// }

	GXTlutObj mTlutObj;
	u8 mTlutID;                     // _0C
	_GXTlutFmt mTlutFormat;         // _0D
	u8* _10;                        // _10
	u16 _14;                        // _14
	_JUTTransparency mTransparency; // _16
};

#endif

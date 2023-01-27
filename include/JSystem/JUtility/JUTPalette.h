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
	inline JUTPalette(u32 id, ResTLUT* lut) { storeTLUT((GXTlut)id, lut); }

	inline JUTPalette(GXTlut p1, GXTlutFmt p2, JUTTransparency p3, u16 p4, void* p5) { storeTLUT(p1, p2, p3, p4, p5); }

	bool load();
	void storeTLUT(GXTlut, _GXTlutFmt, JUTTransparency, u16, void*);
	void storeTLUT(GXTlut, ResTLUT*);
	// void storeTLUT(_GXTlut id, _GXTlutFmt format, JUTTransparency
	// transparency, u16 p4, void* p5) { 	mTlutID = id; 	mTlutFormat =
	// format; 	mTransparency = transparency; 	_14 = p4; 	_10 = (u8*)p5;
	// 	GXInitTlutObj(&mTlutObj, _10, mTlutFormat, _14);
	// }

	GXTlutObj mTlutObj; // _00
	u8 mTlutID;         // _0C
	u8 mTlutFormat;     // _0D, GXTlut
	u8* _10;            // _10
	u16 _14;            // _14
	u16 mTransparency;  // _16, JUTTransparency
};

#endif

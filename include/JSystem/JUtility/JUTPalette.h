#ifndef _JSYSTEM_JUT_JUTPALETTE_H
#define _JSYSTEM_JUT_JUTPALETTE_H

#include "Dolphin/gx.h"
#include "types.h"

struct ResTLUT;
enum JUTTransparency { Transparency_0 = 0, Transparency_1, Transparency_2 };

// Size: 0x18
struct JUTPalette {
	inline JUTPalette() { }

	inline JUTPalette(u32 id, ResTLUT* lut) { storeTLUT((GXTlut)id, lut); }

	inline JUTPalette(GXTlut tlut, GXTlutFmt format, JUTTransparency transp, u16 p4, void* p5) { storeTLUT(tlut, format, transp, p4, p5); }

	bool load();
	void storeTLUT(GXTlut, _GXTlutFmt, JUTTransparency, u16, void*);
	void storeTLUT(GXTlut, ResTLUT*);

	inline u8 getTlutID() const { return mTlutID; }
	inline u16 getNumColors() const { return mNumColors; }

	GXTlutObj mTlutObj;   // _00
	u8 mTlutID;           // _0C
	u8 mTlutFormat;       // _0D, GXTlut
	ResTLUT* mColorTable; // _10
	u16 mNumColors;       // _14
	u8 mTransparency;     // _16, JUTTransparency
};

#endif

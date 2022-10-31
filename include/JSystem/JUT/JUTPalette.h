#ifndef _JSYSTEM_JUT_JUTPALETTE_H
#define _JSYSTEM_JUT_JUTPALETTE_H

#include "Dolphin/gx.h"
#include "types.h"

struct ResTLUT;
typedef u8 _JUTTransparency;
enum JUTTransparency { Transparency_0 = 0, Transparency_1, Transparency_2 };

// Size: 0x18
struct JUTPalette {
	bool load();
	void storeTLUT(_GXTlut, _GXTlutFmt, JUTTransparency, u16, void*);
	void storeTLUT(_GXTlut, ResTLUT*);
	// void storeTLUT(_GXTlut id, _GXTlutFmt format, JUTTransparency
	// transparency, u16 p4, void* p5) { 	m_tlutID = id; 	m_tlutFormat =
	// format; 	m_transparency = transparency; 	_14 = p4; 	_10 = (u8*)p5;
	// 	GXInitTlutObj(&m_tlutObj, _10, m_tlutFormat, _14);
	// }

	GXTlutObj m_tlutObj;
	_GXTlut m_tlutID;                // _0C
	_GXTlutFmt m_tlutFormat;         // _0D
	u8* _10;                         // _10
	u16 _14;                         // _14
	_JUTTransparency m_transparency; // _16
};

#endif

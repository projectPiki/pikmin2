#ifndef _JSYSTEM_RESTIMG_H
#define _JSYSTEM_RESTIMG_H

#include "Dolphin/gx.h"
#include "types.h"

struct ResTIMG {
	u8 m_textureFormat;        // _00
	u8 m_transparency;         // _01
	ushort m_sizeX;            // _02
	ushort m_sizeY;            // _04
	u8 m_wrapS;                // _06
	u8 m_wrapT;                // _07
	u8 m_paletteFormat;        // _08
	u8 m_lutFormat;            // _09
	short m_paletteEntryCount; // _0A
	u32 m_paletteOffset;       // _0C
	GXBool _10;                // _10
	GXBool _11;                // _11
	GXBool _12;                // _12
	GXBool _13;                // _13
	u8 m_magFilterType;        // _14
	u8 m_minFilterType;        // _15
	char _16;                  // _16
	char _17;                  // _17
	u8 m_totalImageCount;      // _18
	short _1A;                 // _1A
	int m_imageDataOffset;     // _1C
	u8 _20[4];                 // _20
};

#endif

#ifndef _JSYSTEM_RESTIMG_H
#define _JSYSTEM_RESTIMG_H

#include "Dolphin/gx.h"
#include "types.h"

#ifndef _JUTTransparency
typedef u8 _JUTTransparency;
#endif

struct ResTIMG {

	inline void copyTo(ResTIMG* dest)
	{
		dest->m_textureFormat     = m_textureFormat;
		dest->m_transparency      = m_transparency;
		dest->m_sizeX             = m_sizeX;
		dest->m_sizeY             = m_sizeY;
		dest->m_wrapS             = m_wrapS;
		dest->m_wrapT             = m_wrapT;
		dest->m_paletteFormat     = m_paletteFormat;
		dest->m_lutFormat         = m_lutFormat;
		dest->m_paletteEntryCount = m_paletteEntryCount;
		dest->m_paletteOffset     = m_paletteOffset;
		dest->_10                 = _10;
		dest->_11                 = _11;
		dest->_12                 = _12;
		dest->_13                 = _13;
		dest->m_magFilterType     = m_magFilterType;
		dest->m_minFilterType     = m_minFilterType;
		dest->_16                 = _16;
		dest->_17                 = _17;
		dest->m_totalImageCount   = m_totalImageCount;
		dest->_19                 = _19;
		dest->_1A                 = _1A;
		dest->m_imageDataOffset   = m_imageDataOffset;
	}

	u8 m_textureFormat;              // _00
	_JUTTransparency m_transparency; // _01
	u16 m_sizeX;                     // _02
	u16 m_sizeY;                     // _04
	u8 m_wrapS;                      // _06
	u8 m_wrapT;                      // _07
	u8 m_paletteFormat;              // _08
	u8 m_lutFormat;                  // _09
	u16 m_paletteEntryCount;         // _0A
	u32 m_paletteOffset;             // _0C
	GXBool _10;                      // _10
	GXBool _11;                      // _11
	GXBool _12;                      // _12
	GXBool _13;                      // _13
	u8 m_magFilterType;              // _14
	u8 m_minFilterType;              // _15
	char _16;                        // _16
	char _17;                        // _17
	u8 m_totalImageCount;            // _18
	u8 _19;                          // _19, unknown
	short _1A;                       // _1A
	int m_imageDataOffset;           // _1C
};

struct ResTIMGPair {
	ResTIMG _00;
	ResTIMG _20;
};

#endif

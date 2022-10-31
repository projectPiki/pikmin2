#ifndef _JSYSTEM_RESTLUT_H
#define _JSYSTEM_RESTLUT_H

#include "Dolphin/gx.h"
#include "types.h"

typedef u8 _JUTTransparency;

struct ResTLUT {
	_GXTlutFmt m_format;             // _00
	_JUTTransparency m_transparency; // _01
	u16 _02;                         // _02 // maybe sizeX, given similarities to ResTIMG?
	u8 _04[0x1C];                    // _04
	u32 _20;                         // _20
};

#endif

#ifndef _JSYSTEM_RESTLUT_H
#define _JSYSTEM_RESTLUT_H

#include "Dolphin/gx.h"
#include "types.h"

struct ResTLUT {
	u8 mFormat;       // _00, GXTlutFormat
	u8 mTransparency; // _01, JUTTransparency
	u16 mNumColors;   // _02
	u8 _04[0x1C];     // _04
	u32 _20;          // _20
};

#endif

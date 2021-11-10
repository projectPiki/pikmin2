#ifndef _JSYSTEM_JUT_JUTTEXTURE_H
#define _JSYSTEM_JUT_JUTTEXTURE_H

#include "types.h"

struct JUTTexture {
	JUTTexture();

	u8 _00[32]; // _00
	u32 _20;    // _20
	u32 _24;    // _24
	u32 _28;    // _28
	u8 _2C[15]; // _2C
	u8 _3B;     // _3B
};

#endif

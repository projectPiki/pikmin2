#ifndef _JSYSTEM_J3D_J3DGXCOLOR_H
#define _JSYSTEM_J3D_J3DGXCOLOR_H

#include "types.h"

/**
 * probably rgba? could inherit Color4 or GXColor or something?
 */
struct J3DGXColor {
	J3DGXColor();

	u8 _00; // _00
	u8 _01; // _01
	u8 _02; // _02
	u8 _03; // _03
};

struct J3DGXColorS10 {
	J3DGXColorS10();

	u16 _00; // _00
	u16 _02; // _02
	u16 _04; // _04
	u16 _06; // _06
};

#endif

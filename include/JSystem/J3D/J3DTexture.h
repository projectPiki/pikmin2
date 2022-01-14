#ifndef _J3DTEXTURE_H
#define _J3DTEXTURE_H

#include "types.h"

struct ResTIMG;

struct _UnknownJ3DTextureParent {
	u16 _00;      // _00
	u16 _02;      // _02
	ResTIMG* _04; // _04
};

/**
 * @size{0xC}
 */
struct J3DTexture : _UnknownJ3DTextureParent {
	virtual ~J3DTexture(); // _00

	// _08 VTBL
};

#endif

#ifndef _JPATEXTURE_H
#define _JPATEXTURE_H

/*
    __vt__10JPATexture:
    .4byte 0
    .4byte 0
    .4byte __dt__10JPATextureFv
    .4byte 0
*/

struct JPATexture {
	virtual ~JPATexture();  // _00
	virtual void _04() = 0; // _04

	// _00 VTBL
};

#endif

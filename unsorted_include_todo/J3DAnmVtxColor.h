#ifndef _J3DANMVTXCOLOR_H
#define _J3DANMVTXCOLOR_H

/*
    __vt__14J3DAnmVtxColor:
    .4byte 0
    .4byte 0
    .4byte __dt__14J3DAnmVtxColorFv
    .4byte getKind__14J3DAnmVtxColorCFv
    .4byte getColor__14J3DAnmVtxColorCFUcUsP8_GXColor
*/

struct J3DAnmVtxColor {
	virtual ~J3DAnmVtxColor();    // _00
	virtual void getKind() const; // _04
	virtual void getColor(unsigned char, unsigned short,
	                      _GXColor*) const; // _08

	// _00 VTBL
};

#endif

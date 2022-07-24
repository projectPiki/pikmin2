#ifndef _J2DANMVTXCOLOR_H
#define _J2DANMVTXCOLOR_H

/*
    __vt__14J2DAnmVtxColor:
    .4byte 0
    .4byte 0
    .4byte __dt__14J2DAnmVtxColorFv
    .4byte searchUpdateMaterialID__10J2DAnmBaseFP9J2DScreen
    .4byte getColor__14J2DAnmVtxColorCFUcUsP8_GXColor
*/

struct J2DAnmBase {
	virtual ~J2DAnmBase();                           // _08 (inline)
	virtual void searchUpdateMaterialID(J2DScreen*); // _0C (inline)
};

struct J2DAnmVtxColor : public J2DAnmBase {
	virtual ~J2DAnmVtxColor();                                             // _08 (inline)
	virtual void getColor(unsigned char, unsigned short, _GXColor*) const; // _10 (inline)
};

#endif

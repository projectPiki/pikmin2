#ifndef _J2DANMVTXCOLORFULL_H
#define _J2DANMVTXCOLORFULL_H

/*
    __vt__18J2DAnmVtxColorFull:
    .4byte 0
    .4byte 0
    .4byte __dt__18J2DAnmVtxColorFullFv
    .4byte searchUpdateMaterialID__10J2DAnmBaseFP9J2DScreen
    .4byte getColor__18J2DAnmVtxColorFullCFUcUsP8_GXColor
*/

struct J2DAnmBase {
	virtual ~J2DAnmBase();                           // _08 (inline)
	virtual void searchUpdateMaterialID(J2DScreen*); // _0C (inline)
};

struct J2DAnmVtxColorFull : public J2DAnmBase {
	virtual ~J2DAnmVtxColorFull();                                         // _08 (inline)
	virtual void getColor(unsigned char, unsigned short, _GXColor*) const; // _10
};

#endif

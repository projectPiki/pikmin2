#ifndef _J2DANMVTXCOLORKEY_H
#define _J2DANMVTXCOLORKEY_H

/*
    __vt__17J2DAnmVtxColorKey:
    .4byte 0
    .4byte 0
    .4byte __dt__17J2DAnmVtxColorKeyFv
    .4byte searchUpdateMaterialID__10J2DAnmBaseFP9J2DScreen
    .4byte getColor__17J2DAnmVtxColorKeyCFUcUsP8_GXColor
*/

struct J2DAnmBase {
	virtual ~J2DAnmBase();                           // _08
	virtual void searchUpdateMaterialID(J2DScreen*); // _0C

	// _00 VTBL
};

struct J2DAnmVtxColorKey : public J2DAnmBase {
	virtual ~J2DAnmVtxColorKey();                                          // _08
	virtual void getColor(unsigned char, unsigned short, _GXColor*) const; // _10

	// _00 VTBL
};

#endif

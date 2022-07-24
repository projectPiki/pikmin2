#ifndef _J2DANMCOLORKEY_H
#define _J2DANMCOLORKEY_H

/*
    __vt__14J2DAnmColorKey:
    .4byte 0
    .4byte 0
    .4byte __dt__14J2DAnmColorKeyFv
    .4byte searchUpdateMaterialID__11J2DAnmColorFP9J2DScreen
    .4byte getColor__14J2DAnmColorKeyCFUsP8_GXColor
*/

struct J2DAnmColor {
	virtual ~J2DAnmColor();                          // _08 (inline)
	virtual void searchUpdateMaterialID(J2DScreen*); // _0C
};

struct J2DAnmColorKey : public J2DAnmColor {
	virtual ~J2DAnmColorKey();                              // _08 (inline)
	virtual void getColor(unsigned short, _GXColor*) const; // _10
};

#endif

#ifndef _J2DANMCOLORFULL_H
#define _J2DANMCOLORFULL_H

/*
    __vt__15J2DAnmColorFull:
    .4byte 0
    .4byte 0
    .4byte __dt__15J2DAnmColorFullFv
    .4byte searchUpdateMaterialID__11J2DAnmColorFP9J2DScreen
    .4byte getColor__15J2DAnmColorFullCFUsP8_GXColor
*/

struct J2DAnmColor {
	virtual ~J2DAnmColor();                          // _08 (inline)
	virtual void searchUpdateMaterialID(J2DScreen*); // _0C
};

struct J2DAnmColorFull : public J2DAnmColor {
	virtual ~J2DAnmColorFull();                             // _08 (inline)
	virtual void getColor(unsigned short, _GXColor*) const; // _10
};

#endif

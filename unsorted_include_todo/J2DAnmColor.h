#ifndef _J2DANMCOLOR_H
#define _J2DANMCOLOR_H

/*
    __vt__11J2DAnmColor:
    .4byte 0
    .4byte 0
    .4byte __dt__11J2DAnmColorFv
    .4byte searchUpdateMaterialID__11J2DAnmColorFP9J2DScreen
    .4byte getColor__11J2DAnmColorCFUsP8_GXColor
*/

struct J2DAnmColor {
	virtual ~J2DAnmColor();                                 // _08 (inline)
	virtual void searchUpdateMaterialID(J2DScreen*);        // _0C
	virtual void getColor(unsigned short, _GXColor*) const; // _10 (inline)
};

#endif

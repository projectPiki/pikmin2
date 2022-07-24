#ifndef _J3DANMCOLOR_H
#define _J3DANMCOLOR_H

/*
    __vt__11J3DAnmColor:
    .4byte 0
    .4byte 0
    .4byte __dt__11J3DAnmColorFv
    .4byte getKind__11J3DAnmColorCFv
    .4byte getColor__11J3DAnmColorCFUsP8_GXColor
*/

struct J3DAnmColor {
	virtual ~J3DAnmColor();                                 // _08 (inline)
	virtual void getKind() const;                           // _0C (inline)
	virtual void getColor(unsigned short, _GXColor*) const; // _10 (inline)
};

#endif

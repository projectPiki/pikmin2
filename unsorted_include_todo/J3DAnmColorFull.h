#ifndef _J3DANMCOLORFULL_H
#define _J3DANMCOLORFULL_H

/*
    __vt__15J3DAnmColorFull:
    .4byte 0
    .4byte 0
    .4byte __dt__15J3DAnmColorFullFv
    .4byte getKind__15J3DAnmColorFullCFv
    .4byte getColor__15J3DAnmColorFullCFUsP8_GXColor
*/

struct J3DAnmColorFull {
	virtual ~J3DAnmColorFull();                             // _00
	virtual void getKind() const;                           // _04
	virtual void getColor(unsigned short, _GXColor*) const; // _08

	// _00 VTBL
};

#endif

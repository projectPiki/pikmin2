#ifndef _J2DANMCOLOR_H
#define _J2DANMCOLOR_H

struct J2DAnmColor {
	virtual ~J2DAnmColor();                                 // _00
	virtual void searchUpdateMaterialID(J2DScreen*);        // _04
	virtual void getColor(unsigned short, _GXColor*) const; // _08

	// _00 VTBL
};

#endif

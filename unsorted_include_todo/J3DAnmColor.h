#ifndef _J3DANMCOLOR_H
#define _J3DANMCOLOR_H

struct J3DAnmColor {
	virtual ~J3DAnmColor();                                 // _00
	virtual void getKind() const;                           // _04
	virtual void getColor(unsigned short, _GXColor*) const; // _08

	// _00 VTBL
};

#endif

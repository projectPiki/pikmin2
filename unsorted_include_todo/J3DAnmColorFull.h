#ifndef _J3DANMCOLORFULL_H
#define _J3DANMCOLORFULL_H

struct J3DAnmColorFull {
	virtual ~J3DAnmColorFull();                             // _00
	virtual void getKind() const;                           // _04
	virtual void getColor(unsigned short, _GXColor*) const; // _08

	// _00 VTBL
};

#endif

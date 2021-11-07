#ifndef _J3DANMCOLORKEY_H
#define _J3DANMCOLORKEY_H

struct J3DAnmColorKey {
	virtual ~J3DAnmColorKey();                              // _00
	virtual void getKind() const;                           // _04
	virtual void getColor(unsigned short, _GXColor*) const; // _08

	// _00 VTBL
};

#endif

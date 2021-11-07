#ifndef _J3DANMVTXCOLOR_H
#define _J3DANMVTXCOLOR_H

struct J3DAnmVtxColor {
	virtual ~J3DAnmVtxColor();    // _00
	virtual void getKind() const; // _04
	virtual void getColor(unsigned char, unsigned short,
	                      _GXColor*) const; // _08

	// _00 VTBL
};

#endif

#ifndef _J3DANMVTXCOLORKEY_H
#define _J3DANMVTXCOLORKEY_H

struct J3DAnmVtxColorKey {
	virtual ~J3DAnmVtxColorKey(); // _00
	virtual void getKind() const; // _04
	virtual void getColor(unsigned char, unsigned short,
	                      _GXColor*) const; // _08

	// _00 VTBL
};

#endif

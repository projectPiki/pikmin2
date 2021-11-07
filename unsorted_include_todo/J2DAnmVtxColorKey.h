#ifndef _J2DANMVTXCOLORKEY_H
#define _J2DANMVTXCOLORKEY_H

struct J2DAnmBase {
	virtual void _00() = 0;                          // _00
	virtual void searchUpdateMaterialID(J2DScreen*); // _04

	// _00 VTBL
};

struct J2DAnmVtxColorKey : public J2DAnmBase {
	virtual ~J2DAnmVtxColorKey();                    // _00
	virtual void searchUpdateMaterialID(J2DScreen*); // _04
	virtual void getColor(unsigned char, unsigned short,
	                      _GXColor*) const; // _08

	// _00 VTBL
};

#endif

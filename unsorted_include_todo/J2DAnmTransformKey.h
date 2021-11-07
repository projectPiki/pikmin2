#ifndef _J2DANMTRANSFORMKEY_H
#define _J2DANMTRANSFORMKEY_H

struct J2DAnmBase {
	virtual void _00() = 0;                          // _00
	virtual void searchUpdateMaterialID(J2DScreen*); // _04

	// _00 VTBL
};

struct J2DAnmTransformKey : public J2DAnmBase {
	virtual ~J2DAnmTransformKey();                                      // _00
	virtual void searchUpdateMaterialID(J2DScreen*);                    // _04
	virtual void getTransform(unsigned short, J3DTransformInfo*) const; // _08
	virtual void calcTransform(float, unsigned short,
	                           J3DTransformInfo*) const; // _0C

	// _00 VTBL
};

#endif

#ifndef _J2DANMTRANSFORM_H
#define _J2DANMTRANSFORM_H

struct J2DAnmBase {
	virtual void _00() = 0;                          // _00
	virtual void searchUpdateMaterialID(J2DScreen*); // _04

	// _00 VTBL
};

struct J2DAnmTransform : public J2DAnmBase {
	virtual ~J2DAnmTransform();                                         // _00
	virtual void searchUpdateMaterialID(J2DScreen*);                    // _04
	virtual void getTransform(unsigned short, J3DTransformInfo*) const; // _08

	// _00 VTBL
};

#endif

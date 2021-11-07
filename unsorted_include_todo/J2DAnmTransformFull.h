#ifndef _J2DANMTRANSFORMFULL_H
#define _J2DANMTRANSFORMFULL_H

struct J2DAnmBase {
	virtual void _00() = 0;                          // _00
	virtual void searchUpdateMaterialID(J2DScreen*); // _04

	// _00 VTBL
};

struct J2DAnmTransformFull : public J2DAnmBase {
	virtual ~J2DAnmTransformFull();                                     // _00
	virtual void searchUpdateMaterialID(J2DScreen*);                    // _04
	virtual void getTransform(unsigned short, J3DTransformInfo*) const; // _08

	// _00 VTBL
};

#endif

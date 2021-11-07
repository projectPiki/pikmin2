#ifndef _J2DANMVISIBILITYFULL_H
#define _J2DANMVISIBILITYFULL_H

struct J2DAnmBase {
	virtual void _00() = 0;                          // _00
	virtual void searchUpdateMaterialID(J2DScreen*); // _04

	// _00 VTBL
};

struct J2DAnmVisibilityFull : public J2DAnmBase {
	virtual ~J2DAnmVisibilityFull();                 // _00
	virtual void searchUpdateMaterialID(J2DScreen*); // _04

	// _00 VTBL
};

#endif

#ifndef _J2DANMBASE_H
#define _J2DANMBASE_H

struct J2DAnmBase {
	virtual ~J2DAnmBase();                           // _00
	virtual void searchUpdateMaterialID(J2DScreen*); // _04
	virtual void _08() = 0;                          // _08

	// _00 VTBL
};

#endif

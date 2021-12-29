#ifndef _J2DANMBASE_H
#define _J2DANMBASE_H

/*
    __vt__10J2DAnmBase:
    .4byte 0
    .4byte 0
    .4byte __dt__10J2DAnmBaseFv
    .4byte searchUpdateMaterialID__10J2DAnmBaseFP9J2DScreen
    .4byte 0
*/

struct J2DAnmBase {
	virtual ~J2DAnmBase();                           // _00
	virtual void searchUpdateMaterialID(J2DScreen*); // _04
	virtual void _08() = 0;                          // _08

	// _00 VTBL
};

#endif

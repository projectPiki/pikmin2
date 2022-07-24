#ifndef _J2DANMBASE_H
#define _J2DANMBASE_H

/*
    __vt__10J2DAnmBase:
    .4byte 0
    .4byte 0
    .4byte __dt__10J2DAnmBaseFv
    .4byte searchUpdateMaterialID__10J2DAnmBaseFP9J2DScreen
*/

struct J2DAnmBase {
	virtual ~J2DAnmBase();                           // _08
	virtual void searchUpdateMaterialID(J2DScreen*); // _0C

	// _00 VTBL
};

#endif

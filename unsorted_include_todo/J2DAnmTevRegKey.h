#ifndef _J2DANMTEVREGKEY_H
#define _J2DANMTEVREGKEY_H

/*
    __vt__15J2DAnmTevRegKey:
    .4byte 0
    .4byte 0
    .4byte __dt__15J2DAnmTevRegKeyFv
    .4byte searchUpdateMaterialID__15J2DAnmTevRegKeyFP9J2DScreen
*/

struct J2DAnmTevRegKey {
	virtual ~J2DAnmTevRegKey();                      // _08
	virtual void searchUpdateMaterialID(J2DScreen*); // _0C

	// _00 VTBL
};

#endif

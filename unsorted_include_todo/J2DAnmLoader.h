#ifndef _J2DANMLOADER_H
#define _J2DANMLOADER_H

/*
    __vt__12J2DAnmLoader:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte __dt__12J2DAnmLoaderFv
*/

struct J2DAnmLoader {
	virtual void _00() = 0;  // _00
	virtual void _04() = 0;  // _04
	virtual ~J2DAnmLoader(); // _08

	// _00 VTBL
};

#endif

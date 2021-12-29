#ifndef _J3DANMLOADER_H
#define _J3DANMLOADER_H

/*
    __vt__12J3DAnmLoader:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte __dt__12J3DAnmLoaderFv
*/

struct J3DAnmLoader {
	virtual void _00() = 0;  // _00
	virtual void _04() = 0;  // _04
	virtual ~J3DAnmLoader(); // _08

	// _00 VTBL
};

#endif

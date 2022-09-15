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
	virtual void _08() = 0;  // _08
	virtual void _0C() = 0;  // _0C
	virtual ~J2DAnmLoader(); // _10 (weak)
};

#endif

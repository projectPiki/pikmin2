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
	virtual void _08() = 0;  // _08
	virtual void _0C() = 0;  // _0C
	virtual ~J3DAnmLoader(); // _10 (weak)
};

#endif

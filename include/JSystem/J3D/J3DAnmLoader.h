#ifndef _JSYSTEM_J3D_J3DANMLOADER_H
#define _JSYSTEM_J3D_J3DANMLOADER_H

#include "types.h"

/*
    __vt__12J3DAnmLoader:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte __dt__12J3DAnmLoaderFv
*/

namespace J3DAnmLoaderDataBase {
void* load(const void*);
}

struct J3DAnmLoader {
	virtual void _00() = 0;  // _00
	virtual void _04() = 0;  // _04
	virtual ~J3DAnmLoader(); // _08

	// _00 VTBL
};

#endif

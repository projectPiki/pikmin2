#ifndef _JSYSTEM_J3D_J3DTEXMTXANM_H
#define _JSYSTEM_J3D_J3DTEXMTXANM_H

#include "types.h"

struct J3DTexMtxAnm {
	J3DTexMtxAnm();
	~J3DTexMtxAnm();

	u16 mIndex;                       // _00
	u16 _02;                          // _02
	struct J3DAnmTextureSRTKey* mAnm; // _04
};

#endif

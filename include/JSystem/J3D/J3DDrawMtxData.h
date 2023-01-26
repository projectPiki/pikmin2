#ifndef _JSYSTEM_J3D_J3DDRAWMTXDATA_H
#define _JSYSTEM_J3D_J3DDRAWMTXDATA_H

#include "types.h"

struct J3DDrawMtxData {
	J3DDrawMtxData();

	~J3DDrawMtxData();

	u16 mCount;        // _00
	u16 mDrawMtxCount; // _02
	u8* mDrawMtxFlag;  // _04
	u16* mDrawMtxIdx;  // _08
};

#endif

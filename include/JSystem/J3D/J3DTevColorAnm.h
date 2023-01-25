#ifndef _JSYSTEM_J3D_J3DTEVCOLORANM_H
#define _JSYSTEM_J3D_J3DTEVCOLORANM_H

#include "types.h"

struct J3DAnmTevRegKey;
struct J3DTevColorAnm {
	J3DTevColorAnm();
	~J3DTevColorAnm();

	u16 mIndex;            // _00
	u16 _02;               // _02
	J3DAnmTevRegKey* mKey; // _04
};

struct J3DTevKColorAnm {
	J3DTevKColorAnm();
	~J3DTevKColorAnm();

	u16 mIndex;            // _00
	u16 _02;               // _02
	J3DAnmTevRegKey* mKey; // _04
};

#endif

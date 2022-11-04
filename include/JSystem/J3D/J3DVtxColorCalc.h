#ifndef _JSYSTEM_J3D_J3DVTXCOLORCALC_H
#define _JSYSTEM_J3D_J3DVTXCOLORCALC_H

#include "types.h"

struct J3DVtxColorCalc {
	virtual void calc(struct J3DVertexBuffer*); // _08
	virtual ~J3DVtxColorCalc();                 // _0C (weak)

	void calc(struct J3DModel*);

	// _00 VTBL
	u32 _04;   // _04
	void* _08; // _08
};

#endif

#ifndef _JSYSTEM_J3D_J3DVTXCOLORCALC_H
#define _JSYSTEM_J3D_J3DVTXCOLORCALC_H

#include "types.h"

struct J3DVtxColorCalc {
	virtual void calc(struct J3DVertexBuffer*); // _00
	virtual ~J3DVtxColorCalc();                 // _04

	void valc(struct J3DModel*);

	// _00 VTBL
	u32 _04;    // _04
	unkptr _08; // _08
};

#endif

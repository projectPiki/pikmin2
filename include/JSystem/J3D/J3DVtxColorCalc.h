#ifndef _JSYSTEM_J3D_J3DVTXCOLORCALC_H
#define _JSYSTEM_J3D_J3DVTXCOLORCALC_H

#include "types.h"
#include "JSystem/J3D/J3DAnmVtxColor.h"

struct J3DVtxColorCalc {
	J3DVtxColorCalc()
	    : mFlag(1)
	    , mAnmVtxColor(nullptr)
	{
	}

	virtual void calc(struct J3DVertexBuffer*); // _08
	virtual ~J3DVtxColorCalc() { }              // _0C (weak)

	void calc(struct J3DModel*);

	inline bool checkFlag(u32 flag) { return mFlag & flag; }

	// _00 VTBL
	u32 mFlag;                    // _04
	J3DAnmVtxColor* mAnmVtxColor; // _08
};

#endif

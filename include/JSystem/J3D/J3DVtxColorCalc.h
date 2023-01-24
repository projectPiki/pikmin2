#ifndef _JSYSTEM_J3D_J3DVTXCOLORCALC_H
#define _JSYSTEM_J3D_J3DVTXCOLORCALC_H

#include "types.h"
#include "JSystem/J3D/J3DAnmVtxColor.h"

struct J3DVtxColorCalc {
	virtual void calc(struct J3DVertexBuffer*); // _08
	virtual ~J3DVtxColorCalc() { }              // _0C (weak)

	void calc(struct J3DModel*);

	inline bool checkFlag(u32 flag) { return m_flag & flag; }

	// _00 VTBL
	u32 m_flag;                    // _04
	J3DAnmVtxColor* m_AnmVtxColor; // _08
};

#endif

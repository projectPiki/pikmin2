#ifndef _JSYSTEM_J3D_J3DMATCOLORANM_H
#define _JSYSTEM_J3D_J3DMATCOLORANM_H

#include "JSystem/J3D/J3DAnmColor.h"
#include "types.h"

struct J3DMatColorAnm {
	J3DMatColorAnm();
	~J3DMatColorAnm();

	u16 _00;            // _00
	u16 _02;            // _02
	J3DAnmColor* m_anm; // _04
};

#endif

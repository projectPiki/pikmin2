#ifndef _JSYSTEM_J3D_J3DDRAWMTXDATA_H
#define _JSYSTEM_J3D_J3DDRAWMTXDATA_H

#include "types.h"

struct J3DDrawMtxData {
	J3DDrawMtxData();
	~J3DDrawMtxData();

	u16 m_count; // _00
	u16 _02;     // _02
	u8* _04;     // _04
	u16* _08;    // _08
};

#endif

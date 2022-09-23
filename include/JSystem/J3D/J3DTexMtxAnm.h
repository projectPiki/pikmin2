#ifndef _JSYSTEM_J3D_J3DTEXMTXANM_H
#define _JSYSTEM_J3D_J3DTEXMTXANM_H

#include "types.h"

struct J3DTexMtxAnm {
	J3DTexMtxAnm();
	~J3DTexMtxAnm();

	u16 m_index;                       // _00
	u16 _02;                           // _02
	struct J3DAnmTextureSRTKey* m_anm; // _04
};

#endif

#ifndef _JSYSTEM_J3DTEXGENBLOCKPATCHED_H
#define _JSYSTEM_J3DTEXGENBLOCKPATCHED_H

#include "types.h"

struct J3DTexMtx;

struct J3DTexGenBlockPatched {
	u32 _00;                     // VTBL!
	s32 m_texgenCnt;             // _04
	u8 _08[0x30];                // _08
	J3DTexMtx* m_texMatrices[8]; // _38
	u32* m_dlistOffs;            // _58
};

#endif
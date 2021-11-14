#ifndef _JSYSTEM_J3D_J3DMATERIALANM_H
#define _JSYSTEM_J3D_J3DMATERIALANM_H

#include "types.h"

#include "JSystem/J3D/J3DMatColorAnm.h"
#include "JSystem/J3D/J3DTexMtxAnm.h"
#include "JSystem/J3D/J3DTexNoAnm.h"
#include "JSystem/J3D/J3DTevColorAnm.h"

struct J3DMaterialAnm {
	u32 _00; // _00, VTBL!
	J3DMatColorAnm m_matColAnmList[2];
	J3DTexMtxAnm m_texMtxAnmList[8];
	J3DTexNoAnm m_texNoAnmList[8];
	J3DTevColorAnm m_tevColAnmList[4];
	J3DTevKColorAnm m_tevKColAnmList[4];
};

#endif

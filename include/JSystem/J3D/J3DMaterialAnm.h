#ifndef _JSYSTEM_J3D_J3DMATERIALANM_H
#define _JSYSTEM_J3D_J3DMATERIALANM_H

#include "types.h"

#include "JSystem/J3D/J3DMatColorAnm.h"
#include "JSystem/J3D/J3DTexMtxAnm.h"
#include "JSystem/J3D/J3DTexNoAnm.h"
#include "JSystem/J3D/J3DTevColorAnm.h"

struct J3DMaterial;

struct J3DMaterialAnm {
	/**
	 * @fabricated
	 */
	J3DMaterialAnm() { initialize(); }

	virtual ~J3DMaterialAnm() { }          // _08 (weak)
	virtual void calc(J3DMaterial*) const; // _0C

	void initialize();

	// VTBL _00
	J3DMatColorAnm m_matColAnmList[2];
	J3DTexMtxAnm m_texMtxAnmList[8];
	J3DTexNoAnm m_texNoAnmList[8];
	J3DTevColorAnm m_tevColAnmList[4];
	J3DTevKColorAnm m_tevKColAnmList[4];
};

#endif

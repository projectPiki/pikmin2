#ifndef _JSYSTEM_J2D_J2DTEXMTX_H
#define _JSYSTEM_J2D_J2DTEXMTX_H

#include "Dolphin/mtx.h"
#include "Dolphin/vec.h"
#include "JSystem/J2D/J2DTypes.h"
#include "types.h"

struct J2DTexMtxInfo {
	u8 _00;                             // _00
	u8 _01;                             // _01
	u8 _02[2];                          // _02 - padding?
	Vec _04;                            // _04
	J2DTextureSRTInfo m_textureSRTInfo; // _10
};

/**
 * @size{0x54}
 */
struct J2DTexMtx {
	inline ~J2DTexMtx() { } // unused/inlined

	void load(u32);
	void calc();
	void getTextureMtx(const J2DTextureSRTInfo&, Vec, float (*)[4]);
	void getTextureMtxMaya(const J2DTextureSRTInfo&, float (*)[4]);

	J2DTexMtxInfo m_info;
	Mtx m_mtx;
};

#endif

#ifndef _JSYSTEM_J2D_J2DTEXMTX_H
#define _JSYSTEM_J2D_J2DTEXMTX_H

#include "Dolphin/mtx.h"
#include "Dolphin/vec.h"
#include "JSystem/J2D/J2DTypes.h"
#include "types.h"

struct J2DTexMtxInfo {
	enum DCCType { // from TP
		DCC_None = 0,
		DCC_Maya = 1,
	};

	GXTexMtxType getTexMtxType() const { return (GXTexMtxType)m_texMtxType; }

	u8 m_texMtxType;                    // _00
	u8 m_texMtxDCC;                     // _01
	Vec m_center;                       // _04
	J2DTextureSRTInfo m_textureSRTInfo; // _10
};

/**
 * @size{0x54}
 */
struct J2DTexMtx {
	/* @fabricated */
	inline J2DTexMtx(J2DTexMtxInfo* info)
	    : m_info(*info)
	{
	}

	inline ~J2DTexMtx() { } // unused/inlined

	void load(u32);
	void calc();
	void getTextureMtx(const J2DTextureSRTInfo&, Vec, Mtx);
	void getTextureMtxMaya(const J2DTextureSRTInfo&, Mtx);

	J2DTexMtxInfo m_info; // _00
	Mtx m_mtx;            // _24
};

#endif

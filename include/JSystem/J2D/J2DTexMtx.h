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

	GXTexMtxType getTexMtxType() const { return (GXTexMtxType)mTexMtxType; }

	u8 mTexMtxType;                    // _00
	u8 mTexMtxDCC;                     // _01
	Vec mCenter;                       // _04
	J2DTextureSRTInfo mTextureSRTInfo; // _10
};

extern J2DTexMtxInfo const j2dDefaultTexMtxInfo;

/**
 * @size{0x54}
 */
struct J2DTexMtx {
	J2DTexMtx() { mInfo = j2dDefaultTexMtxInfo; }
	J2DTexMtx(const J2DTexMtxInfo& info) { mInfo = info; }

	inline ~J2DTexMtx() { } // unused/inlined

	void load(u32);
	void calc();
	void getTextureMtx(const J2DTextureSRTInfo&, Vec, Mtx);
	void getTextureMtxMaya(const J2DTextureSRTInfo&, Mtx);

	J2DTexMtxInfo& getTexMtxInfo() { return mInfo; }
	void setTexMtxInfo(J2DTexMtxInfo info) { mInfo = info; }

	J2DTexMtxInfo mInfo; // _00
	Mtx mMtx;            // _24
};

#endif

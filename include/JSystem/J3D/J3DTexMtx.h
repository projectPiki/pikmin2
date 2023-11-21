#ifndef _JSYSTEM_J3D_J3DTEXMTX_H
#define _JSYSTEM_J3D_J3DTEXMTX_H

#include "Dolphin/mtx.h"
#include "Dolphin/vec.h"
#include "JSystem/J3D/J3DPacket.h"
#include "JSystem/J3D/J3DTexGenBlock.h"
#include "JSystem/J3D/J3DTypes.h"
#include "types.h"

struct J3DTexMtxInfo {

	// I think these exist in TP but not here
	// void operator=(J3DTexMtxInfo const&);
	// void setEffectMtx(Mtx);

	u8 mProjection;         // _00
	u8 mInfo;               // _01
	Vec mCenter;            // _04
	J3DTextureSRTInfo mSRT; // _10
	Mtx44 mEffectMtx;       // _24
};                          // Size: 0x64

struct J3DTexMtx {
	void calc(const f32 (*)[4]);
	void calcTexMtx(const f32 (*)[4]);
	void calcPostTexMtx(const f32 (*)[4]);

	void load(u32) const;
	void loadTexMtx(u32) const;
	void loadPostTexMtx(u32) const;

	J3DTexMtxInfo& getTexMtxInfo() { return mTexMtxInfo; }
	Mtx& getMtx() { return mMtx; }
	// void setEffectMtx(Mtx effectMtx) { mTexMtxInfo.setEffectMtx(effectMtx); }

	J3DTexMtxInfo mTexMtxInfo; // _00
	Mtx mMtx;                  // _64
};

namespace J3DDifferedTexMtx {
void loadExecute(const f32 (*)[4]);
extern J3DTexGenBlock* sTexGenBlock;
extern J3DTexMtxObj* sTexMtxObj;
} // namespace J3DDifferedTexMtx

#endif

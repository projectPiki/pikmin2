#ifndef _JSYSTEM_J3D_J3DTEXMTX_H
#define _JSYSTEM_J3D_J3DTEXMTX_H

#include "Dolphin/mtx.h"
#include "Dolphin/vec.h"
#include "JSystem/J3D/J3DPacket.h"
#include "JSystem/J3D/J3DTexGenBlock.h"
#include "JSystem/J3D/J3DTypes.h"
#include "types.h"

struct J3DTexMtxInfo {

	void operator=(J3DTexMtxInfo const& other)
	{
		mEffectMtx[0][0] = other.mEffectMtx[0][0];
		mEffectMtx[0][1] = other.mEffectMtx[0][1];
		mEffectMtx[0][2] = other.mEffectMtx[0][2];
		mEffectMtx[0][3] = other.mEffectMtx[0][3];

		mEffectMtx[1][0] = other.mEffectMtx[1][0];
		mEffectMtx[1][1] = other.mEffectMtx[1][1];
		mEffectMtx[1][2] = other.mEffectMtx[1][2];
		mEffectMtx[1][3] = other.mEffectMtx[1][3];

		mEffectMtx[2][0] = other.mEffectMtx[2][0];
		mEffectMtx[2][1] = other.mEffectMtx[2][1];
		mEffectMtx[2][2] = other.mEffectMtx[2][2];
		mEffectMtx[2][3] = other.mEffectMtx[2][3];

		mEffectMtx[3][0] = other.mEffectMtx[3][0];
		mEffectMtx[3][1] = other.mEffectMtx[3][1];
		mEffectMtx[3][2] = other.mEffectMtx[3][2];
		mEffectMtx[3][3] = other.mEffectMtx[3][3];

		mCenter     = other.mCenter;
		mProjection = other.mProjection;
		mInfo       = other.mInfo;
		mSRT        = other.mSRT;
	}

	// void setEffectMtx(Mtx);

	u8 mProjection;         // _00
	u8 mInfo;               // _01
	Vec mCenter;            // _04
	J3DTextureSRTInfo mSRT; // _10
	Mtx44 mEffectMtx;       // _24
};                          // Size: 0x64
extern const J3DTexMtxInfo j3dDefaultTexMtxInfo;

struct J3DTexMtx {
	J3DTexMtx() { mTexMtxInfo = j3dDefaultTexMtxInfo; }

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

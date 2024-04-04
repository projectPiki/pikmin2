#ifndef _JSYSTEM_J3D_J3DTEXMTX_H
#define _JSYSTEM_J3D_J3DTEXMTX_H

#include "Dolphin/mtx.h"
#include "Dolphin/vec.h"
#include "JSystem/J3D/J3DPacket.h"
#include "JSystem/J3D/J3DTexGenBlock.h"
#include "JSystem/J3D/J3DTypes.h"
#include "types.h"

enum J3DTEXMTX {
	J3DTEXMTX_None,               // 0
	J3DTEXMTX_EnvmapBasic,        // 1
	J3DTEXMTX_ProjmapBasic,       // 2
	J3DTEXMTX_ViewProjmapBasic,   // 3
	J3DTEXMTX_Unknown4,           // 4
	J3DTEXMTX_Unknown5,           // 5
	J3DTEXMTX_EnvmapOld,          // 6
	J3DTEXMTX_Envmap,             // 7
	J3DTEXMTX_Projmap,            // 8
	J3DTEXMTX_ViewProjmap,        // 9
	J3DTEXMTX_EnvmapOldEffectMtx, // 10
	J3DTEXMTX_EnvmapEffectMtx,    // 11
};

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
	u16 _02;                // _02
	Vec mCenter;            // _04
	J3DTextureSRTInfo mSRT; // _10
	Mtx44 mEffectMtx;       // _24
};                          // Size: 0x64
extern const J3DTexMtxInfo j3dDefaultTexMtxInfo;

struct J3DTexMtx {
	J3DTexMtx() { mTexMtxInfo = j3dDefaultTexMtxInfo; }

	J3DTexMtx(const J3DTexMtxInfo& info) { mTexMtxInfo = info; }

	void calc(const Mtx);
	void calcTexMtx(const Mtx);
	void calcPostTexMtx(const Mtx);

	void load(u32) const;
	void loadTexMtx(u32 p1) const
	{
		__GDCheckOverflowed(0x35);
		J3DGDLoadTexMtxImm(const_cast<f32(*)[4]>(mMtx), p1 * 3 + 30, (_GXTexMtxType)mTexMtxInfo.mProjection);
	}
	void loadPostTexMtx(u32 p1) const
	{
		__GDCheckOverflowed(0x35);
		J3DGDLoadPostTexMtxImm(const_cast<f32(*)[4]>(mMtx), p1 * 3 + 0x40);
	}

	J3DTexMtxInfo& getTexMtxInfo() { return mTexMtxInfo; }
	Mtx& getMtx() { return mMtx; }
	void setMtx(const Mtx mtx) { PSMTXCopy(mtx, mMtx); }
	// void setEffectMtx(Mtx effectMtx) { mTexMtxInfo.setEffectMtx(effectMtx); }

	J3DTexMtxInfo mTexMtxInfo; // _00
	Mtx mMtx;                  // _64
};

namespace J3DDifferedTexMtx {
void loadExecute(const Mtx);
extern J3DTexGenBlock* sTexGenBlock;
extern J3DTexMtxObj* sTexMtxObj;

inline void load(Mtx m)
{
	if (sTexGenBlock != nullptr) {
		loadExecute(m);
	}
}
} // namespace J3DDifferedTexMtx

#endif

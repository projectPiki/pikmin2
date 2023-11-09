#ifndef _JSYSTEM_J3D_J3DTEXMTX_H
#define _JSYSTEM_J3D_J3DTEXMTX_H

#include "Dolphin/mtx.h"
#include "Dolphin/vec.h"
#include "JSystem/J3D/J3DPacket.h"
#include "JSystem/J3D/J3DTexGenBlock.h"
#include "JSystem/J3D/J3DTypes.h"
#include "types.h"

struct J3DTexMtx {
	void calc(const f32 (*)[4]);
	void calcTexMtx(const f32 (*)[4]);
	void calcPostTexMtx(const f32 (*)[4]);

	void load(u32) const;
	void loadTexMtx(u32) const;
	void loadPostTexMtx(u32) const;

	u8 _00;                     // _00
	s8 mFlags;                  // _01
	u8 _02;                     // _02
	u8 _03;                     // _03
	Vec _04;                    // _04
	J3DTextureSRTInfo mSrtInfo; // _10
	Mtx44 _24;                  // _24
	Mtx _64;                    // _64
};

namespace J3DDifferedTexMtx {
void loadExecute(const f32 (*)[4]);
extern J3DTexGenBlock* sTexGenBlock;
extern J3DTexMtxObj* sTexMtxObj;
} // namespace J3DDifferedTexMtx

#endif

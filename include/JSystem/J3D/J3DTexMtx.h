#ifndef _JSYSTEM_J3D_J3DTEXMTX_H
#define _JSYSTEM_J3D_J3DTEXMTX_H

#include "Dolphin/mtx.h"
#include "JSystem/J3D/J3DPacket.h"
#include "JSystem/J3D/J3DTexGenBlock.h"
#include "JSystem/J3D/J3DTypes.h"
#include "types.h"

struct J3DTexMtx {
	void calc(const float (*)[4]);
	void calcTexMtx(const float (*)[4]);
	void calcPostTexMtx(const float (*)[4]);

	void load(unsigned long) const;
	void loadTexMtx(unsigned long) const;
	void loadPostTexMtx(unsigned long) const;

	u8 _00;                      // _00
	s8 m_flags;                  // _01
	u8 _02;                      // _02
	u8 _03;                      // _03
	u32 _04;                     // _04
	u32 _08;                     // _08
	u32 _0C;                     // _0C
	J3DTextureSRTInfo m_srtInfo; // _10
	Mtx44 _24;                   // _24
	Mtx _64;                     // _64
};

namespace J3DDifferedTexMtx {
void loadExecute(const float (*)[4]);
extern J3DTexGenBlock* sTexGenBlock;
extern J3DShapePacket_0x24* sTexMtxObj;
} // namespace J3DDifferedTexMtx

#endif

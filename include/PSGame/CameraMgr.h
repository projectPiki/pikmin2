#ifndef _PSGAME_CAMERAMGR_H
#define _PSGAME_CAMERAMGR_H

#include "types.h"
#include "JSystem/JKR/JKRDisposer.h"

namespace PSGame {

struct CameraMgr : public JKRDisposer {
	CameraMgr();

	virtual ~CameraMgr(); // _08

	void getBgmCamVol(u8);
	void update(u8, f32);
	void getCurrentCamDistVol(u8);
	void getVol_DistBetweenCamAndLookat(f32);

	// _00      = VTBL
	// _00-_18  = JKRDisposer
	f32 _18;     // _18
	f32 _1C;     // _1C
	f32 _20;     // _20
	f32 _24;     // _24
	f32 _28;     // _28
	f32 _2C;     // _2C
	f32 _30;     // _30
	f32 _34;     // _34
	f32 _38;     // _38, bgmCamVolume maybe?
	f32 _3C[1];  // _3C, unknown size?
	f32 _40;     // _40
	f32 _44;     // _44
	f32 _48;     // _48
	u8 _4C;      // _4C
	u8 _4D;      // _4D
	u8 _4E[0x2]; // _4E, unknown/padding maybe
};

} // namespace PSGame

#endif

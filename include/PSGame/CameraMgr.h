#ifndef _PSGAME_CAMERAMGR_H
#define _PSGAME_CAMERAMGR_H

#include "types.h"
#include "JSystem/JKR/JKRDisposer.h"

namespace PSGame {

struct CameraMgr : public JKRDisposer {
	CameraMgr();

	virtual ~CameraMgr(); // _08

	void getBgmCamVol(u8);
	void update(u8, float);
	void getCurrentCamDistVol(u8);
	void getVol_DistBetweenCamAndLookat(float);

	// _00      = VTBL
	// _00-_18  = JKRDisposer
	float _18;    // _18
	float _1C;    // _1C
	float _20;    // _20
	float _24;    // _24
	float _28;    // _28
	float _2C;    // _2C
	float _30;    // _30
	float _34;    // _34
	float _38;    // _38, bgmCamVolume maybe?
	float _3C[1]; // _3C, unknown size?
	float _40;    // _40
	float _44;    // _44
	float _48;    // _48
	u8 _4C;       // _4C
	u8 _4D;       // _4D
	u8 _4E[0x2];  // _4E, unknown/padding maybe
};

} // namespace PSGame

#endif

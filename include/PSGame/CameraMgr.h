#ifndef _PSGAME_CAMERAMGR_H
#define _PSGAME_CAMERAMGR_H

#include "types.h"
#include "JSystem/JKernel/JKRDisposer.h"

namespace PSGame {

struct CameraMgr : public JKRDisposer {
	CameraMgr();

	virtual ~CameraMgr(); // _08

	f32 getBgmCamVol(u8);
	void update(u8, f32);
	f32 getCurrentCamDistVol(u8);
	f32 getVol_DistBetweenCamAndLookat(f32);

	// _00      = VTBL
	// _00-_18  = JKRDisposer
	f32 mDistanceNear;        // _18
	f32 mDistanceMiddle;      // _1C
	f32 mDistanceFar;         // _20
	f32 mDistanceFarthest;    // _24
	f32 _28;                  // _28
	f32 _2C;                  // _2C
	f32 _30;                  // _30
	f32 _34;                  // _34
	f32 mZoomCamVolumeMod;    // _38
	f32 mCamDistVolume[2];    // _3C
	f32 mDistVolumeFactor[2]; // _44
	bool mIsSpecial[2];       // _4C
};

} // namespace PSGame

#endif

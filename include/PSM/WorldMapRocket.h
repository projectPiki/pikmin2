#ifndef _PSM_WORLDMAPROCKET_H
#define _PSM_WORLDMAPROCKET_H

#include "types.h"
#include "JSystem/JAudio/JAD/JADHioNode.h"

namespace PSM {

/**
 * @size{0x20}
 */
struct WorldMapRocket : public JADHioNode {
	/**
	 * @size{0x4}
	 */
	enum rocketState {
		PSMRocket_Inactive, // 0
		PSMRocket_Appear,   // 1
		PSMRocket_2,        // 2
		PSMRocket_3,        // 3
		PSMRocket_4,        // 4
		PSMRocket_Idle,     // 5
		PSMRocket_6,        // 6, in menu?
		PSMRocket_7,        // 7
	};

	WorldMapRocket();

	virtual ~WorldMapRocket(); // _08

	JAISe* startRocketSE(f32, f32);
	void stateChange(rocketState);

	// _00 VTBL
	rocketState mState; // _04
	f32 mStartPosX;     // _08
	f32 mEndPosX;       // _0C
	f32 _10;            // _10
	f32 mStartPosY;     // _14
	f32 mEndPosY;       // _18
	f32 _1C;            // _1C
};

} // namespace PSM

#endif

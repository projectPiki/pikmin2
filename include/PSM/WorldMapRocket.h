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
	enum rocketState { PSMRocket_0, PSMRocket_1, PSMRocket_2, PSMRocket_3, PSMRocket_4, PSMRocket_5, PSMRocket_6, PSMRocket_7 };

	WorldMapRocket();

	virtual ~WorldMapRocket(); // _08

	JAISe* startRocketSE(f32, f32);
	void stateChange(rocketState);

	// _00 VTBL
	rocketState mState; // _04
	f32 _08;            // _08
	f32 _0C;            // _0C
	f32 _10;            // _10
	f32 _14;            // _14
	f32 _18;            // _18
	f32 _1C;            // _1C
};

} // namespace PSM

#endif

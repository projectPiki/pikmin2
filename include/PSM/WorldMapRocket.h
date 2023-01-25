#ifndef _PSM_WORLDMAPROCKET_H
#define _PSM_WORLDMAPROCKET_H

#include "types.h"
#include "JSystem/JAD/JADHioNode.h"

namespace PSM {

/**
 * @size{0x20}
 */
struct WorldMapRocket : public JADHioNode {
	/**
	 * @size{0x4}
	 */
	struct rocketState {
		u32 mState; // _00, I guess
	};

	WorldMapRocket();

	virtual ~WorldMapRocket(); // _08

	void startRocketSE(f32, f32);
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

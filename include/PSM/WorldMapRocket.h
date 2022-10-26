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
		u32 m_state; // _00, I guess
	};

	WorldMapRocket();

	virtual ~WorldMapRocket(); // _08

	void startRocketSE(float, float);
	void stateChange(rocketState);

	// _00 VTBL
	rocketState m_state; // _04
	float _08;           // _08
	float _0C;           // _0C
	float _10;           // _10
	float _14;           // _14
	float _18;           // _18
	float _1C;           // _1C
};

} // namespace PSM

#endif

#ifndef _PSM_WORLDMAPROCKET_H
#define _PSM_WORLDMAPROCKET_H

/*
    __vt__Q23PSM14WorldMapRocket:
    .4byte 0
    .4byte 0
    .4byte __dt__Q23PSM14WorldMapRocketFv
*/

namespace PSM {
struct WorldMapRocket {
	virtual ~WorldMapRocket(); // _08

	WorldMapRocket();
	void startRocketSE(float, float);
	void stateChange(PSM::WorldMapRocket::rocketState);
};
} // namespace PSM

#endif

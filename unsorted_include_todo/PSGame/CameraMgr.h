#ifndef _PSGAME_CAMERAMGR_H
#define _PSGAME_CAMERAMGR_H

/*
    __vt__Q26PSGame9CameraMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q26PSGame9CameraMgrFv
*/

namespace PSGame {
struct CameraMgr {
	virtual ~CameraMgr(); // _08

	CameraMgr();
	void getBgmCamVol(unsigned char);
	void update(unsigned char, float);
	void getCurrentCamDistVol(unsigned char);
	void getVol_DistBetweenCamAndLookat(float);
};
} // namespace PSGame

#endif

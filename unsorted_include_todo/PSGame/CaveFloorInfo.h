#ifndef _PSGAME_CAVEFLOORINFO_H
#define _PSGAME_CAVEFLOORINFO_H

/*
    __vt__Q26PSGame13CaveFloorInfo:
    .4byte 0
    .4byte 0
    .4byte isCaveFloor__Q26PSGame13CaveFloorInfoFv
    .4byte isBossFloor__Q26PSGame13CaveFloorInfoFv
    .4byte isRelaxFloor__Q26PSGame13CaveFloorInfoFv
*/

namespace PSGame {
struct CaveFloorInfo {
	virtual void isCaveFloor();  // _00
	virtual void isBossFloor();  // _04
	virtual void isRelaxFloor(); // _08

	// _00 VTBL
};
} // namespace PSGame

#endif

#ifndef _PSGAME_CAVEFLOORINFO_H
#define _PSGAME_CAVEFLOORINFO_H

namespace PSGame {
struct CaveFloorInfo {
	virtual void isCaveFloor();  // _00
	virtual void isBossFloor();  // _04
	virtual void isRelaxFloor(); // _08

	// _00 VTBL
};
} // namespace PSGame

#endif

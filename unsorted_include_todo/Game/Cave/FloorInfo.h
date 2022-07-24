#ifndef _GAME_CAVE_FLOORINFO_H
#define _GAME_CAVE_FLOORINFO_H

/*
    __vt__Q34Game4Cave9FloorInfo:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game4Cave9FloorInfoFv
    .4byte getChildCount__5CNodeFv
    .4byte read__Q34Game4Cave9FloorInfoFR6Stream
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace Game {
namespace Cave {
struct FloorInfo : public CNode {
	virtual ~FloorInfo();       // _08
	virtual void read(Stream&); // _10

	// _00 VTBL
};
} // namespace Cave
} // namespace Game

#endif

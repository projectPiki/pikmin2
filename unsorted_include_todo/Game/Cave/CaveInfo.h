#ifndef _GAME_CAVE_CAVEINFO_H
#define _GAME_CAVE_CAVEINFO_H

/*
    __vt__Q34Game4Cave8CaveInfo:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game4Cave8CaveInfoFv
    .4byte getChildCount__5CNodeFv
    .4byte read__Q34Game4Cave8CaveInfoFR6Stream
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace Game {
namespace Cave {
struct CaveInfo : public CNode {
	virtual ~CaveInfo();        // _08
	virtual void read(Stream&); // _10

	// _00 VTBL
};
} // namespace Cave
} // namespace Game

#endif

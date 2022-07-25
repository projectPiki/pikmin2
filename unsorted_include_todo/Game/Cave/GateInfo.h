#ifndef _GAME_CAVE_GATEINFO_H
#define _GAME_CAVE_GATEINFO_H

/*
    __vt__Q34Game4Cave8GateInfo:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game4Cave8GateInfoFv
    .4byte getChildCount__5CNodeFv
    .4byte read__Q34Game4Cave8GateInfoFR6Stream
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace Game {
namespace Cave {
struct GateInfo : public CNode {
	virtual ~GateInfo();        // _08 (weak)
	virtual void read(Stream&); // _10
};
} // namespace Cave
} // namespace Game

#endif

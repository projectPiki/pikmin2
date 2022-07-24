#ifndef _GAME_CAVE_ADJUSTNODE_H
#define _GAME_CAVE_ADJUSTNODE_H

/*
    __vt__Q34Game4Cave10AdjustNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game4Cave10AdjustNodeFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace Game {
namespace Cave {
struct AdjustNode : public CNode {
	virtual ~AdjustNode(); // _08

	// _00 VTBL
};
} // namespace Cave
} // namespace Game

#endif

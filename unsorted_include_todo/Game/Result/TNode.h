#ifndef _GAME_RESULT_TNODE_H
#define _GAME_RESULT_TNODE_H

/*
    __vt__Q34Game6Result5TNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game6Result5TNodeFv
    .4byte getChildCount__Q24Game5DNodeFv
*/

namespace Game {
struct DNode {
	virtual ~DNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};
} // namespace Game

namespace Game {
namespace Result {
struct TNode : public DNode {
	virtual ~TNode(); // _08

	// _00 VTBL
};
} // namespace Result
} // namespace Game

#endif

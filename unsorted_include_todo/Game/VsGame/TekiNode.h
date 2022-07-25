#ifndef _GAME_VSGAME_TEKINODE_H
#define _GAME_VSGAME_TEKINODE_H

/*
    __vt__Q34Game6VsGame8TekiNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game6VsGame8TekiNodeFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace Game {
namespace VsGame {
struct TekiNode : public CNode {
	virtual Vs ~TekiNode(); // _08 (weak)
};
} // namespace VsGame
} // namespace Game

#endif

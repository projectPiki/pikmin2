#ifndef _GAME_SNAKEWHOLETUBESHADOWNODE_H
#define _GAME_SNAKEWHOLETUBESHADOWNODE_H

/*
    __vt__Q24Game24SnakeWholeTubeShadowNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game24SnakeWholeTubeShadowNodeFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace Game {
struct SnakeWholeTubeShadowNode : public CNode {
	virtual ~SnakeWholeTubeShadowNode(); // _08

	// _00 VTBL
};
} // namespace Game

#endif

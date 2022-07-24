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
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Game {
struct SnakeWholeTubeShadowNode : public CNode {
	virtual ~SnakeWholeTubeShadowNode(); // _08 (inline)

	void makeShadowSRT(Game::JointShadowParm&, Vector3<float>&, Vector3<float>&);
};
} // namespace Game

#endif

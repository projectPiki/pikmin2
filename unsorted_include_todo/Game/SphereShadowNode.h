#ifndef _GAME_SPHERESHADOWNODE_H
#define _GAME_SPHERESHADOWNODE_H

/*
    __vt__Q24Game16SphereShadowNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game16SphereShadowNodeFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Game {
struct SphereShadowNode : public CNode {
	virtual ~SphereShadowNode(); // _08 (inline)

	void makeShadowSRT(Game::JointShadowParm&, Vector3<float>&);
};
} // namespace Game

#endif

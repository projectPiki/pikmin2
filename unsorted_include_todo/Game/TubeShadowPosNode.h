#ifndef _GAME_TUBESHADOWPOSNODE_H
#define _GAME_TUBESHADOWPOSNODE_H

/*
    __vt__Q24Game17TubeShadowPosNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game17TubeShadowPosNodeFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace Game {
struct TubeShadowPosNode : public CNode {
	virtual ~TubeShadowPosNode(); // _08 (weak)

	void makeShadowSRT(Game::JointShadowParm&, Vector3<float>&, Vector3<float>&);
};
} // namespace Game

#endif

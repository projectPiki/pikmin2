#ifndef _GAME_TUBESHADOWSETNODE_H
#define _GAME_TUBESHADOWSETNODE_H

/*
    __vt__Q24Game17TubeShadowSetNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game17TubeShadowSetNodeFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Game {
struct TubeShadowSetNode : public CNode {
	virtual ~TubeShadowSetNode(); // _08 (inline)

	void makeShadowSRT(Game::JointShadowParm&, Vector3<float>&, Vector3<float>&);
};
} // namespace Game

#endif

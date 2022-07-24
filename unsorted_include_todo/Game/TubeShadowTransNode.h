#ifndef _GAME_TUBESHADOWTRANSNODE_H
#define _GAME_TUBESHADOWTRANSNODE_H

/*
    __vt__Q24Game19TubeShadowTransNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game19TubeShadowTransNodeFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Game {
struct TubeShadowTransNode : public CNode {
	virtual ~TubeShadowTransNode(); // _08 (inline)

	void makeShadowSRT(Game::JointShadowParm&, Vector3<float>&, Vector3<float>&);
};
} // namespace Game

#endif

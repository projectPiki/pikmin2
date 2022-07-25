#ifndef _GAME_UMIMUSHITUBESHADOWNODE_H
#define _GAME_UMIMUSHITUBESHADOWNODE_H

/*
    __vt__Q24Game22UmimushiTubeShadowNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game22UmimushiTubeShadowNodeFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace Game {
struct UmimushiTubeShadowNode : public CNode {
	virtual ~UmimushiTubeShadowNode(); // _08 (weak)

	void makeShadowSRT(Game::JointShadowParm&, Matrixf*, Vector3<float>&, Vector3<float>&);
};
} // namespace Game

#endif

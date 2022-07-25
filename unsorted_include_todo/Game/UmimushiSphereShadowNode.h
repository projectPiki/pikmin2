#ifndef _GAME_UMIMUSHISPHERESHADOWNODE_H
#define _GAME_UMIMUSHISPHERESHADOWNODE_H

/*
    __vt__Q24Game24UmimushiSphereShadowNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game24UmimushiSphereShadowNodeFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace Game {
struct UmimushiSphereShadowNode : public CNode {
	virtual ~UmimushiSphereShadowNode(); // _08 (weak)

	void makeShadowSRT(Game::JointShadowParm&, Matrixf*, Vector3<float>&, bool);
};
} // namespace Game

#endif

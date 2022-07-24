#ifndef _GAME_SNAKECROWSPHERESHADOWNODE_H
#define _GAME_SNAKECROWSPHERESHADOWNODE_H

/*
    __vt__Q24Game25SnakeCrowSphereShadowNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game25SnakeCrowSphereShadowNodeFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Game {
struct SnakeCrowSphereShadowNode : public CNode {
	virtual ~SnakeCrowSphereShadowNode(); // _08 (inline)

	void makeShadowSRT(Game::JointShadowParm&, Vector3<float>&);
};
} // namespace Game

#endif

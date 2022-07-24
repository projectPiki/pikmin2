#ifndef _GAME_TYRETUBESHADOWNODE_H
#define _GAME_TYRETUBESHADOWNODE_H

/*
    __vt__Q24Game18TyreTubeShadowNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game18TyreTubeShadowNodeFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Game {
struct TyreTubeShadowNode : public CNode {
	virtual ~TyreTubeShadowNode(); // _08 (inline)

	void makeShadowSRT(Game::JointShadowParm&, Matrixf*);
};
} // namespace Game

#endif

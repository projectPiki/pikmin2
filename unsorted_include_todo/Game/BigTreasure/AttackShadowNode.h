#ifndef _GAME_BIGTREASURE_ATTACKSHADOWNODE_H
#define _GAME_BIGTREASURE_ATTACKSHADOWNODE_H

/*
    __vt__Q34Game11BigTreasure16AttackShadowNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game11BigTreasure16AttackShadowNodeFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace Game {
namespace BigTreasure {
struct AttackShadowNode : public CNode {
	virtual ~AttackShadowNode(); // _08 (weak)

	void makeShadowSRT();
};
} // namespace BigTreasure
} // namespace Game

#endif

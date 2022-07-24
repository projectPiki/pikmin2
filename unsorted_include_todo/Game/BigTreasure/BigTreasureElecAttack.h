#ifndef _GAME_BIGTREASURE_BIGTREASUREELECATTACK_H
#define _GAME_BIGTREASURE_BIGTREASUREELECATTACK_H

/*
    __vt__Q34Game11BigTreasure21BigTreasureElecAttack:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game11BigTreasure21BigTreasureElecAttackFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Game {
namespace BigTreasure {
struct BigTreasureElecAttack : public CNode {
	virtual ~BigTreasureElecAttack(); // _08 (inline)

	void update();
};
} // namespace BigTreasure
} // namespace Game

#endif

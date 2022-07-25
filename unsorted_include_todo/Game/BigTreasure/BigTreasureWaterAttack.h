#ifndef _GAME_BIGTREASURE_BIGTREASUREWATERATTACK_H
#define _GAME_BIGTREASURE_BIGTREASUREWATERATTACK_H

/*
    __vt__Q34Game11BigTreasure22BigTreasureWaterAttack:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game11BigTreasure22BigTreasureWaterAttackFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace Game {
namespace BigTreasure {
struct BigTreasureWaterAttack : public CNode {
	virtual ~BigTreasureWaterAttack(); // _08 (weak)

	void update();
};
} // namespace BigTreasure
} // namespace Game

#endif

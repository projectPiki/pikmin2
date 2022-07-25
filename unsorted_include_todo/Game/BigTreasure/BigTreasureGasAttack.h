#ifndef _GAME_BIGTREASURE_BIGTREASUREGASATTACK_H
#define _GAME_BIGTREASURE_BIGTREASUREGASATTACK_H

/*
    __vt__Q34Game11BigTreasure20BigTreasureGasAttack:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game11BigTreasure20BigTreasureGasAttackFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace Game {
namespace BigTreasure {
struct BigTreasureGasAttack : public CNode {
	virtual ~BigTreasureGasAttack(); // _08 (weak)

	void update();
};
} // namespace BigTreasure
} // namespace Game

#endif

#ifndef _GAME_BIGTREASURE_BIGTREASUREFIREATTACK_H
#define _GAME_BIGTREASURE_BIGTREASUREFIREATTACK_H

/*
    __vt__Q34Game11BigTreasure21BigTreasureFireAttack:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game11BigTreasure21BigTreasureFireAttackFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace Game {
namespace BigTreasure {
struct BigTreasureFireAttack : public CNode {
	virtual ~BigTreasureFireAttack(); // _08 (weak)

	void update();
};
} // namespace BigTreasure
} // namespace Game

#endif

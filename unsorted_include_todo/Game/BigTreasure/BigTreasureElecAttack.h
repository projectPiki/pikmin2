#ifndef _GAME_BIGTREASURE_BIGTREASUREELECATTACK_H
#define _GAME_BIGTREASURE_BIGTREASUREELECATTACK_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
namespace BigTreasure {
	struct BigTreasureElecAttack : public CNode {
		virtual ~BigTreasureElecAttack(); // _00
		virtual void getChildCount();     // _04

		// _00 VTBL
	};
} // namespace BigTreasure
} // namespace Game

#endif

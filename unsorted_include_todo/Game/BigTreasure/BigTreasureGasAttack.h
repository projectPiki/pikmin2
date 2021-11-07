#ifndef _GAME_BIGTREASURE_BIGTREASUREGASATTACK_H
#define _GAME_BIGTREASURE_BIGTREASUREGASATTACK_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
namespace BigTreasure {
	struct BigTreasureGasAttack : public CNode {
		virtual ~BigTreasureGasAttack(); // _00
		virtual void getChildCount();    // _04

		// _00 VTBL
	};
} // namespace BigTreasure
} // namespace Game

#endif

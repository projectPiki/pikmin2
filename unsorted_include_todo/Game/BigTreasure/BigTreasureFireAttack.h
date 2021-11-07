#ifndef _GAME_BIGTREASURE_BIGTREASUREFIREATTACK_H
#define _GAME_BIGTREASURE_BIGTREASUREFIREATTACK_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
namespace BigTreasure {
	struct BigTreasureFireAttack : public CNode {
		virtual ~BigTreasureFireAttack(); // _00
		virtual void getChildCount();     // _04

		// _00 VTBL
	};
} // namespace BigTreasure
} // namespace Game

#endif

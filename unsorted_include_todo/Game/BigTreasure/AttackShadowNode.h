#ifndef _GAME_BIGTREASURE_ATTACKSHADOWNODE_H
#define _GAME_BIGTREASURE_ATTACKSHADOWNODE_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
namespace BigTreasure {
	struct AttackShadowNode : public CNode {
		virtual ~AttackShadowNode();  // _00
		virtual void getChildCount(); // _04
		virtual void _08() = 0;       // _08

		// _00 VTBL
	};
} // namespace BigTreasure
} // namespace Game

#endif

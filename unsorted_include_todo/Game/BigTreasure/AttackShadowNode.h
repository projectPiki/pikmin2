#ifndef _GAME_BIGTREASURE_ATTACKSHADOWNODE_H
#define _GAME_BIGTREASURE_ATTACKSHADOWNODE_H

/*
    __vt__Q34Game11BigTreasure16AttackShadowNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game11BigTreasure16AttackShadowNodeFv
    .4byte getChildCount__5CNodeFv
    .4byte 0
*/

struct CNode {
	virtual ~CNode();             // _00
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

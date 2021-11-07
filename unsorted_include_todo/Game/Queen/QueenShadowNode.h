#ifndef _GAME_QUEEN_QUEENSHADOWNODE_H
#define _GAME_QUEEN_QUEENSHADOWNODE_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
namespace Queen {
	struct QueenShadowNode : public CNode {
		virtual ~QueenShadowNode();   // _00
		virtual void getChildCount(); // _04

		// _00 VTBL
	};
} // namespace Queen
} // namespace Game

#endif

#ifndef _GAME_VSGAME_TEKINODE_H
#define _GAME_VSGAME_TEKINODE_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
namespace VsGame {
	struct TekiNode : public CNode {
		virtual Vs ~TekiNode();       // _00
		virtual void getChildCount(); // _04

		// _00 VTBL
	};
} // namespace VsGame
} // namespace Game

#endif

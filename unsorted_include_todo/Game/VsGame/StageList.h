#ifndef _GAME_VSGAME_STAGELIST_H
#define _GAME_VSGAME_STAGELIST_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
namespace VsGame {
	struct StageList : public CNode {
		virtual Vs ~StageList();      // _00
		virtual void getChildCount(); // _04

		// _00 VTBL
	};
} // namespace VsGame
} // namespace Game

#endif

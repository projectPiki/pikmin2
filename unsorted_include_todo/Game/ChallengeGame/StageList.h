#ifndef _GAME_CHALLENGEGAME_STAGELIST_H
#define _GAME_CHALLENGEGAME_STAGELIST_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
namespace ChallengeGame {
	struct StageList : public CNode {
		virtual Challenge ~StageList(); // _00
		virtual void getChildCount();   // _04

		// _00 VTBL
	};
} // namespace ChallengeGame
} // namespace Game

#endif

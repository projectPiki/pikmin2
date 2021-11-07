#ifndef _GAME_CHALLENGEGAME_STAGEDATA_H
#define _GAME_CHALLENGEGAME_STAGEDATA_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
namespace ChallengeGame {
	struct StageData : public CNode {
		virtual Challenge ~StageData(); // _00
		virtual void getChildCount();   // _04
		virtual void _08() = 0;         // _08

		// _00 VTBL
	};
} // namespace ChallengeGame
} // namespace Game

#endif

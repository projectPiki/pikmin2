#ifndef _GAME_CHALLENGEGAME_STAGEDATA_H
#define _GAME_CHALLENGEGAME_STAGEDATA_H

/*
    __vt__Q34Game13ChallengeGame9StageData:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game13ChallengeGame9StageDataFv
    .4byte getChildCount__5CNodeFv
    .4byte 0
*/

struct CNode {
	virtual ~CNode();             // _00
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

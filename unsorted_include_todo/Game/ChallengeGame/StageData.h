#ifndef _GAME_CHALLENGEGAME_STAGEDATA_H
#define _GAME_CHALLENGEGAME_STAGEDATA_H

/*
    __vt__Q34Game13ChallengeGame9StageData:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game13ChallengeGame9StageDataFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace Game {
namespace ChallengeGame {
struct StageData : public CNode {
	virtual Challenge ~StageData(); // _08

	// _00 VTBL
};
} // namespace ChallengeGame
} // namespace Game

#endif

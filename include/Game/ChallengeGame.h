#ifndef _GAME_CHALLENGEGAME_H
#define _GAME_CHALLENGEGAME_H

#include "Game/PikiContainer.h"
#include "CNode.h"
#include "Stream.h"

namespace Game {
namespace ChallengeGame {
struct StageData : public CNode {

	StageData();

	virtual ~StageData() { } // _08 (weak)

	void read(Stream&);
	void write(Stream&);

	// _00     = VTBL
	// _00-_18 = CNode
	PikiContainer mPikiContainer; // _18
	char mCaveInfoFilename[64];   // _20, default = "caveinfo.txt"
	f32 mTimeLimit;               // _60
	int mStartNumBitter;          // _64
	int mStartNumSpicy;           // _68
	int mFloorCounts;             // _6C
	s32 mOtakaraNum;              // _70, unused
	int mStageIndex;              // _74
	f32* mFloorTimerExtensions;   // _78
};

struct StageList : public CNode {
	StageList();

	virtual ~StageList() { } // _08 (weak)

	void read(Stream&);
	void write(Stream&);
	StageData* getStageData(int);

	// _00     = VTBL
	// _00-_18 = CNode
	StageData mStageData; // _18
};
} // namespace ChallengeGame
} // namespace Game

#endif

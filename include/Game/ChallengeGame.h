#ifndef _GAME_CHALLENGEGAME_H
#define _GAME_CHALLENGEGAME_H

#include "Game/PikiContainer.h"
#include "CNode.h"
#include "Stream.h"

namespace Game {
namespace ChallengeGame {
struct StageData : public CNode {

	inline StageData();

	virtual ~StageData(); // _08 (weak)

	void read(Stream&);
	void write(Stream&);

	// _00     = VTBL
	// _00-_18 = CNode
	PikiContainer m_pikiContainer; // _18
	char m_caveInfoFilename[64];   // _20, default = "caveinfo.txt"
	f32 m_timeLimit;               // _60
	int m_startNumBitter;          // _64
	int m_startNumSpicy;           // _68
	int m_floorCounts;             // _6C
	s32 _70;                       // _70
	int m_stageIndex;              // _74
	f32* m_floorTimerExtentions;   // _78
};

struct StageList : public CNode {
	StageList();

	virtual ~StageList(); // _08 (weak)

	void read(Stream&);
	void write(Stream&);
	StageData* getStageData(int);

	// _00     = VTBL
	// _00-_18 = CNode
	StageData m_stageData; // _18
};
} // namespace ChallengeGame
} // namespace Game

#endif

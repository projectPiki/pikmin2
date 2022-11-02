#ifndef _GAME_CHALLENGEGAME_H
#define _GAME_CHALLENGEGAME_H

#include "Game/PikiContainer.h"
#include "CNode.h"
#include "Stream.h"

namespace Game {
namespace ChallengeGame {
struct StageData : public CNode {
	virtual ~StageData(); // _08 (weak)

	void read(Stream&);

	// _00     = VTBL
	// _00-_18 = CNode
	PikiContainer m_pikiContainer; // _18
	u8 _20[0x54];                  // _20, unknown
	int m_stageIndex;              // _74
	u8 _78[0x4];                   // _78, unknown
};

struct StageList : public CNode {
	StageList();

	virtual ~StageList(); // _08 (weak)

	void read(Stream&);
	void getStageData(int);

	// _00     = VTBL
	// _00-_18 = CNode
	StageData m_stageData; // _18
};
} // namespace ChallengeGame
} // namespace Game

#endif

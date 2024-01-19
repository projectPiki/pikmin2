#ifndef _GAME_CHALLENGE2D_H
#define _GAME_CHALLENGE2D_H

#include "types.h"
#include "Game/PikiContainer.h"
#include "Game/Highscore.h"

namespace Game {
enum Challenge2D_ResultFlags {
	CHAL2D_Multiplayer = 0x1,  // is multiplayer
	CHAL2D_SuccessEnd  = 0x2,  // beat the course, display confetti on result screen
	CHAL2D_PerfectEnd  = 0x4,  // beat the course with all treasures + no deaths, display ribbon in top left
	CHAL2D_Cleared     = 0x8,  // mark course as having been cleared (flower)
	CHAL2D_PinkFlower  = 0x10, // mark course with pink flower (collected all treasures with no deaths, referred to as 'kunsho')
};

struct Challenge2D_TitleInfo {
	struct Info {
		Info();

		inline void setDisplayFlag(u32 flag) { mDisplayFlag.typeView |= flag; }

		int mFloorCount;               // _00
		int mSprayCounts[2];           // _04
		int mTimeLimit;                // _0C
		PikiContainer* mPikiContainer; // _10
		Highscore* mHighscore1P;       // _14
		Highscore* mHighscore2P;       // _18
		u32 mStageIndex;               // _1C
		BitFlag<u8> mDisplayFlag;      // _20
	};

	Challenge2D_TitleInfo(int stageNum);

	Challenge2D_TitleInfo::Info* operator()(int);

	Info* pInfoArray; // _00
	int mCount;       // _04
};

struct Challenge2D_ResultInfo {
	Challenge2D_ResultInfo();

	inline void setDisplayFlag(u32 flag) { mDisplayFlag.typeView |= flag; }

	BitFlag<u8> mDisplayFlag; // _00, see Challenge2D_ResultFlags enum
	u32 mStageIndex;          // _04
	u32 mTimeLeft;            // _08
	u32 mPokos;               // _0C
	u32 mPikminLeft;          // _10
	u32 mScore;               // _14
	u32 mDisplayIndex;        // _18
	Highscore* mHighScore;    // _1C
};

struct Vs2D_TitleInfo {
	struct Info {
		Info();
		u32 mInfo; // _00
	};

	Vs2D_TitleInfo(int stageNum);

	Vs2D_TitleInfo::Info* operator()(int);

	Info* pInfoArray; // _00
	int mInfoCount;   // _04
};
} // namespace Game

#endif

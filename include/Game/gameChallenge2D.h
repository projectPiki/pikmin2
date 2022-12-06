#ifndef _GAME_CHALLENGE2D_H
#define _GAME_CHALLENGE2D_H

#include "types.h"
#include "Game/PikiContainer.h"
#include "Game/Highscore.h"
#include "JSystem/JUT/JUTException.h"

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

		inline void setDisplayFlag(u32 flag) { m_displayFlag.typeView |= flag; }

		int m_floorCount;               // _00
		int m_sprayCounts[2];           // _04
		int m_timeLimit;                // _0C
		PikiContainer* m_pikiContainer; // _10
		Highscore* m_highscore1;        // _14
		Highscore* m_highscore2;        // _18
		u32 m_stageIndex;               // _1C
		BitFlag<u8> m_displayFlag;      // _20
	};

	Challenge2D_TitleInfo(int stageNum);

	Challenge2D_TitleInfo::Info* operator()(int);

	Info* pInfoArray; // _00
	int m_count;      // _04
};

struct Challenge2D_ResultInfo {
	Challenge2D_ResultInfo();

	inline void setDisplayFlag(u32 flag) { m_displayFlag.typeView |= flag; }

	BitFlag<u8> m_displayFlag; // _00, see Challenge2D_ResultFlags enum
	u32 m_stageIndex;          // _04
	u32 m_timeLeft;            // _08
	u32 m_pokos;               // _0C
	u32 m_pikminLeft;          // _10
	u32 m_score;               // _14
	u32 m_displayIndex;        // _18
	Highscore* m_highScore;    // _1C
};

struct Vs2D_TitleInfo {
	struct Info {
		Info();
		u32 m_info; // _00
	};

	Vs2D_TitleInfo(int stageNum);

	Vs2D_TitleInfo::Info* operator()(int);

	Info* pInfoArray; // _00
	int m_infoCount;  // _04
};
} // namespace Game

#endif

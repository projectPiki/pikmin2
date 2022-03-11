#ifndef _GAME_CHALLENGE2D_H
#define _GAME_CHALLENGE2D_H

#include "types.h"
#include "Game/PikiContainer.h"
#include "Game/Highscore.h"
#include "JSystem/JUT/JUTException.h"

namespace Game {
class Challenge2D_TitleInfo {
	struct Info {
		Info();
		u32 m_floorCount;                // _00
		u32 m_sprayCounts[2];            // _04
		u32 m_0C;                        // _0C
		PikiContainer* m_pPikiContainer; // _10
		Highscore* m_pHighscore1;        // _14
		Highscore* m_pHighscore2;        // _18
		u32 m_1C;                        // _1C
		bool m_bool;                     // _20
	};
	Info* pInfoArray; // _00
	int m_count;      // _04

	Challenge2D_TitleInfo(int);
	Challenge2D_TitleInfo::Info* operator()(int);
};

class Challenge2D_ResultInfo {
	bool m_bool; // _00
	u32 m_04;    // _04
	u32 m_08;    // _08
	u32 m_0C;    // _0C
	u32 m_10;    // _10
	u32 m_14;    // _14
	u32 m_18;    // _18
	u32 m_1C;    // _1C

	Challenge2D_ResultInfo();
};

class Vs2D_TitleInfo {
	struct Info {
		Info();
		u32 m_info; // _00
	};
	Info* pInfoArray; // _00
	int m_infoCount;  // _04

	Vs2D_TitleInfo(int);
	Vs2D_TitleInfo::Info* operator()(int);
};
} // namespace Game

#endif

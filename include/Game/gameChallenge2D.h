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
		u32 m_floorCount;               // _00
		u32 m_sprayCounts[2];           // _04
		u32 _0C;                        // _0C
		PikiContainer* m_pikiContainer; // _10
		Highscore* m_highscore1;        // _14
		Highscore* m_highscore2;        // _18
		u32 _1C;                        // _1C
		bool m_bool;                    // _20
	};
	Info* pInfoArray; // _00
	int m_count;      // _04

	Challenge2D_TitleInfo(int);
	Challenge2D_TitleInfo::Info* operator()(int);
};

class Challenge2D_ResultInfo {
	bool m_bool; // _00
	u32 _04;     // _04
	u32 _08;     // _08
	u32 _0C;     // _0C
	u32 _10;     // _10
	u32 _14;     // _14
	u32 _18;     // _18
	u32 _1C;     // _1C

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

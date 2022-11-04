#ifndef _GAME_GAMESTATS_H
#define _GAME_GAMESTATS_H

#include "types.h"
#include "JSystem/JUT/JUTException.h"

namespace Game {
struct Piki;

namespace GameStat {
struct PikiCounter {
	PikiCounter();

	virtual operator int();      // _08 (weak)
	virtual int operator()(int); // _0C (weak)

	void clear();
	void inc(Piki*);
	void dec(Piki*);
	void inc(int);
	void dec(int);

	// _00 = VTBL
	u32 m_pikiCounts[7]; // 04, counts of each piki type?
};

struct PikiNaviCounter {
	void clear();
	void inc(Piki*);
	void dec(Piki*);

	PikiCounter m_counter[7]; // _00, probably?
};

int getMapPikmins(int);
int getAllPikmins(int);

inline void checkNaviIndex(int index)
{
	bool check = false;
	if (index >= 0 && index < 7) {
		check = true;
	}

	P2ASSERTLINE(119, check);
}

extern PikiNaviCounter workPikis;
extern PikiNaviCounter formationPikis;

} // namespace GameStat
} // namespace Game

#endif

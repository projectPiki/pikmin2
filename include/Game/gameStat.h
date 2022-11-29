#ifndef _GAME_GAMESTATS_H
#define _GAME_GAMESTATS_H

#include "types.h"
#include "JSystem/JUT/JUTException.h"
#include "Game/Piki.h"

namespace Game {
struct Piki;

namespace GameStat {
void clear();
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
	u32 m_pikiCounts[PikiColorCount]; // 04, counts of each piki type?
};

struct PikiNaviCounter {
	void clear();
	void inc(Piki*);
	void dec(Piki*);

	PikiCounter m_counter[PikiColorCount]; // _00, probably?
};

int getMapPikmins(int);
int getAllPikmins(int);

inline void checkNaviIndex(int index)
{
	bool check = false;
	if (index >= 0 && index < PikiColorCount) {
		check = true;
	}

	P2ASSERTLINE(119, check);
}

extern PikiNaviCounter workPikis;
extern PikiNaviCounter formationPikis;
extern PikiCounter zikatuPikis; // Wild pikis, that you find & whistle to unlock the type
extern PikiCounter mePikis;

/// @brief Checks for wild Pikmin
/// @param pikiType type of Pikmin
/// @return Is there wild Pikmin of type 'pikiType' on the map?
inline bool checkZikatu(EPikiKind pikiType)
{
	int zikatuCount = GameStat::zikatuPikis.m_pikiCounts[pikiType];
	return GameStat::getAllPikmins(pikiType) - zikatuCount > 0;
}

} // namespace GameStat
} // namespace Game

#endif

#ifndef _GAME_GAMESTATS_H
#define _GAME_GAMESTATS_H

#include "types.h"
#include "P2Macros.h"
#include "Game/Piki.h"

namespace Game {
struct Piki;

namespace GameStat {
void clear();
struct PikiCounter {
	PikiCounter();

	virtual operator int() // _08 (weak)
	{
		int count = mPikiCounts[0];
		for (int i = 1; i < PikiColorCount; i++) {
			count += mPikiCounts[i];
		}
		return count;
	}
	virtual int operator()(int color) // _0C (weak)
	{
		return mPikiCounts[color];
	}

	void clear();
	void inc(Piki*);
	void dec(Piki*);
	void inc(int);
	void dec(int);

	// _00 = VTBL
	u32 mPikiCounts[PikiColorCount]; // 04
};

inline void checkNaviIndex(int index)
{
	bool check = false;
	if (index >= 0 && index < PikiColorCount) {
		check = true;
	}

	P2ASSERTLINE(119, check);
}

struct PikiNaviCounter {
	PikiNaviCounter();

	void clear();
	void inc(Piki*);
	void dec(Piki*);

	PikiCounter mCounter[PikiColorCount]; // _00

	inline operator int()
	{
		int total = 0;
		for (int i = 0; i < PikiColorCount; i++) {
			total += mCounter[i];
		}
		return total;
	}

	inline int getCount(int id, int color)
	{
		checkNaviIndex(id);
		PikiCounter& counter = mCounter[id];
		return counter(color);
	}
};

int getMapPikmins(int);
int getAllPikmins(int);
int getMapPikmins_exclude_Me(int);
int getZikatuPikmins(int);

extern PikiNaviCounter workPikis;
extern PikiNaviCounter formationPikis;
extern PikiCounter zikatuPikis; // Wild pikis, that you find & whistle to unlock the type
extern PikiCounter mePikis;
extern PikiCounter alivePikis;

/// @brief Checks for wild Pikmin
/// @param pikiType type of Pikmin
/// @return Is there wild Pikmin of type 'pikiType' on the map?
inline bool checkZikatu(EPikiKind pikiType)
{
	int zikatuCount = GameStat::zikatuPikis.mPikiCounts[pikiType];
	return GameStat::getAllPikmins(pikiType) - zikatuCount > 0;
}

} // namespace GameStat
} // namespace Game

#endif

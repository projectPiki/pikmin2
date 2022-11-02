#ifndef _GAME_GAMESTATS_H
#define _GAME_GAMESTATS_H

namespace Game {
struct Piki;

namespace GameStat {
struct PikiCounter {
	PikiCounter();

	virtual operator int();       // _08 (weak)
	virtual void operator()(int); // _0C (weak)

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

	PikiCounter m_counter; // _00, probably?
};

int getMapPikmins(int);
int getAllPikmins(int);

extern PikiNaviCounter* workPikis;

} // namespace GameStat
} // namespace Game

#endif

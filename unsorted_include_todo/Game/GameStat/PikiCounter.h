#ifndef _GAME_GAMESTAT_PIKICOUNTER_H
#define _GAME_GAMESTAT_PIKICOUNTER_H

/*
    __vt__Q34Game8GameStat11PikiCounter:
    .4byte 0
    .4byte 0
    .4byte __opi__Q34Game8GameStat11PikiCounterFv
    .4byte __cl__Q34Game8GameStat11PikiCounterFi
*/

namespace Game {
namespace GameStat {
struct PikiCounter {
	virtual void __opi();         // _08 (inline)
	virtual void operator()(int); // _0C (inline)

	PikiCounter();
	void clear();
	void inc(Game::Piki*);
	void dec(Game::Piki*);
	void inc(int);
	void dec(int);
};
} // namespace GameStat
} // namespace Game

#endif

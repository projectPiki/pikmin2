#ifndef _GAME_GAMESTATS_H
#define _GAME_GAMESTATS_H

namespace Game {
struct Piki;

namespace GameStat {
struct PikiNaviCounter {
	void clear();
	void inc(Game::Piki*);
	void dec(Game::Piki*);
};

int getMapPikmins(int);

extern PikiNaviCounter* workPikis;

} // namespace GameStat
} // namespace Game

#endif

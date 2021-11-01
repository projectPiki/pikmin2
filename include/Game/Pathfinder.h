#ifndef _GAME_PATHFINDER_H
#define _GAME_PATHFINDER_H

#include "types.h"

namespace Game {
struct Pathfinder {
	uint idk;                         // _00
	int clientCount;                  // _04
	int aStarContextCount;            // _08
	AStarContext* aStarContexts;      // _0C
	AStarPathfinder* aStarPathfinder; // _10

	Pathfinder();
	void create(int, RouteMgr*);
	void update();
	int start(PathfindRequest*);
	int makepath(ulong, PathNode**);
	void release(ulong);
	uchar check(ulong);
};
} // namespace Game
#endif

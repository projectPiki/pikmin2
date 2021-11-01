#ifndef _GAME_PATHFINDER_H
#define _GAME_PATHFINDER_H

#include "types.h"

namespace Game {
struct Pathfinder {
	u32 _00;                                 // _00
	s32 m_clientCount;                       // _04
	s32 aStarContextCount;                   // _08
	struct AStarContext* aStarContexts;      // _0C
	struct AStarPathfinder* aStarPathfinder; // _10

	Pathfinder();
	void create(int, struct RouteMgr*);
	void update();
	int start(struct PathfindRequest*);
	int makepath(ulong, struct PathNode**);
	void release(ulong);
	uchar check(ulong);
};
} // namespace Game

#endif

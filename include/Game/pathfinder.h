#ifndef _GAME_PATHFINDER_H
#define _GAME_PATHFINDER_H

#include "types.h"

struct Graphics;

namespace Game {
struct RouteMgr;
}
namespace Game {
namespace PathfindContext {
extern Game::RouteMgr* routeMgr;
} // namespace PathfindContext
struct PathfindRequest {
};

struct PathNode {
	void initNode();
	void add(PathNode*);
	void del();
	void dump(char*);
	void pop();
	void countLinks(PathNode**);

	float _00;       // _00
	float _04;       // _04
	PathNode* _08;   // _08
	PathNode* _0C;   // _0C
	PathNode* _10;   // _10
	PathNode* _14;   // _14
	u8 _18[8];       // _18
	short m_wpIndex; // _20
};

struct AStarContext {
	AStarContext()
	{
		_04                       = 0;
		_02                       = -1;
		_00                       = -1;
		PathfindContext::routeMgr = nullptr;
		_60                       = 0;
	}
	void init(RouteMgr*, int);
	void getNode(short);
	void makepath(PathNode*, PathNode**);

	s16 _00;      // _00
	s16 _02;      // _02
	u8 _04;       // _04
	u8 _05[0x5A]; // _05, unknown
	u32 _60;      // _60
};

struct AStarPathfinder {
	AStarPathfinder();
	void constructPath(PathNode*, short*, int);
	void estimate(short, short);
	void initsearch(AStarContext*);
	void search(AStarContext*, int, PathNode**);
	void search(short, short, short*, int);
	void search(AStarContext*, short, short, short*, int, int, int&);
	void setContext(AStarContext*);

	AStarContext* m_context; // _00
};
struct Pathfinder {
	Pathfinder();
	void create(int, RouteMgr*);
	void update();
	int start(PathfindRequest&);
	int makepath(u32, PathNode**);
	int makepath(u32, short*, int);
	void release(u32);
	u8 check(u32);
	void getFreeContext();
	void getContext(u32);

	u32 _00;                            // _00
	s32 m_clientCount;                  // _04
	s32 m_aStarContextCount;            // _08
	AStarContext* m_aStarContexts;      // _0C
	AStarPathfinder* m_aStarPathfinder; // _10
};
} // namespace Game

#endif

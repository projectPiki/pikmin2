#ifndef _GAME_PATHFINDER_H
#define _GAME_PATHFINDER_H

#include "types.h"

struct Graphics;

namespace Game {
struct RouteMgr;
}
namespace Game {
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
	inline AStarContext();
	void init(RouteMgr*, int);
	void getNode(short);
	void makepath(PathNode*, PathNode**);

	u8 _00[0x64]; // _00
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
	int makepath(ulong, PathNode**);
	int makepath(ulong, short*, int);
	void release(ulong);
	uchar check(ulong);
	void getFreeContext();
	void getContext(ulong);

	u32 _00;                            // _00
	s32 m_clientCount;                  // _04
	s32 m_aStarContextCount;            // _08
	AStarContext* m_aStarContexts;      // _0C
	AStarPathfinder* m_aStarPathfinder; // _10
};
} // namespace Game

#endif

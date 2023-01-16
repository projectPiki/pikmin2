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
	PathfindRequest(s16 s, s16 e, u8 f)
	{
		m_startWpID = s;
		m_endWpID   = e;
		m_flag      = f;
	}

	s16 m_startWpID;
	s16 m_endWpID;
	u8 m_flag;
};

struct PathNode {
	void initNode();
	void add(PathNode*);
	void del();
	void dump(char*);
	void pop();
	void countLinks(PathNode**);

	f32 _00;           // _00
	f32 _04;           // _04
	PathNode* m_child; // _08
	PathNode* m_next;  // _0C
	PathNode* _10;     // _10
	PathNode* _14;     // _14
	u8 _18[8];         // _18
	short m_wpIndex;   // _20
};

struct AStarContext {
	AStarContext()
	{
		m_requestFlag             = 0;
		m_endWPID                 = -1;
		m_startWPID               = -1;
		PathfindContext::routeMgr = nullptr;
		m_status                  = 0;
	}
	void init(RouteMgr*, int);
	void getNode(short);
	int makepath(PathNode*, PathNode**);

	s16 m_startWPID;  // _00
	s16 m_endWPID;    // _02
	u8 m_requestFlag; // _04
	int _08[18];
	s16 _50;
	s16 m_wpNum;
	u8 m_checkHandle;
	int* _58;
	PathNode* m_node; // _5C
	u32 m_status;     // _60
};

struct AStarPathfinder {
	AStarPathfinder();
	void constructPath(PathNode*, short*, int);
	f32 estimate(short, short);
	void initsearch(AStarContext*);
	int search(AStarContext*, int, PathNode**);
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
	int check(u32);
	void getFreeContext();
	AStarContext* getContext(u32);

	u32 m_counter;                      // _00
	int m_clientCount;                  // _04
	int m_aStarContextCount;            // _08
	AStarContext* m_aStarContexts;      // _0C
	AStarPathfinder* m_aStarPathfinder; // _10
};

extern Pathfinder* testPathfinder;

} // namespace Game

#endif

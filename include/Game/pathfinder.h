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
		mStartWpID = s;
		mEndWpID   = e;
		mFlag      = f;
	}

	s16 mStartWpID;
	s16 mEndWpID;
	u8 mFlag;
};

struct PathNode {
	void initNode();
	void add(PathNode*);
	void del();
	void dump(char*);
	void pop();
	void countLinks(PathNode**);

	f32 _00;          // _00
	f32 _04;          // _04
	PathNode* mChild; // _08
	PathNode* mNext;  // _0C
	PathNode* _10;    // _10
	PathNode* _14;    // _14
	PathNode* _18;    // _18
	PathNode* _1C;    // _1C
	s16 mWpIndex;     // _20
	u8 _22;           // _22
};

struct AStarContext {
	AStarContext()
	{
		mRequestFlag              = 0;
		mEndWPID                  = -1;
		mStartWPID                = -1;
		PathfindContext::routeMgr = nullptr;
		mStatus                   = 0;
	}

	void init(RouteMgr*, int);
	int makepath(PathNode*, PathNode**);

	// unused/inlined:
	PathNode* getNode(short wpID);

	bool checkContext() { return mStatus && mCheckHandle == 2; }

	s16 mStartWPID;     // _00
	s16 mEndWPID;       // _02
	u8 mRequestFlag;    // _04
	PathNode _08[2];    // _08
	s16 mUsedNodeCount; // 50
	s16 mWpNum;         // _52
	u8 mCheckHandle;    // _54
	PathNode* _58;      // _58, guess
	PathNode* mNode;    // _5C
	u32 mStatus;        // _60
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

	AStarContext* mContext; // _00
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

	u32 mCounter;                      // _00
	int mClientCount;                  // _04
	int mAStarContextCount;            // _08
	AStarContext* mAStarContexts;      // _0C
	AStarPathfinder* mAStarPathfinder; // _10
};

extern Pathfinder* testPathfinder;

} // namespace Game

#endif

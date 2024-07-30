#ifndef _GAME_PATHFINDER_H
#define _GAME_PATHFINDER_H

#include "types.h"

struct Graphics;

namespace Game {
struct RouteMgr;
}
namespace Game {
enum PathFindState {
	PATHFIND_MakePath = 0,
	PATHFIND_Start    = 1,
	PATHFIND_Busy     = 2,
	PATHFIND_NoHandle = 3,
};

enum PathFindFlags {
	PATHFLAG_RequireOpen                = 0x1,
	PATHFLAG_PathThroughWater           = 0x2,
	PATHFLAG_DisallowUnfinishedBridges  = 0x4,
	PATHFLAG_Unk4                       = 0x8,
	PATHFLAG_DisallowVsRed              = 0x10,
	PATHFLAG_DisallowVsBlue             = 0x20,
	PATHFLAG_AllowUnvisited             = 0x40,
	PATHFLAG_TwoWayPathing              = 0x80 // used for Panmodoki and BlackMan
};

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

	s16 mStartWpID; // _00
	s16 mEndWpID;   // _02
	u8 mFlag;       // _04
};

struct PathNode {
	void initNode();
	void add(PathNode*);
	void del();
	void dump(char*);
	void pop();
	void countLinks(PathNode**);

	f32 _00;             // _00
	f32 mDistanceToEnd;  // _04
	PathNode* mChild;    // _08
	PathNode* mNext;     // _0C
	PathNode* mParent;   // _10
	PathNode* mSibling;  // _14
	PathNode* mPrevious; // _18
	PathNode* mRootNode; // _1C
	s16 mWpIndex;        // _20
	u8 _22;              // _22
};

struct AStarContext {
	AStarContext()
	{
		mRequestFlag              = 0;
		mEndWPID                  = -1;
		mStartWPID                = -1;
		PathfindContext::routeMgr = nullptr;
		mHandleIdx                = 0;
	}

	void init(RouteMgr*, int);
	int makepath(PathNode*, PathNode**);

	// unused/inlined:
	PathNode* getNode(s16 wpID);

	void resetContext()
	{
		mHandleIdx = 0;
		mState     = PATHFIND_Busy;
	}

	bool checkContext() { return mHandleIdx != 0 && mState == PATHFIND_Busy; }

	s16 mStartWPID;         // _00
	s16 mEndWPID;           // _02
	u8 mRequestFlag;        // _04
	PathNode mNodeLists[2]; // _08, only the first seems to be used for anything
	s16 mUsedNodeCount;     // 50
	s16 mWpNum;             // _52
	u8 mState;              // _54, see PathFindState enum
	PathNode* _58;          // _58, guess
	PathNode* mNode;        // _5C
	u32 mHandleIdx;         // _60
};

struct AStarPathfinder {
	AStarPathfinder();

	void constructPath(PathNode*, s16*, int);
	f32 estimate(s16, s16);
	void initsearch(AStarContext*);
	int search(AStarContext*, int, PathNode**);
	void search(s16, s16, s16*, int);
	void search(AStarContext*, s16, s16, s16*, int, int, int&);
	void setContext(AStarContext*);

	AStarContext* mContext; // _00
};

struct Pathfinder {
	Pathfinder();

	void create(int, RouteMgr*);
	void update();
	int start(PathfindRequest&);
	int makepath(u32, PathNode**);
	int makepath(u32, s16*, int);
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

#include "Game/pathfinder.h"
#include "System.h"
#include "Game/routeMgr.h"
#include "Game/cellPyramid.h"

// retail uses a sentinel ten times FLOAT_DIST_MAX here, proven by the sdata2 literal
#define PATHFIND_DIST_MAX 1280000.0f

namespace Game {

Pathfinder* testPathfinder;
Game::RouteMgr* Game::PathfindContext::routeMgr;

/**
 * @note Address: 0x801A35EC
 * @note Size: 0x60
 */
Pathfinder::Pathfinder()
{
	mAStarPathfinder   = new AStarPathfinder;
	mAStarContextCount = 0;
	mClientCount       = 0;
	mAStarContexts     = nullptr;
	mCounter           = 1;
}

/**
 * @note Address: 0x801A364C
 * @note Size: 0xC4
 */
void Pathfinder::create(int contextCount, Game::RouteMgr* routeMgr)
{
	sys->heapStatusStart("pathfinder", nullptr);
	mClientCount       = 0;
	mAStarContextCount = contextCount;
	mAStarContexts     = new AStarContext[contextCount];
	for (int i = 0; i < contextCount; i++) {
		mAStarContexts[i].init(routeMgr, 0);
	}
	mCounter = 1;
	sys->heapStatusEnd("pathfinder");
}

/**
 * @note Address: 0x801A3710
 * @note Size: 0x20
 */
// AStarContext::AStarContext() { }

/**
 * @note Address: 0x801A3730
 * @note Size: 0x124
 */
void Pathfinder::update()
{
	sys->mTimers->_start("path", true);

	int counts = 0;
	for (int i = 0; i < mAStarContextCount; i++) {
		if (mAStarContexts[i].checkContext()) {
			counts++;
		}
	}

	if (counts > 0) {
		for (int i = 0; i < mAStarContextCount; i++) {
			if (mAStarContexts[i].checkContext()) {
				mAStarContexts[i].mState = mAStarPathfinder->search(&mAStarContexts[i], 1, &mAStarContexts[i].mNode);
			}
		}
	}

	sys->mTimers->_stop("path");
}

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
void Pathfinder::getFreeContext()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */
AStarContext* Pathfinder::getContext(u32 handle)
{
	for (int i = 0; i < mAStarContextCount; i++) {
		if (mAStarContexts[i].mHandleIdx == handle) {
			return &mAStarContexts[i];
		}
	}
	return nullptr;
}

/**
 * @note Address: 0x801A3854
 * @note Size: 0x14C
 */
int Pathfinder::start(PathfindRequest& request)
{
	if (mClientCount >= mAStarContextCount) {
		JUT_PANICLINE(250, "Oh! no!\n");
		return 0;
	}

	int contextNum = mCounter++;
	if (mCounter >= 20000) {
		mCounter = 1;
	}

	AStarContext* context = getContext(0);

	JUT_ASSERTLINE(258, context, "no context is available (clients=%d)!\n", mClientCount);
	mClientCount++;
	context->resetContext();

	context->mHandleIdx   = contextNum;
	context->mStartWPID   = request.mStartWpID;
	context->mEndWPID     = request.mEndWpID;
	context->mRequestFlag = request.mFlag;
	mAStarPathfinder->initsearch(context);
	return contextNum;
}

/**
 * @note Address: 0x801A39A0
 * @note Size: 0xC0
 */
int Pathfinder::makepath(u32 handle, Game::PathNode** path)
{
	AStarContext* context = getContext(handle);

	if (context) {
		if (context->mState == PATHFIND_MakePath) {
			return context->makepath(context->mNode, path);
		}

		JUT_PANICLINE(290, "context state is %d\n", context->mState);

	} else {
		JUT_PANICLINE(293, "no such handle %d\n", handle);
	}

	return 0;
}

/**
 * @note Address: N/A
 * @note Size: 0xC8
 */
int Pathfinder::makepath(u32, s16*, int)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x801A3A60
 * @note Size: 0x70
 */
void Pathfinder::release(u32 handle)
{
	AStarContext* context = getContext(handle);
	if (context) {
		mClientCount--;
		context->resetContext();
	}
}

/**
 * @note Address: 0x801A3AD0
 * @note Size: 0x98
 */
int Pathfinder::check(u32 handle)
{
	AStarContext* context = getContext(handle);
	if (context) {
		return context->mState;
	}
	JUT_PANICLINE(332, " no handle ! %d\n", handle);
	return PATHFIND_NoHandle;
}

/**
 * @note Address: N/A
 * @note Size: 0x18
 */
void PathNode::initNode()
{
	mPrevSibling = nullptr;
	mSibling     = nullptr;
	mRootNode    = nullptr;
	mParent      = nullptr;
	mChild       = nullptr;
	mNext        = nullptr;
}

/**
 * @note Address: N/A
 * @note Size: 0x38
 */
void PathNode::add(Game::PathNode* newNode)
{
	PathNode* node = mRootNode;
	if (node) {
		while (node->mSibling) {
			node = node->mSibling;
		}
		node->mSibling        = newNode;
		newNode->mPrevSibling = node;
	} else {
		mRootNode = newNode;
	}
	newNode->mParent = this;
}

/**
 * @note Address: N/A
 * @note Size: 0x98
 */
void PathNode::del()
{
	// yes this is literally CNode del lmao
	PathNode* parent = mParent;
	if (!parent) {
		return;
	}

	PathNode* curChild = parent->mRootNode;
	PathNode* oldChild = nullptr;
	while (curChild) {
		if (curChild == this) {
			if (oldChild) {
				oldChild->mSibling = curChild->mSibling;
				if (curChild->mSibling) {
					curChild->mSibling->mPrevSibling = oldChild;
				}
				mPrevSibling = nullptr;
				mSibling     = nullptr;
				mParent      = nullptr;
			} else {
				parent->mRootNode = curChild->mSibling;
				if (curChild->mSibling) {
					curChild->mSibling->mPrevSibling = nullptr;
				}
				mPrevSibling = nullptr;
				mSibling     = nullptr;
				mParent      = nullptr;
			}

			return;
		}

		oldChild = curChild;
		curChild = curChild->mSibling;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x18
 */
void PathNode::dump(char*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xDC
 */
PathNode* PathNode::pop()
{
	f32 minDist          = PATHFIND_DIST_MAX;
	PathNode* targetNode = nullptr;

	// this is a bad excuse for a priority queue
	FOREACH_NODE_SIBLING(PathNode, mRootNode, node)
	{
		f32 dist = node->mDistanceFromStart + node->mDistanceToEnd;
		if (dist < minDist) {
			minDist    = dist;
			targetNode = node;
		}
	}

	if (targetNode) {
		targetNode->del();
	}

	return targetNode;
}

/**
 * @note Address: N/A
 * @note Size: 0x38
 */
void PathNode::countLinks(Game::PathNode**)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x801A3B68
 * @note Size: 0x78
 */
void AStarContext::init(RouteMgr* mgr, int wpNum)
{
	if (mgr) {
		PathfindContext::routeMgr = mgr;
		mUsedNodeCount            = 0;
		if (wpNum <= 0) {
			mWpNum = PathfindContext::routeMgr->mCount;
		} else {
			mWpNum = wpNum;
		}
		mUsedNodes = new PathNode[mWpNum]; // not sure what this type is
		resetContext();
	}
}

/**
 * @note Address: 0x801A3BE0
 * @note Size: 0xC
 */
AStarPathfinder::AStarPathfinder()
{
	mContext = nullptr;
}

/**
 * @note Address: 0x801A3BEC
 * @note Size: 0x8
 */
void AStarPathfinder::setContext(AStarContext* context)
{
	mContext = context;
}

/**
 * @note Address: N/A
 * @note Size: 0xA0
 */
PathNode* AStarContext::getNode(s16 wpID)
{
	for (int i = 0; i < mUsedNodeCount; i++) {
		if (wpID == mUsedNodes[i].mWpIndex) {
			return &mUsedNodes[i];
		}
	}

	PathNode* node;
	if (mUsedNodeCount < mWpNum) {
		node = &mUsedNodes[mUsedNodeCount];
		mUsedNodeCount++;

		node->initNode();
		node->mWpIndex    = wpID;
		node->mListParent = 2;
		return node;
	}
	return nullptr;
}

/**
 * @note Address: N/A
 * @note Size: 0x558
 */
void AStarPathfinder::search(s16, s16, s16*, int)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x57C
 */
void AStarPathfinder::search(Game::AStarContext*, s16, s16, s16*, int, int, int&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x801A3BF4
 * @note Size: 0x17C
 */
void AStarPathfinder::initsearch(Game::AStarContext* context)
{
	s16 startID = context->mStartWPID;
	s16 endID   = context->mEndWPID;
	setContext(context);

	mContext->mActiveList.initNode();
	mContext->mInactiveList.initNode();

	mContext->mUsedNodeCount = 0;
	PathNode* node           = mContext->getNode(startID);
	node->mWpIndex           = startID;
	node->mDistanceFromStart = 0.0f;
	node->mDistanceToEnd     = estimate(startID, endID);
	node->mChild             = nullptr;
	node->mListParent        = 0;

	mContext->mActiveList.add(node);
}

/**
 * @brief Performs an A* search algorithm to find a path.
 *
 * @param context The AStarContext containing the necessary information for the search.
 * @param maxIterations The maximum number of iterations to perform.
 * @param path A pointer to store the resulting path.
 * @return Returns 0 if a path is found, 1 if no path is found, and 2 if the maximum number of iterations is reached.
 *
 * @note Address: 0x801A3D70
 * @note Size: 0x4B8
 */
int AStarPathfinder::search(Game::AStarContext* context, int maxIterations, Game::PathNode** path)
{
	setContext(context);
	s16 endIdx = context->mEndWPID;

	for (int i = maxIterations; mContext->mActiveList.mRootNode && i > 0; i--) {
		f32 minDist          = PATHFIND_DIST_MAX;
		PathNode* targetNode = mContext->mActiveList.pop();

		if (targetNode->mWpIndex == endIdx) {
			*path = targetNode;
			return 0; // success!
		}

		WayPoint* wp = PathfindContext::routeMgr->getWayPoint(targetNode->mWpIndex);

		// we act on all the neighbors of wp
		WayPointIterator iter(wp, mContext->isFlag(PATHFLAG_TwoWayPathing));
		CI_LOOP(iter)
		{
			s16 idx = *iter;
		}

		CI_LOOP(iter)
		{
			s16 idx       = *iter;
			WayPoint* cWP = PathfindContext::routeMgr->getWayPoint(idx);

			PathNode* node = mContext->getNode(idx);
			if (((mContext->isFlag(PATHFLAG_RequireOpen) && cWP->isFlag(WPF_Closed))
			     || (!mContext->isFlag(PATHFLAG_PathThroughWater) && cWP->isFlag(WPF_Water))
			     || (!mContext->isFlag(PATHFLAG_AllowUnvisited) && cWP->isFlag(WPF_Unvisited))
			     || (wp->isFlag(WPF_Water) && mContext->isFlag(PATHFLAG_DisallowUnfinishedBridges) && cWP->isFlag(WPF_Bridge))
			     || (mContext->isFlag(PATHFLAG_VsBlue) && cWP->isFlag(WPF_VersusRed))
			     || (mContext->isFlag(PATHFLAG_VsRed) && cWP->isFlag(WPF_VersusBlue)))) {
				continue;
			}

			f32 test = estimate(targetNode->mWpIndex, node->mWpIndex) + targetNode->mDistanceFromStart;
			// if we are not yet used, or we a closer from this node, update our path to contain it
			if (node->mListParent == 2 || !(node->mDistanceFromStart <= test)) {
				node->mChild             = targetNode;
				node->mDistanceFromStart = test;
				node->mDistanceToEnd     = estimate(node->mWpIndex, endIdx);

				if (node->mListParent == 1) {
					node->del();
					node->mListParent = 2;
				}
				if (node->mListParent != 0) {
					node->mListParent = 0; // we are one of the nodes to have priority checking
					mContext->mActiveList.add(node);
				}
			}
		}
		targetNode->mListParent = 1;
		mContext->mInactiveList.add(targetNode);
	}

	const PathNode& activeList = mContext->mActiveList;
	if (activeList.mRootNode == nullptr) {
		return 1;
	}

	return 2;
}

/**
 * @note Address: 0x801A4228
 * @note Size: 0xB4
 */
f32 AStarPathfinder::estimate(s16 wpID1, s16 wpID2)
{
	WayPoint* wp1 = PathfindContext::routeMgr->getWayPoint(wpID1);
	WayPoint* wp2 = PathfindContext::routeMgr->getWayPoint(wpID2);

	Vector3f pos1 = wp1->getPosition();
	Vector3f pos2 = wp2->getPosition();
	return Vector3f::distance(pos1, pos2);
}

/**
 * @note Address: 0x801A42DC
 * @note Size: 0x34
 */
int AStarContext::makepath(PathNode* newNode, PathNode** nodePtr)
{
	int i = 1;
	FOREACH_NODE_CHILD(PathNode, newNode->mChild, node)
	{
		i++;
		node->mNext = newNode;
		newNode     = node;
	}

	if (nodePtr) {
		*nodePtr = newNode;
	}
	return i;
}

/**
 * @note Address: N/A
 * @note Size: 0x70
 */
void AStarPathfinder::constructPath(Game::PathNode*, s16*, int)
{
	// UNUSED FUNCTION
}

} // namespace Game

#include "Game/pathfinder.h"
#include "System.h"
#include "Game/routeMgr.h"
#include "Game/cellPyramid.h"

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
	// UNUSED FUNCTION
	mPrevious = nullptr;
	mSibling  = nullptr;
	mRootNode = nullptr;
	mParent   = nullptr;
	mChild    = nullptr;
	mNext     = nullptr;
}

/**
 * @note Address: N/A
 * @note Size: 0x38
 */
void PathNode::add(Game::PathNode* newNode)
{
	// UNUSED FUNCTION
	if (mRootNode != nullptr) {
		PathNode* node;
		for (node = mRootNode; node->mSibling != nullptr;) {
			node = node->mSibling;
		}
		node->mSibling     = newNode;
		newNode->mPrevious = node;
	} else {
		mRootNode = newNode;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x98
 */
void PathNode::del()
{
	// UNUSED FUNCTION
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
void PathNode::pop()
{
	// UNUSED FUNCTION
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
		_58 = new PathNode[mWpNum]; // not sure what this type is
		resetContext();
	}
}

/**
 * @note Address: 0x801A3BE0
 * @note Size: 0xC
 */
AStarPathfinder::AStarPathfinder() { mContext = nullptr; }

/**
 * @note Address: 0x801A3BEC
 * @note Size: 0x8
 */
void AStarPathfinder::setContext(AStarContext* context) { mContext = context; }

/**
 * @note Address: N/A
 * @note Size: 0xA0
 */
PathNode* AStarContext::getNode(s16 wpID)
{
	// UNUSED FUNCTION
	int count = mUsedNodeCount;

	for (int i = 0; i < count; i++) {
		if (wpID == _58[i].mWpIndex) {
			return &_58[i];
		}
	}

	PathNode* node;
	if (count < mWpNum) {
		node = &_58[count];
		mUsedNodeCount++;

		node->initNode();
		node->mWpIndex = wpID;
		node->_22      = 2;
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
	for (int i = 0; i < 2; i++) {
		mContext->mNodeLists[i].initNode();
	}
	mContext->mUsedNodeCount = 0;
	PathNode* node           = mContext->getNode(startID);
	node->mWpIndex           = startID;
	node->_00                = 0.0f;
	node->mDistanceToEnd     = estimate(startID, endID);
	node->mChild             = nullptr;
	node->_22                = 0;

	PathNode* parent = &mContext->mNodeLists[0];
	parent->add(node);
	node->mParent = parent;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r6, 0
	stw      r0, 0x14(r1)
	mr       r7, r6
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	lha      r10, 0(r4)
	lha      r5, 2(r4)
	stw      r4, 0(r3)
	lwz      r3, 0(r3)
	stw      r6, 0x20(r3)
	stw      r6, 0x1c(r3)
	stw      r6, 0x24(r3)
	stw      r6, 0x18(r3)
	stw      r6, 0x10(r3)
	stw      r6, 0x14(r3)
	lwz      r3, 0(r31)
	stw      r6, 0x44(r3)
	stw      r6, 0x40(r3)
	stw      r6, 0x48(r3)
	stw      r6, 0x3c(r3)
	stw      r6, 0x34(r3)
	stw      r6, 0x38(r3)
	lwz      r3, 0(r31)
	sth      r6, 0x50(r3)
	lwz      r8, 0(r31)
	lha      r9, 0x50(r8)
	mtctr    r9
	cmpwi    r9, 0
	ble      lbl_801A3CA0

lbl_801A3C74:
	lwz      r3, 0x58(r8)
	addi     r0, r7, 0x20
	lhax     r0, r3, r0
	cmpw     r10, r0
	bne      lbl_801A3C94
	mulli    r0, r6, 0x24
	add      r30, r3, r0
	b        lbl_801A3CF4

lbl_801A3C94:
	addi     r7, r7, 0x24
	addi     r6, r6, 1
	bdnz     lbl_801A3C74

lbl_801A3CA0:
	lha      r0, 0x52(r8)
	cmpw     r9, r0
	bge      lbl_801A3CF0
	lha      r4, 0x50(r8)
	mulli    r6, r9, 0x24
	lwz      r7, 0x58(r8)
	li       r3, 0
	addi     r0, r4, 1
	sth      r0, 0x50(r8)
	add      r30, r7, r6
	li       r0, 2
	stw      r3, 0x18(r30)
	stw      r3, 0x14(r30)
	stw      r3, 0x1c(r30)
	stw      r3, 0x10(r30)
	stw      r3, 8(r30)
	stw      r3, 0xc(r30)
	sth      r10, 0x20(r30)
	stb      r0, 0x22(r30)
	b        lbl_801A3CF4

lbl_801A3CF0:
	li       r30, 0

lbl_801A3CF4:
	sth      r10, 0x20(r30)
	mr       r3, r31
	lfs      f0, lbl_80519184@sda21(r2)
	mr       r4, r10
	stfs     f0, 0(r30)
	bl       estimate__Q24Game15AStarPathfinderFss
	stfs     f1, 4(r30)
	li       r0, 0
	stw      r0, 8(r30)
	stb      r0, 0x22(r30)
	lwz      r3, 0(r31)
	addi     r4, r3, 8
	lwz      r3, 0x24(r3)
	cmplwi   r3, 0
	beq      lbl_801A3D50
	b        lbl_801A3D38

lbl_801A3D34:
	mr       r3, r0

lbl_801A3D38:
	lwz      r0, 0x14(r3)
	cmplwi   r0, 0
	bne      lbl_801A3D34
	stw      r30, 0x14(r3)
	stw      r3, 0x18(r30)
	b        lbl_801A3D54

lbl_801A3D50:
	stw      r30, 0x1c(r4)

lbl_801A3D54:
	stw      r4, 0x10(r30)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
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
	for (int i = maxIterations; mContext->mNodeLists[0].mRootNode && i > 0; i--) {
		f32 minDist          = 1280000.0f;
		PathNode* targetNode = nullptr;
		for (PathNode* node = mContext->mNodeLists[0].mRootNode; node; node = node->mSibling) {
			f32 dist = node->_00 + node->mDistanceToEnd;
			if (dist < minDist) {
				minDist    = dist;
				targetNode = node;
			}
		}

		if (!targetNode) {
			continue;
		}

		PathNode* child = targetNode->mParent;
		if (!child) {
			continue;
		}
			
		PathNode* node     = child->mRootNode;
		PathNode* prevNode = nullptr;
		while (node) {
			if (node == targetNode) {
				if (prevNode) {
					prevNode->mSibling = node->mSibling;
					if (node->mSibling) {
						node->mSibling->mPrevious = prevNode;
					}

					targetNode->mPrevious = nullptr;
					targetNode->mSibling  = nullptr;
					targetNode->mParent   = nullptr;
				} else {
					child->mRootNode = node->mSibling;
					if (node->mSibling) {
						node->mSibling->mPrevious = nullptr;
					}

					targetNode->mPrevious = nullptr;
					targetNode->mSibling  = nullptr;
					targetNode->mParent   = nullptr;
				}
				break;
			}

			prevNode = node;
			node     = node->mSibling;
		}

		if (targetNode->mWpIndex == endIdx) {
			path[0] = targetNode;
			return 0;
		}

		WayPoint* wp = PathfindContext::routeMgr->getWayPoint(targetNode->mWpIndex);

		WayPointIterator iter(wp, mContext->mRequestFlag & PATHFLAG_TwoWayPathing);

		CI_LOOP(iter) { s16 idx = *iter; }

		CI_LOOP(iter)
		{
			s16 idx       = *iter;
			WayPoint* cWP = PathfindContext::routeMgr->getWayPoint(idx);

			PathNode* node = mContext->getNode(idx);
			if ((((mContext->mRequestFlag & PATHFLAG_RequireOpen) && (cWP->mFlags & WPF_Closed)) 
				|| (!(mContext->mRequestFlag & PATHFLAG_PathThroughWater) && (cWP->mFlags & WPF_Water))
				|| (!(mContext->mRequestFlag & PATHFLAG_AllowUnvisited) && (cWP->mFlags & WPF_Unvisited))
				|| ((cWP->mFlags & WPF_Water) && (mContext->mRequestFlag & PATHFLAG_DisallowUnfinishedBridges) && (wp->mFlags & WPF_Bridge))
				|| ((mContext->mRequestFlag & PATHFLAG_DisallowVsRed) && (wp->mFlags & WPF_VersusRed))
				|| ((mContext->mRequestFlag & PATHFLAG_DisallowVsBlue) && (wp->mFlags & WPF_VersusBlue)))) {
				continue;
			}

			f32 test = estimate(targetNode->mWpIndex, node->mWpIndex);
			test += node->_00;
			if (node->_22 == 2 || test <= node->_00) {
				node->mChild         = targetNode;
				node->_00            = test;
				node->mDistanceToEnd = estimate(node->mWpIndex, endIdx);
				if (node->_22 == 1) {
					PathNode* parent = node->mParent;
					if (parent) {
						PathNode* out = nullptr;
						for (PathNode* child = parent->mRootNode; child->mSibling != nullptr;) {
							if (child == node) {
								if (out) {
									out->mSibling = child->mSibling;
									if (child->mSibling) {
										child->mSibling->mPrevious = out;
									}
									node->mPrevious = nullptr;
									node->mSibling  = nullptr;
									node->mParent   = nullptr;
								} else {
									parent->mSibling = child->mSibling;
									if (child->mSibling) {
										child->mSibling->mPrevious = nullptr;
									}
									node->mPrevious = nullptr;
									node->mSibling  = nullptr;
									node->mParent   = nullptr;
								}
								break;
							}
						}
					}
					node->_22 = 2;
				}
				if (node->_22) {
					node->_22             = 0;
					AStarContext* context = mContext;
					PathNode* newnode     = context->mNodeLists[0].mRootNode;
					if (newnode) {
						while (newnode->mSibling) {
							newnode = newnode->mSibling;
						}
						newnode->mSibling = node;
						node->mPrevious   = newnode;
					} else {
						context->mNodeLists[0].mRootNode = node;
					}
					node->mParent = &context->mNodeLists[0];
				}
			}
		}
		targetNode->_22 = 1;
	}

	if (!mContext->mNodeLists[0].mRootNode) {
		return 1;
	}

	return 2;
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r24, 0x20(r1)
	mr       r24, r3
	mr       r25, r6
	mr       r28, r5
	stw      r4, 0(r3)
	lha      r29, 2(r4)
	b        lbl_801A41E4

lbl_801A3D98:
	lfs      f2, lbl_80519180@sda21(r2)
	li       r31, 0
	b        lbl_801A3DC4

lbl_801A3DA4:
	lfs      f1, 0(r3)
	lfs      f0, 4(r3)
	fadds    f0, f1, f0
	fcmpo    cr0, f0, f2
	bge      lbl_801A3DC0
	fmr      f2, f0
	mr       r31, r3

lbl_801A3DC0:
	lwz      r3, 0x14(r3)

lbl_801A3DC4:
	cmplwi   r3, 0
	bne      lbl_801A3DA4
	cmplwi   r31, 0
	beq      lbl_801A3E68
	lwz      r5, 0x10(r31)
	cmplwi   r5, 0
	beq      lbl_801A3E68
	lwz      r4, 0x1c(r5)
	li       r3, 0
	b        lbl_801A3E60

lbl_801A3DEC:
	cmplw    r4, r31
	bne      lbl_801A3E58
	cmplwi   r3, 0
	beq      lbl_801A3E28
	lwz      r0, 0x14(r4)
	stw      r0, 0x14(r3)
	lwz      r4, 0x14(r4)
	cmplwi   r4, 0
	beq      lbl_801A3E14
	stw      r3, 0x18(r4)

lbl_801A3E14:
	li       r0, 0
	stw      r0, 0x18(r31)
	stw      r0, 0x14(r31)
	stw      r0, 0x10(r31)
	b        lbl_801A3E68

lbl_801A3E28:
	lwz      r0, 0x14(r4)
	stw      r0, 0x1c(r5)
	lwz      r3, 0x14(r4)
	cmplwi   r3, 0
	beq      lbl_801A3E44
	li       r0, 0
	stw      r0, 0x18(r3)

lbl_801A3E44:
	li       r0, 0
	stw      r0, 0x18(r31)
	stw      r0, 0x14(r31)
	stw      r0, 0x10(r31)
	b        lbl_801A3E68

lbl_801A3E58:
	mr       r3, r4
	lwz      r4, 0x14(r4)

lbl_801A3E60:
	cmplwi   r4, 0
	bne      lbl_801A3DEC

lbl_801A3E68:
	lha      r4, 0x20(r31)
	cmpw     r4, r29
	bne      lbl_801A3E80
	stw      r31, 0(r25)
	li       r3, 0
	b        lbl_801A4214

lbl_801A3E80:
	lwz      r3, routeMgr__Q24Game15PathfindContext@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0(r24)
	mr       r27, r3
	addi     r3, r1, 8
	lbz      r0, 4(r4)
	mr       r4, r27
	rlwinm   r5, r0, 0x19, 0x1f, 0x1f
	bl       __ct__Q24Game16WayPointIteratorFPQ24Game8WayPointb
	addi     r3, r1, 8
	bl       first__Q24Game16WayPointIteratorFv
	b        lbl_801A3ECC

lbl_801A3EBC:
	addi     r3, r1, 8
	bl       __ml__Q24Game16WayPointIteratorFv
	addi     r3, r1, 8
	bl       next__Q24Game16WayPointIteratorFv

lbl_801A3ECC:
	addi     r3, r1, 8
	bl       isDone__Q24Game16WayPointIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A3EBC
	addi     r3, r1, 8
	bl       first__Q24Game16WayPointIteratorFv
	b        lbl_801A418C

lbl_801A3EE8:
	addi     r3, r1, 8
	bl       __ml__Q24Game16WayPointIteratorFv
	mr       r0, r3
	lwz      r3, routeMgr__Q24Game15PathfindContext@sda21(r13)
	mr       r26, r0
	lwz      r12, 0(r3)
	mr       r4, r26
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r8, 0(r24)
	li       r5, 0
	mr       r6, r5
	extsh    r4, r26
	lha      r9, 0x50(r8)
	mtctr    r9
	cmpwi    r9, 0
	ble      lbl_801A3F5C

lbl_801A3F30:
	lwz      r7, 0x58(r8)
	addi     r0, r6, 0x20
	lhax     r0, r7, r0
	cmpw     r4, r0
	bne      lbl_801A3F50
	mulli    r0, r5, 0x24
	add      r30, r7, r0
	b        lbl_801A3FB0

lbl_801A3F50:
	addi     r6, r6, 0x24
	addi     r5, r5, 1
	bdnz     lbl_801A3F30

lbl_801A3F5C:
	lha      r0, 0x52(r8)
	cmpw     r9, r0
	bge      lbl_801A3FAC
	lha      r5, 0x50(r8)
	mulli    r6, r9, 0x24
	lwz      r7, 0x58(r8)
	li       r4, 0
	addi     r0, r5, 1
	sth      r0, 0x50(r8)
	add      r30, r7, r6
	li       r0, 2
	stw      r4, 0x18(r30)
	stw      r4, 0x14(r30)
	stw      r4, 0x1c(r30)
	stw      r4, 0x10(r30)
	stw      r4, 8(r30)
	stw      r4, 0xc(r30)
	sth      r26, 0x20(r30)
	stb      r0, 0x22(r30)
	b        lbl_801A3FB0

lbl_801A3FAC:
	li       r30, 0

lbl_801A3FB0:
	lwz      r4, 0(r24)
	lbz      r4, 4(r4)
	clrlwi.  r0, r4, 0x1f
	beq      lbl_801A3FCC
	lbz      r0, 0x34(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_801A4184

lbl_801A3FCC:
	rlwinm.  r0, r4, 0, 0x1e, 0x1e
	bne      lbl_801A3FE0
	lbz      r0, 0x34(r3)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	bne      lbl_801A4184

lbl_801A3FE0:
	rlwinm.  r0, r4, 0, 0x19, 0x19
	bne      lbl_801A3FF4
	lbz      r0, 0x34(r3)
	rlwinm.  r0, r0, 0, 0x18, 0x18
	bne      lbl_801A4184

lbl_801A3FF4:
	lbz      r0, 0x34(r27)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_801A4014
	rlwinm.  r0, r4, 0, 0x1d, 0x1d
	beq      lbl_801A4014
	lbz      r0, 0x34(r3)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	bne      lbl_801A4184

lbl_801A4014:
	rlwinm.  r0, r4, 0, 0x1a, 0x1a
	beq      lbl_801A4028
	lbz      r0, 0x34(r3)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	bne      lbl_801A4184

lbl_801A4028:
	rlwinm.  r0, r4, 0, 0x1b, 0x1b
	beq      lbl_801A403C
	lbz      r0, 0x34(r3)
	rlwinm.  r0, r0, 0, 0x1b, 0x1b
	bne      lbl_801A4184

lbl_801A403C:
	lha      r4, 0x20(r31)
	mr       r3, r24
	lha      r5, 0x20(r30)
	bl       estimate__Q24Game15AStarPathfinderFss
	lfs      f0, 0(r31)
	lbz      r0, 0x22(r30)
	fadds    f1, f0, f1
	cmplwi   r0, 2
	beq      lbl_801A4070
	lfs      f0, 0(r30)
	fcmpo    cr0, f0, f1
	cror     2, 0, 2
	beq      lbl_801A4184

lbl_801A4070:
	stw      r31, 8(r30)
	mr       r3, r24
	mr       r5, r29
	stfs     f1, 0(r30)
	lha      r4, 0x20(r30)
	bl       estimate__Q24Game15AStarPathfinderFss
	stfs     f1, 4(r30)
	lbz      r0, 0x22(r30)
	cmplwi   r0, 1
	bne      lbl_801A4134
	lwz      r5, 0x10(r30)
	cmplwi   r5, 0
	beq      lbl_801A412C
	lwz      r4, 0x1c(r5)
	li       r3, 0
	b        lbl_801A4124

lbl_801A40B0:
	cmplw    r4, r30
	bne      lbl_801A411C
	cmplwi   r3, 0
	beq      lbl_801A40EC
	lwz      r0, 0x14(r4)
	stw      r0, 0x14(r3)
	lwz      r4, 0x14(r4)
	cmplwi   r4, 0
	beq      lbl_801A40D8
	stw      r3, 0x18(r4)

lbl_801A40D8:
	li       r0, 0
	stw      r0, 0x18(r30)
	stw      r0, 0x14(r30)
	stw      r0, 0x10(r30)
	b        lbl_801A412C

lbl_801A40EC:
	lwz      r0, 0x14(r4)
	stw      r0, 0x1c(r5)
	lwz      r3, 0x14(r4)
	cmplwi   r3, 0
	beq      lbl_801A4108
	li       r0, 0
	stw      r0, 0x18(r3)

lbl_801A4108:
	li       r0, 0
	stw      r0, 0x18(r30)
	stw      r0, 0x14(r30)
	stw      r0, 0x10(r30)
	b        lbl_801A412C

lbl_801A411C:
	mr       r3, r4
	lwz      r4, 0x14(r4)

lbl_801A4124:
	cmplwi   r4, 0
	bne      lbl_801A40B0

lbl_801A412C:
	li       r0, 2
	stb      r0, 0x22(r30)

lbl_801A4134:
	lbz      r0, 0x22(r30)
	cmplwi   r0, 0
	beq      lbl_801A4184
	li       r0, 0
	stb      r0, 0x22(r30)
	lwz      r3, 0(r24)
	addi     r4, r3, 8
	lwz      r3, 0x24(r3)
	cmplwi   r3, 0
	beq      lbl_801A417C
	b        lbl_801A4164

lbl_801A4160:
	mr       r3, r0

lbl_801A4164:
	lwz      r0, 0x14(r3)
	cmplwi   r0, 0
	bne      lbl_801A4160
	stw      r30, 0x14(r3)
	stw      r3, 0x18(r30)
	b        lbl_801A4180

lbl_801A417C:
	stw      r30, 0x1c(r4)

lbl_801A4180:
	stw      r4, 0x10(r30)

lbl_801A4184:
	addi     r3, r1, 8
	bl       next__Q24Game16WayPointIteratorFv

lbl_801A418C:
	addi     r3, r1, 8
	bl       isDone__Q24Game16WayPointIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A3EE8
	li       r0, 1
	stb      r0, 0x22(r31)
	lwz      r3, 0(r24)
	addi     r4, r3, 0x2c
	lwz      r3, 0x48(r3)
	cmplwi   r3, 0
	beq      lbl_801A41D8
	b        lbl_801A41C0

lbl_801A41BC:
	mr       r3, r0

lbl_801A41C0:
	lwz      r0, 0x14(r3)
	cmplwi   r0, 0
	bne      lbl_801A41BC
	stw      r31, 0x14(r3)
	stw      r3, 0x18(r31)
	b        lbl_801A41DC

lbl_801A41D8:
	stw      r31, 0x1c(r4)

lbl_801A41DC:
	stw      r4, 0x10(r31)
	addi     r28, r28, -1

lbl_801A41E4:
	lwz      r4, 0(r24)
	lwz      r3, 0x24(r4)
	cmplwi   r3, 0
	beq      lbl_801A41FC
	cmpwi    r28, 0
	bgt      lbl_801A3D98

lbl_801A41FC:
	lwz      r0, 0x24(r4)
	cmplwi   r0, 0
	bne      lbl_801A4210
	li       r3, 1
	b        lbl_801A4214

lbl_801A4210:
	li       r3, 2

lbl_801A4214:
	lmw      r24, 0x20(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
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

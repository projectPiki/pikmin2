#include "sysMath.h"
#include "Dolphin/math.h"
#include "Game/cellPyramid.h"
#include "BaseParm.h"
#include "CellMgrParms.h"
#include "Dolphin/math.h"
#include "fdlibm.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "P2Macros.h"

namespace Game {

CellPyramid* cellMgr;
CellPyramid* platCellMgr;
CellPyramid* mapRoomCellMgr;
bool CellPyramid::disableAICulling;
u8 CellPyramid::sSpeedUpResolveColl;
CellPyramid* Cell::sCurrCellMgr;
int CellPyramid::sCellBugID;

u8 CellPyramid::sOptResolveColl = 1;
char* CellPyramid::sCellBugName = "cellPyramid";

/*
 * --INFO--
 * Address:	801565C8
 * Size:	0000C4
 */
void CellPyramid::mapSearch(Sys::Sphere& sphere, IDelegate1<CellObject*>* delegate)
{
	Recti rect;
	int layerIndex;
	calcExtent(sphere, layerIndex, rect);

	mPassID += 1;
	if (0x4000000 <= mPassID) {
		mPassID = 0;
	}

	u32 passID       = mPassID;
	CellLayer* layer = &mLayers[layerIndex];

	for (int x = rect.p1.x; x <= rect.p2.x; ++x) {
		for (int y = rect.p1.y; y <= rect.p2.y; ++y) {
			Cell* cell = (*layer)(x, y);
			if (cell) {
				cell->mapSearch(delegate, passID);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	8015668C
 * Size:	0000B4
 */
void CellObject::exitCell()
{
	bool isFakePiki = (isPiki() || isNavi());
	for (int i = 0; i < 4; i++) {
		Cell* cell = mCellLegs[i].mCell;
		if (cell) {
			cell->exit(&mCellLegs[i], isFakePiki);
			mCellLegs[i].mCell = nullptr;
		}
	}
}

/*
 * --INFO--
 * Address:	80156740
 * Size:	00003C
 */
Cell::Cell()
{
	mNeighboringCells[3] = nullptr;
	mNeighboringCells[2] = nullptr;
	mNeighboringCells[1] = nullptr;
	mNeighboringCells[0] = nullptr;
	mLeg                 = nullptr;
	mHeadCell            = nullptr;
	mLocalPikiNaviCount  = 0;
	mTotalPikiNaviCount  = 0;
	mTotalObjectCount    = 0;
	mPrevCell            = nullptr;
	mNextCell            = nullptr;
	mLayerIdx            = -1;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void Cell::clear()
{
	mLeg              = nullptr;
	mTotalObjectCount = 0;
}

/*
 * --INFO--
 * Address:	8015677C
 * Size:	0000C4
 */
void Cell::mapSearch(IDelegate1<CellObject*>* delegate, u32 passID)
{
	for (CellLeg* leg = mLeg; leg != nullptr; leg = leg->mNext) {
		if (leg->mObject->mPassID != passID) {
			leg->mObject->mPassID = passID;
			delegate->invoke(leg->mObject);
		}
	}
	for (Cell* cell = mHeadCell; cell != nullptr; cell = cell->mHeadCell) {
		cell->mapSearchUp(delegate, passID);
	}
	for (int cellIndex = 0; cellIndex < 4; cellIndex++) {
		if (mNeighboringCells[cellIndex]) {
			mNeighboringCells[cellIndex]->mapSearchDown(delegate, passID);
		}
	}
}

/*
 * This and mapSearchDown get recursively inlined a few times for stack
 * efficiency. Quite beautiful, really.
 *
 * --INFO--
 * Address:	80156840
 * Size:	000238
 */
void Cell::mapSearchUp(IDelegate1<CellObject*>* delegate, u32 passID)
{
	for (CellLeg* leg = mLeg; leg != nullptr; leg = leg->mNext) {
		if (leg->mObject->mPassID != passID) {
			leg->mObject->mPassID = passID;
			delegate->invoke(leg->mObject);
		}
	}
	for (Cell* cell = mHeadCell; cell != nullptr; cell = cell->mHeadCell) {
		cell->mapSearchUp(delegate, passID);
	}
}

/*
 * --INFO--
 * Address:	80156A78
 * Size:	000280
 */
void Cell::mapSearchDown(IDelegate1<CellObject*>* delegate, u32 passID)
{
	for (CellLeg* leg = mLeg; leg != nullptr; leg = leg->mNext) {
		if (leg->mObject->mPassID != passID) {
			leg->mObject->mPassID = passID;
			delegate->invoke(leg->mObject);
		}
	}
	for (int cellIndex = 0; cellIndex < 4; cellIndex++) {
		if (mNeighboringCells[cellIndex]) {
			mNeighboringCells[cellIndex]->mapSearchDown(delegate, passID);
		}
	}
}

/*
 * --INFO--
 * Address:	80156CF8
 * Size:	00004C
 */
void Cell::resolveCollision()
{
	if (CellMgrParms::getInstance()->mCellParms.mP000()) {
		resolveCollision_3();
	} else {
		(CellMgrParms::getInstance()->mCellParms.mP001()) ? resolveCollision_1() : resolveCollision_2();
	}
}

/*
 * --INFO--
 * Address:	80156D44
 * Size:	000004
 */
void CellPyramid::initFrame() { }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
u32 CellPyramid::getCheckCount() { return mPassID; }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000018
//  */
// void Cell::dump()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
// void Cell::hasLeg(CellLeg*)
// bool Cell::hasLeg(CellLeg&)
// {
// 	// UNUSED FUNCTION
// }

// inline float temp(float input) {
// 	if (input > 0.0f) {
// 		return (float)__frsqrte(input) * input;
// 	}
// 	return 0.0f;
// }

// inline float fakepikmin2_sqrtf(float x)
// {
// 	if (!(x > 0.0f)) { // if x <= 0
// 		return x;
// 	}

// 	register float reg1 = x;
// 	register float reg2 = 0.0f;
// 	register float result;

// 	asm {
//       frsqrte reg2, reg1
//       fmuls result, reg2, reg1
// 	}

// 	return result;
// }

// float qdist32(float x1, float y1, float z1, float x2, float y2, float z2)
// {
// 	float xdiff = (x2 - x1);
// 	float ydiff = (y2 - y1);
// 	float zdiff = (z2 - z1);

// 	float dist = (SQUARE(xdiff) + SQUARE(ydiff) + SQUARE(zdiff));
// 	if (dist > 0.0f) {
// 		dist *= (__frsqrte(dist));
// 	} else {
// 		dist = 0.0f;
// 	}
// 	return dist;
// }

/*
 * --INFO--
 * Address:	........
 * Size:	0000B8
 * 46(dec) instructions
 */
float CellObject::calcCollisionDistance(CellObject* them)
{
	// basically same function as calcSphereDistance from creature.cpp
	Sys::Sphere ourBounds;
	Sys::Sphere theirBounds;
	getBoundingSphere(ourBounds);
	them->getBoundingSphere(theirBounds);
	Vector3f sepVec = ourBounds.mPosition - theirBounds.mPosition;
	f32 dist        = _length(sepVec); // regswaps
	return dist - (ourBounds.mRadius + theirBounds.mRadius);
}

/*
 * --INFO--
 * Address:	80156D48
 * Size:	0000D0
 */
void CellObject::updateCollisionBuffer(CellObject* them) { mCollisionBuffer.insert(them, calcCollisionDistance(them)); }

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
inline void CellObject::resolveUsingBuffer()
{
	// UNUSED FUNCTION
}

/*
 * __ct__Q24Game15CollisionBufferFv
 *
 * --INFO--
 * Address:	80156E18
 * Size:	000018
 */
CollisionBuffer::CollisionBuffer()
{
	mCellObject    = nullptr;
	mCollNodes     = nullptr;
	mUsedNodeCount = 0;
	mNodeCount     = 0;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
// inline bool CollisionBuffer::isAvailable()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
inline void CollisionBuffer::init(CellObject*, CollNode*, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80156E30
 * Size:	00006C
 */
void CollisionBuffer::alloc(CellObject* object, int nodeCount)
{
	mCellObject    = object;
	mNodeCount     = nodeCount;
	mUsedNodeCount = 0;
	mCollNodes     = new CollNode[mNodeCount];
}

/*
 * __ct__Q24Game8CollNodeFv
 *
 * --INFO--
 * Address:	80156E9C
 * Size:	000014
 */
CollNode::CollNode()
    : mCellObject(nullptr)
    , _04(0.0f)
{
}

/*
 * clear__Q24Game15CollisionBufferFv
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void CollisionBuffer::clear()
{
	mUsedNodeCount = 0;
	for (int nodeIndex = 0; nodeIndex < mNodeCount; nodeIndex++) {
		mCollNodes[nodeIndex].mCellObject = nullptr;
		mCollNodes[nodeIndex]._04         = 100000.0f;
	}
}

/*
 * --INFO--
 * Address:	80156EB0
 * Size:	0000B8
 */
void CollisionBuffer::insert(CellObject* newObject, float distance)
{
	CellObject* object = mCellObject;
	if (object) {
		if (object->deferPikiCollision()) {
			(newObject->isPiki()) ? pikiInsertPiki(newObject, distance) : pikiInsertOther(newObject, distance);
		} else {
			insertSort(newObject, distance);
		}
	}
}

/*
 * This seems expensive.
 * I wonder why they didn't use a linked list...
 *
 * --INFO--
 * Address:	80156F68
 * Size:	000128
 */
void CollisionBuffer::pikiInsertPiki(CellObject* object, float distance)
{
	if (findIndex(object) == -1) {
		int nodeIndex = mUsedNodeCount - 1;
		// Find the index the object should be inserted at,
		// and shift objects after that index along the way.
		for (; (nodeIndex >= 0); nodeIndex--) {
			// for (; nodeIndex >= 0 && mCollNodes[nodeIndex]._04 > distance && mCollNodes->mCellObject->isPiki();
			// nodeIndex--) {
			if (!(mCollNodes[nodeIndex]._04 > distance && mCollNodes[nodeIndex].mCellObject->isPiki())) {
				break;
			}
			if (nodeIndex + 1 < mNodeCount) {
				mCollNodes[nodeIndex + 1].mCellObject = mCollNodes[nodeIndex].mCellObject;
				mCollNodes[nodeIndex + 1]._04         = mCollNodes[nodeIndex]._04;
			}
		}
		// Insert the object.
		if (nodeIndex + 1 < mNodeCount) {
			mCollNodes[nodeIndex + 1].mCellObject = object;
			mCollNodes[nodeIndex + 1]._04         = distance;
			if (mUsedNodeCount < mNodeCount) {
				mUsedNodeCount++;
			}
		}
	}
}

/*
 * --INFO--
 * Address:	80157090
 * Size:	000128
 */
void CollisionBuffer::pikiInsertOther(CellObject* object, float distance)
{
	if (findIndex(object) == -1) {
		int nodeIndex = mUsedNodeCount - 1;
		// Find the index the object should be inserted at,
		// and shift objects after that index along the way.
		for (; (nodeIndex >= 0); nodeIndex--) {
			// for (; nodeIndex >= 0 && mCollNodes[nodeIndex]._04 > distance && mCollNodes->mCellObject->isPiki();
			// nodeIndex--) {
			if (!(mCollNodes[nodeIndex]._04 > distance || mCollNodes[nodeIndex].mCellObject->isPiki())) {
				break;
			}
			if (nodeIndex + 1 < mNodeCount) {
				mCollNodes[nodeIndex + 1].mCellObject = mCollNodes[nodeIndex].mCellObject;
				mCollNodes[nodeIndex + 1]._04         = mCollNodes[nodeIndex]._04;
			}
		}
		// Insert the object.
		if (nodeIndex + 1 < mNodeCount) {
			mCollNodes[nodeIndex + 1].mCellObject = object;
			mCollNodes[nodeIndex + 1]._04         = distance;
			if (mUsedNodeCount < mNodeCount) {
				mUsedNodeCount++;
			}
		}
	}
}

/*
 * --INFO--
 * Address:	801571B8
 * Size:	0000F8
 */
void CollisionBuffer::insertSort(CellObject* object, float distance)
{
	if (findIndex(object) == -1) {
		int index = mUsedNodeCount - 1;
		for (; index >= 0; index--) {
			if (!(mCollNodes[index]._04 > distance)) {
				break;
			}
			if (index + 1 < mNodeCount) {
				mCollNodes[index + 1].mCellObject = mCollNodes[index].mCellObject;
				mCollNodes[index + 1]._04         = mCollNodes[index]._04;
			}
		}
		if (index + 1 < mNodeCount) {
			mCollNodes[index + 1].mCellObject = object;
			mCollNodes[index + 1]._04         = distance;
			if (mUsedNodeCount < mNodeCount) {
				mUsedNodeCount++;
			}
		}
	}
}

/*
 * --INFO--
 * Address:	801572B0
 * Size:	000044
 */
int CollisionBuffer::findIndex(CellObject* object)
{
	for (int i = mUsedNodeCount, index = 0; 0 < i; ++index, --i) {
		if (mCollNodes[index].mCellObject == object) {
			return index;
		}
	}
	return -1;
}

/*
 * resolveCollision__Q24Game9Cell
 *
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
inline void CellLayer::resolveCollision()
{
	for (int i = 0; i < mSizeX * mSizeY; ++i) {
		if (mCells[i].mLeg) {
			mCells[i].resolveCollision();
		}
	}
}

/*
 * resolveCollision__Q24Game11CellPyramidFv
 *
 * --INFO--
 * Address:	801572F4
 * Size:	000244
 */
void CellPyramid::resolveCollision()
{
	// if (0x3ffffff < ++mPassID) {
	// 	mPassID = 0;
	// }
	mPassID += 1;
	if (0x4000000 <= mPassID) {
		mPassID = 0;
	}
	switch (sOptResolveColl) {
	case 3:
		SweepCallback callback;
		ResolveArg arg;
		arg.mCallback = &callback;
		resolve(arg);
		break;
	case 0:
		for (int i = 0; i < mLayerCount; i++) {
			mLayers[i].resolveCollision();
		}
		break;
	case 1:
		if (true) {
			CellLayer* layer = &mLayers[mLayerCount - 1];
			for (int i = 0; i < layer->mSizeX * layer->mSizeY; i++) {
				Cell* cell = &layer->mCells[i];
				if (cell->mTotalObjectCount != 0) {
					cell->rec_resolveColl();
				}
			}
		}
		break;
	case 2:
		if (sSpeedUpResolveColl) {
			for (int i = 0; i < mLayerCount; i++) {
				for (Cell* cell = mLayers[i].mCell.mNextCell; cell != nullptr; cell = cell->mNextCell) {
					if (cell->mTotalObjectCount != 0) {
						cell->resolveCollision_3();
					}
				}
			}
		} else {
			for (int i = 0; i < mLayerCount; i++) {
				for (Cell* cell = mLayers[i].mCell.mNextCell; cell != nullptr; cell = cell->mNextCell) {
					if (cell->mTotalObjectCount != 0) {
						cell->resolveCollision_1();
					}
				}
			}
		}
		break;
	}
}

/*
 * The inlining on this function is fascinating.
 *
 * --INFO--
 * Address:	80157538
 * Size:	000294
 */
inline void Cell::rec_resolveColl()
{
	for (int i = 0; i < 4; i++) {
		if ((mNeighboringCells[i] != nullptr) && (1 < mNeighboringCells[i]->mTotalObjectCount)) {
			mNeighboringCells[i]->rec_resolveColl();
		}
	}

	resolveCollision();
}

/*
 * clearAllCollBuffer__Q24Game4CellFv
 * --INFO--
 * Address:	........
 * Size:	000064 (25 instructions)
 */
void Cell::clearAllCollBuffer()
{
	// UNUSED FUNCTION
	// if (mLeg ) {
	for (CellLeg* leg = mLeg; leg != nullptr; leg = leg->mNext) {
		if (leg->mObject) {
			leg->mObject->mCollisionBuffer.clear();
		}
		// CellObject* object = leg->mObject;
		// if (object ) {
		// 	object->mCollisionBuffer.clear();
		// }
	}
	// }
}

/*
 * clearAllCollBuffer__Q24Game9CellLayerFv
 * --INFO--
 * Address:	........
 * Size:	00009C (39 instructions)
 */
void CellLayer::clearAllCollBuffer()
{
	// UNUSED FUNCTION
	for (int i = 0; i < mSizeX * mSizeY; i++) {
		if (mCells[i].mLeg) {
			mCells[i].clearAllCollBuffer();
		}
	}
}

/*
 * This probably calls (CellLayer|Cell)::clearAllCollBuffer.
 * clearAllCollBuffer__Q24Game11CellPyramidFv
 *
 * --INFO--
 * Address:	801577DC
 * Size:	0000DC
 */
void CellPyramid::clearAllCollBuffer()
{
	for (int layerIndex = 0; layerIndex < mLayerCount; layerIndex++) {
		mLayers[layerIndex].clearAllCollBuffer();
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
inline void Cell::appendList()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
inline void Cell::remove()
{
	// UNUSED FUNCTION
}

/*
 * exit__Q24Game4CellFPQ24Game7CellLegb
 * --INFO--
 * Address:	801578B8
 * Size:	000158
 */
inline void Cell::exit(CellLeg* exitingLeg, bool isPikiOrNavi)
{
	// If the exiting leg is the current leg, update the current leg
	if (mLeg == exitingLeg) {
		mLeg = exitingLeg->mNext;
		if (mLeg) {
			mLeg->mPrev = nullptr;
		}
	}

	// If the exiting object is a Piki or Navi, update the local and total counts
	if ((isPikiOrNavi) && (mLocalPikiNaviCount != 0)) {
		mLocalPikiNaviCount--;
		for (Cell* currentCell = mHeadCell; currentCell != nullptr; currentCell = currentCell->mHeadCell) {
			currentCell->mTotalPikiNaviCount--;
		}
	}

	// Decrease the total object count for this cell and all cells above it
	mTotalObjectCount--;
	for (Cell* currentCell = mHeadCell; currentCell != nullptr; currentCell = currentCell->mHeadCell) {
		currentCell->mTotalObjectCount--;
	}

	// Update the previous leg's next leg if it exists
	CellLeg* previousLeg = exitingLeg->mPrev;
	if (previousLeg) {
		previousLeg->mNext = exitingLeg->mNext;
	}

	// Update the next leg's previous leg if it exists
	CellLeg* nextLeg = exitingLeg->mNext;
	if (nextLeg) {
		nextLeg->mPrev = exitingLeg->mPrev;
	}

	// Clear the exiting leg's previous and next legs
	exitingLeg->mPrev = nullptr;
	exitingLeg->mNext = nullptr;

	// If there are no more legs and a current cell manager exists, remove this cell from the cell list
	if ((mLeg == nullptr) && (Cell::sCurrCellMgr != nullptr)) {
		P2ASSERTLINE(786, Cell::sCurrCellMgr != nullptr);
		if (mPrevCell) {
			mPrevCell->mNextCell = mNextCell;
			if (mNextCell) {
				mNextCell->mPrevCell = mPrevCell;
			}
		}
		mPrevCell = nullptr;
		mNextCell = nullptr;
	}
}

/*
 * --INFO--
 * Address:	80157A10
 * Size:	0002EC
 */
void Cell::entry(CellLeg* leg, bool isPikiOrNavi)
{
	P2ASSERTLINE(836, leg != nullptr);
	if (leg->mCell) {
		leg->mCell->exit(leg, isPikiOrNavi);
	}

	CellLeg* nextLeg;
	CellLeg* currLeg = mLeg;

	if (currLeg) {
		if (currLeg != leg) {
			nextLeg        = currLeg->mNext;
			currLeg->mNext = leg;
			leg->mNext     = nextLeg;
			leg->mPrev     = currLeg;
			if (nextLeg) {
				nextLeg->mPrev = leg;
			}
		}
	} else {
		mLeg        = leg;
		mLeg->mNext = nullptr;
		mLeg->mPrev = nullptr;
	}

	leg->mCell = this;

	bool legCheck = mLeg->findLeg(leg);
	if (!legCheck) {
		JUT_PANICLINE(855, "leg entry failed !\n");
	}

	if (isPikiOrNavi) {
		mLocalPikiNaviCount++;

		for (Cell* c = mHeadCell; c; c = c->mHeadCell) {
			c->mTotalPikiNaviCount++;
		}
	}

	mTotalObjectCount++;
	for (Cell* c = mHeadCell; c; c = c->mHeadCell) {
		c->mTotalObjectCount++;
	}

	Cell* currCell3 = mPrevCell;
	if (!currCell3 && Cell::sCurrCellMgr) {
		P2ASSERTLINE(763, Cell::sCurrCellMgr);

		Cell* layerCell = &Cell::sCurrCellMgr->mLayers[mLayerIdx].mCell;
		Cell* nextCell  = layerCell->mNextCell;

		if (nextCell) {
			mNextCell            = nextCell;
			mNextCell->mPrevCell = this;
			mPrevCell            = layerCell;
			layerCell->mNextCell = this;
		} else {
			layerCell->mNextCell = this;
			mPrevCell            = layerCell;
		}
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
inline void CellLayer::clear()
{
	// UNUSED FUNCTION
	mCell.mNextCell = nullptr;
	mCell.mPrevCell = nullptr;
	for (int i = 0; i < mSizeX * mSizeY; i++) {
		mCells[i].clear();
		mCells[i].mLayerIdx = mLayerIdx;
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
inline void CellLayer::createBottom(int, int) // might be x and y
{
	// UNUSED FUNCTION
}

/*
 * __cl__Q24Game9Cell
 *
 * --INFO--
 * Address:	80157CFC
 * Size:	000048
 */
inline Cell* CellLayer::operator()(int x, int y)
{
	if ((0 > x) || (0 > y) || (x >= mSizeX) || (y >= mSizeY)) {
		return nullptr;
	}
	return &mCells[x + y * mSizeX];
}

/*
 * --INFO--
 * Address:	80157D44
 * Size:	000578
 */
void CellLayer::pileup(CellLayer&)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lfd      f2, lbl_80518638@sda21(r2)
	stw      r0, 0x44(r1)
	lis      r0, 0x4330
	lfs      f0, lbl_80518630@sda21(r2)
	stw      r31, 0x3c(r1)
	mr       r31, r4
	stw      r30, 0x38(r1)
	mr       r30, r3
	stw      r29, 0x34(r1)
	lhz      r4, 4(r4)
	stw      r0, 8(r1)
	rlwinm   r0, r4, 1, 0x10, 0x1e
	sth      r0, 4(r3)
	lhz      r3, 6(r31)
	addi     r0, r3, 1
	sth      r0, 6(r30)
	lhz      r0, 0(r31)
	stw      r0, 0xc(r1)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f2
	fmuls    f1, f1, f0
	bl       ceil
	frsp     f0, f1
	lis      r0, 0x4330
	stw      r0, 0x18(r1)
	lfd      f2, lbl_80518638@sda21(r2)
	fctiwz   f1, f0
	lfs      f0, lbl_80518630@sda21(r2)
	stfd     f1, 0x10(r1)
	lwz      r0, 0x14(r1)
	sth      r0, 0(r30)
	lhz      r0, 2(r31)
	stw      r0, 0x1c(r1)
	lfd      f1, 0x18(r1)
	fsubs    f1, f1, f2
	fmuls    f1, f1, f0
	bl       ceil
	frsp     f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	sth      r0, 2(r30)
	lhz      r3, 0(r30)
	lhz      r0, 2(r30)
	mullw    r29, r3, r0
	mulli    r3, r29, 0x2c
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q24Game4CellFv@ha
	mr       r7, r29
	addi     r4, r4, __ct__Q24Game4CellFv@l
	li       r5, 0
	li       r6, 0x2c
	bl       __construct_new_array
	stw      r3, 8(r30)
	li       r5, 0
	li       r6, 0
	stw      r5, 0x2c(r30)
	stw      r5, 0x30(r30)
	b        lbl_80157E54

lbl_80157E3C:
	lhz      r4, 6(r30)
	addi     r0, r5, 0x28
	lwz      r3, 8(r30)
	addi     r5, r5, 0x2c
	addi     r6, r6, 1
	sthx     r4, r3, r0

lbl_80157E54:
	lhz      r3, 0(r30)
	lhz      r0, 2(r30)
	mullw    r0, r3, r0
	cmpw     r6, r0
	blt      lbl_80157E3C
	li       r6, 0
	li       r5, 0
	b        lbl_80158294

lbl_80157E74:
	li       r7, 0
	li       r4, 0
	b        lbl_80158280

lbl_80157E80:
	cmpwi    r6, 0
	blt      lbl_80157EA4
	cmpwi    r7, 0
	blt      lbl_80157EA4
	lhz      r3, 0(r30)
	cmpw     r6, r3
	bge      lbl_80157EA4
	cmpw     r7, r0
	blt      lbl_80157EAC

lbl_80157EA4:
	li       r3, 0
	b        lbl_80157EC0

lbl_80157EAC:
	mullw    r0, r7, r3
	lwz      r3, 8(r30)
	add      r0, r6, r0
	mulli    r0, r0, 0x2c
	add      r3, r3, r0

lbl_80157EC0:
	cmpwi    r5, 0
	blt      lbl_80157EE8
	cmpwi    r4, 0
	blt      lbl_80157EE8
	lhz      r8, 0(r31)
	cmpw     r5, r8
	bge      lbl_80157EE8
	lhz      r0, 2(r31)
	cmpw     r4, r0
	blt      lbl_80157EF0

lbl_80157EE8:
	li       r8, 0
	b        lbl_80157F04

lbl_80157EF0:
	mullw    r0, r4, r8
	lwz      r8, 8(r31)
	add      r0, r5, r0
	mulli    r0, r0, 0x2c
	add      r8, r8, r0

lbl_80157F04:
	addic.   r0, r5, 1
	stw      r8, 0(r3)
	blt      lbl_80157F34
	cmpwi    r4, 0
	blt      lbl_80157F34
	lhz      r8, 0(r31)
	addi     r0, r5, 1
	cmpw     r0, r8
	bge      lbl_80157F34
	lhz      r0, 2(r31)
	cmpw     r4, r0
	blt      lbl_80157F3C

lbl_80157F34:
	li       r0, 0
	b        lbl_80157F54

lbl_80157F3C:
	mullw    r0, r4, r8
	lwz      r9, 8(r31)
	add      r8, r5, r0
	addi     r0, r8, 1
	mulli    r0, r0, 0x2c
	add      r0, r9, r0

lbl_80157F54:
	cmpwi    r5, 0
	stw      r0, 4(r3)
	blt      lbl_80157F84
	addic.   r0, r4, 1
	blt      lbl_80157F84
	lhz      r9, 0(r31)
	cmpw     r5, r9
	bge      lbl_80157F84
	lhz      r0, 2(r31)
	addi     r8, r4, 1
	cmpw     r8, r0
	blt      lbl_80157F8C

lbl_80157F84:
	li       r8, 0
	b        lbl_80157FA0

lbl_80157F8C:
	mullw    r0, r8, r9
	lwz      r8, 8(r31)
	add      r0, r5, r0
	mulli    r0, r0, 0x2c
	add      r8, r8, r0

lbl_80157FA0:
	addic.   r0, r5, 1
	stw      r8, 8(r3)
	blt      lbl_80157FD4
	addic.   r0, r4, 1
	blt      lbl_80157FD4
	lhz      r9, 0(r31)
	addi     r0, r5, 1
	cmpw     r0, r9
	bge      lbl_80157FD4
	lhz      r0, 2(r31)
	addi     r8, r4, 1
	cmpw     r8, r0
	blt      lbl_80157FDC

lbl_80157FD4:
	li       r0, 0
	b        lbl_80157FF4

lbl_80157FDC:
	mullw    r0, r8, r9
	lwz      r9, 8(r31)
	add      r8, r5, r0
	addi     r0, r8, 1
	mulli    r0, r0, 0x2c
	add      r0, r9, r0

lbl_80157FF4:
	cmpwi    r5, 0
	stw      r0, 0xc(r3)
	blt      lbl_80158020
	cmpwi    r4, 0
	blt      lbl_80158020
	lhz      r8, 0(r31)
	cmpw     r5, r8
	bge      lbl_80158020
	lhz      r0, 2(r31)
	cmpw     r4, r0
	blt      lbl_80158028

lbl_80158020:
	li       r0, 0
	b        lbl_8015803C

lbl_80158028:
	mullw    r0, r4, r8
	lwz      r8, 8(r31)
	add      r0, r5, r0
	mulli    r0, r0, 0x2c
	add      r0, r8, r0

lbl_8015803C:
	cmplwi   r0, 0
	beq      lbl_8015808C
	cmpwi    r5, 0
	blt      lbl_8015806C
	cmpwi    r4, 0
	blt      lbl_8015806C
	lhz      r8, 0(r31)
	cmpw     r5, r8
	bge      lbl_8015806C
	lhz      r0, 2(r31)
	cmpw     r4, r0
	blt      lbl_80158074

lbl_8015806C:
	li       r8, 0
	b        lbl_80158088

lbl_80158074:
	mullw    r0, r4, r8
	lwz      r8, 8(r31)
	add      r0, r5, r0
	mulli    r0, r0, 0x2c
	add      r8, r8, r0

lbl_80158088:
	stw      r3, 0x10(r8)

lbl_8015808C:
	addic.   r0, r5, 1
	blt      lbl_801580B8
	cmpwi    r4, 0
	blt      lbl_801580B8
	lhz      r8, 0(r31)
	addi     r0, r5, 1
	cmpw     r0, r8
	bge      lbl_801580B8
	lhz      r0, 2(r31)
	cmpw     r4, r0
	blt      lbl_801580C0

lbl_801580B8:
	li       r0, 0
	b        lbl_801580D8

lbl_801580C0:
	mullw    r0, r4, r8
	lwz      r9, 8(r31)
	add      r8, r5, r0
	addi     r0, r8, 1
	mulli    r0, r0, 0x2c
	add      r0, r9, r0

lbl_801580D8:
	cmplwi   r0, 0
	beq      lbl_80158130
	addic.   r0, r5, 1
	blt      lbl_8015810C
	cmpwi    r4, 0
	blt      lbl_8015810C
	lhz      r8, 0(r31)
	addi     r0, r5, 1
	cmpw     r0, r8
	bge      lbl_8015810C
	lhz      r0, 2(r31)
	cmpw     r4, r0
	blt      lbl_80158114

lbl_8015810C:
	li       r8, 0
	b        lbl_8015812C

lbl_80158114:
	mullw    r0, r4, r8
	lwz      r9, 8(r31)
	add      r8, r5, r0
	addi     r0, r8, 1
	mulli    r0, r0, 0x2c
	add      r8, r9, r0

lbl_8015812C:
	stw      r3, 0x10(r8)

lbl_80158130:
	cmpwi    r5, 0
	blt      lbl_8015815C
	addic.   r0, r4, 1
	blt      lbl_8015815C
	lhz      r9, 0(r31)
	cmpw     r5, r9
	bge      lbl_8015815C
	lhz      r0, 2(r31)
	addi     r8, r4, 1
	cmpw     r8, r0
	blt      lbl_80158164

lbl_8015815C:
	li       r0, 0
	b        lbl_80158178

lbl_80158164:
	mullw    r0, r8, r9
	lwz      r8, 8(r31)
	add      r0, r5, r0
	mulli    r0, r0, 0x2c
	add      r0, r8, r0

lbl_80158178:
	cmplwi   r0, 0
	beq      lbl_801581CC
	cmpwi    r5, 0
	blt      lbl_801581AC
	addic.   r0, r4, 1
	blt      lbl_801581AC
	lhz      r9, 0(r31)
	cmpw     r5, r9
	bge      lbl_801581AC
	lhz      r0, 2(r31)
	addi     r8, r4, 1
	cmpw     r8, r0
	blt      lbl_801581B4

lbl_801581AC:
	li       r8, 0
	b        lbl_801581C8

lbl_801581B4:
	mullw    r0, r8, r9
	lwz      r8, 8(r31)
	add      r0, r5, r0
	mulli    r0, r0, 0x2c
	add      r8, r8, r0

lbl_801581C8:
	stw      r3, 0x10(r8)

lbl_801581CC:
	addic.   r0, r5, 1
	blt      lbl_801581FC
	addic.   r0, r4, 1
	blt      lbl_801581FC
	lhz      r9, 0(r31)
	addi     r0, r5, 1
	cmpw     r0, r9
	bge      lbl_801581FC
	lhz      r0, 2(r31)
	addi     r8, r4, 1
	cmpw     r8, r0
	blt      lbl_80158204

lbl_801581FC:
	li       r0, 0
	b        lbl_8015821C

lbl_80158204:
	mullw    r0, r8, r9
	lwz      r9, 8(r31)
	add      r8, r5, r0
	addi     r0, r8, 1
	mulli    r0, r0, 0x2c
	add      r0, r9, r0

lbl_8015821C:
	cmplwi   r0, 0
	beq      lbl_80158278
	addic.   r0, r5, 1
	blt      lbl_80158254
	addic.   r0, r4, 1
	blt      lbl_80158254
	lhz      r9, 0(r31)
	addi     r0, r5, 1
	cmpw     r0, r9
	bge      lbl_80158254
	lhz      r0, 2(r31)
	addi     r8, r4, 1
	cmpw     r8, r0
	blt      lbl_8015825C

lbl_80158254:
	li       r8, 0
	b        lbl_80158274

lbl_8015825C:
	mullw    r0, r8, r9
	lwz      r9, 8(r31)
	add      r8, r5, r0
	addi     r0, r8, 1
	mulli    r0, r0, 0x2c
	add      r8, r9, r0

lbl_80158274:
	stw      r3, 0x10(r8)

lbl_80158278:
	addi     r4, r4, 2
	addi     r7, r7, 1

lbl_80158280:
	lhz      r0, 2(r30)
	cmpw     r7, r0
	blt      lbl_80157E80
	addi     r5, r5, 2
	addi     r6, r6, 1

lbl_80158294:
	lhz      r0, 0(r30)
	cmpw     r6, r0
	blt      lbl_80157E74
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
// void drawCell__Q24Game9CellLayerFR8GraphicsR10Vector3f iif()
inline void CellLayer::drawCell(Graphics&, Vector3f&, int, int, float) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801582BC
 * Size:	00003C
 */
CellPyramid::CellPyramid()
{
	mLayerCount = 0;
	mFreeMemory = 0;
}

/*
 * clear__Q24Game11CellPyramidFv
 *
 * --INFO--
 * Address:	801582F8
 * Size:	000098
 */
void CellPyramid::clear()
{
	for (int i = 0; i < mLayerCount; i++) {
		mLayers[i].clear();
	}
	mPassID      = 0;
	mXNode.mNext = 0;
	mXNode.mPrev = 0;
	mZNode.mNext = 0;
	mZNode.mPrev = 0;
}

/*
 * --INFO--
 * Address:	80158390
 * Size:	000190
 */
// void calcExtent__Q24Game11CellPyramidFRQ23Sys6SphereRiR7Rect<i>()
void CellPyramid::calcExtent(Sys::Sphere&, int&, Recti&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stfd      f31, 0x60(r1)
	  psq_st    f31,0x68(r1),0,0
	  stfd      f30, 0x50(r1)
	  psq_st    f30,0x58(r1),0,0
	  stw       r31, 0x4C(r1)
	  stw       r30, 0x48(r1)
	  stw       r29, 0x44(r1)
	  stw       r28, 0x40(r1)
	  mr        r29, r4
	  mr        r28, r3
	  lfs       f2, -0x5D18(r2)
	  mr        r30, r5
	  lfs       f1, 0xC(r4)
	  mr        r31, r6
	  lfs       f0, 0x38(r3)
	  fmuls     f2, f2, f1
	  lfd       f1, -0x5D10(r2)
	  fmuls     f30, f2, f0
	  bl        -0x889F8
	  frsp      f31, f1
	  fmr       f1, f30
	  bl        -0x88A04
	  frsp      f1, f1
	  lfs       f0, -0x5D38(r2)
	  fdivs     f1, f1, f31
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x7C
	  fmr       f1, f0

	.loc_0x7C:
	  bl        -0x892C4
	  frsp      f0, f1
	  lwz       r3, 0x2C(r28)
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r5, 0xC(r1)
	  cmpw      r5, r3
	  blt-      .loc_0xA0
	  subi      r5, r3, 0x1

	.loc_0xA0:
	  mulli     r3, r5, 0x38
	  lis       r0, 0x4330
	  lwz       r4, 0x30(r28)
	  stw       r0, 0x10(r1)
	  addi      r0, r3, 0x4
	  lfd       f2, -0x5D28(r2)
	  lhzx      r0, r4, r0
	  lfs       f1, 0x34(r28)
	  stw       r0, 0x14(r1)
	  lfs       f3, -0x5D08(r2)
	  lfd       f0, 0x10(r1)
	  lfs       f5, 0xC(r29)
	  fsubs     f2, f0, f2
	  lfs       f4, 0x0(r29)
	  lfs       f6, 0x8(r29)
	  fsubs     f0, f4, f5
	  lfs       f8, 0x40(r28)
	  fmuls     f1, f2, f1
	  fadds     f2, f4, f5
	  lfs       f7, 0x3C(r28)
	  fsubs     f4, f6, f5
	  fdivs     f9, f3, f1
	  fsubs     f1, f0, f8
	  fsubs     f3, f4, f7
	  fadds     f0, f6, f5
	  fmuls     f1, f1, f9
	  fsubs     f4, f2, f8
	  fmuls     f2, f3, f9
	  fctiwz    f3, f1
	  fsubs     f0, f0, f7
	  fmuls     f1, f4, f9
	  fctiwz    f2, f2
	  stfd      f3, 0x18(r1)
	  fmuls     f0, f0, f9
	  fctiwz    f1, f1
	  lwz       r0, 0x1C(r1)
	  stfd      f2, 0x20(r1)
	  fctiwz    f0, f0
	  stfd      f1, 0x28(r1)
	  lwz       r3, 0x24(r1)
	  stw       r0, 0x0(r31)
	  lwz       r0, 0x2C(r1)
	  stw       r3, 0x4(r31)
	  stfd      f0, 0x30(r1)
	  stw       r0, 0x8(r31)
	  lwz       r0, 0x34(r1)
	  stw       r0, 0xC(r31)
	  stw       r5, 0x0(r30)
	  psq_l     f31,0x68(r1),0,0
	  lfd       f31, 0x60(r1)
	  psq_l     f30,0x58(r1),0,0
	  lfd       f30, 0x50(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  lwz       r29, 0x44(r1)
	  lwz       r0, 0x74(r1)
	  lwz       r28, 0x40(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * entry__Q24Game11CellPyramidFPQ24Game10CellObjectRQ23Sys6Sphere
 *
 * --INFO--
 * Address:	80158520
 * Size:	000034
 */
void CellPyramid::entry(CellObject* object, Sys::Sphere& sphere)
{
	int unusedInt;
	Rect<int> unusedRect;

	Cell::sCurrCellMgr = this;
	entry(object, sphere, unusedInt, unusedRect);
	Cell::sCurrCellMgr = nullptr;
}

// TODO: Finish this. It's pretty much one big ol' usage of inlined functions.
// I know that SysShape::Model::entry(Sys::Sphere&) exists, among others...
/*
 * entry__Q24Game11CellPyramidFPQ24Game10CellObjectRQ23Sys6SphereRiR7Rect
 *
 * --INFO--
 * Address:	80158554
 * Size:	0004B8
 */
// void entry__Q24Game11CellPyramidFPQ24Game10CellObjectRQ23Sys6SphereRiR7Rect<
//     int>()
void CellPyramid::entry(CellObject* object, Sys::Sphere& sphere, int& layerIndex, Recti& boundingRect)
{
	Cell::sCurrCellMgr = this;

	float sphereRadiusLog = log10(sphere.mRadius * 2.0f * mInverseScale);
	float log2            = log10(2.0f);
	float layerIndexFloat = (sphereRadiusLog / log2);

	// Ensure the layer is non-negative
	if (layerIndexFloat < 0.0f) {
		layerIndexFloat = 0.0f;
	}

	layerIndex = (int)ceil(MAX(layerIndexFloat, 0.0f));

	// Ensure that layerIndex is within bounds
	if (mLayerCount <= layerIndex) {
		layerIndex = mLayerCount - 1;
	}

	float sphereRadius       = sphere.mRadius;
	float sphereX            = sphere.mPosition.x;
	float sphereZ            = sphere.mPosition.z;
	float rightBoundary      = mRight;
	float leftBoundary       = mLeft;
	float inverseScaleFactor = 1.0f / ((mLayers[layerIndex].mLayerSize) * mScale);

	// Calculate the bounding rectangle
	boundingRect.p1.x = (int)(((sphereX - sphereRadius) - rightBoundary) * inverseScaleFactor);
	boundingRect.p1.y = (int)(((sphereZ - sphereRadius) - leftBoundary) * inverseScaleFactor);
	boundingRect.p2.x = (int)(((sphereX + sphereRadius) - rightBoundary) * inverseScaleFactor);
	boundingRect.p2.y = (int)(((sphereZ + sphereRadius) - leftBoundary) * inverseScaleFactor);

	// Update the layerIndex
	layerIndex = layerIndex;

	// Check if layerIndex is out of bounds
	if ((layerIndex < 0) || (mLayerCount <= layerIndex)) {
		JUT_PANICLINE(1206, "illegal layerLevel %d : out of bounds 0`%d\n", layerIndex, mLayerCount);
	}

	int objectLayerIndex    = 0;
	bool isPikiOrNavi       = false;
	CellLayer* currentLayer = &mLayers[layerIndex];
	bool isPiki             = object->isPiki();

	if ((isPiki != false) || (isPiki = object->isNavi(), isPiki != false)) {
		objectLayerIndex = 1;
		isPikiOrNavi     = true;
	}

	layerIndex = objectLayerIndex;

	for (int i = 0; i < 4; i++) {
		Cell* cell = object->mCellLegs->mCell;

		if (cell) {
			cell->exit(object->mCellLegs, isPikiOrNavi);

			if (cell->mLeg == object->mCellLegs) {
				cell->mLeg = object->mCellLegs->mNext;

				if (cell->mLeg) {
					cell->mLeg->mPrev = nullptr;
				}
			}

			if (isPikiOrNavi && cell->mLocalPikiNaviCount != 0) {
				cell->mLocalPikiNaviCount--;

				for (Cell* iCell = cell->mHeadCell; iCell != nullptr; iCell = iCell->mHeadCell) {
					iCell->mTotalPikiNaviCount--;
				}
			}

			cell->mTotalObjectCount--;
			for (Cell* iCell = cell->mHeadCell; iCell != nullptr; iCell = iCell->mHeadCell) {
				iCell->mTotalObjectCount--;
			}

			CellLeg* leg = object->mCellLegs->mPrev;

			if (leg != nullptr) {
				leg->mNext = object->mCellLegs->mNext;
			}

			leg = object->mCellLegs->mNext;

			if (leg) {
				leg->mPrev = object->mCellLegs->mPrev;
			}

			object->mCellLegs->mPrev = nullptr;
			object->mCellLegs->mNext = nullptr;

			if (cell->mLeg == nullptr && Cell::sCurrCellMgr != nullptr) {
				if (cell->mPrevCell) {
					cell->mPrevCell->mNextCell = cell->mNextCell;

					if (cell->mNextCell) {
						cell->mNextCell->mPrevCell = cell->mPrevCell;
					}
				}

				cell->mPrevCell = nullptr;
				cell->mNextCell = nullptr;
			}

			object->mCellLegs->mCell = nullptr;
		}
	}

	// int iVar9 = 0;

	// if (10 < (param_4.p2.x - param_4.p1.x) * (param_4.p2.y - param_4.p1.y)) {
	// 	for (int cellX = param_4.p1.x; cellX <= param_4.p2.x; cellX++) {
	// 		for (int cellY = param_4.p1.y; cellY <= param_4.p2.y; cellY++) {
	// 			Cell* cell = nullptr;

	// 			if (cellX >= 0 && cellY >= 0 && cellX < layer->mSizeX && cellY < layer->mSizeY) {
	// 				cell = &layer->mCells[cellX + (cellY * layer->mSizeX)];
	// 			}

	// 			if (cell) {
	// 				if (3 < iVar9) {
	// 					goto LAB_801589e8;
	// 				}

	// 				cell->entry(object->mCellLegs.arrayView, SUB41((uint)-iVar12 >> 0x1f, 0));

	// 				for (CellLeg* pCVar6 = cell->mLeg; pCVar6 != nullptr; pCVar6 = pCVar6->pNext) {
	// 					if (pCVar6 == object->mCellLegs) {
	// 						bVar5 = true;
	// 						goto LAB_80158994;
	// 					}
	// 				}

	// 				bVar5 = false;

	// 			LAB_80158994:
	// 				if (!bVar5) {
	// 					// Handle the case when leg entry fails (uncomment if needed)
	// 					// JUTException::panic_f("cellPyramid.cpp", 0x59f, "leg entry failed !!!!!!!!!!\n");
	// 				}
	// 			}

	// 			object = (CellObject*)&(object->sweepPruneObject).minX.flags;
	// 			object = (CellObject*)&(object->sweepPruneObject).minX.flags;
	// 			iVar9 += 1;
	// 		}
	// 	}
	// }
}

/*
 * --INFO--
 * Address:	80158A0C
 * Size:	0002EC
 */
void CellPyramid::create(BoundBox2d& box, float scale)
{
	mFreeMemory = JKRHeap::sCurrentHeap->getFreeSize();

	mLeft         = box.mBottom;
	mRight        = box.mLeft;
	mScale        = scale;
	mInverseScale = 1.0f / scale;

	// Calculate dimensions in pixels
	int pixelWidth  = (f32)ceil((FABS(box.mRight - box.mLeft) * mInverseScale));
	int pixelHeight = (f32)ceil(FABS(box.mTop - box.mBottom) * mInverseScale);

	if (pixelWidth > 200 || pixelHeight > 200) {
		mScale        = scale * 1.5f;
		mInverseScale = 1.0f / (scale * 1.5f);
		pixelWidth    = (f32)ceil((FABS(box.mRight - box.mLeft) * mInverseScale));
		pixelHeight   = (f32)ceil((FABS(box.mTop - box.mBottom) * mInverseScale));
	}

	int maxDimension = MAX(pixelHeight, pixelWidth);

	int layerCount = (f32)ceil((f32)log10((f32)maxDimension) / (f32)log10(2.0f));
	pow(2.0, (double)layerCount);

	mLayerCount                = layerCount + 1;
	mLayers                    = new CellLayer[mLayerCount];
	mLayers[0].mSizeX          = pixelWidth;
	mLayers[0].mSizeY          = pixelHeight;
	mLayers[0].mLayerSize      = 0;
	mLayers[0].mLayerIdx       = 1;
	mLayers[0].mCells          = new Cell[mLayers[0].mSizeX * mLayers[0].mSizeY];
	mLayers[0].mCell.mNextCell = nullptr;
	mLayers[0].mCell.mPrevCell = nullptr;

	for (int i = 0; i < mLayers[0].mSizeX * mLayers[0].mSizeY; i++) {
		mLayers[0].mCells[i].clear();
		mLayers[0].mCells[i].mLayerIdx = mLayers[0].mLayerIdx;
	}

	for (int i = 1; i < mLayerCount; i++) {
		mLayers[i].pileup(mLayers[i - 1]);
	}

	mFreeMemory = mFreeMemory - JKRHeap::sCurrentHeap->getFreeSize();
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stfd      f31, 0x60(r1)
	  psq_st    f31,0x68(r1),0,0
	  stfd      f30, 0x50(r1)
	  psq_st    f30,0x58(r1),0,0
	  stfd      f29, 0x40(r1)
	  psq_st    f29,0x48(r1),0,0
	  stmw      r27, 0x2C(r1)
	  fmr       f31, f1
	  mr        r31, r3
	  lwz       r3, -0x77D4(r13)
	  mr        r27, r4
	  bl        -0x135290
	  lfs       f0, -0x5D08(r2)
	  stw       r3, 0x28(r31)
	  fdivs     f0, f0, f31
	  lfs       f2, 0x0(r27)
	  lfs       f1, 0x4(r27)
	  stfs      f1, 0x3C(r31)
	  stfs      f2, 0x40(r31)
	  lfs       f4, 0x8(r27)
	  lfs       f3, 0x0(r27)
	  lfs       f2, 0xC(r27)
	  lfs       f1, 0x4(r27)
	  fsubs     f3, f4, f3
	  stfs      f31, 0x34(r31)
	  fsubs     f1, f2, f1
	  fabs      f2, f3
	  stfs      f0, 0x38(r31)
	  fabs      f1, f1
	  frsp      f30, f2
	  lfs       f0, 0x38(r31)
	  frsp      f29, f1
	  fmuls     f1, f30, f0
	  bl        -0x89954
	  frsp      f2, f1
	  lfs       f0, 0x38(r31)
	  fmuls     f1, f29, f0
	  fctiwz    f0, f2
	  stfd      f0, 0x8(r1)
	  lwz       r28, 0xC(r1)
	  bl        -0x89970
	  frsp      f0, f1
	  cmpwi     r28, 0xC8
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r27, 0x14(r1)
	  bgt-      .loc_0xD0
	  cmpwi     r27, 0xC8
	  ble-      .loc_0x120

	.loc_0xD0:
	  lfs       f1, -0x5D04(r2)
	  lfs       f0, -0x5D08(r2)
	  fmuls     f31, f31, f1
	  fdivs     f0, f0, f31
	  stfs      f31, 0x34(r31)
	  stfs      f0, 0x38(r31)
	  lfs       f0, 0x38(r31)
	  fmuls     f1, f30, f0
	  bl        -0x899B4
	  frsp      f2, f1
	  lfs       f0, 0x38(r31)
	  fmuls     f1, f29, f0
	  fctiwz    f0, f2
	  stfd      f0, 0x10(r1)
	  lwz       r28, 0x14(r1)
	  bl        -0x899D0
	  frsp      f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r27, 0xC(r1)

	.loc_0x120:
	  cmpw      r28, r27
	  mr        r30, r27
	  ble-      .loc_0x130
	  mr        r30, r28

	.loc_0x130:
	  lfd       f1, -0x5D10(r2)
	  bl        -0x89154
	  xoris     r3, r30, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x14(r1)
	  frsp      f29, f1
	  lfd       f1, -0x5D00(r2)
	  stw       r0, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f1, f0, f1
	  bl        -0x89178
	  frsp      f0, f1
	  fdivs     f1, f0, f29
	  bl        -0x89A28
	  frsp      f0, f1
	  lis       r0, 0x4330
	  stw       r0, 0x18(r1)
	  lfd       f2, -0x5D00(r2)
	  fctiwz    f0, f0
	  lfd       f1, -0x5D10(r2)
	  stfd      f0, 0x8(r1)
	  lwz       r29, 0xC(r1)
	  xoris     r0, r29, 0x8000
	  stw       r0, 0x1C(r1)
	  lfd       f0, 0x18(r1)
	  fsub      f2, f0, f2
	  bl        -0x89198
	  addi      r0, r29, 0x1
	  stw       r0, 0x2C(r31)
	  lwz       r30, 0x2C(r31)
	  mulli     r3, r30, 0x38
	  addi      r3, r3, 0x10
	  bl        -0x134C10
	  lis       r4, 0x8016
	  mr        r7, r30
	  subi      r4, r4, 0x7308
	  li        r5, 0
	  li        r6, 0x38
	  bl        -0x971E4
	  stw       r3, 0x30(r31)
	  li        r3, 0x1
	  li        r0, 0
	  lwz       r29, 0x30(r31)
	  sth       r28, 0x0(r29)
	  sth       r27, 0x2(r29)
	  sth       r3, 0x4(r29)
	  sth       r0, 0x6(r29)
	  lhz       r3, 0x0(r29)
	  lhz       r0, 0x2(r29)
	  mullw     r30, r3, r0
	  mulli     r3, r30, 0x2C
	  addi      r3, r3, 0x10
	  bl        -0x134C60
	  lis       r4, 0x8015
	  mr        r7, r30
	  addi      r4, r4, 0x6740
	  li        r5, 0
	  li        r6, 0x2C
	  bl        -0x97234
	  stw       r3, 0x8(r29)
	  li        r5, 0
	  mr        r6, r5
	  stw       r5, 0x2C(r29)
	  mr        r7, r5
	  stw       r5, 0x30(r29)
	  b         .loc_0x260

	.loc_0x238:
	  lwz       r3, 0x8(r29)
	  addi      r0, r7, 0x28
	  addi      r6, r6, 0x1
	  add       r3, r3, r7
	  addi      r7, r7, 0x2C
	  stw       r5, 0x1C(r3)
	  sth       r5, 0x18(r3)
	  lhz       r4, 0x6(r29)
	  lwz       r3, 0x8(r29)
	  sthx      r4, r3, r0

	.loc_0x260:
	  lhz       r3, 0x0(r29)
	  lhz       r0, 0x2(r29)
	  mullw     r0, r3, r0
	  cmpw      r6, r0
	  blt+      .loc_0x238
	  li        r27, 0x1
	  li        r29, 0x38
	  b         .loc_0x2A0

	.loc_0x280:
	  subi      r0, r27, 0x1
	  lwz       r4, 0x30(r31)
	  mulli     r0, r0, 0x38
	  add       r3, r4, r29
	  add       r4, r4, r0
	  bl        -0xF5C
	  addi      r29, r29, 0x38
	  addi      r27, r27, 0x1

	.loc_0x2A0:
	  lwz       r0, 0x2C(r31)
	  cmpw      r27, r0
	  blt+      .loc_0x280
	  lwz       r3, -0x77D4(r13)
	  bl        -0x135508
	  lwz       r0, 0x28(r31)
	  sub       r0, r0, r3
	  stw       r0, 0x28(r31)
	  psq_l     f31,0x68(r1),0,0
	  lfd       f31, 0x60(r1)
	  psq_l     f30,0x58(r1),0,0
	  lfd       f30, 0x50(r1)
	  psq_l     f29,0x48(r1),0,0
	  lfd       f29, 0x40(r1)
	  lmw       r27, 0x2C(r1)
	  lwz       r0, 0x74(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80158CF8
 * Size:	00003C
 */
CellLayer::CellLayer()
    : mCell()
{
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
inline void CellPyramid::drawCell(Graphics&, Sys::Sphere&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
// void assertExtent__Q24Game9CellLayerFR7Rect<int>()
inline void CellLayer::assertExtent(Recti&) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
// void checkPoint__Q24Game9CellLayerFR10Vector2<int>()
inline void CellLayer::checkPoint(Vector2<int>&) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80158D34
 * Size:	000134
 */
// void getPikiCount__Q24Game11CellPyramidFiR7Rect<int>()
int CellPyramid::getPikiCount(int layerLevel, Recti& extent)
{
	if (disableAICulling) {
		return 1;
	}
	JUT_ASSERTLINE(1565, (layerLevel >= 0) && (layerLevel < mLayerCount), "illegal layerLevel %d : out of bounds 0ã€?%d\n", layerLevel,
	               mLayerCount);
	CellLayer* layer = &mLayers[layerLevel];
	int sum          = 0;
	for (int x = extent.p1.x; x <= extent.p2.x; x++) {
		for (int y = extent.p1.y; y <= extent.p2.y; y++) {
			Cell* cell = (*layer)(x, y);
			if (cell) {
				sum += cell->mLocalPikiNaviCount + cell->mTotalPikiNaviCount;
			}
		}
	}
	return sum;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
// void drawCell__Q24Game11CellPyramidFR8GraphicsiR7Rect<int> f()
inline void CellPyramid::drawCell(Graphics&, int, Rect<int>&, float) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
inline void CellPyramid::drawCell(Graphics&, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
inline void CellPyramid::drawCell(Graphics&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
inline void CellPyramid::dumpCount(int&, int&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80158E68
 * Size:	0000F8
 */
void Cell::resolveCollision_2()
{
	for (CellLeg* legA = mLeg; legA != nullptr; legA = legA->mNext) {
		for (CellLeg* legB = legA->mNext; legB != nullptr; legB = legB->mNext) {
			if (legA->mObject->collisionUpdatable()) {
				legA->mObject->checkCollision(legB->mObject);
			}
		}
		for (Cell* cell = mHeadCell; cell != nullptr; cell = cell->mHeadCell) {
			for (CellLeg* legB = cell->mLeg; legB != nullptr; legB = legB->mNext) {
				if (legA->mObject->collisionUpdatable()) {
					legA->mObject->checkCollision(legB->mObject);
				}
			}
		}
	}
}

/*
 * --INFO--
 * Address:	80158F60
 * Size:	000100
 */
void Cell::resolveCollision_1()
{
	for (CellLeg* legA = mLeg; legA != nullptr; legA = legA->mNext) {
		for (CellLeg* legB = legA->mNext; legB != nullptr; legB = legB->mNext) {
			// TODO: What is going on with mPassID?
			if ((legA->mObject != legB->mObject) && (legB->mObject->mPassID != (u32)legA->mObject)) {
				legB->mObject->mPassID = (u32)legA->mObject;
				legA->mObject->checkCollision(legB->mObject);
			}
		}
		for (Cell* cell = mHeadCell; cell != nullptr; cell = cell->mHeadCell) {
			for (CellLeg* legB = cell->mLeg; legB != nullptr; legB = legB->mNext) {
				// TODO: What is going on with mPassID?
				if ((legA->mObject != legB->mObject) && (legB->mObject->mPassID != (u32)legA->mObject)) {
					legB->mObject->mPassID = (u32)legA->mObject;
					legA->mObject->checkCollision(legB->mObject);
				}
			}
		}
	}
}

/*
 * --INFO--
 * Address:	80159060
 * Size:	0001E0
 */
void Cell::resolveCollision_3()
{
	for (CellLeg* legA = mLeg; legA != nullptr; legA = legA->mNext) {
		if (legA->mObject->collisionUpdatable() == false) {
			CellObject* legAObject = legA->mObject;
			if (legAObject->mPassID != Game::cellMgr->mPassID) {
				legAObject->checkAllCollision();
				legAObject->mPassID = Game::cellMgr->mPassID;
			}
		} else {
			for (CellLeg* legB = legA->mNext; legB != nullptr; legB = legB->mNext) {
				if (legA->mObject != legB->mObject) {
					if (CellMgrParms::getInstance()->mCellParms.mP001()) {
						if (legB->mObject != (CellObject*)legA->mObject->mPassID) {
							legA->mObject->mPassID = (u32)legB->mObject;
							legA->mObject->checkCollision(legB->mObject);
							legA->mObject->updateCollisionBuffer(legB->mObject);
						}
					} else {
						legA->mObject->checkCollision(legB->mObject);
						legA->mObject->updateCollisionBuffer(legB->mObject);
					}
				}
			}
			for (Cell* cell = mHeadCell; cell != nullptr; cell = cell->mHeadCell) {
				for (CellLeg* legB = cell->mLeg; legB != nullptr; legB = legB->mNext) {
					if (legA->mObject != legB->mObject) {
						if (CellMgrParms::getInstance()->mCellParms.mP001()) {
							if ((CellObject*)legA->mObject->mPassID != legB->mObject) {
								legA->mObject->mPassID = (u32)legB->mObject;
								legA->mObject->checkCollision(legB->mObject);
								legA->mObject->updateCollisionBuffer(legB->mObject);
							}
						} else {
							legA->mObject->checkCollision(legB->mObject);
							legA->mObject->updateCollisionBuffer(legB->mObject);
						}
					}
				}
			}
		}
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r30, r3
	  lwz       r31, 0x1C(r3)
	  b         .loc_0x1C4

	.loc_0x1C:
	  lwz       r3, 0xC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x9C
	  lwz       r27, 0xC(r31)
	  lwz       r3, -0x6D38(r13)
	  lwz       r4, 0xA4(r27)
	  lwz       r0, 0x44(r3)
	  cmplw     r4, r0
	  beq-      .loc_0x1C0
	  li        r29, 0
	  mr        r28, r29
	  b         .loc_0x80

	.loc_0x5C:
	  mr        r3, r27
	  lwz       r4, 0xB0(r27)
	  lwz       r12, 0x0(r27)
	  lwzx      r4, r4, r28
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  addi      r28, r28, 0x8
	  addi      r29, r29, 0x1

	.loc_0x80:
	  lwz       r0, 0xAC(r27)
	  cmpw      r29, r0
	  blt+      .loc_0x5C
	  lwz       r3, -0x6D38(r13)
	  lwz       r0, 0x44(r3)
	  stw       r0, 0xA4(r27)
	  b         .loc_0x1C0

	.loc_0x9C:
	  lwz       r27, 0x0(r31)
	  b         .loc_0x11C

	.loc_0xA4:
	  lwz       r3, 0xC(r31)
	  lwz       r4, 0xC(r27)
	  cmplw     r3, r4
	  beq-      .loc_0x118
	  lwz       r5, -0x69F8(r13)
	  lbz       r0, 0x58(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0xFC
	  lwz       r0, 0xA4(r3)
	  cmplw     r4, r0
	  beq-      .loc_0x118
	  stw       r4, 0xA4(r3)
	  lwz       r3, 0xC(r31)
	  lwz       r4, 0xC(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xC(r31)
	  lwz       r4, 0xC(r27)
	  bl        -0x240C
	  b         .loc_0x118

	.loc_0xFC:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xC(r31)
	  lwz       r4, 0xC(r27)
	  bl        -0x242C

	.loc_0x118:
	  lwz       r27, 0x0(r27)

	.loc_0x11C:
	  cmplwi    r27, 0
	  bne+      .loc_0xA4
	  lwz       r27, 0x10(r30)
	  b         .loc_0x1B8

	.loc_0x12C:
	  lwz       r28, 0x1C(r27)
	  b         .loc_0x1AC

	.loc_0x134:
	  lwz       r3, 0xC(r31)
	  lwz       r4, 0xC(r28)
	  cmplw     r3, r4
	  beq-      .loc_0x1A8
	  lwz       r5, -0x69F8(r13)
	  lbz       r0, 0x58(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x18C
	  lwz       r0, 0xA4(r3)
	  cmplw     r0, r4
	  beq-      .loc_0x1A8
	  stw       r4, 0xA4(r3)
	  lwz       r3, 0xC(r31)
	  lwz       r4, 0xC(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xC(r31)
	  lwz       r4, 0xC(r28)
	  bl        -0x249C
	  b         .loc_0x1A8

	.loc_0x18C:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xC(r31)
	  lwz       r4, 0xC(r28)
	  bl        -0x24BC

	.loc_0x1A8:
	  lwz       r28, 0x0(r28)

	.loc_0x1AC:
	  cmplwi    r28, 0
	  bne+      .loc_0x134
	  lwz       r27, 0x10(r27)

	.loc_0x1B8:
	  cmplwi    r27, 0
	  bne+      .loc_0x12C

	.loc_0x1C0:
	  lwz       r31, 0x0(r31)

	.loc_0x1C4:
	  cmplwi    r31, 0
	  bne+      .loc_0x1C
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}
} // namespace Game

/*
 * --INFO--
 * Address:	80159240
 * Size:	00004C
 */
void SweepCallback::invoke(SweepPrune::Object*, SweepPrune::Object*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r4, 0
	stw      r0, 0x14(r1)
	beq      lbl_80159258
	addi     r4, r4, -4

lbl_80159258:
	cmplwi   r5, 0
	beq      lbl_80159264
	addi     r5, r5, -4

lbl_80159264:
	mr       r3, r4
	mr       r4, r5
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

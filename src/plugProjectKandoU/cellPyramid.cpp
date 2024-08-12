#include "sysMath.h"
#include "math.h"
#include "Game/cellPyramid.h"
#include "BaseParm.h"
#include "CellMgrParms.h"
#include "fdlibm.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "P2Macros.h"
#include "trig.h"

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

/**
 * @note Address: 0x801565C8
 * @note Size: 0xC4
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

/**
 * @note Address: 0x8015668C
 * @note Size: 0xB4
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

/**
 * @note Address: 0x80156740
 * @note Size: 0x3C
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

/**
 * @note Address: N/A
 * @note Size: 0x10
 */
void Cell::clear()
{
	mLeg              = nullptr;
	mTotalObjectCount = 0;
}

/**
 * @note Address: 0x8015677C
 * @note Size: 0xC4
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

/**
 * This and mapSearchDown get recursively inlined a few times for stack
 * efficiency. Quite beautiful, really.
 *
 * @note Address: 0x80156840
 * @note Size: 0x238
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

/**
 * @note Address: 0x80156A78
 * @note Size: 0x280
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

/**
 * @note Address: 0x80156CF8
 * @note Size: 0x4C
 */
void Cell::resolveCollision()
{
	if (CellMgrParms::getInstance()->mCellParms.mUseBuffer()) {
		resolveCollision_3();
	} else {
		(CellMgrParms::getInstance()->mCellParms.mMagicNumber()) ? resolveCollision_1() : resolveCollision_2();
	}
}

/**
 * @note Address: 0x80156D44
 * @note Size: 0x4
 */
void CellPyramid::initFrame() { }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
u32 CellPyramid::getCheckCount() { return mPassID; }

// /**
//  * @note Address: N/A
//  * @note Size: 0x18
//  */
// void Cell::dump()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
// void Cell::hasLeg(CellLeg*)
// bool Cell::hasLeg(CellLeg&)
// {
// 	// UNUSED FUNCTION
// }

// inline f32 temp(f32 input) {
// 	if (input > 0.0f) {
// 		return (f32)__frsqrte(input) * input;
// 	}
// 	return 0.0f;
// }

// inline f32 fakepikmin2_sqrtf(f32 x)
// {
// 	if (!(x > 0.0f)) { // if x <= 0
// 		return x;
// 	}

// 	register f32 reg1 = x;
// 	register f32 reg2 = 0.0f;
// 	register f32 result;

// #ifdef __MWERKS__ // clang-format off
// 	asm {
//       frsqrte reg2, reg1
//       fmuls result, reg2, reg1
// 	}
// #endif // clang-format on

// 	return result;
// }

// f32 qdist32(f32 x1, f32 y1, f32 z1, f32 x2, f32 y2, f32 z2)
// {
// 	f32 xdiff = (x2 - x1);
// 	f32 ydiff = (y2 - y1);
// 	f32 zdiff = (z2 - z1);

// 	f32 dist = (SQUARE(xdiff) + SQUARE(ydiff) + SQUARE(zdiff));
// 	if (dist > 0.0f) {
// 		dist *= (__frsqrte(dist));
// 	} else {
// 		dist = 0.0f;
// 	}
// 	return dist;
// }

/**
 * @note Address: N/A
 * @note Size: 0xB8
 * 46(dec) instructions
 */
f32 CellObject::calcCollisionDistance(CellObject* them)
{
	Sys::Sphere ourBounds;
	Sys::Sphere theirBounds;
	getBoundingSphere(ourBounds);
	them->getBoundingSphere(theirBounds);
	Vector3f sepVec = ourBounds.mPosition - theirBounds.mPosition;
	f32 dist        = sepVec.length();
	return dist - (ourBounds.mRadius + theirBounds.mRadius);
}

/**
 * @note Address: 0x80156D48
 * @note Size: 0xD0
 */
void CellObject::updateCollisionBuffer(CellObject* them) { mCollisionBuffer.insert(them, calcCollisionDistance(them)); }

/**
 * @note Address: N/A
 * @note Size: 0x80
 */
void CellObject::resolveUsingBuffer()
{
	// UNUSED FUNCTION
}

/**
 * __ct__Q24Game15CollisionBufferFv
 *
 * @note Address: 0x80156E18
 * @note Size: 0x18
 */
CollisionBuffer::CollisionBuffer()
{
	mCellObject    = nullptr;
	mCollNodes     = nullptr;
	mUsedNodeCount = 0;
	mNodeCount     = 0;
}

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
// inline bool CollisionBuffer::isAvailable()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x18
 */
void CollisionBuffer::init(CellObject*, CollNode*, int)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80156E30
 * @note Size: 0x6C
 */
void CollisionBuffer::alloc(CellObject* object, int nodeCount)
{
	mCellObject    = object;
	mNodeCount     = nodeCount;
	mUsedNodeCount = 0;
	mCollNodes     = new CollNode[mNodeCount];
}

/**
 * __ct__Q24Game8CollNodeFv
 *
 * @note Address: 0x80156E9C
 * @note Size: 0x14
 */
CollNode::CollNode()
    : mCellObject(nullptr)
    , mObjDistance(0.0f)
{
}

/**
 * clear__Q24Game15CollisionBufferFv
 * @note Address: N/A
 * @note Size: 0x44
 */
void CollisionBuffer::clear()
{
	mUsedNodeCount = 0;
	for (int nodeIndex = 0; nodeIndex < mNodeCount; nodeIndex++) {
		mCollNodes[nodeIndex].mCellObject  = nullptr;
		mCollNodes[nodeIndex].mObjDistance = 100000.0f;
	}
}

/**
 * @note Address: 0x80156EB0
 * @note Size: 0xB8
 */
void CollisionBuffer::insert(CellObject* newObject, f32 distance)
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

/**
 * This seems expensive.
 * I wonder why they didn't use a linked list...
 *
 * @note Address: 0x80156F68
 * @note Size: 0x128
 */
void CollisionBuffer::pikiInsertPiki(CellObject* object, f32 distance)
{
	if (findIndex(object) == -1) {
		int nodeIndex = mUsedNodeCount - 1;
		// Find the index the object should be inserted at,
		// and shift objects after that index along the way.
		for (; (nodeIndex >= 0); nodeIndex--) {
			// for (; nodeIndex >= 0 && mCollNodes[nodeIndex]._04 > distance && mCollNodes->mCellObject->isPiki();
			// nodeIndex--) {
			if (!(mCollNodes[nodeIndex].mObjDistance > distance && mCollNodes[nodeIndex].mCellObject->isPiki())) {
				break;
			}
			if (nodeIndex + 1 < mNodeCount) {
				mCollNodes[nodeIndex + 1].mCellObject  = mCollNodes[nodeIndex].mCellObject;
				mCollNodes[nodeIndex + 1].mObjDistance = mCollNodes[nodeIndex].mObjDistance;
			}
		}
		// Insert the object.
		if (nodeIndex + 1 < mNodeCount) {
			mCollNodes[nodeIndex + 1].mCellObject  = object;
			mCollNodes[nodeIndex + 1].mObjDistance = distance;
			if (mUsedNodeCount < mNodeCount) {
				mUsedNodeCount++;
			}
		}
	}
}

/**
 * @note Address: 0x80157090
 * @note Size: 0x128
 */
void CollisionBuffer::pikiInsertOther(CellObject* object, f32 distance)
{
	if (findIndex(object) == -1) {
		int nodeIndex = mUsedNodeCount - 1;
		// Find the index the object should be inserted at,
		// and shift objects after that index along the way.
		for (; (nodeIndex >= 0); nodeIndex--) {
			// for (; nodeIndex >= 0 && mCollNodes[nodeIndex]._04 > distance && mCollNodes->mCellObject->isPiki();
			// nodeIndex--) {
			if (!(mCollNodes[nodeIndex].mObjDistance > distance || mCollNodes[nodeIndex].mCellObject->isPiki())) {
				break;
			}
			if (nodeIndex + 1 < mNodeCount) {
				mCollNodes[nodeIndex + 1].mCellObject  = mCollNodes[nodeIndex].mCellObject;
				mCollNodes[nodeIndex + 1].mObjDistance = mCollNodes[nodeIndex].mObjDistance;
			}
		}
		// Insert the object.
		if (nodeIndex + 1 < mNodeCount) {
			mCollNodes[nodeIndex + 1].mCellObject  = object;
			mCollNodes[nodeIndex + 1].mObjDistance = distance;
			if (mUsedNodeCount < mNodeCount) {
				mUsedNodeCount++;
			}
		}
	}
}

/**
 * @note Address: 0x801571B8
 * @note Size: 0xF8
 */
void CollisionBuffer::insertSort(CellObject* object, f32 distance)
{
	if (findIndex(object) == -1) {
		int index = mUsedNodeCount - 1;
		for (; index >= 0; index--) {
			if (!(mCollNodes[index].mObjDistance > distance)) {
				break;
			}
			if (index + 1 < mNodeCount) {
				mCollNodes[index + 1].mCellObject  = mCollNodes[index].mCellObject;
				mCollNodes[index + 1].mObjDistance = mCollNodes[index].mObjDistance;
			}
		}
		if (index + 1 < mNodeCount) {
			mCollNodes[index + 1].mCellObject  = object;
			mCollNodes[index + 1].mObjDistance = distance;
			if (mUsedNodeCount < mNodeCount) {
				mUsedNodeCount++;
			}
		}
	}
}

/**
 * @note Address: 0x801572B0
 * @note Size: 0x44
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

/**
 * resolveCollision__Q24Game9Cell
 *
 * @note Address: N/A
 * @note Size: 0xA4
 */
void CellLayer::resolveCollision()
{
	for (int i = 0; i < mSizeX * mSizeY; ++i) {
		if (mCells[i].mLeg) {
			mCells[i].resolveCollision();
		}
	}
}

/**
 * resolveCollision__Q24Game11CellPyramidFv
 *
 * @note Address: 0x801572F4
 * @note Size: 0x244
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
				for (Cell* cell = mLayers[i].mCurrCell.mNextCell; cell != nullptr; cell = cell->mNextCell) {
					if (cell->mTotalObjectCount != 0) {
						cell->resolveCollision_3();
					}
				}
			}
		} else {
			for (int i = 0; i < mLayerCount; i++) {
				for (Cell* cell = mLayers[i].mCurrCell.mNextCell; cell != nullptr; cell = cell->mNextCell) {
					if (cell->mTotalObjectCount != 0) {
						cell->resolveCollision_1();
					}
				}
			}
		}
		break;
	}
}

/**
 * The inlining on this function is fascinating.
 *
 * @note Address: 0x80157538
 * @note Size: 0x294
 */
void Cell::rec_resolveColl()
{
	for (int i = 0; i < 4; i++) {
		if ((mNeighboringCells[i] != nullptr) && (1 < mNeighboringCells[i]->mTotalObjectCount)) {
			mNeighboringCells[i]->rec_resolveColl();
		}
	}

	resolveCollision();
}

/**
 * clearAllCollBuffer__Q24Game4CellFv
 * @note Address: N/A
 * @note Size: 0x64 (25 instructions)
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

/**
 * clearAllCollBuffer__Q24Game9CellLayerFv
 * @note Address: N/A
 * @note Size: 0x9C (39 instructions)
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

/**
 * This probably calls (CellLayer|Cell)::clearAllCollBuffer.
 * clearAllCollBuffer__Q24Game11CellPyramidFv
 *
 * @note Address: 0x801577DC
 * @note Size: 0xDC
 */
void CellPyramid::clearAllCollBuffer()
{
	for (int layerIndex = 0; layerIndex < mLayerCount; layerIndex++) {
		mLayers[layerIndex].clearAllCollBuffer();
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x94
 */
void Cell::appendList()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x84
 */
void Cell::remove()
{
	if ((!mLeg) && (Cell::sCurrCellMgr)) {
		P2ASSERTLINE(786, Cell::sCurrCellMgr);
		if (mPrevCell) {
			mPrevCell->mNextCell = mNextCell;
			if (mNextCell) {
				mNextCell->mPrevCell = mPrevCell;
			}
		}
		mNextCell = mPrevCell = nullptr;
	}
}

/**
 * exit__Q24Game4CellFPQ24Game7CellLegb
 * @note Address: 0x801578B8
 * @note Size: 0x158
 */
void Cell::exit(CellLeg* exitingLeg, bool isPikiOrNavi)
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
		for (Cell* currentCell = mHeadCell; currentCell; currentCell = currentCell->mHeadCell) {
			currentCell->mTotalPikiNaviCount--;
		}
	}

	// Decrease the total object count for this cell and all cells above it
	mTotalObjectCount--;
	for (Cell* currentCell = mHeadCell; currentCell; currentCell = currentCell->mHeadCell) {
		currentCell->mTotalObjectCount--;
	}

	// Update the previous leg's next leg if it exists
	if (exitingLeg->mPrev) {
		exitingLeg->mPrev->mNext = exitingLeg->mNext;
	}

	// Update the next leg's previous leg if it exists
	if (exitingLeg->mNext) {
		exitingLeg->mNext->mPrev = exitingLeg->mPrev;
	}

	// Clear the exiting leg's previous and next legs
	exitingLeg->mNext = exitingLeg->mPrev = nullptr;

	// If there are no more legs and a current cell manager exists, remove this cell from the cell list
	remove();
}

/**
 * @note Address: 0x80157A10
 * @note Size: 0x2EC
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

		Cell* layerCell = &Cell::sCurrCellMgr->mLayers[mLayerIdx].mCurrCell;
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

/**
 * @note Address: N/A
 * @note Size: 0x58
 */
void CellLayer::clear()
{
	// UNUSED FUNCTION
	mCurrCell.mNextCell = nullptr;
	mCurrCell.mPrevCell = nullptr;
	for (int i = 0; i < mSizeX * mSizeY; i++) {
		mCells[i].clear();
		mCells[i].mLayerIdx = mLayerIdx;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xD0
 */
void CellLayer::createBottom(int sizeX, int sizeY)
{
	mSizeX              = sizeX;
	mSizeY              = sizeY;
	mLayerSize          = 1;
	mLayerIdx           = 0;
	mCells              = new Cell[mSizeX * mSizeY];
	mCurrCell.mNextCell = nullptr;
	mCurrCell.mPrevCell = nullptr;

	for (int i = 0; i < mSizeX * mSizeY; i++) {
		mCells[i].clear();
		mCells[i].mLayerIdx = mLayerIdx;
	}
}

/**
 * __cl__Q24Game9Cell
 *
 * @note Address: 0x80157CFC
 * @note Size: 0x48
 */
Cell* CellLayer::operator()(int x, int y)
{
	if ((x < 0) || (y < 0) || (x >= mSizeX) || (y >= mSizeY)) {
		return nullptr;
	}
	return &mCells[x + y * mSizeX];
}

/**
 * @note Address: 0x80157D44
 * @note Size: 0x578
 */
void CellLayer::pileup(CellLayer& layer)
{
	mLayerSize = layer.mLayerSize * 2;
	mLayerIdx  = layer.mLayerIdx + 1;
	mSizeX     = (f32)ceil((f32)layer.mSizeX / 2);
	mSizeY     = (f32)ceil((f32)layer.mSizeY / 2);

	mCells              = new Cell[mSizeX * mSizeY];
	mCurrCell.mNextCell = nullptr;
	mCurrCell.mPrevCell = nullptr;

	for (int i = 0; i < mSizeX * mSizeY; i++) {
		mCells[i].mLayerIdx = mLayerIdx;
	}

	for (int x2 = 0, x1 = 0; x1 < mSizeX; x2 += 2, x1++) {
		for (int y2 = 0, y1 = 0; y1 < mSizeY; y2 += 2, y1++) {
			Cell* currCell                 = (*this)(x1, y1);
			currCell->mNeighboringCells[0] = (*this)(x2, y2);
			currCell->mNeighboringCells[1] = (*this)(x2 + 1, y2);
			currCell->mNeighboringCells[2] = (*this)(x2, y2 + 1);
			currCell->mNeighboringCells[3] = (*this)(x2 + 1, y2 + 1);

			if ((*this)(x2, y2)) {
				(*this)(x2, y2)->mHeadCell = currCell;
			}

			if ((*this)(x2 + 1, y2)) {
				(*this)(x2 + 1, y2)->mHeadCell = currCell;
			}

			if ((*this)(x2, y2 + 1)) {
				(*this)(x2, y2 + 1)->mHeadCell = currCell;
			}

			if ((*this)(x2 + 1, y2 + 1)) {
				(*this)(x2 + 1, y2 + 1)->mHeadCell = currCell;
			}
		}
	}
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

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
// void drawCell__Q24Game9CellLayerFR8GraphicsR10Vector3f iif()
void CellLayer::drawCell(Graphics&, Vector3f&, int, int, f32) const
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x801582BC
 * @note Size: 0x3C
 */
CellPyramid::CellPyramid()
{
	mLayerCount = 0;
	mFreeMemory = 0;
}

/**
 * clear__Q24Game11CellPyramidFv
 *
 * @note Address: 0x801582F8
 * @note Size: 0x98
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

/**
 * @note Address: 0x80158390
 * @note Size: 0x190
 */
// void calcExtent__Q24Game11CellPyramidFRQ23Sys6SphereRiR7Rect<i>()
void CellPyramid::calcExtent(Sys::Sphere& sphere, int& layerIdx, Recti& outRect)
{
	f32 exponent = 2.0f * sphere.mRadius * mInverseScale;  // f30
	f32 log2     = (f32)log10(exponent) / (f32)log10(2.0); // change to log base 2
	if (log2 < 0.0f) {
		log2 = 0.0f;
	}

	int layer = (f32)ceil(log2);
	if (layer >= mLayerCount) {
		layer = mLayerCount - 1;
	}

	u16 layerSize = getLayer(layer)->mLayerSize;
	f32 scale     = 1.0f / ((f32)layerSize * mScale); // f9

	f32 radius = sphere.mRadius;
	f32 left   = mBounds.x;
	f32 right  = mBounds.y;

	f32 xLow = sphere.mPosition.x - radius;
	f32 xHi  = sphere.mPosition.x + radius;
	f32 yLow = sphere.mPosition.z - radius;
	f32 yHi  = sphere.mPosition.z + radius;

	f32 xLowDiff = xLow - right;
	f32 yLowDiff = yLow - left;
	f32 xHiDiff  = xHi - right;
	f32 yHiDiff  = yHi - left;

	outRect.p1.x = xLowDiff * scale;
	outRect.p1.y = yLowDiff * scale;
	outRect.p2.x = xHiDiff * scale;
	outRect.p2.y = yHiDiff * scale;

	layerIdx = layer;
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

/**
 * entry__Q24Game11CellPyramidFPQ24Game10CellObjectRQ23Sys6Sphere
 *
 * @note Address: 0x80158520
 * @note Size: 0x34
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
/**
 * @note Address: 0x80158554
 * @note Size: 0x4B8
 */
void CellPyramid::entry(CellObject* object, Sys::Sphere& sphere, int& layerIndex, Recti& boundingRect)
{
	Cell::sCurrCellMgr = this;

	f32 sphereRadiusLog = log10(sphere.mRadius * 2.0f * mInverseScale);
	f32 log2            = log10(2.0f);
	f32 layerIndexFloat = (sphereRadiusLog / log2);

	// Ensure the layer is non-negative
	if (layerIndexFloat < 0.0f) {
		layerIndexFloat = 0.0f;
	}

	layerIndex = (int)ceil(MAX(layerIndexFloat, 0.0f));

	// Ensure that layerIndex is within bounds
	if (mLayerCount <= layerIndex) {
		layerIndex = mLayerCount - 1;
	}

	f32 sphereRadius       = sphere.mRadius;
	f32 sphereX            = sphere.mPosition.x;
	f32 sphereZ            = sphere.mPosition.z;
	f32 rightBoundary      = mBounds.y;
	f32 leftBoundary       = mBounds.x;
	f32 inverseScaleFactor = 1.0f / ((mLayers[layerIndex].mLayerSize) * mScale);

	// Calculate the bounding rectangle
	boundingRect.p1.x = (int)(((sphereX - sphereRadius) - rightBoundary) * inverseScaleFactor);
	boundingRect.p1.y = (int)(((sphereZ - sphereRadius) - leftBoundary) * inverseScaleFactor);
	boundingRect.p2.x = (int)(((sphereX + sphereRadius) - rightBoundary) * inverseScaleFactor);
	boundingRect.p2.y = (int)(((sphereZ + sphereRadius) - leftBoundary) * inverseScaleFactor);

	// Update the layerIndex
	layerIndex = layerIndex;

	// Check if layerIndex is out of bounds
	if ((layerIndex < 0) || (mLayerCount <= layerIndex)) {
		JUT_PANICLINE(1206, "illegal layerLevel %d : out of bounds 0～%d\n", layerIndex, mLayerCount);
		return;
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
}

/**
 * @note Address: 0x80158A0C
 * @note Size: 0x2EC
 */
void CellPyramid::create(BoundBox2d& box, f32 scale)
{
	mFreeMemory = JKRHeap::sCurrentHeap->getFreeSize();

	mBounds.set(box.mMin.y, box.mMin.x);
	// setLeftRight(box.mMin.x, box.mMin.y);
	// mLeft         = box.mMin.x;
	// mRight        = box.mMax.x;

	// Calculate dimensions in pixels
	f32 absDiffX    = absF(box.mMax.x - box.mMin.x);
	f32 absDiffY    = absF(box.mMax.y - box.mMin.y);
	mScale          = scale;
	mInverseScale   = 1.0f / scale;
	int pixelWidth  = (f32)ceil(absDiffX * mInverseScale);
	int pixelHeight = (f32)ceil(absDiffY * mInverseScale);

	if (pixelWidth > 200 || pixelHeight > 200) {
		scale *= 1.5f;
		mScale        = scale;
		mInverseScale = 1.0f / (scale);
		pixelWidth    = (f32)ceil(absDiffX * mInverseScale);
		pixelHeight   = (f32)ceil(absDiffY * mInverseScale);
	}

	int maxDimension = pixelWidth > pixelHeight ? pixelWidth : pixelHeight;

	int layerCount = (f32)ceil((f32)log10((f32)maxDimension) / (f32)log10(2.0f));
	pow(2.0, (f64)layerCount);

	mLayerCount       = layerCount + 1;
	mLayers           = new CellLayer[mLayerCount];
	CellLayer* layer0 = getLayer(0);
	layer0->createBottom(pixelWidth, pixelHeight);

	for (int i = 1; i < mLayerCount; i++) {
		getLayer(i)->pileup(mLayers[i - 1]);
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

/**
 * @note Address: 0x80158CF8
 * @note Size: 0x3C
 */
CellLayer::CellLayer()
    : mCurrCell()
{
}

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void CellPyramid::drawCell(Graphics&, Sys::Sphere&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x68
 */
// void assertExtent__Q24Game9CellLayerFR7Rect<int>()
void CellLayer::assertExtent(Recti&) const
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x40
 */
// void checkPoint__Q24Game9CellLayerFR10Vector2<int>()
void CellLayer::checkPoint(Vector2<int>&) const
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80158D34
 * @note Size: 0x134
 */
// void getPikiCount__Q24Game11CellPyramidFiR7Rect<int>()
int CellPyramid::getPikiCount(int layerLevel, Recti& extent)
{
	if (disableAICulling) {
		return 1;
	}
	JUT_ASSERTLINE(1565, (layerLevel >= 0) && (layerLevel < mLayerCount), "illegal layerLevel %d : out of bounds 0～%d\n", layerLevel,
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

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
// void drawCell__Q24Game11CellPyramidFR8GraphicsiR7Rect<int> f()
void CellPyramid::drawCell(Graphics&, int, Rect<int>&, f32) const
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void CellPyramid::drawCell(Graphics&, int)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void CellPyramid::drawCell(Graphics&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x88
 */
void CellPyramid::dumpCount(int&, int&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80158E68
 * @note Size: 0xF8
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

/**
 * @note Address: 0x80158F60
 * @note Size: 0x100
 */
void Cell::resolveCollision_1()
{
	for (CellLeg* currentLeg = mLeg; currentLeg != nullptr; currentLeg = currentLeg->mNext) {
		// Check for collisions between currentLeg and all other legs
		for (CellLeg* otherLeg = currentLeg->mNext; otherLeg != nullptr; otherLeg = otherLeg->mNext) {
			if ((currentLeg->mObject != otherLeg->mObject) && (otherLeg->mObject->mPassID != (u32)currentLeg->mObject)) {
				otherLeg->mObject->mPassID = (u32)currentLeg->mObject;
				currentLeg->mObject->checkCollision(otherLeg->mObject);
			}
		}

		// Check for collisions between currentLeg and all legs in the head cell
		for (Cell* headCell = mHeadCell; headCell != nullptr; headCell = headCell->mHeadCell) {
			for (CellLeg* otherLeg = headCell->mLeg; otherLeg != nullptr; otherLeg = otherLeg->mNext) {
				if ((currentLeg->mObject != otherLeg->mObject) && (otherLeg->mObject->mPassID != (u32)currentLeg->mObject)) {
					otherLeg->mObject->mPassID = (u32)currentLeg->mObject;
					currentLeg->mObject->checkCollision(otherLeg->mObject);
				}
			}
		}
	}
}

/**
 * @note Address: 0x80159060
 * @note Size: 0x1E0
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
					if (CellMgrParms::getInstance()->mCellParms.mMagicNumber()) {
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
						if (CellMgrParms::getInstance()->mCellParms.mMagicNumber()) {
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
}
} // namespace Game

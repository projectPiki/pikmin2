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

u8 CellPyramid::sOptResolveColl     = 2;
static const char cellPyramidName[] = "cellPyramid";

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
void CellPyramid::initFrame()
{
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
u32 CellPyramid::getCheckCount()
{
	return mPassID;
}

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
void CellObject::updateCollisionBuffer(CellObject* them)
{
	mCollisionBuffer.insert(them, calcCollisionDistance(them));
}

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

	int y2;
	int x2;
	int x1;
	int y1;
	for (x1 = 0, x2 = 0; x1 < mSizeX; x2 += 2, x1++) {
		for (y1 = 0, y2 = 0; y1 < mSizeY; y2 += 2, y1++) {
			Cell* currCell                 = (*this)(x1, y1);
			currCell->mNeighboringCells[0] = layer(x2, y2);
			currCell->mNeighboringCells[1] = layer(x2 + 1, y2);
			currCell->mNeighboringCells[2] = layer(x2, y2 + 1);
			currCell->mNeighboringCells[3] = layer(x2 + 1, y2 + 1);

			if (layer(x2, y2)) {
				layer(x2, y2)->mHeadCell = currCell;
			}

			if (layer(x2 + 1, y2)) {
				layer(x2 + 1, y2)->mHeadCell = currCell;
			}

			if (layer(x2, y2 + 1)) {
				layer(x2, y2 + 1)->mHeadCell = currCell;
			}

			if (layer(x2 + 1, y2 + 1)) {
				layer(x2 + 1, y2 + 1)->mHeadCell = currCell;
			}
		}
	}
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

char* CellPyramid::sCellBugName = "none";

/**
 * @note Address: 0x80158390
 * @note Size: 0x190
 */
// void calcExtent__Q24Game11CellPyramidFRQ23Sys6SphereRiR7Rect<i>()
void CellPyramid::calcExtent(Sys::Sphere& sphere, int& layerIdx, Recti& outRect)
{
	f32 exponent = 2.0f * sphere.mRadius * mInverseScale;
	f32 log2     = (f32)log10(exponent) / (f32)log10(2.0); // change to log base 2
	if (log2 < 0.0f) {
		log2 = 0.0f;
	}

	int layer = (f32)ceil(log2);
	if (layer >= mLayerCount) {
		layer = mLayerCount - 1;
	}

	u16 layerSize = getLayer(layer)->mLayerSize;
	f32 mult      = (f32)layerSize * mScale;

	f32 xLow = sphere.mPosition.x - sphere.mRadius;
	f32 xHi  = sphere.mPosition.x + sphere.mRadius;
	f32 yLow = sphere.mPosition.z - sphere.mRadius;
	f32 yHi  = sphere.mPosition.z + sphere.mRadius;

	f32 left  = mBounds.x;
	f32 right = mBounds.y;

	f32 xLowDiff = xLow - right;
	f32 yLowDiff = yLow - left;
	f32 xHiDiff  = xHi - right;
	f32 yHiDiff  = yHi - left;

	f32 scale = 1.0f / mult;

	outRect.p1.x = xLowDiff * scale;
	outRect.p1.y = yLowDiff * scale;
	outRect.p2.x = xHiDiff * scale;
	outRect.p2.y = yHiDiff * scale;

	layerIdx = layer;
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

/**
 * @note Address: 0x80158554
 * @note Size: 0x4B8
 */
void CellPyramid::entry(CellObject* object, Sys::Sphere& sphere, int& layerIndex, Recti& boundingRect)
{
	Cell::sCurrCellMgr = this;

	calcExtent(sphere, layerIndex, boundingRect);

	if ((layerIndex < 0) || (layerIndex >= mLayerCount)) {
		JUT_PANICLINE(1206, "illegal layerLevel %d : out of bounds 0～%d\n", layerIndex, mLayerCount);
		return;
	}

	u8 pikiOrNavi    = 0;
	CellLayer* layer = &mLayers[layerIndex];
	bool isPiki      = object->isPiki();
	if ((isPiki != false) || (isPiki = object->isNavi(), isPiki != false)) {
		pikiOrNavi = 1;
	}
	bool isPikiOrNavi = pikiOrNavi != 0;

	for (int i = 0; i < 4; i++) {
		Cell* cell = object->mCellLegs[i].mCell;
		if (cell) {
			cell->exit(&object->mCellLegs[i], isPikiOrNavi);
			object->mCellLegs[i].mCell = nullptr;
		}
	}

	int legIndex = 0;
	if (((boundingRect.p2.x - boundingRect.p1.x) * (boundingRect.p2.y - boundingRect.p1.y)) > 10) {
		JUT_PANICLINE(1405, "Cell Inf-Loop かもしれない\n");
		return;
	}

	for (int x = boundingRect.p1.x; x <= boundingRect.p2.x; x++) {
		for (int y = boundingRect.p1.y; y <= boundingRect.p2.y; y++) {
			Cell* cell = (*layer)(x, y);
			if (cell) {
				if (legIndex >= 4) {
					Cell::sCurrCellMgr = nullptr;
					return;
				}

				cell->entry(&object->mCellLegs[legIndex], isPikiOrNavi);

				bool legCheck = cell->mLeg->findLeg(&object->mCellLegs[legIndex]);
				if (!legCheck) {
					JUT_PANICLINE(1439, "leg entry failed !!!!!!!!!!\n");
					return;
				}
			}
			legIndex++;
		}
	}

	Cell::sCurrCellMgr = nullptr;
}

/**
 * @note Address: 0x80158A0C
 * @note Size: 0x2EC
 */
void CellPyramid::create(BoundBox2d& box, f32 scale)
{
	mFreeMemory = JKRHeap::sCurrentHeap->getFreeSize();

	mBounds.set(box.mMin.y, box.mMin.x);

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

	int maxDimension = MAX(pixelWidth, pixelHeight);

	f32 log2       = (f32)log10(2.0f);
	int layerCount = (f32)ceil((f32)log10((f32)maxDimension) / log2);
	pow(2.0, (f64)layerCount);

	mLayerCount       = layerCount + 1;
	mLayers           = new CellLayer[mLayerCount];
	CellLayer* layer0 = getLayer(0);
	layer0->createBottom(pixelWidth, pixelHeight);

	for (int i = 1; i < mLayerCount; i++) {
		getLayer(i)->pileup(mLayers[i - 1]);
	}

	mFreeMemory = mFreeMemory - JKRHeap::sCurrentHeap->getFreeSize();
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

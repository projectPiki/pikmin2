#include "Game/cellPyramid.h"

namespace Game {
/**
 * @note Address: 0x8022E36C
 * @note Size: 0x34
 * Matches
 */
CellIteratorArg::CellIteratorArg()
{
	mCondition       = nullptr;
	mUseCustomRadius = 0;

	mSphere.mPosition = Vector3f(0.0f);
	mSphere.mRadius   = 0.0f;

	mCellMgr = cellMgr;

	mUnused   = 0;
	mOptimise = false;
}

/**
 * @note Address: 0x8022E3A0
 * @note Size: 0x40
 * Matches
 */
CellIteratorArg::CellIteratorArg(Sys::Sphere& sphere)
{
	mSphere          = sphere;
	mCondition       = nullptr;
	mUseCustomRadius = 0;
	mCellMgr         = Game::cellMgr;
	mUnused          = 0;
	mOptimise        = false;
}

/**
 * @note Address: 0x8022E3E0
 * @note Size: 0x7C
 * Matches
 */
CellIterator::CellIterator(Game::CellIteratorArg& arg)
{
	mArg = arg;
}

/**
 * @note Address: 0x8022E45C
 * @note Size: 0xA4
 */
void CellIterator::first()
{
	CellPyramid* cellMgr = mArg.mCellMgr;
	cellMgr->mPassID++;
	if (cellMgr->mPassID >= 0x4000000) {
		cellMgr->mPassID = 0;
	}

	mPassID = cellMgr->mPassID;

	mCurrLeg      = nullptr;
	mCurrLayerIdx = 0;

	calcExtent();

	Cell* foundCell = mArg.mCellMgr->mLayers[mCurrLayerIdx](mCurrX, mCurrY);
	if (foundCell) {
		mCurrLeg = foundCell->mLeg;
	}
	find();
}

/**
 * @note Address: 0x8022E500
 * @note Size: 0x34
 * Matches
 */
bool CellIterator::next()
{
	step();
	return find();
}

/**
 * @note Address: 0x8022E534
 * @note Size: 0x10
 * Matches
 */
bool CellIterator::isDone()
{
	return mCurrLeg == nullptr;
}

/**
 * @note Address: 0x8022E544
 * @note Size: 0x1C
 */
CellObject* CellIterator::operator*()
{
	if (mCurrLeg) {
		return mCurrLeg->mObject;
	}
	return nullptr;
}

/**
 * @note Address: 0x8022E560
 * @note Size: 0x1C
 */
CellObject* CellIterator::getCellObject()
{
	return *(*this);
}

/**
 * @note Address: 0x8022E57C
 * @note Size: 0xEC
 */
bool CellIterator::step()
{
	if (mCurrLeg) {
		mCurrLeg = mCurrLeg->mNext;
	}

	if (!mCurrLeg) {
		mCurrY++;
		if (mCurrY > mMaxY) {
			mCurrY = mMinY;
			mCurrX++;
			if (mCurrX > mMaxX) {
				mCurrLayerIdx++;
				if (mCurrLayerIdx >= mArg.mCellMgr->mLayerCount) {
					return false;
				}

				calcExtent();
			}
		}

		Cell* foundCell = mArg.mCellMgr->mLayers[mCurrLayerIdx](mCurrX, mCurrY);
		if (foundCell) {
			mCurrLeg = foundCell->mLeg;
		}
	}

	return true;
}

/**
 * @note Address: 0x8022E668
 * @note Size: 0x110
 */
bool CellIterator::find()
{
	do {
		if (satisfy()) {
			return true;
		}
	} while (step());

	return false;
}

/**
 * @note Address: 0x8022E778
 * @note Size: 0x18C
 */
bool CellIterator::satisfy()
{
	if (!mCurrLeg) {
		return false;
	}

	if (!mCurrLeg || mCurrLeg->mObject->mPassID == mPassID) {
		return false;
	}

	if (mArg.mCondition && !mArg.mCondition->satisfy(mCurrLeg->mObject)) {
		return false;
	}

	CellObject* obj = mCurrLeg->mObject;
	Vector3f objPos = obj->getPosition();

	Sys::Sphere boundingSphere;
	obj->getBoundingSphere(boundingSphere);

	if (!mArg.mOptimise) {
		if (!mArg.mUseCustomRadius) {
			objPos = objPos - mArg.mSphere.mPosition;

			if (isWithinSphere(objPos, mArg.mSphere.mRadius + boundingSphere.mRadius)) {
				return false;
			}
		} else {
			objPos -= mArg.mSphere.mPosition;

			if (isWithinSphere(objPos, mArg.mSphere.mRadius + boundingSphere.mRadius)) {
				return false;
			}
		}
	}

	mCurrLeg->mObject->mPassID = mPassID;
	return true;
}

/**
 * @note Address: 0x8022E904
 * @note Size: 0x18C
 */
void CellIterator::calcExtent()
{
	// Get the cell manager and sphere properties from mArg
	CellPyramid* cellManager = mArg.mCellMgr;

	u16 layerSize = cellManager->getLayer(mCurrLayerIdx)->mLayerSize;
	f32 mult      = (f32)layerSize * cellManager->mScale;

	f32 xLow = mArg.mSphere.mPosition.x - mArg.mSphere.mRadius;
	f32 xHi  = mArg.mSphere.mPosition.x + mArg.mSphere.mRadius;
	f32 yLow = mArg.mSphere.mPosition.z - mArg.mSphere.mRadius;
	f32 yHi  = mArg.mSphere.mPosition.z + mArg.mSphere.mRadius;

	f32 left  = cellManager->mBounds.x;
	f32 right = cellManager->mBounds.y;

	f32 xLowDiff = xLow - right;
	f32 yLowDiff = yLow - left;
	f32 xHiDiff  = xHi - right;
	f32 yHiDiff  = yHi - left;

	f32 scale = 1.0f / mult;

	// Calculate the minimum and maximum x and y values
	mMinX = xLowDiff * scale;
	mMinY = yLowDiff * scale;
	mMaxX = xHiDiff * scale;
	mMaxY = yHiDiff * scale;

	if (mMinX > mMaxX) {
		JUT_PANICLINE(249, "x %f>%f", mMinX, mMaxX);
	}

	if (mMinY > mMaxY) {
		JUT_PANICLINE(252, "y %f>%f", mMinY, mMaxY);
	}

	if ((mMaxX - mMinX) * (mMaxY - mMinY) >= 10000) {
		JUT_PANICLINE(259, "xy %f %f\n%f %f\n", mMinX, mMinY, mMaxX, mMaxY);
	}

	mCurrX = mMinX;
	mCurrY = mMinY;
}

/**
 * @note Address: 0x8022EA90
 * @note Size: 0x4
 */
void CellIterator::dump()
{
}
} // namespace Game

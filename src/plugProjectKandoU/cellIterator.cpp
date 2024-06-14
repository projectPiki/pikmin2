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
CellIterator::CellIterator(Game::CellIteratorArg& arg) { mArg = arg; }

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
bool CellIterator::isDone() { return mCurrLeg == nullptr; }

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
CellObject* CellIterator::getCellObject() { return *(*this); }

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
	Vector3f spherePosition  = mArg.mSphere.mPosition;
	f32 sphereRadius         = mArg.mSphere.mRadius;

	// Get the bounds from the cell manager
	Vector2f bounds(cellManager->mBounds.x, cellManager->mBounds.y);

	// Calculate the normalization factor
	f32 normalizationFactor = 1.0f / (cellManager->mScale * cellManager->getLayer(mCurrLayerIdx)->mLayerSize);

	// Calculate the minimum and maximum x and y values
	mMinX = (spherePosition.x - sphereRadius - bounds.x) * normalizationFactor;
	mMinY = (spherePosition.z - sphereRadius - bounds.y) * normalizationFactor;
	mMaxX = (spherePosition.x + sphereRadius - bounds.x) * normalizationFactor;
	mMaxY = (spherePosition.z + sphereRadius - bounds.y) * normalizationFactor;

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
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lfd      f2, lbl_8051A318@sda21(r2)
	stw      r0, 0x44(r1)
	lis      r0, 0x4330
	lfs      f3, lbl_8051A304@sda21(r2)
	stw      r31, 0x3c(r1)
	mr       r31, r3
	lwz      r3, 0xc(r3)
	lwz      r5, 0x3c(r31)
	mulli    r3, r3, 0x38
	stw      r0, 8(r1)
	lwz      r4, 0x30(r5)
	lfs      f0, 0x34(r5)
	addi     r0, r3, 4
	lfs      f6, 0x30(r31)
	lhzx     r0, r4, r0
	lfs      f7, 0x2c(r31)
	stw      r0, 0xc(r1)
	lfs      f4, 0x24(r31)
	fsubs    f5, f7, f6
	lfd      f1, 8(r1)
	lfs      f9, 0x40(r5)
	fsubs    f2, f1, f2
	lfs      f8, 0x3c(r5)
	fsubs    f1, f4, f6
	fadds    f4, f4, f6
	fmuls    f2, f2, f0
	fadds    f0, f7, f6
	fsubs    f1, f1, f9
	fdivs    f6, f3, f2
	fsubs    f2, f5, f8
	fmuls    f1, f1, f6
	fsubs    f4, f4, f9
	fmuls    f2, f2, f6
	fctiwz   f3, f1
	fsubs    f0, f0, f8
	fmuls    f1, f4, f6
	fctiwz   f2, f2
	stfd     f3, 0x10(r1)
	fmuls    f0, f0, f6
	fctiwz   f1, f1
	lwz      r0, 0x14(r1)
	stfd     f2, 0x18(r1)
	fctiwz   f0, f0
	stfd     f1, 0x20(r1)
	lwz      r3, 0x1c(r1)
	stw      r0, 0x10(r31)
	lwz      r0, 0x24(r1)
	stw      r3, 0x14(r31)
	stfd     f0, 0x28(r1)
	stw      r0, 0x18(r31)
	lwz      r0, 0x2c(r1)
	stw      r0, 0x1c(r31)
	lwz      r6, 0x10(r31)
	lwz      r7, 0x18(r31)
	cmpw     r6, r7
	ble      lbl_8022EA04
	lis      r3, lbl_80483828@ha
	li       r4, 0xf9
	addi     r3, r3, lbl_80483828@l
	addi     r5, r2, lbl_8051A308@sda21
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8022EA04:
	lwz      r6, 0x14(r31)
	lwz      r7, 0x1c(r31)
	cmpw     r6, r7
	ble      lbl_8022EA2C
	lis      r3, lbl_80483828@ha
	li       r4, 0xfc
	addi     r3, r3, lbl_80483828@l
	addi     r5, r2, lbl_8051A310@sda21
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8022EA2C:
	lwz      r6, 0x10(r31)
	lwz      r8, 0x18(r31)
	lwz      r7, 0x14(r31)
	lwz      r9, 0x1c(r31)
	subf     r3, r6, r8
	subf     r0, r7, r9
	mullw    r0, r3, r0
	cmpwi    r0, 0x2710
	blt      lbl_8022EA6C
	lis      r3, lbl_80483828@ha
	lis      r4, lbl_8048383C@ha
	addi     r5, r4, lbl_8048383C@l
	addi     r3, r3, lbl_80483828@l
	li       r4, 0x103
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8022EA6C:
	lwz      r0, 0x10(r31)
	stw      r0, 4(r31)
	lwz      r0, 0x14(r31)
	stw      r0, 8(r31)
	lwz      r31, 0x3c(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/**
 * @note Address: 0x8022EA90
 * @note Size: 0x4
 */
void CellIterator::dump() { }
} // namespace Game

#include "Game/cellPyramid.h"

namespace Game {
/*
 * --INFO--
 * Address:	8022E36C
 * Size:	000034
 * Matches
 */
CellIteratorArg::CellIteratorArg()
{
	mCondition       = nullptr;
	mUseCustomRadius = 0;

	mSphere.mPosition = Vector3f(0.0f);
	mSphere.mRadius   = 0.0f;

	mCellMgr = cellMgr;

	_1D                        = 0;
	mIsSphereCollisionDisabled = false;
}

/*
 * --INFO--
 * Address:	8022E3A0
 * Size:	000040
 * Matches
 */
CellIteratorArg::CellIteratorArg(Sys::Sphere& sphere)
{
	mSphere                    = sphere;
	mCondition                 = nullptr;
	mUseCustomRadius           = 0;
	mCellMgr                   = Game::cellMgr;
	_1D                        = 0;
	mIsSphereCollisionDisabled = false;
}

/*
 * --INFO--
 * Address:	8022E3E0
 * Size:	00007C
 * Matches
 */
CellIterator::CellIterator(Game::CellIteratorArg& arg) { mArg = arg; }

/*
 * --INFO--
 * Address:	8022E45C
 * Size:	0000A4
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

/*
 * --INFO--
 * Address:	8022E500
 * Size:	000034
 * Matches
 */
bool CellIterator::next()
{
	step();
	return find();
}

/*
 * --INFO--
 * Address:	8022E534
 * Size:	000010
 * Matches
 */
bool CellIterator::isDone() { return mCurrLeg == nullptr; }

/*
 * --INFO--
 * Address:	8022E544
 * Size:	00001C
 */
CellObject* CellIterator::operator*()
{
	if (mCurrLeg) {
		return mCurrLeg->mObject;
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	8022E560
 * Size:	00001C
 */
CellObject* CellIterator::getCellObject() { return *(*this); }

/*
 * --INFO--
 * Address:	8022E57C
 * Size:	0000EC
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

/*
 * --INFO--
 * Address:	8022E668
 * Size:	000110
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

/*
 * --INFO--
 * Address:	8022E778
 * Size:	00018C
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

	if (!mArg.mIsSphereCollisionDisabled) {
		if (!mArg.mUseCustomRadius) {
			f32 radius = mArg.mSphere.mRadius + boundingSphere.mRadius;
			radius *= radius;
			if (sqrDistanceXZ(objPos, mArg.mSphere.mPosition) > radius) {
				return false;
			}
		} else {
			f32 radius = mArg.mSphere.mRadius + boundingSphere.mRadius;
			radius *= radius;
			if (sqrDistanceXZ(objPos, mArg.mSphere.mPosition) > radius) {
				return false;
			}
		}
	}

	mCurrLeg->mObject->mPassID = mPassID;
	return true;
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stfd     f30, 0x30(r1)
	psq_st   f30, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	mr       r30, r3
	lwz      r3, 0(r3)
	cmplwi   r3, 0
	bne      lbl_8022E7B4
	li       r3, 0
	b        lbl_8022E8DC

lbl_8022E7B4:
	beq      lbl_8022E7CC
	lwz      r4, 0xc(r3)
	lwz      r0, 0x20(r30)
	lwz      r3, 0xa4(r4)
	cmplw    r3, r0
	bne      lbl_8022E7D4

lbl_8022E7CC:
	li       r3, 0
	b        lbl_8022E8DC

lbl_8022E7D4:
	lwz      r3, 0x34(r30)
	cmplwi   r3, 0
	beq      lbl_8022E800
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8022E800
	li       r3, 0
	b        lbl_8022E8DC

lbl_8022E800:
	lwz      r4, 0(r30)
	addi     r3, r1, 8
	lwz      r31, 0xc(r4)
	mr       r4, r31
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	addi     r4, r1, 0x14
	lwz      r12, 0(r31)
	lfs      f31, 8(r1)
	lwz      r12, 0x10(r12)
	lfs      f30, 0x10(r1)
	mtctr    r12
	bctrl
	lbz      r0, 0x40(r30)
	cmplwi   r0, 0
	bne      lbl_8022E8C8
	lwz      r0, 0x38(r30)
	cmpwi    r0, 0
	bne      lbl_8022E890
	lfs      f0, 0x2c(r30)
	lfs      f2, 0x24(r30)
	fsubs    f3, f30, f0
	lfs      f1, 0x30(r30)
	lfs      f0, 0x20(r1)
	fsubs    f2, f31, f2
	fadds    f1, f1, f0
	fmuls    f0, f3, f3
	fmuls    f1, f1, f1
	fmadds   f0, f2, f2, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8022E8C8
	li       r3, 0
	b        lbl_8022E8DC

lbl_8022E890:
	lfs      f0, 0x2c(r30)
	lfs      f2, 0x24(r30)
	fsubs    f30, f30, f0
	lfs      f1, 0x30(r30)
	lfs      f0, 0x20(r1)
	fsubs    f31, f31, f2
	fadds    f1, f1, f0
	fmuls    f0, f30, f30
	fmuls    f1, f1, f1
	fmadds   f0, f31, f31, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8022E8C8
	li       r3, 0
	b        lbl_8022E8DC

lbl_8022E8C8:
	lwz      r4, 0(r30)
	li       r3, 1
	lwz      r0, 0x20(r30)
	lwz      r4, 0xc(r4)
	stw      r0, 0xa4(r4)

lbl_8022E8DC:
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	psq_l    f30, 56(r1), 0, qr0
	lfd      f30, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r0, 0x54(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8022E904
 * Size:	00018C
 */
void CellIterator::calcExtent()
{
	CellPyramid* mgr = mArg.mCellMgr;
	f32 r            = mArg.mSphere.mRadius;
	f32 z            = mArg.mSphere.mPosition.z;
	f32 x            = mArg.mSphere.mPosition.x;

	f32 a = mArg.mCellMgr->mRight;
	f32 b = mArg.mCellMgr->mLeft;

	f32 norm = 1.0f / (mgr->mScale * mgr->mLayers[mCurrLayerIdx].mLayerSize);

	mMinX = (x - r - a) * norm;
	mMinY = (z - r - b) * norm;
	mMaxX = (x + r - a) * norm;
	mMaxY = (z + r - b) * norm;

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

/*
 * --INFO--
 * Address:	8022EA90
 * Size:	000004
 */
void CellIterator::dump() { }
} // namespace Game

#include "Game/SnakeJointMgr.h"

namespace Game {

namespace {
const f32 cJointModRatio[6] = { 0.0f, 0.2f, 0.4f, 0.6f, 0.8f, 1.0f };
}; // namespace

static SnakeJointMgr* sSnakeJointMgr;

/**
 * @note Address: 0x802D1634
 * @note Size: 0x38
 */
static bool SnakeJointCallBack(J3DJoint* joint, int idx)
{
	if (idx == 0 && sSnakeJointMgr) {
		sSnakeJointMgr->makeMatrix();
	}

	return false;
}

/**
 * @note Address: 0x802D166C
 * @note Size: 0x3C
 */
SnakeJointMgr::SnakeJointMgr(EnemyBase* enemy)
{
	sSnakeJointMgr = nullptr;
	mObj           = enemy;
	for (int i = 0; i < 6; i++) {
		mJointMatrices[i] = nullptr;
	}
	mState = SNAKEJOINT_Finish;
	_20    = 0.0f;
	_28    = 0.0f;
	_24    = 0.0f;
}

/**
 * @note Address: 0x802D16A8
 * @note Size: 0xB8
 */
void SnakeJointMgr::setupCallBackJoint()
{
	char* joints[6]        = { "bodyjnt3", "bodyjnt4", "bodyjnt5", "bodyjnt6", "bodyjnt7", "bodyjnt8" };
	SysShape::Model* model = getModel();
	for (int i = 0; i < 6; i++) {
		SysShape::Joint* joint = model->getJoint(joints[i]);
		if (joint) {
			mJointMatrices[i] = joint->getWorldMatrix();
			if (i == 5) {
				joint->mJ3d->mFunction = &SnakeJointCallBack;
			}
		}
	}
}

/**
 * @note Address: 0x802D1760
 * @note Size: 0x20
 */
void SnakeJointMgr::startModify(f32 p1, f32 p2)
{
	mState = SNAKEJOINT_Modify;
	_20    = p1;
	_28    = p2;
	_24    = p2;
	_2C    = 0.0f;
}

/**
 * @note Address: 0x802D1780
 * @note Size: 0x1C
 */
void SnakeJointMgr::returnModify(f32 p1)
{
	mState = SNAKEJOINT_ReturnModify;
	_28    = p1;
	_24    = p1;
	_2C    = 1.0f;
}

/**
 * @note Address: 0x802D179C
 * @note Size: 0xC
 */
void SnakeJointMgr::finishModify() { mState = SNAKEJOINT_Finish; }

/**
 * @note Address: 0x802D17A8
 * @note Size: 0x80
 */
void SnakeJointMgr::doAnimation()
{
	sSnakeJointMgr = this;
	if (mState == SNAKEJOINT_Finish) {
		return;
	}

	_28 -= 30.0f * sys->mDeltaTime;
	if (_28 < 0.0f) {
		_28 = 0.0f;
	}

	if (mState == SNAKEJOINT_Modify) {
		_2C = 1.0f - (_28 / _24);
		return;
	}

	if (mState == SNAKEJOINT_ReturnModify) {
		_2C = _28 / _24;
	}
}

/**
 * @note Address: 0x802D1828
 * @note Size: 0xC
 */
void SnakeJointMgr::finishAnimation() { sSnakeJointMgr = nullptr; }

/**
 * @note Address: 0x802D1834
 * @note Size: 0x2AC
 */
void SnakeJointMgr::makeMatrix()
{
	if (mState == SNAKEJOINT_Finish) {
		return;
	}

	f32 dists[5];

	for (int i = 0; i < 6; i++) {
		Vector3f pos;
		mJointMatrices[i]->getTranslation(pos);

		if (i < 5) {
			Vector3f newPos;
			mJointMatrices[i + 1]->getTranslation(newPos);
			Vector3f sep = pos - newPos;
			dists[i]     = sep.length();
		}

		f32 modRatio = (cJointModRatio[i] * _20);
		Vector3f newPos(pos.x, _2C * modRatio + pos.y, pos.z);
		mJointMatrices[i]->setColumn(3, newPos);
	}

	for (int i = 0; i < 5; i++) {
		Vector3f xVec  = mJointMatrices[i + 1]->getColumn(3) - mJointMatrices[i]->getColumn(3); // f0, f1, f2
		Vector3f nextZ = mJointMatrices[i + 1]->getColumn(2);
		Vector3f yVec  = cross(xVec, nextZ);
		Vector3f zVec  = cross(xVec, yVec);
		f32 len        = xVec.normalise();
		yVec.normalise();
		zVec.normalise();

		f32 factor = len / dists[i];
		xVec *= factor;
		mJointMatrices[i]->setColumn(0, xVec);
		mJointMatrices[i]->setColumn(1, yVec);
		mJointMatrices[i]->setColumn(2, zVec);
	}

	PSMTXCopy(mJointMatrices[5]->mMatrix.mtxView, J3DSys::mCurrentMtx);
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	lwz      r0, 0x1c(r3)
	cmpwi    r0, 0
	beq      lbl_802D1AC8
	lis      r4, "cJointModRatio__Q24Game27@unnamed@SnakeJointMgr_cpp@"@ha
	addi     r8, r1, 8
	li       r0, 6
	mr       r5, r3
	addi     r7, r4, "cJointModRatio__Q24Game27@unnamed@SnakeJointMgr_cpp@"@l
	mr       r6, r8
	li       r9, 0
	mtctr    r0

lbl_802D1874:
	lwz      r4, 4(r5)
	cmpwi    r9, 5
	lfs      f4, 0xc(r4)
	lfs      f5, 0x1c(r4)
	lfs      f6, 0x2c(r4)
	bge      lbl_802D18DC
	lwz      r4, 8(r5)
	lfs      f0, lbl_8051C8D8@sda21(r2)
	lfs      f1, 0x1c(r4)
	lfs      f2, 0xc(r4)
	fsubs    f3, f5, f1
	lfs      f1, 0x2c(r4)
	fsubs    f2, f4, f2
	fsubs    f1, f6, f1
	fmuls    f3, f3, f3
	fmuls    f7, f1, f1
	fmadds   f1, f2, f2, f3
	fadds    f1, f7, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802D18D4
	ble      lbl_802D18D8
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_802D18D8

lbl_802D18D4:
	fmr      f1, f0

lbl_802D18D8:
	stfs     f1, 0(r6)

lbl_802D18DC:
	lfs      f0, 0(r7)
	addi     r6, r6, 4
	lfs      f1, 0x20(r3)
	addi     r7, r7, 4
	lfs      f2, 0x2c(r3)
	addi     r9, r9, 1
	fmuls    f0, f1, f0
	lwzu     r4, 4(r5)
	stfs     f4, 0xc(r4)
	fmadds   f5, f2, f0, f5
	stfs     f5, 0x1c(r4)
	stfs     f6, 0x2c(r4)
	bdnz     lbl_802D1874
	lfs      f12, lbl_8051C8D8@sda21(r2)
	li       r0, 5
	mr       r5, r3
	fmr      f11, f12
	fmr      f10, f12
	mtctr    r0

lbl_802D1928:
	lwz      r6, 4(r5)
	lwz      r4, 8(r5)
	lfs      f0, 0xc(r6)
	lfs      f3, 0xc(r4)
	lfs      f2, 0x1c(r4)
	lfs      f1, 0x1c(r6)
	fsubs    f0, f3, f0
	lfs      f7, 0x18(r6)
	fsubs    f1, f2, f1
	lfs      f8, 0x28(r6)
	lfs      f3, 0x2c(r4)
	fmuls    f4, f7, f0
	lfs      f2, 0x2c(r6)
	lfs      f5, 8(r6)
	fsubs    f2, f3, f2
	fmuls    f3, f8, f1
	fmuls    f13, f1, f1
	fmuls    f6, f5, f2
	fmsubs   f3, f7, f2, f3
	fmsubs   f5, f5, f1, f4
	fmsubs   f4, f8, f0, f6
	fmuls    f9, f1, f3
	fmuls    f7, f0, f5
	fmuls    f6, f2, f4
	fmuls    f31, f2, f2
	fmadds   f8, f0, f0, f13
	fmsubs   f6, f1, f5, f6
	fmsubs   f7, f2, f3, f7
	fadds    f13, f31, f8
	fmsubs   f8, f0, f4, f9
	fcmpo    cr0, f13, f12
	ble      lbl_802D19B8
	ble      lbl_802D19BC
	frsqrte  f9, f13
	fmuls    f13, f9, f13
	b        lbl_802D19BC

lbl_802D19B8:
	fmr      f13, f12

lbl_802D19BC:
	fcmpo    cr0, f13, f12
	ble      lbl_802D19DC
	lfs      f9, lbl_8051C8DC@sda21(r2)
	fdivs    f9, f9, f13
	fmuls    f0, f0, f9
	fmuls    f1, f1, f9
	fmuls    f2, f2, f9
	b        lbl_802D19E0

lbl_802D19DC:
	fmr      f13, f12

lbl_802D19E0:
	fmuls    f9, f4, f4
	fmuls    f31, f5, f5
	fmadds   f9, f3, f3, f9
	fadds    f31, f31, f9
	fcmpo    cr0, f31, f11
	ble      lbl_802D1A08
	ble      lbl_802D1A0C
	frsqrte  f9, f31
	fmuls    f31, f9, f31
	b        lbl_802D1A0C

lbl_802D1A08:
	fmr      f31, f11

lbl_802D1A0C:
	fcmpo    cr0, f31, f12
	ble      lbl_802D1A28
	lfs      f9, lbl_8051C8DC@sda21(r2)
	fdivs    f9, f9, f31
	fmuls    f3, f3, f9
	fmuls    f4, f4, f9
	fmuls    f5, f5, f9

lbl_802D1A28:
	fmuls    f9, f7, f7
	fmuls    f31, f8, f8
	fmadds   f9, f6, f6, f9
	fadds    f31, f31, f9
	fcmpo    cr0, f31, f10
	ble      lbl_802D1A50
	ble      lbl_802D1A54
	frsqrte  f9, f31
	fmuls    f31, f9, f31
	b        lbl_802D1A54

lbl_802D1A50:
	fmr      f31, f10

lbl_802D1A54:
	fcmpo    cr0, f31, f12
	ble      lbl_802D1A70
	lfs      f9, lbl_8051C8DC@sda21(r2)
	fdivs    f9, f9, f31
	fmuls    f6, f6, f9
	fmuls    f7, f7, f9
	fmuls    f8, f8, f9

lbl_802D1A70:
	lfs      f9, 0(r8)
	addi     r8, r8, 4
	fdivs    f9, f13, f9
	fmuls    f0, f0, f9
	fmuls    f1, f1, f9
	fmuls    f2, f2, f9
	stfs     f0, 0(r6)
	stfs     f1, 0x10(r6)
	stfs     f2, 0x20(r6)
	lwz      r4, 4(r5)
	stfs     f3, 4(r4)
	stfs     f4, 0x14(r4)
	stfs     f5, 0x24(r4)
	lwzu     r4, 4(r5)
	stfs     f6, 8(r4)
	stfs     f7, 0x18(r4)
	stfs     f8, 0x28(r4)
	bdnz     lbl_802D1928
	lis      r4, mCurrentMtx__6J3DSys@ha
	lwz      r3, 0x18(r3)
	addi     r4, r4, mCurrentMtx__6J3DSys@l
	bl       PSMTXCopy

lbl_802D1AC8:
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}
} // namespace Game

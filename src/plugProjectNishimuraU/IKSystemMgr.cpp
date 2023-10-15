#include "Game/IKSystemBase.h"
#include "JSystem/J3D/J3DJoint.h"
#include "Game/EnemyBase.h"
#include "Game/MapMgr.h"

namespace Game {

static IKSystemMgr* gIKSystemMgr;

/*
 * --INFO--
 * Address:	802A8A80
 * Size:	000038
 */
static bool IKJointCallBack(J3DJoint* joint, int arg)
{
	if (arg == 1 && gIKSystemMgr) {
		gIKSystemMgr->makeMatrix();
	}
	return false;
}

/*
 * --INFO--
 * Address:	802A8AB8
 * Size:	00007C
 */
IKSystemMgr::IKSystemMgr()
{
	gIKSystemMgr         = nullptr;
	mIKSystems           = new IKSystemBase[IK_LEG_COUNT];
	mJointGroundCallBack = nullptr;
}

/*
 * --INFO--
 * Address:	802A8B34
 * Size:	000144
 */
void IKSystemMgr::init(EnemyBase* obj, JointGroundCallBack* callback)
{
	mOwner            = obj;
	mIsIKActive       = false;
	mInMotion         = false;
	mOnGround         = false;
	mFaceDir          = mOwner->getFaceDir();
	mIKDistanceOffset = 100.0f;
	for (int i = 0; i < IK_LEG_COUNT; i++) {
		mLegHeight[i] = 0.0f;
		mLegStates[i] = 0;
	}
	mTargetPosition.z    = 0.0f;
	mTargetPosition.y    = 0.0f;
	mTargetPosition.x    = 0.0f;
	mCenterPosition      = mOwner->getPosition();
	mTraceCentrePosition = mOwner->getPosition();

	_50.z = 0.0f;
	_50.y = 0.0f;
	_50.x = 0.0f;
	for (int i = 0; i < IK_LEG_COUNT; i++) {
		mIKSystems[i].init();
	}
	mJointGroundCallBack = callback;
}

/*
 * --INFO--
 * Address:	802A8C78
 * Size:	00006C
 */
void IKSystemMgr::setupJoint(SysShape::Model* model, int id, char** names)
{
	for (int i = 0; i < 3; i++) {
		mIKSystems[id].setLegJointMatrix(i, model->getJoint(names[i])->getWorldMatrix());
	}
}

/*
 * --INFO--
 * Address:	802A8CE4
 * Size:	000038
 */
void IKSystemMgr::setupCallBack(SysShape::Model* model, char* name)
{
	J3DJoint* jnt = model->getJoint(name)->mJ3d;
	jnt->setCallBack(IKJointCallBack);
}

/*
 * --INFO--
 * Address:	802A8D1C
 * Size:	000064
 */
void IKSystemMgr::setParameters(IKSystemParms* parm)
{
	mParams = parm;
	for (int i = 0; i < IK_LEG_COUNT; i++) {
		mIKSystems[i].setParameters(mParams);
	}
}

/*
 * --INFO--
 * Address:	802A8D80
 * Size:	000188
 */
void IKSystemMgr::startProgramedIK()
{
	mIsIKActive = true;
	mInMotion   = false;
	mOnGround   = false;
	for (int i = 0; i < IK_LEG_COUNT; i++) {
		mLegStates[i] = 0;
		mIKSystems[i].startProgramedIK();
	}

	Vector3f objpos, ikpos;
	objpos            = mOwner->getPosition();
	ikpos             = mIKSystems->getBottomJointPosition();
	mIKDistanceOffset = objpos.distance(ikpos);
	for (int i = 0; i < IK_LEG_COUNT; i++) {
		ikpos         = mIKSystems[i].getBottomJointPosition();
		f32 diff      = JMath::atanTable_.atan2_(ikpos.x - objpos.x, ikpos.z - objpos.z);
		mLegHeight[i] = diff - mOwner->getFaceDir();
	}
}

/*
 * --INFO--
 * Address:	802A8F08
 * Size:	000024
 */
void IKSystemMgr::startIKMotion()
{
	mInMotion = true;
	mOnGround = false;
	for (int i = 0; i < IK_LEG_COUNT; i++) {
		mLegStates[i] = 0;
	}
}

/*
 * --INFO--
 * Address:	802A8F2C
 * Size:	00000C
 */
void IKSystemMgr::finishIKMotion() { mInMotion = false; }

/*
 * --INFO--
 * Address:	802A8F38
 * Size:	000014
 */
void IKSystemMgr::forceFinishIKMotion()
{
	finishIKMotion();
	mOnGround = true;
}

/*
 * --INFO--
 * Address:	802A8F4C
 * Size:	00005C
 */
void IKSystemMgr::startBlendMotion()
{
	for (int i = 0; i < IK_LEG_COUNT; i++) {
		mIKSystems[i].startBlendMotion();
	}
}

/*
 * --INFO--
 * Address:	802A8FA8
 * Size:	00005C
 */
void IKSystemMgr::finishBlendMotion()
{
	for (int i = 0; i < IK_LEG_COUNT; i++) {
		mIKSystems[i].finishBlendMotion();
	}
}

/*
 * --INFO--
 * Address:	802A9004
 * Size:	00005C
 */
void IKSystemMgr::checkJointScaleOn()
{
	for (int i = 0; i < IK_LEG_COUNT; i++) {
		mIKSystems[i].checkJointScaleOn();
	}
}

/*
 * --INFO--
 * Address:	802A9060
 * Size:	000070
 */
bool IKSystemMgr::isFinishIKMotion()
{
	if (!mInMotion) {
		for (int i = 0; i < IK_LEG_COUNT; i++) {
			if (mLegStates[i] != 3) {
				return false;
			}
		}
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	802A90D0
 * Size:	00000C
 */
void IKSystemMgr::resetAnimationCallBack() { gIKSystemMgr = nullptr; }

/*
 * --INFO--
 * Address:	802A90DC
 * Size:	000008
 */
void IKSystemMgr::setAnimationCallBack() { gIKSystemMgr = this; }

/*
 * --INFO--
 * Address:	802A90E4
 * Size:	00007C
 */
void IKSystemMgr::doUpdate()
{
	for (int i = 0; i < IK_LEG_COUNT; i++) {
		mIKSystems[i].update();
	}
	updateController();
	calcFaceDir();
	calcCentrePosition();
	calcTraceCentrePosition();
}

/*
 * --INFO--
 * Address:	802A9160
 * Size:	00005C
 */
void IKSystemMgr::makeMatrix()
{
	for (int i = 0; i < IK_LEG_COUNT; i++) {
		mIKSystems[i].makeMatrix();
	}
}

/*
 * --INFO--
 * Address:	802A91BC
 * Size:	000038
 */
Vector3f IKSystemMgr::getCollisionCentre(int i) { return mIKSystems[i].getCollisionCentre(); }

/*
 * --INFO--
 * Address:	802A91F4
 * Size:	00010C
 */
bool IKSystemMgr::isCollisionCheck(CollPart* part)
{
	if (part) {
		int id = -1;
		if (part->mCurrentID == 'lfsp') {
			id = 3;
		} else if (part->mCurrentID == 'lhsp') {
			id = 1;
		} else if (part->mCurrentID == 'rfsp') {
			id = 2;
		} else if (part->mCurrentID == 'rhsp') {
			id = 0;
		}
		if (id >= 0 && (mLegStates[id] == 1 || mLegStates[id] == 2) && mIKSystems[id].getMoveRatio() > 1.0f) {
			return true;
		}
	}
	return false;
}

/*
 * --INFO--
 * Address:	802A9300
 * Size:	000308
 */
void IKSystemMgr::updateController()
{
	if (mInMotion) {
		bool check3 = true;
		for (int i = 0; i < IK_LEG_COUNT; i++) {
			if (mLegStates[i] != 3) {
				check3 = false;
			}
		}
		if (check3) {
			for (int i = 0; i < IK_LEG_COUNT; i++) {
				mLegStates[i] = 0;
			}
		}

		bool check0 = true;
		for (int i = 0; i < IK_LEG_COUNT; i++) {
			if (mLegStates[i] != 0) {
				check0 = false;
			}
		}
		if (check0) {
			setNextCentrePosition();
			mIKSystems[0].startMovePosition(mLegTargetPosition[0]);
			mLegStates[0] = 1;
			if (mJointGroundCallBack) {
				Vector3f pos = mIKSystems[0].getBottomJointPosition();
				Sys::Sphere bounds(pos, 5.0f);
				Game::WaterBox* water = mapMgr->findWater(bounds);
				mJointGroundCallBack->invokeOffGround(0, water);
			}
		}
	}

	for (int i = 0; i < IK_LEG_COUNT; i++) {
		if (mLegStates[i] == 1) {
			if (mIKSystems[i].onGround()) {
				mLegStates[i] = 2;
			}
		} else if (mLegStates[i] == 2) {
			mLegStates[i] = 3;
			_50.y += mParams->_44;
			if (mJointGroundCallBack) {
				Vector3f pos = mIKSystems[i].getBottomJointPosition();
				Sys::Sphere bounds(pos, 5.0f);
				Game::WaterBox* water = mapMgr->findWater(bounds);
				mJointGroundCallBack->invokeOnGround(i, water);
			}
			int newid = (i + 1 < 0) ? i + 5 : (i + 1 > 3) ? i - 3 : i + 1;

			if (newid > 0 && !mOnGround) {
				mIKSystems[newid].startMovePosition(mLegTargetPosition[newid]);
				mLegStates[newid] = 1;
				if (mJointGroundCallBack) {
					Vector3f pos = mIKSystems[newid].getBottomJointPosition();
					Sys::Sphere bounds(pos, 5.0f);
					Game::WaterBox* water = mapMgr->findWater(bounds);
					mJointGroundCallBack->invokeOffGround(newid, water);
				}
			}
		}
	}
}

/*
 * --INFO--
 * Address:	802A9608
 * Size:	0003DC
 */
void IKSystemMgr::setNextCentrePosition()
{
	Vector3f ownerPos = mOwner->getPosition();
	f32 angleDist     = angXZ(ownerPos, mTargetPosition);
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stfd     f31, 0x90(r1)
	psq_st   f31, 152(r1), 0, qr0
	stfd     f30, 0x80(r1)
	psq_st   f30, 136(r1), 0, qr0
	stfd     f29, 0x70(r1)
	psq_st   f29, 120(r1), 0, qr0
	stfd     f28, 0x60(r1)
	psq_st   f28, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	mr       r31, r3
	addi     r3, r1, 0x14
	lwz      r30, 0x90(r31)
	mr       r4, r30
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f5, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x2c(r31)
	lfs      f0, 0x34(r31)
	lfs      f4, 0x18(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 8(r1)
	stfs     f4, 0xc(r1)
	stfs     f3, 0x10(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r30)
	fmr      f28, f1
	mr       r3, r30
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f28
	bl       angDist__Fff
	lwz      r3, 0x98(r31)
	fmr      f28, f1
	lfs      f0, lbl_8051BF84@sda21(r2)
	lfs      f2, 0x34(r3)
	lfs      f1, lbl_8051BF80@sda21(r2)
	fmuls    f0, f0, f2
	fabs     f2, f28
	fmuls    f0, f1, f0
	frsp     f1, f2
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802A9858
	lwz      r4, 0x90(r31)
	addi     r3, r1, 0x2c
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x2c(r1)
	lfs      f31, 0x2c(r31)
	lfs      f0, 0x34(r1)
	lfs      f29, 0x34(r31)
	fsubs    f2, f1, f31
	lfs      f30, lbl_8051BF74@sda21(r2)
	fsubs    f3, f0, f29
	fmadds   f2, f2, f2, f30
	fmuls    f3, f3, f3
	fadds    f2, f3, f2
	fcmpo    cr0, f2, f30
	ble      lbl_802A9740
	ble      lbl_802A9744
	frsqrte  f3, f2
	fmuls    f2, f3, f2
	b        lbl_802A9744

lbl_802A9740:
	fmr      f2, f30

lbl_802A9744:
	lwz      r3, 0x98(r31)
	lfs      f5, 0x2c(r3)
	fcmpo    cr0, f2, f5
	ble      lbl_802A97D0
	lfs      f3, lbl_8051BF74@sda21(r2)
	fsubs    f29, f29, f0
	fsubs    f31, f31, f1
	fsubs    f30, f30, f3
	fmuls    f4, f29, f29
	fmuls    f2, f30, f30
	fmadds   f2, f31, f31, f2
	fadds    f4, f4, f2
	fcmpo    cr0, f4, f3
	ble      lbl_802A978C
	ble      lbl_802A9790
	frsqrte  f2, f4
	fmuls    f4, f2, f4
	b        lbl_802A9790

lbl_802A978C:
	fmr      f4, f3

lbl_802A9790:
	lfs      f2, lbl_8051BF74@sda21(r2)
	fcmpo    cr0, f4, f2
	ble      lbl_802A97B0
	lfs      f2, lbl_8051BF78@sda21(r2)
	fdivs    f2, f2, f4
	fmuls    f31, f31, f2
	fmuls    f30, f30, f2
	fmuls    f29, f29, f2

lbl_802A97B0:
	fmuls    f31, f31, f5
	lfs      f2, lbl_8051BF74@sda21(r2)
	fmuls    f30, f30, f5
	fmuls    f29, f29, f5
	fadds    f31, f31, f1
	fadds    f30, f30, f2
	fadds    f29, f29, f0
	b        lbl_802A98BC

lbl_802A97D0:
	lfs      f5, 0x30(r3)
	fcmpo    cr0, f2, f5
	bge      lbl_802A98BC
	lfs      f3, lbl_8051BF74@sda21(r2)
	fsubs    f29, f29, f0
	fsubs    f31, f31, f1
	fsubs    f30, f30, f3
	fmuls    f4, f29, f29
	fmuls    f2, f30, f30
	fmadds   f2, f31, f31, f2
	fadds    f4, f4, f2
	fcmpo    cr0, f4, f3
	ble      lbl_802A9814
	ble      lbl_802A9818
	frsqrte  f2, f4
	fmuls    f4, f2, f4
	b        lbl_802A9818

lbl_802A9814:
	fmr      f4, f3

lbl_802A9818:
	lfs      f2, lbl_8051BF74@sda21(r2)
	fcmpo    cr0, f4, f2
	ble      lbl_802A9838
	lfs      f2, lbl_8051BF78@sda21(r2)
	fdivs    f2, f2, f4
	fmuls    f31, f31, f2
	fmuls    f30, f30, f2
	fmuls    f29, f29, f2

lbl_802A9838:
	fmuls    f31, f31, f5
	lfs      f2, lbl_8051BF74@sda21(r2)
	fmuls    f30, f30, f5
	fmuls    f29, f29, f5
	fadds    f31, f31, f1
	fadds    f30, f30, f2
	fadds    f29, f29, f0
	b        lbl_802A98BC

lbl_802A9858:
	lwz      r4, 0x90(r31)
	addi     r3, r1, 0x20
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x98(r31)
	fabs     f2, f28
	lfs      f0, lbl_8051BF84@sda21(r2)
	lfs      f3, 0x38(r3)
	lfs      f1, lbl_8051BF80@sda21(r2)
	frsp     f2, f2
	fmuls    f0, f0, f3
	lfs      f31, 0x20(r1)
	lfs      f29, 0x28(r1)
	lfs      f30, lbl_8051BF74@sda21(r2)
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	beq      lbl_802A98BC
	fcmpo    cr0, f28, f30
	ble      lbl_802A98B8
	fmr      f28, f0
	b        lbl_802A98BC

lbl_802A98B8:
	fneg     f28, f0

lbl_802A98BC:
	lwz      r3, 0x90(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	lfs      f4, lbl_8051BF74@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	fadds    f6, f28, f1
	li       r0, 4
	fadds    f1, f30, f4
	mr       r5, r31
	mr       r6, r31
	addi     r4, r3, sincosTable___5JMath@l
	lfs      f3, lbl_8051BF88@sda21(r2)
	mtctr    r0

lbl_802A98F8:
	lfs      f0, 0xc(r5)
	fadds    f7, f6, f0
	fmr      f0, f7
	fcmpo    cr0, f7, f4
	bge      lbl_802A9910
	fneg     f0, f7

lbl_802A9910:
	fmuls    f0, f0, f3
	lfs      f2, 8(r31)
	fcmpo    cr0, f7, f4
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f5, f2, f0
	bge      lbl_802A9968
	lfs      f0, lbl_8051BF8C@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f7, f0
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_802A9988

lbl_802A9968:
	fmuls    f0, f7, f3
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fctiwz   f0, f0
	stfd     f0, 0x48(r1)
	lwz      r0, 0x4c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_802A9988:
	fmuls    f2, f2, f0
	addi     r5, r5, 4
	fadds    f0, f29, f5
	fadds    f2, f31, f2
	stfs     f2, 0x5c(r6)
	stfs     f1, 0x60(r6)
	stfs     f0, 0x64(r6)
	addi     r6, r6, 0xc
	bdnz     lbl_802A98F8
	psq_l    f31, 152(r1), 0, qr0
	lfd      f31, 0x90(r1)
	psq_l    f30, 136(r1), 0, qr0
	lfd      f30, 0x80(r1)
	psq_l    f29, 120(r1), 0, qr0
	lfd      f29, 0x70(r1)
	psq_l    f28, 104(r1), 0, qr0
	lfd      f28, 0x60(r1)
	lwz      r31, 0x5c(r1)
	lwz      r0, 0xa4(r1)
	lwz      r30, 0x58(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A99E4
 * Size:	0000FC
 */
void IKSystemMgr::calcFaceDir()
{
	if (mIsIKActive) {
		Vector3f pos0, pos1;
		pos0 = mIKSystems[0].getBottomJointPosition();
		pos1 = mIKSystems[1].getBottomJointPosition();
		// this feels wrong
		f32 angle = JMath::atanTable_.atan2_((pos0.x + pos1.x) / 2 - mCenterPosition.x, (pos0.z + pos1.z) / 2 - mCenterPosition.z);
		mFaceDir  = angle;
		angle     = mFaceDir;
		clampAngle(angle);
		mFaceDir = angle;

	} else {
		mFaceDir = mOwner->getFaceDir();
	}
}

/*
 * --INFO--
 * Address:	802A9AE0
 * Size:	000298
 */
void IKSystemMgr::calcCentrePosition()
{
	if (mIsIKActive) {

	} else {
		mCenterPosition = mOwner->getPosition();
	}
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stw      r31, 0x9c(r1)
	mr       r31, r3
	lbz      r0, 0(r3)
	cmplwi   r0, 0
	beq      lbl_802A9D34
	lwz      r4, 0x8c(r31)
	addi     r3, r1, 0x38
	bl       getBottomJointPosition__Q24Game12IKSystemBaseFv
	lfs      f2, 0x38(r1)
	addi     r3, r1, 0x2c
	lfs      f1, 0x3c(r1)
	lfs      f0, 0x40(r1)
	lwz      r4, 0x8c(r31)
	stfs     f2, 0x64(r1)
	addi     r4, r4, 0x5c
	stfs     f1, 0x68(r1)
	stfs     f0, 0x6c(r1)
	bl       getBottomJointPosition__Q24Game12IKSystemBaseFv
	lfs      f2, 0x2c(r1)
	addi     r3, r1, 0x20
	lfs      f1, 0x30(r1)
	lfs      f0, 0x34(r1)
	lwz      r4, 0x8c(r31)
	stfs     f2, 0x70(r1)
	addi     r4, r4, 0xb8
	stfs     f1, 0x74(r1)
	stfs     f0, 0x78(r1)
	bl       getBottomJointPosition__Q24Game12IKSystemBaseFv
	lfs      f2, 0x20(r1)
	addi     r3, r1, 0x14
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	lwz      r4, 0x8c(r31)
	stfs     f2, 0x7c(r1)
	addi     r4, r4, 0x114
	stfs     f1, 0x80(r1)
	stfs     f0, 0x84(r1)
	bl       getBottomJointPosition__Q24Game12IKSystemBaseFv
	lfs      f11, 0x18(r1)
	addi     r5, r1, 0x54
	lfs      f12, 0x14(r1)
	li       r6, 0
	lfs      f10, 0x1c(r1)
	lfs      f0, lbl_8051BF74@sda21(r2)
	lfs      f2, 0x68(r1)
	stfs     f0, 0x40(r31)
	lfs      f1, 0x74(r1)
	stfs     f0, 0x3c(r31)
	lfs      f3, 0x64(r1)
	stfs     f0, 0x38(r31)
	lfs      f0, 0x80(r1)
	lfs      f4, 0x38(r31)
	lfs      f8, 0x6c(r1)
	fadds    f3, f4, f3
	lfs      f7, 0x70(r1)
	lfs      f6, 0x78(r1)
	stfs     f2, 0x54(r1)
	lfs      f5, 0x7c(r1)
	stfs     f3, 0x38(r31)
	lfs      f4, 0x84(r1)
	lfs      f9, 0x40(r31)
	stfs     f1, 0x58(r1)
	fadds    f8, f9, f8
	lfs      f3, lbl_8051BF98@sda21(r2)
	stfs     f0, 0x5c(r1)
	stfs     f8, 0x40(r31)
	lfs      f8, 0x38(r31)
	stfs     f12, 0x88(r1)
	fadds    f7, f8, f7
	stfs     f11, 0x8c(r1)
	stfs     f7, 0x38(r31)
	lfs      f2, 0x40(r31)
	stfs     f10, 0x90(r1)
	fadds    f1, f2, f6
	stfs     f11, 0x60(r1)
	stfs     f1, 0x40(r31)
	lfs      f0, 0x38(r31)
	fadds    f0, f0, f5
	stfs     f0, 0x38(r31)
	lfs      f0, 0x40(r31)
	fadds    f0, f0, f4
	stfs     f0, 0x40(r31)
	lfs      f0, 0x38(r31)
	fadds    f0, f0, f12
	stfs     f0, 0x38(r31)
	lfs      f0, 0x40(r31)
	fadds    f0, f0, f10
	stfs     f0, 0x40(r31)
	lfs      f0, 0x38(r31)
	fmuls    f0, f0, f3
	stfs     f0, 0x38(r31)
	lfs      f0, 0x40(r31)
	fmuls    f0, f0, f3
	stfs     f0, 0x40(r31)

lbl_802A9C64:
	addi     r7, r6, 1
	addi     r4, r1, 0x54
	slwi     r3, r7, 2
	subfic   r0, r7, 4
	add      r4, r4, r3
	mtctr    r0
	cmpwi    r7, 4
	bge      lbl_802A9CA8

lbl_802A9C84:
	lfs      f1, 0(r5)
	lfs      f0, 0(r4)
	fcmpo    cr0, f1, f0
	ble      lbl_802A9C9C
	stfs     f1, 0(r4)
	stfs     f0, 0(r5)

lbl_802A9C9C:
	addi     r4, r4, 4
	addi     r7, r7, 1
	bdnz     lbl_802A9C84

lbl_802A9CA8:
	addi     r6, r6, 1
	addi     r5, r5, 4
	cmpwi    r6, 3
	blt      lbl_802A9C64
	lis      r3, lbl_80489968@ha
	lfs      f1, 0x54(r1)
	addi     r5, r3, lbl_80489968@l
	lfs      f0, 0x3c(r31)
	lwz      r0, 0(r5)
	lwz      r4, 4(r5)
	stw      r0, 0x44(r1)
	lwz      r3, 8(r5)
	lfs      f2, 0x44(r1)
	lwz      r0, 0xc(r5)
	fmadds   f0, f2, f1, f0
	stw      r4, 0x48(r1)
	lfs      f1, 0x58(r1)
	stw      r3, 0x4c(r1)
	lfs      f2, 0x48(r1)
	stfs     f0, 0x3c(r31)
	lfs      f4, 0x4c(r1)
	lfs      f0, 0x3c(r31)
	stw      r0, 0x50(r1)
	fmadds   f0, f2, f1, f0
	lfs      f3, 0x5c(r1)
	lfs      f2, 0x50(r1)
	lfs      f1, 0x60(r1)
	stfs     f0, 0x3c(r31)
	lfs      f0, 0x3c(r31)
	fmadds   f0, f4, f3, f0
	stfs     f0, 0x3c(r31)
	lfs      f0, 0x3c(r31)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x3c(r31)
	b        lbl_802A9D64

lbl_802A9D34:
	lwz      r4, 0x90(r31)
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 8(r1)
	stfs     f0, 0x38(r31)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x3c(r31)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x40(r31)

lbl_802A9D64:
	lwz      r0, 0xa4(r1)
	lwz      r31, 0x9c(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A9D78
 * Size:	0000E4
 */
void IKSystemMgr::calcTraceCentrePosition()
{
	if (mIsIKActive) {
		_50 += (mCenterPosition - mTraceCentrePosition) * mParams->_3C;
		mTraceCentrePosition += _50;
		_50 *= mParams->_40;
		return;
	}
	mTraceCentrePosition = mCenterPosition;
	/*
	lbz      r0, 0(r3)
	cmplwi   r0, 0
	beq      lbl_802A9E40
	lfs      f1, 0x38(r3)
	lfs      f0, 0x44(r3)
	lwz      r4, 0x98(r3)
	fsubs    f5, f1, f0
	lfs      f0, 0x50(r3)
	lfs      f4, 0x3c(r4)
	lfs      f3, 0x3c(r3)
	fmuls    f5, f5, f4
	lfs      f1, 0x48(r3)
	lfs      f2, 0x40(r3)
	fsubs    f3, f3, f1
	lfs      f1, 0x4c(r3)
	fadds    f0, f0, f5
	fsubs    f1, f2, f1
	fmuls    f3, f3, f4
	stfs     f0, 0x50(r3)
	fmuls    f1, f1, f4
	lfs      f0, 0x54(r3)
	fadds    f0, f0, f3
	stfs     f0, 0x54(r3)
	lfs      f0, 0x58(r3)
	fadds    f0, f0, f1
	stfs     f0, 0x58(r3)
	lfs      f1, 0x44(r3)
	lfs      f0, 0x50(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x44(r3)
	lfs      f1, 0x48(r3)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x48(r3)
	lfs      f1, 0x4c(r3)
	lfs      f0, 0x58(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x4c(r3)
	lwz      r4, 0x98(r3)
	lfs      f0, 0x50(r3)
	lfs      f1, 0x40(r4)
	fmuls    f0, f0, f1
	stfs     f0, 0x50(r3)
	lfs      f0, 0x54(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0x54(r3)
	lfs      f0, 0x58(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0x58(r3)
	blr

lbl_802A9E40:
	lfs      f0, 0x38(r3)
	stfs     f0, 0x44(r3)
	lfs      f0, 0x3c(r3)
	stfs     f0, 0x48(r3)
	lfs      f0, 0x40(r3)
	stfs     f0, 0x4c(r3)
	blr
	*/
}
} // namespace Game

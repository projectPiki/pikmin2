#include "Game/Entities/Ujib.h"
#include "Game/Entities/ItemBridge.h"
#include "Game/MapMgr.h"
#include "efx/TUjinko.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Ujib {

/*
 * --INFO--
 * Address:	80259B4C
 * Size:	000138
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
}

/*
 * --INFO--
 * Address:	80259C84
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	80259C88
 * Size:	000098
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	disableEvent(0, EB_LifegaugeVisible);
	disableEvent(0, EB_Cullable);
	resetAppearCheck();
	mIsUnderground = false;
	mNextState     = UJIB_NULL;
	resetBridgeSearch();
	mFsm->start(this, UJIB_Stay, nullptr);
	doAnimationCullingOff();
}

/*
 * --INFO--
 * Address:	80259D20
 * Size:	000048
 */
void Obj::doUpdate()
{
	mFsm->exec(this);
	mMouthSlots.update();
}

/*
 * --INFO--
 * Address:	80259D68
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	80259D6C
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	80259D8C
 * Size:	00004C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/*
 * --INFO--
 * Address:	80259DD8
 * Size:	0000A8
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	shadowParam.mPosition = mModel->getJoint("kosijnt")->getWorldMatrix()->getBasis(3);
	shadowParam.mPosition.y -= 2.5f;
	shadowParam.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	if (isEvent(1, EB2_Earthquake)) {
		shadowParam.mBoundingSphere.mRadius = 50.0f;
	} else {
		shadowParam.mBoundingSphere.mRadius = 15.0f;
	}

	shadowParam.mSize = 8.0f;
}

/*
 * --INFO--
 * Address:	80259E80
 * Size:	000094
 */
bool Obj::pressCallBack(Creature* creature, f32 damage, CollPart* part)
{
	if (creature && creature->isPiki() && !isEvent(0, EB_Bittered) && getStateID() > UJIB_Dive) {
		// i.e. not in dead, press, stay, appear, or dive states
		mFsm->transit(this, UJIB_Press, nullptr);
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	80259F14
 * Size:	00002C
 */
bool Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* part) { return pressCallBack(creature, damage, part); }

/*
 * --INFO--
 * Address:	80259F40
 * Size:	000028
 */
void Obj::startCarcassMotion() { startMotion(UJIBANIM_Carry, nullptr); }

/*
 * --INFO--
 * Address:	80259F68
 * Size:	00008C
 */
void Obj::initMouthSlots()
{
	mMouthSlots.alloc(1);
	mMouthSlots.setup(0, mModel, "kamujnt");
	for (int i = 0; i < mMouthSlots.getMax(); i++) {
		mMouthSlots.getSlot(i)->mRadius = 15.0f;
	}
}

/*
 * --INFO--
 * Address:	80259FF4
 * Size:	000030
 */
void Obj::lifeIncrement()
{
	mInstantDamage = 0.0f;
	disableEvent(0, EB_TakingDamage);
	if (mHealth <= 0.0f) {
		mHealth = 1.0f;
	}
}

/*
 * --INFO--
 * Address:	8025A024
 * Size:	000034
 */
void Obj::setInWaterDamage()
{
	if (mWaterBox) {
		addDamage(2.0f, 1.0f);
	}
}

/*
 * --INFO--
 * Address:	8025A058
 * Size:	0000B4
 */
void Obj::resetAppearCheck()
{
	if (Game::gameSystem && Game::gameSystem->isZukanMode()) {
		int weight = (rand() / RAND_MAX) * 30.0f; // does not match with inline
		SET_APPCHECK_MAX(mAppearCheck, weight + 5 * getCreatureID());

	} else {
		mAppearCheck = 0;
	}
}

/*
 * --INFO--
 * Address:	8025A10C
 * Size:	000048
 */
bool Obj::isAppearCheck()
{
	if (mAppearCheck != 0) {
		mAppearCheck++;
		if (GET_APPCHECK_VAL(mAppearCheck) > GET_APPCHECK_MAX(mAppearCheck)) {
			mAppearCheck = 0;
			return true;
		}
		return false;
	}

	return true;
}

/*
 * --INFO--
 * Address:	8025A154
 * Size:	000020
 */
void Obj::resetBridgeSearch()
{
	_2C0    = 1;
	mBridge = nullptr;
	_2CC    = 0.0f;
	_2D0    = 0.0f;
}

/*
 * --INFO--
 * Address:	8025A174
 * Size:	000048
 */
void Obj::setBridgeSearch()
{
	if (_2C0) {
		_2C0 = 0;
		setNearestBridge();
		setCullingCheck();
	}
}

/*
 * --INFO--
 * Address:	8025A1BC
 * Size:	0002C0
 */
void Obj::setNearestBridge()
{
	mBridge = nullptr;
	_2CC    = 0.0f;
	_2D0    = 0.0f;

	if (ItemBridge::mgr) {
		f32 radius = C_PARMS->mGeneral.mTerritoryRadius.mValue;
		radius     = SQUARE(radius);
		Iterator<BaseItem> iter(ItemBridge::mgr);
		CI_LOOP(iter)
		{
			ItemBridge::Item* bridge = static_cast<ItemBridge::Item*>(*iter);
			Vector3f startPos        = bridge->getStartPos();
			f32 newRad               = sqrDistanceXZ(mPosition, startPos);
			if (newRad < radius) {
				mBridge = bridge;
				radius  = newRad;
			}
		}
	}

	if (mBridge) {
		f32 width = mBridge->getStageWidth() - 20.0f;
		_2CC      = -(0.5f * width - randWeightFloat(width));
	}
}

/*
 * --INFO--
 * Address:	8025A47C
 * Size:	000004
 */
void Obj::setCullingCheck() { }

/*
 * --INFO--
 * Address:	8025A480
 * Size:	0001B4
 */
int Obj::checkBreakOrMove()
{
	if (mBridge) {
		Vector3f zVec     = mBridge->getBridgeZVec();
		Vector3f startPos = mBridge->getStartPos();

		Vector3f bridgeDist = startPos - mPosition;
		if (zVec.dot(bridgeDist) > 0.0f) {
			return UJIB_MoveCentre;
		}

		Vector3f xVec = mBridge->getBridgeXVec();
		f32 halfWidth = 0.5f * mBridge->getStageWidth();
		f32 dotX      = xVec.dot(bridgeDist);
		f32 width     = 20.0f + halfWidth;

		if (dotX < 0.0f) {
			_2D0 = width;
		} else {
			_2D0 = -width;
		}

		if (absVal(dotX) > halfWidth) {
			return UJIB_MoveSide;
		}

		f32 minY = mapMgr->getMinY(mPosition);

		if (mPosition.y > 5.0f + minY) {
			return UJIB_MoveTop;
		}

		return UJIB_MoveSide;
	}

	return UJIB_MoveCentre;
}

/*
 * --INFO--
 * Address:	8025A634
 * Size:	000028
 */
bool Obj::isBreakBridge()
{
	if (mBridge && mBridge->mCurrStageIdx != 0) {
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	8025A65C
 * Size:	0002A8
 */
bool Obj::moveBridgeSide()
{
	Vector3f startPos = mBridge->getStartPos();
	Vector3f xVec     = mBridge->getBridgeXVec();
	Vector3f zVec     = mBridge->getBridgeZVec();

	xVec *= _2D0;
	zVec *= -20.0f;

	startPos += xVec;
	startPos += zVec;

	if (sqrDistanceXZ(mPosition, startPos) < 250.0f) {
		f32 speed    = 0.75f * C_PARMS->mGeneral.mMoveSpeed.mValue;
		f32 sinTheta = sin(getFaceDir());
		f32 y        = getTargetVelocity().y;
		f32 cosTheta = cos(getFaceDir());

		mTargetVelocity.x = speed * sinTheta;
		mTargetVelocity.y = y;
		mTargetVelocity.z = speed * cosTheta;

		return true;

	} else {
		changeFaceDir(startPos);

		f32 speed    = C_PARMS->mGeneral.mMoveSpeed.mValue;
		f32 sinTheta = sin(getFaceDir());
		f32 y        = getTargetVelocity().y;
		f32 cosTheta = cos(getFaceDir());

		mTargetVelocity.x = speed * sinTheta;
		mTargetVelocity.y = y;
		mTargetVelocity.z = speed * cosTheta;

		return false;
	}
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
	mr       r31, r3
	addi     r3, r1, 0x44
	lwz      r4, 0x2d0(r31)
	bl       getStartPos__Q34Game10ItemBridge4ItemFv
	lfs      f29, 0x44(r1)
	addi     r3, r1, 0x38
	lfs      f28, 0x4c(r1)
	lwz      r4, 0x2d0(r31)
	bl       getBridgeXVec__Q34Game10ItemBridge4ItemFv
	lfs      f30, 0x38(r1)
	addi     r3, r1, 0x2c
	lfs      f31, 0x40(r1)
	lwz      r4, 0x2d0(r31)
	bl       getBridgeZVec__Q34Game10ItemBridge4ItemFv
	lfs      f1, 0x2d8(r31)
	lfs      f4, 0x34(r1)
	fmuls    f31, f31, f1
	lfs      f0, lbl_8051AB7C@sda21(r2)
	fmuls    f30, f30, f1
	lfs      f3, 0x2c(r1)
	fmuls    f4, f4, f0
	lfs      f1, 0x194(r31)
	fadds    f28, f28, f31
	lfs      f2, 0x18c(r31)
	fmuls    f3, f3, f0
	lfs      f0, lbl_8051AB80@sda21(r2)
	fadds    f29, f29, f30
	fadds    f28, f28, f4
	fadds    f29, f29, f3
	fsubs    f1, f1, f28
	fsubs    f2, f2, f29
	fmuls    f1, f1, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8025A794
	mr       r3, r31
	lwz      r4, 0xc0(r31)
	lwz      r12, 0(r31)
	lfs      f1, lbl_8051AB84@sda21(r2)
	lfs      f0, 0x2e4(r4)
	lwz      r12, 0x64(r12)
	fmuls    f30, f1, f0
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r31
	lfs      f2, 0x1d4(r31)
	lwz      r12, 0(r31)
	frsp     f29, f1
	lfs      f31, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x20(r1)
	stfs     f31, 0x24(r1)
	stfs     f0, 0x28(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f30, f29
	li       r3, 1
	frsp     f1, f1
	stfs     f0, 0x1d4(r31)
	fmuls    f0, f30, f1
	stfs     f31, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_8025A8D0

lbl_8025A794:
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	addi     r3, r1, 8
	lfs      f31, 0x334(r5)
	lwz      r12, 8(r12)
	lfs      f30, 0x30c(r5)
	mtctr    r12
	bctrl
	lfs      f1, 8(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x10(r1)
	addi     r3, r3, atanTable___5JMath@l
	fsubs    f1, f29, f1
	fsubs    f2, f28, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f29, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f29
	bl       angDist__Fff
	fmuls    f30, f1, f30
	lfs      f0, lbl_8051AB8C@sda21(r2)
	lfs      f1, lbl_8051AB88@sda21(r2)
	fmuls    f0, f0, f31
	fabs     f2, f30
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_8025A838
	lfs      f0, lbl_8051AB3C@sda21(r2)
	fcmpo    cr0, f30, f0
	ble      lbl_8025A834
	fmr      f30, f1
	b        lbl_8025A838

lbl_8025A834:
	fneg     f30, f1

lbl_8025A838:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f30, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	mr       r3, r31
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	lwz      r12, 0(r31)
	lwz      r4, 0xc0(r31)
	lwz      r12, 0x64(r12)
	lfs      f30, 0x2e4(r4)
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r31
	lfs      f2, 0x1d4(r31)
	lwz      r12, 0(r31)
	frsp     f29, f1
	lfs      f31, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x14(r1)
	stfs     f31, 0x18(r1)
	stfs     f0, 0x1c(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f30, f29
	li       r3, 0
	frsp     f1, f1
	stfs     f0, 0x1d4(r31)
	fmuls    f0, f30, f1
	stfs     f31, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)

lbl_8025A8D0:
	psq_l    f31, 152(r1), 0, qr0
	lfd      f31, 0x90(r1)
	psq_l    f30, 136(r1), 0, qr0
	lfd      f30, 0x80(r1)
	psq_l    f29, 120(r1), 0, qr0
	lfd      f29, 0x70(r1)
	psq_l    f28, 104(r1), 0, qr0
	lfd      f28, 0x60(r1)
	lwz      r0, 0xa4(r1)
	lwz      r31, 0x5c(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8025A904
 * Size:	000288
 */
bool Obj::moveBridgeCentre()
{
	Vector3f startPos = mBridge->getStartPos();
	Vector3f xVec     = mBridge->getBridgeXVec();

	xVec *= 0.7f * _2CC;

	startPos += xVec;

	if (sqrDistanceXZ(mPosition, startPos) < 250.0f) {
		f32 speed    = 0.75f * C_PARMS->mGeneral.mMoveSpeed.mValue;
		f32 sinTheta = sin(getFaceDir());
		f32 y        = getTargetVelocity().y;
		f32 cosTheta = cos(getFaceDir());

		mTargetVelocity.x = speed * sinTheta;
		mTargetVelocity.y = y;
		mTargetVelocity.z = speed * cosTheta;

		return true;

	} else {
		changeFaceDir(startPos);

		f32 speed    = C_PARMS->mGeneral.mMoveSpeed.mValue;
		f32 sinTheta = sin(getFaceDir());
		f32 y        = getTargetVelocity().y;
		f32 cosTheta = cos(getFaceDir());

		mTargetVelocity.x = speed * sinTheta;
		mTargetVelocity.y = y;
		mTargetVelocity.z = speed * cosTheta;

		return false;
	}
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stfd     f30, 0x70(r1)
	psq_st   f30, 120(r1), 0, qr0
	stfd     f29, 0x60(r1)
	psq_st   f29, 104(r1), 0, qr0
	stfd     f28, 0x50(r1)
	psq_st   f28, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	mr       r31, r3
	addi     r3, r1, 0x38
	lwz      r4, 0x2d0(r31)
	bl       getStartPos__Q34Game10ItemBridge4ItemFv
	lfs      f29, 0x38(r1)
	addi     r3, r1, 0x2c
	lfs      f28, 0x40(r1)
	lwz      r4, 0x2d0(r31)
	bl       getBridgeXVec__Q34Game10ItemBridge4ItemFv
	lfs      f1, lbl_8051AB90@sda21(r2)
	lfs      f0, 0x2d4(r31)
	lfs      f5, 0x34(r1)
	fmuls    f3, f1, f0
	lfs      f4, 0x2c(r1)
	lfs      f1, 0x194(r31)
	lfs      f2, 0x18c(r31)
	fmuls    f5, f5, f3
	lfs      f0, lbl_8051AB80@sda21(r2)
	fmuls    f4, f4, f3
	fadds    f28, f28, f5
	fadds    f29, f29, f4
	fsubs    f1, f1, f28
	fsubs    f2, f2, f29
	fmuls    f1, f1, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8025AA1C
	mr       r3, r31
	lwz      r4, 0xc0(r31)
	lwz      r12, 0(r31)
	lfs      f1, lbl_8051AB84@sda21(r2)
	lfs      f0, 0x2e4(r4)
	lwz      r12, 0x64(r12)
	fmuls    f30, f1, f0
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r31
	lfs      f2, 0x1d4(r31)
	lwz      r12, 0(r31)
	frsp     f29, f1
	lfs      f31, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x20(r1)
	stfs     f31, 0x24(r1)
	stfs     f0, 0x28(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f30, f29
	li       r3, 1
	frsp     f1, f1
	stfs     f0, 0x1d4(r31)
	fmuls    f0, f30, f1
	stfs     f31, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_8025AB58

lbl_8025AA1C:
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	addi     r3, r1, 8
	lfs      f31, 0x334(r5)
	lwz      r12, 8(r12)
	lfs      f30, 0x30c(r5)
	mtctr    r12
	bctrl
	lfs      f1, 8(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x10(r1)
	addi     r3, r3, atanTable___5JMath@l
	fsubs    f1, f29, f1
	fsubs    f2, f28, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f29, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f29
	bl       angDist__Fff
	fmuls    f30, f1, f30
	lfs      f0, lbl_8051AB8C@sda21(r2)
	lfs      f1, lbl_8051AB88@sda21(r2)
	fmuls    f0, f0, f31
	fabs     f2, f30
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_8025AAC0
	lfs      f0, lbl_8051AB3C@sda21(r2)
	fcmpo    cr0, f30, f0
	ble      lbl_8025AABC
	fmr      f30, f1
	b        lbl_8025AAC0

lbl_8025AABC:
	fneg     f30, f1

lbl_8025AAC0:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f30, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	mr       r3, r31
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	lwz      r12, 0(r31)
	lwz      r4, 0xc0(r31)
	lwz      r12, 0x64(r12)
	lfs      f30, 0x2e4(r4)
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r31
	lfs      f2, 0x1d4(r31)
	lwz      r12, 0(r31)
	frsp     f29, f1
	lfs      f31, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x14(r1)
	stfs     f31, 0x18(r1)
	stfs     f0, 0x1c(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f30, f29
	li       r3, 0
	frsp     f1, f1
	stfs     f0, 0x1d4(r31)
	fmuls    f0, f30, f1
	stfs     f31, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)

lbl_8025AB58:
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	psq_l    f28, 88(r1), 0, qr0
	lfd      f28, 0x50(r1)
	lwz      r0, 0x94(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	8025AB8C
 * Size:	0002F0
 */
bool Obj::moveBridgeTop()
{
	int stageID       = mBridge->mCurrStageIdx - 1;
	Vector3f stagePos = mBridge->getStagePos(stageID);
	Vector3f xVec     = mBridge->getBridgeXVec();

	xVec *= _2CC;

	stagePos += xVec;

	if (stageID > 0) {
		Vector3f zVec = mBridge->getBridgeZVec();
		zVec *= -20.0f;
		stagePos += zVec;
	}

	changeFaceDir(stagePos);

	f32 dist = sqrDistanceXZ(mPosition, stagePos);

	if (dist < 50.0f) {
		mTargetVelocity = Vector3f(0.0f);
		return true;

	} else if (dist < 250.0f) {
		f32 speed    = C_PARMS->mGeneral.mMoveSpeed.mValue;
		f32 sinTheta = sin(getFaceDir());
		f32 y        = getTargetVelocity().y;
		f32 cosTheta = cos(getFaceDir());

		mTargetVelocity.x = speed * sinTheta;
		mTargetVelocity.y = y;
		mTargetVelocity.z = speed * cosTheta;

		return true;

	} else {
		f32 speed    = C_PARMS->mGeneral.mMoveSpeed.mValue;
		f32 sinTheta = sin(getFaceDir());
		f32 y        = getTargetVelocity().y;
		f32 cosTheta = cos(getFaceDir());

		mTargetVelocity.x = speed * sinTheta;
		mTargetVelocity.y = y;
		mTargetVelocity.z = speed * cosTheta;
	}

	return false;
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	stw      r0, 0xb4(r1)
	stfd     f31, 0xa0(r1)
	psq_st   f31, 168(r1), 0, qr0
	stfd     f30, 0x90(r1)
	psq_st   f30, 152(r1), 0, qr0
	stfd     f29, 0x80(r1)
	psq_st   f29, 136(r1), 0, qr0
	stfd     f28, 0x70(r1)
	psq_st   f28, 120(r1), 0, qr0
	stfd     f27, 0x60(r1)
	psq_st   f27, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	mr       r30, r3
	addi     r3, r1, 0x44
	lwz      r4, 0x2d0(r30)
	lwz      r5, 0x218(r4)
	addi     r31, r5, -1
	mr       r5, r31
	bl       getStagePos__Q34Game10ItemBridge4ItemFi
	lfs      f31, 0x44(r1)
	addi     r3, r1, 0x38
	lfs      f30, 0x4c(r1)
	lwz      r4, 0x2d0(r30)
	bl       getBridgeXVec__Q34Game10ItemBridge4ItemFv
	lfs      f1, 0x38(r1)
	cmpwi    r31, 0
	lfs      f0, 0x2d4(r30)
	lfs      f2, 0x40(r1)
	fmuls    f1, f1, f0
	fmuls    f2, f2, f0
	fadds    f31, f31, f1
	fadds    f30, f30, f2
	ble      lbl_8025AC44
	lwz      r4, 0x2d0(r30)
	addi     r3, r1, 0x2c
	bl       getBridgeZVec__Q34Game10ItemBridge4ItemFv
	lfs      f1, 0x2c(r1)
	lfs      f0, lbl_8051AB7C@sda21(r2)
	lfs      f2, 0x34(r1)
	fmuls    f1, f1, f0
	fmuls    f2, f2, f0
	fadds    f31, f31, f1
	fadds    f30, f30, f2

lbl_8025AC44:
	mr       r4, r30
	lwz      r5, 0xc0(r30)
	lwz      r12, 0(r30)
	addi     r3, r1, 8
	lfs      f28, 0x334(r5)
	lwz      r12, 8(r12)
	lfs      f29, 0x30c(r5)
	mtctr    r12
	bctrl
	lfs      f1, 8(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x10(r1)
	addi     r3, r3, atanTable___5JMath@l
	fsubs    f1, f31, f1
	fsubs    f2, f30, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r30)
	fmr      f27, f1
	mr       r3, r30
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f27
	bl       angDist__Fff
	fmuls    f29, f1, f29
	lfs      f0, lbl_8051AB8C@sda21(r2)
	lfs      f1, lbl_8051AB88@sda21(r2)
	fmuls    f0, f0, f28
	fabs     f2, f29
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_8025ACE8
	lfs      f0, lbl_8051AB3C@sda21(r2)
	fcmpo    cr0, f29, f0
	ble      lbl_8025ACE4
	fmr      f29, f1
	b        lbl_8025ACE8

lbl_8025ACE4:
	fneg     f29, f1

lbl_8025ACE8:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f29, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r30)
	lfs      f0, lbl_8051AB44@sda21(r2)
	lfs      f1, 0x1fc(r30)
	stfs     f1, 0x1a8(r30)
	lfs      f1, 0x194(r30)
	lfs      f2, 0x18c(r30)
	fsubs    f1, f1, f30
	fsubs    f2, f2, f31
	fmuls    f1, f1, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8025AD4C
	lfs      f0, lbl_8051AB3C@sda21(r2)
	li       r3, 1
	stfs     f0, 0x1d4(r30)
	stfs     f0, 0x1d8(r30)
	stfs     f0, 0x1dc(r30)
	b        lbl_8025AE3C

lbl_8025AD4C:
	lfs      f0, lbl_8051AB80@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8025ADCC
	mr       r3, r30
	lwz      r4, 0xc0(r30)
	lwz      r12, 0(r30)
	lfs      f28, 0x2e4(r4)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r30
	lfs      f2, 0x1d4(r30)
	lwz      r12, 0(r30)
	frsp     f27, f1
	lfs      f30, 0x1d8(r30)
	lfs      f0, 0x1dc(r30)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x20(r1)
	stfs     f30, 0x24(r1)
	stfs     f0, 0x28(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f28, f27
	li       r3, 1
	frsp     f1, f1
	stfs     f0, 0x1d4(r30)
	fmuls    f0, f28, f1
	stfs     f30, 0x1d8(r30)
	stfs     f0, 0x1dc(r30)
	b        lbl_8025AE3C

lbl_8025ADCC:
	mr       r3, r30
	lwz      r4, 0xc0(r30)
	lwz      r12, 0(r30)
	lfs      f28, 0x2e4(r4)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r30
	lfs      f2, 0x1d4(r30)
	lwz      r12, 0(r30)
	frsp     f27, f1
	lfs      f30, 0x1d8(r30)
	lfs      f0, 0x1dc(r30)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x14(r1)
	stfs     f30, 0x18(r1)
	stfs     f0, 0x1c(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f28, f27
	li       r3, 0
	frsp     f1, f1
	stfs     f0, 0x1d4(r30)
	fmuls    f0, f28, f1
	stfs     f30, 0x1d8(r30)
	stfs     f0, 0x1dc(r30)

lbl_8025AE3C:
	psq_l    f31, 168(r1), 0, qr0
	lfd      f31, 0xa0(r1)
	psq_l    f30, 152(r1), 0, qr0
	lfd      f30, 0x90(r1)
	psq_l    f29, 136(r1), 0, qr0
	lfd      f29, 0x80(r1)
	psq_l    f28, 120(r1), 0, qr0
	lfd      f28, 0x70(r1)
	psq_l    f27, 104(r1), 0, qr0
	lfd      f27, 0x60(r1)
	lwz      r31, 0x5c(r1)
	lwz      r0, 0xb4(r1)
	lwz      r30, 0x58(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8025AE7C
 * Size:	00005C
 */
void Obj::breakTargetBridge()
{
	InteractBreakBridge breakBridge(this, C_PROPERPARMS.mBridgeDamage.mValue);
	mBridge->stimulate(breakBridge);
}

/*
 * --INFO--
 * Address:	8025AED8
 * Size:	00008C
 */
void Obj::createAppearEffect()
{
	Matrixf* worldMat = mModel->getJoint("ujinnko_m")->getWorldMatrix();
	efx::TUjinkoAp appearFX(worldMat);
	appearFX.create(nullptr);
}

/*
 * --INFO--
 * Address:	8025AF64
 * Size:	00008C
 */
void Obj::createDisAppearEffect()
{
	Matrixf* worldMat = mModel->getJoint("ujinnko_m")->getWorldMatrix();
	efx::TUjinkoHd hideFX(worldMat);
	hideFX.create(nullptr);
}

/*
 * --INFO--
 * Address:	8025AFF0
 * Size:	000090
 */
void Obj::createBridgeEffect()
{
	Vector3f fxPos = mModel->getJoint("kamujnt")->getWorldMatrix()->getBasis(3);
	efx::Arg fxArg(fxPos);
	efx::TUjinkoEat eatFX;
	eatFX.create(&fxArg);
}

/*
 * --INFO--
 * Address:	8025B080
 * Size:	000090
 */
void Obj::createEatEffect()
{
	Vector3f fxPos = mModel->getJoint("kamujnt")->getWorldMatrix()->getBasis(3);
	efx::Arg fxArg(fxPos);
	efx::TUjinkoPkate eatFX;
	eatFX.create(&fxArg);
}

/*
 * --INFO--
 * Address:	8025B110
 * Size:	000008
 */
bool Obj::isUnderground() { return mIsUnderground; }

/*
 * --INFO--
 * Address:	8025B118
 * Size:	000008
 */
MouthSlots* Obj::getMouthSlots() { return &mMouthSlots; }

/*
 * --INFO--
 * Address:	8025B120
 * Size:	000008
 */
f32 Obj::getDownSmokeScale() { return 0.35f; }

/*
 * --INFO--
 * Address:	8025B128
 * Size:	000008
 */
EnemyTypeID::EEnemyTypeID Obj::getEnemyTypeID() { return EnemyTypeID::EnemyID_UjiB; }
} // namespace Ujib
} // namespace Game

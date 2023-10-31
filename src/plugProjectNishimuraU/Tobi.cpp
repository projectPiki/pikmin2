#include "Game/Entities/Tobi.h"
#include "Game/Entities/ItemBridge.h"
#include "Game/MapMgr.h"
#include "efx/TUjinko.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Tobi {

/*
 * --INFO--
 * Address:	802698AC
 * Size:	000138
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
}

/*
 * --INFO--
 * Address:	802699E4
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802699E8
 * Size:	000098
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	disableEvent(0, EB_LifegaugeVisible);
	disableEvent(0, EB_Cullable);
	resetAppearCheck();
	mIsUnderground = false;
	mNextState     = TOBI_NULL;
	resetBridgeSearch();
	mFsm->start(this, TOBI_Stay, nullptr);
	doAnimationCullingOff();
}

/*
 * --INFO--
 * Address:	80269A80
 * Size:	000048
 */
void Obj::doUpdate()
{
	mFsm->exec(this);
	mMouthSlots.update();
}

/*
 * --INFO--
 * Address:	80269AC8
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	80269ACC
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	80269AEC
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
 * Address:	80269B38
 * Size:	0000E0
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	shadowParam.mPosition                 = mModel->getJoint("kosijnt")->getWorldMatrix()->getBasis(3);
	shadowParam.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);

	if (getStateID() == TOBI_Fly) {
		shadowParam.mPosition.y -= 9.0f;
		shadowParam.mBoundingSphere.mRadius = C_PROPERPARMS.mFlightHeight.mValue + 50.0f;
	} else {
		shadowParam.mPosition.y -= 2.5f;
		if (isEvent(1, EB2_Earthquake)) {
			shadowParam.mBoundingSphere.mRadius = 50.0f;
		} else {
			shadowParam.mBoundingSphere.mRadius = 30.0f;
		}
	}

	shadowParam.mSize = 9.0f;
}

/*
 * --INFO--
 * Address:	80269C18
 * Size:	0000A4
 */
bool Obj::pressCallBack(Creature* creature, f32 damage, CollPart* part)
{
	if (creature && creature->isPiki() && !isEvent(0, EB_Bittered)) {
		int stateID = getStateID();
		if ((stateID > TOBI_Dive && stateID < TOBI_Fly) || (stateID > TOBI_Fly)) {
			// i.e. not in dead, press, stay, appear, dive or fly states
			mFsm->transit(this, TOBI_Press, nullptr);
			return true;
		}
	}

	return false;
}

/*
 * --INFO--
 * Address:	80269CBC
 * Size:	00002C
 */
bool Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* part) { return pressCallBack(creature, damage, part); }

/*
 * --INFO--
 * Address:	80269CE8
 * Size:	000094
 */
bool Obj::flyCollisionCallBack(Creature* creature, f32 damage, CollPart* part)
{
	if (creature && creature->isPiki() && !isEvent(0, EB_Bittered) && getStateID() == TOBI_Fly) {
		// instakill if hit by piki while flying
		mFsm->transit(this, TOBI_Dead, nullptr);
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	80269D7C
 * Size:	000038
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	disableEvent(0, EB_Invulnerable);
}

/*
 * --INFO--
 * Address:	80269DB4
 * Size:	00005C
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	if (getStateID() == TOBI_Fly) {
		mFsm->transit(this, TOBI_Move, nullptr);
	}
}

/*
 * --INFO--
 * Address:	80269E10
 * Size:	000038
 */
void Obj::doStartEarthquakeFitState()
{
	EnemyBase::doStartEarthquakeFitState();
	disableEvent(0, EB_Invulnerable);
}

/*
 * --INFO--
 * Address:	80269E48
 * Size:	00005C
 */
void Obj::doFinishEarthquakeFitState()
{
	EnemyBase::doFinishEarthquakeFitState();
	if (getStateID() == TOBI_Fly) {
		mFsm->transit(this, TOBI_Move, nullptr);
	}
}

/*
 * --INFO--
 * Address:	80269EA4
 * Size:	000028
 */
void Obj::startCarcassMotion() { startMotion(TOBIANIM_Carry, nullptr); }

/*
 * --INFO--
 * Address:	80269ECC
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
 * Address:	80269F58
 * Size:	00007C
 */
void Obj::lifeRecover()
{
	if (isFlying()) {
		mHealth += 0.001f * C_PARMS->mGeneral.mHealth();
		if (mHealth > C_PARMS->mGeneral.mHealth()) {
			mHealth = C_PARMS->mGeneral.mHealth();
		}
	} else {
		EnemyBase::lifeRecover();
	}
}

/*
 * --INFO--
 * Address:	80269FD4
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
 * Address:	8026A004
 * Size:	000220
 */
void Obj::randomFlyingTarget()
{
	Vector3f targetPos = mTargetPosition;
	Vector3f pos       = getPosition();
	Vector3f vel       = getVelocity();
	Vector3f zeroVec   = Vector3f(0.0f, 0.0f, 0.0f);

	f32 targetDist = sqrDistanceXZ(targetPos, pos);
	f32 speed      = sqrDistanceXZ(zeroVec, vel) * 0.5f;

	if (targetDist < speed) {
		f32 randAngle = randWeightFloat(TAU);
		f32 randDist  = randWeightFloat(C_PARMS->mGeneral.mTerritoryRadius.mValue);

		targetPos = Vector3f(randDist * sinf(randAngle), 0.0f, randDist * cosf(randAngle));
		targetPos += mHomePosition;
	}

	f32 minY          = mapMgr->getMinY(pos);
	targetPos.y       = minY + C_PROPERPARMS.mFlightHeight.mValue;
	mTargetPosition   = targetPos;
	mTargetVelocity.y = (targetPos.y - pos.y) * 2.0f;
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	mr       r31, r3
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	mr       r4, r31
	lfs      f31, 0x2d0(r31)
	lwz      r12, 8(r12)
	lfs      f30, 0x2d8(r31)
	mtctr    r12
	bctrl
	lfs      f2, 0x14(r1)
	mr       r4, r31
	lfs      f1, 0x18(r1)
	addi     r3, r1, 8
	lfs      f0, 0x1c(r1)
	stfs     f2, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lfs      f3, lbl_8051AF70@sda21(r2)
	lfs      f0, 0x10(r1)
	lfs      f1, 8(r1)
	fsubs    f4, f3, f0
	lfs      f0, 0x28(r1)
	lfs      f2, 0x20(r1)
	fsubs    f5, f3, f1
	fsubs    f3, f30, f0
	lfs      f0, lbl_8051AF98@sda21(r2)
	fmuls    f1, f4, f4
	fsubs    f4, f31, f2
	fmuls    f2, f3, f3
	fmadds   f1, f5, f5, f1
	fmadds   f2, f4, f4, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	bge      lbl_8026A1BC
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x34(r1)
	lwz      r3, 0xc0(r31)
	stw      r0, 0x30(r1)
	lfd      f2, lbl_8051AFB0@sda21(r2)
	lfd      f0, 0x30(r1)
	lfs      f1, lbl_8051AF9C@sda21(r2)
	fsubs    f2, f0, f2
	lfs      f0, lbl_8051AFA0@sda21(r2)
	lfs      f30, 0x35c(r3)
	fmuls    f1, f1, f2
	fdivs    f31, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x3c(r1)
	fmr      f3, f31
	lfs      f0, lbl_8051AF70@sda21(r2)
	stw      r0, 0x38(r1)
	lfd      f2, lbl_8051AFB0@sda21(r2)
	fcmpo    cr0, f31, f0
	lfd      f1, 0x38(r1)
	lfs      f0, lbl_8051AFA0@sda21(r2)
	fsubs    f1, f1, f2
	fmuls    f1, f30, f1
	fdivs    f4, f1, f0
	bge      lbl_8026A134
	fneg     f3, f31

lbl_8026A134:
	lfs      f2, lbl_8051AFA4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051AF70@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f3, f2
	fcmpo    cr0, f31, f0
	fctiwz   f0, f1
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f3, f4, f0
	bge      lbl_8026A190
	lfs      f0, lbl_8051AFA8@sda21(r2)
	fmuls    f0, f31, f0
	fctiwz   f0, f0
	stfd     f0, 0x48(r1)
	lwz      r0, 0x4c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_8026A1A8

lbl_8026A190:
	fmuls    f0, f31, f2
	fctiwz   f0, f0
	stfd     f0, 0x50(r1)
	lwz      r0, 0x54(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_8026A1A8:
	fmuls    f31, f4, f0
	lfs      f1, 0x198(r31)
	lfs      f0, 0x1a0(r31)
	fadds    f31, f31, f1
	fadds    f30, f3, f0

lbl_8026A1BC:
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r1, 0x20
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xc0(r31)
	lfs      f2, lbl_8051AFAC@sda21(r2)
	lfs      f0, 0x86c(r3)
	fadds    f1, f1, f0
	stfs     f31, 0x2d0(r31)
	stfs     f1, 0x2d4(r31)
	stfs     f30, 0x2d8(r31)
	lfs      f0, 0x24(r1)
	fsubs    f1, f1, f0
	fmuls    f0, f2, f1
	stfs     f0, 0x1d8(r31)
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	lwz      r0, 0x84(r1)
	lwz      r31, 0x5c(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	8026A224
 * Size:	000024
 */
bool Obj::isFlyingLife() { return ((mHealth / C_PARMS->mGeneral.mHealth.mValue) < C_PROPERPARMS.mTakeOffHealthRatio.mValue); }

/*
 * --INFO--
 * Address:	8026A248
 * Size:	000034
 */
void Obj::setInWaterDamage()
{
	if (mWaterBox) {
		addDamage(2.5f, 1.0f);
	}
}

/*
 * --INFO--
 * Address:	8026A27C
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
 * Address:	8026A330
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
 * Address:	8026A378
 * Size:	000020
 */
void Obj::resetBridgeSearch()
{
	_2C0    = 1;
	mBridge = nullptr;
	_2E0    = 0.0f;
	_2E4    = 0.0f;
}

/*
 * --INFO--
 * Address:	8026A398
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
 * Address:	8026A3E0
 * Size:	0002C0
 */
void Obj::setNearestBridge()
{
	mBridge = nullptr;
	_2E0    = 0.0f;
	_2E4    = 0.0f;

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
		_2E0      = -(0.5f * width - randWeightFloat(width));
	}
}

/*
 * --INFO--
 * Address:	8026A6A0
 * Size:	000004
 */
void Obj::setCullingCheck() { }

/*
 * --INFO--
 * Address:	8026A6A4
 * Size:	0001B4
 */
int Obj::checkBreakOrMove()
{
	if (mBridge) {
		Vector3f zVec     = mBridge->getBridgeZVec();
		Vector3f startPos = mBridge->getStartPos();

		Vector3f bridgeDist = startPos - mPosition;
		if (zVec.dot(bridgeDist) > 0.0f) {
			return TOBI_MoveCentre;
		}

		Vector3f xVec = mBridge->getBridgeXVec();
		f32 halfWidth = 0.5f * mBridge->getStageWidth();
		f32 dotX      = xVec.dot(bridgeDist);
		f32 width     = 20.0f + halfWidth;

		if (dotX < 0.0f) {
			_2E4 = width;
		} else {
			_2E4 = -width;
		}

		if (absVal(dotX) > halfWidth) {
			return TOBI_MoveSide;
		}

		f32 minY = mapMgr->getMinY(mPosition);

		if (mPosition.y > 5.0f + minY) {
			return TOBI_MoveTop;
		}

		return TOBI_MoveSide;
	}

	return TOBI_MoveCentre;
}

/*
 * --INFO--
 * Address:	8026A858
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
 * Address:	8026A880
 * Size:	0002A8
 */
bool Obj::moveBridgeSide()
{
	Vector3f startPos = mBridge->getStartPos();
	Vector3f xVec     = mBridge->getBridgeXVec();
	Vector3f zVec     = mBridge->getBridgeZVec();

	xVec *= _2E4;
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
	lwz      r4, 0x2dc(r31)
	bl       getStartPos__Q34Game10ItemBridge4ItemFv
	lfs      f29, 0x44(r1)
	addi     r3, r1, 0x38
	lfs      f28, 0x4c(r1)
	lwz      r4, 0x2dc(r31)
	bl       getBridgeXVec__Q34Game10ItemBridge4ItemFv
	lfs      f30, 0x38(r1)
	addi     r3, r1, 0x2c
	lfs      f31, 0x40(r1)
	lwz      r4, 0x2dc(r31)
	bl       getBridgeZVec__Q34Game10ItemBridge4ItemFv
	lfs      f1, 0x2e4(r31)
	lfs      f4, 0x34(r1)
	fmuls    f31, f31, f1
	lfs      f0, lbl_8051AFC0@sda21(r2)
	fmuls    f30, f30, f1
	lfs      f3, 0x2c(r1)
	fmuls    f4, f4, f0
	lfs      f1, 0x194(r31)
	fadds    f28, f28, f31
	lfs      f2, 0x18c(r31)
	fmuls    f3, f3, f0
	lfs      f0, lbl_8051AFC4@sda21(r2)
	fadds    f29, f29, f30
	fadds    f28, f28, f4
	fadds    f29, f29, f3
	fsubs    f1, f1, f28
	fsubs    f2, f2, f29
	fmuls    f1, f1, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8026A9B8
	mr       r3, r31
	lwz      r4, 0xc0(r31)
	lwz      r12, 0(r31)
	lfs      f1, lbl_8051AFC8@sda21(r2)
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
	b        lbl_8026AAF4

lbl_8026A9B8:
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
	lfs      f0, lbl_8051AFD0@sda21(r2)
	lfs      f1, lbl_8051AFCC@sda21(r2)
	fmuls    f0, f0, f31
	fabs     f2, f30
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_8026AA5C
	lfs      f0, lbl_8051AF70@sda21(r2)
	fcmpo    cr0, f30, f0
	ble      lbl_8026AA58
	fmr      f30, f1
	b        lbl_8026AA5C

lbl_8026AA58:
	fneg     f30, f1

lbl_8026AA5C:
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

lbl_8026AAF4:
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
 * Address:	8026AB28
 * Size:	000288
 */
bool Obj::moveBridgeCentre()
{
	Vector3f startPos = mBridge->getStartPos();
	Vector3f xVec     = mBridge->getBridgeXVec();

	xVec *= 0.7f * _2E0;

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
}

/*
 * --INFO--
 * Address:	8026ADB0
 * Size:	0002F0
 */
bool Obj::moveBridgeTop()
{
	int stageID       = mBridge->mCurrStageIdx - 1;
	Vector3f stagePos = mBridge->getStagePos(stageID);
	Vector3f xVec     = mBridge->getBridgeXVec();

	xVec *= _2E0;

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
	lwz      r4, 0x2dc(r30)
	lwz      r5, 0x218(r4)
	addi     r31, r5, -1
	mr       r5, r31
	bl       getStagePos__Q34Game10ItemBridge4ItemFi
	lfs      f31, 0x44(r1)
	addi     r3, r1, 0x38
	lfs      f30, 0x4c(r1)
	lwz      r4, 0x2dc(r30)
	bl       getBridgeXVec__Q34Game10ItemBridge4ItemFv
	lfs      f1, 0x38(r1)
	cmpwi    r31, 0
	lfs      f0, 0x2e0(r30)
	lfs      f2, 0x40(r1)
	fmuls    f1, f1, f0
	fmuls    f2, f2, f0
	fadds    f31, f31, f1
	fadds    f30, f30, f2
	ble      lbl_8026AE68
	lwz      r4, 0x2dc(r30)
	addi     r3, r1, 0x2c
	bl       getBridgeZVec__Q34Game10ItemBridge4ItemFv
	lfs      f1, 0x2c(r1)
	lfs      f0, lbl_8051AFC0@sda21(r2)
	lfs      f2, 0x34(r1)
	fmuls    f1, f1, f0
	fmuls    f2, f2, f0
	fadds    f31, f31, f1
	fadds    f30, f30, f2

lbl_8026AE68:
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
	lfs      f0, lbl_8051AFD0@sda21(r2)
	lfs      f1, lbl_8051AFCC@sda21(r2)
	fmuls    f0, f0, f28
	fabs     f2, f29
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_8026AF0C
	lfs      f0, lbl_8051AF70@sda21(r2)
	fcmpo    cr0, f29, f0
	ble      lbl_8026AF08
	fmr      f29, f1
	b        lbl_8026AF0C

lbl_8026AF08:
	fneg     f29, f1

lbl_8026AF0C:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f29, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r30)
	lfs      f0, lbl_8051AF7C@sda21(r2)
	lfs      f1, 0x1fc(r30)
	stfs     f1, 0x1a8(r30)
	lfs      f1, 0x194(r30)
	lfs      f2, 0x18c(r30)
	fsubs    f1, f1, f30
	fsubs    f2, f2, f31
	fmuls    f1, f1, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8026AF70
	lfs      f0, lbl_8051AF70@sda21(r2)
	li       r3, 1
	stfs     f0, 0x1d4(r30)
	stfs     f0, 0x1d8(r30)
	stfs     f0, 0x1dc(r30)
	b        lbl_8026B060

lbl_8026AF70:
	lfs      f0, lbl_8051AFC4@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8026AFF0
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
	b        lbl_8026B060

lbl_8026AFF0:
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

lbl_8026B060:
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
 * Address:	8026B0A0
 * Size:	00005C
 */
void Obj::breakTargetBridge()
{
	InteractBreakBridge breakBridge(this, C_PROPERPARMS.mBridgeDamage.mValue);
	mBridge->stimulate(breakBridge);
}

/*
 * --INFO--
 * Address:	8026B0FC
 * Size:	00008C
 */
void Obj::createAppearEffect()
{
	Matrixf* worldMat = mModel->getJoint("tobinnko")->getWorldMatrix();
	efx::TUjinkoAp appearFX(worldMat);
	appearFX.create(nullptr);
}

/*
 * --INFO--
 * Address:	8026B188
 * Size:	00008C
 */
void Obj::createDisAppearEffect()
{
	Matrixf* worldMat = mModel->getJoint("tobinnko")->getWorldMatrix();
	efx::TUjinkoHd hideFX(worldMat);
	hideFX.create(nullptr);
}

/*
 * --INFO--
 * Address:	8026B214
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
 * Address:	8026B2A4
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
 * Address:	8026B334
 * Size:	000008
 */
bool Obj::isUnderground() { return mIsUnderground; }

/*
 * --INFO--
 * Address:	8026B33C
 * Size:	000008
 */
MouthSlots* Obj::getMouthSlots() { return &mMouthSlots; }

/*
 * --INFO--
 * Address:	8026B344
 * Size:	000008
 */
f32 Obj::getDownSmokeScale() { return 0.35f; }

/*
 * --INFO--
 * Address:	8026B34C
 * Size:	000008
 */
EnemyTypeID::EEnemyTypeID Obj::getEnemyTypeID() { return EnemyTypeID::EnemyID_Tobi; }
} // namespace Tobi
} // namespace Game

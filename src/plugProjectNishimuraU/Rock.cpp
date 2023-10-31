#include "Game/Entities/Rock.h"
#include "Game/Navi.h"
#include "Game/EnemyFunc.h"
#include "Dolphin/rand.h"
#include "PS.h"

namespace Game {
namespace Rock {

/*
 * --INFO--
 * Address:	80262FF0
 * Size:	000138
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
	createEffect();
}

/*
 * --INFO--
 * Address:	80263128
 * Size:	00005C
 */
void Obj::birth(Vector3f& pos, f32 angle)
{
	EnemyBase::birth(pos, angle);
	RockInitialParams params(100.0f, 500.0f, 0.4f); // these never get used lol
	setInitialSetting(&params);
}

/*
 * --INFO--
 * Address:	80263184
 * Size:	000028
 */
void Obj::setInitialSetting(EnemyInitialParamBase* param)
{
	mFallSpeed   = C_PARMS->mGeneral.mSearchDistance;
	mFallOffset  = C_PARMS->mGeneral.mSearchHeight;
	mScaleUpRate = C_PARMS->mGeneral.mSearchAngle;
}

/*
 * --INFO--
 * Address:	802631AC
 * Size:	0001E0
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);

	if (mDropGroup == EDG_None) {
		mScaleModifier = 0.0001f;
		mScale         = Vector3f(0.0001f);
		mCollTree->mPart->setScale(0.0001f);
	}

	enableEvent(0, EB_Invulnerable);
	disableEvent(0, EB_DamageAnimEnabled);
	disableEvent(0, EB_LeaveCarcass);
	disableEvent(0, EB_DeathEffectEnabled);
	disableEvent(0, EB_LifegaugeVisible);
	enableEvent(0, EB_BitterImmune);

	setEmotionNone();
	setupEffect();

	mTimer       = 0.0f;
	mIsHoming    = false;
	mSourceEnemy = nullptr;

	if (getEnemyTypeID() == EnemyTypeID::EnemyID_Rock) {
		// if falling rock
		if (mExistDuration != 0.0f) {
			disableEvent(0, EB_Cullable);
			mTimer = randWeightFloat(1.5f);
		}

		if (mDropGroup == EDG_None) {
			mFsm->start(this, ROCK_Wait, nullptr);
			doAnimationCullingOff();

		} else {
			mFsm->start(this, ROCK_DropWait, nullptr);
		}

		shadowMgr->delShadow(this);

	} else {
		// if rolling rock
		initMoveVelocity();
		mFsm->start(this, ROCK_Move, nullptr);
		doAnimationCullingOff();
	}
}

/*
 * --INFO--
 * Address:	80263394
 * Size:	000054
 */
void Obj::onKill(CreatureKillArg* arg)
{
	finishFallEffect();
	finishRollingGroundEffect();
	finishRollingWaterEffect();
	EnemyBase::onKill(arg);
}

/*
 * --INFO--
 * Address:	802633E8
 * Size:	000034
 */
void Obj::doUpdate() { mFsm->exec(this); }

/*
 * --INFO--
 * Address:	8026341C
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
 * Address:	80263468
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics& gfx) { }

/*
 * --INFO--
 * Address:	8026346C
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	8026348C
 * Size:	0000E4
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	if (getEnemyTypeID() == EnemyTypeID::EnemyID_Rock) {
		shadowParam.mPosition               = mPosition;
		shadowParam.mBoundingSphere.mRadius = 50.0f + (mPosition.y - mHomePosition.y);
	} else {
		shadowParam.mPosition = Vector3f(mPosition.x, mPosition.y + 5.0f, mPosition.z);

		if (isEvent(1, EB2_Earthquake)) {
			shadowParam.mBoundingSphere.mRadius = 50.0f;
		} else {
			shadowParam.mBoundingSphere.mRadius = 20.0f;
		}
	}

	shadowParam.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	shadowParam.mSize                     = 25.0f * mScaleModifier;
}

/*
 * --INFO--
 * Address:	80263570
 * Size:	000060
 */
bool Obj::needShadow()
{
	if (EnemyBase::needShadow()) {
		return true;
	}

	int stateID = getStateID();
	if (stateID == ROCK_Appear || stateID == ROCK_Fall) {
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	802635D0
 * Size:	000088
 */
bool Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* part)
{
	if (isAlive() && !isEvent(0, EB_Bittered) && getStateID() == ROCK_Move) {
		mFsm->transit(this, ROCK_Dead, nullptr);
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	80263658
 * Size:	0001A4
 */
void Obj::collisionCallback(CollEvent& event)
{
	Creature* other = event.mCollidingCreature;
	if (other) {
		bool notFakePiki = true;
		bool notRock     = true;
		if (other->isNavi() || other->isPiki()) {
			notFakePiki = false;
			if (other->mBounceTriangle) {
				EnemyBase* target = this;
				if (mSourceEnemy) {
					target = mSourceEnemy;
				}

				InteractPress press(target, C_PARMS->mGeneral.mAttackDamage.mValue, nullptr);
				event.mCollidingCreature->stimulate(press);
			}
		} else if (other->isTeki()) {
			InteractAttack attack(this, 250.0f, event.mCollisionObj);
			other->stimulate(attack);

			if (mRockType == EnemyTypeID::EnemyID_Rock && static_cast<EnemyBase*>(other)->getEnemyTypeID() == EnemyTypeID::EnemyID_Rock) {
				notRock = false;
			}
		}

		if (notFakePiki) {
			mHealth = 0.0f;
		}

		if (notRock) {
			setCollEvent(event);
		}
	}
}

/*
 * --INFO--
 * Address:	802637FC
 * Size:	000054
 */
void Obj::wallCallback(const MoveInfo& info)
{
	if (EnemyBase::getStateID() == ROCK_Move) {
		mFsm->transit(this, ROCK_Dead, nullptr);
	}
}

/*
 * --INFO--
 * Address:	80263850
 * Size:	00006C
 */
void Obj::inWaterCallback(WaterBox* wbox)
{
	if (getEnemyTypeID() == EnemyTypeID::EnemyID_Stone && EnemyBase::getStateID() == ROCK_Move) {
		finishRollingGroundEffect();
		startRollingWaterEffect();
		PSStartEnemyDownWatSE(this, mScaleModifier);
	}
}

/*
 * --INFO--
 * Address:	802638BC
 * Size:	000060
 */
void Obj::outWaterCallback()
{
	if (getEnemyTypeID() == EnemyTypeID::EnemyID_Stone && EnemyBase::getStateID() == ROCK_Move) {
		finishRollingWaterEffect();
		startRollingGroundEffect();
	}
}

/*
 * --INFO--
 * Address:	8026391C
 * Size:	000020
 */
void Obj::doStartMovie() { effectDrawOff(); }

/*
 * --INFO--
 * Address:	8026393C
 * Size:	000020
 */
void Obj::doEndMovie() { effectDrawOn(); }

/*
 * --INFO--
 * Address:	8026395C
 * Size:	00002C
 */
bool Obj::ignoreAtari(Creature* creature)
{
	if (static_cast<EnemyBase*>(creature) == mSourceEnemy && mTimer < 1.0f) {
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	80263988
 * Size:	00007C
 */
bool Obj::fallRockScaleUp()
{
	bool isDone = false;
	if (mScaleModifier < 1.0f) {
		f32 scale = mScaleUpRate * sys->mDeltaTime + mScaleModifier;
		if (scale >= 1.0f) {
			isDone = true;
			scale  = 1.0f;
		}

		mScaleModifier = scale;
		mScale         = Vector3f(scale);

		mCollTree->mPart->setScale(scale);
	}

	return isDone;
}

/*
 * --INFO--
 * Address:	80263A04
 * Size:	00007C
 */
bool Obj::moveRockScaleUp()
{
	bool isDone = false;
	if (mScaleModifier < 1.0f) {
		f32 scale = 5.0f * sys->mDeltaTime + mScaleModifier;
		if (scale >= 1.0f) {
			isDone = true;
			scale  = 1.0f;
		}

		mScaleModifier = scale;
		mScale         = Vector3f(scale);

		mCollTree->mPart->setScale(scale);
	}

	return isDone;
}

/*
 * --INFO--
 * Address:	80263A80
 * Size:	000100
 */
void Obj::initMoveVelocity()
{
	f32 theta    = mFaceDir;
	f32 cosTheta = cosf(theta);
	f32 sinTheta = sinf(theta);

	Vector3f vel(sinTheta, 0.0f, cosTheta);
	vel *= C_PARMS->mGeneral.mMoveSpeed();
	mTargetVelocity = vel;
	setVelocity(vel);
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lfs      f0, lbl_8051ADB0@sda21(r2)
	stw      r0, 0x34(r1)
	lfs      f3, 0x1fc(r3)
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	bge      lbl_80263AA4
	fneg     f1, f3

lbl_80263AA4:
	lfs      f2, lbl_8051ADE0@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	lfs      f0, lbl_8051ADB0@sda21(r2)
	addi     r5, r4, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r4, r5, r0
	lfs      f4, 4(r4)
	bge      lbl_80263AFC
	lfs      f0, lbl_8051ADE4@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r5, r0
	fneg     f2, f0
	b        lbl_80263B14

lbl_80263AFC:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r5, r0

lbl_80263B14:
	lfs      f1, lbl_8051ADB0@sda21(r2)
	frsp     f0, f2
	stfs     f2, 8(r1)
	addi     r4, r1, 8
	stfs     f1, 0xc(r1)
	stfs     f4, 0x10(r1)
	lwz      r5, 0xc0(r3)
	lfs      f3, 0x2e4(r5)
	fmuls    f2, f0, f3
	fmuls    f1, f1, f3
	fmuls    f0, f4, f3
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	stfs     f2, 0x1d4(r3)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x1d8(r3)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x1dc(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80263B80
 * Size:	0003A0
 */
void Obj::updateMoveVelocity()
{
	if (mIsHoming) {
		Creature* target = nullptr;
		if (gameSystem && !gameSystem->isMultiplayerMode()) {
			target = naviMgr->getActiveNavi();
		}
		if (!target) {
			target = EnemyFunc::getNearestPikminOrNavi(this, 180.0f, C_PARMS->mGeneral.mSightRadius.mValue, nullptr, nullptr, nullptr);
		}

		Vector2f XZ;
		if (target) {
			Vector3f targetPos = target->getPosition();
			XZ.x               = targetPos.x;
			XZ.y               = targetPos.z;
		} else {
			XZ.x = mPosition.x + mTargetVelocity.x;
			XZ.y = mPosition.z + mTargetVelocity.z;
		}

		changeFaceDir(XZ);

		f32 homingSpeed = C_PROPERPARMS.mFp01.mValue;
		f32 sinTheta    = sin(getFaceDir());
		f32 oldY        = getTargetVelocity().y;
		f32 cosTheta    = cos(getFaceDir());

		mTargetVelocity.x = homingSpeed * sinTheta;
		mTargetVelocity.y = oldY;
		mTargetVelocity.z = homingSpeed * cosTheta;

	} else {
		mTargetVelocity.x = 0.01f * mCurrentVelocity.x + 0.99f * mTargetVelocity.x;
		mTargetVelocity.y = 0.01f * mCurrentVelocity.y + 0.99f * mTargetVelocity.y;
		mTargetVelocity.z = 0.01f * mCurrentVelocity.z + 0.99f * mTargetVelocity.z;

		Vector2f XZ;
		XZ.x = mPosition.x + mTargetVelocity.x;
		XZ.y = mPosition.z + mTargetVelocity.z;

		changeFaceDir(XZ);
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
	lbz      r0, 0x2c4(r3)
	cmplwi   r0, 0
	beq      lbl_80263DB4
	lwz      r4, gameSystem__4Game@sda21(r13)
	li       r3, 0
	cmplwi   r4, 0
	beq      lbl_80263BFC
	lwz      r4, 0x44(r4)
	li       r0, 0
	cmpwi    r4, 1
	beq      lbl_80263BE8
	cmpwi    r4, 3
	bne      lbl_80263BEC

lbl_80263BE8:
	li       r0, 1

lbl_80263BEC:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80263BFC
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       getActiveNavi__Q24Game7NaviMgrFv

lbl_80263BFC:
	cmplwi   r3, 0
	bne      lbl_80263C24
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f1, lbl_8051ADE8@sda21(r2)
	li       r4, 0
	lfs      f2, 0x3d4(r5)
	li       r5, 0
	li       r6, 0
	bl
"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"

lbl_80263C24:
	cmplwi   r3, 0
	beq      lbl_80263C50
	mr       r4, r3
	addi     r3, r1, 0x44
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f28, 0x44(r1)
	lfs      f29, 0x4c(r1)
	b        lbl_80263C68

lbl_80263C50:
	lfs      f3, 0x18c(r31)
	lfs      f2, 0x1d4(r31)
	lfs      f1, 0x194(r31)
	lfs      f0, 0x1dc(r31)
	fadds    f28, f3, f2
	fadds    f29, f1, f0

lbl_80263C68:
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x2c
	lfs      f30, 0x334(r5)
	lwz      r12, 8(r12)
	lfs      f31, 0x30c(r5)
	mtctr    r12
	bctrl
	lfs      f4, 0x2c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x34(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x30(r1)
	fsubs    f1, f28, f4
	fsubs    f2, f29, f0
	stfs     f4, 0x20(r1)
	stfs     f3, 0x24(r1)
	stfs     f0, 0x28(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f28, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f28
	bl       angDist__Fff
	fmuls    f31, f1, f31
	lfs      f0, lbl_8051ADF0@sda21(r2)
	lfs      f1, lbl_8051ADEC@sda21(r2)
	fmuls    f0, f0, f30
	fabs     f2, f31
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_80263D1C
	lfs      f0, lbl_8051ADB0@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_80263D18
	fmr      f31, f1
	b        lbl_80263D1C

lbl_80263D18:
	fneg     f31, f1

lbl_80263D1C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f31, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	mr       r3, r31
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	lwz      r12, 0(r31)
	lwz      r4, 0xc0(r31)
	lwz      r12, 0x64(r12)
	lfs      f30, 0x81c(r4)
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r31
	lfs      f2, 0x1d4(r31)
	lwz      r12, 0(r31)
	frsp     f28, f1
	lfs      f31, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x38(r1)
	stfs     f31, 0x3c(r1)
	stfs     f0, 0x40(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f30, f28
	frsp     f1, f1
	stfs     f0, 0x1d4(r31)
	fmuls    f0, f30, f1
	stfs     f31, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_80263EEC

lbl_80263DB4:
	lfs      f2, lbl_8051ADF8@sda21(r2)
	mr       r4, r31
	lfs      f0, 0x1d4(r31)
	addi     r3, r1, 0x14
	lfs      f3, lbl_8051ADF4@sda21(r2)
	fmuls    f0, f2, f0
	lfs      f1, 0x1c8(r31)
	fmadds   f0, f3, f1, f0
	stfs     f0, 0x1d4(r31)
	lfs      f0, 0x1d8(r31)
	lfs      f1, 0x1cc(r31)
	fmuls    f0, f2, f0
	fmadds   f0, f3, f1, f0
	stfs     f0, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	lfs      f1, 0x1d0(r31)
	fmuls    f0, f2, f0
	fmadds   f0, f3, f1, f0
	stfs     f0, 0x1dc(r31)
	lwz      r12, 0(r31)
	lwz      r5, 0xc0(r31)
	lfs      f3, 0x194(r31)
	lfs      f2, 0x1dc(r31)
	lfs      f1, 0x18c(r31)
	lfs      f0, 0x1d4(r31)
	fadds    f28, f3, f2
	lwz      r12, 8(r12)
	fadds    f29, f1, f0
	lfs      f31, 0x334(r5)
	lfs      f30, 0x30c(r5)
	mtctr    r12
	bctrl
	lfs      f4, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x18(r1)
	fsubs    f1, f29, f4
	fsubs    f2, f28, f0
	stfs     f4, 8(r1)
	stfs     f3, 0xc(r1)
	stfs     f0, 0x10(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f28, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f28
	bl       angDist__Fff
	fmuls    f30, f1, f30
	lfs      f0, lbl_8051ADF0@sda21(r2)
	lfs      f1, lbl_8051ADEC@sda21(r2)
	fmuls    f0, f0, f31
	fabs     f2, f30
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_80263EC4
	lfs      f0, lbl_8051ADB0@sda21(r2)
	fcmpo    cr0, f30, f0
	ble      lbl_80263EC0
	fmr      f30, f1
	b        lbl_80263EC4

lbl_80263EC0:
	fneg     f30, f1

lbl_80263EC4:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f30, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)

lbl_80263EEC:
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
 * Address:	80263F20
 * Size:	0001A4
 */
void Obj::createEffect()
{
	mEfxRun       = new efx::TRockRun();
	mEfxGroundRun = new efx::TRockGrRun();
	mEfxWaterRun  = new efx::TRockWRun();
}

/*
 * --INFO--
 * Address:	802640C4
 * Size:	000018
 */
void Obj::setupEffect()
{
	mEfxRun->mPosition       = &mPosition;
	mEfxGroundRun->mPosition = &mPosition;
}

/*
 * --INFO--
 * Address:	802640DC
 * Size:	000034
 */
void Obj::startFallEffect() { mEfxRun->create(nullptr); }

/*
 * --INFO--
 * Address:	80264110
 * Size:	000030
 */
void Obj::finishFallEffect() { mEfxRun->fade(); }

/*
 * --INFO--
 * Address:	80264140
 * Size:	000034
 */
void Obj::startRollingGroundEffect() { mEfxGroundRun->create(nullptr); }

/*
 * --INFO--
 * Address:	80264174
 * Size:	000030
 */
void Obj::finishRollingGroundEffect() { mEfxGroundRun->fade(); }

/*
 * --INFO--
 * Address:	802641A4
 * Size:	0000E8
 */
void Obj::startRollingWaterEffect()
{
	f32 height = 0.0f;
	if (mWaterBox) {
		height = *mWaterBox->getSeaHeightPtr();
	}

	mEfxWaterRun->mSeaHeight = height;
	mEfxWaterRun->create(nullptr);

	efx::TRockWRun* waterFX = mEfxWaterRun;
	if (mEfxWaterRun->_54) {
		f32 heightDiff = waterFX->mSeaHeight - mPosition.y;
		if (8.0f <= heightDiff && heightDiff < 45.0f) {
			efx::TRockWRun* waterFX = mEfxWaterRun;
			waterFX->mPosition      = Vector3f(mPosition.x, waterFX->mSeaHeight, mPosition.z);
			waterFX->mChasePos.create(nullptr);
		} else {
			waterFX->mChasePos.fade();
		}
	}
}

/*
 * --INFO--
 * Address:	8026429C
 * Size:	000030
 */
void Obj::finishRollingWaterEffect() { mEfxWaterRun->fade(); }

/*
 * --INFO--
 * Address:	80264310
 * Size:	0000A4
 */
void Obj::updateWaterEffectPosition()
{
	if (mWaterBox && mEfxWaterRun->_54) {
		f32 heightDiff = mEfxWaterRun->mSeaHeight - mPosition.y;
		if (8.0f <= heightDiff && heightDiff < 45.0f) {
			efx::TRockWRun* waterFX = mEfxWaterRun;
			waterFX->mPosition      = Vector3f(mPosition.x, mEfxWaterRun->mSeaHeight, mPosition.z);
			waterFX->mChasePos.create(nullptr);
		} else {
			mEfxWaterRun->mChasePos.fade();
		}
	}
}

/*
 * --INFO--
 * Address:	802643B4
 * Size:	000098
 */
void Obj::createRockDeadEffect()
{
	efx::Arg fxArg(mPosition);
	efx::TRockDead deadFX;

	deadFX.create(&fxArg);
}

/*
 * --INFO--
 * Address:	8026444C
 * Size:	000064
 */
void Obj::effectDrawOn()
{
	mEfxRun->endDemoDrawOn();
	mEfxGroundRun->endDemoDrawOn();
	mEfxWaterRun->mChasePos.endDemoDrawOn();
}

/*
 * --INFO--
 * Address:	802644B0
 * Size:	000064
 */
void Obj::effectDrawOff()
{
	mEfxRun->startDemoDrawOff();
	mEfxGroundRun->startDemoDrawOff();
	mEfxWaterRun->mChasePos.startDemoDrawOff();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2d8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2dc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2e0(r31)
	lwzu     r12, 4(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
} // namespace Rock
} // namespace Game

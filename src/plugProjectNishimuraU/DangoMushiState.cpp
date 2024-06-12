#include "Game/Entities/DangoMushi.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "nans.h"

namespace Game {
namespace DangoMushi {

/**
 * @note Address: 0x802F9A8C
 * @note Size: 0x320
 */
void FSM::init(EnemyBase* enemy)
{
	create(DANGOMUSHI_StateCount);

	registerState(new StateDead);
	registerState(new StateStay);
	registerState(new StateAppear);
	registerState(new StateWait);
	registerState(new StateMove);
	registerState(new StateAttack);
	registerState(new StateTurn);
	registerState(new StateRecover);
	registerState(new StateFlick);
}

/**
 * @note Address: 0x802F9DAC
 * @note Size: 0x88
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* crab     = OBJ(enemy);
	crab->mIsBall = false;
	crab->deathProcedure();
	crab->mTargetVelocity = Vector3f(0.0f);
	crab->setEmotionCaution();

	if (stateArg) {
		crab->startBlendAnimation(DANGOANIM_Dead, true);
	} else {
		crab->startBlendAnimation(DANGOANIM_Dead, false);
	}
}

/**
 * @note Address: 0x802F9E34
 * @note Size: 0x13C
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* crab = OBJ(enemy);

	if (crab->getMotionFrame() > 50.0f) {
		Vector3f crabPos = crab->getPosition();
		cameraMgr->startVibration(VIBTYPE_LightFastShort, crabPos, CAMNAVI_Both);
	}

	if (crab->mCurAnim->mIsPlaying) {
		if (crab->mCurAnim->mType == KEYEVENT_END_BLEND) {
			crab->endBlendAnimation();

		} else if (crab->mCurAnim->mType == KEYEVENT_2) {
			crab->createDeadSmokeEffect();

		} else if (crab->mCurAnim->mType == KEYEVENT_3) {
			crab->createDeadBombEffect();
			Vector3f crabPos = crab->getPosition();
			cameraMgr->startVibration(VIBTYPE_HardFastLong, crabPos, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed14, crabPos, RUMBLEID_Both);
		} else if (crab->mCurAnim->mType == KEYEVENT_END) {
			crab->kill(nullptr);
		}
	}
}

/**
 * @note Address: 0x802F9F70
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802F9F74
 * @note Size: 0x94
 */
void StateStay::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* crab         = OBJ(enemy);
	crab->mNextState  = DANGOMUSHI_NULL;
	crab->mStateTimer = 0.0f;
	crab->mIsBall     = false;
	crab->enableEvent(0, EB_Invulnerable);
	crab->enableEvent(0, EB_BitterImmune);
	crab->hardConstraintOn();
	crab->enableEvent(0, EB_ModelHidden);
	crab->mTargetVelocity = Vector3f(0.0f);
	crab->startBlendAnimation(DANGOANIM_Fly, false);
	crab->stopMotion();
}

/**
 * @note Address: 0x802FA008
 * @note Size: 0x144
 */
void StateStay::exec(EnemyBase* enemy)
{
	Obj* crab = OBJ(enemy);
	if (crab->mShadowScale > 0.0f) {
		if (crab->addShadowScale()) {
			transit(crab, DANGOMUSHI_Appear, nullptr);
		}
		return;
	}

	f32 privateRad = CG_GENERALPARMS(crab).mPrivateRadius.mValue;

	bool isTarget;
	if (EnemyFunc::isThereOlimar(crab, privateRad, nullptr)) {
		isTarget = true;
	} else if (EnemyFunc::isTherePikmin(crab, privateRad, nullptr)) {
		isTarget = true;
	} else {
		isTarget = false;
	}

	if (isTarget) {
		shadowMgr->addShadow(crab);
		crab->getJAIObject()->startSound(PSSE_EN_DANGO_FALL, 0);
		if (crab->addShadowScale()) {
			transit(crab, DANGOMUSHI_Appear, nullptr);
		}
	}
}

/**
 * @note Address: 0x802FA14C
 * @note Size: 0x4
 */
void StateStay::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802FA150
 * @note Size: 0x8C
 */
void StateAppear::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* crab         = OBJ(enemy);
	crab->mNextState  = DANGOMUSHI_NULL;
	crab->mStateTimer = 0.0f;
	crab->mIsBall     = false;
	crab->enableEvent(0, EB_Invulnerable);
	crab->enableEvent(0, EB_BitterImmune);
	crab->hardConstraintOn();
	crab->disableEvent(0, EB_ModelHidden);
	crab->mTargetVelocity = Vector3f(0.0f);
	crab->startBlendAnimation(DANGOANIM_Fly, false);
}

/**
 * @note Address: 0x802FA1DC
 * @note Size: 0x400
 */
void StateAppear::exec(EnemyBase* enemy)
{
	Obj* crab = OBJ(enemy);
	if (crab->mCurAnim->mIsPlaying) {
		if (crab->mCurAnim->mType == KEYEVENT_END_BLEND) {
			crab->endBlendAnimation();

		} else if (crab->mCurAnim->mType == KEYEVENT_2) {
			crab->createAppearSmokeEffect();
			Vector3f crabPos = crab->getPosition();
			cameraMgr->startVibration(VIBTYPE_Crash, crabPos, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed15, crabPos, RUMBLEID_Both);

		} else if (crab->mCurAnim->mType == KEYEVENT_3) {
			crab->setBossAppearBGM();

		} else if (crab->mCurAnim->mType == KEYEVENT_4) {
			Vector3f crabPos = crab->getPosition();
			cameraMgr->startVibration(VIBTYPE_MidFastShort, crabPos, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed11, crabPos, RUMBLEID_Both);

		} else if (crab->mCurAnim->mType == KEYEVENT_END) {
			Creature* target = crab->getSearchedTarget();
			if (target && gameSystem && !gameSystem->isZukanMode()) {
				f32 maxAttackRange, minAttackRange;
				minAttackRange = CG_GENERALPARMS(crab).mMaxAttackAngle();
				maxAttackRange = CG_GENERALPARMS(crab).mMaxAttackRange();

				f32 viewAngle = crab->getCreatureViewAngle(target);
				if (crab->isTargetAttackable(target, viewAngle, maxAttackRange, minAttackRange)) {
					transit(crab, DANGOMUSHI_Attack, nullptr);
				} else {
					crab->setRandTarget();
					transit(crab, DANGOMUSHI_Move, nullptr);
				}

			} else {
				transit(crab, DANGOMUSHI_Wait, nullptr);
			}
		}
	}
	/*
	stwu     r1, -0x120(r1)
	mflr     r0
	stw      r0, 0x124(r1)
	stfd     f31, 0x110(r1)
	psq_st   f31, 280(r1), 0, qr0
	stfd     f30, 0x100(r1)
	psq_st   f30, 264(r1), 0, qr0
	stfd     f29, 0xf0(r1)
	psq_st   f29, 248(r1), 0, qr0
	stfd     f28, 0xe0(r1)
	psq_st   f28, 232(r1), 0, qr0
	stfd     f27, 0xd0(r1)
	psq_st   f27, 216(r1), 0, qr0
	stfd     f26, 0xc0(r1)
	psq_st   f26, 200(r1), 0, qr0
	stw      r31, 0xbc(r1)
	stw      r30, 0xb8(r1)
	stw      r29, 0xb4(r1)
	stw      r28, 0xb0(r1)
	mr       r28, r3
	lwz      r3, 0x188(r4)
	mr       r30, r4
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802FA58C
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x7d0
	bne      lbl_802FA258
	mr       r3, r30
	bl       endBlendAnimation__Q34Game10DangoMushi3ObjFv
	b        lbl_802FA58C

lbl_802FA258:
	cmplwi   r0, 2
	bne      lbl_802FA2C4
	mr       r3, r30
	bl       createAppearSmokeEffect__Q34Game10DangoMushi3ObjFv
	mr       r4, r30
	addi     r3, r1, 0x8c
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x8c(r1)
	addi     r5, r1, 0xa4
	lfs      f1, 0x90(r1)
	li       r4, 0x1b
	lfs      f0, 0x94(r1)
	li       r6, 2
	stfs     f2, 0xa4(r1)
	lwz      r3, cameraMgr__4Game@sda21(r13)
	stfs     f1, 0xa8(r1)
	stfs     f0, 0xac(r1)
	bl       "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	addi     r5, r1, 0xa4
	li       r4, 0xf
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	b        lbl_802FA58C

lbl_802FA2C4:
	cmplwi   r0, 3
	bne      lbl_802FA2D8
	mr       r3, r30
	bl       setBossAppearBGM__Q34Game10DangoMushi3ObjFv
	b        lbl_802FA58C

lbl_802FA2D8:
	cmplwi   r0, 4
	bne      lbl_802FA338
	lwz      r12, 0(r4)
	addi     r3, r1, 0x80
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x80(r1)
	addi     r5, r1, 0x98
	lfs      f1, 0x84(r1)
	li       r4, 0xf
	lfs      f0, 0x88(r1)
	li       r6, 2
	stfs     f2, 0x98(r1)
	lwz      r3, cameraMgr__4Game@sda21(r13)
	stfs     f1, 0x9c(r1)
	stfs     f0, 0xa0(r1)
	bl       "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	addi     r5, r1, 0x98
	li       r4, 0xb
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	b        lbl_802FA58C

lbl_802FA338:
	cmplwi   r0, 0x3e8
	bne      lbl_802FA58C
	mr       r3, r30
	bl       getSearchedTarget__Q34Game10DangoMushi3ObjFv
	or.      r29, r3, r3
	beq      lbl_802FA56C
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_802FA56C
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	beq      lbl_802FA56C
	mr       r4, r29
	lwz      r5, 0xc0(r30)
	lwz      r12, 0(r29)
	addi     r3, r1, 0x68
	lfs      f30, 0x58c(r5)
	lwz      r12, 8(r12)
	lfs      f31, 0x564(r5)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f2, 0x68(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x74
	lfs      f1, 0x6c(r1)
	lfs      f0, 0x70(r1)
	lwz      r12, 8(r12)
	stfs     f2, 0x50(r1)
	stfs     f1, 0x54(r1)
	stfs     f0, 0x58(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x74(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x7c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x50(r1)
	lfs      f0, 0x58(r1)
	lfs      f4, 0x78(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x5c(r1)
	stfs     f4, 0x60(r1)
	stfs     f3, 0x64(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r30)
	fmr      f26, f1
	mr       r3, r30
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f26
	bl       angDist__Fff
	mr       r4, r30
	fmr      f28, f1
	lwz      r12, 0(r30)
	addi     r3, r1, 0x14
	li       r31, 0
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 8
	lwz      r12, 0(r29)
	lfs      f29, 0x14(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f0, 8(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x2c
	fsubs    f26, f0, f29
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x20
	lwz      r12, 0(r29)
	lfs      f29, 0x30(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f0, 0x24(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x44
	fsubs    f27, f0, f29
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x38
	lwz      r12, 0(r29)
	lfs      f29, 0x4c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fmuls    f1, f27, f27
	lfs      f2, 0x40(r1)
	fmuls    f0, f31, f31
	fsubs    f2, f2, f29
	fmadds   f1, f26, f26, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802FA514
	lfs      f0, lbl_8051D34C@sda21(r2)
	fabs     f2, f28
	lfs      f1, lbl_8051D348@sda21(r2)
	fmuls    f0, f0, f30
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_802FA514
	li       r31, 1

lbl_802FA514:
	clrlwi.  r0, r31, 0x18
	beq      lbl_802FA540
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	li       r5, 5
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802FA58C

lbl_802FA540:
	mr       r3, r30
	bl       setRandTarget__Q34Game10DangoMushi3ObjFv
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	li       r5, 4
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802FA58C

lbl_802FA56C:
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	li       r5, 3
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802FA58C:
	psq_l    f31, 280(r1), 0, qr0
	lfd      f31, 0x110(r1)
	psq_l    f30, 264(r1), 0, qr0
	lfd      f30, 0x100(r1)
	psq_l    f29, 248(r1), 0, qr0
	lfd      f29, 0xf0(r1)
	psq_l    f28, 232(r1), 0, qr0
	lfd      f28, 0xe0(r1)
	psq_l    f27, 216(r1), 0, qr0
	lfd      f27, 0xd0(r1)
	psq_l    f26, 200(r1), 0, qr0
	lfd      f26, 0xc0(r1)
	lwz      r31, 0xbc(r1)
	lwz      r30, 0xb8(r1)
	lwz      r29, 0xb4(r1)
	lwz      r0, 0x124(r1)
	lwz      r28, 0xb0(r1)
	mtlr     r0
	addi     r1, r1, 0x120
	blr
	*/
}

/**
 * @note Address: 0x802FA5DC
 * @note Size: 0x30
 */
void StateAppear::cleanup(EnemyBase* enemy)
{
	enemy->disableEvent(0, EB_BitterImmune);
	enemy->hardConstraintOff();
}

/**
 * @note Address: 0x802FA60C
 * @note Size: 0x9C
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* crab         = OBJ(enemy);
	crab->mNextState  = DANGOMUSHI_NULL;
	crab->mStateTimer = 0.0f;
	crab->setRandTarget();
	crab->mIsBall = false;
	crab->enableEvent(0, EB_Invulnerable);
	crab->mTargetVelocity = Vector3f(0.0f);

	if (stateArg) {
		crab->startBlendAnimation(DANGOANIM_Wait, true);
	} else {
		crab->startBlendAnimation(DANGOANIM_Wait, false);
	}
}

/**
 * @note Address: 0x802FA6A8
 * @note Size: 0x364
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* crab = OBJ(enemy);

	if (crab->mHealth <= 0.0f) {
		crab->mNextState = DANGOMUSHI_Dead;
		transit(crab, DANGOMUSHI_Dead, (DangoStateArg*)("blend")); // sure Nishimura
		return;
	}

	Creature* target = crab->getSearchedTarget();
	if (target && gameSystem && !gameSystem->isZukanMode()) {
		f32 maxAttackRange, minAttackRange;
		minAttackRange = CG_GENERALPARMS(crab).mMaxAttackAngle();
		maxAttackRange = CG_GENERALPARMS(crab).mMaxAttackRange();

		f32 viewAngle = crab->getCreatureViewAngle(target);
		if (crab->isTargetAttackable(target, viewAngle, maxAttackRange, minAttackRange)) {
			crab->mNextState = DANGOMUSHI_Attack;
			crab->finishMotion();
		} else {
			crab->mNextState = DANGOMUSHI_Move;
			crab->finishMotion();
		}
	} else if (crab->mStateTimer > 3.0f) {
		crab->mNextState = DANGOMUSHI_Move;
		crab->finishMotion();
	}

	crab->mStateTimer += sys->mDeltaTime;

	if (crab->mCurAnim->mIsPlaying) {
		if (crab->mCurAnim->mType == KEYEVENT_END_BLEND) {
			crab->endBlendAnimation();
		} else if (crab->mCurAnim->mType == KEYEVENT_END) {
			transit(crab, crab->mNextState, nullptr);
		}
	}

	/*
	stwu     r1, -0xf0(r1)
	mflr     r0
	stw      r0, 0xf4(r1)
	stfd     f31, 0xe0(r1)
	psq_st   f31, 232(r1), 0, qr0
	stfd     f30, 0xd0(r1)
	psq_st   f30, 216(r1), 0, qr0
	stfd     f29, 0xc0(r1)
	psq_st   f29, 200(r1), 0, qr0
	stfd     f28, 0xb0(r1)
	psq_st   f28, 184(r1), 0, qr0
	stfd     f27, 0xa0(r1)
	psq_st   f27, 168(r1), 0, qr0
	stfd     f26, 0x90(r1)
	psq_st   f26, 152(r1), 0, qr0
	stw      r31, 0x8c(r1)
	stw      r30, 0x88(r1)
	stw      r29, 0x84(r1)
	stw      r28, 0x80(r1)
	lfs      f0, lbl_8051D340@sda21(r2)
	mr       r31, r4
	lfs      f1, 0x200(r4)
	mr       r30, r3
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802FA734
	li       r0, 0
	li       r5, 0
	stw      r0, 0x2cc(r31)
	addi     r6, r2, lbl_8051D350@sda21
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802FA9BC

lbl_802FA734:
	mr       r3, r31
	bl       getSearchedTarget__Q34Game10DangoMushi3ObjFv
	or.      r28, r3, r3
	beq      lbl_802FA938
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_802FA938
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	beq      lbl_802FA938
	mr       r4, r28
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r28)
	addi     r3, r1, 0x68
	lfs      f30, 0x58c(r5)
	lwz      r12, 8(r12)
	lfs      f31, 0x564(r5)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f2, 0x68(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x74
	lfs      f1, 0x6c(r1)
	lfs      f0, 0x70(r1)
	lwz      r12, 8(r12)
	stfs     f2, 0x50(r1)
	stfs     f1, 0x54(r1)
	stfs     f0, 0x58(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x74(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x7c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x50(r1)
	lfs      f0, 0x58(r1)
	lfs      f4, 0x78(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x5c(r1)
	stfs     f4, 0x60(r1)
	stfs     f3, 0x64(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f26, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f26
	bl       angDist__Fff
	mr       r4, r31
	fmr      f28, f1
	lwz      r12, 0(r31)
	addi     r3, r1, 0x14
	li       r29, 0
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 8
	lwz      r12, 0(r28)
	lfs      f29, 0x14(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 8(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x2c
	fsubs    f26, f0, f29
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x20
	lwz      r12, 0(r28)
	lfs      f29, 0x30(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x24(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x44
	fsubs    f27, f0, f29
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x38
	lwz      r12, 0(r28)
	lfs      f29, 0x4c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fmuls    f1, f27, f27
	lfs      f2, 0x40(r1)
	fmuls    f0, f31, f31
	fsubs    f2, f2, f29
	fmadds   f1, f26, f26, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802FA908
	lfs      f0, lbl_8051D34C@sda21(r2)
	fabs     f2, f28
	lfs      f1, lbl_8051D348@sda21(r2)
	fmuls    f0, f0, f30
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_802FA908
	li       r29, 1

lbl_802FA908:
	clrlwi.  r0, r29, 0x18
	beq      lbl_802FA924
	li       r0, 5
	mr       r3, r31
	stw      r0, 0x2cc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802FA958

lbl_802FA924:
	li       r0, 4
	mr       r3, r31
	stw      r0, 0x2cc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802FA958

lbl_802FA938:
	lfs      f1, 0x2c4(r31)
	lfs      f0, lbl_8051D358@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802FA958
	li       r0, 4
	mr       r3, r31
	stw      r0, 0x2cc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802FA958:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c4(r31)
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802FA9BC
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x7d0
	bne      lbl_802FA994
	mr       r3, r31
	bl       endBlendAnimation__Q34Game10DangoMushi3ObjFv
	b        lbl_802FA9BC

lbl_802FA994:
	cmplwi   r0, 0x3e8
	bne      lbl_802FA9BC
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2cc(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802FA9BC:
	psq_l    f31, 232(r1), 0, qr0
	lfd      f31, 0xe0(r1)
	psq_l    f30, 216(r1), 0, qr0
	lfd      f30, 0xd0(r1)
	psq_l    f29, 200(r1), 0, qr0
	lfd      f29, 0xc0(r1)
	psq_l    f28, 184(r1), 0, qr0
	lfd      f28, 0xb0(r1)
	psq_l    f27, 168(r1), 0, qr0
	lfd      f27, 0xa0(r1)
	psq_l    f26, 152(r1), 0, qr0
	lfd      f26, 0x90(r1)
	lwz      r31, 0x8c(r1)
	lwz      r30, 0x88(r1)
	lwz      r29, 0x84(r1)
	lwz      r0, 0xf4(r1)
	lwz      r28, 0x80(r1)
	mtlr     r0
	addi     r1, r1, 0xf0
	blr
	*/
}

/**
 * @note Address: 0x802FAA0C
 * @note Size: 0x4
 */
void StateWait::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802FAA10
 * @note Size: 0x5C
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* crab         = OBJ(enemy);
	crab->mStateTimer = 0.0f;
	crab->mNextState  = DANGOMUSHI_NULL;
	crab->mIsBall     = false;
	crab->enableEvent(0, EB_Invulnerable);
	crab->mTargetVelocity = Vector3f(0.0f);
	crab->startBlendAnimation(DANGOANIM_Move, false);
}

/**
 * @note Address: 0x802FAA6C
 * @note Size: 0x7A8
 */
void StateMove::exec(EnemyBase* enemy)
{
	Obj* crab = OBJ(enemy);
	if (crab->mHealth <= 0.0f) {
		crab->mNextState = DANGOMUSHI_Dead;
		transit(crab, DANGOMUSHI_Dead, (DangoStateArg*)("blend"));
		return;
	}

	Creature* target = crab->getSearchedTarget();
	if (target && gameSystem && !gameSystem->isZukanMode()) {
		f32 viewAngle = crab->getCreatureViewAngle(target);

		if (crab->isTargetAttackable(target, viewAngle, CG_GENERALPARMS(crab).mMaxAttackRange(), CG_GENERALPARMS(crab).mMaxAttackAngle())) {
			crab->mNextState = DANGOMUSHI_Attack;
			crab->finishMotion();

		} else {
			crab->turnToTarget(target, CG_GENERALPARMS(crab).mTurnSpeed(), CG_GENERALPARMS(crab).mMaxTurnAngle());
			if (FABS(viewAngle) <= PI * (DEG2RAD * CG_GENERALPARMS(crab).mMaxAttackAngle())) {
				crab->setTargetVelocity();
			} else {
				crab->mTargetVelocity = Vector3f(0.0f);
			}
		}

	} else if (crab->isReachedTarget()) {
		crab->mNextState = DANGOMUSHI_Wait;
		crab->finishMotion();
	} else if (crab->mStateTimer > 10.0f) {
		crab->mNextState = DANGOMUSHI_Wait;
		crab->finishMotion();
	} else {
		Vector3f targetPos = crab->mTargetPosition;
		f32 viewAngle      = crab->getCreatureViewAngle(targetPos);
		crab->turnToTarget2(targetPos, CG_GENERALPARMS(crab).mTurnSpeed(), CG_GENERALPARMS(crab).mMaxTurnAngle());

		if (FABS(viewAngle) <= HALF_PI) {
			crab->setTargetVelocity();
		} else {
			crab->setTargetVelocity(Vector3f(0.0f));
		}
	}

	if (crab->isFinishMotion()) {
		crab->setTargetVelocity(Vector3f(0.0f));
	}

	crab->mStateTimer += sys->mDeltaTime;

	if (crab->mCurAnim->mIsPlaying) {
		if (crab->mCurAnim->mType == KEYEVENT_END_BLEND) {
			crab->endBlendAnimation();

		} else if (crab->mCurAnim->mType == KEYEVENT_2) {
			Vector3f crabPos = crab->getPosition();
			cameraMgr->startVibration(VIBTYPE_LightMidShort, crabPos, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed11, crabPos, RUMBLEID_Both);

		} else if (crab->mCurAnim->mType == KEYEVENT_END) {
			transit(crab, crab->mNextState, nullptr);
		}
	}
	/*
	stwu     r1, -0x180(r1)
	mflr     r0
	stw      r0, 0x184(r1)
	stfd     f31, 0x170(r1)
	psq_st   f31, 376(r1), 0, qr0
	stfd     f30, 0x160(r1)
	psq_st   f30, 360(r1), 0, qr0
	stfd     f29, 0x150(r1)
	psq_st   f29, 344(r1), 0, qr0
	stfd     f28, 0x140(r1)
	psq_st   f28, 328(r1), 0, qr0
	stfd     f27, 0x130(r1)
	psq_st   f27, 312(r1), 0, qr0
	stfd     f26, 0x120(r1)
	psq_st   f26, 296(r1), 0, qr0
	stw      r31, 0x11c(r1)
	stw      r30, 0x118(r1)
	stw      r29, 0x114(r1)
	stw      r28, 0x110(r1)
	lfs      f0, lbl_8051D340@sda21(r2)
	mr       r31, r4
	lfs      f1, 0x200(r4)
	mr       r30, r3
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802FAAF8
	li       r0, 0
	li       r5, 0
	stw      r0, 0x2cc(r31)
	addi     r6, r2, lbl_8051D350@sda21
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802FB1C4

lbl_802FAAF8:
	mr       r3, r31
	bl       getSearchedTarget__Q34Game10DangoMushi3ObjFv
	or.      r28, r3, r3
	beq      lbl_802FAEA8
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_802FAEA8
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	beq      lbl_802FAEA8
	mr       r4, r28
	addi     r3, r1, 0xe0
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f2, 0xe0(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0xec
	lfs      f1, 0xe4(r1)
	lfs      f0, 0xe8(r1)
	lwz      r12, 8(r12)
	stfs     f2, 0xc8(r1)
	stfs     f1, 0xcc(r1)
	stfs     f0, 0xd0(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0xec(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0xf4(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0xc8(r1)
	lfs      f0, 0xd0(r1)
	lfs      f4, 0xf0(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0xd4(r1)
	stfs     f4, 0xd8(r1)
	stfs     f3, 0xdc(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f26, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f26
	bl       angDist__Fff
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	fmr      f31, f1
	addi     r3, r1, 0x5c
	lfs      f28, 0x58c(r5)
	lwz      r12, 8(r12)
	li       r29, 0
	lfs      f29, 0x564(r5)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x50
	lwz      r12, 0(r28)
	lfs      f30, 0x5c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x50(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x74
	fsubs    f26, f0, f30
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x68
	lwz      r12, 0(r28)
	lfs      f30, 0x78(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x6c(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x8c
	fsubs    f27, f0, f30
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x80
	lwz      r12, 0(r28)
	lfs      f30, 0x94(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fmuls    f1, f27, f27
	lfs      f2, 0x88(r1)
	fmuls    f0, f29, f29
	fsubs    f2, f2, f30
	fmadds   f1, f26, f26, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802FACCC
	lfs      f0, lbl_8051D34C@sda21(r2)
	fabs     f2, f31
	lfs      f1, lbl_8051D348@sda21(r2)
	fmuls    f0, f0, f28
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_802FACCC
	li       r29, 1

lbl_802FACCC:
	clrlwi.  r0, r29, 0x18
	beq      lbl_802FACE8
	li       r0, 5
	mr       r3, r31
	stw      r0, 0x2cc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802FB0DC

lbl_802FACE8:
	mr       r4, r28
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r28)
	addi     r3, r1, 0x38
	lfs      f29, 0x334(r5)
	lwz      r12, 8(r12)
	lfs      f28, 0x30c(r5)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f2, 0x38(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x44
	lfs      f1, 0x3c(r1)
	lfs      f0, 0x40(r1)
	lwz      r12, 8(r12)
	stfs     f2, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x44(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x4c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x20(r1)
	lfs      f0, 0x28(r1)
	lfs      f4, 0x48(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x2c(r1)
	stfs     f4, 0x30(r1)
	stfs     f3, 0x34(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f26, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f26
	bl       angDist__Fff
	fmuls    f26, f1, f28
	lfs      f0, lbl_8051D34C@sda21(r2)
	lfs      f1, lbl_8051D348@sda21(r2)
	fmuls    f0, f0, f29
	fabs     f2, f26
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_802FADD4
	lfs      f0, lbl_8051D340@sda21(r2)
	fcmpo    cr0, f26, f0
	ble      lbl_802FADD0
	fmr      f26, f1
	b        lbl_802FADD4

lbl_802FADD0:
	fneg     f26, f1

lbl_802FADD4:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f26, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	fabs     f2, f31
	lfs      f0, lbl_8051D34C@sda21(r2)
	lfs      f3, 0x1fc(r31)
	lfs      f1, lbl_8051D348@sda21(r2)
	frsp     f2, f2
	stfs     f3, 0x1a8(r31)
	lwz      r4, 0xc0(r31)
	lfs      f3, 0x58c(r4)
	fmuls    f0, f0, f3
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_802FAE94
	mr       r3, r31
	lfs      f28, 0x2e4(r4)
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r31
	lfs      f2, 0x1d4(r31)
	lwz      r12, 0(r31)
	frsp     f26, f1
	lfs      f31, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	lwz      r12, 0x64(r12)
	stfs     f2, 0xbc(r1)
	stfs     f31, 0xc0(r1)
	stfs     f0, 0xc4(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f28, f26
	frsp     f1, f1
	stfs     f0, 0x1d4(r31)
	fmuls    f0, f28, f1
	stfs     f31, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_802FB0DC

lbl_802FAE94:
	lfs      f0, lbl_8051D340@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_802FB0DC

lbl_802FAEA8:
	mr       r3, r31
	bl       isReachedTarget__Q34Game10DangoMushi3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802FAECC
	li       r0, 3
	mr       r3, r31
	stw      r0, 0x2cc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802FB0DC

lbl_802FAECC:
	lfs      f1, 0x2c4(r31)
	lfs      f0, lbl_8051D35C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802FAEF0
	li       r0, 3
	mr       r3, r31
	stw      r0, 0x2cc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802FB0DC

lbl_802FAEF0:
	mr       r4, r31
	addi     r3, r1, 0xb0
	lwz      r12, 0(r31)
	lfs      f27, 0x2d0(r31)
	lwz      r12, 8(r12)
	lfs      f30, 0x2d8(r31)
	mtctr    r12
	bctrl
	lfs      f4, 0xb0(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0xb8(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0xb4(r1)
	fsubs    f1, f27, f4
	fsubs    f2, f30, f0
	stfs     f4, 0xa4(r1)
	stfs     f3, 0xa8(r1)
	stfs     f0, 0xac(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f26, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f26
	bl       angDist__Fff
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	fmr      f31, f1
	addi     r3, r1, 0x14
	lfs      f29, 0x334(r5)
	lwz      r12, 8(r12)
	lfs      f28, 0x30c(r5)
	mtctr    r12
	bctrl
	lfs      f4, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x18(r1)
	fsubs    f1, f27, f4
	fsubs    f2, f30, f0
	stfs     f4, 8(r1)
	stfs     f3, 0xc(r1)
	stfs     f0, 0x10(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f26, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f26
	bl       angDist__Fff
	fmuls    f26, f1, f28
	lfs      f0, lbl_8051D34C@sda21(r2)
	lfs      f1, lbl_8051D348@sda21(r2)
	fmuls    f0, f0, f29
	fabs     f2, f26
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_802FB01C
	lfs      f0, lbl_8051D340@sda21(r2)
	fcmpo    cr0, f26, f0
	ble      lbl_802FB018
	fmr      f26, f1
	b        lbl_802FB01C

lbl_802FB018:
	fneg     f26, f1

lbl_802FB01C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f26, f1
	bl       roundAng__Ff
	fabs     f3, f31
	stfs     f1, 0x1fc(r31)
	lfs      f0, lbl_8051D360@sda21(r2)
	lfs      f2, 0x1fc(r31)
	frsp     f1, f3
	stfs     f2, 0x1a8(r31)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802FB0CC
	mr       r3, r31
	lwz      r4, 0xc0(r31)
	lwz      r12, 0(r31)
	lfs      f28, 0x2e4(r4)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r31
	lfs      f2, 0x1d4(r31)
	lwz      r12, 0(r31)
	frsp     f26, f1
	lfs      f31, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x98(r1)
	stfs     f31, 0x9c(r1)
	stfs     f0, 0xa0(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f28, f26
	frsp     f1, f1
	stfs     f0, 0x1d4(r31)
	fmuls    f0, f28, f1
	stfs     f31, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_802FB0DC

lbl_802FB0CC:
	lfs      f0, lbl_8051D340@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)

lbl_802FB0DC:
	mr       r3, r31
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802FB0FC
	lfs      f0, lbl_8051D340@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)

lbl_802FB0FC:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c4(r31)
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802FB1C4
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x7d0
	bne      lbl_802FB138
	mr       r3, r31
	bl       endBlendAnimation__Q34Game10DangoMushi3ObjFv
	b        lbl_802FB1C4

lbl_802FB138:
	cmplwi   r0, 2
	bne      lbl_802FB19C
	mr       r4, r31
	addi     r3, r1, 0xf8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0xf8(r1)
	addi     r5, r1, 0x104
	lfs      f1, 0xfc(r1)
	li       r4, 3
	lfs      f0, 0x100(r1)
	li       r6, 2
	stfs     f2, 0x104(r1)
	lwz      r3, cameraMgr__4Game@sda21(r13)
	stfs     f1, 0x108(r1)
	stfs     f0, 0x10c(r1)
	bl       "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	addi     r5, r1, 0x104
	li       r4, 0xb
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	b        lbl_802FB1C4

lbl_802FB19C:
	cmplwi   r0, 0x3e8
	bne      lbl_802FB1C4
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2cc(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802FB1C4:
	psq_l    f31, 376(r1), 0, qr0
	lfd      f31, 0x170(r1)
	psq_l    f30, 360(r1), 0, qr0
	lfd      f30, 0x160(r1)
	psq_l    f29, 344(r1), 0, qr0
	lfd      f29, 0x150(r1)
	psq_l    f28, 328(r1), 0, qr0
	lfd      f28, 0x140(r1)
	psq_l    f27, 312(r1), 0, qr0
	lfd      f27, 0x130(r1)
	psq_l    f26, 296(r1), 0, qr0
	lfd      f26, 0x120(r1)
	lwz      r31, 0x11c(r1)
	lwz      r30, 0x118(r1)
	lwz      r29, 0x114(r1)
	lwz      r0, 0x184(r1)
	lwz      r28, 0x110(r1)
	mtlr     r0
	addi     r1, r1, 0x180
	blr
	*/
}

/**
 * @note Address: 0x802FB214
 * @note Size: 0x4
 */
void StateMove::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802FB218
 * @note Size: 0x88
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* crab         = OBJ(enemy);
	crab->mNextState  = DANGOMUSHI_NULL;
	crab->mStateTimer = 0.0f;
	crab->mIsRolling  = false;
	crab->mIsBall     = true;
	crab->enableEvent(0, EB_Invulnerable);
	crab->enableEvent(0, EB_BitterImmune);
	crab->setEmotionExcitement();
	crab->mTargetVelocity = Vector3f(0.0f);
	crab->startBlendAnimation(DANGOANIM_Attack, false);
}

/**
 * @note Address: 0x802FB2A0
 * @note Size: 0x288
 */
void StateAttack::exec(EnemyBase* enemy)
{
	Obj* crab = OBJ(enemy);
	if (crab->mStateTimer > 15.0f) {
		crab->mNextState = DANGOMUSHI_Wait;
		crab->finishMotion();
	}

	if (crab->mIsRolling) {
		crab->rollingMove();
		Vector3f crabPos = crab->getPosition();
		cameraMgr->startVibration(VIBTYPE_HardFastMid, crabPos, CAMNAVI_Both);
		crab->getJAIObject()->startSound(PSSE_EN_DANGO_ROLL_GROUND, 0);
	} else {
		crab->mTargetVelocity = Vector3f(0.0f);
	}

	if (crab->mCurAnim->mIsPlaying) {
		if (crab->mCurAnim->mType == KEYEVENT_END_BLEND) {
			crab->endBlendAnimation();

		} else if (crab->mCurAnim->mType == KEYEVENT_2) {
			crab->createEnemyBounceEffect();

		} else if (crab->mCurAnim->mType == KEYEVENT_3) {
			crab->startBossAttackLoopBGM();
			crab->createEnemyBounceEffect();
			Vector3f crabPos = crab->getPosition();
			cameraMgr->startVibration(VIBTYPE_MidFastShort, crabPos, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed14, crabPos, RUMBLEID_Both);

		} else if (crab->mCurAnim->mType == KEYEVENT_4) {
			if (!crab->mIsRolling) {
				crab->mIsRolling = true;
				crab->startRollingMoveEffect();
			}

		} else if (crab->mCurAnim->mType == KEYEVENT_LOOP_END) {
			if (crab->isFinishMotion()) {
				crab->mIsRolling = false;
				crab->mIsBall    = false;
				crab->finishRollingMoveEffect();
			}

		} else if (crab->mCurAnim->mType == KEYEVENT_5) {
			crab->createEnemyBounceEffect();
			Vector3f crabPos = crab->getPosition();
			cameraMgr->startVibration(VIBTYPE_HardFastMid, crabPos, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed14, crabPos, RUMBLEID_Both);

		} else if (crab->mCurAnim->mType == KEYEVENT_END) {
			transit(crab, crab->mNextState, nullptr);
		}
	}
}

/**
 * @note Address: 0x802FB528
 * @note Size: 0x58
 */
void StateAttack::cleanup(EnemyBase* enemy)
{
	Obj* crab = OBJ(enemy);
	crab->disableEvent(0, EB_BitterImmune);
	crab->setEmotionCaution();
	crab->mIsRolling = false;
	crab->mIsBall    = false;
	crab->finishRollingMoveEffect();
	crab->finishBossAttackLoopBGM();
}

/**
 * @note Address: 0x802FB580
 * @note Size: 0xD4
 */
void StateTurn::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* crab         = OBJ(enemy);
	crab->mNextState  = DANGOMUSHI_NULL;
	crab->mStateTimer = 0.0f;
	crab->mIsBall     = false;
	crab->enableEvent(0, EB_NoInterrupt);
	crab->enableEvent(0, EB_Invulnerable);
	crab->mTargetVelocity = Vector3f(0.0f);
	crab->startBlendAnimation(DANGOANIM_Turn, false);
	crab->createCrashEnemy();

	Vector3f crabPos = crab->getPosition();
	cameraMgr->startVibration(VIBTYPE_Crash, crabPos, CAMNAVI_Both);
	rumbleMgr->startRumble(RUMBLETYPE_Fixed15, crabPos, RUMBLEID_Both);
}

/**
 * @note Address: 0x802FB654
 * @note Size: 0x270
 */
void StateTurn::exec(EnemyBase* enemy)
{
	Obj* crab = OBJ(enemy);
	if (crab->mHealth <= 0.0f) {
		crab->mNextState = DANGOMUSHI_Dead;
		crab->finishMotion();
	} else if (crab->mStateTimer > CG_PROPERPARMS(crab).mFlipTime.mValue) {
		crab->mNextState = DANGOMUSHI_Recover;
		crab->finishMotion();
	}

	crab->mStateTimer += sys->mDeltaTime;

	if (crab->mCurAnim->mIsPlaying) {
		if (crab->mCurAnim->mType == KEYEVENT_END_BLEND) {
			crab->endBlendAnimation();

		} else if (crab->mCurAnim->mType == KEYEVENT_2) {
			crab->createEnemyBounceEffect();
			Vector3f crabPos = crab->getPosition();
			cameraMgr->startVibration(VIBTYPE_HardMidShort, crabPos, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed14, crabPos, RUMBLEID_Both);

		} else if (crab->mCurAnim->mType == KEYEVENT_LOOP_START) {
			if (crab->isEvent(0, EB_Invulnerable)) {
				crab->disableEvent(0, EB_NoInterrupt);
				crab->disableEvent(0, EB_Invulnerable);
				crab->setBodyCollision(false);
			}

		} else if (crab->mCurAnim->mType == KEYEVENT_3) {
			crab->enableEvent(0, EB_Invulnerable);
			crab->setBodyCollision(true);
			Vector3f crabPos = crab->getPosition();
			cameraMgr->startVibration(VIBTYPE_MidFastShort, crabPos, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed11, crabPos, RUMBLEID_Both);

		} else if (crab->mCurAnim->mType == KEYEVENT_4) {
			crab->createBodyTurnEffect();
			Vector3f crabPos = crab->getPosition();
			cameraMgr->startVibration(VIBTYPE_HardFastMid, crabPos, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed14, crabPos, RUMBLEID_Both);

		} else if (crab->mCurAnim->mType == KEYEVENT_END) {
			transit(crab, crab->mNextState, nullptr);
		}
	}
}

/**
 * @note Address: 0x802FB8C4
 * @note Size: 0x68
 */
void StateTurn::cleanup(EnemyBase* enemy)
{
	Obj* crab = OBJ(enemy);
	EnemyFunc::flickStickPikmin(crab, 1.0f, 10.0f, 0.0f, FLICK_BACKWARD_ANGLE, nullptr);
	crab->enableEvent(0, EB_Invulnerable);
	crab->disableEvent(0, EB_NoInterrupt);
	crab->setBodyCollision(true);
}

/**
 * @note Address: 0x802FB92C
 * @note Size: 0x50
 */
void StateRecover::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* crab             = OBJ(enemy);
	crab->mNextState      = DANGOMUSHI_NULL;
	crab->mStateTimer     = 0.0f;
	crab->mIsBall         = false;
	crab->mTargetVelocity = Vector3f(0.0f);
	crab->startBlendAnimation(DANGOANIM_Recover, false);
}

/**
 * @note Address: 0x802FB97C
 * @note Size: 0xFC
 */
void StateRecover::exec(EnemyBase* enemy)
{
	Obj* crab = OBJ(enemy);
	if (crab->mCurAnim->mIsPlaying) {
		if (crab->mCurAnim->mType == KEYEVENT_END_BLEND) {
			crab->endBlendAnimation();

		} else if (crab->mCurAnim->mType == KEYEVENT_2) {
			crab->createEnemyBounceEffect();
			Vector3f crabPos = crab->getPosition();
			cameraMgr->startVibration(VIBTYPE_MidFastShort, crabPos, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed11, crabPos, RUMBLEID_Both);
			crab->startBossFlickBGM();

		} else if (crab->mCurAnim->mType == KEYEVENT_END) {
			crab->mFaceDir += PI;
			crab->mRotation.y = crab->mFaceDir;
			transit(crab, DANGOMUSHI_Flick, nullptr);
		}
	}
}

/**
 * @note Address: 0x802FBA78
 * @note Size: 0x4
 */
void StateRecover::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802FBA7C
 * @note Size: 0x6C
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* crab            = OBJ(enemy);
	crab->mNextState     = DANGOMUSHI_NULL;
	crab->mStateTimer    = 0.0f;
	crab->mIsArmSwinging = false;
	crab->mIsBall        = false;
	crab->setEmotionExcitement();
	crab->mTargetVelocity = Vector3f(0.0f);
	crab->startBlendAnimation(DANGOANIM_Attack2, false);
}

/**
 * @note Address: 0x802FBAE8
 * @note Size: 0x1E0
 */
void StateFlick::exec(EnemyBase* enemy)
{
	Obj* crab = OBJ(enemy);
	if (crab->flickHandCollision()) {
		crab->createWallBreakEffect();
		crab->getJAIObject()->startSound(PSSE_EN_DANGO_ARM_GROUND, 0);
		Vector3f crabPos = crab->getPosition();
		cameraMgr->startVibration(VIBTYPE_HardFastMid, crabPos, CAMNAVI_Both);
		rumbleMgr->startRumble(RUMBLETYPE_Fixed14, crabPos, RUMBLEID_Both);
		transit(crab, DANGOMUSHI_Wait, (DangoStateArg*)("blend"));
		return;
	}

	if (crab->mCurAnim->mIsPlaying) {
		if (crab->mCurAnim->mType == KEYEVENT_END_BLEND) {
			crab->endBlendAnimation();

		} else if (crab->mCurAnim->mType == KEYEVENT_2) {
			crab->mIsArmSwinging = true;
			if (crab->getMotionFrame() < 30.0f) {
				crab->createFlickAttackEffect();
			}

		} else if (crab->mCurAnim->mType == KEYEVENT_3) {
			crab->mIsArmSwinging = false;
			Vector3f crabPos     = crab->getPosition();
			cameraMgr->startVibration(VIBTYPE_MidFastShort, crabPos, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed11, crabPos, RUMBLEID_Both);

		} else if (crab->mCurAnim->mType == KEYEVENT_END) {
			transit(crab, DANGOMUSHI_Wait, nullptr);
		}
	}
}

/**
 * @note Address: 0x802FBCC8
 * @note Size: 0x2C
 */
void StateFlick::cleanup(EnemyBase* enemy)
{
	Obj* crab            = OBJ(enemy);
	crab->mIsArmSwinging = false;
	crab->setEmotionCaution();
}

} // namespace DangoMushi
} // namespace Game

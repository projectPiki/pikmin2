#include "Game/Entities/BombSarai.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/MapMgr.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "nans.h"

namespace Game {
namespace BombSarai {

static const int unusedBombSaraiArray[] = { 0, 0, 0 };
static const char bombSaraiStateName[]  = "246-BombSaraiState";

/**
 * @note Address: 0x802AFC74
 * @note Size: 0x480
 */
void FSM::init(EnemyBase* enemy)
{
	create(BOMBSARAI_StateCount);
	registerState(new StateDead);
	registerState(new StateDamage);
	registerState(new StateWait);
	registerState(new StateBombWait);
	registerState(new StateMove);
	registerState(new StateBombMove);
	registerState(new StateSupply);
	registerState(new StateRelease);
	registerState(new StateFall);
	registerState(new StateTakeOff1);
	registerState(new StateTakeOff2);
	registerState(new StateFlick);
	registerState(new StateBombFlick);
}

/**
 * @note Address: 0x802B00F4
 * @note Size: 0x94
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->deathProcedure();
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->disableEvent(0, EB_Untargetable);
	enemy->disableEvent(0, EB_Cullable);
	enemy->startMotion(BOMBSARAIANIM_Dead, nullptr);
	enemy->getJAIObject()->startSound(PSSE_EN_BOMBSARAI_DEAD, 0);
}

/**
 * @note Address: 0x802B0188
 * @note Size: 0x134
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* sarai = OBJ(enemy);
	if (sarai->mCurAnim->mIsPlaying) {
		if (sarai->mCurAnim->mType == KEYEVENT_2) {
			sarai->createBalloonEffect(0);

		} else if (sarai->mCurAnim->mType == KEYEVENT_3) {
			sarai->createBalloonEffect(1);

		} else if (sarai->mCurAnim->mType == KEYEVENT_4) {
			sarai->createBalloonEffect(2);

		} else if (sarai->mCurAnim->mType == KEYEVENT_5) {
			sarai->createBalloonEffect(3);

		} else if (sarai->mCurAnim->mType == KEYEVENT_6) {
			sarai->createBalloonEffect(4);

		} else if (sarai->mCurAnim->mType == KEYEVENT_7) {
			Vector3f pos = sarai->getPosition();
			cameraMgr->startVibration(VIBTYPE_LightSlowShort, pos, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed11, pos, RUMBLEID_Both);
			sarai->createDownEffect(0.9f);

		} else if (sarai->mCurAnim->mType == KEYEVENT_END) {
			sarai->kill(nullptr);
		}
	}
}

/**
 * @note Address: 0x802B02BC
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802B02C0
 * @note Size: 0xB0
 */
void StateDamage::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sarai         = OBJ(enemy);
	sarai->mStateTimer = 0.0f;
	sarai->disableEvent(0, EB_NoInterrupt);
	sarai->mTargetVelocity = Vector3f(0.0f);
	sarai->disableEvent(0, EB_Untargetable);
	sarai->setEmotionExcitement();
	sarai->startMotion(BOMBSARAIANIM_Struggle, nullptr);

	Vector3f pos = sarai->getPosition();
	rumbleMgr->startRumble(RUMBLETYPE_Fixed8, pos, RUMBLEID_Both);
}

/**
 * @note Address: 0x802B0370
 * @note Size: 0x1B4
 */
void StateDamage::exec(EnemyBase* enemy)
{
	Obj* sarai = OBJ(enemy);
	if (sarai->mHealth <= 0.0f || sarai->mStuckPikminCount == 0 || sarai->mStateTimer > CG_PROPERPARMS(sarai).mStruggleTime.mValue) {
		sarai->finishMotion();
	}

	sarai->mStateTimer += sys->mDeltaTime;

	if (sarai->mCurAnim->mIsPlaying) {
		if (sarai->mCurAnim->mType == KEYEVENT_2) {
			sarai->enableEvent(0, EB_NoInterrupt);

		} else if (sarai->mCurAnim->mType == KEYEVENT_3) {
			sarai->disableEvent(0, EB_NoInterrupt);
			sarai->createDownEffect(0.8f);

			Vector3f pos = sarai->getPosition();
			rumbleMgr->startRumble(RUMBLETYPE_Fixed8, pos, RUMBLEID_Both);

		} else if (sarai->mCurAnim->mType == KEYEVENT_END) {
			if (sarai->mHealth <= 0.0f) {
				transit(sarai, BOMBSARAI_Dead, nullptr);
				return;
			}
			if (sarai->mHealth / CG_GENERALPARMS(sarai).mHealth.mValue > 0.5f) {
				transit(sarai, BOMBSARAI_TakeOff1, nullptr);
			} else {
				transit(sarai, BOMBSARAI_TakeOff2, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x802B0524
 * @note Size: 0x30
 */
void StateDamage::cleanup(EnemyBase* enemy)
{
	enemy->disableEvent(0, EB_NoInterrupt);
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x802B0554
 * @note Size: 0x54
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sarai = OBJ(enemy);
	sarai->enableEvent(0, EB_Untargetable);
	sarai->mNextState      = BOMBSARAI_NULL;
	sarai->mStateTimer     = 0.0f;
	sarai->mTargetVelocity = Vector3f(0.0f);
	sarai->startMotion(BOMBSARAIANIM_Wait, nullptr);
}

/**
 * @note Address: 0x802B05A8
 * @note Size: 0x148
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* sarai = OBJ(enemy);
	f32 height = sarai->setHeightVelocity(false);
	if (!sarai->isFinishMotion()) {
		Creature* target = sarai->getAttackablePikmin();
		if (target) {
			sarai->mNextState = BOMBSARAI_Supply;
			sarai->finishMotion();
		} else {
			sarai->mStateTimer += sys->mDeltaTime;
			if (sarai->mStateTimer > 3.0f) {
				sarai->mNextState = BOMBSARAI_Move;
				sarai->finishMotion();
			}
		}
	}

	if (height > CG_PROPERPARMS(sarai).mTransitHeight.mValue || sarai->mStateTimer > 5.0f) {
		StateID stateID = sarai->getNextStateOnHeight();
		if (stateID >= 0) {
			transit(sarai, stateID, nullptr);
			return;
		}
	}

	if (sarai->mCurAnim->mIsPlaying && sarai->mCurAnim->mType == KEYEVENT_END) {
		transit(sarai, sarai->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x802B06F0
 * @note Size: 0x4
 */
void StateWait::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802B06F4
 * @note Size: 0x74
 */
void StateBombWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sarai = OBJ(enemy);
	sarai->enableEvent(0, EB_Untargetable);
	sarai->enableEvent(0, EB_NoInterrupt);
	sarai->mNextState      = BOMBSARAI_NULL;
	sarai->mStateTimer     = 0.0f;
	sarai->mTargetVelocity = Vector3f(0.0f);
	sarai->setEmotionExcitement();
	sarai->startMotion(BOMBSARAIANIM_BombWait, nullptr);
}

/**
 * @note Address: 0x802B0768
 * @note Size: 0x454
 */
void StateBombWait::exec(EnemyBase* enemy)
{
	Obj* sarai       = OBJ(enemy);
	f32 height       = sarai->setHeightVelocity(false);
	Creature* target = sarai->getAttackablePikmin();
	if (sarai->mBombCarryTimer > 15.0f) {
		sarai->mNextState = BOMBSARAI_Release;
		sarai->finishMotion();
	} else if (target) {
		f32 maxRange, minRange, angleDist;
		minRange  = CG_GENERALPARMS(sarai).mMaxAttackAngle(); // f29
		maxRange  = CG_GENERALPARMS(sarai).mMaxAttackRange(); // f30
		angleDist = sarai->getAngDist(target);

		if (sarai->isTargetAttackable(target, angleDist, maxRange, minRange)) {
			sarai->mNextState = BOMBSARAI_Release;
			sarai->finishMotion();
		} else {
			Vector3f saraiPos  = sarai->getPosition();
			Vector3f targetPos = target->getPosition();

			if (sqrDistanceXZ(saraiPos, targetPos) < SQUARE(CG_GENERALPARMS(sarai).mAttackRadius())) {
				sarai->mNextState = BOMBSARAI_Release;
				sarai->finishMotion();
			} else {
				sarai->mNextState = BOMBSARAI_BombMove;
				sarai->finishMotion();
			}
		}
	} else if (sarai->mStateTimer > 3.0f) {
		sarai->mNextState = BOMBSARAI_BombMove;
		sarai->finishMotion();
	}

	if (sarai->isEvent(0, EB_BitterQueued)) {
		transit(sarai, BOMBSARAI_Fall, nullptr);
		return;
	}

	if (height > CG_PROPERPARMS(sarai).mTransitHeight || sarai->mStateTimer > 5.0f) {
		StateID stateID = sarai->getNextStateOnHeight();
		if (stateID >= 0) {
			transit(sarai, stateID, nullptr);
			return;
		}
	}

	sarai->mStateTimer += sys->mDeltaTime;
	sarai->mBombCarryTimer += sys->mDeltaTime;

	if (sarai->mCurAnim->mIsPlaying && sarai->mCurAnim->mType == KEYEVENT_END) {
		transit(sarai, sarai->mNextState, nullptr);
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
	stfd     f25, 0xb0(r1)
	psq_st   f25, 184(r1), 0, qr0
	stw      r31, 0xac(r1)
	stw      r30, 0xa8(r1)
	stw      r29, 0xa4(r1)
	stw      r28, 0xa0(r1)
	mr       r31, r4
	mr       r30, r3
	li       r4, 0
	mr       r3, r31
	bl       setHeightVelocity__Q34Game9BombSarai3ObjFb
	fmr      f31, f1
	mr       r3, r31
	bl       getAttackablePikmin__Q34Game9BombSarai3ObjFv
	lfs      f1, 0x2c8(r31)
	mr       r28, r3
	lfs      f0, lbl_8051C188@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802B0804
	li       r0, 7
	mr       r3, r31
	stw      r0, 0x2dc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802B0A80

lbl_802B0804:
	cmplwi   r28, 0
	beq      lbl_802B0A60
	mr       r4, r28
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r28)
	addi     r3, r1, 0x68
	lfs      f29, 0x58c(r5)
	lwz      r12, 8(r12)
	lfs      f30, 0x564(r5)
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
	fmr      f25, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f25
	bl       angDist__Fff
	mr       r4, r31
	fmr      f27, f1
	lwz      r12, 0(r31)
	addi     r3, r1, 0x14
	li       r29, 0
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 8
	lwz      r12, 0(r28)
	lfs      f28, 0x14(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 8(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x2c
	fsubs    f25, f0, f28
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x20
	lwz      r12, 0(r28)
	lfs      f28, 0x30(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x24(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x44
	fsubs    f26, f0, f28
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x38
	lwz      r12, 0(r28)
	lfs      f28, 0x4c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fmuls    f1, f26, f26
	lfs      f2, 0x40(r1)
	fmuls    f0, f30, f30
	fsubs    f2, f2, f28
	fmadds   f1, f25, f25, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802B09B8
	lfs      f0, lbl_8051C190@sda21(r2)
	fabs     f2, f27
	lfs      f1, lbl_8051C18C@sda21(r2)
	fmuls    f0, f0, f29
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_802B09B8
	li       r29, 1

lbl_802B09B8:
	clrlwi.  r0, r29, 0x18
	beq      lbl_802B09D4
	li       r0, 7
	mr       r3, r31
	stw      r0, 0x2dc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802B0A80

lbl_802B09D4:
	mr       r4, r31
	addi     r3, r1, 0x8c
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x80
	lwz      r12, 0(r28)
	lfs      f25, 0x8c(r1)
	lwz      r12, 8(r12)
	lfs      f26, 0x94(r1)
	mtctr    r12
	bctrl
	lfs      f0, 0x88(r1)
	lfs      f1, 0x80(r1)
	fsubs    f2, f26, f0
	lwz      r3, 0xc0(r31)
	fsubs    f3, f25, f1
	lfs      f0, 0x5b4(r3)
	fmuls    f1, f2, f2
	fmuls    f0, f0, f0
	fmadds   f1, f3, f3, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802B0A4C
	li       r0, 7
	mr       r3, r31
	stw      r0, 0x2dc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802B0A80

lbl_802B0A4C:
	li       r0, 5
	mr       r3, r31
	stw      r0, 0x2dc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802B0A80

lbl_802B0A60:
	lfs      f1, 0x2c4(r31)
	lfs      f0, lbl_8051C180@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802B0A80
	li       r0, 5
	mr       r3, r31
	stw      r0, 0x2dc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802B0A80:
	lwz      r0, 0x1e0(r31)
	rlwinm.  r0, r0, 0, 0xb, 0xb
	beq      lbl_802B0AB0
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 8
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802B0B64

lbl_802B0AB0:
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x844(r3)
	fcmpo    cr0, f31, f0
	bgt      lbl_802B0AD0
	lfs      f1, 0x2c4(r31)
	lfs      f0, lbl_8051C184@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802B0B00

lbl_802B0AD0:
	mr       r3, r31
	bl       getNextStateOnHeight__Q34Game9BombSarai3ObjFv
	or.      r5, r3, r3
	blt      lbl_802B0B00
	lwz      r12, 0(r30)
	mr       r3, r30
	mr       r4, r31
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802B0B64

lbl_802B0B00:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c4(r31)
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2c8(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c8(r31)
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802B0B64
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_802B0B64
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2dc(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802B0B64:
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
	psq_l    f25, 184(r1), 0, qr0
	lfd      f25, 0xb0(r1)
	lwz      r31, 0xac(r1)
	lwz      r30, 0xa8(r1)
	lwz      r29, 0xa4(r1)
	lwz      r0, 0x124(r1)
	lwz      r28, 0xa0(r1)
	mtlr     r0
	addi     r1, r1, 0x120
	blr
	*/
}

/**
 * @note Address: 0x802B0BBC
 * @note Size: 0x30
 */
void StateBombWait::cleanup(EnemyBase* enemy)
{
	enemy->disableEvent(0, EB_NoInterrupt);
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x802B0BEC
 * @note Size: 0x6C
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sarai = OBJ(enemy);
	sarai->enableEvent(0, EB_Untargetable);
	sarai->mNextState  = BOMBSARAI_NULL;
	sarai->mStateTimer = 0.0f;
	sarai->setRandTarget();
	sarai->mTargetVelocity = Vector3f(0.0f);
	sarai->startMotion(BOMBSARAIANIM_Run, nullptr);
}

/**
 * @note Address: 0x802B0C58
 * @note Size: 0x1CC
 */
void StateMove::exec(EnemyBase* enemy)
{
	Obj* sarai = OBJ(enemy);
	f32 height = sarai->setHeightVelocity(false);
	if (!sarai->isFinishMotion()) {
		Creature* target = sarai->getAttackablePikmin();
		if (target) {
			sarai->mNextState = BOMBSARAI_Supply;
			sarai->finishMotion();
		} else {
			sarai->mStateTimer += sys->mDeltaTime;

			Vector3f pos       = sarai->getPosition();
			Vector3f targetPos = Vector3f(sarai->mTargetPosition);
			if (sarai->mStateTimer > 5.0f || sqrDistanceXZ(pos, targetPos) < 625.0f) {
				sarai->mNextState = BOMBSARAI_Wait;
				sarai->finishMotion();
			}

			EnemyFunc::walkToTarget(sarai, targetPos, CG_GENERALPARMS(sarai).mMoveSpeed.mValue, CG_GENERALPARMS(sarai).mTurnSpeed.mValue,
			                        CG_GENERALPARMS(sarai).mMaxTurnAngle.mValue);
		}
	} else {
		sarai->mTargetVelocity = Vector3f(0.0f);
	}

	if (height > CG_PROPERPARMS(sarai).mTransitHeight.mValue || sarai->mStateTimer > 5.0f) {
		StateID stateID = sarai->getNextStateOnHeight();
		if (stateID >= 0) {
			transit(sarai, stateID, nullptr);
			return;
		}
	}

	if (sarai->mCurAnim->mIsPlaying && sarai->mCurAnim->mType == KEYEVENT_END) {
		transit(sarai, sarai->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x802B0E24
 * @note Size: 0x4
 */
void StateMove::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802B0E28
 * @note Size: 0x80
 */
void StateBombMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sarai = OBJ(enemy);
	sarai->enableEvent(0, EB_Untargetable);
	sarai->enableEvent(0, EB_NoInterrupt);
	sarai->mNextState  = BOMBSARAI_NULL;
	sarai->mStateTimer = 0.0f;
	sarai->setRandTarget();
	sarai->setEmotionExcitement();
	sarai->mTargetVelocity = Vector3f(0.0f);
	sarai->startMotion(BOMBSARAIANIM_BombRun, nullptr);
}

/**
 * @note Address: 0x802B0EA8
 * @note Size: 0x4E4
 */
void StateBombMove::exec(EnemyBase* enemy)
{
	Obj* sarai       = OBJ(enemy);
	f32 height       = sarai->setHeightVelocity(false);
	Creature* target = sarai->getAttackablePikmin();
	Vector3f targetPos;
	Vector3f saraiPos = sarai->getPosition();
	if (sarai->mBombCarryTimer > 15.0f) {
		sarai->mNextState = BOMBSARAI_Release;
		sarai->finishMotion();
	} else if (target) {
		f32 minRange, maxRange, angleDist;
		minRange  = CG_GENERALPARMS(sarai).mMaxAttackAngle(); // f29
		maxRange  = CG_GENERALPARMS(sarai).mMaxAttackRange(); // f30
		angleDist = sarai->getAngDist(target);

		if (sarai->isTargetAttackable(target, angleDist, maxRange, minRange)) {
			sarai->mNextState = BOMBSARAI_Release;
			sarai->finishMotion();
		} else {
			targetPos = target->getPosition();
			if (sqrDistanceXZ(saraiPos, targetPos) < SQUARE(CG_GENERALPARMS(sarai).mAttackRadius())) {
				sarai->mNextState = BOMBSARAI_Release;
				sarai->finishMotion();
			}
		}
	} else {
		targetPos = Vector3f(sarai->mTargetPosition);

		if (sarai->mStateTimer > 5.0f || sqrDistanceXZ(saraiPos, targetPos) < 625.0f) {
			sarai->mNextState = BOMBSARAI_BombMove;
			sarai->finishMotion();
		}
	}

	if (sarai->isFinishMotion()) {
		sarai->mTargetVelocity = Vector3f(0.0f);
	} else {
		EnemyFunc::walkToTarget(sarai, targetPos, CG_GENERALPARMS(sarai).mMoveSpeed(), CG_GENERALPARMS(sarai).mTurnSpeed(),
		                        CG_GENERALPARMS(sarai).mMaxTurnAngle());
	}

	if (sarai->isEvent(0, EB_BitterQueued)) {
		transit(sarai, BOMBSARAI_Fall, nullptr);
		return;
	}

	if (height > CG_PROPERPARMS(sarai).mTransitHeight() || sarai->mStateTimer > 5.0f) {
		StateID stateID = sarai->getNextStateOnHeight();
		if (stateID >= 0) {
			transit(sarai, stateID, nullptr);
			return;
		}
	}

	sarai->mStateTimer += sys->mDeltaTime;
	sarai->mBombCarryTimer += sys->mDeltaTime;

	if (sarai->mCurAnim->mIsPlaying && sarai->mCurAnim->mType == KEYEVENT_END) {
		transit(sarai, sarai->mNextState, nullptr);
	}
	/*
	stwu     r1, -0x150(r1)
	mflr     r0
	stw      r0, 0x154(r1)
	stfd     f31, 0x140(r1)
	psq_st   f31, 328(r1), 0, qr0
	stfd     f30, 0x130(r1)
	psq_st   f30, 312(r1), 0, qr0
	stfd     f29, 0x120(r1)
	psq_st   f29, 296(r1), 0, qr0
	stfd     f28, 0x110(r1)
	psq_st   f28, 280(r1), 0, qr0
	stfd     f27, 0x100(r1)
	psq_st   f27, 264(r1), 0, qr0
	stfd     f26, 0xf0(r1)
	psq_st   f26, 248(r1), 0, qr0
	stfd     f25, 0xe0(r1)
	psq_st   f25, 232(r1), 0, qr0
	stfd     f24, 0xd0(r1)
	psq_st   f24, 216(r1), 0, qr0
	stfd     f23, 0xc0(r1)
	psq_st   f23, 200(r1), 0, qr0
	stw      r31, 0xbc(r1)
	stw      r30, 0xb8(r1)
	stw      r29, 0xb4(r1)
	stw      r28, 0xb0(r1)
	mr       r31, r4
	mr       r30, r3
	li       r4, 0
	mr       r3, r31
	bl       setHeightVelocity__Q34Game9BombSarai3ObjFb
	fmr      f31, f1
	mr       r3, r31
	bl       getAttackablePikmin__Q34Game9BombSarai3ObjFv
	lwz      r12, 0(r31)
	mr       r28, r3
	mr       r4, r31
	addi     r3, r1, 0x8c
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x2c8(r31)
	lfs      f0, lbl_8051C188@sda21(r2)
	lfs      f28, 0x8c(r1)
	fcmpo    cr0, f1, f0
	lfs      f27, 0x94(r1)
	ble      lbl_802B0F74
	li       r0, 7
	mr       r3, r31
	stw      r0, 0x2dc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802B1200

lbl_802B0F74:
	cmplwi   r28, 0
	beq      lbl_802B11AC
	mr       r4, r28
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r28)
	addi     r3, r1, 0x68
	lfs      f29, 0x58c(r5)
	lwz      r12, 8(r12)
	lfs      f30, 0x564(r5)
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
	fmr      f23, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f23
	bl       angDist__Fff
	mr       r4, r31
	fmr      f25, f1
	lwz      r12, 0(r31)
	addi     r3, r1, 0x14
	li       r29, 0
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 8
	lwz      r12, 0(r28)
	lfs      f26, 0x14(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 8(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x2c
	fsubs    f23, f0, f26
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x20
	lwz      r12, 0(r28)
	lfs      f26, 0x30(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x24(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x44
	fsubs    f24, f0, f26
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x38
	lwz      r12, 0(r28)
	lfs      f26, 0x4c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fmuls    f1, f24, f24
	lfs      f2, 0x40(r1)
	fmuls    f0, f30, f30
	fsubs    f2, f2, f26
	fmadds   f1, f23, f23, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802B1128
	lfs      f0, lbl_8051C190@sda21(r2)
	fabs     f2, f25
	lfs      f1, lbl_8051C18C@sda21(r2)
	fmuls    f0, f0, f29
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_802B1128
	li       r29, 1

lbl_802B1128:
	clrlwi.  r0, r29, 0x18
	beq      lbl_802B1144
	li       r0, 7
	mr       r3, r31
	stw      r0, 0x2dc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802B1200

lbl_802B1144:
	mr       r4, r28
	addi     r3, r1, 0x80
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x80(r1)
	lfs      f1, 0x88(r1)
	lfs      f0, 0x84(r1)
	fsubs    f4, f28, f2
	fsubs    f3, f27, f1
	stfs     f2, 0x98(r1)
	stfs     f0, 0x9c(r1)
	fmuls    f0, f3, f3
	stfs     f1, 0xa0(r1)
	lwz      r3, 0xc0(r31)
	fmadds   f1, f4, f4, f0
	lfs      f0, 0x5b4(r3)
	fmuls    f0, f0, f0
	fcmpo    cr0, f1, f0
	bge      lbl_802B1200
	li       r0, 7
	mr       r3, r31
	stw      r0, 0x2dc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802B1200

lbl_802B11AC:
	lfs      f1, 0x2d0(r31)
	lfs      f3, 0x2d4(r31)
	lfs      f2, 0x2cc(r31)
	lfs      f0, lbl_8051C184@sda21(r2)
	stfs     f2, 0x98(r1)
	stfs     f1, 0x9c(r1)
	stfs     f3, 0xa0(r1)
	lfs      f1, 0x2c4(r31)
	fcmpo    cr0, f1, f0
	bgt      lbl_802B11F0
	fsubs    f1, f27, f3
	lfs      f0, lbl_8051C194@sda21(r2)
	fsubs    f2, f28, f2
	fmuls    f1, f1, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802B1200

lbl_802B11F0:
	li       r0, 5
	mr       r3, r31
	stw      r0, 0x2dc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802B1200:
	mr       r3, r31
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802B1224
	lfs      f0, lbl_8051C170@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_802B1240

lbl_802B1224:
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	addi     r4, r1, 0x98
	lfs      f1, 0x2e4(r5)
	lfs      f2, 0x30c(r5)
	lfs      f3, 0x334(r5)
	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff"

lbl_802B1240:
	lwz      r0, 0x1e0(r31)
	rlwinm.  r0, r0, 0, 0xb, 0xb
	beq      lbl_802B1270
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 8
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802B1324

lbl_802B1270:
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x844(r3)
	fcmpo    cr0, f31, f0
	bgt      lbl_802B1290
	lfs      f1, 0x2c4(r31)
	lfs      f0, lbl_8051C184@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802B12C0

lbl_802B1290:
	mr       r3, r31
	bl       getNextStateOnHeight__Q34Game9BombSarai3ObjFv
	or.      r5, r3, r3
	blt      lbl_802B12C0
	lwz      r12, 0(r30)
	mr       r3, r30
	mr       r4, r31
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802B1324

lbl_802B12C0:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c4(r31)
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2c8(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c8(r31)
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802B1324
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_802B1324
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2dc(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802B1324:
	psq_l    f31, 328(r1), 0, qr0
	lfd      f31, 0x140(r1)
	psq_l    f30, 312(r1), 0, qr0
	lfd      f30, 0x130(r1)
	psq_l    f29, 296(r1), 0, qr0
	lfd      f29, 0x120(r1)
	psq_l    f28, 280(r1), 0, qr0
	lfd      f28, 0x110(r1)
	psq_l    f27, 264(r1), 0, qr0
	lfd      f27, 0x100(r1)
	psq_l    f26, 248(r1), 0, qr0
	lfd      f26, 0xf0(r1)
	psq_l    f25, 232(r1), 0, qr0
	lfd      f25, 0xe0(r1)
	psq_l    f24, 216(r1), 0, qr0
	lfd      f24, 0xd0(r1)
	psq_l    f23, 200(r1), 0, qr0
	lfd      f23, 0xc0(r1)
	lwz      r31, 0xbc(r1)
	lwz      r30, 0xb8(r1)
	lwz      r29, 0xb4(r1)
	lwz      r0, 0x154(r1)
	lwz      r28, 0xb0(r1)
	mtlr     r0
	addi     r1, r1, 0x150
	blr
	*/
}

/**
 * @note Address: 0x802B138C
 * @note Size: 0x30
 */
void StateBombMove::cleanup(EnemyBase* enemy)
{
	enemy->disableEvent(0, EB_NoInterrupt);
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x802B13BC
 * @note Size: 0x80
 */
void StateSupply::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sarai = OBJ(enemy);
	sarai->enableEvent(0, EB_Untargetable);
	sarai->enableEvent(0, EB_NoInterrupt);
	sarai->mNextState = BOMBSARAI_NULL;
	sarai->supplyBomb();
	sarai->setEmotionExcitement();
	sarai->mTargetVelocity = Vector3f(0.0f);
	sarai->startMotion(BOMBSARAIANIM_Supply, nullptr);
	sarai->createSupliEffect();
}

/**
 * @note Address: 0x802B143C
 * @note Size: 0xAC
 */
void StateSupply::exec(EnemyBase* enemy)
{
	Obj* sarai = OBJ(enemy);
	sarai->setHeightVelocity(false);
	if (sarai->mCurAnim->mIsPlaying && sarai->mCurAnim->mType == KEYEVENT_END) {
		StateID nextState = sarai->getNextStateOnHeight();
		if (nextState >= 0) {
			transit(sarai, nextState, nullptr);
		} else {
			transit(sarai, BOMBSARAI_BombMove, nullptr);
		}
	}
}

/**
 * @note Address: 0x802B14E8
 * @note Size: 0x38
 */
void StateSupply::cleanup(EnemyBase* enemy)
{
	Obj* sarai = OBJ(enemy);
	sarai->disableEvent(0, EB_NoInterrupt);
	sarai->mBombCarryTimer = 0.0f;
	sarai->setEmotionCaution();
}

/**
 * @note Address: 0x802B1520
 * @note Size: 0x70
 */
void StateRelease::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sarai = OBJ(enemy);
	sarai->enableEvent(0, EB_Untargetable);
	sarai->enableEvent(0, EB_NoInterrupt);
	sarai->mNextState      = BOMBSARAI_NULL;
	sarai->mTargetVelocity = Vector3f(0.0f);
	sarai->setEmotionExcitement();
	sarai->startMotion(BOMBSARAIANIM_Release, nullptr);
}

/**
 * @note Address: 0x802B1590
 * @note Size: 0x184
 */
void StateRelease::exec(EnemyBase* enemy)
{
	Obj* sarai = OBJ(enemy);
	sarai->setHeightVelocity(false);

	if (sarai->mCurAnim->mIsPlaying) {
		if (sarai->mCurAnim->mType == KEYEVENT_2) {
			const f32 angle = sarai->getFaceDir();
			Vector3f vel(50.0f * sinf(angle), 100.0f, 50.0f * cosf(angle));
			sarai->throwBomb(vel);

			sarai->disableEvent(0, EB_NoInterrupt);

		} else if (sarai->mCurAnim->mType == KEYEVENT_END) {
			StateID stateID = sarai->getNextStateOnHeight();
			if (stateID >= 0) {
				transit(sarai, stateID, nullptr);
				return;
			}

			transit(sarai, BOMBSARAI_Wait, nullptr);
		}
	}
}

/**
 * @note Address: 0x802B1714
 * @note Size: 0x30
 */
void StateRelease::cleanup(EnemyBase* enemy)
{
	enemy->disableEvent(0, EB_NoInterrupt);
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x802B1744
 * @note Size: 0xC4
 */
void StateFall::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sarai         = OBJ(enemy);
	sarai->mStateTimer = 0.0f;
	sarai->enableEvent(0, EB_NoInterrupt);
	sarai->mTargetVelocity = Vector3f(0.0f);
	sarai->disableEvent(0, EB_Untargetable);
	sarai->setEmotionExcitement();
	sarai->startMotion(BOMBSARAIANIM_Fall, nullptr);

	Vector3f pos = sarai->getPosition();
	cameraMgr->startVibration(VIBTYPE_LightSlowShort, pos, CAMNAVI_Both);
	rumbleMgr->startRumble(RUMBLETYPE_Fixed11, pos, RUMBLEID_Both);
}

/**
 * @note Address: 0x802B1808
 * @note Size: 0x2D8
 */
void StateFall::exec(EnemyBase* enemy)
{
	Obj* sarai        = OBJ(enemy);
	Vector3f saraiPos = sarai->getPosition();
	f32 minY          = mapMgr->getMinY(saraiPos);
	if (saraiPos.y - minY < 35.0f || sarai->mStateTimer > 1.0f) {
		sarai->finishMotion();
	}

	sarai->mStateTimer += sys->mDeltaTime;

	if (sarai->mCurAnim->mIsPlaying) {
		if (sarai->mCurAnim->mType == KEYEVENT_2) {
			const f32 angle = sarai->getFaceDir();
			Vector3f vel(100.0f * sinf(angle), 300.0f, 100.0f * cosf(angle));
			sarai->throwBomb(vel);
			sarai->disableEvent(0, EB_NoInterrupt);

		} else if (sarai->mCurAnim->mType == KEYEVENT_3) {
			sarai->createBalloonEffect(0);

		} else if (sarai->mCurAnim->mType == KEYEVENT_4) {
			sarai->createBalloonEffect(1);

		} else if (sarai->mCurAnim->mType == KEYEVENT_5) {
			sarai->createBalloonEffect(2);

		} else if (sarai->mCurAnim->mType == KEYEVENT_6) {
			sarai->createBalloonEffect(3);

		} else if (sarai->mCurAnim->mType == KEYEVENT_7) {
			sarai->createBalloonEffect(4);

		} else if (sarai->mCurAnim->mType == KEYEVENT_8) {
			Vector3f pos = sarai->getPosition();
			rumbleMgr->startRumble(RUMBLETYPE_Fixed11, pos, RUMBLEID_Both);
			sarai->createDownEffect(0.9f);

		} else if (sarai->mCurAnim->mType == KEYEVENT_END) {
			if (sarai->mHealth <= 0.0f) {
				transit(sarai, BOMBSARAI_Dead, nullptr);
			} else {
				transit(sarai, BOMBSARAI_Damage, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x802B1AE0
 * @note Size: 0x30
 */
void StateFall::cleanup(EnemyBase* enemy)
{
	enemy->disableEvent(0, EB_NoInterrupt);
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x802B1B10
 * @note Size: 0x54
 */
void StateTakeOff1::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mFlickTimer = 0.0f;
	enemy->disableEvent(0, EB_Untargetable);
	enemy->setEmotionExcitement();
	enemy->startMotion(BOMBSARAIANIM_TakeOff1, nullptr);
}

/**
 * @note Address: 0x802B1B64
 * @note Size: 0x110
 */
void StateTakeOff1::exec(EnemyBase* enemy)
{
	Obj* sarai = OBJ(enemy);
	f32 height = 0.0f;
	if (sarai->getMotionFrame() > 45.0f) {
		sarai->enableEvent(0, EB_Untargetable);
		height = sarai->setHeightVelocity(false);
	}

	if (sarai->mHealth <= 0.0f || height > CG_PROPERPARMS(sarai).mTransitHeight.mValue) {
		StateID stateID = sarai->getNextStateOnHeight();
		if (stateID >= 0) {
			transit(sarai, stateID, nullptr);
			return;
		}

		sarai->finishMotion();
	}

	if (sarai->mCurAnim->mIsPlaying && sarai->mCurAnim->mType == KEYEVENT_END) {
		transit(sarai, BOMBSARAI_Move, nullptr);
	}
}

/**
 * @note Address: 0x802B1C74
 * @note Size: 0x24
 */
void StateTakeOff1::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x802B1C98
 * @note Size: 0x54
 */
void StateTakeOff2::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mFlickTimer = 0.0f;
	enemy->disableEvent(0, EB_Untargetable);
	enemy->setEmotionExcitement();
	enemy->startMotion(BOMBSARAIANIM_TakeOff2, nullptr);
}

/**
 * @note Address: 0x802B1CEC
 * @note Size: 0x110
 */
void StateTakeOff2::exec(EnemyBase* enemy)
{
	Obj* sarai = OBJ(enemy);
	f32 height = 0.0f;
	if (sarai->getMotionFrame() > 21.0f) {
		sarai->enableEvent(0, EB_Untargetable);
		height = sarai->setHeightVelocity(true);
	}

	if (sarai->mHealth <= 0.0f || height > CG_PROPERPARMS(sarai).mTransitHeight.mValue) {
		StateID stateID = sarai->getNextStateOnHeight();
		if (stateID >= 0) {
			transit(sarai, stateID, nullptr);
			return;
		}

		sarai->finishMotion();
	}

	if (sarai->mCurAnim->mIsPlaying && sarai->mCurAnim->mType == KEYEVENT_END) {
		transit(sarai, BOMBSARAI_Move, nullptr);
	}
}

/**
 * @note Address: 0x802B1DFC
 * @note Size: 0x24
 */
void StateTakeOff2::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x802B1E20
 * @note Size: 0x4C
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->enableEvent(0, EB_Untargetable);
	enemy->setEmotionExcitement();
	enemy->startMotion(BOMBSARAIANIM_Flick, nullptr);
}

/**
 * @note Address: 0x802B1E6C
 * @note Size: 0xE0
 */
void StateFlick::exec(EnemyBase* enemy)
{
	Obj* sarai = OBJ(enemy);
	sarai->setHeightVelocity(false);

	if (sarai->mCurAnim->mIsPlaying) {
		if (sarai->mCurAnim->mType == KEYEVENT_2) {
			EnemyFunc::flickStickPikmin(sarai, CG_GENERALPARMS(sarai).mShakeChance.mValue, CG_GENERALPARMS(sarai).mShakeKnockback.mValue,
			                            CG_GENERALPARMS(sarai).mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
			sarai->mFlickTimer = 0.0f;

		} else if (sarai->mCurAnim->mType == KEYEVENT_END) {
			StateID stateID = sarai->getNextStateOnHeight();
			if (stateID >= 0) {
				transit(sarai, stateID, nullptr);
				return;
			}

			transit(sarai, BOMBSARAI_Move, nullptr);
		}
	}
}

/**
 * @note Address: 0x802B1F4C
 * @note Size: 0x24
 */
void StateFlick::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x802B1F70
 * @note Size: 0x58
 */
void StateBombFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->enableEvent(0, EB_Untargetable);
	enemy->enableEvent(0, EB_NoInterrupt);
	enemy->setEmotionExcitement();
	enemy->startMotion(BOMBSARAIANIM_BombFlick, nullptr);
}

/**
 * @note Address: 0x802B1FC8
 * @note Size: 0x110
 */
void StateBombFlick::exec(EnemyBase* enemy)
{
	Obj* sarai = OBJ(enemy);
	sarai->setHeightVelocity(false);

	if (sarai->isEvent(0, EB_BitterQueued)) {
		transit(sarai, BOMBSARAI_Fall, nullptr);
		return;
	}

	if (sarai->mCurAnim->mIsPlaying) {
		if (sarai->mCurAnim->mType == KEYEVENT_2) {
			EnemyFunc::flickStickPikmin(sarai, CG_GENERALPARMS(sarai).mShakeChance.mValue, CG_GENERALPARMS(sarai).mShakeKnockback.mValue,
			                            CG_GENERALPARMS(sarai).mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
			sarai->mFlickTimer = 0.0f;

		} else if (sarai->mCurAnim->mType == KEYEVENT_END) {
			StateID stateID = sarai->getNextStateOnHeight();
			if (stateID >= 0) {
				transit(sarai, stateID, nullptr);
				return;
			}

			transit(sarai, BOMBSARAI_BombMove, nullptr);
		}
	}
}

/**
 * @note Address: 0x802B20D8
 * @note Size: 0x30
 */
void StateBombFlick::cleanup(EnemyBase* enemy)
{
	enemy->disableEvent(0, EB_NoInterrupt);
	enemy->setEmotionCaution();
}
} // namespace BombSarai
} // namespace Game

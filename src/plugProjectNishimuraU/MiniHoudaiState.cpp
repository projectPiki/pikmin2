#include "Game/Entities/MiniHoudai.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "Game/EnemyFunc.h"
#include "nans.h"

namespace Game {
namespace MiniHoudai {

static const int unusedArray[] = { 0, 0, 0 };
static const char unusedName[] = "246-MiniHoudaiState";

/**
 * @note Address: 0x802E7F4C
 * @note Size: 0x3D8
 */
void FSM::init(EnemyBase* enemy)
{
	create(MINIHOUDAI_StateCount);
	registerState(new StateDead);
	registerState(new StateRebirth);
	registerState(new StateLost);
	registerState(new StateAttack);
	registerState(new StateFlick);
	registerState(new StateTurn);
	registerState(new StateTurnHome);
	registerState(new StateTurnPath);
	registerState(new StateWalk);
	registerState(new StateWalkHome);
	registerState(new StateWalkPath);
}

/**
 * @note Address: 0x802E8324
 * @note Size: 0x58
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* mini = OBJ(enemy);
	mini->deathProcedure();
	mini->mTargetVelocity = Vector3f(0.0f);
	mini->startMotion(MINIHOUDAIANIM_Dead, nullptr);
	mini->createDeadLightEffect();
}

/**
 * @note Address: 0x802E837C
 * @note Size: 0x10C
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* mini = OBJ(enemy);
	if (mini->mCurAnim->mIsPlaying) {
		if (mini->mCurAnim->mType == KEYEVENT_2) {
			mini->createDeadBombEmitEffect();
			mini->createDownEffect(1.0f);
			mini->getJAIObject()->startSound(PSSE_EN_MINIHOU_BOMB, 0);

			Vector3f pos = mini->getPosition();
			cameraMgr->startVibration(VIBTYPE_Boom, pos, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed11, pos, RUMBLEID_Both);

		} else if (mini->mCurAnim->mType == KEYEVENT_3) {
			mini->createDownEffect(0.75f);

		} else if (mini->mCurAnim->mType == KEYEVENT_END) {
			mini->kill(nullptr);
		}
	}
}

/**
 * @note Address: 0x802E8488
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802E848C
 * @note Size: 0x58
 */
void StateRebirth::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* mini        = OBJ(enemy);
	mini->mNextState = MINIHOUDAI_NULL;
	mini->disableEvent(0, EB_NoInterrupt);
	mini->mTargetCreature = nullptr;
	mini->mTargetVelocity = Vector3f(0.0f);
	mini->startMotion(MINIHOUDAIANIM_Rebirth, nullptr);
}

/**
 * @note Address: 0x802E84E4
 * @note Size: 0x3A8
 */
void StateRebirth::exec(EnemyBase* enemy)
{
	Obj* mini = OBJ(enemy);

	if (mini->mCurAnim->mIsPlaying) {
		if (mini->mCurAnim->mType == KEYEVENT_2) {
			EnemyFunc::flickStickPikmin(mini, CG_GENERALPARMS(mini).mShakeChance(), CG_GENERALPARMS(mini).mShakeKnockback(),
			                            CG_GENERALPARMS(mini).mShakeDamage(), FLICK_BACKWARD_ANGLE, nullptr);
			EnemyFunc::flickNearbyPikmin(mini, CG_GENERALPARMS(mini).mShakeRange(), CG_GENERALPARMS(mini).mShakeKnockback(),
			                             CG_GENERALPARMS(mini).mShakeDamage(), FLICK_BACKWARD_ANGLE, nullptr);
			EnemyFunc::flickNearbyNavi(mini, CG_GENERALPARMS(mini).mShakeRange(), CG_GENERALPARMS(mini).mShakeKnockback(),
			                           CG_GENERALPARMS(mini).mShakeDamage(), FLICK_BACKWARD_ANGLE, nullptr);
			mini->mFlickTimer = 0.0f;
			mini->enableEvent(0, EB_NoInterrupt);

		} else if (mini->mCurAnim->mType == KEYEVENT_3) {
			mini->disableEvent(0, EB_NoInterrupt);
			mini->createDownEffect(0.75f);

		} else if (mini->mCurAnim->mType == KEYEVENT_END) {
			if (mini->mHealth <= 0.0f) {
				transit(mini, MINIHOUDAI_Dead, nullptr);
				return;
			}

			if (EnemyFunc::isStartFlick(mini, false)) {
				transit(mini, MINIHOUDAI_Flick, nullptr);
				return;
			}

			if (mini->isAttackableTarget()) {
				transit(mini, MINIHOUDAI_Attack, nullptr);
				return;
			}

			Creature* target = mini->getSearchedTarget();
			if (target) {
				f32 angleSep  = mini->getCreatureViewAngle(target);
				f32 maxAttack = CG_GENERALPARMS(mini).mMaxAttackAngle();
				if (absF(angleSep) <= TORADIANS(maxAttack)) {
					transit(mini, MINIHOUDAI_Walk, nullptr);
					return;
				}

				transit(mini, MINIHOUDAI_Turn, nullptr);
				return;
			}

			Vector3f targetPos = mini->mWalkTargetPosition;
			f32 angleSep       = mini->getCreatureViewAngle(targetPos);
			if (absF(angleSep) <= QUARTER_PI) {
				transit(mini, MINIHOUDAI_WalkPath, nullptr);
			} else {
				transit(mini, MINIHOUDAI_TurnPath, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x802E888C
 * @note Size: 0x10
 */
void StateRebirth::cleanup(EnemyBase* enemy) { enemy->disableEvent(0, EB_NoInterrupt); }

/**
 * @note Address: 0x802E889C
 * @note Size: 0x4C
 */
void StateLost::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* mini             = OBJ(enemy);
	mini->mNextState      = MINIHOUDAI_NULL;
	mini->mTargetCreature = nullptr;
	mini->mTargetVelocity = Vector3f(0.0f);
	mini->startMotion(MINIHOUDAIANIM_Search, nullptr);
}

/**
 * @note Address: 0x802E88E8
 * @note Size: 0x50C
 */
void StateLost::exec(EnemyBase* enemy)
{
	Obj* mini = OBJ(enemy);
	if (mini->mCurAnim->mIsPlaying && mini->mCurAnim->mType == KEYEVENT_END) {
		if (mini->mHealth <= 0.0f) {
			transit(mini, MINIHOUDAI_Dead, nullptr);
			return;
		}

		if (EnemyFunc::isStartFlick(mini, false)) {
			transit(mini, MINIHOUDAI_Flick, nullptr);
			return;
		}

		Vector3f miniPos = mini->getPosition();
		Vector3f homePos = mini->mHomePosition;

		f32 homeDist = sqrDistanceXZ(miniPos, homePos);
		if (homeDist > SQUARE(CG_GENERALPARMS(mini).mTerritoryRadius())) {
			f32 angleSep = mini->getCreatureViewAngle(homePos);

			if (absF(angleSep) <= QUARTER_PI) {
				transit(mini, MINIHOUDAI_WalkHome, nullptr);
				return;
			} else {
				transit(mini, MINIHOUDAI_TurnHome, nullptr);
				return;
			}
		}

		if (mini->isAttackableTarget()) {
			transit(mini, MINIHOUDAI_Attack, nullptr);
			return;
		}

		Creature* target = mini->getSearchedTarget();
		if (target) {
			f32 angleSep  = mini->getCreatureViewAngle(target);
			f32 maxAttack = CG_GENERALPARMS(mini).mMaxAttackAngle();
			if (absF(angleSep) <= TORADIANS(maxAttack)) {
				transit(mini, MINIHOUDAI_Walk, nullptr);
				return;
			}

			transit(mini, MINIHOUDAI_Turn, nullptr);
			return;
		}

		if (homeDist < SQUARE(CG_GENERALPARMS(mini).mHomeRadius())) {
			Vector3f pathPos = mini->mWalkTargetPosition;
			f32 angleSep     = mini->getCreatureViewAngle(pathPos);
			if (absF(angleSep) <= QUARTER_PI) {
				transit(mini, MINIHOUDAI_WalkPath, nullptr);
				return;
			} else {
				transit(mini, MINIHOUDAI_TurnPath, nullptr);
				return;
			}
		}

		f32 angleSep = mini->getCreatureViewAngle(homePos);
		if (absF(angleSep) <= QUARTER_PI) {
			transit(mini, MINIHOUDAI_WalkHome, nullptr);
			return;
		} else {
			transit(mini, MINIHOUDAI_TurnHome, nullptr);
			return;
		}
	}
}

/**
 * @note Address: 0x802E8DF4
 * @note Size: 0x4
 */
void StateLost::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802E8DF8
 * @note Size: 0x60
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* mini               = OBJ(enemy);
	mini->mNextState        = MINIHOUDAI_NULL;
	mini->mAttackWaitTimer  = 0.0f;
	mini->mHealthGaugeTimer = 0.0f;
	mini->mTargetVelocity   = Vector3f(0.0f);
	mini->setEmotionExcitement();
	mini->startMotion(MINIHOUDAIANIM_Attack, nullptr);
}

/**
 * @note Address: 0x802E8E58
 * @note Size: 0x6CC
 */
void StateAttack::exec(EnemyBase* enemy)
{
	Obj* mini = OBJ(enemy);
	if (mini->isStopMotion()) {
		if (mini->isFinishShotGun()) {
			if (mini->isShotGunLockOn() && mini->mAttackWaitTimer > 0.0f) {
				mini->mAttackWaitTimer = 0.0f;
				mini->startMotion();
			}
		} else if (mini->isShotGunLockOn() && mini->mAttackWaitTimer > 0.0f) {
			mini->mAttackWaitTimer = 0.0f;
			mini->startMotion();
		}
	}

	if (mini->isShotGunRotation()) {
		mini->setShotGunTargetPosition();
	}

	mini->mAttackWaitTimer += sys->mDeltaTime;

	if (mini->mHealth <= 0.0f) {
		if (mini->isStopMotion()) {
			mini->startMotion();
		}
		mini->finishMotion();
	} else if (EnemyFunc::isStartFlick(mini, false)) {
		if (mini->isStopMotion()) {
			mini->startMotion();
		}

		mini->finishMotion();
	}

	if (mini->mCurAnim->mIsPlaying) {
		if (mini->mCurAnim->mType == KEYEVENT_2) {
			mini->mAttackWaitTimer = 0.0f;
			mini->stopMotion();
			mini->startShotGunRotation();
			mini->startChargeEffect();
		} else if (mini->mCurAnim->mType == KEYEVENT_3) {
			mini->createSmokeLargeEffect();
			mini->finishChargeEffect();

		} else if (mini->mCurAnim->mType == KEYEVENT_4) {
			if (!mini->isFinishMotion() || !(mini->mHealth <= 0.0f)) {
				mini->emitShotGun();
			}

		} else if (mini->mCurAnim->mType == KEYEVENT_5) {
			mini->mAttackWaitTimer = 0.0f;
			mini->stopMotion();
			mini->finishShotGunRotation();

		} else if (mini->mCurAnim->mType == KEYEVENT_END) {
			if (mini->mHealth <= 0.0f) {
				transit(mini, MINIHOUDAI_Dead, nullptr);
				return;
			}

			if (EnemyFunc::isStartFlick(mini, false)) {
				transit(mini, MINIHOUDAI_Flick, nullptr);
				return;
			}

			Vector3f miniPos = mini->getPosition();
			Vector3f homePos = mini->mHomePosition;
			f32 dist         = sqrDistanceXZ(miniPos, homePos);
			if (dist > SQUARE(CG_GENERALPARMS(mini).mTerritoryRadius())) {
				f32 angleSep = mini->getCreatureViewAngle(homePos);
				if (absF(angleSep) <= (QUARTER_PI)) {
					transit(mini, MINIHOUDAI_WalkHome, nullptr);
					return;
				}

				transit(mini, MINIHOUDAI_TurnHome, nullptr);
				return;
			}

			if (mini->isAttackableTarget()) {
				transit(mini, MINIHOUDAI_Attack, nullptr);
				return;
			}

			Creature* target = mini->getSearchedTarget();
			if (target) {
				f32 angleSep  = mini->getCreatureViewAngle(target);
				f32 maxAttack = CG_GENERALPARMS(mini).mMaxAttackAngle();
				if (absF(angleSep) <= TORADIANS(maxAttack)) {
					transit(mini, MINIHOUDAI_Walk, nullptr);
					return;
				}

				transit(mini, MINIHOUDAI_Turn, nullptr);
				return;
			}

			if (dist < SQUARE(CG_GENERALPARMS(mini).mHomeRadius())) {
				Vector3f targetPos = mini->mWalkTargetPosition;
				f32 angleSep       = mini->getCreatureViewAngle(targetPos);

				if (absF(angleSep) <= QUARTER_PI) {
					transit(mini, MINIHOUDAI_WalkPath, nullptr);
					return;
				}
				transit(mini, MINIHOUDAI_TurnPath, nullptr);
				return;
			}

			f32 angleSep = mini->getCreatureViewAngle(homePos);
			if (absF(angleSep) <= QUARTER_PI) {
				transit(mini, MINIHOUDAI_WalkHome, nullptr);
				return;
			}

			transit(mini, MINIHOUDAI_TurnHome, nullptr);
		}
	}
}

/**
 * @note Address: 0x802E9524
 * @note Size: 0x24
 */
void StateAttack::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x802E9548
 * @note Size: 0x68
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* mini               = OBJ(enemy);
	mini->mNextState        = MINIHOUDAI_NULL;
	mini->mHealthGaugeTimer = 0.0f;
	mini->mTargetVelocity   = Vector3f(0.0f);
	mini->setEmotionExcitement();
	mini->startMotion(MINIHOUDAIANIM_Flick, nullptr);
	mini->setAnimSpeed(45.0f);
}

/**
 * @note Address: 0x802E95B0
 * @note Size: 0x544
 */
void StateFlick::exec(EnemyBase* enemy)
{
	Obj* mini = OBJ(enemy);
	if (mini->mCurAnim->mIsPlaying) {
		if (mini->mCurAnim->mType == KEYEVENT_2) {
			EnemyFunc::flickStickPikmin(mini, CG_GENERALPARMS(mini).mShakeChance(), CG_GENERALPARMS(mini).mShakeKnockback(),
			                            CG_GENERALPARMS(mini).mShakeDamage(), FLICK_BACKWARD_ANGLE, nullptr);
			EnemyFunc::flickNearbyPikmin(mini, CG_GENERALPARMS(mini).mShakeRange(), CG_GENERALPARMS(mini).mShakeKnockback(),
			                             CG_GENERALPARMS(mini).mShakeDamage(), FLICK_BACKWARD_ANGLE, nullptr);
			EnemyFunc::flickNearbyNavi(mini, CG_GENERALPARMS(mini).mShakeRange(), CG_GENERALPARMS(mini).mShakeKnockback(),
			                           CG_GENERALPARMS(mini).mShakeDamage(), FLICK_BACKWARD_ANGLE, nullptr);
			mini->mFlickTimer = 0.0f;

		} else if (mini->mCurAnim->mType == KEYEVENT_END) {
			if (mini->mHealth <= 0.0f) {
				transit(mini, MINIHOUDAI_Dead, nullptr);
				return;
			}

			Vector3f miniPos = mini->getPosition();
			Vector3f homePos = mini->mHomePosition;
			f32 dist         = sqrDistanceXZ(miniPos, homePos);
			if (dist > SQUARE(CG_GENERALPARMS(mini).mTerritoryRadius())) {
				f32 angleSep = mini->getCreatureViewAngle(homePos);
				if (absF(angleSep) <= (QUARTER_PI)) {
					transit(mini, MINIHOUDAI_WalkHome, nullptr);
					return;
				}

				transit(mini, MINIHOUDAI_TurnHome, nullptr);
				return;
			}

			if (mini->isAttackableTarget()) {
				transit(mini, MINIHOUDAI_Attack, nullptr);
				return;
			}

			Creature* target = mini->getSearchedTarget();
			if (target) {
				f32 angleSep  = mini->getCreatureViewAngle(target);
				f32 maxAttack = CG_GENERALPARMS(mini).mMaxAttackAngle();
				if (absF(angleSep) <= TORADIANS(maxAttack)) {
					transit(mini, MINIHOUDAI_Walk, nullptr);
					return;
				}

				transit(mini, MINIHOUDAI_Turn, nullptr);
				return;
			}

			if (dist < SQUARE(CG_GENERALPARMS(mini).mHomeRadius())) {
				Vector3f targetPos = mini->mWalkTargetPosition;
				f32 angleSep       = mini->getCreatureViewAngle(targetPos);

				if (absF(angleSep) <= QUARTER_PI) {
					transit(mini, MINIHOUDAI_WalkPath, nullptr);
					return;
				}
				transit(mini, MINIHOUDAI_TurnPath, nullptr);
				return;
			}

			f32 angleSep = mini->getCreatureViewAngle(homePos);
			if (absF(angleSep) <= QUARTER_PI) {
				transit(mini, MINIHOUDAI_WalkHome, nullptr);
				return;
			}

			transit(mini, MINIHOUDAI_TurnHome, nullptr);
		}
	}
}

/**
 * @note Address: 0x802E9AF4
 * @note Size: 0x3C
 */
void StateFlick::cleanup(EnemyBase* enemy)
{
	enemy->setEmotionCaution();
	enemy->setAnimSpeed(30.0f);
}

/**
 * @note Address: 0x802E9B30
 * @note Size: 0x5C
 */
void StateTurn::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* mini             = OBJ(enemy);
	mini->mUpdateTimer    = 0.0f;
	mini->mNextState      = MINIHOUDAI_NULL;
	mini->mTargetVelocity = Vector3f(0.0f);
	mini->setEmotionExcitement();
	mini->startMotion(MINIHOUDAIANIM_Turn, nullptr);
}

/**
 * @note Address: 0x802E9B8C
 * @note Size: 0x6AC
 */
void StateTurn::exec(EnemyBase* enemy)
{
	Obj* mini = OBJ(enemy);

	if (mini->mHealth <= 0.0f) {
		mini->mNextState = MINIHOUDAI_Dead;
		mini->finishMotion();
	} else if (EnemyFunc::isStartFlick(mini, false)) {
		mini->mNextState = MINIHOUDAI_Flick;
		mini->finishMotion();
	} else if (mini->isAttackableTarget()) {
		mini->mNextState = MINIHOUDAI_Attack;
		mini->finishMotion();
	} else {
		Creature* target = mini->getSearchedTarget();
		if (target) {
			mini->mHealthGaugeTimer = 0.0f;
			f32 angleSep            = mini->turnToTarget(target, CG_GENERALPARMS(mini).mTurnSpeed(), CG_GENERALPARMS(mini).mMaxTurnAngle());
			if (mini->isTargetWithinRange(target, angleSep, CG_GENERALPARMS(mini).mPrivateRadius(), CG_GENERALPARMS(mini).mSightRadius(),
			                              CG_GENERALPARMS(mini).mFov(), mini->getViewAngle())) {
				mini->mNextState = MINIHOUDAI_Lost;
				mini->finishMotion();
			} else {
				f32 maxAttack = CG_GENERALPARMS(mini).mMaxAttackAngle();
				if (absF(angleSep) <= TORADIANS(maxAttack)) {
					mini->mNextState = MINIHOUDAI_Walk;
					mini->finishMotion();
				}
			}
		} else {
			Vector3f miniPos = mini->getPosition();
			Vector3f homePos = mini->mHomePosition;
			f32 dist         = sqrDistanceXZ(miniPos, homePos);
			if (dist < SQUARE(CG_GENERALPARMS(mini).mHomeRadius())) {
				Vector3f targetPos = mini->mWalkTargetPosition;
				f32 angleSep = mini->turnToTarget(targetPos, CG_GENERALPARMS(mini).mTurnSpeed(), CG_GENERALPARMS(mini).mMaxTurnAngle());

				if (absF(angleSep) <= QUARTER_PI) {
					mini->mNextState = MINIHOUDAI_WalkPath;
					mini->finishMotion();
				} else {
					mini->mNextState = MINIHOUDAI_TurnPath;
					mini->finishMotion();
				}
			} else {
				f32 angleSep = mini->turnToTarget(homePos, CG_GENERALPARMS(mini).mTurnSpeed(), CG_GENERALPARMS(mini).mMaxTurnAngle());
				if (absF(angleSep) <= QUARTER_PI) {
					mini->mNextState = MINIHOUDAI_WalkHome;
					mini->finishMotion();
				} else {
					mini->mNextState = MINIHOUDAI_TurnHome;
					mini->finishMotion();
				}
			}
		}
	}

	if (mini->mCurAnim->mIsPlaying && mini->mCurAnim->mType == KEYEVENT_END) {
		transit(mini, mini->mNextState, nullptr);
	}
	/*
	stwu     r1, -0x140(r1)
	mflr     r0
	stw      r0, 0x144(r1)
	stfd     f31, 0x130(r1)
	psq_st   f31, 312(r1), 0, qr0
	stfd     f30, 0x120(r1)
	psq_st   f30, 296(r1), 0, qr0
	stfd     f29, 0x110(r1)
	psq_st   f29, 280(r1), 0, qr0
	stfd     f28, 0x100(r1)
	psq_st   f28, 264(r1), 0, qr0
	stfd     f27, 0xf0(r1)
	psq_st   f27, 248(r1), 0, qr0
	stfd     f26, 0xe0(r1)
	psq_st   f26, 232(r1), 0, qr0
	stfd     f25, 0xd0(r1)
	psq_st   f25, 216(r1), 0, qr0
	stfd     f24, 0xc0(r1)
	psq_st   f24, 200(r1), 0, qr0
	stw      r31, 0xbc(r1)
	stw      r30, 0xb8(r1)
	stw      r29, 0xb4(r1)
	lfs      f0, lbl_8051CF48@sda21(r2)
	mr       r31, r4
	lfs      f1, 0x200(r4)
	mr       r30, r3
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802E9C14
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EA1A0

lbl_802E9C14:
	mr       r3, r31
	li       r4, 0
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E9C3C
	li       r0, 4
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EA1A0

lbl_802E9C3C:
	mr       r3, r31
	bl       isAttackableTarget__Q34Game10MiniHoudai3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E9C60
	li       r0, 3
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EA1A0

lbl_802E9C60:
	mr       r3, r31
	bl       getSearchedTarget__Q34Game10MiniHoudai3ObjFv
	or.      r29, r3, r3
	beq      lbl_802E9F18
	lfs      f0, lbl_8051CF48@sda21(r2)
	mr       r4, r29
	addi     r3, r1, 0x38
	stfs     f0, 0x2c8(r31)
	lwz      r12, 0(r29)
	lwz      r5, 0xc0(r31)
	lwz      r12, 8(r12)
	lfs      f30, 0x334(r5)
	lfs      f29, 0x30c(r5)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x44
	lwz      r12, 0(r31)
	lfs      f24, 0x38(r1)
	lwz      r12, 8(r12)
	lfs      f25, 0x40(r1)
	mtctr    r12
	bctrl
	lfs      f1, 0x44(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x4c(r1)
	addi     r3, r3, atanTable___5JMath@l
	fsubs    f1, f24, f1
	fsubs    f2, f25, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f24, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f24
	bl       angDist__Fff
	fmr      f31, f1
	lfs      f0, lbl_8051CF5C@sda21(r2)
	lfs      f1, lbl_8051CF58@sda21(r2)
	fmuls    f0, f0, f30
	fmuls    f24, f31, f29
	fmuls    f1, f1, f0
	fabs     f0, f24
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_802E9D40
	lfs      f0, lbl_8051CF48@sda21(r2)
	fcmpo    cr0, f24, f0
	ble      lbl_802E9D3C
	fmr      f24, f1
	b        lbl_802E9D40

lbl_802E9D3C:
	fneg     f24, f1

lbl_802E9D40:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f24, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	mr       r3, r31
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	bl       getViewAngle__Q34Game10MiniHoudai3ObjFv
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	fmr      f29, f1
	addi     r3, r1, 0x5c
	lfs      f24, 0x3fc(r5)
	lwz      r12, 8(r12)
	lfs      f25, 0x3d4(r5)
	lfs      f26, 0x3ac(r5)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x50
	lwz      r12, 0(r29)
	lfs      f30, 0x5c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x50(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x74
	fsubs    f27, f0, f30
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x68
	lwz      r12, 0(r29)
	lfs      f30, 0x78(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x6c(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x8c
	fsubs    f28, f0, f30
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x80
	lwz      r12, 0(r29)
	lfs      f30, 0x94(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x88(r1)
	fmuls    f26, f26, f26
	fmuls    f25, f25, f25
	li       r3, 1
	fsubs    f0, f0, f30
	li       r4, 0
	fmuls    f0, f0, f0
	fmadds   f0, f27, f27, f0
	fcmpo    cr0, f0, f26
	ble      lbl_802E9E84
	fcmpo    cr0, f0, f25
	mr       r0, r4
	ble      lbl_802E9E78
	fabs     f0, f28
	frsp     f0, f0
	fcmpo    cr0, f0, f24
	bge      lbl_802E9E78
	mr       r0, r3

lbl_802E9E78:
	clrlwi.  r0, r0, 0x18
	beq      lbl_802E9E84
	li       r4, 1

lbl_802E9E84:
	clrlwi.  r0, r4, 0x18
	bne      lbl_802E9EBC
	lfs      f0, lbl_8051CF5C@sda21(r2)
	fabs     f2, f31
	lfs      f1, lbl_8051CF58@sda21(r2)
	fmuls    f0, f0, f29
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	mfcr     r0
	rlwinm.  r0, r0, 3, 0x1f, 0x1f
	beq      lbl_802E9EBC
	li       r3, 0

lbl_802E9EBC:
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E9ED8
	li       r0, 2
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EA1A0

lbl_802E9ED8:
	lwz      r3, 0xc0(r31)
	fabs     f2, f31
	lfs      f0, lbl_8051CF5C@sda21(r2)
	lfs      f3, 0x58c(r3)
	lfs      f1, lbl_8051CF58@sda21(r2)
	frsp     f2, f2
	fmuls    f0, f0, f3
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_802EA1A0
	li       r0, 8
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EA1A0

lbl_802E9F18:
	mr       r4, r31
	addi     r3, r1, 0x98
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f27, 0x1a0(r31)
	lfs      f0, 0xa0(r1)
	lwz      r5, 0xc0(r31)
	fsubs    f2, f0, f27
	lfs      f26, 0x198(r31)
	lfs      f1, 0x98(r1)
	lfs      f0, 0x384(r5)
	fsubs    f3, f1, f26
	fmuls    f1, f2, f2
	fmuls    f0, f0, f0
	fmadds   f1, f3, f3, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802EA088
	mr       r4, r31
	addi     r3, r1, 0x2c
	lwz      r12, 0(r31)
	lfs      f26, 0x2e4(r31)
	lwz      r12, 8(r12)
	lfs      f27, 0x2ec(r31)
	lfs      f25, 0x334(r5)
	lfs      f24, 0x30c(r5)
	mtctr    r12
	bctrl
	lfs      f4, 0x2c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x34(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x30(r1)
	fsubs    f1, f26, f4
	fsubs    f2, f27, f0
	stfs     f4, 0x20(r1)
	stfs     f3, 0x24(r1)
	stfs     f0, 0x28(r1)
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
	fmr      f31, f1
	lfs      f0, lbl_8051CF5C@sda21(r2)
	lfs      f1, lbl_8051CF58@sda21(r2)
	fmuls    f0, f0, f25
	fmuls    f24, f31, f24
	fmuls    f1, f1, f0
	fabs     f0, f24
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_802EA020
	lfs      f0, lbl_8051CF48@sda21(r2)
	fcmpo    cr0, f24, f0
	ble      lbl_802EA01C
	fmr      f24, f1
	b        lbl_802EA020

lbl_802EA01C:
	fneg     f24, f1

lbl_802EA020:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f24, f1
	bl       roundAng__Ff
	fabs     f3, f31
	stfs     f1, 0x1fc(r31)
	lfs      f0, lbl_8051CF60@sda21(r2)
	lfs      f2, 0x1fc(r31)
	frsp     f1, f3
	stfs     f2, 0x1a8(r31)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802EA074
	li       r0, 0xa
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EA1A0

lbl_802EA074:
	li       r0, 7
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EA1A0

lbl_802EA088:
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lfs      f25, 0x334(r5)
	lwz      r12, 8(r12)
	lfs      f24, 0x30c(r5)
	mtctr    r12
	bctrl
	lfs      f4, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x18(r1)
	fsubs    f1, f26, f4
	fsubs    f2, f27, f0
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
	fmr      f31, f1
	lfs      f0, lbl_8051CF5C@sda21(r2)
	lfs      f1, lbl_8051CF58@sda21(r2)
	fmuls    f0, f0, f25
	fmuls    f24, f31, f24
	fmuls    f1, f1, f0
	fabs     f0, f24
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_802EA13C
	lfs      f0, lbl_8051CF48@sda21(r2)
	fcmpo    cr0, f24, f0
	ble      lbl_802EA138
	fmr      f24, f1
	b        lbl_802EA13C

lbl_802EA138:
	fneg     f24, f1

lbl_802EA13C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f24, f1
	bl       roundAng__Ff
	fabs     f3, f31
	stfs     f1, 0x1fc(r31)
	lfs      f0, lbl_8051CF60@sda21(r2)
	lfs      f2, 0x1fc(r31)
	frsp     f1, f3
	stfs     f2, 0x1a8(r31)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802EA190
	li       r0, 9
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EA1A0

lbl_802EA190:
	li       r0, 6
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802EA1A0:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802EA1DC
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_802EA1DC
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2d4(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802EA1DC:
	psq_l    f31, 312(r1), 0, qr0
	lfd      f31, 0x130(r1)
	psq_l    f30, 296(r1), 0, qr0
	lfd      f30, 0x120(r1)
	psq_l    f29, 280(r1), 0, qr0
	lfd      f29, 0x110(r1)
	psq_l    f28, 264(r1), 0, qr0
	lfd      f28, 0x100(r1)
	psq_l    f27, 248(r1), 0, qr0
	lfd      f27, 0xf0(r1)
	psq_l    f26, 232(r1), 0, qr0
	lfd      f26, 0xe0(r1)
	psq_l    f25, 216(r1), 0, qr0
	lfd      f25, 0xd0(r1)
	psq_l    f24, 200(r1), 0, qr0
	lfd      f24, 0xc0(r1)
	lwz      r31, 0xbc(r1)
	lwz      r30, 0xb8(r1)
	lwz      r0, 0x144(r1)
	lwz      r29, 0xb4(r1)
	mtlr     r0
	addi     r1, r1, 0x140
	blr
	*/
}

/**
 * @note Address: 0x802EA238
 * @note Size: 0x24
 */
void StateTurn::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x802EA25C
 * @note Size: 0x44
 */
void StateTurnHome::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* mini             = OBJ(enemy);
	mini->mNextState      = MINIHOUDAI_NULL;
	mini->mTargetVelocity = Vector3f(0.0f);
	mini->startMotion(MINIHOUDAIANIM_Turn, nullptr);
}

/**
 * @note Address: 0x802EA2A0
 * @note Size: 0x368
 */
void StateTurnHome::exec(EnemyBase* enemy)
{
	Obj* mini = OBJ(enemy);

	if (mini->mHealth <= 0.0f) {
		mini->mNextState = MINIHOUDAI_Dead;
		mini->finishMotion();
	} else if (EnemyFunc::isStartFlick(mini, false)) {
		mini->mNextState = MINIHOUDAI_Flick;
		mini->finishMotion();
	} else if (mini->isAttackableTarget()) {
		mini->mNextState = MINIHOUDAI_Attack;
		mini->finishMotion();
	} else {
		Vector3f miniPos = mini->getPosition();
		Vector3f homePos = mini->mHomePosition;
		Creature* target = mini->getSearchedTarget();
		if (target) {
			f32 angleSep = mini->turnToTarget(homePos, CG_GENERALPARMS(mini).mTurnSpeed(), CG_GENERALPARMS(mini).mMaxTurnAngle());
			if (absF(angleSep) <= QUARTER_PI) {
				mini->mNextState = MINIHOUDAI_WalkHome;
				mini->finishMotion();
			}
		} else {
			f32 angleSep = mini->turnToTarget(homePos, CG_GENERALPARMS(mini).mTurnSpeed(), CG_GENERALPARMS(mini).mMaxTurnAngle());
			if (absF(angleSep) <= QUARTER_PI) {
				mini->mNextState = MINIHOUDAI_WalkHome;
				mini->finishMotion();
			}
		}
	}

	if (mini->mCurAnim->mIsPlaying && mini->mCurAnim->mType == KEYEVENT_END) {
		transit(mini, mini->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x802EA608
 * @note Size: 0x4
 */
void StateTurnHome::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802EA60C
 * @note Size: 0x44
 */
void StateTurnPath::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* mini             = OBJ(enemy);
	mini->mNextState      = MINIHOUDAI_NULL;
	mini->mTargetVelocity = Vector3f(0.0f);
	mini->startMotion(MINIHOUDAIANIM_Turn, nullptr);
}

/**
 * @note Address: 0x802EA650
 * @note Size: 0x390
 */
void StateTurnPath::exec(EnemyBase* enemy)
{
	Obj* mini = OBJ(enemy);
	mini->updateHomePosition();
	if (mini->mHealth <= 0.0f) {
		mini->mNextState = MINIHOUDAI_Dead;
		mini->finishMotion();
	} else if (EnemyFunc::isStartFlick(mini, true)) {
		mini->mNextState = MINIHOUDAI_Flick;
		mini->finishMotion();
	} else if (mini->isAttackableTarget()) {
		mini->mNextState = MINIHOUDAI_Attack;
		mini->finishMotion();
	} else {
		Creature* target = mini->getSearchedTarget();
		if (target) {
			f32 angleSep  = mini->turnToTarget(target, CG_GENERALPARMS(mini).mTurnSpeed(), CG_GENERALPARMS(mini).mMaxTurnAngle());
			f32 maxAttack = CG_GENERALPARMS(mini).mMaxAttackAngle();
			if (absF(angleSep) <= TORADIANS(maxAttack)) {
				mini->mNextState = MINIHOUDAI_Walk;
				mini->finishMotion();
			} else {
				mini->mNextState = MINIHOUDAI_Turn;
				mini->finishMotion();
			}
		} else {
			Vector3f targetPos = mini->mWalkTargetPosition;
			f32 angleSep       = mini->turnToTarget(targetPos, CG_GENERALPARMS(mini).mTurnSpeed(), CG_GENERALPARMS(mini).mMaxTurnAngle());
			if (absF(angleSep) <= QUARTER_PI) {
				mini->mNextState = MINIHOUDAI_WalkPath;
				mini->finishMotion();
			}
		}
	}

	if (mini->mCurAnim->mIsPlaying && mini->mCurAnim->mType == KEYEVENT_END) {
		transit(mini, mini->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x802EA9E0
 * @note Size: 0x4
 */
void StateTurnPath::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802EA9E4
 * @note Size: 0x50
 */
void StateWalk::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* mini          = OBJ(enemy);
	mini->mUpdateTimer = 0.0f;
	mini->mNextState   = MINIHOUDAI_NULL;
	mini->setEmotionExcitement();
	mini->startMotion(MINIHOUDAIANIM_Walk, nullptr);
}

/**
 * @note Address: 0x802EAA34
 * @note Size: 0x7CC
 */
void StateWalk::exec(EnemyBase* enemy)
{
	Obj* mini        = OBJ(enemy);
	f32 turnSpeed    = CG_GENERALPARMS(mini).mTurnSpeed();
	f32 maxTurnAngle = CG_GENERALPARMS(mini).mMaxTurnAngle();
	if (mini->isFinishMotion()) {
		turnSpeed    = 0.01f;
		maxTurnAngle = 1.0f;
	}
	if (mini->mHealth <= 0.0f) {
		mini->mNextState = MINIHOUDAI_Dead;
		mini->finishMotion();
	} else if (EnemyFunc::isStartFlick(mini, false)) {
		mini->mNextState = MINIHOUDAI_Flick;
		mini->finishMotion();
	} else {
		Vector3f miniPos = mini->getPosition();
		Vector3f homePos = mini->mHomePosition;
		f32 dist         = sqrDistanceXZ(miniPos, homePos);
		if (dist > SQUARE(CG_GENERALPARMS(mini).mTerritoryRadius())) {
			mini->mNextState = MINIHOUDAI_Lost;
			mini->finishMotion();
		} else if (mini->isAttackableTarget()) {
			mini->mNextState = MINIHOUDAI_Attack;
			mini->finishMotion();
		} else {
			Creature* target = mini->getSearchedTarget();
			if (target) {
				mini->mHealthGaugeTimer = 0.0f;
				f32 angleSep            = mini->turnToTarget(target, turnSpeed, maxTurnAngle);
				if (mini->isTargetWithinRange(target, angleSep, CG_GENERALPARMS(mini).mPrivateRadius(),
				                              CG_GENERALPARMS(mini).mSightRadius(), CG_GENERALPARMS(mini).mFov(), mini->getViewAngle())) {
					mini->mNextState = MINIHOUDAI_Lost;
					mini->finishMotion();
				} else {
					f32 maxAttack = CG_GENERALPARMS(mini).mMaxAttackAngle();
					if (!(absF(angleSep) <= TORADIANS(maxAttack))) {
						mini->mNextState = MINIHOUDAI_Turn;
						mini->finishMotion();
					}
				}
			} else if (dist < SQUARE(CG_GENERALPARMS(mini).mHomeRadius())) {
				Vector3f targetPos = mini->mWalkTargetPosition;
				f32 angleSep       = mini->turnToTarget(targetPos, turnSpeed, maxTurnAngle);

				if (absF(angleSep) <= QUARTER_PI) {
					mini->mNextState = MINIHOUDAI_WalkPath;
					mini->finishMotion();
				} else {
					mini->mNextState = MINIHOUDAI_TurnPath;
					mini->finishMotion();
				}
			} else {
				f32 angleSep = mini->turnToTarget(homePos, turnSpeed, maxTurnAngle);
				if (absF(angleSep) <= QUARTER_PI) {
					mini->mNextState = MINIHOUDAI_WalkHome;
					mini->finishMotion();
				} else {
					mini->mNextState = MINIHOUDAI_TurnHome;
					mini->finishMotion();
				}
			}
		}
	}

	if (mini->isFinishMotion()) {
		mini->mTargetVelocity = Vector3f(0.0f);
	} else if (mini->getEnemyTypeID() == EnemyTypeID::EnemyID_MiniHoudai) {
		mini->setTargetVelocity();

	} else {
		mini->mTargetVelocity = Vector3f(0.0f);
	}

	if (mini->mCurAnim->mIsPlaying) {
		if (mini->mCurAnim->mType == KEYEVENT_LOOP_START) {
			mini->createSmokeSmallEffect(true);

		} else if (mini->mCurAnim->mType == KEYEVENT_2) {
			mini->createSmokeSmallEffect(false);

		} else if (mini->mCurAnim->mType == KEYEVENT_END) {
			transit(mini, mini->mNextState, nullptr);
		}
	}
	/*
	stwu     r1, -0x140(r1)
	mflr     r0
	stw      r0, 0x144(r1)
	stfd     f31, 0x130(r1)
	psq_st   f31, 312(r1), 0, qr0
	stfd     f30, 0x120(r1)
	psq_st   f30, 296(r1), 0, qr0
	stfd     f29, 0x110(r1)
	psq_st   f29, 280(r1), 0, qr0
	stfd     f28, 0x100(r1)
	psq_st   f28, 264(r1), 0, qr0
	stfd     f27, 0xf0(r1)
	psq_st   f27, 248(r1), 0, qr0
	stfd     f26, 0xe0(r1)
	psq_st   f26, 232(r1), 0, qr0
	stfd     f25, 0xd0(r1)
	psq_st   f25, 216(r1), 0, qr0
	stfd     f24, 0xc0(r1)
	psq_st   f24, 200(r1), 0, qr0
	stw      r31, 0xbc(r1)
	stw      r30, 0xb8(r1)
	stw      r29, 0xb4(r1)
	mr       r31, r4
	lwz      r4, 0xc0(r4)
	mr       r30, r3
	lfs      f30, 0x30c(r4)
	mr       r3, r31
	lfs      f29, 0x334(r4)
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802EAAB8
	lfs      f30, lbl_8051CF6C@sda21(r2)
	lfs      f29, lbl_8051CF4C@sda21(r2)

lbl_802EAAB8:
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051CF48@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802EAAE0
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EB078

lbl_802EAAE0:
	mr       r3, r31
	li       r4, 0
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_802EAB08
	li       r0, 4
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EB078

lbl_802EAB08:
	mr       r4, r31
	addi     r3, r1, 0xa4
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f26, 0x1a0(r31)
	lfs      f0, 0xac(r1)
	lwz      r3, 0xc0(r31)
	fsubs    f2, f0, f26
	lfs      f25, 0x198(r31)
	lfs      f1, 0xa4(r1)
	lfs      f0, 0x35c(r3)
	fsubs    f3, f1, f25
	fmuls    f1, f2, f2
	fmuls    f0, f0, f0
	fmadds   f24, f3, f3, f1
	fcmpo    cr0, f24, f0
	ble      lbl_802EAB68
	li       r0, 2
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EB078

lbl_802EAB68:
	mr       r3, r31
	bl       isAttackableTarget__Q34Game10MiniHoudai3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802EAB8C
	li       r0, 3
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EB078

lbl_802EAB8C:
	mr       r3, r31
	bl       getSearchedTarget__Q34Game10MiniHoudai3ObjFv
	or.      r29, r3, r3
	beq      lbl_802EAE38
	lfs      f0, lbl_8051CF48@sda21(r2)
	mr       r4, r29
	addi     r3, r1, 0x38
	stfs     f0, 0x2c8(r31)
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x44
	lwz      r12, 0(r31)
	lfs      f24, 0x38(r1)
	lwz      r12, 8(r12)
	lfs      f25, 0x40(r1)
	mtctr    r12
	bctrl
	lfs      f1, 0x44(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x4c(r1)
	addi     r3, r3, atanTable___5JMath@l
	fsubs    f1, f24, f1
	fsubs    f2, f25, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f24, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f24
	bl       angDist__Fff
	fmr      f31, f1
	lfs      f0, lbl_8051CF5C@sda21(r2)
	lfs      f1, lbl_8051CF58@sda21(r2)
	fmuls    f0, f0, f29
	fmuls    f24, f31, f30
	fmuls    f1, f1, f0
	fabs     f0, f24
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_802EAC60
	lfs      f0, lbl_8051CF48@sda21(r2)
	fcmpo    cr0, f24, f0
	ble      lbl_802EAC5C
	fmr      f24, f1
	b        lbl_802EAC60

lbl_802EAC5C:
	fneg     f24, f1

lbl_802EAC60:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f24, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	mr       r3, r31
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	bl       getViewAngle__Q34Game10MiniHoudai3ObjFv
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	fmr      f30, f1
	addi     r3, r1, 0x68
	lfs      f24, 0x3fc(r5)
	lwz      r12, 8(r12)
	lfs      f25, 0x3d4(r5)
	lfs      f26, 0x3ac(r5)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x5c
	lwz      r12, 0(r29)
	lfs      f29, 0x68(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x5c(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x80
	fsubs    f27, f0, f29
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x74
	lwz      r12, 0(r29)
	lfs      f29, 0x84(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x78(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x98
	fsubs    f28, f0, f29
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x8c
	lwz      r12, 0(r29)
	lfs      f29, 0xa0(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x94(r1)
	fmuls    f26, f26, f26
	fmuls    f25, f25, f25
	li       r3, 1
	fsubs    f0, f0, f29
	li       r4, 0
	fmuls    f0, f0, f0
	fmadds   f0, f27, f27, f0
	fcmpo    cr0, f0, f26
	ble      lbl_802EADA4
	fcmpo    cr0, f0, f25
	mr       r0, r4
	ble      lbl_802EAD98
	fabs     f0, f28
	frsp     f0, f0
	fcmpo    cr0, f0, f24
	bge      lbl_802EAD98
	mr       r0, r3

lbl_802EAD98:
	clrlwi.  r0, r0, 0x18
	beq      lbl_802EADA4
	li       r4, 1

lbl_802EADA4:
	clrlwi.  r0, r4, 0x18
	bne      lbl_802EADDC
	lfs      f0, lbl_8051CF5C@sda21(r2)
	fabs     f2, f31
	lfs      f1, lbl_8051CF58@sda21(r2)
	fmuls    f0, f0, f30
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	mfcr     r0
	rlwinm.  r0, r0, 3, 0x1f, 0x1f
	beq      lbl_802EADDC
	li       r3, 0

lbl_802EADDC:
	clrlwi.  r0, r3, 0x18
	beq      lbl_802EADF8
	li       r0, 2
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EB078

lbl_802EADF8:
	lwz      r3, 0xc0(r31)
	fabs     f2, f31
	lfs      f0, lbl_8051CF5C@sda21(r2)
	lfs      f3, 0x58c(r3)
	lfs      f1, lbl_8051CF58@sda21(r2)
	frsp     f2, f2
	fmuls    f0, f0, f3
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	beq      lbl_802EB078
	li       r0, 5
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EB078

lbl_802EAE38:
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x384(r3)
	fmuls    f0, f0, f0
	fcmpo    cr0, f24, f0
	bge      lbl_802EAF68
	mr       r4, r31
	addi     r3, r1, 0x2c
	lwz      r12, 0(r31)
	lfs      f24, 0x2e4(r31)
	lwz      r12, 8(r12)
	lfs      f25, 0x2ec(r31)
	mtctr    r12
	bctrl
	lfs      f4, 0x2c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x34(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x30(r1)
	fsubs    f1, f24, f4
	fsubs    f2, f25, f0
	stfs     f4, 0x20(r1)
	stfs     f3, 0x24(r1)
	stfs     f0, 0x28(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f24, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f24
	bl       angDist__Fff
	fmr      f31, f1
	lfs      f0, lbl_8051CF5C@sda21(r2)
	lfs      f1, lbl_8051CF58@sda21(r2)
	fmuls    f0, f0, f29
	fmuls    f24, f31, f30
	fmuls    f1, f1, f0
	fabs     f0, f24
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_802EAF00
	lfs      f0, lbl_8051CF48@sda21(r2)
	fcmpo    cr0, f24, f0
	ble      lbl_802EAEFC
	fmr      f24, f1
	b        lbl_802EAF00

lbl_802EAEFC:
	fneg     f24, f1

lbl_802EAF00:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f24, f1
	bl       roundAng__Ff
	fabs     f3, f31
	stfs     f1, 0x1fc(r31)
	lfs      f0, lbl_8051CF60@sda21(r2)
	lfs      f2, 0x1fc(r31)
	frsp     f1, f3
	stfs     f2, 0x1a8(r31)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802EAF54
	li       r0, 0xa
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EB078

lbl_802EAF54:
	li       r0, 7
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EB078

lbl_802EAF68:
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f4, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x18(r1)
	fsubs    f1, f25, f4
	fsubs    f2, f26, f0
	stfs     f4, 8(r1)
	stfs     f3, 0xc(r1)
	stfs     f0, 0x10(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f24, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f24
	bl       angDist__Fff
	fmr      f31, f1
	lfs      f0, lbl_8051CF5C@sda21(r2)
	lfs      f1, lbl_8051CF58@sda21(r2)
	fmuls    f0, f0, f29
	fmuls    f24, f31, f30
	fmuls    f1, f1, f0
	fabs     f0, f24
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_802EB014
	lfs      f0, lbl_8051CF48@sda21(r2)
	fcmpo    cr0, f24, f0
	ble      lbl_802EB010
	fmr      f24, f1
	b        lbl_802EB014

lbl_802EB010:
	fneg     f24, f1

lbl_802EB014:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f24, f1
	bl       roundAng__Ff
	fabs     f3, f31
	stfs     f1, 0x1fc(r31)
	lfs      f0, lbl_8051CF60@sda21(r2)
	lfs      f2, 0x1fc(r31)
	frsp     f1, f3
	stfs     f2, 0x1a8(r31)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802EB068
	li       r0, 9
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EB078

lbl_802EB068:
	li       r0, 6
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802EB078:
	mr       r3, r31
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802EB09C
	lfs      f0, lbl_8051CF48@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_802EB138

lbl_802EB09C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x4e
	bne      lbl_802EB128
	mr       r3, r31
	lwz      r4, 0xc0(r31)
	lwz      r12, 0(r31)
	lfs      f24, 0x2e4(r4)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r31
	lfs      f2, 0x1d4(r31)
	lwz      r12, 0(r31)
	frsp     f25, f1
	lfs      f29, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x50(r1)
	stfs     f29, 0x54(r1)
	stfs     f0, 0x58(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f24, f25
	frsp     f1, f1
	stfs     f0, 0x1d4(r31)
	fmuls    f0, f24, f1
	stfs     f29, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_802EB138

lbl_802EB128:
	lfs      f0, lbl_8051CF48@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)

lbl_802EB138:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802EB1A4
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0
	bne      lbl_802EB164
	mr       r3, r31
	li       r4, 1
	bl       createSmokeSmallEffect__Q34Game10MiniHoudai3ObjFb
	b        lbl_802EB1A4

lbl_802EB164:
	cmplwi   r0, 2
	bne      lbl_802EB17C
	mr       r3, r31
	li       r4, 0
	bl       createSmokeSmallEffect__Q34Game10MiniHoudai3ObjFb
	b        lbl_802EB1A4

lbl_802EB17C:
	cmplwi   r0, 0x3e8
	bne      lbl_802EB1A4
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2d4(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802EB1A4:
	psq_l    f31, 312(r1), 0, qr0
	lfd      f31, 0x130(r1)
	psq_l    f30, 296(r1), 0, qr0
	lfd      f30, 0x120(r1)
	psq_l    f29, 280(r1), 0, qr0
	lfd      f29, 0x110(r1)
	psq_l    f28, 264(r1), 0, qr0
	lfd      f28, 0x100(r1)
	psq_l    f27, 248(r1), 0, qr0
	lfd      f27, 0xf0(r1)
	psq_l    f26, 232(r1), 0, qr0
	lfd      f26, 0xe0(r1)
	psq_l    f25, 216(r1), 0, qr0
	lfd      f25, 0xd0(r1)
	psq_l    f24, 200(r1), 0, qr0
	lfd      f24, 0xc0(r1)
	lwz      r31, 0xbc(r1)
	lwz      r30, 0xb8(r1)
	lwz      r0, 0x144(r1)
	lwz      r29, 0xb4(r1)
	mtlr     r0
	addi     r1, r1, 0x140
	blr
	*/
}

/**
 * @note Address: 0x802EB208
 * @note Size: 0x24
 */
void StateWalk::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x802EB22C
 * @note Size: 0x34
 */
void StateWalkHome::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* mini        = OBJ(enemy);
	mini->mNextState = MINIHOUDAI_NULL;
	mini->startMotion(MINIHOUDAIANIM_Walk, nullptr);
}

/**
 * @note Address: 0x802EB260
 * @note Size: 0x578
 */
void StateWalkHome::exec(EnemyBase* enemy)
{
	Obj* mini = OBJ(enemy);

	f32 turnSpeed    = CG_GENERALPARMS(mini).mTurnSpeed();
	f32 maxTurnAngle = CG_GENERALPARMS(mini).mMaxTurnAngle();
	if (mini->isFinishMotion()) {
		turnSpeed    = 0.01f;
		maxTurnAngle = 1.0f;
	}
	if (mini->mHealth <= 0.0f) {
		mini->mNextState = MINIHOUDAI_Dead;
		mini->finishMotion();
	} else if (EnemyFunc::isStartFlick(mini, false)) {
		mini->mNextState = MINIHOUDAI_Flick;
		mini->finishMotion();
	} else {
		Vector3f miniPos = mini->getPosition();
		Vector3f homePos = mini->mHomePosition;
		f32 dist         = sqrDistanceXZ(miniPos, homePos);

		f32 angleSep  = mini->turnToTarget2(homePos, turnSpeed, maxTurnAngle);
		f32 maxAttack = CG_GENERALPARMS(mini).mMaxAttackAngle();
		if (dist < SQUARE(CG_GENERALPARMS(mini).mHomeRadius())) {
			if (mini->isAttackableTarget()) {
				mini->mNextState = MINIHOUDAI_Attack;
				mini->finishMotion();
			} else {
				Creature* target = mini->getSearchedTarget();
				if (target) {
					f32 angleSep  = mini->getCreatureViewAngle(target);
					f32 maxAttack = CG_GENERALPARMS(mini).mMaxAttackAngle();
					if (absF(angleSep) <= TORADIANS(maxAttack)) {
						mini->mNextState = MINIHOUDAI_Walk;
						mini->finishMotion();
					} else {
						mini->mNextState = MINIHOUDAI_Turn;
						mini->finishMotion();
					}
				} else {
					Vector3f targetPos = mini->mWalkTargetPosition;
					f32 angleSep       = mini->getCreatureViewAngle(targetPos);
					if (absF(angleSep) <= QUARTER_PI) {
						mini->mNextState = MINIHOUDAI_WalkPath;
						mini->finishMotion();
					} else {
						mini->mNextState = MINIHOUDAI_TurnPath;
						mini->finishMotion();
					}
				}
			}
		} else {
			if (mini->isAttackableTarget()) {
				mini->mNextState = MINIHOUDAI_Attack;
				mini->finishMotion();
			} else if (!(absF(angleSep) <= QUARTER_PI)) {
				mini->mNextState = MINIHOUDAI_TurnHome;
				mini->finishMotion();
			}
		}
	}

	if (mini->isFinishMotion()) {
		mini->mTargetVelocity = Vector3f(0.0f);
	} else if (mini->getEnemyTypeID() == EnemyTypeID::EnemyID_MiniHoudai) {
		mini->setTargetVelocity();

	} else {
		mini->mTargetVelocity = Vector3f(0.0f);
	}

	sys->updateTimer(mini->mUpdateTimer, 1.0f); // dumb way to get an fmadd with 1.0f as the multiplier

	if (mini->mCurAnim->mIsPlaying) {
		if (mini->mCurAnim->mType == KEYEVENT_LOOP_START) {
			mini->createSmokeSmallEffect(true);

		} else if (mini->mCurAnim->mType == KEYEVENT_2) {
			mini->createSmokeSmallEffect(false);

		} else if (mini->mCurAnim->mType == KEYEVENT_END) {
			transit(mini, mini->mNextState, nullptr);
		}
	}
}

/**
 * @note Address: 0x802EB7D8
 * @note Size: 0x4
 */
void StateWalkHome::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802EB7DC
 * @note Size: 0x34
 */
void StateWalkPath::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* mini        = OBJ(enemy);
	mini->mNextState = MINIHOUDAI_NULL;
	mini->startMotion(MINIHOUDAIANIM_Walk, nullptr);
}

/**
 * @note Address: 0x802EB810
 * @note Size: 0x4A4
 */
void StateWalkPath::exec(EnemyBase* enemy)
{
	Obj* mini = OBJ(enemy);
	mini->updateHomePosition();

	f32 turnSpeed    = CG_GENERALPARMS(mini).mTurnSpeed();
	f32 maxTurnAngle = CG_GENERALPARMS(mini).mMaxTurnAngle();
	if (mini->isFinishMotion()) {
		turnSpeed    = 0.01f;
		maxTurnAngle = 1.0f;
	}
	if (mini->mHealth <= 0.0f) {
		mini->mNextState = MINIHOUDAI_Dead;
		mini->finishMotion();
	} else if (EnemyFunc::isStartFlick(mini, true)) {
		mini->mNextState = MINIHOUDAI_Flick;
		mini->finishMotion();
	} else if (mini->isAttackableTarget()) {
		mini->mNextState = MINIHOUDAI_Attack;
		mini->finishMotion();
	} else {
		Creature* target = mini->getSearchedTarget();
		if (target) {
			f32 angleSep  = mini->turnToTarget(target, turnSpeed, maxTurnAngle);
			f32 maxAttack = CG_GENERALPARMS(mini).mMaxAttackAngle();
			if (absF(angleSep) <= TORADIANS(maxAttack)) {
				mini->mNextState = MINIHOUDAI_Walk;
				mini->finishMotion();
			} else {
				mini->mNextState = MINIHOUDAI_Turn;
				mini->finishMotion();
			}
		} else {
			Vector3f targetPos = mini->mWalkTargetPosition;
			f32 angleSep       = mini->turnToTarget(targetPos, turnSpeed, maxTurnAngle);
			if (!(absF(angleSep) <= QUARTER_PI)) {
				mini->mNextState = MINIHOUDAI_TurnPath;
				mini->finishMotion();
			}
		}
	}

	if (mini->isFinishMotion()) {
		mini->mTargetVelocity = Vector3f(0.0f);
	} else if (mini->getEnemyTypeID() == EnemyTypeID::EnemyID_MiniHoudai) {
		mini->setTargetVelocity();

	} else {
		mini->mTargetVelocity = Vector3f(0.0f);
	}

	mini->mUpdateTimer += 0.5f * sys->mDeltaTime;

	if (mini->mCurAnim->mIsPlaying) {
		if (mini->mCurAnim->mType == KEYEVENT_LOOP_START) {
			mini->createSmokeSmallEffect(true);

		} else if (mini->mCurAnim->mType == KEYEVENT_2) {
			mini->createSmokeSmallEffect(false);

		} else if (mini->mCurAnim->mType == KEYEVENT_END) {
			transit(mini, mini->mNextState, nullptr);
		}
	}
}

/**
 * @note Address: 0x802EBCB4
 * @note Size: 0x4
 */
void StateWalkPath::cleanup(EnemyBase* enemy) { }

} // namespace MiniHoudai
} // namespace Game

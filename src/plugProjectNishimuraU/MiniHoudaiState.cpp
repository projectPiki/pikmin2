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
void StateDead::cleanup(EnemyBase* enemy)
{
}

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
				f32 angleSep  = mini->getAngDist(target);
				f32 maxAttack = CG_GENERALPARMS(mini).mMaxAttackAngle();
				if (absF(angleSep) <= TORADIANS(maxAttack)) {
					transit(mini, MINIHOUDAI_Walk, nullptr);
					return;
				}

				transit(mini, MINIHOUDAI_Turn, nullptr);
				return;
			}

			Vector3f targetPos = mini->mWalkTargetPosition;
			f32 angleSep       = mini->getAngDist(targetPos);
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
void StateRebirth::cleanup(EnemyBase* enemy)
{
	enemy->disableEvent(0, EB_NoInterrupt);
}

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
			f32 angleSep = mini->getAngDist(homePos);

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
			f32 angleSep  = mini->getAngDist(target);
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
			f32 angleSep     = mini->getAngDist(pathPos);
			if (absF(angleSep) <= QUARTER_PI) {
				transit(mini, MINIHOUDAI_WalkPath, nullptr);
				return;
			} else {
				transit(mini, MINIHOUDAI_TurnPath, nullptr);
				return;
			}
		}

		f32 angleSep = mini->getAngDist(homePos);
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
void StateLost::cleanup(EnemyBase* enemy)
{
}

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
				f32 angleSep = mini->getAngDist(homePos);
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
				f32 angleSep  = mini->getAngDist(target);
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
				f32 angleSep       = mini->getAngDist(targetPos);

				if (absF(angleSep) <= QUARTER_PI) {
					transit(mini, MINIHOUDAI_WalkPath, nullptr);
					return;
				}
				transit(mini, MINIHOUDAI_TurnPath, nullptr);
				return;
			}

			f32 angleSep = mini->getAngDist(homePos);
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
void StateAttack::cleanup(EnemyBase* enemy)
{
	enemy->setEmotionCaution();
}

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
				f32 angleSep = mini->getAngDist(homePos);
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
				f32 angleSep  = mini->getAngDist(target);
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
				f32 angleSep       = mini->getAngDist(targetPos);

				if (absF(angleSep) <= QUARTER_PI) {
					transit(mini, MINIHOUDAI_WalkPath, nullptr);
					return;
				}
				transit(mini, MINIHOUDAI_TurnPath, nullptr);
				return;
			}

			f32 angleSep = mini->getAngDist(homePos);
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
			if (mini->isTargetOutOfRange(target, angleSep, CG_GENERALPARMS(mini).mPrivateRadius(), CG_GENERALPARMS(mini).mSightRadius(),
			                             CG_GENERALPARMS(mini).mFov(), mini->getViewAngle())) {
				mini->mNextState = MINIHOUDAI_Lost;
				mini->finishMotion();
			} else {
				if (isAngleWithin(angleSep, CG_GENERALPARMS(mini).mMaxAttackAngle())) {
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

				if (mini->turnToTargetPos(targetPos, CG_GENERALPARMS(mini).mTurnSpeed(), CG_GENERALPARMS(mini).mMaxTurnAngle(), 45.0f)) {
					mini->mNextState = MINIHOUDAI_WalkPath;
					mini->finishMotion();
				} else {
					mini->mNextState = MINIHOUDAI_TurnPath;
					mini->finishMotion();
				}
			} else {
				if (mini->turnToTargetPos(homePos, CG_GENERALPARMS(mini).mTurnSpeed(), CG_GENERALPARMS(mini).mMaxTurnAngle(), 45.0f)) {
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
}

/**
 * @note Address: 0x802EA238
 * @note Size: 0x24
 */
void StateTurn::cleanup(EnemyBase* enemy)
{
	enemy->setEmotionCaution();
}

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
			if (mini->turnToTargetPos(homePos, CG_GENERALPARMS(mini).mTurnSpeed(), CG_GENERALPARMS(mini).mMaxTurnAngle(), 45.0f)) {
				mini->mNextState = MINIHOUDAI_WalkHome;
				mini->finishMotion();
			}
		} else {
			if (mini->turnToTargetPos(homePos, CG_GENERALPARMS(mini).mTurnSpeed(), CG_GENERALPARMS(mini).mMaxTurnAngle(), 45.0f)) {
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
void StateTurnHome::cleanup(EnemyBase* enemy)
{
}

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
			f32 angleSep = mini->turnToTarget(target, CG_GENERALPARMS(mini).mTurnSpeed(), CG_GENERALPARMS(mini).mMaxTurnAngle());
			if (isAngleWithin(angleSep, CG_GENERALPARMS(mini).mMaxAttackAngle())) {
				mini->mNextState = MINIHOUDAI_Walk;
				mini->finishMotion();
			} else {
				mini->mNextState = MINIHOUDAI_Turn;
				mini->finishMotion();
			}
		} else {
			Vector3f targetPos = mini->mWalkTargetPosition;
			if (mini->turnToTargetPos(targetPos, CG_GENERALPARMS(mini).mTurnSpeed(), CG_GENERALPARMS(mini).mMaxTurnAngle(), 45.0f)) {
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
void StateTurnPath::cleanup(EnemyBase* enemy)
{
}

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
				if (mini->isTargetOutOfRange(target, angleSep, CG_GENERALPARMS(mini).mPrivateRadius(), CG_GENERALPARMS(mini).mSightRadius(),
				                             CG_GENERALPARMS(mini).mFov(), mini->getViewAngle())) {
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

				if (mini->turnToTargetPos(targetPos, turnSpeed, maxTurnAngle, 45.0f)) {
					mini->mNextState = MINIHOUDAI_WalkPath;
					mini->finishMotion();
				} else {
					mini->mNextState = MINIHOUDAI_TurnPath;
					mini->finishMotion();
				}
			} else {
				if (mini->turnToTargetPos(homePos, turnSpeed, maxTurnAngle, 45.0f)) {
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
		mini->setTargetSpeed(CG_GENERALPARMS(mini).mMoveSpeed());

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
}

/**
 * @note Address: 0x802EB208
 * @note Size: 0x24
 */
void StateWalk::cleanup(EnemyBase* enemy)
{
	enemy->setEmotionCaution();
}

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

		f32 angleSep  = mini->turnToTarget(homePos, turnSpeed, maxTurnAngle);
		f32 maxAttack = CG_GENERALPARMS(mini).mMaxAttackAngle();
		if (dist < SQUARE(CG_GENERALPARMS(mini).mHomeRadius())) {
			if (mini->isAttackableTarget()) {
				mini->mNextState = MINIHOUDAI_Attack;
				mini->finishMotion();
			} else {
				Creature* target = mini->getSearchedTarget();
				if (target) {
					f32 angleSep  = mini->getAngDist(target);
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
					f32 angleSep       = mini->getAngDist(targetPos);
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
		mini->setTargetSpeed(CG_GENERALPARMS(mini).mMoveSpeed());

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
void StateWalkHome::cleanup(EnemyBase* enemy)
{
}

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
			f32 angleSep = mini->turnToTarget(target, turnSpeed, maxTurnAngle);
			if (isAngleWithin(angleSep, CG_GENERALPARMS(mini).mMaxAttackAngle())) {
				mini->mNextState = MINIHOUDAI_Walk;
				mini->finishMotion();
			} else {
				mini->mNextState = MINIHOUDAI_Turn;
				mini->finishMotion();
			}
		} else {
			Vector3f targetPos = mini->mWalkTargetPosition;
			if (!mini->turnToTargetPos(targetPos, turnSpeed, maxTurnAngle, 45.0f)) {
				mini->mNextState = MINIHOUDAI_TurnPath;
				mini->finishMotion();
			}
		}
	}

	if (mini->isFinishMotion()) {
		mini->mTargetVelocity = Vector3f(0.0f);
	} else if (mini->getEnemyTypeID() == EnemyTypeID::EnemyID_MiniHoudai) {
		mini->setTargetSpeed(CG_GENERALPARMS(mini).mMoveSpeed());

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
void StateWalkPath::cleanup(EnemyBase* enemy)
{
}

} // namespace MiniHoudai
} // namespace Game

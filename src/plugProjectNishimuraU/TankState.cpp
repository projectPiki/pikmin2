#include "Game/Entities/Tank.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Tank {

void FSM::init(EnemyBase* enemy)
{
	create(TANK_Count);
	registerState(new StateDead);
	registerState(new StateWait);
	registerState(new StateMove);
	registerState(new StateMoveTurn);
	registerState(new StateChaseTurn);
	registerState(new StateAttack);
	registerState(new StateFlick);
}

/**
 * @note Address: 0x80274064
 * @note Size: 0x70
 */

void StateDead::init(EnemyBase* enemy, StateArg* Args)
{
	Obj* tank = OBJ(enemy);
	tank->finishEffect();
	tank->disableEvent(0, EB_Cullable);
	tank->mTargetVelocity = Vector3f(0.0f);
	tank->deathProcedure();
	tank->startMotion(TANKANIM_Dead, nullptr);
}

/**
 * @note Address: 0x802740D8
 * @note Size: 0x44
 */
void StateDead::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && (u32)enemy->mCurAnim->mType == KEYEVENT_END) {
		enemy->kill(nullptr);
	}
}

/**
 * @note Address: 0x8027411C
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase*)
{
}

/**
 * @note Address: 0x80274120
 * @note Size: 0x44
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tank             = OBJ(enemy);
	tank->mTargetVelocity = Vector3f(0.0f);
	tank->mTargetCreature = nullptr;
	tank->startMotion(TANKANIM_Wait, nullptr);
}

/**
 * @note Address: 0x80274164
 * @note Size: 0x258
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* tank = OBJ(enemy);
	f32 view  = tank->getViewAngle();
	if (tank->mHealth <= 0.0f) {
		transit(enemy, TANK_Dead, nullptr);
		return;
	}
	if (EnemyFunc::isStartFlick(tank, false) || tank->isAttackable(false)) {
		tank->setAnimSpeed(60.0f);
	}
	if (enemy->mCurAnim->mIsPlaying && (u32)enemy->mCurAnim->mType == KEYEVENT_END) {
		if (tank->mHealth <= 0.0f) {
			transit(enemy, TANK_Dead, nullptr);
			return;
		}
		if (EnemyFunc::isStartFlick(tank, false)) {
			transit(enemy, TANK_Flick, nullptr);
			return;
		}
		if (tank->isAttackable(false)) {
			transit(enemy, TANK_Attack, nullptr);
			return;
		}
		f32 sightRad     = CG_GENERALPARMS(tank).mSightRadius.mValue;
		Creature* target = EnemyFunc::getNearestPikminOrNavi(tank, view, sightRad, nullptr, nullptr, nullptr);
		if (target) {
			tank->mTargetCreature = target;
			tank->mCautionTimer   = 0.0f; // some target chase timer?
			transit(enemy, TANK_ChaseTurn, nullptr);
		} else if (randWeightFloat(1.0f) < 0.2f) {
			transit(enemy, TANK_Wait, nullptr);
		} else {
			transit(enemy, TANK_MoveTurn, nullptr);
		}
	}
}

/**
 * @note Address: 0x802743BC
 * @note Size: 0x28
 */
void StateWait::cleanup(EnemyBase* enemy)
{
	Obj* tank = OBJ(enemy);
	tank->setAnimSpeed(30.0f);
}

/**
 * @note Address: 0x802743E4
 * @note Size: 0x54
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tank             = OBJ(enemy);
	tank->mWalkTimer      = 0.0f;
	tank->mTargetCreature = nullptr;
	tank->startMotion(TANKANIM_Move, nullptr);
	tank->setAnimSpeed(60.0f);
}

/**
 * @note Address: 0x80274438
 * @note Size: 0x56C
 */
void StateMove::exec(EnemyBase* enemy)
{
	Obj* tank     = OBJ(enemy);
	f32 viewAngle = tank->getViewAngle();

	Vector3f pos       = Vector3f(tank->getPosition());
	Vector3f targetPos = Vector3f(tank->mGoalPosition);

	if (sqrDistanceXZ(pos, targetPos) > 2500.0f && tank->mWalkTimer < 3.0f) {
		EnemyFunc::walkToTarget(tank, targetPos, CG_GENERALPARMS(tank).mMoveSpeed(), CG_GENERALPARMS(tank).mTurnSpeed(),
		                        CG_GENERALPARMS(tank).mMaxTurnAngle());
	} else {
		tank->mTargetVelocity = Vector3f(0.0f);
		tank->finishMotion();
	}

	if (tank->mHealth <= 0.0f) {
		transit(tank, TANK_Dead, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(tank, false) || tank->isAttackable(false)) {
		tank->mTargetVelocity = Vector3f(0.0f);
		tank->finishMotion();
	} else {
		Creature* target
		    = EnemyFunc::getNearestPikminOrNavi(tank, viewAngle, CG_GENERALPARMS(tank).mSightRadius(), nullptr, nullptr, nullptr);
		if (target) {
			tank->mTargetCreature = target;
			tank->mCautionTimer   = 0.0f;
			tank->mTargetVelocity = Vector3f(0.0f);
			tank->finishMotion();
		}
	}

	tank->mWalkTimer += sys->mDeltaTime;

	if (tank->mCurAnim->mIsPlaying && tank->mCurAnim->mType == KEYEVENT_END) {
		if (tank->mHealth <= 0.0f) {
			transit(tank, TANK_Dead, nullptr);
			return;
		}

		if (EnemyFunc::isStartFlick(tank, false)) {
			transit(tank, TANK_Flick, nullptr);
			return;
		}

		if (tank->isAttackable(false)) {
			transit(tank, TANK_Attack, nullptr);
			return;
		}

		Creature* target = tank->mTargetCreature;
		if (target) {
			if (tank->isTargetOutsideView(target, CG_GENERALPARMS(tank).mPrivateRadius(), CG_GENERALPARMS(tank).mSightRadius(),
			                              CG_GENERALPARMS(tank).mFov(), viewAngle)) {
				transit(tank, TANK_Wait, nullptr);
				return;
			}

			transit(tank, TANK_ChaseTurn, nullptr);
			return;
		}

		transit(tank, TANK_Wait, nullptr);
	}
}

/**
 * @note Address: 0x802749A4
 * @note Size: 0x28
 */
void StateMove::cleanup(EnemyBase* enemy)
{
	Obj* tank = OBJ(enemy);
	tank->setAnimSpeed(30.0f);
}

/**
 * @note Address: 0x802749CC
 * @note Size: 0x104
 */
void StateMoveTurn::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tank = OBJ(enemy);
	tank->mTurnGoalDir += PI / 3;
	f32 turnGoalDir       = tank->mTurnGoalDir;
	f32 homeX             = tank->mHomePosition.x;
	f32 homeY             = tank->mHomePosition.y;
	f32 homeZ             = tank->mHomePosition.z;
	tank->mGoalPosition   = Vector3f(CG_GENERALPARMS(tank).mTerritoryRadius() * sinf(turnGoalDir) + homeX, homeY,
	                                 CG_GENERALPARMS(tank).mTerritoryRadius() * cosf(turnGoalDir) + homeZ);
	tank->mTargetCreature = nullptr;
	tank->mTargetVelocity = Vector3f(0.0f);
	tank->startMotion(TANKANIM_Turn, nullptr);
}

/**
 * @note Address: 0x80274AD0
 * @note Size: 0x364
 */
void StateMoveTurn::exec(EnemyBase* enemy)
{
	Obj* tank          = OBJ(enemy);
	f32 view           = tank->getViewAngle();
	Vector3f targetPos = tank->mGoalPosition;
	f32 deltaDir       = tank->turnToTarget(targetPos, CG_GENERALPARMS(tank).mTurnSpeed(), CG_GENERALPARMS(tank).mMaxTurnAngle());
	if (tank->mHealth <= 0.0f) {
		transit(enemy, TANK_Dead, nullptr);
		return;
	}
	if (EnemyFunc::isStartFlick(tank, false) || tank->isAttackable(false) || FABS(deltaDir) <= 10.0f * PI / 180) {
		tank->finishMotion();
		tank->setAnimSpeed(60.0f);
	} else {
		f32 sightRad     = CG_GENERALPARMS(tank).mSightRadius.mValue;
		Creature* target = EnemyFunc::getNearestPikminOrNavi(tank, view, sightRad, nullptr, nullptr, nullptr);
		if (target) {
			tank->finishMotion();
		}
	}
	if (enemy->mCurAnim->mIsPlaying && (u32)enemy->mCurAnim->mType == KEYEVENT_END) {
		if (tank->mHealth <= 0.0f) {
			transit(enemy, TANK_Dead, nullptr);
			return;
		}
		if (EnemyFunc::isStartFlick(tank, false)) {
			transit(enemy, TANK_Flick, nullptr);
			return;
		}
		if (tank->isAttackable(false)) {
			transit(enemy, TANK_Attack, nullptr);
			return;
		}
		f32 sightRad     = CG_GENERALPARMS(tank).mSightRadius.mValue;
		Creature* target = EnemyFunc::getNearestPikminOrNavi(tank, view, sightRad, nullptr, nullptr, nullptr);
		if (target) {
			tank->mTargetCreature = target;
			tank->mCautionTimer   = 0.0f; // some target chase timer?
			transit(enemy, TANK_ChaseTurn, nullptr);
		} else {
			transit(enemy, TANK_Move, nullptr);
		}
	}
}

/**
 * @note Address: 0x80274E34
 * @note Size: 0x28
 */
void StateMoveTurn::cleanup(EnemyBase* enemy)
{
	Obj* tank = OBJ(enemy);
	tank->setAnimSpeed(30.0f);
}

/**
 * @note Address: 0x80274E5C
 * @note Size: 0x50
 */
void StateChaseTurn::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tank             = OBJ(enemy);
	tank->mTargetVelocity = Vector3f(0.0f);
	tank->setEmotionExcitement();
	tank->startMotion(TANKANIM_Turn, nullptr);
}

/**
 * @note Address: 0x80274EAC
 * @note Size: 0x5F4
 */
void StateChaseTurn::exec(EnemyBase* enemy)
{
	Obj* tank     = OBJ(enemy);
	f32 viewAngle = tank->getViewAngle(); // f31

	if (tank->mHealth <= 0.0f) {
		transit(tank, TANK_Dead, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(tank, false) || tank->isAttackable(false)) {
		tank->finishMotion();
		tank->setAnimSpeed(60.0f);
	}

	Creature* target = tank->mTargetCreature;
	if (target) {
		tank->mCautionTimer = 0.0f;
		f32 angleDist       = tank->turnToTarget(target, CG_GENERALPARMS(tank).mTurnSpeed(), CG_GENERALPARMS(tank).mMaxTurnAngle());

		if (!target->isAlive()
		    || tank->isTargetOutOfRange(target, angleDist, CG_GENERALPARMS(tank).mPrivateRadius(), CG_GENERALPARMS(tank).mSightRadius(),
		                                CG_GENERALPARMS(tank).mFov(), viewAngle)) {
			tank->mTargetCreature = nullptr;
			tank->finishMotion();
		}
	} else {
		Vector3f targetPos = tank->mGoalPosition;
		f32 angleDist      = tank->turnToTarget(targetPos, CG_GENERALPARMS(tank).mTurnSpeed(), CG_GENERALPARMS(tank).mMaxTurnAngle());
		if (absF(angleDist) <= 10.0f * PI / 180) {
			tank->finishMotion();
		}
	}

	if (tank->mCurAnim->mIsPlaying && tank->mCurAnim->mType == KEYEVENT_END) {
		if (tank->mHealth <= 0.0f) {
			transit(tank, TANK_Dead, nullptr);
			return;
		}

		if (EnemyFunc::isStartFlick(tank, false)) {
			transit(tank, TANK_Flick, nullptr);
			return;
		}

		if (tank->isAttackable(false)) {
			transit(tank, TANK_Attack, nullptr);
			return;
		}

		Creature* target
		    = EnemyFunc::getNearestPikminOrNavi(tank, viewAngle, CG_GENERALPARMS(tank).mSightRadius(), nullptr, nullptr, nullptr);
		if (target) {
			tank->mTargetCreature = target;
			tank->mCautionTimer   = 0.0f;
			transit(tank, TANK_ChaseTurn, nullptr);
			return;
		}

		transit(tank, TANK_Wait, nullptr);
	}
}

/**
 * @note Address: 0x802754A0
 * @note Size: 0x3C
 */
void StateChaseTurn::cleanup(EnemyBase* enemy)
{
	Obj* tank = OBJ(enemy);
	tank->setEmotionCaution();
	tank->setAnimSpeed(30.0f);
}

/**
 * @note Address: 0x802754DC
 * @note Size: 0x84
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tank           = OBJ(enemy);
	tank->mIsBlowing    = false;
	tank->mAttackTimer  = 0.0f;
	tank->mCautionTimer = 0.0f;
	tank->disableEvent(0, EB_Cullable);
	tank->mTargetCreature = nullptr;
	tank->mTargetVelocity = Vector3f(0.0f);
	tank->setEmotionExcitement();
	tank->startMotion(TANKANIM_Attack, nullptr);
	tank->createChargeSE();
}

/**
 * @note Address: 0x80275564
 * @note Size: 0x1E0
 */
void StateAttack::exec(EnemyBase* enemy)
{
	Obj* tank = OBJ(enemy);
	f32 view  = tank->getViewAngle();
	if (tank->mHealth <= 0.0f) {
		transit(enemy, TANK_Dead, nullptr);
		return;
	}
	if (tank->mIsBlowing) {
		tank->isAttackable(true);
		tank->createDisChargeSE();
	}
	if (!enemy->mCurAnim->mIsPlaying)
		return;

	if ((u32)enemy->mCurAnim->mType == KEYEVENT_2) {
		tank->mIsBlowing = true;
		tank->startEffect();
		return;
	}
	if ((u32)enemy->mCurAnim->mType == KEYEVENT_END) {
		if (tank->mHealth <= 0.0f) {
			transit(enemy, TANK_Dead, nullptr);
			return;
		}
		if (EnemyFunc::isStartFlick(tank, false)) {
			transit(enemy, TANK_Flick, nullptr);
			return;
		}
		Creature* target = EnemyFunc::getNearestPikminOrNavi(tank, view, CG_GENERALPARMS(tank).mSightRadius(), nullptr, nullptr, nullptr);
		if (target) {
			tank->mTargetCreature = target;
			tank->mCautionTimer   = 0.0f;
			transit(enemy, TANK_ChaseTurn, nullptr);
			return;
		}
		transit(enemy, TANK_Wait, nullptr);
	}
}

/**
 * @note Address: 0x8027574C
 * @note Size: 0x58
 */
void StateAttack::cleanup(EnemyBase* enemy)
{
	Obj* tank = OBJ(enemy);
	tank->enableEvent(0, EB_Cullable);
	tank->mIsBlowing = false;
	tank->startYodare();
	tank->setEmotionCaution();
}

/**
 * @note Address: 0x802757A8
 * @note Size: 0x58
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tank             = OBJ(enemy);
	tank->mTargetCreature = nullptr;
	tank->mTargetVelocity = Vector3f(0.0f);
	tank->setEmotionExcitement();
	tank->startMotion(TANKANIM_Flick, nullptr);
}

/**
 * @note Address: 0x80275800
 * @note Size: 0x180
 */
void StateFlick::exec(EnemyBase* enemy)
{
	Obj* tank = OBJ(enemy);
	if (tank->mHealth <= 0.0f) {
		transit(enemy, TANK_Dead, nullptr);
		return;
	}
	if (!enemy->mCurAnim->mIsPlaying)
		return;

	if ((u32)enemy->mCurAnim->mType == KEYEVENT_2) {
		EnemyParmsBase* parms = CG_PARMS(tank);
		EnemyFunc::flickNearbyNavi(tank, parms->mGeneral.mShakeRange.mValue, parms->mGeneral.mShakeKnockback.mValue,
		                           parms->mGeneral.mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
		parms = CG_PARMS(tank);
		EnemyFunc::flickNearbyPikmin(tank, parms->mGeneral.mShakeRange.mValue, parms->mGeneral.mShakeKnockback.mValue,
		                             parms->mGeneral.mShakeDamage.mValue, tank->getFaceDir(), nullptr);
		parms = CG_PARMS(tank);
		EnemyFunc::flickStickPikmin(tank, parms->mGeneral.mShakeChance.mValue, parms->mGeneral.mShakeKnockback.mValue,
		                            parms->mGeneral.mShakeDamage.mValue, tank->getFaceDir(), nullptr);
		tank->mFlickTimer = 0.0f;
	}

	if ((u32)enemy->mCurAnim->mType == KEYEVENT_END) {
		if (tank->mHealth <= 0.0f) {
			transit(enemy, TANK_Dead, nullptr);
		} else {
			transit(enemy, TANK_Attack, nullptr);
		}
	}
}

/**
 * @note Address: 0x80275980
 * @note Size: 0x24
 */
void StateFlick::cleanup(EnemyBase* enemy)
{
	Obj* tank = OBJ(enemy);
	tank->setEmotionCaution();
}
} // namespace Tank
} // namespace Game

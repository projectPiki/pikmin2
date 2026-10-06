#include "Game/Entities/Baby.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "efx/TBaby.h"

namespace Game {
namespace Baby {
/**
 * @note Address: 0x8028C584
 * @note Size: 0x1D0
 */
void FSM::init(EnemyBase* enemy)
{
	create(BABY_Count), registerState(new StateDead);
	registerState(new StatePress);
	registerState(new StateBorn);
	registerState(new StateMove);
	registerState(new StateAttack);
}

/**
 * @note Address: 0x8028C754
 * @note Size: 0x58
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* baby = OBJ(enemy);
	baby->createHoney();
	baby->deathProcedure();
	baby->mTargetVelocity = Vector3f(0.0f);
	baby->startMotion(BABYANIM_Dead, nullptr);
}

/**
 * @note Address: 0x8028C7AC
 * @note Size: 0x44
 */
void StateDead::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && (u32)enemy->mCurAnim->mType == KEYEVENT_END) {
		enemy->kill(nullptr);
	}
}

/**
 * @note Address: 0x8028C7F0
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x8028C7F4
 * @note Size: 0xDC
 */
void StatePress::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* baby = OBJ(enemy);
	baby->createHoney();
	baby->mHealth = 0.0f;
	baby->deathProcedure();
	baby->mTargetVelocity = Vector3f(0.0f);
	baby->startMotion(BABYANIM_DeadPress, nullptr);
	Vector3f position = baby->getPosition();

	efx::Arg fxArg(position);
	efx::TBabyBecha bechaEffect;

	bechaEffect.create(&fxArg);
}

/**
 * @note Address: 0x8028C8D0
 * @note Size: 0x44
 */
void StatePress::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && (u32)enemy->mCurAnim->mType == KEYEVENT_END) {
		enemy->kill(nullptr);
	}
}

/**
 * @note Address: 0x8028C914
 * @note Size: 0x4
 */
void StatePress::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x8028C918
 * @note Size: 0x40
 */
void StateBorn::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* baby = OBJ(enemy);
	baby->createBornEffect();
	baby->startMotion(BABYANIM_Born, nullptr);
}

/**
 * @note Address: 0x8028C958
 * @note Size: 0xD8
 */
void StateBorn::exec(EnemyBase* enemy)
{
	if (enemy->mFloorTriangle) {

		Vector3f vec = enemy->getTargetVelocity();
		vec.x *= 0.95f;
		vec.z *= 0.95f;
		enemy->setTargetVelocity(vec);

		enemy->finishMotion();
	}

	if (enemy->mCurAnim->mIsPlaying && (u32)enemy->mCurAnim->mType == KEYEVENT_END) {
		if (enemy->mHealth <= 0.0f) {
			transit(enemy, BABY_Dead, nullptr);

		} else {
			transit(enemy, BABY_Move, nullptr);
		}
	}
}

/**
 * @note Address: 0x8028CA30
 * @note Size: 0x4
 */
void StateBorn::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x8028CA34
 * @note Size: 0x34
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* baby             = OBJ(enemy);
	baby->mTargetCreature = nullptr;
	baby->startMotion(BABYANIM_Move, nullptr);
}

/**
 * @note Address: 0x8028CA68
 * @note Size: 0x468
 */
// NON-MATCHING
void StateMove::exec(EnemyBase* enemy)
{
	Obj* baby = OBJ(enemy);
	if (baby->mHealth <= 0.0f) {
		transit(baby, BABY_Dead, nullptr);
		return;
	}

	Creature* creature = EnemyFunc::getNearestPikminOrNavi(baby, CG_GENERALPARMS(baby).mViewAngle.mValue,
	                                                       CG_GENERALPARMS(baby).mSightRadius.mValue, nullptr, nullptr, nullptr);

	if (creature) {

		// Vector3f targetPos = creature->getPosition();
		f32 angleDist = baby->turnToTarget(creature, CG_GENERALPARMS(baby).mTurnSpeed(), CG_GENERALPARMS(baby).mMaxTurnAngle());

		if (isAngleWithin(angleDist, CG_GENERALPARMS(baby).mMaxAttackAngle())) {
			baby->setTargetSpeed(CG_GENERALPARMS(baby).mMoveSpeed());
		} else {
			baby->setTargetSpeed(0.25f * CG_GENERALPARMS(baby).mMoveSpeed());
		}

		if (baby->isTargetAttackable(creature, angleDist, CG_GENERALPARMS(baby).mMaxAttackRange(),
		                             CG_GENERALPARMS(baby).mMaxAttackAngle())) {
			transit(baby, BABY_Attack, nullptr);
		}

	} else {
		baby->moveNoTarget();
	}

	if (baby->mCurAnim->mIsPlaying && (u32)baby->mCurAnim->mType == KEYEVENT_END) {
		transit(baby, BABY_Move, nullptr);
	}
}

/**
 * @note Address: 0x8028CED0
 * @note Size: 0x4
 */
void StateMove::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x8028CED4
 * @note Size: 0x50
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->setEmotionExcitement();
	enemy->startMotion(BABYANIM_Attack, nullptr);
}

/**
 * @note Address: 0x8028CF24
 * @note Size: 0x104
 */
void StateAttack::exec(EnemyBase* enemy)
{
	Obj* baby = OBJ(enemy);
	if (baby->mCurAnim->mIsPlaying) {
		if ((u32)baby->mCurAnim->mType == KEYEVENT_2) {
			Parms* parms = CG_PARMS(baby);
			EnemyFunc::attackNavi(baby, parms->mGeneral.mAttackRadius.mValue, parms->mGeneral.mAttackHitAngle.mValue,
			                      parms->mGeneral.mAttackDamage.mValue, nullptr, nullptr);
			EnemyFunc::eatPikmin(baby, nullptr);
			int slotCount = baby->getSlotPikiNum();
			if (slotCount == 0) {
				baby->startMotion(BABYANIM_AttackFail, nullptr);
			}
		} else if ((u32)baby->mCurAnim->mType == KEYEVENT_3) {
			Parms* parms = CG_PARMS(baby);
			EnemyFunc::swallowPikmin(baby, parms->mProperParms.mPoisonDamage.mValue, nullptr);
		} else if ((u32)baby->mCurAnim->mType == KEYEVENT_END) {
			if (baby->mHealth <= 0.0f) {
				transit(baby, BABY_Dead, nullptr);
			} else {
				transit(baby, BABY_Move, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x8028D028
 * @note Size: 0x24
 */
void StateAttack::cleanup(EnemyBase* enemy)
{
	enemy->setEmotionCaution();
}
} // namespace Baby
} // namespace Game

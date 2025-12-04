#include "Game/Entities/Kabuto.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "efx/THebi.h"

namespace Game {
namespace Kabuto {

static const char unusedKabutoName[] = "246-KabutoState";

/**
 * @note Address: 0x802E1834
 * @note Size: 0x480
 */
void Kabuto::FSM::init(EnemyBase* enemy)
{
	create(KABUTO_StateCount);
	registerState(new StateDead);
	registerState(new StateWait);
	registerState(new StateTurn);
	registerState(new StateMove);
	registerState(new StateFlick);
	registerState(new StateAttack);
	registerState(new StateFixStay);
	registerState(new StateFixAppear);
	registerState(new StateFixHide);
	registerState(new StateFixWait);
	registerState(new StateFixTurn);
	registerState(new StateFixAttack);
	registerState(new StateFixFlick);
}

/**
 * @note Address: 0x802E1CB4
 * @note Size: 0xA0
 */
void Kabuto::StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kabuto = OBJ(enemy);
	kabuto->deathProcedure();
	kabuto->disableEvent(0, EB_Cullable);
	kabuto->mTargetVelocity = Vector3f(0.0f);
	if (kabuto->getEnemyTypeID() == EnemyTypeID::EnemyID_Fkabuto) {
		kabuto->startMotion(KABUTOANIM_FixDead, nullptr);
		kabuto->finishWaitEffect();
	} else {
		kabuto->startMotion(KABUTOANIM_Dead, nullptr);
	}
}

/**
 * @note Address: 0x802E1D60
 * @note Size: 0x44
 */
void Kabuto::StateDead::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		enemy->kill(nullptr);
	}
}

/**
 * @note Address: 0x802E1DA4
 * @note Size: 0x4
 */
void Kabuto::StateDead::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x802E1DA8
 * @note Size: 0x6C
 */
void Kabuto::StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kabuto         = OBJ(enemy);
	kabuto->mStateTimer = 0.0f;
	kabuto->setRandTarget();
	kabuto->mNextState = KABUTO_NULL;
	kabuto->enableEvent(0, EB_Constrained);
	kabuto->mTargetVelocity = Vector3f(0.0f);
	kabuto->startMotion(KABUTOANIM_Wait, nullptr);
}

/**
 * @note Address: 0x802E1E14
 * @note Size: 0x10C
 */
void Kabuto::StateWait::exec(EnemyBase* enemy)
{
	Obj* kabuto = OBJ(enemy);
	if (kabuto->mHealth <= 0.0f) {
		transit(kabuto, KABUTO_Dead, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(kabuto, false)) {
		kabuto->mNextState = KABUTO_Flick;
		kabuto->finishMotion();
	} else if (kabuto->mStateTimer > 3.0f || kabuto->getSearchedTarget()) {
		kabuto->mNextState = KABUTO_Turn;
		kabuto->finishMotion();
	}

	kabuto->mStateTimer += sys->mDeltaTime;

	if (kabuto->mCurAnim->mIsPlaying && kabuto->mCurAnim->mType == KEYEVENT_END) {
		transit(kabuto, kabuto->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x802E1F20
 * @note Size: 0x24
 */
void Kabuto::StateWait::cleanup(EnemyBase* enemy)
{
	enemy->constraintOff();
}

/**
 * @note Address: 0x802E1F44
 * @note Size: 0x54
 */
void Kabuto::StateTurn::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kabuto         = OBJ(enemy);
	kabuto->mStateTimer = 0.0f;
	kabuto->mNextState  = KABUTO_NULL;
	kabuto->enableEvent(0, EB_Constrained);
	kabuto->mTargetVelocity = Vector3f(0.0f);
	kabuto->startMotion(KABUTOANIM_Pivot, nullptr);
}

/**
 * @note Address: 0x802E1F98
 * @note Size: 0x340
 */
void Kabuto::StateTurn::exec(EnemyBase* enemy)
{
	Obj* kabuto = OBJ(enemy);
	if (kabuto->mHealth <= 0.0f) {
		transit(kabuto, KABUTO_Dead, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(kabuto, false)) {
		kabuto->mNextState = KABUTO_Flick;
		kabuto->finishMotion();
	} else {
		Creature* target = kabuto->getSearchedTarget();
		if (target) {
			kabuto->mAlertTimer = 0.0f;
			Vector3f targetPos  = target->getPosition();
			kabuto->turnToTarget(targetPos, CG_GENERALPARMS(kabuto).mTurnSpeed(), CG_GENERALPARMS(kabuto).mMaxTurnAngle());
			if (kabuto->isAttackableTarget()) {
				kabuto->mNextState = KABUTO_Attack;
				kabuto->finishMotion();
			}
		} else {
			Vector3f targetPos = kabuto->mTargetPosition;
			f32 angle = kabuto->turnToTarget(targetPos, CG_GENERALPARMS(kabuto).mTurnSpeed(), CG_GENERALPARMS(kabuto).mMaxTurnAngle());
			f64 abs   = fabs(angle);
			if ((f32)abs <= PI / 6.0f) {
				kabuto->mNextState = KABUTO_Move;
				kabuto->finishMotion();
			}
		}
	}

	if (kabuto->mCurAnim->mIsPlaying && kabuto->mCurAnim->mType == KEYEVENT_END) {
		transit(kabuto, kabuto->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x802E22D8
 * @note Size: 0x24
 */
void Kabuto::StateTurn::cleanup(EnemyBase* enemy)
{
	enemy->constraintOff();
}

/**
 * @note Address: 0x802E22FC
 * @note Size: 0x50
 */
void Kabuto::StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kabuto             = OBJ(enemy);
	kabuto->mStateTimer     = 0.0f;
	kabuto->mIsWalking      = false;
	kabuto->mNextState      = KABUTO_NULL;
	kabuto->mTargetVelocity = Vector3f(0.0f);
	kabuto->startMotion(KABUTOANIM_Move, nullptr);
}

/**
 * @note Address: 0x802E234C
 * @note Size: 0x38C
 */
void Kabuto::StateMove::exec(EnemyBase* enemy)
{
	Obj* kabuto = OBJ(enemy);
	if (kabuto->mHealth <= 0.0f) {
		transit(kabuto, KABUTO_Dead, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(kabuto, false)) {
		kabuto->mNextState = KABUTO_Flick;
		kabuto->finishMotion();
	} else {
		Creature* target = kabuto->getSearchedTarget();
		if (target) {
			kabuto->mAlertTimer = 0.0f;
			kabuto->mNextState  = KABUTO_Turn;
			kabuto->finishMotion();
			if (kabuto->isAttackableTarget()) {
				kabuto->mNextState = KABUTO_Attack;
				kabuto->finishMotion();
			}
		} else {
			Vector3f pos       = kabuto->getPosition();
			Vector3f targetPos = kabuto->mTargetPosition;
			if (kabuto->mStateTimer > 6.0f || sqrDistanceXZ(pos, targetPos) < 625.0f) {
				kabuto->mNextState = KABUTO_Wait;
				kabuto->finishMotion();
			} else {

				if (kabuto->turnToTarget(targetPos, CG_GENERALPARMS(kabuto).mTurnSpeed(), CG_GENERALPARMS(kabuto).mMaxTurnAngle(), 30.0f)) {
					if (kabuto->mIsWalking) {
						kabuto->setTargetSpeed(CG_GENERALPARMS(kabuto).mMoveSpeed());
					}

				} else {
					kabuto->mNextState = KABUTO_Turn;
					kabuto->finishMotion();
				}
			}
		}
	}

	if (kabuto->isFinishMotion()) {
		kabuto->mIsWalking = false;
		kabuto->enableEvent(0, EB_Constrained);
		kabuto->mTargetVelocity = Vector3f(0.0f);
	}

	kabuto->mStateTimer += sys->mDeltaTime;

	if (kabuto->mCurAnim->mIsPlaying) {
		if (kabuto->mCurAnim->mType == KEYEVENT_LOOP_START) {
			kabuto->mIsWalking = true;
		} else if (kabuto->mCurAnim->mType == KEYEVENT_END) {
			transit(kabuto, kabuto->mNextState, nullptr);
		}
	}
}

/**
 * @note Address: 0x802E26D8
 * @note Size: 0x24
 */
void Kabuto::StateMove::cleanup(EnemyBase* enemy)
{
	enemy->constraintOff();
}

/**
 * @note Address: 0x802E26FC
 * @note Size: 0x68
 */
void Kabuto::StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kabuto         = OBJ(enemy);
	kabuto->mStateTimer = 0.0f;
	kabuto->mNextState  = KABUTO_NULL;
	kabuto->enableEvent(0, EB_Constrained);
	kabuto->mTargetVelocity = Vector3f(0.0f);
	kabuto->setEmotionExcitement();
	kabuto->startMotion(KABUTOANIM_Flick, nullptr);
}

/**
 * @note Address: 0x802E2764
 * @note Size: 0x16C
 */
void Kabuto::StateFlick::exec(EnemyBase* enemy)
{
	Obj* kabuto = OBJ(enemy);
	if (kabuto->mCurAnim->mIsPlaying) {
		if (kabuto->mCurAnim->mType == KEYEVENT_2) {
			EnemyFunc::flickNearbyNavi(kabuto, CG_GENERALPARMS(kabuto).mShakeRange.mValue, CG_GENERALPARMS(kabuto).mShakeKnockback.mValue,
			                           CG_GENERALPARMS(kabuto).mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
			EnemyFunc::flickNearbyPikmin(kabuto, CG_GENERALPARMS(kabuto).mShakeRange.mValue, CG_GENERALPARMS(kabuto).mShakeKnockback.mValue,
			                             CG_GENERALPARMS(kabuto).mShakeDamage.mValue, kabuto->getFaceDir(), nullptr);
			EnemyFunc::flickStickPikmin(kabuto, CG_GENERALPARMS(kabuto).mShakeChance.mValue, CG_GENERALPARMS(kabuto).mShakeKnockback.mValue,
			                            CG_GENERALPARMS(kabuto).mShakeDamage.mValue, kabuto->getFaceDir(), nullptr);
			kabuto->mFlickTimer = 0.0f;

			if (kabuto->mHealth <= 0.0f) {
				transit(kabuto, KABUTO_Dead, nullptr);
			}
		} else if (kabuto->mCurAnim->mType == KEYEVENT_END) {
			if (kabuto->mHealth <= 0.0f) {
				transit(kabuto, KABUTO_Dead, nullptr);
			} else {
				transit(kabuto, KABUTO_Attack, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x802E28D0
 * @note Size: 0x38
 */
void Kabuto::StateFlick::cleanup(EnemyBase* enemy)
{
	enemy->constraintOff();
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x802E2908
 * @note Size: 0x7C
 */
void Kabuto::StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kabuto         = OBJ(enemy);
	kabuto->mStateTimer = 0.0f;
	kabuto->mAlertTimer = 0.0f;
	kabuto->mNextState  = KABUTO_NULL;
	kabuto->enableEvent(0, EB_Constrained);
	kabuto->setEmotionExcitement();
	kabuto->disableEvent(0, EB_Cullable);
	kabuto->mTargetVelocity = Vector3f(0.0f);
	kabuto->startMotion(KABUTOANIM_Attack, nullptr);
}

/**
 * @note Address: 0x802E2984
 * @note Size: 0x128
 */
void Kabuto::StateAttack::exec(EnemyBase* enemy)
{
	Obj* kabuto = OBJ(enemy);
	if (kabuto->mHealth <= 0.0f) {
		transit(kabuto, KABUTO_Dead, nullptr);
		return;
	}

	if (kabuto->mCurAnim->mIsPlaying) {
		if (kabuto->mCurAnim->mType == KEYEVENT_2) {
			kabuto->createStoneAttack();
			kabuto->createRockEmitEffect();

		} else if (kabuto->mCurAnim->mType == KEYEVENT_END) {
			if (EnemyFunc::isStartFlick(kabuto, false)) {
				transit(kabuto, KABUTO_Flick, nullptr);
				return;
			}

			if (kabuto->getSearchedTarget()) {
				transit(kabuto, KABUTO_Turn, nullptr);
				return;
			}

			transit(kabuto, KABUTO_Wait, nullptr);
		}
	}
}

/**
 * @note Address: 0x802E2AAC
 * @note Size: 0x44
 */
void Kabuto::StateAttack::cleanup(EnemyBase* enemy)
{
	enemy->constraintOff();
	enemy->enableEvent(0, EB_Cullable);
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x802E2AF0
 * @note Size: 0xB8
 */
void Kabuto::StateFixStay::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kabuto            = OBJ(enemy);
	kabuto->mNextState     = KABUTO_NULL;
	kabuto->mIsUnderground = true;
	kabuto->setAtari(false);
	kabuto->enableEvent(0, EB_BitterImmune);
	kabuto->enableEvent(0, EB_Invulnerable);
	kabuto->disableEvent(0, EB_LifegaugeVisible);
	kabuto->disableEvent(0, EB_Animating);
	kabuto->enableEvent(0, EB_ModelHidden);
	kabuto->startMotion(KABUTOANIM_FixAppear, nullptr);
	kabuto->stopMotion();
	kabuto->finishWaitEffect();
}

/**
 * @note Address: 0x802E2BA8
 * @note Size: 0xE4
 */
void Kabuto::StateFixStay::exec(EnemyBase* enemy)
{
	Obj* kabuto      = OBJ(enemy);
	Creature* target = kabuto->getSearchedTarget();
	if (target) {
		Vector3f targetPos  = target->getPosition();
		Vector3f pos        = kabuto->getPosition();
		kabuto->mFaceDir    = JMAAtan2Radian(targetPos.x - pos.x, targetPos.z - pos.z);
		kabuto->mRotation.y = kabuto->mFaceDir;
		transit(kabuto, KABUTO_FixAppear, nullptr);
	}
}

/**
 * @note Address: 0x802E2C8C
 * @note Size: 0x84
 */
void Kabuto::StateFixStay::cleanup(EnemyBase* enemy)
{
	Obj* kabuto            = OBJ(enemy);
	kabuto->mIsUnderground = false;
	kabuto->setAtari(true);
	kabuto->disableEvent(0, EB_BitterImmune);
	kabuto->disableEvent(0, EB_Invulnerable);
	kabuto->enableEvent(0, EB_LifegaugeVisible);
	kabuto->enableEvent(0, EB_Animating);
	kabuto->disableEvent(0, EB_ModelHidden);
}

/**
 * @note Address: 0x802E2D10
 * @note Size: 0x18C
 */
void Kabuto::StateFixAppear::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kabuto = OBJ(enemy);
	kabuto->lifeIncrement();
	kabuto->mNextState  = KABUTO_NULL;
	kabuto->mAlertTimer = 0.0f;
	kabuto->enableEvent(0, EB_NoInterrupt);
	kabuto->setEmotionExcitement();
	kabuto->startMotion(KABUTOANIM_FixAppear, nullptr);

	Vector3f pos = kabuto->getPosition();
	efx::Arg fxArg(pos);
	efx::THebiAphd_kkabuto_appear appearFX;

	appearFX.create(&fxArg);

	kabuto->finishWaitEffect();
	EnemyFunc::flickNearbyNavi(kabuto, CG_GENERALPARMS(kabuto).mShakeRange.mValue, CG_GENERALPARMS(kabuto).mShakeKnockback.mValue,
	                           CG_GENERALPARMS(kabuto).mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
	EnemyFunc::flickNearbyPikmin(kabuto, CG_GENERALPARMS(kabuto).mShakeRange.mValue, CG_GENERALPARMS(kabuto).mShakeKnockback.mValue,
	                             CG_GENERALPARMS(kabuto).mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
	EnemyFunc::flickStickPikmin(kabuto, CG_GENERALPARMS(kabuto).mShakeChance.mValue, CG_GENERALPARMS(kabuto).mShakeKnockback.mValue,
	                            CG_GENERALPARMS(kabuto).mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
}

/**
 * @note Address: 0x802E2E9C
 * @note Size: 0x244
 */
void Kabuto::StateFixAppear::exec(EnemyBase* enemy)
{
	Obj* kabuto = OBJ(enemy);
	if (kabuto->mCurAnim->mIsPlaying && kabuto->mCurAnim->mType == KEYEVENT_END) {
		if (kabuto->mHealth <= 0.0f) {
			transit(kabuto, KABUTO_Dead, nullptr);
			return;
		}

		if (EnemyFunc::isStartFlick(kabuto, false)) {
			transit(kabuto, KABUTO_FixFlick, nullptr);
			return;
		}

		if (kabuto->isAttackableTarget()) {
			transit(kabuto, KABUTO_FixAttack, nullptr);
			return;
		}

		Creature* target = kabuto->getSearchedTarget();
		if (target) {
			f32 angle = kabuto->getAngDist(target);
			f32 limit = CG_GENERALPARMS(kabuto).mMaxAttackAngle();
			if (FABS(angle) <= PI * (DEG2RAD * limit)) {
				transit(kabuto, KABUTO_FixWait, nullptr);
				return;
			} else {
				transit(kabuto, KABUTO_FixTurn, nullptr);
				return;
			}
		}

		transit(kabuto, KABUTO_FixHide, nullptr);
	}
}

/**
 * @note Address: 0x802E30E0
 * @note Size: 0x10
 */
void Kabuto::StateFixAppear::cleanup(EnemyBase* enemy)
{
	enemy->disableEvent(0, EB_NoInterrupt);
}

/**
 * @note Address: 0x802E30F0
 * @note Size: 0x130
 */
void Kabuto::StateFixHide::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kabuto            = OBJ(enemy);
	kabuto->mNextState     = KABUTO_NULL;
	kabuto->mIsUnderground = true;
	kabuto->enableEvent(0, EB_BitterImmune);
	kabuto->enableEvent(0, EB_Invulnerable);
	kabuto->setEmotionCaution();
	kabuto->startMotion(KABUTOANIM_FixHide, nullptr);

	Vector3f pos = kabuto->getPosition();
	efx::Arg fxArg(pos);
	efx::THebiAphd_kkabuto_dive diveFX;

	diveFX.create(&fxArg);

	kabuto->finishWaitEffect();
}

/**
 * @note Address: 0x802E3220
 * @note Size: 0x90
 */
void Kabuto::StateFixHide::exec(EnemyBase* enemy)
{
	Obj* kabuto = OBJ(enemy);
	EnemyFunc::flickStickPikmin(kabuto, CG_GENERALPARMS(kabuto).mShakeChance.mValue, CG_GENERALPARMS(kabuto).mShakeKnockback.mValue,
	                            CG_GENERALPARMS(kabuto).mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);

	if (kabuto->mCurAnim->mIsPlaying && kabuto->mCurAnim->mType == KEYEVENT_END) {
		transit(kabuto, KABUTO_FixStay, nullptr);
	}
}

/**
 * @note Address: 0x802E32B0
 * @note Size: 0x24
 */
void Kabuto::StateFixHide::cleanup(EnemyBase* enemy)
{
	Obj* kabuto            = OBJ(enemy);
	kabuto->mIsUnderground = false;
	enemy->disableEvent(0, EB_Invulnerable);
	enemy->disableEvent(0, EB_BitterImmune);
}

/**
 * @note Address: 0x802E32D4
 * @note Size: 0x54
 */
void Kabuto::StateFixWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kabuto        = OBJ(enemy);
	kabuto->mNextState = KABUTO_NULL;
	kabuto->startMotion(KABUTOANIM_FixWait, nullptr);
	kabuto->startWaitEffect();
}

/**
 * @note Address: 0x802E332C
 * @note Size: 0x204
 */
void Kabuto::StateFixWait::exec(EnemyBase* enemy)
{
	Obj* kabuto = OBJ(enemy);
	if (kabuto->mHealth <= 0.0f) {
		transit(kabuto, KABUTO_Dead, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(kabuto, false)) {
		kabuto->mNextState = KABUTO_FixFlick;
		kabuto->finishMotion();
	} else if (kabuto->isAttackableTarget()) {
		kabuto->mNextState = KABUTO_FixAttack;
		kabuto->finishMotion();
	} else {
		Creature* target = kabuto->getSearchedTarget();
		if (target) {
			f32 angle = kabuto->getAngDist(target);
			f32 limit = CG_GENERALPARMS(kabuto).mMaxAttackAngle();
			if (FABS(angle) <= PI * (DEG2RAD * limit)) {
				kabuto->mNextState = KABUTO_FixWait;
			} else {
				kabuto->mNextState = KABUTO_FixTurn;
				kabuto->finishMotion();
			}
		} else {
			kabuto->mNextState = KABUTO_FixHide;
		}
	}

	if (kabuto->mCurAnim->mIsPlaying && kabuto->mCurAnim->mType == KEYEVENT_END) {
		transit(kabuto, kabuto->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x802E3530
 * @note Size: 0x4
 */
void Kabuto::StateFixWait::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x802E3534
 * @note Size: 0x68
 */
void Kabuto::StateFixTurn::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kabuto        = OBJ(enemy);
	kabuto->mNextState = KABUTO_NULL;
	kabuto->startMotion(KABUTOANIM_FixPivot, nullptr);
	kabuto->startWaitEffect();
	kabuto->startRotateEffect();
}

/**
 * @note Address: 0x802E35A0
 * @note Size: 0x290
 */
void Kabuto::StateFixTurn::exec(EnemyBase* enemy)
{
	Obj* kabuto = OBJ(enemy);
	if (kabuto->mHealth <= 0.0f) {
		transit(kabuto, KABUTO_Dead, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(kabuto, false)) {
		kabuto->mNextState = KABUTO_FixFlick;
		kabuto->finishMotion();
	} else {
		Creature* target = kabuto->getSearchedTarget();
		if (target) {
			kabuto->mAlertTimer = 0.0f;
			Vector3f targetPos  = target->getPosition();
			f32 angle = kabuto->turnToTarget(targetPos, CG_GENERALPARMS(kabuto).mTurnSpeed(), CG_GENERALPARMS(kabuto).mMaxTurnAngle());
			if (kabuto->isAttackableTarget()) {
				kabuto->mNextState = KABUTO_FixAttack;
				kabuto->finishMotion();
			} else {
				f32 limit = CG_GENERALPARMS(kabuto).mMaxAttackAngle();
				if (FABS(angle) <= PI * (DEG2RAD * limit)) {
					kabuto->mNextState = KABUTO_FixWait;
					kabuto->finishMotion();
				} else {
					kabuto->mNextState = KABUTO_FixTurn;
				}
			}
		} else {
			kabuto->mNextState = KABUTO_FixHide;
			kabuto->finishMotion();
		}
	}

	if (kabuto->mCurAnim->mIsPlaying && kabuto->mCurAnim->mType == KEYEVENT_END) {
		transit(kabuto, kabuto->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x802E3830
 * @note Size: 0x30
 */
void Kabuto::StateFixTurn::cleanup(EnemyBase* enemy)
{
	Obj* kabuto = OBJ(enemy);
	kabuto->finishRotateEffect();
}

/**
 * @note Address: 0x802E3864
 * @note Size: 0x68
 */
void Kabuto::StateFixAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kabuto         = OBJ(enemy);
	kabuto->mNextState  = KABUTO_NULL;
	kabuto->mAlertTimer = 0.0f;
	kabuto->disableEvent(0, EB_Cullable);
	kabuto->startMotion(KABUTOANIM_FixAttack, nullptr);
	kabuto->startWaitEffect();
}

/**
 * @note Address: 0x802E38CC
 * @note Size: 0x260
 */
void Kabuto::StateFixAttack::exec(EnemyBase* enemy)
{
	Obj* kabuto = OBJ(enemy);
	if (kabuto->mHealth <= 0.0f) {
		transit(kabuto, KABUTO_Dead, nullptr);
		return;
	}

	if (kabuto->mCurAnim->mIsPlaying) {
		if (kabuto->mCurAnim->mType == KEYEVENT_2) {
			kabuto->createStoneAttack();
			kabuto->createRockEmitEffect();

		} else if (kabuto->mCurAnim->mType == KEYEVENT_END) {
			if (EnemyFunc::isStartFlick(kabuto, false)) {
				transit(kabuto, KABUTO_FixFlick, nullptr);
				return;
			}

			if (kabuto->isAttackableTarget()) {
				transit(kabuto, KABUTO_FixAttack, nullptr);
				return;
			}

			Creature* target = kabuto->getSearchedTarget();
			if (target) {
				f32 angle = kabuto->getAngDist(target);
				f32 limit = CG_GENERALPARMS(kabuto).mMaxAttackAngle();
				if (FABS(angle) <= PI * (DEG2RAD * limit)) {
					transit(kabuto, KABUTO_FixWait, nullptr);
				} else {
					transit(kabuto, KABUTO_FixTurn, nullptr);
				}
			} else {
				transit(kabuto, KABUTO_FixHide, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x802E3B2C
 * @note Size: 0x4
 */
void Kabuto::StateFixAttack::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x802E3B30
 * @note Size: 0x54
 */
void Kabuto::StateFixFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kabuto        = OBJ(enemy);
	kabuto->mNextState = KABUTO_NULL;
	kabuto->startMotion(KABUTOANIM_FixFlick, nullptr);
	kabuto->startWaitEffect();
}

/**
 * @note Address: 0x802E3B84
 * @note Size: 0x16C
 */
void Kabuto::StateFixFlick::exec(EnemyBase* enemy)
{
	Obj* kabuto = OBJ(enemy);
	if (kabuto->mCurAnim->mIsPlaying) {
		if (kabuto->mCurAnim->mType == KEYEVENT_2) {
			EnemyFunc::flickNearbyNavi(kabuto, CG_GENERALPARMS(kabuto).mShakeRange.mValue, CG_GENERALPARMS(kabuto).mShakeKnockback.mValue,
			                           CG_GENERALPARMS(kabuto).mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
			EnemyFunc::flickNearbyPikmin(kabuto, CG_GENERALPARMS(kabuto).mShakeRange.mValue, CG_GENERALPARMS(kabuto).mShakeKnockback.mValue,
			                             CG_GENERALPARMS(kabuto).mShakeDamage.mValue, kabuto->getFaceDir(), nullptr);
			EnemyFunc::flickStickPikmin(kabuto, CG_GENERALPARMS(kabuto).mShakeChance.mValue, CG_GENERALPARMS(kabuto).mShakeKnockback.mValue,
			                            CG_GENERALPARMS(kabuto).mShakeDamage.mValue, kabuto->getFaceDir(), nullptr);
			kabuto->mFlickTimer = 0.0f;

			if (kabuto->mHealth <= 0.0f) {
				transit(kabuto, KABUTO_Dead, nullptr);
			}
		} else if (kabuto->mCurAnim->mType == KEYEVENT_END) {
			if (kabuto->mHealth <= 0.0f) {
				transit(kabuto, KABUTO_Dead, nullptr);
			} else {
				transit(kabuto, KABUTO_FixAttack, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x802E3CF0
 * @note Size: 0x4
 */
void Kabuto::StateFixFlick::cleanup(EnemyBase* enemy)
{
}

} // namespace Kabuto
} // namespace Game

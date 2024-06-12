#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/Entities/PanModokiBase.h"
#include "Game/Stickers.h"

namespace Game {
namespace PanModokiBase {

/**
 * @note Address: 0x8034C93C
 * @note Size: 0x1BC
 */
void FSM::init(EnemyBase* enemy)
{
	create(PANMODOKI_StateCount);
	registerState(new StateDead(PANMODOKI_Dead));
	registerState(new StateWalk(PANMODOKI_Walk));
	registerState(new StateBack(PANMODOKI_Back));
	registerState(new StatePulled(PANMODOKI_Pulled));
	registerState(new StateAppear(PANMODOKI_Appear));
	registerState(new StateHide(PANMODOKI_Hide));
	registerState(new StateDamage(PANMODOKI_Damage));
	registerState(new StateWait(PANMODOKI_Wait));
	registerState(new StateStick(PANMODOKI_Stick));
	registerState(new StateSucked(PANMODOKI_Sucked));
	registerState(new StateCarryEnd(PANMODOKI_CarryEnd));
}

/**
 * @note Address: 0x8034CAF8
 * @note Size: 0x3C
 */
StateDead::StateDead(int stateID)
    : State(stateID)
{
	mName = "dead";
}

/**
 * @note Address: 0x8034CB34
 * @note Size: 0x90
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* panModoki = OBJ(enemy);
	if (panModoki->getCarryTarget()) {
		panModoki->endStick();
		panModoki->mTargetCreature = nullptr;
	}

	panModoki->startMotion(PANMODOKIANIM_Dead, nullptr);
	panModoki->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed);
	panModoki->deathProcedure();
	panModoki->mCurrentVelocity = Vector3f(0.0f);
	panModoki->mTargetVelocity  = Vector3f(0.0f);
	panModoki->killNest();
}

/**
 * @note Address: 0x8034CBC4
 * @note Size: 0x58
 */
void StateDead::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying) {
		if ((u32)enemy->mCurAnim->mType == KEYEVENT_2) {
			OBJ(enemy)->boundEffect();

		} else if ((u32)enemy->mCurAnim->mType == KEYEVENT_END) {
			enemy->kill(nullptr);
		}
	}
}

/**
 * @note Address: 0x8034CC1C
 * @note Size: 0x3C
 */
StateWalk::StateWalk(int stateID)
    : State(stateID)
{
	mName = "walk";
}

/**
 * @note Address: 0x8034CC58
 * @note Size: 0x70
 */
void StateWalk::init(EnemyBase* enemy, StateArg* stateArg)
{
	if (enemy->getCurrAnimIndex() != PANMODOKIANIM_Walk) {
		enemy->startMotion(PANMODOKIANIM_Walk, nullptr);
		enemy->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed * CG_PROPERPARMS(enemy).mWalkAnimSpeed.mValue);
	}

	OBJ(enemy)->mNextState = PANMODOKI_NULL;
	enemy->mTargetCreature = nullptr;
}

/**
 * @note Address: 0x8034CCC8
 * @note Size: 0x10C
 */
void StateWalk::exec(EnemyBase* enemy)
{
	if (enemy->mHealth <= 0.0f) {
		transit(enemy, PANMODOKI_Dead, nullptr);
		return;
	}

	if (OBJ(enemy)->isReachToGoal(OBJ(enemy)->mCarrySizeDiff)) {
		OBJ(enemy)->findNextRoutePoint(false);
	}

	if (OBJ(enemy)->mNextState < 0) {
		OBJ(enemy)->walkFunc();
	}

	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		if (OBJ(enemy)->mNextState < 0) {
			transit(enemy, PANMODOKI_Walk, nullptr);
		} else {
			transit(enemy, OBJ(enemy)->mNextState, nullptr);
		}
	}
}

/**
 * @note Address: 0x8034CDD4
 * @note Size: 0x3C
 */
StateBack::StateBack(int stateID)
    : State(stateID)
{
	mName = "back";
}

/**
 * @note Address: 0x8034CE10
 * @note Size: 0x104
 */
void StateBack::init(EnemyBase* enemy, StateArg* stateArg)
{
	int animIdx = enemy->getCurrAnimIndex();
	if (animIdx != PANMODOKIANIM_Back) {
		enemy->startMotion(PANMODOKIANIM_Back, nullptr);
	}

	enemy->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed * CG_PROPERPARMS(enemy).mWalkAnimSpeed.mValue);

	if (animIdx == PANMODOKIANIM_Pulled) {
		enemy->setMotionFrame(enemy->getFirstKeyFrame());
	}

	enemy->mTargetVelocity  = Vector3f(0.0f);
	enemy->mCurrentVelocity = Vector3f(0.0f);

	Pellet* target = OBJ(enemy)->getCarryTarget();
	if (target) {
		Vector3f vel(0.0f);
		target->setVelocity(vel);
	}

	OBJ(enemy)->setPathFinder(false);
	OBJ(enemy)->_2E4       = 1;
	OBJ(enemy)->mNextState = PANMODOKI_NULL;
	_10                    = 0;
}

/**
 * @note Address: 0x8034CF14
 * @note Size: 0x4D0
 */
void StateBack::exec(EnemyBase* enemy)
{
	if (enemy->mHealth <= 0.0f) {
		transit(enemy, PANMODOKI_Dead, nullptr);
		return;
	}

	if (OBJ(enemy)->mNextState < 0) {
		if (OBJ(enemy)->isEndPathFinder()) {
			if (enemy->getCurrAnimIndex() == PANMODOKIANIM_Wait) {
				enemy->startMotion(PANMODOKIANIM_Back, nullptr);
			}
			OBJ(enemy)->carryTarget(1.0f);
		}

		if (!OBJ(enemy)->canBack()) {
			transit(enemy, PANMODOKI_Pulled, nullptr);
		} else if (!enemy->mTargetCreature) {
			enemy->finishMotion();
			OBJ(enemy)->mNextState = PANMODOKI_Walk;
		}

		if (OBJ(enemy)->isCarryToGoal()) {
			enemy->mTargetVelocity  = Vector3f(0.0f);
			enemy->mCurrentVelocity = Vector3f(0.0f);
			transit(enemy, PANMODOKI_CarryEnd, nullptr);
		} else {
			Pellet* target = OBJ(enemy)->getCarryTarget();
			if (target) {
				bool check = false;
				if ((gameSystem && gameSystem->isVersusMode() && !enemy->isStickTo() && !target->mCaptureMatrix)
				    || (target->getKind() == PelletType::Carcass && !target->isAlive())
				    || FABS(target->getPosition().y - enemy->getPosition().y) > 50.0f) {

					check = true;
				}

				if (!check) {
					Stickers stickers(target);
					Iterator<Creature> iter(&stickers);

					CI_LOOP(iter)
					{
						Creature* creature = *iter;
						if (creature->isTeki() && creature != enemy) {
							check = true;
						}
					}
				}

				if (check) {
					OBJ(enemy)->releaseCarryTarget();
					transit(enemy, PANMODOKI_Wait, nullptr);
					return;
				}
			}
		}
	}

	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		transit(enemy, OBJ(enemy)->mNextState, nullptr);
		if (OBJ(enemy)->mNextState == PANMODOKI_Pulled) {
			OBJ(enemy)->changeCarryDir(true);
		}
	}
}

/**
 * @note Address: 0x8034D3E4
 * @note Size: 0x3C
 */
StatePulled::StatePulled(int stateID)
    : State(stateID)
{
	mName = "pulled";
}

/**
 * @note Address: 0x8034D420
 * @note Size: 0xB0
 */
void StatePulled::init(EnemyBase* enemy, StateArg* stateArg)
{
	int animIdx = enemy->getCurrAnimIndex();
	enemy->startMotion(PANMODOKIANIM_Pulled, nullptr);
	enemy->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed * CG_PROPERPARMS(enemy).mWalkAnimSpeed.mValue);

	if (animIdx == PANMODOKIANIM_Back) {
		enemy->setMotionFrame(enemy->getFirstKeyFrame());
	}

	OBJ(enemy)->createPulledSmokeEffect();
	enemy->mTargetVelocity  = Vector3f(0.0f);
	enemy->mCurrentVelocity = Vector3f(0.0f);
	OBJ(enemy)->_2E4        = 0;
	OBJ(enemy)->mNextState  = PANMODOKI_NULL;
}

/**
 * @note Address: 0x8034D4D0
 * @note Size: 0x4CC
 */
void StatePulled::exec(EnemyBase* enemy)
{
	if (enemy->mHealth <= 0.0f) {
		transit(enemy, PANMODOKI_Dead, nullptr);
		return;
	}

	if (enemy->getEnemyTypeID() == EnemyTypeID::EnemyID_OoPanModoki) {
		if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_LOOP_START) {
			enemy->mSoundObj->startSound(PSSE_EN_OPAN_HIPPARARE, 0);
		}
	}

	if (OBJ(enemy)->mNextState < 0) {
		Pellet* target = OBJ(enemy)->getCarryTarget();
		if (target) {
			if (OBJ(enemy)->canBack()) {
				if (target->getStateID() != PELSTATE_Goal && target->isAlive()) {
					transit(enemy, PANMODOKI_Back, nullptr);
				}

			} else {
				bool check = false;
				if ((gameSystem && gameSystem->isVersusMode() && !enemy->isStickTo() && !target->mCaptureMatrix)
				    || (target->getKind() == PelletType::Carcass && !target->isAlive())
				    || FABS(target->getPosition().y - enemy->getPosition().y) > 50.0f) {

					check = true;
				}

				if (!check) {
					Stickers stickers(target);
					Iterator<Creature> iter(&stickers);

					CI_LOOP(iter)
					{
						Creature* creature = *iter;
						if (creature->isTeki() && creature != enemy) {
							check = true;
						}
					}
				}

				if (check) {
					OBJ(enemy)->releaseCarryTarget();
					transit(enemy, PANMODOKI_Wait, nullptr);
					return;
				}
			}

		} else {
			enemy->finishMotion();
			OBJ(enemy)->mNextState = PANMODOKI_Walk;
		}
	}

	OBJ(enemy)->carryTarget(1.0f);

	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		transit(enemy, OBJ(enemy)->mNextState, nullptr);
		if (OBJ(enemy)->mNextState == PANMODOKI_Back) {
			OBJ(enemy)->changeCarryDir(false);
		}
	}

	OBJ(enemy)->checkSucked();
}

/**
 * @note Address: 0x8034D99C
 * @note Size: 0x24
 */
void StatePulled::cleanup(EnemyBase* enemy) { OBJ(enemy)->fadePulledSmokeEffect(); }

/**
 * @note Address: 0x8034D9C0
 * @note Size: 0x3C
 */
StateAppear::StateAppear(int stateID)
    : State(stateID)
{
	mName = "appear";
}

/**
 * @note Address: 0x8034D9FC
 * @note Size: 0x70
 */
void StateAppear::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(PANMODOKIANIM_Appear, nullptr);
	enemy->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed);
	OBJ(enemy)->checkNearHomeGraphIndex();
	OBJ(enemy)->appearRumble();
	OBJ(enemy)->createAppearEffect();
	enemy->hardConstraintOn();
}

/**
 * @note Address: 0x8034DA70
 * @note Size: 0x64
 */
void StateAppear::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		transit(enemy, PANMODOKI_Walk, nullptr);
		enemy->hardConstraintOff();
	}
}

/**
 * @note Address: 0x8034DAD4
 * @note Size: 0x3C
 */
StateHide::StateHide(int stateID)
    : State(stateID)
{
	mName = "hide";
}

/**
 * @note Address: 0x8034DB10
 * @note Size: 0x68
 */
void StateHide::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(PANMODOKIANIM_Hide, nullptr);
	enemy->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed);
	enemy->mTargetVelocity = Vector3f(0.0f);
	mHideTimer             = 0;
}

/**
 * @note Address: 0x8034DB78
 * @note Size: 0x118
 */
void StateHide::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying) {
		if (enemy->mCurAnim->mType == KEYEVENT_2) {
			OBJ(enemy)->createHideEffect();
			OBJ(enemy)->hideRumble();

		} else if (enemy->mCurAnim->mType == KEYEVENT_END) {
			OBJ(enemy)->fadeHideEffect();
			enemy->mHealth = CG_GENERALPARMS(enemy).mHealth.mValue;
			OBJ(enemy)->endCarry();
			enemy->enableEvent(0, EB_BitterImmune);
		}
	}

	if (!OBJ(enemy)->getCarryTarget()) {
		mHideTimer++;
		if (mHideTimer > CG_PROPERPARMS(enemy).mHideTime.mValue) {
			transit(enemy, PANMODOKI_Appear, nullptr);
			enemy->disableEvent(0, EB_BitterImmune);
		}
	}
}

/**
 * @note Address: 0x8034DC94
 * @note Size: 0x3C
 */
StateDamage::StateDamage(int stateID)
    : State(stateID)
{
	mName = "damage";
}

/**
 * @note Address: 0x8034DCD0
 * @note Size: 0x10C
 */
void StateDamage::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(PANMODOKIANIM_Damage, nullptr);
	enemy->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed);
	enemy->mTargetVelocity = Vector3f(0.0f);

	Pellet* target = OBJ(enemy)->getCarryTarget();
	if (target) {
		target->mPelletCarry->giveup(2);
		enemy->endStick();
		enemy->mTargetCreature = nullptr;
	}

	f32 damage = CG_PROPERPARMS(enemy).mPressDamage.mValue;
	if (OBJ(enemy)->mCanReactToPress) {
		damage = CG_PROPERPARMS(enemy).mSuckDamage.mValue;
		OBJ(enemy)->damageRumble();

		if (enemy->getEnemyTypeID() == EnemyTypeID::EnemyID_OoPanModoki) {
			enemy->mSoundObj->startSound(PSSE_EN_OPAN_DOWN_NEW, 0);
		}
	}

	enemy->addDamage(damage, 1.0f);
	OBJ(enemy)->boundEffect();
}

/**
 * @note Address: 0x8034DDDC
 * @note Size: 0x80
 */
void StateDamage::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		if (enemy->mHealth <= 0.0f) {
			transit(enemy, PANMODOKI_Dead, nullptr);
		} else {
			transit(enemy, PANMODOKI_Wait, nullptr);
		}
	}
}

/**
 * @note Address: 0x8034DE5C
 * @note Size: 0x3C
 */
StateWait::StateWait(int stateID)
    : State(stateID)
{
	mName = "wait";
}

/**
 * @note Address: 0x8034DE98
 * @note Size: 0x70
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(PANMODOKIANIM_Wait, nullptr);
	enemy->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed);
	enemy->mTargetVelocity = Vector3f(0.0f);
	mWaitTimer             = 0;
	OBJ(enemy)->mNextState = PANMODOKI_Walk;
}

/**
 * @note Address: 0x8034DF08
 * @note Size: 0xF4
 */
void StateWait::exec(EnemyBase* enemy)
{
	if (enemy->mHealth <= 0.0f) {
		transit(enemy, PANMODOKI_Dead, nullptr);
		return;
	}

	mWaitTimer++;

	if (mWaitTimer > CG_PROPERPARMS(enemy).mWaitTime.mValue && !enemy->isFinishMotion()) {
		enemy->finishMotion();
	}

	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		transit(enemy, OBJ(enemy)->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x8034DFFC
 * @note Size: 0x3C
 */
StateStick::StateStick(int stateID)
    : State(stateID)
{
	mName = "stick";
}

/**
 * @note Address: 0x8034E038
 * @note Size: 0x108
 */
void StateStick::init(EnemyBase* enemy, StateArg* stateArg)
{
	if (enemy->getCurrAnimIndex() != PANMODOKIANIM_Walk) {
		enemy->startMotion(PANMODOKIANIM_Walk, nullptr);
		enemy->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed * CG_PROPERPARMS(enemy).mWalkAnimSpeed.mValue);
	}

	enemy->mTargetVelocity  = Vector3f(0.0f);
	enemy->mCurrentVelocity = Vector3f(0.0f);

	Pellet* target = OBJ(enemy)->getCarryTarget();
	if (!target || !OBJ(enemy)->isTargetable(target) || !target->isSlotFree(9999)) {
		transit(enemy, PANMODOKI_Walk, nullptr);
	} else {
		_10                    = 0;
		OBJ(enemy)->mNextState = PANMODOKI_Walk;
	}
}

/**
 * @note Address: 0x8034E140
 * @note Size: 0x3BC
 */
void StateStick::exec(EnemyBase* enemy)
{
	if (enemy->mHealth <= 0.0f) {
		transit(enemy, PANMODOKI_Dead, nullptr);
		return;
	}

	Pellet* target = OBJ(enemy)->getCarryTarget();
	if (!target) {
		transit(enemy, PANMODOKI_Walk, nullptr);
		return;
	}

	// this needs fixing
	Vector3f targetPos = target->getPosition();
	Vector2f sep(targetPos.x - enemy->getPosition().x, targetPos.z - enemy->getPosition().z);
	f32 dist        = sep.sqrMagnitude();
	f32 stickRadius = target->getStickRadius();
	stickRadius += 1.2f * OBJ(enemy)->mCarrySizeDiff;
	stickRadius *= stickRadius;
	if (dist < stickRadius) {
		if (OBJ(enemy)->isTargetable(target) && target->isSlotFree(9999)) {
			enemy->mCurrentVelocity = Vector3f(0.0f);
			enemy->mTargetVelocity  = Vector3f(0.0f);
			enemy->startStick(target, 9999);
			target->startPick();
			OBJ(enemy)->setCarryDir(false);
			transit(enemy, PANMODOKI_Back, nullptr);
		} else {
			transit(enemy, PANMODOKI_Walk, nullptr);
		}
	} else {
		EnemyFunc::walkToTarget(enemy, targetPos, 0.5f * CG_GENERALPARMS(enemy).mMoveSpeed(), CG_PROPERPARMS(enemy).mFastTurnSpeed(),
		                        CG_PROPERPARMS(enemy).mMaxFastTurnAngle());

		enemy->turnToTarget2(targetPos, CG_PROPERPARMS(enemy).mFastTurnSpeed(), CG_PROPERPARMS(enemy).mMaxFastTurnAngle());

		_10++;
		f32 rad = 2.5f * OBJ(enemy)->mCarrySizeDiff;
		if (_10 > 200 || dist > SQUARE(rad) || !target || !OBJ(enemy)->isTargetable(target)) {
			transit(enemy, OBJ(enemy)->mNextState, nullptr);
		}
	}
}

/**
 * @note Address: 0x8034E4FC
 * @note Size: 0x3C
 */
StateSucked::StateSucked(int stateID)
    : State(stateID)
{
	mName = "sucked";
}

/**
 * @note Address: 0x8034E538
 * @note Size: 0x6C
 */
void StateSucked::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(PANMODOKIANIM_Wait, nullptr);
	enemy->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed);

	if (OBJ(enemy)->getCarryTarget()) {
		enemy->endStick();
		enemy->mTargetCreature = nullptr;
	}

	OBJ(enemy)->mCanReactToPress = 1;
}

/**
 * @note Address: 0x8034E5A4
 * @note Size: 0xC
 */
void StateSucked::exec(EnemyBase* enemy) { OBJ(enemy)->mCanReactToPress = 1; }

/**
 * @note Address: 0x8034E5B0
 * @note Size: 0x40
 */
StateCarryEnd::StateCarryEnd(int stateID)
    : State(stateID)
{
	mName = "carryend";
}

/**
 * @note Address: 0x8034E5F0
 * @note Size: 0x6C
 */
void StateCarryEnd::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->hardConstraintOn();
	_10 = enemy->getPosition();
}

/**
 * @note Address: 0x8034E65C
 * @note Size: 0x2F0
 */
void StateCarryEnd::exec(EnemyBase* enemy)
{
	if (enemy->mHealth <= 0.0f) {
		transit(enemy, PANMODOKI_Dead, nullptr);

	} else {
		Vector3f diff = Vector3f::sub2(enemy->mHomePosition, enemy->getPosition());
		if (diff.isBoundedX(2.0f) && diff.isBoundedZ(2.0f)) {
			Vector3f homePos = enemy->mHomePosition;
			enemy->onSetPosition(homePos);
			if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_LOOP_END) {
				transit(enemy, PANMODOKI_Hide, nullptr);
			}

		} else {
			enemy->turnToTarget2(_10, CG_GENERALPARMS(enemy).mTurnSpeed(), CG_GENERALPARMS(enemy).mMaxTurnAngle());
			diff *= 0.05f;
			enemy->forceMovePosition(diff);
		}
		if ((enemy->mCurAnim->mIsPlaying != FALSE) && (enemy->mCurAnim->mType == KEYEVENT_END)) {
			transit(enemy, PANMODOKI_Hide, nullptr);
		}
	}
}
} // namespace PanModokiBase
} // namespace Game

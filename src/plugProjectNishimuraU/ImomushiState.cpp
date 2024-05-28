#include "types.h"
#include "Game/Entities/Imomushi.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/MapMgr.h"
namespace Game {
namespace Imomushi {

const char statename[] = "246-ImomushiState";

/**
 * @note Address: 0x802BA0D8
 * @note Size: 0x4D4
 */
void FSM::init(EnemyBase* enemy)
{
	create(IMOMUSHI_Count);

	registerState(new StateDead);
	registerState(new StateFallDive);
	registerState(new StateFallMove);
	registerState(new StateStay);
	registerState(new StateAppear);
	registerState(new StateDive);
	registerState(new StateMove);
	registerState(new StateGoHome);
	registerState(new StateClimb);
	registerState(new StateAttack);
	registerState(new StateWait);
	// zukan states
	registerState(new StateZukanStay);
	registerState(new StateZukanAppear);
	registerState(new StateZukanMove);
}

/**
 * @note Address: 0x802BA5AC
 * @note Size: 0x50
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* imomushi = OBJ(enemy);
	imomushi->deathProcedure();
	imomushi->mTargetVelocity = 0.0f;
	imomushi->startMotion(IMOMUSHIANIM_Dead, nullptr);
}

/**
 * @note Address: 0x802BA5FC
 * @note Size: 0x44
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* imomushi = OBJ(enemy);
	if (imomushi->mCurAnim->mIsPlaying) {
		if ((u32)imomushi->mCurAnim->mType == KEYEVENT_END) {
			imomushi->kill(nullptr);
		}
	}
}

/**
 * @note Address: 0x802BA640
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802BA644
 * @note Size: 0x4C
 */
void StateFallDive::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* imomushi             = OBJ(enemy);
	imomushi->mNextState      = IMOMUSHI_NULL;
	imomushi->mTargetCreature = nullptr;
	imomushi->mTargetVelocity = Vector3f(0.0f);
	imomushi->startMotion(IMOMUSHIANIM_FallDive, nullptr);
}

/**
 * @note Address: 0x802BA690
 * @note Size: 0x140
 */
void StateFallDive::exec(EnemyBase* enemy)
{
	Obj* imomushi = OBJ(enemy);
	Vector3f vel  = imomushi->getVelocity();
	Vector3f pos  = imomushi->getPosition();
	f32 minY      = mapMgr->getMinY(pos);
	if ((vel.y > 0.0f) || (pos.y - minY) < 25.0f) {
		imomushi->finishMotion();
	}
	if (imomushi->mCurAnim->mIsPlaying && (u32)imomushi->mCurAnim->mType == KEYEVENT_END) {
		if (imomushi->mHealth <= 0.0f) {
			transit(imomushi, IMOMUSHI_Dead, nullptr);
		} else {
			transit(imomushi, IMOMUSHI_GoHome, nullptr);
		}
	}
}

/**
 * @note Address: 0x802BA7D0
 * @note Size: 0x4
 */
void StateFallDive::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802BA7D4
 * @note Size: 0x4C
 */
void StateFallMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* imomushi             = OBJ(enemy);
	imomushi->mNextState      = IMOMUSHI_NULL;
	imomushi->mTargetCreature = nullptr;
	imomushi->mTargetVelocity = Vector3f(0.0f);
	imomushi->startMotion(IMOMUSHIANIM_FallMove, nullptr);
}

/**
 * @note Address: 0x802BA820
 * @note Size: 0x178
 */
void StateFallMove::exec(EnemyBase* enemy)
{
	Obj* imomushi = OBJ(enemy);
	Vector3f vel  = imomushi->getVelocity();
	Vector3f pos  = imomushi->getPosition();
	f32 minY      = mapMgr->getMinY(pos);
	if ((vel.y > 0.0f) || (pos.y - minY) < 25.0f) {
		imomushi->finishMotion();
	}
	if (imomushi->mCurAnim->mIsPlaying && (u32)imomushi->mCurAnim->mType == KEYEVENT_END) {
		if (imomushi->mHealth <= 0.0f) {
			transit(imomushi, IMOMUSHI_Dead, nullptr);
		} else if (imomushi->mTargetCreature = imomushi->getRandFruitsPlant()) {
			transit(imomushi, IMOMUSHI_Move, nullptr);
		} else {
			transit(imomushi, IMOMUSHI_GoHome, nullptr);
		}
	}
}

/**
 * @note Address: 0x802BA998
 * @note Size: 0x4
 */
void StateFallMove::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802BA99C
 * @note Size: 0xC8
 */
void StateStay::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* imomushi = OBJ(enemy);
	imomushi->setAtari(false);
	imomushi->enableEvent(0, EB_Invulnerable);
	imomushi->mIsUnderground = true;
	imomushi->enableEvent(0, EB_BitterImmune);
	imomushi->enableEvent(0, EB_CullSound);
	imomushi->disableEvent(0, EB_LifegaugeVisible);
	imomushi->hardConstraintOn();
	imomushi->disableEvent(0, EB_Animating);
	imomushi->enableEvent(0, EB_ModelHidden);
	imomushi->mTargetVelocity = Vector3f(0.0f);
	imomushi->mStateTimer     = 0.0f;
	imomushi->startMotion(IMOMUSHIANIM_Appear, nullptr);
	imomushi->stopMotion();
}

/**
 * @note Address: 0x802BAA64
 * @note Size: 0xA8
 */
void StateStay::exec(EnemyBase* enemy)
{
	Obj* imomushi = OBJ(enemy);
	imomushi->mStateTimer += sys->mDeltaTime;
	if ((imomushi->mStateTimer > 6.0f) && !(EnemyFunc::isTherePikmin(imomushi, CG_GENERALPARMS(imomushi).mPrivateRadius.mValue, nullptr))) {
		if (imomushi->mTargetCreature = imomushi->getRandFruitsPlant()) {
			transit(imomushi, IMOMUSHI_Appear, nullptr);
		}
	}
}

/**
 * @note Address: 0x802BAB0C
 * @note Size: 0x90
 */
void StateStay::cleanup(EnemyBase* enemy)
{
	Obj* imomushi = OBJ(enemy);
	imomushi->setAtari(true);
	imomushi->disableEvent(0, EB_Invulnerable);
	imomushi->mIsUnderground = false;
	imomushi->disableEvent(0, EB_BitterImmune);
	imomushi->disableEvent(0, EB_CullSound);
	imomushi->hardConstraintOff();
	imomushi->enableEvent(0, EB_Animating);
	imomushi->disableEvent(0, EB_ModelHidden);
}

/**
 * @note Address: 0x802BAB9C
 * @note Size: 0x80
 */
void StateAppear::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* imomushi = OBJ(enemy);
	imomushi->lifeIncrement();
	imomushi->hardConstraintOn();
	imomushi->enableEvent(0, EB_NoInterrupt);
	imomushi->enableEvent(0, EB_LifegaugeVisible);
	imomushi->mTargetVelocity = Vector3f(0.0f);
	imomushi->setEmotionExcitement();
	imomushi->startMotion(IMOMUSHIANIM_Appear, nullptr);
	imomushi->createAppearEffect();
}

/**
 * @note Address: 0x802BAC1C
 * @note Size: 0xD8
 */
void StateAppear::exec(EnemyBase* enemy)
{
	Obj* imomushi = OBJ(enemy);
	if (imomushi->mCurAnim->mIsPlaying && (u32)imomushi->mCurAnim->mType == KEYEVENT_END) {
		if (imomushi->mHealth <= 0.0f) {
			transit(imomushi, IMOMUSHI_Dead, nullptr);
		} else if (imomushi->mTargetCreature = imomushi->getRandFruitsPlant()) {
			transit(imomushi, IMOMUSHI_Move, nullptr);
		} else {
			transit(imomushi, IMOMUSHI_Dive, nullptr);
		}
	}
}

/**
 * @note Address: 0x802BACF4
 * @note Size: 0x3C
 */
void StateAppear::cleanup(EnemyBase* enemy)
{
	Obj* imomushi = OBJ(enemy);
	imomushi->hardConstraintOff();
	imomushi->disableEvent(0, EB_NoInterrupt);
}

/**
 * @note Address: 0x802BAD30
 * @note Size: 0x74
 */
void StateDive::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* imomushi = OBJ(enemy);
	imomushi->hardConstraintOn();
	imomushi->enableEvent(0, EB_BitterImmune);
	imomushi->mTargetCreature = nullptr;
	imomushi->mTargetVelocity = Vector3f(0.0f);
	imomushi->setEmotionCaution();
	imomushi->startMotion(IMOMUSHIANIM_Dive, nullptr);
	imomushi->createDisAppearEffect();
}

/**
 * @note Address: 0x802BADA4
 * @note Size: 0x50
 */
void StateDive::exec(EnemyBase* enemy)
{
	Obj* imomushi = OBJ(enemy);
	if (imomushi->mCurAnim->mIsPlaying && (u32)imomushi->mCurAnim->mType == KEYEVENT_END) {
		transit(imomushi, IMOMUSHI_Stay, nullptr);
	}
}

/**
 * @note Address: 0x802BADF4
 * @note Size: 0x3C
 */
void StateDive::cleanup(EnemyBase* enemy)
{
	Obj* imomushi = OBJ(enemy);
	imomushi->hardConstraintOff();
	imomushi->disableEvent(0, EB_BitterImmune);
}

/**
 * @note Address: 0x802BAE30
 * @note Size: 0x48
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* imomushi        = OBJ(enemy);
	imomushi->mNextState = IMOMUSHI_NULL;
	imomushi->startMotion(IMOMUSHIANIM_Move, nullptr);
	imomushi->startMoveTraceEffect();
}

/**
 * @note Address: 0x802BAE78
 * @note Size: 0x238
 */
void StateMove::exec(EnemyBase* enemy)
{
	Creature* creature;
	Obj* imomushi = OBJ(enemy);

	if (imomushi->mHealth <= 0.0f) {
		transit(imomushi, IMOMUSHI_Dead, nullptr);
		return;
	}

	creature = imomushi->mTargetCreature;
	if (creature) {
		if (imomushi->isFinishMotion()) {
			imomushi->mTargetVelocity = Vector3f(0.0f);

		} else {
			Vector3f pos         = imomushi->getPosition();
			Vector3f creaturePos = creature->getPosition();

			if (!imomushi->isAttackable()) {
				imomushi->mTargetCreature = imomushi->getRandFruitsPlant();
			} else {
				if (sqrDistanceXZ(pos, creaturePos) < 900.0f) {
					imomushi->mNextState = IMOMUSHI_Climb;
					imomushi->finishMotion();
				}
			}

			EnemyFunc::walkToTarget(imomushi, creaturePos, CG_GENERALPARMS(imomushi).mMoveSpeed.mValue,
			                        CG_GENERALPARMS(imomushi).mTurnSpeed.mValue, CG_GENERALPARMS(imomushi).mMaxTurnAngle.mValue);
		}

	} else {
		imomushi->mNextState = IMOMUSHI_GoHome;
		imomushi->finishMotion();
	}

	if (imomushi->mCurAnim->mIsPlaying && (u32)imomushi->mCurAnim->mType == KEYEVENT_END) {
		if (imomushi->mNextState == IMOMUSHI_Climb) {
			if (imomushi->isAttackable()) {
				transit(imomushi, IMOMUSHI_Climb, nullptr);
				return;
			}

			imomushi->mTargetCreature = imomushi->getRandFruitsPlant();
			transit(imomushi, IMOMUSHI_Move, nullptr);

		} else {
			transit(imomushi, imomushi->mNextState, nullptr);
		}
	}
}

/**
 * @note Address: 0x802BB0B0
 * @note Size: 0x24
 */
void StateMove::cleanup(EnemyBase* enemy)
{
	Obj* imomushi = OBJ(enemy);
	imomushi->finishMoveTraceEffect();
}

/**
 * @note Address: 0x802BB0D4
 * @note Size: 0x48
 */
void StateGoHome::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* imomushi        = OBJ(enemy);
	imomushi->mNextState = IMOMUSHI_NULL;
	imomushi->startMotion(IMOMUSHIANIM_Move, nullptr);
	imomushi->startMoveTraceEffect();
}

/**
 * @note Address: 0x802BB11C
 * @note Size: 0x14C
 */
void StateGoHome::exec(EnemyBase* enemy)
// does NOT match
{
	Obj* imomushi = OBJ(enemy);

	if (imomushi->mHealth <= 0.0f) {
		transit(imomushi, IMOMUSHI_Dead, nullptr);
		return;
	}

	if (imomushi->isFinishMotion()) {
		imomushi->mTargetVelocity = Vector3f(0.0f);

	} else {
		Vector3f pos     = imomushi->getPosition() - imomushi->mHomePosition;
		f32 sqrMagXZ     = pos.x * pos.x + pos.z * pos.z;
		Vector3f homePos = imomushi->mHomePosition;
		// the mismatch is from sqrDistanceXZ
		if (sqrMagXZ < SQUARE(CG_GENERALPARMS(imomushi).mHomeRadius.mValue)) {
			imomushi->mNextState = IMOMUSHI_Dive;
			imomushi->finishMotion();
		}
		EnemyFunc::walkToTarget(imomushi, homePos, CG_GENERALPARMS(imomushi).mMoveSpeed.mValue, CG_GENERALPARMS(imomushi).mTurnSpeed.mValue,
		                        CG_GENERALPARMS(imomushi).mMaxTurnAngle.mValue);
	}

	if ((imomushi->mCurAnim->mIsPlaying) && ((u32)imomushi->mCurAnim->mType == KEYEVENT_END)) {
		transit(imomushi, imomushi->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x802BB268
 * @note Size: 0x24
 */
void StateGoHome::cleanup(EnemyBase* enemy)
{
	Obj* imomushi = OBJ(enemy);
	imomushi->finishMoveTraceEffect();
}

/**
 * @note Address: 0x802BB28C
 * @note Size: 0x14C
 */
void StateClimb::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* imomushi        = OBJ(enemy);
	imomushi->mNextState = IMOMUSHI_NULL;
	Vector3f pos         = imomushi->getPosition();
	imomushi->setStickDiff(pos.x, pos.z);
	imomushi->startClimbPlant(static_cast<CollPart*>(imomushi->mTargetCreature->mCollTree->mPart->mChild));
	imomushi->mTargetVelocity = Vector3f(0.0f);
	imomushi->startMotion(IMOMUSHIANIM_Climb, nullptr);

	const f32 faceDir = imomushi->getFaceDir();
	f32 cos           = cosf(faceDir);
	f32 sin           = sinf(faceDir);

	imomushi->mClimbDirection = Vector3f(sin, 0.01f, cos);
	imomushi->mClimbRotation  = Vector3f(-sin, 0.0f, -cos);
}

/**
 * @note Address: 0x802BB3D8
 * @note Size: 0x170
 */
void StateClimb::exec(EnemyBase* enemy)
{
	Obj* imomushi = OBJ(enemy);
	if (imomushi->mHealth <= 0.0f) {
		transit(imomushi, IMOMUSHI_FallDive, nullptr);
		return;
	}

	if (imomushi->isStickToFall()) {
		transit(imomushi, IMOMUSHI_FallMove, nullptr);
		return;
	}

	if (!imomushi->isFinishMotion()) {
		imomushi->moveStickTube();

		f32 val  = imomushi->mClimbStartMoveRatio;
		f32 yval = imomushi->mClimbingPosition.y;
		if (yval > 1.0f - val) {
			CollPart* childPart = static_cast<CollPart*>(imomushi->mStuckCollPart->mChild);
			if (childPart != nullptr && childPart->mPartType == COLLTYPE_TUBETREE) {
				imomushi->startClimbPlant(childPart);
			} else {
				imomushi->mNextState = IMOMUSHI_Attack;
				imomushi->finishMotion();
			}
		} else if (yval < -val) {
			CollPart* parentPart = static_cast<CollPart*>(imomushi->mStuckCollPart->mParent);
			if (parentPart != nullptr && parentPart->mPartType == COLLTYPE_TUBETREE) {
				imomushi->startClimbPlant(parentPart);
			}
		}
	}

	if (imomushi->mCurAnim->mIsPlaying && (u32)imomushi->mCurAnim->mType == KEYEVENT_END) {
		transit(imomushi, imomushi->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x802BB548
 * @note Size: 0x24
 */
void StateClimb::cleanup(EnemyBase* enemy)
{
	Obj* imomushi = OBJ(enemy);
	imomushi->endStick();
}

/**
 * @note Address: 0x802BB56C
 * @note Size: 0x9C
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	Creature* target;
	Obj* imomushi         = OBJ(enemy);
	imomushi->mNextState  = IMOMUSHI_NULL;
	imomushi->mStateTimer = 0.0f;
	target                = imomushi->mTargetCreature;
	CollPart* collpart    = target->mCollTree->getCollPart('tops');
	imomushi->endStick();
	imomushi->startStick(target, collpart);
	imomushi->mTargetVelocity = Vector3f(0.0f);
	imomushi->startMotion(IMOMUSHIANIM_Eat, nullptr);
}

/**
 * @note Address: 0x802BB608
 * @note Size: 0x15C
 */
void StateAttack::exec(EnemyBase* enemy)
{
	Obj* imomushi = OBJ(enemy);

	if (imomushi->mHealth <= 0.0f) {
		transit(imomushi, IMOMUSHI_FallDive, nullptr);
		return;
	}

	if (imomushi->isStickToFall()) {
		transit(imomushi, IMOMUSHI_FallMove, nullptr);
		return;
	} else if (!imomushi->isFinishMotion()) {
		imomushi->moveStickSphere();
		if (!imomushi->isAttackable()) {
			if (Creature* target = imomushi->getRandFruitsPlant()) {
				imomushi->mTargetCreature = target;
				imomushi->mNextState      = IMOMUSHI_FallMove;
				imomushi->finishMotion();
			} else {
				imomushi->mNextState = IMOMUSHI_Wait;
				imomushi->finishMotion();
			}
		}
	}
	imomushi->mStateTimer += sys->mDeltaTime;
	if (imomushi->mCurAnim->mIsPlaying) {
		if (((u32)imomushi->mCurAnim->mType == KEYEVENT_2)) {
			imomushi->eatTsuyukusa();
		} else if (((u32)imomushi->mCurAnim->mType == KEYEVENT_END)) {
			transit(imomushi, imomushi->mNextState, nullptr);
		}
	}
}

/**
 * @note Address: 0x802BB764
 * @note Size: 0x24
 */
void StateAttack::cleanup(EnemyBase* enemy)
{
	Obj* imomushi = OBJ(enemy);
	imomushi->endStick();
}

/**
 * @note Address: 0x802BB788
 * @note Size: 0x94
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Creature* target;
	Obj* imomushi        = OBJ(enemy);
	imomushi->mNextState = IMOMUSHI_NULL;
	target               = imomushi->mTargetCreature;
	CollPart* collpart   = target->mCollTree->getCollPart('tops');
	imomushi->endStick();
	imomushi->startStick(target, collpart);
	imomushi->mTargetVelocity = Vector3f(0.0f);
	imomushi->startMotion(IMOMUSHIANIM_Climb, nullptr);
}

/**
 * @note Address: 0x802BB81C
 * @note Size: 0x138
 */
void StateWait::exec(EnemyBase* enemy)
{
	Creature* sticker;
	Obj* imomushi = OBJ(enemy);

	if (imomushi->mHealth <= 0.0f) {
		transit(imomushi, IMOMUSHI_FallDive, nullptr);
		return;
	}

	if (imomushi->isStickToFall()) {
		transit(imomushi, IMOMUSHI_FallMove, nullptr);
		return;
	} else {
		if (!imomushi->isFinishMotion()) {
			imomushi->moveStickSphere();
			sticker = imomushi->mSticker;
			if (Creature* target = imomushi->getRandFruitsPlant()) {
				imomushi->mTargetCreature = target;
				if (sticker == target) {
					imomushi->mNextState = IMOMUSHI_Attack;
					imomushi->finishMotion();
				} else {
					imomushi->mNextState = IMOMUSHI_FallMove;
					imomushi->finishMotion();
				}
			}
		}
	}
	if ((imomushi->mCurAnim->mIsPlaying) && ((u32)imomushi->mCurAnim->mType == KEYEVENT_END)) {
		transit(imomushi, imomushi->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x802BB954
 * @note Size: 0x24
 */
void StateWait::cleanup(EnemyBase* enemy)
{
	Obj* imomushi = OBJ(enemy);
	imomushi->endStick();
}

/**
 * @note Address: 0x802BB978
 * @note Size: 0x6C
 */
void StateZukanStay::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* imomushi = OBJ(enemy);
	imomushi->resetZukanStateTimer();
	imomushi->enableEvent(0, EB_BitterImmune);
	imomushi->hardConstraintOn();
	imomushi->mTargetVelocity = Vector3f(0.0f);
	imomushi->startMotion(IMOMUSHIANIM_Appear, nullptr);
	imomushi->stopMotion();
}

/**
 * @note Address: 0x802BB9E4
 * @note Size: 0x58
 */
void StateZukanStay::exec(EnemyBase* enemy)
{
	Obj* imomushi = OBJ(enemy);
	imomushi->mStateTimer += sys->mDeltaTime;
	if (imomushi->mStateTimer > 5.0f) {
		transit(imomushi, IMOMUSHI_ZukanAppear, nullptr);
	}
}

/**
 * @note Address: 0x802BBA3C
 * @note Size: 0x30
 */
void StateZukanStay::cleanup(EnemyBase* enemy)
{
	Obj* imomushi = OBJ(enemy);
	imomushi->disableEvent(0, EB_BitterImmune);
	imomushi->hardConstraintOff();
}

/**
 * @note Address: 0x802BBA6C
 * @note Size: 0x5C
 */
void StateZukanAppear::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* imomushi = OBJ(enemy);
	imomushi->enableEvent(0, EB_NoInterrupt);
	imomushi->mTargetVelocity = Vector3f(0.0f);
	imomushi->startMotion(IMOMUSHIANIM_Appear, nullptr);
	imomushi->createAppearEffect();
}

/**
 * @note Address: 0x802BBAC8
 * @note Size: 0x50
 */
void StateZukanAppear::exec(EnemyBase* enemy)
{
	Obj* imomushi = OBJ(enemy);
	if ((imomushi->mCurAnim->mIsPlaying) && ((u32)imomushi->mCurAnim->mType == KEYEVENT_END)) {
		transit(imomushi, IMOMUSHI_ZukanMove, nullptr);
	}
}

/**
 * @note Address: 0x802BBB18
 * @note Size: 0x10
 */
void StateZukanAppear::cleanup(EnemyBase* enemy)
{
	Obj* imomushi = OBJ(enemy);
	imomushi->disableEvent(0, EB_NoInterrupt);
}

/**
 * @note Address: 0x802BBB28
 * @note Size: 0x58
 */
void StateZukanMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* imomushi = OBJ(enemy);
	imomushi->setZukanTargetPosition();
	imomushi->mTargetVelocity = 0.0f;
	imomushi->startMotion(IMOMUSHIANIM_Move, nullptr);
	imomushi->startMoveTraceEffect();
}

/**
 * @note Address: 0x802BBB80
 * @note Size: 0xBC
 */
void StateZukanMove::exec(EnemyBase* enemy)
{
	Obj* imomushi   = OBJ(enemy);
	Vector3f target = Vector3f(imomushi->mZukanTargetPosition);
	EnemyFunc::walkToTarget(imomushi, target, CG_GENERALPARMS(imomushi).mMoveSpeed.mValue, CG_GENERALPARMS(imomushi).mTurnSpeed.mValue,
	                        CG_GENERALPARMS(imomushi).mMaxTurnAngle.mValue);
	if (imomushi->isInZukanTargetArea()) {
		imomushi->setZukanTargetPosition();
	}
	if ((imomushi->mCurAnim->mIsPlaying) && ((u32)imomushi->mCurAnim->mType == KEYEVENT_END)) {
		transit(imomushi, IMOMUSHI_ZukanMove, nullptr);
	}
}

/**
 * @note Address: 0x802BBC3C
 * @note Size: 0x24
 */
void StateZukanMove::cleanup(EnemyBase* enemy)
{
	Obj* imomushi = OBJ(enemy);
	imomushi->finishMoveTraceEffect();
}
} // namespace Imomushi
} // namespace Game

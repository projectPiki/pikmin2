#include "types.h"
#include "Game/Entities/Imomushi.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/MapMgr.h"
namespace Game {
namespace Imomushi {

const char statename[] = "246-ImomushiState";

/*
 * --INFO--
 * Address:	802BA0D8
 * Size:	0004D4
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

/*
 * --INFO--
 * Address:	802BA5AC
 * Size:	000050
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* imomushi = OBJ(enemy);
	imomushi->deathProcedure();
	imomushi->mTargetVelocity = 0.0f;
	imomushi->startMotion(IMOMUSHIANIM_Dead, nullptr);
}

/*
 * --INFO--
 * Address:	802BA5FC
 * Size:	000044
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

/*
 * --INFO--
 * Address:	802BA640
 * Size:	000004
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802BA644
 * Size:	00004C
 */
void StateFallDive::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* imomushi             = OBJ(enemy);
	imomushi->mNextState      = IMOMUSHI_NULL;
	imomushi->mTargetCreature = nullptr;
	imomushi->mTargetVelocity = Vector3f(0.0f);
	imomushi->startMotion(IMOMUSHIANIM_FallDive, nullptr);
}

/*
 * --INFO--
 * Address:	802BA690
 * Size:	000140
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

/*
 * --INFO--
 * Address:	802BA7D0
 * Size:	000004
 */
void StateFallDive::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802BA7D4
 * Size:	00004C
 */
void StateFallMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* imomushi             = OBJ(enemy);
	imomushi->mNextState      = IMOMUSHI_NULL;
	imomushi->mTargetCreature = nullptr;
	imomushi->mTargetVelocity = Vector3f(0.0f);
	imomushi->startMotion(IMOMUSHIANIM_FallMove, nullptr);
}

/*
 * --INFO--
 * Address:	802BA820
 * Size:	000178
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

/*
 * --INFO--
 * Address:	802BA998
 * Size:	000004
 */
void StateFallMove::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802BA99C
 * Size:	0000C8
 */
void StateStay::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* imomushi = OBJ(enemy);
	imomushi->setAtari(false);
	imomushi->enableEvent(0, EB_Invulnerable);
	imomushi->mIsUnderground = true;
	imomushi->enableEvent(0, EB_BitterImmune);
	imomushi->enableEvent(0, EB_14);
	imomushi->disableEvent(0, EB_LifegaugeVisible);
	imomushi->hardConstraintOn();
	imomushi->disableEvent(0, EB_Animating);
	imomushi->enableEvent(0, EB_ModelHidden);
	imomushi->mTargetVelocity = Vector3f(0.0f);
	imomushi->mStateTimer     = 0.0f;
	imomushi->startMotion(IMOMUSHIANIM_Appear, nullptr);
	imomushi->stopMotion();
}

/*
 * --INFO--
 * Address:	802BAA64
 * Size:	0000A8
 */
void StateStay::exec(EnemyBase* enemy)
{
	Obj* imomushi = OBJ(enemy);
	imomushi->mStateTimer += sys->mDeltaTime;
	if ((imomushi->mStateTimer > 6.0f)
	    && !(EnemyFunc::isTherePikmin(imomushi, CG_PARMS(imomushi)->mGeneral.mPrivateRadius.mValue, nullptr))) {
		if (imomushi->mTargetCreature = imomushi->getRandFruitsPlant()) {
			transit(imomushi, IMOMUSHI_Appear, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802BAB0C
 * Size:	000090
 */
void StateStay::cleanup(EnemyBase* enemy)
{
	Obj* imomushi = OBJ(enemy);
	imomushi->setAtari(true);
	imomushi->disableEvent(0, EB_Invulnerable);
	imomushi->mIsUnderground = false;
	imomushi->disableEvent(0, EB_BitterImmune);
	imomushi->disableEvent(0, EB_14);
	imomushi->hardConstraintOff();
	imomushi->enableEvent(0, EB_Animating);
	imomushi->disableEvent(0, EB_ModelHidden);
}

/*
 * --INFO--
 * Address:	802BAB9C
 * Size:	000080
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

/*
 * --INFO--
 * Address:	802BAC1C
 * Size:	0000D8
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

/*
 * --INFO--
 * Address:	802BACF4
 * Size:	00003C
 */
void StateAppear::cleanup(EnemyBase* enemy)
{
	Obj* imomushi = OBJ(enemy);
	imomushi->hardConstraintOff();
	imomushi->disableEvent(0, EB_NoInterrupt);
}

/*
 * --INFO--
 * Address:	802BAD30
 * Size:	000074
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

/*
 * --INFO--
 * Address:	802BADA4
 * Size:	000050
 */
void StateDive::exec(EnemyBase* enemy)
{
	Obj* imomushi = OBJ(enemy);
	if (imomushi->mCurAnim->mIsPlaying && (u32)imomushi->mCurAnim->mType == KEYEVENT_END) {
		transit(imomushi, IMOMUSHI_Stay, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802BADF4
 * Size:	00003C
 */
void StateDive::cleanup(EnemyBase* enemy)
{
	Obj* imomushi = OBJ(enemy);
	imomushi->hardConstraintOff();
	imomushi->disableEvent(0, EB_BitterImmune);
}

/*
 * --INFO--
 * Address:	802BAE30
 * Size:	000048
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* imomushi        = OBJ(enemy);
	imomushi->mNextState = IMOMUSHI_NULL;
	imomushi->startMotion(IMOMUSHIANIM_Move, nullptr);
	imomushi->startMoveTraceEffect();
}

/*
 * --INFO--
 * Address:	802BAE78
 * Size:	000238
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

			EnemyFunc::walkToTarget(imomushi, creaturePos, CG_PARMS(imomushi)->mGeneral.mMoveSpeed.mValue,
			                        CG_PARMS(imomushi)->mGeneral.mTurnSpeed.mValue, CG_PARMS(imomushi)->mGeneral.mMaxTurnAngle.mValue);
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

/*
 * --INFO--
 * Address:	802BB0B0
 * Size:	000024
 */
void StateMove::cleanup(EnemyBase* enemy)
{
	Obj* imomushi = OBJ(enemy);
	imomushi->finishMoveTraceEffect();
}

/*
 * --INFO--
 * Address:	802BB0D4
 * Size:	000048
 */
void StateGoHome::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* imomushi        = OBJ(enemy);
	imomushi->mNextState = IMOMUSHI_NULL;
	imomushi->startMotion(IMOMUSHIANIM_Move, nullptr);
	imomushi->startMoveTraceEffect();
}

/*
 * --INFO--
 * Address:	802BB11C
 * Size:	00014C
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
		if (sqrMagXZ < SQUARE(CG_PARMS(imomushi)->mGeneral.mHomeRadius.mValue)) {
			imomushi->mNextState = IMOMUSHI_Dive;
			imomushi->finishMotion();
		}
		EnemyFunc::walkToTarget(imomushi, homePos, CG_PARMS(imomushi)->mGeneral.mMoveSpeed.mValue,
		                        CG_PARMS(imomushi)->mGeneral.mTurnSpeed.mValue, CG_PARMS(imomushi)->mGeneral.mMaxTurnAngle.mValue);
	}

	if ((imomushi->mCurAnim->mIsPlaying) && ((u32)imomushi->mCurAnim->mType == KEYEVENT_END)) {
		transit(imomushi, imomushi->mNextState, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802BB268
 * Size:	000024
 */
void StateGoHome::cleanup(EnemyBase* enemy)
{
	Obj* imomushi = OBJ(enemy);
	imomushi->finishMoveTraceEffect();
}

/*
 * --INFO--
 * Address:	802BB28C
 * Size:	00014C
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

	imomushi->_2D8 = Vector3f(sin, 0.01f, cos);
	imomushi->_2E4 = Vector3f(-sin, 0.0f, -cos);
}

/*
 * --INFO--
 * Address:	802BB3D8
 * Size:	000170
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

		f32 val  = imomushi->_2FC;
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

/*
 * --INFO--
 * Address:	802BB548
 * Size:	000024
 */
void StateClimb::cleanup(EnemyBase* enemy)
{
	Obj* imomushi = OBJ(enemy);
	imomushi->endStick();
}

/*
 * --INFO--
 * Address:	802BB56C
 * Size:	00009C
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

/*
 * --INFO--
 * Address:	802BB608
 * Size:	00015C
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

/*
 * --INFO--
 * Address:	802BB764
 * Size:	000024
 */
void StateAttack::cleanup(EnemyBase* enemy)
{
	Obj* imomushi = OBJ(enemy);
	imomushi->endStick();
}

/*
 * --INFO--
 * Address:	802BB788
 * Size:	000094
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

/*
 * --INFO--
 * Address:	802BB81C
 * Size:	000138
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

/*
 * --INFO--
 * Address:	802BB954
 * Size:	000024
 */
void StateWait::cleanup(EnemyBase* enemy)
{
	Obj* imomushi = OBJ(enemy);
	imomushi->endStick();
}

/*
 * --INFO--
 * Address:	802BB978
 * Size:	00006C
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

/*
 * --INFO--
 * Address:	802BB9E4
 * Size:	000058
 */
void StateZukanStay::exec(EnemyBase* enemy)
{
	Obj* imomushi = OBJ(enemy);
	imomushi->mStateTimer += sys->mDeltaTime;
	if (imomushi->mStateTimer > 5.0f) {
		transit(imomushi, IMOMUSHI_ZukanAppear, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802BBA3C
 * Size:	000030
 */
void StateZukanStay::cleanup(EnemyBase* enemy)
{
	Obj* imomushi = OBJ(enemy);
	imomushi->disableEvent(0, EB_BitterImmune);
	imomushi->hardConstraintOff();
}

/*
 * --INFO--
 * Address:	802BBA6C
 * Size:	00005C
 */
void StateZukanAppear::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* imomushi = OBJ(enemy);
	imomushi->enableEvent(0, EB_NoInterrupt);
	imomushi->mTargetVelocity = Vector3f(0.0f);
	imomushi->startMotion(IMOMUSHIANIM_Appear, nullptr);
	imomushi->createAppearEffect();
}

/*
 * --INFO--
 * Address:	802BBAC8
 * Size:	000050
 */
void StateZukanAppear::exec(EnemyBase* enemy)
{
	Obj* imomushi = OBJ(enemy);
	if ((imomushi->mCurAnim->mIsPlaying) && ((u32)imomushi->mCurAnim->mType == KEYEVENT_END)) {
		transit(imomushi, IMOMUSHI_ZukanMove, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802BBB18
 * Size:	000010
 */
void StateZukanAppear::cleanup(EnemyBase* enemy)
{
	Obj* imomushi = OBJ(enemy);
	imomushi->disableEvent(0, EB_NoInterrupt);
}

/*
 * --INFO--
 * Address:	802BBB28
 * Size:	000058
 */
void StateZukanMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* imomushi = OBJ(enemy);
	imomushi->setZukanTargetPosition();
	imomushi->mTargetVelocity = 0.0f;
	imomushi->startMotion(IMOMUSHIANIM_Move, nullptr);
	imomushi->startMoveTraceEffect();
}

/*
 * --INFO--
 * Address:	802BBB80
 * Size:	0000BC
 */
void StateZukanMove::exec(EnemyBase* enemy)
{
	Obj* imomushi   = OBJ(enemy);
	Vector3f target = Vector3f(imomushi->mZukanTargetPosition);
	EnemyFunc::walkToTarget(imomushi, target, CG_PARMS(imomushi)->mGeneral.mMoveSpeed.mValue,
	                        CG_PARMS(imomushi)->mGeneral.mTurnSpeed.mValue, CG_PARMS(imomushi)->mGeneral.mMaxTurnAngle.mValue);
	if (imomushi->isInZukanTargetArea()) {
		imomushi->setZukanTargetPosition();
	}
	if ((imomushi->mCurAnim->mIsPlaying) && ((u32)imomushi->mCurAnim->mType == KEYEVENT_END)) {
		transit(imomushi, IMOMUSHI_ZukanMove, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802BBC3C
 * Size:	000024
 */
void StateZukanMove::cleanup(EnemyBase* enemy)
{
	Obj* imomushi = OBJ(enemy);
	imomushi->finishMoveTraceEffect();
}
} // namespace Imomushi
} // namespace Game

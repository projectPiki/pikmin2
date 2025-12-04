#include "Game/Entities/Armor.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/rumble.h"
#include "Game/Entities/ItemBridge.h"
#include "Game/EnemyFunc.h"

namespace Game {
namespace Armor {

/**
 * @note Address: 0x80285ED8
 * @note Size: 0x4CC
 */
void FSM::init(EnemyBase* enemy)
{
	create(ARMOR_StateCount);
	registerState(new StateDead);
	registerState(new StateStay);
	registerState(new StateAppear);
	registerState(new StateDive);
	registerState(new StateMove);
	registerState(new StateMoveSide);
	registerState(new StateMoveCentre);
	registerState(new StateMoveTop);
	registerState(new StateGoHome);
	registerState(new StateAttack1);
	registerState(new StateAttack2);
	registerState(new StateEat);
	registerState(new StateFlick);
	registerState(new StateFail);
}

/**
 * @note Address: 0x802863A4
 * @note Size: 0x5C
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->deathProcedure();
	enemy->disableEvent(0, EB_Cullable);
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->startMotion(ARMORANIM_Dead, nullptr);
}

/**
 * @note Address: 0x80286400
 * @note Size: 0x90
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* armor = OBJ(enemy);
	if (armor->mCurAnim->mIsPlaying) {
		u32 animType = armor->mCurAnim->mType;
		if (animType == KEYEVENT_2) {
			Vector3f armorPos = armor->getPosition();
			rumbleMgr->startRumble(RUMBLETYPE_Fixed9, armorPos, RUMBLEID_Both);
		} else if (animType == KEYEVENT_END) {
			armor->kill(nullptr);
		}
	}
}

/**
 * @note Address: 0x80286490
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x80286494
 * @note Size: 0x70
 */
void StateStay::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->hardConstraintOn();
	enemy->disableEvent(0, EB_LifegaugeVisible);
	enemy->disableEvent(0, EB_Animating);
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->startMotion(ARMORANIM_Appear, nullptr);
	enemy->stopMotion();
}

/**
 * @note Address: 0x80286504
 * @note Size: 0xA0
 */
void StateStay::exec(EnemyBase* enemy)
{
	Obj* armor = OBJ(enemy);
	armor->setBridgeSearch();
	f32 viewAngle  = CG_GENERALPARMS(armor).mViewAngle;
	f32 viewRadius = CG_GENERALPARMS(armor).mSightRadius;

	Creature* targetCreature = EnemyFunc::getNearestPikminOrNavi(armor, viewAngle, viewRadius, nullptr, nullptr, nullptr);

	if (targetCreature || armor->isBreakBridge()) {
		armor->mTargetCreature = targetCreature;
		transit(armor, ARMOR_Appear, nullptr);
	}
}

/**
 * @note Address: 0x802865A4
 * @note Size: 0x3C
 */
void StateStay::cleanup(EnemyBase* enemy)
{
	enemy->hardConstraintOff();
	enemy->enableEvent(0, EB_Animating);
}

/**
 * @note Address: 0x802865E0
 * @note Size: 0xB8
 */
void StateAppear::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* armor = OBJ(enemy);
	armor->lifeIncrement();
	armor->hardConstraintOn();
	armor->enableEvent(0, EB_LifegaugeVisible);
	armor->mTargetVelocity = Vector3f(0.0f);
	armor->setEmotionExcitement();
	armor->startMotion(ARMORANIM_Appear, nullptr);
	armor->createAppearEffect();

	Vector3f pos = armor->getPosition();
	rumbleMgr->startRumble(RUMBLETYPE_Fixed10, pos, RUMBLEID_Both);
}

/**
 * @note Address: 0x80286698
 * @note Size: 0xCC
 */
void StateAppear::exec(EnemyBase* enemy)
{
	Obj* armor = OBJ(enemy);
	if (armor->mCurAnim->mIsPlaying) {
		u32 animType = armor->mCurAnim->mType;
		if (animType == KEYEVENT_2) {
			Vector3f armorPos = armor->getPosition();
			rumbleMgr->startRumble(RUMBLETYPE_Fixed9, armorPos, RUMBLEID_Both);
		} else if (animType == KEYEVENT_END) {
			if (armor->mHealth <= 0.0f) {
				transit(armor, ARMOR_Dead, nullptr);
			} else {
				transit(armor, ARMOR_Move, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x80286764
 * @note Size: 0x24
 */
void StateAppear::cleanup(EnemyBase* enemy)
{
	enemy->hardConstraintOff();
}

/**
 * @note Address: 0x80286788
 * @note Size: 0x60
 */
void StateDive::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* armor = OBJ(enemy);
	armor->hardConstraintOn();
	armor->mTargetVelocity = Vector3f(0.0f);
	armor->setEmotionCaution();
	armor->startMotion(ARMORANIM_Dive, nullptr);
	armor->createDisAppearEffect();
}

/**
 * @note Address: 0x802867E8
 * @note Size: 0x9C
 */
void StateDive::exec(EnemyBase* enemy)
{
	Obj* armor = OBJ(enemy);
	if (armor->mCurAnim->mIsPlaying) {
		u32 animType = armor->mCurAnim->mType;
		if (animType == KEYEVENT_2) {
			Vector3f armorPos = armor->getPosition();
			rumbleMgr->startRumble(RUMBLETYPE_Fixed10, armorPos, RUMBLEID_Both);
		} else if (animType == KEYEVENT_END) {
			transit(armor, ARMOR_Stay, nullptr);
		}
	}
}

/**
 * @note Address: 0x80286884
 * @note Size: 0x24
 */
void StateDive::cleanup(EnemyBase* enemy)
{
	enemy->hardConstraintOff();
}

/**
 * @note Address: 0x802868A8
 * @note Size: 0x34
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* armor        = OBJ(enemy);
	armor->mNextState = ARMOR_NULL;
	armor->startMotion(ARMORANIM_Move, nullptr);
}

/**
 * @note Address: 0x802868DC
 * @note Size: 0x4F8
 */
void StateMove::exec(EnemyBase* enemy)
{
	Obj* armor       = OBJ(enemy);
	Creature* target = EnemyFunc::getNearestPikminOrNavi(armor, CG_GENERALPARMS(armor).mViewAngle(), CG_GENERALPARMS(armor).mSightRadius(),
	                                                     nullptr, nullptr, nullptr);
	if (target) {
		armor->mTargetCreature = target;
		f32 angleDist          = armor->turnToTarget(target, CG_GENERALPARMS(armor).mTurnSpeed(), CG_GENERALPARMS(armor).mMaxTurnAngle());

		armor->setTargetSpeed(CG_GENERALPARMS(armor).mMoveSpeed());

		if (armor->isTargetAttackable(target, angleDist, CG_GENERALPARMS(armor).mMaxAttackRange(),
		                              CG_GENERALPARMS(armor).mMaxAttackAngle())) {
			armor->mNextState = ARMOR_Attack2;
			armor->finishMotion();
		} else {
			if (armor->distanceFromHome() > CG_GENERALPARMS(armor).mTerritoryRadius()) {
				armor->mNextState = ARMOR_GoHome;
				armor->finishMotion();
			} else {
				Creature* newTarget = EnemyFunc::getNearestPikminOrNavi(
				    armor, CG_GENERALPARMS(armor).mMaxAttackAngle(), CG_GENERALPARMS(armor).mMaxAttackRange(), nullptr, nullptr, nullptr);
				if (newTarget) {
					armor->mNextState = ARMOR_Attack2;
					armor->finishMotion();
				}
			}
		}

	} else if (armor->isBreakBridge()) {
		armor->mNextState = armor->checkBreakOrMove();
		armor->finishMotion();
	} else {
		armor->mNextState = ARMOR_GoHome;
		armor->finishMotion();
	}

	if (armor->mHealth <= 0.0f) {
		transit(armor, ARMOR_Dead, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(armor, true)) {
		transit(armor, ARMOR_Flick, nullptr);
		return;
	}

	if (armor->mCurAnim->mIsPlaying && armor->mCurAnim->mType == KEYEVENT_END) {
		transit(armor, armor->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x80286DD4
 * @note Size: 0x4
 */
void StateMove::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x80286DD8
 * @note Size: 0x34
 */
void StateMoveSide::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* armor        = OBJ(enemy);
	armor->mNextState = ARMOR_NULL;
	armor->startMotion(ARMORANIM_Move, nullptr);
}

/**
 * @note Address: 0x80286E0C
 * @note Size: 0x128
 */
void StateMoveSide::exec(EnemyBase* enemy)
{
	Obj* armor     = OBJ(enemy);
	f32 viewAngle  = CG_GENERALPARMS(armor).mViewAngle;
	f32 viewRadius = CG_GENERALPARMS(armor).mSightRadius;

	Creature* targetCreature = EnemyFunc::getNearestPikminOrNavi(armor, viewAngle, viewRadius, nullptr, nullptr, nullptr);

	if (targetCreature) {
		armor->mNextState = ARMOR_Move;
		armor->finishMotion();
	} else if (armor->isBreakBridge()) {
		if (armor->moveBridgeSide()) {
			armor->mNextState = ARMOR_MoveCentre;
			armor->finishMotion();
		}
	} else {
		armor->mNextState = ARMOR_GoHome;
		armor->finishMotion();
	}

	if (armor->mHealth <= 0.0f) {
		transit(armor, ARMOR_Dead, nullptr);
		return;
	}
	if (armor->mCurAnim->mIsPlaying) {
		u32 animType = armor->mCurAnim->mType;
		if (animType == KEYEVENT_END) {
			transit(armor, armor->mNextState, nullptr);
		}
	}
}

/**
 * @note Address: 0x80286F34
 * @note Size: 0x4
 */
void StateMoveSide::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x80286F38
 * @note Size: 0x34
 */
void StateMoveCentre::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* armor        = OBJ(enemy);
	armor->mNextState = ARMOR_NULL;
	armor->startMotion(ARMORANIM_Move, nullptr);
}

/**
 * @note Address: 0x80286F6C
 * @note Size: 0x128
 */
void StateMoveCentre::exec(EnemyBase* enemy)
{
	Obj* armor     = OBJ(enemy);
	f32 viewAngle  = CG_GENERALPARMS(armor).mViewAngle;
	f32 viewRadius = CG_GENERALPARMS(armor).mSightRadius;

	Creature* targetCreature = EnemyFunc::getNearestPikminOrNavi(armor, viewAngle, viewRadius, nullptr, nullptr, nullptr);
	if (targetCreature) {
		armor->mNextState = ARMOR_Move;
		armor->finishMotion();
	} else if (armor->isBreakBridge()) {
		if (armor->moveBridgeCentre()) {
			armor->mNextState = ARMOR_MoveTop;
			armor->finishMotion();
		}
	} else {
		armor->mNextState = ARMOR_GoHome;
		armor->finishMotion();
	}

	if (armor->mHealth <= 0.0f) {
		transit(armor, ARMOR_Dead, nullptr);
		return;
	}
	if (armor->mCurAnim->mIsPlaying) {
		u32 animType = armor->mCurAnim->mType;
		if (animType == KEYEVENT_END) {
			transit(armor, armor->mNextState, nullptr);
		}
	}
}

/**
 * @note Address: 0x80287094
 * @note Size: 0x4
 */
void StateMoveCentre::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x80287098
 * @note Size: 0x34
 */
void StateMoveTop::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* armor        = OBJ(enemy);
	armor->mNextState = ARMOR_NULL;
	armor->startMotion(ARMORANIM_Move, nullptr);
}

/**
 * @note Address: 0x802870CC
 * @note Size: 0x128
 */
void StateMoveTop::exec(EnemyBase* enemy)
{
	Obj* armor     = OBJ(enemy);
	f32 viewAngle  = CG_GENERALPARMS(armor).mViewAngle;
	f32 viewRadius = CG_GENERALPARMS(armor).mSightRadius;

	Creature* targetCreature = EnemyFunc::getNearestPikminOrNavi(armor, viewAngle, viewRadius, nullptr, nullptr, nullptr);
	if (targetCreature) {
		armor->mNextState = ARMOR_Move;
		armor->finishMotion();
	} else if (armor->isBreakBridge()) {
		if (armor->moveBridgeTop()) {
			armor->mNextState = ARMOR_Attack1;
			armor->finishMotion();
		}
	} else {
		armor->mNextState = ARMOR_GoHome;
		armor->finishMotion();
	}

	if (armor->mHealth <= 0.0f) {
		transit(armor, ARMOR_Dead, nullptr);
		return;
	}
	if (armor->mCurAnim->mIsPlaying) {
		u32 animType = armor->mCurAnim->mType;
		if (animType == KEYEVENT_END) {
			transit(armor, armor->mNextState, nullptr);
		}
	}
}

/**
 * @note Address: 0x802871F4
 * @note Size: 0x4
 */
void StateMoveTop::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x802871F8
 * @note Size: 0x34
 */
void StateGoHome::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* armor        = OBJ(enemy);
	armor->mNextState = ARMOR_NULL;
	armor->startMotion(ARMORANIM_Move, nullptr);
}

/**
 * @note Address: 0x8028722C
 * @note Size: 0x21C
 */
void StateGoHome::exec(EnemyBase* enemy)
{
	Obj* armor       = OBJ(enemy);
	Vector3f pos     = armor->getPosition();
	Vector3f homePos = Vector3f(armor->mHomePosition);

	EnemyFunc::walkToTarget(armor, homePos, CG_GENERALPARMS(armor).mMoveSpeed.mValue, CG_GENERALPARMS(armor).mTurnSpeed.mValue,
	                        CG_GENERALPARMS(armor).mMaxTurnAngle.mValue);

	if (EnemyFunc::getNearestPikminOrNavi(armor, CG_GENERALPARMS(armor).mMaxAttackRange.mValue,
	                                      CG_GENERALPARMS(armor).mMaxAttackAngle.mValue, nullptr, nullptr, nullptr)) {
		armor->mNextState = ARMOR_Attack2;
		armor->finishMotion();
	} else {
		Vector3f armorHomePos = armor->mHomePosition;
		Vector3f armorPos     = armor->getPosition();

		f32 dist = armorPos.distance(armorHomePos);
		if (dist < CG_GENERALPARMS(armor).mHomeRadius.mValue) {
			armor->mNextState = ARMOR_Dive;
			armor->finishMotion();
		}
	}

	if (armor->mCurAnim->mIsPlaying && armor->mCurAnim->mType == KEYEVENT_END) {
		transit(armor, armor->mNextState, nullptr);
	}

	if (armor->mHealth <= 0.0f) {
		transit(armor, ARMOR_Dead, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(armor, true)) {
		transit(armor, ARMOR_Flick, nullptr);
	}
}

/**
 * @note Address: 0x80287448
 * @note Size: 0x4
 */
void StateGoHome::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x8028744C
 * @note Size: 0x58
 */
void StateAttack1::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* armor             = OBJ(enemy);
	armor->mTargetVelocity = Vector3f(0.0f);
	armor->startMotion(ARMORANIM_Attack1, nullptr);
	armor->mNextState = ARMOR_NULL;
	armor->createBridgeEffect();
}

/**
 * @note Address: 0x802874A4
 * @note Size: 0x13C
 */
void StateAttack1::exec(EnemyBase* enemy)
{
	Obj* armor     = OBJ(enemy);
	f32 viewAngle  = CG_GENERALPARMS(armor).mViewAngle;
	f32 viewRadius = CG_GENERALPARMS(armor).mSightRadius;

	Creature* targetCreature = EnemyFunc::getNearestPikminOrNavi(armor, viewAngle, viewRadius, nullptr, nullptr, nullptr);
	if (targetCreature) {
		armor->mNextState = ARMOR_Move;
	} else if (armor->isBreakBridge()) {
		if (armor->moveBridgeTop()) {
			armor->mNextState = ARMOR_Attack1;
		} else {
			armor->mNextState = ARMOR_MoveTop;
		}
	} else {
		armor->mNextState = ARMOR_GoHome;
	}

	if (armor->mCurAnim->mIsPlaying) {
		u32 animType = armor->mCurAnim->mType;
		if (animType == KEYEVENT_2) {
			if (armor->isBreakBridge()) {
				armor->breakTargetBridge();
			}
		} else if (animType == KEYEVENT_END) {
			transit(armor, armor->mNextState, nullptr);
		}
	}
	if (armor->mHealth <= 0.0f) {
		transit(armor, ARMOR_Dead, nullptr);
		return;
	}
}

/**
 * @note Address: 0x802875E0
 * @note Size: 0x4
 */
void StateAttack1::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x802875E4
 * @note Size: 0x40
 */
void StateAttack2::init(EnemyBase* enemy, StateArg* stateArg)
{
	OBJ(enemy)->mAttackLoopTime = 0.0f;
	enemy->mTargetVelocity      = Vector3f(0.0f);
	enemy->startMotion(ARMORANIM_Attack2, nullptr);
}

/**
 * @note Address: 0x80287624
 * @note Size: 0x1B8
 */
void StateAttack2::exec(EnemyBase* enemy)
{
	Obj* armor = OBJ(enemy);
	f32 frame  = armor->getMotionFrame();

	if (frame > 17.0f && frame < 27.0f) {
		armor->attackPikmin();
	}
	if (armor->mAttackLoopTime > CG_PROPERPARMS(armor).mAttackLoopTimer) {
		armor->finishMotion();
	}

	armor->mAttackLoopTime += sys->mDeltaTime;

	if (armor->mCurAnim->mIsPlaying) {
		if (armor->mCurAnim->mType == KEYEVENT_2) {
			armor->createAttackEffect();
		} else if (armor->mCurAnim->mType == KEYEVENT_3) {
			f32 attackRadius = CG_GENERALPARMS(armor).mAttackRadius;
			f32 attackAngle  = CG_GENERALPARMS(armor).mAttackHitAngle;
			f32 attackDamage = CG_GENERALPARMS(armor).mAttackDamage;
			EnemyFunc::attackNavi(armor, attackRadius, attackAngle, attackDamage, nullptr, nullptr);

			Vector3f armorPos = armor->getPosition();
			rumbleMgr->startRumble(RUMBLETYPE_Fixed9, armorPos, RUMBLEID_Both);

		} else if (armor->mCurAnim->mType == KEYEVENT_END) {
			if (armor->mHealth <= 0.0f) {
				transit(armor, ARMOR_Dead, nullptr);
				return;
			}
			if (armor->getSlotPikiNum()) {
				transit(armor, ARMOR_Eat, nullptr);
			} else {
				transit(armor, ARMOR_Fail, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x802877DC
 * @note Size: 0x4
 */
void StateAttack2::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x802877E0
 * @note Size: 0x3C
 */
void StateEat::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->startMotion(ARMORANIM_Eat, nullptr);
}

/**
 * @note Address: 0x8028781C
 * @note Size: 0x98
 */
void StateEat::exec(EnemyBase* enemy)
{
	Obj* armor = OBJ(enemy);
	if (armor->mHealth <= 0.0f) {
		transit(armor, ARMOR_Dead, nullptr);
		return;
	}
	if (armor->mCurAnim->mIsPlaying) {
		if (armor->mCurAnim->mType == KEYEVENT_2) {
			armor->killSlotPiki();
		} else if (armor->mCurAnim->mType == KEYEVENT_END) {
			transit(armor, ARMOR_Move, nullptr);
		}
	}
}

/**
 * @note Address: 0x802878B4
 * @note Size: 0x4
 */
void StateEat::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x802878B8
 * @note Size: 0x3C
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->startMotion(ARMORANIM_Flick, nullptr);
}

/**
 * @note Address: 0x802878F4
 * @note Size: 0x144
 */
void StateFlick::exec(EnemyBase* enemy)
{
	Obj* armor = OBJ(enemy);

	if (armor->mHealth <= 0.0f) {
		transit(armor, ARMOR_Dead, nullptr);
		return;
	}

	if (armor->mCurAnim->mIsPlaying) {
		if (armor->mCurAnim->mType == KEYEVENT_2) {
			EnemyFunc::flickNearbyNavi(armor, CG_GENERALPARMS(armor).mShakeRange.mValue, CG_GENERALPARMS(armor).mShakeKnockback.mValue,
			                           CG_GENERALPARMS(armor).mShakeDamage.mValue, armor->getFaceDir(), nullptr);
			EnemyFunc::flickNearbyPikmin(armor, CG_GENERALPARMS(armor).mShakeRange.mValue, CG_GENERALPARMS(armor).mShakeKnockback.mValue,
			                             CG_GENERALPARMS(armor).mShakeDamage.mValue, armor->getFaceDir(), nullptr);
			EnemyFunc::flickStickPikmin(armor, CG_GENERALPARMS(armor).mShakeChance.mValue, CG_GENERALPARMS(armor).mShakeKnockback.mValue,
			                            CG_GENERALPARMS(armor).mShakeDamage.mValue, armor->getFaceDir(), nullptr);
			armor->mFlickTimer = 0.0f;

		} else if (armor->mCurAnim->mType == KEYEVENT_END) {
			transit(armor, ARMOR_Move, nullptr);
		}
	}
}

/**
 * @note Address: 0x80287A38
 * @note Size: 0x4
 */
void StateFlick::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x80287A3C
 * @note Size: 0x3C
 */
void StateFail::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->startMotion(ARMORANIM_AttackFail, nullptr);
}

/**
 * @note Address: 0x80287A78
 * @note Size: 0x80
 */
void StateFail::exec(EnemyBase* enemy)
{
	Obj* armor = OBJ(armor);
	if (armor->mHealth <= 0.0f) {
		transit(armor, ARMOR_Dead, nullptr);
		return;
	}

	if (armor->mCurAnim->mIsPlaying) {
		if (armor->mCurAnim->mType == KEYEVENT_END) {
			transit(armor, ARMOR_Move, nullptr);
		}
	}
}

/**
 * @note Address: 0x80287AF8
 * @note Size: 0x4
 */
void StateFail::cleanup(EnemyBase* enemy)
{
}

} // namespace Armor
} // namespace Game

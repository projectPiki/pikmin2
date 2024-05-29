#include "types.h"
#include "Game/Entities/ElecBug.h"
#include "Game/EnemyIterator.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/generalEnemyMgr.h"
#include "Dolphin/rand.h"

namespace Game {
namespace ElecBug {

static const char unusedElecBugName[] = "246-ElecBugState";

/**
 * @note Address: 0x80278E90
 * @note Size: 0x384
 */
void FSM::init(EnemyBase* enemy)
{
	create(ELECBUG_Count);
	registerState(new StateDead);
	registerState(new StateWait);
	registerState(new StateTurn);
	registerState(new StateMove);
	registerState(new StateCharge);
	registerState(new StateDischarge);
	registerState(new StateChildCharge);
	registerState(new StateChildDischarge);
	registerState(new StateReverse);
	registerState(new StateReturn);
}

/**
 * @note Address: 0x80279214
 * @note Size: 0x5C
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->deathProcedure();
	enemy->disableEvent(0, EB_Cullable);
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->startMotion(ELECBUGANIM_Dead, nullptr);
}

/**
 * @note Address: 0x80279270
 * @note Size: 0x44
 */
void StateDead::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		enemy->kill(nullptr);
	}
}

/**
 * @note Address: 0x802792B4
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802792B8
 * @note Size: 0x4C
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* bug         = OBJ(enemy);
	bug->mStateTimer = 0.0f;
	bug->enableEvent(0, EB_Cullable);
	bug->mTargetVelocity = Vector3f(0.0f);
	bug->startMotion(ELECBUGANIM_Wait, nullptr);
}

/**
 * @note Address: 0x80279304
 * @note Size: 0xA0
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* bug = OBJ(enemy);
	if (bug->mStateTimer > CG_PROPERPARMS(bug).mWaitTime) {
		bug->finishMotion();
	}
	if (bug->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		transit(bug, ELECBUG_Turn, nullptr);
	}
	bug->mStateTimer += sys->mDeltaTime;
}

/**
 * @note Address: 0x802793A4
 * @note Size: 0x4
 */
void StateWait::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802793A8
 * @note Size: 0x5C
 */
void StateTurn::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* bug = OBJ(enemy);
	bug->setTargetPosition();
	bug->enableEvent(0, EB_Cullable);
	bug->mTargetVelocity = Vector3f(0.0f);
	bug->startMotion(ELECBUGANIM_Move, nullptr);
}

/**
 * @note Address: 0x80279404
 * @note Size: 0x200
 */
void StateTurn::exec(EnemyBase* enemy)
{
	Obj* bug           = OBJ(enemy);
	Vector3f targetPos = bug->mTargetPosition;
	Vector2f XZ;
	XZ.x = targetPos.x;
	XZ.y = targetPos.z;

	// f32 dist = bug->changeFaceDir(targetPos);

	f32 dist = bug->turnToTarget(targetPos, CG_GENERALPARMS(bug).mTurnSpeed(), CG_GENERALPARMS(bug).mMaxTurnAngle());
	f64 abs  = fabs(dist);
	if ((f32)(abs) <= PI / 6.0f) {
		bug->finishMotion();
	}

	if (bug->mInactiveTimer > 15.0f) {
		bug->finishMotion();
	}
	if (bug->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		if (bug->mInactiveTimer > 15.0f) {
			transit(bug, ELECBUG_Charge, nullptr);
			return;
		}
		transit(bug, ELECBUG_Move, nullptr);
	}
}

/**
 * @note Address: 0x80279604
 * @note Size: 0x4
 */
void StateTurn::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x80279608
 * @note Size: 0x3C
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* bug = OBJ(enemy);
	bug->enableEvent(0, EB_Cullable);
	bug->startMotion(ELECBUGANIM_Move, nullptr);
}

/**
 * @note Address: 0x80279644
 * @note Size: 0x13C
 */
void StateMove::exec(EnemyBase* enemy)
{
	Obj* bug           = OBJ(enemy);
	Vector3f targetPos = Vector3f(bug->mTargetPosition);

	Vector3f currentPos = bug->getPosition();
	if (outsideRadius(25.0f, currentPos, targetPos)) {
		EnemyParmsBase::Parms& general = CG_GENERALPARMS(bug);
		EnemyFunc::walkToTarget(bug, targetPos, general.mMoveSpeed, general.mTurnSpeed, general.mMaxTurnAngle);

	} else {
		bug->finishMotion();
	}
	if (bug->mInactiveTimer > 15.0f) {
		bug->finishMotion();
	}
	if (bug->mCurAnim->mIsPlaying && bug->mCurAnim->mType == KEYEVENT_END) {
		if (bug->mInactiveTimer > 15.0f) {
			transit(bug, ELECBUG_Charge, nullptr);
		} else {
			transit(bug, ELECBUG_Wait, nullptr);
		}
	}
}

/**
 * @note Address: 0x80279780
 * @note Size: 0x4
 */
void StateMove::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x80279784
 * @note Size: 0x7C
 */
void StateCharge::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* bug               = OBJ(enemy);
	bug->mHasStartedSearch = false;
	bug->mStateTimer       = 0.0f;
	bug->resetPartnerPtr();
	bug->startChargeEffect();
	bug->enableEvent(0, EB_Cullable);
	bug->mTargetVelocity = Vector3f(0.0f);
	bug->setEmotionExcitement();
	bug->startMotion(ELECBUGANIM_Charge, nullptr);
}

/**
 * @note Address: 0x80279800
 * @note Size: 0x554
 */
void StateCharge::exec(EnemyBase* enemy)
{
	Obj* bug = OBJ(enemy);
	Obj* seachingBugs[32];

	if (!bug->mHasStartedSearch && bug->mStateTimer > 2.0f) {
		int bugCount           = 0;
		bug->mHasStartedSearch = true;
		Vector3f bugPos        = bug->getPosition();
		Mgr* mgr               = static_cast<Mgr*>(generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_ElecBug));
		if (mgr) { // sanity check moment
			EnemyIterator<Obj> iElecBug = (mgr);
			CI_LOOP(iElecBug)
			{
				Obj* otherBug = *iElecBug;
				if (bug != otherBug && otherBug->isBecomeChargeState()) {
					Vector3f otherPos = otherBug->getPosition();
					if (bugPos.distance(otherPos) < 300.0f) {
						seachingBugs[bugCount] = otherBug;
						bugCount++;
					}
				}
			}
		}
		if (bugCount != 0) {
			Obj* randBug = seachingBugs[randInt(bugCount)];
			bug->startChargeState(randBug);
			bug->disableEvent(0, EB_Cullable);
		}
	}
	Obj* partner = bug->getPartner();
	if (partner) {
		Vector3f bugPos     = bug->getPosition();
		Vector3f partnerPos = partner->getPosition();
		Vector3f pos        = bugPos - partnerPos;
		pos += bugPos;
		bug->turnToTarget2(pos, 0.15f, CG_GENERALPARMS(bug).mMaxTurnAngle());
	}
	if (bug->mStateTimer > 3.0f) {
		if (bug->getPartner()) {
			transit(bug, ELECBUG_Discharge, nullptr);
		} else {
			bug->finishPartnerAndEffect();
			transit(bug, ELECBUG_Turn, nullptr);
		}
	}
	bug->mStateTimer += sys->mDeltaTime;
}

/**
 * @note Address: 0x80279D54
 * @note Size: 0x4C
 */

/**
 * @note Address: 0x80279DA0
 * @note Size: 0x64
 */
void StateCharge::cleanup(EnemyBase* enemy)
{
	Obj* bug = OBJ(enemy);
	bug->setEmotionCaution();
	bug->mInactiveTimer = randWeightFloat(10.0f);
}

/**
 * @note Address: 0x80279E04
 * @note Size: 0x60
 */
void StateDischarge::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* bug         = OBJ(enemy);
	bug->mStateTimer = 0.0f;
	bug->disableEvent(0, EB_Cullable);
	bug->mTargetVelocity = Vector3f(0.0f);
	bug->setEmotionExcitement();
	bug->startMotion(ELECBUGANIM_Discharge, nullptr);
}

/**
 * @note Address: 0x80279E64
 * @note Size: 0xE8
 */
void StateDischarge::exec(EnemyBase* enemy)
{
	Obj* bug = OBJ(enemy);
	if (bug->mPartner) {
		bug->checkInteract(bug->mPartner);
	} else {
		bug->finishPartnerAndEffect();
		bug->finishMotion();
	}

	if (bug->mStateTimer > CG_PROPERPARMS(bug).mDischargeTime.mValue) {
		bug->finishMotion();
	}

	if (bug->mCurAnim->mIsPlaying) {
		if (bug->mCurAnim->mType == KEYEVENT_2) {
			if (bug->mPartner) {
				bug->startDischargeEffect(bug->mPartner);
			}
		} else if (bug->mCurAnim->mType == KEYEVENT_END) {
			transit(bug, ELECBUG_Turn, nullptr);
		}
	}

	bug->mStateTimer += sys->mDeltaTime;
}

/**
 * @note Address: 0x80279F4C
 * @note Size: 0x6C
 */
void StateDischarge::cleanup(EnemyBase* enemy)
{
	Obj* bug = OBJ(enemy);
	bug->setEmotionCaution();
	bug->mInactiveTimer = randWeightFloat(10.0f);
	bug->finishPartnerAndEffect();
}

/**
 * @note Address: 0x80279FB8
 * @note Size: 0x6C
 */
void StateChildCharge::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* bug         = OBJ(enemy);
	bug->mStateTimer = 0.0f;
	bug->startChargeEffect();
	bug->disableEvent(0, EB_Cullable);
	bug->mTargetVelocity = Vector3f(0.0f);
	bug->setEmotionExcitement();
	bug->startMotion(ELECBUGANIM_Charge, nullptr);
}

/**
 * @note Address: 0x8027A024
 * @note Size: 0x228
 */
void StateChildCharge::exec(EnemyBase* enemy)
{
	Obj* bug     = OBJ(enemy);
	Obj* partner = bug->getPartner();
	if (partner) {
		Vector3f bugPos     = bug->getPosition();
		Vector3f partnerPos = partner->getPosition();
		Vector3f pos        = bugPos - partnerPos;
		pos += bugPos;
		bug->turnToTarget2(pos, 0.15f, CG_GENERALPARMS(bug).mMaxTurnAngle());
	}
	if (bug->mStateTimer > 1.0f) {
		if (partner) {
			transit(bug, ELECBUG_ChildDischarge, nullptr);
		} else {
			bug->finishPartnerAndEffect();
			transit(bug, ELECBUG_Turn, nullptr);
		}
	}
	bug->mStateTimer += sys->mDeltaTime;
}

/**
 * @note Address: 0x8027A24C
 * @note Size: 0x64
 */
void StateChildCharge::cleanup(EnemyBase* enemy)
{
	Obj* bug = OBJ(enemy);
	bug->setEmotionCaution();
	bug->mInactiveTimer = randWeightFloat(10.0f);
}

/**
 * @note Address: 0x8027A2B0
 * @note Size: 0x60
 */
void StateChildDischarge::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* bug         = OBJ(enemy);
	bug->mStateTimer = 0.0f;
	bug->disableEvent(0, EB_Cullable);
	bug->mTargetVelocity = Vector3f(0.0f);
	bug->setEmotionExcitement();
	bug->startMotion(ELECBUGANIM_Discharge, nullptr);
}

/**
 * @note Address: 0x8027A310
 * @note Size: 0xC0
 */
void StateChildDischarge::exec(EnemyBase* enemy)
{
	Obj* bug = OBJ(enemy);
	if (bug->mPartner) {
		if (bug->mStateTimer > CG_PROPERPARMS(bug).mDischargeTime.mValue) {
			bug->finishMotion();
		}
	} else {
		bug->finishPartnerAndEffect();
		bug->finishMotion();
	}

	if (bug->mCurAnim->mIsPlaying && bug->mCurAnim->mType == KEYEVENT_END) {
		transit(bug, ELECBUG_Wait, nullptr);
	}

	bug->mStateTimer += sys->mDeltaTime;
}

/**
 * @note Address: 0x8027A3D0
 * @note Size: 0x6C
 */
void StateChildDischarge::cleanup(EnemyBase* enemy)
{
	Obj* bug = OBJ(enemy);
	bug->setEmotionCaution();
	bug->mInactiveTimer = randWeightFloat(10.0f);
	bug->finishPartnerAndEffect();
}

/**
 * @note Address: 0x8027A43C
 * @note Size: 0x70
 */
void StateReverse::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* bug         = OBJ(enemy);
	bug->mStateTimer = 0.0f;
	bug->finishPartnerAndEffect();
	bug->enableEvent(0, EB_Cullable);
	bug->disableEvent(0, EB_Invulnerable);
	bug->mTargetVelocity = Vector3f(0.0f);
	bug->startMotion(ELECBUGANIM_Turn, nullptr);
}

/**
 * @note Address: 0x8027A4AC
 * @note Size: 0xD8
 */
void StateReverse::exec(EnemyBase* enemy)
{
	Obj* bug = OBJ(enemy);
	if (bug->mStateTimer > CG_PROPERPARMS(bug).mFlipTime.mValue) {
		bug->finishMotion();
	}

	if (bug->mHealth <= 0.0f) {
		transit(bug, ELECBUG_Dead, nullptr);
		return;
	}

	bug->mStateTimer += sys->mDeltaTime;

	if (bug->mCurAnim->mIsPlaying && bug->mCurAnim->mType == KEYEVENT_END) {
		transit(bug, ELECBUG_Return, nullptr);
	}
}

/**
 * @note Address: 0x8027A584
 * @note Size: 0x10
 */
void StateReverse::cleanup(EnemyBase* enemy) { enemy->enableEvent(0, EB_Invulnerable); }

/**
 * @note Address: 0x8027A594
 * @note Size: 0x48
 */
void StateReturn::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* bug = OBJ(enemy); // nothing even uses the obj cast here but it's necessary for codegen, smh.
	bug->enableEvent(0, EB_Cullable);
	bug->mTargetVelocity = Vector3f(0.0f);
	bug->startMotion(ELECBUGANIM_Recover, nullptr);
}

/**
 * @note Address: 0x8027A5DC
 * @note Size: 0x50
 */
void StateReturn::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		transit(enemy, ELECBUG_Turn, nullptr);
	}
}

/**
 * @note Address: 0x8027A62C
 * @note Size: 0x4
 */
void StateReturn::cleanup(EnemyBase* enemy) { }

} // namespace ElecBug
} // namespace Game

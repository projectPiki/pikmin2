#include "Game/Entities/ShijimiChou.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "efx/TEnemyDead.h"
#include "Dolphin/rand.h"
#include "PS.h"

namespace Game {
namespace ShijimiChou {

/*
 * --INFO--
 * Address:	80387718
 * Size:	000108
 */
void FSM::init(EnemyBase* enemy)
{
	create(SHIJIMICHOU_StateCount);

	registerState(new StateWait(SHIJIMICHOU_Wait));
	registerState(new StateFly(SHIJIMICHOU_Fly));
	registerState(new StateFall(SHIJIMICHOU_Fall));
	registerState(new StateDead(SHIJIMICHOU_Dead));
	registerState(new StateLeave(SHIJIMICHOU_Leave));
	registerState(new StateRest(SHIJIMICHOU_Rest));
}

/*
 * --INFO--
 * Address:	80387820
 * Size:	00003C
 */
StateWait::StateWait(int stateID)
    : State(stateID)
{
	mName = "wait";
}

/*
 * --INFO--
 * Address:	8038785C
 * Size:	0000C0
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->enableEvent(0, EB_IsFlying);
	enemy->mTargetVelocity  = Vector3f(0.0f);
	enemy->mCurrentVelocity = Vector3f(0.0f);
	enemy->startMotion(2, nullptr);
	enemy->setMotionFrame(enemy->getMotionFrameMax() * randFloat());
	mWaitTimer = 0;
}

/*
 * --INFO--
 * Address:	8038791C
 * Size:	000140
 */
void StateWait::exec(EnemyBase* enemy)
{
	mWaitTimer++;

	if (mWaitTimer > 10) {
		if (static_cast<Obj*>(enemy)->mSpawnSource == SHIJIMISOURCE_Enemy) {
			if (static_cast<Obj*>(enemy)->mGroupLeader != enemy) {
				transit(enemy, SHIJIMICHOU_Rest, nullptr);
				return;
			}

			EnemyBase* spawnEnemy = static_cast<Obj*>(enemy)->mSpawningEnemy;
			if (spawnEnemy && !spawnEnemy->isConstrained()) {
				transit(enemy, SHIJIMICHOU_Fly, nullptr);
				return;
			}

		} else if (static_cast<Obj*>(enemy)->mGroupLeader != enemy
		           || EnemyFunc::getNearestPikmin(enemy, 180.0f, 150.0f, nullptr, nullptr)) {
			transit(enemy, SHIJIMICHOU_Fly, nullptr);
			return;
		}
	} else if (static_cast<Obj*>(enemy)->mGroupLeader == enemy) {
		static_cast<Obj*>(enemy)->leaderInit();
	}

	static_cast<Obj*>(enemy)->fly();
}

/*
 * --INFO--
 * Address:	80387A5C
 * Size:	00003C
 */
StateFly::StateFly(int stateID)
    : State(stateID)
{
	mName = "fly";
}

/*
 * --INFO--
 * Address:	80387A98
 * Size:	000054
 */
void StateFly::init(EnemyBase* enemy, StateArg* stateArg)
{
	static_cast<Obj*>(enemy)->setNextGoal();
	static_cast<Obj*>(enemy)->mFlyTime = 0;
	enemy->disableEvent(0, EB_IsCullable);
	mFlyTimer = 0;
}

/*
 * --INFO--
 * Address:	80387AEC
 * Size:	0000E8
 */
void StateFly::exec(EnemyBase* enemy)
{
	if (OBJ(enemy)->checkFlyStart()) {
		OBJ(enemy)->mFlyTime++;
	}

	if (mFlyTimer == 10) {
		OBJ(enemy)->fadeAppearEffect();
	} else {
		mFlyTimer++;
	}

	f32 flyMax = CG_PROPERPARMS(OBJ(enemy)).mFp01.mValue;
	if (OBJ(enemy)->mSpawnSource == SHIJIMISOURCE_Plants) {
		flyMax = CG_PROPERPARMS(OBJ(enemy)).mFp08.mValue;
	}
	if (OBJ(enemy)->mSpawnSource == SHIJIMISOURCE_Enemy) {
		flyMax = 60.0f;
	}

	if (OBJ(enemy)->mFlyTime > flyMax) {
		transit(enemy, SHIJIMICHOU_Leave, nullptr);
	} else {
		OBJ(enemy)->fly();
	}
}

/*
 * --INFO--
 * Address:	80387BD4
 * Size:	00003C
 */
StateFall::StateFall(int stateID)
    : State(stateID)
{
	mName = "fall";
}

/*
 * --INFO--
 * Address:	80387C10
 * Size:	0000D0
 */
void StateFall::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->hardConstraintOff();
	enemy->disableEvent(0, EB_IsFlying);

	if (CG_PARMS(OBJ(enemy))->_94C) {
		// smfh i hate stack vector shenanigans.
		Vector3f vel;
		Vector3f* velPtr       = &vel;
		*velPtr                = enemy->mTargetVelocity;
		enemy->mTargetVelocity = Vector3f(vel.x, -20.0f, vel.z);
	}

	OBJ(enemy)->_2CC = enemy->getPosition();
	enemy->mSoundObj->startSound(PSSE_EN_BUTTERFLY_HIT, 0);
	mFallTimer = 0;

	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	mr       r3, r31
	bl       hardConstraintOff__Q24Game9EnemyBaseFv
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x1e, 0x1c
	stw      r0, 0x1e0(r31)
	lwz      r3, 0xc0(r31)
	lbz      r0, 0x94c(r3)
	cmplwi   r0, 0
	beq      lbl_80387C74
	lfs      f1, 0x1d4(r31)
	lfs      f2, 0x1d8(r31)
	lfs      f3, 0x1dc(r31)
	lfs      f0, lbl_8051EE40@sda21(r2)
	stfs     f1, 0x14(r1)
	stfs     f0, 0x1d8(r31)
	stfs     f2, 0x18(r1)
	stfs     f3, 0x1c(r1)
	stfs     f3, 0x1dc(r31)

lbl_80387C74:
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 8(r1)
	li       r4, 0x5917
	li       r5, 0
	stfs     f0, 0x2cc(r31)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x2d0(r31)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x2d4(r31)
	lwz      r3, 0x28c(r31)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, 0x10(r30)
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80387CE0
 * Size:	000094
 */
void StateFall::exec(EnemyBase* enemy)
{
	if (CG_PARMS(OBJ(enemy))->_94C) {
		OBJ(enemy)->fallBehavior();
	}

	if (OBJ(enemy)->isFallEnd() || mFallTimer > 100) {
		transit(enemy, SHIJIMICHOU_Dead, nullptr);
	}
	mFallTimer++;
}

/*
 * --INFO--
 * Address:	80387D74
 * Size:	00003C
 */
StateDead::StateDead(int stateID)
    : State(stateID)
{
	mName = "dead";
}

/*
 * --INFO--
 * Address:	80387DB0
 * Size:	0000A0
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->setAlive(false);
	enemy->disableEvent(0, EB_IsFlying);
	enemy->mTargetVelocity  = Vector3f(0.0f);
	enemy->mCurrentVelocity = Vector3f(0.0f);
	enemy->enableEvent(0, EB_ToLeaveCarcass);
	enemy->deathProcedure();
	enemy->startMotion(1, nullptr);
	PSStartEnemyFatalHitSE(enemy, 0.0f);
	OBJ(enemy)->deadEffect();
}

/*
 * --INFO--
 * Address:	80387E50
 * Size:	000114
 */
void StateDead::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		OBJ(enemy)->genItem();
		PSStartEnemyGhostSE(enemy, 0.0f);
		Vector3f effectPos;
		enemy->getCommonEffectPos(effectPos);
		efx::ArgEnemyType fxArg(effectPos, EnemyTypeID::EnemyID_UjiA, 1.0f); // sure, use the female sheargrub type. whatever.
		efx::TEnemyDead deadFX;
		deadFX.create(&fxArg);
		enemy->kill(nullptr);
	}
}

/*
 * --INFO--
 * Address:	80387F64
 * Size:	00003C
 */
StateLeave::StateLeave(int stateID)
    : State(stateID)
{
	mName = "leave";
}

/*
 * --INFO--
 * Address:	80387FA0
 * Size:	000044
 */
void StateLeave::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->setEmotionCaution();
	enemy->enableEvent(0, EB_IsCullable);
	OBJ(enemy)->leaveInit();
}

/*
 * --INFO--
 * Address:	80387FE4
 * Size:	000024
 */
void StateLeave::exec(EnemyBase* enemy) { OBJ(enemy)->leave(); }

/*
 * --INFO--
 * Address:	80388008
 * Size:	00003C
 */
StateRest::StateRest(int stateID)
    : State(stateID)
{
	mName = "rest";
}

/*
 * --INFO--
 * Address:	80388044
 * Size:	0000BC
 */
void StateRest::init(EnemyBase* enemy, StateArg* stateArg)
{
	_1C = true;
	_10 = 0;
	_18 = 30.0f + 100.0f * randFloat();
	_1D = false;
	_14 = 0;
	_1E = false;

	if (gameSystem && gameSystem->mMode == GSM_PIKLOPEDIA) {
		enemy->disableEvent(0, EB_IsCullable);
	}
}

/*
 * --INFO--
 * Address:	80388100
 * Size:	00034C
 */
void StateRest::exec(EnemyBase* enemy)
{
	if (!_1D) {
		if (!enemy->isConstrained()) {
			OBJ(enemy)->restFly();
		}
	}

	_10++;

	if (_1D) {
		_14 = 0;
		if (_1E) {
			enemy->stopMotion();
		}

		if (_1C) {
			_10 = 0;
			_18 = 50.0f * randFloat() + 50.0f;
			_1C = false;
			_1E = false;
			enemy->finishMotion();

		} else if (enemy->isFinishMotion() && enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
			_1E = true;
			enemy->setMotionFrame(0.0f);
		}

		OBJ(enemy)->resetRestPos();

		if (_10 >= _18) {
			if (_10 == _18) {
				enemy->startMotion(2, nullptr);
				_1E = false;
			}

			if (OBJ(enemy)->checkRestOff()) {
				enemy->hardConstraintOff();

				_1C = true;
				_1D = false;

				enemy->startMotion();

				Vector3f landPos = OBJ(enemy)->mSpawningEnemy->getPosition();
				Vector3f chouPos = enemy->getPosition();

				landPos.x += (chouPos.x - landPos.x);
				landPos.y += (chouPos.y - landPos.y);
				landPos.z += (chouPos.z - landPos.z);

				OBJ(enemy)->_304 = landPos;

				_10 = 0;
				_18 = 600.0f + 400.0f * randFloat();
				enemy->startMotion(2, nullptr);
			}
		}

	} else {
		if (_10 > _18) {
			OBJ(enemy)->_304 = Vector3f(OBJ(enemy)->mSpawningEnemy->getPosition());
		}

		_14++;

		if (_14 > 20 && OBJ(enemy)->checkRestOn()) {
			_1D = true;
			_1C = true;

			enemy->mCurrentVelocity = Vector3f(0.0f);
			enemy->mTargetVelocity  = Vector3f(0.0f);
			enemy->hardConstraintOn();
		}
	}

	OBJ(enemy)->restCheck();
}
} // namespace ShijimiChou
} // namespace Game

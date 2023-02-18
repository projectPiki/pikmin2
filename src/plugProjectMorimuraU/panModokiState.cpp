#include "Game/Entities/PanModokiBase.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/Stickers.h"

namespace Game {
namespace PanModokiBase {

/*
 * --INFO--
 * Address:	8034C93C
 * Size:	0001BC
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

/*
 * --INFO--
 * Address:	8034CAF8
 * Size:	00003C
 */
StateDead::StateDead(int stateID)
    : State(stateID)
{
	mName = "dead";
}

/*
 * --INFO--
 * Address:	8034CB34
 * Size:	000090
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* panModoki = OBJ(enemy);
	if (panModoki->getCarryTarget()) {
		panModoki->endStick();
		panModoki->mTargetCreature = nullptr;
	}

	panModoki->startMotion(0, nullptr);
	panModoki->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed);
	panModoki->deathProcedure();
	panModoki->mCurrentVelocity = Vector3f(0.0f);
	panModoki->mTargetVelocity  = Vector3f(0.0f);
	panModoki->killNest();
}

/*
 * --INFO--
 * Address:	8034CBC4
 * Size:	000058
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

/*
 * --INFO--
 * Address:	8034CC1C
 * Size:	00003C
 */
StateWalk::StateWalk(int stateID)
    : State(stateID)
{
	mName = "walk";
}

/*
 * --INFO--
 * Address:	8034CC58
 * Size:	000070
 */
void StateWalk::init(EnemyBase* enemy, StateArg* stateArg)
{
	if (enemy->getCurrAnimIndex() != 1) {
		enemy->startMotion(1, nullptr);
		enemy->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed * CG_PROPERPARMS(enemy).mFp16.mValue);
	}

	OBJ(enemy)->mNextState = PANMODOKI_NULL;
	enemy->mTargetCreature = nullptr;
}

/*
 * --INFO--
 * Address:	8034CCC8
 * Size:	00010C
 */
void StateWalk::exec(EnemyBase* enemy)
{
	if (enemy->mHealth <= 0.0f) {
		transit(enemy, PANMODOKI_Dead, nullptr);
		return;
	}

	if (OBJ(enemy)->isReachToGoal(OBJ(enemy)->_32C)) {
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

/*
 * --INFO--
 * Address:	8034CDD4
 * Size:	00003C
 */
StateBack::StateBack(int stateID)
    : State(stateID)
{
	mName = "back";
}

/*
 * --INFO--
 * Address:	8034CE10
 * Size:	000104
 */
void StateBack::init(EnemyBase* enemy, StateArg* stateArg)
{
	int animIdx = enemy->getCurrAnimIndex();
	if (animIdx != 2) {
		enemy->startMotion(2, nullptr);
	}

	enemy->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed * CG_PROPERPARMS(enemy).mFp16.mValue);

	if (animIdx == 3) {
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

/*
 * --INFO--
 * Address:	8034CF14
 * Size:	0004D0
 */
void StateBack::exec(EnemyBase* enemy)
{
	if (enemy->mHealth <= 0.0f) {
		transit(enemy, PANMODOKI_Dead, nullptr);
		return;
	}

	if (OBJ(enemy)->mNextState < 0) {
		if (OBJ(enemy)->isEndPathFinder()) {
			if (enemy->getCurrAnimIndex() == 8) {
				enemy->startMotion(2, nullptr);
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
				if ((gameSystem && gameSystem->mMode == GSM_VERSUS_MODE && !enemy->isStickTo() && !target->mCaptureMatrix)
				    || (target->getKind() == PELTYPE_CARCASS && !target->isAlive())
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

/*
 * --INFO--
 * Address:	8034D3E4
 * Size:	00003C
 */
StatePulled::StatePulled(int stateID)
    : State(stateID)
{
	mName = "pulled";
}

/*
 * --INFO--
 * Address:	8034D420
 * Size:	0000B0
 */
void StatePulled::init(EnemyBase* enemy, StateArg* stateArg)
{
	int animIdx = enemy->getCurrAnimIndex();
	enemy->startMotion(3, nullptr);
	enemy->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed * CG_PROPERPARMS(enemy).mFp16.mValue);

	if (animIdx == 2) {
		enemy->setMotionFrame(enemy->getFirstKeyFrame());
	}

	OBJ(enemy)->createPulledSmokeEffect();
	enemy->mTargetVelocity  = Vector3f(0.0f);
	enemy->mCurrentVelocity = Vector3f(0.0f);
	OBJ(enemy)->_2E4        = 0;
	OBJ(enemy)->mNextState  = PANMODOKI_NULL;
}

/*
 * --INFO--
 * Address:	8034D4D0
 * Size:	0004CC
 */
void StatePulled::exec(EnemyBase* enemy)
{
	if (enemy->mHealth <= 0.0f) {
		transit(enemy, PANMODOKI_Dead, nullptr);
		return;
	}

	if (enemy->getEnemyTypeID() == EnemyTypeID::EnemyID_OoPanModoki) {
		if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_NULL) {
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
				if ((gameSystem && gameSystem->mMode == GSM_VERSUS_MODE && !enemy->isStickTo() && !target->mCaptureMatrix)
				    || (target->getKind() == PELTYPE_CARCASS && !target->isAlive())
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

/*
 * --INFO--
 * Address:	8034D99C
 * Size:	000024
 */
void StatePulled::cleanup(EnemyBase* enemy) { OBJ(enemy)->fadePulledSmokeEffect(); }

/*
 * --INFO--
 * Address:	8034D9C0
 * Size:	00003C
 */
StateAppear::StateAppear(int stateID)
    : State(stateID)
{
	mName = "appear";
}

/*
 * --INFO--
 * Address:	8034D9FC
 * Size:	000070
 */
void StateAppear::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(4, nullptr);
	enemy->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed);
	OBJ(enemy)->checkNearHomeGraphIndex();
	OBJ(enemy)->appearRumble();
	OBJ(enemy)->createAppearEffect();
	enemy->hardConstraintOn();
}

/*
 * --INFO--
 * Address:	8034DA70
 * Size:	000064
 */
void StateAppear::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		transit(enemy, PANMODOKI_Walk, nullptr);
		enemy->hardConstraintOff();
	}
}

/*
 * --INFO--
 * Address:	8034DAD4
 * Size:	00003C
 */
StateHide::StateHide(int stateID)
    : State(stateID)
{
	mName = "hide";
}

/*
 * --INFO--
 * Address:	8034DB10
 * Size:	000068
 */
void StateHide::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(5, nullptr);
	enemy->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed);
	enemy->mTargetVelocity = Vector3f(0.0f);
	mHideTimer             = 0;
}

/*
 * --INFO--
 * Address:	8034DB78
 * Size:	000118
 */
void StateHide::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying) {
		if (enemy->mCurAnim->mType == KEYEVENT_2) {
			OBJ(enemy)->createHideEffect();
			OBJ(enemy)->hideRumble();

		} else if (enemy->mCurAnim->mType == KEYEVENT_END) {
			OBJ(enemy)->fadeHideEffect();
			enemy->mHealth = CG_PARMS(enemy)->mGeneral.mHealth.mValue;
			OBJ(enemy)->endCarry();
			enemy->enableEvent(0, EB_IsImmuneBitter);
		}
	}

	if (!OBJ(enemy)->getCarryTarget()) {
		mHideTimer++;
		if (mHideTimer > CG_PROPERPARMS(enemy).mFp15.mValue) {
			transit(enemy, PANMODOKI_Appear, nullptr);
			enemy->disableEvent(0, EB_IsImmuneBitter);
		}
	}
}

/*
 * --INFO--
 * Address:	8034DC94
 * Size:	00003C
 */
StateDamage::StateDamage(int stateID)
    : State(stateID)
{
	mName = "damage";
}

/*
 * --INFO--
 * Address:	8034DCD0
 * Size:	00010C
 */
void StateDamage::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(6, nullptr);
	enemy->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed);
	enemy->mTargetVelocity = Vector3f(0.0f);

	Pellet* target = OBJ(enemy)->getCarryTarget();
	if (target) {
		target->mPelletCarry->giveup(2);
		enemy->endStick();
		enemy->mTargetCreature = nullptr;
	}

	f32 damage = CG_PROPERPARMS(enemy).mFp06.mValue;
	if (OBJ(enemy)->_2F1) {
		damage = CG_PROPERPARMS(enemy).mFp04.mValue;
		OBJ(enemy)->damageRumble();

		if (enemy->getEnemyTypeID() == EnemyTypeID::EnemyID_OoPanModoki) {
			enemy->mSoundObj->startSound(PSSE_EN_OPAN_DOWN_NEW, 0);
		}
	}

	enemy->addDamage(damage, 1.0f);
	OBJ(enemy)->boundEffect();
}

/*
 * --INFO--
 * Address:	8034DDDC
 * Size:	000080
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

/*
 * --INFO--
 * Address:	8034DE5C
 * Size:	00003C
 */
StateWait::StateWait(int stateID)
    : State(stateID)
{
	mName = "wait";
}

/*
 * --INFO--
 * Address:	8034DE98
 * Size:	000070
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(8, nullptr);
	enemy->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed);
	enemy->mTargetVelocity = Vector3f(0.0f);
	mWaitTimer             = 0;
	OBJ(enemy)->mNextState = PANMODOKI_Walk;
}

/*
 * --INFO--
 * Address:	8034DF08
 * Size:	0000F4
 */
void StateWait::exec(EnemyBase* enemy)
{
	if (enemy->mHealth <= 0.0f) {
		transit(enemy, PANMODOKI_Dead, nullptr);
		return;
	}

	mWaitTimer++;

	if (mWaitTimer > CG_PROPERPARMS(enemy).mFp14.mValue && !enemy->isFinishMotion()) {
		enemy->finishMotion();
	}

	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		transit(enemy, OBJ(enemy)->mNextState, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8034DFFC
 * Size:	00003C
 */
StateStick::StateStick(int stateID)
    : State(stateID)
{
	mName = "stick";
}

/*
 * --INFO--
 * Address:	8034E038
 * Size:	000108
 */
void StateStick::init(EnemyBase* enemy, StateArg* stateArg)
{
	if (enemy->getCurrAnimIndex() != 1) {
		enemy->startMotion(1, nullptr);
		enemy->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed * CG_PROPERPARMS(enemy).mFp16.mValue);
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

/*
 * --INFO--
 * Address:	8034E140
 * Size:	0003BC
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
	f32 z              = targetPos.z - enemy->getPosition().z;
	f32 x              = targetPos.x - enemy->getPosition().x;
	f32 stickRadius    = target->getStickRadius();
	f32 dist           = x * x + z * z;
	if (dist < SQUARE(1.2f * OBJ(enemy)->_32C + stickRadius)) {
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
		EnemyFunc::walkToTarget(enemy, targetPos, CG_PARMS(enemy)->mGeneral.mMoveSpeed.mValue / 2, CG_PROPERPARMS(enemy).mFp02.mValue,
		                        CG_PROPERPARMS(enemy).mFp05.mValue);

		// this needs fixing (surprise surprise)
		enemy->changeFaceDir(targetPos);

		_10++;
		f32 rad = 2.5f * OBJ(enemy)->_32C;
		if (_10 > 200 || dist > SQUARE(rad) || !target || !OBJ(enemy)->isTargetable(target)) {
			transit(enemy, OBJ(enemy)->mNextState, nullptr);
		}
	}
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stfd     f31, 0x90(r1)
	psq_st   f31, 152(r1), 0, qr0
	stfd     f30, 0x80(r1)
	psq_st   f30, 136(r1), 0, qr0
	stfd     f29, 0x70(r1)
	psq_st   f29, 120(r1), 0, qr0
	stfd     f28, 0x60(r1)
	psq_st   f28, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	stw      r29, 0x54(r1)
	mr       r30, r4
	lfs      f0, lbl_8051E3D8@sda21(r2)
	lfs      f1, 0x200(r4)
	mr       r29, r3
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8034E1B0
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8034E4C0

lbl_8034E1B0:
	mr       r3, r30
	bl       getCarryTarget__Q34Game13PanModokiBase3ObjFv
	or.      r31, r3, r3
	bne      lbl_8034E1E4
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8034E4C0

lbl_8034E1E4:
	mr       r4, r31
	addi     r3, r1, 0x38
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x38(r1)
	mr       r4, r30
	lfs      f1, 0x3c(r1)
	addi     r3, r1, 0x20
	lfs      f0, 0x40(r1)
	stfs     f2, 0x44(r1)
	stfs     f1, 0x48(r1)
	stfs     f0, 0x4c(r1)
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f1, 0x28(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x2c
	lfs      f0, 0x4c(r1)
	lwz      r12, 8(r12)
	fsubs    f31, f0, f1
	mtctr    r12
	bctrl
	lwz      r3, 0x35c(r31)
	fmuls    f2, f31, f31
	lfs      f1, 0x2c(r1)
	lfs      f0, 0x44(r1)
	lfs      f4, 0xa0(r3)
	fsubs    f3, f0, f1
	lfs      f1, lbl_8051E430@sda21(r2)
	lfs      f0, 0x32c(r30)
	fmadds   f4, f1, f0, f4
	fmadds   f31, f3, f3, f2
	fmuls    f4, f4, f4
	fcmpo    cr0, f31, f4
	bge      lbl_8034E34C
	mr       r3, r30
	mr       r4, r31
	bl       isTargetable__Q34Game13PanModokiBase3ObjFPQ24Game6Pellet
	clrlwi.  r0, r3, 0x18
	beq      lbl_8034E328
	mr       r3, r31
	li       r4, 0x270f
	lwz      r12, 0(r31)
	lwz      r12, 0x168(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8034E328
	lfs      f0, lbl_8051E3D8@sda21(r2)
	mr       r3, r30
	mr       r4, r31
	li       r5, 0x270f
	stfs     f0, 0x1c8(r30)
	stfs     f0, 0x1cc(r30)
	stfs     f0, 0x1d0(r30)
	stfs     f0, 0x1d4(r30)
	stfs     f0, 0x1d8(r30)
	stfs     f0, 0x1dc(r30)
	bl       startStick__Q24Game8CreatureFPQ24Game8Creatures
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x148(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	li       r4, 0
	bl       setCarryDir__Q34Game13PanModokiBase3ObjFb
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8034E4C0

lbl_8034E328:
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8034E4C0

lbl_8034E34C:
	lwz      r5, 0xc0(r30)
	mr       r3, r30
	lfs      f1, lbl_8051E434@sda21(r2)
	addi     r4, r1, 0x44
	lfs      f0, 0x2e4(r5)
	lfs      f2, 0x86c(r5)
	fmuls    f1, f1, f0
	lfs      f3, 0x894(r5)
	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff" mr
r4, r30 lwz      r5, 0xc0(r30) lwz      r12, 0(r30) addi     r3, r1, 0x14 lfs
f29, 0x894(r5) lwz      r12, 8(r12) lfs      f30, 0x86c(r5) mtctr    r12 bctrl
	lfs      f5, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x44(r1)
	lfs      f0, 0x4c(r1)
	lfs      f4, 0x18(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 8(r1)
	stfs     f4, 0xc(r1)
	stfs     f3, 0x10(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r30)
	fmr      f28, f1
	mr       r3, r30
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f28
	bl       angDist__Fff
	fmuls    f30, f1, f30
	lfs      f0, lbl_8051E43C@sda21(r2)
	lfs      f1, lbl_8051E438@sda21(r2)
	fmuls    f0, f0, f29
	fabs     f2, f30
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_8034E42C
	lfs      f0, lbl_8051E3D8@sda21(r2)
	fcmpo    cr0, f30, f0
	ble      lbl_8034E428
	fmr      f30, f1
	b        lbl_8034E42C

lbl_8034E428:
	fneg     f30, f1

lbl_8034E42C:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f30, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r30)
	lfs      f1, lbl_8051E440@sda21(r2)
	lfs      f0, 0x1fc(r30)
	stfs     f0, 0x1a8(r30)
	lwz      r3, 0x10(r29)
	addi     r0, r3, 1
	stw      r0, 0x10(r29)
	lfs      f0, 0x32c(r30)
	lwz      r0, 0x10(r29)
	fmuls    f0, f1, f0
	cmpwi    r0, 0xc8
	bgt      lbl_8034E4A0
	fmuls    f0, f0, f0
	fcmpo    cr0, f31, f0
	bgt      lbl_8034E4A0
	cmplwi   r31, 0
	beq      lbl_8034E4A0
	mr       r3, r30
	mr       r4, r31
	bl       isTargetable__Q34Game13PanModokiBase3ObjFPQ24Game6Pellet
	clrlwi.  r0, r3, 0x18
	bne      lbl_8034E4C0

lbl_8034E4A0:
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	li       r6, 0
	lwz      r5, 0x344(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8034E4C0:
	psq_l    f31, 152(r1), 0, qr0
	lfd      f31, 0x90(r1)
	psq_l    f30, 136(r1), 0, qr0
	lfd      f30, 0x80(r1)
	psq_l    f29, 120(r1), 0, qr0
	lfd      f29, 0x70(r1)
	psq_l    f28, 104(r1), 0, qr0
	lfd      f28, 0x60(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r0, 0xa4(r1)
	lwz      r29, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034E4FC
 * Size:	00003C
 */
StateSucked::StateSucked(int stateID)
    : State(stateID)
{
	mName = "sucked";
}

/*
 * --INFO--
 * Address:	8034E538
 * Size:	00006C
 */
void StateSucked::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(8, nullptr);
	enemy->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed);

	if (OBJ(enemy)->getCarryTarget()) {
		enemy->endStick();
		enemy->mTargetCreature = nullptr;
	}

	OBJ(enemy)->_2F1 = 1;
}

/*
 * --INFO--
 * Address:	8034E5A4
 * Size:	00000C
 */
void StateSucked::exec(EnemyBase* enemy) { OBJ(enemy)->_2F1 = 1; }

/*
 * --INFO--
 * Address:	8034E5B0
 * Size:	000040
 */
StateCarryEnd::StateCarryEnd(int stateID)
    : State(stateID)
{
	mName = "carryend";
}

/*
 * --INFO--
 * Address:	8034E5F0
 * Size:	00006C
 */
void StateCarryEnd::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->hardConstraintOn();
	_10 = enemy->getPosition();
}

/*
 * --INFO--
 * Address:	8034E65C
 * Size:	0002F0
 */
void StateCarryEnd::exec(EnemyBase* enemy)
{
	if (enemy->mHealth <= 0.0f) {
		transit(enemy, PANMODOKI_Dead, nullptr);

	} else {
		Vector3f enemyPos = enemy->getPosition();
		Vector3f diff     = enemy->mHomePosition - enemyPos;
		if (FABS(diff.x) < 2.0f && FABS(diff.z) < 2.0f) {
			Vector3f homePos = enemy->mHomePosition;
			enemy->onSetPosition(homePos);
			if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_1) {
				transit(enemy, PANMODOKI_Hide, nullptr);
			}

		} else {
			enemy->turnToTargetMori(_10, CG_PARMS(enemy)->mGeneral.mRotationalAccel.mValue,
			                        CG_PARMS(enemy)->mGeneral.mRotationalSpeed.mValue);
			diff.x *= 0.05f;
			diff.y *= 0.05f;
			diff.z *= 0.05f;
			enemy->forceMovePosition(diff);
		}
		if ((enemy->mCurAnim->mIsPlaying != FALSE) && (enemy->mCurAnim->mType == KEYEVENT_END)) {
			transit(enemy, PANMODOKI_Hide, nullptr);
		}
	}
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stfd     f30, 0x70(r1)
	psq_st   f30, 120(r1), 0, qr0
	stfd     f29, 0x60(r1)
	psq_st   f29, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	mr       r31, r4
	lfs      f0, lbl_8051E3D8@sda21(r2)
	lfs      f1, 0x200(r4)
	mr       r30, r3
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8034E6C0
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8034E91C

lbl_8034E6C0:
	lwz      r12, 0(r4)
	addi     r3, r1, 0x2c
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x198(r31)
	lfs      f0, 0x2c(r1)
	lfs      f5, 0x1a0(r31)
	fsubs    f0, f2, f0
	lfs      f4, 0x34(r1)
	lfs      f3, 0x19c(r31)
	lfs      f1, 0x30(r1)
	fsubs    f6, f5, f4
	fabs     f7, f0
	fsubs    f4, f3, f1
	lfs      f1, lbl_8051E44C@sda21(r2)
	stfs     f0, 0x44(r1)
	frsp     f0, f7
	stfs     f4, 0x48(r1)
	fcmpo    cr0, f0, f1
	stfs     f6, 0x4c(r1)
	bge      lbl_8034E78C
	fabs     f0, f6
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	bge      lbl_8034E78C
	stfs     f2, 0x38(r1)
	mr       r3, r31
	addi     r4, r1, 0x38
	stfs     f3, 0x3c(r1)
	stfs     f5, 0x40(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_8034E8E0
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 1
	bne      lbl_8034E8E0
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 5
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8034E8E0

lbl_8034E78C:
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x14
	lfs      f30, 0x334(r5)
	lwz      r12, 8(r12)
	lfs      f31, 0x30c(r5)
	mtctr    r12
	bctrl
	lfs      f5, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x10(r30)
	lfs      f0, 0x18(r30)
	lfs      f4, 0x18(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 8(r1)
	stfs     f4, 0xc(r1)
	stfs     f3, 0x10(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f29, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f29
	bl       angDist__Fff
	fmuls    f31, f1, f31
	lfs      f0, lbl_8051E43C@sda21(r2)
	lfs      f1, lbl_8051E438@sda21(r2)
	fmuls    f0, f0, f30
	fabs     f2, f31
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_8034E848
	lfs      f0, lbl_8051E3D8@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_8034E844
	fmr      f31, f1
	b        lbl_8034E848

lbl_8034E844:
	fneg     f31, f1

lbl_8034E848:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f31, f1
	bl       roundAng__Ff
	lfs      f0, 0x44(r1)
	lfs      f2, lbl_8051E450@sda21(r2)
	stfs     f1, 0x1fc(r31)
	fmuls    f1, f0, f2
	lfs      f0, 0x48(r1)
	lfs      f4, 0x1fc(r31)
	fmuls    f3, f0, f2
	lfs      f0, 0x4c(r1)
	stfs     f1, 0x44(r1)
	fmuls    f2, f0, f2
	lwz      r0, 0x44(r1)
	stfs     f4, 0x1a8(r31)
	stw      r0, 0x20(r1)
	lfs      f1, 0x18c(r31)
	lfs      f0, 0x20(r1)
	stfs     f3, 0x48(r1)
	fadds    f0, f1, f0
	lwz      r0, 0x48(r1)
	stfs     f2, 0x4c(r1)
	stw      r0, 0x24(r1)
	lwz      r0, 0x4c(r1)
	stfs     f0, 0x18c(r31)
	lfs      f0, 0x24(r1)
	lfs      f1, 0x190(r31)
	stw      r0, 0x28(r1)
	fadds    f1, f1, f0
	lfs      f0, 0x28(r1)
	stfs     f1, 0x190(r31)
	lfs      f1, 0x194(r31)
	fadds    f0, f1, f0
	stfs     f0, 0x194(r31)

lbl_8034E8E0:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_8034E91C
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_8034E91C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 5
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8034E91C:
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	lwz      r31, 0x5c(r1)
	lwz      r0, 0x94(r1)
	lwz      r30, 0x58(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}
} // namespace PanModokiBase
} // namespace Game

#include "Game/Entities/Jigumo.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/FakePiki.h"
#include "Game/EnemyFunc.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "nans.h"

namespace Game {
namespace Jigumo {

/*
 * --INFO--
 * Address:	80365FF4
 * Size:	000204
 */
void FSM::init(EnemyBase* enemy)
{
	create(JIGUMO_StateCount);
	registerState(new StateWait(JIGUMO_Wait));
	registerState(new StateAppear(JIGUMO_Appear));
	registerState(new StateHide(JIGUMO_Hide));
	registerState(new StateDead(JIGUMO_Dead));
	registerState(new StateAttack(JIGUMO_Attack));
	registerState(new StateMiss(JIGUMO_Miss));
	registerState(new StateReturn(JIGUMO_Return));
	registerState(new StateCarry(JIGUMO_Carry));
	registerState(new StateFlick(JIGUMO_Flick));
	registerState(new StateEat(JIGUMO_Eat));
	registerState(new StateSearch(JIGUMO_Search));
	registerState(new StateSAttack(JIGUMO_SAttack));
	registerState(new StateSMiss(JIGUMO_SMiss));
}

/*
 * --INFO--
 * Address:	803661F8
 * Size:	00003C
 */
StateWait::StateWait(int stateID)
    : State(stateID)
{
	mName = "wait";
}

/*
 * --INFO--
 * Address:	80366234
 * Size:	000060
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(JIGUMOANIM_Wait, nullptr);
	enemy->mPosition       = enemy->mHomePosition;
	enemy->mTargetCreature = nullptr;
	OBJ(enemy)->mNextState = JIGUMO_NULL;
}

/*
 * --INFO--
 * Address:	80366294
 * Size:	000100
 */
void StateWait::exec(EnemyBase* enemy)
{
	if (OBJ(enemy)->mNextState < 0) {
		FakePiki* target
		    = OBJ(enemy)->getNearestPikiOrNavi(CG_PARMS(enemy)->mGeneral.mViewAngle.mValue, CG_PARMS(enemy)->mGeneral.mSightRadius.mValue);
		if (target) {
			enemy->mTargetCreature = target;
			enemy->finishMotion();
			Vector3f targetPos        = target->getPosition();
			OBJ(enemy)->mGoalPosition = targetPos;
			OBJ(enemy)->mNextState    = JIGUMO_Search;
		} else {
			enemy->finishMotion();
			OBJ(enemy)->_2E8       = 1;
			OBJ(enemy)->mNextState = JIGUMO_Hide;
		}
	}

	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		transit(enemy, OBJ(enemy)->mNextState, nullptr);
	}
}

/*
 * --INFO--
 * Address:	80366394
 * Size:	00003C
 */
StateAppear::StateAppear(int stateID)
    : State(stateID)
{
	mName = "appear";
}

/*
 * --INFO--
 * Address:	803663D0
 * Size:	000138
 */
void StateAppear::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(JIGUMOANIM_Appear, nullptr);
	enemy->stopMotion();
	enemy->hardConstraintOn();
	enemy->setAtari(false);
	enemy->setAlive(false);
	enemy->mToFlick = 0.0f;
	enemy->enableEvent(0, EB_BitterImmune);
	enemy->mPosition                                  = enemy->mHomePosition;
	OBJ(enemy)->_2E8                                  = 0;
	enemy->mCollTree->getCollPart('body')->mSpecialID = '____';
	enemy->mCollTree->getCollPart('head')->mSpecialID = '____';
	OBJ(enemy)->_384                                  = 0;
	if (enemy->mHealth < 1.0f) {
		enemy->mHealth += 5.0f;
		enemy->mInstantDamage = 0.0f;
		enemy->disableEvent(0, EB_TakingDamage);
	}

	mAppearTimer = 0;
}

/*
 * --INFO--
 * Address:	80366508
 * Size:	000324
 */
void StateAppear::exec(EnemyBase* enemy)
{
	mAppearTimer++;
	if (mAppearTimer > CG_PROPERPARMS(enemy).mIp01.mValue) {
		if (enemy->isStopMotion()) {
			f32 terrRad = CG_PARMS(enemy)->mGeneral.mTerritoryRadius.mValue;
			bool check;
			if (EnemyFunc::isThereOlimar(enemy, terrRad, nullptr)) {
				check = true;
			} else if (EnemyFunc::isTherePikmin(enemy, terrRad, nullptr)) {
				check = true;
			} else {
				check = false;
			}

			if (check) {
				enemy->startMotion();

				Vector3f pos = enemy->getPosition();
				rumbleMgr->startRumble(8, pos, 2);

				FakePiki* target       = OBJ(enemy)->getNearestPikiOrNavi(360.0f, terrRad);
				enemy->mTargetCreature = target;
				if (target) {
					f32 angleDist    = enemy->turnToTarget(target, 1.0f, TAU);
					OBJ(enemy)->_2EC = enemy->mFaceDir;
				}
			}

		} else if (enemy->mCurAnim->mIsPlaying) {
			if (enemy->mCurAnim->mType == KEYEVENT_2) {
				if (enemy->mWaterBox) {
					enemy->createEfxHamon();
				} else {
					Vector3f dropPos = enemy->getPosition();
					enemy->createDropEffect(dropPos, 0.53f * enemy->mScaleModifier);
				}

				enemy->disableEvent(0, EB_BitterImmune);
			}
			if (enemy->mCurAnim->mType == KEYEVENT_END) {
				transit(enemy, JIGUMO_Wait, nullptr);
				enemy->setAlive(true);
				enemy->enableEvent(0, EB_LifegaugeVisible);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	8036682C
 * Size:	00003C
 */
StateHide::StateHide(int stateID)
    : State(stateID)
{
	mName = "hide";
}

/*
 * --INFO--
 * Address:	80366868
 * Size:	000128
 */
void StateHide::init(EnemyBase* enemy, StateArg* stateArg)
{
	if (OBJ(enemy)->_2E8) {
		enemy->startMotion(JIGUMOANIM_Hide, nullptr);
	} else {
		enemy->startMotion(JIGUMOANIM_RDive, nullptr);
	}

	OBJ(enemy)->_2BC        = enemy->mPosition;
	enemy->mCurrentVelocity = Vector3f(0.0f);
	enemy->mTargetVelocity  = Vector3f(0.0f);
	enemy->hardConstraintOn();
	enemy->setAtari(false);
	enemy->mCollTree->getCollPart('body')->mSpecialID = '____';
	enemy->mCollTree->getCollPart('head')->mSpecialID = '____';
	OBJ(enemy)->_384                                  = 0;
	enemy->disableEvent(0, EB_LifegaugeVisible);

	EnemyFunc::flickStickPikmin(enemy, CG_PARMS(enemy)->mGeneral.mShakeRateMaybe.mValue, CG_PARMS(enemy)->mGeneral.mShakeKnockback.mValue,
	                            CG_PARMS(enemy)->mGeneral.mShakeDamage.mValue, -1000.0f, nullptr);

	enemy->setEmotionCaution();
}

/*
 * --INFO--
 * Address:	80366990
 * Size:	000170
 */
void StateHide::exec(EnemyBase* enemy)
{
	if (!OBJ(enemy)->_2E8) {
		OBJ(enemy)->revisionAnimPos(0.05f * enemy->getMotionFrame());
	}

	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		enemy->enableEvent(0, EB_Cullable);
		enemy->fadeEfxHamon();
		if (enemy->mWaterBox) {
			efx::TJgmBubble bubbleFX;
			efx::Arg fxArg(enemy->getPosition());
			bubbleFX.create(&fxArg);
		}

		OBJ(enemy)->_2EC = roundAng(PI + enemy->mFaceDir);

		OBJ(enemy)->mGoalPosition = enemy->mHomePosition;
		OBJ(enemy)->_344          = 0.0f;
		transit(enemy, JIGUMO_Appear, nullptr);
	}
}

/*
 * --INFO--
 * Address:	80366B00
 * Size:	00003C
 */
StateDead::StateDead(int stateID)
    : State(stateID)
{
	mName = "dead";
}

/*
 * --INFO--
 * Address:	80366B3C
 * Size:	00005C
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(JIGUMOANIM_Dead, nullptr);
	enemy->mCurrentVelocity = Vector3f(0.0f);
	enemy->mTargetVelocity  = Vector3f(0.0f);
	enemy->deathProcedure();
}

/*
 * --INFO--
 * Address:	80366B98
 * Size:	0000C0
 */
void StateDead::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying) {
		if (enemy->mCurAnim->mType == KEYEVENT_2) {
			OBJ(enemy)->boundEffect();
			Vector3f pos = enemy->getPosition();
			cameraMgr->startVibration(0, pos, 2);
			rumbleMgr->startRumble(8, pos, 2);
		}

		if (enemy->mCurAnim->mType == KEYEVENT_END) {
			enemy->kill(nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	80366C58
 * Size:	00003C
 */
StateAttack::StateAttack(int stateID)
    : State(stateID)
{
	mName = "attack";
}

/*
 * --INFO--
 * Address:	80366C94
 * Size:	0000BC
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(JIGUMOANIM_Attack, nullptr);
	enemy->disableEvent(0, EB_Cullable);
	OBJ(enemy)->mNextState                            = JIGUMO_Miss;
	OBJ(enemy)->_2E8                                  = 0;
	_10                                               = 0;
	_11                                               = 1;
	enemy->mCollTree->getCollPart('body')->mSpecialID = 'st__';
	enemy->mCollTree->getCollPart('head')->mSpecialID = '_t__';
	OBJ(enemy)->_384                                  = 1;
	enemy->setEmotionExcitement();
}

/*
 * --INFO--
 * Address:	80366D50
 * Size:	000488
 */
void StateAttack::exec(EnemyBase* enemy)
{
	if (_11) {
		FakePiki* target = OBJ(enemy)->getNearestPikiOrNavi(CG_PARMS(enemy)->mGeneral.mSearchAngle.mValue,
		                                                    CG_PARMS(enemy)->mGeneral.mSearchDistance.mValue);
		if (target) {
			enemy->turnToTarget(target, CG_PARMS(enemy)->mGeneral.mRotationalAccel(), CG_PARMS(enemy)->mGeneral.mRotationalSpeed());
			OBJ(enemy)->mGoalPosition = Vector3f(target->getPosition());
		}
	}

	if (enemy->mCurAnim->mIsPlaying) {
		if (enemy->mCurAnim->mType == KEYEVENT_2) {
			_10 = 1;
			enemy->hardConstraintOff();
			enemy->setAtari(true);
			enemy->setAlive(true);
			_11 = 0;
			OBJ(enemy)->effectStart();
			if (enemy->mWaterBox) {
				enemy->mSoundObj->startSound(PSSE_JIGUMO_ATTACK_WATER, 0);
			} else {
				enemy->mSoundObj->startSound(PSSE_JIGUMO_ATTACK_SOIL, 0);
			}

		} else if (enemy->mCurAnim->mType == KEYEVENT_END) {
			_10                       = 0;
			enemy->mCurrentVelocity   = Vector3f(0.0f);
			enemy->mTargetVelocity    = Vector3f(0.0f);
			OBJ(enemy)->_2EC          = roundAng(PI + enemy->mFaceDir);
			OBJ(enemy)->mGoalPosition = enemy->mHomePosition;
			OBJ(enemy)->_344          = 0.0f;
			transit(enemy, OBJ(enemy)->mNextState, nullptr);
		}
	}

	if (_10) {
		EnemyFunc::attackNavi(enemy, CG_PARMS(enemy)->mGeneral.mAttackRadius.mValue, CG_PARMS(enemy)->mGeneral.mAttackHitAngle.mValue,
		                      CG_PARMS(enemy)->mGeneral.mAttackDamage.mValue, nullptr, nullptr);
		OBJ(enemy)->walkFunc();

		ConditionHeightCheckPiki heightCheck(enemy);
		if (EnemyFunc::eatPikmin(enemy, &heightCheck) > 0) {
			OBJ(enemy)->mNextState = JIGUMO_Carry;
			OBJ(enemy)->_2E8       = 1;
			_10                    = 0;
			OBJ(enemy)->effectStop();
			enemy->mTargetVelocity = Vector3f(0.0f);
		}

		Vector3f pos     = OBJ(enemy)->getPosition();
		Vector3f goalPos = OBJ(enemy)->getGoalPos();
		Vector3f diff    = pos - goalPos;
		if (diff.sqrMagnitude() < 100.0f) {
			_10 = 0;
			OBJ(enemy)->effectStop();
			enemy->mTargetVelocity = Vector3f(0.0f);
		}
	}

	OBJ(enemy)->velocityControl();
	/*
	stwu     r1, -0xd0(r1)
	mflr     r0
	stw      r0, 0xd4(r1)
	stfd     f31, 0xc0(r1)
	psq_st   f31, 200(r1), 0, qr0
	stfd     f30, 0xb0(r1)
	psq_st   f30, 184(r1), 0, qr0
	stfd     f29, 0xa0(r1)
	psq_st   f29, 168(r1), 0, qr0
	stw      r31, 0x9c(r1)
	stw      r30, 0x98(r1)
	stw      r29, 0x94(r1)
	mr       r30, r3
	mr       r31, r4
	lbz      r0, 0x11(r3)
	cmplwi   r0, 0
	beq      lbl_80366EF4
	lwz      r4, 0xc0(r31)
	mr       r3, r31
	lfs      f1, 0x49c(r4)
	lfs      f2, 0x44c(r4)
	bl       getNearestPikiOrNavi__Q34Game6Jigumo3ObjFff
	or.      r29, r3, r3
	beq      lbl_80366EF4
	mr       r4, r29
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r29)
	addi     r3, r1, 0x20
	lfs      f30, 0x334(r5)
	lwz      r12, 8(r12)
	lfs      f31, 0x30c(r5)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f2, 0x20(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x2c
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	lwz      r12, 8(r12)
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x2c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x34(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 8(r1)
	lfs      f0, 0x10(r1)
	lfs      f4, 0x30(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x14(r1)
	stfs     f4, 0x18(r1)
	stfs     f3, 0x1c(r1)
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
	lfs      f0, lbl_8051E8BC@sda21(r2)
	lfs      f1, lbl_8051E8A8@sda21(r2)
	fmuls    f0, f0, f30
	fabs     f2, f31
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_80366E9C
	lfs      f0, lbl_8051E880@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_80366E98
	fmr      f31, f1
	b        lbl_80366E9C

lbl_80366E98:
	fneg     f31, f1

lbl_80366E9C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f31, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	mr       r4, r29
	addi     r3, r1, 0x68
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x6c(r1)
	lfs      f2, 0x70(r1)
	lfs      f0, 0x68(r1)
	stfs     f0, 0x2c8(r31)
	stfs     f1, 0x2cc(r31)
	stfs     f2, 0x2d0(r31)

lbl_80366EF4:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_8036702C
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 2
	bne      lbl_80366FAC
	li       r0, 1
	mr       r3, r31
	stb      r0, 0x10(r30)
	bl       hardConstraintOff__Q24Game9EnemyBaseFv
	mr       r3, r31
	li       r4, 1
	lwz      r12, 0(r31)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	li       r4, 1
	lwz      r12, 0(r31)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	mr       r3, r31
	stb      r0, 0x11(r30)
	bl       effectStart__Q34Game6Jigumo3ObjFv
	lwz      r0, 0x280(r31)
	cmplwi   r0, 0
	beq      lbl_80366F8C
	lwz      r3, 0x28c(r31)
	li       r4, 0x58d2
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	b        lbl_8036702C

lbl_80366F8C:
	lwz      r3, 0x28c(r31)
	li       r4, 0x58d1
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	b        lbl_8036702C

lbl_80366FAC:
	cmplwi   r0, 0x3e8
	bne      lbl_8036702C
	li       r0, 0
	lfs      f0, lbl_8051E880@sda21(r2)
	stb      r0, 0x10(r30)
	lfs      f1, lbl_8051E8A8@sda21(r2)
	stfs     f0, 0x1c8(r31)
	stfs     f0, 0x1cc(r31)
	stfs     f0, 0x1d0(r31)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	lfs      f0, 0x1fc(r31)
	fadds    f1, f1, f0
	bl       roundAng__Ff
	stfs     f1, 0x2ec(r31)
	mr       r3, r30
	lfs      f0, lbl_8051E880@sda21(r2)
	mr       r4, r31
	lfs      f1, 0x198(r31)
	li       r6, 0
	stfs     f1, 0x2c8(r31)
	lfs      f1, 0x19c(r31)
	stfs     f1, 0x2cc(r31)
	lfs      f1, 0x1a0(r31)
	stfs     f1, 0x2d0(r31)
	stfs     f0, 0x344(r31)
	lwz      r12, 0(r30)
	lwz      r5, 0x2d4(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8036702C:
	lbz      r0, 0x10(r30)
	cmplwi   r0, 0
	beq      lbl_8036719C
	lwz      r6, 0xc0(r31)
	mr       r3, r31
	li       r4, 0
	li       r5, 0
	lfs      f1, 0x5b4(r6)
	lfs      f2, 0x5dc(r6)
	lfs      f3, 0x604(r6)
	bl
"attackNavi__Q24Game9EnemyFuncFPQ24Game8CreaturefffP8CollPartP23Condition<Q24Game4Navi>"
	mr       r3, r31
	bl       walkFunc__Q34Game6Jigumo3ObjFv
	lis      r4, "__vt__23Condition<Q24Game4Piki>"@ha
	lis      r3, __vt__Q34Game6Jigumo24ConditionHeightCheckPiki@ha
	addi     r5, r4, "__vt__23Condition<Q24Game4Piki>"@l
	stw      r31, 0x78(r1)
	addi     r0, r3, __vt__Q34Game6Jigumo24ConditionHeightCheckPiki@l
	mr       r4, r31
	stw      r5, 0x74(r1)
	addi     r3, r1, 0x38
	stw      r0, 0x74(r1)
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x3c(r1)
	mr       r4, r31
	lfs      f0, lbl_8051E8C0@sda21(r2)
	addi     r3, r1, 0x44
	fsubs    f0, f1, f0
	stfs     f0, 0x7c(r1)
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x48(r1)
	mr       r3, r31
	lfs      f0, lbl_8051E8C4@sda21(r2)
	addi     r4, r1, 0x74
	fadds    f0, f0, f1
	stfs     f0, 0x80(r1)
	bl
"eatPikmin__Q24Game9EnemyFuncFPQ24Game9EnemyBaseP23Condition<Q24Game4Piki>"
	cmpwi    r3, 0
	ble      lbl_80367110
	li       r0, 7
	li       r4, 1
	stw      r0, 0x2d4(r31)
	li       r0, 0
	mr       r3, r31
	stb      r4, 0x2e8(r31)
	stb      r0, 0x10(r30)
	bl       effectStop__Q34Game6Jigumo3ObjFv
	lfs      f0, lbl_8051E880@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)

lbl_80367110:
	mr       r4, r31
	addi     r3, r1, 0x5c
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x50
	lwz      r12, 0(r31)
	lfs      f29, 0x5c(r1)
	lwz      r12, 0x198(r12)
	lfs      f30, 0x60(r1)
	lfs      f31, 0x64(r1)
	mtctr    r12
	bctrl
	lfs      f0, 0x54(r1)
	lfs      f2, 0x50(r1)
	fsubs    f3, f30, f0
	lfs      f1, 0x58(r1)
	fsubs    f4, f29, f2
	lfs      f0, lbl_8051E8C8@sda21(r2)
	fsubs    f2, f31, f1
	fmuls    f1, f3, f3
	fmadds   f1, f4, f4, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8036719C
	li       r0, 0
	mr       r3, r31
	stb      r0, 0x10(r30)
	bl       effectStop__Q34Game6Jigumo3ObjFv
	lfs      f0, lbl_8051E880@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)

lbl_8036719C:
	mr       r3, r31
	bl       velocityControl__Q34Game6Jigumo3ObjFv
	psq_l    f31, 200(r1), 0, qr0
	lfd      f31, 0xc0(r1)
	psq_l    f30, 184(r1), 0, qr0
	lfd      f30, 0xb0(r1)
	psq_l    f29, 168(r1), 0, qr0
	lfd      f29, 0xa0(r1)
	lwz      r31, 0x9c(r1)
	lwz      r30, 0x98(r1)
	lwz      r0, 0xd4(r1)
	lwz      r29, 0x94(r1)
	mtlr     r0
	addi     r1, r1, 0xd0
	blr
	*/
}

/*
 * --INFO--
 * Address:	803671F4
 * Size:	000038
 */
void StateAttack::cleanup(EnemyBase* enemy)
{
	OBJ(enemy)->effectStop();
	enemy->setEmotionCaution();
}

/*
 * --INFO--
 * Address:	8036722C
 * Size:	00003C
 */
StateMiss::StateMiss(int stateID)
    : State(stateID)
{
	mName = "miss";
}

/*
 * --INFO--
 * Address:	80367268
 * Size:	00004C
 */
void StateMiss::init(EnemyBase* enemy, StateArg* stateArg)
{
	OBJ(enemy)->_2EC = enemy->mFaceDir;
	enemy->startMotion(JIGUMOANIM_Miss, nullptr);
	_10 = 0;
}

/*
 * --INFO--
 * Address:	803672B4
 * Size:	000200
 */
void StateMiss::exec(EnemyBase* enemy)
{
	if (CG_PARMS(enemy)->_8FC) {
		Vector3f goalPos = OBJ(enemy)->getGoalPos();
		f32 angleDist    = enemy->changeFaceDir(goalPos);
		if (FABS(angleDist) < 0.05f) {
			enemy->finishMotion();
		}

		if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
			transit(enemy, JIGUMO_Return, nullptr);
		}

	} else if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		transit(enemy, JIGUMO_Return, nullptr);
	}
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stfd     f29, 0x40(r1)
	psq_st   f29, 72(r1), 0, qr0
	stfd     f28, 0x30(r1)
	psq_st   f28, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	mr       r31, r4
	mr       r30, r3
	lwz      r5, 0xc0(r4)
	lbz      r0, 0x8fc(r5)
	cmplwi   r0, 0
	beq      lbl_80367448
	lwz      r12, 0(r4)
	addi     r3, r1, 0x14
	lwz      r12, 0x198(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	addi     r3, r1, 8
	lfs      f31, 0x14(r1)
	lwz      r12, 8(r12)
	lfs      f28, 0x1c(r1)
	lfs      f29, 0x334(r5)
	lfs      f30, 0x30c(r5)
	mtctr    r12
	bctrl
	lfs      f1, 8(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x10(r1)
	addi     r3, r3, atanTable___5JMath@l
	fsubs    f1, f31, f1
	fsubs    f2, f28, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f31, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f31
	bl       angDist__Fff
	fmr      f31, f1
	lfs      f0, lbl_8051E8BC@sda21(r2)
	lfs      f1, lbl_8051E8A8@sda21(r2)
	fmuls    f0, f0, f29
	fmuls    f29, f31, f30
	fmuls    f1, f1, f0
	fabs     f0, f29
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_803673C4
	lfs      f0, lbl_8051E880@sda21(r2)
	fcmpo    cr0, f29, f0
	ble      lbl_803673C0
	fmr      f29, f1
	b        lbl_803673C4

lbl_803673C0:
	fneg     f29, f1

lbl_803673C4:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f29, f1
	bl       roundAng__Ff
	fabs     f3, f31
	stfs     f1, 0x1fc(r31)
	lfs      f0, lbl_8051E8A4@sda21(r2)
	lfs      f2, 0x1fc(r31)
	frsp     f1, f3
	stfs     f2, 0x1a8(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_80367408
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_80367408:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_8036747C
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_8036747C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 6
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8036747C

lbl_80367448:
	lwz      r5, 0x188(r31)
	lbz      r0, 0x24(r5)
	cmplwi   r0, 0
	beq      lbl_8036747C
	lwz      r0, 0x1c(r5)
	cmplwi   r0, 0x3e8
	bne      lbl_8036747C
	lwz      r12, 0(r3)
	li       r5, 6
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8036747C:
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	psq_l    f29, 72(r1), 0, qr0
	lfd      f29, 0x40(r1)
	psq_l    f28, 56(r1), 0, qr0
	lfd      f28, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r0, 0x74(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	803674B4
 * Size:	00003C
 */
StateReturn::StateReturn(int stateID)
    : State(stateID)
{
	mName = "return";
}

/*
 * --INFO--
 * Address:	803674F0
 * Size:	000040
 */
void StateReturn::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(JIGUMOANIM_RunAway, nullptr);
	OBJ(enemy)->effectStart();
}

/*
 * --INFO--
 * Address:	80367530
 * Size:	000174
 */
void StateReturn::exec(EnemyBase* enemy)
{
	OBJ(enemy)->walkFunc();

	if (enemy->mHealth <= 0.0f) {
		transit(enemy, JIGUMO_Dead, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(enemy, false)) {
		OBJ(enemy)->mNextState = JIGUMO_Return;
		transit(enemy, JIGUMO_Flick, nullptr);

	} else if (OBJ(enemy)->getGoalDist() < SQUARE(20.0f * enemy->mScaleModifier)) {
		OBJ(enemy)->_385 = 0;
		enemy->finishMotion();
	}

	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		enemy->mCurrentVelocity = Vector3f(0.0f);
		enemy->mTargetVelocity  = Vector3f(0.0f);
		if (enemy->mStuckPikminCount > 0) {
			transit(enemy, JIGUMO_Flick, nullptr);
			OBJ(enemy)->mNextState = JIGUMO_Hide;
		} else {
			transit(enemy, JIGUMO_Hide, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	803676A4
 * Size:	00002C
 */
void StateReturn::cleanup(EnemyBase* enemy)
{
	OBJ(enemy)->_385 = 1;
	OBJ(enemy)->effectStop();
}

/*
 * --INFO--
 * Address:	803676D0
 * Size:	00003C
 */
StateCarry::StateCarry(int stateID)
    : State(stateID)
{
	mName = "carry";
}

/*
 * --INFO--
 * Address:	8036770C
 * Size:	000040
 */
void StateCarry::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(JIGUMOANIM_BackRun, nullptr);
	OBJ(enemy)->effectStart();
}

/*
 * --INFO--
 * Address:	8036774C
 * Size:	000190
 */
void StateCarry::exec(EnemyBase* enemy)
{
	OBJ(enemy)->walkFunc();

	if (enemy->mHealth <= 0.0f) {
		transit(enemy, JIGUMO_Dead, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(enemy, false)) {
		OBJ(enemy)->mNextState = JIGUMO_Carry;
		transit(enemy, JIGUMO_Flick, nullptr);
		return;
	}

	f32 goalDist = OBJ(enemy)->getGoalDist();
	f32 limit    = 10.0f * enemy->mScaleModifier + 20.0f;
	limit *= limit;
	if (goalDist < 1.1f * limit) {
		enemy->finishMotion();
		OBJ(enemy)->_385 = 0;
	}

	if (goalDist < limit) {
		enemy->mCurrentVelocity = Vector3f(0.0f);
		enemy->mTargetVelocity  = Vector3f(0.0f);

		if (enemy->mStuckPikminCount > 1) {
			transit(enemy, JIGUMO_Flick, nullptr);
			OBJ(enemy)->mNextState = JIGUMO_Eat;

		} else {
			transit(enemy, JIGUMO_Eat, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	803678DC
 * Size:	00002C
 */
void StateCarry::cleanup(EnemyBase* enemy)
{
	OBJ(enemy)->_385 = 1;
	OBJ(enemy)->effectStop();
}

/*
 * --INFO--
 * Address:	80367908
 * Size:	00003C
 */
StateFlick::StateFlick(int stateID)
    : State(stateID)
{
	mName = "flick";
}

/*
 * --INFO--
 * Address:	80367944
 * Size:	0000CC
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mTargetVelocity  = Vector3f(0.0f);
	enemy->mCurrentVelocity = Vector3f(0.0f);
	if (OBJ(enemy)->_2E8) {
		enemy->startMotion(JIGUMOANIM_Flick, nullptr);
	} else {
		enemy->startMotion(JIGUMOANIM_RFlick, nullptr);
	}

	Vector3f pos = enemy->getPosition();
	cameraMgr->startVibration(0, pos, 2);
	rumbleMgr->startRumble(8, pos, 2);
}

/*
 * --INFO--
 * Address:	80367A10
 * Size:	0000FC
 */
void StateFlick::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying) {
		if (enemy->mCurAnim->mType == KEYEVENT_2) {
			f32 rate      = CG_PARMS(enemy)->mGeneral.mShakeRateMaybe.mValue;
			f32 knockback = CG_PARMS(enemy)->mGeneral.mShakeKnockback.mValue;
			f32 damage    = CG_PARMS(enemy)->mGeneral.mShakeDamage.mValue;
			f32 range     = CG_PARMS(enemy)->mGeneral.mShakeRange.mValue;

			EnemyFunc::flickNearbyPikmin(enemy, range, knockback, damage, -1000.0f, nullptr);
			EnemyFunc::flickStickPikmin(enemy, rate, knockback, damage, -1000.0f, nullptr);
			enemy->mToFlick = 0.0f;
			return;
		}

		if (enemy->mCurAnim->mType == KEYEVENT_3) {
			OBJ(enemy)->boundEffect();
			return;
		}

		if (enemy->mCurAnim->mType == KEYEVENT_END) {
			transit(enemy, OBJ(enemy)->mNextState, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	80367B0C
 * Size:	00003C
 */
StateEat::StateEat(int stateID)
    : State(stateID)
{
	mName = "eat";
}

/*
 * --INFO--
 * Address:	80367B48
 * Size:	000058
 */
void StateEat::init(EnemyBase* enemy, StateArg* stateArg)
{
	OBJ(enemy)->_2BC = enemy->mPosition;
	enemy->startMotion(JIGUMOANIM_Eat, nullptr);
	enemy->hardConstraintOn();
}

/*
 * --INFO--
 * Address:	80367BA0
 * Size:	000120
 */
void StateEat::exec(EnemyBase* enemy)
{
	OBJ(enemy)->revisionAnimPos(0.1f * enemy->getMotionFrame());

	if (enemy->mCurAnim->mIsPlaying) {
		switch (enemy->mCurAnim->mType) {
		case KEYEVENT_2:
		case KEYEVENT_3:
		case KEYEVENT_4:
		case KEYEVENT_5:
		case KEYEVENT_6:
			if (enemy->mWaterBox) {
				OBJ(enemy)->eatWaterEffect();
			}
			break;
		case KEYEVENT_7:
			OBJ(enemy)->_2E9 = 1;
			break;
		case KEYEVENT_8:
			EnemyFunc::swallowPikmin(enemy, 300.0f, nullptr);
			OBJ(enemy)->_2E9 = 0;
			break;
		case KEYEVENT_END:
			if (enemy->mHealth == 0.0f) {
				transit(enemy, JIGUMO_Dead, nullptr);

			} else {
				transit(enemy, JIGUMO_Hide, nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	80367CC0
 * Size:	00003C
 */
StateSearch::StateSearch(int stateID)
    : State(stateID)
{
	mName = "search";
}

/*
 * --INFO--
 * Address:	80367CFC
 * Size:	000088
 */
void StateSearch::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(JIGUMOANIM_Turn, nullptr);
	enemy->setAtari(false);
	enemy->setAlive(false);
	enemy->mTargetCreature = nullptr;
	OBJ(enemy)->_2E9       = 0;
	_10                    = -1;
}

/*
 * --INFO--
 * Address:	80367D84
 * Size:	000614
 */
void StateSearch::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x130(r1)
	mflr     r0
	stw      r0, 0x134(r1)
	stfd     f31, 0x120(r1)
	psq_st   f31, 296(r1), 0, qr0
	stfd     f30, 0x110(r1)
	psq_st   f30, 280(r1), 0, qr0
	stfd     f29, 0x100(r1)
	psq_st   f29, 264(r1), 0, qr0
	stw      r31, 0xfc(r1)
	stw      r30, 0xf8(r1)
	stw      r29, 0xf4(r1)
	stw      r28, 0xf0(r1)
	mr       r31, r4
	mr       r30, r3
	mr       r3, r31
	bl       getCurrAnimIndex__Q24Game9EnemyBaseFv
	lwz      r4, 0xc0(r31)
	mr       r29, r3
	mr       r3, r31
	lfs      f1, 0x49c(r4)
	lfs      f2, 0x44c(r4)
	bl       getNearestPikiOrNavi__Q34Game6Jigumo3ObjFff
	or.      r28, r3, r3
	stw      r28, 0x230(r31)
	beq      lbl_8036801C
	mr       r4, r28
	addi     r3, r1, 0xb0
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f2, 0xb0(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0xbc
	lfs      f1, 0xb4(r1)
	lfs      f0, 0xb8(r1)
	lwz      r12, 8(r12)
	stfs     f2, 0x98(r1)
	stfs     f1, 0x9c(r1)
	stfs     f0, 0xa0(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0xbc(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0xc4(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x98(r1)
	lfs      f0, 0xa0(r1)
	lfs      f4, 0xc0(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0xa4(r1)
	stfs     f4, 0xa8(r1)
	stfs     f3, 0xac(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f30, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f30
	bl       angDist__Fff
	fabs     f1, f1
	lfs      f0, lbl_8051E908@sda21(r2)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80367EE8
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv
	li       r0, -1
	mr       r4, r28
	stw      r0, 0x10(r30)
	addi     r3, r1, 0xe0
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0xe4(r1)
	lfs      f2, 0xe8(r1)
	lfs      f0, 0xe0(r1)
	stfs     f0, 0x2c8(r31)
	stfs     f1, 0x2cc(r31)
	stfs     f2, 0x2d0(r31)
	b        lbl_80368268

lbl_80367EE8:
	cmpwi    r29, 0xf
	bne      lbl_80367F04
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv
	li       r0, 0xd
	stw      r0, 0x10(r30)
	b        lbl_80368268

lbl_80367F04:
	mr       r4, r28
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r28)
	addi     r3, r1, 0x50
	lfs      f30, 0x334(r5)
	lwz      r12, 8(r12)
	lfs      f31, 0x30c(r5)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f2, 0x50(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x5c
	lfs      f1, 0x54(r1)
	lfs      f0, 0x58(r1)
	lwz      r12, 8(r12)
	stfs     f2, 0x38(r1)
	stfs     f1, 0x3c(r1)
	stfs     f0, 0x40(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x5c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x64(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x38(r1)
	lfs      f0, 0x40(r1)
	lfs      f4, 0x60(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x44(r1)
	stfs     f4, 0x48(r1)
	stfs     f3, 0x4c(r1)
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
	lfs      f0, lbl_8051E8BC@sda21(r2)
	lfs      f1, lbl_8051E8A8@sda21(r2)
	fmuls    f0, f0, f30
	fabs     f2, f31
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_80367FF0
	lfs      f0, lbl_8051E880@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_80367FEC
	fmr      f31, f1
	b        lbl_80367FF0

lbl_80367FEC:
	fneg     f31, f1

lbl_80367FF0:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f31, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	b        lbl_80368268

lbl_8036801C:
	lwz      r4, 0xc0(r31)
	mr       r3, r31
	lfs      f1, 0x424(r4)
	lfs      f2, 0x3d4(r4)
	bl       getNearestPikiOrNavi__Q34Game6Jigumo3ObjFff
	or.      r28, r3, r3
	beq      lbl_80368248
	mr       r4, r28
	addi     r3, r1, 0x80
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f2, 0x80(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x8c
	lfs      f1, 0x84(r1)
	lfs      f0, 0x88(r1)
	lwz      r12, 8(r12)
	stfs     f2, 0x68(r1)
	stfs     f1, 0x6c(r1)
	stfs     f0, 0x70(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x8c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x94(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x68(r1)
	lfs      f0, 0x70(r1)
	lfs      f4, 0x90(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x74(r1)
	stfs     f4, 0x78(r1)
	stfs     f3, 0x7c(r1)
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
	fabs     f1, f1
	lfs      f0, lbl_8051E8F8@sda21(r2)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8036810C
	cmpwi    r29, 0xd
	bne      lbl_80368268
	li       r0, 0xf
	mr       r3, r31
	stw      r0, 0x10(r30)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_80368268

lbl_8036810C:
	mr       r3, r31
	bl       getCurrAnimIndex__Q24Game9EnemyBaseFv
	cmpwi    r3, 0xf
	bne      lbl_80368130
	li       r0, 0xd
	mr       r3, r31
	stw      r0, 0x10(r30)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_80368268

lbl_80368130:
	mr       r4, r28
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r28)
	addi     r3, r1, 0x20
	lfs      f31, 0x334(r5)
	lwz      r12, 8(r12)
	lfs      f30, 0x30c(r5)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f2, 0x20(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x2c
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	lwz      r12, 8(r12)
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x2c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x34(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 8(r1)
	lfs      f0, 0x10(r1)
	lfs      f4, 0x30(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x14(r1)
	stfs     f4, 0x18(r1)
	stfs     f3, 0x1c(r1)
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
	fmuls    f30, f1, f30
	lfs      f0, lbl_8051E8BC@sda21(r2)
	lfs      f1, lbl_8051E8A8@sda21(r2)
	fmuls    f0, f0, f31
	fabs     f2, f30
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_8036821C
	lfs      f0, lbl_8051E880@sda21(r2)
	fcmpo    cr0, f30, f0
	ble      lbl_80368218
	fmr      f30, f1
	b        lbl_8036821C

lbl_80368218:
	fneg     f30, f1

lbl_8036821C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f30, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	b        lbl_80368268

lbl_80368248:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80368268:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_80368360
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_80368360
	lwz      r4, 0x10(r30)
	cmpwi    r4, 0
	bge      lbl_80368354
	mr       r4, r31
	addi     r3, r1, 0xd4
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0xc8
	lwz      r12, 0(r31)
	lfs      f29, 0xd4(r1)
	lwz      r12, 0x198(r12)
	lfs      f30, 0xd8(r1)
	lfs      f31, 0xdc(r1)
	mtctr    r12
	bctrl
	lfs      f0, 0xcc(r1)
	lfs      f1, 0xc8(r1)
	fsubs    f0, f30, f0
	lwz      r3, 0xc0(r31)
	lfs      f3, 0xd0(r1)
	fsubs    f4, f29, f1
	lfs      f2, 0x5b4(r3)
	fmuls    f0, f0, f0
	lfs      f1, 0x1f8(r31)
	fsubs    f3, f31, f3
	fmuls    f1, f2, f1
	fmadds   f0, f4, f4, f0
	fmuls    f1, f1, f1
	fmadds   f0, f3, f3, f0
	fcmpo    cr0, f0, f1
	bge      lbl_80368330
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0xb
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80368360

lbl_80368330:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 4
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80368360

lbl_80368354:
	mr       r3, r31
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener

lbl_80368360:
	psq_l    f31, 296(r1), 0, qr0
	lfd      f31, 0x120(r1)
	psq_l    f30, 280(r1), 0, qr0
	lfd      f30, 0x110(r1)
	psq_l    f29, 264(r1), 0, qr0
	lfd      f29, 0x100(r1)
	lwz      r31, 0xfc(r1)
	lwz      r30, 0xf8(r1)
	lwz      r29, 0xf4(r1)
	lwz      r0, 0x134(r1)
	lwz      r28, 0xf0(r1)
	mtlr     r0
	addi     r1, r1, 0x130
	blr
	*/
}

/*
 * --INFO--
 * Address:	80368398
 * Size:	00003C
 */
StateSAttack::StateSAttack(int stateID)
    : State(stateID)
{
	mName = "sattack";
}

/*
 * --INFO--
 * Address:	803683D4
 * Size:	000058
 */
void StateSAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(JIGUMOANIM_SAttack, nullptr);
	_10 = 0;
	_11 = 0;
	enemy->setEmotionExcitement();
}

/*
 * --INFO--
 * Address:	8036842C
 * Size:	000238
 */
void StateSAttack::exec(EnemyBase* enemy)
{
	if (enemy->getMotionFrame() == CG_PARMS(enemy)->_924) {
		_11 = 1;
		enemy->setAtari(true);
		enemy->setAlive(true);
	}

	if (_11) {
		if (EnemyFunc::eatPikmin(enemy, nullptr)) {
			_10 = 1;
		}

		EnemyFunc::attackNavi(enemy, 50.0f * enemy->mScaleModifier, CG_PARMS(enemy)->mGeneral.mAttackHitAngle.mValue,
		                      CG_PARMS(enemy)->mGeneral.mAttackDamage.mValue, nullptr, nullptr);
	}

	if (enemy->mCurAnim->mIsPlaying) {
		switch (enemy->mCurAnim->mType) {
		case KEYEVENT_2:
			if (enemy->mWaterBox) {
				enemy->mSoundObj->startSound(PSSE_JIGUMO_ATTACK_WATER, 0);
			} else {
				enemy->mSoundObj->startSound(PSSE_JIGUMO_ATTACK_SOIL, 0);
			}
			break;

		case KEYEVENT_3:
			_11 = 0;
			enemy->setAtari(false);
			enemy->setAlive(false);
			if (!_10) {
				transit(enemy, JIGUMO_SMiss, nullptr);
			}
			break;

		case KEYEVENT_4:
		case KEYEVENT_5:
		case KEYEVENT_6:
		case KEYEVENT_7:
		case KEYEVENT_8:
			if (enemy->mWaterBox) {
				OBJ(enemy)->eatWaterEffect();
			}
			break;

		case KEYEVENT_9:
			OBJ(enemy)->_2E9 = 1;
			break;

		case KEYEVENT_10:
			EnemyFunc::swallowPikmin(enemy, 300.0f, nullptr);
			OBJ(enemy)->_2E9 = 0;
			break;

		case KEYEVENT_END:
			transit(enemy, JIGUMO_Search, nullptr);
			break;
		}
	}
}

/*
 * --INFO--
 * Address:	80368664
 * Size:	000024
 */
void StateSAttack::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/*
 * --INFO--
 * Address:	80368688
 * Size:	00003C
 */
StateSMiss::StateSMiss(int stateID)
    : State(stateID)
{
	mName = "smiss";
}

/*
 * --INFO--
 * Address:	803686C4
 * Size:	00002C
 */
void StateSMiss::init(EnemyBase* enemy, StateArg* stateArg) { enemy->startMotion(JIGUMOANIM_SMiss, nullptr); }

/*
 * --INFO--
 * Address:	803686F0
 * Size:	000050
 */
void StateSMiss::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		transit(enemy, JIGUMO_Search, nullptr);
	}
}
} // namespace Jigumo
} // namespace Game

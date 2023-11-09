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

/*
 * --INFO--
 * Address:	80278E90
 * Size:	000384
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

/*
 * --INFO--
 * Address:	80279214
 * Size:	00005C
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->deathProcedure();
	enemy->disableEvent(0, EB_Cullable);
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->startMotion(ELECBUGANIM_Dead, nullptr);
}

/*
 * --INFO--
 * Address:	80279270
 * Size:	000044
 */
void StateDead::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		enemy->kill(nullptr);
	}
}

/*
 * --INFO--
 * Address:	802792B4
 * Size:	000004
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802792B8
 * Size:	00004C
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* bug         = OBJ(enemy);
	bug->mStateTimer = 0.0f;
	bug->enableEvent(0, EB_Cullable);
	bug->mTargetVelocity = Vector3f(0.0f);
	bug->startMotion(ELECBUGANIM_Wait, nullptr);
}

/*
 * --INFO--
 * Address:	80279304
 * Size:	0000A0
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

/*
 * --INFO--
 * Address:	802793A4
 * Size:	000004
 */
void StateWait::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802793A8
 * Size:	00005C
 */
void StateTurn::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* bug = OBJ(enemy);
	bug->setTargetPosition();
	bug->enableEvent(0, EB_Cullable);
	bug->mTargetVelocity = Vector3f(0.0f);
	bug->startMotion(ELECBUGANIM_Move, nullptr);
}

/*
 * --INFO--
 * Address:	80279404
 * Size:	000200
 */
void StateTurn::exec(EnemyBase* enemy)
{
	Obj* bug           = OBJ(enemy);
	Vector3f targetPos = bug->mTargetPosition;
	Vector2f XZ;
	XZ.x = targetPos.x;
	XZ.y = targetPos.z;

	// f32 dist = bug->changeFaceDir(targetPos);

	f32 dist = bug->turnToTarget(targetPos, CG_PARMS(bug)->mGeneral.mTurnSpeed(), CG_PARMS(bug)->mGeneral.mMaxTurnAngle());
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

/*
 * --INFO--
 * Address:	80279604
 * Size:	000004
 */
void StateTurn::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	80279608
 * Size:	00003C
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* bug = OBJ(enemy);
	bug->enableEvent(0, EB_Cullable);
	bug->startMotion(ELECBUGANIM_Move, nullptr);
}

/*
 * --INFO--
 * Address:	80279644
 * Size:	00013C
 */
void StateMove::exec(EnemyBase* enemy)
{
	Obj* bug           = OBJ(enemy);
	Vector3f targetPos = Vector3f(bug->mTargetPosition);

	Vector3f currentPos = bug->getPosition();
	if (outsideRadius(25.0f, currentPos, targetPos)) {
		EnemyParmsBase::Parms& general = CG_PARMS(bug)->mGeneral;
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

/*
 * --INFO--
 * Address:	80279780
 * Size:	000004
 */
void StateMove::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	80279784
 * Size:	00007C
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

/*
 * --INFO--
 * Address:	80279800
 * Size:	000554
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
		if (mgr) {                                                                     // sanity check moment
			EnemyIterator<Obj> iElecBug = ((Container<Obj>*)(GenericContainer*)(mgr)); // this is correct... /shrug
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
			Obj* randBug = seachingBugs[(int)(randFloat() * bugCount)];
			bug->startChargeState(randBug);
			bug->disableEvent(0, EB_Cullable);
		}
	}
	Obj* partner = bug->mPartner;
	if (partner) {
		Vector3f bugPos     = bug->getPosition();
		Vector3f partnerPos = partner->getPosition();
		Vector3f pos        = bugPos - partnerPos;
		pos += bugPos;
		partner->turnToTarget(pos, 0.15f, CG_PARMS(bug)->mGeneral.mMaxTurnAngle());
	}
	if (bug->mStateTimer > 3.0f) {
		if (bug->mPartner) {
			transit(bug, ELECBUG_Discharge, nullptr);
		} else {
			bug->finishPartnerAndEffect();
			transit(bug, ELECBUG_Turn, nullptr);
		}
	}
	bug->mStateTimer += sys->mDeltaTime;
}

/*
 * --INFO--
 * Address:	80279D54
 * Size:	00004C
 */

/*
 * --INFO--
 * Address:	80279DA0
 * Size:	000064
 */
void StateCharge::cleanup(EnemyBase* enemy)
{
	Obj* bug = OBJ(enemy);
	bug->setEmotionCaution();
	bug->mInactiveTimer = randWeightFloat(10.0f);
}

/*
 * --INFO--
 * Address:	80279E04
 * Size:	000060
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

/*
 * --INFO--
 * Address:	80279E64
 * Size:	0000E8
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

/*
 * --INFO--
 * Address:	80279F4C
 * Size:	00006C
 */
void StateDischarge::cleanup(EnemyBase* enemy)
{
	Obj* bug = OBJ(enemy);
	bug->setEmotionCaution();
	bug->mInactiveTimer = randWeightFloat(10.0f);
	bug->finishPartnerAndEffect();
}

/*
 * --INFO--
 * Address:	80279FB8
 * Size:	00006C
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

/*
 * --INFO--
 * Address:	8027A024
 * Size:	000228
 */
void StateChildCharge::exec(EnemyBase* enemy)
{
	Obj* bug     = OBJ(enemy);
	Obj* partner = bug->mPartner;
	if (partner) {
		Vector3f bugPos     = bug->getPosition();
		Vector3f partnerPos = partner->getPosition();
		Vector3f pos        = bugPos - partnerPos;
		pos += bugPos;
		partner->turnToTarget(pos, 0.15f, CG_PARMS(bug)->mGeneral.mMaxTurnAngle());
	}
	if (bug->mStateTimer > 3.0f) {
		if (partner) {
			transit(bug, ELECBUG_ChildDischarge, nullptr);
		} else {
			bug->finishPartnerAndEffect();
			transit(bug, ELECBUG_Turn, nullptr);
		}
	}
	bug->mStateTimer += sys->mDeltaTime;
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
	stfd     f28, 0x50(r1)
	psq_st   f28, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	stw      r29, 0x44(r1)
	lwz      r31, 0x2d8(r4)
	mr       r29, r3
	mr       r30, r4
	cmplwi   r31, 0
	beq      lbl_8027A198
	lwz      r12, 0(r4)
	addi     r3, r1, 0x2c
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x20
	lwz      r12, 0(r31)
	lfs      f30, 0x2c(r1)
	lwz      r12, 8(r12)
	lfs      f31, 0x34(r1)
	mtctr    r12
	bctrl
	lfs      f1, 0x20(r1)
	mr       r4, r30
	lfs      f0, 0x28(r1)
	addi     r3, r1, 0x14
	fsubs    f29, f30, f1
	lwz      r12, 0(r30)
	fsubs    f28, f31, f0
	lwz      r5, 0xc0(r30)
	lwz      r12, 8(r12)
	fadds    f29, f29, f30
	fadds    f28, f28, f31
	lfs      f31, 0x334(r5)
	mtctr    r12
	bctrl
	lfs      f4, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x18(r1)
	fsubs    f1, f29, f4
	fsubs    f2, f28, f0
	stfs     f4, 8(r1)
	stfs     f3, 0xc(r1)
	stfs     f0, 0x10(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r30)
	fmr      f30, f1
	mr       r3, r30
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f30
	bl       angDist__Fff
	lfs      f2, lbl_8051B4AC@sda21(r2)
	lfs      f0, lbl_8051B490@sda21(r2)
	fmuls    f30, f1, f2
	lfs      f1, lbl_8051B48C@sda21(r2)
	fmuls    f0, f0, f31
	fabs     f2, f30
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_8027A170
	lfs      f0, lbl_8051B488@sda21(r2)
	fcmpo    cr0, f30, f0
	ble      lbl_8027A16C
	fmr      f30, f1
	b        lbl_8027A170

lbl_8027A16C:
	fneg     f30, f1

lbl_8027A170:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f30, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r30)
	lfs      f0, 0x1fc(r30)
	stfs     f0, 0x1a8(r30)

lbl_8027A198:
	lfs      f1, 0x2c4(r30)
	lfs      f0, lbl_8051B4C4@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8027A1FC
	cmplwi   r31, 0
	beq      lbl_8027A1D4
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	li       r5, 7
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8027A1FC

lbl_8027A1D4:
	mr       r3, r30
	bl       finishPartnerAndEffect__Q34Game7ElecBug3ObjFv
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8027A1FC:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2c4(r30)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c4(r30)
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	psq_l    f28, 88(r1), 0, qr0
	lfd      f28, 0x50(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	lwz      r0, 0x94(r1)
	lwz      r29, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027A24C
 * Size:	000064
 */
void StateChildCharge::cleanup(EnemyBase* enemy)
{
	Obj* bug = OBJ(enemy);
	bug->setEmotionCaution();
	bug->mInactiveTimer = randWeightFloat(10.0f);
}

/*
 * --INFO--
 * Address:	8027A2B0
 * Size:	000060
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

/*
 * --INFO--
 * Address:	8027A310
 * Size:	0000C0
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

/*
 * --INFO--
 * Address:	8027A3D0
 * Size:	00006C
 */
void StateChildDischarge::cleanup(EnemyBase* enemy)
{
	Obj* bug = OBJ(enemy);
	bug->setEmotionCaution();
	bug->mInactiveTimer = randWeightFloat(10.0f);
	bug->finishPartnerAndEffect();
}

/*
 * --INFO--
 * Address:	8027A43C
 * Size:	000070
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

/*
 * --INFO--
 * Address:	8027A4AC
 * Size:	0000D8
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

/*
 * --INFO--
 * Address:	8027A584
 * Size:	000010
 */
void StateReverse::cleanup(EnemyBase* enemy) { enemy->enableEvent(0, EB_Invulnerable); }

/*
 * --INFO--
 * Address:	8027A594
 * Size:	000048
 */
void StateReturn::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* bug = OBJ(enemy); // nothing even uses the obj cast here but it's necessary for codegen, smh.
	bug->enableEvent(0, EB_Cullable);
	bug->mTargetVelocity = Vector3f(0.0f);
	bug->startMotion(ELECBUGANIM_Recover, nullptr);
}

/*
 * --INFO--
 * Address:	8027A5DC
 * Size:	000050
 */
void StateReturn::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		transit(enemy, ELECBUG_Turn, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8027A62C
 * Size:	000004
 */
void StateReturn::cleanup(EnemyBase* enemy) { }

} // namespace ElecBug
} // namespace Game

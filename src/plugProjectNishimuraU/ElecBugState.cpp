#include "types.h"
#include "Game/Entities/ElecBug.h"
#include "Game/EnemyIterator.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/generalEnemyMgr.h"
#include "Dolphin/rand.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80486D20
    lbl_80486D20:
        .4byte 0x3234362D
        .4byte 0x456C6563
        .4byte 0x42756753
        .4byte 0x74617465
        .4byte 0x00000000
        .4byte 0x64697363
        .4byte 0x68617267
        .4byte 0x65000000
        .4byte 0x6368696C
        .4byte 0x64636861
        .4byte 0x72676500
        .4byte 0x6368696C
        .4byte 0x64646973
        .4byte 0x63686172
        .4byte 0x67650000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game7ElecBug11StateReturn
    __vt__Q34Game7ElecBug11StateReturn:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game7ElecBug11StateReturnFPQ24Game9EnemyBasePQ24Game8StateArg .4byte
   exec__Q34Game7ElecBug11StateReturnFPQ24Game9EnemyBase .4byte
   cleanup__Q34Game7ElecBug11StateReturnFPQ24Game9EnemyBase .4byte
   resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game7ElecBug12StateReverse
    __vt__Q34Game7ElecBug12StateReverse:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game7ElecBug12StateReverseFPQ24Game9EnemyBasePQ24Game8StateArg
        .4byte exec__Q34Game7ElecBug12StateReverseFPQ24Game9EnemyBase
        .4byte cleanup__Q34Game7ElecBug12StateReverseFPQ24Game9EnemyBase
        .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game7ElecBug19StateChildDischarge
    __vt__Q34Game7ElecBug19StateChildDischarge:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game7ElecBug19StateChildDischargeFPQ24Game9EnemyBasePQ24Game8StateArg
        .4byte exec__Q34Game7ElecBug19StateChildDischargeFPQ24Game9EnemyBase
        .4byte cleanup__Q34Game7ElecBug19StateChildDischargeFPQ24Game9EnemyBase
        .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game7ElecBug16StateChildCharge
    __vt__Q34Game7ElecBug16StateChildCharge:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game7ElecBug16StateChildChargeFPQ24Game9EnemyBasePQ24Game8StateArg
        .4byte exec__Q34Game7ElecBug16StateChildChargeFPQ24Game9EnemyBase
        .4byte cleanup__Q34Game7ElecBug16StateChildChargeFPQ24Game9EnemyBase
        .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game7ElecBug14StateDischarge
    __vt__Q34Game7ElecBug14StateDischarge:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game7ElecBug14StateDischargeFPQ24Game9EnemyBasePQ24Game8StateArg
        .4byte exec__Q34Game7ElecBug14StateDischargeFPQ24Game9EnemyBase
        .4byte cleanup__Q34Game7ElecBug14StateDischargeFPQ24Game9EnemyBase
        .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   "__vt__Q24Game34EnemyIterator<Q34Game7ElecBug3Obj>"
    "__vt__Q24Game34EnemyIterator<Q34Game7ElecBug3Obj>":
        .4byte 0
        .4byte 0
        .4byte "first__Q24Game34EnemyIterator<Q34Game7ElecBug3Obj>Fv"
        .4byte "next__Q24Game34EnemyIterator<Q34Game7ElecBug3Obj>Fv"
        .4byte "isDone__Q24Game34EnemyIterator<Q34Game7ElecBug3Obj>Fv"
        .4byte "__ml__Q24Game34EnemyIterator<Q34Game7ElecBug3Obj>Fv"
    .global __vt__Q34Game7ElecBug11StateCharge
    __vt__Q34Game7ElecBug11StateCharge:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game7ElecBug11StateChargeFPQ24Game9EnemyBasePQ24Game8StateArg .4byte
   exec__Q34Game7ElecBug11StateChargeFPQ24Game9EnemyBase .4byte
   cleanup__Q34Game7ElecBug11StateChargeFPQ24Game9EnemyBase .4byte
   resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game7ElecBug9StateMove
    __vt__Q34Game7ElecBug9StateMove:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game7ElecBug9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg .4byte
   exec__Q34Game7ElecBug9StateMoveFPQ24Game9EnemyBase .4byte
   cleanup__Q34Game7ElecBug9StateMoveFPQ24Game9EnemyBase .4byte
   resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game7ElecBug9StateTurn
    __vt__Q34Game7ElecBug9StateTurn:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game7ElecBug9StateTurnFPQ24Game9EnemyBasePQ24Game8StateArg .4byte
   exec__Q34Game7ElecBug9StateTurnFPQ24Game9EnemyBase .4byte
   cleanup__Q34Game7ElecBug9StateTurnFPQ24Game9EnemyBase .4byte
   resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game7ElecBug9StateWait
    __vt__Q34Game7ElecBug9StateWait:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game7ElecBug9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg .4byte
   exec__Q34Game7ElecBug9StateWaitFPQ24Game9EnemyBase .4byte
   cleanup__Q34Game7ElecBug9StateWaitFPQ24Game9EnemyBase .4byte
   resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game7ElecBug9StateDead
    __vt__Q34Game7ElecBug9StateDead:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game7ElecBug9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg .4byte
   exec__Q34Game7ElecBug9StateDeadFPQ24Game9EnemyBase .4byte
   cleanup__Q34Game7ElecBug9StateDeadFPQ24Game9EnemyBase .4byte
   resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game7ElecBug5State
    __vt__Q34Game7ElecBug5State:
        .4byte 0
        .4byte 0
        .4byte init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
        .4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game7ElecBug3FSM
    __vt__Q34Game7ElecBug3FSM:
        .4byte 0
        .4byte 0
        .4byte init__Q34Game7ElecBug3FSMFPQ24Game9EnemyBase
        .4byte
   start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase .4byte
   transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
        .4byte
   doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics .4byte
   getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase .4byte
   setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051B450
    lbl_8051B450:
        .4byte 0x64656164
        .4byte 0x00000000
    .global lbl_8051B458
    lbl_8051B458:
        .4byte 0x77616974
        .4byte 0x00000000
    .global lbl_8051B460
    lbl_8051B460:
        .4byte 0x7475726E
        .4byte 0x00000000
    .global lbl_8051B468
    lbl_8051B468:
        .4byte 0x6D6F7665
        .4byte 0x00000000
    .global lbl_8051B470
    lbl_8051B470:
        .4byte 0x63686172
        .4byte 0x67650000
    .global lbl_8051B478
    lbl_8051B478:
        .4byte 0x72657665
        .4byte 0x72736500
    .global lbl_8051B480
    lbl_8051B480:
        .4byte 0x72657475
        .4byte 0x726E0000
    .global lbl_8051B488
    lbl_8051B488:
        .4byte 0x00000000
    .global lbl_8051B48C
    lbl_8051B48C:
        .4byte 0x40490FDB
    .global lbl_8051B490
    lbl_8051B490:
        .4byte 0x3BB60B61
    .global lbl_8051B494
    lbl_8051B494:
        .4byte 0x3F060A92
    .global lbl_8051B498
    lbl_8051B498:
        .4byte 0x41700000
    .global lbl_8051B49C
    lbl_8051B49C:
        .4byte 0x441C4000
    .global lbl_8051B4A0
    lbl_8051B4A0:
        .4byte 0x40000000
    .global lbl_8051B4A4
    lbl_8051B4A4:
        .4byte 0x43960000
    .global lbl_8051B4A8
    lbl_8051B4A8:
        .4byte 0x47000000
    .global lbl_8051B4AC
    lbl_8051B4AC:
        .float 0.15
    .global lbl_8051B4B0
    lbl_8051B4B0:
        .4byte 0x40400000
        .4byte 0x00000000
    .global lbl_8051B4B8
    lbl_8051B4B8:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051B4C0
    lbl_8051B4C0:
        .4byte 0x41200000
    .global lbl_8051B4C4
    lbl_8051B4C4:
        .float 1.0
*/

namespace Game {

namespace ElecBug {

/*
 * --INFO--
 * Address:	80278E90
 * Size:	000384
 */
void FSM::init(EnemyBase*)
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
void StateDead::init(EnemyBase* enemy, StateArg*)
{
	enemy->deathProcedure();
	enemy->disableEvent(0, EB_IsCullable);
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->startMotion(0, nullptr);
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
void StateDead::cleanup(EnemyBase*) { }

/*
 * --INFO--
 * Address:	802792B8
 * Size:	00004C
 */
void StateWait::init(EnemyBase* enemy, StateArg*)
{
	Obj* bug  = static_cast<Obj*>(enemy);
	bug->_2C4 = 0.0f;
	bug->enableEvent(0, EB_IsCullable);
	bug->mTargetVelocity = Vector3f(0.0f);
	bug->startMotion(2, nullptr);
}

/*
 * --INFO--
 * Address:	80279304
 * Size:	0000A0
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* bug = static_cast<Obj*>(enemy);
	if (bug->_2C4 > CG_PROPERPARMS(bug).mWaitTime) {
		bug->finishMotion();
	}
	if (bug->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		transit(bug, ELECBUG_Turn, nullptr);
	}
	bug->_2C4 += sys->mDeltaTime;
}

/*
 * --INFO--
 * Address:	802793A4
 * Size:	000004
 */
void StateWait::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	802793A8
 * Size:	00005C
 */
void StateTurn::init(EnemyBase* enemy, StateArg*)
{
	Obj* bug = static_cast<Obj*>(enemy);
	bug->setTargetPosition();
	bug->enableEvent(0, EB_IsCullable);
	bug->mTargetVelocity = Vector3f(0.0f);
	bug->startMotion(1, nullptr);
}

/*
 * --INFO--
 * Address:	80279404
 * Size:	000200
 */
void StateTurn::exec(EnemyBase* enemy)
{
	Obj* bug           = static_cast<Obj*>(enemy);
	Vector3f targetPos = bug->mTargetPosition;
	bug->turnToTarget2(targetPos, CG_PARMS(bug)->mGeneral.mRotationalSpeed, 30.0f);
	if (bug->_2C0 > 15.0f) {
		bug->finishMotion();
	}
	if (bug->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		if (bug->_2C0 > 15.0f) {
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
void StateTurn::cleanup(EnemyBase*) { }

/*
 * --INFO--
 * Address:	80279608
 * Size:	00003C
 */
void StateMove::init(EnemyBase* enemy, StateArg*)
{
	Obj* bug = static_cast<Obj*>(enemy);
	bug->enableEvent(0, EB_IsCullable);
	bug->startMotion(1, nullptr);
}

/*
 * --INFO--
 * Address:	80279644
 * Size:	00013C
 */
void StateMove::exec(EnemyBase* enemy)
{
	Obj* bug = static_cast<Obj*>(enemy);
	// how tf u setting it then?????
	Vector3f targetPos = bug->mTargetPosition;

	Vector3f currentPos = bug->getPosition();
	if (outsideRadius(25.0f, targetPos, currentPos)) {
		EnemyParmsBase::Parms& general = CG_PARMS(bug)->mGeneral;
		EnemyFunc::walkToTarget(bug, targetPos, general.mMoveSpeed, general.mRotationalAccel, general.mRotationalSpeed);

	} else {
		bug->finishMotion();
	}
	if (bug->_2C0 > 15.0f) {
		bug->finishMotion();
	}
	if (bug->mCurAnim->mIsPlaying && bug->mCurAnim->mType == KEYEVENT_END) {
		if (bug->_2C0 > 15.0f) {
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
void StateMove::cleanup(EnemyBase*) { }

/*
 * --INFO--
 * Address:	80279784
 * Size:	00007C
 */
void StateCharge::init(EnemyBase* enemy, StateArg*)
{
	Obj* bug                  = static_cast<Obj*>(enemy);
	bug->mHadLookedForPartner = false;
	bug->_2C4                 = 0.0f;
	bug->resetPartnerPtr();
	bug->startChargeEffect();
	bug->enableEvent(0, EB_IsCullable);
	bug->mTargetVelocity = Vector3f(0.0f);
	bug->setEmotionExcitement();
	bug->startMotion(3, nullptr);
}

/*
 * --INFO--
 * Address:	80279800
 * Size:	000554
 */
void StateCharge::exec(EnemyBase* enemy)
{
	Obj* bug = static_cast<Obj*>(enemy);
	Obj* seachingBugs[32];
	u8 bugCount = 0;
	if (!bug->mHadLookedForPartner && bug->_2C4 >= 2.0f) {
		bug->mHadLookedForPartner = true;
		Vector3f bugPos           = bug->getPosition();
		Mgr* mgr                  = static_cast<Mgr*>(generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_ElecBug));
		if (mgr) {                                                                     // sanity check moment
			EnemyIterator<Obj> iElecBug = ((Container<Obj>*)(GenericContainer*)(mgr)); // this is correct... /shrug
			CI_LOOP(iElecBug)
			{
				Obj* otherBug = *iElecBug;
				if (bug != otherBug && otherBug->isBecomeChargeState()) {
					Vector3f otherPos = otherBug->getPosition();
					if (_distanceBetween(bugPos, otherPos) < 300.0f) {
						seachingBugs[bugCount] = otherBug;
						bugCount++;
					}
				}
			}
		}
		if (bugCount > 0) {
			Obj* randBug = seachingBugs[(int)(randFloat() * bugCount)];
			bug->startChargeState(randBug);
			bug->disableEvent(0, EB_IsCullable);
		}
	}
	Obj* partner = bug->mPartner;
	if (partner) {
		Vector3f partnerPos = partner->getPosition();
		partner->turnToTarget2(partnerPos, 0.15f, CG_PARMS(bug)->mGeneral.mRotationalSpeed.mValue);
	}
	if (bug->_2C4 >= 3.0f) {
		if (!bug->mPartner) {
			bug->finishPartnerAndEffect();
			transit(bug, ELECBUG_Turn, nullptr);
		} else {
			transit(bug, ELECBUG_Discharge, nullptr);
		}
	}
	bug->_2C4 += sys->mDeltaTime;
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
	Obj* bug = static_cast<Obj*>(enemy);
	bug->setEmotionCaution();
	bug->_2C0 = randWeightFloat(10.0f);
}

/*
 * --INFO--
 * Address:	80279E04
 * Size:	000060
 */
void StateDischarge::init(EnemyBase* enemy, StateArg*) { }

/*
 * --INFO--
 * Address:	80279E64
 * Size:	0000E8
 */
void ElecBug::StateDischarge::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r4, 0x2d8(r4)
	cmplwi   r4, 0
	beq      lbl_80279E98
	mr       r3, r31
	bl       checkInteract__Q34Game7ElecBug3ObjFPQ34Game7ElecBug3Obj
	b        lbl_80279EA8

lbl_80279E98:
	mr       r3, r31
	bl       finishPartnerAndEffect__Q34Game7ElecBug3ObjFv
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_80279EA8:
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x86c(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_80279EC4
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_80279EC4:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_80279F20
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 2
	bne      lbl_80279EF8
	lwz      r4, 0x2d8(r31)
	cmplwi   r4, 0
	beq      lbl_80279F20
	mr       r3, r31
	bl       startDischargeEffect__Q34Game7ElecBug3ObjFPQ34Game7ElecBug3Obj
	b        lbl_80279F20

lbl_80279EF8:
	cmplwi   r0, 0x3e8
	bne      lbl_80279F20
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80279F20:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c4(r31)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80279F4C
 * Size:	00006C
 */
void ElecBug::StateDischarge::cleanup(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	mr       r3, r31
	bl       setEmotionCaution__Q24Game9EnemyBaseFv
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	mr       r3, r31
	lfd      f3, lbl_8051B4B8@sda21(r2)
	stw      r0, 8(r1)
	lfs      f1, lbl_8051B4C0@sda21(r2)
	lfd      f2, 8(r1)
	lfs      f0, lbl_8051B4A8@sda21(r2)
	fsubs    f2, f2, f3
	fmuls    f1, f1, f2
	fdivs    f0, f1, f0
	stfs     f0, 0x2c0(r31)
	bl       finishPartnerAndEffect__Q34Game7ElecBug3ObjFv
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80279FB8
 * Size:	00006C
 */
void ElecBug::StateChildCharge::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051B488@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	stfs     f0, 0x2c4(r4)
	bl       startChargeEffect__Q34Game7ElecBug3ObjFv
	lwz      r0, 0x1e0(r31)
	mr       r3, r31
	lfs      f0, lbl_8051B488@sda21(r2)
	rlwinm   r0, r0, 0, 0x1a, 0x18
	stw      r0, 0x1e0(r31)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	bl       setEmotionExcitement__Q24Game9EnemyBaseFv
	mr       r3, r31
	li       r4, 3
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027A024
 * Size:	000228
 */
void ElecBug::StateChildCharge::exec(Game::EnemyBase*)
{
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
void ElecBug::StateChildCharge::cleanup(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	mr       r3, r31
	bl       setEmotionCaution__Q24Game9EnemyBaseFv
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_8051B4B8@sda21(r2)
	stw      r0, 8(r1)
	lfs      f1, lbl_8051B4C0@sda21(r2)
	lfd      f2, 8(r1)
	lfs      f0, lbl_8051B4A8@sda21(r2)
	fsubs    f2, f2, f3
	fmuls    f1, f1, f2
	fdivs    f0, f1, f0
	stfs     f0, 0x2c0(r31)
	lwz      r31, 0x1c(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027A2B0
 * Size:	000060
 */
void ElecBug::StateChildDischarge::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051B488@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	stfs     f0, 0x2c4(r4)
	lwz      r0, 0x1e0(r4)
	rlwinm   r0, r0, 0, 0x1a, 0x18
	stw      r0, 0x1e0(r4)
	stfs     f0, 0x1d4(r4)
	stfs     f0, 0x1d8(r4)
	stfs     f0, 0x1dc(r4)
	bl       setEmotionExcitement__Q24Game9EnemyBaseFv
	mr       r3, r31
	li       r4, 4
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027A310
 * Size:	0000C0
 */
void ElecBug::StateChildDischarge::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 0x2d8(r4)
	cmplwi   r0, 0
	beq      lbl_8027A358
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x86c(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_8027A368
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_8027A368

lbl_8027A358:
	mr       r3, r31
	bl       finishPartnerAndEffect__Q34Game7ElecBug3ObjFv
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_8027A368:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_8027A3A4
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_8027A3A4
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8027A3A4:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c4(r31)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027A3D0
 * Size:	00006C
 */
void ElecBug::StateChildDischarge::cleanup(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	mr       r3, r31
	bl       setEmotionCaution__Q24Game9EnemyBaseFv
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	mr       r3, r31
	lfd      f3, lbl_8051B4B8@sda21(r2)
	stw      r0, 8(r1)
	lfs      f1, lbl_8051B4C0@sda21(r2)
	lfd      f2, 8(r1)
	lfs      f0, lbl_8051B4A8@sda21(r2)
	fsubs    f2, f2, f3
	fmuls    f1, f1, f2
	fdivs    f0, f1, f0
	stfs     f0, 0x2c0(r31)
	bl       finishPartnerAndEffect__Q34Game7ElecBug3ObjFv
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027A43C
 * Size:	000070
 */
void ElecBug::StateReverse::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051B488@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	stfs     f0, 0x2c4(r4)
	bl       finishPartnerAndEffect__Q34Game7ElecBug3ObjFv
	lwz      r0, 0x1e0(r31)
	mr       r3, r31
	lfs      f0, lbl_8051B488@sda21(r2)
	li       r4, 5
	ori      r0, r0, 0x40
	li       r5, 0
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0, 0x1e
	stw      r0, 0x1e0(r31)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027A4AC
 * Size:	0000D8
 */
void ElecBug::StateReverse::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0xc0(r4)
	lfs      f1, 0x2c4(r4)
	lfs      f0, 0x81c(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_8027A4E4
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_8027A4E4:
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051B488@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8027A51C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8027A56C

lbl_8027A51C:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c4(r31)
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_8027A56C
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_8027A56C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 9
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8027A56C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027A584
 * Size:	000010
 */
void ElecBug::StateReverse::cleanup(Game::EnemyBase*)
{
	/*
	lwz      r0, 0x1e0(r4)
	ori      r0, r0, 1
	stw      r0, 0x1e0(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027A594
 * Size:	000048
 */
void ElecBug::StateReturn::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r4
	lfs      f0, lbl_8051B488@sda21(r2)
	stw      r0, 0x14(r1)
	li       r4, 6
	li       r5, 0
	lwz      r0, 0x1e0(r3)
	ori      r0, r0, 0x40
	stw      r0, 0x1e0(r3)
	stfs     f0, 0x1d4(r3)
	stfs     f0, 0x1d8(r3)
	stfs     f0, 0x1dc(r3)
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027A5DC
 * Size:	000050
 */
void ElecBug::StateReturn::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r5, 0x188(r4)
	lbz      r0, 0x24(r5)
	cmplwi   r0, 0
	beq      lbl_8027A61C
	lwz      r0, 0x1c(r5)
	cmplwi   r0, 0x3e8
	bne      lbl_8027A61C
	lwz      r12, 0(r3)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8027A61C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027A62C
 * Size:	000004
 */
void ElecBug::StateReturn::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	8027A630
 * Size:	000038
 */

/*
 * --INFO--
 * Address:	8027A668
 * Size:	0000E4
 */

/*
 * --INFO--
 * Address:	8027A74C
 * Size:	0000DC
 */
} // namespace ElecBug
} // namespace Game

#include "Game/Entities/Jigumo.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
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
	enemy->startMotion(15, nullptr);
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
	enemy->startMotion(0, nullptr);
	enemy->stopMotion();
	enemy->hardConstraintOn();
	enemy->setAtari(false);
	enemy->setAlive(false);
	enemy->mToFlick = 0.0f;
	enemy->enableEvent(0, EB_IsImmuneBitter);
	enemy->mPosition                                  = enemy->mHomePosition;
	OBJ(enemy)->_2E8                                  = 0;
	enemy->mCollTree->getCollPart('body')->mSpecialID = '____';
	enemy->mCollTree->getCollPart('head')->mSpecialID = '____';
	OBJ(enemy)->_384                                  = 0;
	if (enemy->mHealth < 1.0f) {
		enemy->mHealth += 5.0f;
		enemy->mInstantDamage = 0.0f;
		enemy->disableEvent(0, EB_IsTakingDamage);
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
					Vector3f targetPos = target->getPosition();
					// this inline needs fixing but seems the most real
					f32 angleDist = enemy->turnToTarget(targetPos, TAU, 1.0f);

					enemy->mFaceDir    = roundAng(angleDist + enemy->getFaceDir());
					enemy->mRotation.y = enemy->mFaceDir;
					OBJ(enemy)->_2EC   = enemy->mFaceDir;
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

				enemy->disableEvent(0, EB_IsImmuneBitter);
			}
			if (enemy->mCurAnim->mType == KEYEVENT_END) {
				transit(enemy, JIGUMO_Wait, nullptr);
				enemy->setAlive(true);
				enemy->enableEvent(0, EB_LifegaugeVisible);
			}
		}
	}
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	mr       r30, r3
	mr       r31, r4
	lwz      r3, 0x10(r3)
	addi     r0, r3, 1
	stw      r0, 0x10(r30)
	lwz      r3, 0xc0(r4)
	lwz      r4, 0x10(r30)
	lwz      r0, 0x8e4(r3)
	cmpw     r4, r0
	ble      lbl_8036680C
	mr       r3, r31
	bl       isStopMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80366724
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	li       r4, 0
	lfs      f31, 0x35c(r5)
	fmr      f1, f31
	bl
"isThereOlimar__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Navi>"
	clrlwi.  r0, r3, 0x18
	beq      lbl_80366584
	li       r0, 1
	b        lbl_803665A8

lbl_80366584:
	fmr      f1, f31
	mr       r3, r31
	li       r4, 0
	bl
"isTherePikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
	clrlwi.  r0, r3, 0x18
	beq      lbl_803665A4
	li       r0, 1
	b        lbl_803665A8

lbl_803665A4:
	li       r0, 0

lbl_803665A8:
	clrlwi.  r0, r0, 0x18
	beq      lbl_8036680C
	mr       r3, r31
	bl       startMotion__Q24Game9EnemyBaseFv
	mr       r4, r31
	addi     r3, r1, 0x44
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x44(r1)
	addi     r5, r1, 0x5c
	lfs      f1, 0x48(r1)
	li       r4, 8
	lfs      f0, 0x4c(r1)
	li       r6, 2
	stfs     f2, 0x5c(r1)
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	stfs     f1, 0x60(r1)
	stfs     f0, 0x64(r1)
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	fmr      f2, f31
	lfs      f1, lbl_8051E88C@sda21(r2)
	mr       r3, r31
	bl       getNearestPikiOrNavi__Q34Game6Jigumo3ObjFff
	cmplwi   r3, 0
	stw      r3, 0x230(r31)
	beq      lbl_8036680C
	mr       r4, r3
	addi     r3, r1, 0x20
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
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
	fmr      f31, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f31
	bl       angDist__Fff
	lfs      f0, lbl_8051E884@sda21(r2)
	lfs      f2, lbl_8051E890@sda21(r2)
	fmuls    f31, f1, f0
	fabs     f0, f31
	frsp     f0, f0
	fcmpo    cr0, f0, f2
	ble      lbl_803666F0
	lfs      f0, lbl_8051E880@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_803666EC
	fmr      f31, f2
	b        lbl_803666F0

lbl_803666EC:
	fneg     f31, f2

lbl_803666F0:
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
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x2ec(r31)
	b        lbl_8036680C

lbl_80366724:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_8036680C
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 2
	bne      lbl_803667B8
	lwz      r0, 0x280(r31)
	cmplwi   r0, 0
	beq      lbl_80366764
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x250(r12)
	mtctr    r12
	bctrl
	b        lbl_803667AC

lbl_80366764:
	mr       r4, r31
	addi     r3, r1, 0x38
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x38(r1)
	mr       r3, r31
	lfs      f2, 0x3c(r1)
	addi     r4, r1, 0x50
	lfs      f0, 0x40(r1)
	stfs     f1, 0x50(r1)
	lfs      f1, lbl_8051E894@sda21(r2)
	stfs     f2, 0x54(r1)
	stfs     f0, 0x58(r1)
	lfs      f0, 0x1f8(r31)
	fmuls    f1, f1, f0
	bl       "createDropEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"

lbl_803667AC:
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0xa, 8
	stw      r0, 0x1e0(r31)

lbl_803667B8:
	lwz      r3, 0x188(r31)
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_8036680C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	li       r4, 1
	lwz      r12, 0(r31)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x1e0(r31)
	ori      r0, r0, 0x800
	stw      r0, 0x1e0(r31)

lbl_8036680C:
	psq_l    f31, 120(r1), 0, qr0
	lwz      r0, 0x84(r1)
	lfd      f31, 0x70(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
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
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	lbz      r0, 0x2e8(r4)
	cmplwi   r0, 0
	beq      lbl_8036689C
	mr       r3, r31
	li       r4, 7
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	b        lbl_803668AC

lbl_8036689C:
	mr       r3, r31
	li       r4, 8
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener

lbl_803668AC:
	lfs      f1, 0x18c(r31)
	mr       r3, r31
	lfs      f0, lbl_8051E880@sda21(r2)
	stfs     f1, 0x2bc(r31)
	lfs      f1, 0x190(r31)
	stfs     f1, 0x2c0(r31)
	lfs      f1, 0x194(r31)
	stfs     f1, 0x2c4(r31)
	stfs     f0, 0x1c8(r31)
	stfs     f0, 0x1cc(r31)
	stfs     f0, 0x1d0(r31)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	bl       hardConstraintOn__Q24Game9EnemyBaseFv
	mr       r3, r31
	li       r4, 0
	lwz      r12, 0(r31)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x626F6479@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x626F6479@l
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x5F5F5F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x5F5F5F5F@l
	bl       __as__4ID32FUl
	lis      r4, 0x68656164@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x68656164@l
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x5F5F5F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x5F5F5F5F@l
	bl       __as__4ID32FUl
	li       r0, 0
	lfs      f4, lbl_8051E8A0@sda21(r2)
	stb      r0, 0x384(r31)
	mr       r3, r31
	li       r4, 0
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x15, 0x13
	stw      r0, 0x1e0(r31)
	lwz      r5, 0xc0(r31)
	lfs      f1, 0x53c(r5)
	lfs      f2, 0x4c4(r5)
	lfs      f3, 0x4ec(r5)
	bl
"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	mr       r3, r31
	bl       setEmotionCaution__Q24Game9EnemyBaseFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80366990
 * Size:	000170
 */
void StateHide::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r4
	stw      r30, 0x38(r1)
	mr       r30, r3
	lbz      r0, 0x2e8(r4)
	cmplwi   r0, 0
	bne      lbl_803669D0
	mr       r3, r31
	bl       getMotionFrame__Q24Game9EnemyBaseFv
	lfs      f0, lbl_8051E8A4@sda21(r2)
	mr       r3, r31
	fmuls    f1, f0, f1
	bl       revisionAnimPos__Q34Game6Jigumo3ObjFf

lbl_803669D0:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_80366AE8
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_80366AE8
	lwz      r0, 0x1e0(r31)
	mr       r3, r31
	ori      r0, r0, 0x40
	stw      r0, 0x1e0(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x254(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x280(r31)
	cmplwi   r0, 0
	beq      lbl_80366A94
	lis      r3, __vt__Q23efx5TBase@ha
	lis      r4, __vt__Q23efx8TSimple1@ha
	addi     r0, r3, __vt__Q23efx5TBase@l
	lis      r3, __vt__Q23efx10TJgmBubble@ha
	stw      r0, 0x24(r1)
	addi     r0, r4, __vt__Q23efx8TSimple1@l
	li       r6, 0xc1
	li       r5, 0
	stw      r0, 0x24(r1)
	addi     r0, r3, __vt__Q23efx10TJgmBubble@l
	mr       r4, r31
	addi     r3, r1, 8
	sth      r6, 0x28(r1)
	stw      r5, 0x2c(r1)
	stw      r0, 0x24(r1)
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	lis      r3, __vt__Q23efx3Arg@ha
	lfs      f1, 0xc(r1)
	addi     r0, r3, __vt__Q23efx3Arg@l
	lfs      f0, 0x10(r1)
	addi     r3, r1, 0x24
	stw      r0, 0x14(r1)
	addi     r4, r1, 0x14
	stfs     f2, 0x18(r1)
	stfs     f1, 0x1c(r1)
	stfs     f0, 0x20(r1)
	bl       create__Q23efx8TSimple1FPQ23efx3Arg

lbl_80366A94:
	lfs      f1, lbl_8051E8A8@sda21(r2)
	lfs      f0, 0x1fc(r31)
	fadds    f1, f1, f0
	bl       roundAng__Ff
	stfs     f1, 0x2ec(r31)
	mr       r3, r30
	lfs      f0, lbl_8051E880@sda21(r2)
	mr       r4, r31
	lfs      f1, 0x198(r31)
	li       r5, 1
	li       r6, 0
	stfs     f1, 0x2c8(r31)
	lfs      f1, 0x19c(r31)
	stfs     f1, 0x2cc(r31)
	lfs      f1, 0x1a0(r31)
	stfs     f1, 0x2d0(r31)
	stfs     f0, 0x344(r31)
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80366AE8:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
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
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 4
	mr       r3, r31
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	lfs      f0, lbl_8051E880@sda21(r2)
	mr       r3, r31
	stfs     f0, 0x1c8(r31)
	stfs     f0, 0x1cc(r31)
	stfs     f0, 0x1d0(r31)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	bl       deathProcedure__Q24Game9EnemyBaseFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80366B98
 * Size:	0000C0
 */
void StateDead::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	lwz      r3, 0x188(r4)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_80366C44
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 2
	bne      lbl_80366C28
	mr       r3, r31
	bl       boundEffect__Q34Game6Jigumo3ObjFv
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	addi     r5, r1, 0x14
	lfs      f1, 0xc(r1)
	li       r4, 0
	lfs      f0, 0x10(r1)
	li       r6, 2
	stfs     f2, 0x14(r1)
	lwz      r3, cameraMgr__4Game@sda21(r13)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	bl       "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	addi     r5, r1, 0x14
	li       r4, 8
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"

lbl_80366C28:
	lwz      r3, 0x188(r31)
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_80366C44
	mr       r3, r31
	li       r4, 0
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg

lbl_80366C44:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
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
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 1
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	lwz      r0, 0x1e0(r31)
	lis      r3, 0x626F6479@ha
	li       r6, 5
	li       r5, 0
	rlwinm   r4, r0, 0, 0x1a, 0x18
	li       r0, 1
	stw      r4, 0x1e0(r31)
	addi     r4, r3, 0x626F6479@l
	stw      r6, 0x2d4(r31)
	stb      r5, 0x2e8(r31)
	stb      r5, 0x10(r30)
	stb      r0, 0x11(r30)
	lwz      r3, 0x114(r31)
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x73745F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x73745F5F@l
	bl       __as__4ID32FUl
	lis      r4, 0x68656164@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x68656164@l
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x5F745F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x5F745F5F@l
	bl       __as__4ID32FUl
	li       r0, 1
	mr       r3, r31
	stb      r0, 0x384(r31)
	bl       setEmotionExcitement__Q24Game9EnemyBaseFv
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
 * Address:	80366D50
 * Size:	000488
 */
void StateAttack::exec(EnemyBase* enemy)
{
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
 * Address:	803671D8
 * Size:	00001C
 */
Vector3f Obj::getGoalPos()
{
	/*
	lfs      f0, 0x2c8(r4)
	stfs     f0, 0(r3)
	lfs      f0, 0x2cc(r4)
	stfs     f0, 4(r3)
	lfs      f0, 0x2d0(r4)
	stfs     f0, 8(r3)
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
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	bl       effectStop__Q34Game6Jigumo3ObjFv
	mr       r3, r31
	bl       setEmotionCaution__Q24Game9EnemyBaseFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
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
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r6, r4
	li       r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	mr       r3, r6
	lfs      f0, 0x1fc(r4)
	li       r4, 0x10
	stfs     f0, 0x2ec(r6)
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	li       r0, 0
	stb      r0, 0x10(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803672B4
 * Size:	000200
 */
void StateMiss::exec(EnemyBase* enemy)
{
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
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 0xa
	mr       r3, r31
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	mr       r3, r31
	bl       effectStart__Q34Game6Jigumo3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80367530
 * Size:	000174
 */
void StateReturn::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	bl       walkFunc__Q34Game6Jigumo3ObjFv
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051E880@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8036758C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 3
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8036768C

lbl_8036758C:
	mr       r3, r31
	li       r4, 0
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_803675CC
	li       r0, 6
	mr       r3, r30
	stw      r0, 0x2d4(r31)
	mr       r4, r31
	li       r5, 8
	li       r6, 0
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_803675FC

lbl_803675CC:
	mr       r3, r31
	bl       getGoalDist__Q34Game6Jigumo3ObjFv
	lfs      f2, lbl_8051E8DC@sda21(r2)
	lfs      f0, 0x1f8(r31)
	fmuls    f0, f2, f0
	fmuls    f0, f0, f0
	fcmpo    cr0, f1, f0
	bge      lbl_803675FC
	li       r0, 0
	mr       r3, r31
	stb      r0, 0x385(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_803675FC:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_8036768C
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_8036768C
	lfs      f0, lbl_8051E880@sda21(r2)
	stfs     f0, 0x1c8(r31)
	stfs     f0, 0x1cc(r31)
	stfs     f0, 0x1d0(r31)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	lwz      r0, 0x1f4(r31)
	cmpwi    r0, 0
	ble      lbl_8036766C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 8
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	li       r0, 2
	stw      r0, 0x2d4(r31)
	b        lbl_8036768C

lbl_8036766C:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8036768C:
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
 * Address:	803676A4
 * Size:	00002C
 */
void StateReturn::cleanup(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r4
	stw      r0, 0x14(r1)
	li       r0, 1
	stb      r0, 0x385(r4)
	bl       effectStop__Q34Game6Jigumo3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
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
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 2
	mr       r3, r31
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	mr       r3, r31
	bl       effectStart__Q34Game6Jigumo3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036774C
 * Size:	000190
 */
void StateCarry::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stfd     f30, 0x10(r1)
	psq_st   f30, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r31, r4
	mr       r30, r3
	mr       r3, r31
	bl       walkFunc__Q34Game6Jigumo3ObjFv
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051E880@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_803677B8
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 3
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_803678B4

lbl_803677B8:
	mr       r3, r31
	li       r4, 0
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_803677F8
	li       r0, 7
	mr       r3, r30
	stw      r0, 0x2d4(r31)
	mr       r4, r31
	li       r5, 8
	li       r6, 0
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_803678B4

lbl_803677F8:
	mr       r3, r31
	bl       getGoalDist__Q34Game6Jigumo3ObjFv
	lfs      f3, lbl_8051E8C4@sda21(r2)
	fmr      f31, f1
	lfs      f2, 0x1f8(r31)
	lfs      f1, lbl_8051E8DC@sda21(r2)
	lfs      f0, lbl_8051E8E8@sda21(r2)
	fmadds   f30, f3, f2, f1
	fmuls    f30, f30, f30
	fmuls    f0, f0, f30
	fcmpo    cr0, f31, f0
	bge      lbl_80367838
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv
	li       r0, 0
	stb      r0, 0x385(r31)

lbl_80367838:
	fcmpo    cr0, f31, f30
	bge      lbl_803678B4
	lfs      f0, lbl_8051E880@sda21(r2)
	stfs     f0, 0x1c8(r31)
	stfs     f0, 0x1cc(r31)
	stfs     f0, 0x1d0(r31)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	lwz      r0, 0x1f4(r31)
	cmpwi    r0, 1
	ble      lbl_80367894
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 8
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	li       r0, 9
	stw      r0, 0x2d4(r31)
	b        lbl_803678B4

lbl_80367894:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 9
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_803678B4:
	psq_l    f31, 40(r1), 0, qr0
	lfd      f31, 0x20(r1)
	psq_l    f30, 24(r1), 0, qr0
	lfd      f30, 0x10(r1)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x34(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	803678DC
 * Size:	00002C
 */
void StateCarry::cleanup(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r4
	stw      r0, 0x14(r1)
	li       r0, 1
	stb      r0, 0x385(r4)
	bl       effectStop__Q34Game6Jigumo3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
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
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lfs      f0, lbl_8051E880@sda21(r2)
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stfs     f0, 0x1d4(r4)
	stfs     f0, 0x1d8(r4)
	stfs     f0, 0x1dc(r4)
	stfs     f0, 0x1c8(r4)
	stfs     f0, 0x1cc(r4)
	stfs     f0, 0x1d0(r4)
	lbz      r0, 0x2e8(r4)
	cmplwi   r0, 0
	beq      lbl_80367994
	mr       r3, r31
	li       r4, 6
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	b        lbl_803679A4

lbl_80367994:
	mr       r3, r31
	li       r4, 9
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener

lbl_803679A4:
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	addi     r5, r1, 0x14
	lfs      f1, 0xc(r1)
	li       r4, 0
	lfs      f0, 0x10(r1)
	li       r6, 2
	stfs     f2, 0x14(r1)
	lwz      r3, cameraMgr__4Game@sda21(r13)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	bl       "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	addi     r5, r1, 0x14
	li       r4, 8
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80367A10
 * Size:	0000FC
 */
void StateFlick::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stfd     f30, 0x20(r1)
	psq_st   f30, 40(r1), 0, qr0
	stfd     f29, 0x10(r1)
	psq_st   f29, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	mr       r31, r4
	lwz      r5, 0x188(r4)
	lbz      r0, 0x24(r5)
	cmplwi   r0, 0
	beq      lbl_80367AE0
	lwz      r0, 0x1c(r5)
	cmplwi   r0, 2
	bne      lbl_80367AAC
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f4, lbl_8051E8A0@sda21(r2)
	li       r4, 0
	lfs      f30, 0x4c4(r5)
	lfs      f29, 0x4ec(r5)
	fmr      f2, f30
	lfs      f31, 0x53c(r5)
	fmr      f3, f29
	lfs      f1, 0x514(r5)
	bl
"flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	fmr      f1, f31
	lfs      f4, lbl_8051E8A0@sda21(r2)
	fmr      f2, f30
	mr       r3, r31
	fmr      f3, f29
	li       r4, 0
	bl
"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	lfs      f0, lbl_8051E880@sda21(r2)
	stfs     f0, 0x20c(r31)
	b        lbl_80367AE0

lbl_80367AAC:
	cmplwi   r0, 3
	bne      lbl_80367AC0
	mr       r3, r31
	bl       boundEffect__Q34Game6Jigumo3ObjFv
	b        lbl_80367AE0

lbl_80367AC0:
	cmplwi   r0, 0x3e8
	bne      lbl_80367AE0
	lwz      r12, 0(r3)
	li       r6, 0
	lwz      r5, 0x2d4(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80367AE0:
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	psq_l    f29, 24(r1), 0, qr0
	lfd      f29, 0x10(r1)
	lwz      r0, 0x44(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
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
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 5
	lfs      f0, 0x18c(r31)
	mr       r3, r31
	stfs     f0, 0x2bc(r31)
	lfs      f0, 0x190(r31)
	stfs     f0, 0x2c0(r31)
	lfs      f0, 0x194(r31)
	stfs     f0, 0x2c4(r31)
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	mr       r3, r31
	bl       hardConstraintOn__Q24Game9EnemyBaseFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80367BA0
 * Size:	000120
 */
void StateEat::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	bl       getMotionFrame__Q24Game9EnemyBaseFv
	lfs      f0, lbl_8051E8F8@sda21(r2)
	mr       r3, r31
	fmuls    f1, f0, f1
	bl       revisionAnimPos__Q34Game6Jigumo3ObjFf
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_80367CA8
	lwz      r0, 0x1c(r3)
	cmpwi    r0, 8
	beq      lbl_80367C38
	bge      lbl_80367C08
	cmpwi    r0, 7
	bge      lbl_80367C2C
	cmpwi    r0, 2
	bge      lbl_80367C14
	b        lbl_80367CA8

lbl_80367C08:
	cmpwi    r0, 0x3e8
	beq      lbl_80367C54
	b        lbl_80367CA8

lbl_80367C14:
	lwz      r0, 0x280(r31)
	cmplwi   r0, 0
	beq      lbl_80367CA8
	mr       r3, r31
	bl       eatWaterEffect__Q34Game6Jigumo3ObjFv
	b        lbl_80367CA8

lbl_80367C2C:
	li       r0, 1
	stb      r0, 0x2e9(r31)
	b        lbl_80367CA8

lbl_80367C38:
	lfs      f1, lbl_8051E8FC@sda21(r2)
	mr       r3, r31
	li       r4, 0
	bl
"swallowPikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
	li       r0, 0
	stb      r0, 0x2e9(r31)
	b        lbl_80367CA8

lbl_80367C54:
	lfs      f1, lbl_8051E880@sda21(r2)
	lfs      f0, 0x200(r31)
	fcmpu    cr0, f1, f0
	bne      lbl_80367C88
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 3
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80367CA8

lbl_80367C88:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80367CA8:
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
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 0xd
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	mr       r3, r31
	li       r4, 0
	lwz      r12, 0(r31)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	li       r4, 0
	lwz      r12, 0(r31)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	li       r3, 0
	li       r0, -1
	stw      r3, 0x230(r31)
	stb      r3, 0x2e9(r31)
	stw      r0, 0x10(r30)
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
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 0xb
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	li       r0, 0
	mr       r3, r31
	stb      r0, 0x10(r30)
	stb      r0, 0x11(r30)
	bl       setEmotionExcitement__Q24Game9EnemyBaseFv
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
 * Address:	8036842C
 * Size:	000238
 */
void StateSAttack::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	bl       getMotionFrame__Q24Game9EnemyBaseFv
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x924(r3)
	fcmpu    cr0, f0, f1
	bne      lbl_80368498
	li       r0, 1
	mr       r3, r31
	stb      r0, 0x11(r30)
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

lbl_80368498:
	lbz      r0, 0x11(r30)
	cmplwi   r0, 0
	beq      lbl_803684E8
	mr       r3, r31
	li       r4, 0
	bl
"eatPikmin__Q24Game9EnemyFuncFPQ24Game9EnemyBaseP23Condition<Q24Game4Piki>"
	cmpwi    r3, 0
	beq      lbl_803684C0
	li       r0, 1
	stb      r0, 0x10(r30)

lbl_803684C0:
	lfs      f1, lbl_8051E914@sda21(r2)
	mr       r3, r31
	lwz      r6, 0xc0(r31)
	li       r4, 0
	lfs      f0, 0x1f8(r31)
	li       r5, 0
	lfs      f2, 0x5dc(r6)
	fmuls    f1, f1, f0
	lfs      f3, 0x604(r6)
	bl
"attackNavi__Q24Game9EnemyFuncFPQ24Game8CreaturefffP8CollPartP23Condition<Q24Game4Navi>"

lbl_803684E8:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_8036864C
	lwz      r0, 0x1c(r3)
	cmpwi    r0, 9
	beq      lbl_80368604
	bge      lbl_80368520
	cmpwi    r0, 3
	beq      lbl_80368584
	bge      lbl_803685EC
	cmpwi    r0, 2
	bge      lbl_80368538
	b        lbl_8036864C

lbl_80368520:
	cmpwi    r0, 0x3e8
	beq      lbl_8036862C
	bge      lbl_8036864C
	cmpwi    r0, 0xb
	bge      lbl_8036864C
	b        lbl_80368610

lbl_80368538:
	lwz      r0, 0x280(r31)
	cmplwi   r0, 0
	beq      lbl_80368564
	lwz      r3, 0x28c(r31)
	li       r4, 0x58d2
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	b        lbl_8036864C

lbl_80368564:
	lwz      r3, 0x28c(r31)
	li       r4, 0x58d1
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	b        lbl_8036864C

lbl_80368584:
	li       r0, 0
	mr       r3, r31
	stb      r0, 0x11(r30)
	li       r4, 0
	lwz      r12, 0(r31)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	li       r4, 0
	lwz      r12, 0(r31)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x10(r30)
	cmplwi   r0, 0
	bne      lbl_8036864C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0xc
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8036864C

lbl_803685EC:
	lwz      r0, 0x280(r31)
	cmplwi   r0, 0
	beq      lbl_8036864C
	mr       r3, r31
	bl       eatWaterEffect__Q34Game6Jigumo3ObjFv
	b        lbl_8036864C

lbl_80368604:
	li       r0, 1
	stb      r0, 0x2e9(r31)
	b        lbl_8036864C

lbl_80368610:
	lfs      f1, lbl_8051E8FC@sda21(r2)
	mr       r3, r31
	li       r4, 0
	bl
"swallowPikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
	li       r0, 0
	stb      r0, 0x2e9(r31)
	b        lbl_8036864C

lbl_8036862C:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0xa
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8036864C:
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
 * Address:	80368664
 * Size:	000024
 */
void StateSAttack::cleanup(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r4
	stw      r0, 0x14(r1)
	bl       setEmotionCaution__Q24Game9EnemyBaseFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

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
void StateSMiss::init(EnemyBase* enemy, StateArg* stateArg)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r4
	li       r4, 0xc
	stw      r0, 0x14(r1)
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803686F0
 * Size:	000050
 */
void StateSMiss::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r5, 0x188(r4)
	lbz      r0, 0x24(r5)
	cmplwi   r0, 0
	beq      lbl_80368730
	lwz      r0, 0x1c(r5)
	cmplwi   r0, 0x3e8
	bne      lbl_80368730
	lwz      r12, 0(r3)
	li       r5, 0xa
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80368730:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80368740
 * Size:	0000F0
 */
bool ConditionHeightCheckPiki::satisfy(Piki* p)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	mr       r29, r4
	stw      r28, 0x20(r1)
	mr       r28, r3
	mr       r3, r29
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8036880C
	mr       r3, r29
	lwz      r30, 4(r28)
	lwz      r12, 0(r29)
	li       r31, 0
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803687B8
	lwz      r0, 0xf4(r29)
	cmplw    r0, r30
	beq      lbl_803687B8
	mr       r3, r29
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_803687B8
	li       r31, 1

lbl_803687B8:
	clrlwi.  r0, r31, 0x18
	beq      lbl_8036880C
	mr       r4, r29
	addi     r3, r1, 8
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0xc(r1)
	lfs      f0, 0xc(r28)
	fcmpo    cr0, f1, f0
	ble      lbl_803687F0
	li       r3, 0
	b        lbl_80368810

lbl_803687F0:
	lfs      f0, 8(r28)
	fcmpo    cr0, f1, f0
	mfcr     r0
	srwi     r0, r0, 0x1f
	cntlzw   r0, r0
	srwi     r3, r0, 5
	b        lbl_80368810

lbl_8036880C:
	li       r3, 0

lbl_80368810:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}
} // namespace Jigumo
} // namespace Game

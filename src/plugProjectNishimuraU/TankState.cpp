#include "Game/Entities/Tank.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Tank {

void FSM::init(EnemyBase* enemy)
{
	create(TANK_Count);
	registerState(new StateDead);
	registerState(new StateWait);
	registerState(new StateMove);
	registerState(new StateMoveTurn);
	registerState(new StateChaseTurn);
	registerState(new StateAttack);
	registerState(new StateFlick);
}

/**
 * @note Address: 0x80274064
 * @note Size: 0x70
 */

void StateDead::init(EnemyBase* enemy, StateArg* Args)
{
	Obj* tank = OBJ(enemy);
	tank->finishEffect();
	tank->disableEvent(0, EB_Cullable);
	tank->mTargetVelocity = Vector3f(0.0f);
	tank->deathProcedure();
	tank->startMotion(TANKANIM_Dead, nullptr);
}

/**
 * @note Address: 0x802740D8
 * @note Size: 0x44
 */
void StateDead::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && (u32)enemy->mCurAnim->mType == KEYEVENT_END) {
		enemy->kill(nullptr);
	}
}

/**
 * @note Address: 0x8027411C
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase*) { }

/**
 * @note Address: 0x80274120
 * @note Size: 0x44
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tank             = OBJ(enemy);
	tank->mTargetVelocity = Vector3f(0.0f);
	tank->mTargetCreature = nullptr;
	tank->startMotion(TANKANIM_Wait, nullptr);
}

/**
 * @note Address: 0x80274164
 * @note Size: 0x258
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* tank = OBJ(enemy);
	f32 view  = tank->getViewAngle();
	if (tank->mHealth <= 0.0f) {
		transit(enemy, TANK_Dead, nullptr);
		return;
	}
	if (EnemyFunc::isStartFlick(tank, false) || tank->isAttackable(false)) {
		tank->setAnimSpeed(60.0f);
	}
	if (enemy->mCurAnim->mIsPlaying && (u32)enemy->mCurAnim->mType == KEYEVENT_END) {
		if (tank->mHealth <= 0.0f) {
			transit(enemy, TANK_Dead, nullptr);
			return;
		}
		if (EnemyFunc::isStartFlick(tank, false)) {
			transit(enemy, TANK_Flick, nullptr);
			return;
		}
		if (tank->isAttackable(false)) {
			transit(enemy, TANK_Attack, nullptr);
			return;
		}
		f32 sightRad     = CG_GENERALPARMS(tank).mSightRadius.mValue;
		Creature* target = EnemyFunc::getNearestPikminOrNavi(tank, view, sightRad, nullptr, nullptr, nullptr);
		if (target) {
			tank->mTargetCreature = target;
			tank->mCautionTimer   = 0.0f; // some target chase timer?
			transit(enemy, TANK_ChaseTurn, nullptr);
		} else if (randWeightFloat(1.0f) < 0.2f) {
			transit(enemy, TANK_Wait, nullptr);
		} else {
			transit(enemy, TANK_MoveTurn, nullptr);
		}
	}
}

/**
 * @note Address: 0x802743BC
 * @note Size: 0x28
 */
void StateWait::cleanup(EnemyBase* enemy)
{
	Obj* tank = OBJ(enemy);
	tank->setAnimSpeed(30.0f);
}

/**
 * @note Address: 0x802743E4
 * @note Size: 0x54
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tank             = OBJ(enemy);
	tank->mWalkTimer      = 0.0f;
	tank->mTargetCreature = nullptr;
	tank->startMotion(TANKANIM_Move, nullptr);
	tank->setAnimSpeed(60.0f);
}

/**
 * @note Address: 0x80274438
 * @note Size: 0x56C
 */
void StateMove::exec(EnemyBase* enemy)
{
	Obj* tank     = OBJ(enemy);
	f32 viewAngle = tank->getViewAngle();

	Vector3f pos       = tank->getPosition();
	Vector3f targetPos = Vector3f(tank->mGoalPosition);

	if (sqrDistanceXZ(pos, targetPos) > 2500.0f && tank->mWalkTimer < 3.0f) {
		EnemyFunc::walkToTarget(tank, targetPos, CG_GENERALPARMS(tank).mMoveSpeed(), CG_GENERALPARMS(tank).mTurnSpeed(),
		                        CG_GENERALPARMS(tank).mMaxTurnAngle());
	} else {
		tank->mTargetVelocity = Vector3f(0.0f);
		tank->finishMotion();
	}

	if (tank->mHealth <= 0.0f) {
		transit(tank, TANK_Dead, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(tank, false) || tank->isAttackable(false)) {
		tank->mTargetVelocity = Vector3f(0.0f);
		tank->finishMotion();
	} else {
		Creature* target
		    = EnemyFunc::getNearestPikminOrNavi(tank, viewAngle, CG_GENERALPARMS(tank).mSightRadius(), nullptr, nullptr, nullptr);
		if (target) {
			tank->mTargetCreature = target;
			tank->mCautionTimer   = 0.0f;
			tank->mTargetVelocity = Vector3f(0.0f);
			tank->finishMotion();
		}
	}

	tank->mWalkTimer += sys->mDeltaTime;

	if (tank->mCurAnim->mIsPlaying && tank->mCurAnim->mType == KEYEVENT_END) {
		if (tank->mHealth <= 0.0f) {
			transit(tank, TANK_Dead, nullptr);
			return;
		}

		if (EnemyFunc::isStartFlick(tank, false)) {
			transit(tank, TANK_Flick, nullptr);
			return;
		}

		if (tank->isAttackable(false)) {
			transit(tank, TANK_Attack, nullptr);
			return;
		}

		Creature* target = tank->mTargetCreature;
		if (target) {
			// f32 angleDist = tank->getAngDist(target); // f26

			if (tank->isTargetWithinRange(target, tank->getAngDist(target), CG_GENERALPARMS(tank).mPrivateRadius(),
			                              CG_GENERALPARMS(tank).mSightRadius(), CG_GENERALPARMS(tank).mFov(),
			                              viewAngle)) { // slightly different inline?
				transit(tank, TANK_Wait, nullptr);
				return;
			}

			transit(tank, TANK_ChaseTurn, nullptr);
			return;
		}

		transit(tank, TANK_Wait, nullptr);
	}

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
	stfd     f28, 0xf0(r1)
	psq_st   f28, 248(r1), 0, qr0
	stfd     f27, 0xe0(r1)
	psq_st   f27, 232(r1), 0, qr0
	stfd     f26, 0xd0(r1)
	psq_st   f26, 216(r1), 0, qr0
	stfd     f25, 0xc0(r1)
	psq_st   f25, 200(r1), 0, qr0
	stfd     f24, 0xb0(r1)
	psq_st   f24, 184(r1), 0, qr0
	stw      r31, 0xac(r1)
	stw      r30, 0xa8(r1)
	stw      r29, 0xa4(r1)
	mr       r31, r4
	mr       r30, r3
	mr       r3, r31
	bl       getViewAngle__Q34Game4Tank3ObjFv
	lwz      r12, 0(r31)
	fmr      f28, f1
	mr       r4, r31
	addi     r3, r1, 0x80
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x88(r1)
	lfs      f5, 0x300(r31)
	lfs      f2, 0x2f8(r31)
	fsubs    f1, f0, f5
	lfs      f0, 0x80(r1)
	lfs      f4, 0x2fc(r31)
	fsubs    f3, f0, f2
	lfs      f0, lbl_8051B2B4@sda21(r2)
	fmuls    f1, f1, f1
	stfs     f2, 0x8c(r1)
	fmadds   f1, f3, f3, f1
	stfs     f4, 0x90(r1)
	stfs     f5, 0x94(r1)
	fcmpo    cr0, f1, f0
	ble      lbl_80274528
	lfs      f1, 0x2f0(r31)
	lfs      f0, lbl_8051B2B8@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80274528
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	addi     r4, r1, 0x8c
	lfs      f1, 0x2e4(r5)
	lfs      f2, 0x30c(r5)
	lfs      f3, 0x334(r5)
	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff" b
lbl_80274540

lbl_80274528:
	lfs      f0, lbl_8051B290@sda21(r2)
	mr       r3, r31
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_80274540:
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051B290@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80274578
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80274948

lbl_80274578:
	mr       r3, r31
	li       r4, 0
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	bne      lbl_802745A0
	mr       r3, r31
	li       r4, 0
	bl       isAttackable__Q34Game4Tank3ObjFb
	clrlwi.  r0, r3, 0x18
	beq      lbl_802745BC

lbl_802745A0:
	lfs      f0, lbl_8051B290@sda21(r2)
	mr       r3, r31
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_80274604

lbl_802745BC:
	lwz      r5, 0xc0(r31)
	fmr      f1, f28
	mr       r3, r31
	li       r4, 0
	lfs      f2, 0x3d4(r5)
	li       r5, 0
	li       r6, 0
	bl
"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
	cmplwi   r3, 0
	beq      lbl_80274604
	stw      r3, 0x230(r31)
	mr       r3, r31
	lfs      f0, lbl_8051B290@sda21(r2)
	stfs     f0, 0x2ec(r31)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_80274604:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2f0(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2f0(r31)
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_80274948
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_80274948
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051B290@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8027466C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80274948

lbl_8027466C:
	mr       r3, r31
	li       r4, 0
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_802746A4
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 6
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80274948

lbl_802746A4:
	mr       r3, r31
	li       r4, 0
	bl       isAttackable__Q34Game4Tank3ObjFb
	clrlwi.  r0, r3, 0x18
	beq      lbl_802746DC
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 5
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80274948

lbl_802746DC:
	lwz      r29, 0x230(r31)
	cmplwi   r29, 0
	beq      lbl_80274928
	mr       r4, r29
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r29)
	addi     r3, r1, 0x20
	lfs      f29, 0x3fc(r5)
	lwz      r12, 8(r12)
	lfs      f30, 0x3d4(r5)
	lfs      f31, 0x3ac(r5)
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
	fmr      f24, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f24
	bl       angDist__Fff
	mr       r4, r31
	fmr      f26, f1
	lwz      r12, 0(r31)
	addi     r3, r1, 0x44
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x38
	lwz      r12, 0(r29)
	lfs      f27, 0x44(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x38(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x5c
	fsubs    f24, f0, f27
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x50
	lwz      r12, 0(r29)
	lfs      f27, 0x60(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x54(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x74
	fsubs    f25, f0, f27
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x68
	lwz      r12, 0(r29)
	lfs      f27, 0x7c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x70(r1)
	fmuls    f1, f31, f31
	fmuls    f2, f30, f30
	li       r3, 1
	fsubs    f0, f0, f27
	li       r4, 0
	fmuls    f0, f0, f0
	fmadds   f0, f24, f24, f0
	fcmpo    cr0, f0, f1
	ble      lbl_802748A0
	fcmpo    cr0, f0, f2
	mr       r0, r4
	ble      lbl_80274894
	fabs     f0, f25
	frsp     f0, f0
	fcmpo    cr0, f0, f29
	bge      lbl_80274894
	mr       r0, r3

lbl_80274894:
	clrlwi.  r0, r0, 0x18
	beq      lbl_802748A0
	li       r4, 1

lbl_802748A0:
	clrlwi.  r0, r4, 0x18
	bne      lbl_802748D8
	lfs      f0, lbl_8051B2C0@sda21(r2)
	fabs     f2, f26
	lfs      f1, lbl_8051B2BC@sda21(r2)
	fmuls    f0, f0, f28
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	mfcr     r0
	rlwinm.  r0, r0, 3, 0x1f, 0x1f
	beq      lbl_802748D8
	li       r3, 0

lbl_802748D8:
	clrlwi.  r0, r3, 0x18
	beq      lbl_80274904
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80274948

lbl_80274904:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 4
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80274948

lbl_80274928:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80274948:
	psq_l    f31, 296(r1), 0, qr0
	lfd      f31, 0x120(r1)
	psq_l    f30, 280(r1), 0, qr0
	lfd      f30, 0x110(r1)
	psq_l    f29, 264(r1), 0, qr0
	lfd      f29, 0x100(r1)
	psq_l    f28, 248(r1), 0, qr0
	lfd      f28, 0xf0(r1)
	psq_l    f27, 232(r1), 0, qr0
	lfd      f27, 0xe0(r1)
	psq_l    f26, 216(r1), 0, qr0
	lfd      f26, 0xd0(r1)
	psq_l    f25, 200(r1), 0, qr0
	lfd      f25, 0xc0(r1)
	psq_l    f24, 184(r1), 0, qr0
	lfd      f24, 0xb0(r1)
	lwz      r31, 0xac(r1)
	lwz      r30, 0xa8(r1)
	lwz      r0, 0x134(r1)
	lwz      r29, 0xa4(r1)
	mtlr     r0
	addi     r1, r1, 0x130
	blr
	*/
}

/**
 * @note Address: 0x802749A4
 * @note Size: 0x28
 */
void StateMove::cleanup(EnemyBase* enemy)
{
	Obj* tank = OBJ(enemy);
	tank->setAnimSpeed(30.0f);
}

/**
 * @note Address: 0x802749CC
 * @note Size: 0x104
 */
void StateMoveTurn::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tank = OBJ(enemy);
	tank->mTurnGoalDir += PI / 3;
	Vector3f homePos(tank->mHomePosition);
	tank->mGoalPosition   = Vector3f(CG_GENERALPARMS(tank).mTerritoryRadius() * sinf(tank->mTurnGoalDir) + homePos.x, homePos.y,
                                   CG_GENERALPARMS(tank).mTerritoryRadius() * cosf(tank->mTurnGoalDir) + homePos.z);
	tank->mTargetCreature = nullptr;
	tank->mTargetVelocity = Vector3f(0.0f);
	tank->startMotion(TANKANIM_Turn, nullptr);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lfs      f1, lbl_8051B2C4@sda21(r2)
	mr       r3, r4
	stw      r0, 0x24(r1)
	lfs      f0, lbl_8051B290@sda21(r2)
	lfs      f2, 0x2f4(r4)
	fadds    f1, f2, f1
	stfs     f1, 0x2f4(r4)
	lfs      f5, 0x2f4(r4)
	lfs      f6, 0x198(r4)
	fmr      f1, f5
	lfs      f7, 0x19c(r4)
	fcmpo    cr0, f5, f0
	lfs      f4, 0x1a0(r4)
	lwz      r6, 0xc0(r4)
	bge      lbl_80274A14
	fneg     f1, f5

lbl_80274A14:
	lfs      f2, lbl_8051B2C8@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	lfs      f0, lbl_8051B290@sda21(r2)
	addi     r5, r4, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	lfs      f3, 0x35c(r6)
	fcmpo    cr0, f5, f0
	fctiwz   f0, f1
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r4, r5, r0
	lfs      f0, 4(r4)
	fmadds   f4, f3, f0, f4
	bge      lbl_80274A74
	lfs      f0, lbl_8051B2CC@sda21(r2)
	fmuls    f0, f5, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r5, r0
	fneg     f0, f0
	b        lbl_80274A8C

lbl_80274A74:
	fmuls    f0, f5, f2
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r5, r0

lbl_80274A8C:
	fmadds   f1, f3, f0, f6
	li       r0, 0
	lfs      f0, lbl_8051B290@sda21(r2)
	li       r4, 4
	li       r5, 0
	stfs     f1, 0x2f8(r3)
	stfs     f7, 0x2fc(r3)
	stfs     f4, 0x300(r3)
	stw      r0, 0x230(r3)
	stfs     f0, 0x1d4(r3)
	stfs     f0, 0x1d8(r3)
	stfs     f0, 0x1dc(r3)
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x80274AD0
 * @note Size: 0x364
 */
void StateMoveTurn::exec(EnemyBase* enemy)
{
	Obj* tank          = OBJ(enemy);
	f32 view           = tank->getViewAngle();
	Vector3f targetPos = tank->mGoalPosition;
	f32 deltaDir       = tank->turnToTarget2(targetPos, CG_GENERALPARMS(tank).mTurnSpeed(), CG_GENERALPARMS(tank).mMaxTurnAngle());
	if (tank->mHealth <= 0.0f) {
		transit(enemy, TANK_Dead, nullptr);
		return;
	}
	if (EnemyFunc::isStartFlick(tank, false) || tank->isAttackable(false) || FABS(deltaDir) <= 10.0f * PI / 180) {
		tank->finishMotion();
		tank->setAnimSpeed(60.0f);
	} else {
		f32 sightRad     = CG_GENERALPARMS(tank).mSightRadius.mValue;
		Creature* target = EnemyFunc::getNearestPikminOrNavi(tank, view, sightRad, nullptr, nullptr, nullptr);
		if (target) {
			tank->finishMotion();
		}
	}
	if (enemy->mCurAnim->mIsPlaying && (u32)enemy->mCurAnim->mType == KEYEVENT_END) {
		if (tank->mHealth <= 0.0f) {
			transit(enemy, TANK_Dead, nullptr);
			return;
		}
		if (EnemyFunc::isStartFlick(tank, false)) {
			transit(enemy, TANK_Flick, nullptr);
			return;
		}
		if (tank->isAttackable(false)) {
			transit(enemy, TANK_Attack, nullptr);
			return;
		}
		f32 sightRad     = CG_GENERALPARMS(tank).mSightRadius.mValue;
		Creature* target = EnemyFunc::getNearestPikminOrNavi(tank, view, sightRad, nullptr, nullptr, nullptr);
		if (target) {
			tank->mTargetCreature = target;
			tank->mCautionTimer   = 0.0f; // some target chase timer?
			transit(enemy, TANK_ChaseTurn, nullptr);
		} else {
			transit(enemy, TANK_Move, nullptr);
		}
	}
}

/**
 * @note Address: 0x80274E34
 * @note Size: 0x28
 */
void StateMoveTurn::cleanup(EnemyBase* enemy)
{
	Obj* tank = OBJ(enemy);
	tank->setAnimSpeed(30.0f);
}

/**
 * @note Address: 0x80274E5C
 * @note Size: 0x50
 */
void StateChaseTurn::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tank             = OBJ(enemy);
	tank->mTargetVelocity = Vector3f(0.0f);
	tank->setEmotionExcitement();
	tank->startMotion(TANKANIM_Turn, nullptr);
}

/**
 * @note Address: 0x80274EAC
 * @note Size: 0x5F4
 */
void StateChaseTurn::exec(EnemyBase* enemy)
{
	Obj* tank     = OBJ(enemy);
	f32 viewAngle = tank->getViewAngle(); // f31

	if (tank->mHealth <= 0.0f) {
		transit(tank, TANK_Dead, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(tank, false) || tank->isAttackable(false)) {
		tank->finishMotion();
		tank->setAnimSpeed(60.0f);
	}

	Creature* target = tank->mTargetCreature;
	if (target) {
		tank->mCautionTimer = 0.0f;
		f32 angleDist       = tank->changeFaceDir2(target);
		if (target->isAlive()) {
			if (tank->isTargetWithinRange(target, angleDist, CG_GENERALPARMS(tank).mPrivateRadius(), CG_GENERALPARMS(tank).mSightRadius(),
			                              CG_GENERALPARMS(tank).mFov(), viewAngle)) {
				tank->mTargetCreature = nullptr;
				tank->finishMotion();
			}
		}
	} else {
		Vector3f targetPos = tank->mGoalPosition;
		f32 angleDist      = tank->changeFaceDir(targetPos);
		if (absF(angleDist) <= 10.0f * PI / 180) {
			tank->finishMotion();
		}
	}

	if (tank->mCurAnim->mIsPlaying && tank->mCurAnim->mType == KEYEVENT_END) {
		if (tank->mHealth <= 0.0f) {
			transit(tank, TANK_Dead, nullptr);
			return;
		}

		if (EnemyFunc::isStartFlick(tank, false)) {
			transit(tank, TANK_Flick, nullptr);
			return;
		}

		if (tank->isAttackable(false)) {
			transit(tank, TANK_Attack, nullptr);
			return;
		}

		Creature* target
		    = EnemyFunc::getNearestPikminOrNavi(tank, viewAngle, CG_GENERALPARMS(tank).mSightRadius(), nullptr, nullptr, nullptr);
		if (target) {
			tank->mTargetCreature = target;
			tank->mCautionTimer   = 0.0f;
			transit(tank, TANK_ChaseTurn, nullptr);
			return;
		}

		transit(tank, TANK_Wait, nullptr);
	}

	/*
	stwu     r1, -0x110(r1)
	mflr     r0
	stw      r0, 0x114(r1)
	stfd     f31, 0x100(r1)
	psq_st   f31, 264(r1), 0, qr0
	stfd     f30, 0xf0(r1)
	psq_st   f30, 248(r1), 0, qr0
	stfd     f29, 0xe0(r1)
	psq_st   f29, 232(r1), 0, qr0
	stfd     f28, 0xd0(r1)
	psq_st   f28, 216(r1), 0, qr0
	stfd     f27, 0xc0(r1)
	psq_st   f27, 200(r1), 0, qr0
	stfd     f26, 0xb0(r1)
	psq_st   f26, 184(r1), 0, qr0
	stfd     f25, 0xa0(r1)
	psq_st   f25, 168(r1), 0, qr0
	stfd     f24, 0x90(r1)
	psq_st   f24, 152(r1), 0, qr0
	stw      r31, 0x8c(r1)
	stw      r30, 0x88(r1)
	stw      r29, 0x84(r1)
	mr       r31, r4
	mr       r30, r3
	mr       r3, r31
	bl       getViewAngle__Q34Game4Tank3ObjFv
	lfs      f2, 0x200(r31)
	fmr      f31, f1
	lfs      f0, lbl_8051B290@sda21(r2)
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_80274F50
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80275444

lbl_80274F50:
	mr       r3, r31
	li       r4, 0
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	bne      lbl_80274F78
	mr       r3, r31
	li       r4, 0
	bl       isAttackable__Q34Game4Tank3ObjFb
	clrlwi.  r0, r3, 0x18
	beq      lbl_80274F8C

lbl_80274F78:
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv
	lfs      f1, lbl_8051B294@sda21(r2)
	mr       r3, r31
	bl       setAnimSpeed__Q24Game9EnemyBaseFf

lbl_80274F8C:
	lwz      r29, 0x230(r31)
	cmplwi   r29, 0
	beq      lbl_80275210
	lfs      f0, lbl_8051B290@sda21(r2)
	mr       r4, r29
	addi     r3, r1, 0x14
	stfs     f0, 0x2ec(r31)
	lwz      r12, 0(r29)
	lwz      r5, 0xc0(r31)
	lwz      r12, 8(r12)
	lfs      f28, 0x334(r5)
	lfs      f30, 0x30c(r5)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x20
	lwz      r12, 0(r31)
	lfs      f24, 0x14(r1)
	lwz      r12, 8(r12)
	lfs      f25, 0x1c(r1)
	mtctr    r12
	bctrl
	lfs      f1, 0x20(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x28(r1)
	addi     r3, r3, atanTable___5JMath@l
	fsubs    f1, f24, f1
	fsubs    f2, f25, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f24, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f24
	bl       angDist__Fff
	fmr      f29, f1
	lfs      f0, lbl_8051B2C0@sda21(r2)
	lfs      f1, lbl_8051B2BC@sda21(r2)
	fmuls    f0, f0, f28
	fmuls    f24, f29, f30
	fmuls    f1, f1, f0
	fabs     f0, f24
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80275068
	lfs      f0, lbl_8051B290@sda21(r2)
	fcmpo    cr0, f24, f0
	ble      lbl_80275064
	fmr      f24, f1
	b        lbl_80275068

lbl_80275064:
	fneg     f24, f1

lbl_80275068:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f24, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	mr       r3, r29
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	lwz      r12, 0(r29)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802751FC
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x38
	lfs      f24, 0x3fc(r5)
	lwz      r12, 8(r12)
	lfs      f25, 0x3d4(r5)
	lfs      f26, 0x3ac(r5)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x2c
	lwz      r12, 0(r29)
	lfs      f30, 0x38(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x2c(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x50
	fsubs    f27, f0, f30
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x44
	lwz      r12, 0(r29)
	lfs      f30, 0x54(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x48(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x68
	fsubs    f28, f0, f30
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x5c
	lwz      r12, 0(r29)
	lfs      f30, 0x70(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x64(r1)
	fmuls    f26, f26, f26
	fmuls    f25, f25, f25
	li       r3, 1
	fsubs    f0, f0, f30
	li       r4, 0
	fmuls    f0, f0, f0
	fmadds   f0, f27, f27, f0
	fcmpo    cr0, f0, f26
	ble      lbl_802751BC
	fcmpo    cr0, f0, f25
	mr       r0, r4
	ble      lbl_802751B0
	fabs     f0, f28
	frsp     f0, f0
	fcmpo    cr0, f0, f24
	bge      lbl_802751B0
	mr       r0, r3

lbl_802751B0:
	clrlwi.  r0, r0, 0x18
	beq      lbl_802751BC
	li       r4, 1

lbl_802751BC:
	clrlwi.  r0, r4, 0x18
	bne      lbl_802751F4
	lfs      f0, lbl_8051B2C0@sda21(r2)
	fabs     f2, f29
	lfs      f1, lbl_8051B2BC@sda21(r2)
	fmuls    f0, f0, f31
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	mfcr     r0
	rlwinm.  r0, r0, 3, 0x1f, 0x1f
	beq      lbl_802751F4
	li       r3, 0

lbl_802751F4:
	clrlwi.  r0, r3, 0x18
	beq      lbl_80275308

lbl_802751FC:
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x230(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_80275308

lbl_80275210:
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	addi     r3, r1, 8
	lfs      f26, 0x2f8(r31)
	lwz      r12, 8(r12)
	lfs      f27, 0x300(r31)
	lfs      f25, 0x334(r5)
	lfs      f24, 0x30c(r5)
	mtctr    r12
	bctrl
	lfs      f1, 8(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x10(r1)
	addi     r3, r3, atanTable___5JMath@l
	fsubs    f1, f26, f1
	fsubs    f2, f27, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f26, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f26
	bl       angDist__Fff
	fmr      f30, f1
	lfs      f0, lbl_8051B2C0@sda21(r2)
	lfs      f1, lbl_8051B2BC@sda21(r2)
	fmuls    f0, f0, f25
	fmuls    f24, f30, f24
	fmuls    f1, f1, f0
	fabs     f0, f24
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_802752C0
	lfs      f0, lbl_8051B290@sda21(r2)
	fcmpo    cr0, f24, f0
	ble      lbl_802752BC
	fmr      f24, f1
	b        lbl_802752C0

lbl_802752BC:
	fneg     f24, f1

lbl_802752C0:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f24, f1
	bl       roundAng__Ff
	fabs     f3, f30
	stfs     f1, 0x1fc(r31)
	lfs      f0, lbl_8051B2D0@sda21(r2)
	lfs      f2, 0x1fc(r31)
	frsp     f1, f3
	stfs     f2, 0x1a8(r31)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80275308
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_80275308:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_80275444
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_80275444
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051B290@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8027535C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80275444

lbl_8027535C:
	mr       r3, r31
	li       r4, 0
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_80275394
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 6
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80275444

lbl_80275394:
	mr       r3, r31
	li       r4, 0
	bl       isAttackable__Q34Game4Tank3ObjFb
	clrlwi.  r0, r3, 0x18
	beq      lbl_802753CC
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 5
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80275444

lbl_802753CC:
	lwz      r5, 0xc0(r31)
	fmr      f1, f31
	mr       r3, r31
	li       r4, 0
	lfs      f2, 0x3d4(r5)
	li       r5, 0
	li       r6, 0
	bl
"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
	cmplwi   r3, 0
	beq      lbl_80275424
	stw      r3, 0x230(r31)
	mr       r3, r30
	lfs      f0, lbl_8051B290@sda21(r2)
	mr       r4, r31
	li       r5, 4
	li       r6, 0
	stfs     f0, 0x2ec(r31)
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80275444

lbl_80275424:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80275444:
	psq_l    f31, 264(r1), 0, qr0
	lfd      f31, 0x100(r1)
	psq_l    f30, 248(r1), 0, qr0
	lfd      f30, 0xf0(r1)
	psq_l    f29, 232(r1), 0, qr0
	lfd      f29, 0xe0(r1)
	psq_l    f28, 216(r1), 0, qr0
	lfd      f28, 0xd0(r1)
	psq_l    f27, 200(r1), 0, qr0
	lfd      f27, 0xc0(r1)
	psq_l    f26, 184(r1), 0, qr0
	lfd      f26, 0xb0(r1)
	psq_l    f25, 168(r1), 0, qr0
	lfd      f25, 0xa0(r1)
	psq_l    f24, 152(r1), 0, qr0
	lfd      f24, 0x90(r1)
	lwz      r31, 0x8c(r1)
	lwz      r30, 0x88(r1)
	lwz      r0, 0x114(r1)
	lwz      r29, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x110
	blr
	*/
}

/**
 * @note Address: 0x802754A0
 * @note Size: 0x3C
 */
void StateChaseTurn::cleanup(EnemyBase* enemy)
{
	Obj* tank = OBJ(enemy);
	tank->setEmotionCaution();
	tank->setAnimSpeed(30.0f);
}

/**
 * @note Address: 0x802754DC
 * @note Size: 0x84
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tank           = OBJ(enemy);
	tank->mIsBlowing    = false;
	tank->mAttackTimer  = 0.0f;
	tank->mCautionTimer = 0.0f;
	tank->disableEvent(0, EB_Cullable);
	tank->mTargetCreature = nullptr;
	tank->mTargetVelocity = Vector3f(0.0f);
	tank->setEmotionExcitement();
	tank->startMotion(TANKANIM_Attack, nullptr);
	tank->createChargeSE();
}

/**
 * @note Address: 0x80275564
 * @note Size: 0x1E0
 */
void StateAttack::exec(EnemyBase* enemy)
{
	Obj* tank = OBJ(enemy);
	f32 view  = tank->getViewAngle();
	if (tank->mHealth <= 0.0f) {
		transit(enemy, TANK_Dead, nullptr);
		return;
	}
	if (tank->mIsBlowing) {
		tank->isAttackable(true);
		tank->createDisChargeSE();
	}
	if (!enemy->mCurAnim->mIsPlaying)
		return;

	if ((u32)enemy->mCurAnim->mType == KEYEVENT_2) {
		tank->mIsBlowing = true;
		tank->startEffect();
		return;
	}
	if ((u32)enemy->mCurAnim->mType == KEYEVENT_END) {
		if (tank->mHealth <= 0.0f) {
			transit(enemy, TANK_Dead, nullptr);
			return;
		}
		if (EnemyFunc::isStartFlick(tank, false)) {
			transit(enemy, TANK_Flick, nullptr);
			return;
		}
		f32 sightRad     = CG_GENERALPARMS(tank).mSightRadius.mValue;
		Creature* target = EnemyFunc::getNearestPikminOrNavi(tank, view, sightRad, nullptr, nullptr, nullptr);
		if (target) {
			tank->mTargetCreature = target;
			tank->mCautionTimer   = 0.0f;
			transit(enemy, TANK_ChaseTurn, nullptr);
			return;
		}
		transit(enemy, TANK_Wait, nullptr);
	}
}

/**
 * @note Address: 0x8027574C
 * @note Size: 0x58
 */
void StateAttack::cleanup(EnemyBase* enemy)
{
	Obj* tank = OBJ(enemy);
	tank->enableEvent(0, EB_Cullable);
	tank->mIsBlowing = false;
	tank->startYodare();
	tank->setEmotionCaution();
}

/**
 * @note Address: 0x802757A8
 * @note Size: 0x58
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tank             = OBJ(enemy);
	tank->mTargetCreature = nullptr;
	tank->mTargetVelocity = Vector3f(0.0f);
	tank->setEmotionExcitement();
	tank->startMotion(TANKANIM_Flick, nullptr);
}

/**
 * @note Address: 0x80275800
 * @note Size: 0x180
 */
void StateFlick::exec(EnemyBase* enemy)
{
	Obj* tank = OBJ(enemy);
	if (tank->mHealth <= 0.0f) {
		transit(enemy, TANK_Dead, nullptr);
		return;
	}
	if (!enemy->mCurAnim->mIsPlaying)
		return;

	if ((u32)enemy->mCurAnim->mType == KEYEVENT_2) {
		EnemyParmsBase* parms = CG_PARMS(tank);
		EnemyFunc::flickNearbyNavi(tank, parms->mGeneral.mShakeRange.mValue, parms->mGeneral.mShakeKnockback.mValue,
		                           parms->mGeneral.mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
		parms = CG_PARMS(tank);
		EnemyFunc::flickNearbyPikmin(tank, parms->mGeneral.mShakeRange.mValue, parms->mGeneral.mShakeKnockback.mValue,
		                             parms->mGeneral.mShakeDamage.mValue, tank->getFaceDir(), nullptr);
		parms = CG_PARMS(tank);
		EnemyFunc::flickStickPikmin(tank, parms->mGeneral.mShakeChance.mValue, parms->mGeneral.mShakeKnockback.mValue,
		                            parms->mGeneral.mShakeDamage.mValue, tank->getFaceDir(), nullptr);
		tank->mFlickTimer = 0.0f;
	}

	if ((u32)enemy->mCurAnim->mType == KEYEVENT_END) {
		if (tank->mHealth <= 0.0f) {
			transit(enemy, TANK_Dead, nullptr);
		} else {
			transit(enemy, TANK_Attack, nullptr);
		}
	}
}

/**
 * @note Address: 0x80275980
 * @note Size: 0x24
 */
void StateFlick::cleanup(EnemyBase* enemy)
{
	Obj* tank = OBJ(enemy);
	tank->setEmotionCaution();
}
} // namespace Tank
} // namespace Game

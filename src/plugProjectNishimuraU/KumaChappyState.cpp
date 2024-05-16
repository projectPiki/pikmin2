#include "Game/Entities/KumaChappy.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"

namespace Game {
namespace KumaChappy {

/**
 * @note Address: 0x80295E28
 * @note Size: 0x328
 */
void FSM::init(EnemyBase* enemy)
{
	create(KUMACHAPPY_StateCount);
	registerState(new StateDead);
	registerState(new StateRebirth);
	registerState(new StateLost);
	registerState(new StateAttack);
	registerState(new StateFlick);
	registerState(new StateTurn);
	registerState(new StateTurnPath);
	registerState(new StateWalk);
	registerState(new StateWalkPath);
}

/**
 * @note Address: 0x80296150
 * @note Size: 0x50
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->deathProcedure();
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->startMotion(KUMACHAPPYANIM_Dead, nullptr);
}

/**
 * @note Address: 0x802961A0
 * @note Size: 0x98
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* chappy = OBJ(enemy);
	if (chappy->mCurAnim->mIsPlaying) {
		if (chappy->mCurAnim->mType == KEYEVENT_2) {
			chappy->startEnemyRumble();
		} else if (chappy->mCurAnim->mType == KEYEVENT_END) {
			if (chappy->getEnemyTypeID() == EnemyTypeID::EnemyID_KumaChappy) {
				chappy->disableEvent(0, EB_DeathEffectEnabled);
			}

			chappy->kill(nullptr);
		}
	}
}

/**
 * @note Address: 0x80296240
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x80296244
 * @note Size: 0x58
 */
void StateRebirth::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* chappy        = OBJ(enemy);
	chappy->mNextState = KUMACHAPPY_NULL;
	chappy->disableEvent(0, EB_NoInterrupt);
	chappy->mTargetCreature = nullptr;
	chappy->mTargetVelocity = Vector3f(0.0f);
	chappy->startMotion(KUMACHAPPYANIM_Rebirth, nullptr);
}

/**
 * @note Address: 0x8029629C
 * @note Size: 0x5B0
 */
void StateRebirth::exec(EnemyBase* enemy)
{
	Obj* chappy = OBJ(enemy);
	if (chappy->mCurAnim->mIsPlaying) {
		if (chappy->mCurAnim->mType == KEYEVENT_2) {
			EnemyFunc::flickStickPikmin(chappy, CG_GENERALPARMS(chappy).mShakeChance(), CG_GENERALPARMS(chappy).mShakeKnockback(),
			                            CG_GENERALPARMS(chappy).mShakeDamage(), FLICK_BACKWARD_ANGLE, nullptr);
			EnemyFunc::flickNearbyPikmin(chappy, CG_GENERALPARMS(chappy).mShakeRange(), CG_GENERALPARMS(chappy).mShakeKnockback(),
			                             CG_GENERALPARMS(chappy).mShakeDamage(), FLICK_BACKWARD_ANGLE, nullptr);
			EnemyFunc::flickNearbyNavi(chappy, CG_GENERALPARMS(chappy).mShakeRange(), CG_GENERALPARMS(chappy).mShakeKnockback(),
			                           CG_GENERALPARMS(chappy).mShakeDamage(), FLICK_BACKWARD_ANGLE, nullptr);
			chappy->mFlickTimer = 0.0f;

		} else if (chappy->mCurAnim->mType == KEYEVENT_3) {
			chappy->enableEvent(0, EB_NoInterrupt);

		} else if (chappy->mCurAnim->mType == KEYEVENT_4) {
			chappy->disableEvent(0, EB_NoInterrupt);

		} else if (chappy->mCurAnim->mType == KEYEVENT_END) {
			if (chappy->mHealth <= 0.0f) {
				transit(chappy, KUMACHAPPY_Dead, nullptr);
				return;
			}

			if (EnemyFunc::isStartFlick(chappy, false)) {
				transit(chappy, KUMACHAPPY_Flick, nullptr);
				return;
			}

			Creature* target = chappy->getSearchedTarget();
			if (target) {
				f32 angleDist = chappy->getCreatureViewAngle(target);
				if (chappy->isTargetAttackable(target, chappy->getCreatureViewAngle(target), CG_GENERALPARMS(chappy).mMaxAttackRange(),
				                               CG_GENERALPARMS(chappy).mMaxAttackAngle())) {
					transit(chappy, KUMACHAPPY_Attack, nullptr);
					return;
				}

				if (absF(angleDist) <= TORADIANS(CG_GENERALPARMS(chappy).mMaxAttackAngle())) {
					transit(chappy, KUMACHAPPY_Walk, nullptr);
					return;
				}

				transit(chappy, KUMACHAPPY_Turn, nullptr);
				return;
			}
			Vector3f targetPos = chappy->mTargetPos;
			f32 angleDist      = chappy->getCreatureViewAngle(targetPos);
			if (absF(angleDist) <= (PI / 4)) {
				transit(chappy, KUMACHAPPY_WalkPath, nullptr);
				return;
			}

			transit(chappy, KUMACHAPPY_TurnPath, nullptr);
		}
	}
	/*
	stwu     r1, -0x150(r1)
	mflr     r0
	stw      r0, 0x154(r1)
	stfd     f31, 0x140(r1)
	psq_st   f31, 328(r1), 0, qr0
	stfd     f30, 0x130(r1)
	psq_st   f30, 312(r1), 0, qr0
	stfd     f29, 0x120(r1)
	psq_st   f29, 296(r1), 0, qr0
	stfd     f28, 0x110(r1)
	psq_st   f28, 280(r1), 0, qr0
	stfd     f27, 0x100(r1)
	psq_st   f27, 264(r1), 0, qr0
	stfd     f26, 0xf0(r1)
	psq_st   f26, 248(r1), 0, qr0
	stfd     f25, 0xe0(r1)
	psq_st   f25, 232(r1), 0, qr0
	stw      r31, 0xdc(r1)
	stw      r30, 0xd8(r1)
	stw      r29, 0xd4(r1)
	stw      r28, 0xd0(r1)
	lwz      r5, 0x188(r4)
	mr       r30, r3
	mr       r31, r4
	lbz      r0, 0x24(r5)
	cmplwi   r0, 0
	beq      lbl_802967F4
	lwz      r0, 0x1c(r5)
	cmplwi   r0, 2
	bne      lbl_80296380
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f4, lbl_8051BB1C@sda21(r2)
	li       r4, 0
	lfs      f1, 0x53c(r5)
	lfs      f2, 0x4c4(r5)
	lfs      f3, 0x4ec(r5)
	bl
"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f4, lbl_8051BB1C@sda21(r2)
	li       r4, 0
	lfs      f1, 0x514(r5)
	lfs      f2, 0x4c4(r5)
	lfs      f3, 0x4ec(r5)
	bl
"flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f4, lbl_8051BB1C@sda21(r2)
	li       r4, 0
	lfs      f1, 0x514(r5)
	lfs      f2, 0x4c4(r5)
	lfs      f3, 0x4ec(r5)
	bl
"flickNearbyNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Navi>"
	lfs      f0, lbl_8051BB18@sda21(r2)
	stfs     f0, 0x20c(r31)
	b        lbl_802967F4

lbl_80296380:
	cmplwi   r0, 3
	bne      lbl_80296398
	lwz      r0, 0x1e0(r31)
	oris     r0, r0, 0x20
	stw      r0, 0x1e0(r31)
	b        lbl_802967F4

lbl_80296398:
	cmplwi   r0, 4
	bne      lbl_802963B0
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0xb, 9
	stw      r0, 0x1e0(r31)
	b        lbl_802967F4

lbl_802963B0:
	cmplwi   r0, 0x3e8
	bne      lbl_802967F4
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051BB18@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802963E8
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802967F4

lbl_802963E8:
	mr       r3, r31
	li       r4, 0
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_80296420
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 4
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802967F4

lbl_80296420:
	mr       r3, r31
	bl       getSearchedTarget__Q34Game10KumaChappy3ObjFv
	or.      r28, r3, r3
	beq      lbl_80296724
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
	fmr      f25, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f25
	bl       angDist__Fff
	mr       r4, r28
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r28)
	fmr      f31, f1
	addi     r3, r1, 0x68
	lfs      f29, 0x58c(r5)
	lwz      r12, 8(r12)
	lfs      f30, 0x564(r5)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f2, 0x68(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x74
	lfs      f1, 0x6c(r1)
	lfs      f0, 0x70(r1)
	lwz      r12, 8(r12)
	stfs     f2, 0x50(r1)
	stfs     f1, 0x54(r1)
	stfs     f0, 0x58(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x74(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x7c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x50(r1)
	lfs      f0, 0x58(r1)
	lfs      f4, 0x78(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x5c(r1)
	stfs     f4, 0x60(r1)
	stfs     f3, 0x64(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f25, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f25
	bl       angDist__Fff
	mr       r4, r31
	fmr      f27, f1
	lwz      r12, 0(r31)
	addi     r3, r1, 0x14
	li       r29, 0
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 8
	lwz      r12, 0(r28)
	lfs      f28, 0x14(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 8(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x2c
	fsubs    f25, f0, f28
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x20
	lwz      r12, 0(r28)
	lfs      f28, 0x30(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x24(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x44
	fsubs    f26, f0, f28
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x38
	lwz      r12, 0(r28)
	lfs      f28, 0x4c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fmuls    f1, f26, f26
	lfs      f2, 0x40(r1)
	fmuls    f0, f30, f30
	fsubs    f2, f2, f28
	fmadds   f1, f25, f25, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80296684
	lfs      f0, lbl_8051BB24@sda21(r2)
	fabs     f2, f27
	lfs      f1, lbl_8051BB20@sda21(r2)
	fmuls    f0, f0, f29
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_80296684
	li       r29, 1

lbl_80296684:
	clrlwi.  r0, r29, 0x18
	beq      lbl_802966B0
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 3
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802967F4

lbl_802966B0:
	lwz      r3, 0xc0(r31)
	fabs     f2, f31
	lfs      f0, lbl_8051BB24@sda21(r2)
	lfs      f3, 0x58c(r3)
	lfs      f1, lbl_8051BB20@sda21(r2)
	frsp     f2, f2
	fmuls    f0, f0, f3
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_80296700
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 7
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802967F4

lbl_80296700:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 5
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802967F4

lbl_80296724:
	mr       r4, r31
	addi     r3, r1, 0x8c
	lwz      r12, 0(r31)
	lfs      f25, 0x2e0(r31)
	lwz      r12, 8(r12)
	lfs      f26, 0x2e8(r31)
	mtctr    r12
	bctrl
	lfs      f4, 0x8c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x94(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x90(r1)
	fsubs    f1, f25, f4
	fsubs    f2, f26, f0
	stfs     f4, 0x80(r1)
	stfs     f3, 0x84(r1)
	stfs     f0, 0x88(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f25, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f25
	bl       angDist__Fff
	fabs     f1, f1
	lfs      f0, lbl_8051BB28@sda21(r2)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802967D4
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 8
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802967F4

lbl_802967D4:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 6
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802967F4:
	psq_l    f31, 328(r1), 0, qr0
	lfd      f31, 0x140(r1)
	psq_l    f30, 312(r1), 0, qr0
	lfd      f30, 0x130(r1)
	psq_l    f29, 296(r1), 0, qr0
	lfd      f29, 0x120(r1)
	psq_l    f28, 280(r1), 0, qr0
	lfd      f28, 0x110(r1)
	psq_l    f27, 264(r1), 0, qr0
	lfd      f27, 0x100(r1)
	psq_l    f26, 248(r1), 0, qr0
	lfd      f26, 0xf0(r1)
	psq_l    f25, 232(r1), 0, qr0
	lfd      f25, 0xe0(r1)
	lwz      r31, 0xdc(r1)
	lwz      r30, 0xd8(r1)
	lwz      r29, 0xd4(r1)
	lwz      r0, 0x154(r1)
	lwz      r28, 0xd0(r1)
	mtlr     r0
	addi     r1, r1, 0x150
	blr
	*/
}

/**
 * @note Address: 0x8029684C
 * @note Size: 0x10
 */
void StateRebirth::cleanup(EnemyBase* enemy) { enemy->disableEvent(0, EB_NoInterrupt); }

/**
 * @note Address: 0x8029685C
 * @note Size: 0x4C
 */
void StateLost::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* chappy             = OBJ(enemy);
	chappy->mNextState      = KUMACHAPPY_NULL;
	chappy->mTargetCreature = nullptr;
	chappy->mTargetVelocity = Vector3f(0.0f);
	chappy->startMotion(KUMACHAPPYANIM_Lost, nullptr);
}

/**
 * @note Address: 0x802968A8
 * @note Size: 0x45C
 */
void StateLost::exec(EnemyBase* enemy)
{
	Obj* chappy = OBJ(enemy);
	if (chappy->mCurAnim->mIsPlaying && chappy->mCurAnim->mType == KEYEVENT_END) {
		if (chappy->mHealth <= 0.0f) {
			transit(chappy, KUMACHAPPY_Dead, nullptr);
			return;
		}

		if (EnemyFunc::isStartFlick(chappy, false)) {
			transit(chappy, KUMACHAPPY_Flick, nullptr);
			return;
		}

		Creature* target = chappy->getSearchedTarget();
		if (target) {
			f32 angleSep = chappy->getCreatureViewAngle(target);
			if (chappy->isTargetAttackable(target, angleSep, CG_GENERALPARMS(chappy).mMaxAttackRange(),
			                               CG_GENERALPARMS(chappy).mMaxAttackAngle())) {
				transit(chappy, KUMACHAPPY_Attack, nullptr);
				return;
			}

			if (absF(angleSep) <= TORADIANS(CG_GENERALPARMS(chappy).mMaxAttackAngle())) {
				transit(chappy, KUMACHAPPY_Walk, nullptr);
				return;
			}

			transit(chappy, KUMACHAPPY_Turn, nullptr);
			return;
		}

		chappy->setNearestWayPoint();
		Vector3f targetPos = chappy->mTargetPos;
		f32 angleSep       = chappy->getCreatureViewAngle(targetPos);
		if (absF(angleSep) <= (PI / 4)) {
			transit(chappy, KUMACHAPPY_WalkPath, nullptr);
			return;
		}

		transit(chappy, KUMACHAPPY_TurnPath, nullptr);
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
	stw      r31, 0xac(r1)
	stw      r30, 0xa8(r1)
	stw      r29, 0xa4(r1)
	stw      r28, 0xa0(r1)
	lwz      r5, 0x188(r4)
	mr       r28, r3
	mr       r30, r4
	lbz      r0, 0x24(r5)
	cmplwi   r0, 0
	beq      lbl_80296CB4
	lwz      r0, 0x1c(r5)
	cmplwi   r0, 0x3e8
	bne      lbl_80296CB4
	lfs      f1, 0x200(r30)
	lfs      f0, lbl_8051BB18@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80296948
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80296CB4

lbl_80296948:
	mr       r3, r30
	li       r4, 0
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_80296980
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	li       r5, 4
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80296CB4

lbl_80296980:
	mr       r3, r30
	bl       getSearchedTarget__Q34Game10KumaChappy3ObjFv
	or.      r29, r3, r3
	beq      lbl_80296BDC
	mr       r4, r29
	addi     r3, r1, 0x80
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f2, 0x80(r1)
	lwz      r12, 0(r30)
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
	lwz      r12, 0(r30)
	fmr      f26, f1
	mr       r3, r30
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f26
	bl       angDist__Fff
	mr       r4, r30
	lwz      r5, 0xc0(r30)
	lwz      r12, 0(r30)
	fmr      f30, f1
	addi     r3, r1, 0x14
	lfs      f28, 0x58c(r5)
	lwz      r12, 8(r12)
	li       r31, 0
	lfs      f29, 0x564(r5)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 8
	lwz      r12, 0(r29)
	lfs      f31, 0x14(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f0, 8(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x2c
	fsubs    f26, f0, f31
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x20
	lwz      r12, 0(r29)
	lfs      f31, 0x30(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f0, 0x24(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x44
	fsubs    f27, f0, f31
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x38
	lwz      r12, 0(r29)
	lfs      f31, 0x4c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fmuls    f1, f27, f27
	lfs      f2, 0x40(r1)
	fmuls    f0, f29, f29
	fsubs    f2, f2, f31
	fmadds   f1, f26, f26, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80296B3C
	lfs      f0, lbl_8051BB24@sda21(r2)
	fabs     f2, f30
	lfs      f1, lbl_8051BB20@sda21(r2)
	fmuls    f0, f0, f28
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_80296B3C
	li       r31, 1

lbl_80296B3C:
	clrlwi.  r0, r31, 0x18
	beq      lbl_80296B68
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	li       r5, 3
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80296CB4

lbl_80296B68:
	lwz      r3, 0xc0(r30)
	fabs     f2, f30
	lfs      f0, lbl_8051BB24@sda21(r2)
	lfs      f3, 0x58c(r3)
	lfs      f1, lbl_8051BB20@sda21(r2)
	frsp     f2, f2
	fmuls    f0, f0, f3
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_80296BB8
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	li       r5, 7
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80296CB4

lbl_80296BB8:
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	li       r5, 5
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80296CB4

lbl_80296BDC:
	mr       r3, r30
	bl       setNearestWayPoint__Q34Game10KumaChappy3ObjFv
	mr       r4, r30
	addi     r3, r1, 0x5c
	lwz      r12, 0(r30)
	lfs      f26, 0x2e0(r30)
	lwz      r12, 8(r12)
	lfs      f27, 0x2e8(r30)
	mtctr    r12
	bctrl
	lfs      f4, 0x5c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x64(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x60(r1)
	fsubs    f1, f26, f4
	fsubs    f2, f27, f0
	stfs     f4, 0x50(r1)
	stfs     f3, 0x54(r1)
	stfs     f0, 0x58(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r30)
	fmr      f26, f1
	mr       r3, r30
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f26
	bl       angDist__Fff
	fabs     f1, f1
	lfs      f0, lbl_8051BB28@sda21(r2)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80296C94
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	li       r5, 8
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80296CB4

lbl_80296C94:
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	li       r5, 6
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80296CB4:
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
	lwz      r31, 0xac(r1)
	lwz      r30, 0xa8(r1)
	lwz      r29, 0xa4(r1)
	lwz      r0, 0x114(r1)
	lwz      r28, 0xa0(r1)
	mtlr     r0
	addi     r1, r1, 0x110
	blr
	*/
}

/**
 * @note Address: 0x80296D04
 * @note Size: 0x4
 */
void StateLost::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x80296D08
 * @note Size: 0x58
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* chappy             = OBJ(enemy);
	chappy->mNextState      = KUMACHAPPY_NULL;
	chappy->mTargetVelocity = Vector3f(0.0f);
	chappy->setEmotionExcitement();
	chappy->startMotion(KUMACHAPPYANIM_Attack, nullptr);
}

/**
 * @note Address: 0x80296D60
 * @note Size: 0x550
 */
void StateAttack::exec(EnemyBase* enemy)
{
	Obj* chappy = OBJ(enemy);
	if (chappy->mCurAnim->mIsPlaying) {
		if (chappy->mCurAnim->mType == KEYEVENT_2) {
			if (chappy->getCurrAnimIndex() == KUMACHAPPYANIM_Attack) {
				int naviCheck
				    = EnemyFunc::attackNavi(chappy, CG_GENERALPARMS(chappy).mAttackRadius(), CG_GENERALPARMS(chappy).mAttackHitAngle(),
				                            CG_GENERALPARMS(chappy).mAttackDamage(), nullptr, nullptr);
				int eatCheck = naviCheck + EnemyFunc::eatPikmin(chappy, nullptr);

				EnemyFunc::flickStickPikmin(chappy, CG_GENERALPARMS(chappy).mShakeChance(), CG_GENERALPARMS(chappy).mShakeKnockback(),
				                            CG_GENERALPARMS(chappy).mShakeDamage(), chappy->getFaceDir(), nullptr);
				if (eatCheck != 0) {
					return;
				}

				chappy->startMotion(KUMACHAPPYANIM_Eat, nullptr);
				return;
			}

			chappy->startEnemyRumble();

		} else if (chappy->mCurAnim->mType == KEYEVENT_3) {
			EnemyFunc::swallowPikmin(chappy, CG_PROPERPARMS(chappy).mPoisonDamage(), nullptr);
			if (chappy->mHealth <= 0.0f) {
				chappy->setAnimSpeed(60.0f);
			}

		} else if (chappy->mCurAnim->mType == KEYEVENT_END) {
			if (chappy->mHealth <= 0.0f) {
				transit(chappy, KUMACHAPPY_Dead, nullptr);
				return;
			}

			if (EnemyFunc::isStartFlick(chappy, false)) {
				transit(chappy, KUMACHAPPY_Flick, nullptr);
				return;
			}

			Creature* target = chappy->getSearchedTarget();
			if (target) {
				f32 angleSep = chappy->getCreatureViewAngle(target);
				if (chappy->isTargetAttackable(target, angleSep, CG_GENERALPARMS(chappy).mMaxAttackRange(),
				                               CG_GENERALPARMS(chappy).mMaxAttackAngle())) {
					transit(chappy, KUMACHAPPY_Attack, nullptr);
					return;
				}

				if (absF(angleSep) <= TORADIANS(CG_GENERALPARMS(chappy).mMaxAttackAngle())) {
					transit(chappy, KUMACHAPPY_Walk, nullptr);
					return;
				}

				transit(chappy, KUMACHAPPY_Turn, nullptr);
				return;
			}

			chappy->setNearestWayPoint();
			Vector3f targetPos = chappy->mTargetPos;
			f32 angleSep       = chappy->getCreatureViewAngle(targetPos);
			if (absF(angleSep) <= (PI / 4)) {
				transit(chappy, KUMACHAPPY_WalkPath, nullptr);
				return;
			}

			transit(chappy, KUMACHAPPY_TurnPath, nullptr);
		}
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
	stw      r31, 0xac(r1)
	stw      r30, 0xa8(r1)
	stw      r29, 0xa4(r1)
	stw      r28, 0xa0(r1)
	lwz      r5, 0x188(r4)
	mr       r28, r3
	mr       r31, r4
	lbz      r0, 0x24(r5)
	cmplwi   r0, 0
	beq      lbl_80297260
	lwz      r0, 0x1c(r5)
	cmplwi   r0, 2
	bne      lbl_80296E7C
	mr       r3, r31
	bl       getCurrAnimIndex__Q24Game9EnemyBaseFv
	cmpwi    r3, 0
	bne      lbl_80296E64
	lwz      r6, 0xc0(r31)
	mr       r3, r31
	li       r4, 0
	li       r5, 0
	lfs      f1, 0x5b4(r6)
	lfs      f2, 0x5dc(r6)
	lfs      f3, 0x604(r6)
	bl
"attackNavi__Q24Game9EnemyFuncFPQ24Game8CreaturefffP8CollPartP23Condition<Q24Game4Navi>"
	mr       r30, r3
	mr       r3, r31
	li       r4, 0
	bl
"eatPikmin__Q24Game9EnemyFuncFPQ24Game9EnemyBaseP23Condition<Q24Game4Piki>" add
r29, r30, r3 mr       r3, r31 lwz      r12, 0(r31) lwz      r30, 0xc0(r31) lwz
r12, 0x64(r12) mtctr    r12 bctrl fmr      f4, f1 lfs      f1, 0x53c(r30) lfs
f2, 0x4c4(r30) mr       r3, r31 lfs      f3, 0x4ec(r30) li       r4, 0 bl
"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	cmpwi    r29, 0
	bne      lbl_80297260
	mr       r3, r31
	li       r4, 7
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	b        lbl_80297260

lbl_80296E64:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x304(r12)
	mtctr    r12
	bctrl
	b        lbl_80297260

lbl_80296E7C:
	cmplwi   r0, 3
	bne      lbl_80296EBC
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	li       r4, 0
	lfs      f1, 0x81c(r5)
	bl
"swallowPikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051BB18@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80297260
	lfs      f1, lbl_8051BB2C@sda21(r2)
	mr       r3, r31
	bl       setAnimSpeed__Q24Game9EnemyBaseFf
	b        lbl_80297260

lbl_80296EBC:
	cmplwi   r0, 0x3e8
	bne      lbl_80297260
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051BB18@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80296EF4
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80297260

lbl_80296EF4:
	mr       r3, r31
	li       r4, 0
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_80296F2C
	mr       r3, r28
	mr       r4, r31
	lwz      r12, 0(r28)
	li       r5, 4
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80297260

lbl_80296F2C:
	mr       r3, r31
	bl       getSearchedTarget__Q34Game10KumaChappy3ObjFv
	or.      r29, r3, r3
	beq      lbl_80297188
	mr       r4, r29
	addi     r3, r1, 0x80
	lwz      r12, 0(r29)
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
	fmr      f26, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f26
	bl       angDist__Fff
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	fmr      f30, f1
	addi     r3, r1, 0x14
	lfs      f28, 0x58c(r5)
	lwz      r12, 8(r12)
	li       r30, 0
	lfs      f29, 0x564(r5)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 8
	lwz      r12, 0(r29)
	lfs      f31, 0x14(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 8(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x2c
	fsubs    f26, f0, f31
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x20
	lwz      r12, 0(r29)
	lfs      f31, 0x30(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x24(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x44
	fsubs    f27, f0, f31
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x38
	lwz      r12, 0(r29)
	lfs      f31, 0x4c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fmuls    f1, f27, f27
	lfs      f2, 0x40(r1)
	fmuls    f0, f29, f29
	fsubs    f2, f2, f31
	fmadds   f1, f26, f26, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802970E8
	lfs      f0, lbl_8051BB24@sda21(r2)
	fabs     f2, f30
	lfs      f1, lbl_8051BB20@sda21(r2)
	fmuls    f0, f0, f28
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_802970E8
	li       r30, 1

lbl_802970E8:
	clrlwi.  r0, r30, 0x18
	beq      lbl_80297114
	mr       r3, r28
	mr       r4, r31
	lwz      r12, 0(r28)
	li       r5, 3
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80297260

lbl_80297114:
	lwz      r3, 0xc0(r31)
	fabs     f2, f30
	lfs      f0, lbl_8051BB24@sda21(r2)
	lfs      f3, 0x58c(r3)
	lfs      f1, lbl_8051BB20@sda21(r2)
	frsp     f2, f2
	fmuls    f0, f0, f3
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_80297164
	mr       r3, r28
	mr       r4, r31
	lwz      r12, 0(r28)
	li       r5, 7
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80297260

lbl_80297164:
	mr       r3, r28
	mr       r4, r31
	lwz      r12, 0(r28)
	li       r5, 5
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80297260

lbl_80297188:
	mr       r3, r31
	bl       setNearestWayPoint__Q34Game10KumaChappy3ObjFv
	mr       r4, r31
	addi     r3, r1, 0x5c
	lwz      r12, 0(r31)
	lfs      f26, 0x2e0(r31)
	lwz      r12, 8(r12)
	lfs      f27, 0x2e8(r31)
	mtctr    r12
	bctrl
	lfs      f4, 0x5c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x64(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x60(r1)
	fsubs    f1, f26, f4
	fsubs    f2, f27, f0
	stfs     f4, 0x50(r1)
	stfs     f3, 0x54(r1)
	stfs     f0, 0x58(r1)
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
	fabs     f1, f1
	lfs      f0, lbl_8051BB28@sda21(r2)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80297240
	mr       r3, r28
	mr       r4, r31
	lwz      r12, 0(r28)
	li       r5, 8
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80297260

lbl_80297240:
	mr       r3, r28
	mr       r4, r31
	lwz      r12, 0(r28)
	li       r5, 6
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80297260:
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
	lwz      r31, 0xac(r1)
	lwz      r30, 0xa8(r1)
	lwz      r29, 0xa4(r1)
	lwz      r0, 0x114(r1)
	lwz      r28, 0xa0(r1)
	mtlr     r0
	addi     r1, r1, 0x110
	blr
	*/
}

/**
 * @note Address: 0x802972B0
 * @note Size: 0x3C
 */
void StateAttack::cleanup(EnemyBase* enemy)
{
	enemy->setEmotionCaution();
	enemy->setAnimSpeed(30.0f);
}

/**
 * @note Address: 0x802972EC
 * @note Size: 0x64
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* chappy        = OBJ(enemy);
	chappy->mNextState = KUMACHAPPY_NULL;
	chappy->setEmotionExcitement();
	chappy->mTargetVelocity = Vector3f(0.0f);
	chappy->startMotion(KUMACHAPPYANIM_Flick, nullptr);
	chappy->setAnimSpeed(45.0f);
}

/**
 * @note Address: 0x80297350
 * @note Size: 0x4D4
 */
void StateFlick::exec(EnemyBase* enemy)
{
	Obj* chappy = OBJ(enemy);
	if (chappy->mCurAnim->mIsPlaying) {
		if (chappy->mCurAnim->mType == KEYEVENT_2) {
			EnemyFunc::flickStickPikmin(chappy, CG_GENERALPARMS(chappy).mShakeChance(), CG_GENERALPARMS(chappy).mShakeKnockback(),
			                            CG_GENERALPARMS(chappy).mShakeDamage(), chappy->getFaceDir(), nullptr);
			EnemyFunc::flickNearbyPikmin(chappy, CG_GENERALPARMS(chappy).mShakeRange(), CG_GENERALPARMS(chappy).mShakeKnockback(),
			                             CG_GENERALPARMS(chappy).mShakeDamage(), chappy->getFaceDir(), nullptr);
			EnemyFunc::flickNearbyNavi(chappy, CG_GENERALPARMS(chappy).mShakeRange(), CG_GENERALPARMS(chappy).mShakeKnockback(),
			                           CG_GENERALPARMS(chappy).mShakeDamage(), chappy->getFaceDir(), nullptr);
			chappy->mFlickTimer = 0.0f;

		} else if (chappy->mCurAnim->mType == KEYEVENT_END) {
			if (chappy->mHealth <= 0.0f) {
				transit(chappy, KUMACHAPPY_Dead, nullptr);
				return;
			}

			Creature* target = chappy->getSearchedTarget();
			if (target) {
				f32 angleSep = chappy->getCreatureViewAngle(target);
				if (chappy->isTargetAttackable(target, angleSep, CG_GENERALPARMS(chappy).mMaxAttackRange(),
				                               CG_GENERALPARMS(chappy).mMaxAttackAngle())) {
					transit(chappy, KUMACHAPPY_Attack, nullptr);
					return;
				}

				if (absF(angleSep) <= TORADIANS(CG_GENERALPARMS(chappy).mMaxAttackAngle())) {
					transit(chappy, KUMACHAPPY_Walk, nullptr);
					return;
				}

				transit(chappy, KUMACHAPPY_Turn, nullptr);
				return;
			}

			chappy->setNearestWayPoint();
			Vector3f targetPos = chappy->mTargetPos;
			f32 angleSep       = chappy->getCreatureViewAngle(targetPos);
			if (absF(angleSep) <= (PI / 4)) {
				transit(chappy, KUMACHAPPY_WalkPath, nullptr);
				return;
			}

			transit(chappy, KUMACHAPPY_TurnPath, nullptr);
		}
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
	stw      r31, 0xac(r1)
	stw      r30, 0xa8(r1)
	stw      r29, 0xa4(r1)
	stw      r28, 0xa0(r1)
	lwz      r5, 0x188(r4)
	mr       r28, r3
	mr       r30, r4
	lbz      r0, 0x24(r5)
	cmplwi   r0, 0
	beq      lbl_802977D4
	lwz      r0, 0x1c(r5)
	cmplwi   r0, 2
	bne      lbl_80297468
	mr       r3, r30
	lwz      r31, 0xc0(r30)
	lwz      r12, 0(r30)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f4, f1
	lfs      f1, 0x53c(r31)
	lfs      f2, 0x4c4(r31)
	mr       r3, r30
	lfs      f3, 0x4ec(r31)
	li       r4, 0
	bl
"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	mr       r3, r30
	lwz      r31, 0xc0(r30)
	lwz      r12, 0(r30)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f4, f1
	lfs      f1, 0x514(r31)
	lfs      f2, 0x4c4(r31)
	mr       r3, r30
	lfs      f3, 0x4ec(r31)
	li       r4, 0
	bl
"flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	mr       r3, r30
	lwz      r31, 0xc0(r30)
	lwz      r12, 0(r30)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f4, f1
	lfs      f1, 0x514(r31)
	lfs      f2, 0x4c4(r31)
	mr       r3, r30
	lfs      f3, 0x4ec(r31)
	li       r4, 0
	bl
"flickNearbyNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Navi>"
	lfs      f0, lbl_8051BB18@sda21(r2)
	stfs     f0, 0x20c(r30)
	b        lbl_802977D4

lbl_80297468:
	cmplwi   r0, 0x3e8
	bne      lbl_802977D4
	lfs      f1, 0x200(r30)
	lfs      f0, lbl_8051BB18@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802974A0
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802977D4

lbl_802974A0:
	mr       r3, r30
	bl       getSearchedTarget__Q34Game10KumaChappy3ObjFv
	or.      r29, r3, r3
	beq      lbl_802976FC
	mr       r4, r29
	addi     r3, r1, 0x80
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f2, 0x80(r1)
	lwz      r12, 0(r30)
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
	lwz      r12, 0(r30)
	fmr      f26, f1
	mr       r3, r30
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f26
	bl       angDist__Fff
	mr       r4, r30
	lwz      r5, 0xc0(r30)
	lwz      r12, 0(r30)
	fmr      f30, f1
	addi     r3, r1, 0x14
	lfs      f28, 0x58c(r5)
	lwz      r12, 8(r12)
	li       r31, 0
	lfs      f29, 0x564(r5)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 8
	lwz      r12, 0(r29)
	lfs      f31, 0x14(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f0, 8(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x2c
	fsubs    f26, f0, f31
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x20
	lwz      r12, 0(r29)
	lfs      f31, 0x30(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f0, 0x24(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x44
	fsubs    f27, f0, f31
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x38
	lwz      r12, 0(r29)
	lfs      f31, 0x4c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fmuls    f1, f27, f27
	lfs      f2, 0x40(r1)
	fmuls    f0, f29, f29
	fsubs    f2, f2, f31
	fmadds   f1, f26, f26, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8029765C
	lfs      f0, lbl_8051BB24@sda21(r2)
	fabs     f2, f30
	lfs      f1, lbl_8051BB20@sda21(r2)
	fmuls    f0, f0, f28
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_8029765C
	li       r31, 1

lbl_8029765C:
	clrlwi.  r0, r31, 0x18
	beq      lbl_80297688
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	li       r5, 3
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802977D4

lbl_80297688:
	lwz      r3, 0xc0(r30)
	fabs     f2, f30
	lfs      f0, lbl_8051BB24@sda21(r2)
	lfs      f3, 0x58c(r3)
	lfs      f1, lbl_8051BB20@sda21(r2)
	frsp     f2, f2
	fmuls    f0, f0, f3
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_802976D8
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	li       r5, 7
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802977D4

lbl_802976D8:
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	li       r5, 5
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802977D4

lbl_802976FC:
	mr       r3, r30
	bl       setNearestWayPoint__Q34Game10KumaChappy3ObjFv
	mr       r4, r30
	addi     r3, r1, 0x5c
	lwz      r12, 0(r30)
	lfs      f26, 0x2e0(r30)
	lwz      r12, 8(r12)
	lfs      f27, 0x2e8(r30)
	mtctr    r12
	bctrl
	lfs      f4, 0x5c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x64(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x60(r1)
	fsubs    f1, f26, f4
	fsubs    f2, f27, f0
	stfs     f4, 0x50(r1)
	stfs     f3, 0x54(r1)
	stfs     f0, 0x58(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r30)
	fmr      f26, f1
	mr       r3, r30
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f26
	bl       angDist__Fff
	fabs     f1, f1
	lfs      f0, lbl_8051BB28@sda21(r2)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802977B4
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	li       r5, 8
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802977D4

lbl_802977B4:
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	li       r5, 6
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802977D4:
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
	lwz      r31, 0xac(r1)
	lwz      r30, 0xa8(r1)
	lwz      r29, 0xa4(r1)
	lwz      r0, 0x114(r1)
	lwz      r28, 0xa0(r1)
	mtlr     r0
	addi     r1, r1, 0x110
	blr
	*/
}

/**
 * @note Address: 0x80297824
 * @note Size: 0x3C
 */
void StateFlick::cleanup(EnemyBase* enemy)
{
	enemy->setAnimSpeed(30.0f);
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x80297860
 * @note Size: 0x60
 */
void StateTurn::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* chappy        = OBJ(enemy);
	chappy->mTimer     = 0.0f;
	chappy->mNextState = KUMACHAPPY_NULL;
	chappy->setEmotionExcitement();
	chappy->mTargetVelocity = Vector3f(0.0f);
	chappy->startMotion(KUMACHAPPYANIM_Turn, nullptr);
}

/**
 * @note Address: 0x802978C0
 * @note Size: 0x670
 */
void StateTurn::exec(EnemyBase* enemy)
{
	Obj* chappy = OBJ(enemy);
	if (chappy->mHealth <= 0.0f) {
		chappy->mNextState = KUMACHAPPY_Dead;
		chappy->finishMotion();
		chappy->setAnimSpeed(60.0f);
	} else if (EnemyFunc::isStartFlick(chappy, false)) {
		chappy->mNextState = KUMACHAPPY_Flick;
		chappy->finishMotion();
		chappy->setAnimSpeed(60.0f);
	} else {
		Creature* target = chappy->getSearchedTarget();
		if (target) {
			f32 angleSep = chappy->changeFaceDir2(target);
			if (chappy->isTargetAttackable(target, angleSep, CG_GENERALPARMS(chappy).mMaxAttackRange(),
			                               CG_GENERALPARMS(chappy).mMaxAttackAngle())) {
				chappy->mNextState = KUMACHAPPY_Attack;
				chappy->finishMotion();
				chappy->setAnimSpeed(60.0f);

			} else if (chappy->isTargetWithinRange(target, angleSep, CG_GENERALPARMS(chappy).mPrivateRadius(),
			                                       CG_GENERALPARMS(chappy).mSightRadius(), CG_GENERALPARMS(chappy).mFov(),
			                                       chappy->getViewAngle())) {
				chappy->mNextState = KUMACHAPPY_Lost;
				chappy->finishMotion();
			} else if (absF(angleSep) <= TORADIANS(CG_GENERALPARMS(chappy).mMaxAttackAngle())) {
				chappy->mNextState = KUMACHAPPY_Walk;
				chappy->finishMotion();
			}
		} else {
			chappy->setNearestWayPoint();
			Vector3f targetPos = chappy->mTargetPos;
			f32 angleSep = chappy->turnToTarget(targetPos, CG_GENERALPARMS(chappy).mTurnSpeed(), CG_GENERALPARMS(chappy).mMaxTurnAngle());
			if (absF(angleSep) <= (PI / 4)) {
				chappy->mNextState = KUMACHAPPY_WalkPath;
				chappy->finishMotion();
			} else {
				chappy->mNextState = KUMACHAPPY_TurnPath;
				chappy->finishMotion();
			}
		}
	}

	if (chappy->mCurAnim->mIsPlaying && chappy->mCurAnim->mType == KEYEVENT_END) {
		transit(chappy, chappy->mNextState, nullptr);
	}
	/*
	stwu     r1, -0x160(r1)
	mflr     r0
	stw      r0, 0x164(r1)
	stfd     f31, 0x150(r1)
	psq_st   f31, 344(r1), 0, qr0
	stfd     f30, 0x140(r1)
	psq_st   f30, 328(r1), 0, qr0
	stfd     f29, 0x130(r1)
	psq_st   f29, 312(r1), 0, qr0
	stfd     f28, 0x120(r1)
	psq_st   f28, 296(r1), 0, qr0
	stfd     f27, 0x110(r1)
	psq_st   f27, 280(r1), 0, qr0
	stfd     f26, 0x100(r1)
	psq_st   f26, 264(r1), 0, qr0
	stfd     f25, 0xf0(r1)
	psq_st   f25, 248(r1), 0, qr0
	stfd     f24, 0xe0(r1)
	psq_st   f24, 232(r1), 0, qr0
	stw      r31, 0xdc(r1)
	stw      r30, 0xd8(r1)
	stw      r29, 0xd4(r1)
	stw      r28, 0xd0(r1)
	lfs      f0, lbl_8051BB18@sda21(r2)
	mr       r31, r4
	lfs      f1, 0x200(r4)
	mr       r30, r3
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80297958
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	lfs      f1, lbl_8051BB2C@sda21(r2)
	mr       r3, r31
	bl       setAnimSpeed__Q24Game9EnemyBaseFf
	b        lbl_80297E94

lbl_80297958:
	mr       r3, r31
	li       r4, 0
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_8029798C
	li       r0, 4
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	lfs      f1, lbl_8051BB2C@sda21(r2)
	mr       r3, r31
	bl       setAnimSpeed__Q24Game9EnemyBaseFf
	b        lbl_80297E94

lbl_8029798C:
	mr       r3, r31
	bl       getSearchedTarget__Q34Game10KumaChappy3ObjFv
	or.      r28, r3, r3
	beq      lbl_80297D68
	mr       r4, r28
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r28)
	addi     r3, r1, 0x68
	lfs      f30, 0x334(r5)
	lwz      r12, 8(r12)
	lfs      f29, 0x30c(r5)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x74
	lwz      r12, 0(r31)
	lfs      f24, 0x68(r1)
	lwz      r12, 8(r12)
	lfs      f25, 0x70(r1)
	mtctr    r12
	bctrl
	lfs      f1, 0x74(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x7c(r1)
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
	fmr      f31, f1
	lfs      f0, lbl_8051BB24@sda21(r2)
	lfs      f1, lbl_8051BB20@sda21(r2)
	fmuls    f0, f0, f30
	fmuls    f24, f31, f29
	fmuls    f1, f1, f0
	fabs     f0, f24
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80297A64
	lfs      f0, lbl_8051BB18@sda21(r2)
	fcmpo    cr0, f24, f0
	ble      lbl_80297A60
	fmr      f24, f1
	b        lbl_80297A64

lbl_80297A60:
	fneg     f24, f1

lbl_80297A64:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f24, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	mr       r4, r31
	addi     r3, r1, 0x2c
	li       r29, 0
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	lwz      r12, 0(r31)
	lwz      r5, 0xc0(r31)
	lwz      r12, 8(r12)
	lfs      f28, 0x58c(r5)
	lfs      f30, 0x564(r5)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x20
	lwz      r12, 0(r28)
	lfs      f29, 0x2c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x20(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x44
	fsubs    f25, f0, f29
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x38
	lwz      r12, 0(r28)
	lfs      f29, 0x48(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x3c(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x5c
	fsubs    f24, f0, f29
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x50
	lwz      r12, 0(r28)
	lfs      f29, 0x64(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fmuls    f1, f24, f24
	lfs      f2, 0x58(r1)
	fmuls    f0, f30, f30
	fsubs    f2, f2, f29
	fmadds   f1, f25, f25, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80297B90
	lfs      f0, lbl_8051BB24@sda21(r2)
	fabs     f2, f31
	lfs      f1, lbl_8051BB20@sda21(r2)
	fmuls    f0, f0, f28
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_80297B90
	li       r29, 1

lbl_80297B90:
	clrlwi.  r0, r29, 0x18
	beq      lbl_80297BB8
	li       r0, 3
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	lfs      f1, lbl_8051BB2C@sda21(r2)
	mr       r3, r31
	bl       setAnimSpeed__Q24Game9EnemyBaseFf
	b        lbl_80297E94

lbl_80297BB8:
	mr       r3, r31
	bl       getViewAngle__Q34Game10KumaChappy3ObjFv
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	fmr      f29, f1
	addi     r3, r1, 0x8c
	lfs      f24, 0x3fc(r5)
	lwz      r12, 8(r12)
	lfs      f25, 0x3d4(r5)
	lfs      f26, 0x3ac(r5)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x80
	lwz      r12, 0(r28)
	lfs      f30, 0x8c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x80(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0xa4
	fsubs    f27, f0, f30
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x98
	lwz      r12, 0(r28)
	lfs      f30, 0xa8(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x9c(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0xbc
	fsubs    f28, f0, f30
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0xb0
	lwz      r12, 0(r28)
	lfs      f30, 0xc4(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0xb8(r1)
	fmuls    f26, f26, f26
	fmuls    f25, f25, f25
	li       r3, 1
	fsubs    f0, f0, f30
	li       r4, 0
	fmuls    f0, f0, f0
	fmadds   f0, f27, f27, f0
	fcmpo    cr0, f0, f26
	ble      lbl_80297CD4
	fcmpo    cr0, f0, f25
	mr       r0, r4
	ble      lbl_80297CC8
	fabs     f0, f28
	frsp     f0, f0
	fcmpo    cr0, f0, f24
	bge      lbl_80297CC8
	mr       r0, r3

lbl_80297CC8:
	clrlwi.  r0, r0, 0x18
	beq      lbl_80297CD4
	li       r4, 1

lbl_80297CD4:
	clrlwi.  r0, r4, 0x18
	bne      lbl_80297D0C
	lfs      f0, lbl_8051BB24@sda21(r2)
	fabs     f2, f31
	lfs      f1, lbl_8051BB20@sda21(r2)
	fmuls    f0, f0, f29
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	mfcr     r0
	rlwinm.  r0, r0, 3, 0x1f, 0x1f
	beq      lbl_80297D0C
	li       r3, 0

lbl_80297D0C:
	clrlwi.  r0, r3, 0x18
	beq      lbl_80297D28
	li       r0, 2
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_80297E94

lbl_80297D28:
	lwz      r3, 0xc0(r31)
	fabs     f2, f31
	lfs      f0, lbl_8051BB24@sda21(r2)
	lfs      f3, 0x58c(r3)
	lfs      f1, lbl_8051BB20@sda21(r2)
	frsp     f2, f2
	fmuls    f0, f0, f3
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_80297E94
	li       r0, 7
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_80297E94

lbl_80297D68:
	mr       r3, r31
	bl       setNearestWayPoint__Q34Game10KumaChappy3ObjFv
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x14
	lfs      f26, 0x2e0(r31)
	lwz      r12, 8(r12)
	lfs      f27, 0x2e8(r31)
	lfs      f25, 0x334(r5)
	lfs      f24, 0x30c(r5)
	mtctr    r12
	bctrl
	lfs      f4, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x18(r1)
	fsubs    f1, f26, f4
	fsubs    f2, f27, f0
	stfs     f4, 8(r1)
	stfs     f3, 0xc(r1)
	stfs     f0, 0x10(r1)
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
	fmr      f31, f1
	lfs      f0, lbl_8051BB24@sda21(r2)
	lfs      f1, lbl_8051BB20@sda21(r2)
	fmuls    f0, f0, f25
	fmuls    f24, f31, f24
	fmuls    f1, f1, f0
	fabs     f0, f24
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80297E30
	lfs      f0, lbl_8051BB18@sda21(r2)
	fcmpo    cr0, f24, f0
	ble      lbl_80297E2C
	fmr      f24, f1
	b        lbl_80297E30

lbl_80297E2C:
	fneg     f24, f1

lbl_80297E30:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f24, f1
	bl       roundAng__Ff
	fabs     f3, f31
	stfs     f1, 0x1fc(r31)
	lfs      f0, lbl_8051BB28@sda21(r2)
	lfs      f2, 0x1fc(r31)
	frsp     f1, f3
	stfs     f2, 0x1a8(r31)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80297E84
	li       r0, 8
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_80297E94

lbl_80297E84:
	li       r0, 6
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_80297E94:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_80297ED0
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_80297ED0
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2d4(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80297ED0:
	psq_l    f31, 344(r1), 0, qr0
	lfd      f31, 0x150(r1)
	psq_l    f30, 328(r1), 0, qr0
	lfd      f30, 0x140(r1)
	psq_l    f29, 312(r1), 0, qr0
	lfd      f29, 0x130(r1)
	psq_l    f28, 296(r1), 0, qr0
	lfd      f28, 0x120(r1)
	psq_l    f27, 280(r1), 0, qr0
	lfd      f27, 0x110(r1)
	psq_l    f26, 264(r1), 0, qr0
	lfd      f26, 0x100(r1)
	psq_l    f25, 248(r1), 0, qr0
	lfd      f25, 0xf0(r1)
	psq_l    f24, 232(r1), 0, qr0
	lfd      f24, 0xe0(r1)
	lwz      r31, 0xdc(r1)
	lwz      r30, 0xd8(r1)
	lwz      r29, 0xd4(r1)
	lwz      r0, 0x164(r1)
	lwz      r28, 0xd0(r1)
	mtlr     r0
	addi     r1, r1, 0x160
	blr
	*/
}

/**
 * @note Address: 0x80297F30
 * @note Size: 0x3C
 */
void StateTurn::cleanup(EnemyBase* enemy)
{
	enemy->setAnimSpeed(30.0f);
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x80297F6C
 * @note Size: 0x44
 */
void StateTurnPath::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* chappy             = OBJ(enemy);
	chappy->mNextState      = KUMACHAPPY_NULL;
	chappy->mTargetVelocity = Vector3f(0.0f);
	chappy->startMotion(KUMACHAPPYANIM_Turn, nullptr);
}

/**
 * @note Address: 0x80297FB0
 * @note Size: 0x4E0
 */
void StateTurnPath::exec(EnemyBase* enemy)
{
	Obj* chappy = OBJ(enemy);
	chappy->updateHomePosition();
	if (chappy->mHealth <= 0.0f) {
		chappy->mNextState = KUMACHAPPY_Dead;
		chappy->finishMotion();
		chappy->setAnimSpeed(60.0f);
	} else if (EnemyFunc::isStartFlick(chappy, false)) {
		chappy->mNextState = KUMACHAPPY_Flick;
		chappy->finishMotion();
		chappy->setAnimSpeed(60.0f);
	} else {
		Creature* target = chappy->getSearchedTarget();
		if (target) {
			f32 angleSep = chappy->changeFaceDir2(target);
			if (chappy->isTargetAttackable(target, angleSep, CG_GENERALPARMS(chappy).mMaxAttackRange(),
			                               CG_GENERALPARMS(chappy).mMaxAttackAngle())) {
				chappy->mNextState = KUMACHAPPY_Attack;
				chappy->finishMotion();
				chappy->setAnimSpeed(60.0f);

			} else if (absF(angleSep) <= TORADIANS(CG_GENERALPARMS(chappy).mMaxAttackAngle())) {
				chappy->mNextState = KUMACHAPPY_Walk;
				chappy->finishMotion();
			} else {
				chappy->mNextState = KUMACHAPPY_Turn;
				chappy->finishMotion();
			}
		} else {
			Vector3f targetPos = chappy->mTargetPos;
			f32 angleSep = chappy->turnToTarget(targetPos, CG_GENERALPARMS(chappy).mTurnSpeed(), CG_GENERALPARMS(chappy).mMaxTurnAngle());
			if (absF(angleSep) <= (PI / 4)) {
				chappy->mNextState = KUMACHAPPY_WalkPath;
				chappy->finishMotion();
			}
		}
	}

	if (chappy->mCurAnim->mIsPlaying && chappy->mCurAnim->mType == KEYEVENT_END) {
		transit(chappy, chappy->mNextState, nullptr);
	}
	/*
	stwu     r1, -0xf0(r1)
	mflr     r0
	stw      r0, 0xf4(r1)
	stfd     f31, 0xe0(r1)
	psq_st   f31, 232(r1), 0, qr0
	stfd     f30, 0xd0(r1)
	psq_st   f30, 216(r1), 0, qr0
	stfd     f29, 0xc0(r1)
	psq_st   f29, 200(r1), 0, qr0
	stfd     f28, 0xb0(r1)
	psq_st   f28, 184(r1), 0, qr0
	stfd     f27, 0xa0(r1)
	psq_st   f27, 168(r1), 0, qr0
	stfd     f26, 0x90(r1)
	psq_st   f26, 152(r1), 0, qr0
	stw      r31, 0x8c(r1)
	stw      r30, 0x88(r1)
	stw      r29, 0x84(r1)
	stw      r28, 0x80(r1)
	mr       r31, r4
	mr       r30, r3
	mr       r3, r31
	bl       updateHomePosition__Q34Game10KumaChappy3ObjFv
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051BB18@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80298040
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	lfs      f1, lbl_8051BB2C@sda21(r2)
	mr       r3, r31
	bl       setAnimSpeed__Q24Game9EnemyBaseFf
	b        lbl_80298404

lbl_80298040:
	mr       r3, r31
	li       r4, 0
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_80298074
	li       r0, 4
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	lfs      f1, lbl_8051BB2C@sda21(r2)
	mr       r3, r31
	bl       setAnimSpeed__Q24Game9EnemyBaseFf
	b        lbl_80298404

lbl_80298074:
	mr       r3, r31
	bl       getSearchedTarget__Q34Game10KumaChappy3ObjFv
	or.      r28, r3, r3
	beq      lbl_802982F4
	mr       r4, r28
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r28)
	addi     r3, r1, 0x68
	lfs      f29, 0x334(r5)
	lwz      r12, 8(r12)
	lfs      f30, 0x30c(r5)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x74
	lwz      r12, 0(r31)
	lfs      f26, 0x68(r1)
	lwz      r12, 8(r12)
	lfs      f27, 0x70(r1)
	mtctr    r12
	bctrl
	lfs      f1, 0x74(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x7c(r1)
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
	fmr      f31, f1
	lfs      f0, lbl_8051BB24@sda21(r2)
	lfs      f1, lbl_8051BB20@sda21(r2)
	fmuls    f0, f0, f29
	fmuls    f28, f31, f30
	fmuls    f1, f1, f0
	fabs     f0, f28
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8029814C
	lfs      f0, lbl_8051BB18@sda21(r2)
	fcmpo    cr0, f28, f0
	ble      lbl_80298148
	fmr      f28, f1
	b        lbl_8029814C

lbl_80298148:
	fneg     f28, f1

lbl_8029814C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f28, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	mr       r4, r31
	addi     r3, r1, 0x2c
	li       r29, 0
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	lwz      r12, 0(r31)
	lwz      r5, 0xc0(r31)
	lwz      r12, 8(r12)
	lfs      f28, 0x58c(r5)
	lfs      f29, 0x564(r5)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x20
	lwz      r12, 0(r28)
	lfs      f30, 0x2c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x20(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x44
	fsubs    f26, f0, f30
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x38
	lwz      r12, 0(r28)
	lfs      f30, 0x48(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x3c(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x5c
	fsubs    f27, f0, f30
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x50
	lwz      r12, 0(r28)
	lfs      f30, 0x64(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fmuls    f1, f27, f27
	lfs      f2, 0x58(r1)
	fmuls    f0, f29, f29
	fsubs    f2, f2, f30
	fmadds   f1, f26, f26, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80298278
	lfs      f0, lbl_8051BB24@sda21(r2)
	fabs     f2, f31
	lfs      f1, lbl_8051BB20@sda21(r2)
	fmuls    f0, f0, f28
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_80298278
	li       r29, 1

lbl_80298278:
	clrlwi.  r0, r29, 0x18
	beq      lbl_802982A0
	li       r0, 3
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	lfs      f1, lbl_8051BB2C@sda21(r2)
	mr       r3, r31
	bl       setAnimSpeed__Q24Game9EnemyBaseFf
	b        lbl_80298404

lbl_802982A0:
	lwz      r3, 0xc0(r31)
	fabs     f2, f31
	lfs      f0, lbl_8051BB24@sda21(r2)
	lfs      f3, 0x58c(r3)
	lfs      f1, lbl_8051BB20@sda21(r2)
	frsp     f2, f2
	fmuls    f0, f0, f3
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_802982E0
	li       r0, 7
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_80298404

lbl_802982E0:
	li       r0, 5
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_80298404

lbl_802982F4:
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x14
	lfs      f26, 0x2e0(r31)
	lwz      r12, 8(r12)
	lfs      f27, 0x2e8(r31)
	lfs      f29, 0x334(r5)
	lfs      f28, 0x30c(r5)
	mtctr    r12
	bctrl
	lfs      f4, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x18(r1)
	fsubs    f1, f26, f4
	fsubs    f2, f27, f0
	stfs     f4, 8(r1)
	stfs     f3, 0xc(r1)
	stfs     f0, 0x10(r1)
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
	fmr      f31, f1
	lfs      f0, lbl_8051BB24@sda21(r2)
	lfs      f1, lbl_8051BB20@sda21(r2)
	fmuls    f0, f0, f29
	fmuls    f26, f31, f28
	fmuls    f1, f1, f0
	fabs     f0, f26
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_802983B4
	lfs      f0, lbl_8051BB18@sda21(r2)
	fcmpo    cr0, f26, f0
	ble      lbl_802983B0
	fmr      f26, f1
	b        lbl_802983B4

lbl_802983B0:
	fneg     f26, f1

lbl_802983B4:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f26, f1
	bl       roundAng__Ff
	fabs     f3, f31
	stfs     f1, 0x1fc(r31)
	lfs      f0, lbl_8051BB28@sda21(r2)
	lfs      f2, 0x1fc(r31)
	frsp     f1, f3
	stfs     f2, 0x1a8(r31)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80298404
	li       r0, 8
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_80298404:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_80298440
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_80298440
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2d4(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80298440:
	psq_l    f31, 232(r1), 0, qr0
	lfd      f31, 0xe0(r1)
	psq_l    f30, 216(r1), 0, qr0
	lfd      f30, 0xd0(r1)
	psq_l    f29, 200(r1), 0, qr0
	lfd      f29, 0xc0(r1)
	psq_l    f28, 184(r1), 0, qr0
	lfd      f28, 0xb0(r1)
	psq_l    f27, 168(r1), 0, qr0
	lfd      f27, 0xa0(r1)
	psq_l    f26, 152(r1), 0, qr0
	lfd      f26, 0x90(r1)
	lwz      r31, 0x8c(r1)
	lwz      r30, 0x88(r1)
	lwz      r29, 0x84(r1)
	lwz      r0, 0xf4(r1)
	lwz      r28, 0x80(r1)
	mtlr     r0
	addi     r1, r1, 0xf0
	blr
	*/
}

/**
 * @note Address: 0x80298490
 * @note Size: 0x28
 */
void StateTurnPath::cleanup(EnemyBase* enemy) { enemy->setAnimSpeed(30.0f); }

/**
 * @note Address: 0x802984B8
 * @note Size: 0x50
 */
void StateWalk::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* chappy        = OBJ(enemy);
	chappy->mTimer     = 0.0f;
	chappy->mNextState = KUMACHAPPY_NULL;
	chappy->setEmotionExcitement();
	chappy->startMotion(KUMACHAPPYANIM_Move, nullptr);
}

/**
 * @note Address: 0x80298508
 * @note Size: 0x70C
 */
void StateWalk::exec(EnemyBase* enemy)
{
	Obj* chappy      = OBJ(enemy);
	f32 turnSpeed    = CG_GENERALPARMS(chappy).mTurnSpeed();    // f30
	f32 maxTurnAngle = CG_GENERALPARMS(chappy).mMaxTurnAngle(); // f29
	if (chappy->isFinishMotion()) {
		turnSpeed    = 0.01f;
		maxTurnAngle = 1.0f;
	}
	if (chappy->mHealth <= 0.0f) {
		chappy->mNextState = KUMACHAPPY_Dead;
		chappy->finishMotion();
		chappy->setAnimSpeed(60.0f);
	} else if (EnemyFunc::isStartFlick(chappy, false)) {
		chappy->mNextState = KUMACHAPPY_Flick;
		chappy->finishMotion();
		chappy->setAnimSpeed(60.0f);
	} else {
		Creature* target = chappy->getSearchedTarget();
		if (target) {
			f32 angleSep = chappy->turnToTarget(target, turnSpeed, maxTurnAngle);
			if (chappy->isTargetAttackable(target, angleSep, CG_GENERALPARMS(chappy).mMaxAttackRange(),
			                               CG_GENERALPARMS(chappy).mMaxAttackAngle())) {
				chappy->mNextState = KUMACHAPPY_Attack;
				chappy->finishMotion();
				chappy->setAnimSpeed(60.0f);

			} else if (chappy->isTargetWithinRange(target, angleSep, CG_GENERALPARMS(chappy).mPrivateRadius(),
			                                       CG_GENERALPARMS(chappy).mSightRadius(), CG_GENERALPARMS(chappy).mFov(),
			                                       chappy->getViewAngle())) {
				chappy->mNextState = KUMACHAPPY_Lost;
				chappy->finishMotion();
			} else if (!(absF(angleSep) <= TORADIANS(CG_GENERALPARMS(chappy).mMaxAttackAngle()))) {
				chappy->mNextState = KUMACHAPPY_Turn;
				chappy->finishMotion();
			}
		} else {
			chappy->setNearestWayPoint();
			Vector3f targetPos = chappy->mTargetPos;
			f32 angleSep       = chappy->turnToTarget(targetPos, turnSpeed, maxTurnAngle);
			if (absF(angleSep) <= (PI / 4)) {
				chappy->mNextState = KUMACHAPPY_WalkPath;
				chappy->finishMotion();
			} else {
				chappy->mNextState = KUMACHAPPY_TurnPath;
				chappy->finishMotion();
			}
		}
	}

	if (chappy->isFinishMotion()) {
		chappy->mTargetVelocity = Vector3f(0.0f);
	} else {
		f32 moveSpeed = CG_GENERALPARMS(chappy).mMoveSpeed();
		f32 x         = sin(chappy->getFaceDir());
		f32 y         = chappy->getTargetVelocity().y;
		f32 z         = cos(chappy->getFaceDir());

		chappy->mTargetVelocity = Vector3f(moveSpeed * x, y, moveSpeed * z);
	}

	if (chappy->mCurAnim->mIsPlaying && chappy->mCurAnim->mType == KEYEVENT_END) {
		transit(chappy, chappy->mNextState, nullptr);
	}
	/*
	stwu     r1, -0x170(r1)
	mflr     r0
	stw      r0, 0x174(r1)
	stfd     f31, 0x160(r1)
	psq_st   f31, 360(r1), 0, qr0
	stfd     f30, 0x150(r1)
	psq_st   f30, 344(r1), 0, qr0
	stfd     f29, 0x140(r1)
	psq_st   f29, 328(r1), 0, qr0
	stfd     f28, 0x130(r1)
	psq_st   f28, 312(r1), 0, qr0
	stfd     f27, 0x120(r1)
	psq_st   f27, 296(r1), 0, qr0
	stfd     f26, 0x110(r1)
	psq_st   f26, 280(r1), 0, qr0
	stfd     f25, 0x100(r1)
	psq_st   f25, 264(r1), 0, qr0
	stfd     f24, 0xf0(r1)
	psq_st   f24, 248(r1), 0, qr0
	stw      r31, 0xec(r1)
	stw      r30, 0xe8(r1)
	stw      r29, 0xe4(r1)
	stw      r28, 0xe0(r1)
	mr       r31, r4
	lwz      r4, 0xc0(r4)
	mr       r30, r3
	lfs      f30, 0x30c(r4)
	mr       r3, r31
	lfs      f29, 0x334(r4)
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80298590
	lfs      f30, lbl_8051BB38@sda21(r2)
	lfs      f29, lbl_8051BB3C@sda21(r2)

lbl_80298590:
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051BB18@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802985C4
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	lfs      f1, lbl_8051BB2C@sda21(r2)
	mr       r3, r31
	bl       setAnimSpeed__Q24Game9EnemyBaseFf
	b        lbl_80298AE8

lbl_802985C4:
	mr       r3, r31
	li       r4, 0
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_802985F8
	li       r0, 4
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	lfs      f1, lbl_8051BB2C@sda21(r2)
	mr       r3, r31
	bl       setAnimSpeed__Q24Game9EnemyBaseFf
	b        lbl_80298AE8

lbl_802985F8:
	mr       r3, r31
	bl       getSearchedTarget__Q34Game10KumaChappy3ObjFv
	or.      r28, r3, r3
	beq      lbl_802989C8
	mr       r4, r28
	addi     r3, r1, 0x68
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x74
	lwz      r12, 0(r31)
	lfs      f24, 0x68(r1)
	lwz      r12, 8(r12)
	lfs      f25, 0x70(r1)
	mtctr    r12
	bctrl
	lfs      f1, 0x74(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x7c(r1)
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
	fmr      f31, f1
	lfs      f0, lbl_8051BB24@sda21(r2)
	lfs      f1, lbl_8051BB20@sda21(r2)
	fmuls    f0, f0, f29
	fmuls    f24, f31, f30
	fmuls    f1, f1, f0
	fabs     f0, f24
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_802986C4
	lfs      f0, lbl_8051BB18@sda21(r2)
	fcmpo    cr0, f24, f0
	ble      lbl_802986C0
	fmr      f24, f1
	b        lbl_802986C4

lbl_802986C0:
	fneg     f24, f1

lbl_802986C4:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f24, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	mr       r4, r31
	addi     r3, r1, 0x2c
	li       r29, 0
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	lwz      r12, 0(r31)
	lwz      r5, 0xc0(r31)
	lwz      r12, 8(r12)
	lfs      f28, 0x58c(r5)
	lfs      f30, 0x564(r5)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x20
	lwz      r12, 0(r28)
	lfs      f29, 0x2c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x20(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x44
	fsubs    f25, f0, f29
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x38
	lwz      r12, 0(r28)
	lfs      f29, 0x48(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x3c(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x5c
	fsubs    f24, f0, f29
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x50
	lwz      r12, 0(r28)
	lfs      f29, 0x64(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fmuls    f1, f24, f24
	lfs      f2, 0x58(r1)
	fmuls    f0, f30, f30
	fsubs    f2, f2, f29
	fmadds   f1, f25, f25, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802987F0
	lfs      f0, lbl_8051BB24@sda21(r2)
	fabs     f2, f31
	lfs      f1, lbl_8051BB20@sda21(r2)
	fmuls    f0, f0, f28
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_802987F0
	li       r29, 1

lbl_802987F0:
	clrlwi.  r0, r29, 0x18
	beq      lbl_80298818
	li       r0, 3
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	lfs      f1, lbl_8051BB2C@sda21(r2)
	mr       r3, r31
	bl       setAnimSpeed__Q24Game9EnemyBaseFf
	b        lbl_80298AE8

lbl_80298818:
	mr       r3, r31
	bl       getViewAngle__Q34Game10KumaChappy3ObjFv
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	fmr      f30, f1
	addi     r3, r1, 0x98
	lfs      f24, 0x3fc(r5)
	lwz      r12, 8(r12)
	lfs      f25, 0x3d4(r5)
	lfs      f26, 0x3ac(r5)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x8c
	lwz      r12, 0(r28)
	lfs      f29, 0x98(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x8c(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0xb0
	fsubs    f27, f0, f29
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0xa4
	lwz      r12, 0(r28)
	lfs      f29, 0xb4(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0xa8(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0xc8
	fsubs    f28, f0, f29
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0xbc
	lwz      r12, 0(r28)
	lfs      f29, 0xd0(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0xc4(r1)
	fmuls    f26, f26, f26
	fmuls    f25, f25, f25
	li       r3, 1
	fsubs    f0, f0, f29
	li       r4, 0
	fmuls    f0, f0, f0
	fmadds   f0, f27, f27, f0
	fcmpo    cr0, f0, f26
	ble      lbl_80298934
	fcmpo    cr0, f0, f25
	mr       r0, r4
	ble      lbl_80298928
	fabs     f0, f28
	frsp     f0, f0
	fcmpo    cr0, f0, f24
	bge      lbl_80298928
	mr       r0, r3

lbl_80298928:
	clrlwi.  r0, r0, 0x18
	beq      lbl_80298934
	li       r4, 1

lbl_80298934:
	clrlwi.  r0, r4, 0x18
	bne      lbl_8029896C
	lfs      f0, lbl_8051BB24@sda21(r2)
	fabs     f2, f31
	lfs      f1, lbl_8051BB20@sda21(r2)
	fmuls    f0, f0, f30
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	mfcr     r0
	rlwinm.  r0, r0, 3, 0x1f, 0x1f
	beq      lbl_8029896C
	li       r3, 0

lbl_8029896C:
	clrlwi.  r0, r3, 0x18
	beq      lbl_80298988
	li       r0, 2
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_80298AE8

lbl_80298988:
	lwz      r3, 0xc0(r31)
	fabs     f2, f31
	lfs      f0, lbl_8051BB24@sda21(r2)
	lfs      f3, 0x58c(r3)
	lfs      f1, lbl_8051BB20@sda21(r2)
	frsp     f2, f2
	fmuls    f0, f0, f3
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	beq      lbl_80298AE8
	li       r0, 5
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_80298AE8

lbl_802989C8:
	mr       r3, r31
	bl       setNearestWayPoint__Q34Game10KumaChappy3ObjFv
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lfs      f24, 0x2e0(r31)
	lwz      r12, 8(r12)
	lfs      f25, 0x2e8(r31)
	mtctr    r12
	bctrl
	lfs      f4, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x18(r1)
	fsubs    f1, f24, f4
	fsubs    f2, f25, f0
	stfs     f4, 8(r1)
	stfs     f3, 0xc(r1)
	stfs     f0, 0x10(r1)
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
	fmr      f31, f1
	lfs      f0, lbl_8051BB24@sda21(r2)
	lfs      f1, lbl_8051BB20@sda21(r2)
	fmuls    f0, f0, f29
	fmuls    f24, f31, f30
	fmuls    f1, f1, f0
	fabs     f0, f24
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80298A84
	lfs      f0, lbl_8051BB18@sda21(r2)
	fcmpo    cr0, f24, f0
	ble      lbl_80298A80
	fmr      f24, f1
	b        lbl_80298A84

lbl_80298A80:
	fneg     f24, f1

lbl_80298A84:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f24, f1
	bl       roundAng__Ff
	fabs     f3, f31
	stfs     f1, 0x1fc(r31)
	lfs      f0, lbl_8051BB28@sda21(r2)
	lfs      f2, 0x1fc(r31)
	frsp     f1, f3
	stfs     f2, 0x1a8(r31)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80298AD8
	li       r0, 8
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_80298AE8

lbl_80298AD8:
	li       r0, 6
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_80298AE8:
	mr       r3, r31
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80298B0C
	lfs      f0, lbl_8051BB18@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_80298B78

lbl_80298B0C:
	mr       r3, r31
	lwz      r4, 0xc0(r31)
	lwz      r12, 0(r31)
	lfs      f24, 0x2e4(r4)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r31
	lfs      f2, 0x1d4(r31)
	lwz      r12, 0(r31)
	frsp     f25, f1
	lfs      f29, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x80(r1)
	stfs     f29, 0x84(r1)
	stfs     f0, 0x88(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f24, f25
	frsp     f1, f1
	stfs     f0, 0x1d4(r31)
	fmuls    f0, f24, f1
	stfs     f29, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)

lbl_80298B78:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_80298BB4
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_80298BB4
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2d4(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80298BB4:
	psq_l    f31, 360(r1), 0, qr0
	lfd      f31, 0x160(r1)
	psq_l    f30, 344(r1), 0, qr0
	lfd      f30, 0x150(r1)
	psq_l    f29, 328(r1), 0, qr0
	lfd      f29, 0x140(r1)
	psq_l    f28, 312(r1), 0, qr0
	lfd      f28, 0x130(r1)
	psq_l    f27, 296(r1), 0, qr0
	lfd      f27, 0x120(r1)
	psq_l    f26, 280(r1), 0, qr0
	lfd      f26, 0x110(r1)
	psq_l    f25, 264(r1), 0, qr0
	lfd      f25, 0x100(r1)
	psq_l    f24, 248(r1), 0, qr0
	lfd      f24, 0xf0(r1)
	lwz      r31, 0xec(r1)
	lwz      r30, 0xe8(r1)
	lwz      r29, 0xe4(r1)
	lwz      r0, 0x174(r1)
	lwz      r28, 0xe0(r1)
	mtlr     r0
	addi     r1, r1, 0x170
	blr
	*/
}

/**
 * @note Address: 0x80298C14
 * @note Size: 0x3C
 */
void StateWalk::cleanup(EnemyBase* enemy)
{
	enemy->setAnimSpeed(30.0f);
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x80298C50
 * @note Size: 0x34
 */
void StateWalkPath::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* chappy        = OBJ(enemy);
	chappy->mNextState = KUMACHAPPY_NULL;
	chappy->startMotion(KUMACHAPPYANIM_Move, nullptr);
}

/**
 * @note Address: 0x80298C84
 * @note Size: 0x594
 */
void StateWalkPath::exec(EnemyBase* enemy)
{
	Obj* chappy = OBJ(enemy);
	chappy->updateHomePosition();
	f32 turnSpeed    = CG_GENERALPARMS(chappy).mTurnSpeed();    // f30
	f32 maxTurnAngle = CG_GENERALPARMS(chappy).mMaxTurnAngle(); // f29
	if (chappy->isFinishMotion()) {
		turnSpeed    = 0.01f;
		maxTurnAngle = 1.0f;
	}
	if (chappy->mHealth <= 0.0f) {
		chappy->mNextState = KUMACHAPPY_Dead;
		chappy->finishMotion();
		chappy->setAnimSpeed(60.0f);
	} else if (EnemyFunc::isStartFlick(chappy, false)) {
		chappy->mNextState = KUMACHAPPY_Flick;
		chappy->finishMotion();
		chappy->setAnimSpeed(60.0f);
	} else {
		Creature* target = chappy->getSearchedTarget();
		if (target) {
			f32 angleSep = chappy->turnToTarget(target, turnSpeed, maxTurnAngle);
			if (chappy->isTargetAttackable(target, angleSep, CG_GENERALPARMS(chappy).mMaxAttackRange(),
			                               CG_GENERALPARMS(chappy).mMaxAttackAngle())) {
				chappy->mNextState = KUMACHAPPY_Attack;
				chappy->finishMotion();
				chappy->setAnimSpeed(60.0f);

			} else if (absF(angleSep) <= TORADIANS(CG_GENERALPARMS(chappy).mMaxAttackAngle())) {
				chappy->mNextState = KUMACHAPPY_Walk;
				chappy->finishMotion();
			} else {
				chappy->mNextState = KUMACHAPPY_Turn;
				chappy->finishMotion();
			}
		} else {
			Vector3f targetPos = chappy->mTargetPos;
			f32 angleSep       = chappy->turnToTarget(targetPos, turnSpeed, maxTurnAngle);
			if (!(absF(angleSep) <= (PI / 4))) {
				chappy->mNextState = KUMACHAPPY_TurnPath;
				chappy->finishMotion();
			}
		}
	}

	if (chappy->isFinishMotion()) {
		chappy->mTargetVelocity = Vector3f(0.0f);
	} else {
		f32 moveSpeed = CG_GENERALPARMS(chappy).mMoveSpeed();
		f32 x         = sin(chappy->getFaceDir());
		f32 y         = chappy->getTargetVelocity().y;
		f32 z         = cos(chappy->getFaceDir());

		chappy->mTargetVelocity = Vector3f(moveSpeed * x, y, moveSpeed * z);
	}

	chappy->mTimer += 0.5f * sys->mDeltaTime;

	if (chappy->mCurAnim->mIsPlaying && chappy->mCurAnim->mType == KEYEVENT_END) {
		transit(chappy, chappy->mNextState, nullptr);
	}
	/*
	stwu     r1, -0x100(r1)
	mflr     r0
	stw      r0, 0x104(r1)
	stfd     f31, 0xf0(r1)
	psq_st   f31, 248(r1), 0, qr0
	stfd     f30, 0xe0(r1)
	psq_st   f30, 232(r1), 0, qr0
	stfd     f29, 0xd0(r1)
	psq_st   f29, 216(r1), 0, qr0
	stfd     f28, 0xc0(r1)
	psq_st   f28, 200(r1), 0, qr0
	stfd     f27, 0xb0(r1)
	psq_st   f27, 184(r1), 0, qr0
	stfd     f26, 0xa0(r1)
	psq_st   f26, 168(r1), 0, qr0
	stw      r31, 0x9c(r1)
	stw      r30, 0x98(r1)
	stw      r29, 0x94(r1)
	stw      r28, 0x90(r1)
	mr       r31, r4
	mr       r30, r3
	mr       r3, r31
	bl       updateHomePosition__Q34Game10KumaChappy3ObjFv
	lwz      r4, 0xc0(r31)
	mr       r3, r31
	lfs      f30, 0x30c(r4)
	lfs      f29, 0x334(r4)
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80298D04
	lfs      f30, lbl_8051BB38@sda21(r2)
	lfs      f29, lbl_8051BB3C@sda21(r2)

lbl_80298D04:
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051BB18@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80298D38
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	lfs      f1, lbl_8051BB2C@sda21(r2)
	mr       r3, r31
	bl       setAnimSpeed__Q24Game9EnemyBaseFf
	b        lbl_802990E4

lbl_80298D38:
	mr       r3, r31
	li       r4, 0
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_80298D6C
	li       r0, 4
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	lfs      f1, lbl_8051BB2C@sda21(r2)
	mr       r3, r31
	bl       setAnimSpeed__Q24Game9EnemyBaseFf
	b        lbl_802990E4

lbl_80298D6C:
	mr       r3, r31
	bl       getSearchedTarget__Q34Game10KumaChappy3ObjFv
	or.      r28, r3, r3
	beq      lbl_80298FE0
	mr       r4, r28
	addi     r3, r1, 0x68
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x74
	lwz      r12, 0(r31)
	lfs      f26, 0x68(r1)
	lwz      r12, 8(r12)
	lfs      f27, 0x70(r1)
	mtctr    r12
	bctrl
	lfs      f1, 0x74(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x7c(r1)
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
	fmr      f31, f1
	lfs      f0, lbl_8051BB24@sda21(r2)
	lfs      f1, lbl_8051BB20@sda21(r2)
	fmuls    f0, f0, f29
	fmuls    f28, f31, f30
	fmuls    f1, f1, f0
	fabs     f0, f28
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80298E38
	lfs      f0, lbl_8051BB18@sda21(r2)
	fcmpo    cr0, f28, f0
	ble      lbl_80298E34
	fmr      f28, f1
	b        lbl_80298E38

lbl_80298E34:
	fneg     f28, f1

lbl_80298E38:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f28, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	mr       r4, r31
	addi     r3, r1, 0x2c
	li       r29, 0
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	lwz      r12, 0(r31)
	lwz      r5, 0xc0(r31)
	lwz      r12, 8(r12)
	lfs      f28, 0x58c(r5)
	lfs      f30, 0x564(r5)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x20
	lwz      r12, 0(r28)
	lfs      f29, 0x2c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x20(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x44
	fsubs    f26, f0, f29
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x38
	lwz      r12, 0(r28)
	lfs      f29, 0x48(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x3c(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x5c
	fsubs    f27, f0, f29
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x50
	lwz      r12, 0(r28)
	lfs      f29, 0x64(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fmuls    f1, f27, f27
	lfs      f2, 0x58(r1)
	fmuls    f0, f30, f30
	fsubs    f2, f2, f29
	fmadds   f1, f26, f26, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80298F64
	lfs      f0, lbl_8051BB24@sda21(r2)
	fabs     f2, f31
	lfs      f1, lbl_8051BB20@sda21(r2)
	fmuls    f0, f0, f28
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_80298F64
	li       r29, 1

lbl_80298F64:
	clrlwi.  r0, r29, 0x18
	beq      lbl_80298F8C
	li       r0, 3
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	lfs      f1, lbl_8051BB2C@sda21(r2)
	mr       r3, r31
	bl       setAnimSpeed__Q24Game9EnemyBaseFf
	b        lbl_802990E4

lbl_80298F8C:
	lwz      r3, 0xc0(r31)
	fabs     f2, f31
	lfs      f0, lbl_8051BB24@sda21(r2)
	lfs      f3, 0x58c(r3)
	lfs      f1, lbl_8051BB20@sda21(r2)
	frsp     f2, f2
	fmuls    f0, f0, f3
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_80298FCC
	li       r0, 7
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802990E4

lbl_80298FCC:
	li       r0, 5
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802990E4

lbl_80298FE0:
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lfs      f26, 0x2e0(r31)
	lwz      r12, 8(r12)
	lfs      f27, 0x2e8(r31)
	mtctr    r12
	bctrl
	lfs      f4, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x18(r1)
	fsubs    f1, f26, f4
	fsubs    f2, f27, f0
	stfs     f4, 8(r1)
	stfs     f3, 0xc(r1)
	stfs     f0, 0x10(r1)
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
	fmr      f31, f1
	lfs      f0, lbl_8051BB24@sda21(r2)
	lfs      f1, lbl_8051BB20@sda21(r2)
	fmuls    f0, f0, f29
	fmuls    f26, f31, f30
	fmuls    f1, f1, f0
	fabs     f0, f26
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80299094
	lfs      f0, lbl_8051BB18@sda21(r2)
	fcmpo    cr0, f26, f0
	ble      lbl_80299090
	fmr      f26, f1
	b        lbl_80299094

lbl_80299090:
	fneg     f26, f1

lbl_80299094:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f26, f1
	bl       roundAng__Ff
	fabs     f3, f31
	stfs     f1, 0x1fc(r31)
	lfs      f0, lbl_8051BB28@sda21(r2)
	lfs      f2, 0x1fc(r31)
	frsp     f1, f3
	stfs     f2, 0x1a8(r31)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	beq      lbl_802990E4
	li       r0, 6
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802990E4:
	mr       r3, r31
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80299108
	lfs      f0, lbl_8051BB18@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_80299174

lbl_80299108:
	mr       r3, r31
	lwz      r4, 0xc0(r31)
	lwz      r12, 0(r31)
	lfs      f28, 0x2e4(r4)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r31
	lfs      f2, 0x1d4(r31)
	lwz      r12, 0(r31)
	frsp     f26, f1
	lfs      f29, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x80(r1)
	stfs     f29, 0x84(r1)
	stfs     f0, 0x88(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f28, f26
	frsp     f1, f1
	stfs     f0, 0x1d4(r31)
	fmuls    f0, f28, f1
	stfs     f29, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)

lbl_80299174:
	lwz      r3, sys@sda21(r13)
	lfs      f2, lbl_8051BB40@sda21(r2)
	lfs      f1, 0x54(r3)
	lfs      f0, 0x2d0(r31)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x2d0(r31)
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802991C8
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_802991C8
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2d4(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802991C8:
	psq_l    f31, 248(r1), 0, qr0
	lfd      f31, 0xf0(r1)
	psq_l    f30, 232(r1), 0, qr0
	lfd      f30, 0xe0(r1)
	psq_l    f29, 216(r1), 0, qr0
	lfd      f29, 0xd0(r1)
	psq_l    f28, 200(r1), 0, qr0
	lfd      f28, 0xc0(r1)
	psq_l    f27, 184(r1), 0, qr0
	lfd      f27, 0xb0(r1)
	psq_l    f26, 168(r1), 0, qr0
	lfd      f26, 0xa0(r1)
	lwz      r31, 0x9c(r1)
	lwz      r30, 0x98(r1)
	lwz      r29, 0x94(r1)
	lwz      r0, 0x104(r1)
	lwz      r28, 0x90(r1)
	mtlr     r0
	addi     r1, r1, 0x100
	blr
	*/
}

/**
 * @note Address: 0x80299218
 * @note Size: 0x28
 */
void StateWalkPath::cleanup(EnemyBase* enemy) { enemy->setAnimSpeed(30.0f); }
} // namespace KumaChappy
} // namespace Game

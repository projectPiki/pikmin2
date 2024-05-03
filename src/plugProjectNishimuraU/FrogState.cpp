#include "Game/Entities/Frog.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Frog {

/**
 * @note Address: 0x802563C4
 * @note Size: 0x37C
 */
void FSM::init(EnemyBase* enemy)
{
	create(FROG_StateCount);
	registerState(new StateDead);
	registerState(new StateWait);
	registerState(new StateTurn);
	registerState(new StateJump);
	registerState(new StateJumpWait);
	registerState(new StateFall);
	registerState(new StateAttack);
	registerState(new StateFail);
	registerState(new StateTurnToHome);
	registerState(new StateGoHome);
}

/**
 * @note Address: 0x80256740
 * @note Size: 0x68
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->disableEvent(0, EB_Cullable);
	enemy->disableEvent(0, EB_Untargetable);
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->deathProcedure();
	enemy->startMotion(FROGANIM_Dead, nullptr);
}

/**
 * @note Address: 0x802567A8
 * @note Size: 0x78
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* frog = OBJ(enemy);

	if (frog->mCurAnim->mIsPlaying) {
		if (frog->mCurAnim->mType == KEYEVENT_2) {
			frog->createDownEffect(frog->getDownSmokeScale());
		} else if (frog->mCurAnim->mType == KEYEVENT_END) {
			frog->kill(nullptr);
		}
	}
}

/**
 * @note Address: 0x80256828
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x8025682C
 * @note Size: 0xA0
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->mTargetCreature = nullptr;
	if (randWeightFloat(1.0f) < 0.2f) {
		enemy->startMotion(FROGANIM_Wait2, nullptr);
	} else {
		enemy->startMotion(FROGANIM_Wait1, nullptr);
	}
}

/**
 * @note Address: 0x802568CC
 * @note Size: 0x440
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* frog = OBJ(enemy);
	if (frog->mHealth <= 0.0f) {
		transit(frog, FROG_Dead, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(frog, false)) {
		Vector3f pos          = frog->getPosition();
		frog->mTargetPosition = pos;

		frog->attackNaviPosition();
		transit(frog, FROG_Jump, nullptr);
		return;
	}

	if (frog->mCurAnim->mIsPlaying && frog->mCurAnim->mType == KEYEVENT_END) {
		Creature* target = EnemyFunc::getNearestPikminOrNavi(frog, frog->getViewAngle(), CG_GENERALPARMS(frog).mSightRadius.mValue, nullptr,
		                                                     nullptr, nullptr);
		if (target) {
			frog->mTargetCreature = target;
			frog->mAlertTimer     = 0.0f;

			f32 angdist = frog->getCreatureViewAngle(target);

			if (frog->isTargetAttackable(target, angdist, CG_GENERALPARMS(frog).mMaxAttackRange(),
			                             CG_GENERALPARMS(frog).mMaxAttackAngle())) {
				Vector3f targetPos2   = target->getPosition();
				frog->mTargetPosition = targetPos2;
				frog->attackNaviPosition();
				transit(frog, FROG_Jump, nullptr);
				return;
			}

			if (FABS(angdist) <= 10.0f * PI / 180) {
				transit(frog, FROG_Wait, nullptr);
				return;
			}

			transit(frog, FROG_Turn, nullptr);
			return;
		}

		transit(frog, FROG_Wait, nullptr);
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
	lfs      f0, lbl_8051AA68@sda21(r2)
	mr       r30, r4
	lfs      f1, 0x200(r4)
	mr       r28, r3
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80256950
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80256CBC

lbl_80256950:
	mr       r3, r30
	li       r4, 0
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_802569CC
	mr       r4, r30
	addi     r3, r1, 0x8c
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x90(r1)
	mr       r3, r30
	lfs      f2, 0x94(r1)
	lfs      f0, 0x8c(r1)
	stfs     f0, 0x2c8(r30)
	stfs     f1, 0x2cc(r30)
	stfs     f2, 0x2d0(r30)
	lwz      r12, 0(r30)
	lwz      r12, 0x300(r12)
	mtctr    r12
	bctrl
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	li       r5, 3
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80256CBC

lbl_802569CC:
	lwz      r3, 0x188(r30)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_80256CBC
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_80256CBC
	mr       r3, r30
	bl       getViewAngle__Q34Game4Frog3ObjFv
	lwz      r6, 0xc0(r30)
	mr       r3, r30
	li       r4, 0
	li       r5, 0
	lfs      f2, 0x3d4(r6)
	li       r6, 0
	bl
"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
	or.      r29, r3, r3
	beq      lbl_80256C9C
	stw      r29, 0x230(r30)
	mr       r4, r29
	lfs      f0, lbl_8051AA68@sda21(r2)
	addi     r3, r1, 0x68
	stfs     f0, 0x2c4(r30)
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f2, 0x68(r1)
	lwz      r12, 0(r30)
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
	bge      lbl_80256BCC
	lfs      f0, lbl_8051AA8C@sda21(r2)
	fabs     f2, f30
	lfs      f1, lbl_8051AA88@sda21(r2)
	fmuls    f0, f0, f28
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_80256BCC
	li       r31, 1

lbl_80256BCC:
	clrlwi.  r0, r31, 0x18
	beq      lbl_80256C3C
	mr       r4, r29
	addi     r3, r1, 0x80
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x84(r1)
	mr       r3, r30
	lfs      f2, 0x88(r1)
	lfs      f0, 0x80(r1)
	stfs     f0, 0x2c8(r30)
	stfs     f1, 0x2cc(r30)
	stfs     f2, 0x2d0(r30)
	lwz      r12, 0(r30)
	lwz      r12, 0x300(r12)
	mtctr    r12
	bctrl
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	li       r5, 3
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80256CBC

lbl_80256C3C:
	fabs     f1, f30
	lfs      f0, lbl_8051AA90@sda21(r2)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80256C78
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80256CBC

lbl_80256C78:
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80256CBC

lbl_80256C9C:
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80256CBC:
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
 * @note Address: 0x80256D10
 * @note Size: 0x4
 */
void StateWait::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x80256D14
 * @note Size: 0x60
 */
void StateTurn::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* frog             = OBJ(enemy);
	frog->mNextState      = FROG_NULL;
	frog->mTargetCreature = nullptr;
	frog->mTargetVelocity = Vector3f(0.0f);
	frog->setEmotionExcitement();
	frog->startMotion(FROGANIM_Turn, nullptr);
}

/**
 * @note Address: 0x80256D74
 * @note Size: 0x3AC
 */
void StateTurn::exec(EnemyBase* enemy)
{
	Obj* frog        = OBJ(enemy);
	Creature* target = EnemyFunc::getNearestPikminOrNavi(frog, frog->getViewAngle(), CG_GENERALPARMS(frog).mSightRadius.mValue, nullptr,
	                                                     nullptr, nullptr);

	if (target) {
		frog->mAlertTimer = 0.0f;
		f32 angdist       = frog->turnToTarget(target, CG_GENERALPARMS(frog).mTurnSpeed.mValue, CG_GENERALPARMS(frog).mMaxTurnAngle.mValue);
		f32 attackAngle   = CG_GENERALPARMS(frog).mMaxAttackAngle();
		f32 attackDist    = CG_GENERALPARMS(frog).mMaxAttackRange();

		bool check   = false;
		Vector3f sep = frog->getTargetSeparation(target);
		if ((sep.sqrMagnitude() < SQUARE(attackDist)) && FABS(angdist) <= TORADIANS(attackAngle)) {
			check = true;
		}
		if (check) {
			frog->mTargetCreature = target;
			frog->mNextState      = FROG_Jump;
			frog->finishMotion();
		} else if (FABS(angdist) <= PI / 18.0f) {
			frog->mNextState = FROG_Wait;
			frog->finishMotion();
		}

	} else {
		frog->mNextState = FROG_Wait;
		frog->finishMotion();
	}

	if (EnemyFunc::isStartFlick(frog, false)) {
		frog->mNextState = FROG_Jump;
		frog->finishMotion();
	}

	if (frog->mHealth <= 0.0f) {
		frog->mNextState = FROG_Dead;
		frog->finishMotion();
	}

	if (frog->mCurAnim->mIsPlaying && frog->mCurAnim->mType == KEYEVENT_END) {
		transit(frog, frog->mNextState, nullptr);
	}
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stfd     f31, 0xd0(r1)
	psq_st   f31, 216(r1), 0, qr0
	stfd     f30, 0xc0(r1)
	psq_st   f30, 200(r1), 0, qr0
	stfd     f29, 0xb0(r1)
	psq_st   f29, 184(r1), 0, qr0
	stfd     f28, 0xa0(r1)
	psq_st   f28, 168(r1), 0, qr0
	stfd     f27, 0x90(r1)
	psq_st   f27, 152(r1), 0, qr0
	stfd     f26, 0x80(r1)
	psq_st   f26, 136(r1), 0, qr0
	stw      r31, 0x7c(r1)
	stw      r30, 0x78(r1)
	stw      r29, 0x74(r1)
	stw      r28, 0x70(r1)
	mr       r31, r4
	mr       r30, r3
	mr       r3, r31
	bl       getViewAngle__Q34Game4Frog3ObjFv
	lwz      r6, 0xc0(r31)
	mr       r3, r31
	li       r4, 0
	li       r5, 0
	lfs      f2, 0x3d4(r6)
	li       r6, 0
	bl
"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
	or.      r28, r3, r3
	beq      lbl_8025703C
	lfs      f0, lbl_8051AA68@sda21(r2)
	mr       r4, r28
	addi     r3, r1, 0x50
	stfs     f0, 0x2c4(r31)
	lwz      r12, 0(r28)
	lwz      r5, 0xc0(r31)
	lwz      r12, 8(r12)
	lfs      f29, 0x334(r5)
	lfs      f30, 0x30c(r5)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x5c
	lwz      r12, 0(r31)
	lfs      f26, 0x50(r1)
	lwz      r12, 8(r12)
	lfs      f27, 0x58(r1)
	mtctr    r12
	bctrl
	lfs      f1, 0x5c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x64(r1)
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
	lfs      f0, lbl_8051AA8C@sda21(r2)
	lfs      f1, lbl_8051AA88@sda21(r2)
	fmuls    f0, f0, f29
	fmuls    f28, f31, f30
	fmuls    f1, f1, f0
	fabs     f0, f28
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80256EC4
	lfs      f0, lbl_8051AA68@sda21(r2)
	fcmpo    cr0, f28, f0
	ble      lbl_80256EC0
	fmr      f28, f1
	b        lbl_80256EC4

lbl_80256EC0:
	fneg     f28, f1

lbl_80256EC4:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f28, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	mr       r4, r31
	addi     r3, r1, 0x14
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
	addi     r3, r1, 8
	lwz      r12, 0(r28)
	lfs      f30, 0x14(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 8(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x2c
	fsubs    f26, f0, f30
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x20
	lwz      r12, 0(r28)
	lfs      f30, 0x30(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x24(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x44
	fsubs    f27, f0, f30
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x38
	lwz      r12, 0(r28)
	lfs      f30, 0x4c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fmuls    f1, f27, f27
	lfs      f2, 0x40(r1)
	fmuls    f0, f29, f29
	fsubs    f2, f2, f30
	fmadds   f1, f26, f26, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80256FF0
	lfs      f0, lbl_8051AA8C@sda21(r2)
	fabs     f2, f31
	lfs      f1, lbl_8051AA88@sda21(r2)
	fmuls    f0, f0, f28
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_80256FF0
	li       r29, 1

lbl_80256FF0:
	clrlwi.  r0, r29, 0x18
	beq      lbl_80257010
	stw      r28, 0x230(r31)
	li       r0, 3
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_8025704C

lbl_80257010:
	fabs     f1, f31
	lfs      f0, lbl_8051AA90@sda21(r2)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8025704C
	li       r0, 1
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_8025704C

lbl_8025703C:
	li       r0, 1
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_8025704C:
	mr       r3, r31
	li       r4, 0
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_80257070
	li       r0, 3
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_80257070:
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051AA68@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80257094
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_80257094:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802570D0
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_802570D0
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2d4(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802570D0:
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	psq_l    f29, 184(r1), 0, qr0
	lfd      f29, 0xb0(r1)
	psq_l    f28, 168(r1), 0, qr0
	lfd      f28, 0xa0(r1)
	psq_l    f27, 152(r1), 0, qr0
	lfd      f27, 0x90(r1)
	psq_l    f26, 136(r1), 0, qr0
	lfd      f26, 0x80(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	lwz      r29, 0x74(r1)
	lwz      r0, 0xe4(r1)
	lwz      r28, 0x70(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/**
 * @note Address: 0x80257120
 * @note Size: 0xAC
 */
void StateTurn::cleanup(EnemyBase* enemy)
{
	Obj* frog = OBJ(enemy);
	frog->setEmotionCaution();

	if (frog->mNextState == FROG_Jump) {
		Vector3f pos = frog->getPosition();
		if (frog->mTargetCreature) {
			pos = frog->mTargetCreature->getPosition();
		}

		frog->mTargetPosition = pos;
		frog->attackNaviPosition();
	}
}

/**
 * @note Address: 0x802571CC
 * @note Size: 0xE8
 */
void StateJump::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* frog = OBJ(enemy);
	frog->disableEvent(0, EB_Cullable);
	frog->mTargetVelocity = Vector3f(0.0f);
	frog->setEmotionExcitement();

	if (frog->mStuckPikminCount) {
		Parms::ProperParms* parms = &CG_PROPERPARMS(frog);
		if (randWeightFloat(1.0f) < parms->mJumpFailChance.mValue) {
			transit(frog, FROG_Fail, nullptr);
			return;
		}
	}

	frog->startJumpEffect();
	frog->startMotion(FROGANIM_Jump, nullptr);
}

/**
 * @note Address: 0x802572B4
 * @note Size: 0x118
 */
void StateJump::exec(EnemyBase* enemy)
{
	Obj* frog = OBJ(enemy);

	if (frog->mCurAnim->mIsPlaying) {
		if (frog->mCurAnim->mType == KEYEVENT_2) {
			frog->startJumpAttack();

			EnemyFunc::flickNearbyNavi(frog, CG_GENERALPARMS(frog).mShakeRange.mValue, 0.0f, CG_GENERALPARMS(frog).mShakeDamage.mValue,
			                           FLICK_BACKWARD_ANGLE, nullptr);
			EnemyFunc::flickNearbyPikmin(frog, CG_GENERALPARMS(frog).mShakeRange.mValue, 0.0f, CG_GENERALPARMS(frog).mShakeDamage.mValue,
			                             FLICK_BACKWARD_ANGLE, nullptr);

			if (frog->mWaterBox) {
				frog->getJAIObject()->startSound(PSSE_EN_FROG_WATERJUMP, 0);
			} else {
				frog->getJAIObject()->startSound(PSSE_EN_FROG_HIGHJUMP, 0);
			}
		} else if (frog->mCurAnim->mType == KEYEVENT_END) {
			transit(frog, FROG_JumpWait, nullptr);
		}
	}
}

/**
 * @note Address: 0x802573CC
 * @note Size: 0x48
 */
void StateJump::cleanup(EnemyBase* enemy)
{
	enemy->enableEvent(0, EB_Cullable);
	enemy->setEmotionCaution();
	enemy->disableEvent(0, EB_Untargetable);
}

/**
 * @note Address: 0x80257414
 * @note Size: 0x58
 */
void StateJumpWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->disableEvent(0, EB_Cullable);
	enemy->enableEvent(0, EB_Untargetable);
	enemy->setEmotionExcitement();
	enemy->startMotion(FROGANIM_JumpWait, nullptr);
}

/**
 * @note Address: 0x8025746C
 * @note Size: 0x8C
 */
void StateJumpWait::exec(EnemyBase* enemy)
{
	Obj* frog = OBJ(enemy);
	if (frog->mAirTimer > CG_PROPERPARMS(frog).mAirTime.mValue) {
		frog->finishMotion();
	}

	if (frog->mCurAnim->mIsPlaying && frog->mCurAnim->mType == KEYEVENT_END) {
		transit(frog, FROG_Fall, nullptr);
	}
}

/**
 * @note Address: 0x802574F8
 * @note Size: 0x3C
 */
void StateJumpWait::cleanup(EnemyBase* enemy)
{
	enemy->enableEvent(0, EB_Cullable);
	enemy->disableEvent(0, EB_Untargetable);
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x80257534
 * @note Size: 0x8C
 */
void StateFall::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* frog        = OBJ(enemy);
	frog->mIsFalling = true;
	frog->disableEvent(0, EB_Cullable);
	frog->mTargetVelocity = Vector3f(0.0f);
	frog->disableEvent(0, EB_Untargetable);
	frog->setEmotionExcitement();
	frog->startMotion(FROGANIM_Fall, nullptr);
	frog->mCurrentVelocity = Vector3f(0.0f, -CG_PROPERPARMS(frog).mFallSpeed.mValue, 0.0f);
}

/**
 * @note Address: 0x802575C0
 * @note Size: 0x40
 */
void StateFall::exec(EnemyBase* enemy)
{
	if (enemy->mFloorTriangle) {
		transit(enemy, FROG_Attack, nullptr);
	}
}

/**
 * @note Address: 0x80257600
 * @note Size: 0x38
 */
void StateFall::cleanup(EnemyBase* enemy)
{
	Obj* frog        = OBJ(enemy);
	frog->mIsFalling = false;
	frog->enableEvent(0, EB_Cullable);
	frog->setEmotionCaution();
}

/**
 * @note Address: 0x80257638
 * @note Size: 0x74
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* frog        = OBJ(enemy);
	frog->mIsFalling = false;
	frog->pressOnGround();
	frog->mAlertTimer = 0.0f;
	frog->disableEvent(0, EB_Cullable);
	frog->setEmotionExcitement();
	frog->mTargetVelocity = Vector3f(0.0f);
	frog->startMotion(FROGANIM_Attack, nullptr);
}

/**
 * @note Address: 0x802576AC
 * @note Size: 0x16C
 */
void StateAttack::exec(EnemyBase* enemy)
{
	// nothing in here strictly needs this obj cast, but the codegen does. wack.
	Obj* frog = OBJ(enemy);
	if (frog->mCurAnim->mIsPlaying && frog->mCurAnim->mType == KEYEVENT_END) {
		if (frog->mHealth <= 0.0f) {
			transit(frog, FROG_Dead, nullptr);
			return;
		}
		Vector3f homePos = frog->mHomePosition;
		Vector3f pos     = frog->getPosition();

		f32 sep = pos.distance(homePos);

		if (sep > CG_GENERALPARMS(frog).mTerritoryRadius.mValue) {
			transit(frog, FROG_TurnToHome, nullptr);
		} else {
			transit(frog, FROG_Wait, nullptr);
		}
	}
}

/**
 * @note Address: 0x80257818
 * @note Size: 0x44
 */
void StateAttack::cleanup(EnemyBase* enemy)
{
	Obj* frog = OBJ(enemy);
	frog->finishJumpEffect();
	frog->enableEvent(0, EB_Cullable);
	frog->setEmotionCaution();
}

/**
 * @note Address: 0x8025785C
 * @note Size: 0x54
 */
void StateFail::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mFlickTimer     = 0.0f;
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->setEmotionExcitement();
	enemy->startMotion(FROGANIM_Fail, nullptr);
}

/**
 * @note Address: 0x802578B0
 * @note Size: 0x1A8
 */
void StateFail::exec(EnemyBase* enemy)
{
	Obj* frog = OBJ(enemy);
	if (frog->mCurAnim->mIsPlaying && frog->mCurAnim->mType == KEYEVENT_END) {
		if (frog->mHealth <= 0.0f) {
			transit(frog, FROG_Dead, nullptr);
			return;
		}

		if (EnemyFunc::isStartFlick(frog, false)) {
			transit(frog, FROG_Jump, nullptr);
			return;
		}

		Vector3f homePos = frog->mHomePosition;
		Vector3f pos     = frog->getPosition();

		f32 sep = pos.distance(homePos);

		if (sep > CG_GENERALPARMS(frog).mTerritoryRadius.mValue) {
			transit(frog, FROG_TurnToHome, nullptr);
		} else {
			transit(frog, FROG_Wait, nullptr);
		}
	}
}

/**
 * @note Address: 0x80257A58
 * @note Size: 0x24
 */
void StateFail::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x80257A7C
 * @note Size: 0x44
 */
void StateTurnToHome::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* frog             = OBJ(enemy);
	frog->mNextState      = FROG_NULL;
	frog->mTargetVelocity = Vector3f(0.0f);
	frog->startMotion(FROGANIM_Turn, nullptr);
}

/**
 * @note Address: 0x80257AC0
 * @note Size: 0x224
 */
void StateTurnToHome::exec(EnemyBase* enemy)
{
	Obj* frog        = OBJ(enemy);
	Vector3f homePos = frog->mHomePosition;
	f32 maxAngle     = CG_GENERALPARMS(frog).mMaxAttackAngle();
	f32 angdist      = frog->turnToTarget(homePos, CG_GENERALPARMS(frog).mTurnSpeed.mValue, CG_GENERALPARMS(frog).mMaxTurnAngle.mValue);

	if (FABS(angdist) <= PI * (DEG2RAD * maxAngle)) {
		frog->mNextState = FROG_GoHome;
		frog->finishMotion();
	}

	if (EnemyFunc::isStartFlick(frog, false)) {
		frog->mNextState = FROG_Jump;
		frog->finishMotion();
	}

	if (frog->mHealth <= 0.0f) {
		frog->mNextState = FROG_Dead;
		frog->finishMotion();
	}

	if (frog->mCurAnim->mIsPlaying && frog->mCurAnim->mType == KEYEVENT_END) {
		transit(frog, frog->mNextState, nullptr);
	}
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stfd     f29, 0x50(r1)
	psq_st   f29, 88(r1), 0, qr0
	stfd     f28, 0x40(r1)
	psq_st   f28, 72(r1), 0, qr0
	stfd     f27, 0x30(r1)
	psq_st   f27, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	lwz      r12, 0(r4)
	mr       r30, r3
	lwz      r5, 0xc0(r4)
	mr       r31, r4
	lwz      r12, 8(r12)
	addi     r3, r1, 0x14
	lfs      f31, 0x198(r4)
	lfs      f27, 0x1a0(r4)
	lfs      f28, 0x58c(r5)
	lfs      f29, 0x334(r5)
	lfs      f30, 0x30c(r5)
	mtctr    r12
	bctrl
	lfs      f4, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x18(r1)
	fsubs    f1, f31, f4
	fsubs    f2, f27, f0
	stfs     f4, 8(r1)
	stfs     f3, 0xc(r1)
	stfs     f0, 0x10(r1)
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
	lfs      f0, lbl_8051AA8C@sda21(r2)
	lfs      f1, lbl_8051AA88@sda21(r2)
	fmuls    f0, f0, f29
	fmuls    f29, f31, f30
	fmuls    f1, f1, f0
	fabs     f0, f29
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80257BC4
	lfs      f0, lbl_8051AA68@sda21(r2)
	fcmpo    cr0, f29, f0
	ble      lbl_80257BC0
	fmr      f29, f1
	b        lbl_80257BC4

lbl_80257BC0:
	fneg     f29, f1

lbl_80257BC4:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f29, f1
	bl       roundAng__Ff
	lfs      f0, lbl_8051AA8C@sda21(r2)
	fabs     f2, f31
	stfs     f1, 0x1fc(r31)
	fmuls    f0, f0, f28
	lfs      f1, lbl_8051AA88@sda21(r2)
	lfs      f3, 0x1fc(r31)
	frsp     f2, f2
	fmuls    f0, f1, f0
	stfs     f3, 0x1a8(r31)
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_80257C20
	li       r0, 9
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_80257C20:
	mr       r3, r31
	li       r4, 0
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_80257C44
	li       r0, 3
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_80257C44:
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051AA68@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80257C68
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_80257C68:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_80257CA4
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_80257CA4
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2d4(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80257CA4:
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	psq_l    f28, 72(r1), 0, qr0
	lfd      f28, 0x40(r1)
	psq_l    f27, 56(r1), 0, qr0
	lfd      f27, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r0, 0x84(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/**
 * @note Address: 0x80257CE4
 * @note Size: 0x60
 */
void StateTurnToHome::cleanup(EnemyBase* enemy)
{
	Obj* frog = OBJ(enemy);
	if (frog->mNextState == FROG_Jump) {
		Vector3f pos          = frog->getPosition();
		frog->mTargetPosition = pos;
	}
}

/**
 * @note Address: 0x80257D44
 * @note Size: 0x5C
 */
void StateGoHome::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* frog        = OBJ(enemy);
	frog->mNextState = FROG_NULL;
	frog->mIsInAir   = false;
	frog->mAirTimer  = 0.0f;
	frog->disableEvent(0, EB_NoInterrupt);
	frog->mTargetVelocity = Vector3f(0.0f);
	frog->startMotion(FROGANIM_Move, nullptr);
}

/**
 * @note Address: 0x80257DA0
 * @note Size: 0x200
 */
void StateGoHome::exec(EnemyBase* enemy)
{
	Obj* frog = OBJ(enemy);
	if (frog->mIsInAir) {
		Vector3f pos     = frog->getPosition();
		Vector3f homePos = Vector3f(frog->mHomePosition);
		EnemyFunc::walkToTarget(frog, homePos, CG_GENERALPARMS(frog).mMoveSpeed.mValue, CG_GENERALPARMS(frog).mTurnSpeed.mValue,
		                        CG_GENERALPARMS(frog).mMaxTurnAngle.mValue);

		if (sqrDistanceXZ(pos, homePos) < SQUARE(CG_GENERALPARMS(frog).mHomeRadius())) {
			frog->mNextState = FROG_Wait;
			frog->finishMotion();
		} else if (frog->mAirTimer > 7.5f) {
			frog->resetHomePosition();
		}
	} else {
		frog->mTargetVelocity = Vector3f(0.0f);
	}

	if (EnemyFunc::isStartFlick(frog, false)) {
		frog->mNextState = FROG_Jump;
		frog->finishMotion();
	}

	if (frog->mHealth <= 0.0f) {
		frog->mNextState = FROG_Dead;
		frog->finishMotion();
	}

	frog->mAirTimer += sys->mDeltaTime;

	if (frog->mCurAnim->mIsPlaying) {
		if (frog->mCurAnim->mType == KEYEVENT_2) {
			frog->mIsInAir = true;
			frog->enableEvent(0, EB_NoInterrupt);
		} else if (frog->mCurAnim->mType == KEYEVENT_3) {
			frog->mIsInAir = false;
			frog->disableEvent(0, EB_NoInterrupt);
			frog->createDownEffect(0.5f);
		} else if (frog->mCurAnim->mType == KEYEVENT_END) {
			transit(frog, frog->mNextState, nullptr);
		}
	}
}

/**
 * @note Address: 0x80257FA0
 * @note Size: 0x10C
 */
void StateGoHome::cleanup(EnemyBase* enemy)
{
	Obj* frog = OBJ(enemy);
	frog->disableEvent(0, EB_NoInterrupt);
	if (frog->mNextState == FROG_Jump) {
		Vector3f pos     = frog->getPosition();
		Vector3f homePos = frog->mHomePosition;
		Vector3f sep     = homePos - pos;
		sep.y            = 0.0f;

		f32 dist = sep.normalise();
		if (dist < CG_GENERALPARMS(frog).mMaxAttackRange.mValue) {
			frog->mTargetPosition = homePos;
		} else {
			sep *= CG_GENERALPARMS(frog).mMaxAttackRange.mValue;

			sep += pos;
			frog->mTargetPosition = sep;
		}
	}
}
} // namespace Frog
} // namespace Game

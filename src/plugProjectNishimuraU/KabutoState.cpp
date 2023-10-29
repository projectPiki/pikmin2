#include "Game/Entities/Kabuto.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "efx/THebi.h"

namespace Game {
namespace Kabuto {

static const char unusedKabutoName[] = "246-KabutoState";

/*
 * --INFO--
 * Address:	802E1834
 * Size:	000480
 */
void Kabuto::FSM::init(EnemyBase* enemy)
{
	create(KABUTO_StateCount);
	registerState(new StateDead);
	registerState(new StateWait);
	registerState(new StateTurn);
	registerState(new StateMove);
	registerState(new StateFlick);
	registerState(new StateAttack);
	registerState(new StateFixStay);
	registerState(new StateFixAppear);
	registerState(new StateFixHide);
	registerState(new StateFixWait);
	registerState(new StateFixTurn);
	registerState(new StateFixAttack);
	registerState(new StateFixFlick);
}

/*
 * --INFO--
 * Address:	802E1CB4
 * Size:	0000A0
 */
void Kabuto::StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kabuto = OBJ(enemy);
	kabuto->deathProcedure();
	kabuto->disableEvent(0, EB_Cullable);
	kabuto->mTargetVelocity = Vector3f(0.0f);
	if (kabuto->getEnemyTypeID() == EnemyTypeID::EnemyID_Fkabuto) {
		kabuto->startMotion(KABUTOANIM_FixDead, nullptr);
		kabuto->finishWaitEffect();
	} else {
		kabuto->startMotion(KABUTOANIM_Dead, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802E1D60
 * Size:	000044
 */
void Kabuto::StateDead::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		enemy->kill(nullptr);
	}
}

/*
 * --INFO--
 * Address:	802E1DA4
 * Size:	000004
 */
void Kabuto::StateDead::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802E1DA8
 * Size:	00006C
 */
void Kabuto::StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kabuto         = OBJ(enemy);
	kabuto->mStateTimer = 0.0f;
	kabuto->setRandTarget();
	kabuto->mNextState = KABUTO_NULL;
	kabuto->enableEvent(0, EB_Constrained);
	kabuto->mTargetVelocity = Vector3f(0.0f);
	kabuto->startMotion(KABUTOANIM_Wait, nullptr);
}

/*
 * --INFO--
 * Address:	802E1E14
 * Size:	00010C
 */
void Kabuto::StateWait::exec(EnemyBase* enemy)
{
	Obj* kabuto = OBJ(enemy);
	if (kabuto->mHealth <= 0.0f) {
		transit(kabuto, KABUTO_Dead, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(kabuto, false)) {
		kabuto->mNextState = KABUTO_Flick;
		kabuto->finishMotion();
	} else if (kabuto->mStateTimer > 3.0f || kabuto->getSearchedTarget()) {
		kabuto->mNextState = KABUTO_Turn;
		kabuto->finishMotion();
	}

	kabuto->mStateTimer += sys->mDeltaTime;

	if (kabuto->mCurAnim->mIsPlaying && kabuto->mCurAnim->mType == KEYEVENT_END) {
		transit(kabuto, kabuto->mNextState, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802E1F20
 * Size:	000024
 */
void Kabuto::StateWait::cleanup(EnemyBase* enemy) { enemy->constraintOff(); }

/*
 * --INFO--
 * Address:	802E1F44
 * Size:	000054
 */
void Kabuto::StateTurn::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kabuto         = OBJ(enemy);
	kabuto->mStateTimer = 0.0f;
	kabuto->mNextState  = KABUTO_NULL;
	kabuto->enableEvent(0, EB_Constrained);
	kabuto->mTargetVelocity = Vector3f(0.0f);
	kabuto->startMotion(KABUTOANIM_Pivot, nullptr);
}

/*
 * --INFO--
 * Address:	802E1F98
 * Size:	000340
 */
void Kabuto::StateTurn::exec(EnemyBase* enemy)
{
	Obj* kabuto = OBJ(enemy);
	if (kabuto->mHealth <= 0.0f) {
		transit(kabuto, KABUTO_Dead, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(kabuto, false)) {
		kabuto->mNextState = KABUTO_Flick;
		kabuto->finishMotion();
	} else {
		Creature* target = kabuto->getSearchedTarget();
		if (target) {
			kabuto->mAlertTimer = 0.0f;
			Vector3f targetPos  = target->getPosition();
			kabuto->turnToTarget(targetPos, CG_PARMS(kabuto)->mGeneral.mTurnSpeed(), CG_PARMS(kabuto)->mGeneral.mMaxTurnAngle());
			if (kabuto->isAttackableTarget()) {
				kabuto->mNextState = KABUTO_Attack;
				kabuto->finishMotion();
			}
		} else {
			Vector3f targetPos = kabuto->mTargetPosition;
			f32 angle          = kabuto->changeFaceDir(targetPos);
			f64 abs            = fabs(angle);
			if ((f32)abs <= PI / 6.0f) {
				kabuto->mNextState = KABUTO_Move;
				kabuto->finishMotion();
			}
		}
	}

	if (kabuto->mCurAnim->mIsPlaying && kabuto->mCurAnim->mType == KEYEVENT_END) {
		transit(kabuto, kabuto->mNextState, nullptr);
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
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	lfs      f0, lbl_8051CDA8@sda21(r2)
	mr       r31, r4
	lfs      f1, 0x200(r4)
	mr       r30, r3
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802E2004
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E22A0

lbl_802E2004:
	mr       r3, r31
	li       r4, 0
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E202C
	li       r0, 4
	mr       r3, r31
	stw      r0, 0x2cc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802E2264

lbl_802E202C:
	mr       r3, r31
	bl       getSearchedTarget__Q34Game6Kabuto3ObjFv
	cmplwi   r3, 0
	beq      lbl_802E2164
	lfs      f0, lbl_8051CDA8@sda21(r2)
	mr       r4, r3
	addi     r3, r1, 0x2c
	stfs     f0, 0x2dc(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x20
	lfs      f29, 0x2c(r1)
	lwz      r12, 8(r12)
	lfs      f28, 0x34(r1)
	lfs      f30, 0x334(r5)
	lfs      f31, 0x30c(r5)
	mtctr    r12
	bctrl
	lfs      f4, 0x20(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x28(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x24(r1)
	fsubs    f1, f29, f4
	fsubs    f2, f28, f0
	stfs     f4, 0x14(r1)
	stfs     f3, 0x18(r1)
	stfs     f0, 0x1c(r1)
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
	fmuls    f29, f1, f31
	lfs      f0, lbl_8051CDB4@sda21(r2)
	lfs      f1, lbl_8051CDB0@sda21(r2)
	fmuls    f0, f0, f30
	fabs     f2, f29
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_802E2118
	lfs      f0, lbl_8051CDA8@sda21(r2)
	fcmpo    cr0, f29, f0
	ble      lbl_802E2114
	fmr      f29, f1
	b        lbl_802E2118

lbl_802E2114:
	fneg     f29, f1

lbl_802E2118:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f29, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	mr       r3, r31
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	bl       isAttackableTarget__Q34Game6Kabuto3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E2264
	li       r0, 5
	mr       r3, r31
	stw      r0, 0x2cc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802E2264

lbl_802E2164:
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	addi     r3, r1, 8
	lfs      f28, 0x2d0(r31)
	lwz      r12, 8(r12)
	lfs      f31, 0x2d8(r31)
	lfs      f29, 0x334(r5)
	lfs      f30, 0x30c(r5)
	mtctr    r12
	bctrl
	lfs      f1, 8(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x10(r1)
	addi     r3, r3, atanTable___5JMath@l
	fsubs    f1, f28, f1
	fsubs    f2, f31, f0
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
	lfs      f0, lbl_8051CDB4@sda21(r2)
	lfs      f1, lbl_8051CDB0@sda21(r2)
	fmuls    f0, f0, f29
	fmuls    f29, f31, f30
	fmuls    f1, f1, f0
	fabs     f0, f29
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_802E2214
	lfs      f0, lbl_8051CDA8@sda21(r2)
	fcmpo    cr0, f29, f0
	ble      lbl_802E2210
	fmr      f29, f1
	b        lbl_802E2214

lbl_802E2210:
	fneg     f29, f1

lbl_802E2214:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f29, f1
	bl       roundAng__Ff
	fabs     f3, f31
	stfs     f1, 0x1fc(r31)
	lfs      f0, lbl_8051CDB8@sda21(r2)
	lfs      f2, 0x1fc(r31)
	frsp     f1, f3
	stfs     f2, 0x1a8(r31)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802E2264
	li       r0, 3
	mr       r3, r31
	stw      r0, 0x2cc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802E2264:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802E22A0
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_802E22A0
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2cc(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802E22A0:
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	psq_l    f28, 72(r1), 0, qr0
	lfd      f28, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r0, 0x84(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	802E22D8
 * Size:	000024
 */
void Kabuto::StateTurn::cleanup(EnemyBase* enemy) { enemy->constraintOff(); }

/*
 * --INFO--
 * Address:	802E22FC
 * Size:	000050
 */
void Kabuto::StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kabuto             = OBJ(enemy);
	kabuto->mStateTimer     = 0.0f;
	kabuto->mIsWalking      = false;
	kabuto->mNextState      = KABUTO_NULL;
	kabuto->mTargetVelocity = Vector3f(0.0f);
	kabuto->startMotion(KABUTOANIM_Move, nullptr);
}

/*
 * --INFO--
 * Address:	802E234C
 * Size:	00038C
 */
void Kabuto::StateMove::exec(EnemyBase* enemy)
{
	Obj* kabuto = OBJ(enemy);
	if (kabuto->mHealth <= 0.0f) {
		transit(kabuto, KABUTO_Dead, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(kabuto, false)) {
		kabuto->mNextState = KABUTO_Flick;
		kabuto->finishMotion();
	} else {
		Creature* target = kabuto->getSearchedTarget();
		if (target) {
			kabuto->mAlertTimer = 0.0f;
			kabuto->mNextState  = KABUTO_Turn;
			kabuto->finishMotion();
			if (kabuto->isAttackableTarget()) {
				kabuto->mNextState = KABUTO_Attack;
				kabuto->finishMotion();
			}
		} else {
			Vector3f pos       = kabuto->getPosition();
			Vector3f targetPos = kabuto->mTargetPosition;
			if (kabuto->mStateTimer > 6.0f || sqrDistanceXZ(pos, targetPos) < 625.0f) {
				kabuto->mNextState = KABUTO_Wait;
				kabuto->finishMotion();
			} else {
				f32 angle = kabuto->changeFaceDir(targetPos);
				f32 limit = PI * (DEG2RAD * 30.0f);
				f64 abs   = fabs(angle);
				if ((f32)abs <= limit) {
					if (kabuto->mIsWalking) {
						f32 speed = CG_PARMS(kabuto)->mGeneral.mMoveSpeed();
						f32 x     = sin(kabuto->getFaceDir());
						f32 y     = kabuto->getTargetVelocity().y;
						f32 z     = cos(kabuto->getFaceDir());

						kabuto->mTargetVelocity = Vector3f(speed * x, y, speed * z);
					}

				} else {
					kabuto->mNextState = KABUTO_Turn;
					kabuto->finishMotion();
				}
			}
		}
	}

	if (kabuto->isFinishMotion()) {
		kabuto->mIsWalking = false;
		kabuto->enableEvent(0, EB_Constrained);
		kabuto->mTargetVelocity = Vector3f(0.0f);
	}

	kabuto->mStateTimer += sys->mDeltaTime;

	if (kabuto->mCurAnim->mIsPlaying) {
		if (kabuto->mCurAnim->mType == KEYEVENT_NULL) {
			kabuto->mIsWalking = true;
		} else if (kabuto->mCurAnim->mType == KEYEVENT_END) {
			transit(kabuto, kabuto->mNextState, nullptr);
		}
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
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	lfs      f0, lbl_8051CDA8@sda21(r2)
	mr       r31, r4
	lfs      f1, 0x200(r4)
	mr       r30, r3
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802E23B8
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E26A0

lbl_802E23B8:
	mr       r3, r31
	li       r4, 0
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E23E0
	li       r0, 4
	mr       r3, r31
	stw      r0, 0x2cc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802E2608

lbl_802E23E0:
	mr       r3, r31
	bl       getSearchedTarget__Q34Game6Kabuto3ObjFv
	cmplwi   r3, 0
	beq      lbl_802E242C
	lfs      f0, lbl_8051CDA8@sda21(r2)
	li       r0, 2
	mr       r3, r31
	stfs     f0, 0x2dc(r31)
	stw      r0, 0x2cc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       isAttackableTarget__Q34Game6Kabuto3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E2608
	li       r0, 5
	mr       r3, r31
	stw      r0, 0x2cc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802E2608

lbl_802E242C:
	mr       r4, r31
	addi     r3, r1, 0x20
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x2c8(r31)
	lfs      f0, lbl_8051CDBC@sda21(r2)
	lfs      f2, 0x20(r1)
	fcmpo    cr0, f1, f0
	lfs      f0, 0x28(r1)
	lfs      f31, 0x2d0(r31)
	lfs      f28, 0x2d8(r31)
	bgt      lbl_802E2480
	fsubs    f1, f0, f28
	lfs      f0, lbl_8051CDC0@sda21(r2)
	fsubs    f2, f2, f31
	fmuls    f1, f1, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802E2494

lbl_802E2480:
	li       r0, 1
	mr       r3, r31
	stw      r0, 0x2cc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802E2608

lbl_802E2494:
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	addi     r3, r1, 8
	lfs      f29, 0x334(r5)
	lwz      r12, 8(r12)
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
	lfs      f0, lbl_8051CDB4@sda21(r2)
	lfs      f1, lbl_8051CDB0@sda21(r2)
	fmuls    f0, f0, f29
	fmuls    f29, f31, f30
	fmuls    f1, f1, f0
	fabs     f0, f29
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_802E253C
	lfs      f0, lbl_8051CDA8@sda21(r2)
	fcmpo    cr0, f29, f0
	ble      lbl_802E2538
	fmr      f29, f1
	b        lbl_802E253C

lbl_802E2538:
	fneg     f29, f1

lbl_802E253C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f29, f1
	bl       roundAng__Ff
	fabs     f3, f31
	stfs     f1, 0x1fc(r31)
	lfs      f0, lbl_8051CDB8@sda21(r2)
	lfs      f2, 0x1fc(r31)
	frsp     f1, f3
	stfs     f2, 0x1a8(r31)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802E25F8
	lbz      r0, 0x2e0(r31)
	cmplwi   r0, 0
	beq      lbl_802E2608
	mr       r3, r31
	lwz      r4, 0xc0(r31)
	lwz      r12, 0(r31)
	lfs      f29, 0x2e4(r4)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r31
	lfs      f2, 0x1d4(r31)
	lwz      r12, 0(r31)
	frsp     f30, f1
	lfs      f31, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x14(r1)
	stfs     f31, 0x18(r1)
	stfs     f0, 0x1c(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f29, f30
	frsp     f1, f1
	stfs     f0, 0x1d4(r31)
	fmuls    f0, f29, f1
	stfs     f31, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_802E2608

lbl_802E25F8:
	li       r0, 2
	mr       r3, r31
	stw      r0, 0x2cc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802E2608:
	mr       r3, r31
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E263C
	li       r0, 0
	lfs      f0, lbl_8051CDA8@sda21(r2)
	stb      r0, 0x2e0(r31)
	lwz      r0, 0x1e0(r31)
	ori      r0, r0, 0x400
	stw      r0, 0x1e0(r31)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)

lbl_802E263C:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2c8(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c8(r31)
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802E26A0
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0
	bne      lbl_802E2678
	li       r0, 1
	stb      r0, 0x2e0(r31)
	b        lbl_802E26A0

lbl_802E2678:
	cmplwi   r0, 0x3e8
	bne      lbl_802E26A0
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2cc(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802E26A0:
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	psq_l    f28, 72(r1), 0, qr0
	lfd      f28, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r0, 0x84(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	802E26D8
 * Size:	000024
 */
void Kabuto::StateMove::cleanup(EnemyBase* enemy) { enemy->constraintOff(); }

/*
 * --INFO--
 * Address:	802E26FC
 * Size:	000068
 */
void Kabuto::StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kabuto         = OBJ(enemy);
	kabuto->mStateTimer = 0.0f;
	kabuto->mNextState  = KABUTO_NULL;
	kabuto->enableEvent(0, EB_Constrained);
	kabuto->mTargetVelocity = Vector3f(0.0f);
	kabuto->setEmotionExcitement();
	kabuto->startMotion(KABUTOANIM_Flick, nullptr);
}

/*
 * --INFO--
 * Address:	802E2764
 * Size:	00016C
 */
void Kabuto::StateFlick::exec(EnemyBase* enemy)
{
	Obj* kabuto = OBJ(enemy);
	if (kabuto->mCurAnim->mIsPlaying) {
		if (kabuto->mCurAnim->mType == KEYEVENT_2) {
			EnemyFunc::flickNearbyNavi(kabuto, CG_PARMS(kabuto)->mGeneral.mShakeRange.mValue,
			                           CG_PARMS(kabuto)->mGeneral.mShakeKnockback.mValue, CG_PARMS(kabuto)->mGeneral.mShakeDamage.mValue,
			                           FLICK_BACKWARD_ANGLE, nullptr);
			EnemyFunc::flickNearbyPikmin(kabuto, CG_PARMS(kabuto)->mGeneral.mShakeRange.mValue,
			                             CG_PARMS(kabuto)->mGeneral.mShakeKnockback.mValue, CG_PARMS(kabuto)->mGeneral.mShakeDamage.mValue,
			                             kabuto->getFaceDir(), nullptr);
			EnemyFunc::flickStickPikmin(kabuto, CG_PARMS(kabuto)->mGeneral.mShakeChance.mValue,
			                            CG_PARMS(kabuto)->mGeneral.mShakeKnockback.mValue, CG_PARMS(kabuto)->mGeneral.mShakeDamage.mValue,
			                            kabuto->getFaceDir(), nullptr);
			kabuto->mFlickTimer = 0.0f;

			if (kabuto->mHealth <= 0.0f) {
				transit(kabuto, KABUTO_Dead, nullptr);
			}
		} else if (kabuto->mCurAnim->mType == KEYEVENT_END) {
			if (kabuto->mHealth <= 0.0f) {
				transit(kabuto, KABUTO_Dead, nullptr);
			} else {
				transit(kabuto, KABUTO_Attack, nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	802E28D0
 * Size:	000038
 */
void Kabuto::StateFlick::cleanup(EnemyBase* enemy)
{
	enemy->constraintOff();
	enemy->setEmotionCaution();
}

/*
 * --INFO--
 * Address:	802E2908
 * Size:	00007C
 */
void Kabuto::StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kabuto         = OBJ(enemy);
	kabuto->mStateTimer = 0.0f;
	kabuto->mAlertTimer = 0.0f;
	kabuto->mNextState  = KABUTO_NULL;
	kabuto->enableEvent(0, EB_Constrained);
	kabuto->setEmotionExcitement();
	kabuto->disableEvent(0, EB_Cullable);
	kabuto->mTargetVelocity = Vector3f(0.0f);
	kabuto->startMotion(KABUTOANIM_Attack, nullptr);
}

/*
 * --INFO--
 * Address:	802E2984
 * Size:	000128
 */
void Kabuto::StateAttack::exec(EnemyBase* enemy)
{
	Obj* kabuto = OBJ(enemy);
	if (kabuto->mHealth <= 0.0f) {
		transit(kabuto, KABUTO_Dead, nullptr);
		return;
	}

	if (kabuto->mCurAnim->mIsPlaying) {
		if (kabuto->mCurAnim->mType == KEYEVENT_2) {
			kabuto->createStoneAttack();
			kabuto->createRockEmitEffect();

		} else if (kabuto->mCurAnim->mType == KEYEVENT_END) {
			if (EnemyFunc::isStartFlick(kabuto, false)) {
				transit(kabuto, KABUTO_Flick, nullptr);
				return;
			}

			if (kabuto->getSearchedTarget()) {
				transit(kabuto, KABUTO_Turn, nullptr);
				return;
			}

			transit(kabuto, KABUTO_Wait, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802E2AAC
 * Size:	000044
 */
void Kabuto::StateAttack::cleanup(EnemyBase* enemy)
{
	enemy->constraintOff();
	enemy->enableEvent(0, EB_Cullable);
	enemy->setEmotionCaution();
}

/*
 * --INFO--
 * Address:	802E2AF0
 * Size:	0000B8
 */
void Kabuto::StateFixStay::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kabuto            = OBJ(enemy);
	kabuto->mNextState     = KABUTO_NULL;
	kabuto->mIsUnderground = true;
	kabuto->setAtari(false);
	kabuto->enableEvent(0, EB_BitterImmune);
	kabuto->enableEvent(0, EB_Invulnerable);
	kabuto->disableEvent(0, EB_LifegaugeVisible);
	kabuto->disableEvent(0, EB_Animating);
	kabuto->enableEvent(0, EB_ModelHidden);
	kabuto->startMotion(KABUTOANIM_FixAppear, nullptr);
	kabuto->stopMotion();
	kabuto->finishWaitEffect();
}

/*
 * --INFO--
 * Address:	802E2BA8
 * Size:	0000E4
 */
void Kabuto::StateFixStay::exec(EnemyBase* enemy)
{
	Obj* kabuto      = OBJ(enemy);
	Creature* target = kabuto->getSearchedTarget();
	if (target) {
		Vector3f targetPos  = target->getPosition();
		Vector3f pos        = kabuto->getPosition();
		kabuto->mFaceDir    = JMAAtan2Radian(targetPos.x - pos.x, targetPos.z - pos.z);
		kabuto->mRotation.y = kabuto->mFaceDir;
		transit(kabuto, KABUTO_FixAppear, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802E2C8C
 * Size:	000084
 */
void Kabuto::StateFixStay::cleanup(EnemyBase* enemy)
{
	Obj* kabuto            = OBJ(enemy);
	kabuto->mIsUnderground = false;
	kabuto->setAtari(true);
	kabuto->disableEvent(0, EB_BitterImmune);
	kabuto->disableEvent(0, EB_Invulnerable);
	kabuto->enableEvent(0, EB_LifegaugeVisible);
	kabuto->enableEvent(0, EB_Animating);
	kabuto->disableEvent(0, EB_ModelHidden);
}

/*
 * --INFO--
 * Address:	802E2D10
 * Size:	00018C
 */
void Kabuto::StateFixAppear::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kabuto = OBJ(enemy);
	kabuto->lifeIncrement();
	kabuto->mNextState  = KABUTO_NULL;
	kabuto->mAlertTimer = 0.0f;
	kabuto->enableEvent(0, EB_NoInterrupt);
	kabuto->setEmotionExcitement();
	kabuto->startMotion(KABUTOANIM_FixAppear, nullptr);

	Vector3f pos = kabuto->getPosition();
	efx::Arg fxArg(pos);
	efx::THebiAphd_kkabuto_appear appearFX;

	appearFX.create(&fxArg);

	kabuto->finishWaitEffect();
	EnemyFunc::flickNearbyNavi(kabuto, CG_PARMS(kabuto)->mGeneral.mShakeRange.mValue, CG_PARMS(kabuto)->mGeneral.mShakeKnockback.mValue,
	                           CG_PARMS(kabuto)->mGeneral.mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
	EnemyFunc::flickNearbyPikmin(kabuto, CG_PARMS(kabuto)->mGeneral.mShakeRange.mValue, CG_PARMS(kabuto)->mGeneral.mShakeKnockback.mValue,
	                             CG_PARMS(kabuto)->mGeneral.mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
	EnemyFunc::flickStickPikmin(kabuto, CG_PARMS(kabuto)->mGeneral.mShakeChance.mValue, CG_PARMS(kabuto)->mGeneral.mShakeKnockback.mValue,
	                            CG_PARMS(kabuto)->mGeneral.mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
}

/*
 * --INFO--
 * Address:	802E2E9C
 * Size:	000244
 */
void Kabuto::StateFixAppear::exec(EnemyBase* enemy)
{
	Obj* kabuto = OBJ(enemy);
	if (kabuto->mCurAnim->mIsPlaying && kabuto->mCurAnim->mType == KEYEVENT_END) {
		if (kabuto->mHealth <= 0.0f) {
			transit(kabuto, KABUTO_Dead, nullptr);
			return;
		}

		if (EnemyFunc::isStartFlick(kabuto, false)) {
			transit(kabuto, KABUTO_FixFlick, nullptr);
			return;
		}

		if (kabuto->isAttackableTarget()) {
			transit(kabuto, KABUTO_FixAttack, nullptr);
			return;
		}

		Creature* target = kabuto->getSearchedTarget();
		if (target) {
			f32 angle = kabuto->getCreatureViewAngle(target);
			f32 limit = CG_PARMS(kabuto)->mGeneral.mMaxAttackAngle();
			if (FABS(angle) <= PI * (DEG2RAD * limit)) {
				transit(kabuto, KABUTO_FixWait, nullptr);
				return;
			} else {
				transit(kabuto, KABUTO_FixTurn, nullptr);
				return;
			}
		}

		transit(kabuto, KABUTO_FixHide, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802E30E0
 * Size:	000010
 */
void Kabuto::StateFixAppear::cleanup(EnemyBase* enemy) { enemy->disableEvent(0, EB_NoInterrupt); }

/*
 * --INFO--
 * Address:	802E30F0
 * Size:	000130
 */
void Kabuto::StateFixHide::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kabuto            = OBJ(enemy);
	kabuto->mNextState     = KABUTO_NULL;
	kabuto->mIsUnderground = true;
	kabuto->enableEvent(0, EB_BitterImmune);
	kabuto->enableEvent(0, EB_Invulnerable);
	kabuto->setEmotionCaution();
	kabuto->startMotion(KABUTOANIM_FixHide, nullptr);

	Vector3f pos = kabuto->getPosition();
	efx::Arg fxArg(pos);
	efx::THebiAphd_kkabuto_dive diveFX;

	diveFX.create(&fxArg);

	kabuto->finishWaitEffect();
}

/*
 * --INFO--
 * Address:	802E3220
 * Size:	000090
 */
void Kabuto::StateFixHide::exec(EnemyBase* enemy)
{
	Obj* kabuto = OBJ(enemy);
	EnemyFunc::flickStickPikmin(kabuto, CG_PARMS(kabuto)->mGeneral.mShakeChance.mValue, CG_PARMS(kabuto)->mGeneral.mShakeKnockback.mValue,
	                            CG_PARMS(kabuto)->mGeneral.mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);

	if (kabuto->mCurAnim->mIsPlaying && kabuto->mCurAnim->mType == KEYEVENT_END) {
		transit(kabuto, KABUTO_FixStay, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802E32B0
 * Size:	000024
 */
void Kabuto::StateFixHide::cleanup(EnemyBase* enemy)
{
	Obj* kabuto            = OBJ(enemy);
	kabuto->mIsUnderground = false;
	enemy->disableEvent(0, EB_Invulnerable);
	enemy->disableEvent(0, EB_BitterImmune);
}

/*
 * --INFO--
 * Address:	802E32D4
 * Size:	000054
 */
void Kabuto::StateFixWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kabuto        = OBJ(enemy);
	kabuto->mNextState = KABUTO_NULL;
	kabuto->startMotion(KABUTOANIM_FixWait, nullptr);
	kabuto->startWaitEffect();
}

/*
 * --INFO--
 * Address:	802E332C
 * Size:	000204
 */
void Kabuto::StateFixWait::exec(EnemyBase* enemy)
{
	Obj* kabuto = OBJ(enemy);
	if (kabuto->mHealth <= 0.0f) {
		transit(kabuto, KABUTO_Dead, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(kabuto, false)) {
		kabuto->mNextState = KABUTO_FixFlick;
		kabuto->finishMotion();
	} else if (kabuto->isAttackableTarget()) {
		kabuto->mNextState = KABUTO_FixAttack;
		kabuto->finishMotion();
	} else {
		Creature* target = kabuto->getSearchedTarget();
		if (target) {
			f32 angle = kabuto->getCreatureViewAngle(target);
			f32 limit = CG_PARMS(kabuto)->mGeneral.mMaxAttackAngle();
			if (FABS(angle) <= PI * (DEG2RAD * limit)) {
				kabuto->mNextState = KABUTO_FixWait;
			} else {
				kabuto->mNextState = KABUTO_FixTurn;
				kabuto->finishMotion();
			}
		} else {
			kabuto->mNextState = KABUTO_FixHide;
		}
	}

	if (kabuto->mCurAnim->mIsPlaying && kabuto->mCurAnim->mType == KEYEVENT_END) {
		transit(kabuto, kabuto->mNextState, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802E3530
 * Size:	000004
 */
void Kabuto::StateFixWait::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802E3534
 * Size:	000068
 */
void Kabuto::StateFixTurn::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kabuto        = OBJ(enemy);
	kabuto->mNextState = KABUTO_NULL;
	kabuto->startMotion(KABUTOANIM_FixPivot, nullptr);
	kabuto->startWaitEffect();
	kabuto->startRotateEffect();
}

/*
 * --INFO--
 * Address:	802E35A0
 * Size:	000290
 */
void Kabuto::StateFixTurn::exec(EnemyBase* enemy)
{
	Obj* kabuto = OBJ(enemy);
	if (kabuto->mHealth <= 0.0f) {
		transit(kabuto, KABUTO_Dead, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(kabuto, false)) {
		kabuto->mNextState = KABUTO_FixFlick;
		kabuto->finishMotion();
	} else {
		Creature* target = kabuto->getSearchedTarget();
		if (target) {
			kabuto->mAlertTimer = 0.0f;
			Vector3f targetPos  = target->getPosition();
			f32 angle           = kabuto->changeFaceDir(targetPos);
			if (kabuto->isAttackableTarget()) {
				kabuto->mNextState = KABUTO_FixAttack;
				kabuto->finishMotion();
			} else {
				f32 limit = CG_PARMS(kabuto)->mGeneral.mMaxAttackAngle();
				if (FABS(angle) <= PI * (DEG2RAD * limit)) {
					kabuto->mNextState = KABUTO_FixWait;
					kabuto->finishMotion();
				} else {
					kabuto->mNextState = KABUTO_FixTurn;
				}
			}
		} else {
			kabuto->mNextState = KABUTO_FixHide;
			kabuto->finishMotion();
		}
	}

	if (kabuto->mCurAnim->mIsPlaying && kabuto->mCurAnim->mType == KEYEVENT_END) {
		transit(kabuto, kabuto->mNextState, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802E3830
 * Size:	000030
 */
void Kabuto::StateFixTurn::cleanup(EnemyBase* enemy)
{
	Obj* kabuto = OBJ(enemy);
	kabuto->finishRotateEffect();
}

/*
 * --INFO--
 * Address:	802E3864
 * Size:	000068
 */
void Kabuto::StateFixAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kabuto         = OBJ(enemy);
	kabuto->mNextState  = KABUTO_NULL;
	kabuto->mAlertTimer = 0.0f;
	kabuto->disableEvent(0, EB_Cullable);
	kabuto->startMotion(KABUTOANIM_FixAttack, nullptr);
	kabuto->startWaitEffect();
}

/*
 * --INFO--
 * Address:	802E38CC
 * Size:	000260
 */
void Kabuto::StateFixAttack::exec(EnemyBase* enemy)
{
	Obj* kabuto = OBJ(enemy);
	if (kabuto->mHealth <= 0.0f) {
		transit(kabuto, KABUTO_Dead, nullptr);
		return;
	}

	if (kabuto->mCurAnim->mIsPlaying) {
		if (kabuto->mCurAnim->mType == KEYEVENT_2) {
			kabuto->createStoneAttack();
			kabuto->createRockEmitEffect();

		} else if (kabuto->mCurAnim->mType == KEYEVENT_END) {
			if (EnemyFunc::isStartFlick(kabuto, false)) {
				transit(kabuto, KABUTO_FixFlick, nullptr);
				return;
			}

			if (kabuto->isAttackableTarget()) {
				transit(kabuto, KABUTO_FixAttack, nullptr);
				return;
			}

			Creature* target = kabuto->getSearchedTarget();
			if (target) {
				f32 angle = kabuto->getCreatureViewAngle(target);
				f32 limit = CG_PARMS(kabuto)->mGeneral.mMaxAttackAngle();
				if (FABS(angle) <= PI * (DEG2RAD * limit)) {
					transit(kabuto, KABUTO_FixWait, nullptr);
				} else {
					transit(kabuto, KABUTO_FixTurn, nullptr);
				}
			} else {
				transit(kabuto, KABUTO_FixHide, nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	802E3B2C
 * Size:	000004
 */
void Kabuto::StateFixAttack::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802E3B30
 * Size:	000054
 */
void Kabuto::StateFixFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kabuto        = OBJ(enemy);
	kabuto->mNextState = KABUTO_NULL;
	kabuto->startMotion(KABUTOANIM_FixFlick, nullptr);
	kabuto->startWaitEffect();
}

/*
 * --INFO--
 * Address:	802E3B84
 * Size:	00016C
 */
void Kabuto::StateFixFlick::exec(EnemyBase* enemy)
{
	Obj* kabuto = OBJ(enemy);
	if (kabuto->mCurAnim->mIsPlaying) {
		if (kabuto->mCurAnim->mType == KEYEVENT_2) {
			EnemyFunc::flickNearbyNavi(kabuto, CG_PARMS(kabuto)->mGeneral.mShakeRange.mValue,
			                           CG_PARMS(kabuto)->mGeneral.mShakeKnockback.mValue, CG_PARMS(kabuto)->mGeneral.mShakeDamage.mValue,
			                           FLICK_BACKWARD_ANGLE, nullptr);
			EnemyFunc::flickNearbyPikmin(kabuto, CG_PARMS(kabuto)->mGeneral.mShakeRange.mValue,
			                             CG_PARMS(kabuto)->mGeneral.mShakeKnockback.mValue, CG_PARMS(kabuto)->mGeneral.mShakeDamage.mValue,
			                             kabuto->getFaceDir(), nullptr);
			EnemyFunc::flickStickPikmin(kabuto, CG_PARMS(kabuto)->mGeneral.mShakeChance.mValue,
			                            CG_PARMS(kabuto)->mGeneral.mShakeKnockback.mValue, CG_PARMS(kabuto)->mGeneral.mShakeDamage.mValue,
			                            kabuto->getFaceDir(), nullptr);
			kabuto->mFlickTimer = 0.0f;

			if (kabuto->mHealth <= 0.0f) {
				transit(kabuto, KABUTO_Dead, nullptr);
			}
		} else if (kabuto->mCurAnim->mType == KEYEVENT_END) {
			if (kabuto->mHealth <= 0.0f) {
				transit(kabuto, KABUTO_Dead, nullptr);
			} else {
				transit(kabuto, KABUTO_FixAttack, nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	802E3CF0
 * Size:	000004
 */
void Kabuto::StateFixFlick::cleanup(EnemyBase* enemy) { }

} // namespace Kabuto
} // namespace Game

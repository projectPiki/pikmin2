#include "Game/Entities/Frog.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "efx/TFrog.h"
#include "nans.h"

namespace Game {
namespace Frog {

/*
 * --INFO--
 * Address:	80258548
 * Size:	000138
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator();
	setFSM(new FSM);
	createEffect();
}

/*
 * --INFO--
 * Address:	80258680
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	80258684
 * Size:	000078
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	_2C4       = 128.0f;
	mAirTimer  = 0.0f;
	mNextState = FROG_NULL;
	mIsInAir   = false;
	mIsFalling = false;
	setupEffect();
	mFsm->start(this, FROG_Wait, nullptr);
}

/*
 * --INFO--
 * Address:	802586FC
 * Size:	000044
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	finishJumpEffect();
	EnemyBase::onKill(killArg);
}

/*
 * --INFO--
 * Address:	80258740
 * Size:	000044
 */
void Obj::doUpdate()
{
	updateCaution();
	mFsm->exec(this);
}

/*
 * --INFO--
 * Address:	80258784
 * Size:	000280
 */
void Obj::doSimulationFlying(f32 step)
{

	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stfd     f30, 0x40(r1)
	psq_st   f30, 72(r1), 0, qr0
	stfd     f29, 0x30(r1)
	psq_st   f29, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lfs      f0, lbl_8051AACC@sda21(r2)
	lwz      r3, 0xc0(r3)
	lfs      f2, 0x2c0(r31)
	lfs      f3, 0x81c(r3)
	fsubs    f8, f3, f2
	fcmpo    cr0, f8, f0
	ble      lbl_802588AC
	lfs      f6, 0x1d0(r31)
	lfs      f5, 0x1c8(r31)
	fmuls    f2, f6, f6
	fmadds   f4, f5, f5, f2
	fcmpo    cr0, f4, f0
	ble      lbl_802587F4
	ble      lbl_802587F8
	frsqrte  f0, f4
	fmuls    f4, f0, f4
	b        lbl_802587F8

lbl_802587F4:
	fmr      f4, f0

lbl_802587F8:
	lfs      f3, 0x2c8(r31)
	lfs      f2, 0x18c(r31)
	lfs      f0, lbl_8051AACC@sda21(r2)
	fsubs    f2, f3, f2
	stfs     f2, 0x1c8(r31)
	lfs      f3, 0x2d0(r31)
	lfs      f2, 0x194(r31)
	fsubs    f2, f3, f2
	stfs     f2, 0x1d0(r31)
	lfs      f7, 0x1c8(r31)
	lfs      f3, 0x1d0(r31)
	fmuls    f2, f7, f7
	fmuls    f3, f3, f3
	fadds    f2, f2, f3
	fcmpo    cr0, f2, f0
	ble      lbl_80258850
	fmadds   f2, f7, f7, f3
	fcmpo    cr0, f2, f0
	ble      lbl_80258854
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_80258854

lbl_80258850:
	fmr      f2, f0

lbl_80258854:
	lfs      f0, lbl_8051AAD0@sda21(r2)
	fmuls    f0, f0, f2
	fdivs    f3, f0, f8
	fcmpo    cr0, f3, f4
	ble      lbl_80258874
	stfs     f5, 0x1c8(r31)
	stfs     f6, 0x1d0(r31)
	b        lbl_802588B4

lbl_80258874:
	lfs      f0, lbl_8051AACC@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_802588A0
	fdivs    f0, f7, f2
	fmuls    f0, f3, f0
	stfs     f0, 0x1c8(r31)
	lfs      f0, 0x1d0(r31)
	fdivs    f0, f0, f2
	fmuls    f0, f3, f0
	stfs     f0, 0x1d0(r31)
	b        lbl_802588B4

lbl_802588A0:
	stfs     f0, 0x1d0(r31)
	stfs     f0, 0x1c8(r31)
	b        lbl_802588B4

lbl_802588AC:
	stfs     f0, 0x1d0(r31)
	stfs     f0, 0x1c8(r31)

lbl_802588B4:
	lwz      r3, _aiConstants__4Game@sda21(r13)
	lfs      f2, 0x1cc(r31)
	lfs      f3, 0x28(r3)
	lfs      f0, lbl_8051AACC@sda21(r2)
	fnmsubs  f1, f1, f3, f2
	stfs     f1, 0x1cc(r31)
	lfs      f1, 0x1cc(r31)
	fcmpo    cr0, f1, f0
	ble      lbl_802589C0
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
	lfs      f1, 0x2c8(r31)
	lfs      f0, 0x2d0(r31)
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
	lfs      f0, lbl_8051AAD8@sda21(r2)
	lfs      f1, lbl_8051AAD4@sda21(r2)
	fmuls    f0, f0, f30
	fabs     f2, f31
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_80258994
	lfs      f0, lbl_8051AACC@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_80258990
	fmr      f31, f1
	b        lbl_80258994

lbl_80258990:
	fneg     f31, f1

lbl_80258994:
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
	b        lbl_802589C4

lbl_802589C0:
	stfs     f0, 0x1cc(r31)

lbl_802589C4:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2c0(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c0(r31)
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	psq_l    f29, 56(r1), 0, qr0
	lfd      f29, 0x30(r1)
	lwz      r0, 0x64(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	80258A04
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics& gfx) { }

/*
 * --INFO--
 * Address:	80258A08
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	80258A28
 * Size:	00004C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/*
 * --INFO--
 * Address:	80258A74
 * Size:	000110
 */
void Obj::getShadowParam(ShadowParam&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	addi     r4, r1, 8
	stw      r30, 0x18(r1)
	mr       r30, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f0, 8(r1)
	mr       r3, r30
	lfs      f1, lbl_8051AADC@sda21(r2)
	stfs     f0, 0(r31)
	lfs      f0, 0x190(r30)
	fadds    f0, f1, f0
	stfs     f0, 4(r31)
	lfs      f0, 0x10(r1)
	stfs     f0, 8(r31)
	lwz      r12, 0(r30)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80258B48
	lwz      r0, 0xc8(r30)
	cmplwi   r0, 0
	beq      lbl_80258B10
	lwz      r0, 0x1e4(r30)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80258B04
	lfs      f0, lbl_8051AAE0@sda21(r2)
	stfs     f0, 0x18(r31)
	b        lbl_80258B50

lbl_80258B04:
	lfs      f0, lbl_8051AAE4@sda21(r2)
	stfs     f0, 0x18(r31)
	b        lbl_80258B50

lbl_80258B10:
	mr       r3, r30
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 4
	bne      lbl_80258B30
	lfs      f1, 4(r31)
	lfs      f0, lbl_8051AAE8@sda21(r2)
	fsubs    f0, f1, f0
	stfs     f0, 4(r31)

lbl_80258B30:
	lwz      r3, 0xc0(r30)
	lfs      f1, lbl_8051AAEC@sda21(r2)
	lfs      f0, 0x844(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x18(r31)
	b        lbl_80258B50

lbl_80258B48:
	lfs      f0, lbl_8051AAF0@sda21(r2)
	stfs     f0, 0x18(r31)

lbl_80258B50:
	lfs      f2, lbl_8051AACC@sda21(r2)
	lfs      f1, lbl_8051AAF4@sda21(r2)
	stfs     f2, 0xc(r31)
	lfs      f0, lbl_8051AAE8@sda21(r2)
	stfs     f1, 0x10(r31)
	stfs     f2, 0x14(r31)
	stfs     f0, 0x1c(r31)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80258B84
 * Size:	000104
 */
void Obj::collisionCallback(CollEvent& event)
{
	if (Creature* creature = event.mCollidingCreature) {
		if (!isEvent(0, EB_Bittered)) {

			if (mIsFalling) {
				if (creature->mBounceTriangle) {
					if (creature->isNavi() || creature->isPiki()) {
						InteractPress press(this, C_PARMS->mGeneral.mAttackDamage.mValue, nullptr);
						event.mCollidingCreature->stimulate(press);
					}
				}
			}
		}
	}

	setCollEvent(event);
}

/*
 * --INFO--
 * Address:	80258C88
 * Size:	000034
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	finishJumpEffect();
}

/*
 * --INFO--
 * Address:	80258CBC
 * Size:	000064
 */
void Obj::doFinishStoneState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doFinishStoneState__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 3
	blt      lbl_80258D0C
	cmpwi    r3, 6
	bgt      lbl_80258D0C
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 2
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_80258D0C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80258D20
 * Size:	000034
 */
void Obj::doStartEarthquakeFitState()
{
	EnemyBase::doStartEarthquakeFitState();
	finishJumpEffect();
}

/*
 * --INFO--
 * Address:	80258D54
 * Size:	00005C
 */
void Obj::doFinishEarthquakeFitState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 3
	bne      lbl_80258D9C
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 2
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_80258D9C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80258DB0
 * Size:	000034
 */
void Obj::doStartWaitingBirthTypeDrop()
{
	EnemyBase::doStartWaitingBirthTypeDrop();
	effectDrawOff();
}

/*
 * --INFO--
 * Address:	80258DE4
 * Size:	000034
 */
void Obj::doFinishWaitingBirthTypeDrop()
{
	EnemyBase::doFinishWaitingBirthTypeDrop();
	effectDrawOn();
}

/*
 * --INFO--
 * Address:	80258E18
 * Size:	000028
 */
void Obj::startCarcassMotion() { EnemyBase::startMotion(FROGANIM_Carry, nullptr); }

/*
 * --INFO--
 * Address:	80258E5C
 * Size:	000020
 */
void Obj::doStartMovie() { effectDrawOff(); }

/*
 * --INFO--
 * Address:	80258E7C
 * Size:	000020
 */
void Obj::doEndMovie() { effectDrawOn(); }

/*
 * --INFO--
 * Address:	80258E9C
 * Size:	000088
 */
Vector3f Obj::getOffsetForMapCollision()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	addi     r4, r1, 8
	stw      r30, 0x18(r1)
	mr       r30, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	lfs      f1, 0x18c(r31)
	lfs      f0, lbl_8051AACC@sda21(r2)
	fsubs    f2, f2, f1
	lfs      f1, 0x10(r1)
	stfs     f0, 0xc(r1)
	stfs     f2, 8(r1)
	lfs      f0, 0x194(r31)
	fsubs    f0, f1, f0
	stfs     f0, 0x10(r1)
	stfs     f2, 0(r30)
	lfs      f0, 0xc(r1)
	stfs     f0, 4(r30)
	lfs      f0, 0x10(r1)
	stfs     f0, 8(r30)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80258F24
 * Size:	000054
 */
void Obj::getCommonEffectPos(Vector3f&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	addi     r4, r1, 8
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f0, 8(r1)
	stfs     f0, 0(r31)
	lfs      f0, 0xc(r1)
	stfs     f0, 4(r31)
	lfs      f0, 0x10(r1)
	stfs     f0, 8(r31)
	lwz      r31, 0x1c(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80258F78
 * Size:	000050
 */
void Obj::updateCaution()
{
	/*
	lwz      r4, 0x1e0(r3)
	rlwinm.  r0, r4, 0, 0x1b, 0x1b
	bne      lbl_80258F98
	rlwinm.  r0, r4, 0, 0x1e, 0x1e
	bne      lbl_80258F98
	lwz      r0, 0x1f4(r3)
	cmpwi    r0, 0
	beq      lbl_80258FA0

lbl_80258F98:
	lfs      f0, lbl_8051AACC@sda21(r2)
	stfs     f0, 0x2c4(r3)

lbl_80258FA0:
	lwz      r4, 0xc0(r3)
	lfs      f1, 0x2c4(r3)
	lfs      f0, 0x62c(r4)
	fcmpo    cr0, f1, f0
	bgelr
	lwz      r4, sys@sda21(r13)
	lfs      f0, 0x54(r4)
	fadds    f0, f1, f0
	stfs     f0, 0x2c4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80258FC8
 * Size:	000024
 */
f32 Obj::getViewAngle()
{
	// C_PARMS->
	/*
	lwz      r4, 0xc0(r3)
	lfs      f1, 0x2c4(r3)
	lfs      f0, 0x62c(r4)
	fcmpo    cr0, f1, f0
	bge      lbl_80258FE4
	lfs      f1, lbl_8051AB00@sda21(r2)
	blr

lbl_80258FE4:
	lfs      f1, 0x424(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80258FEC
 * Size:	0000D8
 */
void Obj::startJumpAttack()
{
	/*
	lwz      r0, 0x1e0(r3)
	lfs      f2, lbl_8051AACC@sda21(r2)
	ori      r0, r0, 4
	stw      r0, 0x1e0(r3)
	stfs     f2, 0x2c0(r3)
	lfs      f1, 0x2c8(r3)
	lfs      f0, 0x18c(r3)
	fsubs    f0, f1, f0
	stfs     f0, 0x1c8(r3)
	lfs      f1, 0x2d0(r3)
	lfs      f0, 0x194(r3)
	fsubs    f0, f1, f0
	stfs     f0, 0x1d0(r3)
	lfs      f3, 0x1c8(r3)
	lfs      f1, 0x1d0(r3)
	fmuls    f0, f3, f3
	fmuls    f1, f1, f1
	fadds    f0, f0, f1
	fcmpo    cr0, f0, f2
	ble      lbl_80259054
	fmadds   f1, f3, f3, f1
	fcmpo    cr0, f1, f2
	ble      lbl_80259058
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80259058

lbl_80259054:
	fmr      f1, f2

lbl_80259058:
	lfs      f0, lbl_8051AACC@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80259080
	lfs      f0, 0x1c8(r3)
	fdivs    f0, f0, f1
	stfs     f0, 0x1c8(r3)
	lfs      f0, 0x1d0(r3)
	fdivs    f0, f0, f1
	stfs     f0, 0x1d0(r3)
	b        lbl_80259088

lbl_80259080:
	stfs     f0, 0x1d0(r3)
	stfs     f0, 0x1c8(r3)

lbl_80259088:
	lfs      f0, lbl_8051AAD0@sda21(r2)
	lwz      r4, 0xc0(r3)
	fmuls    f2, f0, f1
	lfs      f0, 0x1c8(r3)
	lfs      f1, 0x81c(r4)
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	stfs     f0, 0x1c8(r3)
	lwz      r4, 0xc0(r3)
	lfs      f0, 0x844(r4)
	stfs     f0, 0x1cc(r3)
	lfs      f0, 0x1d0(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0x1d0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802590C4
 * Size:	0000D8
 */
void Obj::resetHomePosition()
{
	/*
	stwu     r1, -0x20(r1)
	lfs      f2, lbl_8051AB04@sda21(r2)
	lwz      r4, 0xc0(r3)
	lfs      f3, 0x1fc(r3)
	lfs      f1, 0x384(r4)
	lfs      f0, lbl_8051AACC@sda21(r2)
	fmuls    f4, f2, f1
	fcmpo    cr0, f3, f0
	bge      lbl_80259114
	lfs      f0, lbl_8051AB08@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	addi     r4, r4, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f2, f0
	b        lbl_80259138

lbl_80259114:
	lfs      f0, lbl_8051AB0C@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	addi     r4, r4, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r4, r0

lbl_80259138:
	lfs      f1, 0x18c(r3)
	lfs      f0, lbl_8051AACC@sda21(r2)
	fmadds   f1, f4, f2, f1
	stfs     f1, 0x198(r3)
	lfs      f1, 0x190(r3)
	stfs     f1, 0x19c(r3)
	lfs      f2, 0x1fc(r3)
	fcmpo    cr0, f2, f0
	bge      lbl_80259160
	fneg     f2, f2

lbl_80259160:
	lfs      f1, lbl_8051AB0C@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	addi     r4, r4, sincosTable___5JMath@l
	lfs      f0, 0x194(r3)
	fmuls    f1, f2, f1
	fctiwz   f1, f1
	stfd     f1, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r4, r4, r0
	lfs      f1, 4(r4)
	fmadds   f0, f4, f1, f0
	stfs     f0, 0x1a0(r3)
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8025919C
 * Size:	00024C
 */
void Obj::pressOnGround()
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	lfs      f4, lbl_8051AB10@sda21(r2)
	li       r4, 0
	stw      r0, 0x84(r1)
	stw      r31, 0x7c(r1)
	mr       r31, r3
	lwz      r5, 0xc0(r3)
	lfs      f1, 0x53c(r5)
	lfs      f2, 0x4c4(r5)
	lfs      f3, 0x4ec(r5)
	bl
"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	lfs      f0, lbl_8051AACC@sda21(r2)
	mr       r3, r31
	addi     r4, r1, 0x44
	stfs     f0, 0x20c(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x190(r31)
	lfs      f1, 0x44(r1)
	lfs      f0, 0x4c(r1)
	stfs     f1, 0x38(r1)
	stfs     f2, 0x3c(r1)
	stfs     f0, 0x40(r1)
	lwz      r3, 0x280(r31)
	cmplwi   r3, 0
	beq      lbl_802592BC
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0(r3)
	lis      r3, __vt__Q23efx5TBase@ha
	addi     r0, r3, __vt__Q23efx5TBase@l
	li       r5, 0
	lis      r3, __vt__Q23efx8TSimple4@ha
	stw      r0, 0x54(r1)
	addi     r0, r3, __vt__Q23efx8TSimple4@l
	lfs      f1, 0x38(r1)
	lfs      f0, 0x40(r1)
	lis      r4, __vt__Q23efx3Arg@ha
	lis      r3, __vt__Q23efx9TFrogDive@ha
	li       r9, 0x5c
	addi     r10, r4, __vt__Q23efx3Arg@l
	li       r8, 0x5d
	li       r7, 0x5e
	li       r6, 0x5f
	stw      r0, 0x54(r1)
	addi     r0, r3, __vt__Q23efx9TFrogDive@l
	addi     r3, r1, 0x54
	addi     r4, r1, 0x28
	stfs     f2, 0x3c(r1)
	stw      r10, 0x28(r1)
	stfs     f1, 0x2c(r1)
	stfs     f2, 0x30(r1)
	stfs     f0, 0x34(r1)
	sth      r9, 0x58(r1)
	sth      r8, 0x5a(r1)
	sth      r7, 0x5c(r1)
	sth      r6, 0x5e(r1)
	stw      r5, 0x60(r1)
	stw      r5, 0x64(r1)
	stw      r5, 0x68(r1)
	stw      r5, 0x6c(r1)
	stw      r0, 0x54(r1)
	bl       create__Q23efx8TSimple4FPQ23efx3Arg
	lfs      f1, lbl_8051AAF4@sda21(r2)
	mr       r3, r31
	bl       PSStartEnemyDownWatSE__FPQ24Game9EnemyBasef
	b        lbl_80259344

lbl_802592BC:
	lis      r3, __vt__Q23efx5TBase@ha
	li       r5, 0
	addi     r0, r3, __vt__Q23efx5TBase@l
	lis      r3, __vt__Q23efx8TSimple2@ha
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q23efx8TSimple2@l
	lis      r4, __vt__Q23efx3Arg@ha
	lis      r3, __vt__Q23efx13TFrogLanddrop@ha
	stw      r0, 8(r1)
	addi     r8, r4, __vt__Q23efx3Arg@l
	addi     r0, r3, __vt__Q23efx13TFrogLanddrop@l
	li       r7, 0x60
	li       r6, 0x61
	stfs     f2, 0x3c(r1)
	addi     r3, r1, 8
	addi     r4, r1, 0x18
	stw      r8, 0x18(r1)
	stfs     f1, 0x1c(r1)
	stfs     f2, 0x20(r1)
	stfs     f0, 0x24(r1)
	sth      r7, 0xc(r1)
	sth      r6, 0xe(r1)
	stw      r5, 0x10(r1)
	stw      r5, 0x14(r1)
	stw      r0, 8(r1)
	bl       create__Q23efx8TSimple2FPQ23efx3Arg
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x2ec(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	addi     r4, r1, 0x38
	bl       "createDropEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"

lbl_80259344:
	lwz      r3, cameraMgr__4Game@sda21(r13)
	addi     r5, r1, 0x38
	li       r4, 6
	li       r6, 2
	bl       "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	addi     r5, r1, 0x38
	li       r4, 0xe
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	lwz      r0, 0x280(r31)
	cmplwi   r0, 0
	beq      lbl_802593A8
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x582d
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_802593D4

lbl_802593A8:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x5827
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_802593D4:
	lwz      r0, 0x84(r1)
	lwz      r31, 0x7c(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	802593E8
 * Size:	0000B0
 */
void Obj::createEffect() { mEfxPota = new efx::TFrogPota; }

/*
 * --INFO--
 * Address:	80259498
 * Size:	000010
 */
void Obj::setupEffect() { mEfxPota->mPosition = &mPosition; }

/*
 * --INFO--
 * Address:	802594A8
 * Size:	000034
 */
void Obj::startJumpEffect() { mEfxPota->create(nullptr); }

/*
 * --INFO--
 * Address:	802594DC
 * Size:	000030
 */
void Obj::finishJumpEffect() { mEfxPota->fade(); }

/*
 * --INFO--
 * Address:	8025950C
 * Size:	0000C0
 */
void Obj::createDownEffect(f32 scale)
{
	Sys::Sphere sphere;
	getBoundingSphere(sphere);
	Vector3f fxPos(sphere.mPosition.x, mPosition.y, sphere.mPosition.z);
	if (mWaterBox) {
		createSplashDownEffect(fxPos, scale);
	} else {
		createDropEffect(fxPos, scale);
	}

	cameraMgr->startVibration(0, mPosition, 2);
	rumbleMgr->startRumble(11, mPosition, 2);
}

/*
 * --INFO--
 * Address:	802595CC
 * Size:	000030
 */
void Obj::effectDrawOn() { mEfxPota->endDemoDrawOn(); }

/*
 * --INFO--
 * Address:	802595FC
 * Size:	000030
 */
void Obj::effectDrawOff() { mEfxPota->startDemoDrawOff(); }

} // namespace Frog
} // namespace Game

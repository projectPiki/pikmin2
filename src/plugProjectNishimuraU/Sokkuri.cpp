#include "Game/Entities/Sokkuri.h"
#include "Game/EnemyFunc.h"
#include "efx/TJgm.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Sokkuri {

/*
 * --INFO--
 * Address:	802F1264
 * Size:	000130
 */
Obj::Obj()
{
	m_animator = new ProperAnimator;
	setFSM(new FSM);
}

/*
 * --INFO--
 * Address:	802F1394
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802F1398
 * Size:	00008C
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	disableEvent(0, EB_LifegaugeVisible);
	_2C0        = 1;
	m_timer     = 0.0f;
	m_nextState = SOKKURI_NULL;
	resetMoveVelocity();
	m_fsm->start(this, SOKKURI_Stay, nullptr);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	lwz      r3, 0x1e0(r31)
	li       r4, 1
	lfs      f0, lbl_8051D120@sda21(r2)
	li       r0, -1
	rlwinm   r5, r3, 0, 0x15, 0x13
	mr       r3, r31
	stw      r5, 0x1e0(r31)
	stb      r4, 0x2c0(r31)
	stfs     f0, 0x2c4(r31)
	stw      r0, 0x2c8(r31)
	bl       resetMoveVelocity__Q34Game7Sokkuri3ObjFv
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 2
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1dc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F1424
 * Size:	000034
 */
void Obj::doUpdate()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	lwz      r3, 0x2bc(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F1458
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802F145C
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       doDebugDraw__Q24Game9EnemyBaseFR8Graphics
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F147C
 * Size:	00004C
 */
void Obj::setFSM(FSM*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r4, 0x2bc(r3)
	mr       r4, r31
	lwz      r3, 0x2bc(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, 0x2b4(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F14C8
 * Size:	000118
 */
void Obj::getShadowParam(ShadowParam&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F1590
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xd0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802F1590
	mr       r3, r30
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 3
	beq      lbl_802F1590
	lfs      f0, 0x18c(r30)
	lfs      f2, lbl_8051D124@sda21(r2)
	stfs     f0, 0(r31)
	lfs      f1, lbl_8051D120@sda21(r2)
	lfs      f3, 0x190(r30)
	lfs      f0, lbl_8051D128@sda21(r2)
	stfs     f3, 4(r31)
	lfs      f3, 0x194(r30)
	stfs     f3, 8(r31)
	lfs      f3, 4(r31)
	fadds    f2, f3, f2
	stfs     f2, 4(r31)
	stfs     f1, 0xc(r31)
	stfs     f0, 0x10(r31)
	stfs     f1, 0x14(r31)
	lwz      r0, 0x1e4(r30)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_802F157C
	lfs      f0, lbl_8051D12C@sda21(r2)
	stfs     f0, 0x18(r31)
	b        lbl_802F1584

lbl_802F157C:
	lfs      f0, lbl_8051D130@sda21(r2)
	stfs     f0, 0x18(r31)

lbl_802F1584:
	lfs      f0, lbl_8051D134@sda21(r2)
	stfs     f0, 0x1c(r31)
	b        lbl_802F15C8

lbl_802F1590:
	lfs      f0, 0x18c(r30)
	lfs      f2, lbl_8051D120@sda21(r2)
	stfs     f0, 0(r31)
	lfs      f1, lbl_8051D128@sda21(r2)
	lfs      f3, 0x190(r30)
	lfs      f0, lbl_8051D138@sda21(r2)
	stfs     f3, 4(r31)
	lfs      f3, 0x194(r30)
	stfs     f3, 8(r31)
	stfs     f2, 0xc(r31)
	stfs     f1, 0x10(r31)
	stfs     f2, 0x14(r31)
	stfs     f0, 0x18(r31)
	stfs     f0, 0x1c(r31)

lbl_802F15C8:
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
 * Address:	802F15E0
 * Size:	000008
 */
bool Obj::isUnderground()
{
	/*
	lbz      r3, 0x2c0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F15E8
 * Size:	00009C
 */
bool Obj::pressCallBack(Creature*, float, CollPart*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r4, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	beq      lbl_802F166C
	mr       r3, r4
	lwz      r12, 0(r4)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F166C
	lwz      r0, 0x1e0(r31)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_802F166C
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 0
	beq      lbl_802F166C
	cmpwi    r3, 1
	beq      lbl_802F166C
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 1
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_802F1670

lbl_802F166C:
	li       r3, 0

lbl_802F1670:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F1684
 * Size:	00009C
 */
bool Obj::hipdropCallBack(Creature*, float, CollPart*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r4, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	beq      lbl_802F1708
	mr       r3, r4
	lwz      r12, 0(r4)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F1708
	lwz      r0, 0x1e0(r31)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_802F1708
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 0
	beq      lbl_802F1708
	cmpwi    r3, 1
	beq      lbl_802F1708
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 1
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_802F170C

lbl_802F1708:
	li       r3, 0

lbl_802F170C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F1720
 * Size:	0000FC
 */
void Obj::wallCallback(MoveInfo const&)
{
	/*
	lfs      f0, 0x5c(r4)
	lfs      f1, 0x60(r4)
	stfs     f0, 0x2d0(r3)
	lfs      f0, 0x64(r4)
	stfs     f1, 0x2d4(r3)
	lfs      f1, lbl_8051D120@sda21(r2)
	stfs     f0, 0x2d8(r3)
	stfs     f1, 0x2d4(r3)
	lfs      f3, 0x2d0(r3)
	lfs      f2, 0x2d4(r3)
	fmuls    f0, f3, f3
	lfs      f4, 0x2d8(r3)
	fmuls    f2, f2, f2
	fmuls    f4, f4, f4
	fadds    f0, f0, f2
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_802F1784
	fmadds   f0, f3, f3, f2
	fadds    f2, f4, f0
	fcmpo    cr0, f2, f1
	ble      lbl_802F1788
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_802F1788

lbl_802F1784:
	fmr      f2, f1

lbl_802F1788:
	lfs      f0, lbl_8051D120@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_802F17C0
	lfs      f1, lbl_8051D128@sda21(r2)
	lfs      f0, 0x2d0(r3)
	fdivs    f1, f1, f2
	fmuls    f0, f0, f1
	stfs     f0, 0x2d0(r3)
	lfs      f0, 0x2d4(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0x2d4(r3)
	lfs      f0, 0x2d8(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0x2d8(r3)

lbl_802F17C0:
	lfs      f0, 0x2d0(r3)
	lfs      f1, lbl_8051D13C@sda21(r2)
	fmuls    f0, f0, f1
	stfs     f0, 0x2d0(r3)
	lfs      f0, 0x2d4(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0x2d4(r3)
	lfs      f0, 0x2d8(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0x2d8(r3)
	lfs      f1, 0x2d0(r3)
	lfs      f0, 0x18c(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2d0(r3)
	lfs      f1, 0x2d4(r3)
	lfs      f0, 0x190(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2d4(r3)
	lfs      f1, 0x2d8(r3)
	lfs      f0, 0x194(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2d8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F181C
 * Size:	000040
 */
void Obj::doStartStoneState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartStoneState__Q24Game9EnemyBaseFv
	lwz      r3, 0x1e0(r31)
	li       r0, 0
	ori      r3, r3, 0x800
	stw      r3, 0x1e0(r31)
	stb      r0, 0x2c0(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F185C
 * Size:	000020
 */
void Obj::doFinishStoneState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       doFinishStoneState__Q24Game9EnemyBaseFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F187C
 * Size:	000028
 */
void Obj::startCarcassMotion()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 8
	li       r5, 0
	stw      r0, 0x14(r1)
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F18A4
 * Size:	0000AC
 */
Vector3f Obj::getOffsetForMapCollision()
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
	lwz      r12, 0(r31)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F18FC
	lis      r3, "zero__10Vector3<f>"@ha
	lfsu     f0, "zero__10Vector3<f>"@l(r3)
	stfs     f0, 0(r30)
	lfs      f0, 4(r3)
	stfs     f0, 4(r30)
	lfs      f0, 8(r3)
	stfs     f0, 8(r30)
	b        lbl_802F1938

lbl_802F18FC:
	lis      r4, lbl_8048D1B0@ha
	lwz      r3, 0x174(r31)
	addi     r4, r4, lbl_8048D1B0@l
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f2, 0xc(r3)
	lfs      f0, 0x18c(r31)
	lfs      f3, 0x2c(r3)
	lfs      f1, 0x194(r31)
	fsubs    f2, f2, f0
	lfs      f0, lbl_8051D120@sda21(r2)
	fsubs    f3, f3, f1
	stfs     f2, 0(r30)
	stfs     f0, 4(r30)
	stfs     f3, 8(r30)

lbl_802F1938:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000068
//  */
// void Obj::getSearchedTarget()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	802F1950
 * Size:	00007C
 */
bool Obj::isAppear()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r4, gameSystem__4Game@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_802F1990
	lwz      r0, 0x44(r4)
	cmpwi    r0, 4
	bne      lbl_802F1990
	lwz      r6, 0xc0(r3)
	li       r4, 0
	li       r5, 0
	lfs      f1, 0x424(r6)
	lfs      f2, 0x3d4(r6)
	bl
"getNearestPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Piki>"
	b        lbl_802F19A8

lbl_802F1990:
	lwz      r6, 0xc0(r3)
	li       r4, 0
	li       r5, 0
	lfs      f1, 0x424(r6)
	lfs      f2, 0x3d4(r6)
	bl
"getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"

lbl_802F19A8:
	cmplwi   r3, 0
	beq      lbl_802F19B8
	li       r3, 1
	b        lbl_802F19BC

lbl_802F19B8:
	li       r3, 0

lbl_802F19BC:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F19CC
 * Size:	0000A8
 */
bool Obj::isDisappear()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lfs      f1, 0x194(r3)
	lfs      f0, 0x1a0(r3)
	lfs      f2, 0x18c(r3)
	fsubs    f3, f1, f0
	lfs      f1, 0x198(r3)
	lwz      r5, 0xc0(r3)
	fsubs    f2, f2, f1
	fmuls    f1, f3, f3
	lfs      f0, 0x384(r5)
	fmuls    f0, f0, f0
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802F1A60
	lwz      r4, gameSystem__4Game@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_802F1A3C
	lwz      r0, 0x44(r4)
	cmpwi    r0, 4
	bne      lbl_802F1A3C
	lfs      f1, 0x424(r5)
	li       r4, 0
	lfs      f2, 0x3d4(r5)
	li       r5, 0
	bl
"getNearestPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Piki>"
	b        lbl_802F1A50

lbl_802F1A3C:
	lfs      f1, 0x424(r5)
	li       r4, 0
	lfs      f2, 0x3d4(r5)
	li       r5, 0
	bl
"getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"

lbl_802F1A50:
	cmplwi   r3, 0
	bne      lbl_802F1A60
	li       r3, 1
	b        lbl_802F1A64

lbl_802F1A60:
	li       r3, 0

lbl_802F1A64:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F1A74
 * Size:	0001E0
 */
void Obj::setNextMoveInfo()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	mr       r31, r3
	lwz      r3, 0xc0(r3)
	lfs      f1, 0x81c(r3)
	lfs      f0, 0x844(r3)
	fsubs    f31, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f2, lbl_8051D158@sda21(r2)
	stw      r0, 8(r1)
	lfs      f0, lbl_8051D140@sda21(r2)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f2
	fmuls    f1, f31, f1
	fdivs    f0, f1, f0
	stfs     f0, 0x2c4(r31)
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x86c(r3)
	lfs      f0, 0x894(r3)
	fsubs    f31, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lwz      r3, 0xc0(r31)
	stw      r0, 0x10(r1)
	lfd      f1, lbl_8051D158@sda21(r2)
	lfd      f0, 0x10(r1)
	lfs      f3, lbl_8051D140@sda21(r2)
	fsubs    f4, f0, f1
	lfs      f0, 0x894(r3)
	lfs      f1, lbl_8051D148@sda21(r2)
	lfs      f2, lbl_8051D144@sda21(r2)
	fmuls    f4, f31, f4
	fdivs    f3, f4, f3
	fadds    f0, f3, f0
	fmuls    f0, f1, f0
	fmuls    f31, f2, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x1c(r1)
	lfd      f3, lbl_8051D158@sda21(r2)
	stw      r0, 0x18(r1)
	lfs      f2, lbl_8051D128@sda21(r2)
	lfd      f0, 0x18(r1)
	lfs      f1, lbl_8051D140@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051D14C@sda21(r2)
	fmuls    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802F1B70
	lfs      f0, 0x1fc(r31)
	fadds    f31, f31, f0
	b        lbl_802F1B78

lbl_802F1B70:
	lfs      f0, 0x1fc(r31)
	fsubs    f31, f31, f0

lbl_802F1B78:
	lfs      f0, lbl_8051D120@sda21(r2)
	lfs      f3, lbl_8051D13C@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_802F1BB4
	lfs      f0, lbl_8051D150@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f31, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_802F1BD8

lbl_802F1BB4:
	lfs      f0, lbl_8051D154@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f31, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_802F1BD8:
	lfs      f1, 0x18c(r31)
	fmr      f4, f31
	lfs      f0, lbl_8051D120@sda21(r2)
	fmadds   f1, f3, f2, f1
	fcmpo    cr0, f31, f0
	stfs     f1, 0x2d0(r31)
	lfs      f0, 0x190(r31)
	stfs     f0, 0x2d4(r31)
	bge      lbl_802F1C00
	fneg     f4, f31

lbl_802F1C00:
	lfs      f0, lbl_8051D154@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f2, lbl_8051D13C@sda21(r2)
	fmuls    f1, f4, f0
	lfs      f0, 0x194(r31)
	fctiwz   f1, f1
	stfd     f1, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f1, 4(r3)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x2d8(r31)
	psq_l    f31, 72(r1), 0, qr0
	lwz      r0, 0x54(r1)
	lfd      f31, 0x40(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F1C54
 * Size:	00016C
 */
void Obj::updateMoveState()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lfs      f1, 0x194(r3)
	lfs      f0, 0x1a0(r3)
	lfs      f4, 0x198(r31)
	fsubs    f2, f1, f0
	lfs      f1, 0x18c(r31)
	lwz      r3, 0xc0(r3)
	fsubs    f3, f1, f4
	fmuls    f1, f2, f2
	lfs      f0, 0x35c(r3)
	fmuls    f0, f0, f0
	fmadds   f1, f3, f3, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802F1CB0
	stfs     f4, 0x2d0(r31)
	lfs      f0, 0x19c(r31)
	stfs     f0, 0x2d4(r31)
	lfs      f0, 0x1a0(r31)
	stfs     f0, 0x2d8(r31)

lbl_802F1CB0:
	lwz      r0, 0x280(r31)
	cmplwi   r0, 0
	beq      lbl_802F1D60
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0xc(r1)
	mr       r3, r31
	lfs      f0, lbl_8051D160@sda21(r2)
	addi     r4, r1, 0x14
	lfs      f3, 8(r1)
	lfs      f1, 0x10(r1)
	fadds    f0, f2, f0
	stfs     f2, 0x18(r1)
	stfs     f3, 0x14(r1)
	stfs     f1, 0x1c(r1)
	stfs     f0, 0x18(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x2cc(r31)
	lfs      f2, 0x934(r3)
	lfs      f0, lbl_8051D120@sda21(r2)
	fsubs    f3, f1, f2
	fcmpo    cr0, f3, f0
	ble      lbl_802F1D30
	b        lbl_802F1D34

lbl_802F1D30:
	fneg     f3, f3

lbl_802F1D34:
	lfs      f0, lbl_8051D134@sda21(r2)
	fcmpo    cr0, f3, f0
	bge      lbl_802F1D44
	b        lbl_802F1D58

lbl_802F1D44:
	fcmpo    cr0, f1, f2
	bge      lbl_802F1D54
	fadds    f2, f1, f0
	b        lbl_802F1D58

lbl_802F1D54:
	fsubs    f2, f1, f0

lbl_802F1D58:
	stfs     f2, 0x2cc(r31)
	b        lbl_802F1DAC

lbl_802F1D60:
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x2cc(r31)
	lfs      f2, 0x2e4(r3)
	lfs      f0, lbl_8051D120@sda21(r2)
	fsubs    f3, f1, f2
	fcmpo    cr0, f3, f0
	ble      lbl_802F1D80
	b        lbl_802F1D84

lbl_802F1D80:
	fneg     f3, f3

lbl_802F1D84:
	lfs      f0, lbl_8051D164@sda21(r2)
	fcmpo    cr0, f3, f0
	bge      lbl_802F1D94
	b        lbl_802F1DA8

lbl_802F1D94:
	fcmpo    cr0, f1, f2
	bge      lbl_802F1DA4
	fadds    f2, f1, f0
	b        lbl_802F1DA8

lbl_802F1DA4:
	fsubs    f2, f1, f0

lbl_802F1DA8:
	stfs     f2, 0x2cc(r31)

lbl_802F1DAC:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F1DC0
 * Size:	00002C
 */
void Obj::resetMoveVelocity()
{
	/*
	lwz      r0, 0x280(r3)
	cmplwi   r0, 0
	beq      lbl_802F1DDC
	lwz      r4, 0xc0(r3)
	lfs      f0, 0x934(r4)
	stfs     f0, 0x2cc(r3)
	blr

lbl_802F1DDC:
	lwz      r4, 0xc0(r3)
	lfs      f0, 0x2e4(r4)
	stfs     f0, 0x2cc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F1DEC
 * Size:	000078
 */
void Obj::setNextWaitInfo()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r3, 0xc0(r3)
	lfs      f1, 0x8e4(r3)
	lfs      f0, 0x90c(r3)
	fsubs    f31, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f2, lbl_8051D158@sda21(r2)
	stw      r0, 8(r1)
	lfs      f0, lbl_8051D140@sda21(r2)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f2
	fmuls    f1, f31, f1
	fdivs    f0, f1, f0
	stfs     f0, 0x2c4(r31)
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F1E64
 * Size:	0000C4
 */
void Obj::createDownEffect(float, float)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	mr       r31, r3
	fmr      f31, f2
	lwz      r0, 0x280(r3)
	cmplwi   r0, 0
	beq      lbl_802F1EF8
	lfs      f0, lbl_8051D120@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_802F1F0C
	lfs      f0, 0x18c(r31)
	mr       r3, r0
	stfs     f0, 8(r1)
	lfs      f0, 0x190(r31)
	stfs     f0, 0xc(r1)
	lfs      f0, 0x194(r31)
	stfs     f0, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0(r3)
	lfs      f0, lbl_8051D168@sda21(r2)
	stfs     f2, 0xc(r1)
	lfs      f1, 0x190(r31)
	fsubs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802F1F0C
	fmr      f1, f31
	mr       r3, r31
	addi     r4, r1, 8
	bl       "createSplashDownEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
	b        lbl_802F1F0C

lbl_802F1EF8:
	lfs      f0, lbl_8051D120@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802F1F0C
	addi     r4, r31, 0x18c
	bl       "createDropEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"

lbl_802F1F0C:
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F1F28
 * Size:	0000C0
 */
void Obj::createBubbleEffect()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lwz      r3, 0x280(r3)
	cmplwi   r3, 0
	beq      lbl_802F1FD4
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0(r3)
	lfs      f1, 0x190(r31)
	lfs      f0, lbl_8051D134@sda21(r2)
	fsubs    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802F1FD4
	lis      r3, __vt__Q23efx3Arg@ha
	lis      r5, __vt__Q23efx5TBase@ha
	addi     r0, r3, __vt__Q23efx3Arg@l
	lis      r4, __vt__Q23efx8TSimple1@ha
	stw      r0, 0x14(r1)
	lis      r3, __vt__Q23efx10TJgmBubble@ha
	addi     r8, r5, __vt__Q23efx5TBase@l
	addi     r7, r4, __vt__Q23efx8TSimple1@l
	lfs      f0, 0x18c(r31)
	addi     r0, r3, __vt__Q23efx10TJgmBubble@l
	li       r6, 0xc1
	li       r5, 0
	stfs     f0, 0x18(r1)
	addi     r3, r1, 8
	addi     r4, r1, 0x14
	lfs      f0, 0x190(r31)
	stfs     f0, 0x1c(r1)
	lfs      f0, 0x194(r31)
	stw      r8, 8(r1)
	stw      r7, 8(r1)
	stfs     f0, 0x20(r1)
	sth      r6, 0xc(r1)
	stw      r5, 0x10(r1)
	stw      r0, 8(r1)
	bl       create__Q23efx8TSimple1FPQ23efx3Arg

lbl_802F1FD4:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F1FE8
 * Size:	000048
 */
void Obj::createEfxHamon()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0xd0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802F201C
	mr       r3, r31
	bl       createEfxHamon__Q24Game9EnemyBaseFv

lbl_802F201C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F2030
 * Size:	000008
 */
f32 Obj::getDownSmokeScale()
{
	/*
	lfs      f1, lbl_8051D16C@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F2038
 * Size:	000008
 */
EnemyTypeID::EEnemyTypeID Obj::getEnemyTypeID() { return EnemyTypeID::EnemyID_Sokkuri; }
} // namespace Sokkuri
} // namespace Game

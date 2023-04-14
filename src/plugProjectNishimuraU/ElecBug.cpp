#include "types.h"
#include "Game/Entities/ElecBug.h"

namespace Game {
namespace ElecBug {

/*
 * --INFO--
 * Address:	8027AC88
 * Size:	000138
 */
Obj::Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	beq      lbl_8027ACC8
	addi     r0, r31, 0x2e0
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x2e0(r31)
	stw      r0, 0x2e4(r31)
	stw      r0, 0x2e8(r31)

lbl_8027ACC8:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q24Game9EnemyBaseFv
	lis      r3, __vt__Q34Game7ElecBug3Obj@ha
	addi     r0, r31, 0x2e0
	addi     r5, r3, __vt__Q34Game7ElecBug3Obj@l
	li       r3, 0x2c
	stw      r5, 0(r31)
	addi     r4, r5, 0x1b0
	addi     r5, r5, 0x2fc
	stw      r4, 0x178(r31)
	lwz      r4, 0x17c(r31)
	stw      r5, 0(r4)
	lwz      r4, 0x17c(r31)
	subf     r0, r4, r0
	stw      r0, 0xc(r4)
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8027AD54
	bl       __ct__Q24Game17EnemyAnimatorBaseFv
	lis      r3, __vt__Q34Game7ElecBug14ProperAnimator@ha
	lis      r4, __vt__Q28SysShape12BaseAnimator@ha
	addi     r0, r3, __vt__Q34Game7ElecBug14ProperAnimator@l
	lis      r3, __vt__Q28SysShape8Animator@ha
	stw      r0, 0(r30)
	addi     r4, r4, __vt__Q28SysShape12BaseAnimator@l
	addi     r3, r3, __vt__Q28SysShape8Animator@l
	li       r0, 0
	stw      r4, 0x10(r30)
	stw      r3, 0x10(r30)
	stb      r0, 0x28(r30)
	stw      r0, 0x1c(r30)
	stw      r0, 0x14(r30)
	stb      r0, 0x28(r30)
	stw      r0, 0x20(r30)

lbl_8027AD54:
	stw      r30, 0x184(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8027AD88
	lis      r5, __vt__Q24Game17EnemyStateMachine@ha
	lis      r3, __vt__Q34Game7ElecBug3FSM@ha
	addi     r0, r5, __vt__Q24Game17EnemyStateMachine@l
	li       r5, -1
	stw      r0, 0(r4)
	addi     r0, r3, __vt__Q34Game7ElecBug3FSM@l
	stw      r5, 0x18(r4)
	stw      r0, 0(r4)

lbl_8027AD88:
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x2f8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       createEffect__Q34Game7ElecBug3ObjFv
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027ADC0
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	8027ADC4
 * Size:	0000A4
 */
void Obj::onInit(CreatureInitArg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	bl       onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	lwz      r0, 0x1e0(r31)
	ori      r0, r0, 1
	stw      r0, 0x1e0(r31)
	bl       rand
	xoris    r0, r3, 0x8000
	lis      r4, 0x4330
	stw      r0, 0xc(r1)
	li       r0, 0
	lfd      f3, lbl_8051B4F0@sda21(r2)
	mr       r3, r31
	stw      r4, 8(r1)
	lfs      f2, lbl_8051B4E0@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_8051B4E4@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051B4E8@sda21(r2)
	fmuls    f2, f2, f3
	fdivs    f1, f2, f1
	stfs     f1, 0x2c0(r31)
	stfs     f0, 0x2c4(r31)
	stw      r0, 0x2d8(r31)
	bl       setupEffect__Q34Game7ElecBug3ObjFv
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 2
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027AE68
 * Size:	000044
 */
void Obj::onKill(CreatureKillArg* arg)
{
	finishPartnerAndEffect();
	EnemyBase::onKill(arg);
}

/*
 * --INFO--
 * Address:	8027AEAC
 * Size:	000048
 */
void Obj::doUpdate()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	lwz      r5, sys@sda21(r13)
	lfs      f1, 0x2c0(r3)
	lfs      f0, 0x54(r5)
	fadds    f0, f1, f0
	stfs     f0, 0x2c0(r3)
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
 * Address:	8027AEF4
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics& gfx) { }

/*
 * --INFO--
 * Address:	8027AEF8
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	8027AF18
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
 * Address:	8027AF64
 * Size:	000080
 */
void Obj::getShadowParam(ShadowParam&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	addi     r4, r2, lbl_8051B4F8@sda21
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f4, 0x2c(r3)
	lfs      f1, 0x1c(r3)
	lfs      f0, 0xc(r3)
	lfs      f3, lbl_8051B500@sda21(r2)
	stfs     f0, 0(r31)
	lfs      f2, lbl_8051B4E8@sda21(r2)
	stfs     f1, 4(r31)
	lfs      f1, lbl_8051B504@sda21(r2)
	stfs     f4, 8(r31)
	lfs      f0, lbl_8051B508@sda21(r2)
	lfs      f4, 4(r31)
	fsubs    f3, f4, f3
	stfs     f3, 4(r31)
	stfs     f2, 0xc(r31)
	stfs     f1, 0x10(r31)
	stfs     f2, 0x14(r31)
	stfs     f0, 0x18(r31)
	stfs     f0, 0x1c(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027AFE4
 * Size:	0001E4
 */
void Obj::collisionCallback(CollEvent&)
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
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	mr       r31, r4
	mr       r30, r3
	lwz      r0, 0(r4)
	cmplwi   r0, 0
	beq      lbl_8027B180
	lwz      r0, 0x1e0(r30)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_8027B180
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 5
	beq      lbl_8027B044
	cmpwi    r3, 7
	bne      lbl_8027B180

lbl_8027B044:
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8027B07C
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8027B180

lbl_8027B07C:
	lwz      r4, 0(r31)
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f3, 8(r1)
	lfs      f1, 0x18c(r30)
	lfs      f4, 0x10(r1)
	lfs      f0, 0x194(r30)
	fsubs    f3, f3, f1
	lfs      f1, lbl_8051B4E8@sda21(r2)
	fsubs    f4, f4, f0
	fmadds   f0, f3, f3, f1
	fmuls    f2, f4, f4
	fadds    f2, f2, f0
	fcmpo    cr0, f2, f1
	ble      lbl_8027B0D4
	ble      lbl_8027B0D8
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_8027B0D8

lbl_8027B0D4:
	fmr      f2, f1

lbl_8027B0D8:
	lfs      f0, lbl_8051B4E8@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_8027B0F4
	lfs      f0, lbl_8051B504@sda21(r2)
	fdivs    f0, f0, f2
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0

lbl_8027B0F4:
	lwz      r3, 0(r31)
	lwz      r4, 0xc0(r30)
	lwz      r12, 0(r3)
	lfs      f0, 0x44c(r4)
	lwz      r12, 0x1c(r12)
	fmuls    f30, f4, f0
	lfs      f29, 0x474(r4)
	fmuls    f31, f3, f0
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8027B128
	lfs      f29, lbl_8051B4E8@sda21(r2)

lbl_8027B128:
	lwz      r6, 0xc0(r30)
	lis      r5, __vt__Q24Game11Interaction@ha
	lis      r4, __vt__Q24Game12InteractWind@ha
	lis      r3, __vt__Q24Game13InteractDenki@ha
	lfs      f0, 0x604(r6)
	addi     r6, r5, __vt__Q24Game11Interaction@l
	addi     r5, r4, __vt__Q24Game12InteractWind@l
	addi     r0, r3, __vt__Q24Game13InteractDenki@l
	stw      r6, 0x14(r1)
	addi     r4, r1, 0x14
	stw      r5, 0x14(r1)
	stw      r30, 0x18(r1)
	stfs     f0, 0x1c(r1)
	stfs     f31, 0x20(r1)
	stfs     f29, 0x24(r1)
	stfs     f30, 0x28(r1)
	stw      r0, 0x14(r1)
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_8027B180:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 0x240(r12)
	mtctr    r12
	bctrl
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	psq_l    f29, 72(r1), 0, qr0
	lfd      f29, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r0, 0x74(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027B1C8
 * Size:	0001BC
 */
bool Obj::pressCallBack(Creature*, f32, CollPart*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	mr       r30, r4
	stw      r29, 0x34(r1)
	mr       r29, r3
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8027B364
	lwz      r0, 0x1e0(r29)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_8027B364
	cmplwi   r30, 0
	beq      lbl_8027B364
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8027B364
	mr       r3, r29
	bl       getStateID__Q24Game9EnemyBaseFv
	mr       r31, r3
	cmpwi    r31, 1
	blt      lbl_8027B364
	cmpwi    r31, 7
	bgt      lbl_8027B364
	lwz      r3, 0x2bc(r29)
	mr       r4, r29
	li       r5, 8
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	cmpwi    r31, 5
	beq      lbl_8027B27C
	cmpwi    r31, 7
	bne      lbl_8027B35C

lbl_8027B27C:
	mr       r4, r30
	addi     r3, r1, 8
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f4, 8(r1)
	lfs      f1, 0x18c(r29)
	lfs      f5, 0x10(r1)
	lfs      f0, 0x194(r29)
	fsubs    f4, f4, f1
	lfs      f1, lbl_8051B4E8@sda21(r2)
	fsubs    f5, f5, f0
	fmadds   f0, f4, f4, f1
	fmuls    f2, f5, f5
	fadds    f2, f2, f0
	fcmpo    cr0, f2, f1
	ble      lbl_8027B2D4
	ble      lbl_8027B2D8
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_8027B2D8

lbl_8027B2D4:
	fmr      f2, f1

lbl_8027B2D8:
	lfs      f0, lbl_8051B4E8@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_8027B2F4
	lfs      f0, lbl_8051B504@sda21(r2)
	fdivs    f0, f0, f2
	fmuls    f4, f4, f0
	fmuls    f5, f5, f0

lbl_8027B2F4:
	lwz      r7, 0xc0(r29)
	lis      r5, __vt__Q24Game11Interaction@ha
	lis      r4, __vt__Q24Game12InteractWind@ha
	lis      r3, __vt__Q24Game13InteractDenki@ha
	lfs      f0, 0x44c(r7)
	addi     r6, r5, __vt__Q24Game11Interaction@l
	lfs      f1, 0x474(r7)
	addi     r5, r4, __vt__Q24Game12InteractWind@l
	lfs      f3, 0x604(r7)
	fmuls    f2, f5, f0
	fmuls    f0, f4, f0
	addi     r0, r3, __vt__Q24Game13InteractDenki@l
	stw      r6, 0x14(r1)
	mr       r3, r30
	addi     r4, r1, 0x14
	stw      r5, 0x14(r1)
	stw      r29, 0x18(r1)
	stfs     f3, 0x1c(r1)
	stfs     f0, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f2, 0x28(r1)
	stw      r0, 0x14(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_8027B35C:
	li       r3, 1
	b        lbl_8027B368

lbl_8027B364:
	li       r3, 0

lbl_8027B368:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027B384
 * Size:	00002C
 */
bool Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* collpart) { return pressCallBack(creature, damage, collpart); }

/*
 * --INFO--
 * Address:	8027B3B0
 * Size:	0000C0
 */
bool Obj::earthquakeCallBack(Creature*, f32)
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
	beq      lbl_8027B454
	lwz      r0, 0x1e0(r30)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_8027B454
	cmplwi   r31, 0
	beq      lbl_8027B454
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8027B454
	mr       r3, r30
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 1
	blt      lbl_8027B454
	cmpwi    r3, 7
	bgt      lbl_8027B454
	lwz      r3, 0x2bc(r30)
	mr       r4, r30
	li       r5, 8
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_8027B458

lbl_8027B454:
	li       r3, 0

lbl_8027B458:
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
 * Address:	8027B470
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
	lwz      r0, 0x1e0(r31)
	mr       r3, r31
	rlwinm   r0, r0, 0, 0, 0x1e
	stw      r0, 0x1e0(r31)
	bl       finishPartnerAndEffect__Q34Game7ElecBug3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027B4B0
 * Size:	000040
 */
void Obj::doFinishStoneState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 8
	beq      lbl_8027B4DC
	lwz      r0, 0x1e0(r31)
	ori      r0, r0, 1
	stw      r0, 0x1e0(r31)

lbl_8027B4DC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027B4F0
 * Size:	000034
 */
void Obj::doStartWaitingBirthTypeDrop()
{
	EnemyBase::doStartWaitingBirthTypeDrop();
	effectDrawOff();
}

/*
 * --INFO--
 * Address:	8027B524
 * Size:	000034
 */
void Obj::doFinishWaitingBirthTypeDrop()
{
	EnemyBase::doFinishWaitingBirthTypeDrop();
	effectDrawOn();
}

/*
 * --INFO--
 * Address:	8027B558
 * Size:	000028
 */
void Obj::startCarcassMotion()
{
	{
		startMotion(7, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8027B580
 * Size:	000020
 */
void Obj::doStartMovie() { effectDrawOff(); }

/*
 * --INFO--
 * Address:	8027B5A0
 * Size:	000020
 */
void Obj::doEndMovie() { effectDrawOn(); }

/*
 * --INFO--
 * Address:	8027B5C0
 * Size:	0001A4
 */
void Obj::setTargetPosition()
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
	stfd     f27, 0x40(r1)
	psq_st   f27, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	mr       r31, r3
	lfs      f30, 0x198(r3)
	lfs      f29, 0x19c(r3)
	lfs      f28, 0x1a0(r3)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lwz      r3, 0xc0(r31)
	stw      r0, 8(r1)
	lfd      f1, lbl_8051B4F0@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f3, lbl_8051B50C@sda21(r2)
	fsubs    f4, f0, f1
	lfs      f2, lbl_8051B4E4@sda21(r2)
	lfs      f1, 0x35c(r3)
	lfs      f0, 0x384(r3)
	fmuls    f3, f3, f4
	fsubs    f27, f1, f0
	fdivs    f31, f3, f2
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lwz      r3, 0xc0(r31)
	stw      r0, 0x10(r1)
	lfd      f2, lbl_8051B4F0@sda21(r2)
	lfd      f1, 0x10(r1)
	lfs      f0, lbl_8051B4E8@sda21(r2)
	fsubs    f3, f1, f2
	lfs      f2, lbl_8051B4E4@sda21(r2)
	lfs      f1, 0x384(r3)
	fcmpo    cr0, f31, f0
	fmuls    f0, f27, f3
	fdivs    f0, f0, f2
	fadds    f2, f1, f0
	bge      lbl_8027B6B8
	lfs      f0, lbl_8051B510@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f31, f0
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_8027B6DC

lbl_8027B6B8:
	lfs      f0, lbl_8051B514@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f31, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_8027B6DC:
	fmadds   f1, f2, f0, f30
	lfs      f0, lbl_8051B4E8@sda21(r2)
	fcmpo    cr0, f31, f0
	stfs     f1, 0x2c8(r31)
	stfs     f29, 0x2cc(r31)
	bge      lbl_8027B6F8
	fneg     f31, f31

lbl_8027B6F8:
	lfs      f0, lbl_8051B514@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f31, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f0, 4(r3)
	fmadds   f0, f2, f0, f28
	stfs     f0, 0x2d0(r31)
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	psq_l    f28, 88(r1), 0, qr0
	lfd      f28, 0x50(r1)
	psq_l    f27, 72(r1), 0, qr0
	lfd      f27, 0x40(r1)
	lwz      r0, 0x94(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027B764
 * Size:	00001C
 */
void Obj::resetPartnerPtr()
{
	if (mPartner) {
		mPartner->mPartner = nullptr;
		mPartner           = nullptr;
	}
}

/*
 * --INFO--
 * Address:	8027B780
 * Size:	000070
 */
bool Obj::isBecomeChargeState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8027B7D8
	lwz      r0, 0x1e0(r31)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_8027B7D8
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 1
	blt      lbl_8027B7D8
	cmpwi    r3, 3
	bgt      lbl_8027B7D8
	li       r3, 1
	b        lbl_8027B7DC

lbl_8027B7D8:
	li       r3, 0

lbl_8027B7DC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027B7F0
 * Size:	000030
 */
void Obj::startChargeState(Obj* beetle)
{
	mPartner = beetle;
	beetle->startChildChargeState(this);
}

/*
 * --INFO--
 * Address:	8027B820
 * Size:	000044
 */
bool Obj::startChildChargeState(Obj* beetle)
{
	mPartner = beetle;
	mFsm->transit(this, ELECBUG_ChildCharge, nullptr);
	return true;
}

/*
 * --INFO--
 * Address:	8027B864
 * Size:	000044
 */
void Obj::createEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x74
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8027B890
	bl       __ct__Q23efx12TDnkmsEffectFv
	mr       r0, r3

lbl_8027B890:
	stw      r0, 0x2dc(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
/*
 * --INFO--
 * Address:	8027BC50
 * Size:	000010
 */
void Obj::setupEffect()
{
	/*
	lwz      r4, 0x2dc(r3)
	addi     r0, r3, 0x18c
	stw      r0, 0(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027BC60
 * Size:	000040
 */
void Obj::startChargeEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	lwz      r5, 0x2dc(r3)
	lwz      r0, 0(r5)
	addi     r3, r5, 0x30
	stw      r0, 0x40(r5)
	lwz      r12, 0x30(r5)
	lwz      r12, 8(r12)
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
 * Address:	8027BCA0
 * Size:	0000C0
 */
void Obj::startDischargeEffect(Obj*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	addi     r0, r4, 0x18c
	li       r4, 0
	stw      r31, 0xc(r1)
	lwz      r31, 0x2dc(r3)
	stw      r0, 4(r31)
	addi     r3, r31, 8
	lwz      r0, 0(r31)
	stw      r0, 0x18(r31)
	lwz      r12, 8(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 4(r31)
	addi     r3, r31, 0x1c
	li       r4, 0
	stw      r0, 0x2c(r31)
	lwz      r12, 0x1c(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r5, 4(r31)
	addi     r3, r31, 0x44
	lwz      r0, 0(r31)
	li       r4, 0
	stw      r0, 0x54(r31)
	stw      r5, 0x58(r31)
	lwz      r5, 4(r31)
	lwz      r0, 0(r31)
	stw      r0, 0x6c(r31)
	stw      r5, 0x70(r31)
	lwz      r12, 0x44(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x5c
	li       r4, 0
	lwz      r12, 0x5c(r31)
	lwz      r12, 8(r12)
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
 * Address:	8027BD60
 * Size:	0000A4
 */
void Obj::finishPartnerAndEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r4, 0x2d8(r3)
	cmplwi   r4, 0
	beq      lbl_8027BD88
	li       r0, 0
	stw      r0, 0x2d8(r4)
	stw      r0, 0x2d8(r3)

lbl_8027BD88:
	lwz      r31, 0x2dc(r3)
	addi     r3, r31, 8
	lwz      r12, 8(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x1c
	lwz      r12, 0x1c(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x30
	lwz      r12, 0x30(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x44
	lwz      r12, 0x44(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x5c
	lwz      r12, 0x5c(r31)
	lwz      r12, 0x10(r12)
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
 * Address:	8027BE04
 * Size:	00008C
 */
void Obj::effectDrawOn()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r31, 0x2dc(r3)
	lwz      r12, 8(r31)
	addi     r3, r31, 8
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x1c
	lwz      r12, 0x1c(r31)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x30
	lwz      r12, 0x30(r31)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x44
	lwz      r12, 0x44(r31)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x5c
	lwz      r12, 0x5c(r31)
	lwz      r12, 0x44(r12)
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
 * Address:	8027BE90
 * Size:	00008C
 */
void Obj::effectDrawOff()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r31, 0x2dc(r3)
	lwz      r12, 8(r31)
	addi     r3, r31, 8
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x1c
	lwz      r12, 0x1c(r31)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x30
	lwz      r12, 0x30(r31)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x44
	lwz      r12, 0x44(r31)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x5c
	lwz      r12, 0x5c(r31)
	lwz      r12, 0x40(r12)
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
 * Address:	8027BF1C
 * Size:	0004D0
 */
void Obj::checkInteract(Obj*)
{
	/*
	stwu     r1, -0x1d0(r1)
	mflr     r0
	stw      r0, 0x1d4(r1)
	stfd     f31, 0x1c0(r1)
	psq_st   f31, 456(r1), 0, qr0
	stfd     f30, 0x1b0(r1)
	psq_st   f30, 440(r1), 0, qr0
	stfd     f29, 0x1a0(r1)
	psq_st   f29, 424(r1), 0, qr0
	stfd     f28, 0x190(r1)
	psq_st   f28, 408(r1), 0, qr0
	stfd     f27, 0x180(r1)
	psq_st   f27, 392(r1), 0, qr0
	stfd     f26, 0x170(r1)
	psq_st   f26, 376(r1), 0, qr0
	stfd     f25, 0x160(r1)
	psq_st   f25, 360(r1), 0, qr0
	stfd     f24, 0x150(r1)
	psq_st   f24, 344(r1), 0, qr0
	stfd     f23, 0x140(r1)
	psq_st   f23, 328(r1), 0, qr0
	stfd     f22, 0x130(r1)
	psq_st   f22, 312(r1), 0, qr0
	stfd     f21, 0x120(r1)
	psq_st   f21, 296(r1), 0, qr0
	stfd     f20, 0x110(r1)
	psq_st   f20, 280(r1), 0, qr0
	stfd     f19, 0x100(r1)
	psq_st   f19, 264(r1), 0, qr0
	stfd     f18, 0xf0(r1)
	psq_st   f18, 248(r1), 0, qr0
	stfd     f17, 0xe0(r1)
	psq_st   f17, 232(r1), 0, qr0
	stfd     f16, 0xd0(r1)
	psq_st   f16, 216(r1), 0, qr0
	stw      r31, 0xcc(r1)
	stw      r30, 0xc8(r1)
	mr       r30, r3
	mr       r31, r4
	mr       r4, r30
	addi     r3, r1, 0x20
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lfs      f19, 0x20(r1)
	lwz      r12, 8(r12)
	lfs      f20, 0x24(r1)
	lfs      f22, 0x28(r1)
	mtctr    r12
	bctrl
	lfs      f2, 0x18(r1)
	lfs      f1, 0x14(r1)
	fsubs    f29, f2, f20
	lfs      f0, 0x1c(r1)
	fsubs    f30, f1, f19
	lfs      f3, lbl_8051B4E8@sda21(r2)
	fsubs    f31, f0, f22
	fmuls    f4, f29, f29
	fmuls    f5, f31, f31
	fmadds   f4, f30, f30, f4
	fadds    f4, f5, f4
	fcmpo    cr0, f4, f3
	ble      lbl_8027C038
	ble      lbl_8027C03C
	frsqrte  f3, f4
	fmuls    f4, f3, f4
	b        lbl_8027C03C

lbl_8027C038:
	fmr      f4, f3

lbl_8027C03C:
	lfs      f3, lbl_8051B4E8@sda21(r2)
	fcmpo    cr0, f4, f3
	ble      lbl_8027C05C
	lfs      f3, lbl_8051B504@sda21(r2)
	fdivs    f3, f3, f4
	fmuls    f30, f30, f3
	fmuls    f29, f29, f3
	fmuls    f31, f31, f3

lbl_8027C05C:
	lfs      f4, lbl_8051B4E8@sda21(r2)
	lfs      f5, lbl_8051B504@sda21(r2)
	fmuls    f3, f4, f31
	fmuls    f6, f4, f29
	fmsubs   f27, f4, f30, f3
	fnmsubs  f26, f5, f30, f6
	fmsubs   f28, f5, f31, f6
	fmuls    f3, f27, f27
	fmuls    f5, f26, f26
	fmadds   f3, f28, f28, f3
	fadds    f5, f5, f3
	fcmpo    cr0, f5, f4
	ble      lbl_8027C0A0
	ble      lbl_8027C0A4
	frsqrte  f3, f5
	fmuls    f5, f3, f5
	b        lbl_8027C0A4

lbl_8027C0A0:
	fmr      f5, f4

lbl_8027C0A4:
	lfs      f3, lbl_8051B4E8@sda21(r2)
	fcmpo    cr0, f5, f3
	ble      lbl_8027C0C4
	lfs      f3, lbl_8051B504@sda21(r2)
	fdivs    f3, f3, f5
	fmuls    f28, f28, f3
	fmuls    f27, f27, f3
	fmuls    f26, f26, f3

lbl_8027C0C4:
	fmuls    f5, f30, f26
	lfs      f3, lbl_8051B4E8@sda21(r2)
	fmuls    f6, f31, f27
	fmuls    f4, f29, f28
	fmsubs   f25, f31, f28, f5
	fmsubs   f23, f29, f26, f6
	fmsubs   f24, f30, f27, f4
	fmuls    f4, f25, f25
	fmuls    f5, f24, f24
	fmadds   f4, f23, f23, f4
	fadds    f4, f5, f4
	fcmpo    cr0, f4, f3
	ble      lbl_8027C108
	ble      lbl_8027C10C
	frsqrte  f3, f4
	fmuls    f4, f3, f4
	b        lbl_8027C10C

lbl_8027C108:
	fmr      f4, f3

lbl_8027C10C:
	lfs      f3, lbl_8051B4E8@sda21(r2)
	fcmpo    cr0, f4, f3
	ble      lbl_8027C12C
	lfs      f3, lbl_8051B504@sda21(r2)
	fdivs    f3, f3, f4
	fmuls    f23, f23, f3
	fmuls    f25, f25, f3
	fmuls    f24, f24, f3

lbl_8027C12C:
	fsubs    f5, f20, f2
	lfs      f3, lbl_8051B4E8@sda21(r2)
	fsubs    f4, f22, f0
	fsubs    f6, f19, f1
	fmuls    f5, f5, f5
	fmuls    f7, f4, f4
	fmadds   f4, f6, f6, f5
	fadds    f21, f7, f4
	fcmpo    cr0, f21, f3
	ble      lbl_8027C164
	ble      lbl_8027C168
	frsqrte  f3, f21
	fmuls    f21, f3, f21
	b        lbl_8027C168

lbl_8027C164:
	fmr      f21, f3

lbl_8027C168:
	fadds    f3, f19, f1
	lwz      r3, 0xc0(r30)
	lfs      f4, lbl_8051B518@sda21(r2)
	fadds    f1, f20, f2
	fadds    f0, f22, f0
	lfs      f5, 0x44c(r3)
	lfs      f17, 0x474(r3)
	fmuls    f2, f4, f3
	fmuls    f1, f4, f1
	addi     r3, r1, 0x54
	fmuls    f0, f4, f0
	stfs     f21, 0x38(r1)
	fmuls    f18, f26, f5
	fmuls    f16, f28, f5
	stfs     f2, 0x2c(r1)
	addi     r4, r1, 0x2c
	stfs     f1, 0x30(r1)
	stfs     f0, 0x34(r1)
	bl       __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
	li       r0, 1
	addi     r3, r1, 0x74
	stb      r0, 0x70(r1)
	addi     r4, r1, 0x54
	bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
	addi     r3, r1, 0x74
	bl       first__Q24Game12CellIteratorFv
	b        lbl_8027C344

lbl_8027C1D4:
	addi     r3, r1, 0x74
	bl       __ml__Q24Game12CellIteratorFv
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8027C33C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8027C230
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8027C33C

lbl_8027C230:
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0xc(r1)
	lfs      f0, 8(r1)
	fsubs    f1, f1, f20
	lfs      f2, 0x10(r1)
	fsubs    f0, f0, f19
	lfs      f4, lbl_8051B4E8@sda21(r2)
	fsubs    f2, f2, f22
	fmuls    f3, f27, f1
	fmadds   f3, f28, f0, f3
	fmadds   f3, f26, f2, f3
	fcmpo    cr0, f3, f4
	ble      lbl_8027C280
	fmr      f4, f3
	b        lbl_8027C284

lbl_8027C280:
	fneg     f4, f3

lbl_8027C284:
	lfs      f5, lbl_8051B4E0@sda21(r2)
	fcmpo    cr0, f4, f5
	bge      lbl_8027C33C
	fmuls    f5, f29, f1
	fmadds   f5, f30, f0, f5
	fmadds   f6, f31, f2, f5
	fcmpo    cr0, f6, f21
	bge      lbl_8027C33C
	lfs      f5, lbl_8051B4E8@sda21(r2)
	fcmpo    cr0, f6, f5
	ble      lbl_8027C33C
	fmuls    f1, f25, f1
	fmadds   f0, f23, f0, f1
	fmadds   f1, f24, f2, f0
	fcmpo    cr0, f1, f5
	ble      lbl_8027C2C8
	b        lbl_8027C2CC

lbl_8027C2C8:
	fneg     f1, f1

lbl_8027C2CC:
	lfs      f0, lbl_8051B508@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8027C33C
	fdivs    f0, f3, f4
	lwz      r5, 0xc0(r30)
	lis      r3, __vt__Q24Game11Interaction@ha
	lis      r4, __vt__Q24Game12InteractWind@ha
	lfs      f2, 0x604(r5)
	addi     r0, r3, __vt__Q24Game11Interaction@l
	fmuls    f1, f0, f16
	lis      r3, __vt__Q24Game13InteractDenki@ha
	fmuls    f0, f0, f18
	stw      r0, 0x3c(r1)
	addi     r4, r4, __vt__Q24Game12InteractWind@l
	addi     r0, r3, __vt__Q24Game13InteractDenki@l
	stw      r4, 0x3c(r1)
	mr       r3, r31
	addi     r4, r1, 0x3c
	stw      r30, 0x40(r1)
	stfs     f2, 0x44(r1)
	stfs     f1, 0x48(r1)
	stfs     f17, 0x4c(r1)
	stfs     f0, 0x50(r1)
	stw      r0, 0x3c(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_8027C33C:
	addi     r3, r1, 0x74
	bl       next__Q24Game12CellIteratorFv

lbl_8027C344:
	addi     r3, r1, 0x74
	bl       isDone__Q24Game12CellIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8027C1D4
	psq_l    f31, 456(r1), 0, qr0
	lfd      f31, 0x1c0(r1)
	psq_l    f30, 440(r1), 0, qr0
	lfd      f30, 0x1b0(r1)
	psq_l    f29, 424(r1), 0, qr0
	lfd      f29, 0x1a0(r1)
	psq_l    f28, 408(r1), 0, qr0
	lfd      f28, 0x190(r1)
	psq_l    f27, 392(r1), 0, qr0
	lfd      f27, 0x180(r1)
	psq_l    f26, 376(r1), 0, qr0
	lfd      f26, 0x170(r1)
	psq_l    f25, 360(r1), 0, qr0
	lfd      f25, 0x160(r1)
	psq_l    f24, 344(r1), 0, qr0
	lfd      f24, 0x150(r1)
	psq_l    f23, 328(r1), 0, qr0
	lfd      f23, 0x140(r1)
	psq_l    f22, 312(r1), 0, qr0
	lfd      f22, 0x130(r1)
	psq_l    f21, 296(r1), 0, qr0
	lfd      f21, 0x120(r1)
	psq_l    f20, 280(r1), 0, qr0
	lfd      f20, 0x110(r1)
	psq_l    f19, 264(r1), 0, qr0
	lfd      f19, 0x100(r1)
	psq_l    f18, 248(r1), 0, qr0
	lfd      f18, 0xf0(r1)
	psq_l    f17, 232(r1), 0, qr0
	lfd      f17, 0xe0(r1)
	psq_l    f16, 216(r1), 0, qr0
	lfd      f16, 0xd0(r1)
	lwz      r31, 0xcc(r1)
	lwz      r0, 0x1d4(r1)
	lwz      r30, 0xc8(r1)
	mtlr     r0
	addi     r1, r1, 0x1d0
	blr
	*/
}
} // namespace ElecBug
} // namespace Game

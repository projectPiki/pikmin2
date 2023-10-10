#include "Game/Entities/MiniHoudai.h"

namespace Game {

/*
 * --INFO--
 * Address:	802EBFF8
 * Size:	000148
 */
MiniHoudai::Obj::Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	beq      lbl_802EC038
	addi     r0, r31, 0x308
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x308(r31)
	stw      r0, 0x30c(r31)
	stw      r0, 0x310(r31)

lbl_802EC038:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q24Game9EnemyBaseFv
	lis      r3, __vt__Q34Game10MiniHoudai3Obj@ha
	addi     r0, r31, 0x308
	addi     r5, r3, __vt__Q34Game10MiniHoudai3Obj@l
	addi     r3, r31, 0x2c0
	stw      r5, 0(r31)
	addi     r4, r5, 0x1b0
	addi     r5, r5, 0x2fc
	stw      r4, 0x178(r31)
	lwz      r4, 0x17c(r31)
	stw      r5, 0(r4)
	lwz      r4, 0x17c(r31)
	subf     r0, r4, r0
	stw      r0, 0xc(r4)
	bl       __ct__Q34Game15WalkSmokeEffect3MgrFv
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_802EC0CC
	bl       __ct__Q24Game17EnemyAnimatorBaseFv
	lis      r3, __vt__Q34Game10MiniHoudai14ProperAnimator@ha
	lis      r4, __vt__Q28SysShape12BaseAnimator@ha
	addi     r0, r3, __vt__Q34Game10MiniHoudai14ProperAnimator@l
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

lbl_802EC0CC:
	stw      r30, 0x184(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802EC100
	lis      r5, __vt__Q24Game17EnemyStateMachine@ha
	lis      r3, __vt__Q34Game10MiniHoudai3FSM@ha
	addi     r0, r5, __vt__Q24Game17EnemyStateMachine@l
	li       r5, -1
	stw      r0, 0(r4)
	addi     r0, r3, __vt__Q34Game10MiniHoudai3FSM@l
	stw      r5, 0x18(r4)
	stw      r0, 0(r4)

lbl_802EC100:
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x2f8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       createShotGun__Q34Game10MiniHoudai3ObjFv
	mr       r3, r31
	bl       createEffect__Q34Game10MiniHoudai3ObjFv
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
 * Address:	802EC140
 * Size:	000004
 */
void MiniHoudai::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802EC144
 * Size:	0000C8
 */
void MiniHoudai::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	lwz      r0, 0x1e0(r31)
	mr       r3, r31
	rlwinm   r0, r0, 0, 0x18, 0x16
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x1a, 0x18
	stw      r0, 0x1e0(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x61
	bne      lbl_802EC19C
	lwz      r0, 0x1e0(r31)
	ori      r0, r0, 0x400
	stw      r0, 0x1e0(r31)

lbl_802EC19C:
	lfs      f1, lbl_8051CF88@sda21(r2)
	li       r0, -1
	lfs      f0, lbl_8051CF8C@sda21(r2)
	mr       r3, r31
	stfs     f1, 0x2c8(r31)
	stfs     f0, 0x2cc(r31)
	stfs     f0, 0x2d0(r31)
	stw      r0, 0x2d4(r31)
	bl       resetWayPoint__Q34Game10MiniHoudai3ObjFv
	mr       r3, r31
	bl       setNearestWayPoint__Q34Game10MiniHoudai3ObjFv
	mr       r3, r31
	bl       setupShotGun__Q34Game10MiniHoudai3ObjFv
	mr       r3, r31
	bl       setupEffect__Q34Game10MiniHoudai3ObjFv
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 7
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
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
 * Address:	802EC20C
 * Size:	00004C
 */
void MiniHoudai::Obj::onKill(Game::CreatureKillArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       finishChargeEffect__Q34Game10MiniHoudai3ObjFv
	mr       r3, r30
	bl       forceFinishShotGun__Q34Game10MiniHoudai3ObjFv
	mr       r3, r30
	mr       r4, r31
	bl       onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
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
 * Address:	802EC258
 * Size:	000054
 */
void MiniHoudai::Obj::doUpdate()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       updateCaution__Q34Game10MiniHoudai3ObjFv
	mr       r3, r31
	bl       updateTargetDistance__Q34Game10MiniHoudai3ObjFv
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       doUpdateShotGun__Q34Game10MiniHoudai3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EC2AC
 * Size:	000034
 */
void MiniHoudai::Obj::doUpdateCommon()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doUpdateCommon__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       doUpdateCommonShotGun__Q34Game10MiniHoudai3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EC2E0
 * Size:	00003C
 */
void MiniHoudai::Obj::doAnimationCullingOff()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       setShotGunCallBack__Q34Game10MiniHoudai3ObjFv
	mr       r3, r31
	bl       doAnimationCullingOff__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       resetShotGunCallBack__Q34Game10MiniHoudai3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EC31C
 * Size:	000004
 */
void MiniHoudai::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802EC320
 * Size:	000020
 */
void MiniHoudai::Obj::doDebugDraw(Graphics&)
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
 * Address:	802EC340
 * Size:	00004C
 */
void MiniHoudai::Obj::setFSM(Game::MiniHoudai::FSM*)
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
 * Address:	802EC38C
 * Size:	0000E0
 */
void MiniHoudai::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	addi     r4, r2, lbl_8051CF90@sda21
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f4, 0x2c(r3)
	lfs      f3, 0x1c(r3)
	lfs      f1, 0xc(r3)
	lfs      f0, lbl_8051CF98@sda21(r2)
	stfs     f1, 0(r31)
	lfs      f2, lbl_8051CF9C@sda21(r2)
	stfs     f3, 4(r31)
	stfs     f4, 8(r31)
	lfs      f1, 4(r31)
	fsubs    f0, f1, f0
	stfs     f0, 4(r31)
	lfs      f1, 0x190(r30)
	lfs      f0, 4(r31)
	fadds    f1, f2, f1
	fcmpo    cr0, f0, f1
	bge      lbl_802EC3FC
	stfs     f1, 4(r31)

lbl_802EC3FC:
	lfs      f1, lbl_8051CF8C@sda21(r2)
	mr       r3, r30
	lfs      f0, lbl_8051CFA0@sda21(r2)
	stfs     f1, 0xc(r31)
	stfs     f0, 0x10(r31)
	stfs     f1, 0x14(r31)
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 1
	bgt      lbl_802EC42C
	lfs      f0, lbl_8051CFA4@sda21(r2)
	stfs     f0, 0x18(r31)
	b        lbl_802EC44C

lbl_802EC42C:
	lwz      r0, 0x1e4(r30)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_802EC444
	lfs      f0, lbl_8051CFA8@sda21(r2)
	stfs     f0, 0x18(r31)
	b        lbl_802EC44C

lbl_802EC444:
	lfs      f0, lbl_8051CFAC@sda21(r2)
	stfs     f0, 0x18(r31)

lbl_802EC44C:
	lfs      f0, lbl_8051CFB0@sda21(r2)
	stfs     f0, 0x1c(r31)
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
 * Address:	802EC46C
 * Size:	000044
 */
bool MiniHoudai::Obj::damageCallBack(Game::Creature*, float, CollPart*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r5, 0
	stw      r0, 0x14(r1)
	beq      lbl_802EC48C
	lfs      f2, lbl_8051CFA0@sda21(r2)
	bl       addDamage__Q24Game9EnemyBaseFff
	b        lbl_802EC49C

lbl_802EC48C:
	lfs      f0, lbl_8051CFB4@sda21(r2)
	lfs      f2, lbl_8051CFA0@sda21(r2)
	fmuls    f1, f1, f0
	bl       addDamage__Q24Game9EnemyBaseFff

lbl_802EC49C:
	lwz      r0, 0x14(r1)
	li       r3, 1
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EC4B0
 * Size:	000034
 */
void MiniHoudai::Obj::doStartStoneState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartStoneState__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       finishChargeEffect__Q34Game10MiniHoudai3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EC4E4
 * Size:	000020
 */
void MiniHoudai::Obj::doFinishStoneState()
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
 * Address:	802EC504
 * Size:	000034
 */
void MiniHoudai::Obj::doStartEarthquakeFitState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartEarthquakeFitState__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       finishChargeEffect__Q34Game10MiniHoudai3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EC538
 * Size:	000020
 */
void MiniHoudai::Obj::doFinishEarthquakeFitState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EC558
 * Size:	000034
 */
void MiniHoudai::Obj::doStartWaitingBirthTypeDrop()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       effectDrawOff__Q34Game10MiniHoudai3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EC58C
 * Size:	000034
 */
void MiniHoudai::Obj::doFinishWaitingBirthTypeDrop()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       effectDrawOn__Q34Game10MiniHoudai3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EC5C0
 * Size:	000028
 */
void MiniHoudai::Obj::startCarcassMotion()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 6
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
 * Address:	802EC5E8
 * Size:	000020
 */
void MiniHoudai::Obj::doStartMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       effectDrawOff__Q34Game10MiniHoudai3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EC608
 * Size:	000020
 */
void MiniHoudai::Obj::doEndMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       effectDrawOn__Q34Game10MiniHoudai3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EC628
 * Size:	000064
 */
void MiniHoudai::Obj::initWalkSmokeEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 2
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 0x2c0
	bl       alloc__Q34Game15WalkSmokeEffect3MgrFi
	lwz      r5, 0x174(r31)
	addi     r3, r31, 0x2c0
	lfs      f1, lbl_8051CF9C@sda21(r2)
	li       r4, 0
	addi     r6, r2, lbl_8051CFB8@sda21
	bl       setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
	lwz      r5, 0x174(r31)
	addi     r3, r31, 0x2c0
	lfs      f1, lbl_8051CF9C@sda21(r2)
	li       r4, 1
	addi     r6, r2, lbl_8051CFC0@sda21
	bl       setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EC68C
 * Size:	000008
 */
WalkSmokeEffect::Mgr* MiniHoudai::Obj::getWalkSmokeEffectMgr()
{
	/*
	addi     r3, r3, 0x2c0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EC694
 * Size:	000014
 */
bool MiniHoudai::Obj::doBecomeCarcass()
{
	/*
	lfs      f0, lbl_8051CF8C@sda21(r2)
	stfs     f0, 0x2c8(r3)
	stfs     f0, 0x200(r3)
	li       r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EC6A8
 * Size:	0001FC
 */
void MiniHoudai::Obj::doUpdateCarcass()
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	mr       r31, r3
	lwz      r3, 0x17c(r3)
	lwz      r3, 4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802EC844
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x2c8(r31)
	lfs      f0, 0x81c(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_802EC744
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c8(r31)
	lwz      r3, lifeGaugeMgr@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_802EC880
	lwz      r4, 0xc0(r31)
	lfs      f1, 0x2c8(r31)
	lfs      f0, 0x81c(r4)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_802EC880
	lfs      f1, lbl_8051CF8C@sda21(r2)
	mr       r4, r31
	bl       activeLifeGauge__12LifeGaugeMgrFPQ24Game8Creaturef
	b        lbl_802EC880

lbl_802EC744:
	lfs      f2, 0x200(r31)
	lfs      f1, 0x204(r31)
	fcmpo    cr0, f2, f1
	bge      lbl_802EC880
	lfs      f0, 0x844(r3)
	lwz      r3, sys@sda21(r13)
	fdivs    f1, f1, f0
	lfs      f0, 0x54(r3)
	fmadds   f0, f1, f0, f2
	stfs     f0, 0x200(r31)
	lfs      f1, 0x200(r31)
	lfs      f0, 0x204(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_802EC880
	lwz      r3, 0x17c(r31)
	li       r4, 0
	lwz      r3, 4(r3)
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	lfs      f31, 0x140(r31)
	addi     r3, r1, 8
	lfs      f30, 0x160(r31)
	bl       __ct__Q24Game13EnemyBirthArgFv
	lfs      f0, 0x18c(r31)
	lis      r3, atanTable___5JMath@ha
	fmr      f1, f31
	addi     r3, r3, atanTable___5JMath@l
	stfs     f0, 8(r1)
	fmr      f2, f30
	lfs      f0, 0x190(r31)
	stfs     f0, 0xc(r1)
	lfs      f0, 0x194(r31)
	stfs     f0, 0x10(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	stfs     f1, 0x14(r1)
	mr       r3, r31
	lfs      f0, 0x2ac(r31)
	stfs     f0, 0x34(r1)
	lbz      r4, 0x1f3(r31)
	neg      r0, r4
	or       r0, r0, r4
	srwi     r0, r0, 0x1f
	stb      r0, 0x38(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	addi     r5, r1, 8
	bl       birth__Q24Game15GeneralEnemyMgrFiRQ24Game13EnemyBirthArg
	cmplwi   r3, 0
	beq      lbl_802EC880
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 1
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	b        lbl_802EC880

lbl_802EC844:
	lwz      r0, lifeGaugeMgr@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_802EC880
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x2c8(r31)
	lfs      f0, 0x81c(r3)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_802EC880
	lfs      f0, lbl_8051CF8C@sda21(r2)
	mr       r4, r31
	stfs     f0, 0x2c8(r31)
	stfs     f0, 0x200(r31)
	lwz      r3, lifeGaugeMgr@sda21(r13)
	bl       inactiveLifeGauge__12LifeGaugeMgrFPQ24Game8Creature

lbl_802EC880:
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	lwz      r0, 0x74(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EC8A4
 * Size:	000064
 */
void MiniHoudai::Obj::doGetLifeGaugeParam(Game::LifeGaugeParam&)
{
	/*
	lfs      f0, 0x18c(r3)
	stfs     f0, 0(r4)
	lwz      r5, 0x17c(r3)
	lwz      r0, 4(r5)
	cmplwi   r0, 0
	beq      lbl_802EC8D0
	lfs      f1, lbl_8051CFAC@sda21(r2)
	lfs      f0, 0x190(r3)
	fadds    f0, f1, f0
	stfs     f0, 4(r4)
	b        lbl_802EC8E4

lbl_802EC8D0:
	lwz      r5, 0xc0(r3)
	lfs      f1, 0x190(r3)
	lfs      f0, 0x12c(r5)
	fadds    f0, f1, f0
	stfs     f0, 4(r4)

lbl_802EC8E4:
	lfs      f1, 0x194(r3)
	lfs      f0, lbl_8051CFC8@sda21(r2)
	stfs     f1, 8(r4)
	lfs      f2, 0x200(r3)
	lfs      f1, 0x204(r3)
	fdivs    f1, f2, f1
	stfs     f1, 0xc(r4)
	stfs     f0, 0x10(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EC908
 * Size:	000050
 */
void MiniHoudai::Obj::updateCaution()
{
	/*
	lwz      r4, 0x1e0(r3)
	rlwinm.  r0, r4, 0, 0x1b, 0x1b
	bne      lbl_802EC928
	rlwinm.  r0, r4, 0, 0x1e, 0x1e
	bne      lbl_802EC928
	lwz      r0, 0x1f4(r3)
	cmpwi    r0, 0
	beq      lbl_802EC930

lbl_802EC928:
	lfs      f0, lbl_8051CF8C@sda21(r2)
	stfs     f0, 0x2c8(r3)

lbl_802EC930:
	lwz      r4, 0xc0(r3)
	lfs      f1, 0x2c8(r3)
	lfs      f0, 0x62c(r4)
	fcmpo    cr0, f1, f0
	bgelr
	lwz      r4, sys@sda21(r13)
	lfs      f0, 0x54(r4)
	fadds    f0, f1, f0
	stfs     f0, 0x2c8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EC958
 * Size:	000024
 */
void MiniHoudai::Obj::getViewAngle()
{
	/*
	lwz      r4, 0xc0(r3)
	lfs      f1, 0x2c8(r3)
	lfs      f0, 0x62c(r4)
	fcmpo    cr0, f1, f0
	bge      lbl_802EC974
	lfs      f1, lbl_8051CFCC@sda21(r2)
	blr

lbl_802EC974:
	lfs      f1, 0x424(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EC97C
 * Size:	000010
 */
void MiniHoudai::Obj::resetWayPoint()
{
	/*
	li       r0, 0
	stw      r0, 0x2f0(r3)
	stw      r0, 0x2f4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EC98C
 * Size:	0000B0
 */
void MiniHoudai::Obj::setNearestWayPoint()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lfs      f0, lbl_8051CFC8@sda21(r2)
	stw      r0, 0x34(r1)
	li       r0, 0
	addi     r4, r1, 8
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lwz      r3, 0x2f0(r3)
	stw      r3, 0x2f4(r31)
	lfs      f1, 0x18c(r31)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f1, 8(r1)
	lfs      f1, 0x190(r31)
	stfs     f1, 0xc(r1)
	lfs      f1, 0x194(r31)
	stfs     f1, 0x10(r1)
	stw      r0, 0x14(r1)
	stb      r0, 0x18(r1)
	stfs     f0, 0x1c(r1)
	lwz      r3, 8(r3)
	bl       getNearestWayPoint__Q24Game8RouteMgrFRQ24Game11WPSearchArg
	stw      r3, 0x2f0(r31)
	lwz      r3, 0x2f0(r31)
	cmplwi   r3, 0
	beq      lbl_802ECA10
	lfs      f1, 0x50(r3)
	lfs      f2, 0x54(r3)
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x2e4(r31)
	stfs     f1, 0x2e8(r31)
	stfs     f2, 0x2ec(r31)
	b        lbl_802ECA28

lbl_802ECA10:
	lfs      f0, 0x198(r31)
	stfs     f0, 0x2e4(r31)
	lfs      f0, 0x19c(r31)
	stfs     f0, 0x2e8(r31)
	lfs      f0, 0x1a0(r31)
	stfs     f0, 0x2ec(r31)

lbl_802ECA28:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ECA3C
 * Size:	000260
 */
void MiniHoudai::Obj::setLinkWayPoint()
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stw      r31, 0x7c(r1)
	mr       r31, r3
	stw      r30, 0x78(r1)
	stw      r29, 0x74(r1)
	stw      r28, 0x70(r1)
	lwz      r4, 0x2f0(r3)
	cmplwi   r4, 0
	beq      lbl_802ECBF4
	lwz      r3, 0x2f4(r31)
	li       r29, 0
	li       r28, -1
	cmplwi   r3, 0
	beq      lbl_802ECA80
	lha      r28, 0x36(r3)

lbl_802ECA80:
	addi     r3, r1, 8
	li       r5, 1
	bl       __ct__Q24Game16WayPointIteratorFPQ24Game8WayPointb
	addi     r3, r1, 8
	bl       first__Q24Game16WayPointIteratorFv
	addi     r30, r1, 0x2c
	b        lbl_802ECAF4

lbl_802ECA9C:
	addi     r3, r1, 8
	bl       __ml__Q24Game16WayPointIteratorFv
	extsh    r0, r3
	cmpw     r0, r28
	beq      lbl_802ECAEC
	lwz      r5, mapMgr__4Game@sda21(r13)
	mr       r4, r3
	lwz      r3, 8(r5)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_802ECAEC
	lbz      r0, 0x34(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_802ECAEC
	stw      r3, 0(r30)
	addi     r30, r30, 4
	addi     r29, r29, 1

lbl_802ECAEC:
	addi     r3, r1, 8
	bl       next__Q24Game16WayPointIteratorFv

lbl_802ECAF4:
	addi     r3, r1, 8
	bl       isDone__Q24Game16WayPointIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802ECA9C
	cmpwi    r29, 0
	beq      lbl_802ECB90
	lwz      r0, 0x2f0(r31)
	stw      r0, 0x2f4(r31)
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x54(r1)
	xoris    r0, r29, 0x8000
	lfd      f2, lbl_8051CFD8@sda21(r2)
	addi     r3, r1, 0x2c
	stw      r4, 0x50(r1)
	lfs      f0, lbl_8051CFD0@sda21(r2)
	lfd      f1, 0x50(r1)
	stw      r0, 0x5c(r1)
	fsubs    f1, f1, f2
	stw      r4, 0x58(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x58(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x60(r1)
	lwz      r0, 0x64(r1)
	slwi     r0, r0, 2
	lwzx     r0, r3, r0
	stw      r0, 0x2f0(r31)
	lwz      r3, 0x2f0(r31)
	lfs      f1, 0x50(r3)
	lfs      f2, 0x54(r3)
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x2e4(r31)
	stfs     f1, 0x2e8(r31)
	stfs     f2, 0x2ec(r31)
	b        lbl_802ECC7C

lbl_802ECB90:
	cmpwi    r28, 0
	blt      lbl_802ECBF4
	lwz      r3, mapMgr__4Game@sda21(r13)
	extsh    r4, r28
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_802ECBF4
	lbz      r0, 0x34(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_802ECBF4
	lwz      r0, 0x2f0(r31)
	stw      r0, 0x2f4(r31)
	stw      r3, 0x2f0(r31)
	lwz      r3, 0x2f0(r31)
	lfs      f1, 0x50(r3)
	lfs      f2, 0x54(r3)
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x2e4(r31)
	stfs     f1, 0x2e8(r31)
	stfs     f2, 0x2ec(r31)
	b        lbl_802ECC7C

lbl_802ECBF4:
	lwz      r3, 0x2f0(r31)
	li       r0, 0
	lfs      f0, lbl_8051CFC8@sda21(r2)
	addi     r4, r1, 0x14
	stw      r3, 0x2f4(r31)
	lfs      f1, 0x18c(r31)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f1, 0x14(r1)
	lfs      f1, 0x190(r31)
	stfs     f1, 0x18(r1)
	lfs      f1, 0x194(r31)
	stfs     f1, 0x1c(r1)
	stw      r0, 0x20(r1)
	stb      r0, 0x24(r1)
	stfs     f0, 0x28(r1)
	lwz      r3, 8(r3)
	bl       getNearestWayPoint__Q24Game8RouteMgrFRQ24Game11WPSearchArg
	stw      r3, 0x2f0(r31)
	lwz      r3, 0x2f0(r31)
	cmplwi   r3, 0
	beq      lbl_802ECC64
	lfs      f1, 0x50(r3)
	lfs      f2, 0x54(r3)
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x2e4(r31)
	stfs     f1, 0x2e8(r31)
	stfs     f2, 0x2ec(r31)
	b        lbl_802ECC7C

lbl_802ECC64:
	lfs      f0, 0x198(r31)
	stfs     f0, 0x2e4(r31)
	lfs      f0, 0x19c(r31)
	stfs     f0, 0x2e8(r31)
	lfs      f0, 0x1a0(r31)
	stfs     f0, 0x2ec(r31)

lbl_802ECC7C:
	lwz      r0, 0x84(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	lwz      r29, 0x74(r1)
	lwz      r28, 0x70(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ECC9C
 * Size:	00006C
 */
Creature* MiniHoudai::Obj::getSearchedTarget()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r4, 0xc0(r3)
	lfs      f1, 0x2c8(r3)
	lfs      f0, 0x62c(r4)
	fcmpo    cr0, f1, f0
	bge      lbl_802ECCCC
	lfs      f1, lbl_8051CFCC@sda21(r2)
	b        lbl_802ECCD0

lbl_802ECCCC:
	lfs      f1, 0x424(r4)

lbl_802ECCD0:
	lfs      f2, 0x3d4(r4)
	li       r4, 0
	li       r5, 0
	li       r6, 0
	bl
"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
	cmplwi   r3, 0
	beq      lbl_802ECCF4
	lfs      f0, lbl_8051CF8C@sda21(r2)
	stfs     f0, 0x2c8(r31)

lbl_802ECCF4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ECD08
 * Size:	000128
 */
void MiniHoudai::Obj::updateTargetDistance()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lwz      r3, 0x2f0(r3)
	cmplwi   r3, 0
	beq      lbl_802ECD30
	lfs      f0, 0x58(r3)
	b        lbl_802ECD38

lbl_802ECD30:
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x384(r3)

lbl_802ECD38:
	lfs      f2, 0x194(r31)
	fmuls    f0, f0, f0
	lfs      f1, 0x2ec(r31)
	lfs      f3, 0x18c(r31)
	fsubs    f2, f2, f1
	lfs      f1, 0x2e4(r31)
	fsubs    f3, f3, f1
	fmuls    f1, f2, f2
	fmadds   f1, f3, f3, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802ECD74
	mr       r3, r31
	bl       setLinkWayPoint__Q34Game10MiniHoudai3ObjFv
	lfs      f0, lbl_8051CF8C@sda21(r2)
	stfs     f0, 0x2d0(r31)

lbl_802ECD74:
	lfs      f1, 0x2d0(r31)
	lfs      f0, lbl_8051CF9C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802ECE1C
	lfs      f1, lbl_8051CF8C@sda21(r2)
	li       r0, 0
	lfs      f0, lbl_8051CFC8@sda21(r2)
	addi     r4, r1, 8
	stfs     f1, 0x2d0(r31)
	lwz      r3, 0x2f0(r31)
	stw      r3, 0x2f4(r31)
	lfs      f1, 0x18c(r31)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f1, 8(r1)
	lfs      f1, 0x190(r31)
	stfs     f1, 0xc(r1)
	lfs      f1, 0x194(r31)
	stfs     f1, 0x10(r1)
	stw      r0, 0x14(r1)
	stb      r0, 0x18(r1)
	stfs     f0, 0x1c(r1)
	lwz      r3, 8(r3)
	bl       getNearestWayPoint__Q24Game8RouteMgrFRQ24Game11WPSearchArg
	stw      r3, 0x2f0(r31)
	lwz      r3, 0x2f0(r31)
	cmplwi   r3, 0
	beq      lbl_802ECDFC
	lfs      f1, 0x50(r3)
	lfs      f2, 0x54(r3)
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x2e4(r31)
	stfs     f1, 0x2e8(r31)
	stfs     f2, 0x2ec(r31)
	b        lbl_802ECE14

lbl_802ECDFC:
	lfs      f0, 0x198(r31)
	stfs     f0, 0x2e4(r31)
	lfs      f0, 0x19c(r31)
	stfs     f0, 0x2e8(r31)
	lfs      f0, 0x1a0(r31)
	stfs     f0, 0x2ec(r31)

lbl_802ECE14:
	mr       r3, r31
	bl       updateHomePosition__Q34Game10MiniHoudai3ObjFv

lbl_802ECE1C:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ECE30
 * Size:	0000BC
 */
void MiniHoudai::Obj::updateHomePosition()
{
	/*
	stwu     r1, -0x20(r1)
	lfs      f0, lbl_8051CF8C@sda21(r2)
	lfs      f5, 0x1fc(r3)
	fmr      f1, f5
	fcmpo    cr0, f5, f0
	bge      lbl_802ECE4C
	fneg     f1, f5

lbl_802ECE4C:
	lfs      f3, lbl_8051CFE0@sda21(r2)
	lis      r5, sincosTable___5JMath@ha
	lfs      f0, lbl_8051CF8C@sda21(r2)
	addi     r5, r5, sincosTable___5JMath@l
	fmuls    f2, f1, f3
	lwz      r4, 0xc0(r3)
	fcmpo    cr0, f5, f0
	lfs      f1, 0x194(r3)
	lfs      f6, 0x384(r4)
	fctiwz   f0, f2
	lfs      f2, 0x190(r3)
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r4, r5, r0
	lfs      f0, 4(r4)
	fmadds   f4, f0, f6, f1
	bge      lbl_802ECEB8
	lfs      f0, lbl_8051CFE4@sda21(r2)
	fmuls    f0, f5, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r5, r0
	fneg     f1, f0
	b        lbl_802ECED0

lbl_802ECEB8:
	fmuls    f0, f5, f3
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r5, r0

lbl_802ECED0:
	lfs      f0, 0x18c(r3)
	fmadds   f0, f1, f6, f0
	stfs     f0, 0x198(r3)
	stfs     f2, 0x19c(r3)
	stfs     f4, 0x1a0(r3)
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ECEEC
 * Size:	00032C
 */
bool MiniHoudai::Obj::isAttackableTarget()
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
	stfd     f28, 0xf0(r1)
	psq_st   f28, 248(r1), 0, qr0
	stfd     f27, 0xe0(r1)
	psq_st   f27, 232(r1), 0, qr0
	stfd     f26, 0xd0(r1)
	psq_st   f26, 216(r1), 0, qr0
	stw      r31, 0xcc(r1)
	stw      r30, 0xc8(r1)
	stw      r29, 0xc4(r1)
	mr       r31, r3
	addi     r3, r1, 0x20
	lwz      r4, 0x2f8(r31)
	bl       getShotGunPosition__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
	lfs      f3, 0x1fc(r31)
	lfs      f0, lbl_8051CF8C@sda21(r2)
	fmr      f1, f3
	lfs      f28, 0x20(r1)
	fcmpo    cr0, f3, f0
	lfs      f27, 0x24(r1)
	lfs      f26, 0x28(r1)
	bge      lbl_802ECF68
	fneg     f1, f3

lbl_802ECF68:
	lfs      f2, lbl_8051CFE0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051CF8C@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0xa8(r1)
	lwz      r0, 0xac(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f30, 4(r3)
	bge      lbl_802ECFC0
	lfs      f0, lbl_8051CFE4@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0xb0(r1)
	lwz      r0, 0xb4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f29, f0
	b        lbl_802ECFD8

lbl_802ECFC0:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0xb8(r1)
	lwz      r0, 0xbc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f29, r4, r0

lbl_802ECFD8:
	lwz      r4, 0xc0(r31)
	fneg     f31, f30
	lfs      f0, lbl_8051CFE8@sda21(r2)
	addi     r3, r1, 0x3c
	lfs      f2, 0x44c(r4)
	addi     r4, r1, 0x2c
	lfs      f1, lbl_8051CFEC@sda21(r2)
	fmuls    f5, f0, f2
	lfs      f3, 0x194(r31)
	lfs      f0, 0x18c(r31)
	fmuls    f4, f1, f2
	lfs      f1, 0x190(r31)
	lfs      f2, lbl_8051CF8C@sda21(r2)
	fmadds   f3, f30, f5, f3
	stfs     f4, 0x38(r1)
	fmadds   f1, f2, f5, f1
	fmadds   f0, f29, f5, f0
	stfs     f3, 0x34(r1)
	stfs     f0, 0x2c(r1)
	stfs     f1, 0x30(r1)
	bl       __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
	li       r0, 1
	addi     r3, r1, 0x5c
	stb      r0, 0x58(r1)
	addi     r4, r1, 0x3c
	bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
	addi     r3, r1, 0x5c
	bl       first__Q24Game12CellIteratorFv
	b        lbl_802ED1B8

lbl_802ED04C:
	addi     r3, r1, 0x5c
	bl       __ml__Q24Game12CellIteratorFv
	lwz      r12, 0(r3)
	mr       r30, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802ED1B0
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	mr       r29, r3
	bne      lbl_802ED0CC
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802ED0CC
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802ED0CC
	li       r29, 1

lbl_802ED0CC:
	clrlwi.  r0, r29, 0x18
	beq      lbl_802ED1B0
	mr       r4, r30
	addi     r3, r1, 0x14
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x18(r1)
	lfs      f3, 0x14(r1)
	fsubs    f2, f2, f27
	lfs      f4, 0x1c(r1)
	lfs      f0, lbl_8051CF8C@sda21(r2)
	fsubs    f3, f3, f28
	fsubs    f4, f4, f26
	fcmpo    cr0, f2, f0
	ble      lbl_802ED118
	fmr      f1, f2
	b        lbl_802ED11C

lbl_802ED118:
	fneg     f1, f2

lbl_802ED11C:
	lfs      f0, lbl_8051CFF0@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_802ED1B0
	lfs      f1, lbl_8051CF8C@sda21(r2)
	fmuls    f5, f1, f2
	fmadds   f0, f31, f3, f5
	fmadds   f2, f29, f4, f0
	fcmpo    cr0, f2, f1
	ble      lbl_802ED144
	b        lbl_802ED148

lbl_802ED144:
	fneg     f2, f2

lbl_802ED148:
	lfs      f0, lbl_8051CFF4@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_802ED1B0
	fmadds   f1, f29, f3, f5
	lfs      f0, lbl_8051CFA0@sda21(r2)
	fmadds   f1, f30, f4, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802ED1B0
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x44c(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_802ED1B0
	mr       r4, r30
	addi     r3, r1, 8
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 8(r1)
	li       r3, 1
	stfs     f0, 0x2d8(r31)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x2dc(r31)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x2e0(r31)
	b        lbl_802ED1CC

lbl_802ED1B0:
	addi     r3, r1, 0x5c
	bl       next__Q24Game12CellIteratorFv

lbl_802ED1B8:
	addi     r3, r1, 0x5c
	bl       isDone__Q24Game12CellIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802ED04C
	li       r3, 0

lbl_802ED1CC:
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
	lwz      r31, 0xcc(r1)
	lwz      r30, 0xc8(r1)
	lwz      r0, 0x134(r1)
	lwz      r29, 0xc4(r1)
	mtlr     r0
	addi     r1, r1, 0x130
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ED218
 * Size:	000048
 */
void MiniHoudai::Obj::createShotGun()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x34
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_802ED248
	mr       r4, r31
	bl __ct__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFPQ34Game10MiniHoudai3Obj
	mr       r0, r3

lbl_802ED248:
	stw      r0, 0x2f8(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ED260
 * Size:	000024
 */
void MiniHoudai::Obj::setupShotGun()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f8(r3)
	bl       setupShotGun__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void setShotGunTarget__Q34Game10MiniHoudai3ObjFR10Vector3f()
{
	// UNUSED FUNCTION
}

namespace Game {

/*
 * --INFO--
 * Address:	802ED284
 * Size:	000024
 */
void MiniHoudai::Obj::resetShotGunCallBack()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f8(r3)
	bl       resetCallBack__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ED2A8
 * Size:	000024
 */
void MiniHoudai::Obj::setShotGunCallBack()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f8(r3)
	bl       setCallBack__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ED2CC
 * Size:	000024
 */
void MiniHoudai::Obj::doUpdateShotGun()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f8(r3)
	bl       doUpdate__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ED2F0
 * Size:	000024
 */
void MiniHoudai::Obj::doUpdateCommonShotGun()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f8(r3)
	bl       doUpdateCommon__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ED314
 * Size:	000024
 */
void MiniHoudai::Obj::startShotGunRotation()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f8(r3)
	bl       startRotation__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ED338
 * Size:	000024
 */
void MiniHoudai::Obj::finishShotGunRotation()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f8(r3)
	bl       finishRotation__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ED35C
 * Size:	000024
 */
bool MiniHoudai::Obj::isShotGunRotation()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f8(r3)
	bl       isShotGunRotation__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ED380
 * Size:	000024
 */
bool MiniHoudai::Obj::isShotGunLockOn()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f8(r3)
	bl       isShotGunLockOn__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ED3A4
 * Size:	000024
 */
bool MiniHoudai::Obj::isFinishShotGun()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f8(r3)
	bl       isFinishShotGun__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ED3C8
 * Size:	000024
 */
void MiniHoudai::Obj::emitShotGun()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f8(r3)
	bl       emitShotGun__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ED3EC
 * Size:	00002C
 */
void MiniHoudai::Obj::setShotGunTargetPosition()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	addi     r4, r4, 0x2d8
	lwz      r3, 0x2f8(r3)
	bl
	"setShotGunTarget__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFR10Vector3<f>"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void MiniHoudai::Obj::shotGunDoDebugDraw(Graphics&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802ED418
 * Size:	000024
 */
void MiniHoudai::Obj::forceFinishShotGun()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f8(r3)
	bl       forceFinishShotGun__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ED43C
 * Size:	000138
 */
void MiniHoudai::Obj::createEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802ED4D4
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx9TChaseMtx@ha
	stw      r0, 4(r3)
	addi     r7, r4, __vt__Q23efx9TChaseMtx@l
	lis      r4, __vt__Q23efx12TChibiCharge@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx12TChibiCharge@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r3)
	addi     r6, r7, 0x14
	li       r5, 0x230
	addi     r0, r4, 0x14
	stw      r9, 8(r3)
	sth      r8, 0xc(r3)
	stb      r9, 0xe(r3)
	stw      r7, 0(r3)
	stw      r6, 4(r3)
	stw      r9, 0x10(r3)
	sth      r5, 0xc(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_802ED4D4:
	stw      r3, 0x300(r31)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802ED55C
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx9TChaseMtx@ha
	stw      r0, 4(r3)
	addi     r7, r4, __vt__Q23efx9TChaseMtx@l
	lis      r4, __vt__Q23efx15TChibiDeadLight@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx15TChibiDeadLight@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r3)
	addi     r6, r7, 0x14
	li       r5, 0x231
	addi     r0, r4, 0x14
	stw      r9, 8(r3)
	sth      r8, 0xc(r3)
	stb      r9, 0xe(r3)
	stw      r7, 0(r3)
	stw      r6, 4(r3)
	stw      r9, 0x10(r3)
	sth      r5, 0xc(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_802ED55C:
	stw      r3, 0x304(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ED574
 * Size:	000058
 */
void MiniHoudai::Obj::setupEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r4, r2, lbl_8051CFF8@sda21
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r5, 0x300(r31)
	addi     r4, r2, lbl_8051D000@sda21
	stw      r3, 0x10(r5)
	lwz      r3, 0x174(r31)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r4, 0x304(r31)
	stw      r3, 0x10(r4)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ED5CC
 * Size:	0000A0
 */
void MiniHoudai::Obj::createSmokeSmallEffect(bool)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	clrlwi.  r0, r4, 0x18
	beq      lbl_802ED5F8
	lwz      r3, 0x174(r3)
	addi     r4, r2, lbl_8051D008@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	mr       r7, r3
	b        lbl_802ED60C

lbl_802ED5F8:
	lwz      r3, 0x174(r3)
	addi     r4, r2, lbl_8051D010@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	mr       r7, r3

lbl_802ED60C:
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__Q23efx8TSimple1@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx11TSimpleMtx1@ha
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q23efx8TSimple1@l
	lis      r3, __vt__Q23efx12TChibiSmokeS@ha
	li       r6, 0x23e
	stw      r0, 8(r1)
	addi     r4, r4, __vt__Q23efx11TSimpleMtx1@l
	li       r5, 0
	addi     r0, r3, __vt__Q23efx12TChibiSmokeS@l
	stw      r4, 8(r1)
	addi     r3, r1, 8
	li       r4, 0
	sth      r6, 0xc(r1)
	stw      r5, 0x10(r1)
	stw      r7, 0x14(r1)
	stw      r0, 8(r1)
	bl       create__Q23efx11TSimpleMtx1FPQ23efx3Arg
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ED66C
 * Size:	0000E8
 */
void MiniHoudai::Obj::createSmokeLargeEffect()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	addi     r4, r2, lbl_8051D008@sda21
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__Q23efx8TSimple1@ha
	addi     r0, r5, __vt__Q23efx5TBase@l
	lis      r5, __vt__Q23efx11TSimpleMtx1@ha
	stw      r0, 0x18(r1)
	addi     r0, r4, __vt__Q23efx8TSimple1@l
	lis      r4, __vt__Q23efx12TChibiSmokeL@ha
	li       r7, 0x23d
	stw      r0, 0x18(r1)
	addi     r5, r5, __vt__Q23efx11TSimpleMtx1@l
	li       r6, 0
	addi     r0, r4, __vt__Q23efx12TChibiSmokeL@l
	stw      r5, 0x18(r1)
	li       r4, 0
	stw      r3, 0x24(r1)
	addi     r3, r1, 0x18
	sth      r7, 0x1c(r1)
	stw      r6, 0x20(r1)
	stw      r0, 0x18(r1)
	bl       create__Q23efx11TSimpleMtx1FPQ23efx3Arg
	lwz      r3, 0x174(r31)
	addi     r4, r2, lbl_8051D010@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__Q23efx8TSimple1@ha
	addi     r0, r5, __vt__Q23efx5TBase@l
	lis      r5, __vt__Q23efx11TSimpleMtx1@ha
	stw      r0, 8(r1)
	addi     r0, r4, __vt__Q23efx8TSimple1@l
	lis      r4, __vt__Q23efx12TChibiSmokeL@ha
	li       r7, 0x23d
	stw      r0, 8(r1)
	addi     r5, r5, __vt__Q23efx11TSimpleMtx1@l
	li       r6, 0
	addi     r0, r4, __vt__Q23efx12TChibiSmokeL@l
	stw      r5, 8(r1)
	li       r4, 0
	stw      r3, 0x14(r1)
	addi     r3, r1, 8
	sth      r7, 0xc(r1)
	stw      r6, 0x10(r1)
	stw      r0, 8(r1)
	bl       create__Q23efx11TSimpleMtx1FPQ23efx3Arg
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ED754
 * Size:	000024
 */
void MiniHoudai::Obj::createDownEffect(float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r4, r3, 0x18c
	stw      r0, 0x14(r1)
	bl       "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ED778
 * Size:	000034
 */
void MiniHoudai::Obj::startChargeEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	lwz      r3, 0x300(r3)
	lwz      r12, 0(r3)
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
 * Address:	802ED7AC
 * Size:	000030
 */
void MiniHoudai::Obj::finishChargeEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x300(r3)
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
 * Address:	802ED7DC
 * Size:	000034
 */
void MiniHoudai::Obj::createDeadLightEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	lwz      r3, 0x304(r3)
	lwz      r12, 0(r3)
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
 * Address:	802ED810
 * Size:	0001D4
 */
void MiniHoudai::Obj::createDeadBombEmitEffect()
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	addi     r4, r2, lbl_8051CFF8@sda21
	stw      r0, 0x74(r1)
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	mr       r30, r3
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r4, __vt__Q23efx5TBase@ha
	li       r5, 0
	addi     r0, r4, __vt__Q23efx5TBase@l
	mr       r31, r3
	lis      r3, __vt__Q23efx8TSimple3@ha
	stw      r0, 0x40(r1)
	addi     r0, r3, __vt__Q23efx8TSimple3@l
	lis      r3, __vt__Q23efx11TSimpleMtx3@ha
	stw      r0, 0x40(r1)
	addi     r0, r3, __vt__Q23efx11TSimpleMtx3@l
	lis      r3, __vt__Q23efx11TChibiShoot@ha
	li       r4, 0x23a
	stw      r0, 0x40(r1)
	addi     r0, r3, __vt__Q23efx11TChibiShoot@l
	li       r7, 0x23b
	li       r6, 0x23c
	sth      r4, 0x44(r1)
	addi     r3, r1, 0x40
	li       r4, 0
	sth      r7, 0x46(r1)
	sth      r6, 0x48(r1)
	stw      r5, 0x4c(r1)
	stw      r5, 0x50(r1)
	stw      r5, 0x54(r1)
	stw      r31, 0x58(r1)
	stw      r0, 0x40(r1)
	bl       create__Q23efx11TSimpleMtx3FPQ23efx3Arg
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__Q23efx8TSimple1@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx11TSimpleMtx1@ha
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q23efx8TSimple1@l
	lis      r3, __vt__Q23efx15TChibiDeadMouth@ha
	li       r6, 0x232
	stw      r0, 8(r1)
	addi     r4, r4, __vt__Q23efx11TSimpleMtx1@l
	li       r5, 0
	addi     r0, r3, __vt__Q23efx15TChibiDeadMouth@l
	stw      r4, 8(r1)
	addi     r3, r1, 8
	li       r4, 0
	sth      r6, 0xc(r1)
	stw      r5, 0x10(r1)
	stw      r31, 0x14(r1)
	stw      r0, 8(r1)
	bl       create__Q23efx11TSimpleMtx1FPQ23efx3Arg
	lwz      r3, 0x174(r30)
	addi     r4, r2, lbl_8051D008@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r4, __vt__Q23efx5TBase@ha
	li       r6, 0
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx8TSimple2@ha
	stw      r0, 0x2c(r1)
	addi     r0, r4, __vt__Q23efx8TSimple2@l
	lis      r5, __vt__Q23efx11TSimpleMtx2@ha
	lis      r4, __vt__Q23efx12TChibiDeadSe@ha
	stw      r0, 0x2c(r1)
	addi     r0, r5, __vt__Q23efx11TSimpleMtx2@l
	li       r7, 0x233
	li       r5, 0x234
	stw      r0, 0x2c(r1)
	addi     r0, r4, __vt__Q23efx12TChibiDeadSe@l
	li       r4, 0
	stw      r3, 0x3c(r1)
	addi     r3, r1, 0x2c
	sth      r7, 0x30(r1)
	sth      r5, 0x32(r1)
	stw      r6, 0x34(r1)
	stw      r6, 0x38(r1)
	stw      r0, 0x2c(r1)
	bl       create__Q23efx11TSimpleMtx2FPQ23efx3Arg
	lwz      r3, 0x174(r30)
	addi     r4, r2, lbl_8051D010@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r4, __vt__Q23efx5TBase@ha
	li       r6, 0
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx8TSimple2@ha
	stw      r0, 0x18(r1)
	addi     r0, r4, __vt__Q23efx8TSimple2@l
	lis      r5, __vt__Q23efx11TSimpleMtx2@ha
	lis      r4, __vt__Q23efx12TChibiDeadSe@ha
	stw      r0, 0x18(r1)
	addi     r0, r5, __vt__Q23efx11TSimpleMtx2@l
	li       r7, 0x233
	li       r5, 0x234
	stw      r0, 0x18(r1)
	addi     r0, r4, __vt__Q23efx12TChibiDeadSe@l
	li       r4, 0
	stw      r3, 0x28(r1)
	addi     r3, r1, 0x18
	sth      r7, 0x1c(r1)
	sth      r5, 0x1e(r1)
	stw      r6, 0x20(r1)
	stw      r6, 0x24(r1)
	stw      r0, 0x18(r1)
	bl       create__Q23efx11TSimpleMtx2FPQ23efx3Arg
	lwz      r0, 0x74(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ED9E4
 * Size:	000058
 */
void MiniHoudai::Obj::effectDrawOn()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2f8(r3)
	bl       effectDrawOn__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
	lwz      r3, 0x300(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x304(r31)
	lwz      r12, 0(r3)
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
 * Address:	802EDA3C
 * Size:	000058
 */
void MiniHoudai::Obj::effectDrawOff()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2f8(r3)
	bl       effectDrawOff__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
	lwz      r3, 0x300(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x304(r31)
	lwz      r12, 0(r3)
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
 * Address:	802EDC88
 * Size:	000008
 */
f32 MiniHoudai::Obj::getDownSmokeScale()
{
	/*
	lfs      f1, lbl_8051D018@sda21(r2)
	blr
	*/
}
} // namespace Game

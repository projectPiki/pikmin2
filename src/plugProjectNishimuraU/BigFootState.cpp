#include "Game/Entities/BigFoot.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "nans.h"

namespace Game {
namespace BigFoot {

/*
 * --INFO--
 * Address:	802C62E8
 * Size:	000224
 */
void FSM::init(EnemyBase* enemy)
{
	create(BIGFOOT_Count);
	registerState(new StateDead);
	registerState(new StateStay);
	registerState(new StateLand);
	registerState(new StateWait);
	registerState(new StateFlick);
	registerState(new StateWalk);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 6
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       create__Q24Game17EnemyStateMachineFi
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802C634C
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game7BigFoot5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game7BigFoot9StateDead@ha
	stw      r0, 0(r4)
	li       r7, 0
	addi     r6, r5, __vt__Q34Game7BigFoot5State@l
	addi     r5, r2, lbl_8051C668@sda21
	stw      r7, 4(r4)
	addi     r0, r3, __vt__Q34Game7BigFoot9StateDead@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_802C634C:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802C63A0
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game7BigFoot5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game7BigFoot9StateStay@ha
	stw      r0, 0(r4)
	li       r0, 1
	li       r7, 0
	addi     r6, r5, __vt__Q34Game7BigFoot5State@l
	stw      r0, 4(r4)
	addi     r5, r2, lbl_8051C670@sda21
	addi     r0, r3, __vt__Q34Game7BigFoot9StateStay@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_802C63A0:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802C63F4
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game7BigFoot5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game7BigFoot9StateLand@ha
	stw      r0, 0(r4)
	li       r0, 2
	li       r7, 0
	addi     r6, r5, __vt__Q34Game7BigFoot5State@l
	stw      r0, 4(r4)
	addi     r5, r2, lbl_8051C678@sda21
	addi     r0, r3, __vt__Q34Game7BigFoot9StateLand@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_802C63F4:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802C6448
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game7BigFoot5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game7BigFoot9StateWait@ha
	stw      r0, 0(r4)
	li       r0, 3
	li       r7, 0
	addi     r6, r5, __vt__Q34Game7BigFoot5State@l
	stw      r0, 4(r4)
	addi     r5, r2, lbl_8051C680@sda21
	addi     r0, r3, __vt__Q34Game7BigFoot9StateWait@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_802C6448:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802C649C
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game7BigFoot5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game7BigFoot10StateFlick@ha
	stw      r0, 0(r4)
	li       r0, 4
	li       r7, 0
	addi     r6, r5, __vt__Q34Game7BigFoot5State@l
	stw      r0, 4(r4)
	addi     r5, r2, lbl_8051C688@sda21
	addi     r0, r3, __vt__Q34Game7BigFoot10StateFlick@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_802C649C:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802C64F0
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game7BigFoot5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game7BigFoot9StateWalk@ha
	stw      r0, 0(r4)
	li       r0, 5
	li       r7, 0
	addi     r6, r5, __vt__Q34Game7BigFoot5State@l
	stw      r0, 4(r4)
	addi     r5, r2, lbl_8051C690@sda21
	addi     r0, r3, __vt__Q34Game7BigFoot9StateWalk@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_802C64F0:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C650C
 * Size:	0000CC
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	mr       r3, r31
	bl       forceFinishIKMotion__Q34Game7BigFoot3ObjFv
	mr       r3, r31
	bl       startDeadEffect__Q34Game7BigFoot3ObjFv
	mr       r3, r31
	bl       deathProcedure__Q24Game9EnemyBaseFv
	lwz      r0, 0x1e0(r31)
	mr       r3, r31
	lfs      f0, lbl_8051C698@sda21(r2)
	rlwinm   r0, r0, 0, 0x1a, 0x18
	stw      r0, 0x1e0(r31)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	bl       setEmotionCaution__Q24Game9EnemyBaseFv
	mr       r3, r31
	li       r4, 0
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
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
	li       r4, 0xa
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
 * Address:	802C65D8
 * Size:	000094
 */
void StateDead::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	bl       updateDeadFurEffect__Q34Game7BigFoot3ObjFv
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802C6658
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 2
	bne      lbl_802C6630
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x264(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       createItemAndEnemy__Q34Game7BigFoot3ObjFv
	b        lbl_802C6658

lbl_802C6630:
	cmplwi   r0, 3
	bne      lbl_802C6644
	li       r0, 1
	stb      r0, 0x2dc(r31)
	b        lbl_802C6658

lbl_802C6644:
	cmplwi   r0, 0x3e8
	bne      lbl_802C6658
	mr       r3, r31
	li       r4, 0
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg

lbl_802C6658:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C666C
 * Size:	000004
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802C6670
 * Size:	000084
 */
void StateStay::init(EnemyBase* enemy, StateArg* stateArg)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r3, -1
	lfs      f0, lbl_8051C698@sda21(r2)
	stw      r0, 0x14(r1)
	li       r0, 0
	li       r5, 0
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r3, 0x2c4(r4)
	mr       r3, r31
	li       r4, 1
	lwz      r6, 0x1e0(r31)
	oris     r6, r6, 0x40
	stw      r6, 0x1e0(r31)
	lwz      r6, 0x1e0(r31)
	rlwinm   r6, r6, 0, 0x11, 0xf
	stw      r6, 0x1e0(r31)
	lwz      r6, 0x1e0(r31)
	oris     r6, r6, 0x4000
	stw      r6, 0x1e0(r31)
	stw      r0, 0x230(r31)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	mr       r3, r31
	bl       stopMotion__Q24Game9EnemyBaseFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C66F4
 * Size:	0000B8
 */
void StateStay::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r31, r4
	mr       r30, r3
	lwz      r5, 0xc0(r31)
	li       r4, 0
	mr       r3, r31
	lfs      f31, 0x3ac(r5)
	fmr      f1, f31
	bl
"isThereOlimar__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Navi>"
	clrlwi.  r0, r3, 0x18
	beq      lbl_802C6740
	li       r0, 1
	b        lbl_802C6764

lbl_802C6740:
	fmr      f1, f31
	mr       r3, r31
	li       r4, 0
	bl
"isTherePikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
	clrlwi.  r0, r3, 0x18
	beq      lbl_802C6760
	li       r0, 1
	b        lbl_802C6764

lbl_802C6760:
	li       r0, 0

lbl_802C6764:
	clrlwi.  r0, r0, 0x18
	beq      lbl_802C678C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802C678C:
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C67AC
 * Size:	000004
 */
void StateStay::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802C67B0
 * Size:	0000B4
 */
void StateLand::init(EnemyBase* enemy, StateArg* stateArg)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051C69C@sda21(r2)
	stw      r0, 0x14(r1)
	li       r0, -1
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	stw      r0, 0x2c4(r4)
	stfs     f0, 0x2d4(r4)
	lwz      r0, 0x1e0(r4)
	oris     r0, r0, 0x40
	stw      r0, 0x1e0(r4)
	lwz      r0, 0x1e0(r4)
	rlwinm   r0, r0, 0, 0x1a, 0x18
	stw      r0, 0x1e0(r4)
	lwz      r0, 0x1e0(r4)
	ori      r0, r0, 0x8000
	stw      r0, 0x1e0(r4)
	lwz      r0, 0x1e0(r4)
	rlwinm   r0, r0, 0, 2, 0
	stw      r0, 0x1e0(r4)
	bl       setEmotionExcitement__Q24Game9EnemyBaseFv
	li       r0, 0
	lfs      f0, lbl_8051C698@sda21(r2)
	stw      r0, 0x230(r31)
	mr       r3, r31
	li       r4, 1
	li       r5, 0
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	lwz      r3, shadowMgr__4Game@sda21(r13)
	mr       r4, r31
	bl       addJointShadow__Q24Game9ShadowMgrFPQ24Game8Creature
	lwz      r3, shadowMgr__4Game@sda21(r13)
	mr       r4, r31
	li       r5, 1
	bl       setForceVisible__Q24Game9ShadowMgrFPQ24Game8Creatureb
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C6864
 * Size:	000178
 */
void StateLand::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	mr       r3, r31
	bl       addShadowScale__Q34Game7BigFoot3ObjFv
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802C69C4
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 2
	bne      lbl_802C692C
	lwz      r0, 0x1e0(r31)
	li       r30, 0
	rlwinm   r0, r0, 0, 0xa, 8
	stw      r0, 0x1e0(r31)

lbl_802C68B4:
	lwz      r5, 0x280(r31)
	mr       r3, r31
	mr       r4, r30
	bl       createOnGroundEffect__Q34Game7BigFoot3ObjFiPQ24Game8WaterBox
	addi     r30, r30, 1
	cmpwi    r30, 4
	blt      lbl_802C68B4
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	addi     r5, r1, 0x14
	lfs      f1, 0xc(r1)
	li       r4, 0xf
	lfs      f0, 0x10(r1)
	li       r6, 2
	stfs     f2, 0x14(r1)
	lwz      r3, cameraMgr__4Game@sda21(r13)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	bl       "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	addi     r5, r1, 0x14
	li       r4, 0xf
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	b        lbl_802C69C4

lbl_802C692C:
	cmplwi   r0, 0x3e8
	bne      lbl_802C69C4
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051C698@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802C696C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802C69C4

lbl_802C696C:
	mr       r3, r31
	li       r4, 0
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_802C69A4
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 4
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802C69C4

lbl_802C69A4:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 3
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802C69C4:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C69DC
 * Size:	00005C
 */
void StateLand::cleanup(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	bl       startProgramedIK__Q34Game7BigFoot3ObjFv
	mr       r3, r31
	bl       setBossAppearBGM__Q34Game7BigFoot3ObjFv
	lwz      r0, 0x1e0(r31)
	mr       r4, r31
	lfs      f0, lbl_8051C6A0@sda21(r2)
	li       r5, 0
	ori      r0, r0, 0x40
	stw      r0, 0x1e0(r31)
	stfs     f0, 0x2d4(r31)
	lwz      r3, shadowMgr__4Game@sda21(r13)
	bl       setForceVisible__Q24Game9ShadowMgrFPQ24Game8Creatureb
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C6A38
 * Size:	000070
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051C698@sda21(r2)
	stw      r0, 0x14(r1)
	li       r0, -1
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	stw      r0, 0x2c4(r4)
	stfs     f0, 0x2c0(r4)
	bl       resetFlickWalkTimeMax__Q34Game7BigFoot3ObjFv
	mr       r3, r31
	bl       setIKParameter__Q34Game7BigFoot3ObjFv
	li       r0, 0
	lfs      f0, lbl_8051C698@sda21(r2)
	stw      r0, 0x230(r31)
	mr       r3, r31
	li       r4, 2
	li       r5, 0
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
 * Address:	802C6AA8
 * Size:	0000F4
 */
void StateWait::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051C698@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r5, sys@sda21(r13)
	lfs      f2, 0x2c0(r4)
	lfs      f1, 0x54(r5)
	fadds    f1, f2, f1
	stfs     f1, 0x2c0(r4)
	lfs      f1, 0x200(r4)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802C6B00
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x2c4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802C6B48

lbl_802C6B00:
	mr       r3, r31
	li       r4, 0
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_802C6B28
	li       r0, 4
	mr       r3, r31
	stw      r0, 0x2c4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802C6B48

lbl_802C6B28:
	lfs      f1, 0x2c0(r31)
	lfs      f0, lbl_8051C6A4@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802C6B48
	li       r0, 5
	mr       r3, r31
	stw      r0, 0x2c4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802C6B48:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802C6B84
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_802C6B84
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2c4(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802C6B84:
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
 * Address:	802C6B9C
 * Size:	000004
 */
void StateWait::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802C6BA0
 * Size:	00006C
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051C698@sda21(r2)
	li       r5, 0
	stw      r0, 0x14(r1)
	li       r0, -1
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	stw      r0, 0x2c4(r4)
	li       r0, 0
	li       r4, 3
	stfs     f0, 0x2c0(r31)
	stw      r0, 0x230(r31)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	mr       r3, r31
	bl       startBlendMotion__Q34Game7BigFoot3ObjFv
	mr       r3, r31
	bl       startBossChargeBGM__Q34Game7BigFoot3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C6C0C
 * Size:	0000C0
 */
void StateFlick::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	lwz      r5, 0x188(r4)
	lbz      r0, 0x24(r5)
	cmplwi   r0, 0
	beq      lbl_802C6CB8
	lwz      r0, 0x1c(r5)
	cmplwi   r0, 2
	bne      lbl_802C6C68
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f4, lbl_8051C6A8@sda21(r2)
	li       r4, 0
	lfs      f1, 0x53c(r5)
	lfs      f2, 0x4c4(r5)
	lfs      f3, 0x4ec(r5)
	bl
"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	lfs      f0, lbl_8051C698@sda21(r2)
	stfs     f0, 0x20c(r31)
	b        lbl_802C6CB8

lbl_802C6C68:
	cmplwi   r0, 0x3e8
	bne      lbl_802C6CB8
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051C698@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802C6CA0
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802C6CB8

lbl_802C6CA0:
	lwz      r12, 0(r3)
	li       r5, 5
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802C6CB8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C6CCC
 * Size:	000048
 */
void StateFlick::cleanup(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	bl       finishBlendMotion__Q34Game7BigFoot3ObjFv
	mr       r3, r31
	bl       setFlickWalkTimeMax__Q34Game7BigFoot3ObjFv
	li       r0, 1
	mr       r3, r31
	stb      r0, 0x2de(r31)
	bl       setIKParameter__Q34Game7BigFoot3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C6D14
 * Size:	000070
 */
void StateWalk::init(EnemyBase* enemy, StateArg* stateArg)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051C698@sda21(r2)
	stw      r0, 0x14(r1)
	li       r0, -1
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	stw      r0, 0x2c4(r4)
	li       r0, 0
	stfs     f0, 0x2c0(r4)
	stw      r0, 0x230(r4)
	stfs     f0, 0x1d4(r4)
	stfs     f0, 0x1d8(r4)
	stfs     f0, 0x1dc(r4)
	bl       startIKMotion__Q34Game7BigFoot3ObjFv
	mr       r3, r31
	bl       getTargetPosition__Q34Game7BigFoot3ObjFv
	lbz      r0, 0x2de(r31)
	cmplwi   r0, 0
	beq      lbl_802C6D70
	mr       r3, r31
	bl       startBossAttackLoopBGM__Q34Game7BigFoot3ObjFv

lbl_802C6D70:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C6D84
 * Size:	000100
 */
void StateWalk::exec(EnemyBase* enemy)
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
	bl       getTargetPosition__Q34Game7BigFoot3ObjFv
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x2c0(r31)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_8051C698@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x2c0(r31)
	lfs      f1, 0x200(r31)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802C6DF4
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802C6E6C

lbl_802C6DF4:
	mr       r3, r31
	li       r4, 0
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_802C6E1C
	li       r0, 4
	mr       r3, r31
	stw      r0, 0x2c4(r31)
	bl       finishIKMotion__Q34Game7BigFoot3ObjFv
	b        lbl_802C6E3C

lbl_802C6E1C:
	lfs      f1, 0x2c0(r31)
	lfs      f0, 0x2d8(r31)
	fcmpo    cr0, f1, f0
	ble      lbl_802C6E3C
	li       r0, 3
	mr       r3, r31
	stw      r0, 0x2c4(r31)
	bl       finishIKMotion__Q34Game7BigFoot3ObjFv

lbl_802C6E3C:
	mr       r3, r31
	bl       isFinishIKMotion__Q34Game7BigFoot3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802C6E6C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2c4(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802C6E6C:
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
 * Address:	802C6E84
 * Size:	000038
 */
void StateWalk::cleanup(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lbz      r0, 0x2de(r4)
	cmplwi   r0, 0
	beq      lbl_802C6EAC
	li       r0, 0
	mr       r3, r4
	stb      r0, 0x2de(r4)
	bl       finishBossAttackLoopBGM__Q34Game7BigFoot3ObjFv

lbl_802C6EAC:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace BigFoot
} // namespace Game

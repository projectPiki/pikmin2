#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048D1C0
    lbl_8048D1C0:
        .asciz "weak_joint1"
    .global lbl_8048D1CC
    lbl_8048D1CC:
        .asciz "weak_joint2"

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q24Game24UmimushiSphereShadowNode
    __vt__Q24Game24UmimushiSphereShadowNode:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game24UmimushiSphereShadowNodeFv
        .4byte getChildCount__5CNodeFv
    .global __vt__Q24Game22UmimushiTubeShadowNode
    __vt__Q24Game22UmimushiTubeShadowNode:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game22UmimushiTubeShadowNodeFv
        .4byte getChildCount__5CNodeFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051D180
    lbl_8051D180:
        .float 0.5
    .global lbl_8051D184
    lbl_8051D184:
        .4byte 0x00000000
    .global lbl_8051D188
    lbl_8051D188:
        .float 1.0
    .global lbl_8051D18C
    lbl_8051D18C:
        .4byte 0x41C80000
    .global lbl_8051D190
    lbl_8051D190:
        .4byte 0x40200000
    .global lbl_8051D194
    lbl_8051D194:
        .4byte 0xC1480000
    .global lbl_8051D198
    lbl_8051D198:
        .4byte 0x3FC00000
    .global lbl_8051D19C
    lbl_8051D19C:
        .4byte 0x41700000
*/

/*
 * --INFO--
 * Address:	802F27DC
 * Size:	0001DC
 */
void makeShadowSRT__Q24Game22UmimushiTubeShadowNodeFRQ24Game15JointShadowParmP7MatrixfR10Vector3<float> R10Vector3f(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stfd      f30, 0x10(r1)
	  psq_st    f30,0x18(r1),0,0
	  lfs       f3, 0x0(r5)
	  lfs       f5, 0x10(r5)
	  lfs       f6, 0x20(r5)
	  lfs       f2, 0x4(r5)
	  lfs       f7, 0x14(r5)
	  lfs       f8, 0x24(r5)
	  lfs       f0, 0xC(r5)
	  lfs       f4, -0x11E0(r2)
	  stfs      f0, 0x0(r7)
	  lfs       f12, -0x11DC(r2)
	  lfs       f0, 0x1C(r5)
	  stfs      f0, 0x4(r7)
	  lfs       f0, 0x2C(r5)
	  stfs      f0, 0x8(r7)
	  lfs       f0, 0x1C(r4)
	  lfs       f1, 0x18(r4)
	  fmuls     f0, f2, f0
	  lfs       f2, 0x0(r7)
	  fmadds    f0, f3, f1, f0
	  fadds     f0, f2, f0
	  stfs      f0, 0x0(r7)
	  lfs       f0, 0x1C(r4)
	  lfs       f1, 0x18(r4)
	  fmuls     f0, f7, f0
	  lfs       f2, 0x4(r7)
	  fmadds    f0, f5, f1, f0
	  fadds     f0, f2, f0
	  stfs      f0, 0x4(r7)
	  lfs       f0, 0x1C(r4)
	  lfs       f1, 0x18(r4)
	  fmuls     f0, f8, f0
	  lfs       f2, 0x8(r7)
	  fmadds    f0, f6, f1, f0
	  fadds     f0, f2, f0
	  stfs      f0, 0x8(r7)
	  lfs       f7, 0x0(r7)
	  lfs       f6, 0x0(r6)
	  lfs       f9, 0x4(r7)
	  fsubs     f0, f7, f6
	  lfs       f8, 0x4(r6)
	  lfs       f11, 0x8(r7)
	  lfs       f10, 0x8(r6)
	  fsubs     f1, f9, f8
	  fmuls     f0, f4, f0
	  fsubs     f2, f11, f10
	  lfs       f30, 0x14(r4)
	  fmuls     f1, f4, f1
	  lfs       f13, 0xC(r4)
	  fmuls     f3, f0, f30
	  fmuls     f2, f4, f2
	  lfs       f31, 0x10(r4)
	  fmuls     f5, f1, f13
	  fmsubs    f4, f2, f13, f3
	  fmuls     f3, f2, f31
	  fmsubs    f5, f0, f31, f5
	  fmuls     f13, f4, f4
	  fmsubs    f3, f1, f30, f3
	  fmuls     f31, f5, f5
	  fmadds    f13, f3, f3, f13
	  fadds     f13, f31, f13
	  fcmpo     cr0, f13, f12
	  ble-      .loc_0x11C
	  ble-      .loc_0x120
	  fsqrte    f12, f13
	  fmuls     f13, f12, f13
	  b         .loc_0x120

	.loc_0x11C:
	  fmr       f13, f12

	.loc_0x120:
	  lfs       f12, -0x11DC(r2)
	  fcmpo     cr0, f13, f12
	  ble-      .loc_0x140
	  lfs       f12, -0x11D8(r2)
	  fdivs     f12, f12, f13
	  fmuls     f3, f3, f12
	  fmuls     f4, f4, f12
	  fmuls     f5, f5, f12

	.loc_0x140:
	  lfs       f30, 0x20(r4)
	  fadds     f12, f9, f8
	  lfs       f9, 0x24(r4)
	  fadds     f7, f7, f6
	  lfs       f13, -0x11E0(r2)
	  fadds     f6, f11, f10
	  lfs       f8, 0x4(r4)
	  lwz       r4, 0x1C(r3)
	  fmadds    f10, f13, f12, f9
	  lfs       f9, -0x11D4(r2)
	  fmuls     f3, f3, f30
	  stfs      f0, 0x0(r4)
	  fmuls     f4, f4, f30
	  fsubs     f0, f10, f8
	  stfs      f1, 0x10(r4)
	  fmuls     f5, f5, f30
	  lfs       f8, -0x11DC(r2)
	  fmuls     f1, f13, f7
	  stfs      f2, 0x20(r4)
	  fadds     f2, f9, f0
	  lwz       r4, 0x1C(r3)
	  fmuls     f0, f13, f6
	  stfs      f8, 0x4(r4)
	  stfs      f2, 0x14(r4)
	  stfs      f8, 0x24(r4)
	  lwz       r4, 0x1C(r3)
	  stfs      f3, 0x8(r4)
	  stfs      f4, 0x18(r4)
	  stfs      f5, 0x28(r4)
	  lwz       r3, 0x1C(r3)
	  stfs      f1, 0xC(r3)
	  stfs      f10, 0x1C(r3)
	  stfs      f0, 0x2C(r3)
	  psq_l     f31,0x28(r1),0,0
	  lfd       f31, 0x20(r1)
	  psq_l     f30,0x18(r1),0,0
	  lfd       f30, 0x10(r1)
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F29B8
 * Size:	0000CC
 */
void makeShadowSRT__Q24Game24UmimushiSphereShadowNodeFRQ24Game15JointShadowParmP7MatrixfR10Vector3<float> b(void)
{
	/*
	.loc_0x0:
	  rlwinm.   r0,r7,0,24,31
	  beq-      .loc_0x48
	  lfs       f0, -0x11D0(r2)
	  lfs       f1, 0x20(r4)
	  lfs       f5, 0x8(r5)
	  lfs       f6, 0x18(r5)
	  fadds     f0, f0, f1
	  lfs       f11, 0x0(r5)
	  fmuls     f5, f5, f1
	  lfs       f3, 0x10(r5)
	  fmuls     f6, f6, f1
	  lfs       f4, 0x20(r5)
	  lfs       f7, 0x28(r5)
	  fmuls     f11, f11, f0
	  fmuls     f3, f3, f0
	  fmuls     f4, f4, f0
	  fmuls     f7, f7, f1
	  b         .loc_0x60

	.loc_0x48:
	  lfs       f3, -0x11DC(r2)
	  lfs       f11, 0x20(r4)
	  fmr       f4, f3
	  fmr       f5, f3
	  fmr       f6, f3
	  fmr       f7, f11

	.loc_0x60:
	  lfs       f8, 0x0(r6)
	  lfs       f2, 0x4(r6)
	  lfs       f1, 0x24(r4)
	  lfs       f0, 0x4(r4)
	  lfs       f10, 0x8(r6)
	  fadds     f9, f2, f1
	  lwz       r4, 0x1C(r3)
	  fsubs     f1, f2, f0
	  lfs       f2, -0x11D4(r2)
	  stfs      f11, 0x0(r4)
	  lfs       f0, -0x11DC(r2)
	  fadds     f1, f2, f1
	  stfs      f3, 0x10(r4)
	  stfs      f4, 0x20(r4)
	  lwz       r4, 0x1C(r3)
	  stfs      f0, 0x4(r4)
	  stfs      f1, 0x14(r4)
	  stfs      f0, 0x24(r4)
	  lwz       r4, 0x1C(r3)
	  stfs      f5, 0x8(r4)
	  stfs      f6, 0x18(r4)
	  stfs      f7, 0x28(r4)
	  lwz       r3, 0x1C(r3)
	  stfs      f8, 0xC(r3)
	  stfs      f9, 0x1C(r3)
	  stfs      f10, 0x2C(r3)
	  blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	802F2A84
 * Size:	0000C4
 */
UmiMushi::UmimushiShadowMgr::UmimushiShadowMgr(Game::UmiMushi::Obj*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	stw      r31, 8(r3)
	li       r3, 0x20
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_802F2AC0
	mr       r4, r31
	bl       __ct__Q24Game19JointShadowRootNodeFPQ24Game8Creature
	mr       r0, r3

lbl_802F2AC0:
	stw      r0, 0xc(r30)
	li       r3, 0x24
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_802F2AE8
	li       r4, 2
	bl       __ct__Q24Game15JointShadowNodeFi
	lis      r3, __vt__Q24Game22UmimushiTubeShadowNode@ha
	addi     r0, r3, __vt__Q24Game22UmimushiTubeShadowNode@l
	stw      r0, 0(r31)

lbl_802F2AE8:
	stw      r31, 0x10(r30)
	lwz      r3, 0xc(r30)
	lwz      r4, 0x10(r30)
	bl       add__5CNodeFP5CNode
	li       r3, 0x24
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_802F2B1C
	li       r4, 2
	bl       __ct__Q24Game15JointShadowNodeFi
	lis      r3, __vt__Q24Game24UmimushiSphereShadowNode@ha
	addi     r0, r3, __vt__Q24Game24UmimushiSphereShadowNode@l
	stw      r0, 0(r31)

lbl_802F2B1C:
	stw      r31, 0x14(r30)
	lwz      r3, 0xc(r30)
	lwz      r4, 0x14(r30)
	bl       add__5CNodeFP5CNode
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F2B48
 * Size:	000068
 */
void UmiMushi::UmimushiShadowMgr::init(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lis      r3, lbl_8048D1C0@ha
	lwz      r5, 8(r30)
	addi     r4, r3, lbl_8048D1C0@l
	lwz      r31, 0x174(r5)
	mr       r3, r31
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r4, lbl_8048D1CC@ha
	stw      r3, 0(r30)
	addi     r4, r4, lbl_8048D1CC@l
	mr       r3, r31
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	stw      r3, 4(r30)
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
 * Address:	802F2BB0
 * Size:	00015C
 */
void UmiMushi::UmimushiShadowMgr::update(void)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stw      r31, 0x5c(r1)
	mr       r31, r3
	addi     r3, r1, 8
	lwz      r4, 8(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f3, lbl_8051D184@sda21(r2)
	addi     r4, r1, 0x2c
	lfs      f1, 8(r1)
	addi     r6, r1, 0x20
	lfs      f0, 0xc(r1)
	addi     r7, r1, 0x14
	lfs      f4, 0x10(r1)
	lfs      f2, lbl_8051D188@sda21(r2)
	stfs     f1, 0x2c(r1)
	lfs      f1, lbl_8051D194@sda21(r2)
	stfs     f0, 0x30(r1)
	lfs      f0, lbl_8051D198@sda21(r2)
	stfs     f4, 0x34(r1)
	stfs     f3, 0x38(r1)
	stfs     f2, 0x3c(r1)
	stfs     f3, 0x40(r1)
	lwz      r3, 0(r31)
	lfs      f5, 0x2c(r3)
	lfs      f4, 0x1c(r3)
	lfs      f2, 0xc(r3)
	stfs     f2, 0x20(r1)
	stfs     f4, 0x24(r1)
	stfs     f5, 0x28(r1)
	stfs     f1, 0x44(r1)
	stfs     f3, 0x48(r1)
	stfs     f0, 0x4c(r1)
	stfs     f3, 0x50(r1)
	lwz      r3, 0x10(r31)
	lwz      r5, 4(r31)
	bl
"makeShadowSRT__Q24Game22UmimushiTubeShadowNodeFRQ24Game15JointShadowParmP7MatrixfR10Vector3<f>R10Vector3<f>"
	lfs      f2, lbl_8051D184@sda21(r2)
	lfs      f1, lbl_8051D19C@sda21(r2)
	lfs      f0, lbl_8051D194@sda21(r2)
	stfs     f2, 0x44(r1)
	stfs     f2, 0x48(r1)
	stfs     f1, 0x4c(r1)
	stfs     f0, 0x50(r1)
	lwz      r3, 8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	mr       r7, r3
	lwz      r3, 0x14(r31)
	lwz      r5, 4(r31)
	addi     r4, r1, 0x2c
	addi     r6, r1, 0x14
	bl
"makeShadowSRT__Q24Game24UmimushiSphereShadowNodeFRQ24Game15JointShadowParmP7MatrixfR10Vector3<f>b"
	lwz      r3, 8(r31)
	lwz      r3, 0x17c(r3)
	lwz      r3, 4(r3)
	cmplwi   r3, 0
	beq      lbl_802F2CE0
	lwz      r12, 0(r3)
	lwz      r12, 0x204(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F2CE0
	lwz      r3, 0x10(r31)
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	beq      lbl_802F2CF8
	bl       del__5CNodeFv
	b        lbl_802F2CF8

lbl_802F2CE0:
	lwz      r4, 0x10(r31)
	lwz      r0, 0xc(r4)
	cmplwi   r0, 0
	bne      lbl_802F2CF8
	lwz      r3, 0xc(r31)
	bl       addHead__5CNodeFP5CNode

lbl_802F2CF8:
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F2D0C
 * Size:	000070
 */
UmimushiSphereShadowNode::~UmimushiSphereShadowNode(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802F2D60
	lis      r4, __vt__Q24Game24UmimushiSphereShadowNode@ha
	addi     r0, r4, __vt__Q24Game24UmimushiSphereShadowNode@l
	stw      r0, 0(r30)
	beq      lbl_802F2D50
	lis      r5, __vt__Q24Game15JointShadowNode@ha
	li       r4, 0
	addi     r0, r5, __vt__Q24Game15JointShadowNode@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_802F2D50:
	extsh.   r0, r31
	ble      lbl_802F2D60
	mr       r3, r30
	bl       __dl__FPv

lbl_802F2D60:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F2D7C
 * Size:	000070
 */
UmimushiTubeShadowNode::~UmimushiTubeShadowNode(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802F2DD0
	lis      r4, __vt__Q24Game22UmimushiTubeShadowNode@ha
	addi     r0, r4, __vt__Q24Game22UmimushiTubeShadowNode@l
	stw      r0, 0(r30)
	beq      lbl_802F2DC0
	lis      r5, __vt__Q24Game15JointShadowNode@ha
	li       r4, 0
	addi     r0, r5, __vt__Q24Game15JointShadowNode@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_802F2DC0:
	extsh.   r0, r31
	ble      lbl_802F2DD0
	mr       r3, r30
	bl       __dl__FPv

lbl_802F2DD0:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
} // namespace Game

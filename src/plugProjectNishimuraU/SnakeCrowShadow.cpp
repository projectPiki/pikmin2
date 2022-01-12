#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global
   "cSphereShadowRadius__Q34Game9SnakeCrow29@unnamed@SnakeCrowShadow_cpp@"
    "cSphereShadowRadius__Q34Game9SnakeCrow29@unnamed@SnakeCrowShadow_cpp@":
        .float 17.5
        .float 17.5
        .float 15.0
        .float 12.0
        .float 10.0
        .float 7.5
        .float 6.5
        .float 17.5
    .global
   "cTubeShadowRadius__Q34Game9SnakeCrow29@unnamed@SnakeCrowShadow_cpp@"
    "cTubeShadowRadius__Q34Game9SnakeCrow29@unnamed@SnakeCrowShadow_cpp@":
        .float 17.5
        .float 16.5
        .float 13.5
        .float 11.0
        .float 9.0
        .float 7.0
        .float 6.0
        .float 7.5
    .global lbl_8048D280
    lbl_8048D280:
        .asciz "bodyjnt2"
        .skip 3
    .global lbl_8048D28C
    lbl_8048D28C:
        .asciz "bodyjnt3"
        .skip 3
    .global lbl_8048D298
    lbl_8048D298:
        .asciz "bodyjnt4"
        .skip 3
    .global lbl_8048D2A4
    lbl_8048D2A4:
        .asciz "bodyjnt5"
        .skip 3
    .global lbl_8048D2B0
    lbl_8048D2B0:
        .asciz "bodyjnt6"
        .skip 3
    .global lbl_8048D2BC
    lbl_8048D2BC:
        .asciz "bodyjnt7"
        .skip 3
    .global lbl_8048D2C8
    lbl_8048D2C8:
        .asciz "bodyjnt8"
        .skip 3
    .global lbl_8048D2D4
    lbl_8048D2D4:
        .asciz "kutijnt1"
        .skip 3
    .global lbl_8048D2E0
    lbl_8048D2E0:
        .4byte lbl_8048D280
        .4byte lbl_8048D28C
        .4byte lbl_8048D298
        .4byte lbl_8048D2A4
        .4byte lbl_8048D2B0
        .4byte lbl_8048D2BC
        .4byte lbl_8048D2C8
        .4byte lbl_8048D2D4

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q24Game25SnakeCrowSphereShadowNode
    __vt__Q24Game25SnakeCrowSphereShadowNode:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game25SnakeCrowSphereShadowNodeFv
        .4byte getChildCount__5CNodeFv
    .global __vt__Q24Game23SnakeCrowTubeShadowNode
    __vt__Q24Game23SnakeCrowTubeShadowNode:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game23SnakeCrowTubeShadowNodeFv
        .4byte getChildCount__5CNodeFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051D2C0
    lbl_8051D2C0:
        .float 0.5
    .global lbl_8051D2C4
    lbl_8051D2C4:
        .4byte 0x00000000
    .global lbl_8051D2C8
    lbl_8051D2C8:
        .float 1.0
    .global lbl_8051D2CC
    lbl_8051D2CC:
        .4byte 0x40200000
    .global lbl_8051D2D0
    lbl_8051D2D0:
        .4byte 0x42480000
    .global lbl_8051D2D4
    lbl_8051D2D4:
        .4byte 0x42A00000
*/

/*
 * --INFO--
 * Address:	802F8090
 * Size:	00022C
 */
void makeShadowSRT__Q24Game23SnakeCrowTubeShadowNodeFRQ24Game15JointShadowParmR10Vector3<float> R10Vector3f(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lfs       f2, -0x10A0(r2)
	  stw       r0, 0x44(r1)
	  lfs       f5, -0x109C(r2)
	  stw       r31, 0x3C(r1)
	  mr        r31, r4
	  stw       r30, 0x38(r1)
	  mr        r30, r3
	  lfs       f1, 0x0(r6)
	  lfs       f0, 0x0(r5)
	  fsubs     f0, f1, f0
	  stfs      f5, 0xC(r1)
	  fmuls     f6, f2, f0
	  stfs      f6, 0x8(r1)
	  lfs       f1, 0x8(r6)
	  lfs       f0, 0x8(r5)
	  fsubs     f0, f1, f0
	  fmuls     f4, f2, f0
	  stfs      f4, 0x10(r1)
	  lfs       f8, 0x10(r4)
	  lfs       f1, 0x14(r4)
	  lfs       f7, 0xC(r4)
	  fmuls     f0, f4, f8
	  fmuls     f2, f6, f1
	  fmuls     f3, f5, f7
	  fmsubs    f1, f5, f1, f0
	  fmsubs    f2, f4, f7, f2
	  fmsubs    f3, f6, f8, f3
	  fmuls     f0, f1, f1
	  stfs      f1, 0x20(r1)
	  fmuls     f4, f2, f2
	  fmuls     f6, f3, f3
	  stfs      f2, 0x24(r1)
	  fadds     f0, f0, f4
	  stfs      f3, 0x28(r1)
	  fadds     f0, f6, f0
	  fcmpo     cr0, f0, f5
	  ble-      .loc_0xB8
	  fmadds    f0, f1, f1, f4
	  fadds     f1, f6, f0
	  fcmpo     cr0, f1, f5
	  ble-      .loc_0xBC
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0xBC

	.loc_0xB8:
	  fmr       f1, f5

	.loc_0xBC:
	  lfs       f0, -0x109C(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xF4
	  lfs       f0, -0x1098(r2)
	  lfs       f2, 0x20(r1)
	  fdivs     f3, f0, f1
	  lfs       f1, 0x24(r1)
	  lfs       f0, 0x28(r1)
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)

	.loc_0xF4:
	  lfs       f2, 0x20(r1)
	  addi      r4, r1, 0x2C
	  lfs       f5, 0x20(r31)
	  lfs       f1, 0x24(r1)
	  fmuls     f4, f2, f5
	  lfs       f0, 0x28(r1)
	  fmuls     f2, f1, f5
	  lfs       f3, -0x10A0(r2)
	  fmuls     f1, f0, f5
	  lfs       f0, -0x109C(r2)
	  stfs      f4, 0x20(r1)
	  lwz       r3, -0x6CF8(r13)
	  stfs      f2, 0x24(r1)
	  stfs      f1, 0x28(r1)
	  lfs       f2, 0x0(r6)
	  lfs       f1, 0x0(r5)
	  fadds     f1, f2, f1
	  stfs      f0, 0x30(r1)
	  fmuls     f0, f3, f1
	  stfs      f0, 0x2C(r1)
	  lfs       f1, 0x8(r6)
	  lfs       f0, 0x8(r5)
	  fadds     f0, f1, f0
	  fmuls     f0, f3, f0
	  stfs      f0, 0x34(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, -0x1094(r2)
	  lfs       f0, -0x109C(r2)
	  fadds     f2, f2, f1
	  lfs       f1, -0x1090(r2)
	  stfs      f0, 0x14(r1)
	  stfs      f2, 0x30(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  lfs       f3, 0x4(r31)
	  fcmpo     cr0, f2, f3
	  bge-      .loc_0x1A4
	  fsubs     f0, f3, f2
	  stfs      f3, 0x30(r1)
	  fadds     f0, f1, f0
	  stfs      f0, 0x18(r1)

	.loc_0x1A4:
	  lwz       r3, 0x1C(r30)
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x0(r3)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x10(r3)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x20(r3)
	  lwz       r3, 0x1C(r30)
	  lfs       f0, 0x14(r1)
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x18(r1)
	  stfs      f0, 0x14(r3)
	  lfs       f0, 0x1C(r1)
	  stfs      f0, 0x24(r3)
	  lwz       r3, 0x1C(r30)
	  lfs       f0, 0x20(r1)
	  stfs      f0, 0x8(r3)
	  lfs       f0, 0x24(r1)
	  stfs      f0, 0x18(r3)
	  lfs       f0, 0x28(r1)
	  stfs      f0, 0x28(r3)
	  lwz       r3, 0x1C(r30)
	  lfs       f0, 0x2C(r1)
	  stfs      f0, 0xC(r3)
	  lfs       f0, 0x30(r1)
	  stfs      f0, 0x1C(r3)
	  lfs       f0, 0x34(r1)
	  stfs      f0, 0x2C(r3)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F82BC
 * Size:	00012C
 */
void makeShadowSRT__Q24Game25SnakeCrowSphereShadowNodeFRQ24Game15JointShadowParmR10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lfs       f1, -0x109C(r2)
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  mr        r31, r4
	  stw       r30, 0x38(r1)
	  mr        r30, r3
	  lfs       f0, 0x20(r4)
	  addi      r4, r1, 0x2C
	  lwz       r3, -0x6CF8(r13)
	  stfs      f0, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f1, 0x10(r1)
	  stfs      f1, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  lfs       f0, 0x0(r5)
	  stfs      f0, 0x2C(r1)
	  stfs      f1, 0x30(r1)
	  lfs       f0, 0x8(r5)
	  stfs      f0, 0x34(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, -0x1094(r2)
	  lfs       f0, -0x109C(r2)
	  fadds     f2, f2, f1
	  lfs       f1, -0x1090(r2)
	  stfs      f0, 0x14(r1)
	  stfs      f2, 0x30(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  lfs       f3, 0x4(r31)
	  fcmpo     cr0, f2, f3
	  bge-      .loc_0xA4
	  fsubs     f0, f3, f2
	  stfs      f3, 0x30(r1)
	  fadds     f0, f1, f0
	  stfs      f0, 0x18(r1)

	.loc_0xA4:
	  lwz       r3, 0x1C(r30)
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x0(r3)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x10(r3)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x20(r3)
	  lwz       r3, 0x1C(r30)
	  lfs       f0, 0x14(r1)
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x18(r1)
	  stfs      f0, 0x14(r3)
	  lfs       f0, 0x1C(r1)
	  stfs      f0, 0x24(r3)
	  lwz       r3, 0x1C(r30)
	  lfs       f0, 0x20(r1)
	  stfs      f0, 0x8(r3)
	  lfs       f0, 0x24(r1)
	  stfs      f0, 0x18(r3)
	  lfs       f0, 0x28(r1)
	  stfs      f0, 0x28(r3)
	  lwz       r3, 0x1C(r30)
	  lfs       f0, 0x2C(r1)
	  stfs      f0, 0xC(r3)
	  lfs       f0, 0x30(r1)
	  stfs      f0, 0x1C(r3)
	  lfs       f0, 0x34(r1)
	  stfs      f0, 0x2C(r3)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	802F83E8
 * Size:	0000EC
 */
SnakeCrow::SnakeCrowShadowMgr::SnakeCrowShadowMgr(Game::SnakeCrow::Obj*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	stw      r29, 0x20(r3)
	li       r3, 0x20
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_802F842C
	mr       r4, r29
	bl       __ct__Q24Game19JointShadowRootNodeFPQ24Game8Creature
	mr       r0, r3

lbl_802F842C:
	stw      r0, 0x24(r28)
	mr       r30, r28
	li       r29, 0

lbl_802F8438:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_802F845C
	li       r4, 2
	bl       __ct__Q24Game15JointShadowNodeFi
	lis      r3, __vt__Q24Game23SnakeCrowTubeShadowNode@ha
	addi     r0, r3, __vt__Q24Game23SnakeCrowTubeShadowNode@l
	stw      r0, 0(r31)

lbl_802F845C:
	stw      r31, 0x28(r30)
	lwz      r3, 0x24(r28)
	lwz      r4, 0x28(r30)
	bl       add__5CNodeFP5CNode
	li       r3, 0x24
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_802F8490
	li       r4, 2
	bl       __ct__Q24Game15JointShadowNodeFi
	lis      r3, __vt__Q24Game25SnakeCrowSphereShadowNode@ha
	addi     r0, r3, __vt__Q24Game25SnakeCrowSphereShadowNode@l
	stw      r0, 0(r31)

lbl_802F8490:
	stw      r31, 0x48(r30)
	lwz      r3, 0x24(r28)
	lwz      r4, 0x48(r30)
	bl       add__5CNodeFP5CNode
	addi     r29, r29, 1
	addi     r30, r30, 4
	cmpwi    r29, 8
	blt      lbl_802F8438
	lwz      r0, 0x24(r1)
	mr       r3, r28
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F84D4
 * Size:	0000C0
 */
void SnakeCrow::SnakeCrowShadowMgr::init(void)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lis      r4, lbl_8048D2E0@ha
	stw      r0, 0x44(r1)
	addi     r10, r4, lbl_8048D2E0@l
	stw      r31, 0x3c(r1)
	addi     r31, r1, 8
	stw      r30, 0x38(r1)
	mr       r30, r3
	stw      r29, 0x34(r1)
	stw      r28, 0x30(r1)
	li       r28, 0
	lwz      r11, 0x20(r3)
	lwz      r9, 0(r10)
	lwz      r8, 4(r10)
	lwz      r7, 8(r10)
	lwz      r6, 0xc(r10)
	lwz      r5, 0x10(r10)
	lwz      r4, 0x14(r10)
	lwz      r3, 0x18(r10)
	lwz      r0, 0x1c(r10)
	stw      r9, 8(r1)
	lwz      r29, 0x174(r11)
	stw      r8, 0xc(r1)
	stw      r7, 0x10(r1)
	stw      r6, 0x14(r1)
	stw      r5, 0x18(r1)
	stw      r4, 0x1c(r1)
	stw      r3, 0x20(r1)
	stw      r0, 0x24(r1)

lbl_802F854C:
	lwz      r4, 0(r31)
	mr       r3, r29
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	addi     r28, r28, 1
	stw      r3, 0(r30)
	cmpwi    r28, 8
	addi     r31, r31, 4
	addi     r30, r30, 4
	blt      lbl_802F854C
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	lwz      r28, 0x30(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F8594
 * Size:	000078
 */
void SnakeCrow::SnakeCrowShadowMgr::startJointShadow(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r3, 0x24(r3)
	lwz      r0, 0x10(r3)
	cmplwi   r0, 0
	bne      lbl_802F85F0
	li       r30, 0
	mr       r31, r29

lbl_802F85C8:
	lwz      r3, 0x24(r29)
	lwz      r4, 0x28(r31)
	bl       add__5CNodeFP5CNode
	lwz      r3, 0x24(r29)
	lwz      r4, 0x48(r31)
	bl       add__5CNodeFP5CNode
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 8
	blt      lbl_802F85C8

lbl_802F85F0:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F860C
 * Size:	000064
 */
void SnakeCrow::SnakeCrowShadowMgr::finishJointShadow(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	lwz      r4, 0x24(r3)
	lwz      r0, 0x10(r4)
	cmplwi   r0, 0
	beq      lbl_802F8658
	li       r30, 0
	mr       r31, r3

lbl_802F8638:
	lwz      r3, 0x28(r31)
	bl       del__5CNodeFv
	lwz      r3, 0x48(r31)
	bl       del__5CNodeFv
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 8
	blt      lbl_802F8638

lbl_802F8658:
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
 * Address:	802F8670
 * Size:	00025C
 */
void SnakeCrow::SnakeCrowShadowMgr::update(void)
{
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stmw     r27, 0xcc(r1)
	mr       r27, r3
	lwz      r3, 0x20(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xd0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802F88B8
	lwz      r4, 0x20(r27)
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, lbl_8051D2C4@sda21(r2)
	addi     r28, r1, 0x60
	lfs      f4, 8(r1)
	li       r0, 2
	lfs      f3, 0xc(r1)
	mr       r4, r27
	lfs      f2, 0x10(r1)
	mr       r5, r28
	lfs      f0, lbl_8051D2C8@sda21(r2)
	stfs     f4, 0x38(r1)
	stfs     f3, 0x3c(r1)
	stfs     f2, 0x40(r1)
	stfs     f1, 0x44(r1)
	stfs     f0, 0x48(r1)
	stfs     f1, 0x4c(r1)
	stfs     f1, 0x50(r1)
	stfs     f1, 0x54(r1)
	mtctr    r0

lbl_802F8700:
	lwz      r3, 0(r4)
	lfs      f2, 0x2c(r3)
	lfs      f1, 0x1c(r3)
	lfs      f0, 0xc(r3)
	stfs     f0, 0(r5)
	stfs     f1, 4(r5)
	stfs     f2, 8(r5)
	lwz      r3, 4(r4)
	lfs      f2, 0x2c(r3)
	lfs      f1, 0x1c(r3)
	lfs      f0, 0xc(r3)
	stfs     f0, 0xc(r5)
	stfs     f1, 0x10(r5)
	stfs     f2, 0x14(r5)
	lwz      r3, 8(r4)
	lfs      f2, 0x2c(r3)
	lfs      f1, 0x1c(r3)
	lfs      f0, 0xc(r3)
	stfs     f0, 0x18(r5)
	stfs     f1, 0x1c(r5)
	stfs     f2, 0x20(r5)
	lwz      r3, 0xc(r4)
	addi     r4, r4, 0x10
	lfs      f2, 0x2c(r3)
	lfs      f1, 0x1c(r3)
	lfs      f0, 0xc(r3)
	stfs     f0, 0x24(r5)
	stfs     f1, 0x28(r5)
	stfs     f2, 0x2c(r5)
	addi     r5, r5, 0x30
	bdnz     lbl_802F8700
	lis      r4,
"cTubeShadowRadius__Q34Game9SnakeCrow29@unnamed@SnakeCrowShadow_cpp@"@ha lis r3,
"cSphereShadowRadius__Q34Game9SnakeCrow29@unnamed@SnakeCrowShadow_cpp@"@ha mr
r30, r27 li       r27, 0 addi     r31, r4,
"cTubeShadowRadius__Q34Game9SnakeCrow29@unnamed@SnakeCrowShadow_cpp@"@l addi
r29, r3,
"cSphereShadowRadius__Q34Game9SnakeCrow29@unnamed@SnakeCrowShadow_cpp@"@l

lbl_802F8794:
	lfs      f0, 0(r31)
	cmpwi    r27, 7
	stfs     f0, 0x58(r1)
	bge      lbl_802F87C8
	addi     r0, r27, 1
	addi     r6, r1, 0x60
	mulli    r0, r0, 0xc
	lwz      r3, 0x28(r30)
	mr       r5, r28
	addi     r4, r1, 0x38
	add      r6, r6, r0
	bl
"makeShadowSRT__Q24Game23SnakeCrowTubeShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>R10Vector3<f>"
	b        lbl_802F8868

lbl_802F87C8:
	lwz      r3, 0(r30)
	addi     r4, r1, 0x38
	lfs      f3, lbl_8051D2D4@sda21(r2)
	addi     r5, r1, 0x2c
	lfs      f5, 0(r3)
	addi     r6, r1, 0x20
	lfs      f2, 0(r28)
	stfs     f5, 0x2c(r1)
	fmuls    f10, f5, f3
	frsp     f0, f5
	lfs      f6, 4(r28)
	lfs      f12, 0x10(r3)
	lfs      f4, 8(r28)
	fadds    f7, f10, f2
	stfs     f12, 0x30(r1)
	fmuls    f9, f12, f3
	lfs      f11, 0x20(r3)
	frsp     f1, f12
	fadds    f2, f0, f2
	fmuls    f8, f11, f3
	stfs     f11, 0x34(r1)
	frsp     f0, f11
	stfs     f5, 0x20(r1)
	fadds    f5, f9, f6
	fadds    f3, f8, f4
	stfs     f10, 0x2c(r1)
	fadds    f1, f1, f6
	fadds    f0, f0, f4
	stfs     f12, 0x24(r1)
	stfs     f11, 0x28(r1)
	stfs     f9, 0x30(r1)
	stfs     f8, 0x34(r1)
	stfs     f7, 0x2c(r1)
	stfs     f5, 0x30(r1)
	stfs     f3, 0x34(r1)
	stfs     f2, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	lwz      r3, 0x28(r30)
	bl
"makeShadowSRT__Q24Game23SnakeCrowTubeShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>R10Vector3<f>"

lbl_802F8868:
	lfs      f0, 0(r29)
	addi     r4, r1, 0x38
	addi     r5, r1, 0x14
	stfs     f0, 0x58(r1)
	lwz      r3, 0(r30)
	lfs      f2, 0x2c(r3)
	lfs      f1, 0x1c(r3)
	lfs      f0, 0xc(r3)
	stfs     f0, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f2, 0x1c(r1)
	lwz      r3, 0x48(r30)
	bl
"makeShadowSRT__Q24Game25SnakeCrowSphereShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>"
	addi     r27, r27, 1
	addi     r28, r28, 0xc
	cmpwi    r27, 8
	addi     r30, r30, 4
	addi     r29, r29, 4
	addi     r31, r31, 4
	blt      lbl_802F8794

lbl_802F88B8:
	lmw      r27, 0xcc(r1)
	lwz      r0, 0xe4(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F88CC
 * Size:	000070
 */
SnakeCrowSphereShadowNode::~SnakeCrowSphereShadowNode(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802F8920
	lis      r4, __vt__Q24Game25SnakeCrowSphereShadowNode@ha
	addi     r0, r4, __vt__Q24Game25SnakeCrowSphereShadowNode@l
	stw      r0, 0(r30)
	beq      lbl_802F8910
	lis      r5, __vt__Q24Game15JointShadowNode@ha
	li       r4, 0
	addi     r0, r5, __vt__Q24Game15JointShadowNode@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_802F8910:
	extsh.   r0, r31
	ble      lbl_802F8920
	mr       r3, r30
	bl       __dl__FPv

lbl_802F8920:
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
 * Address:	802F893C
 * Size:	000070
 */
SnakeCrowTubeShadowNode::~SnakeCrowTubeShadowNode(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802F8990
	lis      r4, __vt__Q24Game23SnakeCrowTubeShadowNode@ha
	addi     r0, r4, __vt__Q24Game23SnakeCrowTubeShadowNode@l
	stw      r0, 0(r30)
	beq      lbl_802F8980
	lis      r5, __vt__Q24Game15JointShadowNode@ha
	li       r4, 0
	addi     r0, r5, __vt__Q24Game15JointShadowNode@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_802F8980:
	extsh.   r0, r31
	ble      lbl_802F8990
	mr       r3, r30
	bl       __dl__FPv

lbl_802F8990:
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

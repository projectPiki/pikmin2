#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global
   "cSphereShadowRadius__Q34Game10SnakeWhole30@unnamed@SnakeWholeShadow_cpp@"
    "cSphereShadowRadius__Q34Game10SnakeWhole30@unnamed@SnakeWholeShadow_cpp@":
        .float 7.5
        .float 7.5
        .float 20.0
        .float 30.0
        .float 25.0
        .float 17.5
        .float 11.0
        .float 8.0
        .float 22.5
    .global
   "cTubeShadowRadius__Q34Game10SnakeWhole30@unnamed@SnakeWholeShadow_cpp@"
    "cTubeShadowRadius__Q34Game10SnakeWhole30@unnamed@SnakeWholeShadow_cpp@":
        .float 7.5
        .float 7.5
        .float 20.0
        .float 27.5
        .float 22.5
        .float 15.0
        .float 9.0
        .float 8.0
        .float 10.0
    .global lbl_8048D348
    lbl_8048D348:
        .asciz "foot_joint1"
    .global lbl_8048D354
    lbl_8048D354:
        .asciz "leg_joint2"
        .skip 1
    .global lbl_8048D360
    lbl_8048D360:
        .asciz "leg_joint1"
        .skip 1
    .global lbl_8048D36C
    lbl_8048D36C:
        .asciz "bodyjnt4"
        .skip 3
    .global lbl_8048D378
    lbl_8048D378:
        .asciz "bodyjnt5"
        .skip 3
    .global lbl_8048D384
    lbl_8048D384:
        .asciz "bodyjnt6"
        .skip 3
    .global lbl_8048D390
    lbl_8048D390:
        .asciz "bodyjnt7"
        .skip 3
    .global lbl_8048D39C
    lbl_8048D39C:
        .asciz "bodyjnt8"
        .skip 3
    .global lbl_8048D3A8
    lbl_8048D3A8:
        .asciz "kutijnt1"
        .skip 3
    .global lbl_8048D3B4
    lbl_8048D3B4:
        .4byte lbl_8048D348
        .4byte lbl_8048D354
        .4byte lbl_8048D360
        .4byte lbl_8048D36C
        .4byte lbl_8048D378
        .4byte lbl_8048D384
        .4byte lbl_8048D390
        .4byte lbl_8048D39C
        .4byte lbl_8048D3A8

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q24Game26SnakeWholeSphereShadowNode
    __vt__Q24Game26SnakeWholeSphereShadowNode:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game26SnakeWholeSphereShadowNodeFv
        .4byte getChildCount__5CNodeFv
    .global __vt__Q24Game24SnakeWholeTubeShadowNode
    __vt__Q24Game24SnakeWholeTubeShadowNode:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game24SnakeWholeTubeShadowNodeFv
        .4byte getChildCount__5CNodeFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051D2D8
    lbl_8051D2D8:
        .float 0.5
    .global lbl_8051D2DC
    lbl_8051D2DC:
        .4byte 0x00000000
    .global lbl_8051D2E0
    lbl_8051D2E0:
        .float 1.0
    .global lbl_8051D2E4
    lbl_8051D2E4:
        .4byte 0x40200000
    .global lbl_8051D2E8
    lbl_8051D2E8:
        .4byte 0x42480000
    .global lbl_8051D2EC
    lbl_8051D2EC:
        .4byte 0x42C80000
*/

namespace Game {

/*
 * --INFO--
 * Address:	802F89AC
 * Size:	00022C
 */
void SnakeWholeTubeShadowNode::makeShadowSRT(Game::JointShadowParm&, Vector3f&, Vector3f&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bl        -0x296B7C
	  addi      r0, r31, 0x1
	  mr        r31, r3
	  mr        r3, r30
	  rlwinm    r4,r0,0,24,31
	  bl        -0x296B90
	  lwz       r0, 0x14(r1)
	  rlwimi    r3,r31,16,0,15
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  rlwinm    r5,r4,16,16,31
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  mr        r4, r31
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bl        -0x2969C4
	  addi      r0, r31, 0x1
	  rlwinm    r5,r30,0,16,31
	  mr        r3, r29
	  rlwinm    r4,r0,0,24,31
	  bl        -0x2969D8
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bl        -0x28C2E0
	  lis       r4, 0x804E
	  addi      r3, r30, 0x28
	  subi      r0, r4, 0x5558
	  stw       r0, 0x0(r30)
	  bl        -0x24891C
	  li        r0, 0
	  addi      r3, r30, 0x44
	  stw       r0, 0x40(r30)
	  bl        0x520
	  lwz       r0, 0x0(r31)
	  li        r3, 0
	  stw       r3, 0x48(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x124
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x1D8
	  li        r4, 0x8D
	  subi      r5, r5, 0x1C8
	  crclr     6, 0x6
	  bl        -0x30DE4C

	.loc_0x124:
	  lwz       r0, 0x4(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x14C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x1D8
	  li        r4, 0x8E
	  subi      r5, r5, 0x1C8
	  crclr     6, 0x6
	  bl        -0x30DE74

	.loc_0x14C:
	  mr        r3, r30
	  li        r4, 0x2
	  bl        -0x28BE1C
	  lwz       r3, 0x10(r31)
	  bl        -0x28AB78
	  li        r3, 0x1
	  bl        -0x28AB1C
	  lbz       r3, -0x7AD0(r13)
	  bl        -0x28AAF0
	  bl        0x525C
	  bl        0x5314
	  lis       r3, 0x8034
	  subi      r3, r3, 0x74E8
	  bl        -0x2881B4
	  lwz       r4, 0x0(r31)
	  mr        r3, r30
	  lwz       r5, 0x4(r31)
	  li        r6, 0x1
	  bl        -0x28C32C
	  mr        r3, r30
	  li        r4, 0x1
	  bl        -0x28C318
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x210(r2)
	  mr        r3, r30
	  stfs      f0, 0x20(r30)
	  stfs      f0, 0x24(r30)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8049
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  subi      r31, r3, 0x1D8
	  stw       r30, 0x8(r1)
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x220
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x10
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x30DF48

	.loc_0x220:
	  lwz       r30, -0x6780(r13)
	  cmplwi    r30, 0
	  bne-      0x18
	*/
}

/*
 * --INFO--
 * Address:	802F8BD8
 * Size:	00012C
 */
void SnakeWholeSphereShadowNode::makeShadowSRT(Game::JointShadowParm&, Vector3f&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lfs       f1, -0x1084(r2)
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
	  lfs       f2, -0x107C(r2)
	  lfs       f0, -0x1084(r2)
	  fadds     f2, f2, f1
	  lfs       f1, -0x1078(r2)
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

/*
 * --INFO--
 * Address:	802F8D04
 * Size:	0000EC
 */
SnakeWhole::SnakeWholeShadowMgr::SnakeWholeShadowMgr(Game::SnakeWhole::Obj*)
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
	stw      r29, 0x24(r3)
	li       r3, 0x20
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_802F8D48
	mr       r4, r29
	bl       __ct__Q24Game19JointShadowRootNodeFPQ24Game8Creature
	mr       r0, r3

lbl_802F8D48:
	stw      r0, 0x28(r28)
	mr       r30, r28
	li       r29, 0

lbl_802F8D54:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_802F8D78
	li       r4, 2
	bl       __ct__Q24Game15JointShadowNodeFi
	lis      r3, __vt__Q24Game24SnakeWholeTubeShadowNode@ha
	addi     r0, r3, __vt__Q24Game24SnakeWholeTubeShadowNode@l
	stw      r0, 0(r31)

lbl_802F8D78:
	stw      r31, 0x2c(r30)
	lwz      r3, 0x28(r28)
	lwz      r4, 0x2c(r30)
	bl       add__5CNodeFP5CNode
	li       r3, 0x24
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_802F8DAC
	li       r4, 2
	bl       __ct__Q24Game15JointShadowNodeFi
	lis      r3, __vt__Q24Game26SnakeWholeSphereShadowNode@ha
	addi     r0, r3, __vt__Q24Game26SnakeWholeSphereShadowNode@l
	stw      r0, 0(r31)

lbl_802F8DAC:
	stw      r31, 0x50(r30)
	lwz      r3, 0x28(r28)
	lwz      r4, 0x50(r30)
	bl       add__5CNodeFP5CNode
	addi     r29, r29, 1
	addi     r30, r30, 4
	cmpwi    r29, 9
	blt      lbl_802F8D54
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
 * Address:	802F8DF0
 * Size:	0000C8
 */
void SnakeWhole::SnakeWholeShadowMgr::init()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lis      r4, lbl_8048D3B4@ha
	stw      r0, 0x44(r1)
	addi     r11, r4, lbl_8048D3B4@l
	stw      r31, 0x3c(r1)
	addi     r31, r1, 8
	stw      r30, 0x38(r1)
	mr       r30, r3
	stw      r29, 0x34(r1)
	stw      r28, 0x30(r1)
	li       r28, 0
	lwz      r12, 0x24(r3)
	lwz      r10, 0(r11)
	lwz      r9, 4(r11)
	lwz      r8, 8(r11)
	lwz      r7, 0xc(r11)
	lwz      r6, 0x10(r11)
	lwz      r5, 0x14(r11)
	lwz      r4, 0x18(r11)
	lwz      r3, 0x1c(r11)
	lwz      r0, 0x20(r11)
	stw      r10, 8(r1)
	lwz      r29, 0x174(r12)
	stw      r9, 0xc(r1)
	stw      r8, 0x10(r1)
	stw      r7, 0x14(r1)
	stw      r6, 0x18(r1)
	stw      r5, 0x1c(r1)
	stw      r4, 0x20(r1)
	stw      r3, 0x24(r1)
	stw      r0, 0x28(r1)

lbl_802F8E70:
	lwz      r4, 0(r31)
	mr       r3, r29
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	addi     r28, r28, 1
	stw      r3, 0(r30)
	cmpwi    r28, 9
	addi     r31, r31, 4
	addi     r30, r30, 4
	blt      lbl_802F8E70
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
 * Address:	802F8EB8
 * Size:	000078
 */
void SnakeWhole::SnakeWholeShadowMgr::startJointShadow()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r3, 0x28(r3)
	lwz      r0, 0x10(r3)
	cmplwi   r0, 0
	bne      lbl_802F8F14
	li       r30, 0
	mr       r31, r29

lbl_802F8EEC:
	lwz      r3, 0x28(r29)
	lwz      r4, 0x2c(r31)
	bl       add__5CNodeFP5CNode
	lwz      r3, 0x28(r29)
	lwz      r4, 0x50(r31)
	bl       add__5CNodeFP5CNode
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 9
	blt      lbl_802F8EEC

lbl_802F8F14:
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
 * Address:	802F8F30
 * Size:	000064
 */
void SnakeWhole::SnakeWholeShadowMgr::finishJointShadow()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	lwz      r4, 0x28(r3)
	lwz      r0, 0x10(r4)
	cmplwi   r0, 0
	beq      lbl_802F8F7C
	li       r30, 0
	mr       r31, r3

lbl_802F8F5C:
	lwz      r3, 0x2c(r31)
	bl       del__5CNodeFv
	lwz      r3, 0x50(r31)
	bl       del__5CNodeFv
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 9
	blt      lbl_802F8F5C

lbl_802F8F7C:
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
 * Address:	802F8F94
 * Size:	00025C
 */
void SnakeWhole::SnakeWholeShadowMgr::update()
{
	/*
	stwu     r1, -0xf0(r1)
	mflr     r0
	stw      r0, 0xf4(r1)
	stmw     r27, 0xdc(r1)
	mr       r27, r3
	lwz      r3, 0x24(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xd0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802F91DC
	lwz      r4, 0x24(r27)
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, lbl_8051D2DC@sda21(r2)
	lis      r3, "__ct__10Vector3<f>Fv"@ha
	lfs      f4, 8(r1)
	addi     r4, r3, "__ct__10Vector3<f>Fv"@l
	lfs      f3, 0xc(r1)
	addi     r3, r1, 0x60
	lfs      f2, 0x10(r1)
	li       r5, 0
	lfs      f0, lbl_8051D2E0@sda21(r2)
	li       r6, 0xc
	stfs     f4, 0x38(r1)
	li       r7, 9
	stfs     f3, 0x3c(r1)
	stfs     f2, 0x40(r1)
	stfs     f1, 0x44(r1)
	stfs     f0, 0x48(r1)
	stfs     f1, 0x4c(r1)
	stfs     f1, 0x50(r1)
	stfs     f1, 0x54(r1)
	bl       __construct_array
	addi     r28, r1, 0x60
	li       r0, 3
	mr       r4, r27
	mr       r5, r28
	mtctr    r0

lbl_802F9040:
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
	addi     r4, r4, 0xc
	lfs      f2, 0x2c(r3)
	lfs      f1, 0x1c(r3)
	lfs      f0, 0xc(r3)
	stfs     f0, 0x18(r5)
	stfs     f1, 0x1c(r5)
	stfs     f2, 0x20(r5)
	addi     r5, r5, 0x24
	bdnz     lbl_802F9040
	lis      r4,
"cTubeShadowRadius__Q34Game10SnakeWhole30@unnamed@SnakeWholeShadow_cpp@"@ha lis
r3,
"cSphereShadowRadius__Q34Game10SnakeWhole30@unnamed@SnakeWholeShadow_cpp@"@ha mr
r30, r27 li       r27, 0 addi     r31, r4,
"cTubeShadowRadius__Q34Game10SnakeWhole30@unnamed@SnakeWholeShadow_cpp@"@l addi
r29, r3,
"cSphereShadowRadius__Q34Game10SnakeWhole30@unnamed@SnakeWholeShadow_cpp@"@l

lbl_802F90B8:
	lfs      f0, 0(r31)
	cmpwi    r27, 8
	stfs     f0, 0x58(r1)
	bge      lbl_802F90EC
	addi     r0, r27, 1
	addi     r6, r1, 0x60
	mulli    r0, r0, 0xc
	lwz      r3, 0x2c(r30)
	mr       r5, r28
	addi     r4, r1, 0x38
	add      r6, r6, r0
	bl
"makeShadowSRT__Q24Game24SnakeWholeTubeShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>R10Vector3<f>"
	b        lbl_802F918C

lbl_802F90EC:
	lwz      r3, 0(r30)
	addi     r4, r1, 0x38
	lfs      f3, lbl_8051D2EC@sda21(r2)
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
	lwz      r3, 0x2c(r30)
	bl
"makeShadowSRT__Q24Game24SnakeWholeTubeShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>R10Vector3<f>"

lbl_802F918C:
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
	lwz      r3, 0x50(r30)
	bl
"makeShadowSRT__Q24Game26SnakeWholeSphereShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>"
	addi     r27, r27, 1
	addi     r28, r28, 0xc
	cmpwi    r27, 9
	addi     r30, r30, 4
	addi     r29, r29, 4
	addi     r31, r31, 4
	blt      lbl_802F90B8

lbl_802F91DC:
	lmw      r27, 0xdc(r1)
	lwz      r0, 0xf4(r1)
	mtlr     r0
	addi     r1, r1, 0xf0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F91F0
 * Size:	000070
 */
SnakeWholeSphereShadowNode::~SnakeWholeSphereShadowNode()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802F9244
	lis      r4, __vt__Q24Game26SnakeWholeSphereShadowNode@ha
	addi     r0, r4, __vt__Q24Game26SnakeWholeSphereShadowNode@l
	stw      r0, 0(r30)
	beq      lbl_802F9234
	lis      r5, __vt__Q24Game15JointShadowNode@ha
	li       r4, 0
	addi     r0, r5, __vt__Q24Game15JointShadowNode@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_802F9234:
	extsh.   r0, r31
	ble      lbl_802F9244
	mr       r3, r30
	bl       __dl__FPv

lbl_802F9244:
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
 * Address:	802F9260
 * Size:	000070
 */
SnakeWholeTubeShadowNode::~SnakeWholeTubeShadowNode()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802F92B4
	lis      r4, __vt__Q24Game24SnakeWholeTubeShadowNode@ha
	addi     r0, r4, __vt__Q24Game24SnakeWholeTubeShadowNode@l
	stw      r0, 0(r30)
	beq      lbl_802F92A4
	lis      r5, __vt__Q24Game15JointShadowNode@ha
	li       r4, 0
	addi     r0, r5, __vt__Q24Game15JointShadowNode@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_802F92A4:
	extsh.   r0, r31
	ble      lbl_802F92B4
	mr       r3, r30
	bl       __dl__FPv

lbl_802F92B4:
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

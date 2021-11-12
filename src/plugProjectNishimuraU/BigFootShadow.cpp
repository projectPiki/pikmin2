#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048B640
    lbl_8048B640:
        .asciz "246-BigFootShadow"
        .skip 2
        .asciz "rhand1jnt"
        .skip 2
        .asciz "rhand2jnt"
        .skip 2
        .asciz "rhand3jnt"
        .skip 2
        .asciz "lhand1jnt"
        .skip 2
        .asciz "lhand2jnt"
        .skip 2
        .asciz "lhand3jnt"
        .skip 2
        .asciz "rfoot1jnt"
        .skip 2
        .asciz "rfoot2jnt"
        .skip 2
        .asciz "rfoot3jnt"
        .skip 2
        .asciz "lfoot1jnt"
        .skip 2
        .asciz "lfoot2jnt"
        .skip 2
        .asciz "lfoot3jnt"
        .skip 6
    .global lbl_8048B6E8
    lbl_8048B6E8:
        .asciz "rhand1jnt"
        .skip 2
    .global lbl_8048B6F4
    lbl_8048B6F4:
        .asciz "rhand2jnt"
        .skip 2
    .global lbl_8048B700
    lbl_8048B700:
        .asciz "rhand3jnt"
        .skip 2
    .global lbl_8048B70C
    lbl_8048B70C:
        .asciz "lhand1jnt"
        .skip 2
    .global lbl_8048B718
    lbl_8048B718:
        .asciz "lhand2jnt"
        .skip 2
    .global lbl_8048B724
    lbl_8048B724:
        .asciz "lhand3jnt"
        .skip 2
    .global lbl_8048B730
    lbl_8048B730:
        .asciz "rfoot1jnt"
        .skip 2
    .global lbl_8048B73C
    lbl_8048B73C:
        .asciz "rfoot2jnt"
        .skip 2
    .global lbl_8048B748
    lbl_8048B748:
        .asciz "rfoot3jnt"
        .skip 2
    .global lbl_8048B754
    lbl_8048B754:
        .asciz "lfoot1jnt"
        .skip 2
    .global lbl_8048B760
    lbl_8048B760:
        .asciz "lfoot2jnt"
        .skip 2
    .global lbl_8048B76C
    lbl_8048B76C:
        .asciz "lfoot3jnt"
        .skip 2

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051C6E8
    lbl_8051C6E8:
        .4byte 0x6B6F7369
        .4byte 0x00000000
    .global lbl_8051C6F0
    lbl_8051C6F0:
        .float 0.5
    .global lbl_8051C6F4
    lbl_8051C6F4:
        .4byte 0x40400000
    .global lbl_8051C6F8
    lbl_8051C6F8:
        .4byte 0x00000000
    .global lbl_8051C6FC
    lbl_8051C6FC:
        .float 1.0
    .global lbl_8051C700
    lbl_8051C700:
        .4byte 0xC2960000
    .global lbl_8051C704
    lbl_8051C704:
        .4byte 0x40200000
    .global lbl_8051C708
    lbl_8051C708:
        .4byte 0x42200000
    .global lbl_8051C70C
    lbl_8051C70C:
        .4byte 0x42700000
    .global lbl_8051C710
    lbl_8051C710:
        .4byte 0xC2820000
    .global lbl_8051C714
    lbl_8051C714:
        .4byte 0x42910000
    .global lbl_8051C718
    lbl_8051C718:
        .4byte 0xC1200000
    .global lbl_8051C71C
    lbl_8051C71C:
        .4byte 0xC0A00000
    .global lbl_8051C720
    lbl_8051C720:
        .4byte 0xC1000000
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	802C7810
 * Size:	00020C
 */
BigFoot::BigFootShadowMgr::BigFootShadowMgr(Game::BigFoot::Obj*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r4
	mr       r28, r3
	stw      r27, 4(r3)
	li       r3, 0x20
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_802C7848
	mr       r4, r27
	bl       __ct__Q24Game19JointShadowRootNodeFPQ24Game8Creature
	mr       r0, r3

lbl_802C7848:
	stw      r0, 0x48(r28)
	li       r3, 0x24
	bl       __nw__FUl
	or.      r27, r3, r3
	beq      lbl_802C7870
	li       r4, 2
	bl       __ct__Q24Game15JointShadowNodeFi
	lis      r3, __vt__Q24Game16SphereShadowNode@ha
	addi     r0, r3, __vt__Q24Game16SphereShadowNode@l
	stw      r0, 0(r27)

lbl_802C7870:
	stw      r27, 0x4c(r28)
	lwz      r3, 0x48(r28)
	lwz      r4, 0x4c(r28)
	bl       add__5CNodeFP5CNode
	mr       r31, r28
	mr       r30, r28
	li       r29, 0

lbl_802C788C:
	li       r3, 0x28
	bl       __nw__FUl
	or.      r27, r3, r3
	beq      lbl_802C78B8
	li       r4, 2
	bl       __ct__Q24Game15JointShadowNodeFi
	lis      r3, __vt__Q24Game19TubeShadowTransNode@ha
	li       r0, 0
	addi     r3, r3, __vt__Q24Game19TubeShadowTransNode@l
	stw      r3, 0(r27)
	stw      r0, 0x24(r27)

lbl_802C78B8:
	stw      r27, 0x50(r31)
	li       r3, 0x28
	bl       __nw__FUl
	or.      r27, r3, r3
	beq      lbl_802C78E8
	li       r4, 2
	bl       __ct__Q24Game15JointShadowNodeFi
	lis      r3, __vt__Q24Game17TubeShadowSetNode@ha
	li       r0, 0
	addi     r3, r3, __vt__Q24Game17TubeShadowSetNode@l
	stw      r3, 0(r27)
	stw      r0, 0x24(r27)

lbl_802C78E8:
	stw      r27, 0x60(r31)
	li       r3, 0x28
	bl       __nw__FUl
	or.      r27, r3, r3
	beq      lbl_802C7918
	li       r4, 2
	bl       __ct__Q24Game15JointShadowNodeFi
	lis      r3, __vt__Q24Game17TubeShadowSetNode@ha
	li       r0, 0
	addi     r3, r3, __vt__Q24Game17TubeShadowSetNode@l
	stw      r3, 0(r27)
	stw      r0, 0x24(r27)

lbl_802C7918:
	stw      r27, 0x70(r31)
	li       r3, 0x24
	bl       __nw__FUl
	or.      r27, r3, r3
	beq      lbl_802C7940
	li       r4, 2
	bl       __ct__Q24Game15JointShadowNodeFi
	lis      r3, __vt__Q24Game16SphereShadowNode@ha
	addi     r0, r3, __vt__Q24Game16SphereShadowNode@l
	stw      r0, 0(r27)

lbl_802C7940:
	stw      r27, 0x80(r31)
	li       r3, 0x24
	bl       __nw__FUl
	or.      r27, r3, r3
	beq      lbl_802C7968
	li       r4, 2
	bl       __ct__Q24Game15JointShadowNodeFi
	lis      r3, __vt__Q24Game16SphereShadowNode@ha
	addi     r0, r3, __vt__Q24Game16SphereShadowNode@l
	stw      r0, 0(r27)

lbl_802C7968:
	stw      r27, 0x90(r31)
	li       r3, 0x24
	bl       __nw__FUl
	or.      r27, r3, r3
	beq      lbl_802C7990
	li       r4, 2
	bl       __ct__Q24Game15JointShadowNodeFi
	lis      r3, __vt__Q24Game16SphereShadowNode@ha
	addi     r0, r3, __vt__Q24Game16SphereShadowNode@l
	stw      r0, 0(r27)

lbl_802C7990:
	stw      r27, 0xa0(r31)
	lwz      r3, 0x48(r28)
	lwz      r4, 0x50(r31)
	bl       add__5CNodeFP5CNode
	lwz      r3, 0x48(r28)
	lwz      r4, 0x60(r31)
	bl       add__5CNodeFP5CNode
	lwz      r3, 0x48(r28)
	lwz      r4, 0x70(r31)
	bl       add__5CNodeFP5CNode
	lwz      r3, 0x48(r28)
	lwz      r4, 0x80(r31)
	bl       add__5CNodeFP5CNode
	lwz      r3, 0x48(r28)
	lwz      r4, 0x90(r31)
	bl       add__5CNodeFP5CNode
	lwz      r3, 0x48(r28)
	lwz      r4, 0xa0(r31)
	bl       add__5CNodeFP5CNode
	li       r0, 0
	addi     r29, r29, 1
	stw      r0, 8(r30)
	cmpwi    r29, 4
	addi     r31, r31, 4
	stw      r0, 0xc(r30)
	stw      r0, 0x10(r30)
	stw      r0, 0x14(r30)
	addi     r30, r30, 0x10
	blt      lbl_802C788C
	mr       r3, r28
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C7A1C
 * Size:	00014C
 */
void BigFoot::BigFootShadowMgr::init()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, lbl_8048B640@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r4, lbl_8048B640@l
	addi     r4, r2, lbl_8051C6E8@sda21
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r3, 4(r3)
	lwz      r30, 0x174(r3)
	mr       r3, r30
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	stw      r3, 0(r29)
	mr       r3, r30
	addi     r4, r31, 0x14
	bl       getJoint__Q28SysShape5ModelFPc
	lwz      r5, 0x50(r29)
	addi     r4, r31, 0x20
	stw      r3, 0x24(r5)
	mr       r3, r30
	bl       getJoint__Q28SysShape5ModelFPc
	lwz      r5, 0x60(r29)
	addi     r4, r31, 0x2c
	stw      r3, 0x24(r5)
	mr       r3, r30
	bl       getJoint__Q28SysShape5ModelFPc
	lwz      r5, 0x70(r29)
	addi     r4, r31, 0x38
	stw      r3, 0x24(r5)
	mr       r3, r30
	bl       getJoint__Q28SysShape5ModelFPc
	lwz      r5, 0x54(r29)
	addi     r4, r31, 0x44
	stw      r3, 0x24(r5)
	mr       r3, r30
	bl       getJoint__Q28SysShape5ModelFPc
	lwz      r5, 0x64(r29)
	addi     r4, r31, 0x50
	stw      r3, 0x24(r5)
	mr       r3, r30
	bl       getJoint__Q28SysShape5ModelFPc
	lwz      r5, 0x74(r29)
	addi     r4, r31, 0x5c
	stw      r3, 0x24(r5)
	mr       r3, r30
	bl       getJoint__Q28SysShape5ModelFPc
	lwz      r5, 0x58(r29)
	addi     r4, r31, 0x68
	stw      r3, 0x24(r5)
	mr       r3, r30
	bl       getJoint__Q28SysShape5ModelFPc
	lwz      r5, 0x68(r29)
	addi     r4, r31, 0x74
	stw      r3, 0x24(r5)
	mr       r3, r30
	bl       getJoint__Q28SysShape5ModelFPc
	lwz      r5, 0x78(r29)
	addi     r4, r31, 0x80
	stw      r3, 0x24(r5)
	mr       r3, r30
	bl       getJoint__Q28SysShape5ModelFPc
	lwz      r5, 0x5c(r29)
	addi     r4, r31, 0x8c
	stw      r3, 0x24(r5)
	mr       r3, r30
	bl       getJoint__Q28SysShape5ModelFPc
	lwz      r5, 0x6c(r29)
	addi     r4, r31, 0x98
	stw      r3, 0x24(r5)
	mr       r3, r30
	bl       getJoint__Q28SysShape5ModelFPc
	lwz      r4, 0x7c(r29)
	stw      r3, 0x24(r4)
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
 * Address:	802C7B68
 * Size:	000018
 */
void BigFoot::BigFootShadowMgr::setJointPosPtr(int, int, Vector3f*)
{
	/*
	slwi     r4, r4, 4
	slwi     r0, r5, 2
	add      r3, r3, r4
	add      r3, r3, r0
	stw      r6, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C7B80
 * Size:	000370
 */
void BigFoot::BigFootShadowMgr::update()
{
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
	stfd     f25, 0xa0(r1)
	psq_st   f25, 168(r1), 0, qr0
	stfd     f24, 0x90(r1)
	psq_st   f24, 152(r1), 0, qr0
	stmw     r26, 0x78(r1)
	mr       r26, r3
	addi     r3, r1, 8
	lwz      r4, 4(r26)
	bl       getTraceCentrePosition__Q34Game7BigFoot3ObjFv
	lfs      f3, lbl_8051C6F0@sda21(r2)
	lfs      f2, lbl_8051C6F4@sda21(r2)
	fmuls    f8, f3, f3
	lfs      f6, 8(r1)
	fmuls    f7, f2, f2
	lfs      f5, 0xc(r1)
	lfs      f4, 0x10(r1)
	lfs      f1, lbl_8051C6F8@sda21(r2)
	fadds    f0, f8, f7
	stfs     f6, 0x50(r1)
	stfs     f5, 0x54(r1)
	fadds    f0, f8, f0
	stfs     f4, 0x58(r1)
	fcmpo    cr0, f0, f1
	stfs     f3, 0x5c(r1)
	stfs     f2, 0x60(r1)
	stfs     f3, 0x64(r1)
	ble      lbl_802C7C44
	fmadds   f0, f3, f3, f7
	fadds    f3, f8, f0
	fcmpo    cr0, f3, f1
	ble      lbl_802C7C48
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_802C7C48

lbl_802C7C44:
	fmr      f3, f1

lbl_802C7C48:
	lfs      f0, lbl_8051C6F8@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_802C7C80
	lfs      f0, lbl_8051C6FC@sda21(r2)
	lfs      f2, 0x5c(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0x60(r1)
	lfs      f0, 0x64(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x5c(r1)
	stfs     f1, 0x60(r1)
	stfs     f0, 0x64(r1)

lbl_802C7C80:
	lwz      r3, 0(r26)
	addi     r4, r1, 0x50
	lfs      f0, lbl_8051C700@sda21(r2)
	addi     r5, r1, 0x14
	lfs      f2, 0x1c(r3)
	lfs      f5, 0x2c(r3)
	lfs      f4, 0xc(r3)
	fadds    f3, f2, f0
	lfs      f1, lbl_8051C70C@sda21(r2)
	stfs     f2, 0x18(r1)
	lfs      f2, lbl_8051C6F8@sda21(r2)
	stfs     f4, 0x14(r1)
	lfs      f0, lbl_8051C710@sda21(r2)
	stfs     f5, 0x1c(r1)
	lfs      f4, lbl_8051C704@sda21(r2)
	stfs     f3, 0x18(r1)
	lfs      f3, lbl_8051C708@sda21(r2)
	lwz      r3, 4(r26)
	lfs      f5, 0x2d4(r3)
	fmuls    f1, f1, f5
	stfs     f2, 0x68(r1)
	fmuls    f25, f4, f5
	stfs     f2, 0x6c(r1)
	fmuls    f24, f3, f5
	stfs     f1, 0x70(r1)
	stfs     f0, 0x74(r1)
	lwz      r3, 0x4c(r26)
	bl
"makeShadowSRT__Q24Game16SphereShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>"
	lfs      f26, lbl_8051C714@sda21(r2)
	mr       r31, r26
	lfs      f27, lbl_8051C710@sda21(r2)
	mr       r30, r26
	lfs      f28, lbl_8051C718@sda21(r2)
	addi     r29, r1, 0x2c
	lfs      f29, lbl_8051C6F8@sda21(r2)
	addi     r28, r1, 0x38
	lfs      f30, lbl_8051C71C@sda21(r2)
	addi     r27, r1, 0x44
	lfs      f31, lbl_8051C720@sda21(r2)
	li       r26, 0

lbl_802C7D20:
	stfs     f26, 0x68(r1)
	mr       r6, r29
	addi     r4, r1, 0x50
	addi     r5, r1, 0x20
	stfs     f27, 0x6c(r1)
	stfs     f25, 0x70(r1)
	stfs     f28, 0x74(r1)
	lwz      r3, 0x50(r31)
	bl
"makeShadowSRT__Q24Game19TubeShadowTransNodeFRQ24Game15JointShadowParmR10Vector3<f>R10Vector3<f>"
	stfs     f29, 0x68(r1)
	mr       r5, r29
	mr       r6, r28
	addi     r4, r1, 0x50
	stfs     f29, 0x6c(r1)
	stfs     f25, 0x70(r1)
	stfs     f28, 0x74(r1)
	lwz      r3, 0x60(r31)
	bl
"makeShadowSRT__Q24Game17TubeShadowSetNodeFRQ24Game15JointShadowParmR10Vector3<f>R10Vector3<f>"
	stfs     f30, 0x68(r1)
	mr       r5, r28
	mr       r6, r27
	addi     r4, r1, 0x50
	stfs     f30, 0x6c(r1)
	stfs     f25, 0x70(r1)
	stfs     f28, 0x74(r1)
	lwz      r3, 0x70(r31)
	bl
"makeShadowSRT__Q24Game17TubeShadowSetNodeFRQ24Game15JointShadowParmR10Vector3<f>R10Vector3<f>"
	stfs     f29, 0x68(r1)
	mr       r5, r29
	addi     r4, r1, 0x50
	stfs     f29, 0x6c(r1)
	stfs     f25, 0x70(r1)
	stfs     f30, 0x74(r1)
	lwz      r3, 0x80(r31)
	bl
"makeShadowSRT__Q24Game16SphereShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>"
	stfs     f31, 0x74(r1)
	mr       r5, r28
	addi     r4, r1, 0x50
	lwz      r3, 0x90(r31)
	bl
"makeShadowSRT__Q24Game16SphereShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>"
	stfs     f24, 0x70(r1)
	mr       r5, r27
	addi     r4, r1, 0x50
	stfs     f30, 0x74(r1)
	lwz      r3, 0xa0(r31)
	bl
"makeShadowSRT__Q24Game16SphereShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>"
	lwz      r3, 8(r30)
	cmplwi   r3, 0
	beq      lbl_802C7E04
	lfs      f0, 0x20(r1)
	stfs     f0, 0(r3)
	lfs      f0, 0x24(r1)
	lwz      r3, 8(r30)
	stfs     f0, 4(r3)
	lfs      f0, 0x28(r1)
	lwz      r3, 8(r30)
	stfs     f0, 8(r3)

lbl_802C7E04:
	lwz      r3, 0xc(r30)
	cmplwi   r3, 0
	beq      lbl_802C7E30
	lfs      f0, 0x2c(r1)
	stfs     f0, 0(r3)
	lfs      f0, 0x30(r1)
	lwz      r3, 0xc(r30)
	stfs     f0, 4(r3)
	lfs      f0, 0x34(r1)
	lwz      r3, 0xc(r30)
	stfs     f0, 8(r3)

lbl_802C7E30:
	lwz      r3, 0x10(r30)
	cmplwi   r3, 0
	beq      lbl_802C7E5C
	lfs      f0, 0x38(r1)
	stfs     f0, 0(r3)
	lfs      f0, 0x3c(r1)
	lwz      r3, 0x10(r30)
	stfs     f0, 4(r3)
	lfs      f0, 0x40(r1)
	lwz      r3, 0x10(r30)
	stfs     f0, 8(r3)

lbl_802C7E5C:
	lwz      r3, 0x14(r30)
	cmplwi   r3, 0
	beq      lbl_802C7E88
	lfs      f0, 0x44(r1)
	stfs     f0, 0(r3)
	lfs      f0, 0x48(r1)
	lwz      r3, 0x14(r30)
	stfs     f0, 4(r3)
	lfs      f0, 0x4c(r1)
	lwz      r3, 0x14(r30)
	stfs     f0, 8(r3)

lbl_802C7E88:
	addi     r26, r26, 1
	addi     r30, r30, 0x10
	cmpwi    r26, 4
	addi     r31, r31, 4
	blt      lbl_802C7D20
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
	psq_l    f25, 168(r1), 0, qr0
	lfd      f25, 0xa0(r1)
	psq_l    f24, 152(r1), 0, qr0
	lfd      f24, 0x90(r1)
	lmw      r26, 0x78(r1)
	lwz      r0, 0x114(r1)
	mtlr     r0
	addi     r1, r1, 0x110
	blr
	*/
}
} // namespace Game

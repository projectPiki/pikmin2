#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048B030
    lbl_8048B030:
        .asciz "246-HoudaiShadow"
        .skip 3
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
        .skip 2

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051C4B0
    lbl_8051C4B0:
        .4byte 0x6B6F7369
        .4byte 0x00000000
    .global lbl_8051C4B8
    lbl_8051C4B8:
        .float 0.5
    .global lbl_8051C4BC
    lbl_8051C4BC:
        .4byte 0x40400000
    .global lbl_8051C4C0
    lbl_8051C4C0:
        .4byte 0x00000000
    .global lbl_8051C4C4
    lbl_8051C4C4:
        .float 1.0
    .global lbl_8051C4C8
    lbl_8051C4C8:
        .4byte 0x41A00000
    .global lbl_8051C4CC
    lbl_8051C4CC:
        .4byte 0x41F00000
    .global lbl_8051C4D0
    lbl_8051C4D0:
        .4byte 0xC2480000
    .global lbl_8051C4D4
    lbl_8051C4D4:
        .4byte 0x40200000
    .global lbl_8051C4D8
    lbl_8051C4D8:
        .4byte 0xC1200000
    .global lbl_8051C4DC
    lbl_8051C4DC:
        .4byte 0x41480000
    .global lbl_8051C4E0
    lbl_8051C4E0:
        .4byte 0xC2340000
    .global lbl_8051C4E4
    lbl_8051C4E4:
        .4byte 0xC0A00000
    .global lbl_8051C4E8
    lbl_8051C4E8:
        .4byte 0x40C00000
    .global lbl_8051C4EC
    lbl_8051C4EC:
        .4byte 0x41200000
    .global lbl_8051C4F0
    lbl_8051C4F0:
        .4byte 0x40A00000
    .global lbl_8051C4F4
    lbl_8051C4F4:
        .4byte 0x3FC00000
*/

namespace Game {

/*
 * --INFO--
 * Address:	802BF47C
 * Size:	00027C
 */
Houdai::HoudaiShadowMgr::HoudaiShadowMgr(Game::Houdai::Obj*)
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
	beq      lbl_802BF4B4
	mr       r4, r27
	bl       __ct__Q24Game19JointShadowRootNodeFPQ24Game8Creature
	mr       r0, r3

lbl_802BF4B4:
	stw      r0, 0x48(r28)
	li       r3, 0x24
	bl       __nw__FUl
	or.      r27, r3, r3
	beq      lbl_802BF4DC
	li       r4, 2
	bl       __ct__Q24Game15JointShadowNodeFi
	lis      r3, __vt__Q24Game16SphereShadowNode@ha
	addi     r0, r3, __vt__Q24Game16SphereShadowNode@l
	stw      r0, 0(r27)

lbl_802BF4DC:
	stw      r27, 0x8c(r28)
	lwz      r3, 0x48(r28)
	lwz      r4, 0x8c(r28)
	bl       add__5CNodeFP5CNode
	li       r3, 0x24
	bl       __nw__FUl
	or.      r27, r3, r3
	beq      lbl_802BF510
	li       r4, 2
	bl       __ct__Q24Game15JointShadowNodeFi
	lis      r3, __vt__Q24Game16SphereShadowNode@ha
	addi     r0, r3, __vt__Q24Game16SphereShadowNode@l
	stw      r0, 0(r27)

lbl_802BF510:
	stw      r27, 0xc0(r28)
	lwz      r3, 0x48(r28)
	lwz      r4, 0xc0(r28)
	bl       add__5CNodeFP5CNode
	mr       r31, r28
	mr       r30, r28
	li       r29, 0

lbl_802BF52C:
	li       r3, 0x28
	bl       __nw__FUl
	or.      r27, r3, r3
	beq      lbl_802BF558
	li       r4, 2
	bl       __ct__Q24Game15JointShadowNodeFi
	lis      r3, __vt__Q24Game17TubeShadowSetNode@ha
	li       r0, 0
	addi     r3, r3, __vt__Q24Game17TubeShadowSetNode@l
	stw      r3, 0(r27)
	stw      r0, 0x24(r27)

lbl_802BF558:
	stw      r27, 0x4c(r31)
	li       r3, 0x28
	bl       __nw__FUl
	or.      r27, r3, r3
	beq      lbl_802BF588
	li       r4, 2
	bl       __ct__Q24Game15JointShadowNodeFi
	lis      r3, __vt__Q24Game17TubeShadowSetNode@ha
	li       r0, 0
	addi     r3, r3, __vt__Q24Game17TubeShadowSetNode@l
	stw      r3, 0(r27)
	stw      r0, 0x24(r27)

lbl_802BF588:
	stw      r27, 0x5c(r31)
	li       r3, 0x28
	bl       __nw__FUl
	or.      r27, r3, r3
	beq      lbl_802BF5B8
	li       r4, 2
	bl       __ct__Q24Game15JointShadowNodeFi
	lis      r3, __vt__Q24Game17TubeShadowSetNode@ha
	li       r0, 0
	addi     r3, r3, __vt__Q24Game17TubeShadowSetNode@l
	stw      r3, 0(r27)
	stw      r0, 0x24(r27)

lbl_802BF5B8:
	stw      r27, 0x6c(r31)
	li       r3, 0x28
	bl       __nw__FUl
	or.      r27, r3, r3
	beq      lbl_802BF5E8
	li       r4, 2
	bl       __ct__Q24Game15JointShadowNodeFi
	lis      r3, __vt__Q24Game17TubeShadowSetNode@ha
	li       r0, 0
	addi     r3, r3, __vt__Q24Game17TubeShadowSetNode@l
	stw      r3, 0(r27)
	stw      r0, 0x24(r27)

lbl_802BF5E8:
	stw      r27, 0x7c(r31)
	li       r3, 0x24
	bl       __nw__FUl
	or.      r27, r3, r3
	beq      lbl_802BF610
	li       r4, 2
	bl       __ct__Q24Game15JointShadowNodeFi
	lis      r3, __vt__Q24Game16SphereShadowNode@ha
	addi     r0, r3, __vt__Q24Game16SphereShadowNode@l
	stw      r0, 0(r27)

lbl_802BF610:
	stw      r27, 0x90(r31)
	li       r3, 0x24
	bl       __nw__FUl
	or.      r27, r3, r3
	beq      lbl_802BF638
	li       r4, 2
	bl       __ct__Q24Game15JointShadowNodeFi
	lis      r3, __vt__Q24Game16SphereShadowNode@ha
	addi     r0, r3, __vt__Q24Game16SphereShadowNode@l
	stw      r0, 0(r27)

lbl_802BF638:
	stw      r27, 0xa0(r31)
	li       r3, 0x24
	bl       __nw__FUl
	or.      r27, r3, r3
	beq      lbl_802BF660
	li       r4, 2
	bl       __ct__Q24Game15JointShadowNodeFi
	lis      r3, __vt__Q24Game16SphereShadowNode@ha
	addi     r0, r3, __vt__Q24Game16SphereShadowNode@l
	stw      r0, 0(r27)

lbl_802BF660:
	stw      r27, 0xb0(r31)
	lwz      r3, 0x48(r28)
	lwz      r4, 0x4c(r31)
	bl       add__5CNodeFP5CNode
	lwz      r3, 0x48(r28)
	lwz      r4, 0x5c(r31)
	bl       add__5CNodeFP5CNode
	lwz      r3, 0x48(r28)
	lwz      r4, 0x6c(r31)
	bl       add__5CNodeFP5CNode
	lwz      r3, 0x48(r28)
	lwz      r4, 0x7c(r31)
	bl       add__5CNodeFP5CNode
	lwz      r3, 0x48(r28)
	lwz      r4, 0x90(r31)
	bl       add__5CNodeFP5CNode
	lwz      r3, 0x48(r28)
	lwz      r4, 0xa0(r31)
	bl       add__5CNodeFP5CNode
	lwz      r3, 0x48(r28)
	lwz      r4, 0xb0(r31)
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
	blt      lbl_802BF52C
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
 * Address:	802BF6F8
 * Size:	0001B0
 */
void Houdai::HoudaiShadowMgr::init()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, lbl_8048B030@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r4, lbl_8048B030@l
	addi     r4, r2, lbl_8051C4B0@sda21
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
	lwz      r5, 0x4c(r29)
	addi     r4, r31, 0x14
	stw      r3, 0x24(r5)
	mr       r3, r30
	bl       getJoint__Q28SysShape5ModelFPc
	lwz      r5, 0x4c(r29)
	addi     r4, r31, 0x14
	stw      r3, 0x24(r5)
	mr       r3, r30
	bl       getJoint__Q28SysShape5ModelFPc
	lwz      r5, 0x5c(r29)
	addi     r4, r31, 0x20
	stw      r3, 0x24(r5)
	mr       r3, r30
	bl       getJoint__Q28SysShape5ModelFPc
	lwz      r5, 0x6c(r29)
	addi     r4, r31, 0x2c
	stw      r3, 0x24(r5)
	mr       r3, r30
	bl       getJoint__Q28SysShape5ModelFPc
	lwz      r5, 0x7c(r29)
	addi     r4, r31, 0x38
	stw      r3, 0x24(r5)
	mr       r3, r30
	bl       getJoint__Q28SysShape5ModelFPc
	lwz      r5, 0x50(r29)
	addi     r4, r31, 0x38
	stw      r3, 0x24(r5)
	mr       r3, r30
	bl       getJoint__Q28SysShape5ModelFPc
	lwz      r5, 0x60(r29)
	addi     r4, r31, 0x44
	stw      r3, 0x24(r5)
	mr       r3, r30
	bl       getJoint__Q28SysShape5ModelFPc
	lwz      r5, 0x70(r29)
	addi     r4, r31, 0x50
	stw      r3, 0x24(r5)
	mr       r3, r30
	bl       getJoint__Q28SysShape5ModelFPc
	lwz      r5, 0x80(r29)
	addi     r4, r31, 0x5c
	stw      r3, 0x24(r5)
	mr       r3, r30
	bl       getJoint__Q28SysShape5ModelFPc
	lwz      r5, 0x54(r29)
	addi     r4, r31, 0x5c
	stw      r3, 0x24(r5)
	mr       r3, r30
	bl       getJoint__Q28SysShape5ModelFPc
	lwz      r5, 0x64(r29)
	addi     r4, r31, 0x68
	stw      r3, 0x24(r5)
	mr       r3, r30
	bl       getJoint__Q28SysShape5ModelFPc
	lwz      r5, 0x74(r29)
	addi     r4, r31, 0x74
	stw      r3, 0x24(r5)
	mr       r3, r30
	bl       getJoint__Q28SysShape5ModelFPc
	lwz      r5, 0x84(r29)
	addi     r4, r31, 0x80
	stw      r3, 0x24(r5)
	mr       r3, r30
	bl       getJoint__Q28SysShape5ModelFPc
	lwz      r5, 0x58(r29)
	addi     r4, r31, 0x80
	stw      r3, 0x24(r5)
	mr       r3, r30
	bl       getJoint__Q28SysShape5ModelFPc
	lwz      r5, 0x68(r29)
	addi     r4, r31, 0x8c
	stw      r3, 0x24(r5)
	mr       r3, r30
	bl       getJoint__Q28SysShape5ModelFPc
	lwz      r5, 0x78(r29)
	addi     r4, r31, 0x98
	stw      r3, 0x24(r5)
	mr       r3, r30
	bl       getJoint__Q28SysShape5ModelFPc
	lwz      r4, 0x88(r29)
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
 * Address:	802BF8A8
 * Size:	000018
 */
void Houdai::HoudaiShadowMgr::setJointPosPtr(int, int, Vector3f*)
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
 * Address:	802BF8C0
 * Size:	0003F0
 */
void Houdai::HoudaiShadowMgr::update()
{
	/*
	stwu     r1, -0x100(r1)
	mflr     r0
	stw      r0, 0x104(r1)
	stfd     f31, 0xf0(r1)
	psq_st   f31, 248(r1), 0, qr0
	stfd     f30, 0xe0(r1)
	psq_st   f30, 232(r1), 0, qr0
	stfd     f29, 0xd0(r1)
	psq_st   f29, 216(r1), 0, qr0
	stfd     f28, 0xc0(r1)
	psq_st   f28, 200(r1), 0, qr0
	stfd     f27, 0xb0(r1)
	psq_st   f27, 184(r1), 0, qr0
	stfd     f26, 0xa0(r1)
	psq_st   f26, 168(r1), 0, qr0
	stmw     r25, 0x84(r1)
	mr       r25, r3
	addi     r3, r1, 8
	lwz      r4, 4(r25)
	bl       getTraceCentrePosition__Q34Game6Houdai3ObjFv
	lfs      f3, lbl_8051C4B8@sda21(r2)
	lfs      f2, lbl_8051C4BC@sda21(r2)
	fmuls    f8, f3, f3
	lfs      f6, 8(r1)
	fmuls    f7, f2, f2
	lfs      f5, 0xc(r1)
	lfs      f4, 0x10(r1)
	lfs      f1, lbl_8051C4C0@sda21(r2)
	fadds    f0, f8, f7
	stfs     f6, 0x50(r1)
	stfs     f5, 0x54(r1)
	fadds    f0, f8, f0
	stfs     f4, 0x58(r1)
	fcmpo    cr0, f0, f1
	stfs     f3, 0x5c(r1)
	stfs     f2, 0x60(r1)
	stfs     f3, 0x64(r1)
	ble      lbl_802BF974
	fmadds   f0, f3, f3, f7
	fadds    f3, f8, f0
	fcmpo    cr0, f3, f1
	ble      lbl_802BF978
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_802BF978

lbl_802BF974:
	fmr      f3, f1

lbl_802BF978:
	lfs      f0, lbl_8051C4C0@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_802BF9B0
	lfs      f0, lbl_8051C4C4@sda21(r2)
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

lbl_802BF9B0:
	lwz      r3, 0(r25)
	addi     r4, r1, 0x50
	lfs      f0, lbl_8051C4C8@sda21(r2)
	addi     r5, r1, 0x14
	lfs      f1, 0x1c(r3)
	lfs      f5, 0x2c(r3)
	lfs      f4, 0xc(r3)
	fadds    f3, f1, f0
	lfs      f2, lbl_8051C4C0@sda21(r2)
	stfs     f1, 0x18(r1)
	lfs      f1, lbl_8051C4CC@sda21(r2)
	lfs      f0, lbl_8051C4D0@sda21(r2)
	stfs     f4, 0x14(r1)
	stfs     f5, 0x1c(r1)
	stfs     f3, 0x18(r1)
	stfs     f2, 0x68(r1)
	stfs     f2, 0x6c(r1)
	stfs     f1, 0x70(r1)
	stfs     f0, 0x74(r1)
	lwz      r3, 0x8c(r25)
	bl
"makeShadowSRT__Q24Game16SphereShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>"
	lfs      f26, lbl_8051C4C0@sda21(r2)
	mr       r31, r25
	lfs      f27, lbl_8051C4D4@sda21(r2)
	mr       r30, r25
	lfs      f28, lbl_8051C4D8@sda21(r2)
	addi     r29, r1, 0x2c
	lfs      f29, lbl_8051C4DC@sda21(r2)
	addi     r28, r1, 0x38
	lfs      f30, lbl_8051C4E0@sda21(r2)
	addi     r27, r1, 0x44
	lfs      f31, lbl_8051C4E4@sda21(r2)
	li       r26, 0

lbl_802BFA34:
	stfs     f26, 0x68(r1)
	addi     r4, r1, 0x50
	addi     r5, r1, 0x14
	addi     r6, r1, 0x20
	stfs     f26, 0x6c(r1)
	stfs     f27, 0x70(r1)
	stfs     f28, 0x74(r1)
	lwz      r3, 0x4c(r31)
	bl
"makeShadowSRT__Q24Game17TubeShadowSetNodeFRQ24Game15JointShadowParmR10Vector3<f>R10Vector3<f>"
	stfs     f29, 0x68(r1)
	mr       r6, r29
	addi     r4, r1, 0x50
	addi     r5, r1, 0x20
	stfs     f30, 0x6c(r1)
	stfs     f27, 0x70(r1)
	stfs     f28, 0x74(r1)
	lwz      r3, 0x5c(r31)
	bl
"makeShadowSRT__Q24Game17TubeShadowSetNodeFRQ24Game15JointShadowParmR10Vector3<f>R10Vector3<f>"
	stfs     f31, 0x68(r1)
	mr       r5, r29
	mr       r6, r28
	addi     r4, r1, 0x50
	stfs     f31, 0x6c(r1)
	stfs     f27, 0x70(r1)
	stfs     f28, 0x74(r1)
	lwz      r3, 0x6c(r31)
	bl
"makeShadowSRT__Q24Game17TubeShadowSetNodeFRQ24Game15JointShadowParmR10Vector3<f>R10Vector3<f>"
	stfs     f26, 0x68(r1)
	mr       r5, r28
	mr       r6, r27
	addi     r4, r1, 0x50
	stfs     f26, 0x6c(r1)
	stfs     f27, 0x70(r1)
	stfs     f28, 0x74(r1)
	lwz      r3, 0x7c(r31)
	bl
"makeShadowSRT__Q24Game17TubeShadowSetNodeFRQ24Game15JointShadowParmR10Vector3<f>R10Vector3<f>"
	cmpwi    r26, 0
	bne      lbl_802BFB4C
	lfs      f2, lbl_8051C4C0@sda21(r2)
	addi     r4, r1, 0x50
	lfs      f1, lbl_8051C4E8@sda21(r2)
	addi     r5, r1, 0x20
	lfs      f0, lbl_8051C4E4@sda21(r2)
	stfs     f2, 0x68(r1)
	stfs     f2, 0x6c(r1)
	stfs     f1, 0x70(r1)
	stfs     f0, 0x74(r1)
	lwz      r3, 0x90(r31)
	bl
"makeShadowSRT__Q24Game16SphereShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>"
	lfs      f0, lbl_8051C4E4@sda21(r2)
	mr       r5, r29
	addi     r4, r1, 0x50
	stfs     f0, 0x74(r1)
	lwz      r3, 0xa0(r31)
	bl
"makeShadowSRT__Q24Game16SphereShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>"
	lfs      f0, lbl_8051C4E4@sda21(r2)
	mr       r5, r28
	addi     r4, r1, 0x50
	stfs     f0, 0x74(r1)
	lwz      r3, 0xb0(r31)
	bl
"makeShadowSRT__Q24Game16SphereShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>"
	lfs      f1, lbl_8051C4EC@sda21(r2)
	mr       r5, r27
	lfs      f0, lbl_8051C4F0@sda21(r2)
	addi     r4, r1, 0x50
	stfs     f1, 0x70(r1)
	stfs     f0, 0x74(r1)
	lwz      r3, 0xc0(r25)
	bl
"makeShadowSRT__Q24Game16SphereShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>"
	b        lbl_802BFBA8

lbl_802BFB4C:
	lfs      f2, lbl_8051C4C0@sda21(r2)
	addi     r4, r1, 0x50
	lfs      f1, lbl_8051C4F4@sda21(r2)
	addi     r5, r1, 0x20
	lfs      f0, lbl_8051C4E4@sda21(r2)
	stfs     f2, 0x68(r1)
	stfs     f2, 0x6c(r1)
	stfs     f1, 0x70(r1)
	stfs     f0, 0x74(r1)
	lwz      r3, 0x90(r31)
	bl
"makeShadowSRT__Q24Game16SphereShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>"
	lfs      f0, lbl_8051C4E4@sda21(r2)
	mr       r5, r29
	addi     r4, r1, 0x50
	stfs     f0, 0x74(r1)
	lwz      r3, 0xa0(r31)
	bl
"makeShadowSRT__Q24Game16SphereShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>"
	lfs      f0, lbl_8051C4E4@sda21(r2)
	mr       r5, r28
	addi     r4, r1, 0x50
	stfs     f0, 0x74(r1)
	lwz      r3, 0xb0(r31)
	bl
"makeShadowSRT__Q24Game16SphereShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>"

lbl_802BFBA8:
	lwz      r3, 8(r30)
	cmplwi   r3, 0
	beq      lbl_802BFBD4
	lfs      f0, 0x20(r1)
	stfs     f0, 0(r3)
	lfs      f0, 0x24(r1)
	lwz      r3, 8(r30)
	stfs     f0, 4(r3)
	lfs      f0, 0x28(r1)
	lwz      r3, 8(r30)
	stfs     f0, 8(r3)

lbl_802BFBD4:
	lwz      r3, 0xc(r30)
	cmplwi   r3, 0
	beq      lbl_802BFC00
	lfs      f0, 0x2c(r1)
	stfs     f0, 0(r3)
	lfs      f0, 0x30(r1)
	lwz      r3, 0xc(r30)
	stfs     f0, 4(r3)
	lfs      f0, 0x34(r1)
	lwz      r3, 0xc(r30)
	stfs     f0, 8(r3)

lbl_802BFC00:
	lwz      r3, 0x10(r30)
	cmplwi   r3, 0
	beq      lbl_802BFC2C
	lfs      f0, 0x38(r1)
	stfs     f0, 0(r3)
	lfs      f0, 0x3c(r1)
	lwz      r3, 0x10(r30)
	stfs     f0, 4(r3)
	lfs      f0, 0x40(r1)
	lwz      r3, 0x10(r30)
	stfs     f0, 8(r3)

lbl_802BFC2C:
	lwz      r3, 0x14(r30)
	cmplwi   r3, 0
	beq      lbl_802BFC58
	lfs      f0, 0x44(r1)
	stfs     f0, 0(r3)
	lfs      f0, 0x48(r1)
	lwz      r3, 0x14(r30)
	stfs     f0, 4(r3)
	lfs      f0, 0x4c(r1)
	lwz      r3, 0x14(r30)
	stfs     f0, 8(r3)

lbl_802BFC58:
	addi     r26, r26, 1
	addi     r30, r30, 0x10
	cmpwi    r26, 4
	addi     r31, r31, 4
	blt      lbl_802BFA34
	psq_l    f31, 248(r1), 0, qr0
	lfd      f31, 0xf0(r1)
	psq_l    f30, 232(r1), 0, qr0
	lfd      f30, 0xe0(r1)
	psq_l    f29, 216(r1), 0, qr0
	lfd      f29, 0xd0(r1)
	psq_l    f28, 200(r1), 0, qr0
	lfd      f28, 0xc0(r1)
	psq_l    f27, 184(r1), 0, qr0
	lfd      f27, 0xb0(r1)
	psq_l    f26, 168(r1), 0, qr0
	lfd      f26, 0xa0(r1)
	lmw      r25, 0x84(r1)
	lwz      r0, 0x104(r1)
	mtlr     r0
	addi     r1, r1, 0x100
	blr
	*/
}
} // namespace Game

#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80489978
    lbl_80489978:
        .asciz "246-DamagumoShadow"
        .skip 1
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

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q24Game17TubeShadowSetNode
    __vt__Q24Game17TubeShadowSetNode:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game17TubeShadowSetNodeFv
        .4byte getChildCount__5CNodeFv
    .global __vt__Q24Game19TubeShadowTransNode
    __vt__Q24Game19TubeShadowTransNode:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game19TubeShadowTransNodeFv
        .4byte getChildCount__5CNodeFv
    .global __vt__Q24Game16SphereShadowNode
    __vt__Q24Game16SphereShadowNode:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game16SphereShadowNodeFv
        .4byte getChildCount__5CNodeFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051BFD8
    lbl_8051BFD8:
        .4byte 0x6B6F7369
        .4byte 0x00000000
    .global lbl_8051BFE0
    lbl_8051BFE0:
        .float 0.5
    .global lbl_8051BFE4
    lbl_8051BFE4:
        .4byte 0x40400000
    .global lbl_8051BFE8
    lbl_8051BFE8:
        .4byte 0x00000000
    .global lbl_8051BFEC
    lbl_8051BFEC:
        .float 1.0
    .global lbl_8051BFF0
    lbl_8051BFF0:
        .4byte 0xC1F00000
    .global lbl_8051BFF4
    lbl_8051BFF4:
        .4byte 0x40200000
    .global lbl_8051BFF8
    lbl_8051BFF8:
        .4byte 0x41200000
    .global lbl_8051BFFC
    lbl_8051BFFC:
        .4byte 0x418C0000
    .global lbl_8051C000
    lbl_8051C000:
        .4byte 0x41F00000
    .global lbl_8051C004
    lbl_8051C004:
        .4byte 0xC2480000
    .global lbl_8051C008
    lbl_8051C008:
        .4byte 0x42840000
    .global lbl_8051C00C
    lbl_8051C00C:
        .4byte 0xC28E0000
    .global lbl_8051C010
    lbl_8051C010:
        .4byte 0xC1200000
    .global lbl_8051C014
    lbl_8051C014:
        .4byte 0xC0A00000
    .global lbl_8051C018
    lbl_8051C018:
        .4byte 0xC1000000
    .global lbl_8051C01C
    lbl_8051C01C:
        .4byte 0x40A00000
*/

namespace Game {

/*
 * --INFO--
 * Address:	802AAD94
 * Size:	00020C
 */
Damagumo::DamagumoShadowMgr::DamagumoShadowMgr(Game::Damagumo::Obj*)
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
	beq      lbl_802AADCC
	mr       r4, r27
	bl       __ct__Q24Game19JointShadowRootNodeFPQ24Game8Creature
	mr       r0, r3

lbl_802AADCC:
	stw      r0, 0x48(r28)
	li       r3, 0x24
	bl       __nw__FUl
	or.      r27, r3, r3
	beq      lbl_802AADF4
	li       r4, 2
	bl       __ct__Q24Game15JointShadowNodeFi
	lis      r3, __vt__Q24Game16SphereShadowNode@ha
	addi     r0, r3, __vt__Q24Game16SphereShadowNode@l
	stw      r0, 0(r27)

lbl_802AADF4:
	stw      r27, 0x4c(r28)
	lwz      r3, 0x48(r28)
	lwz      r4, 0x4c(r28)
	bl       add__5CNodeFP5CNode
	mr       r31, r28
	mr       r30, r28
	li       r29, 0

lbl_802AAE10:
	li       r3, 0x28
	bl       __nw__FUl
	or.      r27, r3, r3
	beq      lbl_802AAE3C
	li       r4, 2
	bl       __ct__Q24Game15JointShadowNodeFi
	lis      r3, __vt__Q24Game19TubeShadowTransNode@ha
	li       r0, 0
	addi     r3, r3, __vt__Q24Game19TubeShadowTransNode@l
	stw      r3, 0(r27)
	stw      r0, 0x24(r27)

lbl_802AAE3C:
	stw      r27, 0x50(r31)
	li       r3, 0x28
	bl       __nw__FUl
	or.      r27, r3, r3
	beq      lbl_802AAE6C
	li       r4, 2
	bl       __ct__Q24Game15JointShadowNodeFi
	lis      r3, __vt__Q24Game17TubeShadowSetNode@ha
	li       r0, 0
	addi     r3, r3, __vt__Q24Game17TubeShadowSetNode@l
	stw      r3, 0(r27)
	stw      r0, 0x24(r27)

lbl_802AAE6C:
	stw      r27, 0x60(r31)
	li       r3, 0x28
	bl       __nw__FUl
	or.      r27, r3, r3
	beq      lbl_802AAE9C
	li       r4, 2
	bl       __ct__Q24Game15JointShadowNodeFi
	lis      r3, __vt__Q24Game17TubeShadowSetNode@ha
	li       r0, 0
	addi     r3, r3, __vt__Q24Game17TubeShadowSetNode@l
	stw      r3, 0(r27)
	stw      r0, 0x24(r27)

lbl_802AAE9C:
	stw      r27, 0x70(r31)
	li       r3, 0x24
	bl       __nw__FUl
	or.      r27, r3, r3
	beq      lbl_802AAEC4
	li       r4, 2
	bl       __ct__Q24Game15JointShadowNodeFi
	lis      r3, __vt__Q24Game16SphereShadowNode@ha
	addi     r0, r3, __vt__Q24Game16SphereShadowNode@l
	stw      r0, 0(r27)

lbl_802AAEC4:
	stw      r27, 0x80(r31)
	li       r3, 0x24
	bl       __nw__FUl
	or.      r27, r3, r3
	beq      lbl_802AAEEC
	li       r4, 2
	bl       __ct__Q24Game15JointShadowNodeFi
	lis      r3, __vt__Q24Game16SphereShadowNode@ha
	addi     r0, r3, __vt__Q24Game16SphereShadowNode@l
	stw      r0, 0(r27)

lbl_802AAEEC:
	stw      r27, 0x90(r31)
	li       r3, 0x24
	bl       __nw__FUl
	or.      r27, r3, r3
	beq      lbl_802AAF14
	li       r4, 2
	bl       __ct__Q24Game15JointShadowNodeFi
	lis      r3, __vt__Q24Game16SphereShadowNode@ha
	addi     r0, r3, __vt__Q24Game16SphereShadowNode@l
	stw      r0, 0(r27)

lbl_802AAF14:
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
	blt      lbl_802AAE10
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
 * Address:	802AAFA0
 * Size:	00014C
 */
void Damagumo::DamagumoShadowMgr::init()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, lbl_80489978@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r4, lbl_80489978@l
	addi     r4, r2, lbl_8051BFD8@sda21
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
 * Address:	802AB0EC
 * Size:	000018
 */
void Damagumo::DamagumoShadowMgr::setJointPosPtr(int, int, Vector3f*)
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
 * Address:	802AB104
 * Size:	00039C
 */
void Damagumo::DamagumoShadowMgr::update()
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
	stfd     f25, 0xc0(r1)
	psq_st   f25, 200(r1), 0, qr0
	stfd     f24, 0xb0(r1)
	psq_st   f24, 184(r1), 0, qr0
	stfd     f23, 0xa0(r1)
	psq_st   f23, 168(r1), 0, qr0
	stfd     f22, 0x90(r1)
	psq_st   f22, 152(r1), 0, qr0
	stmw     r26, 0x78(r1)
	mr       r26, r3
	addi     r3, r1, 8
	lwz      r4, 4(r26)
	bl       getTraceCentrePosition__Q34Game8Damagumo3ObjFv
	lfs      f3, lbl_8051BFE0@sda21(r2)
	lfs      f2, lbl_8051BFE4@sda21(r2)
	fmuls    f8, f3, f3
	lfs      f6, 8(r1)
	fmuls    f7, f2, f2
	lfs      f5, 0xc(r1)
	lfs      f4, 0x10(r1)
	lfs      f1, lbl_8051BFE8@sda21(r2)
	fadds    f0, f8, f7
	stfs     f6, 0x50(r1)
	stfs     f5, 0x54(r1)
	fadds    f0, f8, f0
	stfs     f4, 0x58(r1)
	fcmpo    cr0, f0, f1
	stfs     f3, 0x5c(r1)
	stfs     f2, 0x60(r1)
	stfs     f3, 0x64(r1)
	ble      lbl_802AB1D8
	fmadds   f0, f3, f3, f7
	fadds    f3, f8, f0
	fcmpo    cr0, f3, f1
	ble      lbl_802AB1DC
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_802AB1DC

lbl_802AB1D8:
	fmr      f3, f1

lbl_802AB1DC:
	lfs      f0, lbl_8051BFE8@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_802AB214
	lfs      f0, lbl_8051BFEC@sda21(r2)
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

lbl_802AB214:
	lwz      r3, 0(r26)
	addi     r4, r1, 0x50
	lfs      f0, lbl_8051BFF0@sda21(r2)
	addi     r5, r1, 0x14
	lfs      f2, 0x1c(r3)
	lfs      f5, 0x2c(r3)
	lfs      f4, 0xc(r3)
	fadds    f3, f2, f0
	lfs      f1, lbl_8051C000@sda21(r2)
	stfs     f2, 0x18(r1)
	lfs      f2, lbl_8051BFE8@sda21(r2)
	stfs     f4, 0x14(r1)
	lfs      f0, lbl_8051C004@sda21(r2)
	stfs     f5, 0x1c(r1)
	lfs      f5, lbl_8051BFF4@sda21(r2)
	stfs     f3, 0x18(r1)
	lfs      f4, lbl_8051BFF8@sda21(r2)
	lwz      r3, 4(r26)
	lfs      f3, lbl_8051BFFC@sda21(r2)
	lfs      f6, 0x2d8(r3)
	fmuls    f1, f1, f6
	stfs     f2, 0x68(r1)
	fmuls    f24, f5, f6
	stfs     f2, 0x6c(r1)
	fmuls    f23, f4, f6
	fmuls    f22, f3, f6
	stfs     f1, 0x70(r1)
	stfs     f0, 0x74(r1)
	lwz      r3, 0x4c(r26)
	bl
"makeShadowSRT__Q24Game16SphereShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>"
	lfs      f25, lbl_8051C008@sda21(r2)
	mr       r31, r26
	lfs      f26, lbl_8051C00C@sda21(r2)
	mr       r30, r26
	lfs      f27, lbl_8051C010@sda21(r2)
	addi     r29, r1, 0x2c
	lfs      f28, lbl_8051BFE8@sda21(r2)
	addi     r28, r1, 0x38
	lfs      f29, lbl_8051C014@sda21(r2)
	addi     r27, r1, 0x44
	lfs      f30, lbl_8051C018@sda21(r2)
	li       r26, 0
	lfs      f31, lbl_8051C01C@sda21(r2)

lbl_802AB2C0:
	stfs     f25, 0x68(r1)
	mr       r6, r29
	addi     r4, r1, 0x50
	addi     r5, r1, 0x20
	stfs     f26, 0x6c(r1)
	stfs     f24, 0x70(r1)
	stfs     f27, 0x74(r1)
	lwz      r3, 0x50(r31)
	bl
"makeShadowSRT__Q24Game19TubeShadowTransNodeFRQ24Game15JointShadowParmR10Vector3<f>R10Vector3<f>"
	stfs     f28, 0x68(r1)
	mr       r5, r29
	mr       r6, r28
	addi     r4, r1, 0x50
	stfs     f28, 0x6c(r1)
	stfs     f24, 0x70(r1)
	stfs     f27, 0x74(r1)
	lwz      r3, 0x60(r31)
	bl
"makeShadowSRT__Q24Game17TubeShadowSetNodeFRQ24Game15JointShadowParmR10Vector3<f>R10Vector3<f>"
	stfs     f29, 0x68(r1)
	mr       r5, r28
	mr       r6, r27
	addi     r4, r1, 0x50
	stfs     f29, 0x6c(r1)
	stfs     f24, 0x70(r1)
	stfs     f27, 0x74(r1)
	lwz      r3, 0x70(r31)
	bl
"makeShadowSRT__Q24Game17TubeShadowSetNodeFRQ24Game15JointShadowParmR10Vector3<f>R10Vector3<f>"
	stfs     f28, 0x68(r1)
	mr       r5, r29
	addi     r4, r1, 0x50
	stfs     f28, 0x6c(r1)
	stfs     f23, 0x70(r1)
	stfs     f29, 0x74(r1)
	lwz      r3, 0x80(r31)
	bl
"makeShadowSRT__Q24Game16SphereShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>"
	stfs     f30, 0x74(r1)
	mr       r5, r28
	addi     r4, r1, 0x50
	lwz      r3, 0x90(r31)
	bl
"makeShadowSRT__Q24Game16SphereShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>"
	stfs     f22, 0x70(r1)
	mr       r5, r27
	addi     r4, r1, 0x50
	stfs     f31, 0x74(r1)
	lwz      r3, 0xa0(r31)
	bl
"makeShadowSRT__Q24Game16SphereShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>"
	lwz      r3, 8(r30)
	cmplwi   r3, 0
	beq      lbl_802AB3A4
	lfs      f0, 0x20(r1)
	stfs     f0, 0(r3)
	lfs      f0, 0x24(r1)
	lwz      r3, 8(r30)
	stfs     f0, 4(r3)
	lfs      f0, 0x28(r1)
	lwz      r3, 8(r30)
	stfs     f0, 8(r3)

lbl_802AB3A4:
	lwz      r3, 0xc(r30)
	cmplwi   r3, 0
	beq      lbl_802AB3D0
	lfs      f0, 0x2c(r1)
	stfs     f0, 0(r3)
	lfs      f0, 0x30(r1)
	lwz      r3, 0xc(r30)
	stfs     f0, 4(r3)
	lfs      f0, 0x34(r1)
	lwz      r3, 0xc(r30)
	stfs     f0, 8(r3)

lbl_802AB3D0:
	lwz      r3, 0x10(r30)
	cmplwi   r3, 0
	beq      lbl_802AB3FC
	lfs      f0, 0x38(r1)
	stfs     f0, 0(r3)
	lfs      f0, 0x3c(r1)
	lwz      r3, 0x10(r30)
	stfs     f0, 4(r3)
	lfs      f0, 0x40(r1)
	lwz      r3, 0x10(r30)
	stfs     f0, 8(r3)

lbl_802AB3FC:
	lwz      r3, 0x14(r30)
	cmplwi   r3, 0
	beq      lbl_802AB428
	lfs      f0, 0x44(r1)
	stfs     f0, 0(r3)
	lfs      f0, 0x48(r1)
	lwz      r3, 0x14(r30)
	stfs     f0, 4(r3)
	lfs      f0, 0x4c(r1)
	lwz      r3, 0x14(r30)
	stfs     f0, 8(r3)

lbl_802AB428:
	addi     r26, r26, 1
	addi     r30, r30, 0x10
	cmpwi    r26, 4
	addi     r31, r31, 4
	blt      lbl_802AB2C0
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
	psq_l    f25, 200(r1), 0, qr0
	lfd      f25, 0xc0(r1)
	psq_l    f24, 184(r1), 0, qr0
	lfd      f24, 0xb0(r1)
	psq_l    f23, 168(r1), 0, qr0
	lfd      f23, 0xa0(r1)
	psq_l    f22, 152(r1), 0, qr0
	lfd      f22, 0x90(r1)
	lmw      r26, 0x78(r1)
	lwz      r0, 0x134(r1)
	mtlr     r0
	addi     r1, r1, 0x130
	blr
	*/
}

/*
 * --INFO--
 * Address:	802AB4A0
 * Size:	000070
 */
TubeShadowSetNode::~TubeShadowSetNode()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802AB4F4
	lis      r4, __vt__Q24Game17TubeShadowSetNode@ha
	addi     r0, r4, __vt__Q24Game17TubeShadowSetNode@l
	stw      r0, 0(r30)
	beq      lbl_802AB4E4
	lis      r5, __vt__Q24Game15JointShadowNode@ha
	li       r4, 0
	addi     r0, r5, __vt__Q24Game15JointShadowNode@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_802AB4E4:
	extsh.   r0, r31
	ble      lbl_802AB4F4
	mr       r3, r30
	bl       __dl__FPv

lbl_802AB4F4:
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
 * Address:	802AB510
 * Size:	000070
 */
TubeShadowTransNode::~TubeShadowTransNode()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802AB564
	lis      r4, __vt__Q24Game19TubeShadowTransNode@ha
	addi     r0, r4, __vt__Q24Game19TubeShadowTransNode@l
	stw      r0, 0(r30)
	beq      lbl_802AB554
	lis      r5, __vt__Q24Game15JointShadowNode@ha
	li       r4, 0
	addi     r0, r5, __vt__Q24Game15JointShadowNode@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_802AB554:
	extsh.   r0, r31
	ble      lbl_802AB564
	mr       r3, r30
	bl       __dl__FPv

lbl_802AB564:
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
 * Address:	802AB580
 * Size:	000070
 */
SphereShadowNode::~SphereShadowNode()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802AB5D4
	lis      r4, __vt__Q24Game16SphereShadowNode@ha
	addi     r0, r4, __vt__Q24Game16SphereShadowNode@l
	stw      r0, 0(r30)
	beq      lbl_802AB5C4
	lis      r5, __vt__Q24Game15JointShadowNode@ha
	li       r4, 0
	addi     r0, r5, __vt__Q24Game15JointShadowNode@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_802AB5C4:
	extsh.   r0, r31
	ble      lbl_802AB5D4
	mr       r3, r30
	bl       __dl__FPv

lbl_802AB5D4:
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

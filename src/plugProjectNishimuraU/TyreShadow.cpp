#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048DCA8
    lbl_8048DCA8:
        .4byte 0x74797265
        .4byte 0x66726F6E
        .4byte 0x74000000
    .global lbl_8048DCB4
    lbl_8048DCB4:
        .4byte 0x74797265
        .4byte 0x6261636B
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q24Game18TyreTubeShadowNode
    __vt__Q24Game18TyreTubeShadowNode:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game18TyreTubeShadowNodeFv
        .4byte getChildCount__5CNodeFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051D4E8
    lbl_8051D4E8:
        .4byte 0x00000000
    .global lbl_8051D4EC
    lbl_8051D4EC:
        .float 1.0
    .global lbl_8051D4F0
    lbl_8051D4F0:
        .4byte 0x41200000
    .global lbl_8051D4F4
    lbl_8051D4F4:
        .4byte 0x40A00000
    .global lbl_8051D4F8
    lbl_8051D4F8:
        .4byte 0x41FC0000
    .global lbl_8051D4FC
    lbl_8051D4FC:
        .4byte 0x418C0000
    .global lbl_8051D500
    lbl_8051D500:
        .4byte 0xC18C0000
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	803019EC
 * Size:	00025C
 */
void TyreTubeShadowNode::makeShadowSRT(Game::JointShadowParm&, Matrixf*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lfs      f0, lbl_8051D4E8@sda21(r2)
	stw      r0, 0x44(r1)
	addi     r0, r1, 0x2c
	stw      r31, 0x3c(r1)
	mr       r31, r3
	lfs      f6, 0x10(r5)
	lfs      f7, 0x20(r5)
	fmuls    f2, f6, f6
	lfs      f5, 0(r5)
	lfs      f1, 0xc(r5)
	fmuls    f3, f7, f7
	stfs     f1, 0x2c(r1)
	fmadds   f1, f5, f5, f2
	lfs      f2, 0x1c(r5)
	stfs     f2, 0x30(r1)
	fadds    f2, f3, f1
	lfs      f1, 0x2c(r5)
	fcmpo    cr0, f2, f0
	stfs     f1, 0x34(r1)
	ble      lbl_80301A54
	ble      lbl_80301A58
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_80301A58

lbl_80301A54:
	fmr      f2, f0

lbl_80301A58:
	lfs      f0, lbl_8051D4E8@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_80301A78
	lfs      f0, lbl_8051D4EC@sda21(r2)
	fdivs    f0, f0, f2
	fmuls    f5, f5, f0
	fmuls    f6, f6, f0
	fmuls    f7, f7, f0

lbl_80301A78:
	lfs      f0, 0x18(r4)
	lfs      f1, lbl_8051D4E8@sda21(r2)
	fmuls    f3, f5, f0
	fmuls    f2, f6, f0
	fmuls    f0, f7, f0
	stfs     f3, 8(r1)
	stfs     f2, 0xc(r1)
	stfs     f0, 0x10(r1)
	lfs      f9, 0x10(r4)
	lfs      f2, 0x14(r4)
	fmuls    f0, f7, f9
	lfs      f8, 0xc(r4)
	fmuls    f3, f5, f2
	fmuls    f4, f6, f8
	fmsubs   f2, f6, f2, f0
	fmsubs   f3, f7, f8, f3
	fmsubs   f4, f5, f9, f4
	fmuls    f0, f2, f2
	stfs     f2, 0x20(r1)
	fmuls    f5, f3, f3
	fmuls    f6, f4, f4
	stfs     f3, 0x24(r1)
	fadds    f0, f0, f5
	stfs     f4, 0x28(r1)
	fadds    f0, f6, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80301B00
	fmadds   f0, f2, f2, f5
	fadds    f3, f6, f0
	fcmpo    cr0, f3, f1
	ble      lbl_80301B04
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_80301B04

lbl_80301B00:
	fmr      f3, f1

lbl_80301B04:
	lfs      f0, lbl_8051D4E8@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_80301B3C
	lfs      f0, lbl_8051D4EC@sda21(r2)
	lfs      f2, 0x20(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)

lbl_80301B3C:
	lfs      f2, 0x20(r1)
	lfs      f5, 0x1c(r4)
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	fmuls    f4, f2, f5
	fmuls    f3, f1, f5
	lfs      f2, 0x30(r1)
	fmuls    f1, f0, f5
	lfs      f0, lbl_8051D4E8@sda21(r2)
	stfs     f4, 0x20(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f3, 0x24(r1)
	stfs     f1, 0x28(r1)
	lfs      f1, 0x24(r4)
	mr       r4, r0
	fadds    f1, f2, f1
	stfs     f0, 0x14(r1)
	stfs     f0, 0x1c(r1)
	stfs     f1, 0x30(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x30(r1)
	lfs      f0, lbl_8051D4E8@sda21(r2)
	fsubs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80301BB8
	lfs      f0, lbl_8051D4F0@sda21(r2)
	stfs     f0, 0x18(r1)
	b        lbl_80301BC4

lbl_80301BB8:
	lfs      f0, lbl_8051D4F4@sda21(r2)
	fmuls    f0, f0, f1
	stfs     f0, 0x18(r1)

lbl_80301BC4:
	lwz      r3, 0x1c(r31)
	lfs      f0, 8(r1)
	stfs     f0, 0(r3)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x10(r3)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x20(r3)
	lwz      r3, 0x1c(r31)
	lfs      f0, 0x14(r1)
	stfs     f0, 4(r3)
	lfs      f0, 0x18(r1)
	stfs     f0, 0x14(r3)
	lfs      f0, 0x1c(r1)
	stfs     f0, 0x24(r3)
	lwz      r3, 0x1c(r31)
	lfs      f0, 0x20(r1)
	stfs     f0, 8(r3)
	lfs      f0, 0x24(r1)
	stfs     f0, 0x18(r3)
	lfs      f0, 0x28(r1)
	stfs     f0, 0x28(r3)
	lwz      r3, 0x1c(r31)
	lfs      f0, 0x2c(r1)
	stfs     f0, 0xc(r3)
	lfs      f0, 0x30(r1)
	stfs     f0, 0x1c(r3)
	lfs      f0, 0x34(r1)
	stfs     f0, 0x2c(r3)
	lwz      r31, 0x3c(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80301C48
 * Size:	0000E4
 */
Tyre::TyreShadowMgr::TyreShadowMgr(Game::Tyre::Obj*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051D4EC@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	stw      r31, 0xc(r3)
	li       r3, 0x20
	stfs     f0, 0(r30)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80301C8C
	mr       r4, r31
	bl       __ct__Q24Game19JointShadowRootNodeFPQ24Game8Creature
	mr       r0, r3

lbl_80301C8C:
	stw      r0, 0x10(r30)
	li       r3, 0x24
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80301CB4
	li       r4, 2
	bl       __ct__Q24Game15JointShadowNodeFi
	lis      r3, __vt__Q24Game18TyreTubeShadowNode@ha
	addi     r0, r3, __vt__Q24Game18TyreTubeShadowNode@l
	stw      r0, 0(r31)

lbl_80301CB4:
	stw      r31, 0x14(r30)
	li       r0, 2
	lwz      r3, 0x14(r30)
	stw      r0, 0x18(r3)
	lwz      r3, 0x10(r30)
	lwz      r4, 0x14(r30)
	bl       add__5CNodeFP5CNode
	li       r3, 0x24
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80301CF4
	li       r4, 2
	bl       __ct__Q24Game15JointShadowNodeFi
	lis      r3, __vt__Q24Game18TyreTubeShadowNode@ha
	addi     r0, r3, __vt__Q24Game18TyreTubeShadowNode@l
	stw      r0, 0(r31)

lbl_80301CF4:
	stw      r31, 0x18(r30)
	li       r0, 2
	lwz      r3, 0x18(r30)
	stw      r0, 0x18(r3)
	lwz      r3, 0x10(r30)
	lwz      r4, 0x18(r30)
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
 * Address:	80301D2C
 * Size:	000068
 */
void Tyre::TyreShadowMgr::init()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lis      r3, lbl_8048DCA8@ha
	lwz      r5, 0xc(r30)
	addi     r4, r3, lbl_8048DCA8@l
	lwz      r31, 0x174(r5)
	mr       r3, r31
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r4, lbl_8048DCB4@ha
	stw      r3, 4(r30)
	addi     r4, r4, lbl_8048DCB4@l
	mr       r3, r31
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	stw      r3, 8(r30)
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
 * Address:	80301D94
 * Size:	0000B4
 */
void Tyre::TyreShadowMgr::update()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r3
	addi     r3, r1, 8
	lwz      r4, 0xc(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f4, lbl_8051D4E8@sda21(r2)
	addi     r4, r1, 0x14
	lfs      f2, 8(r1)
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	lfs      f3, lbl_8051D4EC@sda21(r2)
	stfs     f2, 0x14(r1)
	lfs      f2, lbl_8051D4F8@sda21(r2)
	stfs     f1, 0x18(r1)
	lfs      f1, lbl_8051D4FC@sda21(r2)
	stfs     f0, 0x1c(r1)
	lfs      f0, lbl_8051D500@sda21(r2)
	stfs     f4, 0x20(r1)
	stfs     f3, 0x24(r1)
	stfs     f4, 0x28(r1)
	lfs      f3, 0(r31)
	fmuls    f2, f2, f3
	stfs     f4, 0x34(r1)
	fmuls    f1, f1, f3
	stfs     f0, 0x38(r1)
	stfs     f2, 0x2c(r1)
	stfs     f1, 0x30(r1)
	lwz      r3, 0x14(r31)
	lwz      r5, 4(r31)
	bl
	makeShadowSRT__Q24Game18TyreTubeShadowNodeFRQ24Game15JointShadowParmP7Matrixf
	lwz      r3, 0x18(r31)
	addi     r4, r1, 0x14
	lwz      r5, 8(r31)
	bl
	makeShadowSRT__Q24Game18TyreTubeShadowNodeFRQ24Game15JointShadowParmP7Matrixf
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	80301E48
 * Size:	000070
 */
TyreTubeShadowNode::~TyreTubeShadowNode()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80301E9C
	lis      r4, __vt__Q24Game18TyreTubeShadowNode@ha
	addi     r0, r4, __vt__Q24Game18TyreTubeShadowNode@l
	stw      r0, 0(r30)
	beq      lbl_80301E8C
	lis      r5, __vt__Q24Game15JointShadowNode@ha
	li       r4, 0
	addi     r0, r5, __vt__Q24Game15JointShadowNode@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_80301E8C:
	extsh.   r0, r31
	ble      lbl_80301E9C
	mr       r3, r30
	bl       __dl__FPv

lbl_80301E9C:
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

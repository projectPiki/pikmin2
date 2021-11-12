#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game5Queen15QueenShadowNode
    __vt__Q34Game5Queen15QueenShadowNode:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game5Queen15QueenShadowNodeFv
        .4byte getChildCount__5CNodeFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051B948
    lbl_8051B948:
        .4byte 0x00000000
    .global lbl_8051B94C
    lbl_8051B94C:
        .4byte 0x40400000
    .global lbl_8051B950
    lbl_8051B950:
        .4byte 0x3FC00000
    .global lbl_8051B954
    lbl_8051B954:
        .4byte 0x42AA0000
    .global lbl_8051B958
    lbl_8051B958:
        .4byte 0x428C0000
    .global lbl_8051B95C
    lbl_8051B95C:
        .4byte 0xBE99999A
    .global lbl_8051B960
    lbl_8051B960:
        .4byte 0x6E65636B
        .4byte 0x31000000
    .global lbl_8051B968
    lbl_8051B968:
        .4byte 0x42940000
    .global lbl_8051B96C
    lbl_8051B96C:
        .4byte 0x426C0000
    .global lbl_8051B970
    lbl_8051B970:
        .4byte 0xC02CCCCD
    .global lbl_8051B974
    lbl_8051B974:
        .4byte 0x6E65636B
        .4byte 0x33000000
    .global lbl_8051B97C
    lbl_8051B97C:
        .4byte 0x42500000
    .global lbl_8051B980
    lbl_8051B980:
        .4byte 0x42140000
    .global lbl_8051B984
    lbl_8051B984:
        .4byte 0xC19F3333
    .global lbl_8051B988
    lbl_8051B988:
        .4byte 0x6E65636B
        .4byte 0x35000000
    .global lbl_8051B990
    lbl_8051B990:
        .4byte 0x41B00000
    .global lbl_8051B994
    lbl_8051B994:
        .4byte 0x68656164
        .4byte 0x00000000
    .global lbl_8051B99C
    lbl_8051B99C:
        .4byte 0x429C0000
    .global lbl_8051B9A0
    lbl_8051B9A0:
        .4byte 0x427C0000
    .global lbl_8051B9A4
    lbl_8051B9A4:
        .4byte 0x3FF33333
    .global lbl_8051B9A8
    lbl_8051B9A8:
        .4byte 0x626F6479
        .4byte 0x33000000
    .global lbl_8051B9B0
    lbl_8051B9B0:
        .4byte 0x42800000
    .global lbl_8051B9B4
    lbl_8051B9B4:
        .4byte 0x42440000
    .global lbl_8051B9B8
    lbl_8051B9B8:
        .4byte 0x419CCCCD
    .global lbl_8051B9BC
    lbl_8051B9BC:
        .4byte 0x626F6479
        .4byte 0x34000000
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	8028EB68
 * Size:	0001AC
 */
void Queen::QueenShadowNode::makeShadowSRT()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	mr       r30, r3
	lwz      r31, 0x1c(r3)
	lwz      r3, 0x24(r3)
	bl       getWorldMatrix__Q28SysShape5JointFv
	mr       r5, r31
	addi     r4, r30, 0x28
	bl       PSMTXConcat
	lwz      r3, 0x1c(r30)
	addi     r4, r1, 0x2c
	lfs      f1, lbl_8051B948@sda21(r2)
	lfs      f0, 0(r3)
	stfs     f0, 8(r1)
	lfs      f0, 0x10(r3)
	stfs     f0, 0xc(r1)
	lfs      f0, 0x20(r3)
	stfs     f0, 0x10(r1)
	lfs      f0, 4(r3)
	stfs     f0, 0x14(r1)
	lfs      f0, 0x14(r3)
	stfs     f0, 0x18(r1)
	lfs      f0, 0x24(r3)
	stfs     f0, 0x1c(r1)
	lfs      f3, 8(r3)
	stfs     f3, 0x20(r1)
	fmuls    f0, f3, f3
	lfs      f2, 0x18(r3)
	stfs     f2, 0x24(r1)
	fmuls    f4, f2, f2
	lfs      f2, 0x28(r3)
	fadds    f0, f0, f4
	stfs     f2, 0x28(r1)
	fmuls    f5, f2, f2
	lfs      f2, 0xc(r3)
	fadds    f0, f5, f0
	stfs     f2, 0x2c(r1)
	lfs      f2, 0x1c(r3)
	fcmpo    cr0, f0, f1
	stfs     f2, 0x30(r1)
	lfs      f0, 0x2c(r3)
	stfs     f0, 0x34(r1)
	ble      lbl_8028EC3C
	fmadds   f0, f3, f3, f4
	fadds    f2, f5, f0
	fcmpo    cr0, f2, f1
	ble      lbl_8028EC40
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_8028EC40

lbl_8028EC3C:
	fmr      f2, f1

lbl_8028EC40:
	lfs      f1, lbl_8051B948@sda21(r2)
	lfs      f0, lbl_8051B94C@sda21(r2)
	stfs     f2, 8(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f1, 0xc(r1)
	stfs     f1, 0x10(r1)
	stfs     f1, 0x14(r1)
	stfs     f0, 0x18(r1)
	stfs     f1, 0x1c(r1)
	stfs     f1, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f2, 0x28(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lfs      f2, lbl_8051B950@sda21(r2)
	lfs      f0, 8(r1)
	fadds    f1, f2, f1
	stfs     f1, 0x30(r1)
	lwz      r3, 0x1c(r30)
	stfs     f0, 0(r3)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x10(r3)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x20(r3)
	lwz      r3, 0x1c(r30)
	lfs      f0, 0x14(r1)
	stfs     f0, 4(r3)
	lfs      f0, 0x18(r1)
	stfs     f0, 0x14(r3)
	lfs      f0, 0x1c(r1)
	stfs     f0, 0x24(r3)
	lwz      r3, 0x1c(r30)
	lfs      f0, 0x20(r1)
	stfs     f0, 8(r3)
	lfs      f0, 0x24(r1)
	stfs     f0, 0x18(r3)
	lfs      f0, 0x28(r1)
	stfs     f0, 0x28(r3)
	lwz      r3, 0x1c(r30)
	lfs      f0, 0x2c(r1)
	stfs     f0, 0xc(r3)
	lfs      f0, 0x30(r1)
	stfs     f0, 0x1c(r3)
	lfs      f0, 0x34(r1)
	stfs     f0, 0x2c(r3)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8028ED14
 * Size:	0000B4
 */
Queen::QueenShadowMgr::QueenShadowMgr(Game::Queen::Obj*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r28, r4
	mr       r27, r3
	stw      r28, 0(r3)
	li       r3, 0x20
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8028ED4C
	mr       r4, r28
	bl       __ct__Q24Game19JointShadowRootNodeFPQ24Game8Creature
	mr       r0, r3

lbl_8028ED4C:
	stw      r0, 4(r27)
	li       r3, 0x18
	bl       __nwa__FUl
	lis      r4, __vt__Q34Game5Queen15QueenShadowNode@ha
	stw      r3, 8(r27)
	addi     r31, r4, __vt__Q34Game5Queen15QueenShadowNode@l
	li       r28, 0
	li       r29, 0

lbl_8028ED6C:
	li       r3, 0x58
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8028ED88
	li       r4, 2
	bl       __ct__Q24Game15JointShadowNodeFi
	stw      r31, 0(r30)

lbl_8028ED88:
	lwz      r3, 8(r27)
	stwx     r30, r3, r29
	lwz      r4, 8(r27)
	lwz      r3, 4(r27)
	lwzx     r4, r4, r29
	bl       add__5CNodeFP5CNode
	addi     r28, r28, 1
	addi     r29, r29, 4
	cmpwi    r28, 6
	blt      lbl_8028ED6C
	mr       r3, r27
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8028EDC8
 * Size:	0002A4
 */
void Queen::QueenShadowMgr::init()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lfs      f2, lbl_8051B948@sda21(r2)
	addi     r4, r2, lbl_8051B960@sda21
	stw      r0, 0x44(r1)
	lfs      f3, lbl_8051B954@sda21(r2)
	stw      r31, 0x3c(r1)
	mr       r31, r3
	lfs      f1, lbl_8051B958@sda21(r2)
	lfs      f0, lbl_8051B95C@sda21(r2)
	stfs     f3, 8(r1)
	stfs     f2, 0x18(r1)
	stfs     f2, 0x28(r1)
	stfs     f2, 0xc(r1)
	stfs     f1, 0x1c(r1)
	stfs     f2, 0x2c(r1)
	stfs     f2, 0x10(r1)
	stfs     f2, 0x20(r1)
	stfs     f3, 0x30(r1)
	stfs     f2, 0x14(r1)
	stfs     f0, 0x24(r1)
	stfs     f2, 0x34(r1)
	lwz      r3, 0(r3)
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	lwz      r4, 8(r31)
	lwz      r4, 0(r4)
	stw      r3, 0x24(r4)
	addi     r3, r1, 8
	addi     r4, r4, 0x28
	bl       PSMTXCopy
	lfs      f3, lbl_8051B948@sda21(r2)
	addi     r4, r2, lbl_8051B974@sda21
	lfs      f4, lbl_8051B968@sda21(r2)
	lfs      f2, lbl_8051B96C@sda21(r2)
	lfs      f1, lbl_8051B970@sda21(r2)
	lfs      f0, lbl_8051B95C@sda21(r2)
	stfs     f4, 8(r1)
	stfs     f3, 0x18(r1)
	stfs     f3, 0x28(r1)
	stfs     f3, 0xc(r1)
	stfs     f2, 0x1c(r1)
	stfs     f3, 0x2c(r1)
	stfs     f3, 0x10(r1)
	stfs     f3, 0x20(r1)
	stfs     f4, 0x30(r1)
	stfs     f1, 0x14(r1)
	stfs     f0, 0x24(r1)
	stfs     f3, 0x34(r1)
	lwz      r3, 0(r31)
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	lwz      r4, 8(r31)
	lwz      r4, 4(r4)
	stw      r3, 0x24(r4)
	addi     r3, r1, 8
	addi     r4, r4, 0x28
	bl       PSMTXCopy
	lfs      f3, lbl_8051B948@sda21(r2)
	addi     r4, r2, lbl_8051B988@sda21
	lfs      f4, lbl_8051B97C@sda21(r2)
	lfs      f2, lbl_8051B980@sda21(r2)
	lfs      f1, lbl_8051B984@sda21(r2)
	lfs      f0, lbl_8051B95C@sda21(r2)
	stfs     f4, 8(r1)
	stfs     f3, 0x18(r1)
	stfs     f3, 0x28(r1)
	stfs     f3, 0xc(r1)
	stfs     f2, 0x1c(r1)
	stfs     f3, 0x2c(r1)
	stfs     f3, 0x10(r1)
	stfs     f3, 0x20(r1)
	stfs     f4, 0x30(r1)
	stfs     f1, 0x14(r1)
	stfs     f0, 0x24(r1)
	stfs     f3, 0x34(r1)
	lwz      r3, 0(r31)
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	lwz      r4, 8(r31)
	lwz      r4, 8(r4)
	stw      r3, 0x24(r4)
	addi     r3, r1, 8
	addi     r4, r4, 0x28
	bl       PSMTXCopy
	lfs      f1, lbl_8051B948@sda21(r2)
	addi     r4, r2, lbl_8051B994@sda21
	lfs      f2, lbl_8051B990@sda21(r2)
	lfs      f0, lbl_8051B95C@sda21(r2)
	stfs     f2, 8(r1)
	stfs     f1, 0x18(r1)
	stfs     f1, 0x28(r1)
	stfs     f1, 0xc(r1)
	stfs     f2, 0x1c(r1)
	stfs     f1, 0x2c(r1)
	stfs     f1, 0x10(r1)
	stfs     f1, 0x20(r1)
	stfs     f2, 0x30(r1)
	stfs     f1, 0x14(r1)
	stfs     f0, 0x24(r1)
	stfs     f1, 0x34(r1)
	lwz      r3, 0(r31)
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	lwz      r4, 8(r31)
	lwz      r4, 0xc(r4)
	stw      r3, 0x24(r4)
	addi     r3, r1, 8
	addi     r4, r4, 0x28
	bl       PSMTXCopy
	lfs      f3, lbl_8051B948@sda21(r2)
	addi     r4, r2, lbl_8051B9A8@sda21
	lfs      f4, lbl_8051B99C@sda21(r2)
	lfs      f2, lbl_8051B9A0@sda21(r2)
	lfs      f1, lbl_8051B9A4@sda21(r2)
	lfs      f0, lbl_8051B95C@sda21(r2)
	stfs     f4, 8(r1)
	stfs     f3, 0x18(r1)
	stfs     f3, 0x28(r1)
	stfs     f3, 0xc(r1)
	stfs     f2, 0x1c(r1)
	stfs     f3, 0x2c(r1)
	stfs     f3, 0x10(r1)
	stfs     f3, 0x20(r1)
	stfs     f4, 0x30(r1)
	stfs     f1, 0x14(r1)
	stfs     f0, 0x24(r1)
	stfs     f3, 0x34(r1)
	lwz      r3, 0(r31)
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	lwz      r4, 8(r31)
	lwz      r4, 0x10(r4)
	stw      r3, 0x24(r4)
	addi     r3, r1, 8
	addi     r4, r4, 0x28
	bl       PSMTXCopy
	lfs      f3, lbl_8051B948@sda21(r2)
	addi     r4, r2, lbl_8051B9BC@sda21
	lfs      f4, lbl_8051B9B0@sda21(r2)
	lfs      f2, lbl_8051B9B4@sda21(r2)
	lfs      f1, lbl_8051B9B8@sda21(r2)
	lfs      f0, lbl_8051B95C@sda21(r2)
	stfs     f4, 8(r1)
	stfs     f3, 0x18(r1)
	stfs     f3, 0x28(r1)
	stfs     f3, 0xc(r1)
	stfs     f2, 0x1c(r1)
	stfs     f3, 0x2c(r1)
	stfs     f3, 0x10(r1)
	stfs     f3, 0x20(r1)
	stfs     f4, 0x30(r1)
	stfs     f1, 0x14(r1)
	stfs     f0, 0x24(r1)
	stfs     f3, 0x34(r1)
	lwz      r3, 0(r31)
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	lwz      r4, 8(r31)
	lwz      r4, 0x14(r4)
	stw      r3, 0x24(r4)
	addi     r3, r1, 8
	addi     r4, r4, 0x28
	bl       PSMTXCopy
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8028F06C
 * Size:	00005C
 */
void Queen::QueenShadowMgr::update()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3

lbl_8028F090:
	lwz      r3, 8(r29)
	lwzx     r3, r3, r31
	bl       makeShadowSRT__Q34Game5Queen15QueenShadowNodeFv
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 6
	blt      lbl_8028F090
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
 * Address:	8028F0C8
 * Size:	000070
 */
Queen::QueenShadowNode::~QueenShadowNode()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8028F11C
	lis      r4, __vt__Q34Game5Queen15QueenShadowNode@ha
	addi     r0, r4, __vt__Q34Game5Queen15QueenShadowNode@l
	stw      r0, 0(r30)
	beq      lbl_8028F10C
	lis      r5, __vt__Q24Game15JointShadowNode@ha
	li       r4, 0
	addi     r0, r5, __vt__Q24Game15JointShadowNode@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_8028F10C:
	extsh.   r0, r31
	ble      lbl_8028F11C
	mr       r3, r30
	bl       __dl__FPv

lbl_8028F11C:
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

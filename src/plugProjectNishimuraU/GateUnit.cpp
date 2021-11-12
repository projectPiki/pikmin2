#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game4Cave8GateNode
    __vt__Q34Game4Cave8GateNode:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game4Cave8GateNodeFv
        .4byte getChildCount__5CNodeFv
        .4byte getObjectId__Q34Game4Cave8GateNodeFv
        .4byte getObjectType__Q34Game4Cave8GateNodeFv
        .4byte getBirthCount__Q34Game4Cave8GateNodeFv
        .4byte getDirection__Q34Game4Cave8GateNodeFv
        .4byte getBirthDoorIndex__Q34Game4Cave8GateNodeFv
        .4byte getBirthPosition__Q24Game16ObjectLayoutNodeFRfRf
        .4byte getExtraCode__Q24Game16ObjectLayoutNodeFv
        .4byte isFixedBattery__Q24Game16ObjectLayoutNodeFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A868
    lbl_8051A868:
        .4byte 0x00000000
    .global lbl_8051A86C
    lbl_8051A86C:
        .4byte 0xBFC90FDB
    .global lbl_8051A870
    lbl_8051A870:
        .4byte 0x43300000
        .4byte 0x80000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	8024FCC8
 * Size:	00005C
 */
Cave::GateNode::GateNode()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q24Game16ObjectLayoutNode@ha
	lis      r3, __vt__Q34Game4Cave8GateNode@ha
	addi     r4, r4, __vt__Q24Game16ObjectLayoutNode@l
	li       r0, 0
	stw      r4, 0(r31)
	addi     r4, r3, __vt__Q34Game4Cave8GateNode@l
	lfs      f0, lbl_8051A868@sda21(r2)
	mr       r3, r31
	stw      r4, 0(r31)
	stw      r0, 0x18(r31)
	stw      r0, 0x20(r31)
	stfs     f0, 0x1c(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024FD24
 * Size:	00009C
 */
Cave::GateNode::GateNode(Game::Cave::GateUnit*, int, int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r6
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	bl       __ct__5CNodeFv
	xoris    r3, r31, 0x8000
	lis      r0, 0x4330
	lis      r4, __vt__Q24Game16ObjectLayoutNode@ha
	stw      r3, 0xc(r1)
	addi     r4, r4, __vt__Q24Game16ObjectLayoutNode@l
	lis      r3, __vt__Q34Game4Cave8GateNode@ha
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q34Game4Cave8GateNode@l
	lfd      f1, lbl_8051A870@sda21(r2)
	mr       r3, r28
	stw      r4, 0(r28)
	lfd      f0, 8(r1)
	stw      r0, 0(r28)
	fsubs    f0, f0, f1
	lfs      f1, lbl_8051A86C@sda21(r2)
	stw      r29, 0x18(r28)
	fmuls    f0, f1, f0
	stw      r30, 0x20(r28)
	stfs     f0, 0x1c(r28)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024FDC0
 * Size:	000020
 */
void Cave::GateNode::getObjectId()
{
	/*
	lwz      r3, 0x18(r3)
	lwz      r3, 0(r3)
	cmplwi   r3, 0
	beq      lbl_8024FDD8
	lwz      r3, 0x18(r3)
	blr

lbl_8024FDD8:
	li       r3, -1
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024FDE0
 * Size:	000008
 */
u32 Cave::GateNode::getObjectType() { return 0x2; }

/*
 * --INFO--
 * Address:	8024FDE8
 * Size:	000008
 */
u32 Cave::GateNode::getBirthCount() { return 0x1; }

/*
 * --INFO--
 * Address:	8024FDF0
 * Size:	000008
 */
void Cave::GateNode::getDirection()
{
	/*
	lfs      f1, 0x1c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024FDF8
 * Size:	000008
 */
void Cave::GateNode::getBirthDoorIndex()
{
	/*
	lwz      r3, 0x20(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024FE00
 * Size:	000070
 */
Cave::GateNode::~GateNode()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8024FE54
	lis      r4, __vt__Q34Game4Cave8GateNode@ha
	addi     r0, r4, __vt__Q34Game4Cave8GateNode@l
	stw      r0, 0(r30)
	beq      lbl_8024FE44
	lis      r5, __vt__Q24Game16ObjectLayoutNode@ha
	li       r4, 0
	addi     r0, r5, __vt__Q24Game16ObjectLayoutNode@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_8024FE44:
	extsh.   r0, r31
	ble      lbl_8024FE54
	mr       r3, r30
	bl       __dl__FPv

lbl_8024FE54:
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

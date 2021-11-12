#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game4Cave8ItemNode
    __vt__Q34Game4Cave8ItemNode:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game4Cave8ItemNodeFv
        .4byte getChildCount__5CNodeFv
        .4byte getObjectId__Q34Game4Cave8ItemNodeFv
        .4byte getObjectType__Q34Game4Cave8ItemNodeFv
        .4byte getBirthCount__Q34Game4Cave8ItemNodeFv
        .4byte getDirection__Q34Game4Cave8ItemNodeFv
        .4byte getBirthDoorIndex__Q24Game16ObjectLayoutNodeFv
        .4byte getBirthPosition__Q34Game4Cave8ItemNodeFRfRf
        .4byte getExtraCode__Q24Game16ObjectLayoutNodeFv
        .4byte isFixedBattery__Q24Game16ObjectLayoutNodeFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A838
    lbl_8051A838:
        .4byte 0x00000000
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	8024E170
 * Size:	00006C
 */
Cave::ItemNode::ItemNode(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q24Game16ObjectLayoutNode@ha
	lis      r3, __vt__Q34Game4Cave8ItemNode@ha
	addi     r4, r4, __vt__Q24Game16ObjectLayoutNode@l
	li       r0, 0
	stw      r4, 0(r31)
	addi     r4, r3, __vt__Q34Game4Cave8ItemNode@l
	lfs      f0, lbl_8051A838@sda21(r2)
	mr       r3, r31
	stw      r4, 0(r31)
	stw      r0, 0x18(r31)
	stw      r0, 0x1c(r31)
	stw      r0, 0x20(r31)
	stfs     f0, 0x24(r31)
	stfs     f0, 0x30(r31)
	stfs     f0, 0x2c(r31)
	stfs     f0, 0x28(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024E1DC
 * Size:	00008C
 */
Cave::ItemNode::ItemNode(Game::Cave::ItemUnit*, Game::Cave::BaseGen*, int)
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
	lis      r4, __vt__Q24Game16ObjectLayoutNode@ha
	lis      r3, __vt__Q34Game4Cave8ItemNode@ha
	addi     r0, r4, __vt__Q24Game16ObjectLayoutNode@l
	lfs      f0, lbl_8051A838@sda21(r2)
	stw      r0, 0(r28)
	addi     r0, r3, __vt__Q34Game4Cave8ItemNode@l
	mr       r3, r28
	stw      r0, 0(r28)
	stw      r29, 0x18(r28)
	stw      r30, 0x1c(r28)
	stw      r31, 0x20(r28)
	stfs     f0, 0x24(r28)
	stfs     f0, 0x30(r28)
	stfs     f0, 0x2c(r28)
	stfs     f0, 0x28(r28)
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
 * Address:	8024E268
 * Size:	000068
 */
void Cave::ItemNode::makeGlobalData(Game::Cave::MapNode*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	lwz      r5, 0x1c(r3)
	addi     r3, r1, 8
	bl getBaseGenGlobalPosition__Q34Game4Cave7MapNodeFPQ34Game4Cave7BaseGen lfs
	f0, 8(r1) mr       r3, r31 stfs     f0, 0x28(r30) lfs      f0, 0xc(r1) stfs
	f0, 0x2c(r30) lfs      f0, 0x10(r1) stfs     f0, 0x30(r30) lwz      r4,
	0x1c(r30) bl
	getBaseGenGlobalDirection__Q34Game4Cave7MapNodeFPQ34Game4Cave7BaseGen stfs
	f1, 0x24(r30) lwz      r0, 0x24(r1) lwz      r31, 0x1c(r1) lwz      r30,
	0x18(r1) mtlr     r0 addi     r1, r1, 0x20 blr
	*/
}

/*
 * --INFO--
 * Address:	8024E2D0
 * Size:	000020
 */
void Cave::ItemNode::getObjectId(void)
{
	/*
	lwz      r3, 0x18(r3)
	lwz      r3, 0(r3)
	cmplwi   r3, 0
	beq      lbl_8024E2E8
	lwz      r3, 0x18(r3)
	blr

lbl_8024E2E8:
	li       r3, -1
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024E2F0
 * Size:	000008
 */
u32 Cave::ItemNode::getObjectType(void) { return 0x1; }

/*
 * --INFO--
 * Address:	8024E2F8
 * Size:	000008
 */
void Cave::ItemNode::getBirthCount(void)
{
	/*
	lwz      r3, 0x20(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024E300
 * Size:	000014
 */
void Cave::ItemNode::getBirthPosition(float&, float&)
{
	/*
	lfs      f0, 0x28(r3)
	stfs     f0, 0(r4)
	lfs      f0, 0x30(r3)
	stfs     f0, 0(r5)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024E314
 * Size:	000008
 */
void Cave::ItemNode::getDirection(void)
{
	/*
	lfs      f1, 0x24(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024E31C
 * Size:	000070
 */
Cave::ItemNode::~ItemNode(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8024E370
	lis      r4, __vt__Q34Game4Cave8ItemNode@ha
	addi     r0, r4, __vt__Q34Game4Cave8ItemNode@l
	stw      r0, 0(r30)
	beq      lbl_8024E360
	lis      r5, __vt__Q24Game16ObjectLayoutNode@ha
	li       r4, 0
	addi     r0, r5, __vt__Q24Game16ObjectLayoutNode@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_8024E360:
	extsh.   r0, r31
	ble      lbl_8024E370
	mr       r3, r30
	bl       __dl__FPv

lbl_8024E370:
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

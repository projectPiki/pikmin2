#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game4Cave8DoorNode
    __vt__Q34Game4Cave8DoorNode:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game4Cave8DoorNodeFv
        .4byte getChildCount__5CNodeFv
*/

namespace Game {

/*
 * --INFO--
 * Address:	8024B874
 * Size:	000014
 */
Cave::Adjust::Adjust(void)
{
	/*
	li       r0, -1
	stw      r0, 0(r3)
	stw      r0, 4(r3)
	stw      r0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024B888
 * Size:	000044
 */
Cave::AdjustNode::AdjustNode(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q34Game4Cave10AdjustNode@ha
	li       r0, 0
	addi     r4, r3, __vt__Q34Game4Cave10AdjustNode@l
	mr       r3, r31
	stw      r4, 0(r31)
	stw      r0, 0x18(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024B8CC
 * Size:	00004C
 */
Cave::AdjustNode::AdjustNode(Game::Cave::Adjust*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q34Game4Cave10AdjustNode@ha
	mr       r3, r30
	addi     r0, r4, __vt__Q34Game4Cave10AdjustNode@l
	stw      r0, 0(r30)
	stw      r31, 0x18(r30)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024B918
 * Size:	000010
 */
Cave::Door::Door(void)
{
	/*
	li       r0, -1
	stw      r0, 0(r3)
	stw      r0, 4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024B928
 * Size:	000050
 */
Cave::DoorNode::DoorNode(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q34Game4Cave8DoorNode@ha
	li       r0, -1
	addi     r4, r3, __vt__Q34Game4Cave8DoorNode@l
	mr       r3, r31
	stw      r4, 0(r31)
	stw      r0, 0x18(r31)
	stw      r0, 0x1c(r31)
	stw      r0, 0x18(r31)
	stw      r0, 0x1c(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024B978
 * Size:	000064
 */
Cave::DoorNode::DoorNode(Game::Cave::Door&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q34Game4Cave8DoorNode@ha
	li       r0, -1
	addi     r4, r3, __vt__Q34Game4Cave8DoorNode@l
	mr       r3, r30
	stw      r4, 0(r30)
	stw      r0, 0x18(r30)
	stw      r0, 0x1c(r30)
	lwz      r0, 0(r31)
	stw      r0, 0x18(r30)
	lwz      r0, 4(r31)
	stw      r0, 0x1c(r30)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024B9DC
 * Size:	000070
 */
void Cave::DoorNode::isDoorAdjust(Game::Cave::DoorNode*)
{
	/*
	lwz      r0, 0x18(r3)
	lwz      r3, 0x18(r4)
	cmpwi    r0, 0
	bne      lbl_8024B9FC
	cmpwi    r3, 2
	bne      lbl_8024B9FC
	li       r3, 1
	blr

lbl_8024B9FC:
	cmpwi    r0, 2
	bne      lbl_8024BA14
	cmpwi    r3, 0
	bne      lbl_8024BA14
	li       r3, 1
	blr

lbl_8024BA14:
	cmpwi    r0, 3
	bne      lbl_8024BA2C
	cmpwi    r3, 1
	bne      lbl_8024BA2C
	li       r3, 1
	blr

lbl_8024BA2C:
	cmpwi    r0, 1
	bne      lbl_8024BA44
	cmpwi    r3, 3
	bne      lbl_8024BA44
	li       r3, 1
	blr

lbl_8024BA44:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024BA4C
 * Size:	000060
 */
Cave::DoorNode::~DoorNode(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8024BA90
	lis      r5, __vt__Q34Game4Cave8DoorNode@ha
	li       r4, 0
	addi     r0, r5, __vt__Q34Game4Cave8DoorNode@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_8024BA90
	mr       r3, r30
	bl       __dl__FPv

lbl_8024BA90:
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

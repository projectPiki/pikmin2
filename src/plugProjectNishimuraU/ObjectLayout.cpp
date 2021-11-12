#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game4Cave12ObjectLayout
    __vt__Q34Game4Cave12ObjectLayout:
        .4byte 0
        .4byte 0
        .4byte getCount__Q34Game4Cave12ObjectLayoutFi
        .4byte getNode__Q34Game4Cave12ObjectLayoutFii
    .global __vt__Q24Game16ObjectLayoutInfo
    __vt__Q24Game16ObjectLayoutInfo:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
*/

namespace Game {

/*
 * --INFO--
 * Address:	80250824
 * Size:	0000CC
 */
Cave::ObjectLayout::ObjectLayout(Game::Cave::MapNode*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, __vt__Q24Game16ObjectLayoutInfo@ha
	stw      r0, 0x14(r1)
	addi     r0, r5, __vt__Q24Game16ObjectLayoutInfo@l
	stw      r31, 0xc(r1)
	mr       r31, r3
	lis      r3, __vt__Q34Game4Cave12ObjectLayout@ha
	stw      r30, 8(r1)
	mr       r30, r4
	stw      r0, 0(r31)
	addi     r0, r3, __vt__Q34Game4Cave12ObjectLayout@l
	li       r3, 0x20
	stw      r0, 0(r31)
	bl       __nwa__FUl
	stw      r3, 4(r31)
	li       r0, 0
	cmplwi   r30, 0
	lwz      r3, 4(r31)
	stw      r0, 0(r3)
	lwz      r3, 4(r31)
	stw      r0, 4(r3)
	lwz      r3, 4(r31)
	stw      r0, 8(r3)
	lwz      r3, 4(r31)
	stw      r0, 0xc(r3)
	lwz      r3, 4(r31)
	stw      r0, 0x10(r3)
	lwz      r3, 4(r31)
	stw      r0, 0x14(r3)
	lwz      r3, 4(r31)
	stw      r0, 0x18(r3)
	lwz      r3, 4(r31)
	stw      r0, 0x1c(r3)
	beq      lbl_802508D4
	lwz      r0, 0x1c(r30)
	lwz      r3, 4(r31)
	stw      r0, 0(r3)
	lwz      r0, 0x24(r30)
	lwz      r3, 4(r31)
	stw      r0, 4(r3)
	lwz      r0, 0x20(r30)
	lwz      r3, 4(r31)
	stw      r0, 8(r3)

lbl_802508D4:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802508F0
 * Size:	000010
 */
void Cave::ObjectLayout::setNode(int, Game::ObjectLayoutNode*)
{
	/*
	lwz      r3, 4(r3)
	slwi     r0, r4, 2
	stwx     r5, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80250900
 * Size:	000048
 */
void Cave::ObjectLayout::getCount(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	slwi     r0, r4, 2
	lwz      r3, 4(r3)
	lwzx     r3, r3, r0
	cmplwi   r3, 0
	beq      lbl_80250934
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_80250938

lbl_80250934:
	li       r3, 0

lbl_80250938:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80250948
 * Size:	000040
 */
void Cave::ObjectLayout::getNode(int, int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	slwi     r0, r4, 2
	lwz      r3, 4(r3)
	lwzx     r3, r3, r0
	cmplwi   r3, 0
	beq      lbl_80250974
	mr       r4, r5
	bl       getChildAt__5CNodeFi
	b        lbl_80250978

lbl_80250974:
	li       r3, 0

lbl_80250978:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
} // namespace Game

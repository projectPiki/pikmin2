#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q24Game9PartsView
    __vt__Q24Game9PartsView:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game9PartsViewFv
        .4byte getChildCount__5CNodeFv
        .4byte constructor__Q24Game9PartsViewFv
        .4byte doAnimation__Q24Game9PartsViewFv
        .4byte doEntry__Q24Game9PartsViewFv
        .4byte doSetView__Q24Game9PartsViewFi
        .4byte doViewCalc__Q24Game9PartsViewFv
        .4byte doSimulation__Q24Game9PartsViewFf
        .4byte doDirectDraw__Q24Game9PartsViewFR8Graphics
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A3A8
    lbl_8051A3A8:
        .4byte 0x00000000
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void PartsView::getHalfX(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0002B0
 */
void PartsView::getOffset(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8023233C
 * Size:	000140
 */
PartsView::PartsView(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q24Game9PartsView@ha
	li       r0, 0
	addi     r4, r3, __vt__Q24Game9PartsView@l
	addi     r3, r31, 0x70
	stw      r4, 0(r31)
	stb      r0, 0x6e(r31)
	stb      r0, 0x6f(r31)
	bl       __ct__Q24Game14EditorRouteMgrFv
	li       r4, 0
	li       r0, -1
	stb      r4, 0xb0(r31)
	addi     r3, r31, 0x110
	sth      r0, 0xae(r31)
	sth      r0, 0xac(r31)
	stw      r4, routeMgr__Q24Game15PathfindContext@sda21(r13)
	stw      r4, 0x10c(r31)
	bl       __ct__Q24Game15AStarPathfinderFv
	addi     r30, r31, 0x118
	mr       r3, r30
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q24Game4Door@ha
	addi     r29, r30, 0x20
	addi     r0, r3, __vt__Q24Game4Door@l
	stw      r0, 0(r30)
	mr       r3, r29
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q24Game8DoorLink@ha
	lfs      f0, lbl_8051A3A8@sda21(r2)
	addi     r0, r3, __vt__Q24Game8DoorLink@l
	li       r7, 1
	stw      r0, 0(r29)
	li       r6, 0
	li       r0, 8
	addi     r3, r31, 0xac
	stfs     f0, 0x18(r29)
	addi     r4, r31, 0x70
	li       r5, 0x80
	stb      r7, 0x20(r29)
	stw      r6, 0x1c(r30)
	stw      r6, 0x44(r30)
	stw      r6, 0x48(r30)
	stw      r6, 0x18(r31)
	stw      r6, 0x1c(r31)
	stw      r0, 0x60(r31)
	stw      r0, 0x5c(r31)
	stw      r6, 0x58(r31)
	stfs     f0, 0x50(r31)
	stfs     f0, 0x54(r31)
	bl       init__Q24Game12AStarContextFPQ24Game8RouteMgri
	addi     r3, r31, 0x110
	addi     r4, r31, 0xac
	bl       setContext__Q24Game15AStarPathfinderFPQ24Game12AStarContext
	li       r3, 1
	li       r0, 0
	sth      r3, 0x6c(r31)
	li       r3, 0x38
	stb      r0, 0x6e(r31)
	stb      r0, 0x6f(r31)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80232458
	bl       __ct__Q34Game4Cave7BaseGenFv
	mr       r0, r3

lbl_80232458:
	stw      r0, 0x168(r31)
	mr       r3, r31
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
 * Address:	........
 * Size:	00015C
 */
PartsView::PartsView(Game::MapUnit*, unsigned char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8023247C
 * Size:	000004
 */
void PartsView::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	80232480
 * Size:	000074
 */
void PartsView::doAnimation(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x1c(r3)
	cmplwi   r3, 0
	beq      lbl_802324E0
	lwz      r4, 8(r3)
	addi     r3, r31, 0x20
	addi     r4, r4, 0x24
	bl       PSMTXCopy
	lwz      r3, 0x1c(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x1c(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_802324E0:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802324F4
 * Size:	000004
 */
void PartsView::doEntry(void) { }

/*
 * --INFO--
 * Address:	802324F8
 * Size:	00002C
 */
void PartsView::doSetView(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x1c(r3)
	cmplwi   r3, 0
	beq      lbl_80232514
	bl       setCurrentViewNo__Q28SysShape5ModelFUl

lbl_80232514:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80232524
 * Size:	00002C
 */
void PartsView::doViewCalc(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x1c(r3)
	cmplwi   r3, 0
	beq      lbl_80232540
	bl       viewCalc__Q28SysShape5ModelFv

lbl_80232540:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80232550
 * Size:	000158
 */
void PartsView::read(Stream&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r30, r3
	mr       r31, r4
	li       r3, 0xf0
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80232580
	bl       __ct__Q24Game7MapUnitFv
	mr       r0, r3

lbl_80232580:
	stw      r0, 0x18(r30)
	mr       r3, r31
	bl       readInt__6StreamFv
	mr       r29, r3
	mr       r3, r31
	li       r4, 0
	li       r5, 0
	bl       readString__6StreamFPci
	stw      r3, 0x14(r30)
	mr       r4, r31
	lwz      r5, 0x18(r30)
	stw      r3, 8(r5)
	lwz      r3, 0x18(r30)
	bl       load__Q24Game7MapUnitFR6Stream
	mr       r3, r31
	bl       readShort__6StreamFv
	cmplwi   r29, 1
	sth      r3, 0x6c(r30)
	blt      lbl_802325F4
	li       r28, 0
	addi     r29, r30, 0x6e

lbl_802325D4:
	mr       r3, r31
	bl       readByte__6StreamFv
	addi     r28, r28, 1
	stb      r3, 0(r29)
	cmplwi   r28, 2
	addi     r29, r29, 1
	blt      lbl_802325D4
	b        lbl_80232600

lbl_802325F4:
	li       r0, 0
	stb      r0, 0x6e(r30)
	stb      r0, 0x6f(r30)

lbl_80232600:
	mr       r3, r31
	bl       readInt__6StreamFv
	stw      r3, 0x114(r30)
	li       r29, 0
	b        lbl_80232688

lbl_80232614:
	li       r3, 0x50
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_8023266C
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q24Game4Door@ha
	addi     r27, r28, 0x20
	addi     r0, r3, __vt__Q24Game4Door@l
	stw      r0, 0(r28)
	mr       r3, r27
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q24Game8DoorLink@ha
	lfs      f0, lbl_8051A3A8@sda21(r2)
	addi     r0, r3, __vt__Q24Game8DoorLink@l
	li       r3, 1
	stw      r0, 0(r27)
	li       r0, 0
	stfs     f0, 0x18(r27)
	stb      r3, 0x20(r27)
	stw      r0, 0x1c(r28)
	stw      r0, 0x44(r28)
	stw      r0, 0x48(r28)

lbl_8023266C:
	mr       r3, r28
	mr       r4, r31
	bl       read__Q24Game4DoorFR6Stream
	mr       r4, r28
	addi     r3, r30, 0x118
	bl       add__5CNodeFP5CNode
	addi     r29, r29, 1

lbl_80232688:
	lwz      r0, 0x114(r30)
	cmpw     r29, r0
	blt      lbl_80232614
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000178
 */
void PartsView::write(Stream&)
{
	// UNUSED FUNCTION
}
} // namespace Game

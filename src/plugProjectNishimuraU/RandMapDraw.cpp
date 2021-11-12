#include "types.h"

/*
    Generated from dpostproc

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A750
    lbl_8051A750:
        .4byte 0x432A0000
        .4byte 0x00000000
    .global lbl_8051A758
    lbl_8051A758:
        .4byte 0x43300000
        .4byte 0x80000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	80245418
 * Size:	000008
 */
Cave::RandMapDraw::RandMapDraw(Game::Cave::MapUnitGenerator*)
{
	/*
	stw      r4, 0(r3)
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	80245420
 * Size:	0001CC
 */
void radarMapPartsOpen__Q34Game4Cave11RandMapDrawFR10Vector3f(void)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stfd     f30, 0x40(r1)
	psq_st   f30, 72(r1), 0, qr0
	stfd     f29, 0x30(r1)
	psq_st   f29, 56(r1), 0, qr0
	stmw     r24, 0x10(r1)
	lfs      f2, 0(r4)
	lis      r27, 0x4330
	lfs      f1, lbl_8051A750@sda21(r2)
	lfs      f0, 8(r4)
	fdivs    f30, f2, f1
	lwz      r3, 0(r3)
	lfd      f31, lbl_8051A758@sda21(r2)
	lwz      r31, 0x28(r3)
	lwz      r30, 0x2c(r3)
	lwz      r29, 0x10(r31)
	fdivs    f29, f0, f1
	b        lbl_802455B8

lbl_80245478:
	mr       r3, r29
	bl       getNodeOffsetX__Q34Game4Cave7MapNodeFv
	xoris    r0, r3, 0x8000
	stw      r27, 8(r1)
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f31
	fcmpo    cr0, f30, f0
	ble      lbl_802455B4
	mr       r3, r29
	bl       getNodeOffsetY__Q34Game4Cave7MapNodeFv
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f1, lbl_8051A758@sda21(r2)
	stw      r0, 8(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fcmpo    cr0, f29, f0
	ble      lbl_802455B4
	lwz      r3, 0x18(r29)
	bl       getUnitSizeX__Q34Game4Cave8UnitInfoFv
	mr       r28, r3
	mr       r3, r29
	bl       getNodeOffsetX__Q34Game4Cave7MapNodeFv
	add      r3, r3, r28
	lis      r0, 0x4330
	xoris    r3, r3, 0x8000
	stw      r0, 8(r1)
	lfd      f1, lbl_8051A758@sda21(r2)
	stw      r3, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fcmpo    cr0, f30, f0
	bge      lbl_802455B4
	lwz      r3, 0x18(r29)
	bl       getUnitSizeY__Q34Game4Cave8UnitInfoFv
	mr       r28, r3
	mr       r3, r29
	bl       getNodeOffsetY__Q34Game4Cave7MapNodeFv
	add      r3, r3, r28
	lis      r0, 0x4330
	xoris    r3, r3, 0x8000
	stw      r0, 8(r1)
	lfd      f1, lbl_8051A758@sda21(r2)
	stw      r3, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fcmpo    cr0, f29, f0
	bge      lbl_802455B4
	mr       r3, r29
	bl       del__5CNodeFv
	mr       r3, r30
	mr       r4, r29
	bl       add__5CNodeFP5CNode
	mr       r3, r29
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	mr       r28, r3
	li       r25, 0
	li       r26, 0
	b        lbl_802455AC

lbl_8024556C:
	lwz      r3, 0x28(r29)
	lwzx     r24, r3, r26
	lwz      r0, 0xc(r24)
	cmplw    r31, r0
	bne      lbl_802455A4
	lwz      r3, 0x18(r24)
	bl       getUnitKind__Q34Game4Cave8UnitInfoFv
	cmpwi    r3, 0
	bne      lbl_802455A4
	mr       r3, r24
	bl       del__5CNodeFv
	mr       r3, r30
	mr       r4, r24
	bl       add__5CNodeFP5CNode

lbl_802455A4:
	addi     r26, r26, 0xc
	addi     r25, r25, 1

lbl_802455AC:
	cmpw     r25, r28
	blt      lbl_8024556C

lbl_802455B4:
	lwz      r29, 4(r29)

lbl_802455B8:
	cmplwi   r29, 0
	bne      lbl_80245478
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	psq_l    f29, 56(r1), 0, qr0
	lfd      f29, 0x30(r1)
	lmw      r24, 0x10(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	802455EC
 * Size:	000078
 */
void Cave::RandMapDraw::draw(Graphics&, float, float, float)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x28(r1)
	fmr      f31, f3
	stfd     f30, 0x20(r1)
	fmr      f30, f2
	stfd     f29, 0x18(r1)
	fmr      f29, f1
	stw      r31, 0x14(r1)
	lwz      r3, 0(r3)
	lwz      r3, 0x2c(r3)
	lwz      r31, 0x10(r3)
	b        lbl_8024563C

lbl_80245624:
	fmr      f1, f29
	mr       r3, r31
	fmr      f2, f30
	fmr      f3, f31
	bl       draw__Q34Game4Cave7MapNodeFfff
	lwz      r31, 4(r31)

lbl_8024563C:
	cmplwi   r31, 0
	bne      lbl_80245624
	lwz      r0, 0x34(r1)
	lfd      f31, 0x28(r1)
	lfd      f30, 0x20(r1)
	lfd      f29, 0x18(r1)
	lwz      r31, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}
} // namespace Game

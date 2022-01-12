#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__7OgDummy
    __vt__7OgDummy:
        .4byte 0
        .4byte 0
        .4byte getPosition__7OgDummyFv
    .global __vt__Q25Radar5Point
    __vt__Q25Radar5Point:
        .4byte 0
        .4byte 0
        .4byte __dt__Q25Radar5PointFv
        .4byte getChildCount__5CNodeFv
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global mgr__5Radar
    mgr__5Radar:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A090
    lbl_8051A090:
        .4byte 0x00000000
    .global lbl_8051A094
    lbl_8051A094:
        .4byte 0xC4104000
    .global lbl_8051A098
    lbl_8051A098:
        .4byte 0xC2140000
    .global lbl_8051A09C
    lbl_8051A09C:
        .4byte 0x44F80000
    .global lbl_8051A0A0
    lbl_8051A0A0:
        .4byte 0xC3BC8000
    .global lbl_8051A0A4
    lbl_8051A0A4:
        .4byte 0x4506B000
    .global lbl_8051A0A8
    lbl_8051A0A8:
        .4byte 0xC3990000
    .global lbl_8051A0AC
    lbl_8051A0AC:
        .4byte 0x44E3E000
    .global lbl_8051A0B0
    lbl_8051A0B0:
        .4byte 0x42800000
    .global lbl_8051A0B4
    lbl_8051A0B4:
        .4byte 0x44F70000
    .global lbl_8051A0B8
    lbl_8051A0B8:
        .float -337.0
    .global lbl_8051A0BC
    lbl_8051A0BC:
        .float 2101.0
*/

/*
 * --INFO--
 * Address:	8021E28C
 * Size:	000068
 */
void Radar::Point::getPosition(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r4, 0x1c(r4)
	cmplwi   r4, 0
	beq      lbl_8021E2D4
	lwz      r12, 0(r4)
	addi     r3, r1, 8
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 8(r1)
	lfs      f0, 0x10(r1)
	stfs     f0, 0(r31)
	stfs     f1, 4(r31)
	b        lbl_8021E2E0

lbl_8021E2D4:
	lfs      f0, lbl_8051A090@sda21(r2)
	stfs     f0, 0(r31)
	stfs     f0, 4(r31)

lbl_8021E2E0:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void Radar::Point::entry(Game::TPositionObject*, Radar::cRadarType, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void Radar::Point::clear(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8021E2F4
 * Size:	0000F4
 */
Radar::Mgr::Mgr(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	mr       r0, r30
	stw      r29, 0x14(r1)
	mr       r31, r0
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q25Radar5Point@ha
	addi     r29, r30, 0x24
	addi     r0, r3, __vt__Q25Radar5Point@l
	li       r4, 0x17
	stw      r0, 0(r31)
	li       r0, 0
	mr       r3, r29
	stw      r4, 0x18(r31)
	stw      r0, 0x1c(r31)
	stw      r0, 0x20(r31)
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q25Radar5Point@ha
	li       r4, 0x17
	addi     r0, r3, __vt__Q25Radar5Point@l
	li       r3, 0
	stw      r0, 0(r29)
	li       r0, 0xa0
	stw      r4, 0x18(r29)
	stw      r3, 0x1c(r29)
	stw      r3, 0x20(r29)
	stw      r3, 0x10(r30)
	stw      r3, 0xc(r30)
	stw      r3, 8(r30)
	stw      r3, 4(r30)
	stw      r3, 0x34(r30)
	stw      r3, 0x30(r30)
	stw      r3, 0x2c(r30)
	stw      r3, 0x28(r30)
	stw      r0, 0x4c(r30)
	lwz      r31, 0x4c(r30)
	mulli    r3, r31, 0x24
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q25Radar5PointFv@ha
	lis      r5, __dt__Q25Radar5PointFv@ha
	addi     r4, r4, __ct__Q25Radar5PointFv@l
	mr       r7, r31
	addi     r5, r5, __dt__Q25Radar5PointFv@l
	li       r6, 0x24
	bl       __construct_new_array
	stw      r3, 0x48(r30)
	mr       r3, r30
	bl       clear__Q25Radar3MgrFv
	lwz      r0, 0x24(r1)
	mr       r3, r30
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
 * Address:	8021E3E8
 * Size:	000050
 */
Radar::Point::Point(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q25Radar5Point@ha
	li       r4, 0x17
	addi     r3, r3, __vt__Q25Radar5Point@l
	li       r0, 0
	stw      r3, 0(r31)
	mr       r3, r31
	stw      r4, 0x18(r31)
	stw      r0, 0x1c(r31)
	stw      r0, 0x20(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8021E438
 * Size:	000060
 */
Radar::Point::~Point(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8021E47C
	lis      r5, __vt__Q25Radar5Point@ha
	li       r4, 0
	addi     r0, r5, __vt__Q25Radar5Point@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_8021E47C
	mr       r3, r30
	bl       __dl__FPv

lbl_8021E47C:
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
 * Address:	8021E498
 * Size:	0000B4
 */
void Radar::Mgr::clear(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	li       r30, 0
	mr       r27, r3
	li       r28, 0
	mr       r29, r30
	li       r31, 0x17
	stw      r30, 0x10(r3)
	stw      r30, 0xc(r3)
	stw      r30, 8(r3)
	stw      r30, 4(r3)
	stw      r30, 0x34(r3)
	stw      r30, 0x30(r3)
	stw      r30, 0x2c(r3)
	stw      r30, 0x28(r3)
	b        lbl_8021E51C

lbl_8021E4E0:
	lwz      r0, 0x48(r27)
	addi     r3, r27, 0x24
	add      r4, r0, r29
	stw      r30, 0x10(r4)
	stw      r30, 0xc(r4)
	stw      r30, 8(r4)
	stw      r30, 4(r4)
	stw      r30, 0x1c(r4)
	stw      r31, 0x18(r4)
	stw      r30, 0x20(r4)
	lwz      r0, 0x48(r27)
	add      r4, r0, r29
	bl       add__5CNodeFP5CNode
	addi     r29, r29, 0x24
	addi     r28, r28, 1

lbl_8021E51C:
	lwz      r0, 0x4c(r27)
	cmpw     r28, r0
	blt      lbl_8021E4E0
	li       r0, 0
	stw      r0, 0x50(r27)
	stw      r0, 0x54(r27)
	stw      r0, 0x58(r27)
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8021E54C
 * Size:	000010
 */
void Radar::Mgr::bornFuefuki(void)
{
	/*
	lwz      r4, 0x54(r3)
	addi     r0, r4, 1
	stw      r0, 0x54(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8021E55C
 * Size:	000018
 */
void Radar::Mgr::dieFuefuki(void)
{
	/*
	lwz      r4, 0x54(r3)
	cmpwi    r4, 0
	blelr
	addi     r0, r4, -1
	stw      r0, 0x54(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8021E574
 * Size:	000010
 */
void Radar::Mgr::fuefuki(void)
{
	/*
	lwz      r4, 0x58(r3)
	addi     r0, r4, 1
	stw      r0, 0x58(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8021E584
 * Size:	000070
 */
void Radar::Mgr::entry(Game::TPositionObject*, Radar::cRadarType, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r7, r3
	mr       r6, r5
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	lwz      r0, mgr__5Radar@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8021E5E0
	mr       r3, r0
	mr       r4, r7
	mr       r5, r31
	bl attach__Q25Radar3MgrFPQ24Game15TPositionObjectQ25Radar10cRadarTypeUl addi
r0, r31, -16 cmplwi   r0, 1 ble      lbl_8021E5D0 cmpwi    r31, 0x12 bne
lbl_8021E5E0

lbl_8021E5D0:
	lwz      r4, mgr__5Radar@sda21(r13)
	lwz      r3, 0x50(r4)
	addi     r0, r3, 1
	stw      r0, 0x50(r4)

lbl_8021E5E0:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8021E5F4
 * Size:	00003C
 */
void Radar::Mgr::exit(Game::TPositionObject*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	lwz      r0, mgr__5Radar@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8021E61C
	mr       r3, r0
	bl       detach__Q25Radar3MgrFPQ24Game15TPositionObject
	b        lbl_8021E620

lbl_8021E61C:
	li       r3, 0

lbl_8021E620:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8021E630
 * Size:	00001C
 */
void Radar::Mgr::getNumOtakaraItems(void)
{
	/*
	lwz      r3, mgr__5Radar@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8021E644
	lwz      r3, 0x50(r3)
	blr

lbl_8021E644:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8021E64C
 * Size:	000064
 */
void Radar::Mgr::attach(Game::TPositionObject*, Radar::cRadarType, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r5
	  mr        r30, r6
	  bl        .loc_0x64
	  lwz       r31, 0x34(r27)
	  cmplwi    r31, 0
	  beq-      .loc_0x50
	  mr        r3, r31
	  bl        0x1F2F50
	  stw       r28, 0x1C(r31)
	  mr        r3, r27
	  mr        r4, r31
	  stw       r29, 0x18(r31)
	  stw       r30, 0x20(r31)
	  bl        0x1F2D70

	.loc_0x50:
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x64:
	*/
}

/*
 * --INFO--
 * Address:	8021E6B0
 * Size:	0000C4
 */
void Radar::Mgr::detach(Game::TPositionObject*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r31, 0x10(r3)
	b        lbl_8021E74C

lbl_8021E6D4:
	lwz      r0, 0x1c(r31)
	cmplw    r0, r4
	bne      lbl_8021E748
	lwz      r30, 0x18(r31)
	mr       r3, r31
	bl       del__5CNodeFv
	li       r4, 0
	addi     r0, r30, -16
	stw      r4, 0x10(r31)
	li       r3, 0x17
	cmplwi   r0, 1
	stw      r4, 0xc(r31)
	stw      r4, 8(r31)
	stw      r4, 4(r31)
	stw      r4, 0x1c(r31)
	stw      r3, 0x18(r31)
	stw      r4, 0x20(r31)
	ble      lbl_8021E724
	cmpwi    r30, 0x12
	bne      lbl_8021E734

lbl_8021E724:
	lwz      r4, mgr__5Radar@sda21(r13)
	lwz      r3, 0x50(r4)
	addi     r0, r3, -1
	stw      r0, 0x50(r4)

lbl_8021E734:
	mr       r4, r31
	addi     r3, r29, 0x24
	bl       add__5CNodeFP5CNode
	li       r3, 1
	b        lbl_8021E758

lbl_8021E748:
	lwz      r31, 4(r31)

lbl_8021E74C:
	cmplwi   r31, 0
	bne      lbl_8021E6D4
	li       r3, 0

lbl_8021E758:
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
 * Address:	8021E774
 * Size:	0001E0
 */
void calcNearestTreasure__Q25Radar3MgrFR10Vector3f fR10Vector3f Rf(void)
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stfd     f29, 0x50(r1)
	psq_st   f29, 88(r1), 0, qr0
	stmw     r25, 0x34(r1)
	lwz      r0, 0x54(r3)
	mr       r25, r4
	mr       r26, r5
	mr       r27, r6
	cmpwi    r0, 0
	ble      lbl_8021E7D8
	lwz      r4, 0x58(r3)
	cmpwi    r4, 0
	ble      lbl_8021E7D0
	addi     r0, r4, -1
	stw      r0, 0x58(r3)
	li       r3, 4
	b        lbl_8021E928

lbl_8021E7D0:
	li       r3, 3
	b        lbl_8021E928

lbl_8021E7D8:
	fmr      f29, f1
	lwz      r29, 0x10(r3)
	li       r31, 0
	li       r30, 0
	b        lbl_8021E904

lbl_8021E7EC:
	lwz      r0, 0x18(r29)
	cmpwi    r0, 0x10
	beq      lbl_8021E808
	cmpwi    r0, 0x11
	beq      lbl_8021E808
	cmpwi    r0, 0x12
	bne      lbl_8021E900

lbl_8021E808:
	lwz      r28, 0x1c(r29)
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	addi     r30, r30, 1
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8021E840
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl

lbl_8021E840:
	mr       r4, r28
	addi     r3, r1, 0x14
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r3, r28
	lfs      f31, 0x14(r1)
	lwz      r12, 0(r28)
	addi     r4, r1, 0x20
	lfs      f1, 0(r25)
	lfs      f30, 0x1c(r1)
	lfs      f0, 8(r25)
	fsubs    f31, f31, f1
	lwz      r12, 0x10(r12)
	fsubs    f30, f30, f0
	mtctr    r12
	bctrl
	fmuls    f1, f30, f30
	lfs      f0, lbl_8051A090@sda21(r2)
	fmadds   f1, f31, f31, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8021E8AC
	ble      lbl_8021E8B0
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8021E8B0

lbl_8021E8AC:
	fmr      f1, f0

lbl_8021E8B0:
	lfs      f0, 0x2c(r1)
	fsubs    f30, f1, f0
	fcmpo    cr0, f30, f29
	cror     2, 0, 2
	bne      lbl_8021E900
	mr       r4, r28
	fmr      f29, f30
	lwz      r12, 0(r28)
	mr       r31, r29
	addi     r3, r1, 8
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 8(r1)
	stfs     f0, 0(r26)
	lfs      f0, 0xc(r1)
	stfs     f0, 4(r26)
	lfs      f0, 0x10(r1)
	stfs     f0, 8(r26)
	stfs     f30, 0(r27)

lbl_8021E900:
	lwz      r29, 4(r29)

lbl_8021E904:
	cmplwi   r29, 0
	bne      lbl_8021E7EC
	cmplwi   r31, 0
	beq      lbl_8021E91C
	li       r3, 2
	b        lbl_8021E928

lbl_8021E91C:
	neg      r0, r30
	andc     r0, r0, r30
	srwi     r3, r0, 0x1f

lbl_8021E928:
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	lmw      r25, 0x34(r1)
	lwz      r0, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	8021E954
 * Size:	000568
 */
void Radar::Mgr::ogDummpyInit(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	li       r3, 0x10
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8021E9AC
	lis      r4, __vt__Q24Game15TPositionObject@ha
	lis      r3, __vt__7OgDummy@ha
	addi     r0, r4, __vt__Q24Game15TPositionObject@l
	lfs      f0, lbl_8051A090@sda21(r2)
	stw      r0, 0(r30)
	addi     r0, r3, __vt__7OgDummy@l
	stw      r0, 0(r30)
	stfs     f0, 4(r30)
	stfs     f0, 8(r30)
	stfs     f0, 0xc(r30)

lbl_8021E9AC:
	lfs      f0, lbl_8051A094@sda21(r2)
	lfs      f1, lbl_8051A098@sda21(r2)
	stfs     f0, 4(r30)
	lfs      f0, lbl_8051A09C@sda21(r2)
	stfs     f1, 8(r30)
	stfs     f0, 0xc(r30)
	lwz      r28, 0x10(r31)
	b        lbl_8021EA40

lbl_8021E9CC:
	lwz      r0, 0x1c(r28)
	cmplw    r0, r30
	bne      lbl_8021EA3C
	lwz      r29, 0x18(r28)
	mr       r3, r28
	bl       del__5CNodeFv
	li       r4, 0
	addi     r0, r29, -16
	stw      r4, 0x10(r28)
	li       r3, 0x17
	cmplwi   r0, 1
	stw      r4, 0xc(r28)
	stw      r4, 8(r28)
	stw      r4, 4(r28)
	stw      r4, 0x1c(r28)
	stw      r3, 0x18(r28)
	stw      r4, 0x20(r28)
	ble      lbl_8021EA1C
	cmpwi    r29, 0x12
	bne      lbl_8021EA2C

lbl_8021EA1C:
	lwz      r4, mgr__5Radar@sda21(r13)
	lwz      r3, 0x50(r4)
	addi     r0, r3, -1
	stw      r0, 0x50(r4)

lbl_8021EA2C:
	mr       r4, r28
	addi     r3, r31, 0x24
	bl       add__5CNodeFP5CNode
	b        lbl_8021EA48

lbl_8021EA3C:
	lwz      r28, 4(r28)

lbl_8021EA40:
	cmplwi   r28, 0
	bne      lbl_8021E9CC

lbl_8021EA48:
	lwz      r28, 0x34(r31)
	cmplwi   r28, 0
	beq      lbl_8021EA7C
	mr       r3, r28
	bl       del__5CNodeFv
	stw      r30, 0x1c(r28)
	li       r4, 0xf
	li       r0, 0
	mr       r3, r31
	stw      r4, 0x18(r28)
	mr       r4, r28
	stw      r0, 0x20(r28)
	bl       add__5CNodeFP5CNode

lbl_8021EA7C:
	li       r3, 0x10
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8021EAB4
	lis      r4, __vt__Q24Game15TPositionObject@ha
	lis      r3, __vt__7OgDummy@ha
	addi     r0, r4, __vt__Q24Game15TPositionObject@l
	lfs      f0, lbl_8051A090@sda21(r2)
	stw      r0, 0(r30)
	addi     r0, r3, __vt__7OgDummy@l
	stw      r0, 0(r30)
	stfs     f0, 4(r30)
	stfs     f0, 8(r30)
	stfs     f0, 0xc(r30)

lbl_8021EAB4:
	lfs      f0, lbl_8051A0A0@sda21(r2)
	lfs      f1, lbl_8051A098@sda21(r2)
	stfs     f0, 4(r30)
	lfs      f0, lbl_8051A0A4@sda21(r2)
	stfs     f1, 8(r30)
	stfs     f0, 0xc(r30)
	lwz      r29, 0x10(r31)
	b        lbl_8021EB48

lbl_8021EAD4:
	lwz      r0, 0x1c(r29)
	cmplw    r0, r30
	bne      lbl_8021EB44
	lwz      r28, 0x18(r29)
	mr       r3, r29
	bl       del__5CNodeFv
	li       r4, 0
	addi     r0, r28, -16
	stw      r4, 0x10(r29)
	li       r3, 0x17
	cmplwi   r0, 1
	stw      r4, 0xc(r29)
	stw      r4, 8(r29)
	stw      r4, 4(r29)
	stw      r4, 0x1c(r29)
	stw      r3, 0x18(r29)
	stw      r4, 0x20(r29)
	ble      lbl_8021EB24
	cmpwi    r28, 0x12
	bne      lbl_8021EB34

lbl_8021EB24:
	lwz      r4, mgr__5Radar@sda21(r13)
	lwz      r3, 0x50(r4)
	addi     r0, r3, -1
	stw      r0, 0x50(r4)

lbl_8021EB34:
	mr       r4, r29
	addi     r3, r31, 0x24
	bl       add__5CNodeFP5CNode
	b        lbl_8021EB50

lbl_8021EB44:
	lwz      r29, 4(r29)

lbl_8021EB48:
	cmplwi   r29, 0
	bne      lbl_8021EAD4

lbl_8021EB50:
	lwz      r28, 0x34(r31)
	cmplwi   r28, 0
	beq      lbl_8021EB84
	mr       r3, r28
	bl       del__5CNodeFv
	stw      r30, 0x1c(r28)
	li       r4, 1
	li       r0, 0
	mr       r3, r31
	stw      r4, 0x18(r28)
	mr       r4, r28
	stw      r0, 0x20(r28)
	bl       add__5CNodeFP5CNode

lbl_8021EB84:
	li       r3, 0x10
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8021EBBC
	lis      r4, __vt__Q24Game15TPositionObject@ha
	lis      r3, __vt__7OgDummy@ha
	addi     r0, r4, __vt__Q24Game15TPositionObject@l
	lfs      f0, lbl_8051A090@sda21(r2)
	stw      r0, 0(r30)
	addi     r0, r3, __vt__7OgDummy@l
	stw      r0, 0(r30)
	stfs     f0, 4(r30)
	stfs     f0, 8(r30)
	stfs     f0, 0xc(r30)

lbl_8021EBBC:
	lfs      f0, lbl_8051A0A8@sda21(r2)
	lfs      f1, lbl_8051A098@sda21(r2)
	stfs     f0, 4(r30)
	lfs      f0, lbl_8051A0AC@sda21(r2)
	stfs     f1, 8(r30)
	stfs     f0, 0xc(r30)
	lwz      r29, 0x10(r31)
	b        lbl_8021EC50

lbl_8021EBDC:
	lwz      r0, 0x1c(r29)
	cmplw    r0, r30
	bne      lbl_8021EC4C
	lwz      r28, 0x18(r29)
	mr       r3, r29
	bl       del__5CNodeFv
	li       r4, 0
	addi     r0, r28, -16
	stw      r4, 0x10(r29)
	li       r3, 0x17
	cmplwi   r0, 1
	stw      r4, 0xc(r29)
	stw      r4, 8(r29)
	stw      r4, 4(r29)
	stw      r4, 0x1c(r29)
	stw      r3, 0x18(r29)
	stw      r4, 0x20(r29)
	ble      lbl_8021EC2C
	cmpwi    r28, 0x12
	bne      lbl_8021EC3C

lbl_8021EC2C:
	lwz      r4, mgr__5Radar@sda21(r13)
	lwz      r3, 0x50(r4)
	addi     r0, r3, -1
	stw      r0, 0x50(r4)

lbl_8021EC3C:
	mr       r4, r29
	addi     r3, r31, 0x24
	bl       add__5CNodeFP5CNode
	b        lbl_8021EC58

lbl_8021EC4C:
	lwz      r29, 4(r29)

lbl_8021EC50:
	cmplwi   r29, 0
	bne      lbl_8021EBDC

lbl_8021EC58:
	lwz      r28, 0x34(r31)
	cmplwi   r28, 0
	beq      lbl_8021EC8C
	mr       r3, r28
	bl       del__5CNodeFv
	stw      r30, 0x1c(r28)
	li       r4, 1
	li       r0, 0
	mr       r3, r31
	stw      r4, 0x18(r28)
	mr       r4, r28
	stw      r0, 0x20(r28)
	bl       add__5CNodeFP5CNode

lbl_8021EC8C:
	li       r3, 0x10
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8021ECC4
	lis      r4, __vt__Q24Game15TPositionObject@ha
	lis      r3, __vt__7OgDummy@ha
	addi     r0, r4, __vt__Q24Game15TPositionObject@l
	lfs      f0, lbl_8051A090@sda21(r2)
	stw      r0, 0(r30)
	addi     r0, r3, __vt__7OgDummy@l
	stw      r0, 0(r30)
	stfs     f0, 4(r30)
	stfs     f0, 8(r30)
	stfs     f0, 0xc(r30)

lbl_8021ECC4:
	lfs      f0, lbl_8051A0B0@sda21(r2)
	lfs      f1, lbl_8051A098@sda21(r2)
	stfs     f0, 4(r30)
	lfs      f0, lbl_8051A0B4@sda21(r2)
	stfs     f1, 8(r30)
	stfs     f0, 0xc(r30)
	lwz      r29, 0x10(r31)
	b        lbl_8021ED58

lbl_8021ECE4:
	lwz      r0, 0x1c(r29)
	cmplw    r0, r30
	bne      lbl_8021ED54
	lwz      r28, 0x18(r29)
	mr       r3, r29
	bl       del__5CNodeFv
	li       r4, 0
	addi     r0, r28, -16
	stw      r4, 0x10(r29)
	li       r3, 0x17
	cmplwi   r0, 1
	stw      r4, 0xc(r29)
	stw      r4, 8(r29)
	stw      r4, 4(r29)
	stw      r4, 0x1c(r29)
	stw      r3, 0x18(r29)
	stw      r4, 0x20(r29)
	ble      lbl_8021ED34
	cmpwi    r28, 0x12
	bne      lbl_8021ED44

lbl_8021ED34:
	lwz      r4, mgr__5Radar@sda21(r13)
	lwz      r3, 0x50(r4)
	addi     r0, r3, -1
	stw      r0, 0x50(r4)

lbl_8021ED44:
	mr       r4, r29
	addi     r3, r31, 0x24
	bl       add__5CNodeFP5CNode
	b        lbl_8021ED60

lbl_8021ED54:
	lwz      r29, 4(r29)

lbl_8021ED58:
	cmplwi   r29, 0
	bne      lbl_8021ECE4

lbl_8021ED60:
	lwz      r28, 0x34(r31)
	cmplwi   r28, 0
	beq      lbl_8021ED94
	mr       r3, r28
	bl       del__5CNodeFv
	stw      r30, 0x1c(r28)
	li       r4, 1
	li       r0, 0
	mr       r3, r31
	stw      r4, 0x18(r28)
	mr       r4, r28
	stw      r0, 0x20(r28)
	bl       add__5CNodeFP5CNode

lbl_8021ED94:
	li       r3, 0x10
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8021EDCC
	lis      r4, __vt__Q24Game15TPositionObject@ha
	lis      r3, __vt__7OgDummy@ha
	addi     r0, r4, __vt__Q24Game15TPositionObject@l
	lfs      f0, lbl_8051A090@sda21(r2)
	stw      r0, 0(r30)
	addi     r0, r3, __vt__7OgDummy@l
	stw      r0, 0(r30)
	stfs     f0, 4(r30)
	stfs     f0, 8(r30)
	stfs     f0, 0xc(r30)

lbl_8021EDCC:
	lfs      f0, lbl_8051A0B8@sda21(r2)
	lfs      f1, lbl_8051A098@sda21(r2)
	stfs     f0, 4(r30)
	lfs      f0, lbl_8051A0BC@sda21(r2)
	stfs     f1, 8(r30)
	stfs     f0, 0xc(r30)
	lwz      r29, 0x10(r31)
	b        lbl_8021EE60

lbl_8021EDEC:
	lwz      r0, 0x1c(r29)
	cmplw    r0, r30
	bne      lbl_8021EE5C
	lwz      r28, 0x18(r29)
	mr       r3, r29
	bl       del__5CNodeFv
	li       r4, 0
	addi     r0, r28, -16
	stw      r4, 0x10(r29)
	li       r3, 0x17
	cmplwi   r0, 1
	stw      r4, 0xc(r29)
	stw      r4, 8(r29)
	stw      r4, 4(r29)
	stw      r4, 0x1c(r29)
	stw      r3, 0x18(r29)
	stw      r4, 0x20(r29)
	ble      lbl_8021EE3C
	cmpwi    r28, 0x12
	bne      lbl_8021EE4C

lbl_8021EE3C:
	lwz      r4, mgr__5Radar@sda21(r13)
	lwz      r3, 0x50(r4)
	addi     r0, r3, -1
	stw      r0, 0x50(r4)

lbl_8021EE4C:
	mr       r4, r29
	addi     r3, r31, 0x24
	bl       add__5CNodeFP5CNode
	b        lbl_8021EE68

lbl_8021EE5C:
	lwz      r29, 4(r29)

lbl_8021EE60:
	cmplwi   r29, 0
	bne      lbl_8021EDEC

lbl_8021EE68:
	lwz      r28, 0x34(r31)
	cmplwi   r28, 0
	beq      lbl_8021EE9C
	mr       r3, r28
	bl       del__5CNodeFv
	stw      r30, 0x1c(r28)
	li       r4, 3
	li       r0, 0
	mr       r3, r31
	stw      r4, 0x18(r28)
	mr       r4, r28
	stw      r0, 0x20(r28)
	bl       add__5CNodeFP5CNode

lbl_8021EE9C:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8021EEBC
 * Size:	00001C
 */
void OgDummy::getPosition()
{
	/*
	lfs      f0, 4(r4)
	stfs     f0, 0(r3)
	lfs      f0, 8(r4)
	stfs     f0, 4(r3)
	lfs      f0, 0xc(r4)
	stfs     f0, 8(r3)
	blr
	*/
}

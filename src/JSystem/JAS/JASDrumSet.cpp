#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__10JASDrumSet
    __vt__10JASDrumSet:
        .4byte 0
        .4byte 0
        .4byte __dt__10JASDrumSetFv
        .4byte getParam__10JASDrumSetCFiiP12JASInstParam
        .4byte getType__10JASDrumSetCFv
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global oscp$640
    oscp$640:
        .skip 0x4
    .global init$641
    init$641:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516CD8
    lbl_80516CD8:
        .float 1.0
    .global lbl_80516CDC
    lbl_80516CDC:
        .4byte 0x00000000
    .global lbl_80516CE0
    lbl_80516CE0:
        .4byte 0x3FE00000
        .4byte 0x00000000
    .global lbl_80516CE8
    lbl_80516CE8:
        .float 0.5
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	8009B0B8
 * Size:	0001FC
 */
void JASDrumSet::getParam(int, int, JASInstParam*) const
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r28, r4
	cmplwi   r28, 0x80
	mr       r29, r5
	mr       r30, r6
	blt      lbl_8009B0E4
	li       r3, 0
	b        lbl_8009B2A0

lbl_8009B0E4:
	slwi     r4, r28, 5
	li       r5, 0
	addi     r31, r4, 4
	stb      r5, 0(r30)
	add      r31, r3, r31
	li       r4, 1
	stb      r4, 0x24(r30)
	lis      r3, osc$639@ha
	lfs      f0, 0(r31)
	lfs      f1, 4(r31)
	stfs     f0, 0x10(r30)
	lfs      f0, 8(r31)
	stfs     f1, 0x14(r30)
	lhz      r0, 0xc(r31)
	stfs     f0, 0x18(r30)
	lfs      f1, lbl_80516CD8@sda21(r2)
	sth      r0, 0x26(r30)
	lfs      f0, lbl_80516CDC@sda21(r2)
	stwu     r5, osc$639@l(r3)
	lbz      r0, init$641@sda21(r13)
	stfs     f1, 4(r3)
	extsb.   r0, r0
	stw      r5, 8(r3)
	stw      r5, 0xc(r3)
	stfs     f1, 0x10(r3)
	stfs     f0, 0x14(r3)
	bne      lbl_8009B158
	stw      r3, oscp$640@sda21(r13)
	stb      r4, init$641@sda21(r13)

lbl_8009B158:
	addi     r3, r13, oscp$640@sda21
	li       r0, 1
	stw      r3, 8(r30)
	li       r26, 0
	li       r27, 0
	stw      r0, 0xc(r30)
	b        lbl_8009B230

lbl_8009B174:
	lwz      r3, 0x10(r31)
	lwzx     r25, r3, r27
	cmplwi   r25, 0
	beq      lbl_8009B228
	mr       r3, r25
	mr       r4, r28
	lwz      r12, 0(r25)
	mr       r5, r29
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lbz      r0, 4(r25)
	cmpwi    r0, 2
	beq      lbl_8009B1F0
	bge      lbl_8009B1C0
	cmpwi    r0, 0
	beq      lbl_8009B1D0
	bge      lbl_8009B1E0
	b        lbl_8009B228

lbl_8009B1C0:
	cmpwi    r0, 4
	beq      lbl_8009B21C
	bge      lbl_8009B228
	b        lbl_8009B20C

lbl_8009B1D0:
	lfs      f0, 0x10(r30)
	fmuls    f0, f0, f1
	stfs     f0, 0x10(r30)
	b        lbl_8009B228

lbl_8009B1E0:
	lfs      f0, 0x14(r30)
	fmuls    f0, f0, f1
	stfs     f0, 0x14(r30)
	b        lbl_8009B228

lbl_8009B1F0:
	lfd      f0, lbl_80516CE0@sda21(r2)
	lfs      f2, 0x18(r30)
	fsub     f0, f1, f0
	fadd     f0, f2, f0
	frsp     f0, f0
	stfs     f0, 0x18(r30)
	b        lbl_8009B228

lbl_8009B20C:
	lfs      f0, 0x1c(r30)
	fadds    f0, f0, f1
	stfs     f0, 0x1c(r30)
	b        lbl_8009B228

lbl_8009B21C:
	lfs      f0, 0x20(r30)
	fadds    f0, f0, f1
	stfs     f0, 0x20(r30)

lbl_8009B228:
	addi     r27, r27, 4
	addi     r26, r26, 1

lbl_8009B230:
	lwz      r0, 0x14(r31)
	cmplw    r26, r0
	blt      lbl_8009B174
	lwz      r0, 0x18(r31)
	li       r3, 0
	mtctr    r0
	cmplwi   r0, 0
	ble      lbl_8009B29C

lbl_8009B250:
	lwz      r0, 0x1c(r31)
	add      r4, r0, r3
	lwz      r0, 0(r4)
	cmpw     r29, r0
	bgt      lbl_8009B294
	lfs      f1, 0x10(r30)
	li       r3, 1
	lfs      f0, 8(r4)
	fmuls    f0, f1, f0
	stfs     f0, 0x10(r30)
	lfs      f1, 0x14(r30)
	lfs      f0, 0xc(r4)
	fmuls    f0, f1, f0
	stfs     f0, 0x14(r30)
	lwz      r0, 4(r4)
	stw      r0, 4(r30)
	b        lbl_8009B2A0

lbl_8009B294:
	addi     r3, r3, 0x10
	bdnz     lbl_8009B250

lbl_8009B29C:
	li       r3, 0

lbl_8009B2A0:
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009B2B4
 * Size:	000014
 */
void JASDrumSet::getPerc(int)
{
	/*
	slwi     r4, r4, 5
	mr       r0, r3
	addi     r3, r4, 4
	add      r3, r0, r3
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void JASDrumSet::getPerc(int) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009B2C8
 * Size:	000034
 */
JASDrumSet::TPerc::TPerc(void)
{
	/*
	lfs      f1, lbl_80516CD8@sda21(r2)
	li       r4, 0x3e8
	lfs      f0, lbl_80516CE8@sda21(r2)
	li       r0, 0
	stfs     f1, 0(r3)
	stfs     f1, 4(r3)
	stfs     f0, 8(r3)
	sth      r4, 0xc(r3)
	stw      r0, 0x10(r3)
	stw      r0, 0x14(r3)
	stw      r0, 0x18(r3)
	stw      r0, 0x1c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009B2FC
 * Size:	00005C
 */
JASDrumSet::TPerc::~TPerc(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8009B33C
	lwz      r3, 0x10(r30)
	bl       __dla__FPv
	lwz      r3, 0x1c(r30)
	bl       __dla__FPv
	extsh.   r0, r31
	ble      lbl_8009B33C
	mr       r3, r30
	bl       __dl__FPv

lbl_8009B33C:
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
 * Address:	8009B358
 * Size:	000078
 */
void JASDrumSet::TPerc::setEffectCount(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x10(r3)
	bl       __dla__FPv
	cmplwi   r31, 0
	stw      r31, 0x14(r30)
	bne      lbl_8009B394
	li       r0, 0
	stw      r0, 0x10(r30)
	b        lbl_8009B3B8

lbl_8009B394:
	bl       getCurrentHeap__7JASBankFv
	mr       r4, r3
	slwi     r3, r31, 2
	li       r5, 0
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, 0x10(r30)
	slwi     r4, r31, 2
	lwz      r3, 0x10(r30)
	bl       bzero__7JASCalcFPvUl

lbl_8009B3B8:
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
 * Address:	8009B3D0
 * Size:	000058
 */
void JASDrumSet::TPerc::setVeloRegionCount(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x1c(r3)
	bl       __dla__FPv
	bl       getCurrentHeap__7JASBankFv
	mr       r4, r3
	slwi     r3, r31, 4
	li       r5, 0
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, 0x1c(r30)
	stw      r31, 0x18(r30)
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
 * Address:	8009B428
 * Size:	000010
 */
void JASDrumSet::TPerc::getVeloRegion(int)
{
	/*
	lwz      r3, 0x1c(r3)
	slwi     r0, r4, 4
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void JASDrumSet::TPerc::getVeloRegion(const(int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009B438
 * Size:	000010
 */
void JASDrumSet::TPerc::setEffect(int, JASInstEffect*)
{
	/*
	lwz      r3, 0x10(r3)
	slwi     r0, r4, 2
	stwx     r5, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void JASDrumSet::TPerc::getEffect(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009B448
 * Size:	000008
 */
void JASDrumSet::TPerc::setRelease(unsigned long a1)
{
	// Generated from sth r4, 0xC(r3)
	_0C = a1;
}

/*
 * --INFO--
 * Address:	8009B450
 * Size:	000084
 */
JASDrumSet::~JASDrumSet()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8009B4B8
	lis      r3, __vt__10JASDrumSet@ha
	lis      r4, __dt__Q210JASDrumSet5TPercFv@ha
	addi     r0, r3, __vt__10JASDrumSet@l
	li       r5, 0x20
	stw      r0, 0(r30)
	addi     r3, r30, 4
	addi     r4, r4, __dt__Q210JASDrumSet5TPercFv@l
	li       r6, 0x80
	bl       __destroy_arr
	cmplwi   r30, 0
	beq      lbl_8009B4A8
	lis      r3, __vt__7JASInst@ha
	addi     r0, r3, __vt__7JASInst@l
	stw      r0, 0(r30)

lbl_8009B4A8:
	extsh.   r0, r31
	ble      lbl_8009B4B8
	mr       r3, r30
	bl       __dl__FPv

lbl_8009B4B8:
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
 * Address:	8009B4D4
 * Size:	00000C
 */
void JASDrumSet::getType() const
{
	/*
	lis      r3, 0x50455243@ha
	addi     r3, r3, 0x50455243@l
	blr
	*/
}

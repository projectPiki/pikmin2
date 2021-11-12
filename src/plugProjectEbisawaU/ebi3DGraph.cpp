#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80496408
    lbl_80496408:
        .asciz "ebi3DGraph.cpp"
        .skip 1
    .global lbl_80496418
    lbl_80496418:
        .asciz "P2Assert"
        .skip 3

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051F9D8
    lbl_8051F9D8:
        .float 0.0
    .global lbl_8051F9DC
    lbl_8051F9DC:
        .float 2.0
    .global lbl_8051F9E0
    lbl_8051F9E0:
        .float 0.5
    .global lbl_8051F9E4
    lbl_8051F9E4:
        .float 60.0
    .global lbl_8051F9E8
    lbl_8051F9E8:
        .4byte 0x43300000
        .4byte 0x80000000
*/

namespace ebi {

/*
 * --INFO--
 * Address:	803C9D10
 * Size:	000104
 */
void E3DAnimRes::load(J3DModelData*, JKRArchive*, char*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	mr       r4, r6
	stw      r29, 0x14(r1)
	mr       r29, r3
	mr       r3, r5
	lwz      r12, 0(r5)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	or.      r31, r3, r3
	bne      lbl_803C9D6C
	lis      r3, lbl_80496408@ha
	lis      r5, lbl_80496418@ha
	addi     r3, r3, lbl_80496408@l
	li       r4, 0x14
	addi     r5, r5, lbl_80496418@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803C9D6C:
	mr       r3, r31
	bl       load__20J3DAnmLoaderDataBaseFPCv
	stw      r3, 0(r29)
	lwz      r0, 0x18(r30)
	lwz      r4, 0(r29)
	clrlwi   r3, r0, 0x1c
	bl       J3DNewMtxCalcAnm__FUlP15J3DAnmTransform
	stw      r3, 4(r29)
	lis      r3, 0x4330
	lfs      f0, lbl_8051F9D8@sda21(r2)
	li       r0, 0
	stw      r3, 8(r1)
	lfd      f4, lbl_8051F9E8@sda21(r2)
	stfs     f0, 8(r29)
	lfs      f0, lbl_8051F9DC@sda21(r2)
	lwz      r3, 0(r29)
	lfs      f1, lbl_8051F9E4@sda21(r2)
	lha      r3, 6(r3)
	lfs      f2, lbl_8051F9E0@sda21(r2)
	xoris    r3, r3, 0x8000
	stw      r3, 0xc(r1)
	lfd      f3, 8(r1)
	fsubs    f3, f3, f4
	fsubs    f0, f3, f0
	stfs     f0, 0xc(r29)
	lfs      f0, 8(r29)
	stfs     f0, 0x10(r29)
	lfs      f0, 0xc(r29)
	stfs     f0, 0x14(r29)
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x54(r3)
	fmuls    f0, f1, f0
	fmuls    f0, f2, f0
	stfs     f0, 0x18(r29)
	stw      r0, 0x1c(r29)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803C9E14
 * Size:	000058
 */
void E3DAnimCtrl::setAnimFolder(ebi::E3DAnimFolderBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bne      lbl_803C9E50
	lis      r3, lbl_80496408@ha
	lis      r5, lbl_80496418@ha
	addi     r3, r3, lbl_80496408@l
	li       r4, 0x28
	addi     r5, r5, lbl_80496418@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803C9E50:
	stw      r31, 0x10(r30)
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
 * Address:	803C9E6C
 * Size:	0000A4
 */
void E3DAnimCtrl::init(long, float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	fmr      f31, f1
	lwz      r0, 0x10(r3)
	mr       r31, r4
	cmplwi   r0, 0
	bne      lbl_803C9EBC
	lis      r3, lbl_80496408@ha
	lis      r5, lbl_80496418@ha
	addi     r3, r3, lbl_80496408@l
	li       r4, 0x2f
	addi     r5, r5, lbl_80496418@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803C9EBC:
	lwz      r3, 0x10(r30)
	mr       r4, r31
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r30)
	li       r0, 0
	stfs     f31, 4(r30)
	lwz      r3, 0xc(r30)
	lfs      f0, 8(r3)
	stfs     f0, 0(r30)
	stw      r0, 8(r30)
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void E3DAnimCtrl::setStartFrame(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803C9F10
 * Size:	000080
 */
void E3DAnimCtrl::play(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	bne      lbl_803C9F4C
	lis      r3, lbl_80496408@ha
	lis      r5, lbl_80496418@ha
	addi     r3, r3, lbl_80496408@l
	li       r4, 0x3f
	addi     r5, r5, lbl_80496418@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803C9F4C:
	lwz      r0, 8(r31)
	cmpwi    r0, 3
	beq      lbl_803C9F7C
	lwz      r3, 0xc(r31)
	lwz      r0, 0x1c(r3)
	cmpwi    r0, 1
	bne      lbl_803C9F74
	li       r0, 1
	stw      r0, 8(r31)
	b        lbl_803C9F7C

lbl_803C9F74:
	li       r0, 2
	stw      r0, 8(r31)

lbl_803C9F7C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803C9F90
 * Size:	000064
 */
void E3DAnimCtrl::playStopEnd(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	bne      lbl_803C9FCC
	lis      r3, lbl_80496408@ha
	lis      r5, lbl_80496418@ha
	addi     r3, r3, lbl_80496408@l
	li       r4, 0x4c
	addi     r5, r5, lbl_80496418@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803C9FCC:
	lwz      r0, 8(r31)
	cmpwi    r0, 3
	beq      lbl_803C9FE0
	li       r0, 2
	stw      r0, 8(r31)

lbl_803C9FE0:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void E3DAnimCtrl::stop(void)
{
	// UNUSED FUNCTION
}
} // namespace ebi

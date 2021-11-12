#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_804977F0
    lbl_804977F0:
        .4byte 0x54536372
        .4byte 0x65656E54
        .4byte 0x4D426163
        .4byte 0x6B3A3A73
        .4byte 0x65744172
        .4byte 0x63686976
        .4byte 0x65000000
    .global lbl_8049780C
    lbl_8049780C:
        .4byte 0x746D5F62
        .4byte 0x61636B2E
        .4byte 0x626C6F00
    .global lbl_80497818
    lbl_80497818:
        .4byte 0x65626953
        .4byte 0x63726565
        .4byte 0x6E544D42
        .4byte 0x61636B2E
        .4byte 0x63707000
    .global lbl_8049782C
    lbl_8049782C:
        .asciz "P2Assert"
        .skip 3
    .global lbl_80497838
    lbl_80497838:
        .4byte 0x54536372
        .4byte 0x65656E4E
        .4byte 0x696E7465
        .4byte 0x6E646F4C
        .4byte 0x6F676F3A
        .4byte 0x3A736574
        .4byte 0x41726368
        .4byte 0x69766500
    .global lbl_80497858
    lbl_80497858:
        .4byte 0x746D5F32
        .4byte 0x3030336E
        .4byte 0x696E7465
        .4byte 0x6E646F2E
        .4byte 0x626C6F00
    .global lbl_8049786C
    lbl_8049786C:
        .4byte 0x544E696E
        .4byte 0x74656E64
        .4byte 0x6F4C6F67
        .4byte 0x6F000000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q33ebi6Screen13TNintendoLogo
    __vt__Q33ebi6Screen13TNintendoLogo:
        .4byte 0
        .4byte 0
        .4byte setArchive__Q33ebi6Screen11TScreenBaseFP10JKRArchive
        .4byte openScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen7ArgOpen
        .4byte closeScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen8ArgClose
        .4byte killScreen__Q33ebi6Screen11TScreenBaseFv
        .4byte update__Q33ebi6Screen11TScreenBaseFv
        .4byte draw__Q33ebi6Screen11TScreenBaseFv
        .4byte isFinishScreen__Q33ebi6Screen11TScreenBaseFv
        .4byte doSetArchive__Q33ebi6Screen13TNintendoLogoFP10JKRArchive
        .4byte doOpenScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen7ArgOpen
        .4byte doCloseScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen8ArgClose
        .4byte doKillScreen__Q33ebi6Screen11TScreenBaseFv
        .4byte doInitWaitState__Q33ebi6Screen11TScreenBaseFv
        .4byte doUpdateStateOpen__Q33ebi6Screen11TScreenBaseFv
        .4byte doUpdateStateWait__Q33ebi6Screen13TNintendoLogoFv
        .4byte doUpdateStateClose__Q33ebi6Screen11TScreenBaseFv
        .4byte doDraw__Q33ebi6Screen13TNintendoLogoFv
        .4byte getName__Q33ebi6Screen13TNintendoLogoFv
    .global __vt__Q33ebi6Screen7TTMBack
    __vt__Q33ebi6Screen7TTMBack:
        .4byte 0
        .4byte 0
        .4byte setArchive__Q33ebi6Screen11TScreenBaseFP10JKRArchive
        .4byte openScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen7ArgOpen
        .4byte closeScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen8ArgClose
        .4byte killScreen__Q33ebi6Screen11TScreenBaseFv
        .4byte update__Q33ebi6Screen11TScreenBaseFv
        .4byte draw__Q33ebi6Screen11TScreenBaseFv
        .4byte isFinishScreen__Q33ebi6Screen11TScreenBaseFv
        .4byte doSetArchive__Q33ebi6Screen7TTMBackFP10JKRArchive
        .4byte doOpenScreen__Q33ebi6Screen7TTMBackFPQ33ebi6Screen7ArgOpen
        .4byte doCloseScreen__Q33ebi6Screen7TTMBackFPQ33ebi6Screen8ArgClose
        .4byte doKillScreen__Q33ebi6Screen11TScreenBaseFv
        .4byte doInitWaitState__Q33ebi6Screen11TScreenBaseFv
        .4byte doUpdateStateOpen__Q33ebi6Screen7TTMBackFv
        .4byte doUpdateStateWait__Q33ebi6Screen7TTMBackFv
        .4byte doUpdateStateClose__Q33ebi6Screen7TTMBackFv
        .4byte doDraw__Q33ebi6Screen7TTMBackFv
        .4byte getName__Q33ebi6Screen7TTMBackFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051FDF8
    lbl_8051FDF8:
        .float 0.5
    .global lbl_8051FDFC
    lbl_8051FDFC:
        .4byte 0x00000000
    .global lbl_8051FE00
    lbl_8051FE00:
        .4byte 0x43000000
    .global lbl_8051FE04
    lbl_8051FE04:
        .float 1.0
    .global lbl_8051FE08
    lbl_8051FE08:
        .4byte 0x43300000
        .4byte 0x00000000
*/

namespace ebi {

namespace Screen {

	/*
	 * --INFO--
	 * Address:	803E9C60
	 * Size:	0000B4
	 */
	void TTMBack::doSetArchive(JKRArchive*)
	{
		/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, lbl_804977F0@ha
	stw      r0, 0x14(r1)
	addi     r0, r5, lbl_804977F0@l
	li       r5, 0
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r4, r0
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, sys@sda21(r13)
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r3, 0x148
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_803E9CAC
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	mr       r0, r3

lbl_803E9CAC:
	stw      r0, 0xc(r30)
	lis      r3, lbl_8049780C@ha
	addi     r4, r3, lbl_8049780C@l
	mr       r6, r31
	lwz      r3, 0xc(r30)
	lis      r5, 0x110
	bl       set__9J2DScreenFPCcUlP10JKRArchive
	lwz      r3, 0xc(r30)
	li       r4, 1
	bl       E2DPane_setTreeInfluencedAlpha__3ebiFP7J2DPaneb
	lwz      r3, 0xc(r30)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lis      r4, lbl_804977F0@ha
	lwz      r3, sys@sda21(r13)
	addi     r4, r4, lbl_804977F0@l
	bl       heapStatusEnd__6SystemFPc
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
	 * Address:	803E9D14
	 * Size:	000070
	 */
	void TTMBack::doOpenScreen(ebi::Screen::ArgOpen*)
	{
		/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bne      lbl_803E9D50
	lis      r3, lbl_80497818@ha
	lis      r5, lbl_8049782C@ha
	addi     r3, r3, lbl_80497818@l
	li       r4, 0x21
	addi     r5, r5, lbl_8049782C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803E9D50:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 4(r31)
	lfs      f0, 0x54(r3)
	fdivs    f1, f1, f0
	bl       __cvt_fp2unsigned
	stw      r3, 0x10(r30)
	stw      r3, 0x14(r30)
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
	 * Address:	803E9D84
	 * Size:	000044
	 */
	void TTMBack::doCloseScreen(ebi::Screen::ArgClose*)
	{
		/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f1, lbl_8051FDF8@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r4, sys@sda21(r13)
	lfs      f0, 0x54(r4)
	fdivs    f1, f1, f0
	bl       __cvt_fp2unsigned
	stw      r3, 0x10(r31)
	stw      r3, 0x14(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	803E9DC8
	 * Size:	0000DC
	 */
	void TTMBack::doUpdateStateOpen(void)
	{
		/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lwz      r3, 0x10(r3)
	cmplwi   r3, 0
	beq      lbl_803E9DF0
	addi     r0, r3, -1
	stw      r0, 0x10(r31)

lbl_803E9DF0:
	lwz      r4, 0x14(r31)
	cmplwi   r4, 0
	beq      lbl_803E9E30
	lwz      r3, 0x10(r31)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	lfd      f2, lbl_8051FE08@sda21(r2)
	stw      r3, 0xc(r1)
	lfd      f0, 8(r1)
	stw      r4, 0x14(r1)
	fsubs    f1, f0, f2
	stw      r0, 0x10(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f2
	fdivs    f1, f1, f0
	b        lbl_803E9E34

lbl_803E9E30:
	lfs      f1, lbl_8051FDFC@sda21(r2)

lbl_803E9E34:
	lfs      f0, lbl_8051FE04@sda21(r2)
	lwz      r3, 0xc(r31)
	fsubs    f0, f0, f1
	lfs      f1, lbl_8051FE00@sda21(r2)
	lwz      r12, 0(r3)
	fmuls    f0, f1, f0
	lwz      r12, 0x24(r12)
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r4, 0x1c(r1)
	mtctr    r12
	bctrl
	lwz      r3, 0xc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x10(r31)
	cmplwi   r0, 0
	bne      lbl_803E9E8C
	li       r3, 1
	b        lbl_803E9E90

lbl_803E9E8C:
	li       r3, 0

lbl_803E9E90:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	803E9EA4
	 * Size:	000034
	 */
	void TTMBack::doUpdateStateWait(void)
	{
		/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0xc(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	li       r3, 0
	mtlr     r0
	addi     r1, r1, 0x10
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	803E9ED8
	 * Size:	0000D4
	 */
	void TTMBack::doUpdateStateClose(void)
	{
		/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lwz      r3, 0x10(r3)
	cmplwi   r3, 0
	beq      lbl_803E9F00
	addi     r0, r3, -1
	stw      r0, 0x10(r31)

lbl_803E9F00:
	lwz      r4, 0x14(r31)
	cmplwi   r4, 0
	beq      lbl_803E9F40
	lwz      r3, 0x10(r31)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	lfd      f2, lbl_8051FE08@sda21(r2)
	stw      r3, 0xc(r1)
	lfd      f0, 8(r1)
	stw      r4, 0x14(r1)
	fsubs    f1, f0, f2
	stw      r0, 0x10(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f2
	fdivs    f1, f1, f0
	b        lbl_803E9F44

lbl_803E9F40:
	lfs      f1, lbl_8051FDFC@sda21(r2)

lbl_803E9F44:
	lfs      f0, lbl_8051FE00@sda21(r2)
	lwz      r3, 0xc(r31)
	fmuls    f0, f0, f1
	lwz      r12, 0(r3)
	fctiwz   f0, f0
	lwz      r12, 0x24(r12)
	stfd     f0, 0x18(r1)
	lwz      r4, 0x1c(r1)
	mtctr    r12
	bctrl
	lwz      r3, 0xc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x10(r31)
	cmplwi   r0, 0
	bne      lbl_803E9F94
	li       r3, 1
	b        lbl_803E9F98

lbl_803E9F94:
	li       r3, 0

lbl_803E9F98:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	803E9FAC
	 * Size:	000074
	 */
	void TTMBack::doDraw(void)
	{
		/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r4, sys@sda21(r13)
	lwz      r31, 0x24(r4)
	addi     r30, r31, 0x190
	lwz      r12, 0(r30)
	mr       r3, r30
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xc(r29)
	mr       r4, r31
	mr       r5, r30
	lwz      r12, 0(r3)
	lwz      r12, 0x9c(r12)
	mtctr    r12
	bctrl
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
	 * Address:	803EA020
	 * Size:	000090
	 */
	void TNintendoLogo::doSetArchive(JKRArchive*)
	{
		/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, lbl_80497838@ha
	stw      r0, 0x14(r1)
	addi     r0, r5, lbl_80497838@l
	li       r5, 0
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r4, r0
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, sys@sda21(r13)
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r3, 0x148
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_803EA06C
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	mr       r0, r3

lbl_803EA06C:
	stw      r0, 0xc(r30)
	lis      r3, lbl_80497858@ha
	addi     r4, r3, lbl_80497858@l
	mr       r6, r31
	lwz      r3, 0xc(r30)
	lis      r5, 0x110
	bl       set__9J2DScreenFPCcUlP10JKRArchive
	lis      r4, lbl_80497838@ha
	lwz      r3, sys@sda21(r13)
	addi     r4, r4, lbl_80497838@l
	bl       heapStatusEnd__6SystemFPc
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
	 * Address:	803EA0B0
	 * Size:	000034
	 */
	void TNintendoLogo::doUpdateStateWait(void)
	{
		/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0xc(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	li       r3, 0
	mtlr     r0
	addi     r1, r1, 0x10
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	803EA0E4
	 * Size:	000074
	 */
	void TNintendoLogo::doDraw(void)
	{
		/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r4, sys@sda21(r13)
	lwz      r31, 0x24(r4)
	addi     r30, r31, 0x190
	lwz      r12, 0(r30)
	mr       r3, r30
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xc(r29)
	mr       r4, r31
	mr       r5, r30
	lwz      r12, 0(r3)
	lwz      r12, 0x9c(r12)
	mtctr    r12
	bctrl
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
	 * Address:	803EA158
	 * Size:	00000C
	 */
	void TNintendoLogo::getName(void)
	{
		/*
	lis      r3, lbl_8049786C@ha
	addi     r3, r3, lbl_8049786C@l
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	803EA164
	 * Size:	00000C
	 */
	void TTMBack::getName(void)
	{
		/*
	lis      r3, lbl_8049786C@ha
	addi     r3, r3, lbl_8049786C@l
	blr
		*/
	}
} // namespace Screen
} // namespace ebi

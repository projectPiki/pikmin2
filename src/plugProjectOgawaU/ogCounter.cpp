#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048DE90
    lbl_8048DE90:
        .asciz "0_32.bti"
        .skip 3
    .global lbl_8048DE9C
    lbl_8048DE9C:
        .asciz "1_32.bti"
        .skip 3
    .global lbl_8048DEA8
    lbl_8048DEA8:
        .asciz "2_32.bti"
        .skip 3
    .global lbl_8048DEB4
    lbl_8048DEB4:
        .asciz "3_32.bti"
        .skip 3
    .global lbl_8048DEC0
    lbl_8048DEC0:
        .asciz "4_32.bti"
        .skip 3
    .global lbl_8048DECC
    lbl_8048DECC:
        .asciz "5_32.bti"
        .skip 3
    .global lbl_8048DED8
    lbl_8048DED8:
        .asciz "6_32.bti"
        .skip 3
    .global lbl_8048DEE4
    lbl_8048DEE4:
        .asciz "7_32.bti"
        .skip 3
    .global lbl_8048DEF0
    lbl_8048DEF0:
        .asciz "8_32.bti"
        .skip 3
    .global lbl_8048DEFC
    lbl_8048DEFC:
        .asciz "9_32.bti"
        .skip 3
    .global lbl_8048DF08
    lbl_8048DF08:
        .asciz "h_32.bti"
        .skip 3
    .global lbl_8048DF14
    lbl_8048DF14:
        .asciz "0_28.bti"
        .skip 3
    .global lbl_8048DF20
    lbl_8048DF20:
        .asciz "1_28.bti"
        .skip 3
    .global lbl_8048DF2C
    lbl_8048DF2C:
        .asciz "2_28.bti"
        .skip 3
    .global lbl_8048DF38
    lbl_8048DF38:
        .asciz "3_28.bti"
        .skip 3
    .global lbl_8048DF44
    lbl_8048DF44:
        .asciz "4_28.bti"
        .skip 3
    .global lbl_8048DF50
    lbl_8048DF50:
        .asciz "5_28.bti"
        .skip 3
    .global lbl_8048DF5C
    lbl_8048DF5C:
        .asciz "6_28.bti"
        .skip 3
    .global lbl_8048DF68
    lbl_8048DF68:
        .asciz "7_28.bti"
        .skip 3
    .global lbl_8048DF74
    lbl_8048DF74:
        .asciz "8_28.bti"
        .skip 3
    .global lbl_8048DF80
    lbl_8048DF80:
        .asciz "9_28.bti"
        .skip 3
    .global lbl_8048DF8C
    lbl_8048DF8C:
        .asciz "ogCounter.cpp"
        .skip 2
    .global lbl_8048DF9C
    lbl_8048DF9C:
        .asciz "SujiFont is not found !!!\n"
        .skip 1

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global SujiTex32__Q22og6Screen
    SujiTex32__Q22og6Screen:
        .4byte lbl_8048DE90
        .4byte lbl_8048DE9C
        .4byte lbl_8048DEA8
        .4byte lbl_8048DEB4
        .4byte lbl_8048DEC0
        .4byte lbl_8048DECC
        .4byte lbl_8048DED8
        .4byte lbl_8048DEE4
        .4byte lbl_8048DEF0
        .4byte lbl_8048DEFC
        .4byte lbl_8048DF08
    .global SujiTexMap__Q22og6Screen
    SujiTexMap__Q22og6Screen:
        .4byte lbl_8048DF14
        .4byte lbl_8048DF20
        .4byte lbl_8048DF2C
        .4byte lbl_8048DF38
        .4byte lbl_8048DF44
        .4byte lbl_8048DF50
        .4byte lbl_8048DF5C
        .4byte lbl_8048DF68
        .4byte lbl_8048DF74
        .4byte lbl_8048DF80
        .4byte lbl_8048DF14
*/

namespace og {

namespace Screen {

	/*
	 * --INFO--
	 * Address:	80305E48
	 * Size:	000118
	 */
	void makeSujiFontTable(char**, JKRArchive*)
	{
		/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r24, 0x10(r1)
	mr       r25, r3
	mr       r24, r4
	li       r3, 0x2c
	bl       __nwa__FUl
	cmplwi   r24, 0
	mr       r26, r3
	bne      lbl_80305ED4
	lis      r4, lbl_8048DF8C@ha
	lis      r3, lbl_8048DF9C@ha
	mr       r31, r25
	mr       r28, r26
	addi     r30, r4, lbl_8048DF8C@l
	addi     r29, r3, lbl_8048DF9C@l
	li       r27, 0

lbl_80305E90:
	lwz      r3, 0(r31)
	bl       getNameResource__9J2DScreenFPCc
	stw      r3, 0(r28)
	lwz      r0, 0(r28)
	cmplwi   r0, 0
	bne      lbl_80305EBC
	mr       r3, r30
	mr       r5, r29
	li       r4, 0x51
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80305EBC:
	addi     r27, r27, 1
	addi     r28, r28, 4
	cmpwi    r27, 0xb
	addi     r31, r31, 4
	blt      lbl_80305E90
	b        lbl_80305F48

lbl_80305ED4:
	lis      r4, lbl_8048DF8C@ha
	lis      r3, lbl_8048DF9C@ha
	mr       r28, r25
	mr       r27, r26
	addi     r30, r4, lbl_8048DF8C@l
	addi     r31, r3, lbl_8048DF9C@l
	li       r25, 0
	lis      r29, 0x54494D47@ha

lbl_80305EF4:
	mr       r3, r24
	addi     r4, r29, 0x54494D47@l
	lwz      r12, 0(r24)
	lwz      r5, 0(r28)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0(r27)
	lwz      r0, 0(r27)
	cmplwi   r0, 0
	bne      lbl_80305F34
	mr       r3, r30
	mr       r5, r31
	li       r4, 0x5a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80305F34:
	addi     r25, r25, 1
	addi     r27, r27, 4
	cmpwi    r25, 0xb
	addi     r28, r28, 4
	blt      lbl_80305EF4

lbl_80305F48:
	mr       r3, r26
	lmw      r24, 0x10(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80305F60
	 * Size:	000050
	 */
	void CounterKeta::setSuji(ResTIMG**, unsigned long)
	{
		/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r6, r3
	stw      r0, 0x14(r1)
	stw      r5, 4(r3)
	lwz      r3, 0(r3)
	cmplwi   r3, 0
	beq      lbl_80305FA0
	lwz      r12, 0(r3)
	li       r5, 0
	lwz      r0, 4(r6)
	lwz      r12, 0x110(r12)
	slwi     r0, r0, 2
	lwzx     r4, r4, r0
	mtctr    r12
	bctrl

lbl_80305FA0:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80305FB0
	 * Size:	000088
	 */
	void CounterKeta::calcScale(void)
	{
		/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stfd     f30, 0x10(r1)
	psq_st   f30, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 8(r3)
	bl       calc__Q32og6Screen8ScaleMgrFv
	lfs      f2, 0xc(r31)
	li       r4, 4
	lfs      f0, 0x10(r31)
	fmuls    f31, f2, f1
	lwz      r3, 0(r31)
	fmuls    f30, f0, f1
	bl       setBasePosition__7J2DPaneF15J2DBasePosition
	lwz      r3, 0(r31)
	stfs     f31, 0xcc(r3)
	stfs     f30, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	psq_l    f31, 40(r1), 0, qr0
	lfd      f31, 0x20(r1)
	psq_l    f30, 24(r1), 0, qr0
	lfd      f30, 0x10(r1)
	lwz      r0, 0x34(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
		*/
	}
} // namespace Screen
} // namespace og

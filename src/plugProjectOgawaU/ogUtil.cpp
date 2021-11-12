#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_ogUtil_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048E778
    lbl_8048E778:
        .4byte 0x2F6E6577
        .4byte 0x5F736372
        .4byte 0x65656E2F
        .4byte 0x25732573
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804D8B00
    lbl_804D8B00:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_804D8B0C
    lbl_804D8B0C:
        .4byte lbl_80317FB0
        .4byte lbl_80317FB8
        .4byte lbl_80317FC0
        .4byte lbl_80317FE0
        .4byte lbl_80317FC8
        .4byte lbl_80317FD0
        .4byte lbl_80317FD8

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515E70
    lbl_80515E70:
        .skip 0x4
    .global lbl_80515E74
    lbl_80515E74:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051D8F8
    lbl_8051D8F8:
        .4byte 0x656E672F
        .4byte 0x00000000
    .global lbl_8051D900
    lbl_8051D900:
        .4byte 0x6672612F
        .4byte 0x00000000
    .global lbl_8051D908
    lbl_8051D908:
        .4byte 0x6765722F
        .4byte 0x00000000
    .global lbl_8051D910
    lbl_8051D910:
        .4byte 0x6974612F
        .4byte 0x00000000
    .global lbl_8051D918
    lbl_8051D918:
        .4byte 0x6A706E2F
        .4byte 0x00000000
    .global lbl_8051D920
    lbl_8051D920:
        .4byte 0x7370612F
        .4byte 0x00000000
    .global lbl_8051D928
    lbl_8051D928:
        .4byte 0x00000000
    .global lbl_8051D92C
    lbl_8051D92C:
        .4byte 0x25730000
*/

namespace og {

/*
 * --INFO--
 * Address:	80317F28
 * Size:	000024
 */
void newScreen::checkMovieActive(void)
{
	/*
	lwz      r4, moviePlayer__4Game@sda21(r13)
	li       r3, 0
	cmplwi   r4, 0
	beqlr
	lwz      r0, 0x1f0(r4)
	clrlwi.  r0, r0, 0x1f
	beqlr
	li       r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void newScreen::drawObjName(Graphics&, char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void newScreen::getLanguageDir(char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80317F4C
 * Size:	0000DC
 */
void newScreen::makeLanguageResName(char*, char const*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	lbz      r0, 0(r4)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	cmpwi    r0, 0x2f
	stw      r30, 0x18(r1)
	mr       r30, r3
	bne      lbl_80317F88
	mr       r5, r31
	addi     r4, r2, lbl_8051D92C@sda21
	crclr    6
	bl       sprintf
	b        lbl_80318010

lbl_80317F88:
	lwz      r3, sys@sda21(r13)
	lwz      r0, 0xd4(r3)
	cmplwi   r0, 6
	bgt      lbl_80317FE0
	lis      r3, lbl_804D8B0C@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804D8B0C@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_80317FB0

lbl_80317FB0:
	addi     r5, r2, lbl_8051D8F8@sda21
	b        lbl_80317FE4
	.global  lbl_80317FB8

lbl_80317FB8:
	addi     r5, r2, lbl_8051D900@sda21
	b        lbl_80317FE4
	.global  lbl_80317FC0

lbl_80317FC0:
	addi     r5, r2, lbl_8051D908@sda21
	b        lbl_80317FE4
	.global  lbl_80317FC8

lbl_80317FC8:
	addi     r5, r2, lbl_8051D910@sda21
	b        lbl_80317FE4
	.global  lbl_80317FD0

lbl_80317FD0:
	addi     r5, r2, lbl_8051D918@sda21
	b        lbl_80317FE4
	.global  lbl_80317FD8

lbl_80317FD8:
	addi     r5, r2, lbl_8051D920@sda21
	b        lbl_80317FE4
	.global  lbl_80317FE0

lbl_80317FE0:
	addi     r5, r2, lbl_8051D928@sda21

lbl_80317FE4:
	addi     r3, r1, 8
	addi     r4, r2, lbl_8051D92C@sda21
	crclr    6
	bl       sprintf
	lis      r4, lbl_8048E778@ha
	mr       r3, r30
	addi     r4, r4, lbl_8048E778@l
	mr       r6, r31
	addi     r5, r1, 8
	crclr    6
	bl       sprintf

lbl_80318010:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

} // namespace og

/*
 * --INFO--
 * Address:	80318028
 * Size:	000028
 */
void __sinit_ogUtil_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804D8B00@ha
	stw      r0, lbl_80515E70@sda21(r13)
	stfsu    f0, lbl_804D8B00@l(r3)
	stfs     f0, lbl_80515E74@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}

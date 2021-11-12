#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80474150
    lbl_80474150:
        .asciz "JUTPalette.cpp"
        .skip 1
    .global lbl_80474160
    lbl_80474160:
        .asciz "JUTTexture: TLUT is NULL\n"
        .skip 2
*/

/*
 * --INFO--
 * Address:	8002EEC4
 * Size:	000098
 */
void JUTPalette::storeTLUT(_GXTlut, ResTLUT*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	or.      r31, r5, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	bne      lbl_8002EF08
	lis      r3, lbl_80474150@ha
	lis      r5, lbl_80474160@ha
	addi     r3, r3, lbl_80474150@l
	li       r4, 0x23
	addi     r5, r5, lbl_80474160@l
	crclr    6
	bl       OSPanic

lbl_8002EF08:
	stb      r30, 0xc(r29)
	addi     r0, r31, 0x20
	mr       r3, r29
	lbz      r4, 0(r31)
	stb      r4, 0xd(r29)
	lbz      r4, 1(r31)
	stb      r4, 0x16(r29)
	lhz      r4, 2(r31)
	sth      r4, 0x14(r29)
	stw      r0, 0x10(r29)
	lwz      r4, 0x10(r29)
	lbz      r5, 0xd(r29)
	lhz      r6, 0x14(r29)
	bl       GXInitTlutObj
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
 * Address:	8002EF5C
 * Size:	000040
 */
void JUTPalette::storeTLUT(_GXTlut, _GXTlutFmt, JUTTransparency, unsigned short,
                           void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stb       r4, 0xC(r3)
	  stb       r5, 0xD(r3)
	  stb       r6, 0x16(r3)
	  sth       r7, 0x14(r3)
	  stw       r8, 0x10(r3)
	  lwz       r4, 0x10(r3)
	  lbz       r5, 0xD(r3)
	  lhz       r6, 0x14(r3)
	  bl        0xB87DC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002EF9C
 * Size:	000044
 */
void JUTPalette::load()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lhz      r4, 0x14(r3)
	neg      r0, r4
	or       r0, r0, r4
	rlwinm.  r31, r0, 1, 0x1f, 0x1f
	beq      lbl_8002EFC8
	lbz      r4, 0xc(r3)
	bl       GXLoadTlut

lbl_8002EFC8:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

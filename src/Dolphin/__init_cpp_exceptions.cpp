#include "types.h"

/*
    Generated from dpostproc

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global fragmentID
    fragmentID:
        .4byte 0xFFFFFFFE
*/

/*
 * --INFO--
 * Address:	800C22C4
 * Size:	000008
 */
void GetR2()
{
	/*
	mr       r3, r2
	blr
	*/
}

/*
 * --INFO--
 * Address:	800C22CC
 * Size:	000034
 */
void __fini_cpp_exceptions(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, fragmentID@sda21(r13)
	cmpwi    r3, -2
	beq      lbl_800C22F0
	bl       __unregister_fragment
	li       r0, -2
	stw      r0, fragmentID@sda21(r13)

lbl_800C22F0:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800C2300
 * Size:	000040
 */
void __init_cpp_exceptions(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, fragmentID@sda21(r13)
	cmpwi    r0, -2
	bne      lbl_800C2330
	bl       GetR2__Fv
	lis      r5, lbl_8000569C@ha
	mr       r4, r3
	addi     r3, r5, lbl_8000569C@l
	bl       __register_fragment
	stw      r3, fragmentID@sda21(r13)

lbl_800C2330:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

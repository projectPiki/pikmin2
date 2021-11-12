#include "types.h"

#include "P2JME/TReference.h"
#include "Dolphin/stl.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q25P2JME10TReference
    __vt__Q25P2JME10TReference:
        .4byte 0
        .4byte 0
        .4byte __dt__Q25P2JME10TReferenceFv
        .4byte do_word__Q25P2JME10TReferenceCFUl

    .section .sbss # 0x80514D80 - 0x80516360
    .global frm$674
    frm$674:
        .skip 0x1
    .global init$675
    init$675:
        .skip 0x7

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805208E8
    lbl_805208E8:
        .4byte 0x83658358
        .4byte 0x83670000
    .global lbl_805208F0
    lbl_805208F0:
        .asciz "%d"
        .skip 1
*/

namespace P2JME {

/*
 * --INFO--
 * Address:	8043DB18
 * Size:	000074
 */
// void TReference::do_word(unsigned long arg) const
//{
/* WTF?
    stwu     r1, -0x10(r1)
    mflr     r0
    stw      r0, 0x14(r1)
    lbz      r0, init$675@sda21(r13)
    extsb.   r0, r0
    bne      lbl_8043DB40
    li       r3, 0x22
    li       r0, 1
    stb      r3, frm$674@sda21(r13)
    stb      r0, init$675@sda21(r13)

lbl_8043DB40:
    lbz      r3, frm$674@sda21(r13)
    cmplwi   r4, 0
    addi     r0, r3, 1
    stb      r0, frm$674@sda21(r13)
    bne      lbl_8043DB5C
    addi     r3, r2, lbl_805208E8@sda21
    b        lbl_8043DB7C

lbl_8043DB5C:
    lis      r3, str$673@ha
    clrlwi   r5, r0, 0x18
    addi     r3, r3, str$673@l
    addi     r4, r2, lbl_805208F0@sda21
    crclr    6
    bl       sprintf
    lis      r3, str$673@ha
    addi     r3, r3, str$673@l

lbl_8043DB7C:
    lwz      r0, 0x14(r1)
    mtlr     r0
    addi     r1, r1, 0x10
    blr
*/
// }

/*
 * --INFO--
 * Address:	8043DB8C
 * Size:	000060
 */
TReference::~TReference()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8043DBD0
	lis      r5, __vt__Q25P2JME10TReference@ha
	li       r4, 0
	addi     r0, r5, __vt__Q25P2JME10TReference@l
	stw      r0, 0(r30)
	bl       __dt__Q28JMessage10TReferenceFv
	extsh.   r0, r31
	ble      lbl_8043DBD0
	mr       r3, r30
	bl       __dl__FPv

lbl_8043DBD0:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace P2JME

#include "types.h"
#include "JSystem/JUT/JUTNameTab.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__10JUTNameTab
    __vt__10JUTNameTab:
        .4byte 0
        .4byte 0
        .4byte __dt__10JUTNameTabFv
        .4byte 0
*/

/*
 * --INFO--
 * Address:	8002ECCC
 * Size:	000040
 */
JUTNameTab::JUTNameTab()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, __vt__10JUTNameTab@ha
	stw      r0, 0x14(r1)
	addi     r0, r4, __vt__10JUTNameTab@l
	li       r4, 0
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r0, 0(r3)
	bl       setResource__10JUTNameTabFPC7ResNTAB
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8002ED0C
 * Size:	00003C
 */
JUTNameTab::JUTNameTab(const ResNTAB*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, __vt__10JUTNameTab@ha
	stw      r0, 0x14(r1)
	addi     r0, r5, __vt__10JUTNameTab@l
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r0, 0(r3)
	bl       setResource__10JUTNameTabFPC7ResNTAB
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
JUTNameTab::JUTNameTab(const JUTNameTab&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002ED48
 * Size:	00003C
 */
void JUTNameTab::setResource(const ResNTAB*)
{
	/*
	cmplwi   r4, 0
	stw      r4, 4(r3)
	beq      lbl_8002ED74
	lhz      r0, 0(r4)
	sth      r0, 0xc(r3)
	lhz      r0, 0xc(r3)
	slwi     r5, r0, 2
	addi     r0, r5, 4
	add      r0, r4, r0
	stw      r0, 8(r3)
	blr

lbl_8002ED74:
	li       r0, 0
	sth      r0, 0xc(r3)
	stw      r0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8002ED84
 * Size:	000098
 */
void JUTNameTab::getIndex(const char*) const
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lwz      r5, 4(r3)
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r27, r3
	mr       r26, r4
	addi     r28, r5, 4
	bl       calcKeyCode__10JUTNameTabCFPCc
	lwz      r29, 4(r27)
	clrlwi   r30, r3, 0x10
	lhz      r31, 0xc(r27)
	li       r27, 0
	b        lbl_8002EDF8

lbl_8002EDBC:
	lhz      r0, 0(r28)
	cmplw    r0, r30
	bne      lbl_8002EDF0
	rlwinm   r3, r27, 2, 0xe, 0x1d
	mr       r4, r26
	addi     r0, r3, 6
	lhzx     r0, r29, r0
	add      r3, r29, r0
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_8002EDF0
	clrlwi   r3, r27, 0x10
	b        lbl_8002EE08

lbl_8002EDF0:
	addi     r28, r28, 4
	addi     r27, r27, 1

lbl_8002EDF8:
	clrlwi   r0, r27, 0x10
	cmplw    r0, r31
	blt      lbl_8002EDBC
	li       r3, -1

lbl_8002EE08:
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8002EE1C
 * Size:	000030
 */
char* JUTNameTab::getName(ushort) const
{
	/*
	lhz      r0, 0xc(r3)
	clrlwi   r5, r4, 0x10
	cmplw    r5, r0
	bge      lbl_8002EE44
	lwz      r5, 4(r3)
	rlwinm   r0, r4, 2, 0xe, 0x1d
	add      r3, r5, r0
	lhz      r0, 6(r3)
	add      r3, r5, r0
	blr

lbl_8002EE44:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8002EE4C
 * Size:	000030
 */
void JUTNameTab::calcKeyCode(const char*) const
{
	/*
	li       r5, 0
	b        lbl_8002EE68

lbl_8002EE54:
	lbz      r3, 0(r4)
	mulli    r0, r5, 3
	addi     r4, r4, 1
	extsb    r3, r3
	add      r5, r3, r0

lbl_8002EE68:
	lbz      r0, 0(r4)
	extsb.   r0, r0
	bne      lbl_8002EE54
	clrlwi   r3, r5, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8002EE7C
 * Size:	000048
 */
JUTNameTab::~JUTNameTab()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_8002EEAC
	lis      r5, __vt__10JUTNameTab@ha
	extsh.   r0, r4
	addi     r0, r5, __vt__10JUTNameTab@l
	stw      r0, 0(r31)
	ble      lbl_8002EEAC
	bl       __dl__FPv

lbl_8002EEAC:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

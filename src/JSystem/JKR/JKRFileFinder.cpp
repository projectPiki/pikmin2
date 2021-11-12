#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__12JKRDvdFinder
    __vt__12JKRDvdFinder:
        .4byte 0
        .4byte 0
        .4byte __dt__12JKRDvdFinderFv
        .4byte findNextFile__12JKRDvdFinderFv
    .global __vt__12JKRArcFinder
    __vt__12JKRArcFinder:
        .4byte 0
        .4byte 0
        .4byte __dt__12JKRArcFinderFv
        .4byte findNextFile__12JKRArcFinderFv
*/

/*
 * --INFO--
 * Address:	80022ADC
 * Size:	00008C
 */
JKRArcFinder::JKRArcFinder(JKRArchive*, long, long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r9, __vt__13JKRFileFinder@ha
	lis      r8, __vt__12JKRArcFinder@ha
	stw      r0, 0x14(r1)
	addi     r0, r6, -1
	neg      r7, r6
	addi     r9, r9, __vt__13JKRFileFinder@l
	stw      r31, 0xc(r1)
	andc     r6, r7, r6
	addi     r7, r8, __vt__12JKRArcFinder@l
	add      r0, r5, r0
	stw      r9, 0xc(r3)
	li       r9, 0
	srwi     r6, r6, 0x1f
	mr       r31, r3
	stb      r9, 0x10(r3)
	stb      r9, 0x11(r3)
	stw      r7, 0xc(r3)
	stw      r4, 0x14(r3)
	stb      r6, 0x10(r3)
	stw      r5, 0x18(r3)
	stw      r0, 0x1c(r3)
	lwz      r0, 0x18(r3)
	stw      r0, 0x20(r3)
	lwz      r12, 0xc(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
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
 * Address:	80022B68
 * Size:	0000AC
 */
void JKRArcFinder::findNextFile()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lbz      r0, 0x10(r3)
	cmplwi   r0, 0
	beq      lbl_80022BFC
	lwz      r0, 0x1c(r31)
	lwz      r5, 0x20(r31)
	srawi    r4, r0, 0x1f
	srwi     r3, r5, 0x1f
	subfc    r0, r5, r0
	adde     r0, r4, r3
	stb      r0, 0x10(r31)
	lbz      r0, 0x10(r31)
	cmplwi   r0, 0
	beq      lbl_80022BFC
	lwz      r3, 0x14(r31)
	addi     r4, r1, 8
	lwz      r5, 0x20(r31)
	bl       getDirEntry__10JKRArchiveCFPQ210JKRArchive9SDirEntryUl
	stb      r3, 0x10(r31)
	lwz      r0, 0xc(r1)
	stw      r0, 0(r31)
	lwz      r0, 0x20(r31)
	stw      r0, 4(r31)
	lhz      r0, 0xa(r1)
	sth      r0, 8(r31)
	lbz      r0, 8(r1)
	sth      r0, 0xa(r31)
	lhz      r0, 0xa(r31)
	rlwinm   r0, r0, 0x1f, 0x1f, 0x1f
	stb      r0, 0x11(r31)
	lwz      r3, 0x20(r31)
	addi     r0, r3, 1
	stw      r0, 0x20(r31)

lbl_80022BFC:
	lwz      r0, 0x24(r1)
	lbz      r3, 0x10(r31)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80022C14
 * Size:	000088
 */
JKRDvdFinder::JKRDvdFinder(const char*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r6, __vt__13JKRFileFinder@ha
	lis      r5, __vt__12JKRDvdFinder@ha
	stw      r0, 0x14(r1)
	addi     r0, r6, __vt__13JKRFileFinder@l
	li       r6, 0
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r0, 0xc(r3)
	mr       r3, r4
	addi     r0, r5, __vt__12JKRDvdFinder@l
	addi     r4, r31, 0x14
	stb      r6, 0x10(r31)
	stb      r6, 0x11(r31)
	stw      r0, 0xc(r31)
	bl       DVDOpenDir
	neg      r0, r3
	or       r0, r0, r3
	mr       r3, r31
	srwi     r0, r0, 0x1f
	stb      r0, 0x20(r31)
	lbz      r0, 0x20(r31)
	stb      r0, 0x10(r31)
	lwz      r12, 0xc(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
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
 * Address:	80022C9C
 * Size:	000080
 */
JKRDvdFinder::~JKRDvdFinder()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80022D00
	lis      r3, __vt__12JKRDvdFinder@ha
	addi     r0, r3, __vt__12JKRDvdFinder@l
	stw      r0, 0xc(r30)
	lbz      r0, 0x20(r30)
	cmplwi   r0, 0
	beq      lbl_80022CDC
	addi     r3, r30, 0x14
	bl       DVDCloseDir

lbl_80022CDC:
	cmplwi   r30, 0
	beq      lbl_80022CF0
	lis      r3, __vt__13JKRFileFinder@ha
	addi     r0, r3, __vt__13JKRFileFinder@l
	stw      r0, 0xc(r30)

lbl_80022CF0:
	extsh.   r0, r31
	ble      lbl_80022D00
	mr       r3, r30
	bl       __dl__FPv

lbl_80022D00:
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
 * Address:	80022D1C
 * Size:	0000A4
 */
void JKRDvdFinder::findNextFile()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lbz      r0, 0x10(r3)
	cmplwi   r0, 0
	beq      lbl_80022DA8
	addi     r3, r31, 0x14
	addi     r4, r1, 8
	bl       DVDReadDir
	neg      r0, r3
	or       r0, r0, r3
	srwi     r0, r0, 0x1f
	stb      r0, 0x10(r31)
	lbz      r0, 0x10(r31)
	cmplwi   r0, 0
	beq      lbl_80022DA8
	lwz      r5, 0xc(r1)
	li       r0, 0
	li       r3, 1
	neg      r4, r5
	or       r4, r4, r5
	srwi     r4, r4, 0x1f
	stb      r4, 0x11(r31)
	lwz      r4, 0x10(r1)
	stw      r4, 0(r31)
	lwz      r4, 8(r1)
	stw      r4, 4(r31)
	sth      r0, 8(r31)
	lbz      r0, 0x11(r31)
	cmplwi   r0, 0
	beq      lbl_80022DA4
	li       r3, 2

lbl_80022DA4:
	sth      r3, 0xa(r31)

lbl_80022DA8:
	lwz      r0, 0x24(r1)
	lbz      r3, 0x10(r31)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80022DC0
 * Size:	00005C
 */
JKRArcFinder::~JKRArcFinder()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_80022E04
	lis      r3, __vt__12JKRArcFinder@ha
	addi     r0, r3, __vt__12JKRArcFinder@l
	stw      r0, 0xc(r31)
	beq      lbl_80022DF4
	lis      r3, __vt__13JKRFileFinder@ha
	addi     r0, r3, __vt__13JKRFileFinder@l
	stw      r0, 0xc(r31)

lbl_80022DF4:
	extsh.   r0, r4
	ble      lbl_80022E04
	mr       r3, r31
	bl       __dl__FPv

lbl_80022E04:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

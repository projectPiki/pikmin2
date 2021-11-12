#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80499C00
    lbl_80499C00:
        .asciz "ChildSection::init"
        .skip 5

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__11MenuSection
    __vt__11MenuSection:
        .4byte 0
        .4byte 0
        .4byte __dt__11MenuSectionFv
        .4byte run__11MenuSectionFv
        .4byte update__7SectionFv
        .4byte draw__7SectionFR8Graphics
        .4byte init__7SectionFv
        .4byte drawInit__7SectionFR8Graphics
        .4byte drawInit__7SectionFR8GraphicsQ27Section13EDrawInitMode
        .4byte doExit__7SectionFv
        .4byte forceFinish__7SectionFv
        .4byte forceReset__7SectionFv
        .4byte getCurrentSection__11MenuSectionFv
        .4byte doLoadingStart__7SectionFv
        .4byte doLoading__7SectionFv
        .4byte 0
        .4byte 0
        .4byte isFinishable__7SectionFv
        .4byte 0
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805204A8
    lbl_805204A8:
        .4byte 0x42700000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	804245CC
 * Size:	000048
 */
MenuSection::MenuSection(JFWDisplay*, JKRHeap*, bool)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__7SectionFP10JFWDisplayP7JKRHeapb
	lis      r3, __vt__11MenuSection@ha
	li       r0, 0
	addi     r4, r3, __vt__11MenuSection@l
	mr       r3, r31
	stw      r4, 0(r31)
	stw      r0, 0x40(r31)
	stb      r0, 0x3c(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80424614
 * Size:	000054
 */
void MenuSection::run()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	li       r31, 1
	stw      r30, 8(r1)
	mr       r30, r3
	stb      r0, 0x3c(r3)

lbl_80424638:
	stb      r31, 0x34(r30)
	mr       r3, r30
	bl       runChildSection__11MenuSectionFv
	lbz      r0, 0x3c(r30)
	cmplwi   r0, 0
	beq      lbl_80424638
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
 * Address:	80424668
 * Size:	000148
 */
void MenuSection::runChildSection()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       getFreeSize__7JKRHeapFv
	lwz      r31, 0x1c(r29)
	mr       r3, r31
	bl       getFreeSize__7JKRHeapFv
	mr       r4, r31
	li       r5, 1
	bl       create__10JKRExpHeapFUlP7JKRHeapb
	mr       r31, r3
	bl       becomeCurrentHeap__7JKRHeapFv
	mr       r0, r3
	mr       r3, r29
	lwz      r12, 0(r29)
	mr       r30, r0
	mr       r4, r31
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r29)
	lwz      r0, 0x40(r29)
	cmplwi   r0, 0
	beq      lbl_8042476C
	lis      r4, lbl_80499C00@ha
	lwz      r3, sys@sda21(r13)
	addi     r4, r4, lbl_80499C00@l
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	lwz      r3, 0x40(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lis      r4, lbl_80499C00@ha
	lwz      r3, sys@sda21(r13)
	addi     r4, r4, lbl_80499C00@l
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	lfs      f0, lbl_805204A8@sda21(r2)
	lfs      f1, 0x64(r3)
	fdivs    f0, f1, f0
	stfs     f0, 0x54(r3)
	lwz      r3, 0x40(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x40(r29)
	bl       exit__7SectionFv
	lwz      r3, 0x40(r29)
	cmplwi   r3, 0
	beq      lbl_80424764
	lwz      r12, 0(r3)
	li       r4, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80424764:
	li       r0, 0
	stw      r0, 0x40(r29)

lbl_8042476C:
	mr       r3, r31
	bl       destroy__7JKRHeapFv
	mr       r3, r30
	bl       becomeCurrentHeap__7JKRHeapFv
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       getFreeSize__7JKRHeapFv
	lwz      r3, 0x40(r29)
	neg      r0, r3
	or       r0, r0, r3
	srwi     r3, r0, 0x1f
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
 * Address:	804247B0
 * Size:	000060
 */
MenuSection::~MenuSection()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_804247F4
	lis      r5, __vt__11MenuSection@ha
	li       r4, 0
	addi     r0, r5, __vt__11MenuSection@l
	stw      r0, 0(r30)
	bl       __dt__7SectionFv
	extsh.   r0, r31
	ble      lbl_804247F4
	mr       r3, r30
	bl       __dl__FPv

lbl_804247F4:
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
 * Address:	80424810
 * Size:	000008
 */
void MenuSection::getCurrentSection()
{
	/*
	lwz      r3, 0x40(r3)
	blr
	*/
}

#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8049AB98
    lbl_8049AB98:
        .asciz "messageObj.cpp"
        .skip 1
    .global lbl_8049ABA8
    lbl_8049ABA8:
        .asciz "P2Assert"
        .skip 3
    .global lbl_8049ABB4
    lbl_8049ABB4:
        .4byte 0x4A4D6573
        .4byte 0x73616765
        .4byte 0x8EC09195
        .4byte 0x834E8389
        .4byte 0x83580000
    .global lbl_8049ABC8
    lbl_8049ABC8:
        .4byte 0x8CC295CA
        .4byte 0x8F898AFA
        .4byte 0x89BB0000
    .global lbl_8049ABD4
    lbl_8049ABD4:
        .asciz "messageObj.h"
        .skip 7

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q25P2JME8TControl
    __vt__Q25P2JME8TControl:
        .4byte 0
        .4byte 0
        .4byte __dt__Q25P2JME8TControlFv
        .4byte reset__Q25P2JME8TControlFv
        .4byte update__Q25P2JME8TControlFv
        .4byte update__Q25P2JME8TControlFP10ControllerP10Controller
        .4byte draw__Q25P2JME8TControlFR8Graphics
        .4byte draw__Q25P2JME8TControlFPA4_fPA4_f
        .4byte setMessageID__Q25P2JME8TControlFUlUl
        .4byte setMessageID__Q25P2JME8TControlFPc
        .4byte setMessageID__Q25P2JME8TControlFUx
        .4byte setMessageCode__Q25P2JME8TControlFUsUs
        .4byte setMessageCode__Q25P2JME8TControlFUl
        .4byte onInit__Q25P2JME8TControlFv
        .4byte createReference__Q25P2JME8TControlFv
        .4byte createResourceContainer__Q25P2JME8TControlFv
        .4byte createSequenceProcessor__Q25P2JME8TControlFv
        .4byte createRenderingProcessor__Q25P2JME8TControlFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805208A8
    lbl_805208A8:
        .float 0.0
        .skip 4
    .global lbl_805208B0
    lbl_805208B0:
        .4byte 0x43300000
        .4byte 0x80000000
*/

namespace P2JME {

/*
 * --INFO--
 * Address:	80438A34
 * Size:	000074
 */
TControl::TControl(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q28JMessage8TControlFv
	lis      r3, __vt__Q25P2JME8TControl@ha
	li       r0, 0
	addi     r3, r3, __vt__Q25P2JME8TControl@l
	lfs      f0, lbl_805208A8@sda21(r2)
	stw      r3, 0(r31)
	mr       r3, r31
	stw      r0, 0x3c(r31)
	stw      r0, 0x40(r31)
	stw      r0, 0x44(r31)
	stfs     f0, 0x48(r31)
	stb      r0, 0x4c(r31)
	stb      r0, 0x4d(r31)
	stb      r0, 0x4e(r31)
	stb      r0, 0x4f(r31)
	stb      r0, 0x4c(r31)
	stb      r0, 0x4d(r31)
	stb      r0, 0x4e(r31)
	stb      r0, 0x4f(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80438AA8
 * Size:	000024
 */
void TControl::setController(Controller*, Controller*)
{
	/*
	lwz      r6, 0x3c(r3)
	cmplwi   r6, 0
	beq      lbl_80438AC4
	stw      r4, 0x54(r6)
	li       r3, 1
	stw      r5, 0x58(r6)
	blr

lbl_80438AC4:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80438ACC
 * Size:	00006C
 */
void TControl::setFont(JUTFont*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 0x40(r3)
	cmplwi   r0, 0
	bne      lbl_80438B10
	lis      r3, lbl_8049AB98@ha
	lis      r5, lbl_8049ABA8@ha
	addi     r3, r3, lbl_8049AB98@l
	li       r4, 0x4d
	addi     r5, r5, lbl_8049ABA8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80438B10:
	lwz      r3, 0x40(r30)
	mr       r4, r31
	bl       setFont__Q25P2JME19TRenderingProcessorFP7JUTFont
	lwz      r0, 0x14(r1)
	li       r3, 1
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80438B38
 * Size:	00009C
 */
void TControl::setRubyFont(JUTFont*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 0x40(r3)
	cmplwi   r0, 0
	bne      lbl_80438B7C
	lis      r3, lbl_8049AB98@ha
	lis      r5, lbl_8049ABA8@ha
	addi     r3, r3, lbl_8049AB98@l
	li       r4, 0x58
	addi     r5, r5, lbl_8049ABA8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80438B7C:
	cmplwi   r31, 0
	bne      lbl_80438B90
	lwz      r3, gP2JMEMgr@sda21(r13)
	lwz      r31, 0x1c(r3)
	b        lbl_80438BB0

lbl_80438B90:
	bne      lbl_80438BB0
	lis      r3, lbl_8049AB98@ha
	lis      r5, lbl_8049ABA8@ha
	addi     r3, r3, lbl_8049AB98@l
	li       r4, 0x62
	addi     r5, r5, lbl_8049ABA8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80438BB0:
	lwz      r4, 0x40(r30)
	li       r3, 1
	stw      r31, 0x50(r4)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80438BD4
 * Size:	000104
 */
void TControl::init(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, lbl_8049ABB4@ha
	li       r5, 0
	stw      r0, 0x14(r1)
	addi     r4, r4, lbl_8049ABB4@l
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, sys@sda21(r13)
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lis      r4, lbl_8049ABB4@ha
	lwz      r3, sys@sda21(r13)
	addi     r4, r4, lbl_8049ABB4@l
	bl       heapStatusEnd__6SystemFPc
	lwz      r0, 0x44(r31)
	lis      r3, lbl_8049ABC8@ha
	lwz      r6, 0x38(r31)
	addi     r4, r3, lbl_8049ABC8@l
	li       r5, 0
	stw      r0, 4(r6)
	lwz      r0, 0x3c(r31)
	stw      r0, 4(r31)
	lwz      r0, 0x40(r31)
	stw      r0, 8(r31)
	lwz      r3, sys@sda21(r13)
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	mr       r3, r31
	li       r31, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80438CB0
	li       r31, 1

lbl_80438CB0:
	lis      r4, lbl_8049ABC8@ha
	lwz      r3, sys@sda21(r13)
	addi     r4, r4, lbl_8049ABC8@l
	bl       heapStatusEnd__6SystemFPc
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
 * Address:	80438CD8
 * Size:	000008
 */
u32 TControl::onInit(void) { return 0x1; }

/*
 * --INFO--
 * Address:	80438CE0
 * Size:	00007C
 */
void TControl::createRenderingProcessor(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 0x110
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80438D40
	lwz      r0, 0x38(r30)
	cmplwi   r0, 0
	bne      lbl_80438D30
	lis      r3, lbl_8049ABD4@ha
	lis      r5, lbl_8049ABA8@ha
	addi     r3, r3, lbl_8049ABD4@l
	li       r4, 0x79
	addi     r5, r5, lbl_8049ABA8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80438D30:
	lwz      r4, 0x38(r30)
	mr       r3, r31
	bl       __ct__Q25P2JME19TRenderingProcessorFPCQ28JMessage10TReference
	mr       r31, r3

lbl_80438D40:
	stw      r31, 0x40(r30)
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
 * Address:	80438D5C
 * Size:	000080
 */
void TControl::createSequenceProcessor(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 0x70
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80438DC0
	lwz      r0, 0x38(r30)
	cmplwi   r0, 0
	bne      lbl_80438DAC
	lis      r3, lbl_8049ABD4@ha
	lis      r5, lbl_8049ABA8@ha
	addi     r3, r3, lbl_8049ABD4@l
	li       r4, 0x79
	addi     r5, r5, lbl_8049ABA8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80438DAC:
	lwz      r4, 0x38(r30)
	mr       r3, r31
	mr       r5, r30
	bl
__ct__Q25P2JME18TSequenceProcessorFPCQ28JMessage10TReferencePQ28JMessage8TControl
	mr       r31, r3

lbl_80438DC0:
	stw      r31, 0x3c(r30)
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
 * Address:	80438DDC
 * Size:	000070
 */
void TControl::reset(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       reset__Q28JMessage8TControlFv
	lfs      f0, lbl_805208A8@sda21(r2)
	li       r0, 0
	stfs     f0, 0x48(r31)
	stb      r0, 0x4c(r31)
	stb      r0, 0x4d(r31)
	stb      r0, 0x4e(r31)
	stb      r0, 0x4f(r31)
	lwz      r3, 0x3c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x74(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x40(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80438E4C
 * Size:	00008C
 */
void TControl::update(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	bl       update__Q28JMessage8TControlFv
	lwz      r0, 0x40(r30)
	mr       r31, r3
	cmplwi   r0, 0
	beq      lbl_80438E8C
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl

lbl_80438E8C:
	lwz      r3, 0x4c(r30)
	clrlwi.  r0, r3, 0x1f
	beq      lbl_80438EAC
	clrlwi.  r0, r31, 0x18
	bne      lbl_80438EBC
	ori      r0, r3, 2
	stw      r0, 0x4c(r30)
	b        lbl_80438EBC

lbl_80438EAC:
	clrlwi.  r0, r31, 0x18
	beq      lbl_80438EBC
	ori      r0, r3, 1
	stw      r0, 0x4c(r30)

lbl_80438EBC:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80438ED8
 * Size:	000004
 */
void TRenderingProcessor::update(void) { }

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void TControl::drawCommon(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80438EDC
 * Size:	000020
 */
void TControl::draw(Graphics&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       render__Q28JMessage8TControlFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80438EFC
 * Size:	000080
 */
void TControl::draw(float (*)[4], float (*)[4])
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r0, 0x40(r3)
	cmplwi   r0, 0
	bne      lbl_80438F48
	lis      r3, lbl_8049AB98@ha
	lis      r5, lbl_8049ABA8@ha
	addi     r3, r3, lbl_8049AB98@l
	li       r4, 0x101
	addi     r5, r5, lbl_8049ABA8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80438F48:
	lwz      r4, 0x40(r29)
	mr       r3, r29
	stw      r30, 0x44(r4)
	lwz      r4, 0x40(r29)
	stw      r31, 0x48(r4)
	bl       render__Q28JMessage8TControlFv
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
 * Address:	80438F7C
 * Size:	000050
 */
void TControl::setLocate(int, int)
{
	/*
	stwu     r1, -0x20(r1)
	lis      r6, 0x4330
	xoris    r0, r4, 0x8000
	lfd      f2, lbl_805208B0@sda21(r2)
	stw      r0, 0xc(r1)
	xoris    r0, r5, 0x8000
	lwz      r3, 0x40(r3)
	stw      r6, 8(r1)
	lfd      f0, 8(r1)
	stw      r0, 0x14(r1)
	fsubs    f1, f0, f2
	stw      r6, 0x10(r1)
	lfd      f0, 0x10(r1)
	stfs     f1, 0x90(r3)
	fsubs    f0, f0, f2
	stfs     f1, 0x98(r3)
	stfs     f0, 0x94(r3)
	stfs     f0, 0x9c(r3)
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80438FCC
 * Size:	000054
 */
void TControl::setMessageID(char*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	addi     r5, r1, 8
	stw      r31, 0x1c(r1)
	mr       r31, r3
	mr       r3, r4
	addi     r4, r1, 0xc
	bl       convertCharToMessageID__5P2JMEFPcPUlPUl
	mr       r3, r31
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r31)
	lwz      r5, 8(r1)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80439020
 * Size:	000084
 */
void TControl::setMessageID(unsigned long, unsigned long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r3, r28
	mr       r4, r29
	mr       r5, r30
	li       r6, 0
	bl       setMessageID__Q28JMessage8TControlFUlUlPb
	mr       r31, r3
	lwz      r3, 0x40(r28)
	mr       r4, r29
	mr       r5, r30
	bl       preProcID__Q25P2JME19TRenderingProcessorFUiUi
	lwz      r0, 0x24(r1)
	clrlwi   r3, r31, 0x18
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	804390A4
 * Size:	00007C
 */
void TControl::setMessageCode(unsigned short, unsigned short)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	mr       r4, r30
	mr       r5, r31
	bl       setMessageCode__Q28JMessage8TControlFUsUs
	lhz      r0, 0xc(r29)
	mr       r31, r3
	lhz      r4, 0xe(r29)
	lwz      r3, 0x40(r29)
	rlwimi   r4, r0, 0x10, 0, 0xf
	bl       preProcCode__Q25P2JME19TRenderingProcessorFUi
	lwz      r0, 0x24(r1)
	clrlwi   r3, r31, 0x18
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
 * Address:	80439120
 * Size:	000070
 */
void TControl::setMessageCode(unsigned long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	srwi     r4, r30, 0x10
	mr       r3, r29
	clrlwi   r5, r30, 0x10
	bl       setMessageCode__Q28JMessage8TControlFUsUs
	mr       r31, r3
	lwz      r3, 0x40(r29)
	mr       r4, r30
	bl       preProcCode__Q25P2JME19TRenderingProcessorFUi
	lwz      r0, 0x24(r1)
	clrlwi   r3, r31, 0x18
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
 * Address:	80439190
 * Size:	000060
 */
TControl::~TControl(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_804391D4
	lis      r5, __vt__Q25P2JME8TControl@ha
	li       r4, 0
	addi     r0, r5, __vt__Q25P2JME8TControl@l
	stw      r0, 0(r30)
	bl       __dt__Q28JMessage8TControlFv
	extsh.   r0, r31
	ble      lbl_804391D4
	mr       r3, r30
	bl       __dl__FPv

lbl_804391D4:
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

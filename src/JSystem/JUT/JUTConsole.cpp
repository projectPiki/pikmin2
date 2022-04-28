#include "types.h"
#include "JSystem/JUT/JUTConsole.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .balign 8
    .global __vt__10JUTConsole
    __vt__10JUTConsole:
        .4byte 0
        .4byte 0
        .4byte __dt__10JUTConsoleFv

    .section .sbss # 0x80514D80 - 0x80516360
    .balign 8
    .global sManager__17JUTConsoleManager
    sManager__17JUTConsoleManager:
        .skip 0x4
    sReportConsole: # local object
        .skip 0x4
    sWarningConsole: # local object
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .balign 8
    lbl_80516568:
        .float 2.0
    lbl_8051656C:
        .float 0.0
    lbl_80516570:
        .float 640.0
    lbl_80516574:
        .float 480.0
    lbl_80516578:
        .float -1.0
    lbl_8051657C:
        .float 1.0
    lbl_80516580:
        .float 4.0
    .balign 8
    lbl_80516588:
        .4byte 0x43300000
        .4byte 0x00000000
    .balign 8
    lbl_80516590:
        .4byte 0x43300000
        .4byte 0x80000000
    .balign 4
    lbl_80516598:
        .asciz "%s"
*/

/*
 * --INFO--
 * Address:	800280DC
 * Size:	000088
 */
JUTConsole* JUTConsole::create(unsigned int param_0, unsigned int param_1, JKRHeap* param_2)
{
	JUTConsoleManager* mgr = JUTConsoleManager::sManager;
	u32 byteCount          = getObjectSizeFromBufferSize(param_0, param_1);
	void* buf              = JKRHeap::alloc(byteCount, 0, param_2);
	u8* mem                = (u8*)buf;
	JUTConsole* console    = new (mem) JUTConsole(param_0, param_1, true);
	console->mBuf          = mem + sizeof(JUTConsole);
	console->clear();

	mgr->appendConsole(console);
	return console;
}

/*
 * --INFO--
 * Address:	80028164
 * Size:	000098
 */
JUTConsole* JUTConsole::create(unsigned int param_0, void* param_1, u32 param_2)
{
	JUTConsoleManager* mgr = JUTConsoleManager::sManager;
	u32 byteCount          = getLineFromObjectSize(param_2, param_0);
	u8* mem                = (u8*)param_1;
	JUTConsole* console    = new (mem) JUTConsole(param_0, byteCount, false);
	console->mBuf          = mem + sizeof(JUTConsole);
	console->clear();

	mgr->appendConsole(console);
	return console;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void JUTConsole::destroy(JUTConsole*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800281FC
 * Size:	000100
 */
JUTConsole::JUTConsole(unsigned int param_0, unsigned int param_1, bool param_2)
{
	field_0x2c = param_2;
	field_0x20 = param_0;
	field_0x24 = param_1;

	mPositionX = 30;
	mPositionY = 50;
	mHeight    = 20;

	if (mHeight > field_0x24) {
		mHeight = field_0x24;
	}

	mFont      = nullptr;
	mVisible   = true;
	field_0x69 = false;
	field_0x6a = false;
	field_0x6b = false;
	mOutput    = 1;

	field_0x5c.set(0, 0, 0, 100);
	field_0x60.set(0, 0, 0, 230);
	field_0x64 = 8;
}

/*
 * --INFO--
 * Address:	800282FC
 * Size:	000070
 */
JUTConsole::~JUTConsole()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80028350
	lis      r3, __vt__10JUTConsole@ha
	mr       r4, r30
	addi     r0, r3, __vt__10JUTConsole@l
	stw      r0, 0(r30)
	lwz      r3, sManager__17JUTConsoleManager@sda21(r13)
	bl       removeConsole__17JUTConsoleManagerFP10JUTConsole
	mr       r3, r30
	li       r4, 0
	bl       __dt__11JKRDisposerFv
	extsh.   r0, r31
	ble      lbl_80028350
	mr       r3, r30
	bl       __dl__FPv

lbl_80028350:
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
 * Address:	8002836C
 * Size:	000010
 */
size_t JUTConsole::getObjectSizeFromBufferSize(unsigned int, unsigned int)
{
	/*
	addi     r0, r3, 2
	mullw    r3, r0, r4
	addi     r3, r3, 0x6c
	blr
	*/
}

/*
 * --INFO--
 * Address:	8002837C
 * Size:	000010
 */
size_t JUTConsole::getLineFromObjectSize(unsigned long, unsigned int)
{
	/*
	addi     r3, r3, -108
	addi     r0, r4, 2
	divwu    r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8002838C
 * Size:	00005C
 */
void JUTConsole::clear()
{
	/*
	li       r6, 0
	li       r7, 0
	stw      r6, 0x30(r3)
	stw      r6, 0x34(r3)
	stw      r6, 0x38(r3)
	stw      r6, 0x3c(r3)
	b        lbl_800283C0

lbl_800283A8:
	lwz      r4, 0x20(r3)
	lwz      r5, 0x28(r3)
	addi     r0, r4, 2
	mullw    r0, r0, r7
	addi     r7, r7, 1
	stbx     r6, r5, r0

lbl_800283C0:
	lwz      r0, 0x24(r3)
	cmplw    r7, r0
	blt      lbl_800283A8
	lwz      r4, 0x28(r3)
	li       r5, 0xff
	li       r0, 0
	stb      r5, 0(r4)
	lwz      r3, 0x28(r3)
	stb      r0, 1(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800283E8
 * Size:	00055C
 */
void JUTConsole::doDraw(JUTConsole::EConsoleType) const
{
	/*
	stwu     r1, -0x2b0(r1)
	mflr     r0
	stw      r0, 0x2b4(r1)
	stfd     f31, 0x2a0(r1)
	psq_st   f31, 680(r1), 0, qr0
	stfd     f30, 0x290(r1)
	psq_st   f30, 664(r1), 0, qr0
	stfd     f29, 0x280(r1)
	psq_st   f29, 648(r1), 0, qr0
	stfd     f28, 0x270(r1)
	psq_st   f28, 632(r1), 0, qr0
	stfd     f27, 0x260(r1)
	psq_st   f27, 616(r1), 0, qr0
	stmw     r20, 0x230(r1)
	mr       r25, r3
	mr       r26, r4
	lbz      r0, 0x68(r3)
	cmplwi   r0, 0
	beq      lbl_80028908
	lwz      r0, 0x4c(r25)
	cmplwi   r0, 0
	bne      lbl_80028448
	cmpwi    r26, 2
	bne      lbl_80028908

lbl_80028448:
	lwz      r4, 0x48(r25)
	cmplwi   r4, 0
	beq      lbl_80028908
	lfs      f1, lbl_80516568@sda21(r2)
	cntlzw   r0, r26
	lfs      f0, 0x54(r25)
	cmpwi    r26, 2
	srwi     r30, r0, 5
	fadds    f31, f1, f0
	beq      lbl_8002873C
	lwz      r3, sManager__8JUTVideo@sda21(r13)
	cmplwi   r3, 0
	bne      lbl_800284C0
	lfs      f1, lbl_8051656C@sda21(r2)
	addi     r3, r1, 0x108
	lfs      f3, lbl_80516570@sda21(r2)
	fmr      f2, f1
	lfs      f4, lbl_80516574@sda21(r2)
	lfs      f5, lbl_80516578@sda21(r2)
	lfs      f6, lbl_8051657C@sda21(r2)
	bl       __ct__13J2DOrthoGraphFffffff
	addi     r3, r1, 0x108
	bl       setPort__13J2DOrthoGraphFv
	lis      r4, __vt__13J2DOrthoGraph@ha
	lis      r3, __vt__14J2DGrafContext@ha
	addi     r0, r4, __vt__13J2DOrthoGraph@l
	stw      r0, 0x108(r1)
	addi     r0, r3, __vt__14J2DGrafContext@l
	stw      r0, 0x108(r1)
	b        lbl_8002852C

lbl_800284C0:
	lwz      r4, 4(r3)
	lis      r0, 0x4330
	lfs      f1, lbl_8051656C@sda21(r2)
	addi     r3, r1, 0x34
	lhz      r5, 6(r4)
	lhz      r4, 4(r4)
	fmr      f2, f1
	stw      r0, 0x1e0(r1)
	lfd      f4, lbl_80516588@sda21(r2)
	stw      r4, 0x1e4(r1)
	lfs      f5, lbl_80516578@sda21(r2)
	lfd      f0, 0x1e0(r1)
	stw      r5, 0x1ec(r1)
	fsubs    f3, f0, f4
	lfs      f6, lbl_8051657C@sda21(r2)
	stw      r0, 0x1e8(r1)
	lfd      f0, 0x1e8(r1)
	fsubs    f4, f0, f4
	bl       __ct__13J2DOrthoGraphFffffff
	addi     r3, r1, 0x34
	bl       setPort__13J2DOrthoGraphFv
	lis      r4, __vt__13J2DOrthoGraph@ha
	lis      r3, __vt__14J2DGrafContext@ha
	addi     r0, r4, __vt__13J2DOrthoGraph@l
	stw      r0, 0x34(r1)
	addi     r0, r3, __vt__14J2DGrafContext@l
	stw      r0, 0x34(r1)

lbl_8002852C:
	clrlwi.  r0, r30, 0x18
	beq      lbl_8002853C
	addi     r7, r25, 0x60
	b        lbl_80028540

lbl_8002853C:
	addi     r7, r25, 0x5c

lbl_80028540:
	lwz      r5, 0x44(r25)
	lis      r6, 0x4330
	lwz      r4, 0x20(r25)
	addi     r3, r1, 0x30
	lwz      r0, 0x48(r25)
	xoris    r5, r5, 0x8000
	stw      r5, 0x1e4(r1)
	lwz      r5, 0x40(r25)
	stw      r6, 0x1e0(r1)
	lfd      f6, lbl_80516590@sda21(r2)
	addi     r5, r5, -2
	lfd      f0, 0x1e0(r1)
	xoris    r5, r5, 0x8000
	stw      r4, 0x204(r1)
	fsubs    f1, f0, f6
	lfd      f3, lbl_80516588@sda21(r2)
	stw      r6, 0x200(r1)
	lfs      f4, 0x50(r25)
	lfd      f0, 0x200(r1)
	fsubs    f5, f1, f31
	stw      r0, 0x21c(r1)
	fsubs    f2, f0, f3
	lfs      f1, lbl_80516580@sda21(r2)
	stw      r6, 0x218(r1)
	fctiwz   f5, f5
	lwz      r7, 0(r7)
	lfd      f0, 0x218(r1)
	fmadds   f1, f4, f2, f1
	stfd     f5, 0x1f0(r1)
	fsubs    f0, f0, f3
	lwz      r0, 0x1f4(r1)
	fctiwz   f1, f1
	stw      r5, 0x1ec(r1)
	fmuls    f0, f31, f0
	xoris    r5, r0, 0x8000
	stw      r6, 0x1e8(r1)
	fctiwz   f0, f0
	stfd     f1, 0x208(r1)
	lfd      f1, 0x1e8(r1)
	lwz      r0, 0x20c(r1)
	stfd     f0, 0x220(r1)
	fsubs    f1, f1, f6
	xoris    r4, r0, 0x8000
	lwz      r0, 0x224(r1)
	stw      r5, 0x1fc(r1)
	xoris    r0, r0, 0x8000
	stw      r6, 0x1f8(r1)
	lfd      f0, 0x1f8(r1)
	stw      r4, 0x214(r1)
	fsubs    f2, f0, f6
	stw      r6, 0x210(r1)
	lfd      f0, 0x210(r1)
	stw      r0, 0x22c(r1)
	fsubs    f3, f0, f6
	stw      r6, 0x228(r1)
	lfd      f0, 0x228(r1)
	stw      r7, 0x30(r1)
	fsubs    f4, f0, f6
	bl       J2DFillBox__FffffQ28JUtility6TColor
	lwz      r3, 0x4c(r25)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r30, 0x18
	beq      lbl_8002870C
	lwz      r5, 0x30(r25)
	lwz      r0, 0x38(r25)
	lwz      r3, 0x48(r25)
	subf.    r4, r5, r0
	blt      lbl_80028660
	b        lbl_80028668

lbl_80028660:
	lwz      r0, 0x24(r25)
	add      r4, r4, r0

lbl_80028668:
	subf     r3, r3, r4
	addic.   r0, r3, 1
	bgt      lbl_800286A0
	li       r0, 0xff
	lwz      r3, 0x4c(r25)
	stb      r0, 0x28(r1)
	addi     r4, r1, 0x2c
	stb      r0, 0x29(r1)
	stb      r0, 0x2a(r1)
	stb      r0, 0x2b(r1)
	lwz      r0, 0x28(r1)
	stw      r0, 0x2c(r1)
	bl       setCharColor__7JUTFontFQ28JUtility6TColor
	b        lbl_800287B4

lbl_800286A0:
	lwz      r0, 0x34(r25)
	cmpw     r5, r0
	bne      lbl_800286DC
	li       r5, 0xff
	li       r0, 0xe6
	stb      r5, 0x20(r1)
	addi     r4, r1, 0x24
	lwz      r3, 0x4c(r25)
	stb      r0, 0x21(r1)
	stb      r0, 0x22(r1)
	stb      r5, 0x23(r1)
	lwz      r0, 0x20(r1)
	stw      r0, 0x24(r1)
	bl       setCharColor__7JUTFontFQ28JUtility6TColor
	b        lbl_800287B4

lbl_800286DC:
	li       r5, 0xe6
	li       r0, 0xff
	stb      r5, 0x18(r1)
	addi     r4, r1, 0x1c
	lwz      r3, 0x4c(r25)
	stb      r5, 0x19(r1)
	stb      r0, 0x1a(r1)
	stb      r0, 0x1b(r1)
	lwz      r0, 0x18(r1)
	stw      r0, 0x1c(r1)
	bl       setCharColor__7JUTFontFQ28JUtility6TColor
	b        lbl_800287B4

lbl_8002870C:
	li       r5, 0xe6
	li       r0, 0xff
	stb      r5, 0x10(r1)
	addi     r4, r1, 0x14
	lwz      r3, 0x4c(r25)
	stb      r5, 0x11(r1)
	stb      r5, 0x12(r1)
	stb      r0, 0x13(r1)
	lwz      r0, 0x10(r1)
	stw      r0, 0x14(r1)
	bl       setCharColor__7JUTFontFQ28JUtility6TColor
	b        lbl_800287B4

lbl_8002873C:
	lis      r0, 0x4330
	lwz      r3, 0x20(r25)
	stw      r4, 0x22c(r1)
	mulli    r3, r3, 6
	lwz      r4, 0x40(r25)
	stw      r0, 0x228(r1)
	lfd      f1, lbl_80516588@sda21(r2)
	addi     r4, r4, -3
	lfd      f0, 0x228(r1)
	lwz      r5, 0x44(r25)
	addi     r6, r3, 6
	fsubs    f0, f0, f1
	lwz      r3, sDirectPrint__14JUTDirectPrint@sda21(r13)
	addi     r5, r5, -2
	fmuls    f0, f31, f0
	fctiwz   f0, f0
	stfd     f0, 0x220(r1)
	lwz      r7, 0x224(r1)
	addi     r7, r7, 4
	bl       erase__14JUTDirectPrintFiiii
	li       r0, 0xff
	lwz      r3, sDirectPrint__14JUTDirectPrint@sda21(r13)
	stb      r0, 8(r1)
	addi     r4, r1, 0xc
	stb      r0, 9(r1)
	stb      r0, 0xa(r1)
	stb      r0, 0xb(r1)
	lwz      r0, 8(r1)
	stw      r0, 0xc(r1)
	bl       setCharColor__14JUTDirectPrintFQ28JUtility6TColor

lbl_800287B4:
	lwz      r21, 0x24(r25)
	li       r27, 0
	lwz      r3, 0x20(r25)
	lwz      r28, 0x30(r25)
	xoris    r22, r21, 0x8000
	lwz      r23, 0x48(r25)
	addi     r31, r3, 2
	lwz      r24, 0x34(r25)
	lwz      r30, 0x28(r25)

lbl_800287D8:
	mullw    r3, r31, r28
	addi     r29, r3, 1
	add      r29, r30, r29
	lbz      r0, -1(r29)
	cmplwi   r0, 0
	beq      lbl_80028908
	cmpwi    r26, 2
	beq      lbl_80028884
	lwz      r3, 0x44(r25)
	lis      r5, 0x4330
	xoris    r6, r27, 0x8000
	lwz      r0, 0x40(r25)
	xoris    r4, r3, 0x8000
	stw      r6, 0x22c(r1)
	xoris    r0, r0, 0x8000
	lfd      f3, lbl_80516590@sda21(r2)
	stw      r5, 0x228(r1)
	mr       r3, r29
	lfs      f27, 0x54(r25)
	lfd      f0, 0x228(r1)
	stw      r4, 0x224(r1)
	fsubs    f2, f0, f3
	lfs      f28, 0x50(r25)
	stw      r5, 0x220(r1)
	lwz      r20, 0x4c(r25)
	lfd      f0, 0x220(r1)
	stw      r0, 0x21c(r1)
	fsubs    f1, f0, f3
	stw      r5, 0x218(r1)
	lfd      f0, 0x218(r1)
	fmadds   f29, f2, f31, f1
	fsubs    f30, f0, f3
	bl       strlen
	fmr      f1, f30
	mr       r5, r3
	fmr      f2, f29
	mr       r3, r20
	fmr      f3, f28
	mr       r4, r29
	fmr      f4, f27
	li       r6, 1
	bl       drawString_size_scale__7JUTFontFffffPCcUlb
	b        lbl_800288DC

lbl_80028884:
	lwz      r0, 0x44(r25)
	lis      r5, 0x4330
	xoris    r3, r27, 0x8000
	lwz      r4, 0x40(r25)
	xoris    r0, r0, 0x8000
	stw      r3, 0x22c(r1)
	lfd      f2, lbl_80516590@sda21(r2)
	mr       r6, r29
	stw      r5, 0x228(r1)
	clrlwi   r4, r4, 0x10
	lwz      r3, sDirectPrint__14JUTDirectPrint@sda21(r13)
	lfd      f0, 0x228(r1)
	stw      r0, 0x224(r1)
	fsubs    f1, f0, f2
	stw      r5, 0x220(r1)
	lfd      f0, 0x220(r1)
	fsubs    f0, f0, f2
	fmadds   f0, f1, f31, f0
	fctiwz   f0, f0
	stfd     f0, 0x218(r1)
	lwz      r5, 0x21c(r1)
	bl       drawString__14JUTDirectPrintFUsUsPc

lbl_800288DC:
	addi     r3, r28, 1
	addi     r27, r27, 1
	subf     r0, r21, r3
	addc     r0, r0, r22
	cmplw    r27, r23
	subfe    r0, r0, r0
	andc     r0, r3, r0
	mr       r28, r0
	bge      lbl_80028908
	cmpw     r0, r24
	bne      lbl_800287D8

lbl_80028908:
	psq_l    f31, 680(r1), 0, qr0
	lfd      f31, 0x2a0(r1)
	psq_l    f30, 664(r1), 0, qr0
	lfd      f30, 0x290(r1)
	psq_l    f29, 648(r1), 0, qr0
	lfd      f29, 0x280(r1)
	psq_l    f28, 632(r1), 0, qr0
	lfd      f28, 0x270(r1)
	psq_l    f27, 616(r1), 0, qr0
	lfd      f27, 0x260(r1)
	lmw      r20, 0x230(r1)
	lwz      r0, 0x2b4(r1)
	mtlr     r0
	addi     r1, r1, 0x2b0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80028944
 * Size:	00005C
 */
J2DOrthoGraph::~J2DOrthoGraph()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_80028988
	lis      r3, __vt__13J2DOrthoGraph@ha
	addi     r0, r3, __vt__13J2DOrthoGraph@l
	stw      r0, 0(r31)
	beq      lbl_80028978
	lis      r3, __vt__14J2DGrafContext@ha
	addi     r0, r3, __vt__14J2DGrafContext@l
	stw      r0, 0(r31)

lbl_80028978:
	extsh.   r0, r4
	ble      lbl_80028988
	mr       r3, r31
	bl       __dl__FPv

lbl_80028988:
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
 * Address:	800289A0
 * Size:	00008C
 */
void JUTConsole::print_f(const char*, ...)
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stw      r31, 0x7c(r1)
	bne      cr1, lbl_800289D4
	stfd     f1, 0x28(r1)
	stfd     f2, 0x30(r1)
	stfd     f3, 0x38(r1)
	stfd     f4, 0x40(r1)
	stfd     f5, 0x48(r1)
	stfd     f6, 0x50(r1)
	stfd     f7, 0x58(r1)
	stfd     f8, 0x60(r1)

lbl_800289D4:
	addi     r11, r1, 0x88
	addi     r0, r1, 8
	lis      r12, 0x200
	stw      r3, 8(r1)
	addi     r31, r1, 0x68
	stw      r5, 0x10(r1)
	mr       r5, r31
	stw      r4, 0xc(r1)
	stw      r6, 0x14(r1)
	stw      r7, 0x18(r1)
	stw      r8, 0x1c(r1)
	stw      r9, 0x20(r1)
	stw      r10, 0x24(r1)
	stw      r12, 0x68(r1)
	stw      r11, 0x6c(r1)
	stw      r0, 0x70(r1)
	bl       JUTConsole_print_f_va_
	lwz      r0, 0x84(r1)
	lwz      r31, 0x7c(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	80028A2C
 * Size:	000300
 */
void JUTConsole::print(const char*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r0, 0x58(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80028D10
	lwz      r5, 0x20(r29)
	mr       r31, r4
	lwz      r3, 0x38(r29)
	addi     r4, r5, 2
	lwz      r0, 0x3c(r29)
	mullw    r3, r4, r3
	lwz      r4, 0x28(r29)
	addi     r3, r3, 1
	add      r30, r3, r0
	add      r30, r4, r30
	b        lbl_80028CFC

lbl_80028A80:
	lbz      r0, 0x6a(r29)
	cmplwi   r0, 0
	beq      lbl_80028AB8
	lwz      r6, 0x38(r29)
	lwz      r3, 0x24(r29)
	addi     r6, r6, 1
	lwz      r0, 0x34(r29)
	xoris    r5, r3, 0x8000
	subf     r3, r3, r6
	addc     r3, r3, r5
	subfe    r3, r3, r3
	andc     r3, r6, r3
	cmpw     r0, r3
	beq      lbl_80028D08

lbl_80028AB8:
	cmpwi    r4, 0xa
	bne      lbl_80028AD0
	lwz      r0, 0x20(r29)
	addi     r31, r31, 1
	stw      r0, 0x3c(r29)
	b        lbl_80028BC8

lbl_80028AD0:
	cmpwi    r4, 9
	bne      lbl_80028B24
	li       r5, 0x20
	addi     r31, r31, 1
	b        lbl_80028B10

lbl_80028AE4:
	stb      r5, 0(r30)
	addi     r30, r30, 1
	lwz      r3, 0x3c(r29)
	addi     r0, r3, 1
	stw      r0, 0x3c(r29)
	lwz      r4, 0x3c(r29)
	lwz      r3, 0x64(r29)
	divw     r0, r4, r3
	mullw    r0, r0, r3
	subf.    r0, r0, r4
	beq      lbl_80028BC8

lbl_80028B10:
	lwz      r3, 0x3c(r29)
	lwz      r0, 0x20(r29)
	cmplw    r3, r0
	blt      lbl_80028AE4
	b        lbl_80028BC8

lbl_80028B24:
	lwz      r3, 0x4c(r29)
	cmplwi   r3, 0
	beq      lbl_80028BAC
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80028BAC
	lwz      r3, 0x3c(r29)
	lwz      r0, 0x20(r29)
	addi     r3, r3, 1
	cmplw    r3, r0
	bge      lbl_80028B90
	lbz      r3, 0(r31)
	lbz      r0, 1(r31)
	addi     r31, r31, 2
	stb      r3, 0(r30)
	stb      r0, 1(r30)
	addi     r30, r30, 2
	lwz      r3, 0x3c(r29)
	addi     r0, r3, 1
	stw      r0, 0x3c(r29)
	lwz      r3, 0x3c(r29)
	addi     r0, r3, 1
	stw      r0, 0x3c(r29)
	b        lbl_80028BC8

lbl_80028B90:
	li       r0, 0
	stb      r0, 0(r30)
	addi     r30, r30, 1
	lwz      r3, 0x3c(r29)
	addi     r0, r3, 1
	stw      r0, 0x3c(r29)
	b        lbl_80028BC8

lbl_80028BAC:
	lbz      r0, 0(r31)
	addi     r31, r31, 1
	stb      r0, 0(r30)
	addi     r30, r30, 1
	lwz      r3, 0x3c(r29)
	addi     r0, r3, 1
	stw      r0, 0x3c(r29)

lbl_80028BC8:
	lwz      r3, 0x3c(r29)
	lwz      r0, 0x20(r29)
	cmplw    r3, r0
	blt      lbl_80028CFC
	li       r6, 0
	li       r5, 0xff
	stb      r6, 0(r30)
	lwz      r4, 0x38(r29)
	lwz      r0, 0x24(r29)
	addi     r4, r4, 1
	xoris    r3, r0, 0x8000
	subf     r0, r0, r4
	addc     r0, r0, r3
	subfe    r0, r0, r0
	andc     r0, r4, r0
	stw      r0, 0x38(r29)
	stw      r6, 0x3c(r29)
	lwz      r3, 0x20(r29)
	lwz      r0, 0x38(r29)
	addi     r3, r3, 2
	lwz      r4, 0x28(r29)
	mullw    r0, r3, r0
	stbx     r5, r4, r0
	lwz      r3, 0x20(r29)
	lwz      r0, 0x38(r29)
	addi     r3, r3, 2
	lwz      r4, 0x28(r29)
	mullw    r3, r3, r0
	addi     r3, r3, 1
	add      r3, r4, r3
	stb      r6, 0(r3)
	mr       r30, r3
	lwz      r4, 0x30(r29)
	lwz      r0, 0x38(r29)
	subf.    r3, r4, r0
	blt      lbl_80028C5C
	b        lbl_80028C64

lbl_80028C5C:
	lwz      r0, 0x24(r29)
	add      r3, r3, r0

lbl_80028C64:
	lwz      r0, 0x48(r29)
	cmplw    r3, r0
	bne      lbl_80028C90
	lwz      r0, 0x24(r29)
	addi     r4, r4, 1
	xoris    r3, r0, 0x8000
	subf     r0, r0, r4
	addc     r0, r0, r3
	subfe    r0, r0, r0
	andc     r0, r4, r0
	stw      r0, 0x30(r29)

lbl_80028C90:
	lwz      r0, 0x38(r29)
	lwz      r3, 0x34(r29)
	cmpw     r0, r3
	bne      lbl_80028CC0
	lwz      r0, 0x24(r29)
	addi     r4, r3, 1
	xoris    r3, r0, 0x8000
	subf     r0, r0, r4
	addc     r0, r0, r3
	subfe    r0, r0, r0
	andc     r0, r4, r0
	stw      r0, 0x34(r29)

lbl_80028CC0:
	lwz      r0, 0x38(r29)
	lwz      r3, 0x30(r29)
	cmpw     r0, r3
	bne      lbl_80028CF0
	lwz      r0, 0x24(r29)
	addi     r4, r3, 1
	xoris    r3, r0, 0x8000
	subf     r0, r0, r4
	addc     r0, r0, r3
	subfe    r0, r0, r0
	andc     r0, r4, r0
	stw      r0, 0x30(r29)

lbl_80028CF0:
	lbz      r0, 0x6b(r29)
	cmplwi   r0, 0
	bne      lbl_80028D08

lbl_80028CFC:
	lbz      r4, 0(r31)
	cmplwi   r4, 0
	bne      lbl_80028A80

lbl_80028D08:
	li       r0, 0
	stb      r0, 0(r30)

lbl_80028D10:
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
 * Address:	80028D2C
 * Size:	000048
 */
void JUTConsole_print_f_va_(void)
{
	/*
	stwu     r1, -0x410(r1)
	mflr     r0
	mr       r6, r5
	mr       r5, r4
	stw      r0, 0x414(r1)
	li       r4, 0x400
	stw      r31, 0x40c(r1)
	mr       r31, r3
	addi     r3, r1, 8
	bl       vsnprintf
	mr       r3, r31
	addi     r4, r1, 8
	bl       print__10JUTConsoleFPCc
	lwz      r0, 0x414(r1)
	lwz      r31, 0x40c(r1)
	mtlr     r0
	addi     r1, r1, 0x410
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00012C
 */
void JUTConsole::dumpToTerminal(unsigned int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000154
 */
void JUTConsole::dumpToConsole(JUTConsole*, unsigned int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80028D74
 * Size:	0000DC
 */
void JUTConsole::scroll(int)
{
	/*
	cmpwi    r4, 0
	bge      lbl_80028DAC
	lwz      r5, 0x34(r3)
	lwz      r0, 0x30(r3)
	subf.    r5, r5, r0
	blt      lbl_80028D90
	b        lbl_80028D98

lbl_80028D90:
	lwz      r0, 0x24(r3)
	add      r5, r5, r0

lbl_80028D98:
	neg      r0, r5
	cmpw     r4, r0
	bge      lbl_80028E10
	mr       r4, r0
	b        lbl_80028E10

lbl_80028DAC:
	ble      lbl_80028E10
	lwz      r0, 0x34(r3)
	lwz      r6, 0x38(r3)
	subf.    r5, r0, r6
	blt      lbl_80028DC4
	b        lbl_80028DCC

lbl_80028DC4:
	lwz      r0, 0x24(r3)
	add      r5, r5, r0

lbl_80028DCC:
	lwz      r7, 0x48(r3)
	addi     r0, r5, 1
	cmplw    r0, r7
	bgt      lbl_80028DE4
	li       r4, 0
	b        lbl_80028E10

lbl_80028DE4:
	lwz      r0, 0x30(r3)
	subf.    r5, r0, r6
	blt      lbl_80028DF4
	b        lbl_80028DFC

lbl_80028DF4:
	lwz      r0, 0x24(r3)
	add      r5, r5, r0

lbl_80028DFC:
	subf     r5, r7, r5
	addi     r0, r5, 1
	cmpw     r4, r0
	ble      lbl_80028E10
	mr       r4, r0

lbl_80028E10:
	lwz      r0, 0x30(r3)
	add      r0, r0, r4
	stw      r0, 0x30(r3)
	lwz      r4, 0x30(r3)
	cmpwi    r4, 0
	bge      lbl_80028E34
	lwz      r0, 0x24(r3)
	add      r0, r4, r0
	stw      r0, 0x30(r3)

lbl_80028E34:
	lwz      r0, 0x30(r3)
	lwz      r4, 0x24(r3)
	cmplw    r0, r4
	bltlr
	subf     r0, r4, r0
	stw      r0, 0x30(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80028E50
 * Size:	000024
 */
int JUTConsole::getUsedLine() const
{
	/*
	lwz      r4, 0x34(r3)
	lwz      r0, 0x38(r3)
	subf.    r4, r4, r0
	blt      lbl_80028E68
	mr       r3, r4
	blr

lbl_80028E68:
	lwz      r0, 0x24(r3)
	add      r3, r4, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80028E74
 * Size:	000024
 */
int JUTConsole::getLineOffset() const
{
	/*
	lwz      r4, 0x34(r3)
	lwz      r0, 0x30(r3)
	subf.    r4, r4, r0
	blt      lbl_80028E8C
	mr       r3, r4
	blr

lbl_80028E8C:
	lwz      r0, 0x24(r3)
	add      r3, r4, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
JUTConsoleManager::JUTConsoleManager()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void __dt__Q27JGadget27TLinkList<JUTConsole, -24> Fv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
JUTConsoleManager::~JUTConsoleManager()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80028E98
 * Size:	000068
 */
void JUTConsoleManager::createManager(JKRHeap*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r3, 0
	stw      r0, 0x14(r1)
	bne      lbl_80028EB0
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)

lbl_80028EB0:
	mr       r4, r3
	li       r3, 0x14
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	cmplwi   r3, 0
	beq      lbl_80028EEC
	li       r4, 0
	addi     r0, r3, 4
	stw      r4, 4(r3)
	stw      r4, 8(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)
	stw      r0, 8(r3)
	stw      r4, 0xc(r3)
	stw      r4, 0x10(r3)

lbl_80028EEC:
	stw      r3, sManager__17JUTConsoleManager@sda21(r13)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void JUTConsoleManager::destroyManager(JUTConsoleManager*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80028F00
 * Size:	000070
 */
void JUTConsoleManager::appendConsole(JUTConsole*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	addi     r5, r1, 0x14
	stw      r31, 0x2c(r1)
	mr       r31, r4
	addi     r6, r31, 0x18
	stw      r30, 0x28(r1)
	mr       r30, r3
	addi     r0, r30, 4
	addi     r3, r1, 0x10
	stw      r0, 0xc(r1)
	mr       r4, r30
	stw      r0, 8(r1)
	stw      r0, 0x1c(r1)
	stw      r0, 0x18(r1)
	stw      r0, 0x14(r1)
	bl
Insert__Q27JGadget13TNodeLinkListFQ37JGadget13TNodeLinkList8iteratorPQ27JGadget13TLinkListNode
	lwz      r0, 0xc(r30)
	cmplwi   r0, 0
	bne      lbl_80028F58
	stw      r31, 0xc(r30)

lbl_80028F58:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80028F70
 * Size:	0000C8
 */
void JUTConsoleManager::removeConsole(JUTConsole*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	lwz      r0, 0xc(r3)
	cmplw    r0, r31
	bne      lbl_80028FEC
	lwz      r0, 0(r30)
	cmplwi   r0, 1
	bgt      lbl_80028FB0
	li       r0, 0
	stw      r0, 0xc(r30)
	b        lbl_80028FEC

lbl_80028FB0:
	addi     r3, r30, 4
	lwz      r4, 8(r30)
	stw      r3, 0x14(r1)
	addi     r0, r4, -24
	cmplw    r31, r0
	stw      r3, 0x10(r1)
	beq      lbl_80028FD8
	lwz      r3, 0x18(r31)
	addi     r0, r3, -24
	b        lbl_80028FE8

lbl_80028FD8:
	lwz      r3, 4(r30)
	stw      r3, 0xc(r1)
	addi     r0, r3, -24
	stw      r3, 8(r1)

lbl_80028FE8:
	stw      r0, 0xc(r30)

lbl_80028FEC:
	bl       JUTGetWarningConsole
	cmplw    r3, r31
	bne      lbl_80029000
	li       r3, 0
	bl       JUTSetWarningConsole

lbl_80029000:
	bl       JUTGetReportConsole
	cmplw    r3, r31
	bne      lbl_80029014
	li       r3, 0
	bl       JUTSetReportConsole

lbl_80029014:
	mr       r3, r30
	addi     r4, r31, 0x18
	bl       Remove__Q27JGadget13TNodeLinkListFPQ27JGadget13TLinkListNode
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JUTConsoleManager::getConsoleNumber() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80029038
 * Size:	0000CC
 */
void JUTConsoleManager::draw() const
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	lwz      r0, 4(r3)
	stw      r31, 0x5c(r1)
	lwz      r31, 0xc(r3)
	stw      r30, 0x58(r1)
	stw      r29, 0x54(r1)
	mr       r29, r3
	addi     r30, r29, 4
	stw      r30, 0xc(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0x10(r1)
	stw      r0, 0x34(r1)
	stw      r0, 0x30(r1)
	stw      r0, 0x1c(r1)
	stw      r0, 0x44(r1)
	stw      r30, 8(r1)
	stw      r30, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r30, 0x18(r1)
	stw      r30, 0x40(r1)
	stw      r30, 0x3c(r1)
	stw      r30, 0x24(r1)
	b        lbl_800290C0

lbl_8002909C:
	lwz      r3, 0x44(r1)
	addi     r3, r3, -24
	cmplw    r3, r31
	beq      lbl_800290B4
	li       r4, 1
	bl       doDraw__10JUTConsoleCFQ210JUTConsole12EConsoleType

lbl_800290B4:
	lwz      r3, 0x44(r1)
	lwz      r0, 0(r3)
	stw      r0, 0x44(r1)

lbl_800290C0:
	lwz      r0, 0x44(r1)
	cmplw    r0, r30
	stw      r0, 0x38(r1)
	stw      r0, 0x20(r1)
	bne      lbl_8002909C
	lwz      r3, 0xc(r29)
	cmplwi   r3, 0
	beq      lbl_800290E8
	li       r4, 0
	bl       doDraw__10JUTConsoleCFQ210JUTConsole12EConsoleType

lbl_800290E8:
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r29, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	80029104
 * Size:	00007C
 */
void JUTConsoleManager::drawDirect(bool) const
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	lwz      r0, 0x10(r3)
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	beq      lbl_80029164
	clrlwi.  r0, r4, 0x18
	beq      lbl_80029158
	bl       OSEnableInterrupts
	mr       r30, r3
	bl       VIGetRetraceCount
	mr       r31, r3

lbl_80029144:
	bl       VIGetRetraceCount
	cmplw    r31, r3
	beq      lbl_80029144
	mr       r3, r30
	bl       OSRestoreInterrupts

lbl_80029158:
	lwz      r3, 0x10(r29)
	li       r4, 2
	bl       doDraw__10JUTConsoleCFQ210JUTConsole12EConsoleType

lbl_80029164:
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
 * Address:	80029180
 * Size:	000124
 */
void JUTConsoleManager::setDirectConsole(JUTConsole*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	mr       r30, r4
	stw      r29, 0x34(r1)
	mr       r29, r3
	lwz      r31, 0x10(r3)
	cmplwi   r31, 0
	beq      lbl_800291E8
	addi     r0, r29, 4
	mr       r4, r29
	stw      r0, 0xc(r1)
	addi     r3, r1, 0x20
	addi     r5, r1, 0x24
	addi     r6, r31, 0x18
	stw      r0, 8(r1)
	stw      r0, 0x2c(r1)
	stw      r0, 0x28(r1)
	stw      r0, 0x24(r1)
	bl
Insert__Q27JGadget13TNodeLinkListFQ37JGadget13TNodeLinkList8iteratorPQ27JGadget13TLinkListNode
	lwz      r0, 0xc(r29)
	cmplwi   r0, 0
	bne      lbl_800291E8
	stw      r31, 0xc(r29)

lbl_800291E8:
	cmplwi   r30, 0
	beq      lbl_80029284
	lwz      r0, 0xc(r29)
	cmplw    r0, r30
	bne      lbl_80029250
	lwz      r0, 0(r29)
	cmplwi   r0, 1
	bgt      lbl_80029214
	li       r0, 0
	stw      r0, 0xc(r29)
	b        lbl_80029250

lbl_80029214:
	addi     r3, r29, 4
	lwz      r4, 8(r29)
	stw      r3, 0x1c(r1)
	addi     r0, r4, -24
	cmplw    r30, r0
	stw      r3, 0x18(r1)
	beq      lbl_8002923C
	lwz      r3, 0x18(r30)
	addi     r0, r3, -24
	b        lbl_8002924C

lbl_8002923C:
	lwz      r3, 4(r29)
	stw      r3, 0x14(r1)
	addi     r0, r3, -24
	stw      r3, 0x10(r1)

lbl_8002924C:
	stw      r0, 0xc(r29)

lbl_80029250:
	bl       JUTGetWarningConsole
	cmplw    r3, r30
	bne      lbl_80029264
	li       r3, 0
	bl       JUTSetWarningConsole

lbl_80029264:
	bl       JUTGetReportConsole
	cmplw    r3, r30
	bne      lbl_80029278
	li       r3, 0
	bl       JUTSetReportConsole

lbl_80029278:
	mr       r3, r29
	addi     r4, r30, 0x18
	bl       Remove__Q27JGadget13TNodeLinkListFPQ27JGadget13TLinkListNode

lbl_80029284:
	stw      r30, 0x10(r29)
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	800292A4
 * Size:	000008
 */
void JUTSetReportConsole(void)
{
	/*
	stw      r3, sReportConsole@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800292AC
 * Size:	000008
 */
void JUTGetReportConsole(void)
{
	/*
	lwz      r3, sReportConsole@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800292B4
 * Size:	000008
 */
void JUTSetWarningConsole(void)
{
	/*
	stw      r3, sWarningConsole@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800292BC
 * Size:	000008
 */
void JUTGetWarningConsole(void)
{
	/*
	lwz      r3, sWarningConsole@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void JUTReportConsole_f_va(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800292C4
 * Size:	0000DC
 */
void JUTReportConsole_f(void)
{
	/*
	stwu     r1, -0x180(r1)
	mflr     r0
	stw      r0, 0x184(r1)
	stw      r31, 0x17c(r1)
	stw      r30, 0x178(r1)
	bne      cr1, lbl_800292FC
	stfd     f1, 0x28(r1)
	stfd     f2, 0x30(r1)
	stfd     f3, 0x38(r1)
	stfd     f4, 0x40(r1)
	stfd     f5, 0x48(r1)
	stfd     f6, 0x50(r1)
	stfd     f7, 0x58(r1)
	stfd     f8, 0x60(r1)

lbl_800292FC:
	lwz      r30, sReportConsole@sda21(r13)
	addi     r11, r1, 0x188
	addi     r0, r1, 8
	lis      r12, 0x100
	cmplwi   r30, 0
	stw      r3, 8(r1)
	addi     r31, r1, 0x68
	stw      r4, 0xc(r1)
	stw      r5, 0x10(r1)
	stw      r6, 0x14(r1)
	stw      r7, 0x18(r1)
	stw      r8, 0x1c(r1)
	stw      r9, 0x20(r1)
	stw      r10, 0x24(r1)
	stw      r12, 0x68(r1)
	stw      r11, 0x6c(r1)
	stw      r0, 0x70(r1)
	bne      lbl_8002935C
	mr       r5, r3
	mr       r6, r31
	addi     r3, r1, 0x74
	li       r4, 0x100
	bl       vsnprintf
	b        lbl_80029388

lbl_8002935C:
	lwz      r0, 0x58(r30)
	clrlwi.  r0, r0, 0x1e
	beq      lbl_80029388
	mr       r5, r3
	mr       r6, r31
	addi     r3, r1, 0x74
	li       r4, 0x100
	bl       vsnprintf
	lwz      r3, sReportConsole@sda21(r13)
	addi     r4, r1, 0x74
	bl       print__10JUTConsoleFPCc

lbl_80029388:
	lwz      r0, 0x184(r1)
	lwz      r31, 0x17c(r1)
	lwz      r30, 0x178(r1)
	mtlr     r0
	addi     r1, r1, 0x180
	blr
	*/
}

/*
 * --INFO--
 * Address:	800293A0
 * Size:	00002C
 */
void JUTReportConsole(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	addi     r3, r2, lbl_80516598@sda21
	stw      r0, 0x14(r1)
	crclr    6
	bl       JUTReportConsole_f
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void JUTWarningConsole_f_va(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800293CC
 * Size:	0000DC
 */
void JUTWarningConsole_f(void)
{
	/*
	stwu     r1, -0x180(r1)
	mflr     r0
	stw      r0, 0x184(r1)
	stw      r31, 0x17c(r1)
	stw      r30, 0x178(r1)
	bne      cr1, lbl_80029404
	stfd     f1, 0x28(r1)
	stfd     f2, 0x30(r1)
	stfd     f3, 0x38(r1)
	stfd     f4, 0x40(r1)
	stfd     f5, 0x48(r1)
	stfd     f6, 0x50(r1)
	stfd     f7, 0x58(r1)
	stfd     f8, 0x60(r1)

lbl_80029404:
	lwz      r30, sReportConsole@sda21(r13)
	addi     r11, r1, 0x188
	addi     r0, r1, 8
	lis      r12, 0x100
	cmplwi   r30, 0
	stw      r3, 8(r1)
	addi     r31, r1, 0x68
	stw      r4, 0xc(r1)
	stw      r5, 0x10(r1)
	stw      r6, 0x14(r1)
	stw      r7, 0x18(r1)
	stw      r8, 0x1c(r1)
	stw      r9, 0x20(r1)
	stw      r10, 0x24(r1)
	stw      r12, 0x68(r1)
	stw      r11, 0x6c(r1)
	stw      r0, 0x70(r1)
	bne      lbl_80029464
	mr       r5, r3
	mr       r6, r31
	addi     r3, r1, 0x74
	li       r4, 0x100
	bl       vsnprintf
	b        lbl_80029490

lbl_80029464:
	lwz      r0, 0x58(r30)
	clrlwi.  r0, r0, 0x1e
	beq      lbl_80029490
	mr       r5, r3
	mr       r6, r31
	addi     r3, r1, 0x74
	li       r4, 0x100
	bl       vsnprintf
	lwz      r3, sReportConsole@sda21(r13)
	addi     r4, r1, 0x74
	bl       print__10JUTConsoleFPCc

lbl_80029490:
	lwz      r0, 0x184(r1)
	lwz      r31, 0x17c(r1)
	lwz      r30, 0x178(r1)
	mtlr     r0
	addi     r1, r1, 0x180
	blr
	*/
}

/*
 * --INFO--
 * Address:	800294A8
 * Size:	00002C
 */
void JUTWarningConsole(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	addi     r3, r2, lbl_80516598@sda21
	stw      r0, 0x14(r1)
	crclr    6
	bl       JUTReportConsole_f
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

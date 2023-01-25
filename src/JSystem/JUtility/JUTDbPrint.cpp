#include "JSystem/JUT/JUTDbPrint.h"
#include "JSystem/J2D/J2DGrafContext.h"
#include "JSystem/JKR/JKRHeap.h"
#include "JSystem/JUT/JUTFont.h"
#include "JSystem/JUT/JUTVideo.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .sbss # 0x80514D80 - 0x80516360
    .global sDebugPrint__10JUTDbPrint
    sDebugPrint__10JUTDbPrint:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805165A0
    lbl_805165A0:
        .float -1.0
    .global lbl_805165A4
    lbl_805165A4:
        .float 1.0
    .global lbl_805165A8
    lbl_805165A8:
        .4byte 0x43300000
        .4byte 0x80000000
*/

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
JUTDbPrint::JUTDbPrint(JUTFont* font, JKRHeap* heap)
    : m_color()
{
	// UNUSED FUNCTION
	m_font = font;
	_00    = nullptr;
	m_heap = (heap != nullptr) ? heap : JKRHeap::sCurrentHeap;
	m_color.set(0xFF, 0xFF, 0xFF, 0xFF);
	_0C = 1;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
JUTDbPrint::~JUTDbPrint()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800294D4
 * Size:	0000AC
 */
JUTDbPrint* JUTDbPrint::start(JUTFont* font, JKRHeap* heap)
{
	if (sDebugPrint == nullptr) {
		if (heap == nullptr) {
			heap = JKRHeap::sCurrentHeap;
		}
		sDebugPrint = new JUTDbPrint(font, heap);
	}
	return sDebugPrint;
}

/*
 * --INFO--
 * Address:	80029580
 * Size:	000018
 */
JUTFont* JUTDbPrint::changeFont(JUTFont* newFont)
{
	JUTFont* oldFont = m_font;
	if (newFont != nullptr) {
		m_font = newFont;
	}
	return oldFont;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void JUTDbPrint::enter(int, int, int, const char*, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000128
 */
void JUTDbPrint::print(int, int, const char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000128
 */
void JUTDbPrint::print(int, int, int, const char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void JUTDbPrint::reset()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80029598
 * Size:	000038
 * flush__10JUTDbPrintFv
 */
void JUTDbPrint::flush() { flush(0, 0, JUTVideo::sManager->getFbWidth(), JUTVideo::sManager->getEfbHeight()); }

/*
 * --INFO--
 * Address:	800295D0
 * Size:	000174
 * flush__10JUTDbPrintFiiii
 */
void JUTDbPrint::flush(int p1, int p2, int p3, int p4)
{
	if (m_font != nullptr && _00 != nullptr) {
		J2DOrthoGraph orthograph(p1, p2, p3, p4, -1.0f, 1.0f);
		orthograph.setPort();
		m_font->setGX();
		m_font->setCharColor(m_color);
		JUTDbPrint_0x0** prevLinkToCurrent = &_00;
		JUTDbPrint_0x0* current;
		while ((current = *prevLinkToCurrent) != nullptr) {
			if (_0C != 0) {
				drawString(current->_04, current->_06, current->_0A, &current->_0C);
			}
			if (0 >= --current->_08) {
				JUTDbPrint_0x0* next = current->m_next;
				JKRHeap::free(current, m_heap);
				*prevLinkToCurrent = next;
			} else {
				prevLinkToCurrent = &current->m_next;
			}
		}
	}
	/*
	stwu     r1, -0x110(r1)
	mflr     r0
	stw      r0, 0x114(r1)
	stw      r31, 0x10c(r1)
	stw      r30, 0x108(r1)
	stw      r29, 0x104(r1)
	stw      r28, 0x100(r1)
	mr       r28, r3
	mr       r31, r28
	lwz      r0, 4(r3)
	lwz      r30, 0(r3)
	cmplwi   r0, 0
	beq      lbl_80029724
	cmplwi   r30, 0
	beq      lbl_80029724
	lis      r8, 0x4330
	xoris    r3, r4, 0x8000
	xoris    r5, r5, 0x8000
	xoris    r4, r6, 0x8000
	xoris    r0, r7, 0x8000
	stw      r3, 0xe4(r1)
	lfd      f4, lbl_805165A8@sda21(r2)
	addi     r3, r1, 0xc
	stw      r8, 0xe0(r1)
	lfs      f5, lbl_805165A0@sda21(r2)
	lfd      f0, 0xe0(r1)
	stw      r5, 0xec(r1)
	fsubs    f1, f0, f4
	lfs      f6, lbl_805165A4@sda21(r2)
	stw      r8, 0xe8(r1)
	lfd      f0, 0xe8(r1)
	stw      r4, 0xf4(r1)
	fsubs    f2, f0, f4
	stw      r8, 0xf0(r1)
	lfd      f0, 0xf0(r1)
	stw      r0, 0xfc(r1)
	fsubs    f3, f0, f4
	stw      r8, 0xf8(r1)
	lfd      f0, 0xf8(r1)
	fsubs    f4, f0, f4
	bl       __ct__13J2DOrthoGraphFffffff
	addi     r3, r1, 0xc
	bl       setPort__13J2DOrthoGraphFv
	lwz      r3, 4(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 8(r28)
	addi     r4, r1, 8
	stw      r0, 8(r1)
	lwz      r3, 4(r28)
	bl       setCharColor__7JUTFontFQ28JUtility6TColor
	b        lbl_80029704

lbl_800296A8:
	lbz      r0, 0xc(r28)
	cmplwi   r0, 0
	beq      lbl_800296CC
	lha      r4, 4(r30)
	mr       r3, r28
	lha      r5, 6(r30)
	addi     r7, r30, 0xc
	lha      r6, 0xa(r30)
	bl       drawString__10JUTDbPrintFiiiPCUc

lbl_800296CC:
	lha      r3, 8(r30)
	addi     r3, r3, -1
	extsh.   r0, r3
	sth      r3, 8(r30)
	bgt      lbl_800296FC
	lwz      r29, 0(r30)
	mr       r3, r30
	lwz      r4, 0x10(r28)
	bl       free__7JKRHeapFPvP7JKRHeap
	stw      r29, 0(r31)
	mr       r30, r29
	b        lbl_80029704

lbl_800296FC:
	mr       r31, r30
	lwz      r30, 0(r30)

lbl_80029704:
	cmplwi   r30, 0
	bne      lbl_800296A8
	lis      r4, __vt__13J2DOrthoGraph@ha
	lis      r3, __vt__14J2DGrafContext@ha
	addi     r0, r4, __vt__13J2DOrthoGraph@l
	stw      r0, 0xc(r1)
	addi     r0, r3, __vt__14J2DGrafContext@l
	stw      r0, 0xc(r1)

lbl_80029724:
	lwz      r0, 0x114(r1)
	lwz      r31, 0x10c(r1)
	lwz      r30, 0x108(r1)
	lwz      r29, 0x104(r1)
	lwz      r28, 0x100(r1)
	mtlr     r0
	addi     r1, r1, 0x110
	blr
	*/
}

/*
 * --INFO--
 * Address:	80029744
 * Size:	0000E8
 */
void JUTDbPrint::drawString(int p1, int p2, int p3, const unsigned char* p4)
{
	const float height = m_font->getHeight();
	const float width  = m_font->getWidth();
	m_font->drawString_size_scale(p1, p2, width, height, reinterpret_cast<const char*>(p4), p3, true);
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stmw     r27, 0x2c(r1)
	lwz      r31, 4(r3)
	mr       r27, r4
	mr       r28, r5
	mr       r29, r6
	mr       r3, r31
	mr       r30, r7
	lwz      r12, 0(r31)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	xoris    r4, r3, 0x8000
	lis      r0, 0x4330
	mr       r3, r31
	stw      r4, 0xc(r1)
	lwz      r12, 0(r31)
	stw      r0, 8(r1)
	lfd      f1, lbl_805165A8@sda21(r2)
	lfd      f0, 8(r1)
	lwz      r12, 0x28(r12)
	fsubs    f31, f0, f1
	mtctr    r12
	bctrl
	lis      r7, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x14(r1)
	xoris    r6, r27, 0x8000
	xoris    r0, r28, 0x8000
	lfd      f2, lbl_805165A8@sda21(r2)
	stw      r7, 0x10(r1)
	fmr      f4, f31
	mr       r3, r31
	mr       r4, r30
	lfd      f0, 0x10(r1)
	mr       r5, r29
	stw      r6, 0x1c(r1)
	fsubs    f3, f0, f2
	li       r6, 1
	stw      r7, 0x18(r1)
	lfd      f0, 0x18(r1)
	stw      r0, 0x24(r1)
	fsubs    f1, f0, f2
	stw      r7, 0x20(r1)
	lfd      f0, 0x20(r1)
	fsubs    f2, f0, f2
	bl       drawString_size_scale__7JUTFontFffffPCcUlb
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	lmw      r27, 0x2c(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000124
 */
void JUTReport(int, int, const char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000128
 */
void JUTReport(int, int, int, const char*, ...)
{
	// UNUSED FUNCTION
}

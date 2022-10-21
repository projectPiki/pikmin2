#include "Dolphin/string.h"
#include "Dolphin/vi.h"
#include "JSystem/JUT/JUTDbPrint.h"
#include "JSystem/JUT/JUTDirectPrint.h"
#include "JSystem/JUT/JUTFont.h"
#include "JSystem/JUT/TColor.h"
#include "types.h"
#include "JSystem/JUT/JUTAssertion.h"

/*
    Generated from dpostproc

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global "sVisible__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"
    "sVisible__Q212JUTAssertion23@unnamed@JUTAssert_cpp@":
        .byte 1
        .skip 3

    .section .sbss # 0x80514D80 - 0x80516360
    .global "sMessageLife__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"
    "sMessageLife__Q212JUTAssertion23@unnamed@JUTAssert_cpp@":
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516550
    lbl_80516550:
        .4byte 0x41F00000
    .global lbl_80516554
    lbl_80516554:
        .4byte 0x42100000
    .global lbl_80516558
    lbl_80516558:
        .4byte 0x42580000
        .4byte 0x00000000
    .global lbl_80516560
    lbl_80516560:
        .4byte 0x43300000
        .4byte 0x80000000
*/

namespace {
static char sMessageFileLine[64];
static char sMessageString[256];
static u32 sMessageLife;
static bool sVisible = true;
} // namespace

/*
 * --INFO--
 * Address:	80027DC0
 * Size:	000004
 */
void JUTAssertion::create() { }

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
u32 JUTAssertion::flush_subroutine()
{
	// UNUSED FUNCTION
	if (sMessageLife == 0) {
		return 0;
	}
	if (sMessageLife != -1) {
		sMessageLife--;
	}
	if (sMessageLife < 5) {
		return 0;
	}
	return sMessageLife;
}

/*
 * --INFO--
 * Address:	80027DC4
 * Size:	0000EC
 */
void JUTAssertion::flushMessage()
{
	if (flush_subroutine() != 0 && sVisible) {
		JUtility::TColor existingColor = JUTDirectPrint::sDirectPrint->_18;
		JUtility::TColor newColor      = 0xFFC8C8FF;
		JUTDirectPrint::sDirectPrint->setCharColor(newColor);
		JUTDirectPrint::sDirectPrint->drawString(0x10, 0x10, sMessageFileLine);
		JUTDirectPrint::sDirectPrint->drawString(0x10, 0x18, sMessageString);
		JUTDirectPrint::sDirectPrint->setCharColor(existingColor);
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	lwz      r3,
"sMessageLife__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@sda21(r13) cmplwi r3,
0 bne      lbl_80027DE8 li       r0, 0 b        lbl_80027E0C

lbl_80027DE8:
	addis    r0, r3, 1
	cmplwi   r0, 0xffff
	beq      lbl_80027DFC
	addi     r0, r3, -1
	stw      r0,
"sMessageLife__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@sda21(r13)

lbl_80027DFC:
	lwz      r0,
"sMessageLife__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@sda21(r13) cmplwi r0,
5 bge      lbl_80027E0C li       r0, 0

lbl_80027E0C:
	cmplwi   r0, 0
	beq      lbl_80027E9C
	lbz      r0,
"sVisible__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@sda21(r13) cmplwi   r0, 1
	bne      lbl_80027E9C
	li       r5, 0xff
	li       r0, 0xc8
	lwz      r31, sDirectPrint__14JUTDirectPrint@sda21(r13)
	addi     r4, r1, 0x10
	stb      r5, 0xc(r1)
	lwz      r6, 0x18(r31)
	mr       r3, r31
	stb      r0, 0xd(r1)
	stb      r0, 0xe(r1)
	stb      r5, 0xf(r1)
	lwz      r0, 0xc(r1)
	stw      r6, 0x14(r1)
	stw      r0, 0x10(r1)
	bl       setCharColor__14JUTDirectPrintFQ28JUtility6TColor
	lis      r4,
"sMessageFileLine__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@ha mr       r3,
r31 addi     r6, r4,
"sMessageFileLine__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@l li       r5,
0x10 li       r4, 0x10 bl       drawString__14JUTDirectPrintFUsUsPc lis      r4,
"sMessageString__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@ha mr       r3, r31
	addi     r6, r4,
"sMessageString__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@l li       r5, 0x18
	li       r4, 0x10
	bl       drawString__14JUTDirectPrintFUsUsPc
	lwz      r0, 0x14(r1)
	mr       r3, r31
	addi     r4, r1, 8
	stw      r0, 8(r1)
	bl       setCharColor__14JUTDirectPrintFQ28JUtility6TColor

lbl_80027E9C:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80027EB0
 * Size:	000214
 */
void JUTAssertion::flushMessage_dbPrint()
{
	JUTFont* font;
	if (flush_subroutine() != 0 && sVisible == true && JUTDbPrint::sDebugPrint != nullptr && JUTDbPrint::sDebugPrint->m_font != nullptr) {
		font = JUTDbPrint::sDebugPrint->m_font;

		u32 retraceCount = VIGetRetraceCount();
		font->setGX();
		JUtility::TColor charColor(0xFF, retraceCount & 0xF0 | 0xF, retraceCount & 0xF0 | 0xF, 0xFF);
		font->setCharColor(charColor);
		font->drawString_size_scale(30.0f, 36.0f, font->getWidth(), font->getHeight(), sMessageFileLine, strlen(sMessageFileLine), true);
		font->drawString_size_scale(30.0f, 54.0f, font->getWidth(), font->getHeight(), sMessageString, strlen(sMessageString), true);
	}
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	lwz      r3,
"sMessageLife__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@sda21(r13) cmplwi r3,
0 bne      lbl_80027EE0 li       r0, 0 b        lbl_80027F04

lbl_80027EE0:
	addis    r0, r3, 1
	cmplwi   r0, 0xffff
	beq      lbl_80027EF4
	addi     r0, r3, -1
	stw      r0,
"sMessageLife__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@sda21(r13)

lbl_80027EF4:
	lwz      r0,
"sMessageLife__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@sda21(r13) cmplwi r0,
5 bge      lbl_80027F04 li       r0, 0

lbl_80027F04:
	cmplwi   r0, 0
	beq      lbl_800280A4
	lbz      r0,
"sVisible__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@sda21(r13) cmplwi   r0, 1
	bne      lbl_800280A4
	lwz      r3, sDebugPrint__10JUTDbPrint@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_800280A4
	lwz      r31, 4(r3)
	cmplwi   r31, 0
	beq      lbl_800280A4
	bl       VIGetRetraceCount
	lwz      r12, 0(r31)
	rlwinm   r0, r3, 2, 0x18, 0x1b
	ori      r0, r0, 0xf
	mr       r3, r31
	lwz      r12, 0xc(r12)
	clrlwi   r30, r0, 0x18
	mtctr    r12
	bctrl
	li       r0, 0xff
	stb      r30, 9(r1)
	mr       r3, r31
	addi     r4, r1, 0xc
	stb      r0, 8(r1)
	stb      r30, 0xa(r1)
	stb      r0, 0xb(r1)
	lwz      r0, 8(r1)
	stw      r0, 0xc(r1)
	bl       setCharColor__7JUTFontFQ28JUtility6TColor
	lis      r3,
"sMessageFileLine__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@ha addi     r3,
r3, "sMessageFileLine__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@l bl strlen
	lwz      r12, 0(r31)
	mr       r30, r3
	mr       r3, r31
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	xoris    r4, r3, 0x8000
	lis      r0, 0x4330
	mr       r3, r31
	stw      r4, 0x14(r1)
	lwz      r12, 0(r31)
	stw      r0, 0x10(r1)
	lfd      f1, lbl_80516560@sda21(r2)
	lfd      f0, 0x10(r1)
	lwz      r12, 0x28(r12)
	fsubs    f31, f0, f1
	mtctr    r12
	bctrl
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x1c(r1)
	lis      r3,
"sMessageFileLine__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@ha addi     r4,
r3, "sMessageFileLine__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@l lfd      f3,
lbl_80516560@sda21(r2) stw      r0, 0x18(r1) fmr      f4, f31 lfs      f1,
lbl_80516550@sda21(r2) mr       r3, r31 lfd      f0, 0x18(r1) mr       r5, r30
	lfs      f2, lbl_80516554@sda21(r2)
	fsubs    f3, f0, f3
	li       r6, 1
	bl       drawString_size_scale__7JUTFontFffffPCcUlb
	lis      r3, "sMessageString__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@ha
	addi     r3, r3,
"sMessageString__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@l bl       strlen
	lwz      r12, 0(r31)
	mr       r30, r3
	mr       r3, r31
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	xoris    r4, r3, 0x8000
	lis      r0, 0x4330
	mr       r3, r31
	stw      r4, 0x24(r1)
	lwz      r12, 0(r31)
	stw      r0, 0x20(r1)
	lfd      f1, lbl_80516560@sda21(r2)
	lfd      f0, 0x20(r1)
	lwz      r12, 0x28(r12)
	fsubs    f31, f0, f1
	mtctr    r12
	bctrl
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x2c(r1)
	lis      r3, "sMessageString__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@ha
	addi     r4, r3,
"sMessageString__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@l lfd      f3,
lbl_80516560@sda21(r2) stw      r0, 0x28(r1) fmr      f4, f31 lfs      f1,
lbl_80516550@sda21(r2) mr       r3, r31 lfd      f0, 0x28(r1) mr       r5, r30
	lfs      f2, lbl_80516558@sda21(r2)
	fsubs    f3, f0, f3
	li       r6, 1
	bl       drawString_size_scale__7JUTFontFffffPCcUlb

lbl_800280A4:
	psq_l    f31, 72(r1), 0, qr0
	lwz      r0, 0x54(r1)
	lfd      f31, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JUTAssertion::getSDevice()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000DC
 */
void JUTAssertion::setConfirmMessage(unsigned long, char*, int, bool, const char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001B0
 */
void showAssert_f_va(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000210
 */
void JUTAssertion::showAssert_f(unsigned long, const char*, int, const char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void JUTAssertion::checkAssert(unsigned long, char*, int, bool, const char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000100
 */
void setWarningMessage_f_va(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000158
 */
void JUTAssertion::setWarningMessage_f(unsigned long, char*, int, const char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000FC
 */
void setLogMessage_f_va(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000154
 */
void JUTAssertion::setLogMessage_f(unsigned long, char*, int, const char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JUTAssertion::changeDisplayTime(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JUTAssertion::changeDevice(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JUTAssertion::setVisible(bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JUTAssertion::getVisible()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800280C4
 * Size:	000018
 */
void JUTAssertion::setMessageCount(int p1)
{
	sMessageLife = p1 & (bool)p1; // ???

	/*
	neg      r0, r3
	orc      r0, r3, r0
	srawi    r0, r0, 0x1f
	andc     r0, r3, r0
	stw      r0,
	"sMessageLife__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@sda21(r13) blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JUTAssertion::setDeviceSynchro(bool)
{
	// UNUSED FUNCTION
}

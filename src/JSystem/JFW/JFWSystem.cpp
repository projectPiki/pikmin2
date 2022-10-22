#include "JSystem/JFW/JFWSystem.h"
#include "Dolphin/dvd.h"
#include "Dolphin/gx.h"
#include "Dolphin/os.h"
#include "JSystem/JKR/Aram.h"
#include "JSystem/JKR/JKRHeap.h"
#include "JSystem/JKR/JKRThread.h"
#include "JSystem/JUT/JUTAssertion.h"
#include "JSystem/JUT/JUTConsole.h"
#include "JSystem/JUT/JUTDbPrint.h"
#include "JSystem/JUT/JUTDirectPrint.h"
#include "JSystem/JUT/JUTException.h"
#include "JSystem/JUT/JUTFont.h"
#include "JSystem/JUT/JUTGamePad.h"
#include "JSystem/JUT/JUTGraphFifo.h"
#include "JSystem/JUT/JUTVideo.h"

/*
    Generated from dpostproc

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global maxStdHeaps__Q29JFWSystem11CSetUpParam
    maxStdHeaps__Q29JFWSystem11CSetUpParam:
        .4byte 2
    .global sysHeapSize__Q29JFWSystem11CSetUpParam
    sysHeapSize__Q29JFWSystem11CSetUpParam:
        .4byte 0x00400000
    .global fifoBufSize__Q29JFWSystem11CSetUpParam
    fifoBufSize__Q29JFWSystem11CSetUpParam:
        .4byte 0x00040000
    .global aramAudioBufSize__Q29JFWSystem11CSetUpParam
    aramAudioBufSize__Q29JFWSystem11CSetUpParam:
        .4byte 0x00800000
    .global aramGraphBufSize__Q29JFWSystem11CSetUpParam
    aramGraphBufSize__Q29JFWSystem11CSetUpParam:
        .4byte 0x00600000
    .global streamPriority__Q29JFWSystem11CSetUpParam
    streamPriority__Q29JFWSystem11CSetUpParam:
        .4byte 0x00000008
    .global decompPriority__Q29JFWSystem11CSetUpParam
    decompPriority__Q29JFWSystem11CSetUpParam:
        .4byte 0x00000007
    .global aPiecePriority__Q29JFWSystem11CSetUpParam
    aPiecePriority__Q29JFWSystem11CSetUpParam:
        .4byte 0x00000006
    .global systemFontRes__Q29JFWSystem11CSetUpParam
    systemFontRes__Q29JFWSystem11CSetUpParam:
        .4byte JUTResFONT_Ascfont_fix12
    .global renderMode__Q29JFWSystem11CSetUpParam
    renderMode__Q29JFWSystem11CSetUpParam:
        .4byte GXNtsc480IntDf
    .global exConsoleBufferSize__Q29JFWSystem11CSetUpParam
    exConsoleBufferSize__Q29JFWSystem11CSetUpParam:
        .4byte 0x000024FC

    .section .sbss # 0x80514D80 - 0x80516360
    .global rootHeap__9JFWSystem
    rootHeap__9JFWSystem:
        .skip 0x4
    .global systemHeap__9JFWSystem
    systemHeap__9JFWSystem:
        .skip 0x4
    .global mainThread__9JFWSystem
    mainThread__9JFWSystem:
        .skip 0x4
    .global debugPrint__9JFWSystem
    debugPrint__9JFWSystem:
        .skip 0x4
    .global systemFont__9JFWSystem
    systemFont__9JFWSystem:
        .skip 0x4
    .global systemConsoleManager__9JFWSystem
    systemConsoleManager__9JFWSystem:
        .skip 0x4
    .global systemConsole__9JFWSystem
    systemConsole__9JFWSystem:
        .skip 0x4
    .global sInitCalled__9JFWSystem
    sInitCalled__9JFWSystem:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516B00
    lbl_80516B00:
        .float 0.5
    .global lbl_80516B04
    lbl_80516B04:
        .4byte 0x3F59999A
    .global lbl_80516B08
    lbl_80516B08:
        .4byte 0x43300000
        .4byte 0x80000000
*/

extern ResFONT JUTResFONT_Ascfont_fix12;

const int JFWSystem::CSetUpParam::maxStdHeaps             = 2;
const u32 JFWSystem::CSetUpParam::sysHeapSize             = 0x400000;
const u32 JFWSystem::CSetUpParam::fifoBufSize             = 0x40000;
const u32 JFWSystem::CSetUpParam::aramAudioBufSize        = 0x800000;
const u32 JFWSystem::CSetUpParam::aramGraphBufSize        = 0x600000;
const long JFWSystem::CSetUpParam::streamPriority         = 8;
const long JFWSystem::CSetUpParam::decompPriority         = 7;
const long JFWSystem::CSetUpParam::aPiecePriority         = 6;
const ResFONT* JFWSystem::CSetUpParam::systemFontRes      = &JUTResFONT_Ascfont_fix12;
const GXRenderModeObj* JFWSystem::CSetUpParam::renderMode = &GXNtsc480IntDf;
const u32 JFWSystem::CSetUpParam::exConsoleBufferSize     = 0x24FC;

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void JFWSystem::firstInit()
{
	// UNUSED FUNCTION
	OSInit();
	DVDInit();
	rootHeap   = JKRExpHeap::createRoot(CSetUpParam::maxStdHeaps, false);
	systemHeap = JKRExpHeap::create(CSetUpParam::sysHeapSize, rootHeap, false);
}

/**
 * --INFO--
 * Address:	8008975C
 * Size:	000350
 * init__9JFWSystemFv
 * TODO: consts aren't cooperating?
 */
void JFWSystem::init()
{
	if (rootHeap == nullptr) {
		firstInit();
	}
	sInitCalled = 1;
	JKRAram::create(CSetUpParam::aramAudioBufSize, CSetUpParam::aramGraphBufSize, CSetUpParam::streamPriority, CSetUpParam::decompPriority,
	                CSetUpParam::aPiecePriority);
	mainThread = new JKRThread(OSGetCurrentThread(), 4);
	JUTVideo::createManager(CSetUpParam::renderMode);
	JUTGraphFifo* graphFifo = new JUTGraphFifo(CSetUpParam::fifoBufSize);
	JUTGamePad::init();
	JUTDirectPrint* directPrint = JUTDirectPrint::start();
	JUTAssertion::create();
	JUTException::create(directPrint);
	systemFont = new JUTResFont(CSetUpParam::systemFontRes, nullptr);
	debugPrint = JUTDbPrint::start(nullptr, nullptr);
	debugPrint->changeFont(systemFont);
	systemConsoleManager = JUTConsoleManager::createManager(nullptr);
	systemConsole        = JUTConsole::create(0x3C, 200, nullptr);
	systemConsole->setFont(systemFont);
	// systemConsole->m_font = systemFont;
	// systemConsole->setFontSize(systemFont->getWidth(), systemFont->getHeight());
	// systemConsole->m_fontSize.set(systemFont->getWidth(), systemFont->getHeight());
	if (CSetUpParam::renderMode->efbHeight < 300) {
		systemConsole->setFontSize(systemFont->getWidth() * 0.85f, systemFont->getHeight() * 0.5f);
		// systemConsole->m_fontSize.set(systemFont->getWidth() * 0.85f, systemFont->getHeight() * 0.5f);
		systemConsole->setPosition(20, 25);
		// systemConsole->m_position.set(20, 25);
	} else {
		systemConsole->setFontSize(systemFont->getWidth(), systemFont->getHeight());
		// systemConsole->m_fontSize.set(systemFont->getWidth(), systemFont->getHeight());
		systemConsole->setPosition(20, 50);
		// systemConsole->m_position.set(20, 50);
	}
	systemConsole->setHeight(25);
	// systemConsole->m_height = 25;
	// if (systemConsole->_24 < systemConsole->m_height) {
	// 	systemConsole->m_height = systemConsole->_24;
	// }
	systemConsole->setVisible(false);
	// systemConsole->m_visible = false;
	systemConsole->setOutput(JUTConsole::OUTPUT_OSREPORT | JUTConsole::OUTPUT_CONSOLE);
	// systemConsole->m_output = 3;
	JUTSetReportConsole(systemConsole);
	JUTSetWarningConsole(systemConsole);
	void* mem = systemHeap->alloc(CSetUpParam::exConsoleBufferSize, 4);
	JUTException::createConsole(mem, CSetUpParam::exConsoleBufferSize);
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	lwz      r0, rootHeap__9JFWSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_800897B0
	bl       OSInit
	bl       DVDInit
	lwz      r3, maxStdHeaps__Q29JFWSystem11CSetUpParam@sda21(r13)
	li       r4, 0
	bl       createRoot__10JKRExpHeapFib
	mr       r4, r3
	lwz      r3, sysHeapSize__Q29JFWSystem11CSetUpParam@sda21(r13)
	stw      r4, rootHeap__9JFWSystem@sda21(r13)
	li       r5, 0
	bl       create__10JKRExpHeapFUlP7JKRHeapb
	stw      r3, systemHeap__9JFWSystem@sda21(r13)

lbl_800897B0:
	li       r0, 1
	lwz      r3, aramAudioBufSize__Q29JFWSystem11CSetUpParam@sda21(r13)
	stb      r0, sInitCalled__9JFWSystem@sda21(r13)
	lwz      r4, aramGraphBufSize__Q29JFWSystem11CSetUpParam@sda21(r13)
	lwz      r5, streamPriority__Q29JFWSystem11CSetUpParam@sda21(r13)
	lwz      r6, decompPriority__Q29JFWSystem11CSetUpParam@sda21(r13)
	lwz      r7, aPiecePriority__Q29JFWSystem11CSetUpParam@sda21(r13)
	bl       create__7JKRAramFUlUllll
	li       r3, 0x7c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_800897F8
	bl       OSGetCurrentThread
	mr       r4, r3
	mr       r3, r30
	li       r5, 4
	bl       __ct__9JKRThreadFP8OSThreadi
	mr       r30, r3

lbl_800897F8:
	stw      r30, mainThread__9JFWSystem@sda21(r13)
	lwz      r3, renderMode__Q29JFWSystem11CSetUpParam@sda21(r13)
	bl       createManager__8JUTVideoFPC16_GXRenderModeObj
	lwz      r31, fifoBufSize__Q29JFWSystem11CSetUpParam@sda21(r13)
	li       r3, 0x1c
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80089820
	mr       r4, r31
	bl       __ct__12JUTGraphFifoFUl

lbl_80089820:
	bl       init__10JUTGamePadFv
	bl       start__14JUTDirectPrintFv
	mr       r30, r3
	bl       create__12JUTAssertionFv
	mr       r3, r30
	bl       create__12JUTExceptionFP14JUTDirectPrint
	li       r3, 0x70
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80089858
	lwz      r4, systemFontRes__Q29JFWSystem11CSetUpParam@sda21(r13)
	li       r5, 0
	bl       __ct__10JUTResFontFPC7ResFONTP7JKRHeap
	mr       r0, r3

lbl_80089858:
	stw      r0, systemFont__9JFWSystem@sda21(r13)
	li       r3, 0
	li       r4, 0
	bl       start__10JUTDbPrintFP7JUTFontP7JKRHeap
	stw      r3, debugPrint__9JFWSystem@sda21(r13)
	lwz      r4, systemFont__9JFWSystem@sda21(r13)
	bl       changeFont__10JUTDbPrintFP7JUTFont
	li       r3, 0
	bl       createManager__17JUTConsoleManagerFP7JKRHeap
	stw      r3, systemConsoleManager__9JFWSystem@sda21(r13)
	li       r3, 0x3c
	li       r4, 0xc8
	li       r5, 0
	bl       create__10JUTConsoleFUiUiP7JKRHeap
	mr       r31, r3
	lwz      r3, systemFont__9JFWSystem@sda21(r13)
	stw      r31, systemConsole__9JFWSystem@sda21(r13)
	mr       r30, r3
	stw      r3, 0x4c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	xoris    r4, r3, 0x8000
	lis      r0, 0x4330
	mr       r3, r30
	stw      r4, 0xc(r1)
	lwz      r12, 0(r30)
	stw      r0, 8(r1)
	lfd      f1, lbl_80516B08@sda21(r2)
	lfd      f0, 8(r1)
	lwz      r12, 0x28(r12)
	fsubs    f31, f0, f1
	mtctr    r12
	bctrl
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lfd      f1, lbl_80516B08@sda21(r2)
	stw      r0, 0x10(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f1
	stfs     f0, 0x50(r31)
	stfs     f31, 0x54(r31)
	lwz      r3, renderMode__Q29JFWSystem11CSetUpParam@sda21(r13)
	lhz      r0, 6(r3)
	cmplwi   r0, 0x12c
	bge      lbl_800899AC
	lwz      r3, systemFont__9JFWSystem@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lwz      r3, systemFont__9JFWSystem@sda21(r13)
	stw      r0, 0x10(r1)
	lfd      f1, lbl_80516B08@sda21(r2)
	lfd      f0, 0x10(r1)
	lwz      r12, 0(r3)
	fsubs    f1, f0, f1
	lfs      f0, lbl_80516B00@sda21(r2)
	lwz      r12, 0x28(r12)
	fmuls    f31, f0, f1
	mtctr    r12
	bctrl
	xoris    r0, r3, 0x8000
	lis      r4, 0x4330
	stw      r0, 0xc(r1)
	li       r3, 0x14
	lfd      f2, lbl_80516B08@sda21(r2)
	li       r0, 0x19
	stw      r4, 8(r1)
	lfs      f0, lbl_80516B04@sda21(r2)
	lfd      f1, 8(r1)
	lwz      r4, systemConsole__9JFWSystem@sda21(r13)
	fsubs    f1, f1, f2
	fmuls    f0, f0, f1
	stfs     f0, 0x50(r4)
	stfs     f31, 0x54(r4)
	lwz      r4, systemConsole__9JFWSystem@sda21(r13)
	stw      r3, 0x40(r4)
	stw      r0, 0x44(r4)
	b        lbl_80089A2C

lbl_800899AC:
	lwz      r3, systemFont__9JFWSystem@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	xoris    r4, r3, 0x8000
	lwz      r3, systemFont__9JFWSystem@sda21(r13)
	lis      r0, 0x4330
	stw      r4, 0x14(r1)
	lwz      r12, 0(r3)
	stw      r0, 0x10(r1)
	lfd      f1, lbl_80516B08@sda21(r2)
	lfd      f0, 0x10(r1)
	lwz      r12, 0x28(r12)
	fsubs    f31, f0, f1
	mtctr    r12
	bctrl
	xoris    r0, r3, 0x8000
	lis      r4, 0x4330
	stw      r0, 0xc(r1)
	li       r3, 0x14
	lfd      f1, lbl_80516B08@sda21(r2)
	li       r0, 0x32
	stw      r4, 8(r1)
	lwz      r4, systemConsole__9JFWSystem@sda21(r13)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	stfs     f0, 0x50(r4)
	stfs     f31, 0x54(r4)
	lwz      r4, systemConsole__9JFWSystem@sda21(r13)
	stw      r3, 0x40(r4)
	stw      r0, 0x44(r4)

lbl_80089A2C:
	lwz      r3, systemConsole__9JFWSystem@sda21(r13)
	li       r0, 0x19
	stw      r0, 0x48(r3)
	lwz      r0, 0x48(r3)
	lwz      r4, 0x24(r3)
	cmplw    r0, r4
	ble      lbl_80089A4C
	stw      r4, 0x48(r3)

lbl_80089A4C:
	lwz      r3, systemConsole__9JFWSystem@sda21(r13)
	li       r4, 0
	li       r0, 3
	stb      r4, 0x68(r3)
	lwz      r3, systemConsole__9JFWSystem@sda21(r13)
	stw      r0, 0x58(r3)
	lwz      r3, systemConsole__9JFWSystem@sda21(r13)
	bl       JUTSetReportConsole
	lwz      r3, systemConsole__9JFWSystem@sda21(r13)
	bl       JUTSetWarningConsole
	lwz      r3, systemHeap__9JFWSystem@sda21(r13)
	li       r5, 4
	lwz      r4, exConsoleBufferSize__Q29JFWSystem11CSetUpParam@sda21(r13)
	bl       alloc__7JKRHeapFUli
	lwz      r4, exConsoleBufferSize__Q29JFWSystem11CSetUpParam@sda21(r13)
	bl       createConsole__12JUTExceptionFPvUl
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

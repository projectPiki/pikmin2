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
#include "types.h"

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

JKRHeap* JFWSystem::rootHeap;
JKRHeap* JFWSystem::systemHeap;
JKRThread* JFWSystem::mainThread;
JUTDbPrint* JFWSystem::debugPrint;
JUTFont* JFWSystem::systemFont;
JUTConsoleManager* JFWSystem::systemConsoleManager;
JUTConsole* JFWSystem::systemConsole;
u8 JFWSystem::sInitCalled;

int JFWSystem::CSetUpParam::maxStdHeaps             = 2;
u32 JFWSystem::CSetUpParam::sysHeapSize             = 0x400000;
size_t JFWSystem::CSetUpParam::fifoBufSize          = 0x40000;
u32 JFWSystem::CSetUpParam::aramAudioBufSize        = 0x800000;
u32 JFWSystem::CSetUpParam::aramGraphBufSize        = 0x600000;
long JFWSystem::CSetUpParam::streamPriority         = 8;
long JFWSystem::CSetUpParam::decompPriority         = 7;
long JFWSystem::CSetUpParam::aPiecePriority         = 6;
ResFONT* JFWSystem::CSetUpParam::systemFontRes      = &JUTResFONT_Ascfont_fix12;
GXRenderModeObj* JFWSystem::CSetUpParam::renderMode = &GXNtsc480IntDf;
u32 JFWSystem::CSetUpParam::exConsoleBufferSize     = 0x24FC;

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
	JUTCreateFifo(CSetUpParam::fifoBufSize);
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
	if (CSetUpParam::renderMode->efbHeight < 300) {
		systemConsole->setFontSize(systemFont->getWidth() * 0.85f, systemFont->getHeight() * 0.5f);
		systemConsole->setPosition(20, 25);
	} else {
		systemConsole->setFontSize(systemFont->getWidth(), systemFont->getHeight());
		systemConsole->setPosition(20, 50);
	}
	systemConsole->setHeight(25);
	systemConsole->setVisible(false);
	systemConsole->setOutput(JUTConsole::OUTPUT_OSREPORT | JUTConsole::OUTPUT_CONSOLE);
	JUTSetReportConsole(systemConsole);
	JUTSetWarningConsole(systemConsole);
	void* mem = systemHeap->alloc(CSetUpParam::exConsoleBufferSize, 4);
	JUTException::createConsole(mem, CSetUpParam::exConsoleBufferSize);
}

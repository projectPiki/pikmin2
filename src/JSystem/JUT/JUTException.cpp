#include "Dolphin/PPCArch.h"
#include "Dolphin/math.h"
#include "Dolphin/os.h"
#include "Dolphin/stl.h"
#include "Dolphin/string.h"
#include "Dolphin/vi.h"
#include "JSystem/JKR/JKRHeap.h"
#include "JSystem/JKR/JKRThread.h"
#include "JSystem/JSupport/JSUList.h"
#include "JSystem/JUT/JUTConsole.h"
#include "JSystem/JUT/JUTDirectPrint.h"
#include "JSystem/JUT/JUTException.h"
#include "JSystem/JUT/JUTExternalFB.h"
#include "JSystem/JUT/JUTGamePad.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_JUTException_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80473C18
    lbl_80473C18:
        .asciz "SYSTEM RESET"
        .skip 3
    .global lbl_80473C28
    lbl_80473C28:
        .asciz "MACHINE CHECK"
        .skip 2
    .global lbl_80473C38
    lbl_80473C38:
        .asciz "EXTERNAL INTERRUPT"
        .skip 1
    .global lbl_80473C4C
    lbl_80473C4C:
        .asciz "ALIGNMENT"
        .skip 2
    .global lbl_80473C58
    lbl_80473C58:
        .asciz "FLOATING POINT"
        .skip 1
    .global lbl_80473C68
    lbl_80473C68:
        .asciz "DECREMENTER"
    .global lbl_80473C74
    lbl_80473C74:
        .asciz "SYSTEM CALL"
    .global lbl_80473C80
    lbl_80473C80:
        .asciz "PERFORMACE MONITOR"
        .skip 1
    .global lbl_80473C94
    lbl_80473C94:
        .asciz "BREAK POINT"
    .global lbl_80473CA0
    lbl_80473CA0:
        .asciz "SYSTEM INTERRUPT"
        .skip 3
    .global lbl_80473CB4
    lbl_80473CB4:
        .asciz "THERMAL INTERRUPT"
        .skip 2
    .global lbl_80473CC8
    lbl_80473CC8:
        .asciz "PROTECTION"
        .skip 1
    .global lbl_80473CD4
    lbl_80473CD4:
        .asciz "%s in \"%s\" on line %d\n"
        .skip 1
        .asciz "F%02d: Nan      "
        .skip 3
        .asciz "F%02d:+Inf     "
        .asciz "F%02d:-Inf     "
        .asciz "F%02d: 0.0      "
        .skip 3
        .asciz "F%02d:%+.3E"
        .asciz "-------------------------------- FPR\n"
        .skip 2
        .asciz "-------------------------------- TRACE\n"
        .asciz "Address:   BackChain   LR save\n"
        .asciz "Suppress trace.\n"
        .skip 3
        .asciz "%08X:  %08X    %08X\n"
        .skip 3
        .asciz "CONTEXT:%08XH  (%s EXCEPTION)\n"
        .skip 1
        .asciz "CONTEXT:%08XH\n"
        .skip 1
        .asciz " FPE: Invalid operation\n"
        .skip 3
        .asciz " Infinity - Infinity\n"
        .skip 2
        .asciz " Infinity / Infinity\n"
        .skip 2
        .asciz " Infinity * 0\n"
        .skip 1
        .asciz " Invalid compare\n"
        .skip 2
        .asciz " Software request\n"
        .skip 1
        .asciz " Invalid square root\n"
        .skip 2
        .asciz " Invalid integer convert\n"
        .skip 2
        .asciz " FPE: Overflow\n"
        .asciz " FPE: Underflow\n"
        .skip 3
        .asciz " FPE: Zero division\n"
        .skip 3
        .asciz " FPE: Inexact result\n"
        .skip 2
        .asciz "SRR0:   %08XH   SRR1:%08XH\n"
        .asciz "DSISR:  %08XH   DAR: %08XH\n"
        .asciz "-------------------------------- GPR\n"
        .skip 2
        .asciz "R%02d:%08XH  R%02d:%08XH  R%02d:%08XH\n"
        .skip 1
        .asciz "R%02d:%08XH  R%02d:%08XH\n"
        .skip 2
    .global lbl_80473FBC
    lbl_80473FBC:
        .asciz "%s %s:%x section:%d\n"
        .skip 3
        .asciz "-------------------------------- GPRMAP\n"
        .skip 3
        .asciz "R%02d: %08XH"
        .skip 3
        .asciz "  no information\n"
        .skip 2
        .asciz "  no register which seem to address.\n"
        .skip 2
        .asciz "-------------------------------- SRR0MAP\n"
        .skip 2
        .asciz "SRR0: %08XH"
        .asciz " MSR:%08XH\t FPSCR:%08XH\n"
        .skip 3
        .asciz "******** EXCEPTION OCCURRED! ********\nFrameMemory:%XH\n"
        .skip 1
        .asciz "******** USER HALT ********\nFrameMemory:%XH\n"
        .skip 3
        .asciz "--------------------------------\n"
        .skip 2
    .global lbl_8047412C
    lbl_8047412C:
        .asciz "  [%08X]: .%s [%08X: %XH]\n  %s\n"

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global sMessageQueue__12JUTException
    sMessageQueue__12JUTException:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global c3bcnt
    c3bcnt:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global sCpuExpName__12JUTException
    sCpuExpName__12JUTException:
        .4byte lbl_80473C18
        .4byte lbl_80473C28
        .4byte lbl_80516610
        .4byte lbl_80516614
        .4byte lbl_80473C38
        .4byte lbl_80473C4C
        .4byte lbl_80516618
        .4byte lbl_80473C58
        .4byte lbl_80473C68
        .4byte lbl_80473C74
        .4byte lbl_80516620
        .4byte lbl_80473C80
        .4byte lbl_80473C94
        .4byte lbl_80473CA0
        .4byte lbl_80473CB4
        .4byte lbl_80473CC8
        .4byte lbl_80473C58
    .global __vt__12JUTException
    __vt__12JUTException:
        .4byte 0
        .4byte 0
        .4byte __dt__12JUTExceptionFv
        .4byte run__12JUTExceptionFv
        .4byte 0

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global sMapFileList__12JUTException
    sMapFileList__12JUTException:
        .skip 0xC

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global sMessageBuffer__12JUTException
    sMessageBuffer__12JUTException:
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global sErrorManager__12JUTException
    sErrorManager__12JUTException:
        .skip 0x4
    .global sPreUserCallback__12JUTException
    sPreUserCallback__12JUTException:
        .skip 0x4
    .global sPostUserCallback__12JUTException
    sPostUserCallback__12JUTException:
        .skip 0x4
    .global sConsoleBuffer__12JUTException
    sConsoleBuffer__12JUTException:
        .skip 0x4
    .global sConsoleBufferSize__12JUTException
    sConsoleBufferSize__12JUTException:
        .skip 0x4
    .global sConsole__12JUTException
    sConsole__12JUTException:
        .skip 0x4
    .global msr__12JUTException
    msr__12JUTException:
        .skip 0x4
    .global fpscr__12JUTException
    fpscr__12JUTException:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516610
    lbl_80516610:
        .asciz "DSI"
    .global lbl_80516614
    lbl_80516614:
        .asciz "ISI"
    .global lbl_80516618
    lbl_80516618:
        .asciz "PROGRAM"
    .global lbl_80516620
    lbl_80516620:
        .asciz "TRACE"
        .skip 2
    .global lbl_80516628
    lbl_80516628:
        .float 0.0
    .global lbl_8051662C
    lbl_8051662C:
        .4byte 0x20000000
    .global lbl_80516630
    lbl_80516630:
        .4byte 0x0A000000
    .global lbl_80516634
    lbl_80516634:
        .4byte 0x20534E61
        .4byte 0x4E0A0000
    .global lbl_8051663C
    lbl_8051663C:
        .4byte 0x2030202F
        .4byte 0x20300A00
    .global lbl_80516644
    lbl_80516644:
        .4byte 0x00000000
    .global lbl_80516648
    lbl_80516648:
        .asciz ".map"
        .skip 3
    .global lbl_80516650
    lbl_80516650:
        .float 10.0
    .global lbl_80516654
    lbl_80516654:
        .float 6.0
*/

OSErrorHandler JUTException::sPreUserCallback;
OSErrorHandler JUTException::sPostUserCallback;
JUTException* JUTException::sErrorManager;
u32 JUTException::msr;
u32 JUTException::fpscr;
OSMessageQueue JUTException::sMessageQueue;
void* JUTException::sMessageBuffer[1];
JSUList<JUTException::JUTExMapFile> JUTException::sMapFileList(false);

static JUTException::ExCallbackObject exCallbackObject;

const char* const JUTException::sCpuExpName[OS_ERROR_MAX + 1]
    = { "SYSTEM RESET",      "MACHINE CHECK", "DSI",           "ISI",   "EXTERNAL INTERRUPT",  "ALIGNMENT",   "PROGRAM",
	    "FLOATING POINT",    "DECREMENTER",   "SYSTEM CALL",   "TRACE", "PERFORMANCE MONITOR", "BREAK POINT", "SYSTEM INTERRUPT",
	    "THERMAL INTERRUPT", "PROTECTION",    "FLOATING POINT" };

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
JUTException::JUTException(JUTDirectPrint* directPrint)
    : JKRThread(0x4000, 0x10, 0)
    , m_directPrint(directPrint)
{
	// UNUSED FUNCTION
	OSSetErrorHandler(OS_ERROR_DSI, errorHandler);
	OSSetErrorHandler(OS_ERROR_ISI, errorHandler);
	OSSetErrorHandler(OS_ERROR_PROGRAM, errorHandler);
	OSSetErrorHandler(OS_ERROR_ALIGNMENT, errorHandler);
	OSSetErrorHandler(OS_ERROR_PROTECTION, errorHandler);
	setFPException(0);
	sPreUserCallback  = nullptr;
	sPostUserCallback = nullptr;
	_84               = 0;
	m_padPort         = JUTGamePad::PORT_INVALID;
	_8C               = 10;
	_90               = 10;
	_94               = -1;
	_98               = 0;
	_9C               = 31;
}

/*
 * --INFO--
 * Address:	8002A30C
 * Size:	000110
 */
JUTException* JUTException::create(JUTDirectPrint* directPrint)
{
	if (sErrorManager == nullptr) {
		sErrorManager = new (JKRHeap::sSystemHeap, 0) JUTException(directPrint);
		OSResumeThread(sErrorManager->m_thread);
	}
	return sErrorManager;
}

/*
 * --INFO--
 * Address:	8002A41C
 * Size:	000120
 */
void* JUTException::run()
{
	PPCMtmsr(PPCMfmsr() & 0xFFFFF6FF);
	OSInitMessageQueue(&sMessageQueue, sMessageBuffer, 1);
	while (true) {
		ExCallbackObject* msg;
		OSReceiveMessage(&sMessageQueue, &msg, OS_MESSAGE_BLOCKING);
		VISetPreRetraceCallback(nullptr);
		VISetPostRetraceCallback(nullptr);
		OSError error          = msg->m_error;
		OSErrorHandler handler = msg->m_errorHandler;
		OSContext* context     = msg->m_context;
		u32 v1                 = msg->_0C;
		u32 v2                 = msg->_10;
		if (error < OS_ERROR_MAX + 1) {
			m_stackPointer = (void*)context->gpr[1];
		}
		m_frameBuffer = VIGetCurrentFrameBuffer();
		if (m_frameBuffer == nullptr) {
			sErrorManager->createFB();
		}
		sErrorManager->m_directPrint->changeFrameBuffer(m_frameBuffer, sErrorManager->m_directPrint->_04,
		                                                sErrorManager->m_directPrint->_06);
		if (handler != nullptr) {
			handler(error, context, v1, v2);
		}
		OSDisableInterrupts();
		m_frameBuffer = VIGetCurrentFrameBuffer();
		sErrorManager->m_directPrint->changeFrameBuffer(m_frameBuffer, sErrorManager->m_directPrint->_04,
		                                                sErrorManager->m_directPrint->_06);
		sErrorManager->printContext(error, context, v1, v2);
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r31, r3
	bl       PPCMfmsr
	li       r0, -2305
	and      r3, r3, r0
	bl       PPCMtmsr
	lis      r3, sMessageQueue__12JUTException@ha
	addi     r4, r13, sMessageBuffer__12JUTException@sda21
	addi     r3, r3, sMessageQueue__12JUTException@l
	li       r5, 1
	bl       OSInitMessageQueue
	lis      r3, sMessageQueue__12JUTException@ha
	addi     r30, r3, sMessageQueue__12JUTException@l

lbl_8002A45C:
	mr       r3, r30
	addi     r4, r1, 8
	li       r5, 1
	bl       OSReceiveMessage
	li       r3, 0
	bl       VISetPreRetraceCallback
	li       r3, 0
	bl       VISetPostRetraceCallback
	lwz      r3, 8(r1)
	lhz      r28, 4(r3)
	lwz      r29, 0(r3)
	cmplwi   r28, 0x11
	lwz      r27, 8(r3)
	lwz      r26, 0xc(r3)
	lwz      r25, 0x10(r3)
	bge      lbl_8002A4A4
	lwz      r0, 4(r27)
	stw      r0, 0xa0(r31)

lbl_8002A4A4:
	bl       VIGetCurrentFrameBuffer
	stw      r3, 0x7c(r31)
	lwz      r0, 0x7c(r31)
	cmplwi   r0, 0
	bne      lbl_8002A4C0
	lwz      r3, sErrorManager__12JUTException@sda21(r13)
	bl       createFB__12JUTExceptionFv

lbl_8002A4C0:
	lwz      r3, sErrorManager__12JUTException@sda21(r13)
	lwz      r4, 0x7c(r31)
	lwz      r3, 0x80(r3)
	lhz      r5, 4(r3)
	lhz      r6, 6(r3)
	bl       changeFrameBuffer__14JUTDirectPrintFPvUsUs
	cmplwi   r29, 0
	beq      lbl_8002A4FC
	mr       r12, r29
	mr       r3, r28
	mr       r4, r27
	mr       r5, r26
	mr       r6, r25
	mtctr    r12
	bctrl

lbl_8002A4FC:
	bl       OSDisableInterrupts
	bl       VIGetCurrentFrameBuffer
	stw      r3, 0x7c(r31)
	lwz      r3, sErrorManager__12JUTException@sda21(r13)
	lwz      r4, 0x7c(r31)
	lwz      r3, 0x80(r3)
	lhz      r5, 4(r3)
	lhz      r6, 6(r3)
	bl       changeFrameBuffer__14JUTDirectPrintFPvUsUs
	lwz      r3, sErrorManager__12JUTException@sda21(r13)
	mr       r4, r28
	mr       r5, r27
	mr       r6, r26
	mr       r7, r25
	bl       printContext__12JUTExceptionFUsP9OSContextUlUl
	b        lbl_8002A45C
	*/
}

/*
 * --INFO--
 * Address:	8002A53C
 * Size:	000104
 */
void JUTException::errorHandler(unsigned short error, OSContext* context, unsigned long p3, unsigned long p4)
{
	msr   = PPCMfmsr();
	fpscr = context->fpscr;
	OSFillFPUContext(context);
	OSSetErrorHandler(error, nullptr);
	if (error == OS_ERROR_PROTECTION) {
		OSProtectRange(0, 0, 0, 3);
		OSProtectRange(1, 0, 0, 3);
		OSProtectRange(2, 0, 0, 3);
		OSProtectRange(3, 0, 0, 3);
	}
	exCallbackObject.m_errorHandler = sPreUserCallback;
	exCallbackObject.m_error        = error;
	exCallbackObject.m_context      = context;
	exCallbackObject._0C            = p3;
	exCallbackObject._10            = p4;
	// exCallbackObject[0] = (void*)sPreUserCallback;
	// exCallbackObject[1] = (void*)error;
	// exCallbackObject[2] = (void*)context;
	// exCallbackObject[3] = (void*)p3;
	// exCallbackObject[4] = (void*)p4;
	OSSendMessage(&sMessageQueue, &exCallbackObject, OS_MESSAGE_BLOCKING);
	OSEnableScheduler();
	OSYieldThread();
}

/*
 * --INFO--
 * Address:	........
 * Size:	000134
 */
// void JUTException::panic_f_va(const char*, int, const char*, __va_list_struct*)
void JUTException::panic_f_va(const char* fileName, int lineNumber, const char* format, va_list* args)
{
	// UNUSED FUNCTION
	char buffer[255];
	vsnprintf(buffer, sizeof(buffer), format, *args);
	if (sErrorManager == nullptr) {
		OSPanic(fileName, lineNumber, buffer);
	}
	static OSContext context;
	memcpy(&context, OSGetCurrentContext(), sizeof(OSContext));
	sErrorManager->m_stackPointer   = OSGetStackPointer();
	exCallbackObject.m_error        = 0xFF; // TODO: Make define for invalid error?
	exCallbackObject.m_errorHandler = sPreUserCallback;
	exCallbackObject.m_context      = &context;
	exCallbackObject._0C            = 0;
	exCallbackObject._10            = 0;
	if (sConsole == nullptr || (sConsole != nullptr && (sConsole->getOutput() & JUTConsole::OUTPUT_CONSOLE) == 0)) {
		OSReport("%s in \"%s\" on line %d\n", buffer, fileName, lineNumber);
	}
	if (sConsole != nullptr) {
		sConsole->print_f("%s in \"%s\" on line %d\n", buffer, fileName, lineNumber);
	}
	OSSendMessage(&sMessageQueue, &exCallbackObject, OS_MESSAGE_BLOCKING);
	OSSuspendThread(OSGetCurrentThread());
}

/*
 * --INFO--
 * Address:	8002A640
 * Size:	0001A0
 * panic_f__12JUTExceptionFPCciPCce
 */
void JUTException::panic_f(const char* fileName, int lineNumber, const char* format, ...)
{
	va_list args;
	va_start(args, format);
	panic_f_va(fileName, lineNumber, format, &args);
	/*
	stwu     r1, -0x190(r1)
	mflr     r0
	stw      r0, 0x194(r1)
	stw      r31, 0x18c(r1)
	mr       r31, r4
	stw      r30, 0x188(r1)
	mr       r30, r3
	stw      r29, 0x184(r1)
	bne      cr1, lbl_8002A684
	stfd     f1, 0x28(r1)
	stfd     f2, 0x30(r1)
	stfd     f3, 0x38(r1)
	stfd     f4, 0x40(r1)
	stfd     f5, 0x48(r1)
	stfd     f6, 0x50(r1)
	stfd     f7, 0x58(r1)
	stfd     f8, 0x60(r1)

lbl_8002A684:
	addi     r11, r1, 0x198
	addi     r0, r1, 8
	lis      r12, 0x300
	stw      r3, 8(r1)
	addi     r29, r1, 0x68
	addi     r3, r1, 0x74
	stw      r4, 0xc(r1)
	li       r4, 0xff
	stw      r6, 0x14(r1)
	mr       r6, r29
	stw      r5, 0x10(r1)
	stw      r7, 0x18(r1)
	stw      r8, 0x1c(r1)
	stw      r9, 0x20(r1)
	stw      r10, 0x24(r1)
	stw      r12, 0x68(r1)
	stw      r11, 0x6c(r1)
	stw      r0, 0x70(r1)
	bl       vsnprintf
	lwz      r0, sErrorManager__12JUTException@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8002A6F0
	mr       r3, r30
	mr       r4, r31
	addi     r5, r1, 0x74
	crclr    6
	bl       OSPanic

lbl_8002A6F0:
	bl       OSGetCurrentContext
	lis      r5, context$2483@ha
	mr       r4, r3
	addi     r3, r5, context$2483@l
	li       r5, 0x2c8
	bl       memcpy
	bl       OSGetStackPointer
	lwz      r7, sErrorManager__12JUTException@sda21(r13)
	lis      r6, exCallbackObject@ha
	lis      r4, context$2483@ha
	li       r5, 0xff
	stw      r3, 0xa0(r7)
	addi     r6, r6, exCallbackObject@l
	li       r0, 0
	addi     r3, r4, context$2483@l
	lwz      r7, sConsole__12JUTException@sda21(r13)
	lwz      r4, sPreUserCallback__12JUTException@sda21(r13)
	cmplwi   r7, 0
	sth      r5, 4(r6)
	stw      r4, 0(r6)
	stw      r3, 8(r6)
	stw      r0, 0xc(r6)
	stw      r0, 0x10(r6)
	beq      lbl_8002A760
	beq      lbl_8002A77C
	lwz      r0, 0x58(r7)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	bne      lbl_8002A77C

lbl_8002A760:
	lis      r3, lbl_80473CD4@ha
	mr       r5, r30
	addi     r3, r3, lbl_80473CD4@l
	mr       r6, r31
	addi     r4, r1, 0x74
	crclr    6
	bl       OSReport

lbl_8002A77C:
	lwz      r3, sConsole__12JUTException@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8002A7A4
	lis      r4, lbl_80473CD4@ha
	mr       r6, r30
	addi     r4, r4, lbl_80473CD4@l
	mr       r7, r31
	addi     r5, r1, 0x74
	crclr    6
	bl       print_f__10JUTConsoleFPCce

lbl_8002A7A4:
	lis      r3, sMessageQueue__12JUTException@ha
	lis      r4, exCallbackObject@ha
	addi     r3, r3, sMessageQueue__12JUTException@l
	li       r5, 1
	addi     r4, r4, exCallbackObject@l
	bl       OSSendMessage
	bl       OSGetCurrentThread
	bl       OSSuspendThread
	lwz      r0, 0x194(r1)
	lwz      r31, 0x18c(r1)
	lwz      r30, 0x188(r1)
	lwz      r29, 0x184(r1)
	mtlr     r0
	addi     r1, r1, 0x190
	blr
	*/
}

/**
 * --INFO--
 * Address:	8002A7E0
 * Size:	000048
 */
void JUTException::setFPException(unsigned long enableBits)
{
	__OSFpscrEnableBits = enableBits;
	if (enableBits != 0) {
		OSSetErrorHandler(OS_ERROR_MAX, errorHandler);
	} else {
		OSSetErrorHandler(OS_ERROR_MAX, nullptr);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000184
 */
void JUTException::showFloatSub(int reg, float flt)
{
	// UNUSED FUNCTION
	if (fpclassify(flt) == 1) {
		sConsole->print_f("F%02d: Nan      ", reg);
	} else if (fpclassify(flt) == 2) {
		if (ispositive(flt)) {
			sConsole->print_f("F%02d:+Inf     ", reg);
		} else {
			sConsole->print_f("F%02d:-Inf     ", reg);
		}
	} else if (flt == 0.0f) {
		sConsole->print_f("F%02d: 0.0      ", reg);
	} else {
		sConsole->print_f("F%02d:%+.3E", reg, flt);
	}
}

/*
 * --INFO--
 * Address:	8002A828
 * Size:	000770
 * showFloat__12JUTExceptionFP9OSContext
 */
void JUTException::showFloat(OSContext* context)
{
	if (sConsole == nullptr) {
		return;
	}
	sConsole->print("-------------------------------- FPR\n");
	for (int i = 0; i < 10; i++) {
		showFloatSub(i, context->fpr[i]);
		sConsole->print(" ");
		showFloatSub(i + 11, context->fpr[i + 11]);
		sConsole->print(" ");
		showFloatSub(i + 22, context->fpr[i + 22]);
		sConsole->print("\n");
	}
	showFloatSub(10, context->fpr[10]);
	sConsole->print(" ");
	showFloatSub(21, context->fpr[21]);
	sConsole->print("\n");
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C0
 */
void JUTException::searchPartialModule(unsigned long, unsigned long*, unsigned long*, unsigned long*, unsigned long*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void search_name_part(unsigned char*, unsigned char*, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002AF98
 * Size:	0000FC
 */
void JUTException::showStack(OSContext* context)
{
	if (sConsole == nullptr) {
		return;
	}
	sConsole->print("-------------------------------- TRACE\n");
	u32* stack = (u32*)m_stackPointer;
	sConsole->print_f("Address:   BackChain   LR save\n");
	u32 frames = 0;
	while (stack != nullptr && stack != (u32*)-1 && 0x10 > frames++) {
		// if (stack == nullptr) {
		// 	return;
		// }
		// if (stack == (u32*)-1) {
		// 	return;
		// }
		// if (0xF < frames++) {
		// 	return;
		// }
		if (frames > _94) {
			sConsole->print("Suppress trace.\n");
			return;
		}
		sConsole->print_f("%08X:  %08X    %08X\n", stack, stack[0], stack[1]);
		showMapInfo_subroutine(stack[1], false);
		JUTConsoleManager::sManager->drawDirect(true);
		waitTime(_90);
		stack = (u32*)*stack;
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, lbl_80473C18@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r4, lbl_80473C18@l
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r0, sConsole__12JUTException@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8002B074
	mr       r3, r0
	addi     r4, r31, 0x150
	bl       print__10JUTConsoleFPCc
	lwz      r29, 0xa0(r28)
	addi     r4, r31, 0x178
	lwz      r3, sConsole__12JUTException@sda21(r13)
	crclr    6
	bl       print_f__10JUTConsoleFPCce
	li       r30, 0
	b        lbl_8002B054

lbl_8002AFF4:
	lwz      r0, 0x94(r28)
	cmplw    r30, r0
	ble      lbl_8002B010
	lwz      r3, sConsole__12JUTException@sda21(r13)
	addi     r4, r31, 0x198
	bl       print__10JUTConsoleFPCc
	b        lbl_8002B074

lbl_8002B010:
	lwz      r3, sConsole__12JUTException@sda21(r13)
	mr       r5, r29
	lwz      r6, 0(r29)
	addi     r4, r31, 0x1ac
	lwz      r7, 4(r29)
	crclr    6
	bl       print_f__10JUTConsoleFPCce
	lwz      r4, 4(r29)
	mr       r3, r28
	li       r5, 0
	bl       showMapInfo_subroutine__12JUTExceptionFUlb
	lwz      r3, sManager__17JUTConsoleManager@sda21(r13)
	li       r4, 1
	bl       drawDirect__17JUTConsoleManagerCFb
	lwz      r3, 0x90(r28)
	bl       waitTime__12JUTExceptionFl
	lwz      r29, 0(r29)

lbl_8002B054:
	cmplwi   r29, 0
	beq      lbl_8002B074
	addis    r0, r29, 1
	cmplwi   r0, 0xffff
	beq      lbl_8002B074
	cmplwi   r30, 0x10
	addi     r30, r30, 1
	blt      lbl_8002AFF4

lbl_8002B074:
	lwz      r0, 0x24(r1)
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
 * Address:	8002B094
 * Size:	000244
 */
void JUTException::showMainInfo(unsigned short error, OSContext* context, unsigned long dsisr, unsigned long dar)
{
	if (sConsole == nullptr) {
		return;
	}
	if (error < OS_ERROR_MAX + 1) {
		sConsole->print_f("CONTEXT:%08XH  (%s EXCEPTION)\n", context, sCpuExpName[error]);
	} else {
		sConsole->print_f("CONTEXT:%08XH\n", context);
	}
	if (error == OS_ERROR_MAX) {
		u32 fpe = fpscr & ((fpscr & 0xF8) << 0x16);
		if ((fpe & 0x20000000) != 0) {
			sConsole->print_f(" FPE: Invalid operation\n");
			if ((fpscr & 0x1000000) != 0) {
				sConsole->print_f(" SNaN\n");
			}
			if ((fpscr & 0x800000) != 0) {
				sConsole->print_f(" Infinity - Infinity\n");
			}
			if ((fpscr & 0x400000) != 0) {
				sConsole->print_f(" Infinity / Infinity\n");
			}
			if ((fpscr & 0x200000) != 0) {
				sConsole->print_f(" 0 / 0\n");
			}
			if ((fpscr & 0x100000) != 0) {
				sConsole->print_f(" Infinity * 0\n");
			}
			if ((fpscr & 0x80000) != 0) {
				sConsole->print_f(" Invalid compare\n");
			}
			if ((fpscr & 0x400) != 0) {
				sConsole->print_f(" Software request\n");
			}
			if ((fpscr & 0x200) != 0) {
				sConsole->print_f(" Invalid square root\n");
			}
			if ((fpscr & 0x100) != 0) {
				sConsole->print_f(" Invalid integer convert\n");
			}
		}
		if ((fpe & 0x10000000) != 0) {
			sConsole->print_f(" FPE: Overflow\n");
		}
		if ((fpe & 0x8000000) != 0) {
			sConsole->print_f(" FPE: Underflow\n");
		}
		if ((fpe & 0x4000000) != 0) {
			sConsole->print_f(" FPE: Zero division\n");
		}
		if ((fpe & 0x2000000) != 0) {
			sConsole->print_f(" FPE: Inexact result\n");
		}
	}
	sConsole->print_f("SRR0:   %08XH   SRR1:%08XH\n", context->srr0, context->srr1);
	sConsole->print_f("DSISR:  %08XH   DAR: %08XH\n", dsisr, dar);
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r8, 0x8047
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r30, r4
	  mr        r27, r5
	  mr        r28, r6
	  mr        r29, r7
	  addi      r31, r8, 0x3C18
	  lwz       r3, -0x775C(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x230
	  rlwinm    r0,r30,0,16,31
	  cmplwi    r0, 0x11
	  bge-      .loc_0x60
	  lis       r4, 0x804A
	  rlwinm    r0,r30,2,14,29
	  addi      r4, r4, 0x3E8
	  lwzx      r6, r4, r0
	  addi      r4, r31, 0x1C4
	  crclr     6, 0x6
	  bl        -0x274C
	  b         .loc_0x6C

	.loc_0x60:
	  addi      r4, r31, 0x1E4
	  crclr     6, 0x6
	  bl        -0x275C

	.loc_0x6C:
	  rlwinm    r0,r30,0,16,31
	  cmplwi    r0, 0x10
	  bne-      .loc_0x200
	  lwz       r3, -0x7754(r13)
	  rlwinm    r0,r3,22,2,6
	  oris      r0, r0, 0x1F8
	  ori       r0, r0, 0x700
	  and       r30, r3, r0
	  rlwinm.   r0,r30,0,2,2
	  beq-      .loc_0x1A0
	  lwz       r3, -0x775C(r13)
	  addi      r4, r31, 0x1F4
	  crclr     6, 0x6
	  bl        -0x2794
	  lwz       r0, -0x7754(r13)
	  rlwinm.   r0,r0,0,7,7
	  beq-      .loc_0xC0
	  lwz       r3, -0x775C(r13)
	  subi      r4, r2, 0x7D2C
	  crclr     6, 0x6
	  bl        -0x27B0

	.loc_0xC0:
	  lwz       r0, -0x7754(r13)
	  rlwinm.   r0,r0,0,8,8
	  beq-      .loc_0xDC
	  lwz       r3, -0x775C(r13)
	  addi      r4, r31, 0x210
	  crclr     6, 0x6
	  bl        -0x27CC

	.loc_0xDC:
	  lwz       r0, -0x7754(r13)
	  rlwinm.   r0,r0,0,9,9
	  beq-      .loc_0xF8
	  lwz       r3, -0x775C(r13)
	  addi      r4, r31, 0x228
	  crclr     6, 0x6
	  bl        -0x27E8

	.loc_0xF8:
	  lwz       r0, -0x7754(r13)
	  rlwinm.   r0,r0,0,10,10
	  beq-      .loc_0x114
	  lwz       r3, -0x775C(r13)
	  subi      r4, r2, 0x7D24
	  crclr     6, 0x6
	  bl        -0x2804

	.loc_0x114:
	  lwz       r0, -0x7754(r13)
	  rlwinm.   r0,r0,0,11,11
	  beq-      .loc_0x130
	  lwz       r3, -0x775C(r13)
	  addi      r4, r31, 0x240
	  crclr     6, 0x6
	  bl        -0x2820

	.loc_0x130:
	  lwz       r0, -0x7754(r13)
	  rlwinm.   r0,r0,0,12,12
	  beq-      .loc_0x14C
	  lwz       r3, -0x775C(r13)
	  addi      r4, r31, 0x250
	  crclr     6, 0x6
	  bl        -0x283C

	.loc_0x14C:
	  lwz       r0, -0x7754(r13)
	  rlwinm.   r0,r0,0,21,21
	  beq-      .loc_0x168
	  lwz       r3, -0x775C(r13)
	  addi      r4, r31, 0x264
	  crclr     6, 0x6
	  bl        -0x2858

	.loc_0x168:
	  lwz       r0, -0x7754(r13)
	  rlwinm.   r0,r0,0,22,22
	  beq-      .loc_0x184
	  lwz       r3, -0x775C(r13)
	  addi      r4, r31, 0x278
	  crclr     6, 0x6
	  bl        -0x2874

	.loc_0x184:
	  lwz       r0, -0x7754(r13)
	  rlwinm.   r0,r0,0,23,23
	  beq-      .loc_0x1A0
	  lwz       r3, -0x775C(r13)
	  addi      r4, r31, 0x290
	  crclr     6, 0x6
	  bl        -0x2890

	.loc_0x1A0:
	  rlwinm.   r0,r30,0,3,3
	  beq-      .loc_0x1B8
	  lwz       r3, -0x775C(r13)
	  addi      r4, r31, 0x2AC
	  crclr     6, 0x6
	  bl        -0x28A8

	.loc_0x1B8:
	  rlwinm.   r0,r30,0,4,4
	  beq-      .loc_0x1D0
	  lwz       r3, -0x775C(r13)
	  addi      r4, r31, 0x2BC
	  crclr     6, 0x6
	  bl        -0x28C0

	.loc_0x1D0:
	  rlwinm.   r0,r30,0,5,5
	  beq-      .loc_0x1E8
	  lwz       r3, -0x775C(r13)
	  addi      r4, r31, 0x2D0
	  crclr     6, 0x6
	  bl        -0x28D8

	.loc_0x1E8:
	  rlwinm.   r0,r30,0,6,6
	  beq-      .loc_0x200
	  lwz       r3, -0x775C(r13)
	  addi      r4, r31, 0x2E8
	  crclr     6, 0x6
	  bl        -0x28F0

	.loc_0x200:
	  lwz       r3, -0x775C(r13)
	  addi      r4, r31, 0x300
	  lwz       r5, 0x198(r27)
	  lwz       r6, 0x19C(r27)
	  crclr     6, 0x6
	  bl        -0x2908
	  lwz       r3, -0x775C(r13)
	  mr        r5, r28
	  mr        r6, r29
	  addi      r4, r31, 0x31C
	  crclr     6, 0x6
	  bl        -0x2920

	.loc_0x230:
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void JUTException::showGPR(OSContext*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002B2D8
 * Size:	000258
 */
void JUTException::showMapInfo_subroutine(unsigned long, bool)
{
	/*
	stwu     r1, -0x160(r1)
	mflr     r0
	stw      r0, 0x164(r1)
	lis      r0, 0x8000
	stw      r31, 0x15c(r1)
	mr       r31, r4
	cmplw    r31, r0
	stw      r30, 0x158(r1)
	blt      lbl_8002B30C
	lis      r3, 0x82FFFFFF@ha
	addi     r0, r3, 0x82FFFFFF@l
	cmplw    r31, r0
	ble      lbl_8002B314

lbl_8002B30C:
	li       r3, 0
	b        lbl_8002B518

lbl_8002B314:
	clrlwi.  r3, r5, 0x18
	addi     r0, r2, lbl_80516630@sda21
	bne      lbl_8002B324
	addi     r0, r2, lbl_80516644@sda21

lbl_8002B324:
	cmplwi   r31, 0
	bne      lbl_8002B334
	li       r30, 0
	b        lbl_8002B3E0

lbl_8002B334:
	lis      r3, 0x800030C8@ha
	lwz      r8, 0x800030C8@l(r3)
	b        lbl_8002B3D4

lbl_8002B340:
	lwz      r3, 0xc(r8)
	li       r6, 0
	lwz      r7, 0x10(r8)
	mtctr    r3
	cmplwi   r3, 0
	ble      lbl_8002B3D0

lbl_8002B358:
	lwz      r9, 4(r7)
	cmplwi   r9, 0
	beq      lbl_8002B3C4
	lwz      r3, 0(r7)
	rlwinm   r4, r3, 0, 0, 0x1e
	cmplw    r4, r31
	bgt      lbl_8002B3C4
	add      r3, r4, r9
	cmplw    r31, r3
	bge      lbl_8002B3C4
	addic.   r3, r1, 0x20
	beq      lbl_8002B390
	lwz      r3, 0(r8)
	stw      r3, 0x20(r1)

lbl_8002B390:
	addic.   r3, r1, 0x1c
	beq      lbl_8002B39C
	stw      r6, 0x1c(r1)

lbl_8002B39C:
	addic.   r3, r1, 0x18
	beq      lbl_8002B3AC
	subf     r3, r4, r31
	stw      r3, 0x18(r1)

lbl_8002B3AC:
	addic.   r3, r1, 0x24
	beq      lbl_8002B3BC
	lwz      r3, 0x14(r8)
	stw      r3, 0x24(r1)

lbl_8002B3BC:
	li       r30, 1
	b        lbl_8002B3E0

lbl_8002B3C4:
	addi     r7, r7, 8
	addi     r6, r6, 1
	bdnz     lbl_8002B358

lbl_8002B3D0:
	lwz      r8, 4(r8)

lbl_8002B3D4:
	cmplwi   r8, 0
	bne      lbl_8002B340
	li       r30, 0

lbl_8002B3E0:
	clrlwi   r3, r30, 0x18
	cmplwi   r3, 1
	bne      lbl_8002B490
	lwz      r5, 0x24(r1)
	addi     r6, r1, 0x28
	mr       r3, r5
	b        lbl_8002B40C

lbl_8002B3FC:
	cmpwi    r4, 0x5c
	bne      lbl_8002B408
	mr       r5, r3

lbl_8002B408:
	addi     r3, r3, 1

lbl_8002B40C:
	lbz      r4, 0(r3)
	cmplwi   r4, 0
	bne      lbl_8002B3FC
	lbz      r3, 0(r5)
	cmpwi    r3, 0x5c
	bne      lbl_8002B428
	addi     r5, r5, 1

lbl_8002B428:
	li       r4, 0
	b        lbl_8002B44C

lbl_8002B430:
	cmpwi    r3, 0x2e
	beq      lbl_8002B460
	lbz      r3, 0(r5)
	addi     r4, r4, 1
	addi     r5, r5, 1
	stb      r3, 0(r6)
	addi     r6, r6, 1

lbl_8002B44C:
	lbz      r3, 0(r5)
	cmplwi   r3, 0
	beq      lbl_8002B460
	cmpwi    r4, 0x20
	blt      lbl_8002B430

lbl_8002B460:
	li       r5, 0
	lis      r3, lbl_80473FBC@ha
	stb      r5, 0(r6)
	addi     r4, r3, lbl_80473FBC@l
	lwz      r3, sConsole__12JUTException@sda21(r13)
	mr       r5, r0
	lwz      r7, 0x18(r1)
	addi     r6, r1, 0x28
	lwz      r8, 0x1c(r1)
	crclr    6
	bl       print_f__10JUTConsoleFPCce
	li       r5, 0

lbl_8002B490:
	lis      r3, sMapFileList__12JUTException@ha
	lwz      r0, sMapFileList__12JUTException@l(r3)
	cmplwi   r0, 0
	beq      lbl_8002B514
	clrlwi   r0, r30, 0x18
	cmplwi   r0, 1
	bne      lbl_8002B4D8
	stw      r5, 8(r1)
	addi     r3, r1, 0x28
	lwz      r4, 0x18(r1)
	addi     r6, r1, 0x14
	lwz      r5, 0x1c(r1)
	addi     r7, r1, 0x10
	addi     r8, r1, 0x4c
	li       r9, 0x100
	li       r10, 1
	bl       queryMapAddress__12JUTExceptionFPcUllPUlPUlPcUlbb
	b        lbl_8002B500

lbl_8002B4D8:
	stw      r5, 8(r1)
	mr       r4, r31
	addi     r6, r1, 0x14
	addi     r7, r1, 0x10
	addi     r8, r1, 0x4c
	li       r3, 0
	li       r5, -1
	li       r9, 0x100
	li       r10, 1
	bl       queryMapAddress__12JUTExceptionFPcUllPUlPUlPcUlbb

lbl_8002B500:
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 1
	bne      lbl_8002B514
	li       r3, 1
	b        lbl_8002B518

lbl_8002B514:
	li       r3, 0

lbl_8002B518:
	lwz      r0, 0x164(r1)
	lwz      r31, 0x15c(r1)
	lwz      r30, 0x158(r1)
	mtlr     r0
	addi     r1, r1, 0x160
	blr
	*/
}

/*
 * --INFO--
 * Address:	8002B530
 * Size:	0002F4
 */
void JUTException::showGPRMap(OSContext*)
{
	/*
	stwu     r1, -0x170(r1)
	mflr     r0
	lis      r5, lbl_80473C18@ha
	stw      r0, 0x174(r1)
	stmw     r24, 0x150(r1)
	mr       r24, r3
	mr       r25, r4
	addi     r30, r5, lbl_80473C18@l
	lwz      r0, sConsole__12JUTException@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8002B810
	mr       r3, r0
	addi     r4, r30, 0x3bc
	li       r27, 0
	bl       print__10JUTConsoleFPCc
	mr       r28, r25
	li       r26, 0
	lis      r31, 0x8000

lbl_8002B578:
	lwz      r25, 0(r28)
	cmplw    r25, r31
	blt      lbl_8002B7EC
	lis      r3, 0x82FFFFFF@ha
	addi     r0, r3, 0x82FFFFFF@l
	cmplw    r25, r0
	bgt      lbl_8002B7EC
	lwz      r3, sConsole__12JUTException@sda21(r13)
	mr       r5, r26
	mr       r6, r25
	addi     r4, r30, 0x3e8
	li       r27, 1
	crclr    6
	bl       print_f__10JUTConsoleFPCce
	lis      r4, 0x8000
	li       r6, 1
	cmplw    r25, r4
	blt      lbl_8002B5D0
	lis      r3, 0x82FFFFFF@ha
	addi     r0, r3, 0x82FFFFFF@l
	cmplw    r25, r0
	ble      lbl_8002B5D8

lbl_8002B5D0:
	li       r0, 0
	b        lbl_8002B7C4

lbl_8002B5D8:
	cmplwi   r25, 0
	addi     r5, r2, lbl_80516630@sda21
	bne      lbl_8002B5EC
	li       r29, 0
	b        lbl_8002B694

lbl_8002B5EC:
	lwz      r8, 0x30c8(r4)
	b        lbl_8002B688

lbl_8002B5F4:
	lwz      r0, 0xc(r8)
	li       r4, 0
	lwz      r7, 0x10(r8)
	mtctr    r0
	cmplwi   r0, 0
	ble      lbl_8002B684

lbl_8002B60C:
	lwz      r9, 4(r7)
	cmplwi   r9, 0
	beq      lbl_8002B678
	lwz      r0, 0(r7)
	rlwinm   r3, r0, 0, 0, 0x1e
	cmplw    r3, r25
	bgt      lbl_8002B678
	add      r0, r3, r9
	cmplw    r25, r0
	bge      lbl_8002B678
	addic.   r0, r1, 0x14
	beq      lbl_8002B644
	lwz      r0, 0(r8)
	stw      r0, 0x14(r1)

lbl_8002B644:
	addic.   r0, r1, 0x18
	beq      lbl_8002B650
	stw      r4, 0x18(r1)

lbl_8002B650:
	addic.   r0, r1, 0x1c
	beq      lbl_8002B660
	subf     r0, r3, r25
	stw      r0, 0x1c(r1)

lbl_8002B660:
	addic.   r0, r1, 0x10
	beq      lbl_8002B670
	lwz      r0, 0x14(r8)
	stw      r0, 0x10(r1)

lbl_8002B670:
	li       r29, 1
	b        lbl_8002B694

lbl_8002B678:
	addi     r7, r7, 8
	addi     r4, r4, 1
	bdnz     lbl_8002B60C

lbl_8002B684:
	lwz      r8, 4(r8)

lbl_8002B688:
	cmplwi   r8, 0
	bne      lbl_8002B5F4
	li       r29, 0

lbl_8002B694:
	clrlwi   r0, r29, 0x18
	cmplwi   r0, 1
	bne      lbl_8002B73C
	lwz      r4, 0x10(r1)
	addi     r6, r1, 0x28
	mr       r3, r4
	b        lbl_8002B6C0

lbl_8002B6B0:
	cmpwi    r0, 0x5c
	bne      lbl_8002B6BC
	mr       r4, r3

lbl_8002B6BC:
	addi     r3, r3, 1

lbl_8002B6C0:
	lbz      r0, 0(r3)
	cmplwi   r0, 0
	bne      lbl_8002B6B0
	lbz      r0, 0(r4)
	cmpwi    r0, 0x5c
	bne      lbl_8002B6DC
	addi     r4, r4, 1

lbl_8002B6DC:
	li       r3, 0
	b        lbl_8002B700

lbl_8002B6E4:
	cmpwi    r0, 0x2e
	beq      lbl_8002B714
	lbz      r0, 0(r4)
	addi     r3, r3, 1
	addi     r4, r4, 1
	stb      r0, 0(r6)
	addi     r6, r6, 1

lbl_8002B700:
	lbz      r0, 0(r4)
	cmplwi   r0, 0
	beq      lbl_8002B714
	cmpwi    r3, 0x20
	blt      lbl_8002B6E4

lbl_8002B714:
	li       r0, 0
	lwz      r3, sConsole__12JUTException@sda21(r13)
	stb      r0, 0(r6)
	addi     r4, r30, 0x3a4
	lwz      r7, 0x1c(r1)
	addi     r6, r1, 0x28
	lwz      r8, 0x18(r1)
	crclr    6
	bl       print_f__10JUTConsoleFPCce
	li       r6, 0

lbl_8002B73C:
	lis      r3, sMapFileList__12JUTException@ha
	lwz      r0, sMapFileList__12JUTException@l(r3)
	cmplwi   r0, 0
	beq      lbl_8002B7C0
	clrlwi   r0, r29, 0x18
	cmplwi   r0, 1
	bne      lbl_8002B784
	stw      r6, 8(r1)
	addi     r3, r1, 0x28
	lwz      r4, 0x1c(r1)
	addi     r6, r1, 0x20
	lwz      r5, 0x18(r1)
	addi     r7, r1, 0x24
	addi     r8, r1, 0x4c
	li       r9, 0x100
	li       r10, 1
	bl       queryMapAddress__12JUTExceptionFPcUllPUlPUlPcUlbb
	b        lbl_8002B7AC

lbl_8002B784:
	stw      r6, 8(r1)
	mr       r4, r25
	addi     r6, r1, 0x20
	addi     r7, r1, 0x24
	addi     r8, r1, 0x4c
	li       r3, 0
	li       r5, -1
	li       r9, 0x100
	li       r10, 1
	bl       queryMapAddress__12JUTExceptionFPcUllPUlPUlPcUlbb

lbl_8002B7AC:
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 1
	bne      lbl_8002B7C0
	li       r0, 1
	b        lbl_8002B7C4

lbl_8002B7C0:
	li       r0, 0

lbl_8002B7C4:
	clrlwi.  r0, r0, 0x18
	bne      lbl_8002B7D8
	lwz      r3, sConsole__12JUTException@sda21(r13)
	addi     r4, r30, 0x3f8
	bl       print__10JUTConsoleFPCc

lbl_8002B7D8:
	lwz      r3, sManager__17JUTConsoleManager@sda21(r13)
	li       r4, 1
	bl       drawDirect__17JUTConsoleManagerCFb
	lwz      r3, 0x90(r24)
	bl       waitTime__12JUTExceptionFl

lbl_8002B7EC:
	addi     r26, r26, 1
	addi     r28, r28, 4
	cmpwi    r26, 0x1f
	blt      lbl_8002B578
	clrlwi.  r0, r27, 0x18
	bne      lbl_8002B810
	lwz      r3, sConsole__12JUTException@sda21(r13)
	addi     r4, r30, 0x40c
	bl       print__10JUTConsoleFPCc

lbl_8002B810:
	lmw      r24, 0x150(r1)
	lwz      r0, 0x174(r1)
	mtlr     r0
	addi     r1, r1, 0x170
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0002BC
 */
void JUTException::showSRR0Map(OSContext*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002B824
 * Size:	0003AC
 */
void JUTException::printDebugInfo(JUTException::EInfoPage, unsigned short, OSContext*, unsigned long, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x160(r1)
	  mflr      r0
	  cmpwi     r4, 0x3
	  lis       r5, 0x8047
	  stw       r0, 0x164(r1)
	  stw       r31, 0x15C(r1)
	  addi      r31, r5, 0x3C18
	  stw       r30, 0x158(r1)
	  stw       r29, 0x154(r1)
	  stw       r28, 0x150(r1)
	  mr        r28, r6
	  beq-      .loc_0xF8
	  bge-      .loc_0x44
	  cmpwi     r4, 0x1
	  beq-      .loc_0x54
	  bge-      .loc_0xCC
	  b         .loc_0x38C

	.loc_0x44:
	  cmpwi     r4, 0x5
	  beq-      .loc_0x110
	  bge-      .loc_0x38C
	  b         .loc_0x104

	.loc_0x54:
	  lwz       r3, -0x775C(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x38C
	  addi      r4, r31, 0x338
	  bl        -0x2E5C
	  li        r30, 0
	  mr        r29, r28

	.loc_0x70:
	  lwz       r3, -0x775C(r13)
	  mr        r5, r30
	  lwz       r6, 0x0(r29)
	  addi      r4, r31, 0x360
	  lwz       r8, 0x2C(r29)
	  addi      r7, r30, 0xB
	  lwz       r10, 0x58(r29)
	  addi      r9, r30, 0x16
	  crclr     6, 0x6
	  bl        -0x2F18
	  addi      r30, r30, 0x1
	  addi      r29, r29, 0x4
	  cmpwi     r30, 0xA
	  blt+      .loc_0x70
	  lwz       r3, -0x775C(r13)
	  addi      r4, r31, 0x388
	  lwz       r6, 0x28(r28)
	  li        r5, 0xA
	  lwz       r8, 0x54(r28)
	  li        r7, 0x15
	  crclr     6, 0x6
	  bl        -0x2F48
	  b         .loc_0x38C

	.loc_0xCC:
	  mr        r4, r28
	  bl        -0x10CC
	  lwz       r3, -0x775C(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x38C
	  lwz       r5, -0x7758(r13)
	  addi      r4, r31, 0x46C
	  lwz       r6, -0x7754(r13)
	  crclr     6, 0x6
	  bl        -0x2F74
	  b         .loc_0x38C

	.loc_0xF8:
	  mr        r4, r28
	  bl        -0x988
	  b         .loc_0x38C

	.loc_0x104:
	  mr        r4, r28
	  bl        -0x3FC
	  b         .loc_0x38C

	.loc_0x110:
	  lwz       r3, -0x775C(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x38C
	  addi      r4, r31, 0x434
	  bl        -0x2F18
	  lwz       r30, 0x198(r28)
	  lis       r0, 0x8000
	  cmplw     r30, r0
	  blt-      .loc_0x38C
	  lis       r3, 0x8300
	  subi      r0, r3, 0x1
	  cmplw     r30, r0
	  bgt-      .loc_0x38C
	  lwz       r3, -0x775C(r13)
	  mr        r5, r30
	  addi      r4, r31, 0x460
	  crclr     6, 0x6
	  bl        -0x2FD8
	  lis       r4, 0x8000
	  li        r6, 0x1
	  cmplw     r30, r4
	  blt-      .loc_0x178
	  lis       r3, 0x8300
	  subi      r0, r3, 0x1
	  cmplw     r30, r0
	  ble-      .loc_0x180

	.loc_0x178:
	  li        r0, 0
	  b         .loc_0x36C

	.loc_0x180:
	  cmplwi    r30, 0
	  subi      r5, r2, 0x7D30
	  bne-      .loc_0x194
	  li        r29, 0
	  b         .loc_0x23C

	.loc_0x194:
	  lwz       r8, 0x30C8(r4)
	  b         .loc_0x230

	.loc_0x19C:
	  lwz       r0, 0xC(r8)
	  li        r4, 0
	  lwz       r7, 0x10(r8)
	  mtctr     r0
	  cmplwi    r0, 0
	  ble-      .loc_0x22C

	.loc_0x1B4:
	  lwz       r9, 0x4(r7)
	  cmplwi    r9, 0
	  beq-      .loc_0x220
	  lwz       r0, 0x0(r7)
	  rlwinm    r3,r0,0,0,30
	  cmplw     r3, r30
	  bgt-      .loc_0x220
	  add       r0, r3, r9
	  cmplw     r30, r0
	  bge-      .loc_0x220
	  addic.    r0, r1, 0x14
	  beq-      .loc_0x1EC
	  lwz       r0, 0x0(r8)
	  stw       r0, 0x14(r1)

	.loc_0x1EC:
	  addic.    r0, r1, 0x18
	  beq-      .loc_0x1F8
	  stw       r4, 0x18(r1)

	.loc_0x1F8:
	  addic.    r0, r1, 0x1C
	  beq-      .loc_0x208
	  sub       r0, r30, r3
	  stw       r0, 0x1C(r1)

	.loc_0x208:
	  addic.    r0, r1, 0x10
	  beq-      .loc_0x218
	  lwz       r0, 0x14(r8)
	  stw       r0, 0x10(r1)

	.loc_0x218:
	  li        r29, 0x1
	  b         .loc_0x23C

	.loc_0x220:
	  addi      r7, r7, 0x8
	  addi      r4, r4, 0x1
	  bdnz+     .loc_0x1B4

	.loc_0x22C:
	  lwz       r8, 0x4(r8)

	.loc_0x230:
	  cmplwi    r8, 0
	  bne+      .loc_0x19C
	  li        r29, 0

	.loc_0x23C:
	  rlwinm    r0,r29,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x2E4
	  lwz       r4, 0x10(r1)
	  addi      r6, r1, 0x28
	  mr        r3, r4
	  b         .loc_0x268

	.loc_0x258:
	  cmpwi     r0, 0x5C
	  bne-      .loc_0x264
	  mr        r4, r3

	.loc_0x264:
	  addi      r3, r3, 0x1

	.loc_0x268:
	  lbz       r0, 0x0(r3)
	  cmplwi    r0, 0
	  bne+      .loc_0x258
	  lbz       r0, 0x0(r4)
	  cmpwi     r0, 0x5C
	  bne-      .loc_0x284
	  addi      r4, r4, 0x1

	.loc_0x284:
	  li        r3, 0
	  b         .loc_0x2A8

	.loc_0x28C:
	  cmpwi     r0, 0x2E
	  beq-      .loc_0x2BC
	  lbz       r0, 0x0(r4)
	  addi      r3, r3, 0x1
	  addi      r4, r4, 0x1
	  stb       r0, 0x0(r6)
	  addi      r6, r6, 0x1

	.loc_0x2A8:
	  lbz       r0, 0x0(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x2BC
	  cmpwi     r3, 0x20
	  blt+      .loc_0x28C

	.loc_0x2BC:
	  li        r0, 0
	  lwz       r3, -0x775C(r13)
	  stb       r0, 0x0(r6)
	  addi      r4, r31, 0x3A4
	  lwz       r7, 0x1C(r1)
	  addi      r6, r1, 0x28
	  lwz       r8, 0x18(r1)
	  crclr     6, 0x6
	  bl        -0x3160
	  li        r6, 0

	.loc_0x2E4:
	  lis       r3, 0x8050
	  lwz       r0, 0x6E74(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x368
	  rlwinm    r0,r29,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x32C
	  stw       r6, 0x8(r1)
	  addi      r3, r1, 0x28
	  lwz       r4, 0x1C(r1)
	  addi      r6, r1, 0x20
	  lwz       r5, 0x18(r1)
	  addi      r7, r1, 0x24
	  addi      r8, r1, 0x4C
	  li        r9, 0x100
	  li        r10, 0x1
	  bl        0xCFC
	  b         .loc_0x354

	.loc_0x32C:
	  stw       r6, 0x8(r1)
	  mr        r4, r30
	  addi      r6, r1, 0x20
	  addi      r7, r1, 0x24
	  addi      r8, r1, 0x4C
	  li        r3, 0
	  li        r5, -0x1
	  li        r9, 0x100
	  li        r10, 0x1
	  bl        0xCD0

	.loc_0x354:
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x368
	  li        r0, 0x1
	  b         .loc_0x36C

	.loc_0x368:
	  li        r0, 0

	.loc_0x36C:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x380
	  lwz       r3, -0x775C(r13)
	  addi      r4, r31, 0x3F8
	  bl        -0x3174

	.loc_0x380:
	  lwz       r3, -0x7790(r13)
	  li        r4, 0x1
	  bl        -0x2AA8

	.loc_0x38C:
	  lwz       r0, 0x164(r1)
	  lwz       r31, 0x15C(r1)
	  lwz       r30, 0x158(r1)
	  lwz       r29, 0x154(r1)
	  lwz       r28, 0x150(r1)
	  mtlr      r0
	  addi      r1, r1, 0x160
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
bool JUTException::isEnablePad() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002BBD0
 * Size:	000570
 */
void JUTException::readPad(unsigned long*, unsigned long*)
{
	/*
	stwu     r1, -0x3a0(r1)
	mflr     r0
	stw      r0, 0x3a4(r1)
	stmw     r22, 0x378(r1)
	mr       r29, r3
	mr       r26, r4
	mr       r25, r5
	li       r22, 0
	bl       OSGetTime
	lis      r5, 0x10624DD3@ha
	mr       r28, r4
	mr       r27, r3
	lis      r23, 0x8000
	addi     r24, r5, 0x10624DD3@l
	li       r31, 0x32
	li       r30, 0

lbl_8002BC10:
	bl       OSGetTime
	lwz      r0, 0xf8(r23)
	subfc    r4, r28, r4
	subfe    r3, r27, r3
	li       r5, 0
	srwi     r0, r0, 2
	mulhwu   r0, r24, r0
	srwi     r6, r0, 6
	bl       __div2i
	xoris    r5, r3, 0x8000
	xoris    r3, r30, 0x8000
	subfc    r0, r31, r4
	subfe    r3, r3, r5
	subfe    r3, r5, r5
	neg.     r3, r3
	bne      lbl_8002BC10
	lwz      r3, 0x84(r29)
	addis    r0, r3, 1
	cmplwi   r0, 0xffff
	bne      lbl_8002C004
	addi     r3, r1, 0x2c8
	li       r4, 0
	bl       __ct__10JUTGamePadFQ210JUTGamePad8EPadPort
	addi     r3, r1, 0x218
	li       r4, 1
	bl       __ct__10JUTGamePadFQ210JUTGamePad8EPadPort
	addi     r3, r1, 0x168
	li       r4, 2
	bl       __ct__10JUTGamePadFQ210JUTGamePad8EPadPort
	addi     r3, r1, 0xb8
	li       r4, 3
	bl       __ct__10JUTGamePadFQ210JUTGamePad8EPadPort
	bl       read__10JUTGamePadFv
	lha      r0, 0x344(r1)
	li       r3, 0
	cmpwi    r0, -1
	beq      lbl_8002BCB4
	lbz      r0, 0x360(r1)
	cmplwi   r0, 0
	beq      lbl_8002BCB4
	li       r3, 1

lbl_8002BCB4:
	clrlwi.  r0, r3, 0x18
	beq      lbl_8002BCEC
	lis      r3, c3bcnt@ha
	li       r5, 0
	addi     r4, r3, c3bcnt@l
	lwz      r3, 0(r4)
	lwz      r4, 4(r4)
	xor      r0, r3, r5
	xor      r5, r4, r5
	or.      r0, r5, r0
	beq      lbl_8002BCE4
	b        lbl_8002BCF4

lbl_8002BCE4:
	bl       OSGetTime
	b        lbl_8002BCF4

lbl_8002BCEC:
	li       r4, 0
	mr       r3, r4

lbl_8002BCF4:
	lha      r0, 0x294(r1)
	lis      r5, c3bcnt@ha
	addi     r6, r5, c3bcnt@l
	li       r5, 0
	cmpwi    r0, -1
	stw      r4, 4(r6)
	stw      r3, 0(r6)
	beq      lbl_8002BD24
	lbz      r0, 0x2b0(r1)
	cmplwi   r0, 0
	beq      lbl_8002BD24
	li       r5, 1

lbl_8002BD24:
	clrlwi.  r0, r5, 0x18
	beq      lbl_8002BD5C
	lis      r3, c3bcnt@ha
	li       r5, 0
	addi     r4, r3, c3bcnt@l
	lwz      r3, 8(r4)
	lwz      r4, 0xc(r4)
	xor      r0, r3, r5
	xor      r5, r4, r5
	or.      r0, r5, r0
	beq      lbl_8002BD54
	b        lbl_8002BD64

lbl_8002BD54:
	bl       OSGetTime
	b        lbl_8002BD64

lbl_8002BD5C:
	li       r4, 0
	mr       r3, r4

lbl_8002BD64:
	lha      r0, 0x1e4(r1)
	lis      r5, c3bcnt@ha
	addi     r29, r5, c3bcnt@l
	li       r5, 0
	cmpwi    r0, -1
	stw      r4, 0xc(r29)
	stw      r3, 8(r29)
	beq      lbl_8002BD94
	lbz      r0, 0x200(r1)
	cmplwi   r0, 0
	beq      lbl_8002BD94
	li       r5, 1

lbl_8002BD94:
	clrlwi.  r0, r5, 0x18
	beq      lbl_8002BDCC
	lis      r3, c3bcnt@ha
	li       r5, 0
	addi     r4, r3, c3bcnt@l
	lwz      r3, 0x10(r4)
	lwz      r4, 0x14(r4)
	xor      r0, r3, r5
	xor      r5, r4, r5
	or.      r0, r5, r0
	beq      lbl_8002BDC4
	b        lbl_8002BDD4

lbl_8002BDC4:
	bl       OSGetTime
	b        lbl_8002BDD4

lbl_8002BDCC:
	li       r4, 0
	mr       r3, r4

lbl_8002BDD4:
	lha      r0, 0x134(r1)
	lis      r5, c3bcnt@ha
	addi     r30, r5, c3bcnt@l
	li       r5, 0
	cmpwi    r0, -1
	stw      r4, 0x14(r30)
	stw      r3, 0x10(r30)
	beq      lbl_8002BE04
	lbz      r0, 0x150(r1)
	cmplwi   r0, 0
	beq      lbl_8002BE04
	li       r5, 1

lbl_8002BE04:
	clrlwi.  r0, r5, 0x18
	beq      lbl_8002BE3C
	lis      r3, c3bcnt@ha
	li       r5, 0
	addi     r4, r3, c3bcnt@l
	lwz      r3, 0x18(r4)
	lwz      r4, 0x1c(r4)
	xor      r0, r3, r5
	xor      r5, r4, r5
	or.      r0, r5, r0
	beq      lbl_8002BE34
	b        lbl_8002BE44

lbl_8002BE34:
	bl       OSGetTime
	b        lbl_8002BE44

lbl_8002BE3C:
	li       r4, 0
	mr       r3, r4

lbl_8002BE44:
	lis      r5, c3bcnt@ha
	li       r27, 0
	addi     r31, r5, c3bcnt@l
	lwz      r0, 0(r31)
	lwz      r5, 4(r31)
	stw      r4, 0x1c(r31)
	xor      r0, r0, r27
	xor      r4, r5, r27
	or.      r0, r4, r0
	stw      r3, 0x18(r31)
	beq      lbl_8002BE90
	bl       OSGetTime
	lis      r5, c3bcnt@ha
	addi     r6, r5, c3bcnt@l
	lwz      r5, 4(r6)
	lwz      r0, 0(r6)
	subfc    r27, r5, r4
	subfe    r24, r0, r3
	b        lbl_8002BE94

lbl_8002BE90:
	mr       r24, r27

lbl_8002BE94:
	lwz      r0, 8(r29)
	li       r28, 0
	lwz      r3, 0xc(r29)
	xor      r0, r0, r28
	xor      r3, r3, r28
	or.      r0, r3, r0
	beq      lbl_8002BEC8
	bl       OSGetTime
	lwz      r5, 0xc(r29)
	lwz      r0, 8(r29)
	subfc    r28, r5, r4
	subfe    r29, r0, r3
	b        lbl_8002BECC

lbl_8002BEC8:
	mr       r29, r28

lbl_8002BECC:
	lwz      r0, 0x10(r30)
	li       r23, 0
	lwz      r3, 0x14(r30)
	xor      r0, r0, r23
	xor      r3, r3, r23
	or.      r0, r3, r0
	beq      lbl_8002BF00
	bl       OSGetTime
	lwz      r5, 0x14(r30)
	lwz      r0, 0x10(r30)
	subfc    r23, r5, r4
	subfe    r22, r0, r3
	b        lbl_8002BF04

lbl_8002BF00:
	mr       r22, r23

lbl_8002BF04:
	lwz      r0, 0x18(r31)
	li       r30, 0
	lwz      r3, 0x1c(r31)
	xor      r0, r0, r30
	xor      r3, r3, r30
	or.      r0, r3, r0
	beq      lbl_8002BF38
	bl       OSGetTime
	lwz      r5, 0x1c(r31)
	lwz      r0, 0x18(r31)
	subfc    r30, r5, r4
	subfe    r31, r0, r3
	b        lbl_8002BF3C

lbl_8002BF38:
	mr       r31, r30

lbl_8002BF3C:
	mr       r6, r27
	mr       r5, r24
	addi     r3, r1, 0x2c8
	bl       checkResetCallback__10JUTGamePadFx
	mr       r6, r28
	mr       r5, r29
	addi     r3, r1, 0x218
	bl       checkResetCallback__10JUTGamePadFx
	mr       r6, r23
	mr       r5, r22
	addi     r3, r1, 0x168
	bl       checkResetCallback__10JUTGamePadFx
	mr       r6, r30
	mr       r5, r31
	addi     r3, r1, 0xb8
	bl       checkResetCallback__10JUTGamePadFx
	cmplwi   r26, 0
	beq      lbl_8002BFA4
	lwz      r3, 0x2e4(r1)
	lwz      r0, 0x234(r1)
	lwz      r4, 0x184(r1)
	or       r0, r3, r0
	lwz      r3, 0xd4(r1)
	or       r0, r4, r0
	or       r0, r3, r0
	stw      r0, 0(r26)

lbl_8002BFA4:
	cmplwi   r25, 0
	beq      lbl_8002BFCC
	lwz      r3, 0x2e0(r1)
	lwz      r0, 0x230(r1)
	lwz      r4, 0x180(r1)
	or       r0, r3, r0
	lwz      r3, 0xd0(r1)
	or       r0, r4, r0
	or       r0, r3, r0
	stw      r0, 0(r25)

lbl_8002BFCC:
	addi     r3, r1, 0xb8
	li       r22, 1
	li       r4, -1
	bl       __dt__10JUTGamePadFv
	addi     r3, r1, 0x168
	li       r4, -1
	bl       __dt__10JUTGamePadFv
	addi     r3, r1, 0x218
	li       r4, -1
	bl       __dt__10JUTGamePadFv
	addi     r3, r1, 0x2c8
	li       r4, -1
	bl       __dt__10JUTGamePadFv
	b        lbl_8002C128

lbl_8002C004:
	lwz      r4, 0x88(r29)
	cmpwi    r4, 0
	blt      lbl_8002C0F0
	addi     r3, r1, 8
	bl       __ct__10JUTGamePadFQ210JUTGamePad8EPadPort
	lha      r0, 0x84(r1)
	lis      r3, c3bcnt@ha
	addi     r23, r3, c3bcnt@l
	li       r3, 0
	cmpwi    r0, -1
	beq      lbl_8002C040
	lbz      r0, 0xa0(r1)
	cmplwi   r0, 0
	beq      lbl_8002C040
	li       r3, 1

lbl_8002C040:
	clrlwi.  r0, r3, 0x18
	beq      lbl_8002C070
	lwz      r3, 0(r23)
	li       r5, 0
	lwz      r4, 4(r23)
	xor      r0, r3, r5
	xor      r5, r4, r5
	or.      r0, r5, r0
	beq      lbl_8002C068
	b        lbl_8002C078

lbl_8002C068:
	bl       OSGetTime
	b        lbl_8002C078

lbl_8002C070:
	li       r4, 0
	mr       r3, r4

lbl_8002C078:
	li       r6, 0
	stw      r4, 4(r23)
	xor      r4, r4, r6
	xor      r0, r3, r6
	stw      r3, 0(r23)
	or.      r0, r4, r0
	beq      lbl_8002C0AC
	bl       OSGetTime
	lwz      r5, 4(r23)
	lwz      r0, 0(r23)
	subfc    r6, r5, r4
	subfe    r5, r0, r3
	b        lbl_8002C0B0

lbl_8002C0AC:
	mr       r5, r6

lbl_8002C0B0:
	addi     r3, r1, 8
	bl       checkResetCallback__10JUTGamePadFx
	bl       read__10JUTGamePadFv
	cmplwi   r26, 0
	beq      lbl_8002C0CC
	lwz      r0, 0x24(r1)
	stw      r0, 0(r26)

lbl_8002C0CC:
	cmplwi   r25, 0
	beq      lbl_8002C0DC
	lwz      r0, 0x20(r1)
	stw      r0, 0(r25)

lbl_8002C0DC:
	addi     r3, r1, 8
	li       r22, 1
	li       r4, -1
	bl       __dt__10JUTGamePadFv
	b        lbl_8002C128

lbl_8002C0F0:
	cmplwi   r3, 0
	beq      lbl_8002C128
	bl       read__10JUTGamePadFv
	cmplwi   r26, 0
	beq      lbl_8002C110
	lwz      r3, 0x84(r29)
	lwz      r0, 0x1c(r3)
	stw      r0, 0(r26)

lbl_8002C110:
	cmplwi   r25, 0
	beq      lbl_8002C124
	lwz      r3, 0x84(r29)
	lwz      r0, 0x18(r3)
	stw      r0, 0(r25)

lbl_8002C124:
	li       r22, 1

lbl_8002C128:
	mr       r3, r22
	lmw      r22, 0x378(r1)
	lwz      r0, 0x3a4(r1)
	mtlr     r0
	addi     r1, r1, 0x3a0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8002C140
 * Size:	0004E4
 */
void JUTException::printContext(unsigned short, OSContext*, unsigned long, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stmw      r22, 0x18(r1)
	  mr        r24, r3
	  lis       r3, 0x8047
	  mr        r25, r4
	  mr        r26, r5
	  mr        r27, r6
	  mr        r28, r7
	  addi      r31, r3, 0x3C18
	  lwz       r8, 0x84(r24)
	  addis     r0, r8, 0x1
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0x44
	  li        r0, 0x1
	  b         .loc_0x6C

	.loc_0x44:
	  lwz       r0, 0x88(r24)
	  cmpwi     r0, 0
	  blt-      .loc_0x58
	  li        r0, 0x1
	  b         .loc_0x6C

	.loc_0x58:
	  cmplwi    r8, 0
	  beq-      .loc_0x68
	  li        r0, 0x1
	  b         .loc_0x6C

	.loc_0x68:
	  li        r0, 0

	.loc_0x6C:
	  lwz       r3, -0x7770(r13)
	  rlwinm    r0,r0,0,24,31
	  cntlzw    r0, r0
	  lwz       r3, 0x80(r3)
	  rlwinm    r30,r0,27,5,31
	  lwz       r0, 0x0(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x4D0
	  li        r3, 0
	  bl        0xA488C
	  li        r3, 0
	  bl        0xA48C8
	  li        r3, 0
	  bl        0xA5EE8
	  bl        0xA5D40
	  lwz       r3, -0x775C(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x4D0
	  rlwinm    r0,r25,0,16,31
	  cmplwi    r0, 0x11
	  bge-      .loc_0xD4
	  lwz       r5, 0x7C(r24)
	  addi      r4, r31, 0x488
	  crclr     6, 0x6
	  bl        -0x386C
	  b         .loc_0xE4

	.loc_0xD4:
	  lwz       r5, 0x7C(r24)
	  addi      r4, r31, 0x4C0
	  crclr     6, 0x6
	  bl        -0x3880

	.loc_0xE4:
	  li        r29, 0
	  rlwinm    r23,r30,0,24,31

	.loc_0xEC:
	  mr        r3, r24
	  mr        r4, r25
	  mr        r5, r26
	  mr        r6, r27
	  mr        r7, r28
	  bl        -0x11AC
	  lwz       r3, -0x7790(r13)
	  li        r4, 0x1
	  bl        -0x3148
	  lwz       r3, 0x8C(r24)
	  bl        .loc_0x4E4
	  lwz       r0, 0x9C(r24)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x154
	  mr        r3, r24
	  mr        r5, r25
	  mr        r6, r26
	  mr        r7, r27
	  mr        r8, r28
	  li        r4, 0x1
	  bl        -0xA58
	  lwz       r3, -0x7790(r13)
	  li        r4, 0x1
	  bl        -0x3184
	  lwz       r3, 0x8C(r24)
	  bl        .loc_0x4E4

	.loc_0x154:
	  lwz       r0, 0x9C(r24)
	  rlwinm.   r0,r0,0,29,29
	  beq-      .loc_0x190
	  mr        r3, r24
	  mr        r5, r25
	  mr        r6, r26
	  mr        r7, r27
	  mr        r8, r28
	  li        r4, 0x5
	  bl        -0xA94
	  lwz       r3, -0x7790(r13)
	  li        r4, 0x1
	  bl        -0x31C0
	  lwz       r3, 0x8C(r24)
	  bl        .loc_0x4E4

	.loc_0x190:
	  lwz       r0, 0x9C(r24)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x1CC
	  mr        r3, r24
	  mr        r5, r25
	  mr        r6, r26
	  mr        r7, r27
	  mr        r8, r28
	  li        r4, 0x4
	  bl        -0xAD0
	  lwz       r3, -0x7790(r13)
	  li        r4, 0x1
	  bl        -0x31FC
	  lwz       r3, 0x8C(r24)
	  bl        .loc_0x4E4

	.loc_0x1CC:
	  lwz       r0, 0x9C(r24)
	  rlwinm.   r0,r0,0,28,28
	  beq-      .loc_0x208
	  mr        r3, r24
	  mr        r5, r25
	  mr        r6, r26
	  mr        r7, r27
	  mr        r8, r28
	  li        r4, 0x2
	  bl        -0xB0C
	  lwz       r3, -0x7790(r13)
	  li        r4, 0x1
	  bl        -0x3238
	  lwz       r3, 0x8C(r24)
	  bl        .loc_0x4E4

	.loc_0x208:
	  lwz       r0, 0x9C(r24)
	  rlwinm.   r0,r0,0,27,27
	  beq-      .loc_0x244
	  mr        r3, r24
	  mr        r5, r25
	  mr        r6, r26
	  mr        r7, r27
	  mr        r8, r28
	  li        r4, 0x3
	  bl        -0xB48
	  lwz       r3, -0x7790(r13)
	  li        r4, 0x1
	  bl        -0x3274
	  lwz       r3, 0x90(r24)
	  bl        .loc_0x4E4

	.loc_0x244:
	  lwz       r3, -0x775C(r13)
	  addi      r4, r31, 0x4F0
	  bl        -0x3960
	  lwz       r3, -0x7790(r13)
	  li        r4, 0x1
	  bl        -0x3294
	  cmpwi     r29, 0
	  bne-      .loc_0x2A0
	  lwz       r0, -0x7768(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x2A0
	  bl        0xC289C
	  lwz       r12, -0x7768(r13)
	  mr        r22, r3
	  mr        r3, r25
	  mr        r4, r26
	  mr        r5, r27
	  mr        r6, r28
	  li        r29, 0x1
	  mtctr     r12
	  bctrl
	  mr        r3, r22
	  bl        0xC2884

	.loc_0x2A0:
	  lwz       r0, 0x98(r24)
	  cmplwi    r0, 0
	  beq-      .loc_0x2C8
	  cmplwi    r23, 0
	  beq-      .loc_0x2C8
	  lwz       r3, -0x775C(r13)
	  lwz       r0, 0x58(r3)
	  rlwinm    r0,r0,0,31,31
	  stw       r0, 0x58(r3)
	  b         .loc_0xEC

	.loc_0x2C8:
	  rlwinm.   r0,r30,0,24,31
	  bne-      .loc_0x410
	  bl        0xC283C
	  li        r22, 0
	  li        r23, 0

	.loc_0x2DC:
	  mr        r3, r24
	  addi      r4, r1, 0x8
	  addi      r5, r1, 0xC
	  bl        -0x858
	  lwz       r0, 0x8(r1)
	  li        r3, 0
	  cmplwi    r0, 0x100
	  bne-      .loc_0x30C
	  lwz       r3, -0x775C(r13)
	  lwz       r4, 0x24(r3)
	  bl        -0x36D0
	  li        r3, 0x1

	.loc_0x30C:
	  lwz       r0, 0x8(r1)
	  cmplwi    r0, 0x200
	  bne-      .loc_0x32C
	  lwz       r3, -0x775C(r13)
	  lwz       r0, 0x24(r3)
	  neg       r4, r0
	  bl        -0x36F0
	  li        r3, 0x1

	.loc_0x32C:
	  lwz       r0, 0xC(r1)
	  cmplwi    r0, 0x8
	  bne-      .loc_0x380
	  cmpwi     r22, 0x3
	  lwz       r3, -0x775C(r13)
	  bge-      .loc_0x34C
	  li        r4, -0x1
	  b         .loc_0x36C

	.loc_0x34C:
	  cmpwi     r22, 0x5
	  bge-      .loc_0x35C
	  li        r4, -0x2
	  b         .loc_0x36C

	.loc_0x35C:
	  cmpwi     r22, 0x7
	  li        r4, -0x8
	  bge-      .loc_0x36C
	  li        r4, -0x4

	.loc_0x36C:
	  bl        -0x3738
	  li        r3, 0x1
	  li        r23, 0
	  addi      r22, r22, 0x1
	  b         .loc_0x3D8

	.loc_0x380:
	  cmplwi    r0, 0x4
	  bne-      .loc_0x3D0
	  cmpwi     r23, 0x3
	  lwz       r3, -0x775C(r13)
	  bge-      .loc_0x39C
	  li        r4, 0x1
	  b         .loc_0x3BC

	.loc_0x39C:
	  cmpwi     r23, 0x5
	  bge-      .loc_0x3AC
	  li        r4, 0x2
	  b         .loc_0x3BC

	.loc_0x3AC:
	  cmpwi     r23, 0x7
	  li        r4, 0x8
	  bge-      .loc_0x3BC
	  li        r4, 0x4

	.loc_0x3BC:
	  bl        -0x3788
	  li        r3, 0x1
	  li        r22, 0
	  addi      r23, r23, 0x1
	  b         .loc_0x3D8

	.loc_0x3D0:
	  li        r22, 0
	  li        r23, 0

	.loc_0x3D8:
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x404
	  bl        0xA5C20
	  mr        r25, r3

	.loc_0x3EC:
	  bl        0xA5C18
	  cmplw     r25, r3
	  beq+      .loc_0x3EC
	  lwz       r3, -0x7790(r13)
	  li        r4, 0x1
	  bl        -0x343C

	.loc_0x404:
	  li        r3, 0x1E
	  bl        .loc_0x4E4
	  b         .loc_0x2DC

	.loc_0x410:
	  lwz       r3, -0x775C(r13)
	  lwz       r0, 0x24(r3)
	  neg       r4, r0
	  bl        -0x37E8
	  lwz       r3, -0x7790(r13)
	  li        r4, 0x1
	  bl        -0x3464
	  li        r3, 0x7D0
	  bl        .loc_0x4E4

	.loc_0x434:
	  lwz       r3, -0x775C(r13)
	  lwz       r22, 0x48(r3)
	  b         .loc_0x490

	.loc_0x440:
	  lwz       r3, -0x775C(r13)
	  li        r4, 0x1
	  bl        -0x3814
	  lwz       r3, -0x7790(r13)
	  li        r4, 0x1
	  bl        -0x3490
	  lwz       r25, -0x775C(r13)
	  lwz       r23, 0x48(r25)
	  mr        r3, r25
	  bl        -0x3730
	  mr        r24, r3
	  mr        r3, r25
	  bl        -0x3760
	  sub       r3, r3, r23
	  addi      r0, r3, 0x1
	  cmplw     r0, r24
	  ble-      .loc_0x498
	  li        r3, 0x14
	  bl        .loc_0x4E4
	  subi      r22, r22, 0x1

	.loc_0x490:
	  cmplwi    r22, 0
	  bne+      .loc_0x440

	.loc_0x498:
	  li        r3, 0xBB8
	  bl        .loc_0x4E4
	  lwz       r25, -0x775C(r13)
	  lwz       r23, 0x48(r25)
	  mr        r3, r25
	  bl        -0x3778
	  mr        r24, r3
	  mr        r3, r25
	  bl        -0x37A8
	  sub       r3, r3, r23
	  addi      r0, r3, 0x1
	  cmplw     r0, r24
	  ble+      .loc_0x410
	  b         .loc_0x434

	.loc_0x4D0:
	  lmw       r22, 0x18(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr

	.loc_0x4E4:
	*/
}

/*
 * --INFO--
 * Address:	8002C624
 * Size:	000088
 */
void JUTException::waitTime(long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	or.      r26, r3, r3
	beq      lbl_8002C698
	bl       OSGetTime
	lis      r5, 0x10624DD3@ha
	mr       r28, r4
	mr       r29, r3
	srawi    r27, r26, 0x1f
	addi     r30, r5, 0x10624DD3@l
	lis      r31, 0x8000

lbl_8002C658:
	bl       OSGetTime
	lwz      r0, 0xf8(r31)
	subfc    r4, r28, r4
	subfe    r3, r29, r3
	li       r5, 0
	srwi     r0, r0, 2
	mulhwu   r0, r30, r0
	srwi     r6, r0, 6
	bl       __div2i
	xoris    r5, r3, 0x8000
	xoris    r3, r27, 0x8000
	subfc    r0, r26, r4
	subfe    r3, r3, r5
	subfe    r3, r5, r5
	neg.     r3, r3
	bne      lbl_8002C658

lbl_8002C698:
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8002C6AC
 * Size:	0000F4
 */
void JUTException::createFB()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, GXNtsc480Int@ha
	stw      r0, 0x24(r1)
	addi     r0, r4, GXNtsc480Int@l
	stw      r31, 0x1c(r1)
	mr       r31, r0
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	bl       OSGetArenaHi
	lis      r4, GXNtsc480Int@ha
	addi     r5, r4, GXNtsc480Int@l
	lhz      r4, 4(r5)
	lhz      r0, 8(r5)
	addi     r4, r4, 0xf
	rlwinm   r4, r4, 0, 0x10, 0x1b
	mullw    r0, r4, r0
	slwi     r7, r0, 1
	subf     r0, r7, r3
	rlwinm   r30, r0, 0, 0, 0x1a
	addi     r0, r30, -20
	rlwinm.  r29, r0, 0, 0, 0x1a
	beq      lbl_8002C724
	mr       r3, r29
	mr       r4, r31
	mr       r6, r30
	li       r5, 1
	bl       __ct__13JUTExternalFBFP16_GXRenderModeObj8_GXGammaPvUl

lbl_8002C724:
	lwz      r3, 0x80(r28)
	mr       r4, r30
	lhz      r5, 4(r31)
	lhz      r6, 6(r31)
	bl       changeFrameBuffer__14JUTDirectPrintFPvUsUs
	mr       r3, r31
	bl       VIConfigure
	mr       r3, r30
	bl       VISetNextFrameBuffer
	li       r3, 0
	bl       VISetBlack
	bl       VIFlush
	bl       VIFlush
	li       r30, 0

lbl_8002C75C:
	bl       VIGetRetraceCount
	mr       r31, r3

lbl_8002C764:
	bl       VIGetRetraceCount
	cmplw    r31, r3
	beq      lbl_8002C764
	addi     r30, r30, 1
	cmpwi    r30, 3
	blt      lbl_8002C75C
	stw      r29, 0x7c(r28)
	lwz      r0, 0x24(r1)
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
 * Address:	........
 * Size:	000028
 */
u32 JUTException::getFpscr()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void JUTException::setFpscr(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002C7A0
 * Size:	000010
 */
OSErrorHandler JUTException::setPreUserCallback(void (*callback)(unsigned short, OSContext*, unsigned long, unsigned long))
{
	OSErrorHandler oldCallback = sPreUserCallback;
	sPreUserCallback           = callback;
	return oldCallback;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
OSErrorHandler JUTException::setPostUserCallback(void (*callback)(unsigned short, OSContext*, unsigned long, unsigned long))
{
	// UNUSED FUNCTION
	OSErrorHandler oldCallback = sPostUserCallback;
	sPostUserCallback          = callback;
	return oldCallback;
}

/*
 * --INFO--
 * Address:	8002C7B0
 * Size:	000094
 */
void JUTException::appendMapFile(const char* fileName)
{
	if (fileName == nullptr) {
		return;
	}
	// Ensure we don't already know about the given map file
	for (JSULink<JUTExMapFile>* link = sMapFileList.getFirst(); link != nullptr; link = link->getNext()) {
		if (strcmp(fileName, link->getObject()->m_fileName) == 0) {
			return;
		}
	}
	JUTExMapFile* mapFile = new JUTExMapFile(fileName);
	sMapFileList.append(&mapFile->m_link);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
// void JSULink<JUTException::JUTExMapFile>::~JSULink()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	8002C844
 * Size:	0000E0
 */
bool JUTException::queryMapAddress(char* p1, unsigned long p2, long p3, unsigned long* p4, unsigned long* p5, char* p6, unsigned long p7,
                                   bool p8, bool p9)
{
	if (p1 != nullptr) {
		char buffer[80];
		strcpy(buffer, p1);
		strcat(buffer, ".map");
		if (queryMapAddress_single(buffer, p2, p3, p4, p5, p6, p7, p8, p9) == true) {
			return true;
		}
	} else {
		if (sMapFileList.getFirst() != nullptr
		    && queryMapAddress_single(const_cast<char*>(sMapFileList.getFirst()->getObject()->m_fileName), p2, -1, p4, p5, p6, p7, p8, p9)
		           == true) {
			return true;
		}
	}
	return false;
}

/*
 * --INFO--
 * Address:	8002C924
 * Size:	00033C
 */
bool JUTException::queryMapAddress_single(char*, unsigned long, long, unsigned long*, unsigned long*, char*, unsigned long, bool, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xAD0(r1)
	  mflr      r0
	  stw       r0, 0xAD4(r1)
	  stmw      r16, 0xA90(r1)
	  mr.       r16, r3
	  lbz       r19, 0xADB(r1)
	  mr        r26, r4
	  mr        r27, r5
	  mr        r28, r6
	  mr        r29, r7
	  mr        r30, r8
	  mr        r18, r9
	  mr        r31, r10
	  bne-      .loc_0x40
	  li        r3, 0
	  b         .loc_0x328

	.loc_0x40:
	  addi      r3, r1, 0x218
	  bl        -0x313C
	  mr        r4, r16
	  addi      r3, r1, 0x218
	  li        r22, 0
	  bl        -0x30E4
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x74
	  addi      r3, r1, 0x218
	  li        r4, -0x1
	  bl        -0x313C
	  li        r3, 0
	  b         .loc_0x328

	.loc_0x74:
	  addi      r25, r1, 0x19
	  addi      r24, r1, 0x2B
	  addi      r23, r1, 0x23
	  addi      r16, r1, 0x36
	  li        r17, 0

	.loc_0x88:
	  li        r20, 0
	  addi      r22, r22, 0x1

	.loc_0x90:
	  addi      r3, r1, 0x218
	  addi      r4, r1, 0x18
	  li        r5, 0x200
	  bl        -0x3024
	  cmpwi     r3, 0
	  blt-      .loc_0x140
	  lbz       r0, 0x18(r1)
	  cmpwi     r0, 0x2E
	  bne+      .loc_0x90
	  mr        r3, r25
	  addi      r4, r1, 0x8
	  li        r6, 0
	  b         .loc_0xE8

	.loc_0xC4:
	  lbz       r0, 0x0(r3)
	  stb       r5, 0x0(r4)
	  cmpwi     r0, 0x20
	  beq-      .loc_0xF4
	  cmpwi     r6, 0xF
	  beq-      .loc_0xF4
	  addi      r4, r4, 0x1
	  addi      r6, r6, 0x1
	  addi      r3, r3, 0x1

	.loc_0xE8:
	  lbz       r5, 0x0(r3)
	  extsb.    r0, r5
	  bne+      .loc_0xC4

	.loc_0xF4:
	  lbz       r0, 0x0(r3)
	  addi      r4, r1, 0x8
	  li        r5, 0
	  extsb.    r0, r0
	  stbx      r5, r4, r6
	  beq-      .loc_0x140
	  lbz       r0, 0x1(r3)
	  cmpwi     r0, 0x73
	  bne+      .loc_0x90
	  lbz       r0, 0x2(r3)
	  cmpwi     r0, 0x65
	  bne+      .loc_0x90
	  lbz       r0, 0x3(r3)
	  cmpwi     r0, 0x63
	  bne+      .loc_0x90
	  lbz       r0, 0x4(r3)
	  cmpwi     r0, 0x74
	  bne+      .loc_0x90
	  li        r20, 0x1

	.loc_0x140:
	  rlwinm.   r0,r20,0,24,31
	  beq-      .loc_0x300
	  cmpwi     r27, 0
	  blt-      .loc_0x158
	  cmpw      r27, r22
	  bne+      .loc_0x88

	.loc_0x158:
	  addi      r3, r1, 0x218
	  addi      r4, r1, 0x18
	  li        r5, 0x200
	  bl        -0x30EC
	  cmpwi     r3, 0x4
	  ble-      .loc_0x2D4
	  cmpwi     r3, 0x1C
	  blt+      .loc_0x158
	  lbz       r0, 0x34(r1)
	  cmpwi     r0, 0x34
	  bne+      .loc_0x158
	  mr        r3, r24
	  li        r4, 0
	  li        r5, 0x10
	  bl        0x9EE84
	  lbz       r0, 0x2A(r1)
	  li        r4, 0
	  li        r5, 0x10
	  extsb     r6, r0
	  subi      r0, r6, 0x30
	  rlwinm    r0,r0,28,0,3
	  or        r21, r0, r3
	  mr        r3, r23
	  bl        0x9EE60
	  cmplw     r21, r26
	  mr        r20, r3
	  bgt+      .loc_0x158
	  add       r0, r21, r20
	  cmplw     r26, r0
	  bge+      .loc_0x158
	  cmplwi    r28, 0
	  beq-      .loc_0x1DC
	  stw       r21, 0x0(r28)

	.loc_0x1DC:
	  cmplwi    r29, 0
	  beq-      .loc_0x1E8
	  stw       r20, 0x0(r29)

	.loc_0x1E8:
	  cmplwi    r30, 0
	  beq-      .loc_0x2D0
	  mr        r5, r16
	  mr        r6, r30
	  subi      r0, r18, 0x1
	  li        r7, 0
	  li        r3, 0x20
	  b         .loc_0x260

	.loc_0x208:
	  lbz       r4, 0x0(r5)
	  cmplwi    r4, 0x20
	  bge-      .loc_0x21C
	  cmplwi    r4, 0x9
	  bne-      .loc_0x268

	.loc_0x21C:
	  cmpwi     r4, 0x20
	  beq-      .loc_0x22C
	  cmplwi    r4, 0x9
	  bne-      .loc_0x250

	.loc_0x22C:
	  cmplwi    r7, 0
	  beq-      .loc_0x250
	  lbz       r4, -0x1(r6)
	  cmpwi     r4, 0x20
	  beq-      .loc_0x25C
	  stb       r3, 0x0(r6)
	  addi      r6, r6, 0x1
	  addi      r7, r7, 0x1
	  b         .loc_0x25C

	.loc_0x250:
	  stb       r4, 0x0(r6)
	  addi      r6, r6, 0x1
	  addi      r7, r7, 0x1

	.loc_0x25C:
	  addi      r5, r5, 0x1

	.loc_0x260:
	  cmplw     r7, r0
	  blt+      .loc_0x208

	.loc_0x268:
	  cmplwi    r7, 0
	  beq-      .loc_0x280
	  lbz       r0, -0x1(r6)
	  cmpwi     r0, 0x20
	  bne-      .loc_0x280
	  subi      r6, r6, 0x1

	.loc_0x280:
	  li        r3, 0
	  rlwinm.   r0,r31,0,24,31
	  stb       r3, 0x0(r6)
	  beq-      .loc_0x2D0
	  rlwinm.   r0,r19,0,24,31
	  beq-      .loc_0x2A4
	  lwz       r3, -0x775C(r13)
	  subi      r4, r2, 0x7D30
	  bl        -0x4198

	.loc_0x2A4:
	  lis       r4, 0x8047
	  lwz       r3, -0x775C(r13)
	  addi      r4, r4, 0x412C
	  mr        r5, r26
	  mr        r7, r21
	  mr        r8, r20
	  mr        r9, r30
	  addi      r6, r1, 0x8
	  crclr     6, 0x6
	  bl        -0x424C
	  li        r19, 0

	.loc_0x2D0:
	  li        r17, 0x1

	.loc_0x2D4:
	  cmpwi     r27, 0
	  blt+      .loc_0x88
	  cmpw      r27, r22
	  bne+      .loc_0x88
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x300
	  rlwinm.   r0,r19,0,24,31
	  beq-      .loc_0x300
	  lwz       r3, -0x775C(r13)
	  subi      r4, r2, 0x7D30
	  bl        -0x41F4

	.loc_0x300:
	  addi      r3, r1, 0x218
	  bl        -0x32EC
	  rlwinm    r5,r17,0,24,31
	  addi      r3, r1, 0x218
	  neg       r0, r5
	  li        r4, -0x1
	  or        r0, r0, r5
	  rlwinm    r16,r0,1,31,31
	  bl        -0x33F4
	  mr        r3, r16

	.loc_0x328:
	  lmw       r16, 0xA90(r1)
	  lwz       r0, 0xAD4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xAD0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002CC60
 * Size:	0000E0
 */
void JUTException::createConsole(void* buffer, unsigned long bufferSize)
{
	if (buffer == nullptr || bufferSize == 0) {
		return;
	}
	size_t lineCount = JUTConsole::getLineFromObjectSize(bufferSize, 0x32);
	if (lineCount == 0) {
		return;
	}
	sConsoleBuffer     = buffer;
	sConsoleBufferSize = bufferSize;
	sConsole           = JUTConsole::create(0x32, buffer, bufferSize);
	JUTConsoleManager::getManager()->setDirectConsole(sConsole);
	sConsole->setFontSize(10.0f, 6.0f);
	sConsole->setPosition(15, 26);
	sConsole->setHeight(23);
	sConsole->setVisible(true);
	sConsole->setOutput(JUTConsole::OUTPUT_OSREPORT | JUTConsole::OUTPUT_CONSOLE);
}

/*
 * --INFO--
 * Address:	8002CD40
 * Size:	000020
 */
JUTExternalFB::JUTExternalFB(_GXRenderModeObj* renderModeObj, _GXGamma gamma, void* p3, unsigned long p4)
    : m_renderModeObj(renderModeObj)
    , _04(p4)
    , _0C(1)
    , m_gamma(gamma)
    , _10(0)
{
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void JUTException::enableFpuException()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void JUTException::disableFpuException()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002CD60
 * Size:	000060
 * __dt__12JUTExceptionFv
 */
JUTException::~JUTException() { }

/*
 * --INFO--
 * Address:	8002CDC0
 * Size:	000048
 */
// void __sinit_JUTException_cpp(void) { }

/*
 * --INFO--
 * Address:	8002CE08
 * Size:	000054
 * __dt__39JSUList<Q212JUTException12JUTExMapFile>Fv
 */
// void JSUList<JUTException::JUTExMapFile>::~JSUList()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	stw      r30, 8(r1)
// 	or.      r30, r3, r3
// 	beq      lbl_8002CE40
// 	li       r4, 0
// 	bl       __dt__10JSUPtrListFv
// 	extsh.   r0, r31
// 	ble      lbl_8002CE40
// 	mr       r3, r30
// 	bl       __dl__FPv

// lbl_8002CE40:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r30
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

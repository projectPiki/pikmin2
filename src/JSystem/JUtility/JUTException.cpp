#include "Dolphin/PPCArch.h"
#include "Dolphin/math.h"
#include "Dolphin/os.h"
#include "string.h"
#include "Dolphin/vi.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JKernel/JKRThread.h"
#include "JSystem/JSupport/JSUList.h"
#include "JSystem/JUtility/JUTConsole.h"
#include "JSystem/JUtility/JUTDirectFile.h"
#include "JSystem/JUtility/JUTDirectPrint.h"
#include "JSystem/JUtility/JUTException.h"
#include "JSystem/JUtility/JUTExternalFB.h"
#include "JSystem/JUtility/JUTGamePad.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/strtold.h"
#include "types.h"

JUTException* JUTException::sErrorManager;
JUTExceptionHandler JUTException::sPreUserCallback;
JUTExceptionHandler JUTException::sPostUserCallback;
void* JUTException::sConsoleBuffer;
size_t JUTException::sConsoleBufferSize;
JUTConsole* JUTException::sConsole;
u32 JUTException::msr;
u32 JUTException::fpscr;
OSMessageQueue JUTException::sMessageQueue = { 0 };
void* JUTException::sMessageBuffer[1]      = { nullptr };
JSUList<JUTException::JUTExMapFile> JUTException::sMapFileList(false);

static JUTException::ExCallbackObject exCallbackObject;

static OSTime c3bcnt[4] = { 0, 0, 0, 0 };

const char* JUTException::sCpuExpName[OS_ERROR_MAX + 1]
    = { "SYSTEM RESET",      "MACHINE CHECK", "DSI",           "ISI",   "EXTERNAL INTERRUPT", "ALIGNMENT",   "PROGRAM",
	    "FLOATING POINT",    "DECREMENTER",   "SYSTEM CALL",   "TRACE", "PERFORMACE MONITOR", "BREAK POINT", "SYSTEM INTERRUPT",
	    "THERMAL INTERRUPT", "PROTECTION",    "FLOATING POINT" };

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
JUTException::JUTException(JUTDirectPrint* directPrint)
    : JKRThread(0x4000, 0x10, 0)
    , mDirectPrint(directPrint)
{
	OSSetErrorHandler(OS_ERROR_DSI, (OSErrorHandler)errorHandler);
	OSSetErrorHandler(OS_ERROR_ISI, (OSErrorHandler)errorHandler);
	OSSetErrorHandler(OS_ERROR_PROGRAM, (OSErrorHandler)errorHandler);
	OSSetErrorHandler(OS_ERROR_ALIGNMENT, (OSErrorHandler)errorHandler);
	OSSetErrorHandler(OS_ERROR_PROTECTION, (OSErrorHandler)errorHandler);
	setFPException(0);
	sPreUserCallback  = nullptr;
	sPostUserCallback = nullptr;
	mGamePad          = nullptr;
	mPadPort          = JUTGamePad::PORT_INVALID;
	mPrintWaitTime0   = 10;
	mPrintWaitTime1   = 10;
	mTraceSuppress    = -1;
	_98               = 0;
	mPrintFlags       = EXPRINTFLAG_All;
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
		OSResumeThread(sErrorManager->mThread);
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
		OSReceiveMessage(&sMessageQueue, (void**)&msg, OS_MESSAGE_BLOCK);
		VISetPreRetraceCallback(nullptr);
		VISetPostRetraceCallback(nullptr);
		OSErrorHandler handler;
		OSError error;
		error              = msg->mError;
		handler            = msg->mErrorHandler;
		OSContext* context = msg->mContext;
		u32 v1             = msg->_0C;
		u32 v2             = msg->_10;
		if (error < OS_ERROR_MAX + 1) {
			mStackPointer = (void*)context->gpr[1];
		}
		mFrameMemory = (JUTExternalFB*)VIGetCurrentFrameBuffer();
		if (mFrameMemory == nullptr) {
			sErrorManager->createFB();
		}
		sErrorManager->mDirectPrint->changeFrameBuffer(mFrameMemory, sErrorManager->mDirectPrint->mFBWidth,
		                                               sErrorManager->mDirectPrint->mFBHeight);
		if (handler != nullptr) {
			((OSErrorHandlerNoVARG)handler)(error, context, v1, v2);
		}
		OSDisableInterrupts();
		mFrameMemory = (JUTExternalFB*)VIGetCurrentFrameBuffer();
		sErrorManager->mDirectPrint->changeFrameBuffer(mFrameMemory, sErrorManager->mDirectPrint->mFBWidth,
		                                               sErrorManager->mDirectPrint->mFBHeight);
		sErrorManager->printContext(error, context, v1, v2);
	}
}

/*
 * --INFO--
 * Address:	8002A53C
 * Size:	000104
 */
void JUTException::errorHandler(OSError error, OSContext* context, u32 p3, u32 p4)
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
	exCallbackObject.mErrorHandler = (OSErrorHandler)sPreUserCallback;
	exCallbackObject.mError        = error;
	exCallbackObject.mContext      = context;
	exCallbackObject._0C           = p3;
	exCallbackObject._10           = p4;
	OSSendMessage(&sMessageQueue, &exCallbackObject, OS_MESSAGE_BLOCK);
	OSEnableScheduler();
	OSYieldThread();
}

/*
 * --INFO--
 * Address:	........
 * Size:	000134
 */
void JUTException::panic_f_va(const char* fileName, int lineNumber, const char* format, va_list* args)
{
	char buffer[255];
	vsnprintf(buffer, sizeof(buffer), format, *args);
	if (sErrorManager == nullptr) {
		OSPanic(fileName, lineNumber, buffer);
	}
	static OSContext context;
	memcpy(&context, OSGetCurrentContext(), sizeof(OSContext));
	sErrorManager->mStackPointer = (void*)OSGetStackPointer();

	exCallbackObject.mErrorHandler = (OSErrorHandler)sPreUserCallback;
	exCallbackObject.mError        = 0xFF;
	exCallbackObject.mContext      = &context;
	exCallbackObject._0C           = 0;
	exCallbackObject._10           = 0;

	if (sConsole == nullptr || (sConsole != nullptr && (sConsole->getOutput() & JUTConsole::CONSOLEOUT_Console) == 0)) {
		OSReport("%s in \"%s\" on line %d\n", buffer, fileName, lineNumber);
	}
	if (sConsole != nullptr) {
		sConsole->print_f("%s in \"%s\" on line %d\n", buffer, fileName, lineNumber);
	}
	OSSendMessage(&sMessageQueue, &exCallbackObject, OS_MESSAGE_BLOCK);
	OSSuspendThread(OSGetCurrentThread());
}

/*
 * --INFO--
 * Address:	8002A640
 * Size:	0001A0
 */
void JUTException::panic_f(const char* fileName, int lineNumber, const char* format, ...)
{
	va_list args;
	va_start(args, format);
	panic_f_va(fileName, lineNumber, format, &args);
	va_end(args);
}

/**
 * --INFO--
 * Address:	8002A7E0
 * Size:	000048
 */
void JUTException::setFPException(u32 enableBits)
{
	__OSFpscrEnableBits = enableBits;
	if (enableBits != 0) {
		OSSetErrorHandler(OS_ERROR_MAX, (OSErrorHandler)errorHandler);
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
bool JUTException::searchPartialModule(u32 address, u32* module_id, u32* section_id, u32* section_offset, u32* name_offset)
{
	if (!address) {
		return false;
	}

	OSModuleInfo* module = *(OSModuleInfo**)0x800030C8;
	while (module) {
		OSSectionInfo* section = (OSSectionInfo*)module->sectionInfoOffset;
		for (u32 i = 0; i < module->numSections; section = section + 1, i++) {
			if (section->size) {
				u32 addr = ALIGN_PREV(section->offset, 2);
				if ((addr <= address) && (address < addr + section->size)) {
					if (module_id)
						*module_id = module->id;
					if (section_id)
						*section_id = i;
					if (section_offset)
						*section_offset = address - addr;
					if (name_offset)
						*name_offset = module->nameOffset;
					return true;
				}
			}
		}

		module = (OSModuleInfo*)module->link.next;
	}

	return false;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void search_name_part(u8* src, u8* dst, int dst_length)
{
	for (u8* p = src; *p; p++) {
		if (*p == '\\') {
			src = p;
		}
	}

	if (*src == '\\') {
		src++;
	}

	for (int i = 0; (*src != 0) && (i < dst_length);) {
		if (*src == '.')
			break;
		*dst++ = *src++;
		i++;
	}

	*dst = '\0';
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
	u32 i;
	sConsole->print("-------------------------------- TRACE\n");
	u32* stack = (u32*)mStackPointer;
	sConsole->print_f("Address:   BackChain   LR save\n");
	for (i = 0; stack && (stack != (u32*)0xFFFFFFFF) && (i++ < 0x10);) {
		if (i > mTraceSuppress) {
			sConsole->print("Suppress trace.\n");
			return;
		}

		sConsole->print_f("%08X:  %08X    %08X\n", stack, stack[0], stack[1]);
		showMapInfo_subroutine(stack[1], false);
		JUTConsoleManager* manager = JUTConsoleManager::sManager;
		manager->drawDirect(true);
		waitTime(mPrintWaitTime1);
		stack = (u32*)stack[0];
	}
}

/*
 * --INFO--
 * Address:	8002B094
 * Size:	000244
 */
void JUTException::showMainInfo(OSError error, OSContext* context, u32 dsisr, u32 dar)
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
		u32 fpe = fpscr & (((fpscr & 0xF8) << 0x16) | 0x1F80700);
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
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void JUTException::showGPR(OSContext* context)
{
	if (!sConsole) {
		return;
	}

	sConsole->print("-------------------------------- GPR\n");
	for (int i = 0; i < 10; i++) {
		sConsole->print_f("R%02d:%08XH  R%02d:%08XH  R%02d:%08XH\n", i, context->gpr[i], i + 11, context->gpr[i + 11], i + 22,
		                  context->gpr[i + 22]);
	}
	sConsole->print_f("R%02d:%08XH  R%02d:%08XH\n", 10, context->gpr[10], 21, context->gpr[21]);
}

/*
 * --INFO--
 * Address:	8002B2D8
 * Size:	000258
 */
bool JUTException::showMapInfo_subroutine(u32 address, bool begin_with_newline)
{
	if ((address < 0x80000000) || (0x82ffffff < address)) {
		return false;
	}

	u32 name_offset;
	u32 module_id;
	u32 section_id;
	u32 section_offset;
	u8 name_part[36];

	const char* new_line = "\n";
	if (begin_with_newline == false) {
		new_line = "";
	}

	bool result = searchPartialModule(address, &module_id, &section_id, &section_offset, &name_offset);
	if (result == true) {
		search_name_part((u8*)name_offset, name_part, 32);
		sConsole->print_f("%s %s:%x section:%d\n", new_line, name_part, section_offset, section_id);
		begin_with_newline = false;
	}

	JSUListIterator<JUTException::JUTExMapFile> last  = sMapFileList.getEnd();
	JSUListIterator<JUTException::JUTExMapFile> first = sMapFileList.getFirst();
	if (first != last) {
		u32 out_addr;
		u32 out_size;
		char out_line[256];

		if (result == true) {
			result = queryMapAddress((char*)name_part, section_offset, section_id, &out_addr, &out_size, out_line, ARRAY_SIZE(out_line),
			                         true, begin_with_newline);
		} else {
			result = queryMapAddress(nullptr, address, -1, &out_addr, &out_size, out_line, ARRAY_SIZE(out_line), true, begin_with_newline);
		}

		if (result == true) {
			return true;
		}
	}

	return false;
}

/*
 * --INFO--
 * Address:	8002B530
 * Size:	0002F4
 */
void JUTException::showGPRMap(OSContext* context)
{
	if (!sConsole) {
		return;
	}

	bool found_address_register = false;
	sConsole->print("-------------------------------- GPRMAP\n");

	for (int i = 0; i < 31; i++) {
		const u32 address = context->gpr[i];

		if (address >= 0x80000000 && address <= 0x83000000 - 1) {
			found_address_register = true;

			sConsole->print_f("R%02d: %08XH", i, address);
			if (!showMapInfo_subroutine(address, true)) {
				sConsole->print("  no information\n");
			}
			JUTConsoleManager::sManager->drawDirect(true);
			waitTime(mPrintWaitTime1);
		}
	}

	if (!found_address_register) {
		sConsole->print("  no register which seem to address.\n");
	}
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
void JUTException::showSRR0Map(OSContext* context)
{
	if (!sConsole) {
		return;
	}

	sConsole->print("-------------------------------- SRR0MAP\n");
	u32 address = context->srr0;
	if (address >= 0x80000000 && address <= 0x83000000 - 1) {
		sConsole->print_f("SRR0: %08XH", address);
		if (showMapInfo_subroutine(address, true) == false) {
			sConsole->print("  no information\n");
		}
		JUTConsoleManager::getManager()->drawDirect(true);
	}
}

/*
 * --INFO--
 * Address:	8002B824
 * Size:	0003AC
 */
void JUTException::printDebugInfo(JUTException::EInfoPage page, OSError error, OSContext* context, u32 param_3, u32 param_4)
{
	switch (page) {
	case INFOPAGE_GPR:
		return showGPR(context);
	case INFOPAGE_Float:
		showFloat(context);
		if (sConsole) {
			sConsole->print_f(" MSR:%08XH\t FPSCR:%08XH\n", msr, fpscr);
		}
		break;
	case INFOPAGE_Stack:
		return showStack(context);
	case INFOPAGE_GPRMap:
		return showGPRMap(context);
	case INFOPAGE_SRR0Map:
		return showSRR0Map(context);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
bool JUTException::isEnablePad() const
{
	if (mGamePad == (JUTGamePad*)0xFFFFFFFF)
		return true;

	if (mPadPort >= 0)
		return true;

	if (mGamePad)
		return true;

	return false;
}

/*
 * --INFO--
 * Address:	8002BBD0
 * Size:	000570
 */
bool JUTException::readPad(u32* out_trigger, u32* out_button)
{
	bool result       = false;
	OSTime start_time = OSGetTime();
	OSTime ms;
	do {
		OSTime end_time = OSGetTime();
		OSTime ticks    = end_time - start_time;
		ms              = ticks / (OS_TIMER_CLOCK / 1000);
	} while (ms < 0x32);

	if (mGamePad == (JUTGamePad*)0xffffffff) {
		JUTGamePad gamePad0(JUTGamePad::PORT_0);
		JUTGamePad gamePad1(JUTGamePad::PORT_1);
		JUTGamePad gamePad2(JUTGamePad::PORT_2);
		JUTGamePad gamePad3(JUTGamePad::PORT_3);
		JUTGamePad::read();

		c3bcnt[0] = (gamePad0.isPushing3ButtonReset() ? (c3bcnt[0] != 0 ? c3bcnt[0] : OSGetTime()) : 0);
		c3bcnt[1] = (gamePad1.isPushing3ButtonReset() ? (c3bcnt[1] != 0 ? c3bcnt[1] : OSGetTime()) : 0);
		c3bcnt[2] = (gamePad2.isPushing3ButtonReset() ? (c3bcnt[2] != 0 ? c3bcnt[2] : OSGetTime()) : 0);
		c3bcnt[3] = (gamePad3.isPushing3ButtonReset() ? (c3bcnt[3] != 0 ? c3bcnt[3] : OSGetTime()) : 0);

		OSTime resetTime0 = (c3bcnt[0] != 0) ? (OSGetTime() - c3bcnt[0]) : 0;
		OSTime resetTime1 = (c3bcnt[1] != 0) ? (OSGetTime() - c3bcnt[1]) : 0;
		OSTime resetTime2 = (c3bcnt[2] != 0) ? (OSGetTime() - c3bcnt[2]) : 0;
		OSTime resetTime3 = (c3bcnt[3] != 0) ? (OSGetTime() - c3bcnt[3]) : 0;

		gamePad0.checkResetCallback(resetTime0);
		gamePad1.checkResetCallback(resetTime1);
		gamePad2.checkResetCallback(resetTime2);
		gamePad3.checkResetCallback(resetTime3);

		if (out_trigger) {
			*out_trigger = gamePad0.getButtonDown() | gamePad1.getButtonDown() | gamePad2.getButtonDown() | gamePad3.getButtonDown();
		}
		if (out_button) {
			*out_button = gamePad0.getButton() | gamePad1.getButton() | gamePad2.getButton() | gamePad3.getButton();
		}

		result = true;
	} else if (mPadPort >= 0) {
		JUTGamePad gamePad(mPadPort);
		OSTime& gamePadTime = c3bcnt[0];
		gamePadTime         = (gamePad.isPushing3ButtonReset() ? (gamePadTime != 0 ? gamePadTime : OSGetTime()) : 0);

		OSTime resetTime = (gamePadTime != 0) ? (OSGetTime() - gamePadTime) : 0;
		gamePad.checkResetCallback(resetTime);

		JUTGamePad::read();
		if (out_trigger) {
			*out_trigger = gamePad.getButtonDown();
		}
		if (out_button) {
			*out_button = gamePad.getButton();
		}

		result = true;
	} else if (mGamePad) {
		JUTGamePad::read();
		if (out_trigger) {
			*out_trigger = mGamePad->getButtonDown();
		}
		if (out_button) {
			*out_button = mGamePad->getButton();
		}

		result = true;
	}

	return result;
}

/*
 * --INFO--
 * Address:	8002C140
 * Size:	0004E4
 */
void JUTException::printContext(OSError error, OSContext* context, u32 dsisr, u32 dar)
{
	bool is_pad_enabled = isEnablePad() == 0;
	if (!sErrorManager->mDirectPrint->isActive()) {
		return;
	}

	VISetPreRetraceCallback(nullptr);
	VISetPostRetraceCallback(nullptr);
	VISetBlack(FALSE);
	VIFlush();

	if (!sConsole) {
		return;
	}

	if (error < (OS_ERROR_MACHINE_CHECK | OS_ERROR_MAX + 1)) {
		sConsole->print_f("******** EXCEPTION OCCURRED! ********\nFrameMemory:%XH\n", getFrameMemory());
	} else {
		sConsole->print_f("******** USER HALT ********\nFrameMemory:%XH\n", getFrameMemory());
	}

	int post_callback_executed = false;
	while (true) {
		showMainInfo(error, context, dsisr, dar);

		JUTConsoleManager::sManager->drawDirect(true);
		waitTime(mPrintWaitTime0);

		if ((mPrintFlags & EXPRINTFLAG_GPR) != 0) {
			printDebugInfo(INFOPAGE_GPR, error, context, dsisr, dar);
			JUTConsoleManager::sManager->drawDirect(true);
			waitTime(mPrintWaitTime0);
		}
		if ((mPrintFlags & EXPRINTFLAG_SRR0Map) != 0) {
			printDebugInfo(INFOPAGE_SRR0Map, error, context, dsisr, dar);
			JUTConsoleManager::sManager->drawDirect(true);
			waitTime(mPrintWaitTime0);
		}
		if ((mPrintFlags & EXPRINTFLAG_GPRMap) != 0) {
			printDebugInfo(INFOPAGE_GPRMap, error, context, dsisr, dar);
			JUTConsoleManager::sManager->drawDirect(true);
			waitTime(mPrintWaitTime0);
		}
		if ((mPrintFlags & EXPRINTFLAG_Float) != 0) {
			printDebugInfo(INFOPAGE_Float, error, context, dsisr, dar);
			JUTConsoleManager::sManager->drawDirect(true);
			waitTime(mPrintWaitTime0);
		}
		if ((mPrintFlags & EXPRINTFLAG_Stack) != 0) {
			printDebugInfo(INFOPAGE_Stack, error, context, dsisr, dar);
			JUTConsoleManager::sManager->drawDirect(true);
			waitTime(mPrintWaitTime1);
		}

		sConsole->print("--------------------------------\n");
		JUTConsoleManager::sManager->drawDirect(true);

		if (post_callback_executed == 0 && sPostUserCallback) {
			BOOL enable            = OSEnableInterrupts();
			post_callback_executed = true;
			(*sPostUserCallback)(error, context, dsisr, dar);
			OSRestoreInterrupts(enable);
		}

		if (this->_98 == 0 || !is_pad_enabled) {
			break;
		}

		sConsole->setOutput(sConsole->getOutput() & 1);
	}

	if (!is_pad_enabled) {
		OSEnableInterrupts();

		u32 button;
		u32 trigger;

		int down = 0;
		int up   = 0;
		do {
			readPad(&trigger, &button);

			bool draw = false;
			if (trigger == 0x100) {
				sConsole->scrollToLastLine();
				draw = true;
			}

			if (trigger == 0x200) {
				sConsole->scrollToFirstLine();
				draw = true;
			}

			if (button == 8) {
				JUTConsole* console = sConsole;
				up                  = (down < 3) ? -1 : ((down < 5) ? -2 : ((down < 7) ? -4 : -8));

				console->scroll(up);
				draw = true;
				up   = 0;
				down++;
			} else if (button == 4) {
				JUTConsole* console = sConsole;
				down                = (up < 3) ? 1 : ((up < 5) ? 2 : ((up < 7) ? 4 : 8));

				console->scroll(down);
				draw = true;
				down = 0;
				up++;
			} else {
				down = 0;
				up   = 0;
			}

			if (draw == true) {
				u32 start = VIGetRetraceCount();
				while (start == VIGetRetraceCount())
					;
				JUTConsoleManager::sManager->drawDirect(true);
			}

			waitTime(30);
		} while (true);
	}

	while (true) {
		sConsole->scrollToFirstLine();
		JUTConsoleManager::sManager->drawDirect(true);
		waitTime(2000);

		int line_offset;
		int used_line;
		u32 height;
		while (true) {
			for (u32 i = sConsole->getHeight(); i > 0; i--) {
				sConsole->scroll(1);
				JUTConsoleManager::sManager->drawDirect(true);

				height              = sConsole->getHeight();
				JUTConsole* console = sConsole;
				line_offset         = console->getLineOffset();
				used_line           = console->getUsedLine();
				if ((used_line - height) + 1U <= line_offset)
					break;
				waitTime(20);
			}

			waitTime(3000);
			height              = sConsole->getHeight();
			JUTConsole* console = sConsole;
			line_offset         = console->getLineOffset();
			used_line           = console->getUsedLine();
			if ((used_line - height) + 1U <= line_offset) {
				break;
			}
		}
	}
}

/*
 * --INFO--
 * Address:	8002C624
 * Size:	000088
 */
void JUTException::waitTime(long timeout_ms)
{
	if (timeout_ms) {
		OSTime start_time = OSGetTime();
		OSTime ms;
		do {
			OSTime end_time = OSGetTime();
			OSTime ticks    = end_time - start_time;
			ms              = ticks / (OS_TIMER_CLOCK / 1000);
		} while (ms < timeout_ms);
	}
}

/*
 * --INFO--
 * Address:	8002C6AC
 * Size:	0000F4
 */
void JUTException::createFB()
{
	_GXRenderModeObj* renderMode = &GXNtsc480Int;
	void* end                    = (void*)OSGetArenaHi();
	u16 width                    = ALIGN_NEXT(renderMode->fbWidth, 16);
	u16 height                   = renderMode->xfbHeight;
	u32 pixel_count              = width * height;
	u32 size                     = pixel_count * 2;

	void* begin  = (void*)ALIGN_PREV((u32)end - size, 32);
	void* object = (void*)ALIGN_PREV((s32)begin - sizeof(JUTExternalFB), 32);
	new (object) JUTExternalFB(renderMode, GX_GM_1_7, begin, size);

	mDirectPrint->changeFrameBuffer(begin, renderMode->fbWidth, renderMode->efbHeight);
	VIConfigure(renderMode);
	VISetNextFrameBuffer(begin);
	VISetBlack(FALSE);
	VIFlush();
	VIFlush();

	for (int i = 0; i < 3; i++) {
		u32 start = VIGetRetraceCount();
		while (start == VIGetRetraceCount())
			;
	}

	mFrameMemory = (JUTExternalFB*)object;
}

static const char unusedExceptionStr[] = "  [%08X]: .%s [%08X: %XH]\n  %s\n";

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
void JUTException::setFpscr(u32)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002C7A0
 * Size:	000010
 */
JUTExceptionHandler JUTException::setPreUserCallback(JUTExceptionHandler handler)
{
	JUTExceptionHandler oldCallback = sPreUserCallback;
	sPreUserCallback                = handler;
	return oldCallback;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
JUTExceptionHandler JUTException::setPostUserCallback(JUTExceptionHandler handler)
{
	// UNUSED FUNCTION
	JUTExceptionHandler oldCallback = sPostUserCallback;
	sPostUserCallback               = handler;
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
		if (strcmp(fileName, link->getObject()->mFileName) == 0) {
			return;
		}
	}
	JUTExMapFile* mapFile = new JUTExMapFile(fileName);
	sMapFileList.append(&mapFile->mLink);
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
bool JUTException::queryMapAddress(char* p1, u32 p2, long p3, u32* p4, u32* p5, char* p6, u32 p7, bool p8, bool p9)
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
		    && queryMapAddress_single(const_cast<char*>(sMapFileList.getFirst()->getObject()->mFileName), p2, -1, p4, p5, p6, p7, p8, p9)
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
bool JUTException::queryMapAddress_single(char* mapPath, u32 address, s32 section_id, u32* out_addr, u32* out_size, char* out_line,
                                          u32 line_length, bool print, bool begin_with_newline)
{
	if (!mapPath) {
		return false;
	}

	char section_name[16];
	char buffer[0x200];
	JUTDirectFile file;
	int i = 0;
	if (!file.fopen(mapPath)) {
		return false;
	}

	int result = 0;
	do {
		char* src         = buffer;
		int found_section = 0;
		do {
			i++;
			while (true) {
				while (true) {
					int length = file.fgets(buffer, ARRAY_SIZE(buffer));
					if (length < 0)
						goto next_section;
					if (buffer[0] == '.')
						break;
				}

				char* dst = section_name;
				int i     = 0;
				char* src = buffer + 1;
				for (; *src != '\0'; i++, dst++, src++) {
					*dst = *src;
					if (*src == ' ' || i == 0xf)
						break;
				}

				section_name[i] = 0;
				if (*src == 0)
					break;

				if (src[1] == 's' && src[2] == 'e' && src[3] == 'c' && src[4] == 't') {
					found_section = true;
					break;
				}
			}
			if ((found_section & 0xFF) == 0)
				goto end;
		} while (section_id >= 0 && section_id != i);
	next_section:;

		u32 addr;
		int size;
		do {
			int length;
			do {
				length = file.fgets(buffer, ARRAY_SIZE(buffer));
				if (length <= 4)
					goto next_symbol;
			} while ((length < 28) || (buffer[28] != '4'));

			addr = strtol(buffer + 19, nullptr, 16);
			addr = ((buffer[18] - '0') << 28) | addr;
			size = strtol(buffer + 11, nullptr, 16);
		} while (addr > address || address >= addr + size);

		if (out_addr)
			*out_addr = addr;

		if (out_size)
			*out_size = size;

		if (out_line) {
			src        = buffer + 0x1e;
			char* dst  = out_line;
			u32 length = 0;
			for (; length < line_length - 1; src++) {
				u32 ch = *(u8*)src;
				if (ch < ' ' && ch != '\t')
					break;
				if (((int)ch == ' ' || ch == '\t') && (length != 0)) {
					if (dst[-1] != ' ') {
						*dst = ' ';
						dst++;
						length++;
					}
				} else {
					*dst = ch;
					dst++;
					length++;
				}
			}
			if (length != 0 && dst[-1] == ' ') {
				dst--;
			}
			*dst = 0;
			if (print) {
				if (begin_with_newline) {
					sConsole->print("\n");
				}
				sConsole->print_f("  [%08X]: .%s [%08X: %XH]\n  %s\n", address, section_name, addr, size, out_line);
				begin_with_newline = false;
			}
		}

		result = true;

	next_symbol:;
	} while (section_id >= 0 && section_id != i);

	if (print && begin_with_newline) {
		sConsole->print("\n");
	}

end:
	int bresult = result != 0;
	file.fclose();

	return bresult;
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
void JUTException::createConsole(void* buffer, u32 bufferSize)
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
	sConsole->setOutput(JUTConsole::CONSOLEOUT_OSReport | JUTConsole::CONSOLEOUT_Console);
}

/*
 * --INFO--
 * Address:	8002CD40
 * Size:	000020
 */
JUTExternalFB::JUTExternalFB(GXRenderModeObj* renderModeObj, GXGamma gamma, void* p3, u32 p4)
    : mRenderModeObj(renderModeObj)
    , mSize(p4)
    , _0C(1)
    , mGamma(gamma)
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

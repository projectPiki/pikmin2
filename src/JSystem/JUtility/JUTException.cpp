#include "Dolphin/PPCArch.h"
#include "math.h"
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
#include "stl/stdlib.h"
#include "types.h"

static JUTException::ExCallbackObject exCallbackObject;

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

static OSTime c3bcnt[4] = { 0, 0, 0, 0 };

const char* JUTException::sCpuExpName[OS_ERROR_MAX + 1]
    = { "SYSTEM RESET",      "MACHINE CHECK", "DSI",           "ISI",   "EXTERNAL INTERRUPT", "ALIGNMENT",   "PROGRAM",
	    "FLOATING POINT",    "DECREMENTER",   "SYSTEM CALL",   "TRACE", "PERFORMACE MONITOR", "BREAK POINT", "SYSTEM INTERRUPT",
	    "THERMAL INTERRUPT", "PROTECTION",    "FLOATING POINT" };

/**
 * @note Address: N/A
 * @note Size: 0xE4
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

/**
 * @note Address: 0x8002A30C
 * @note Size: 0x110
 */
JUTException* JUTException::create(JUTDirectPrint* directPrint)
{
	if (sErrorManager == nullptr) {
		sErrorManager = new (JKRHeap::sSystemHeap, 0) JUTException(directPrint);
		OSResumeThread(sErrorManager->mThread);
	}
	return sErrorManager;
}

/**
 * @note Address: 0x8002A41C
 * @note Size: 0x120
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

/**
 * @note Address: 0x8002A53C
 * @note Size: 0x104
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

/**
 * @note Address: N/A
 * @note Size: 0x134
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

/**
 * @note Address: 0x8002A640
 * @note Size: 0x1A0
 */
void JUTException::panic_f(const char* fileName, int lineNumber, const char* format, ...)
{
	va_list args;
	va_start(args, format);
	panic_f_va(fileName, lineNumber, format, &args);
	va_end(args);
}

/**
 * @note Address: 0x8002A7E0
 * @note Size: 0x48
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

/**
 * @note Address: N/A
 * @note Size: 0x184
 */
void JUTException::showFloatSub(int reg, f32 flt)
{
	if (fpclassify(flt) == 1) {
		sConsole->print_f("F%02d: Nan      ", reg);
	} else if (fpclassify(flt) == 2) {
		if (IS_POSITIVE(flt)) {
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

/**
 * @note Address: 0x8002A828
 * @note Size: 0x770
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

/**
 * @note Address: N/A
 * @note Size: 0xC0
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

/**
 * @note Address: N/A
 * @note Size: 0x78
 */
void search_name_part(u8* src, u8* dst, int dst_length)
{
	u8* p2 = src;
	for (u8* p = src; *p; p++) {
		if (*p == '\\') {
			p2 = p;
		}
	}

	if (*p2 == '\\') {
		p2++;
	}

	int j;
	int i = 0;
	while ((*p2 != 0) && (i < dst_length)) {
		if (*p2 == '.')
			break;
		*dst++ = *p2++;
		j      = i++;
	}

	*dst = '\0';
}

/**
 * @note Address: 0x8002AF98
 * @note Size: 0xFC
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

/**
 * @note Address: 0x8002B094
 * @note Size: 0x244
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

/**
 * @note Address: N/A
 * @note Size: 0xBC
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

/**
 * @note Address: 0x8002B2D8
 * @note Size: 0x258
 */
bool JUTException::showMapInfo_subroutine(u32 address, bool begin_with_newline)
{
	const char* new_line;
	u32 name_offset;
	u32 module_id;
	u32 section_id;
	u32 section_offset;
	u8 name_part[36];

	if ((address < OS_BASE_CACHED) || (0x83000000 - 1 < address)) {
		return false;
	}

	new_line = "\n";
	if (begin_with_newline == false) {
		new_line = "";
	}

	bool result = searchPartialModule(address, &module_id, &section_id, &section_offset, &name_offset);
	if (result == true) {
		search_name_part((u8*)name_offset, name_part, 32);
		sConsole->print_f("%s %s:%x section:%d\n", new_line, name_part, section_offset, section_id);
		new_line           = "";
		begin_with_newline = false;
	}

	if (sMapFileList.getFirst() != sMapFileList.getEnd()) {
		u32 out_addr;
		u32 out_size;
		char out_line[256];
		bool map_result;

		if (result == true) {
			map_result = queryMapAddress((char*)name_part, section_offset, section_id, &out_addr, &out_size, out_line, ARRAY_SIZE(out_line),
			                             true, begin_with_newline);
		} else {
			map_result
			    = queryMapAddress(nullptr, address, -1, &out_addr, &out_size, out_line, ARRAY_SIZE(out_line), true, begin_with_newline);
		}

		if (map_result == true) {
			return true;
		}
	}

	return false;
}

/**
 * @note Address: 0x8002B530
 * @note Size: 0x2F4
 */
void JUTException::showGPRMap(OSContext* context)
{
	if (!sConsole) {
		return;
	}

	bool found_address_register = false;
	sConsole->print("-------------------------------- GPRMAP\n");

	for (int i = 0; i < 31; i++) { // GPR 0 to GPR 31
		u32 address = context->gpr[i];

		if (address >= OS_BASE_CACHED && address <= 0x83000000 - 1) {
			found_address_register = true;

			sConsole->print_f("R%02d: %08XH", i, address);
			bool res = showMapInfo_subroutine(address, true);
			if (!res) { // inlined
				sConsole->print("  no information\n");
			}
			JUTConsoleManager::getManager()->drawDirect(true);
			waitTime(mPrintWaitTime1);
		}
	}

	if (!found_address_register) {
		sConsole->print("  no register which seem to address.\n");
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x2BC
 */
void JUTException::showSRR0Map(OSContext* context)
{
	if (!sConsole) {
		return;
	}

	sConsole->print("-------------------------------- SRR0MAP\n");
	u32 address = context->srr0;
	if (address >= OS_BASE_CACHED && address <= 0x83000000 - 1) {
		sConsole->print_f("SRR0: %08XH", address);
		if (showMapInfo_subroutine(address, true) == false) {
			sConsole->print("  no information\n");
		}
		JUTConsoleManager::getManager()->drawDirect(true);
	}
}

/**
 * @note Address: 0x8002B824
 * @note Size: 0x3AC
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

/**
 * @note Address: N/A
 * @note Size: 0x3C
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

/**
 * @note Address: 0x8002BBD0
 * @note Size: 0x570
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

/**
 * @note Address: 0x8002C140
 * @note Size: 0x4E4
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

/**
 * @note Address: 0x8002C624
 * @note Size: 0x88
 */
void JUTException::waitTime(s32 timeout_ms)
{
	if (timeout_ms) {
		OSTime start_time = OSGetTime();
		OSTime ms;
		do {
			OSTime end_time = OSGetTime();
			OSTime ticks    = end_time - start_time;
			ms              = OSTicksToMilliseconds(ticks);
		} while (ms < timeout_ms);
	}
}

/**
 * @note Address: 0x8002C6AC
 * @note Size: 0xF4
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

/**
 * @note Address: N/A
 * @note Size: 0x28
 */
u32 JUTException::getFpscr()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
void JUTException::setFpscr(u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8002C7A0
 * @note Size: 0x10
 */
JUTExceptionHandler JUTException::setPreUserCallback(JUTExceptionHandler handler)
{
	JUTExceptionHandler oldCallback = sPreUserCallback;
	sPreUserCallback                = handler;
	return oldCallback;
}

/**
 * @note Address: N/A
 * @note Size: 0x10
 */
JUTExceptionHandler JUTException::setPostUserCallback(JUTExceptionHandler handler)
{
	// UNUSED FUNCTION
	JUTExceptionHandler oldCallback = sPostUserCallback;
	sPostUserCallback               = handler;
	return oldCallback;
}

/**
 * @note Address: 0x8002C7B0
 * @note Size: 0x94
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

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
// void JSULink<JUTException::JUTExMapFile>::~JSULink()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x8002C844
 * @note Size: 0xE0
 */
bool JUTException::queryMapAddress(char* p1, u32 p2, s32 p3, u32* p4, u32* p5, char* p6, u32 p7, bool p8, bool p9)
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

/**
 * @note Address: 0x8002C924
 * @note Size: 0x33C
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
	int section_idx = 0;
	if (!file.fopen(mapPath)) {
		return false;
	}

	bool result = false;
	bool found_section;

	while (true) {
		section_idx++;
		found_section = false;
		while (true) {
			char* src;
			char* dst;

			if (file.fgets(buffer, ARRAY_SIZE(buffer)) < 0)
				break;
			if (buffer[0] != '.')
				continue;

			int i = 0;
			src   = buffer + 1;
			while (*src != '\0') {
				section_name[i] = *src;
				if (*src == ' ' || i == 0xf)
					break;
				i++;
				src++;
			}

			section_name[i] = 0;
			if (*src == 0)
				break;

			if (src[1] == 's' && src[2] == 'e' && src[3] == 'c' && src[4] == 't') {
				found_section = true;
				break;
			}
		}

		if (!found_section)
			break;

		if (section_id >= 0 && section_id != section_idx)
			continue;

		int length;

		while (true) {
			if ((length = file.fgets(buffer, ARRAY_SIZE(buffer))) <= 4)
				break;
			if ((length < 28))
				continue;
			if ((buffer[28] == '4')) {
				u32 addr = ((buffer[18] - '0') << 28) | strtol(buffer + 19, nullptr, 16);
				int size = strtol(buffer + 11, nullptr, 16);
				if ((addr <= address && address < addr + size)) {
					if (out_addr)
						*out_addr = addr;

					if (out_size)
						*out_size = size;

					if (out_line) {
						const u8* src = (const u8*)&buffer[0x1e];
						u8* dst       = (u8*)out_line;
						u32 i         = 0;

						for (i = 0; i < line_length - 1; ++src) {
							if ((u32)(*src) < ' ' && (u32)*src != '\t')
								break;
							if ((*src == ' ' || (u32)*src == '\t') && (i != 0)) {
								if (dst[-1] != ' ') {
									*dst = ' ';
									dst++;
									++i;
								}
							} else {
								*dst++ = *src;
								i++;
							}
						}
						if (i != 0 && dst[-1] == ' ') {
							dst--;
							i--;
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
					break;
				}
			}
		}

		if ((section_id < 0 || section_id != section_idx)) {
			continue;
		}
		if (print && begin_with_newline) {
			sConsole->print("\n");
		}
		break;
	}

	file.fclose();
	return result ? true : false;
}

/**
 * @note Address: 0x8002CC60
 * @note Size: 0xE0
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

/**
 * @note Address: 0x8002CD40
 * @note Size: 0x20
 */
JUTExternalFB::JUTExternalFB(GXRenderModeObj* renderModeObj, GXGamma gamma, void* p3, u32 p4)
    : mRenderModeObj(renderModeObj)
    , mSize(p4)
    , _0C(1)
    , mGamma(gamma)
    , _10(0)
{
}

/**
 * @note Address: N/A
 * @note Size: 0x34
 */
void JUTException::enableFpuException()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
void JUTException::disableFpuException()
{
	// UNUSED FUNCTION
}

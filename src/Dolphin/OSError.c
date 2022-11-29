#include "types.h"
#include "Dolphin/os.h"
#include "printf.h"
#include "Dolphin/PPCArch.h"

extern volatile OSTime __OSLastInterruptTime;
extern volatile __OSInterrupt __OSLastInterrupt;
extern volatile u32 __OSLastInterruptSrr0;

extern volatile u32 __DIRegs[];
extern volatile u16 __DSPRegs[];

// All enable
#define FPSCR_ENABLE 0xF8

OSThreadQueue __OSActiveThreadQueue : (0x80000000 | 0xDC);

volatile OSContext* __OSCurrentContext : (0x80000000 | OS_CURRENTCONTEXT_PADDR);
volatile OSContext* __OSFPUContext : (0x80000000 | 0xD8);

OSErrorHandler __OSErrorTable[OS_ERROR_MAX];

u32 __OSFpscrEnableBits = FPSCR_ENABLE;

/*
 * --INFO--
 * Address:	800ED6EC
 * Size:	000080
 */
__declspec(weak) void OSReport(const char* msg, ...)
{
	va_list marker;

	va_start(marker, msg);
	vprintf(msg, marker);
	va_end(marker);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 * same as OSReport but without va start/end
 */
__declspec(weak) void OSVReport(const char* msg, va_list list) { vprintf(msg, list); }

/*
 * --INFO--
 * Address:	800ED76C
 * Size:	00012C
 */
__declspec(weak) void OSPanic(const char* file, int line, const char* msg, ...)
{
	va_list marker;
	u32 i;
	u32* p;

	OSDisableInterrupts();
	va_start(marker, msg);
	vprintf(msg, marker);
	va_end(marker);
	OSReport(" in \"%s\" on line %d.\n", file, line);

	// actually useful for debugging- stack crawl
	OSReport("\nAddress:      Back Chain    LR Save\n");
	for (i = 0, p = (u32*)OSGetStackPointer();                // get current stack pointer
	     p && (u32)p != 0xffffffff && i++ < 16; p = (u32*)*p) // get caller stack pointer
	{
		OSReport("0x%08x:   0x%08x    0x%08x\n", p, p[0], p[1]);
	}

	PPCHalt();
}

/*
 * --INFO--
 * Address:	800ED898
 * Size:	000218
 */
OSErrorHandler OSSetErrorHandler(OSError error, OSErrorHandler handler)
{
	OSErrorHandler oldHandler;
	BOOL enabled;

	enabled               = OSDisableInterrupts();
	oldHandler            = __OSErrorTable[error];
	__OSErrorTable[error] = handler;

	if (error == OS_ERROR_MAX) {
		u32 msr;
		u32 fpscr;
		OSThread* thread;

		msr = PPCMfmsr();
		PPCMtmsr(msr | 0x2000); // Enable FPU
		fpscr = PPCMffpscr();
		if (handler) {
			for (thread = __OSActiveThreadQueue.head; thread; thread = thread->linkActive.next) {
				thread->context.srr1 |= 0x900;
				if ((thread->context.state & OS_CONTEXT_STATE_FPSAVED) == 0) {
					int i;

					// Initialize FPU context too so that FPSCR can be changed per thread
					thread->context.state |= OS_CONTEXT_STATE_FPSAVED;
					for (i = 0; i < 32; ++i) {
						*(u64*)&thread->context.fpr[i] = (u64)0xffffffffffffffffLL;
						*(u64*)&thread->context.psf[i] = (u64)0xffffffffffffffffLL;
					}
					thread->context.fpscr = 4;
				}
				thread->context.fpscr |= __OSFpscrEnableBits & FPSCR_ENABLE;
				thread->context.fpscr &= 0x6005F8FF; // idk what this value represents, but it matches
			}
			fpscr |= __OSFpscrEnableBits & FPSCR_ENABLE;
			msr |= 0x900;
		} else {
			for (thread = __OSActiveThreadQueue.head; thread; thread = thread->linkActive.next) {
				thread->context.srr1 &= ~(0x900);
				thread->context.fpscr &= ~FPSCR_ENABLE;
				thread->context.fpscr &= 0x6005F8FF;
			}
			fpscr &= ~FPSCR_ENABLE;
			msr &= ~0x900;
		}

		fpscr &= 0x6005F8FF; // mismatch on this line

		PPCMtfpscr(fpscr);
		PPCMtmsr(msr); // Restore FPU
	}

	OSRestoreInterrupts(enabled);
	return oldHandler;
}

/*
 * --INFO--
 * Address:	800EDAB0
 * Size:	0002E8
 */
void __OSUnhandledException(__OSException exception, OSContext* context, u32 dsisr, u32 dar)
{
	OSTime now;
	OSErrorHandler* errorTable = __OSErrorTable;
	now                        = OSGetTime();

	if (!(context->srr1 & 2)) {
		OSReport("Non-recoverable Exception %d", exception);
	} else {
		if (exception == OS_ERROR_PROGRAM && (context->srr1 & (0x80000000 >> 11)) && errorTable[OS_ERROR_MAX] != 0) {
			u32 fpscr;
			u32 msr;
			u32 res;

			// set exception
			exception = OS_ERROR_MAX; // probably meant to be something related to FPU

			// Enable FPU
			msr = PPCMfmsr();
			PPCMtmsr(msr | 0x2000);

			// Save FPU context if it isn't null
			if (__OSFPUContext) {
				OSSaveFPUContext((OSContext*)__OSFPUContext);
			}

			// magic hex turns something off
			res   = PPCMffpscr();
			fpscr = 0x6005F8FF;
			PPCMtfpscr(res & fpscr);

			// Restore FPU
			PPCMtmsr(msr);

			if (__OSFPUContext == context) {
				OSDisableScheduler();
				errorTable[exception](exception, context, dsisr, dar);

				// Clear FPU context so that the error handler can alter the FPU context
				context->srr1 &= ~0x2000;
				__OSFPUContext = NULL;

				// Turn off floating point exception
				context->fpscr &= fpscr;
				OSEnableScheduler();
				__OSReschedule();
			} else {
				// Clear FPU context
				context->srr1 &= ~0x2000;
				__OSFPUContext = NULL;
			}

			OSLoadContext(context);
			// NOT REACHED HERE
		}

		if (errorTable[exception]) {
			OSDisableScheduler();
			errorTable[exception](exception, context, dsisr, dar);
			OSEnableScheduler();
			__OSReschedule();
			OSLoadContext(context);
			// NOT REACHED HERE
		}

		// ignore decrementer exception
		if (exception == OS_ERROR_DECREMENTER) {
			OSLoadContext(context);
			// NOT REACHED HERE
		}

		OSReport("Unhandled Exception %d", exception);
	}

	OSReport("\n");
	OSDumpContext(context);
	OSReport("\nDSISR = 0x%08x                   DAR  = 0x%08x\n", dsisr, dar);
	OSReport("TB = 0x%016llx\n", now);

	// Perform some explanation of most common errors
	switch (exception) {
	case OS_ERROR_DSI:
		OSReport("\nInstruction at 0x%x (read from SRR0) attempted to access "
		         "invalid address 0x%x (read from DAR)\n",
		         context->srr0, dar);
		break;
	case OS_ERROR_ISI:
		OSReport("\nAttempted to fetch instruction from invalid address 0x%x "
		         "(read from SRR0)\n",
		         context->srr0);
		break;
	case OS_ERROR_ALIGNMENT:
		OSReport("\nInstruction at 0x%x (read from SRR0) attempted to access "
		         "unaligned address 0x%x (read from DAR)\n",
		         context->srr0, dar);
		break;
	case OS_ERROR_PROGRAM:
		OSReport("\nProgram exception : Possible illegal instruction/operation "
		         "at or around 0x%x (read from SRR0)\n",
		         context->srr0, dar);
		break;
	case OS_ERROR_PROTECTION:
		OSReport("\n");
		OSReport("AI DMA Address =   0x%04x%04x\n", OS_AI_DMA_ADDR_HI, OS_AI_DMA_ADDR_LO); // fix this code block -epoch
		OSReport("ARAM DMA Address = 0x%04x%04x\n", OS_ARAM_DMA_ADDR_HI, OS_ARAM_DMA_ADDR_LO);
		OSReport("DI DMA Address =   0x%08x\n", OS_DI_DMA_ADDR);
		break;
	}

	OSReport("\nLast interrupt (%d): SRR0 = 0x%08x  TB = 0x%016llx\n", __OSLastInterrupt, __OSLastInterruptSrr0, __OSLastInterruptTime);

	PPCHalt();
	// NOT REACHED HERE
}

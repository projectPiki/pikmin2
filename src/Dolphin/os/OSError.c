#include "types.h"
#include "Dolphin/os.h"
#include "stdio.h"
#include "Dolphin/PPCArch.h"
#include "Dolphin/hw_regs.h"

// All enable
#define FPSCR_ENABLE 0xF8

OSErrorHandler __OSErrorTable[OS_ERROR_MAX];
u32 __OSFpscrEnableBits = FPSCR_ENABLE;

/**
 * @note Address: 0x800ED6EC
 * @note Size: 0x80
 */
WEAKFUNC void OSReport(const char* msg, ...)
{
	va_list marker;

	va_start(marker, msg);
	vprintf(msg, marker);
	va_end(marker);
}

/**
 * @note Address: N/A
 * @note Size: 0x20
 * same as OSReport but without va start/end
 */
WEAKFUNC void OSVReport(const char* msg, va_list list) { vprintf(msg, list); }

/**
 * @note Address: 0x800ED76C
 * @note Size: 0x12C
 */
WEAKFUNC void OSPanic(const char* file, int line, const char* msg, ...)
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

/**
 * @note Address: 0x800ED898
 * @note Size: 0x218
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

/**
 * @note Address: 0x800EDAB0
 * @note Size: 0x2E8
 */
void __OSUnhandledException(__OSException exception, OSContext* context, u32 dsisr, u32 dar)
{
	OSTime now;

	now = OSGetTime();

	if (!(context->srr1 & 2)) {
		OSReport("Non-recoverable Exception %d", exception);

	} else {
		if (exception == __OS_EXCEPTION_PROGRAM && (context->srr1 & (0x80000000 >> 11)) && __OSErrorTable[OS_ERROR_MAX] != 0) {
			u32 fpscr;
			u32 msr;

			exception = OS_ERROR_MAX;

			msr = PPCMfmsr();
			PPCMtmsr(msr | 0x2000);

			if (__OSFPUContext) {
				OSSaveFPUContext((OSContext*)__OSFPUContext);
			}

			fpscr = PPCMffpscr();
			fpscr &= ~(FPSCR_VXVC | FPSCR_VXIMZ | FPSCR_VXZDZ | FPSCR_VXIDI | FPSCR_VXISI | FPSCR_VXSNAN | FPSCR_VXSOFT | FPSCR_VXSQRT
			           | FPSCR_VXCVI | FPSCR_XX | FPSCR_ZX | FPSCR_UX | FPSCR_OX | FPSCR_FX | FPSCR_FI);
			PPCMtfpscr(fpscr);

			PPCMtmsr(msr);

			if (__OSFPUContext == context) {
				OSDisableScheduler();
				__OSErrorTable[exception](exception, context, dsisr, dar);
				context->srr1 &= ~0x2000;
				__OSFPUContext = nullptr;

				context->fpscr &= ~(FPSCR_VXVC | FPSCR_VXIMZ | FPSCR_VXZDZ | FPSCR_VXIDI | FPSCR_VXISI | FPSCR_VXSNAN | FPSCR_VXSOFT
				                    | FPSCR_VXSQRT | FPSCR_VXCVI | FPSCR_XX | FPSCR_ZX | FPSCR_UX | FPSCR_OX | FPSCR_FX | FPSCR_FI);
				OSEnableScheduler();
				__OSReschedule();
			} else {
				context->srr1 &= ~0x2000;
				__OSFPUContext = nullptr;
			}

			OSLoadContext(context);
		}

		if (__OSErrorTable[exception]) {
			OSDisableScheduler();
			__OSErrorTable[exception](exception, context, dsisr, dar);
			OSEnableScheduler();
			__OSReschedule();
			OSLoadContext(context);
		}

		if (exception == OS_ERROR_DECREMENTER) {
			OSLoadContext(context);
		}

		OSReport("Unhandled Exception %d", exception);
	}

	OSReport("\n");
	OSDumpContext(context);
	OSReport("\nDSISR = 0x%08x                   DAR  = 0x%08x\n", dsisr, dar);
	OSReport("TB = 0x%016llx\n", now);

	switch (exception) {
	case __OS_EXCEPTION_DSI:
		OSReport("\nInstruction at 0x%x (read from SRR0) attempted to access "
		         "invalid address 0x%x (read from DAR)\n",
		         context->srr0, dar);
		break;
	case __OS_EXCEPTION_ISI:
		OSReport("\nAttempted to fetch instruction from invalid address 0x%x "
		         "(read from SRR0)\n",
		         context->srr0);
		break;
	case __OS_EXCEPTION_ALIGNMENT:
		OSReport("\nInstruction at 0x%x (read from SRR0) attempted to access "
		         "unaligned address 0x%x (read from DAR)\n",
		         context->srr0, dar);
		break;
	case __OS_EXCEPTION_PROGRAM:
		OSReport("\nProgram exception : Possible illegal instruction/operation "
		         "at or around 0x%x (read from SRR0)\n",
		         context->srr0, dar);
		break;
	case OS_ERROR_PROTECTION:
		OSReport("\n");
		OSReport("AI DMA Address =   0x%04x%04x\n", __DSPRegs[DSP_DMA_START_HI], __DSPRegs[DSP_DMA_START_LO]);
		OSReport("ARAM DMA Address = 0x%04x%04x\n", __DSPRegs[DSP_ARAM_DMA_MM_HI], __DSPRegs[DSP_ARAM_DMA_MM_LO]);
		OSReport("DI DMA Address =   0x%08x\n", __DIRegs[DI_DMA_MEM_ADDR]);
		break;
	}

	OSReport("\nLast interrupt (%d): SRR0 = 0x%08x  TB = 0x%016llx\n", __OSLastInterrupt, __OSLastInterruptSrr0, __OSLastInterruptTime);

	PPCHalt();
}

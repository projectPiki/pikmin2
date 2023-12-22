#include "Dolphin/os.h"
#include "Dolphin/hw_regs.h"

ASM static void ExternalInterruptHandler(register __OSException exception, register OSContext* context);

extern void __RAS_OSDisableInterrupts_begin(void);
extern void __RAS_OSDisableInterrupts_end(void);

static __OSInterruptHandler* InterruptHandlerTable;

static OSInterruptMask InterruptPrioTable[] = {
	OS_INTERRUPTMASK_PI_ERROR,
	OS_INTERRUPTMASK_PI_DEBUG,
	OS_INTERRUPTMASK_MEM,
	OS_INTERRUPTMASK_PI_RSW,
	OS_INTERRUPTMASK_PI_VI,
	OS_INTERRUPTMASK_PI_PE,
	OS_INTERRUPTMASK_PI_HSP,
	OS_INTERRUPTMASK_DSP_ARAM | OS_INTERRUPTMASK_DSP_DSP | OS_INTERRUPTMASK_AI | OS_INTERRUPTMASK_EXI | OS_INTERRUPTMASK_PI_SI
	    | OS_INTERRUPTMASK_PI_DI,
	OS_INTERRUPTMASK_DSP_AI,
	OS_INTERRUPTMASK_PI_CP,
	0xFFFFFFFF,
};

volatile OSTime __OSLastInterruptTime;
volatile __OSInterrupt __OSLastInterrupt;
vu32 __OSLastInterruptSrr0;

/**
 * @note Address: 0x800EEC38
 * @note Size: 0x14
 */
ASM BOOL OSDisableInterrupts() {
#ifdef __MWERKS__ // clang-format off
	nofralloc
entry    __RAS_OSDisableInterrupts_begin
	mfmsr   r3
	rlwinm  r4, r3, 0, 17, 15
	mtmsr   r4
entry    __RAS_OSDisableInterrupts_end
	rlwinm  r3, r3, 17, 31, 31
	blr
#endif // clang-format on
}

/**
 * @note Address: 0x800EEC4C
 * @note Size: 0x14
 */
ASM BOOL OSEnableInterrupts() {
#ifdef __MWERKS__ // clang-format off
	nofralloc

	mfmsr   r3
	ori     r4, r3, 0x8000
	mtmsr   r4
	rlwinm  r3, r3, 17, 31, 31
	blr
#endif // clang-format on
}

/**
 * @note Address: 0x800EEC60
 * @note Size: 0x24
 */
ASM BOOL OSRestoreInterrupts(register BOOL level) {
#ifdef __MWERKS__ // clang-format off
	nofralloc

	cmpwi   level, 0
	mfmsr   r4
	beq     _disable
	ori     r5, r4, 0x8000
	b       _restore
_disable:
	rlwinm  r5, r4, 0, 17, 15
_restore:
	mtmsr   r5
	rlwinm  r3, r4, 17, 31, 31
	blr
#endif // clang-format on
}

/**
 * @note Address: 0x800EEC84
 * @note Size: 0x1C
 */
__OSInterruptHandler __OSSetInterruptHandler(__OSInterrupt interrupt, __OSInterruptHandler handler)
{
	__OSInterruptHandler oldHandler;

	oldHandler                       = InterruptHandlerTable[interrupt];
	InterruptHandlerTable[interrupt] = handler;
	return oldHandler;
}

/**
 * @note Address: 0x800EECA0
 * @note Size: 0x14
 */
__OSInterruptHandler __OSGetInterruptHandler(__OSInterrupt interrupt) { return InterruptHandlerTable[interrupt]; }

/**
 * @note Address: 0x800EECB4
 * @note Size: 0x74
 */
void __OSInterruptInit()
{
	InterruptHandlerTable = OSPhysicalToCached(0x3040);
	memset(InterruptHandlerTable, 0, __OS_INTERRUPT_MAX * sizeof(__OSInterruptHandler));

	__OSPriorInterruptMask = 0;

	__OSCurrentInterruptMask = 0;

	__PIRegs[PI_INTRPT_MASK] = 0xF0;

	__OSMaskInterrupts(OS_INTERRUPTMASK_MEM | OS_INTERRUPTMASK_DSP | OS_INTERRUPTMASK_AI | OS_INTERRUPTMASK_EXI | OS_INTERRUPTMASK_PI);

	__OSSetExceptionHandler(4, ExternalInterruptHandler);
}

/**
 * @note Address: 0x800EED28
 * @note Size: 0x2D8
 */
static u32 SetInterruptMask(OSInterruptMask mask, OSInterruptMask current)
{
	u32 reg;

	switch (__cntlzw(mask)) {
	case __OS_INTERRUPT_MEM_0:
	case __OS_INTERRUPT_MEM_1:
	case __OS_INTERRUPT_MEM_2:
	case __OS_INTERRUPT_MEM_3:
	case __OS_INTERRUPT_MEM_ADDRESS:
		reg = 0;
		if (!(current & OS_INTERRUPTMASK_MEM_0)) {
			reg |= 0x1;
		}
		if (!(current & OS_INTERRUPTMASK_MEM_1)) {
			reg |= 0x2;
		}
		if (!(current & OS_INTERRUPTMASK_MEM_2)) {
			reg |= 0x4;
		}
		if (!(current & OS_INTERRUPTMASK_MEM_3)) {
			reg |= 0x8;
		}
		if (!(current & OS_INTERRUPTMASK_MEM_ADDRESS)) {
			reg |= 0x10;
		}
		__MEMRegs[MEM_INTRPT_MASK] = (u16)reg;
		mask &= ~OS_INTERRUPTMASK_MEM;
		break;

	case __OS_INTERRUPT_DSP_AI:
	case __OS_INTERRUPT_DSP_ARAM:
	case __OS_INTERRUPT_DSP_DSP:
		reg = __DSPRegs[DSP_CONTROL_STATUS];
		reg &= ~0x1F8;
		if (!(current & OS_INTERRUPTMASK_DSP_AI)) {
			reg |= 0x10;
		}
		if (!(current & OS_INTERRUPTMASK_DSP_ARAM)) {
			reg |= 0x40;
		}
		if (!(current & OS_INTERRUPTMASK_DSP_DSP)) {
			reg |= 0x100;
		}
		__DSPRegs[DSP_CONTROL_STATUS] = (u16)reg;
		mask &= ~OS_INTERRUPTMASK_DSP;
		break;

	case __OS_INTERRUPT_AI_AI:
		reg = __AIRegs[AI_CONTROL];
		reg &= ~0x2C;
		if (!(current & OS_INTERRUPTMASK_AI_AI)) {
			reg |= 0x4;
		}
		__AIRegs[AI_CONTROL] = reg;
		mask &= ~OS_INTERRUPTMASK_AI;
		break;

	case __OS_INTERRUPT_EXI_0_EXI:
	case __OS_INTERRUPT_EXI_0_TC:
	case __OS_INTERRUPT_EXI_0_EXT:
		reg = __EXIRegs[EXI_CHAN_0_STAT];
		reg &= ~0x2C0F;
		if (!(current & OS_INTERRUPTMASK_EXI_0_EXI)) {
			reg |= 0x1;
		}
		if (!(current & OS_INTERRUPTMASK_EXI_0_TC)) {
			reg |= 0x4;
		}
		if (!(current & OS_INTERRUPTMASK_EXI_0_EXT)) {
			reg |= 0x400;
		}
		__EXIRegs[EXI_CHAN_0_STAT] = reg;
		mask &= ~OS_INTERRUPTMASK_EXI_0;
		break;

	case __OS_INTERRUPT_EXI_1_EXI:
	case __OS_INTERRUPT_EXI_1_TC:
	case __OS_INTERRUPT_EXI_1_EXT:
		reg = __EXIRegs[EXI_CHAN_1_STAT];
		reg &= ~0xC0F;

		if (!(current & OS_INTERRUPTMASK_EXI_1_EXI)) {
			reg |= 0x1;
		}
		if (!(current & OS_INTERRUPTMASK_EXI_1_TC)) {
			reg |= 0x4;
		}
		if (!(current & OS_INTERRUPTMASK_EXI_1_EXT)) {
			reg |= 0x400;
		}
		__EXIRegs[EXI_CHAN_1_STAT] = reg;
		mask &= ~OS_INTERRUPTMASK_EXI_1;
		break;

	case __OS_INTERRUPT_EXI_2_EXI:
	case __OS_INTERRUPT_EXI_2_TC:
		reg = __EXIRegs[EXI_CHAN_2_STAT];
		reg &= ~0xF;
		if (!(current & OS_INTERRUPTMASK_EXI_2_EXI)) {
			reg |= 0x1;
		}
		if (!(current & OS_INTERRUPTMASK_EXI_2_TC)) {
			reg |= 0x4;
		}

		__EXIRegs[EXI_CHAN_2_STAT] = reg;
		mask &= ~OS_INTERRUPTMASK_EXI_2;
		break;

	case __OS_INTERRUPT_PI_CP:
	case __OS_INTERRUPT_PI_SI:
	case __OS_INTERRUPT_PI_DI:
	case __OS_INTERRUPT_PI_RSW:
	case __OS_INTERRUPT_PI_ERROR:
	case __OS_INTERRUPT_PI_VI:
	case __OS_INTERRUPT_PI_DEBUG:
	case __OS_INTERRUPT_PI_PE_TOKEN:
	case __OS_INTERRUPT_PI_PE_FINISH:
	case __OS_INTERRUPT_PI_HSP:
		reg = 0xF0;

		if (!(current & OS_INTERRUPTMASK_PI_CP)) {
			reg |= 0x800;
		}
		if (!(current & OS_INTERRUPTMASK_PI_SI)) {
			reg |= 0x8;
		}
		if (!(current & OS_INTERRUPTMASK_PI_DI)) {
			reg |= 0x4;
		}
		if (!(current & OS_INTERRUPTMASK_PI_RSW)) {
			reg |= 0x2;
		}
		if (!(current & OS_INTERRUPTMASK_PI_ERROR)) {
			reg |= 0x1;
		}
		if (!(current & OS_INTERRUPTMASK_PI_VI)) {
			reg |= 0x100;
		}
		if (!(current & OS_INTERRUPTMASK_PI_DEBUG)) {
			reg |= 0x1000;
		}
		if (!(current & OS_INTERRUPTMASK_PI_PE_TOKEN)) {
			reg |= 0x200;
		}
		if (!(current & OS_INTERRUPTMASK_PI_PE_FINISH)) {
			reg |= 0x400;
		}
		if (!(current & OS_INTERRUPTMASK_PI_HSP)) {
			reg |= 0x2000;
		}
		__PIRegs[PI_INTRPT_MASK] = reg;
		mask &= ~OS_INTERRUPTMASK_PI;
		break;

	default:
		break;
	}

	return mask;
}

/**
 * @note Address: 0x800EF000
 * @note Size: 0x88
 */
OSInterruptMask __OSMaskInterrupts(OSInterruptMask global)
{
	BOOL enabled;
	OSInterruptMask prev;
	OSInterruptMask local;
	OSInterruptMask mask;

	enabled = OSDisableInterrupts();
	prev    = __OSPriorInterruptMask;
	local   = __OSCurrentInterruptMask;
	mask    = ~(prev | local) & global;
	global |= prev;
	__OSPriorInterruptMask = global;
	while (mask) {
		mask = SetInterruptMask(mask, global | local);
	}
	OSRestoreInterrupts(enabled);
	return prev;
}

/**
 * @note Address: 0x800EF088
 * @note Size: 0x88
 */
OSInterruptMask __OSUnmaskInterrupts(OSInterruptMask global)
{
	BOOL enabled;
	OSInterruptMask prev;
	OSInterruptMask local;
	OSInterruptMask mask;

	enabled                = OSDisableInterrupts();
	prev                   = __OSPriorInterruptMask;
	local                  = __OSCurrentInterruptMask;
	mask                   = (prev | local) & global;
	global                 = prev & ~global;
	__OSPriorInterruptMask = global;
	while (mask) {
		mask = SetInterruptMask(mask, global | local);
	}
	OSRestoreInterrupts(enabled);
	return prev;
}

/**
 * @note Address: 0x800EF110
 * @note Size: 0x344
 */
void __OSDispatchInterrupt(__OSException exception, OSContext* context)
{
	u32 intsr;
	u32 reg;
	OSInterruptMask cause;
	OSInterruptMask unmasked;
	OSInterruptMask* prio;
	__OSInterrupt interrupt;
	__OSInterruptHandler handler;
	intsr = __PIRegs[PI_INTRPT_SRC];
	intsr &= ~PI_INTRPT_RSWST;

	if (intsr == 0 || (intsr & __PIRegs[PI_INTRPT_MASK]) == 0) {
		OSLoadContext(context);
	}

	cause = 0;

	if (intsr & PI_INTRPT_MEM) {
		reg = __MEMRegs[MEM_INTRPT_SRC];
		if (reg & 0x1)
			cause |= OS_INTERRUPTMASK_MEM_0;
		if (reg & 0x2)
			cause |= OS_INTERRUPTMASK_MEM_1;
		if (reg & 0x4)
			cause |= OS_INTERRUPTMASK_MEM_2;
		if (reg & 0x8)
			cause |= OS_INTERRUPTMASK_MEM_3;
		if (reg & 0x10)
			cause |= OS_INTERRUPTMASK_MEM_ADDRESS;
	}

	if (intsr & PI_INTRPT_DSP) {
		reg = __DSPRegs[DSP_CONTROL_STATUS];
		if (reg & 0x8)
			cause |= OS_INTERRUPTMASK_DSP_AI;
		if (reg & 0x20)
			cause |= OS_INTERRUPTMASK_DSP_ARAM;
		if (reg & 0x80)
			cause |= OS_INTERRUPTMASK_DSP_DSP;
	}

	if (intsr & PI_INTRPT_AI) {
		reg = __AIRegs[AI_CONTROL];
		if (reg & 0x8)
			cause |= OS_INTERRUPTMASK_AI_AI;
	}

	if (intsr & PI_INTRPT_EXI) {
		reg = __EXIRegs[EXI_CHAN_0_STAT];
		if (reg & 0x2)
			cause |= OS_INTERRUPTMASK_EXI_0_EXI;
		if (reg & 0x8)
			cause |= OS_INTERRUPTMASK_EXI_0_TC;
		if (reg & 0x800)
			cause |= OS_INTERRUPTMASK_EXI_0_EXT;

		reg = __EXIRegs[EXI_CHAN_1_STAT];
		if (reg & 0x2)
			cause |= OS_INTERRUPTMASK_EXI_1_EXI;
		if (reg & 0x8)
			cause |= OS_INTERRUPTMASK_EXI_1_TC;
		if (reg & 0x800)
			cause |= OS_INTERRUPTMASK_EXI_1_EXT;

		reg = __EXIRegs[EXI_CHAN_2_STAT];
		if (reg & 0x2)
			cause |= OS_INTERRUPTMASK_EXI_2_EXI;
		if (reg & 0x8)
			cause |= OS_INTERRUPTMASK_EXI_2_TC;
	}

	if (intsr & PI_INTRPT_HSP)
		cause |= OS_INTERRUPTMASK_PI_HSP;
	if (intsr & PI_INTRPT_DEBUG)
		cause |= OS_INTERRUPTMASK_PI_DEBUG;
	if (intsr & PI_INTRPT_PE_FINISH)
		cause |= OS_INTERRUPTMASK_PI_PE_FINISH;
	if (intsr & PI_INTRPT_PE_TOKEN)
		cause |= OS_INTERRUPTMASK_PI_PE_TOKEN;
	if (intsr & PI_INTRPT_VI)
		cause |= OS_INTERRUPTMASK_PI_VI;
	if (intsr & PI_INTRPT_SI)
		cause |= OS_INTERRUPTMASK_PI_SI;
	if (intsr & PI_INTRPT_DVD)
		cause |= OS_INTERRUPTMASK_PI_DI;
	if (intsr & PI_INTRPT_RSW)
		cause |= OS_INTERRUPTMASK_PI_RSW;
	if (intsr & PI_INTRPT_CP)
		cause |= OS_INTERRUPTMASK_PI_CP;
	if (intsr & PI_INTRPT_ERR)
		cause |= OS_INTERRUPTMASK_PI_ERROR;

	unmasked = cause & ~(__OSPriorInterruptMask | __OSCurrentInterruptMask);
	if (unmasked) {
		for (prio = InterruptPrioTable;; ++prio) {
			if (unmasked & *prio) {
				interrupt = (__OSInterrupt)__cntlzw(unmasked & *prio);
				break;
			}
		}

		handler = __OSGetInterruptHandler(interrupt);
		if (handler) {
			if (__OS_INTERRUPT_MEM_ADDRESS < interrupt) {
				__OSLastInterrupt     = interrupt;
				__OSLastInterruptTime = OSGetTime();
				__OSLastInterruptSrr0 = context->srr0;
			}

			OSDisableScheduler();
			handler(interrupt, context);
			OSEnableScheduler();
			__OSReschedule();
			OSLoadContext(context);
		}
	}

	OSLoadContext(context);
}

/**
 * @note Address: 0x800EF454
 * @note Size: 0x50
 */
ASM static void ExternalInterruptHandler(register __OSException exception, register OSContext* context)
{
#pragma unused(exception)
#ifdef __MWERKS__ // clang-format off
	nofralloc
	OS_EXCEPTION_SAVE_GPRS(context)

	stwu r1, -8(r1)
	b __OSDispatchInterrupt
#endif // clang-format on
}

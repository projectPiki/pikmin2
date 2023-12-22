#ifndef _DOLPHIN_OS_OSINTERRUPT_H
#define _DOLPHIN_OS_OSINTERRUPT_H

#include "types.h"
#include "Dolphin/OS/OSContext.h"
#include "Dolphin/OS/OSException.h"
#include "Dolphin/OS/OSUtil.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

//////// INTERRUPT TYPES /////////
// Useful typedef for interrupts.
typedef s16 __OSInterrupt;

// Interrupt handler function type.
typedef void (*__OSInterruptHandler)(__OSInterrupt interrupt, OSContext* context);

// Mask type for interrupts, to use with defines.
typedef u32 OSInterruptMask;

// Last interrupts.
extern volatile __OSInterrupt __OSLastInterrupt; // one of the Interrupt Codes below.
extern vu32 __OSLastInterruptSrr0;               // SRR0 value at time of interrupt.
extern volatile OSTime __OSLastInterruptTime;    // time of interrupt (from OSGetTime()).

// Interrupt global addresses.
volatile OSInterruptMask __OSPriorInterruptMask AT_ADDRESS((u32)OSPhysicalToCached(0x00C4));
volatile OSInterruptMask __OSCurrentInterruptMask AT_ADDRESS((u32)OSPhysicalToCached(0x00C8));

//////////////////////////////////

////// INTERRUPT FUNCTIONS ///////
// Handler functions.
__OSInterruptHandler __OSSetInterruptHandler(__OSInterrupt interrupt, __OSInterruptHandler handler);
__OSInterruptHandler __OSGetInterruptHandler(__OSInterrupt interrupt);

// Interrupt functions.
void __OSDispatchInterrupt(__OSException exception, OSContext* context);
BOOL OSEnableInterrupts();
BOOL OSDisableInterrupts();
BOOL OSRestoreInterrupts(BOOL level);

// Mask functions.
OSInterruptMask __OSMaskInterrupts(OSInterruptMask mask);
OSInterruptMask __OSUnmaskInterrupts(OSInterruptMask mask);

// Unused/inlined in P2.
OSInterruptMask OSGetInterruptMask();
OSInterruptMask OSSetInterruptMask(OSInterruptMask mask);

//////////////////////////////////

//////// INTERRUPT CODES /////////
// Interrupt codes.
#define __OS_INTERRUPT_MEM_0        0 // Memory-related interrupts.
#define __OS_INTERRUPT_MEM_1        1
#define __OS_INTERRUPT_MEM_2        2
#define __OS_INTERRUPT_MEM_3        3
#define __OS_INTERRUPT_MEM_ADDRESS  4
#define __OS_INTERRUPT_DSP_AI       5 // Audio-related interrupts.
#define __OS_INTERRUPT_DSP_ARAM     6
#define __OS_INTERRUPT_DSP_DSP      7
#define __OS_INTERRUPT_AI_AI        8
#define __OS_INTERRUPT_EXI_0_EXI    9 // Expanded-mem-related interrupts.
#define __OS_INTERRUPT_EXI_0_TC     10
#define __OS_INTERRUPT_EXI_0_EXT    11
#define __OS_INTERRUPT_EXI_1_EXI    12
#define __OS_INTERRUPT_EXI_1_TC     13
#define __OS_INTERRUPT_EXI_1_EXT    14
#define __OS_INTERRUPT_EXI_2_EXI    15
#define __OS_INTERRUPT_EXI_2_TC     16
#define __OS_INTERRUPT_PI_CP        17 // Processor-related interrupts.
#define __OS_INTERRUPT_PI_PE_TOKEN  18
#define __OS_INTERRUPT_PI_PE_FINISH 19
#define __OS_INTERRUPT_PI_SI        20
#define __OS_INTERRUPT_PI_DI        21
#define __OS_INTERRUPT_PI_RSW       22
#define __OS_INTERRUPT_PI_ERROR     23
#define __OS_INTERRUPT_PI_VI        24
#define __OS_INTERRUPT_PI_DEBUG     25
#define __OS_INTERRUPT_PI_HSP       26
#define __OS_INTERRUPT_MAX          32

//////////////////////////////////

//////// INTERRUPT MASKS /////////
// Macro for masking interrupts.
#define OS_INTERRUPTMASK(interrupt) (0x80000000u >> (interrupt))

// Masks for memory-related interrupts.
#define OS_INTERRUPTMASK_MEM_0       OS_INTERRUPTMASK(__OS_INTERRUPT_MEM_0)
#define OS_INTERRUPTMASK_MEM_1       OS_INTERRUPTMASK(__OS_INTERRUPT_MEM_1)
#define OS_INTERRUPTMASK_MEM_2       OS_INTERRUPTMASK(__OS_INTERRUPT_MEM_2)
#define OS_INTERRUPTMASK_MEM_3       OS_INTERRUPTMASK(__OS_INTERRUPT_MEM_3)
#define OS_INTERRUPTMASK_MEM_ADDRESS OS_INTERRUPTMASK(__OS_INTERRUPT_MEM_ADDRESS)
#define OS_INTERRUPTMASK_MEM_RESET   (OS_INTERRUPTMASK_MEM_0 | OS_INTERRUPTMASK_MEM_1 | OS_INTERRUPTMASK_MEM_2 | OS_INTERRUPTMASK_MEM_3)

#define OS_INTERRUPTMASK_MEM \
	(OS_INTERRUPTMASK_MEM_0 | OS_INTERRUPTMASK_MEM_1 | OS_INTERRUPTMASK_MEM_2 | OS_INTERRUPTMASK_MEM_3 | OS_INTERRUPTMASK_MEM_ADDRESS)

// Masks for audio-related interrupts.
#define OS_INTERRUPTMASK_DSP_AI   OS_INTERRUPTMASK(__OS_INTERRUPT_DSP_AI)
#define OS_INTERRUPTMASK_DSP_ARAM OS_INTERRUPTMASK(__OS_INTERRUPT_DSP_ARAM)
#define OS_INTERRUPTMASK_DSP_DSP  OS_INTERRUPTMASK(__OS_INTERRUPT_DSP_DSP)

#define OS_INTERRUPTMASK_DSP (OS_INTERRUPTMASK_DSP_AI | OS_INTERRUPTMASK_DSP_ARAM | OS_INTERRUPTMASK_DSP_DSP)

#define OS_INTERRUPTMASK_AI_AI OS_INTERRUPTMASK(__OS_INTERRUPT_AI_AI)
#define OS_INTERRUPTMASK_AI    (OS_INTERRUPTMASK_AI_AI)

// Masks for expanded-mem-related interrupts.
#define OS_INTERRUPTMASK_EXI_0_EXI OS_INTERRUPTMASK(__OS_INTERRUPT_EXI_0_EXI)
#define OS_INTERRUPTMASK_EXI_0_TC  OS_INTERRUPTMASK(__OS_INTERRUPT_EXI_0_TC)
#define OS_INTERRUPTMASK_EXI_0_EXT OS_INTERRUPTMASK(__OS_INTERRUPT_EXI_0_EXT)

#define OS_INTERRUPTMASK_EXI_0 (OS_INTERRUPTMASK_EXI_0_EXI | OS_INTERRUPTMASK_EXI_0_TC | OS_INTERRUPTMASK_EXI_0_EXT)

#define OS_INTERRUPTMASK_EXI_1_EXI OS_INTERRUPTMASK(__OS_INTERRUPT_EXI_1_EXI)
#define OS_INTERRUPTMASK_EXI_1_TC  OS_INTERRUPTMASK(__OS_INTERRUPT_EXI_1_TC)
#define OS_INTERRUPTMASK_EXI_1_EXT OS_INTERRUPTMASK(__OS_INTERRUPT_EXI_1_EXT)

#define OS_INTERRUPTMASK_EXI_1 (OS_INTERRUPTMASK_EXI_1_EXI | OS_INTERRUPTMASK_EXI_1_TC | OS_INTERRUPTMASK_EXI_1_EXT)

#define OS_INTERRUPTMASK_EXI_2_EXI OS_INTERRUPTMASK(__OS_INTERRUPT_EXI_2_EXI)
#define OS_INTERRUPTMASK_EXI_2_TC  OS_INTERRUPTMASK(__OS_INTERRUPT_EXI_2_TC)
#define OS_INTERRUPTMASK_EXI_2     (OS_INTERRUPTMASK_EXI_2_EXI | OS_INTERRUPTMASK_EXI_2_TC)

#define OS_INTERRUPTMASK_EXI                                                                                          \
	(OS_INTERRUPTMASK_EXI_0_EXI | OS_INTERRUPTMASK_EXI_0_TC | OS_INTERRUPTMASK_EXI_0_EXT | OS_INTERRUPTMASK_EXI_1_EXI \
	 | OS_INTERRUPTMASK_EXI_1_TC | OS_INTERRUPTMASK_EXI_1_EXT | OS_INTERRUPTMASK_EXI_2_EXI | OS_INTERRUPTMASK_EXI_2_TC)

// Masks for processor-related interrupts.
#define OS_INTERRUPTMASK_PI_PE_TOKEN  OS_INTERRUPTMASK(__OS_INTERRUPT_PI_PE_TOKEN)
#define OS_INTERRUPTMASK_PI_PE_FINISH OS_INTERRUPTMASK(__OS_INTERRUPT_PI_PE_FINISH)

#define OS_INTERRUPTMASK_PI_PE (OS_INTERRUPTMASK_PI_PE_TOKEN | OS_INTERRUPTMASK_PI_PE_FINISH)

#define OS_INTERRUPTMASK_PI_CP    OS_INTERRUPTMASK(__OS_INTERRUPT_PI_CP)
#define OS_INTERRUPTMASK_PI_SI    OS_INTERRUPTMASK(__OS_INTERRUPT_PI_SI)
#define OS_INTERRUPTMASK_PI_DI    OS_INTERRUPTMASK(__OS_INTERRUPT_PI_DI)
#define OS_INTERRUPTMASK_PI_RSW   OS_INTERRUPTMASK(__OS_INTERRUPT_PI_RSW)
#define OS_INTERRUPTMASK_PI_ERROR OS_INTERRUPTMASK(__OS_INTERRUPT_PI_ERROR)
#define OS_INTERRUPTMASK_PI_VI    OS_INTERRUPTMASK(__OS_INTERRUPT_PI_VI)
#define OS_INTERRUPTMASK_PI_DEBUG OS_INTERRUPTMASK(__OS_INTERRUPT_PI_DEBUG)
#define OS_INTERRUPTMASK_PI_HSP   OS_INTERRUPTMASK(__OS_INTERRUPT_PI_HSP)

#define OS_INTERRUPTMASK_PI                                                                                                         \
	(OS_INTERRUPTMASK_PI_CP | OS_INTERRUPTMASK_PI_SI | OS_INTERRUPTMASK_PI_DI | OS_INTERRUPTMASK_PI_RSW | OS_INTERRUPTMASK_PI_ERROR \
	 | OS_INTERRUPTMASK_PI_VI | OS_INTERRUPTMASK_PI_PE_TOKEN | OS_INTERRUPTMASK_PI_PE_FINISH | OS_INTERRUPTMASK_PI_DEBUG            \
	 | OS_INTERRUPTMASK_PI_HSP)

//////////////////////////////////

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif

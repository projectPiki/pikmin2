#ifndef _DOLPHIN_HW_REGS_H
#define _DOLPHIN_HW_REGS_H

#include "types.h"
#include "Dolphin/OS/OSUtil.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

/////// HARDWARE REGISTERS ///////
// Video Interface registers.
vu16 __VIRegs[59] AT_ADDRESS(0xCC002000);

// Processor Interface registers.
vu32 __PIRegs[12] AT_ADDRESS(0xCC003000);

// Memory Interface registers.
vu16 __MEMRegs[64] AT_ADDRESS(0xCC004000);

// Digital Signal Processor registers (for audio mixing).
vu16 __DSPRegs[32] AT_ADDRESS(0xCC005000);

// DVD Interface registers.
vu32 __DIRegs[16] AT_ADDRESS(0xCC006000);

// Serial Interface registers.
vu32 __SIRegs[64] AT_ADDRESS(0xCC006400);

// Expansion/External Interface registers.
vu32 __EXIRegs[16] AT_ADDRESS(0xCC006800);

// Audio Streaming Interface registers.
vu32 __AIRegs[8] AT_ADDRESS(0xCC006C00);

//////////////////////////////////

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif

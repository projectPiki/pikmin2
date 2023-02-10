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

// offsets for __DSPRegs[i]
#define DSP_MAILBOX_IN_HI  (0)
#define DSP_MAILBOX_IN_LO  (1)
#define DSP_MAILBOX_OUT_HI (2)
#define DSP_MAILBOX_OUT_LO (3)
#define DSP_CONTROL_STATUS (5)

#define DSP_ARAM_SIZE        (9)
#define DSP_ARAM_MODE        (11)
#define DSP_ARAM_REFRESH     (13)
#define DSP_ARAM_DMA_MM_HI   (16) // Main mem address
#define DSP_ARAM_DMA_MM_LO   (17)
#define DSP_ARAM_DMA_ARAM_HI (18) // ARAM address
#define DSP_ARAM_DMA_ARAM_LO (19)
#define DSP_ARAM_DMA_SIZE_HI (20) // DMA buffer size
#define DSP_ARAM_DMA_SIZE_LO (21)

#define DSP_DMA_START_HI    (24) // DMA start address
#define DSP_DMA_START_LO    (25)
#define DSP_DMA_CONTROL_LEN (27)
#define DSP_DMA_BYTES_LEFT  (29)

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

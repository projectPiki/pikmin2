#ifndef _DOLPHIN_OS_OSEXPANSION_H
#define _DOLPHIN_OS_OSEXPANSION_H

#include "types.h"
#include "Dolphin/OS/OSContext.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

////////// EXI FUNCTIONS /////////
// Callback function type.
typedef void (*EXICallback)(s32 channel, OSContext* context);

// EXI functions.
BOOL EXIProbe(s32 channel);
s32 EXIProbeEx(s32 channel);

s32 EXIGetType(s32 channel, u32 dev, u32* type);
char* EXIGetTypeString(u32 type);

u32 __OSGetDIConfig(void);
void __OSEnableBarnacle(s32 chan, u32 dev);

//////////////////////////////////

/////////// EXI DEFINES //////////
// Memory card defines.
#define EXI_MEMORY_CARD_59  0x00000004
#define EXI_MEMORY_CARD_123 0x00000008
#define EXI_MEMORY_CARD_251 0x00000010
#define EXI_MEMORY_CARD_507 0x00000020

#define EXI_MEMORY_CARD_1019 0x00000040
#define EXI_MEMORY_CARD_2043 0x00000080

#define EXI_MEMORY_CARD_1019A 0x00000140
#define EXI_MEMORY_CARD_1019B 0x00000240
#define EXI_MEMORY_CARD_1019C 0x00000340
#define EXI_MEMORY_CARD_1019D 0x00000440
#define EXI_MEMORY_CARD_1019E 0x00000540
#define EXI_MEMORY_CARD_1019F 0x00000640
#define EXI_MEMORY_CARD_1019G 0x00000740

#define EXI_MEMORY_CARD_2043A 0x00000180
#define EXI_MEMORY_CARD_2043B 0x00000280
#define EXI_MEMORY_CARD_2043C 0x00000380
#define EXI_MEMORY_CARD_2043D 0x00000480
#define EXI_MEMORY_CARD_2043E 0x00000580
#define EXI_MEMORY_CARD_2043F 0x00000680
#define EXI_MEMORY_CARD_2043G 0x00000780

// Other external defines.
#define EXI_USB_ADAPTER 0x01010000
#define EXI_NPDP_GDEV   0x01020000

#define EXI_MODEM         0x02020000
#define EXI_ETHER         0x04020200
#define EXI_ETHER_VIEWER  0x04220001
#define EXI_STREAM_HANGER 0x04130000

#define EXI_MARLIN 0x03010000

#define EXI_IS_VIEWER 0x05070000

// Freq defines.
#define EXI_FREQ_1M  0
#define EXI_FREQ_2M  1
#define EXI_FREQ_4M  2
#define EXI_FREQ_8M  3
#define EXI_FREQ_16M 4
#define EXI_FREQ_32M 5

// Read/write.
#define EXI_READ  0
#define EXI_WRITE 1

// EXI status.
#define EXI_STATE_IDLE     0x00
#define EXI_STATE_DMA      0x01
#define EXI_STATE_IMM      0x02
#define EXI_STATE_BUSY     (EXI_STATE_DMA | EXI_STATE_IMM)
#define EXI_STATE_SELECTED 0x04
#define EXI_STATE_ATTACHED 0x08
#define EXI_STATE_LOCKED   0x10

//////////////////////////////////

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif

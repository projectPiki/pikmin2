#ifndef _DOLPHIN_EXI_H
#define _DOLPHIN_EXI_H

#include "types.h"
#include "Dolphin/os.h"
#include "Dolphin/hw_regs.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

/////////// EXI DEFINES //////////
// Useful numbers.
#define EXI_TX       0x800400u
#define EXI_MAGIC    0xa5ff005a
#define EXI_MAX_DEV  3
#define EXI_MAX_CHAN 3
#define EXI_REG_MAX  5

// Useful macros.
#define EXI_0CR(tstart, dma, rw, tlen) ((((u32)(tstart)) << 0) | (((u32)(dma)) << 1) | (((u32)(rw)) << 2) | (((u32)(tlen)) << 4))

#define EXIREG(chan, idx) (__EXIRegs[((chan)*EXI_REG_MAX) + (idx)])

#define EXI_CPR_CS(x)  ((1u << (x)) << 7)
#define EXI_CPR_CLK(x) ((x) << 4)

s32 __EXIProbeStartTime[2] AT_ADDRESS(OS_BASE_CACHED | 0x30C0);

//////////////////////////////////

/////////// EXI STRUCTS //////////
// Struct for handling expansion information (size 0x40).
typedef struct EXIControl {
	EXICallback exiCallback; // _00
	EXICallback tcCallback;  // _04
	EXICallback extCallback; // _08
	vu32 state;              // _0C
	int immLen;              // _10
	u8* immBuf;              // _14
	u32 dev;                 // _18
	u32 id;                  // _1C
	s32 idTime;              // _20
	int items;               // _24
	struct {
		u32 dev;
		EXICallback callback;
	} queue[EXI_MAX_DEV]; // _28
} EXIControl;

//////////////////////////////////

////////// EXI FUNCTIONS /////////
void EXIInit();

BOOL EXIImm(s32 channel, void* buffer, s32 length, u32 type, EXICallback callback);
BOOL EXIImmEx(s32 channel, void* buffer, s32 length, u32 type);
BOOL EXIDma(s32 channel, void* buffer, s32 length, u32 type, EXICallback callback);
BOOL EXISync(s32 channel);
BOOL EXIClearInterrupts(s32 channel, BOOL clearExiBit, BOOL clearTcBit, BOOL clearExtBit);
EXICallback EXISetExiCallback(s32 channel, EXICallback callback);
BOOL EXIAttach(s32 channel, EXICallback callback);
BOOL EXIDetach(s32 channel);
BOOL EXISelect(s32 channel, u32 device, u32 frequency);
BOOL EXIDeselect(s32 channel);

void EXIIntrruptHandler(__OSInterrupt interrupt, OSContext* context);
BOOL EXILock(s32 channel, u32 device, EXICallback callback);
BOOL EXIUnlock(s32 channel);
u32 EXIGetState(s32 channel);
s32 EXIGetID(s32 channel, u32 device, u32* id);

//////////////////////////////////

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif

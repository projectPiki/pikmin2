#ifndef _DOLPHIN_EXI_H
#define _DOLPHIN_EXI_H

#include "types.h"
#include "Dolphin/os.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

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
// sic
void EXIIntrruptHandler(__OSInterrupt interrupt, OSContext* context);
BOOL EXILock(s32 channel, u32 device, EXICallback callback);
BOOL EXIUnlock(s32 channel);
u32 EXIGetState(s32 channel);
s32 EXIGetID(s32 channel, u32 device, u32* id);

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif

#ifndef _DOLPHIN_EXI_H
#define _DOLPHIN_EXI_H

#include "types.h"
#include "Dolphin/os.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

typedef unknown EXICallback(int slotIndex);

typedef enum { EXIResultMinusOne = -1, EXIResultZero = 0, EXIResultOne = 1 } EXIResult;

void EXIInit();

EXIResult EXIImm(int slotIndex, u8* p2, int byteCount, int p4, unknown p5);
EXIResult EXIImmEx(int slotIndex, u8* p2, int byteCount, int p4);
EXIResult EXIDma(int slotIndex, unknown p2, unknown p3, unknown p4, unknown p5);
EXIResult EXISync(int slotIndex);
EXIResult EXIClearInterrupts(int slotIndex, unknown p2, unknown p3, unknown p4);
EXICallback* EXISetExiCallback(int slotIndex, EXICallback* callback);
EXIResult EXIProbe(int slotIndex);
EXIResult EXIProbeEx(int slotIndex);
EXIResult EXIAttach(int slotIndex, unknown p2);
EXIResult EXIDetach(int slotIndex);
EXIResult EXISelect(int slotIndex, unknown p2, unknown p3);
EXIResult EXIDeselect(int slotIndex);
// sic
void EXIIntrruptHandler(unknown p1, OSContext* context);
EXIResult EXILock(int slotIndex, unknown p2, unknown p3);
EXIResult EXIUnlock(int slotIndex);
uint EXIGetState(int slotIndex);
EXIResult EXIGetID(int slotIndex, unknown p2, u8* p3);

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif

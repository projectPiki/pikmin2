#ifndef _DOLPHIN_AMCEXI2STUBS_H
#define _DOLPHIN_AMCEXI2STUBS_H

#include "types.h"
#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

void EXI2_Init(s32, s32);
void EXI2_EnableInterrupts(void);
BOOL EXI2_Poll(void);
BOOL EXI2_ReadN(u8*, int);
BOOL EXI2_WriteN(u32, u32);
void EXI2_Reserve(void);
void EXI2_Unreserve(void);
BOOL AMC_IsStub(void);

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif

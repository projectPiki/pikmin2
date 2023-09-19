#ifndef _DOLPHIN_AI_H
#define _DOLPHIN_AI_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

// TODO: rest of header

typedef void (*AISCallback)(u32 count);
typedef void (*AIDCallback)();

/////////////// AI FUNCTIONS ///////////////
AIDCallback AIRegisterDMACallback(AIDCallback callback);
void AIInitDMA(u32 start_addr, u32 length);
BOOL AIGetDMAEnableFlag(void);
void AIStartDMA(void);
void AIStopDMA(void);
u32 AIGetDMABytesLeft(void);
u32 AIGetDMAStartAddr(void);
u32 AIGetDMALength(void);
u32 AIGetDSPSampleRate(void);
void AISetDSPSampleRate(u32 rate);
AISCallback AIRegisterStreamCallback(AISCallback callback);
u32 AIGetStreamSampleCount(void);
void AIResetStreamSampleCount(void);
void AISetStreamTrigger(u32 trigger);
u32 AIGetStreamTrigger(void);
void AISetStreamPlayState(u32 state);
u32 AIGetStreamPlayState(void);
void AISetStreamSampleRate(u32 rate);
u32 AIGetStreamSampleRate(void);
void AISetStreamVolLeft(u8 vol);
void AISetStreamVolRight(u8 vol);
u8 AIGetStreamVolLeft(void);
u8 AIGetStreamVolRight(void);
void AIInit(u8* stack);
BOOL AICheckInit(void);
void AIReset(void);

////////////////////////////////////////////

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif

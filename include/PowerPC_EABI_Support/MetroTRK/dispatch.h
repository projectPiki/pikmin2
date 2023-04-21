#ifndef _METROTRK_DISPATCH_H
#define _METROTRK_DISPATCH_H

#include "types.h"

typedef struct MessageBuffer {
	u8 filler[0x10];
	u8 commandId;
} MessageBuffer;

extern u32 TRKDoConnect(MessageBuffer*);
extern u32 TRKDoDisconnect(MessageBuffer*);
extern u32 TRKDoReset(MessageBuffer*);
extern u32 TRKDoOverride(MessageBuffer*);
extern u32 TRKDoReadMemory(MessageBuffer*);
extern u32 TRKDoWriteMemory(MessageBuffer*);
extern u32 TRKDoReadRegisters(MessageBuffer*);
extern u32 TRKDoWriteRegisters(MessageBuffer*);
extern u32 TRKDoSetOption(MessageBuffer*);
extern u32 TRKDoContinue(MessageBuffer*);
extern u32 TRKDoStep(MessageBuffer*);
extern u32 TRKDoStop(MessageBuffer*);
extern void SetBufferPosition(MessageBuffer*, u32);

#endif

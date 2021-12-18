#ifndef _DOLPHIN_DISPATCH_H
#define _DOLPHIN_DISPATCH_H
#include "types.h"
typedef struct MessageBuffer MessageBuffer, *PMessageBuffer;
struct MessageBuffer {
	char filler[0x14];
	u8 thing;
};
u32 TRKDoConnect(MessageBuffer*);
u32 TRKDoDisconnect(MessageBuffer*);
u32 TRKDoReset(MessageBuffer*);
u32 TRKDoVersions(MessageBuffer*);
u32 TRKDoSupportMask(MessageBuffer*);
u32 TRKDoOverride(MessageBuffer*);
u32 TRKDoReadMemory(MessageBuffer*);
u32 TRKDoWriteMemory(MessageBuffer*);
u32 TRKDoReadRegisters(MessageBuffer*);
u32 TRKDoWriteRegisters(MessageBuffer*);
u32 TRKDoSetOption(MessageBuffer*);
u32 TRKDoContinue(MessageBuffer*);
u32 TRKDoStep(MessageBuffer*);
u32 TRKDoStop(MessageBuffer*);
void MWTRACE(u8, char*, ...);
#endif

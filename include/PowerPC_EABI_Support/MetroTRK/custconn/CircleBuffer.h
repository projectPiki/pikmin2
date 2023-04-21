#ifndef TRK_CIRCLE_BUFFER_H
#define TRK_CIRCLE_BUFFER_H

#include "types.h"

typedef struct CircleBuffer {
	u8* unk0;
	u8* unk4;
	u8* unk8;
	u32 unkC;
	u32 mBytesToRead;
	u32 mBytesToWrite;
	uint mSection;
	u32 unk1C;
} CircleBuffer;

u32 CBGetBytesAvailableForRead(CircleBuffer* cb);
u32 CBGetBytesAvailableForWrite(CircleBuffer* cb);
void CircleBufferInitialize(CircleBuffer* cb, u8* buf, u32 size);
void CircleBufferTerminate(CircleBuffer* cb);
int CircleBufferWriteBytes(CircleBuffer* cb, u8* buf, u32 size);
int CircleBufferReadBytes(CircleBuffer* cb, u8* buf, u32 size);

#endif

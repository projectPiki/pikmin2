#ifndef _THP_THPREAD_H
#define _THP_THPREAD_H

#include "Dolphin/os.h"
#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

typedef struct THPReadBuffer {
	u32 _00;
} THPReadBuffer;

BOOL CreateReadThread(int);
void ReadThreadStart();
void ReadThreadCancel();
void Reader(void*);
OSMessage PopReadedBuffer();
BOOL PushReadedBuffer(OSMessage*);
OSMessage PopFreeReadBuffer();
BOOL PushFreeReadBuffer(OSMessage*);
OSMessage PopReadedBuffer2();
BOOL PushReadedBuffer2(OSMessage*);

extern BOOL ReadThreadCreated;
extern OSMessageQueue FreeReadBufferQueue;
extern OSMessageQueue ReadedBufferQueue;
extern OSMessageQueue ReadedBufferQueue2;
extern THPReadBuffer* FreeReadBufferMessage[10];
extern THPReadBuffer* ReadedBufferMessage[10];
extern THPReadBuffer* ReadedBufferMessage2[10];
extern OSThread ReadThread;

#ifdef __cplusplus
};
#endif

#endif

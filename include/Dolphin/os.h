#ifndef _DOLPHIN_OS_H
#define _DOLPHIN_OS_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

void OSReport(const char*, ...);
void OSPanic(const char*, int, const char*, ...);
#define OSError(...) OSPanic(__FILE__, __LINE__, __VA_ARGS__)

// TODO
typedef struct OSContext {
	char filler[708];
} OSContext;

typedef struct OSThread {
	char filler[708];
	char filler2[68];
} OSThread;

OSThread* OSGetCurrentThread(void);
int OSSuspendThread(OSThread* thread);

typedef struct OSMessageQueue {
	char filler[32];
} OSMessageQueue;
typedef void* OSMessage;

BOOL OSSendMessage(OSMessageQueue* queue, OSMessage message, int flags);

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
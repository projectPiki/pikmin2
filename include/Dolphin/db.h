#ifndef _DOLPHIN_DB_H
#define _DOLPHIN_DB_H

#include "types.h"

#define ExceptionHookDestination 0x80000048
#define IsDebuggerPresent        0x80000040

// static int __DBInterface;

struct DBInterface {
	u8 filler0[4];
	u32 unk4;
};

static struct DBInterface* __DBInterface;
static int DBVerbose;

void DBInit(void);
void DBInitComm(int* inputFlagPtr, int* mtrCallback);
static void __DBExceptionDestination(void);

#endif

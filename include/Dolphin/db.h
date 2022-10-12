#ifndef _DOLPHIN_DB_H
#define _DOLPHIN_DB_H

#include "types.h"
#include "Dolphin/os.h"
#include "Dolphin/AmcExi2Stubs.h"

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
void DBInitComm(vu8**, AmcEXICallback); // possibly not this type, but some similar construction

void DBInitInterrupts();
u32 DBQueryData();
BOOL DBRead(void*, u32);
BOOL DBWrite(const void*, u32);
void DBOpen();
void DBClose();

static void __DBExceptionDestination(void);
void DBPrintf(const char* format, ...);

#endif

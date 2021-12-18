#ifndef _DOLPHIN_DB_H
#define _DOLPHIN_DB_H

#include "types.h"

u32 ExceptionHookDestination : 0x80000048;
u32 IsDebuggerPresent : 0x80000040;
static int __DBInterface;
static int DBVerbose;
void DBInit(void);

#endif

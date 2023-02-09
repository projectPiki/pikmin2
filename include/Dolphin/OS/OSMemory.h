#ifndef _DOLPHIN_OS_OSMEMORY_H
#define _DOLPHIN_OS_OSMEMORY_H

#include "types.h"
#include "Dolphin/OS/OSContext.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

////////// PROTECT INFO //////////
// Protect function.
void OSProtectRange(u32 channel, void* addr, u32 numBytes, u32 control);

// Channels.
#define OS_PROTECT_CHAN0 0
#define OS_PROTECT_CHAN1 1
#define OS_PROTECT_CHAN2 2
#define OS_PROTECT_CHAN3 3

// Control codes.
#define OS_PROTECT_CONTROL_NONE  0x00
#define OS_PROTECT_CONTROL_READ  0x01 // Can read.
#define OS_PROTECT_CONTROL_WRITE 0x02 // Can write.
#define OS_PROTECT_CONTROL_RDWR  (OS_PROTECT_CONTROL_READ | OS_PROTECT_CONTROL_WRITE)

// DSISR bits for mem error handler.
#define OS_PROTECT0_BIT        0x00000001 // Channel 0.
#define OS_PROTECT1_BIT        0x00000002 // Channel 1.
#define OS_PROTECT2_BIT        0x00000004 // Channel 2.
#define OS_PROTECT3_BIT        0x00000008 // Channel 3.
#define OS_PROTECT_ADDRERR_BIT 0x00000010 // Other mem.

//////////////////////////////////

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif

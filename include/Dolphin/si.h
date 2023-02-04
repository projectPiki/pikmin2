#ifndef _DOLPHIN_SI_H
#define _DOLPHIN_SI_H

#include "types.h"
#include "Dolphin/os.h"

typedef void (*SICallback)(int chan, u32 sr, OSContext* context);

BOOL SITransfer(int, void*, int, void*, u32, SICallback, u32, u32);
u32 SIGetTypeAsync(u32 chanID, void*);

#endif
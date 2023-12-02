#ifndef _DOLPHIN_GXMISC_H
#define _DOLPHIN_GXMISC_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

#include "Dolphin/GX/GXEnum.h"
#include "Dolphin/GX/GXTypes.h"
#include "Dolphin/GX/GXFifo.h"
#include "Dolphin/OS/OSInterrupt.h"

//////////////// CALLBACKS /////////////////
typedef void (*GXDrawSyncCallback)(u16 token);
typedef void (*GXDrawDoneCallback)(void);

////////////////////////////////////////////

///////////// BASIC FUNCTIONS //////////////
static GXTexRegion* __GXDefaultTexRegionCallback(const GXTexObj* obj, GXTexMapID id);
static GXTlutRegion* __GXDefaultTlutRegionCallback(u32 tlut);
static BOOL __GXShutdown(BOOL final); // need to check types

////////////////////////////////////////////

////////////// INIT FUNCTIONS //////////////
extern GXFifoObj* GXInit(void* base, u32 size);
extern void __GXInitGX(); // need to check types
extern void __GXPEInit();

////////////////////////////////////////////

////////////// MISC FUNCTIONS //////////////
// Basic functions.
extern void GXSetMisc(GXMiscToken token, u32 val);
extern void GXFlush();
extern void __GXAbort(); // need to check types
extern void GXAbortFrame();

// Draw functions.
extern void GXSetDrawSync(u16 token);
extern void GXSetDrawDone();
extern void GXWaitDrawDone();
extern void GXDrawDone();

// Other syncs/interrupts.
extern void GXPixModeSync();
extern GXDrawSyncCallback GXSetDrawSyncCallback(GXDrawSyncCallback callback);
extern void GXTokenInterruptHandler(__OSInterrupt interrupt, OSContext* context);
extern GXDrawDoneCallback GXSetDrawDoneCallback(GXDrawDoneCallback callback);
extern void GXFinishInterruptHandler(__OSInterrupt interrupt, OSContext* context);

// Poke functions.
extern void GXPokeAlphaMode(GXCompare func, u8 threshold);
extern void GXPokeAlphaRead(GXAlphaReadMode mode);
extern void GXPokeAlphaUpdate(GXBool doUpdate);
extern void GXPokeBlendMode(GXBlendMode mode, GXBlendFactor srcFactor, GXBlendFactor destFactor, GXLogicOp op);
extern void GXPokeColorUpdate(GXBool doUpdate);
extern void GXPokeDstAlpha(GXBool doEnable, u8 alpha);
extern void GXPokeDither(GXBool doDither);
extern void GXPokeZMode(GXBool doCompare, GXCompare func, GXBool doUpdate);

// Unused/inlined in P2.
extern BOOL IsWriteGatherBufferEmpty();
extern void EnableWriteGatherPipe();
extern void DisableWriteGatherPipe();
extern void GXResetWriteGatherPipe();

extern void GXReadDrawSync();
extern void GXTexModeSync();

extern void GXPeekARGB(u16 x, u16 y, u32* color);
extern void GXPokeARGB(u16 x, u16 y, u32 color);
extern void GXPeekZ(u16 x, u16 y, u32* z);
extern void GXPokeZ(u16 x, u16 y, u32 z);

extern u32 GXCompressZ16(u32 z24, GXZFmt16 zFormat);
extern u32 GXDecompressZ16(u32 z16, GXZFmt16 zFormat);

////////////////////////////////////////////

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif

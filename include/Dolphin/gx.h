#ifndef _DOLPHIN_GX_H
#define _DOLPHIN_GX_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

void GXSetZMode(u32, u32, u32);
void GXSetBlendMode(u32, u32, u32, u32);
void GXSetNumTexGens(u32);
void GXSetNumChans(u32);
void GXSetNumTevStages(u32);
void GXSetTevOrder(u32, u32, u32, s32);
void GXSetTevOp(s32, s32);
void GXSetTevSwapMode(s32, u32, u32);
void GXSetTevSwapModeTable(s32, u32, u32, u32, u32);

void GXBeginDisplayList(void*, u32 dlSize);
u32 GXEndDisplayList(void);
void GXCallDisplayList(void*, u32 byteCnt);

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif

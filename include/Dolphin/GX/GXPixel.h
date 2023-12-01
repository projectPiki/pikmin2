#ifndef _DOLPHIN_GXPIXEL_H
#define _DOLPHIN_GXPIXEL_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

#include "Dolphin/GX/GXEnum.h"
#include "Dolphin/GX/GXTypes.h"
#include "Dolphin/mtx.h"

///////////// PIXEL FUNCTIONS //////////////
// Fog functions.
extern void GXSetFog(GXFogType type, f32 startZ, f32 endZ, f32 nearZ, f32 farZ, GXColor color);
extern void GXInitFogAdjTable(GXFogAdjTable* table, u16 width, const Mtx44 projMtx);
extern void GXSetFogRangeAdj(GXBool doEnable, u16 center, GXFogAdjTable* table);

// Blend functions.
extern void GXSetBlendMode(GXBlendMode type, GXBlendFactor srcFactor, GXBlendFactor destFactor, GXLogicOp op);

// Color update functions.
extern void GXSetColorUpdate(GXBool enableUpdate);
extern void GXSetAlphaUpdate(GXBool enableUpdate);

// Other setter functions.
extern void GXSetZMode(GXBool enableCompare, GXCompare func, GXBool enableUpdate);
extern void GXSetZCompLoc(GXBool isBeforeTex);
extern void GXSetPixelFmt(GXPixelFmt pixelFormat, GXZFmt16 zFormat);
extern void GXSetDither(GXBool doDither);
extern void GXSetDstAlpha(GXBool doEnable, u8 alpha);
extern void GXSetFieldMask(GXBool doOddMask, GXBool doEvenMask);
extern void GXSetFieldMode(GXBool doFieldMode, GXBool doHalfAspectRatio);

////////////////////////////////////////////

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif

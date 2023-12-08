#ifndef _DOLPHIN_GXTRANSFORM_H
#define _DOLPHIN_GXTRANSFORM_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

#include "Dolphin/GX/GXEnum.h"
#include "Dolphin/GX/GXTypes.h"
#include "Dolphin/mtx.h"

/////////// TRANSFORM FUNCTIONS ////////////
// Matrix and projection functions.
extern void GXSetProjection(const Mtx44 mtx, GXProjectionType type);
extern void GXSetProjectionv(const f32* ptr);
extern void GXLoadPosMtxImm(Mtx mtx, u32 id);
extern void GXLoadNrmMtxImm(Mtx mtx, u32 id);
extern void GXSetCurrentMtx(u32 id);
extern void GXLoadTexMtxImm(const Mtx mtx, u32 id, GXTexMtxType type);
extern void __GXSetMatrixIndex(GXAttr index);

// Viewport functions.
extern void __GXSetViewport(); // confirm types
extern void GXSetViewport(f32 left, f32 top, f32 width, f32 height, f32 nearZ, f32 farZ);

// Scissor/clip functions.
extern void GXSetScissor(u32 left, u32 top, u32 width, u32 height);
extern void GXSetScissorBoxOffset(s32 x, s32 y);
extern void GXGetScissor(u32* left, u32* top, u32* width, u32* height);
extern void GXGetScissorBoxOffset(int xOffset, int yOffset);
extern void GXSetClipMode(GXClipMode mode);

// Unused/inlined in P2.
extern void GXProject(f32 x, f32 y, f32 z, Mtx viewMtx, f32* projMtx, f32* viewport, f32* screenX, f32* screenY, f32* screenZ);
extern void GXGetProjectionv(f32* ptr);
extern void GXLoadPosMtxIndx(u16 index, u32 id);
extern void GXLoadNrmMtxImm3x3(Mtx33, u32 id);
extern void GXLoadNrmMtxIndx3x3(u16 index, u32 id);
extern void GXLoadTexMtxIndx(u16 index, u32 id, GXTexMtxType type);
extern void GXSetViewportJitter(f32 left, f32 top, f32 width, f32 height, f32 nearZ, f32 farZ, u32 field);
extern void GXGetViewportv(f32* viewport);

////////////////////////////////////////////

////////////// USEFUL EXTRAS ///////////////
#define GX_PROJECTION_SZ 7
#define GX_VIEWPORT_SZ   6

static inline void GXSetViewportv(f32* port) { GXSetViewport(port[0], port[1], port[2], port[3], port[4], port[5]); }

////////////////////////////////////////////

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif

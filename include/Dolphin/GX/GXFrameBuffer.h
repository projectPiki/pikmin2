#ifndef _DOLPHIN_GXFRAMEBUFFER_H
#define _DOLPHIN_GXFRAMEBUFFER_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

#include "Dolphin/GX/GXEnum.h"
#include "Dolphin/GX/GXTypes.h"

///////////// RENDER MODE OBJS /////////////
// NB: commented out objects are unused in P2.
// extern GXRenderModeObj GXNtsc240Ds;
// extern GXRenderModeObj GXNtsc240DsAa;
// extern GXRenderModeObj GXNtsc240Int;
// extern GXRenderModeObj GXNtsc240IntAa;
extern GXRenderModeObj GXNtsc480IntDf;
extern GXRenderModeObj GXNtsc480Int;
// extern GXRenderModeObj GXNtsc480IntAa;
// extern GXRenderModeObj GXNtsc480Prog;
// extern GXRenderModeObj GXNtsc480ProgAa;
// extern GXRenderModeObj GXMpal240Ds;
// extern GXRenderModeObj GXMpal240DsAa;
// extern GXRenderModeObj GXMpal240Int;
// extern GXRenderModeObj GXMpal240IntAa;
extern GXRenderModeObj GXMpal480IntDf;
extern GXRenderModeObj GXMpal480Int;
// extern GXRenderModeObj GXMpal480IntAa;
// extern GXRenderModeObj GXPal264Ds;
// extern GXRenderModeObj GXPal264DsAa;
// extern GXRenderModeObj GXPal264Int;
// extern GXRenderModeObj GXPal264IntAa;
extern GXRenderModeObj GXPal528IntDf;
// extern GXRenderModeObj GXPal528Int;
// extern GXRenderModeObj GXPal524IntAa;
// extern GXRenderModeObj GXEurgb60Hz240Ds;
// extern GXRenderModeObj GXEurgb60Hz240DsAa;
// extern GXRenderModeObj GXEurgb60Hz240Int;
// extern GXRenderModeObj GXEurgb60Hz240IntAa;
extern GXRenderModeObj GXEurgb60Hz480IntDf;
// extern GXRenderModeObj GXEurgb60Hz480Int;
// extern GXRenderModeObj GXEurgb60Hz480IntAa;
// extern GXRenderModeObj GXRmHW;

////////////////////////////////////////////

///////////// BUFFER FUNCTIONS /////////////
// Source/dest copy-set functions.
extern void GXSetDispCopySrc(u16 left, u16 top, u16 width, u16 height);
extern void GXSetTexCopySrc(u16 left, u16 top, u16 width, u16 height);
extern void GXSetDispCopyDst(u16 width, u16 height);
extern void GXSetTexCopyDst(u16 width, u16 height, GXTexFmt format, GXBool useMIPmap);

// Other copy-set functions.
extern void GXSetDispCopyFrame2Field(GXCopyMode mode);
extern void GXSetCopyClamp(GXFBClamp clamp);
extern u32 GXSetDispCopyYScale(f32 vertScale);
extern void GXSetCopyClear(GXColor clearColor, u32 clearZ);
extern void GXSetCopyFilter(GXBool useAA, u8 samplePattern[12][2], GXBool doVertFilt, u8 vFilt[7]);
extern void GXSetDispCopyGamma(GXGamma gamma);

// Copy data functions.
extern void GXCopyDisp(void* dest, GXBool doClear);
extern void GXCopyTex(void* dest, GXBool doClear);

// Get functions.
extern u16 GXGetNumXfbLines(u16 efbHeight, f32 yScale);
extern f32 GXGetYScaleFactor(u16 efbHeight, u16 xfbHeight);

// Clear functions.
extern void GXClearBoundingBox();

// Unused/inlined in P2.
extern void GXAdjustForOverscan(GXRenderModeObj* rIn, GXRenderModeObj* rOut, u16 horiz, u16 vert);
extern void GXReadBoundingBox(u16* left, u16* top, u16* right, u16* bottom);

////////////////////////////////////////////

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif

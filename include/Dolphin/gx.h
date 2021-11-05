#ifndef _DOLPHIN_GX_H
#define _DOLPHIN_GX_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

// Names are guessed
typedef enum _SDK_GXFogType {
	GX_FOG_NONE       = 0,
	GX_FOG_LINEAR     = 2,
	GX_FOG_EXPONENT   = 4,
	GX_FOG_EXPONENT2  = 5,
	GX_FOG_REVERSEEXP = 6,
	GX_FOG_REVERSEXP2 = 7
} GXFogType;

typedef struct _SDK_GXColor {
	u8 r, g, b, a;
} GXColor;

typedef struct _SDK_GXFogAdjTable {
	u16 _00[10];
} GXFogAdjTable;

typedef enum _SDK_GXCompare {
	GX_NEVER,
	GX_LESS,
	GX_EQUAL,
	GX_LTEQUAL,
	GX_GREATER,
	GX_NTEQUAL,
	GX_GTEQUAL,
	GX_ALWAYS
} GXCompare;

typedef enum _SDK_GXBlendMode {
	GX_BM_NONE,
	GX_BM_BLEND,
	GX_BM_LOGIC,
	GX_BM_SUBTRACT,
	GX_MAX_BLENDMODE
} GXBlendMode;

typedef enum _SDK_GXBlendFactor {
	GX_BL_ZERO,
	GX_BL_ONE,
	GX_BL_SRCCOL,
	GX_BL_DSTCOL = GX_BL_SRCCOL,
	GX_BL_INVSRCCOL,
	GX_BL_INVDSTCOL = GX_BL_INVSRCCOL,
	GX_BL_SRCALPHA,
	GX_BL_INVSRCALPHA,
	GX_BL_DSTALPHA,
	GX_BL_INVDSTALPHA,
} GXBlendFactor;

typedef enum _SDK_GXLogicOp {
	GX_LO_CLEAR,
	GX_LO_AND,
	GX_LO_REVAND,
	GX_LO_COPY,
	GX_LO_INVAND,
	GX_LO_NOOP,
	GX_LO_XOR,
	GX_LO_OR,
	GX_LO_NOR,
	GX_LO_EQUIV,
	GX_LO_INV,
	GX_LO_REVOR,
	GX_LO_INVCOPY,
	GX_LO_INVOR,
	GX_LO_NAND,
	GX_LO_SET
} GXLogicOp;

typedef enum _SDK_GXPixelFmt {
	GX_PF_RGB8_Z24,
	GX_PF_RGBA6_Z24,
	GX_PF_RGB565_Z16,
	GX_PF_Z24,
	GX_PF_Y8,
	GX_PF_U8,
	GX_PF_V8,
	GX_PF_YUV420
} GXPixelFmt;

typedef enum { VI_XFBMODE_SF = 0, VI_XFBMODE_DF } VIXFBMode;

#define VI_DISPLAY_PIX_SZ 2

#define VI_INTERLACE     0
#define VI_NON_INTERLACE 1
#define VI_PROGRESSIVE   2

#define VI_NTSC      0
#define VI_PAL       1
#define VI_MPAL      2
#define VI_DEBUG     3
#define VI_DEBUG_PAL 4
#define VI_EURGB60   5

#define VI_TVMODE(FMT, INT) (((FMT) << 2) + (INT))

typedef enum {
	VI_TVMODE_NTSC_INT  = VI_TVMODE(VI_NTSC, VI_INTERLACE),
	VI_TVMODE_NTSC_DS   = VI_TVMODE(VI_NTSC, VI_NON_INTERLACE),
	VI_TVMODE_NTSC_PROG = VI_TVMODE(VI_NTSC, VI_PROGRESSIVE),

	VI_TVMODE_PAL_INT = VI_TVMODE(VI_PAL, VI_INTERLACE),
	VI_TVMODE_PAL_DS  = VI_TVMODE(VI_PAL, VI_NON_INTERLACE),

	VI_TVMODE_EURGB60_INT = VI_TVMODE(VI_EURGB60, VI_INTERLACE),
	VI_TVMODE_EURGB60_DS  = VI_TVMODE(VI_EURGB60, VI_NON_INTERLACE),

	VI_TVMODE_MPAL_INT = VI_TVMODE(VI_MPAL, VI_INTERLACE),
	VI_TVMODE_MPAL_DS  = VI_TVMODE(VI_MPAL, VI_NON_INTERLACE),

	VI_TVMODE_DEBUG_INT = VI_TVMODE(VI_DEBUG, VI_INTERLACE),

	VI_TVMODE_DEBUG_PAL_INT = VI_TVMODE(VI_DEBUG_PAL, VI_INTERLACE),
	VI_TVMODE_DEBUG_PAL_DS  = VI_TVMODE(VI_DEBUG_PAL, VI_NON_INTERLACE)
} VITVMode;

typedef struct _GXRenderModeObj {
	VITVMode viTVmode;
	u16 fbWidth;
	u16 efbHeight;
	u16 xfbHeight;
	u16 viXOrigin;
	u16 viYOrigin;
	u16 viWidth;
	u16 viHeight;
	VIXFBMode xFBmode;

	u8 field_rendering;
	u8 aa;
	u8 sample_pattern[12][2];
	u8 vfilter[7];
} GXRenderModeObj;

typedef enum _SDK_GXZFmt16 {
	GX_ZC_LINEAR,
	GX_ZC_NEAR,
	GX_ZC_MID,
	GX_ZC_FAR
} GXZFmt16;

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

void GXSetFog(GXFogType type, void* data, float, float, float nearz,
              float farz);

void GXInitFogAdjTable(GXFogAdjTable* table, u16 width, f32 projmtx[4][4]);

void GXSetFogRangeAdj(BOOL enable, u16 center, GXFogAdjTable* table);

void GXSetBlendMode(GXBlendMode type, GXBlendFactor src_factor,
                    GXBlendFactor dst_factor, GXLogicOp op);

void GXSetColorUpdate(BOOL update_enable);
void GXSetAlphaUpdate(BOOL update_enable);
void GXSetZMode(BOOL compare_enable, GXCompare func, BOOL update_enable);

void GXSetZCompLoc(BOOL before_tex);
void GXSetPixelFmt(GXPixelFmt pix_fmt, GXZFmt16 z_fmt);
void GXSetDither(BOOL dither);
void GXSetDstAlpha(BOOL enable, u8 alpha);
void GXSetFieldMask(BOOL odd_mask, BOOL even_mask);
void GXSetFieldMode(BOOL field_mode, BOOL half_aspect_ratio);

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif

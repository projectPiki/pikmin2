#ifndef _DOLPHIN_GX_H
#define _DOLPHIN_GX_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

#include "Dolphin/vi.h"
#include "Dolphin/mtx.h"

typedef u8 GXBool;

/********************************/
#define GX_TRUE    ((GXBool)1)
#define GX_FALSE   ((GXBool)0)
#define GX_ENABLE  ((GXBool)1)
#define GX_DISABLE ((GXBool)0)

// TODO: Replace(?) this block of typedefs. They're just placeholders for now.
typedef i32 GXCullMode;
typedef i32 _GXVtxAttrFmtList;

// Name of the vertex attribute or array. Attributes are listed in the ascending
// order vertex data is required to be sent to the GP. Havent confirmed the GX
// docs match pikmin 2 here
typedef enum _GXAttr {
	GX_VA_PNMTXIDX,   // Position coordinate/normal matrix index.
	GX_VA_TEX0MTXIDX, // GX_TXCOORD0 matrix index.
	GX_VA_TEX1MTXIDX, // GX_TXCOORD1 matrix index.
	GX_VA_TEX2MTXIDX, // GX_TXCOORD2 matrix index.
	GX_VA_TEX3MTXIDX, // GX_TXCOORD3 matrix index.
	GX_VA_TEX4MTXIDX, // GX_TXCOORD4 matrix index.
	GX_VA_TEX5MTXIDX, // GX_TXCOORD5 matrix index.
	GX_VA_TEX6MTXIDX, // GX_TXCOORD6 matrix index.
	GX_VA_TEX7MTXIDX, // GX_TXCOORD7 matrix index.
	GX_VA_POS,        // Position coordinates.
	GX_VA_NRM,        // Normal.
	// GX_VA_NBT,		//Set of normal, binormal and tangent.
	GX_VA_CLR0,       // Color 0.
	GX_VA_CLR1,       // Color 1.
	GX_VA_TEX0,       // Texture coordinate 0.
	GX_VA_TEX1,       // Texture coordinate 1.
	GX_VA_TEX2,       // Texture coordinate 2.
	GX_VA_TEX3,       // Texture coordinate 3.
	GX_VA_TEX4,       // Texture coordinate 4.
	GX_VA_TEX5,       // Texture coordinate 5.
	GX_VA_TEX6,       // Texture coordinate 6.
	GX_VA_TEX7,       // Texture coordinate 7.
	GX_POS_MTX_ARRAY, // Position coordinates matrix array.
	GX_NRM_MTX_ARRAY, // Normal matrix array.
	GX_TEX_MTX_ARRAY, // Texture matrix array.
	GX_LIGHT_ARRAY,   // Light structure array.
	GX_VA_MAX_ATTR,
	GX_VA_NULL // Indicates that it is none of these data types.
} GXAttr;

// Type of attribute reference.
// Havent confirmed the GX docs match pikmin 2 here
typedef enum _GXAttrType {
	GX_NONE,   // No data to be sent.
	GX_DIRECT, // Value sent is value of data.
	GX_INDEX8, // Value sent is INDEX value of data array (8-bit).
	GX_INDEX16 // Value sent is INDEX value of data array (16-bit).
} GXAttrType;

/*
 * RGB, RGBA, Intensity, Intensity/Alpha, Compressed, and Z texture format
 * types. See GXCITexFmt for information on color index formats. The CTF format
 * is used only by the GXSetTexCopyDst function to specify how data is copied
 * out of the EFB into a texture in main memory. In order to actually use that
 * texture, you must specify a non-copy format of matching size. For example, if
 * copying using GX_CTF_RG8, you would apply the resulting texture using
 * GX_TF_IA8.
 */
// Havent confirmed the GX docs match pikmin 2 here
// clang-format off
typedef enum _GXTexFmt {
	GX_TF_I4,		// 4-bit intensity
	GX_TF_I8,		// 8-bit intensity
	GX_TF_IA4,		// 8-bit intensity + alpha (4+4).
	GX_TF_IA8,		// 16-bit intensity + alpha (8+8).
	GX_TF_RGB565,	// 16-bit RGB.
	GX_TF_RGB5A3,	// When MSB=1, RGB555 format (opaque), and when MSB=0, RGBA4443 format (transparent).
	GX_TF_RGBA8,	// 32-bit RGB.
	GX_TF_CMPR,		// Compressed 4-bit texel.
	GX_TF_Z8,		// Unsigned 8-bit Z. For texture copies, specify the upper 8 bits of Z.
	GX_TF_Z16,		// Unsigned 16-bit Z. For texture copies, specify the upper 16 bits of Z.
	GX_TF_Z24X8,	// Unsigned 24-bit (32-bit texture) Z. For texture copies, copy the 24-bit Z and 0xff.
	GX_CTF_R4,		// 4-bit red. For copying 4 bits from red.
	GX_CTF_RA4,		// 4-bit red + 4-bit alpha. For copying 4 bits from red, 4 bits from alpha.
	GX_CTF_RA8,		// 8-bit red + 8-bit alpha. For copying 8 bits from red, 8 bits from alpha.
	GX_CTF_A8,		// 8-bit alpha. For copying 8 bits from alpha.
	GX_CTF_R8,		// 8-bit red. For copying 8 bits from red.
	GX_CTF_G8,		// 8-bit green. For copying 8 bits from green.
	GX_CTF_B8,		// 8-bit blue. For copying 8 bits from blue.
	GX_CTF_RG8,		// 8-bit red +8-bit green. For copying 8 bits from red, 8 bits from green.
	GX_CTF_GB8,		// 8-bit green +8-bit blue. For copying 8 bits from green, 8 bits from blue.
	GX_CTF_Z4,		// 4-bit Z. For copying the 4 upper bits from Z.
	GX_CTF_Z8M,		// 8-bit Z (median byte). For copying the middle 8 bits of Z.
	GX_CTF_Z8L,		// 8-bit Z (lower byte). For copying the lower 8 bits of Z.
	GX_CTF_Z16L		// 16-bit Z (lower portion). For copying the lower 16 bits of Z.
} GXTexFmt;
// clang-format on

// Texture map name.
// Havent confirmed the GX docs match pikmin 2 here
typedef enum _GXTexMapID {
	GX_TEXMAP0, // Texture map ID 0.
	GX_TEXMAP1, // Texture map ID 1.
	GX_TEXMAP2, // Texture map ID 2.
	GX_TEXMAP3, // Texture map ID 3.
	GX_TEXMAP4, // Texture map ID 4.
	GX_TEXMAP5, // Texture map ID 5.
	GX_TEXMAP6, // Texture map ID 6.
	GX_TEXMAP7, // Texture map ID 7.
	GX_MAX_TEXMAP,
	GX_TEXMAP_NULL, // No textures used.
	GX_TEX_DISABLE  // No texture map look-up.
} GXTexMapID;

// Vertex format number.
// Havent confirmed the GX docs match pikmin 2 here
typedef enum _GXVtxFmt {
	GX_VTXFMT0, // Vertex attribute format ID 0.
	GX_VTXFMT1, // Vertex attribute format ID 1.
	GX_VTXFMT2, // Vertex attribute format ID 2.
	GX_VTXFMT3, // Vertex attribute format ID 3.
	GX_VTXFMT4, // Vertex attribute format ID 4.
	GX_VTXFMT5, // Vertex attribute format ID 5.
	GX_VTXFMT6, // Vertex attribute format ID 6.
	GX_VTXFMT7, // Vertex attribute format ID 7.
	GX_MAX_VTXFMT
} GXVtxFmt;

// Number of components in an attribute.
// Havent confirmed the GX docs match pikmin 2 here
typedef enum _GXCompCnt {
	GX_POS_XY,   // Position X, Y (two components).
	GX_POS_XYZ,  // Position X, Y, Z (three components).
	GX_NRM_XYZ,  // Normal X, Y, Z (three components).
	GX_NRM_NBT,  // Normal, binormal, tangent (three components).
	GX_NRM_NBT3, // Normal, binormal, tangent (three components). Use when NBT
	             // normal is indexed independently.
	GX_CLR_RGB,  // RGB (three components).
	GX_CLR_RGBA, // RGBA (four components).
	GX_TEX_S,    // Texture coordinate S (one component).
	GX_TEX_ST    // Texture coordinates S, T (two components).
} GXCompCnt;

// Type of components in an attribute.
// Havent confirmed the GX docs match pikmin 2 here
typedef enum _GXCompType {
	GX_U8,     // Unsigned 8-bit.
	GX_S8,     // Signed 8-bit.
	GX_U16,    // Unsigned 16-bit.
	GX_S16,    // Signed 16-bit.
	GX_F32,    // Floating-point 32-bit.
	GX_RGB565, // RGB565 16-bit.
	GX_RGB8,   // RGB888 24-bit.
	GX_RGBX8,  // RGB888x 32-bit.
	GX_RGBA4,  // RGBA4444 16-bit.
	GX_RGBA6,  // RGBA6666 24-bit.
	GX_RGBA8   // RGBA8888 32-bit.
} GXCompType;

// Names are guessed
typedef enum _SDK_GXFogType {
	GX_FOG_NONE   = 0,     // No fog.
	GX_FOG_LINEAR = 2,     // Use linear fog density function.
	                       // For perspective projection mode.
	GX_FOG_EXPONENT = 4,   // Use the exponential fog density function.
	                       // For perspective projection mode.
	GX_FOG_EXPONENT2 = 5,  // Use the exponential-squared fog density function.
	                       // For perspective projection mode.
	GX_FOG_REVERSEEXP = 6, // Use the inverse exponential fog density function.
	                       // For perspective projection mode.
	GX_FOG_REVERSEXP2 = 7, // Use the inverse exponential-squared fog density
	                       // function. For perspective projection mode.
	_FORCE_UINT = 0xFFFFFFFF
} GXFogType;

typedef struct _SDK_GXColor {
	u8 r, g, b, a;
} GXColor;

typedef struct _SDK_GXColorS10 {
	u16 r, g, b, a;
} GXColorS10;

typedef struct _SDK_GXFogAdjTable {
	u16 _00[10];
} GXFogAdjTable;

// Compare types.
typedef enum _SDK_GXCompare {
	GX_NEVER,   // Always false.
	GX_LESS,    //<
	GX_EQUAL,   //=
	GX_LTEQUAL, //<=
	GX_GREATER, //>
	GX_NTEQUAL, //!=
	GX_GTEQUAL, //>=
	GX_ALWAYS   // Always true.
} GXCompare;

// Blending type.
typedef enum _SDK_GXBlendMode {
	GX_BM_NONE,     // No blending.
	GX_BM_BLEND,    // Blending.
	GX_BM_LOGIC,    // Logic operations.
	GX_BM_SUBTRACT, // Subtractive blending.
	GX_MAX_BLENDMODE
} GXBlendMode;

// Blending controls.
typedef enum _SDK_GXBlendFactor {
	GX_BL_ZERO, // 0.0
	GX_BL_ONE,  // 1.0
	GX_BL_SRCCOL,
	GX_BL_DSTCOL = GX_BL_SRCCOL, // Frame buffer color, Source color
	GX_BL_INVSRCCOL,
	GX_BL_INVDSTCOL
	= GX_BL_INVSRCCOL, // 1.0 - (Frame buffer color), 1.0 - (Source color)
	GX_BL_SRCALPHA,    // Source alpha
	GX_BL_INVSRCALPHA, // 1.0 - (Source alpha)
	GX_BL_DSTALPHA,    // Frame buffer alpha
	GX_BL_INVDSTALPHA, // 1.0 - (Frame buffer alpha)
} GXBlendFactor;

// Logical operation types.
// Source is the input coefficient and Destination is the output coefficient.
typedef enum _SDK_GXLogicOp {
	GX_LO_CLEAR,   // 0x00
	GX_LO_AND,     // Source & Destination
	GX_LO_REVAND,  // Source & ~Destination
	GX_LO_COPY,    // Source
	GX_LO_INVAND,  //~Source & Destination
	GX_LO_NOOP,    // Destination
	GX_LO_XOR,     // Source ^ Destination
	GX_LO_OR,      // Source | Destination
	GX_LO_NOR,     //~(Source | Destination)
	GX_LO_EQUIV,   //~(Source ^ Destination)
	GX_LO_INV,     //~Destination
	GX_LO_REVOR,   // Source | ~Destination
	GX_LO_INVCOPY, //~Source
	GX_LO_INVOR,   //~Source | Destination
	GX_LO_NAND,    //~(Source & Destination)
	GX_LO_SET      // 0xff
} GXLogicOp;

// Frame buffer pixel formats
typedef enum _SDK_GXPixelFmt {
	GX_PF_RGB8_Z24,   // Non-antialiased (RGB 888).
	GX_PF_RGBA6_Z24,  // Non-antialiased (RGBA 6666).
	GX_PF_RGB565_Z16, // Anti-aliasing.
	GX_PF_Z24,
	GX_PF_Y8,
	GX_PF_U8,
	GX_PF_V8,
	GX_PF_YUV420
} GXPixelFmt;

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

// Compressed Z format
typedef enum _SDK_GXZFmt16 {
	GX_ZC_LINEAR, // 16-bit linear.
	GX_ZC_NEAR,   // Compressed format (14e2) for smaller far/near ratio.
	GX_ZC_MID,    // Compressed format (13e3) for medium far/near ratio.
	GX_ZC_FAR     // Compressed format (12e4) for large far/near ratio.
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

void GXSetFogRangeAdj(GXBool enable, u16 center, GXFogAdjTable* table);

void GXSetBlendMode(GXBlendMode type, GXBlendFactor src_factor,
                    GXBlendFactor dst_factor, GXLogicOp op);

void GXSetColorUpdate(GXBool update_enable);
void GXSetAlphaUpdate(GXBool update_enable);
void GXSetZMode(GXBool compare_enable, GXCompare func, GXBool update_enable);

void GXSetZCompLoc(GXBool before_tex);
void GXSetPixelFmt(GXPixelFmt pix_fmt, GXZFmt16 z_fmt);
void GXSetDither(GXBool dither);
void GXSetDstAlpha(GXBool enable, u8 alpha);
void GXSetFieldMask(GXBool odd_mask, GXBool even_mask);
void GXSetFieldMode(GXBool field_mode, GXBool half_aspect_ratio);

#define GX_FIFO_OBJ_SIZE 128

typedef struct {
	u8 pad[GX_FIFO_OBJ_SIZE];
} GXFifoObj;

void GXInitFifoBase(GXFifoObj* fifo, void* base, u32 size);
void GXInitFifoPtrs(GXFifoObj* fifo, void* readPtr, void* writePtr);
void GXInitFifoLimits(GXFifoObj* fifo, u32 hiWaterMark, u32 loWaterMark);
void GXSaveCPUFifo(GXFifoObj* fifo);

void GXGetGPStatus(GXBool* overhi, GXBool* underlow, GXBool* readIdle,
                   GXBool* cmdIdle, GXBool* brkpt);

void GXSetCPUFifo(GXFifoObj* fifo);
void GXSetGPFifo(GXFifoObj* fifo);
void GXSaveCPUFifo(GXFifoObj* fifo);
void GXSaveGPFifo(GXFifoObj* fifo);

void GXSetProjection(Mtx, u32);

typedef u8 _GXTlut;
typedef u8 _GXTlutFmt;

/*
 * Names of texture lookup tables (TLUTs) in texture memory.
 * Each table GX_TLUT0 through GX_TLUT15 contains 256 entries, at 16 bits per
 * entry. Each table GX_BIGTLUT0 through BIGTLUT3 contains 1024 entries, at 16
 * bits per entry. Used for setting texture memory in the GXInit function.
 */
typedef enum GXTlut {
	GX_TLUT0, // TLUT (256 16-bit entries) ID 0.
	GX_TLUT1,
	GX_TLUT2,
	GX_TLUT3,
	GX_TLUT4,
	GX_TLUT5,
	GX_TLUT6,
	GX_TLUT7,
	GX_TLUT8,
	GX_TLUT9,
	GX_TLUT10,
	GX_TLUT11,
	GX_TLUT12,
	GX_TLUT13,
	GX_TLUT14,
	GX_TLUT15,
	GX_BIGTLUT0, // BIGTLUT (1024 16-bit entries) ID 0.
	GX_BIGTLUT1,
	GX_BIGTLUT2,
	GX_BIGTLUT3
} GXTlut;

// Texture lookup table (TLUT) formats.
typedef enum GXTlutFmt {
	GX_TL_IA8,    // 16-bit intensity + alpha (8I+8A).
	GX_TL_RGB565, // 16-bit RGB (R5+G6+B5).
	GX_TL_RGB5A3 // When MSB=1, RGB555 format (opaque), and when MSB=0, RGBA4443
	             // format (transparent).
} GXTlutFmt;

typedef struct GXTlutObj {
	u32 _00; // _00
	u32 _04; // _04
	u16 _08; // _08
} GXTlutObj;

// TODO: Figure this out
typedef struct GXTlutRegion {
	u32 _00;     // _00
	u8 _04[0xC]; // _04
} GXTlutRegion;

typedef GXTlutRegion* GXTlutRegionCallback(_GXTlut);

void GXInitTlutObj(GXTlutObj*, const u8*, _GXTlutFmt, u16);
// TODO: Params aren't fully worked out yet.
void GXInitTlutRegion(u32*, int, i32);
void GXLoadTlut(GXTlutObj*, _GXTlut);
void GXSetTlutRegionCallback(GXTlutRegionCallback*);

GXTlutRegion* __GXDefaultTlutRegionCallback(_GXTlut);

void GXLoadPosMtxImm(Mtx, int);
void GXLoadNrmMtxImm(Mtx, int);

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif

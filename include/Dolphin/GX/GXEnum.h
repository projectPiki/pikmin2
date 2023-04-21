#ifndef _DOLPHIN_GXENUM_H
#define _DOLPHIN_GXENUM_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

////////////////// BASICS //////////////////
// Set up custom GX bool
typedef u8 GXBool;

#define GX_TRUE    ((GXBool)1)
#define GX_FALSE   ((GXBool)0)
#define GX_ENABLE  ((GXBool)1)
#define GX_DISABLE ((GXBool)0)

// Logical comparison operators.
typedef enum _GXCompare {
	GX_NEVER   = 0, // never true
	GX_LESS    = 1, // <
	GX_EQUAL   = 2, // ==
	GX_LEQUAL  = 3, // <=
	GX_GREATER = 4, // >
	GX_NEQUAL  = 5, // !=
	GX_GEQUAL  = 6, // >=
	GX_ALWAYS  = 7, // always true
} GXCompare;
typedef GXCompare _SDK_GXCompare;

// Logical operation types.
// Source is the input coefficient and Destination is the output coefficient.
typedef enum _GXLogicOp {
	GX_LO_CLEAR   = 0,  // 0x00
	GX_LO_AND     = 1,  // Source & Destination
	GX_LO_REVAND  = 2,  // Source & ~Destination
	GX_LO_COPY    = 3,  // Source
	GX_LO_INVAND  = 4,  //~Source & Destination
	GX_LO_NOOP    = 5,  // Destination
	GX_LO_XOR     = 6,  // Source ^ Destination
	GX_LO_OR      = 7,  // Source | Destination
	GX_LO_NOR     = 8,  //~(Source | Destination)
	GX_LO_EQUIV   = 9,  //~(Source ^ Destination)
	GX_LO_INV     = 10, //~Destination
	GX_LO_REVOR   = 11, // Source | ~Destination
	GX_LO_INVCOPY = 12, //~Source
	GX_LO_INVOR   = 13, //~Source | Destination
	GX_LO_NAND    = 14, //~(Source & Destination)
	GX_LO_SET     = 15, // 0xff
} GXLogicOp;

typedef GXLogicOp _SDK_GXLogicOp;

// Primitive types.
typedef enum _GXPrimitive {
	GX_POINTS        = 0xB8,
	GX_LINES         = 0xA8,
	GX_LINESTRIP     = 0xB0,
	GX_TRIANGLES     = 0x90,
	GX_TRIANGLESTRIP = 0x98,
	GX_TRIANGLEFAN   = 0xa0,
	GX_QUADS         = 0x80,
} GXPrimitive;

// Position-normal matrix sizes/types.
typedef enum _GXPosNrmMtx {
	GX_PNMTX0 = 3 * 0, // 0
	GX_PNMTX1 = 3 * 1, // 3
	GX_PNMTX2 = 3 * 2, // 6
	GX_PNMTX3 = 3 * 3, // 9
	GX_PNMTX4 = 3 * 4, // 12
	GX_PNMTX5 = 3 * 5, // 15
	GX_PNMTX6 = 3 * 6, // 18
	GX_PNMTX7 = 3 * 7, // 21
	GX_PNMTX8 = 3 * 8, // 24
	GX_PNMTX9 = 3 * 9, // 27
} GXPosNrmMtx;

// Command display list opcodes.
typedef enum _GXCommand {
	GX_CMD_LOAD_INDX_A = 0x20,
	GX_CMD_LOAD_INDX_B = 0x28,
	GX_CMD_LOAD_INDX_C = 0x30,
	GX_CMD_LOAD_INDX_D = 0x38,

	GX_CMD_LOAD_BP_REG = 0x61,
	GX_CMD_LOAD_CP_REG = 0x08,
	GX_CMD_LOAD_XF_REG = 0x10,

	GX_CMD_CALL_DL = 0x40,
	GX_CMD_INVL_VC = 0x48,

	GX_CMD_NOP                 = 0x00,
	GX_CMD_DRAW_QUADS          = 0x80,
	GX_CMD_DRAW_TRIANGLES      = 0x90,
	GX_CMD_DRAW_TRIANGLE_STRIP = 0x98,
	GX_CMD_DRAW_TRIANGLE_FAN   = 0xA0,
	GX_CMD_DRAW_LINES          = 0xA8,
	GX_CMD_DRAW_LINE_STRIP     = 0xB0,
	GX_CMD_DRAW_POINTS         = 0xB8,
} GXCommand;

#define GX_OPCODE_MASK 0xF8
#define GX_VAT_MASK    0x07

////////////////////////////////////////////

//////////////// ATTRIBUTES ////////////////
// Name of the vertex attribute or array. Attributes are listed in the ascending
// order vertex data is required to be sent to the GP.
// NB: havent confirmed the GX docs match pikmin 2 here
typedef enum _GXAttr {
	GX_VA_PNMTXIDX   = 0, // Position coordinate/normal matrix index.
	GX_VA_TEX0MTXIDX = 1, // GX_TXCOORD0 matrix index.
	GX_VA_TEX1MTXIDX = 2, // GX_TXCOORD1 matrix index.
	GX_VA_TEX2MTXIDX = 3, // GX_TXCOORD2 matrix index.
	GX_VA_TEX3MTXIDX = 4, // GX_TXCOORD3 matrix index.
	GX_VA_TEX4MTXIDX = 5, // GX_TXCOORD4 matrix index.
	GX_VA_TEX5MTXIDX = 6, // GX_TXCOORD5 matrix index.
	GX_VA_TEX6MTXIDX = 7, // GX_TXCOORD6 matrix index.
	GX_VA_TEX7MTXIDX = 8, // GX_TXCOORD7 matrix index.

	GX_VA_POS  = 9,  // Position coordinates.
	GX_VA_NRM  = 10, // Normal.
	GX_VA_CLR0 = 11, // Color 0.
	GX_VA_CLR1 = 12, // Color 1.
	GX_VA_TEX0 = 13, // Texture coordinate 0.
	GX_VA_TEX1 = 14, // Texture coordinate 1.
	GX_VA_TEX2 = 15, // Texture coordinate 2.
	GX_VA_TEX3 = 16, // Texture coordinate 3.
	GX_VA_TEX4 = 17, // Texture coordinate 4.
	GX_VA_TEX5 = 18, // Texture coordinate 5.
	GX_VA_TEX6 = 19, // Texture coordinate 6.
	GX_VA_TEX7 = 20, // Texture coordinate 7.

	GX_POS_MTX_ARRAY = 21, // Position coordinates matrix array.
	GX_NRM_MTX_ARRAY = 22, // Normal matrix array.
	GX_TEX_MTX_ARRAY = 23, // Texture matrix array.
	GX_LIGHT_ARRAY   = 24, // Light structure array.
	GX_VA_NBT        = 25, // Normal/bi-normal/tangent.

	GX_VA_MAX_ATTR, // Max number of attributes (26).

	GX_VA_NULL = 0xFF, // Indicates that it is none of these data types.
} GXAttr;

#define GX_MAX_VTXARRAY 16

// Type of vertex attribute reference.
// NB: havent confirmed the GX docs match pikmin 2 here
typedef enum _GXAttrType {
	GX_NONE    = 0, // No data to be sent.
	GX_DIRECT  = 1, // Value sent is value of data.
	GX_INDEX8  = 2, // Value sent is INDEX value of data array (8-bit).
	GX_INDEX16 = 3, // Value sent is INDEX value of data array (16-bit).
} GXAttrType;

// Vertex format IDs.
// NB: havent confirmed the GX docs match pikmin 2 here
typedef enum _GXVtxFmt {
	GX_VTXFMT0 = 0, // Vertex attribute format ID 0.
	GX_VTXFMT1 = 1, // Vertex attribute format ID 1.
	GX_VTXFMT2 = 2, // Vertex attribute format ID 2.
	GX_VTXFMT3 = 3, // Vertex attribute format ID 3.
	GX_VTXFMT4 = 4, // Vertex attribute format ID 4.
	GX_VTXFMT5 = 5, // Vertex attribute format ID 5.
	GX_VTXFMT6 = 6, // Vertex attribute format ID 6.
	GX_VTXFMT7 = 7, // Vertex attribute format ID 7.

	GX_MAX_VTXFMT, // Max vertex formats (8)
} GXVtxFmt;

// Number of components in an attribute.
// NB: havent confirmed the GX docs match pikmin 2 here
typedef enum _GXCompCnt {
	GX_POS_XY  = 0, // Position X, Y (two components).
	GX_POS_XYZ = 1, // Position X, Y, Z (three components).

	GX_NRM_XYZ  = 0, // Normal X, Y, Z (three components).
	GX_NRM_NBT  = 1, // Normal, binormal, tangent (three components).
	GX_NRM_NBT3 = 2, // Normal, binormal, tangent (three components). Use when NBT
	                 // normal is indexed independently.

	GX_CLR_RGB  = 0, // RGB (three components).
	GX_CLR_RGBA = 1, // RGBA (four components).

	GX_TEX_S  = 0, // Texture coordinate S (one component).
	GX_TEX_ST = 1  // Texture coordinates S, T (two components).
} GXCompCnt;

// Type of components in an attribute.
// NB: havent confirmed the GX docs match pikmin 2 here
typedef enum _GXCompType {
	GX_U8  = 0, // Unsigned 8-bit.
	GX_S8  = 1, // Signed 8-bit.
	GX_U16 = 2, // Unsigned 16-bit.
	GX_S16 = 3, // Signed 16-bit.
	GX_F32 = 4, // Floating-point 32-bit.

	GX_RGB565 = 0, // RGB565 16-bit.
	GX_RGB8   = 1, // RGB888 24-bit.
	GX_RGBX8  = 2, // RGB888x 32-bit.
	GX_RGBA4  = 3, // RGBA4444 16-bit.
	GX_RGBA6  = 4, // RGBA6666 24-bit.
	GX_RGBA8  = 5  // RGBA8888 32-bit.
} GXCompType;

// Anisotropy (direction-dependent) types.
// NB: unsure what each type means.
typedef enum _GXAnisotropy {
	GX_ANISO_1 = 0,
	GX_ANISO_2 = 1,
	GX_ANISO_4 = 2,

	GX_MAX_ANISOTROPY, // Max types (3).
} GXAnisotropy;

////////////////////////////////////////////

///////////// LIGHT/FOG/BLEND //////////////
// Light levels.
typedef enum _GXLightID {
	GX_LIGHT_NULL = 0x0,
	GX_LIGHT0     = 0x1,
	GX_LIGHT1     = 0x2,
	GX_LIGHT2     = 0x4,
	GX_LIGHT3     = 0x8,
	GX_LIGHT4     = 0x10,
	GX_LIGHT5     = 0x20,
	GX_LIGHT6     = 0x40,
	GX_LIGHT7     = 0x80,
	GX_MAX_LIGHT  = 0x100,
} GXLightID;

// Diffuse light functions.
typedef enum _GXDiffuseFn {
	GX_DF_NONE  = 0,
	GX_DF_SIGN  = 1,
	GX_DF_CLAMP = 2,
} GXDiffuseFn;

// Light attenuation functions.
typedef enum _GXAttnFn {
	GX_AF_SPEC = 0, // Specular attenuation.
	GX_AF_SPOT = 1, // Spotlight/distance attenuation.
	GX_AF_NONE = 2, // Attenuation off.
} GXAttnFn;

// Spotlight attenuation functions.
typedef enum _GXSpotFn {
	GX_SP_OFF   = 0,
	GX_SP_FLAT  = 1,
	GX_SP_COS   = 2,
	GX_SP_COS2  = 3,
	GX_SP_SHARP = 4,
	GX_SP_RING1 = 5,
	GX_SP_RING2 = 6,
} GXSpotFn;

// Distance attentuation functions.
typedef enum _GXDistAttnFn {
	GX_DA_OFF    = 0,
	GX_DA_GENTLE = 1,
	GX_DA_MEDIUM = 2,
	GX_DA_STEEP  = 3,
} GXDistAttnFn;

// Fog density functions for perspective projection mode.
typedef enum _GXFogType {
	GX_FOG_NONE       = 0, // No fog.
	GX_FOG_LINEAR     = 2, // Linear density.
	GX_FOG_EXPONENT   = 4, // Exponential density.
	GX_FOG_EXPONENT2  = 5, // Exponential-squared density.
	GX_FOG_REVERSEEXP = 6, // Inverse exponential density.
	GX_FOG_REVERSEXP2 = 7  // Inverse exponential-squared density.
} GXFogType;

typedef GXFogType _SDK_GXFogType;

// Blending type.
typedef enum _GXBlendMode {
	GX_BM_NONE     = 0, // No blending.
	GX_BM_BLEND    = 1, // Blending.
	GX_BM_LOGIC    = 2, // Logic operations.
	GX_BM_SUBTRACT = 3, // Subtractive blending.
	GX_MAX_BLENDMODE,   // Max blend modes (4).
} GXBlendMode;

typedef GXBlendMode _SDK_GXBlendMode;

// Blending controls. Dest = frame buffer, src = current/source.
typedef enum _GXBlendFactor {
	GX_BL_ZERO        = 0, // 0.0
	GX_BL_ONE         = 1, // 1.0
	GX_BL_SRCCOL      = 2,
	GX_BL_DSTCOL      = GX_BL_SRCCOL, // Frame buffer color, Source color
	GX_BL_INVSRCCOL   = 3,
	GX_BL_INVDSTCOL   = GX_BL_INVSRCCOL, // 1.0 - (Frame buffer color), 1.0 - (Source color)
	GX_BL_SRCALPHA    = 4,               // Source alpha
	GX_BL_INVSRCALPHA = 5,               // 1.0 - (Source alpha)
	GX_BL_DSTALPHA    = 6,               // Frame buffer alpha
	GX_BL_INVDSTALPHA = 7,               // 1.0 - (Frame buffer alpha)
} GXBlendFactor;

typedef GXBlendFactor _SDK_GXBlendFactor;

////////////////////////////////////////////

/////////////// MANIP MODES ////////////////
// Culling modes.
typedef enum _GXCullMode {
	GX_CULL_NONE  = 0,
	GX_CULL_FRONT = 1,
	GX_CULL_BACK  = 2,
	GX_CULL_ALL   = 3,
} GXCullMode;

// Clipping modes.
// NB: These are deliberately reversed from normal on/off.
typedef enum _GXClipMode {
	GX_CLIP_ENABLE  = 0,
	GX_CLIP_DISABLE = 1,
} GXClipMode;

// Copy modes.
typedef enum _GXCopyMode {
	GX_COPY_PROGRESSIVE = 0,
	GX_COPY_INTLC_EVEN  = 2,
	GX_COPY_INTLC_ODD   = 3,
} GXCopyMode;

////////////////////////////////////////////

/////////////// COLOR MANIP ////////////////
// Color Channel IDs.
typedef enum _GXChannelID {
	GX_COLOR0      = 0, // Color 0.
	GX_COLOR1      = 1, // Color 1.
	GX_ALPHA0      = 2, // Alpha 0.
	GX_ALPHA1      = 3, // Alpha 1.
	GX_COLOR0A0    = 4, // Color 0 + Alpha 0.
	GX_COLOR1A1    = 5, // Color 1 + Alpha 1.
	GX_COLOR_ZERO  = 6, // RGBA = 0.
	GX_ALPHA_BUMP  = 7, // Bump alpha 0-248, RGB = 0.
	GX_ALPHA_BUMPN = 8, // Norm bump alpha 0-255, RGB = 0.

	GX_COLOR_NULL = 0xFF, // Null channel.
} GXChannelID;

// Color sources.
typedef enum _GXColorSrc {
	GX_SRC_REG = 0, // Source from register (?).
	GX_SRC_VTX = 1, // Source from vertex.
} GXColorSrc;

// Alpha operators.
typedef enum _GXAlphaOp {
	GX_AOP_AND  = 0,
	GX_AOP_OR   = 1,
	GX_AOP_XOR  = 2,
	GX_AOP_XNOR = 3,

	GX_MAX_ALPHAOP, // Max num alpha operators (4).
} GXAlphaOp;

// Alpha read mode.
typedef enum _GXAlphaReadMode {
	GX_READ_00   = 0,
	GX_READ_FF   = 1,
	GX_READ_NONE = 2,
} GXAlphaReadMode;

// Gamma modes.
// NB: not sure what these modes are.
typedef enum _GXGamma {
	GX_GM_1_0 = 0,
	GX_GM_1_7 = 1,
	GX_GM_2_2 = 2,
} GXGamma;

////////////////////////////////////////////

///////////////// TEXTURES /////////////////
// Texture Coordinate IDs
typedef enum _GXTexCoordID {
	GX_TEXCOORD0 = 0, // Generated tex coord 0.
	GX_TEXCOORD1 = 1, // Generated tex coord 1.
	GX_TEXCOORD2 = 2, // Generated tex coord 2.
	GX_TEXCOORD3 = 3, // Generated tex coord 3.
	GX_TEXCOORD4 = 4, // Generated tex coord 4.
	GX_TEXCOORD5 = 5, // Generated tex coord 5.
	GX_TEXCOORD6 = 6, // Generated tex coord 6.
	GX_TEXCOORD7 = 7, // Generated tex coord 7.

	GX_MAX_TEXCOORD, // Max num texture coords (8).

	GX_TEXCOORD_NULL = 0xFF, // Null coordinate.
} GXTexCoordID;

// Texture generation types.
typedef enum _GXTexGenType {
	GX_TG_MTX2X4 = 0,
	GX_TG_MTX3X4 = 1,

	GX_TG_BUMP0 = 2,
	GX_TG_BUMP1 = 3,
	GX_TG_BUMP2 = 4,
	GX_TG_BUMP3 = 5,
	GX_TG_BUMP4 = 6,
	GX_TG_BUMP5 = 7,
	GX_TG_BUMP6 = 8,
	GX_TG_BUMP7 = 9,

	GX_TG_SRTG = 10,
} GXTexGenType;

// Texture generation sources.
typedef enum _GXTexGenSrc {
	GX_TG_POS     = 0, // Position.
	GX_TG_NRM     = 1, // Normal.
	GX_TG_BINRM   = 2, // Bi-normal.
	GX_TG_TANGENT = 3, // Tangent.

	GX_TG_TEX0 = 4,  // Texture 0.
	GX_TG_TEX1 = 5,  // Texture 1.
	GX_TG_TEX2 = 6,  // Texture 2.
	GX_TG_TEX3 = 7,  // Texture 3.
	GX_TG_TEX4 = 8,  // Texture 4.
	GX_TG_TEX5 = 9,  // Texture 5.
	GX_TG_TEX6 = 10, // Texture 6.
	GX_TG_TEX7 = 11, // Texture 7.

	GX_TG_TEXCOORD0 = 12, // Tex coord 0.
	GX_TG_TEXCOORD1 = 13, // Tex coord 1.
	GX_TG_TEXCOORD2 = 14, // Tex coord 2.
	GX_TG_TEXCOORD3 = 15, // Tex coord 3.
	GX_TG_TEXCOORD4 = 16, // Tex coord 4.
	GX_TG_TEXCOORD5 = 17, // Tex coord 5.
	GX_TG_TEXCOORD6 = 18, // Tex coord 6. No 7?

	GX_TG_COLOR0 = 19, // Color 0.
	GX_TG_COLOR1 = 20, // Color 1.
} GXTexGenSrc;

// Texture map names.
// NB: havent confirmed the GX docs match pikmin 2 here
typedef enum _GXTexMapID {
	GX_TEXMAP0 = 0, // Texture map ID 0.
	GX_TEXMAP1 = 1, // Texture map ID 1.
	GX_TEXMAP2 = 2, // Texture map ID 2.
	GX_TEXMAP3 = 3, // Texture map ID 3.
	GX_TEXMAP4 = 4, // Texture map ID 4.
	GX_TEXMAP5 = 5, // Texture map ID 5.
	GX_TEXMAP6 = 6, // Texture map ID 6.
	GX_TEXMAP7 = 7, // Texture map ID 7.

	GX_MAX_TEXMAP, // Max num texture map IDs (8).

	GX_TEXMAP_NULL = 0xFF,  // No textures used.
	GX_TEX_DISABLE = 0x100, // No texture map look-up.
} GXTexMapID;

// Texture format types.
/*
 * RGB, RGBA, Intensity, Intensity/Alpha, Compressed, and Z texture format
 * types. See GXCITexFmt for information on color index formats. The CTF format
 * is used only by the GXSetTexCopyDst function to specify how data is copied
 * out of the EFB into a texture in main memory. In order to actually use that
 * texture, you must specify a non-copy format of matching size. For example, if
 * copying using GX_CTF_RG8, you would apply the resulting texture using
 * GX_TF_IA8.
 */
// clang-format off
typedef enum _GXTexFmt {
    // Intensities (I) and RGB/RGBA.
	GX_TF_I4     = 0x0, // 4-bit I
	GX_TF_I8     = 0x1, // 8-bit I
	GX_TF_IA4    = 0x2, // 8-bit I + alpha (4+4).
	GX_TF_IA8    = 0x3, // 16-bit I + alpha (8+8).
	GX_TF_RGB565 = 0x4, // 16-bit RGB.
	GX_TF_RGB5A3 = 0x5, // MSB=1, RGB555 (opaque). MSB=0, RGBA4443 (transparent).
	GX_TF_RGBA8  = 0x6, // 32-bit RGB.
	GX_TF_CMPR   = 0xE, // Compressed 4-bit texel.

    // Z-texture format.
	GX_TF_Z8    = 0x11, // Unsigned 8-bit Z. For texture copies, specify the upper 8 bits of Z.
	GX_TF_Z16   = 0x13, // Unsigned 16-bit Z. For texture copies, specify the upper 16 bits of Z.
	GX_TF_Z24X8 = 0x16, // Unsigned 24-bit (32-bit texture) Z. For texture copies, copy the 24-bit Z and 0xff.

    // Copy-texture format.
	GX_CTF_R4    = 0x20, // 4-bit red. For copying 4 bits from red.
	GX_CTF_RA4   = 0x22, // 4-bit red + 4-bit alpha. For copying 4 bits from red, 4 bits from alpha.
	GX_CTF_RA8   = 0x23, // 8-bit red + 8-bit alpha. For copying 8 bits from red, 8 bits from alpha.
    GX_CTF_YUVA8 = 0x26, // 8-bit YUV + alpha. For copying 8 bits from YUV, 8 bits from alpha.
	GX_CTF_A8    = 0x26, // 8-bit alpha. For copying 8 bits from alpha.
	GX_CTF_R8    = 0x27, // 8-bit red. For copying 8 bits from red.
	GX_CTF_G8    = 0x28, // 8-bit green. For copying 8 bits from green.
	GX_CTF_B8    = 0x29, // 8-bit blue. For copying 8 bits from blue.
	GX_CTF_RG8   = 0x2A, // 8-bit red +8-bit green. For copying 8 bits from red, 8 bits from green.
	GX_CTF_GB8   = 0x2B, // 8-bit green +8-bit blue. For copying 8 bits from green, 8 bits from blue.

    // Copy-Z-texture format.
	GX_CTF_Z4   = 0x30, // 4-bit Z. For copying the 4 upper bits from Z.
	GX_CTF_Z8M  = 0x39, // 8-bit Z (median byte). For copying the middle 8 bits of Z.
	GX_CTF_Z8L  = 0x3A, // 8-bit Z (lower byte). For copying the lower 8 bits of Z.
	GX_CTF_Z16L = 0x3C, // 16-bit Z (lower portion). For copying the lower 16 bits of Z.
} GXTexFmt;
// clang-format on

// Color index formats.
typedef enum _GXCITexFmt {
	GX_TF_C4    = 0x8,
	GX_TF_C8    = 0x9,
	GX_TF_C14X2 = 0xA,
} GXCITexFmt;

// Texture matrix ID.
typedef enum _GXTexMtx {
	GX_TEXMTX0 = 30 + 0 * 3, // 30, Mtx0
	GX_TEXMTX1 = 30 + 1 * 3, // 33, Mtx1
	GX_TEXMTX2 = 30 + 2 * 3, // 36, Mtx2
	GX_TEXMTX3 = 30 + 3 * 3, // 39, Mtx3
	GX_TEXMTX4 = 30 + 4 * 3, // 42, Mtx4
	GX_TEXMTX5 = 30 + 5 * 3, // 45, Mtx5
	GX_TEXMTX6 = 30 + 6 * 3, // 48, Mtx6
	GX_TEXMTX7 = 30 + 7 * 3, // 51, Mtx7
	GX_TEXMTX8 = 30 + 8 * 3, // 54, Mtx8
	GX_TEXMTX9 = 30 + 9 * 3, // 57, Mtx9

	GX_IDENTITY = 60, // 60, Identity mtx
} GXTexMtx;

// Texture matrix type.
typedef enum _GXTexMtxType {
	GX_MTX3x4 = 0,
	GX_MTX2x4 = 1,
} GXTexMtxType;

// PT Texture matrix ID (?).
typedef enum _GXPTTexMtx {
	GX_PTTEXMTX0  = 64 + 0 * 3,  // 64, Mtx0
	GX_PTTEXMTX1  = 64 + 1 * 3,  // 67, Mtx1
	GX_PTTEXMTX2  = 64 + 2 * 3,  // 70, Mtx2
	GX_PTTEXMTX3  = 64 + 3 * 3,  // 73, Mtx3
	GX_PTTEXMTX4  = 64 + 4 * 3,  // 76, Mtx4
	GX_PTTEXMTX5  = 64 + 5 * 3,  // 79, Mtx5
	GX_PTTEXMTX6  = 64 + 6 * 3,  // 82, Mtx6
	GX_PTTEXMTX7  = 64 + 7 * 3,  // 85, Mtx7
	GX_PTTEXMTX8  = 64 + 8 * 3,  // 88, Mtx8
	GX_PTTEXMTX9  = 64 + 9 * 3,  // 91, Mtx9
	GX_PTTEXMTX10 = 64 + 10 * 3, // 94, Mtx10
	GX_PTTEXMTX11 = 64 + 11 * 3, // 97, Mtx11
	GX_PTTEXMTX12 = 64 + 12 * 3, // 100, Mtx12
	GX_PTTEXMTX13 = 64 + 13 * 3, // 103, Mtx13
	GX_PTTEXMTX14 = 64 + 14 * 3, // 106, Mtx14
	GX_PTTEXMTX15 = 64 + 15 * 3, // 109, Mtx15
	GX_PTTEXMTX16 = 64 + 16 * 3, // 112, Mtx16
	GX_PTTEXMTX17 = 64 + 17 * 3, // 115, Mtx17
	GX_PTTEXMTX18 = 64 + 18 * 3, // 118, Mtx18
	GX_PTTEXMTX19 = 64 + 19 * 3, // 121, Mtx19

	GX_PTIDENTITY = 125, // 125, Identity mtx
} GXPTTexMtx;

// Texture offset types.
typedef enum _GXTexOffset {
	GX_TO_ZERO      = 0,
	GX_TO_SIXTEENTH = 1,
	GX_TO_EIGHTH    = 2,
	GX_TO_FOURTH    = 3,
	GX_TO_HALF      = 4,
	GX_TO_ONE       = 5,

	GX_MAX_TEXOFFSET, // Max num texture offset types (6).
} GXTexOffset;

// Texture wrap modes.
typedef enum _GXTexWrapMode {
	GX_CLAMP  = 0, // Clamp/cut off at wrap.
	GX_REPEAT = 1, // Repeat past wrap.
	GX_MIRROR = 2, // Mirror past wrap.
} GXTexWrapMode;

// Texture filtering types.
typedef enum _GXTexFilter {
	GX_NEAR          = 0, // Filter near.
	GX_LINEAR        = 1, // Filter linear.
	GX_NEAR_MIP_NEAR = 2, // Near + MIPmap near.
	GX_LIN_MIP_NEAR  = 3, // Linear + MIPmap near.
	GX_NEAR_MIP_LIN  = 4, // Near + MIPmap linear.
	GX_LIN_MIP_LIN   = 5, // Linear + MIPmap linear.
} GXTexFilter;

// Texture cache sizes.
typedef enum _GXTexCacheSize {
	GX_TEXCACHE_32K  = 0, // Small.
	GX_TEXCACHE_128K = 1, // Medium.
	GX_TEXCACHE_512K = 2, // Large.
	GX_TEXCACHE_NONE = 3, // No cache.
} GXTexCacheSize;

////////////////////////////////////////////

////////// TEXTURE LOOK-UP TABLES //////////
// Texture look-up table (Tlut) names.
/*
 * Names of texture lookup tables (TLUTs) in texture memory.
 * Each table GX_TLUT0 through GX_TLUT15 contains 256 entries, at 16 bits per
 * entry. Each table GX_BIGTLUT0 through BIGTLUT3 contains 1024 entries, at 16
 * bits per entry. Used for setting texture memory in the GXInit function.
 */
typedef enum _GXTlut {
	GX_TLUT0  = 0, // TLUT (256 16-bit entries) ID 0.
	GX_TLUT1  = 1,
	GX_TLUT2  = 2,
	GX_TLUT3  = 3,
	GX_TLUT4  = 4,
	GX_TLUT5  = 5,
	GX_TLUT6  = 6,
	GX_TLUT7  = 7,
	GX_TLUT8  = 8,
	GX_TLUT9  = 9,
	GX_TLUT10 = 10,
	GX_TLUT11 = 11,
	GX_TLUT12 = 12,
	GX_TLUT13 = 13,
	GX_TLUT14 = 14,
	GX_TLUT15 = 15,

	GX_BIGTLUT0 = 16, // BIGTLUT (1024 16-bit entries) ID 0.
	GX_BIGTLUT1 = 17,
	GX_BIGTLUT2 = 18,
	GX_BIGTLUT3 = 19,
} GXTlut;

// Texture look-up (Tlut) formats.
typedef enum _GXTlutFmt {
	GX_TL_IA8    = 0, // 16-bit intensity + alpha (8I+8A).
	GX_TL_RGB565 = 1, // 16-bit RGB (R5+G6+B5).
	GX_TL_RGB5A3 = 2, // MSB=1, RGB555 (opaque); MSB=0, RGBA4443 (transparent).

	GX_MAX_TLUTFMT, // Max number of formats (3).
} GXTlutFmt;

// Texture look-up (Tlut) sizes.
typedef enum _GXTlutSize {
	GX_TLUT_16  = 1, // Number of 16 entry blocks.
	GX_TLUT_32  = 2,
	GX_TLUT_64  = 4,
	GX_TLUT_128 = 8,
	GX_TLUT_256 = 16,
	GX_TLUT_512 = 32,
	GX_TLUT_1K  = 64,
	GX_TLUT_2K  = 128,
	GX_TLUT_4K  = 256,
	GX_TLUT_8K  = 512,
	GX_TLUT_16K = 1024,
} GXTlutSize;

////////////////////////////////////////////

//////////// INDIRECT TEXTURES /////////////
// Indirect texture formats.
typedef enum _GXIndTexFormat {
	GX_ITF_8 = 0, // 8-bit texture offsets.
	GX_ITF_5 = 1, // 5-bit texture offsets.
	GX_ITF_4 = 2, // 4-bit texture offsets.
	GX_ITF_3 = 3, // 3-bit texture offsets.

	GX_MAX_ITFORMAT, // Max num formats (4).
} GXIndTexFormat;

// Indirect texture stage names.
typedef enum _GXIndTexStageID {
	GX_IND_TEX_STAGE_0 = 0,
	GX_IND_TEX_STAGE_1 = 1,
	GX_IND_TEX_STAGE_2 = 2,
	GX_IND_TEX_STAGE_3 = 3,

	GX_IND_MAX_TEX_STAGE_ID, // Max num stages (4).
} GXIndTexStageID;

// Indirect texture matrix IDs.
typedef enum _GXIndTexMtxID {
	GX_ITM_OFF = 0,
	GX_ITM_0   = 1,
	GX_ITM_1   = 2,
	GX_ITM_2   = 3,

	GX_ITM_S0 = 5,
	GX_ITM_S1 = 6,
	GX_ITM_S2 = 7,

	GX_ITM_T0 = 9,
	GX_ITM_T1 = 10,
	GX_ITM_T2 = 11,
} GXIndTexMtxID;

// Indirect texture scaling amounts.
typedef enum _GXIndTexScale {
	GX_ITS_1   = 0, // Scale by 1.
	GX_ITS_2   = 1, // Scale by 1/2.
	GX_ITS_4   = 2, // Scale by 1/4.
	GX_ITS_8   = 3, // Scale by 1/8.
	GX_ITS_16  = 4, // Scale by 1/16.
	GX_ITS_32  = 5, // Scale by 1/32.
	GX_ITS_64  = 6, // Scale by 1/64.
	GX_ITS_128 = 7, // Scale by 1/128.
	GX_ITS_256 = 8, // Scale by 1/256.

	GX_MAX_ITSCALE, // Max scaling types (9)
} GXIndTexScale;

// Indirect texture wrapping amounts.
typedef enum _GXIndTexWrap {
	GX_ITW_OFF = 0, // No wrapping.
	GX_ITW_256 = 1, // Wrap 256.
	GX_ITW_128 = 2, // Wrap 128.
	GX_ITW_64  = 3, // Wrap 64.
	GX_ITW_32  = 4, // Wrap 32.
	GX_ITW_16  = 5, // Wrap 16.
	GX_ITW_0   = 6, // Wrap 0.

	GX_MAX_ITWRAP, // Max wrapping types (7)
} GXIndTexWrap;

// Indirect texture bias selections.
// STU = surface coordinate system (s,t,u) with u normal to surface.
typedef enum _GXIndTexBiasSel {
	GX_ITB_NONE = 0,
	GX_ITB_S    = 1,
	GX_ITB_T    = 2,
	GX_ITB_ST   = 3,
	GX_ITB_U    = 4,
	GX_ITB_SU   = 5,
	GX_ITB_TU   = 6,
	GX_ITB_STU  = 7,

	GX_MAX_ITBIAS, // Max num bias types (8).
} GXIndTexBiasSel;

// Indirect texture alpha selections.
// STU = surface coordinate system (s,t,u) with u normal to surface.
typedef enum _GXIndTexAlphaSel {
	GX_ITBA_OFF = 0,
	GX_ITBA_S   = 1,
	GX_ITBA_T   = 2,
	GX_ITBA_U   = 3,

	GX_MAX_ITBALPHA, // Max num alpha types (4).
} GXIndTexAlphaSel;

////////////////////////////////////////////

/////// TEXTURE ENVIRONMENTS (TEV) /////////
// TEV stage names.
typedef enum _GXTevStageID {
	GX_TEVSTAGE0  = 0,  // TEV Stage 0.
	GX_TEVSTAGE1  = 1,  // TEV Stage 1.
	GX_TEVSTAGE2  = 2,  // TEV Stage 2.
	GX_TEVSTAGE3  = 3,  // TEV Stage 3.
	GX_TEVSTAGE4  = 4,  // TEV Stage 4.
	GX_TEVSTAGE5  = 5,  // TEV Stage 5.
	GX_TEVSTAGE6  = 6,  // TEV Stage 6.
	GX_TEVSTAGE7  = 7,  // TEV Stage 7.
	GX_TEVSTAGE8  = 8,  // TEV Stage 8.
	GX_TEVSTAGE9  = 9,  // TEV Stage 9.
	GX_TEVSTAGE10 = 10, // TEV Stage 10.
	GX_TEVSTAGE11 = 11, // TEV Stage 11.
	GX_TEVSTAGE12 = 12, // TEV Stage 12.
	GX_TEVSTAGE13 = 13, // TEV Stage 13.
	GX_TEVSTAGE14 = 14, // TEV Stage 14.
	GX_TEVSTAGE15 = 15, // TEV Stage 15.

	GX_MAXTEVSTAGE, // Max num TEV stages (16).
} GXTevStageID;

// TEV register names.
typedef enum _GXTevRegID {
	GX_TEVPREV = 0,
	GX_TEVREG0 = 1,
	GX_TEVREG1 = 2,
	GX_TEVREG2 = 3,

	GX_MAX_TEVREG, // Max num TEV registers (4).
} GXTevRegID;

// TEV operations.
typedef enum _GXTevOp {
	GX_TEV_ADD = 0,
	GX_TEV_SUB = 1,

	GX_TEV_COMP_R8_GT    = 8,
	GX_TEV_COMP_R8_EQ    = 9,
	GX_TEV_COMP_GR16_GT  = 10,
	GX_TEV_COMP_GR16_EQ  = 11,
	GX_TEV_COMP_BGR24_GT = 12,
	GX_TEV_COMP_BGR24_EQ = 13,

	GX_TEV_COMP_RGB8_GT = 14,
	GX_TEV_COMP_RGB8_EQ = 15,

	GX_TEV_COMP_A8_GT = GX_TEV_COMP_RGB8_GT, // Alpha channel (14)
	GX_TEV_COMP_A8_EQ = GX_TEV_COMP_RGB8_EQ  // Alpha channel (15)
} GXTevOp;

// TEV mode.
typedef enum _GXTevMode {
	GX_MODULATE = 0,
	GX_DECAL    = 1,
	GX_BLEND    = 2,
	GX_REPLACE  = 3,
	GX_PASSCLR  = 4,
} GXTevMode;

// TEV color channels.
// NB: we used to have this called GXTevColor (like TP).
typedef enum _GXTevColorChan {
	GX_CH_RED   = 0,
	GX_CH_GREEN = 1,
	GX_CH_BLUE  = 2,
	GX_CH_ALPHA = 3,
} GXTevColorChan;

// TEV color arguments.
typedef enum _GXTevColorArg {
	GX_CC_CPREV = 0,
	GX_CC_APREV = 1,
	GX_CC_C0    = 2,
	GX_CC_C1    = 3,
	GX_CC_C2    = 4,
	GX_CC_A0    = 5,
	GX_CC_A1    = 6,
	GX_CC_A2    = 7,
	GX_CC_TEXC  = 8,
	GX_CC_TEXA  = 9,
	GX_CC_RASC  = 10,
	GX_CC_RASA  = 11,
	GX_CC_ONE   = 12,
	GX_CC_HALF  = 13,
	GX_CC_KONST = 14,
	GX_CC_ZERO  = 15,
} GXTevColorArg;

// TEV alpha-specific arguments.
typedef enum _GXTevAlphaArg {
	GX_CA_APREV = 0,
	GX_CA_A0    = 1,
	GX_CA_A1    = 2,
	GX_CA_A2    = 3,
	GX_CA_TEXA  = 4,
	GX_CA_RASA  = 5,
	GX_KONST    = 6,
	GX_ZERO     = 7,
} GXTevAlphaArg;

// TEV bias.
typedef enum _GXTevBias {
	GX_TB_ZERO    = 0,
	GX_TB_ADDHALF = 1,
	GX_TB_SUBHALF = 2,

	GX_MAX_TEVBIAS, // Max num bias types (3).
} GXTevBias;

// TEV clamp modes.
typedef enum _GXTevClampMode {
	GX_TC_LINEAR = 0,
	GX_TC_GE     = 1,
	GX_TC_EQ     = 2,
	GX_TC_LE     = 3,

	GX_MAX_TEVCLAMPMODE, // Max num clamp modes (4).
} GXTevClampMode;

// TEV scale types.
typedef enum _GXTevScale {
	GX_CS_SCALE_1  = 0,
	GX_CS_SCALE_2  = 1,
	GX_CS_SCALE_4  = 2,
	GX_CS_DIVIDE_2 = 3,
	GX_MAX_TEVSCALE, // Max num scale types (4).
} GXTevScale;

// TEV swap selections.
typedef enum _GXTevSwapSel {
	GX_TEV_SWAP0 = 0,
	GX_TEV_SWAP1 = 1,
	GX_TEV_SWAP2 = 2,
	GX_TEV_SWAP3 = 3,
	GX_MAX_TEVSWAP, // Max num swap selections (4).
} GXTevSwapSel;

// TEV const (konst) color IDs.
typedef enum _GXTevKColorID {
	GX_KCOLOR0 = 0, // kColor 0.
	GX_KCOLOR1 = 1, // kColor 1.
	GX_KCOLOR2 = 2, // kColor 2.
	GX_KCOLOR3 = 3, // kColor 3.
	GX_MAX_KCOLOR,  // Max num kColors (4).
} GXTevKColorID;

// TEV const (konst) color selections.
typedef enum _GXTevKColorSel {
	GX_TEV_KCSEL_1   = 0,
	GX_TEV_KCSEL_7_8 = 1,
	GX_TEV_KCSEL_3_4 = 2,
	GX_TEV_KCSEL_5_8 = 3,
	GX_TEV_KCSEL_1_2 = 4,
	GX_TEV_KCSEL_3_8 = 5,
	GX_TEV_KCSEL_1_4 = 6,
	GX_TEV_KCSEL_1_8 = 7,

	GX_TEV_KCSEL_K0 = 12,
	GX_TEV_KCSEL_K1 = 13,
	GX_TEV_KCSEL_K2 = 14,
	GX_TEV_KCSEL_K3 = 15,

	GX_TEV_KCSEL_K0_R = 16,
	GX_TEV_KCSEL_K1_R = 17,
	GX_TEV_KCSEL_K2_R = 18,
	GX_TEV_KCSEL_K3_R = 19,

	GX_TEV_KCSEL_K0_G = 20,
	GX_TEV_KCSEL_K1_G = 21,
	GX_TEV_KCSEL_K2_G = 22,
	GX_TEV_KCSEL_K3_G = 23,

	GX_TEV_KCSEL_K0_B = 24,
	GX_TEV_KCSEL_K1_B = 25,
	GX_TEV_KCSEL_K2_B = 26,
	GX_TEV_KCSEL_K3_B = 27,

	GX_TEV_KCSEL_K0_A = 28,
	GX_TEV_KCSEL_K1_A = 29,
	GX_TEV_KCSEL_K2_A = 30,
	GX_TEV_KCSEL_K3_A = 31,
} GXTevKColorSel;

// TEV const (konst) alpha selectors.
typedef enum _GXTevKAlphaSel {
	GX_TEV_KASEL_1   = 0,
	GX_TEV_KASEL_7_8 = 1,
	GX_TEV_KASEL_3_4 = 2,
	GX_TEV_KASEL_5_8 = 3,
	GX_TEV_KASEL_1_2 = 4,
	GX_TEV_KASEL_3_8 = 5,
	GX_TEV_KASEL_1_4 = 6,
	GX_TEV_KASEL_1_8 = 7,

	GX_TEV_KASEL_K0_R = 16,
	GX_TEV_KASEL_K1_R = 17,
	GX_TEV_KASEL_K2_R = 18,
	GX_TEV_KASEL_K3_R = 19,

	GX_TEV_KASEL_K0_G = 20,
	GX_TEV_KASEL_K1_G = 21,
	GX_TEV_KASEL_K2_G = 22,
	GX_TEV_KASEL_K3_G = 23,

	GX_TEV_KASEL_K0_B = 24,
	GX_TEV_KASEL_K1_B = 25,
	GX_TEV_KASEL_K2_B = 26,
	GX_TEV_KASEL_K3_B = 27,

	GX_TEV_KASEL_K0_A = 28,
	GX_TEV_KASEL_K1_A = 29,
	GX_TEV_KASEL_K2_A = 30,
	GX_TEV_KASEL_K3_A = 31,
} GXTevKAlphaSel;

////////////////////////////////////////////

/////////// OTHER FORMATS/MODES ////////////
// Frame buffer pixel formats.
typedef enum _GXPixelFmt {
	GX_PF_RGB8_Z24   = 0, // Non-antialiased (RGB 888).
	GX_PF_RGBA6_Z24  = 1, // Non-antialiased (RGBA 6666).
	GX_PF_RGB565_Z16 = 2, // Anti-aliasing.
	GX_PF_Z24        = 3,
	GX_PF_Y8         = 4,
	GX_PF_U8         = 5,
	GX_PF_V8         = 6,
	GX_PF_YUV420     = 7,
} GXPixelFmt;

typedef GXPixelFmt _SDK_GXPixelFmt;

// Compressed Z format.
typedef enum _GXZFmt16 {
	GX_ZC_LINEAR = 0, // 16-bit linear.
	GX_ZC_NEAR   = 1, // Compressed format (14e2) for smaller far/near ratio.
	GX_ZC_MID    = 2, // Compressed format (13e3) for medium far/near ratio.
	GX_ZC_FAR    = 3, // Compressed format (12e4) for large far/near ratio.
} GXZFmt16;

typedef GXZFmt16 _SDK_GXZFmt16;

// Projection types.
typedef enum _GXProjectionType {
	GX_PERSPECTIVE  = 0,
	GX_ORTHOGRAPHIC = 1,
} GXProjectionType;

// FB clamp types.
typedef enum _GXFBClamp {
	GX_CLAMP_NONE   = 0,
	GX_CLAMP_TOP    = 1,
	GX_CLAMP_BOTTOM = 2,
} GXFBClamp;

// Z-Texture operations.
typedef enum _GXZTexOp {
	GX_ZT_DISABLE = 0,
	GX_ZT_ADD     = 1,
	GX_ZT_REPLACE = 2,

	GX_MAX_ZTEXOP, // Max num operations (3).
} GXZTexOp;

// Perf-0 types.
typedef enum _GXPerf0 {
	GX_PERF0_VERTICES      = 0,
	GX_PERF0_CLIP_VTX      = 1,
	GX_PERF0_CLIP_CLKS     = 2,
	GX_PERF0_XF_WAIT_IN    = 3,
	GX_PERF0_XF_WAIT_OUT   = 4,
	GX_PERF0_XF_XFRM_CLKS  = 5,
	GX_PERF0_XF_LIT_CLKS   = 6,
	GX_PERF0_XF_BOT_CLKS   = 7,
	GX_PERF0_XF_REGLD_CLKS = 8,
	GX_PERF0_XF_REGRD_CLKS = 9,
	GX_PERF0_CLIP_RATIO    = 10,

	GX_PERF0_TRIANGLES           = 11,
	GX_PERF0_TRIANGLES_CULLED    = 12,
	GX_PERF0_TRIANGLES_PASSED    = 13,
	GX_PERF0_TRIANGLES_SCISSORED = 14,
	GX_PERF0_TRIANGLES_0TEX      = 15,
	GX_PERF0_TRIANGLES_1TEX      = 16,
	GX_PERF0_TRIANGLES_2TEX      = 17,
	GX_PERF0_TRIANGLES_3TEX      = 18,
	GX_PERF0_TRIANGLES_4TEX      = 19,
	GX_PERF0_TRIANGLES_5TEX      = 20,
	GX_PERF0_TRIANGLES_6TEX      = 21,
	GX_PERF0_TRIANGLES_7TEX      = 22,
	GX_PERF0_TRIANGLES_8TEX      = 23,
	GX_PERF0_TRIANGLES_0CLR      = 24,
	GX_PERF0_TRIANGLES_1CLR      = 25,
	GX_PERF0_TRIANGLES_2CLR      = 26,

	GX_PERF0_QUAD_0CVG    = 27,
	GX_PERF0_QUAD_NON0CVG = 28,
	GX_PERF0_QUAD_1CVG    = 29,
	GX_PERF0_QUAD_2CVG    = 30,
	GX_PERF0_QUAD_3CVG    = 31,
	GX_PERF0_QUAD_4CVG    = 32,
	GX_PERF0_AVG_QUAD_CNT = 33,

	GX_PERF0_CLOCKS = 34,
	GX_PERF0_NONE   = 35,
} GXPerf0;

// Perf-1 types.
typedef enum _GXPerf1 {
	GX_PERF1_TEXELS      = 0,
	GX_PERF1_TX_IDLE     = 1,
	GX_PERF1_TX_REGS     = 2,
	GX_PERF1_TX_MEMSTALL = 3,
	GX_PERF1_TC_CHECK1_2 = 4,
	GX_PERF1_TC_CHECK3_4 = 5,
	GX_PERF1_TC_CHECK5_6 = 6,
	GX_PERF1_TC_CHECK7_8 = 7,
	GX_PERF1_TC_MISS     = 8,

	GX_PERF1_VC_ELEMQ_FULL    = 9,
	GX_PERF1_VC_MISSQ_FULL    = 10,
	GX_PERF1_VC_MEMREQ_FULL   = 11,
	GX_PERF1_VC_STATUS7       = 12,
	GX_PERF1_VC_MISSREP_FULL  = 13,
	GX_PERF1_VC_STREAMBUF_LOW = 14,
	GX_PERF1_VC_ALL_STALLS    = 15,
	GX_PERF1_VERTICES         = 16,

	GX_PERF1_FIFO_REQ    = 17,
	GX_PERF1_CALL_REQ    = 18,
	GX_PERF1_VC_MISS_REQ = 19,
	GX_PERF1_CP_ALL_REQ  = 20,

	GX_PERF1_CLOCKS = 21,
	GX_PERF1_NONE   = 22,
} GXPerf1;

// Vertex cache perf types.
typedef enum _GXVCachePerf {
	GX_VC_POS  = 0,
	GX_VC_NRM  = 1,
	GX_VC_CLR0 = 2,
	GX_VC_CLR1 = 3,
	GX_VC_TEX0 = 4,
	GX_VC_TEX1 = 5,
	GX_VC_TEX2 = 6,
	GX_VC_TEX3 = 7,
	GX_VC_TEX4 = 8,
	GX_VC_TEX5 = 9,
	GX_VC_TEX6 = 10,
	GX_VC_TEX7 = 11,

	GX_VC_ALL = 15
} GXVCachePerf;

// Miscellaneous token types.
typedef enum _GXMiscToken {
	GX_MT_NULL               = 0,
	GX_MT_XF_FLUSH           = 1,
	GX_MT_DL_SAVE_CONTEXT    = 2,
	GX_MT_ABORT_WAIT_COPYOUT = 3,
} GXMiscToken;

////////////////////////////////////////////

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif

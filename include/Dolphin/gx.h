#ifndef _DOLPHIN_GX_H
#define _DOLPHIN_GX_H

// TODO: Finish GX enums
// #pragma reverse_bitfields on

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

// Pack value into bitfield
#define GX_BITFIELD_SET(field, pos, size, value) (field) = __rlwimi((field), (value), 31 - (pos) - (size) + 1, (pos), (pos) + (size)-1)

#pragma enumalwaysint off
typedef enum _GXCullMode {
	GX_CULL_NONE,
	GX_CULL_FRONT,
	GX_CULL_BACK,
	GX_CULL_ALL

} GXCullMode;
#pragma enumalwaysint reset

// TODO: Placeholder
typedef u32 _GXVtxAttrFmtList;

typedef enum _GXPrimitive {
	GX_POINTS        = 0xb8,
	GX_LINES         = 0xa8,
	GX_LINESTRIP     = 0xb0,
	GX_TRIANGLES     = 0x90,
	GX_TRIANGLESTRIP = 0x98,
	GX_TRIANGLEFAN   = 0xa0,
	GX_QUADS         = 0x80
} GXPrimitive;

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

typedef enum _GXAnisotropy {
	GX_ANISO_1,
	GX_ANISO_2,
	GX_ANISO_4,
} GXAnisotropy;

// GXIndTex enums from OpenRVL

typedef enum _GXIndTexAlphaSel {
	GX_IND_TEX_ALPHA_SEL_0,
} GXIndTexAlphaSel;

typedef enum _GXIndTexBiasSel {
	GX_IND_TEX_BIAS_SEL_0,
} GXIndTexBiasSel;

typedef enum _GXIndTexFormat {
	GX_IND_TEX_FMT_0,
} GXIndTexFormat;

typedef enum _GXIndTexMtxID {
	GX_IND_TEX_MTX_ID_0,
	GX_IND_TEX_MTX_ID_1,
	GX_IND_TEX_MTX_ID_2,
	GX_IND_TEX_MTX_ID_3,
	GX_IND_TEX_MTX_ID_4,
	GX_IND_TEX_MTX_ID_5,
	GX_IND_TEX_MTX_ID_6,
	GX_IND_TEX_MTX_ID_7,
	GX_IND_TEX_MTX_ID_8,
	GX_IND_TEX_MTX_ID_9,
	GX_IND_TEX_MTX_ID_10,
	GX_IND_TEX_MTX_ID_11,
} GXIndTexMtxID;

typedef enum _GXIndTexScale {
	GX_IND_TEX_SCALE_0,
} GXIndTexScale;

typedef enum _GXIndTexStageID {
	GX_IND_TEX_STAGE_ID_0,
	GX_IND_TEX_STAGE_ID_1,
	GX_IND_TEX_STAGE_ID_2,
	GX_IND_TEX_STAGE_ID_3
} GXIndTexStageID;

typedef enum _GXIndTexWrap {
	GX_IND_TEX_WRAP_0,
} GXIndTexWrap;

typedef enum _GXTexOffset {
	GX_TO_ZERO,
	GX_TO_SIXTEENTH,
	GX_TO_EIGHTH,
	GX_TO_FOURTH,
	GX_TO_HALF,
	GX_TO_ONE,
	GX_MAX_TEXOFFSET,
} GXTexOffset;

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

typedef enum _GXTexWrapMode {
	GX_CLAMP,
	GX_REPEAT,
	GX_MIRROR,
} GXTexWrapMode;

typedef enum _GXTexFilter { GX_NEAR, GX_LINEAR, GX_NEAR_MIP_NEAR, GX_LIN_MIP_NEAR, GX_NEAR_MIP_LIN, GX_LIN_MIP_LIN } GXTexFilter;

typedef enum _GXTexCoordID {
	GX_TEXCOORD0,
	GX_TEXCOORD1,
	GX_TEXCOORD2,
	GX_TEXCOORD3,
	GX_TEXCOORD4,
	GX_TEXCOORD5,
	GX_TEXCOORD6,
	GX_TEXCOORD7,
	GX_MAX_TEXCOORD  = 8,
	GX_TEXCOORD_NULL = 0xff
} GXTexCoordID;

typedef enum _GXTevOp {
	GX_TEV_ADD,
	GX_TEV_SUB,
	GX_TEV_COMP_R8_GT,
	GX_TEV_COMP_R8_EQ,
	GX_TEV_COMP_GR16_GT,
	GX_TEV_COMP_GR16_EQ,
	GX_TEV_COMP_BGR24_GT,
	GX_TEV_COMP_BGR24_EQ,
	GX_TEV_COMP_RGB8_GT,
	GX_TEV_COMP_RGB8_EQ,
} GXTevOp;

typedef enum _GXTevBias { GX_TB_ZERO, GX_TB_ADDHALF, GX_TB_SUBHALF } GXTevBias;

typedef enum _GXTevScale { GX_CS_SCALE_1, GX_CS_SCALE_2, GX_CS_SCALE_4, GX_CS_DIVIDE_2 } GXTevScale;

typedef enum _GXTevSwapSel {
	GX_TEV_SWAP0,
	GX_TEV_SWAP1,
	GX_TEV_SWAP2,
	GX_TEV_SWAP3,
} GXTevSwapSel;

typedef enum _GXTevAlphaArg {
	GX_CA_APREV,
	GX_CA_A0,
	GX_CA_A1,
	GX_CA_A2,
	GX_CA_TEXA,
	GX_CA_RASA,
	GX_KONST,
	GX_ZERO,
} GXTevAlphaArg;

typedef enum _GXTevKColorID {
	GX_KCOLOR0,
	GX_KCOLOR1,
	GX_KCOLOR2,
	GX_KCOLOR3,
} GXTevKColorID;

typedef enum _GXTevKColorSel {
	GX_TEV_KCSEL_K0,
	GX_TEV_KCSEL_K1,
	GX_TEV_KCSEL_K2,
	GX_TEV_KCSEL_K3,
	GX_TEV_KCSEL_K0_R,
	GX_TEV_KCSEL_K1_R,
	GX_TEV_KCSEL_K2_R,
	GX_TEV_KCSEL_K3_R,
	GX_TEV_KCSEL_K0_G,
	GX_TEV_KCSEL_K1_G,
	GX_TEV_KCSEL_K2_G,
	GX_TEV_KCSEL_K3_G,
	GX_TEV_KCSEL_K0_B,
	GX_TEV_KCSEL_K1_B,
	GX_TEV_KCSEL_K2_B,
	GX_TEV_KCSEL_K3_B,
	GX_TEV_KCSEL_K0_A,
	GX_TEV_KCSEL_K1_A,
	GX_TEV_KCSEL_K2_A,
	GX_TEV_KCSEL_K3_A,
	GX_TEV_KCSEL_8_8,
	GX_TEV_KCSEL_7_8,
	GX_TEV_KCSEL_6_8,
	GX_TEV_KCSEL_5_8,
	GX_TEV_KCSEL_4_8,
	GX_TEV_KCSEL_3_8,
	GX_TEV_KCSEL_2_8,
	GX_TEV_KCSEL_1_8,
} GXTevKColorSel;

typedef enum _GXTevColorArg {
	GX_CC_CPREV,
	GX_CC_APREV,
	GX_CC_C0,
	GX_CC_C1,
	GX_CC_C2,
	GX_CC_A0,
	GX_CC_A1,
	GX_CC_A2,
	GX_CC_TEXC,
	GX_CC_TEXA,
	GX_CC_RASC,
	GX_CC_RASA,
	GX_CC_ONE,
	GX_CC_HALF,
	GX_CC_KONST,
	GX_CC_ZERO,
} GXTevColorArg;

typedef enum _GXTevStageID {
	GX_TEVSTAGE0,
	GX_TEVSTAGE1,
	GX_TEVSTAGE2,
	GX_TEVSTAGE3,
	GX_TEVSTAGE4,
	GX_TEVSTAGE5,
	GX_TEVSTAGE6,
	GX_TEVSTAGE7,
	GX_TEVSTAGE8,
	GX_TEVSTAGE9,
	GX_TEVSTAGE10,
	GX_TEVSTAGE11,
	GX_TEVSTAGE12,
	GX_TEVSTAGE13,
	GX_TEVSTAGE14,
	GX_TEVSTAGE15,
} GXTevStageID;

typedef enum _GXTevRegID { GX_TEVPREV = 0, GX_TEVREG0, GX_TEVREG1, GX_TEVREG2, GX_MAX_TEVREG } GXTevRegID;

typedef enum _GXTevMode {
	GX_MODULATE,
	GX_DECAL,
	GX_BLEND,
	GX_REPLACE,
	GX_PASSCLR,
} GXTevMode;

typedef enum _GXTexGenType {
	GX_TG_MTX2X4,
	GX_TG_MTX3X4,
	GX_TG_BUMP0,
	GX_TG_BUMP1,
	GX_TG_BUMP2,
	GX_TG_BUMP3,
	GX_TG_BUMP4,
	GX_TG_BUMP5,
	GX_TG_BUMP6,
	GX_TG_BUMP7,
	GX_TG_SRTG,
} GXTexGenType;

typedef enum _GXTexGenSrc {
	GX_TG_POS,
	GX_TG_NRM,
	GX_TG_BINRM,
	GX_TG_TANGENT,
	GX_TG_TEX0,
	GX_TG_TEX1,
	GX_TG_TEX2,
	GX_TG_TEX3,
	GX_TG_TEX4,
	GX_TG_TEX5,
	GX_TG_TEX6,
	GX_TG_TEX7,
	GX_TG_TEXCOORD0,
	GX_TG_TEXCOORD1,
	GX_TG_TEXCOORD2,
	GX_TG_TEXCOORD3,
	GX_TG_TEXCOORD4,
	GX_TG_TEXCOORD5,
	GX_TG_TEXCOORD6,
	GX_TG_COLOR0,
	GX_TG_COLOR1,
} GXTexGenSrc;

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
	GX_TEXMAP_NULL = 0xff, // No textures used.
	GX_TEX_DISABLE = 0x100 // No texture map look-up.
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

typedef enum _GXChannelID {
	GX_COLOR0,
	GX_COLOR1,
	GX_ALPHA0,
	GX_ALPHA1,
	GX_COLOR0A0,
	GX_COLOR1A1,
	GX_COLOR_ZERO,
	GX_ALPHA_BUMP,
	GX_ALPHA_BUMPN,
	GX_COLOR_NULL = 0xFF,
} GXChannelID;

typedef enum _GXColorSrc {
	GX_SRC_REG,
	GX_SRC_VTX,
} GXColorSrc;

typedef enum _GXLightID {
	GX_LIGHT_NULL = 0,
	GX_LIGHT0     = 1 << 0,
	GX_LIGHT1     = 1 << 1,
	GX_LIGHT2     = 1 << 2,
	GX_LIGHT3     = 1 << 3,
	GX_LIGHT4     = 1 << 4,
	GX_LIGHT5     = 1 << 5,
	GX_LIGHT6     = 1 << 6,
	GX_LIGHT7     = 1 << 7,
	GX_MAX_LIGHT  = 1 << 8,
} GXLightID;

typedef enum _GXDiffuseFn {
	GX_DF_NONE,
	GX_DF_SIGN,
	GX_DF_CLAMP,
} GXDiffuseFn;

typedef enum _GXAttnFn {
	GX_AF_SPEC,
	GX_AF_SPOT,
	GX_AF_NONE,
} GXAttnFn;

// Number of components in an attribute.
// Havent confirmed the GX docs match pikmin 2 here
typedef enum _GXCompCnt {
	GX_POS_XY   = 0, // Position X, Y (two components).
	GX_POS_XYZ  = 1, // Position X, Y, Z (three components).
	GX_NRM_XYZ  = 0, // Normal X, Y, Z (three components).
	GX_NRM_NBT  = 1, // Normal, binormal, tangent (three components).
	GX_NRM_NBT3 = 2, // Normal, binormal, tangent (three components). Use when NBT
	                 // normal is indexed independently.
	GX_CLR_RGB  = 0, // RGB (three components).
	GX_CLR_RGBA = 1, // RGBA (four components).
	GX_TEX_S    = 0, // Texture coordinate S (one component).
	GX_TEX_ST   = 1  // Texture coordinates S, T (two components).
} GXCompCnt;

// Type of components in an attribute.
// Havent confirmed the GX docs match pikmin 2 here
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
	GX_FOG_REVERSEXP2 = 7  // Use the inverse exponential-squared fog density
	                       // function. For perspective projection mode.
} GXFogType;

typedef enum _GXProjectionType {
	GX_PERSPECTIVE, // 0x0
	GX_ORTHOGRAPHIC // 0x1
} GXProjectionType;

typedef struct _GXColor {
	u8 r, g, b, a;
} GXColor;
typedef GXColor _SDK_GXColor; // this might be a wrapper in Pikmin 2? IDK.

typedef struct _SDK_GXColorS10 {
	s16 r, g, b, a;
} GXColorS10;
typedef GXColorS10 _GXColorS10; // this might be a wrapper in Pikmin 2? IDK.

typedef struct _SDK_GXFogAdjTable {
	u16 _00[10];
} GXFogAdjTable;

typedef enum _GXTexMtxType { GX_MTX3x4, GX_MTX2x4 } GXTexMtxType;

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

typedef enum _GXAlphaOp { GX_AOP_AND, GX_AOP_OR, GX_AOP_XOR, GX_AOP_XNOR, GX_MAX_ALPHAOP } GXAlphaOp;

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
	GX_BL_INVDSTCOL = GX_BL_INVSRCCOL, // 1.0 - (Frame buffer color), 1.0 - (Source color)
	GX_BL_SRCALPHA,                    // Source alpha
	GX_BL_INVSRCALPHA,                 // 1.0 - (Source alpha)
	GX_BL_DSTALPHA,                    // Frame buffer alpha
	GX_BL_INVDSTALPHA,                 // 1.0 - (Frame buffer alpha)
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
	VITVMode viTVmode; // _00
	u16 fbWidth;       // _04
	u16 efbHeight;     // _06
	u16 xfbHeight;     // _08
	u16 viXOrigin;     // _0A
	u16 viYOrigin;     // _0C
	u16 viWidth;       // _0E
	u16 viHeight;      // _10
	VIXFBMode xFBmode; // _14

	u8 field_rendering;       // _18
	u8 aa;                    // _19
	u8 sample_pattern[12][2]; // _1C
	u8 vfilter[7];            // _34
} GXRenderModeObj;

extern GXRenderModeObj GXNtsc240Ds;
extern GXRenderModeObj GXNtsc240DsAa;
extern GXRenderModeObj GXNtsc240Int;
extern GXRenderModeObj GXNtsc240IntAa;
extern GXRenderModeObj GXNtsc480IntDf;
extern GXRenderModeObj GXNtsc480Int;
extern GXRenderModeObj GXNtsc480IntAa;
extern GXRenderModeObj GXNtsc480Prog;
extern GXRenderModeObj GXNtsc480ProgSoft;
extern GXRenderModeObj GXNtsc480ProgAa;

extern GXRenderModeObj GXMpal240Ds;
extern GXRenderModeObj GXMpal240DsAa;
extern GXRenderModeObj GXMpal240Int;
extern GXRenderModeObj GXMpal240IntAa;
extern GXRenderModeObj GXMpal480IntDf;
extern GXRenderModeObj GXMpal480Int;
extern GXRenderModeObj GXMpal480IntAa;

extern GXRenderModeObj GXPal264Ds;
extern GXRenderModeObj GXPal264DsAa;
extern GXRenderModeObj GXPal264Int;
extern GXRenderModeObj GXPal264IntAa;
extern GXRenderModeObj GXPal528IntDf;
extern GXRenderModeObj GXPal528Int;
extern GXRenderModeObj GXPal524IntAa;

extern GXRenderModeObj GXEurgb60Hz240Ds;
extern GXRenderModeObj GXEurgb60Hz240DsAa;
extern GXRenderModeObj GXEurgb60Hz240Int;
extern GXRenderModeObj GXEurgb60Hz240IntAa;
extern GXRenderModeObj GXEurgb60Hz480IntDf;
extern GXRenderModeObj GXEurgb60Hz480Int;
extern GXRenderModeObj GXEurgb60Hz480IntAa;
extern GXRenderModeObj GXRmHW;

typedef struct GXTexObj {
	u32 _00;
	u32 _04;
	u32 _08;
	u32 _0c;
	u8 _10;
	u8 _11;
	u8 _12;
	u8 _13;
	u32 format_14;
	u32 tlut_name_18;
	u16 _1c;
	s8 _1e;
	s8 mipmap_1f;
} GXTexObj;

typedef struct _GXVtxDescList {
	s32 _00;
	u32 _04;
} GXTexDescList;

// Compressed Z format
typedef enum _SDK_GXZFmt16 {
	GX_ZC_LINEAR, // 16-bit linear.
	GX_ZC_NEAR,   // Compressed format (14e2) for smaller far/near ratio.
	GX_ZC_MID,    // Compressed format (13e3) for medium far/near ratio.
	GX_ZC_FAR     // Compressed format (12e4) for large far/near ratio.
} GXZFmt16;

typedef union _ControlRegister {
	u32 value;
	struct {
		u32 bpEnable : 27;
		u32 gpLinkEnable : 1;
		u32 fifoUnderflowIRQEnable : 1;
		u32 fifoOverflowIRQEnable : 1;
		u32 cpIRQEnable : 1;
		u32 gpFifoReadEnable : 1;
		// u32
		// bpEnable : 1,
		// gpLinkEnable : 1,
		// fifoUnderflowIRQEnable : 1,
		// fifoOverflowIRQEnable : 1,
		// cpIRQEnable : 1,
		// gpFifoReadEnable : 1;
	} bits;
} ControlRegister;

// typedef struct _ControlRegister {
// 	u32
// 	gpFifoReadEnable : 1,
// 	cpIRQEnable : 1,
// 	fifoOverflowIRQEnable : 1,
// 	fifoUnderflowIRQEnable : 1,
// 	gpLinkEnable : 1,
// 	bpEnable : 27;
// } ControlRegister;

// typedef struct _ControlRegister {
// 	u32
// 	gpFifoReadEnable : 1,
// 	cpIRQEnable : 1,
// 	fifoOverflowIRQEnable : 1,
// 	fifoUnderflowIRQEnable : 1,
// 	gpLinkEnable : 1,
// 	bpEnable : 1;
// } ControlRegister;

// typedef struct _ControlRegister {
// 	u32
// 	bpEnable : 27,
// 	gpLinkEnable : 1,
// 	fifoUnderflowIRQEnable : 1,
// 	fifoOverflowIRQEnable : 1,
// 	cpIRQEnable : 1,
// 	gpFifoReadEnable : 1;
// } ControlRegister;

/**
 * @size{0x5B0}
 */
typedef struct _GXData {
	u16 _000[2]; // _000
	u8 _004[4];  // _004
	/* CPControl. Gets written to __cpReg->controlRegister. */
	// union {
	// 	u32 value;
	// 	ControlRegister bits;
	// 	// struct {
	// 	// 	u32
	// 	// 		bpEnable : 1,
	// 	// 		gpLinkEnable : 1,
	// 	// 		fifoUnderflowIRQEnable : 1,
	// 	// 		fifoOverflowIRQEnable : 1,
	// 	// 		cpIRQEnable : 1,
	// 	// 		gpFifoReadEnable : 1;
	// 	// 		// gpFifoReadEnable : 1,
	// 	// 		// cpIRQEnable : 1,
	// 	// 		// fifoOverflowIRQEnable : 1,
	// 	// 		// fifoUnderflowIRQEnable : 1,
	// 	// 		// gpLinkEnable : 1,
	// 	// 		// bpEnable : 1;
	// 	// } bits;
	// } controlRegister;
	ControlRegister controlRegister; // _008
	// u32 controlRegister;
	/* Probably CPStatus. */
	u32 _00C;        // _00C
	u8 _010[0x6C];   // _010
	u32 _07C;        // _07C
	u8 _080[0x28];   // _080
	GXColor _0A8[2]; // _0A8
	GXColor _0B0[2]; // _0B0
	u32 _0B8[2];     // _0B8
	u32 _0C0;        // _0C0
	u32 _0C4;        // _0C4
	u32 _0C8[2];     // _0C8
	u8 _0D0[0x18];   // _0D0
	u32 _0E8[2];     // _0E8
	u8 _0F0[0x18];   // _0F0
	u32 _108[2];     // _108
	u8 _110[0x10];   // _110
	u32 _120;        // _120
	u32 _124;        // _124
	u32 _128;        // _128
	u32 _12C;        // _12C
	u8 _130[0x40];   // _130
	u32 _170;        // _170
	u32 _174;        // _174
	u32 _178;        // _178
	u32 _17C;        // _17C
	u8 _180[0x84];   // _180
	u32 _204;        // _204
	u8 _208[0x4C];   // _208
	u32 _254;        // _254
	u8 _258[0x354];  // _258
	u32 _5AC;        // _5AC
} GXData;
extern GXData* __GXData;

typedef enum _CPStatus {
	GX_FIFO_OVERFLOW        = 0x1,
	GX_FIFO_UNDERFLOW       = 0x2,
	GP_IS_IDLE_FOR_READING  = 0x4,
	GP_IS_IDLE_FOR_COMMANDS = 0x8,
	BP_INTERRUPT            = 0x10
} CPStatus;

typedef enum _CPControl {
	GP_FIFO_READ_ENABLE             = 0x1,
	CP_IRQ_ENABLE_MAYBE             = 0x2,
	FIFO_OVERFLOW_IRQ_ENABLE_MAYBE  = 0x4,
	FIFO_UNDERFLOW_IRQ_ENABLE_MAYBE = 0x8,
	GP_LINK_ENABLE                  = 0x10,
	BP_ENABLE                       = 0x20
} CPControl;

typedef enum _CPClear { CLEAR_FIFO_OVERFLOW = 0x1, CLEAR_FIFO_UNDERFLOW = 0x2 } CPClear;

typedef struct _CPReg {
	u16 statusRegister;        // _00 /* CPStatus */
	u16 controlRegister;       // _02 /* CPControl */
	u16 clearRegister;         // _04 /* CPClear */
	u16 _06;                   // _06
	u16 _08;                   // _08
	u16 _0A;                   // _0A
	u16 _0C;                   // _0C
	u16 tokenRegister;         // _0E
	u16 boundingBoxLeft;       // _10
	u16 boundingBoxRight;      // _12
	u16 boundingBoxTop;        // _14
	u16 boundingBoxBottom;     // _16
	u16 _18;                   // _18
	u16 _1A;                   // _1A
	u16 _1C;                   // _1C
	u16 _1E;                   // _1E
	u16 cpFIFOBaseLo;          // _20
	u16 cpFIFOBaseHi;          // _22
	u16 cpFIFOEndLo;           // _24
	u16 cpFIFOEndHi;           // _26
	u16 cpFIFOHighWatermarkLo; // _28
	u16 cpFIFOHighWatermarkHi; // _2A
	u16 cpFIFOLowWatermarkLo;  // _2C
	u16 cpFIFOLowWatermarkHi;  // _2E
	u16 cpFIFORWDistanceLo;    // _30
	u16 cpFIFORWDistanceHi;    // _32
	u16 cpFIFOWritePointerLo;  // _34
	u16 cpFIFOWritePointerHi;  // _36
	u16 cpFIFOReadPointerLo;   // _38
	u16 cpFIFOReadPointerHi;   // _3A
	u16 cpFIFOBPLo;            // _3C
	u16 cpFIFOBPHi;            // _3E
	u8 _40[0x40];              // _40
} CPReg;
extern CPReg* __cpReg;

typedef struct _PIReg {
	u32 INTSR;                       // _00
	u32 INTMR;                       // _04
	u32 _08;                         // _08
	u32 fifoBase;                    // _0C
	u32 fifoEnd;                     // _10
	u32 cpuFIFOCurrentWritePtrMaybe; // _14
	u32 _18;                         // _18
	u32 _1C;                         // _1C
	u32 _20;                         // _20
	u32 resetMaybe;                  // _24
	u32 _28;                         // _28
	u32 _2C;                         // _2C
	u32 _30;                         // _30
	u32 _34;                         // _34
	u32 _38;                         // _38
	u32 _3C;                         // _3C
	u32 _40;                         // _40
	u32 _44;                         // _44
	u32 _48;                         // _48
	u32 _4C;                         // _4C
	u32 _50;                         // _50
	u32 _54;                         // _54
	u32 _58;                         // _58
	u32 _5C;                         // _5C
	u32 _60;                         // _60
	u32 _64;                         // _64
	u32 _68;                         // _68
	u32 _6C;                         // _6C
	u32 _70;                         // _70
	u32 _74;                         // _74
	u32 _78;                         // _78
	u32 _7C;                         // _7C
	u32 _80;                         // _80
	u32 _84;                         // _84
	u32 _88;                         // _88
	u32 _8C;                         // _8C
	u32 _90;                         // _90
	u32 _94;                         // _94
	u32 _98;                         // _98
	u32 _9C;                         // _9C
	u32 _A0;                         // _A0
	u32 _A4;                         // _A4
	u32 _A8;                         // _A8
	u32 _AC;                         // _AC
	u32 _B0;                         // _B0
	u32 _B4;                         // _B4
	u32 _B8;                         // _B8
	u32 _BC;                         // _BC
	u32 _C0;                         // _C0
	u32 _C4;                         // _C4
	u32 _C8;                         // _C8
	u32 _CC;                         // _CC
	u32 _D0;                         // _D0
	u32 _D4;                         // _D4
	u32 _D8;                         // _D8
	u32 _DC;                         // _DC
	u32 _E0;                         // _E0
	u32 _E4;                         // _E4
	u32 _E8;                         // _E8
	u32 _EC;                         // _EC
	u32 _F0;                         // _F0
	u32 _F4;                         // _F4
	u32 _F8;                         // _F8
	u32 _FC;                         // _FC
} PIReg;
extern PIReg* __piReg;

void __GXSetDirtyState();
void __GXSendFlushPrim();

void GXFlush();
void GXSetNumTexGens(u8);
void GXInitLightPos(struct GXLightObj* lt_obj, f32 x, f32 y, f32 z);
void GXInitLightColor(struct GXLightObj* lt_obj, GXColor color);
void GXLoadLightObjImm(struct GXLightObj* lt_obj, GXLightID light);
void GXLoadLightObjIndx(u32 lt_obj_indx, GXLightID light);
void GXSetChanAmbColor(GXChannelID chan, GXColor amb_color);
void GXSetChanMatColor(GXChannelID chan, GXColor mat_color);
void GXSetNumChans(u32);
void GXSetChanCtrl(GXChannelID chan, GXBool enable, GXColorSrc amb_src, GXColorSrc mat_src, GXLightID light_mask, GXDiffuseFn diff_fn,
                   GXAttnFn attn_fn);
void GXSetNumIndStages(u8 num);
void GXSetNumTevStages(u32);
void GXSetTevDirect(GXTevStageID);
void GXSetTevOrder(GXTevStageID, GXTexCoordID, GXTexMapID, GXChannelID);
void GXSetTevOp(GXTevStageID, GXTevMode);
void GXSetTevColor(GXTevRegID, GXColor);
void GXSetTevColorS10(GXTevRegID, GXColorS10);
void GXSetTevSwapMode(GXTevStageID, u32, u32);
void GXSetTevSwapModeTable(GXTevSwapSel, u32, u32, u32, u32);
void GXSetTevColorIn(GXTevStageID, GXTevColorArg, GXTevColorArg, GXTevColorArg, GXTevColorArg);
void GXSetTevAlphaIn(GXTevStageID, GXTevAlphaArg, GXTevAlphaArg, GXTevAlphaArg, GXTevAlphaArg);
void GXSetTevColorOp(GXTevStageID, GXTevOp, GXTevBias, GXTevScale, GXBool, GXTevRegID);
void GXSetTevAlphaOp(GXTevStageID, GXTevOp, GXTevBias, GXTevScale, GXBool, GXTevRegID);
void GXSetTevKColor(GXTevKColorID, GXColor);
void GXSetTevKColorSel(GXTevStageID, GXTevKColorSel);
void GXSetTevKAlphaSel(GXTevStageID, u32); // params might not be right
void GXSetVtxAttrFmt(GXVtxFmt, GXAttr, GXCompCnt, GXCompType, uint);
void GXClearVtxDesc();
void GXSetVtxDesc(GXAttr, GXAttrType);

void GXBeginDisplayList(void*, u32 dlSize);
u32 GXEndDisplayList(void);
void GXCallDisplayList(void*, u32 byteCnt);

void GXSetFog(GXFogType type, f32 startz, f32 endz, f32 nearz, f32 farz, GXColor color);

void GXInitFogAdjTable(GXFogAdjTable* table, u16 width, f32 projmtx[4][4]);

void GXSetFogRangeAdj(GXBool enable, u16 center, GXFogAdjTable* table);

void GXSetBlendMode(GXBlendMode type, GXBlendFactor src_factor, GXBlendFactor dst_factor, GXLogicOp op);

void GXSetColorUpdate(GXBool update_enable);
void GXSetAlphaUpdate(GXBool update_enable);
void GXSetAlphaCompare(GXCompare, u8, GXAlphaOp, GXCompare, u8);
void GXSetDispCopyGamma(GXBool update_enable);
void GXSetZMode(GXBool compare_enable, GXCompare func, GXBool update_enable);
void GXSetCullMode(GXCullMode);
void GXSetCurrentMtx(u32);

void GXSetZCompLoc(GXBool before_tex);
void GXSetPixelFmt(GXPixelFmt pix_fmt, GXZFmt16 z_fmt);
void GXSetDither(GXBool dither);
void GXSetDstAlpha(GXBool enable, u8 alpha);
void GXSetFieldMask(GXBool odd_mask, GXBool even_mask);
void GXSetFieldMode(GXBool field_mode, GXBool half_aspect_ratio);

#define GX_FIFO_OBJ_SIZE 128

typedef struct {
	void* base;        // _00
	void* end;         // _04
	u32 size;          // _08
	u32 highWatermark; // _0C
	u32 lowWatermark;  // _10
	void* readPtr;     // _14
	void* writePtr;    // _18
	s32 rwDistance;    // _1C
	u8 _20[0x60];      // _20
} GXFifoObj;

void GXInitFifoBase(GXFifoObj* fifo, void* base, u32 size);
void GXInitFifoPtrs(GXFifoObj* fifo, void* readPtr, void* writePtr);
void GXInitFifoLimits(GXFifoObj* fifo, u32 highWatermark, u32 lowWatermark);
void GXSaveCPUFifo(GXFifoObj* fifo);

void GXGetGPStatus(GXBool* overhi, GXBool* underlow, GXBool* readIdle, GXBool* cmdIdle, GXBool* brkpt);

void GXSetCPUFifo(GXFifoObj* fifo);
void GXSetGPFifo(GXFifoObj* fifo);
void GXSaveCPUFifo(GXFifoObj* fifo);
void GXSaveGPFifo(GXFifoObj* fifo);

void __GXSaveCPUFifoAux(GXFifoObj* fifo);
void __GXFifoReadEnable();
void __GXFifoReadDisable();
void __GXFifoLink(u8);
void __GXWriteFifoIntEnable(u32, u32);
void __GXWriteFifoIntReset(u32, u32);

void GXSetScissor(u32, u32, u32, u32);
void GXSetProjection(Mtx, GXProjectionType);

typedef void GXBreakpointCallback(void);

GXBreakpointCallback* GXSetBreakPtCallback(GXBreakpointCallback*);

typedef void GXDrawDoneCallback(void);

GXDrawDoneCallback* GXSetDrawDoneCallback(GXDrawDoneCallback*);
void GXSetDrawDone();
void GXDrawDone();

void GXCopyDisp(void*, GXBool); // TODO: Confirm types

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
	GX_TL_RGB5A3  // When MSB=1, RGB555 format (opaque), and when MSB=0, RGBA4443
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
void GXInitTlutRegion(u32*, int, u32);
void GXLoadTlut(GXTlutObj*, _GXTlut);
void GXSetTlutRegionCallback(GXTlutRegionCallback*);

GXTlutRegion* __GXDefaultTlutRegionCallback(_GXTlut);
void GXInitTexObj(GXTexObj*, void*, u16, u16, GXTexFmt, GXTexWrapMode, GXTexWrapMode, GXBool);
void GXInitTexObjLOD(GXTexObj*, GXTexFilter, GXTexFilter, float, float, float, GXBool, GXBool, GXAnisotropy);
void GXLoadTexObj(GXTexObj*, GXTexMapID);
void GXBegin(GXPrimitive, GXVtxFmt, u16);

void GXLoadPosMtxImm(Mtx, int);
void GXLoadNrmMtxImm(Mtx, int);
void GXLoadTexMtxImm(Mtx, u32, GXTexMtxType);

void GXSetTexCoordGen2(GXTexCoordID, GXTexGenType, GXTexGenSrc, u32, GXBool, u32);
void GXSetLineWidth(u8, GXTexOffset);
// TODO: Types
void GXSetPointSize(u8, s32);

u16 GXGetNumXfbLines(float, u16);
float GXGetYScaleFactor(u16, u16);

void GXSetViewport(float, float, float, float, float, float);
void GXSetTevKColor(GXTevKColorID, GXColor);

// added GXPosition and GXFifo from smb-decomp/GXVert.h, thanks to encounter for doing this!
// need to confirm these are the same for Pikmin 2 - currently used by plugProjectNishimuraU/MapUnit.cpp in UnitInfo::draw()

#define GXFIFO_ADDR 0xCC008000

typedef union {
	u8 u8;
	u16 u16;
	u32 u32;
	u64 u64;
	s8 s8;
	s16 s16;
	s32 s32;
	s64 s64;
	f32 f32;
	f64 f64;
} PPCWGPipe;

#ifdef __MWERKS__
volatile PPCWGPipe GXWGFifo : GXFIFO_ADDR;
#else
volatile PPCWGPipe GXWGFifo;
#endif

inline void GXSetWasteFlags()
{
	GXData* data = __GXData;
	data->_5AC |= 0x3;
	data->_000[1] = 0;
}

static inline void GXPosition2f32(const f32 x, const f32 y)
{
	GXWGFifo.f32 = x;
	GXWGFifo.f32 = y;
}

static inline void GXPosition3s16(const s16 x, const s16 y, const s16 z)
{
	GXWGFifo.s16 = x;
	GXWGFifo.s16 = y;
	GXWGFifo.s16 = z;
}

static inline void GXPosition3f32(const f32 x, const f32 y, const f32 z)
{
	GXWGFifo.f32 = x;
	GXWGFifo.f32 = y;
	GXWGFifo.f32 = z;
}

static inline void GXNormal3f32(const f32 x, const f32 y, const f32 z)
{
	GXWGFifo.f32 = x;
	GXWGFifo.f32 = y;
	GXWGFifo.f32 = z;
}

static inline void GXColor1u32(u32 c) { GXWGFifo.u32 = c; }

static inline void GXColor4u8(const u8 r, const u8 g, const u8 b, const u8 a)
{
	GXWGFifo.u8 = r;
	GXWGFifo.u8 = g;
	GXWGFifo.u8 = b;
	GXWGFifo.u8 = a;
}

static inline void GXTexCoord2s8(const s8 u, const s8 v)
{
	GXWGFifo.s8 = u;
	GXWGFifo.s8 = v;
}

static inline void GXTexCoord2s16(const s16 u, const s16 v)
{
	GXWGFifo.s16 = u;
	GXWGFifo.s16 = v;
}

static inline void GXTexCoord2f32(const f32 u, const f32 v)
{
	GXWGFifo.f32 = u;
	GXWGFifo.f32 = v;
}

static inline void GXEnd(void) { }

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
// #pragma reverse_bitfields reset

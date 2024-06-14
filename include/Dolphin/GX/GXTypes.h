#ifndef _DOLPHIN_GXTYPES_H
#define _DOLPHIN_GXTYPES_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

#include "Dolphin/GX/GXEnum.h"
#include "Dolphin/vi.h"

///////////// USEFUL HELPERS ///////////////
// Set bitfields manually.
#define GX_BITFIELD(field, pos, size, value)       (__rlwimi((field), (value), 31 - (pos) - (size) + 1, (pos), (pos) + (size)-1))
#define GX_BITFIELD_SET(field, pos, size, value)   ((field) = GX_BITFIELD(field, pos, size, value))
#define GX_BITFIELD_TRUNC(field, pos, size, value) (__rlwimi((field), (value), 0, (pos), (pos) + (size)-1))
#define GX_BITGET(field, pos, size)                ((field) >> (31 - (pos) - (size) + 1) & ((1 << (size)) - 1))
////////////////////////////////////////////

////////////////// COLORS //////////////////
// Generic 8-bit-component colors.
typedef struct _GXColor {
	u8 r, g, b, a; // _00, _01, _02, _03
} GXColor;

#define GXCOLOR_AS_U32(color)   (*((u32*)&(color)))
#define RGBA_TO_U32(r, g, b, a) (((u8)(r) << 24) | ((u8)(g) << 16) | ((u8)(b) << 8) | ((u8)(a)))

// Signed 10-bit-component colors for TEV const (konst) colors.
typedef struct _GXColorS10 {
	s16 r, g, b, a; // _00, _02, _04, _06
} GXColorS10;

////////////////////////////////////////////

///////////////// TEXTURES /////////////////
// NB: these are all generic structs. Members aren't
// referenced directly, they only exist for size.

// Generic struct for texture objects.
typedef struct _GXTexObj {
	u8 pad[0x20]; // _00
} GXTexObj;       // size 0x20

// Internal struct for texture objects.
typedef struct _GXTexObjPriv {
	u32 mode0;       // _00
	u32 mode1;       // _04
	u32 image0;      // _08
	u32 image3;      // _0C
	void* userData;  // _10
	GXTexFmt format; // _14
	u32 tlutName;    // _18
	u16 loadCount;   // _1C
	u8 loadFormat;   // _1E
	u8 flags;        // _1F
} GXTexObjPriv;

// Generic struct for texture memory storage.
typedef struct _GXTexRegion {
	u8 padding[0x10]; // _00
} GXTexRegion;

typedef struct _GXTexRegionPriv {
	u32 unk0;      // _00
	u32 unk4;      // _04
	u32 unk8;      // _08
	u8 unkC;       // _0C
	u8 unkD;       // _0D
	u8 padding[2]; // _0E
} GXTexRegionPriv;

// Generic struct for texture look-up table objects.
typedef struct _GXTlutObj {
	u8 padding[0xc]; // _00
} GXTlutObj;

typedef struct _GXTlutObjPriv {
	u32 unk0;        // _00
	u32 unk4;        // _04
	u16 numEntries;  // _08
	u8 padding[0x2]; // _0A
} GXTlutObjPriv;

// Generic struct for texture look-up table memory storage.
typedef struct _GXTlutRegion {
	u8 padding[0x10]; // _00
} GXTlutRegion;

typedef struct _GXTlutRegionPriv {
	u32 unk0;              // _00
	GXTlutObjPriv tlutObj; // _04
} GXTlutRegionPriv;

// Generic struct for light information.
typedef struct _GXLightObj {
	u8 padding[0x40]; // _00
} GXLightObj;         // size 0x40

typedef struct __GXLightObjPriv {
	u32 reserved[3]; // _00
	GXColor color;   // _0C, light color
	f32 a[3];        // _10, angle-attenuation coefficients
	f32 k[3];        // _1C, distance-attenuation coefficients
	f32 lpos[3];     // _28, diffuse: position;  specular: direction
	f32 ldir[3];     // _34, diffuse: direction; specular: half-angle
} GXLightObjPriv;

////////////////////////////////////////////

/////////////// VERTEX INFO ////////////////
// Struct for vertex descriptive info.
typedef struct _GXVtxDescList {
	GXAttr mAttr;     // _00
	GXAttrType mType; // _04
} GXVtxDescList;

// Struct for vertex attribute formats.
typedef struct _GXVtxAttrFmtList {
	GXAttr mAttr;     // _00
	GXCompCnt mCount; // _04
	GXCompType mType; // _08
	u8 mFrac;         // _0C
} GXVtxAttrFmtList;

////////////////////////////////////////////

///////////// OTHER RENDERING //////////////
// Struct for rendering modes.
typedef struct _GXRenderModeObj {
	VITVMode viTVmode;        // _00
	u16 fbWidth;              // _04, frame buffer width (same for emb. and ext.)
	u16 efbHeight;            // _06, embedded frame buffer height
	u16 xfbHeight;            // _08, external frame buffer height (may scale emb.)
	u16 viXOrigin;            // _0A
	u16 viYOrigin;            // _0C
	u16 viWidth;              // _0E
	u16 viHeight;             // _10
	VIXFBMode xFBmode;        // _14, single or double field for external frame buffer
	u8 field_rendering;       // _18, rendering fields/frames
	u8 aa;                    // _19, is anti-aliasing on
	u8 sample_pattern[12][2]; // _1C, anti-aliasing sample pattern
	u8 vfilter[7];            // _34, vertical filter coeffs
} GXRenderModeObj;

// Struct for storing fog adjustment values.
typedef struct _GXFogAdjTable {
	u16 fogVals[10]; // _00
} GXFogAdjTable;

////////////////////////////////////////////

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif

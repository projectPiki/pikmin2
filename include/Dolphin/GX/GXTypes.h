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
#define GX_BITFIELD_SET(field, pos, size, value) ((field) = __rlwimi((field), (value), 31 - (pos) - (size) + 1, (pos), (pos) + (size)-1))
#define LOAD_GX_FIELD(offset, type)              (*(type*)(((u8*)__GXData) + offset))
#define GX_BITGET(field, pos, size)              ((field) >> (31 - (pos) - (size) + 1) & ((1 << (size)) - 1))
////////////////////////////////////////////

////////////////// COLORS //////////////////
// Generic 8-bit-component colors.
typedef struct _GXColor {
	u8 r, g, b, a; // _00, _01, _02, _03
} GXColor;

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

	// structure of obj, note as found:
	u32 _00;
	u32 _04;
	u32 _08;
	u32 _0c;
	u8 _10;
	u8 _11;
	u8 _12;
	u8 _13;
	GXTexFmt format; // _14
	u32 tlut_name_18;
	u16 _1c;
	s8 _1e;
	s8 mipmap_1f;
} GXTexObj; // size 0x20

// Generic struct for texture memory storage.
typedef struct _GXTexRegion {
	u8 padding[0x10]; // _00
} GXTexRegion;

// Generic struct for texture look-up table objects.
typedef struct _GXTlutObj {
	u8 padding[0xC]; // _00
} GXTlutObj;

// Generic struct for texture look-up table memory storage.
typedef struct _GXTlutRegion {
	u8 padding[0x10]; // _00
} GXTlutRegion;

// Generic struct for light information.
typedef struct _GXLightObj {
	// u8 padding[0x40]; // _00

	// structure of obj, note as found:
	u32 reserved[3];
	GXColor Color; // _0C, light color
	f32 a[3];      // _10, angle-attenuation coefficients
	f32 k[3];      // _1C, distance-attenuation coefficients
	f32 lpos[3];   // _28, diffuse: position;  specular: direction
	f32 ldir[3];   // _34, diffuse: direction; specular: half-angle
} GXLightObj;      // size 0x40

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

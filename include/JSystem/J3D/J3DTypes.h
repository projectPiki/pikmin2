#ifndef _JSYSTEM_J3D_J3DTYPES_H
#define _JSYSTEM_J3D_J3DTYPES_H

#include "types.h"

// TODO: Make a bitmask enum
/**
 * @fabricatedName
 */
typedef uint J3DModelLoaderFlags;

// TODO: Convert to '' notation when not lazy.
enum JBlockType {
	COLOR_AMBIENT_ON = 0x434c4142,
	COLOR_NULL       = 0x434c4e4c,
	COLOR_LIGHT_OFF  = 0x434c4f46,
	COLOR_LIGHT_ON   = 0x434c4f4e,
	IND_FULL         = 0x49424c46,
	IND_NULL         = 0x49424c4e,
	PE_TEX_EDGE      = 0x50454544,
	PE_FOG_OFF       = 0x50454647,
	PE_FULL          = 0x5045464c,
	PE_NULL          = 0x50454e4c,
	PE_OPA           = 0x50454f50,
	PE_XLU           = 0x5045584c,
	TEX_GEN_4        = 0x54474234,
	TEX_GEN_BASIC    = 0x54474243,
	TEX_GEN_NULL     = 0x54474e4c,
	TEX_GEN_PATCHED  = 0x54475054,
	TEV_16           = 0x54563136,
	TEV_1            = 0x54564231,
	TEV_2            = 0x54564232,
	TEV_4            = 0x54564234,
	TEV_8            = 0x54564238,
	TEV_NULL         = 0x54564e4c,
	TEV_PATCHED      = 0x54565054
};

// TODO: Determine if this needs packing pragmas to make it exactly 6 bytes
/**
 * @size{0x6}
 */
struct J3DTexCoord {
	u8 _00;     // _00
	u8 _01;     // _01
	u8 _02;     // _02
	u16 _04; // _04
};

struct J3DNBTScale {
	u8 _00;    // _00
	float _04; // _04
	float _08; // _08
	float _0C; // _0C
};

#endif

#ifndef _DOLPHIN_GXHARDWAREBP_H
#define _DOLPHIN_GXHARDWAREBP_H
#include "Dolphin/GX/GXTypes.h"
#include "types.h"
#ifdef __cplusplus
extern "C" {
#endif

/******************************************************************************
 *
 *
 * GX Blitting Processor (BP)
 *
 *
 *****************************************************************************/

/**
 * BP registers
 */
typedef enum {
	GX_BP_REG_GENMODE            = 0x0,
	GX_BP_REG_DISPCOPYFILTER0    = 0x1,
	GX_BP_REG_DISPCOPYFILTER1    = 0x2,
	GX_BP_REG_DISPCOPYFILTER2    = 0x3,
	GX_BP_REG_DISPCOPYFILTER3    = 0x4,
	GX_BP_REG_INDMTX0A           = 0x6,
	GX_BP_REG_INDMTX0B           = 0x7,
	GX_BP_REG_INDMTX0C           = 0x8,
	GX_BP_REG_INDMTX1A           = 0x9,
	GX_BP_REG_INDMTX1B           = 0xA,
	GX_BP_REG_INDMTX1C           = 0xB,
	GX_BP_REG_INDMTX2A           = 0xC,
	GX_BP_REG_INDMTX2B           = 0xD,
	GX_BP_REG_INDMTX2C           = 0xE,
	GX_BP_REG_INDIMASK           = 0xF,
	GX_BP_REG_INDTEVSTAGE0       = 0x10,
	GX_BP_REG_INDTEVSTAGE1       = 0x11,
	GX_BP_REG_INDTEVSTAGE2       = 0x12,
	GX_BP_REG_INDTEVSTAGE3       = 0x13,
	GX_BP_REG_INDTEVSTAGE4       = 0x14,
	GX_BP_REG_INDTEVSTAGE5       = 0x15,
	GX_BP_REG_INDTEVSTAGE6       = 0x16,
	GX_BP_REG_INDTEVSTAGE7       = 0x17,
	GX_BP_REG_INDTEVSTAGE8       = 0x18,
	GX_BP_REG_INDTEVSTAGE9       = 0x19,
	GX_BP_REG_INDTEVSTAGE10      = 0x1A,
	GX_BP_REG_INDTEVSTAGE11      = 0x1B,
	GX_BP_REG_INDTEVSTAGE12      = 0x1C,
	GX_BP_REG_INDTEVSTAGE13      = 0x1D,
	GX_BP_REG_INDTEVSTAGE14      = 0x1E,
	GX_BP_REG_INDTEVSTAGE15      = 0x1F,
	GX_BP_REG_SCISSORTL          = 0x20,
	GX_BP_REG_SCISSORBR          = 0x21,
	GX_BP_REG_LINEPTWIDTH        = 0x22,
	GX_BP_REG_PERF0TRI           = 0x23,
	GX_BP_REG_PERF0QUAD          = 0x24,
	GX_BP_REG_RAS1_SS0           = 0x25,
	GX_BP_REG_RAS1_SS1           = 0x26,
	GX_BP_REG_RAS1_IREF          = 0x27,
	GX_BP_REG_RAS1_TREF0         = 0x28,
	GX_BP_REG_RAS1_TREF1         = 0x29,
	GX_BP_REG_RAS1_TREF2         = 0x2A,
	GX_BP_REG_RAS1_TREF3         = 0x2B,
	GX_BP_REG_RAS1_TREF4         = 0x2C,
	GX_BP_REG_RAS1_TREF5         = 0x2D,
	GX_BP_REG_RAS1_TREF6         = 0x2E,
	GX_BP_REG_RAS1_TREF7         = 0x2F,
	GX_BP_REG_SU_SSIZE0          = 0x30,
	GX_BP_REG_SU_TSIZE0          = 0x31,
	GX_BP_REG_SU_SSIZE1          = 0x32,
	GX_BP_REG_SU_TSIZE1          = 0x33,
	GX_BP_REG_SU_SSIZE2          = 0x34,
	GX_BP_REG_SU_TSIZE2          = 0x35,
	GX_BP_REG_SU_SSIZE3          = 0x36,
	GX_BP_REG_SU_TSIZE3          = 0x37,
	GX_BP_REG_SU_SSIZE4          = 0x38,
	GX_BP_REG_SU_TSIZE4          = 0x39,
	GX_BP_REG_SU_SSIZE5          = 0x3A,
	GX_BP_REG_SU_TSIZE5          = 0x3B,
	GX_BP_REG_SU_SSIZE6          = 0x3C,
	GX_BP_REG_SU_TSIZE6          = 0x3D,
	GX_BP_REG_SU_SSIZE7          = 0x3E,
	GX_BP_REG_SU_TSIZE7          = 0x3F,
	GX_BP_REG_ZMODE              = 0x40,
	GX_BP_REG_BLENDMODE          = 0x41,
	GX_BP_REG_DSTALPHA           = 0x42,
	GX_BP_REG_ZCONTROL           = 0x43,
	GX_BP_REG_FIELDMASK          = 0x44,
	GX_BP_REG_DRAWDONE           = 0x45,
	GX_BP_REG_PETOKEN            = 0x47,
	GX_BP_REG_PETOKENINT         = 0x48,
	GX_BP_REG_TEXCOPYSRCXY       = 0x49,
	GX_BP_REG_TEXCOPYSRCWH       = 0x4A,
	GX_BP_REG_TEXCOPYDST         = 0x4B,
	GX_BP_REG_DISPCOPYSTRIDE     = 0x4D,
	GX_BP_REG_DISPCOPYSCALEY     = 0x4E,
	GX_BP_REG_COPYCLEARAR        = 0x4F,
	GX_BP_REG_COPYCLEARGB        = 0x50,
	GX_BP_REG_COPYCLEARZ         = 0x51,
	GX_BP_REG_COPYFILTER0        = 0x53,
	GX_BP_REG_COPYFILTER1        = 0x54,
	GX_BP_REG_BOUNDINGBOX0       = 0x55,
	GX_BP_REG_BOUNDINGBOX1       = 0x56,
	GX_BP_REG_SCISSOROFFSET      = 0x59,
	GX_BP_REG_TMEMPRELOADADDR    = 0x60,
	GX_BP_REG_TMEMPRELOADEVEN    = 0x61,
	GX_BP_REG_TMEMPRELOADODD     = 0x62,
	GX_BP_REG_TMEMPRELOADMODE    = 0x63,
	GX_BP_REG_TMEMTLUTSRC        = 0x64,
	GX_BP_REG_TMEMTLUTDST        = 0x65,
	GX_BP_REG_TMEMTEXINVALIDATE  = 0x66,
	GX_BP_REG_PERF1              = 0x67,
	GX_BP_REG_FIELDMODE          = 0x68,
	GX_BP_REG_SETMODE0_TEX0      = 0x80,
	GX_BP_REG_SETMODE0_TEX1      = 0x81,
	GX_BP_REG_SETMODE0_TEX2      = 0x82,
	GX_BP_REG_SETMODE0_TEX3      = 0x83,
	GX_BP_REG_SETMODE1_TEX0      = 0x84,
	GX_BP_REG_SETMODE1_TEX1      = 0x85,
	GX_BP_REG_SETMODE1_TEX2      = 0x86,
	GX_BP_REG_SETMODE1_TEX3      = 0x87,
	GX_BP_REG_SETIMAGE0_TEX0     = 0x88,
	GX_BP_REG_SETIMAGE0_TEX1     = 0x89,
	GX_BP_REG_SETIMAGE0_TEX2     = 0x8A,
	GX_BP_REG_SETIMAGE0_TEX3     = 0x8B,
	GX_BP_REG_SETIMAGE1_TEX0     = 0x8C,
	GX_BP_REG_SETIMAGE1_TEX1     = 0x8D,
	GX_BP_REG_SETIMAGE1_TEX2     = 0x8E,
	GX_BP_REG_SETIMAGE1_TEX3     = 0x8F,
	GX_BP_REG_SETIMAGE2_TEX0     = 0x90,
	GX_BP_REG_SETIMAGE2_TEX1     = 0x91,
	GX_BP_REG_SETIMAGE2_TEX2     = 0x92,
	GX_BP_REG_SETIMAGE2_TEX3     = 0x93,
	GX_BP_REG_SETIMAGE3_TEX0     = 0x94,
	GX_BP_REG_SETIMAGE3_TEX1     = 0x95,
	GX_BP_REG_SETIMAGE3_TEX2     = 0x96,
	GX_BP_REG_SETIMAGE3_TEX3     = 0x97,
	GX_BP_REG_SETTLUT_TEX0       = 0x98,
	GX_BP_REG_SETTLUT_TEX1       = 0x99,
	GX_BP_REG_SETTLUT_TEX2       = 0x9A,
	GX_BP_REG_SETTLUT_TEX3       = 0x9B,
	GX_BP_REG_SETMODE0_TEX4      = 0xA0,
	GX_BP_REG_SETMODE0_TEX5      = 0xA1,
	GX_BP_REG_SETMODE0_TEX6      = 0xA2,
	GX_BP_REG_SETMODE0_TEX7      = 0xA3,
	GX_BP_REG_SETMODE1_TEX4      = 0xA4,
	GX_BP_REG_SETMODE1_TEX5      = 0xA5,
	GX_BP_REG_SETMODE1_TEX6      = 0xA6,
	GX_BP_REG_SETMODE1_TEX7      = 0xA7,
	GX_BP_REG_SETIMAGE0_TEX4     = 0xA8,
	GX_BP_REG_SETIMAGE0_TEX5     = 0xA9,
	GX_BP_REG_SETIMAGE0_TEX6     = 0xAA,
	GX_BP_REG_SETIMAGE0_TEX7     = 0xAB,
	GX_BP_REG_SETIMAGE1_TEX4     = 0xAC,
	GX_BP_REG_SETIMAGE1_TEX5     = 0xAD,
	GX_BP_REG_SETIMAGE1_TEX6     = 0xAE,
	GX_BP_REG_SETIMAGE1_TEX7     = 0xAF,
	GX_BP_REG_SETIMAGE2_TEX4     = 0xB0,
	GX_BP_REG_SETIMAGE2_TEX5     = 0xB1,
	GX_BP_REG_SETIMAGE2_TEX6     = 0xB2,
	GX_BP_REG_SETIMAGE2_TEX7     = 0xB3,
	GX_BP_REG_SETIMAGE3_TEX4     = 0xB4,
	GX_BP_REG_SETIMAGE3_TEX5     = 0xB5,
	GX_BP_REG_SETIMAGE3_TEX6     = 0xB6,
	GX_BP_REG_SETIMAGE3_TEX7     = 0xB7,
	GX_BP_REG_SETTLUT_TEX4       = 0xB8,
	GX_BP_REG_SETTLUT_TEX5       = 0xB9,
	GX_BP_REG_SETTLUT_TEX6       = 0xBA,
	GX_BP_REG_SETTLUT_TEX7       = 0xBB,
	GX_BP_REG_TEVCOLORCOMBINER0  = 0xC0,
	GX_BP_REG_TEVALPHACOMBINER0  = 0xC1,
	GX_BP_REG_TEVCOLORCOMBINER1  = 0xC2,
	GX_BP_REG_TEVALPHACOMBINER1  = 0xC3,
	GX_BP_REG_TEVCOLORCOMBINER2  = 0xC4,
	GX_BP_REG_TEVALPHACOMBINER2  = 0xC5,
	GX_BP_REG_TEVCOLORCOMBINER3  = 0xC6,
	GX_BP_REG_TEVALPHACOMBINER3  = 0xC7,
	GX_BP_REG_TEVCOLORCOMBINER4  = 0xC8,
	GX_BP_REG_TEVALPHACOMBINER4  = 0xC9,
	GX_BP_REG_TEVCOLORCOMBINER5  = 0xCA,
	GX_BP_REG_TEVALPHACOMBINER5  = 0xCB,
	GX_BP_REG_TEVCOLORCOMBINER6  = 0xCC,
	GX_BP_REG_TEVALPHACOMBINER6  = 0xCD,
	GX_BP_REG_TEVCOLORCOMBINER7  = 0xCE,
	GX_BP_REG_TEVALPHACOMBINER7  = 0xCF,
	GX_BP_REG_TEVCOLORCOMBINER8  = 0xD0,
	GX_BP_REG_TEVALPHACOMBINER8  = 0xD1,
	GX_BP_REG_TEVCOLORCOMBINER9  = 0xD2,
	GX_BP_REG_TEVALPHACOMBINER9  = 0xD3,
	GX_BP_REG_TEVCOLORCOMBINER10 = 0xD4,
	GX_BP_REG_TEVALPHACOMBINER10 = 0xD5,
	GX_BP_REG_TEVCOLORCOMBINER11 = 0xD6,
	GX_BP_REG_TEVALPHACOMBINER11 = 0xD7,
	GX_BP_REG_TEVCOLORCOMBINER12 = 0xD8,
	GX_BP_REG_TEVALPHACOMBINER12 = 0xD9,
	GX_BP_REG_TEVCOLORCOMBINER13 = 0xDA,
	GX_BP_REG_TEVALPHACOMBINER13 = 0xDB,
	GX_BP_REG_TEVCOLORCOMBINER14 = 0xDC,
	GX_BP_REG_TEVALPHACOMBINER14 = 0xDD,
	GX_BP_REG_TEVCOLORCOMBINER15 = 0xDE,
	GX_BP_REG_TEVALPHACOMBINER15 = 0xDF,
	GX_BP_REG_TEVREG0LO          = 0xE0,
	GX_BP_REG_TEVREG0HI          = 0xE1,
	GX_BP_REG_TEVREG1LO          = 0xE2,
	GX_BP_REG_TEVREG1HI          = 0xE3,
	GX_BP_REG_TEVREG2LO          = 0xE4,
	GX_BP_REG_TEVREG2HI          = 0xE5,
	GX_BP_REG_TEVREG3LO          = 0xE6,
	GX_BP_REG_TEVREG3HI          = 0xE7,
	GX_BP_REG_FOGRANGE           = 0xE8,
	GX_BP_REG_FOGRANGEK0         = 0xE9,
	GX_BP_REG_FOGRANGEK1         = 0xEA,
	GX_BP_REG_FOGRANGEK2         = 0xEB,
	GX_BP_REG_FOGRANGEK3         = 0xEC,
	GX_BP_REG_FOGRANGEK4         = 0xED,
	GX_BP_REG_FOGPARAM0          = 0xEE,
	GX_BP_REG_FOGPARAM1          = 0xEF,
	GX_BP_REG_FOGPARAM2          = 0xF0,
	GX_BP_REG_FOGPARAM3          = 0xF1,
	GX_BP_REG_FOGCOLOR           = 0xF2,
	GX_BP_REG_ALPHACOMPARE       = 0xF3,
	GX_BP_REG_ZTEXTURE0          = 0xF4,
	GX_BP_REG_ZTEXTURE1          = 0xF5,
	GX_BP_REG_TEVKSEL0           = 0xF6,
	GX_BP_REG_TEVKSEL1           = 0xF7,
	GX_BP_REG_TEVKSEL2           = 0xF8,
	GX_BP_REG_TEVKSEL3           = 0xF9,
	GX_BP_REG_TEVKSEL4           = 0xFA,
	GX_BP_REG_TEVKSEL5           = 0xFB,
	GX_BP_REG_TEVKSEL6           = 0xFC,
	GX_BP_REG_TEVKSEL7           = 0xFD,
	GX_BP_REG_SSMASK             = 0xFE,
} GX_BP_REG;

/**
 * BP register 0x0 - GenMode
 */
// NUMTEX [28:31] (4) - Active texture count
#define GX_BP_GENMODE_NUMTEX_ST          28
#define GX_BP_GENMODE_NUMTEX_END         31
#define GX_BP_GENMODE_NUMTEX_SZ          4
#define GX_BP_GENMODE_NUMTEX_MASK        (((1 << 4) - 1) << 31 - 31)
#define GX_BP_GET_GENMODE_NUMTEX(reg)    GX_BITGET(reg, 28, 4)
#define GX_BP_SET_GENMODE_NUMTEX(reg, x) (GX_BITFIELD_SET(reg, 28, 4, x))
// NUMCOLORS [25:27] (3) - Color/channel count
#define GX_BP_GENMODE_NUMCOLORS_ST          25
#define GX_BP_GENMODE_NUMCOLORS_END         27
#define GX_BP_GENMODE_NUMCOLORS_SZ          3
#define GX_BP_GENMODE_NUMCOLORS_MASK        (((1 << 3) - 1) << 31 - 27)
#define GX_BP_GET_GENMODE_NUMCOLORS(reg)    GX_BITGET(reg, 25, 3)
#define GX_BP_SET_GENMODE_NUMCOLORS(reg, x) (GX_BITFIELD_SET(reg, 25, 3, x))
// MULTISAMPLE [22:22] (1)
#define GX_BP_GENMODE_MULTISAMPLE_ST          22
#define GX_BP_GENMODE_MULTISAMPLE_END         22
#define GX_BP_GENMODE_MULTISAMPLE_SZ          1
#define GX_BP_GENMODE_MULTISAMPLE_MASK        (((1 << 1) - 1) << 31 - 22)
#define GX_BP_GET_GENMODE_MULTISAMPLE(reg)    GX_BITGET(reg, 22, 1)
#define GX_BP_SET_GENMODE_MULTISAMPLE(reg, x) (GX_BITFIELD_SET(reg, 22, 1, x))
// CULLMODE [16:17] (2)
#define GX_BP_GENMODE_CULLMODE_ST          16
#define GX_BP_GENMODE_CULLMODE_END         17
#define GX_BP_GENMODE_CULLMODE_SZ          2
#define GX_BP_GENMODE_CULLMODE_MASK        (((1 << 2) - 1) << 31 - 17)
#define GX_BP_GET_GENMODE_CULLMODE(reg)    GX_BITGET(reg, 16, 2)
#define GX_BP_SET_GENMODE_CULLMODE(reg, x) (GX_BITFIELD_SET(reg, 16, 2, x))
// NUMINDSTAGES [13:15] (3)
#define GX_BP_GENMODE_NUMINDSTAGES_ST          13
#define GX_BP_GENMODE_NUMINDSTAGES_END         15
#define GX_BP_GENMODE_NUMINDSTAGES_SZ          3
#define GX_BP_GENMODE_NUMINDSTAGES_MASK        (((1 << 3) - 1) << 31 - 15)
#define GX_BP_GET_GENMODE_NUMINDSTAGES(reg)    GX_BITGET(reg, 13, 3)
#define GX_BP_SET_GENMODE_NUMINDSTAGES(reg, x) (GX_BITFIELD_SET(reg, 13, 3, x))
// COPLANAR [12:12] (1) - Toggle co-planar ("Z freeze" according to Dolphin)
#define GX_BP_GENMODE_COPLANAR_ST          12
#define GX_BP_GENMODE_COPLANAR_END         12
#define GX_BP_GENMODE_COPLANAR_SZ          1
#define GX_BP_GENMODE_COPLANAR_MASK        (((1 << 1) - 1) << 31 - 12)
#define GX_BP_GET_GENMODE_COPLANAR(reg)    GX_BITGET(reg, 12, 1)
#define GX_BP_SET_GENMODE_COPLANAR(reg, x) (GX_BITFIELD_SET(reg, 12, 1, x))

/**
 * BP structure - IndMtxA
 */
// M00 [21:31] (11) - Texture offset matrix #0 [0][0]
#define GX_BP_INDMTXA_M00_ST          21
#define GX_BP_INDMTXA_M00_END         31
#define GX_BP_INDMTXA_M00_SZ          11
#define GX_BP_INDMTXA_M00_MASK        (((1 << 11) - 1) << 31 - 31)
#define GX_BP_GET_INDMTXA_M00(reg)    GX_BITGET(reg, 21, 11)
#define GX_BP_SET_INDMTXA_M00(reg, x) (GX_BITFIELD_SET(reg, 21, 11, x))
// M10 [10:20] (11) - Texture offset matrix #0 [1][0]
#define GX_BP_INDMTXA_M10_ST          10
#define GX_BP_INDMTXA_M10_END         20
#define GX_BP_INDMTXA_M10_SZ          11
#define GX_BP_INDMTXA_M10_MASK        (((1 << 11) - 1) << 31 - 20)
#define GX_BP_GET_INDMTXA_M10(reg)    GX_BITGET(reg, 10, 11)
#define GX_BP_SET_INDMTXA_M10(reg, x) (GX_BITFIELD_SET(reg, 10, 11, x))
// EXP [8:9] (2) - Bits 0-1 of scaling exponent #0 (2^x)
#define GX_BP_INDMTXA_EXP_ST          8
#define GX_BP_INDMTXA_EXP_END         9
#define GX_BP_INDMTXA_EXP_SZ          2
#define GX_BP_INDMTXA_EXP_MASK        (((1 << 2) - 1) << 31 - 9)
#define GX_BP_GET_INDMTXA_EXP(reg)    GX_BITGET(reg, 8, 2)
#define GX_BP_SET_INDMTXA_EXP(reg, x) (GX_BITFIELD_SET(reg, 8, 2, x))

/**
 * BP structure - IndMtxB
 */
// M01 [21:31] (11) - Texture offset matrix #0 [0][1]
#define GX_BP_INDMTXB_M01_ST          21
#define GX_BP_INDMTXB_M01_END         31
#define GX_BP_INDMTXB_M01_SZ          11
#define GX_BP_INDMTXB_M01_MASK        (((1 << 11) - 1) << 31 - 31)
#define GX_BP_GET_INDMTXB_M01(reg)    GX_BITGET(reg, 21, 11)
#define GX_BP_SET_INDMTXB_M01(reg, x) (GX_BITFIELD_SET(reg, 21, 11, x))
// M11 [10:20] (11) - Texture offset matrix #0 [1][1]
#define GX_BP_INDMTXB_M11_ST          10
#define GX_BP_INDMTXB_M11_END         20
#define GX_BP_INDMTXB_M11_SZ          11
#define GX_BP_INDMTXB_M11_MASK        (((1 << 11) - 1) << 31 - 20)
#define GX_BP_GET_INDMTXB_M11(reg)    GX_BITGET(reg, 10, 11)
#define GX_BP_SET_INDMTXB_M11(reg, x) (GX_BITFIELD_SET(reg, 10, 11, x))
// EXP [8:9] (2) - Bits 2-3 of scaling exponent #0 (2^x)
#define GX_BP_INDMTXB_EXP_ST          8
#define GX_BP_INDMTXB_EXP_END         9
#define GX_BP_INDMTXB_EXP_SZ          2
#define GX_BP_INDMTXB_EXP_MASK        (((1 << 2) - 1) << 31 - 9)
#define GX_BP_GET_INDMTXB_EXP(reg)    GX_BITGET(reg, 8, 2)
#define GX_BP_SET_INDMTXB_EXP(reg, x) (GX_BITFIELD_SET(reg, 8, 2, x))

/**
 * BP structure - IndMtxC
 */
// M02 [21:31] (11) - Texture offset matrix #0 [0][2]
#define GX_BP_INDMTXC_M02_ST          21
#define GX_BP_INDMTXC_M02_END         31
#define GX_BP_INDMTXC_M02_SZ          11
#define GX_BP_INDMTXC_M02_MASK        (((1 << 11) - 1) << 31 - 31)
#define GX_BP_GET_INDMTXC_M02(reg)    GX_BITGET(reg, 21, 11)
#define GX_BP_SET_INDMTXC_M02(reg, x) (GX_BITFIELD_SET(reg, 21, 11, x))
// M12 [10:20] (11) - Texture offset matrix #0 [1][2]
#define GX_BP_INDMTXC_M12_ST          10
#define GX_BP_INDMTXC_M12_END         20
#define GX_BP_INDMTXC_M12_SZ          11
#define GX_BP_INDMTXC_M12_MASK        (((1 << 11) - 1) << 31 - 20)
#define GX_BP_GET_INDMTXC_M12(reg)    GX_BITGET(reg, 10, 11)
#define GX_BP_SET_INDMTXC_M12(reg, x) (GX_BITFIELD_SET(reg, 10, 11, x))
// EXP [8:9] (2) - Bit 4 of scaling exponent #0 (2^x)
#define GX_BP_INDMTXC_EXP_ST          8
#define GX_BP_INDMTXC_EXP_END         9
#define GX_BP_INDMTXC_EXP_SZ          2
#define GX_BP_INDMTXC_EXP_MASK        (((1 << 2) - 1) << 31 - 9)
#define GX_BP_GET_INDMTXC_EXP(reg)    GX_BITGET(reg, 8, 2)
#define GX_BP_SET_INDMTXC_EXP(reg, x) (GX_BITFIELD_SET(reg, 8, 2, x))

/**
 * BP register 0xF - IndIMask
 */
// IMASK [24:31] (8) - Indirect mask for textures
#define GX_BP_INDIMASK_IMASK_ST          24
#define GX_BP_INDIMASK_IMASK_END         31
#define GX_BP_INDIMASK_IMASK_SZ          8
#define GX_BP_INDIMASK_IMASK_MASK        (((1 << 8) - 1) << 31 - 31)
#define GX_BP_GET_INDIMASK_IMASK(reg)    GX_BITGET(reg, 24, 8)
#define GX_BP_SET_INDIMASK_IMASK(reg, x) (GX_BITFIELD_SET(reg, 24, 8, x))

/**
 * BP structure - IndTevStage
 */
// STAGE [30:31] (2) - Indirect texture stage ID
#define GX_BP_INDTEVSTAGE_STAGE_ST          30
#define GX_BP_INDTEVSTAGE_STAGE_END         31
#define GX_BP_INDTEVSTAGE_STAGE_SZ          2
#define GX_BP_INDTEVSTAGE_STAGE_MASK        (((1 << 2) - 1) << 31 - 31)
#define GX_BP_GET_INDTEVSTAGE_STAGE(reg)    GX_BITGET(reg, 30, 2)
#define GX_BP_SET_INDTEVSTAGE_STAGE(reg, x) (GX_BITFIELD_SET(reg, 30, 2, x))
// FORMAT [28:29] (2) - Indirect texture format
#define GX_BP_INDTEVSTAGE_FORMAT_ST          28
#define GX_BP_INDTEVSTAGE_FORMAT_END         29
#define GX_BP_INDTEVSTAGE_FORMAT_SZ          2
#define GX_BP_INDTEVSTAGE_FORMAT_MASK        (((1 << 2) - 1) << 31 - 29)
#define GX_BP_GET_INDTEVSTAGE_FORMAT(reg)    GX_BITGET(reg, 28, 2)
#define GX_BP_SET_INDTEVSTAGE_FORMAT(reg, x) (GX_BITFIELD_SET(reg, 28, 2, x))
// BIAS [25:27] (3) - Indirect texture bias
#define GX_BP_INDTEVSTAGE_BIAS_ST          25
#define GX_BP_INDTEVSTAGE_BIAS_END         27
#define GX_BP_INDTEVSTAGE_BIAS_SZ          3
#define GX_BP_INDTEVSTAGE_BIAS_MASK        (((1 << 3) - 1) << 31 - 27)
#define GX_BP_GET_INDTEVSTAGE_BIAS(reg)    GX_BITGET(reg, 25, 3)
#define GX_BP_SET_INDTEVSTAGE_BIAS(reg, x) (GX_BITFIELD_SET(reg, 25, 3, x))
// ALPHA [23:24] (2) - Indirect texture alpha
#define GX_BP_INDTEVSTAGE_ALPHA_ST          23
#define GX_BP_INDTEVSTAGE_ALPHA_END         24
#define GX_BP_INDTEVSTAGE_ALPHA_SZ          2
#define GX_BP_INDTEVSTAGE_ALPHA_MASK        (((1 << 2) - 1) << 31 - 24)
#define GX_BP_GET_INDTEVSTAGE_ALPHA(reg)    GX_BITGET(reg, 23, 2)
#define GX_BP_SET_INDTEVSTAGE_ALPHA(reg, x) (GX_BITFIELD_SET(reg, 23, 2, x))
// MTX [19:22] (4) - Indirect texture matrix
#define GX_BP_INDTEVSTAGE_MTX_ST          19
#define GX_BP_INDTEVSTAGE_MTX_END         22
#define GX_BP_INDTEVSTAGE_MTX_SZ          4
#define GX_BP_INDTEVSTAGE_MTX_MASK        (((1 << 4) - 1) << 31 - 22)
#define GX_BP_GET_INDTEVSTAGE_MTX(reg)    GX_BITGET(reg, 19, 4)
#define GX_BP_SET_INDTEVSTAGE_MTX(reg, x) (GX_BITFIELD_SET(reg, 19, 4, x))
// WRAPS [16:18] (3) - S component wrap factor
#define GX_BP_INDTEVSTAGE_WRAPS_ST          16
#define GX_BP_INDTEVSTAGE_WRAPS_END         18
#define GX_BP_INDTEVSTAGE_WRAPS_SZ          3
#define GX_BP_INDTEVSTAGE_WRAPS_MASK        (((1 << 3) - 1) << 31 - 18)
#define GX_BP_GET_INDTEVSTAGE_WRAPS(reg)    GX_BITGET(reg, 16, 3)
#define GX_BP_SET_INDTEVSTAGE_WRAPS(reg, x) (GX_BITFIELD_SET(reg, 16, 3, x))
// WRAPT [13:15] (3) - T component wrap factor
#define GX_BP_INDTEVSTAGE_WRAPT_ST          13
#define GX_BP_INDTEVSTAGE_WRAPT_END         15
#define GX_BP_INDTEVSTAGE_WRAPT_SZ          3
#define GX_BP_INDTEVSTAGE_WRAPT_MASK        (((1 << 3) - 1) << 31 - 15)
#define GX_BP_GET_INDTEVSTAGE_WRAPT(reg)    GX_BITGET(reg, 13, 3)
#define GX_BP_SET_INDTEVSTAGE_WRAPT(reg, x) (GX_BITFIELD_SET(reg, 13, 3, x))
// UTCLOD [12:12] (1) - Whether to use unmodified texcoords for mipmaps
#define GX_BP_INDTEVSTAGE_UTCLOD_ST          12
#define GX_BP_INDTEVSTAGE_UTCLOD_END         12
#define GX_BP_INDTEVSTAGE_UTCLOD_SZ          1
#define GX_BP_INDTEVSTAGE_UTCLOD_MASK        (((1 << 1) - 1) << 31 - 12)
#define GX_BP_GET_INDTEVSTAGE_UTCLOD(reg)    GX_BITGET(reg, 12, 1)
#define GX_BP_SET_INDTEVSTAGE_UTCLOD(reg, x) (GX_BITFIELD_SET(reg, 12, 1, x))
// ADDPREV [11:11] (1) - Whether to add in results from previous tev stage
#define GX_BP_INDTEVSTAGE_ADDPREV_ST          11
#define GX_BP_INDTEVSTAGE_ADDPREV_END         11
#define GX_BP_INDTEVSTAGE_ADDPREV_SZ          1
#define GX_BP_INDTEVSTAGE_ADDPREV_MASK        (((1 << 1) - 1) << 31 - 11)
#define GX_BP_GET_INDTEVSTAGE_ADDPREV(reg)    GX_BITGET(reg, 11, 1)
#define GX_BP_SET_INDTEVSTAGE_ADDPREV(reg, x) (GX_BITFIELD_SET(reg, 11, 1, x))

/**
 * BP register 0x20 - scissorTL
 */
// TOP [21:31] (11) - Top component
#define GX_BP_SCISSORTL_TOP_ST          21
#define GX_BP_SCISSORTL_TOP_END         31
#define GX_BP_SCISSORTL_TOP_SZ          11
#define GX_BP_SCISSORTL_TOP_MASK        (((1 << 11) - 1) << 31 - 31)
#define GX_BP_GET_SCISSORTL_TOP(reg)    GX_BITGET(reg, 21, 11)
#define GX_BP_SET_SCISSORTL_TOP(reg, x) (GX_BITFIELD_SET(reg, 21, 11, x))
// LEFT [9:19] (11) - Left component
#define GX_BP_SCISSORTL_LEFT_ST          9
#define GX_BP_SCISSORTL_LEFT_END         19
#define GX_BP_SCISSORTL_LEFT_SZ          11
#define GX_BP_SCISSORTL_LEFT_MASK        (((1 << 11) - 1) << 31 - 19)
#define GX_BP_GET_SCISSORTL_LEFT(reg)    GX_BITGET(reg, 9, 11)
#define GX_BP_SET_SCISSORTL_LEFT(reg, x) (GX_BITFIELD_SET(reg, 9, 11, x))

/**
 * BP register 0x21 - scissorBR
 */
// BOT [21:31] (11) - Bottom component
#define GX_BP_SCISSORBR_BOT_ST          21
#define GX_BP_SCISSORBR_BOT_END         31
#define GX_BP_SCISSORBR_BOT_SZ          11
#define GX_BP_SCISSORBR_BOT_MASK        (((1 << 11) - 1) << 31 - 31)
#define GX_BP_GET_SCISSORBR_BOT(reg)    GX_BITGET(reg, 21, 11)
#define GX_BP_SET_SCISSORBR_BOT(reg, x) (GX_BITFIELD_SET(reg, 21, 11, x))
// RIGHT [9:19] (11) - Right component
#define GX_BP_SCISSORBR_RIGHT_ST          9
#define GX_BP_SCISSORBR_RIGHT_END         19
#define GX_BP_SCISSORBR_RIGHT_SZ          11
#define GX_BP_SCISSORBR_RIGHT_MASK        (((1 << 11) - 1) << 31 - 19)
#define GX_BP_GET_SCISSORBR_RIGHT(reg)    GX_BITGET(reg, 9, 11)
#define GX_BP_SET_SCISSORBR_RIGHT(reg, x) (GX_BITFIELD_SET(reg, 9, 11, x))

/**
 * BP register 0x22 - linePtWidth
 */
// LINESZ [24:31] (8) - Line size/width
#define GX_BP_LINEPTWIDTH_LINESZ_ST          24
#define GX_BP_LINEPTWIDTH_LINESZ_END         31
#define GX_BP_LINEPTWIDTH_LINESZ_SZ          8
#define GX_BP_LINEPTWIDTH_LINESZ_MASK        (((1 << 8) - 1) << 31 - 31)
#define GX_BP_GET_LINEPTWIDTH_LINESZ(reg)    GX_BITGET(reg, 24, 8)
#define GX_BP_SET_LINEPTWIDTH_LINESZ(reg, x) (GX_BITFIELD_SET(reg, 24, 8, x))
// POINTSZ [16:23] (8) - Point size
#define GX_BP_LINEPTWIDTH_POINTSZ_ST          16
#define GX_BP_LINEPTWIDTH_POINTSZ_END         23
#define GX_BP_LINEPTWIDTH_POINTSZ_SZ          8
#define GX_BP_LINEPTWIDTH_POINTSZ_MASK        (((1 << 8) - 1) << 31 - 23)
#define GX_BP_GET_LINEPTWIDTH_POINTSZ(reg)    GX_BITGET(reg, 16, 8)
#define GX_BP_SET_LINEPTWIDTH_POINTSZ(reg, x) (GX_BITFIELD_SET(reg, 16, 8, x))
// LINEOFS [13:15] (3) - Line offset
#define GX_BP_LINEPTWIDTH_LINEOFS_ST          13
#define GX_BP_LINEPTWIDTH_LINEOFS_END         15
#define GX_BP_LINEPTWIDTH_LINEOFS_SZ          3
#define GX_BP_LINEPTWIDTH_LINEOFS_MASK        (((1 << 3) - 1) << 31 - 15)
#define GX_BP_GET_LINEPTWIDTH_LINEOFS(reg)    GX_BITGET(reg, 13, 3)
#define GX_BP_SET_LINEPTWIDTH_LINEOFS(reg, x) (GX_BITFIELD_SET(reg, 13, 3, x))
// POINTOFS [10:12] (3) - Point offset
#define GX_BP_LINEPTWIDTH_POINTOFS_ST          10
#define GX_BP_LINEPTWIDTH_POINTOFS_END         12
#define GX_BP_LINEPTWIDTH_POINTOFS_SZ          3
#define GX_BP_LINEPTWIDTH_POINTOFS_MASK        (((1 << 3) - 1) << 31 - 12)
#define GX_BP_GET_LINEPTWIDTH_POINTOFS(reg)    GX_BITGET(reg, 10, 3)
#define GX_BP_SET_LINEPTWIDTH_POINTOFS(reg, x) (GX_BITFIELD_SET(reg, 10, 3, x))
// ADJUST_AR [9:9] (1) - Interlacing: adjust for pixels having aspect ratio of 1/2
#define GX_BP_LINEPTWIDTH_ADJUST_AR_ST          9
#define GX_BP_LINEPTWIDTH_ADJUST_AR_END         9
#define GX_BP_LINEPTWIDTH_ADJUST_AR_SZ          1
#define GX_BP_LINEPTWIDTH_ADJUST_AR_MASK        (((1 << 1) - 1) << 31 - 9)
#define GX_BP_GET_LINEPTWIDTH_ADJUST_AR(reg)    GX_BITGET(reg, 9, 1)
#define GX_BP_SET_LINEPTWIDTH_ADJUST_AR(reg, x) (GX_BITFIELD_SET(reg, 9, 1, x))

/**
 * BP register 0x25 - ras1_ss0
 */
// S0 [28:31] (4) - S-component scale (stage 0)
#define GX_BP_RAS1_SS0_S0_ST          28
#define GX_BP_RAS1_SS0_S0_END         31
#define GX_BP_RAS1_SS0_S0_SZ          4
#define GX_BP_RAS1_SS0_S0_MASK        (((1 << 4) - 1) << 31 - 31)
#define GX_BP_GET_RAS1_SS0_S0(reg)    GX_BITGET(reg, 28, 4)
#define GX_BP_SET_RAS1_SS0_S0(reg, x) (GX_BITFIELD_SET(reg, 28, 4, x))
// T0 [24:27] (4) - T-component scale (stage 0)
#define GX_BP_RAS1_SS0_T0_ST          24
#define GX_BP_RAS1_SS0_T0_END         27
#define GX_BP_RAS1_SS0_T0_SZ          4
#define GX_BP_RAS1_SS0_T0_MASK        (((1 << 4) - 1) << 31 - 27)
#define GX_BP_GET_RAS1_SS0_T0(reg)    GX_BITGET(reg, 24, 4)
#define GX_BP_SET_RAS1_SS0_T0(reg, x) (GX_BITFIELD_SET(reg, 24, 4, x))
// S1 [20:23] (4) - S-component scale (stage 1)
#define GX_BP_RAS1_SS0_S1_ST          20
#define GX_BP_RAS1_SS0_S1_END         23
#define GX_BP_RAS1_SS0_S1_SZ          4
#define GX_BP_RAS1_SS0_S1_MASK        (((1 << 4) - 1) << 31 - 23)
#define GX_BP_GET_RAS1_SS0_S1(reg)    GX_BITGET(reg, 20, 4)
#define GX_BP_SET_RAS1_SS0_S1(reg, x) (GX_BITFIELD_SET(reg, 20, 4, x))
// T1 [16:19] (4) - T-component scale (stage 1)
#define GX_BP_RAS1_SS0_T1_ST          16
#define GX_BP_RAS1_SS0_T1_END         19
#define GX_BP_RAS1_SS0_T1_SZ          4
#define GX_BP_RAS1_SS0_T1_MASK        (((1 << 4) - 1) << 31 - 19)
#define GX_BP_GET_RAS1_SS0_T1(reg)    GX_BITGET(reg, 16, 4)
#define GX_BP_SET_RAS1_SS0_T1(reg, x) (GX_BITFIELD_SET(reg, 16, 4, x))

/**
 * BP register 0x26 - ras1_ss1
 */
// S2 [28:31] (4) - S-component scale (stage 2)
#define GX_BP_RAS1_SS1_S2_ST          28
#define GX_BP_RAS1_SS1_S2_END         31
#define GX_BP_RAS1_SS1_S2_SZ          4
#define GX_BP_RAS1_SS1_S2_MASK        (((1 << 4) - 1) << 31 - 31)
#define GX_BP_GET_RAS1_SS1_S2(reg)    GX_BITGET(reg, 28, 4)
#define GX_BP_SET_RAS1_SS1_S2(reg, x) (GX_BITFIELD_SET(reg, 28, 4, x))
// T2 [24:27] (4) - T-component scale (stage 2)
#define GX_BP_RAS1_SS1_T2_ST          24
#define GX_BP_RAS1_SS1_T2_END         27
#define GX_BP_RAS1_SS1_T2_SZ          4
#define GX_BP_RAS1_SS1_T2_MASK        (((1 << 4) - 1) << 31 - 27)
#define GX_BP_GET_RAS1_SS1_T2(reg)    GX_BITGET(reg, 24, 4)
#define GX_BP_SET_RAS1_SS1_T2(reg, x) (GX_BITFIELD_SET(reg, 24, 4, x))
// S3 [20:23] (4) - S-component scale (stage 3)
#define GX_BP_RAS1_SS1_S3_ST          20
#define GX_BP_RAS1_SS1_S3_END         23
#define GX_BP_RAS1_SS1_S3_SZ          4
#define GX_BP_RAS1_SS1_S3_MASK        (((1 << 4) - 1) << 31 - 23)
#define GX_BP_GET_RAS1_SS1_S3(reg)    GX_BITGET(reg, 20, 4)
#define GX_BP_SET_RAS1_SS1_S3(reg, x) (GX_BITFIELD_SET(reg, 20, 4, x))
// T3 [16:19] (4) - T-component scale (stage 3)
#define GX_BP_RAS1_SS1_T3_ST          16
#define GX_BP_RAS1_SS1_T3_END         19
#define GX_BP_RAS1_SS1_T3_SZ          4
#define GX_BP_RAS1_SS1_T3_MASK        (((1 << 4) - 1) << 31 - 19)
#define GX_BP_GET_RAS1_SS1_T3(reg)    GX_BITGET(reg, 16, 4)
#define GX_BP_SET_RAS1_SS1_T3(reg, x) (GX_BITFIELD_SET(reg, 16, 4, x))

/**
 * BP register 0x27 - ras1_iref
 */
// MAP0 [29:31] (3) - Texmap id (stage 0)
#define GX_BP_RAS1_IREF_MAP0_ST          29
#define GX_BP_RAS1_IREF_MAP0_END         31
#define GX_BP_RAS1_IREF_MAP0_SZ          3
#define GX_BP_RAS1_IREF_MAP0_MASK        (((1 << 3) - 1) << 31 - 31)
#define GX_BP_GET_RAS1_IREF_MAP0(reg)    GX_BITGET(reg, 29, 3)
#define GX_BP_SET_RAS1_IREF_MAP0(reg, x) (GX_BITFIELD_SET(reg, 29, 3, x))
// TXC0 [26:28] (3) - Texcoord ID (stage 0)
#define GX_BP_RAS1_IREF_TXC0_ST          26
#define GX_BP_RAS1_IREF_TXC0_END         28
#define GX_BP_RAS1_IREF_TXC0_SZ          3
#define GX_BP_RAS1_IREF_TXC0_MASK        (((1 << 3) - 1) << 31 - 28)
#define GX_BP_GET_RAS1_IREF_TXC0(reg)    GX_BITGET(reg, 26, 3)
#define GX_BP_SET_RAS1_IREF_TXC0(reg, x) (GX_BITFIELD_SET(reg, 26, 3, x))
// MAP1 [23:25] (3) - Texmap id (stage 1)
#define GX_BP_RAS1_IREF_MAP1_ST          23
#define GX_BP_RAS1_IREF_MAP1_END         25
#define GX_BP_RAS1_IREF_MAP1_SZ          3
#define GX_BP_RAS1_IREF_MAP1_MASK        (((1 << 3) - 1) << 31 - 25)
#define GX_BP_GET_RAS1_IREF_MAP1(reg)    GX_BITGET(reg, 23, 3)
#define GX_BP_SET_RAS1_IREF_MAP1(reg, x) (GX_BITFIELD_SET(reg, 23, 3, x))
// TXC1 [20:22] (3) - Texcoord ID (stage 1)
#define GX_BP_RAS1_IREF_TXC1_ST          20
#define GX_BP_RAS1_IREF_TXC1_END         22
#define GX_BP_RAS1_IREF_TXC1_SZ          3
#define GX_BP_RAS1_IREF_TXC1_MASK        (((1 << 3) - 1) << 31 - 22)
#define GX_BP_GET_RAS1_IREF_TXC1(reg)    GX_BITGET(reg, 20, 3)
#define GX_BP_SET_RAS1_IREF_TXC1(reg, x) (GX_BITFIELD_SET(reg, 20, 3, x))
// MAP2 [17:19] (3) - Texmap id (stage 2)
#define GX_BP_RAS1_IREF_MAP2_ST          17
#define GX_BP_RAS1_IREF_MAP2_END         19
#define GX_BP_RAS1_IREF_MAP2_SZ          3
#define GX_BP_RAS1_IREF_MAP2_MASK        (((1 << 3) - 1) << 31 - 19)
#define GX_BP_GET_RAS1_IREF_MAP2(reg)    GX_BITGET(reg, 17, 3)
#define GX_BP_SET_RAS1_IREF_MAP2(reg, x) (GX_BITFIELD_SET(reg, 17, 3, x))
// TXC2 [14:16] (3) - Texcoord ID (stage 2)
#define GX_BP_RAS1_IREF_TXC2_ST          14
#define GX_BP_RAS1_IREF_TXC2_END         16
#define GX_BP_RAS1_IREF_TXC2_SZ          3
#define GX_BP_RAS1_IREF_TXC2_MASK        (((1 << 3) - 1) << 31 - 16)
#define GX_BP_GET_RAS1_IREF_TXC2(reg)    GX_BITGET(reg, 14, 3)
#define GX_BP_SET_RAS1_IREF_TXC2(reg, x) (GX_BITFIELD_SET(reg, 14, 3, x))
// MAP3 [11:13] (3) - Texmap id (stage 3)
#define GX_BP_RAS1_IREF_MAP3_ST          11
#define GX_BP_RAS1_IREF_MAP3_END         13
#define GX_BP_RAS1_IREF_MAP3_SZ          3
#define GX_BP_RAS1_IREF_MAP3_MASK        (((1 << 3) - 1) << 31 - 13)
#define GX_BP_GET_RAS1_IREF_MAP3(reg)    GX_BITGET(reg, 11, 3)
#define GX_BP_SET_RAS1_IREF_MAP3(reg, x) (GX_BITFIELD_SET(reg, 11, 3, x))
// TXC3 [8:10] (3) - Texcoord ID (stage 3)
#define GX_BP_RAS1_IREF_TXC3_ST          8
#define GX_BP_RAS1_IREF_TXC3_END         10
#define GX_BP_RAS1_IREF_TXC3_SZ          3
#define GX_BP_RAS1_IREF_TXC3_MASK        (((1 << 3) - 1) << 31 - 10)
#define GX_BP_GET_RAS1_IREF_TXC3(reg)    GX_BITGET(reg, 8, 3)
#define GX_BP_SET_RAS1_IREF_TXC3(reg, x) (GX_BITFIELD_SET(reg, 8, 3, x))

/**
 * BP structure - su_ssize
 */
// USELINEOFS [13:13] (1)
#define GX_BP_SU_SSIZE_USELINEOFS_ST          13
#define GX_BP_SU_SSIZE_USELINEOFS_END         13
#define GX_BP_SU_SSIZE_USELINEOFS_SZ          1
#define GX_BP_SU_SSIZE_USELINEOFS_MASK        (((1 << 1) - 1) << 31 - 13)
#define GX_BP_GET_SU_SSIZE_USELINEOFS(reg)    GX_BITGET(reg, 13, 1)
#define GX_BP_SET_SU_SSIZE_USELINEOFS(reg, x) (GX_BITFIELD_SET(reg, 13, 1, x))
// USEPOINTOFS [12:12] (1)
#define GX_BP_SU_SSIZE_USEPOINTOFS_ST          12
#define GX_BP_SU_SSIZE_USEPOINTOFS_END         12
#define GX_BP_SU_SSIZE_USEPOINTOFS_SZ          1
#define GX_BP_SU_SSIZE_USEPOINTOFS_MASK        (((1 << 1) - 1) << 31 - 12)
#define GX_BP_GET_SU_SSIZE_USEPOINTOFS(reg)    GX_BITGET(reg, 12, 1)
#define GX_BP_SET_SU_SSIZE_USEPOINTOFS(reg, x) (GX_BITFIELD_SET(reg, 12, 1, x))

/**
 * BP register 0x40 - ZMode
 */
// TEST_ENABLE [31:31] (1)
#define GX_BP_ZMODE_TEST_ENABLE_ST          31
#define GX_BP_ZMODE_TEST_ENABLE_END         31
#define GX_BP_ZMODE_TEST_ENABLE_SZ          1
#define GX_BP_ZMODE_TEST_ENABLE_MASK        (((1 << 1) - 1) << 31 - 31)
#define GX_BP_GET_ZMODE_TEST_ENABLE(reg)    GX_BITGET(reg, 31, 1)
#define GX_BP_SET_ZMODE_TEST_ENABLE(reg, x) (GX_BITFIELD_SET(reg, 31, 1, x))
// COMPARE [28:30] (3)
#define GX_BP_ZMODE_COMPARE_ST          28
#define GX_BP_ZMODE_COMPARE_END         30
#define GX_BP_ZMODE_COMPARE_SZ          3
#define GX_BP_ZMODE_COMPARE_MASK        (((1 << 3) - 1) << 31 - 30)
#define GX_BP_GET_ZMODE_COMPARE(reg)    GX_BITGET(reg, 28, 3)
#define GX_BP_SET_ZMODE_COMPARE(reg, x) (GX_BITFIELD_SET(reg, 28, 3, x))
// UPDATE_ENABLE [27:27] (1)
#define GX_BP_ZMODE_UPDATE_ENABLE_ST          27
#define GX_BP_ZMODE_UPDATE_ENABLE_END         27
#define GX_BP_ZMODE_UPDATE_ENABLE_SZ          1
#define GX_BP_ZMODE_UPDATE_ENABLE_MASK        (((1 << 1) - 1) << 31 - 27)
#define GX_BP_GET_ZMODE_UPDATE_ENABLE(reg)    GX_BITGET(reg, 27, 1)
#define GX_BP_SET_ZMODE_UPDATE_ENABLE(reg, x) (GX_BITFIELD_SET(reg, 27, 1, x))

/**
 * BP register 0x41 - BlendMode
 */
// BLEND_ENABLE [31:31] (1)
#define GX_BP_BLENDMODE_BLEND_ENABLE_ST          31
#define GX_BP_BLENDMODE_BLEND_ENABLE_END         31
#define GX_BP_BLENDMODE_BLEND_ENABLE_SZ          1
#define GX_BP_BLENDMODE_BLEND_ENABLE_MASK        (((1 << 1) - 1) << 31 - 31)
#define GX_BP_GET_BLENDMODE_BLEND_ENABLE(reg)    GX_BITGET(reg, 31, 1)
#define GX_BP_SET_BLENDMODE_BLEND_ENABLE(reg, x) (GX_BITFIELD_SET(reg, 31, 1, x))
// LOGIC_OP_ENABLE [30:30] (1)
#define GX_BP_BLENDMODE_LOGIC_OP_ENABLE_ST          30
#define GX_BP_BLENDMODE_LOGIC_OP_ENABLE_END         30
#define GX_BP_BLENDMODE_LOGIC_OP_ENABLE_SZ          1
#define GX_BP_BLENDMODE_LOGIC_OP_ENABLE_MASK        (((1 << 1) - 1) << 31 - 30)
#define GX_BP_GET_BLENDMODE_LOGIC_OP_ENABLE(reg)    GX_BITGET(reg, 30, 1)
#define GX_BP_SET_BLENDMODE_LOGIC_OP_ENABLE(reg, x) (GX_BITFIELD_SET(reg, 30, 1, x))
// DITHER [29:29] (1)
#define GX_BP_BLENDMODE_DITHER_ST          29
#define GX_BP_BLENDMODE_DITHER_END         29
#define GX_BP_BLENDMODE_DITHER_SZ          1
#define GX_BP_BLENDMODE_DITHER_MASK        (((1 << 1) - 1) << 31 - 29)
#define GX_BP_GET_BLENDMODE_DITHER(reg)    GX_BITGET(reg, 29, 1)
#define GX_BP_SET_BLENDMODE_DITHER(reg, x) (GX_BITFIELD_SET(reg, 29, 1, x))
// COLOR_UPDATE [28:28] (1)
#define GX_BP_BLENDMODE_COLOR_UPDATE_ST          28
#define GX_BP_BLENDMODE_COLOR_UPDATE_END         28
#define GX_BP_BLENDMODE_COLOR_UPDATE_SZ          1
#define GX_BP_BLENDMODE_COLOR_UPDATE_MASK        (((1 << 1) - 1) << 31 - 28)
#define GX_BP_GET_BLENDMODE_COLOR_UPDATE(reg)    GX_BITGET(reg, 28, 1)
#define GX_BP_SET_BLENDMODE_COLOR_UPDATE(reg, x) (GX_BITFIELD_SET(reg, 28, 1, x))
// ALPHA_UPDATE [27:27] (1)
#define GX_BP_BLENDMODE_ALPHA_UPDATE_ST          27
#define GX_BP_BLENDMODE_ALPHA_UPDATE_END         27
#define GX_BP_BLENDMODE_ALPHA_UPDATE_SZ          1
#define GX_BP_BLENDMODE_ALPHA_UPDATE_MASK        (((1 << 1) - 1) << 31 - 27)
#define GX_BP_GET_BLENDMODE_ALPHA_UPDATE(reg)    GX_BITGET(reg, 27, 1)
#define GX_BP_SET_BLENDMODE_ALPHA_UPDATE(reg, x) (GX_BITFIELD_SET(reg, 27, 1, x))
// DST_FACTOR [24:26] (3)
#define GX_BP_BLENDMODE_DST_FACTOR_ST          24
#define GX_BP_BLENDMODE_DST_FACTOR_END         26
#define GX_BP_BLENDMODE_DST_FACTOR_SZ          3
#define GX_BP_BLENDMODE_DST_FACTOR_MASK        (((1 << 3) - 1) << 31 - 26)
#define GX_BP_GET_BLENDMODE_DST_FACTOR(reg)    GX_BITGET(reg, 24, 3)
#define GX_BP_SET_BLENDMODE_DST_FACTOR(reg, x) (GX_BITFIELD_SET(reg, 24, 3, x))
// SRC_FACTOR [21:23] (3)
#define GX_BP_BLENDMODE_SRC_FACTOR_ST          21
#define GX_BP_BLENDMODE_SRC_FACTOR_END         23
#define GX_BP_BLENDMODE_SRC_FACTOR_SZ          3
#define GX_BP_BLENDMODE_SRC_FACTOR_MASK        (((1 << 3) - 1) << 31 - 23)
#define GX_BP_GET_BLENDMODE_SRC_FACTOR(reg)    GX_BITGET(reg, 21, 3)
#define GX_BP_SET_BLENDMODE_SRC_FACTOR(reg, x) (GX_BITFIELD_SET(reg, 21, 3, x))
// SUBTRACT [20:20] (1)
#define GX_BP_BLENDMODE_SUBTRACT_ST          20
#define GX_BP_BLENDMODE_SUBTRACT_END         20
#define GX_BP_BLENDMODE_SUBTRACT_SZ          1
#define GX_BP_BLENDMODE_SUBTRACT_MASK        (((1 << 1) - 1) << 31 - 20)
#define GX_BP_GET_BLENDMODE_SUBTRACT(reg)    GX_BITGET(reg, 20, 1)
#define GX_BP_SET_BLENDMODE_SUBTRACT(reg, x) (GX_BITFIELD_SET(reg, 20, 1, x))
// LOGIC_MODE [16:19] (4)
#define GX_BP_BLENDMODE_LOGIC_MODE_ST          16
#define GX_BP_BLENDMODE_LOGIC_MODE_END         19
#define GX_BP_BLENDMODE_LOGIC_MODE_SZ          4
#define GX_BP_BLENDMODE_LOGIC_MODE_MASK        (((1 << 4) - 1) << 31 - 19)
#define GX_BP_GET_BLENDMODE_LOGIC_MODE(reg)    GX_BITGET(reg, 16, 4)
#define GX_BP_SET_BLENDMODE_LOGIC_MODE(reg, x) (GX_BITFIELD_SET(reg, 16, 4, x))

/**
 * BP register 0x42 - DstAlpha
 */
// ALPHA [24:31] (8)
#define GX_BP_DSTALPHA_ALPHA_ST          24
#define GX_BP_DSTALPHA_ALPHA_END         31
#define GX_BP_DSTALPHA_ALPHA_SZ          8
#define GX_BP_DSTALPHA_ALPHA_MASK        (((1 << 8) - 1) << 31 - 31)
#define GX_BP_GET_DSTALPHA_ALPHA(reg)    GX_BITGET(reg, 24, 8)
#define GX_BP_SET_DSTALPHA_ALPHA(reg, x) (GX_BITFIELD_SET(reg, 24, 8, x))
// ENABLE [23:23] (1)
#define GX_BP_DSTALPHA_ENABLE_ST          23
#define GX_BP_DSTALPHA_ENABLE_END         23
#define GX_BP_DSTALPHA_ENABLE_SZ          1
#define GX_BP_DSTALPHA_ENABLE_MASK        (((1 << 1) - 1) << 31 - 23)
#define GX_BP_GET_DSTALPHA_ENABLE(reg)    GX_BITGET(reg, 23, 1)
#define GX_BP_SET_DSTALPHA_ENABLE(reg, x) (GX_BITFIELD_SET(reg, 23, 1, x))
// YUV_FMT [21:22] (2)
#define GX_BP_DSTALPHA_YUV_FMT_ST          21
#define GX_BP_DSTALPHA_YUV_FMT_END         22
#define GX_BP_DSTALPHA_YUV_FMT_SZ          2
#define GX_BP_DSTALPHA_YUV_FMT_MASK        (((1 << 2) - 1) << 31 - 22)
#define GX_BP_GET_DSTALPHA_YUV_FMT(reg)    GX_BITGET(reg, 21, 2)
#define GX_BP_SET_DSTALPHA_YUV_FMT(reg, x) (GX_BITFIELD_SET(reg, 21, 2, x))

/**
 * BP register 0x43 - ZControl
 */
// PIXEL_FMT [29:31] (3)
#define GX_BP_ZCONTROL_PIXEL_FMT_ST          29
#define GX_BP_ZCONTROL_PIXEL_FMT_END         31
#define GX_BP_ZCONTROL_PIXEL_FMT_SZ          3
#define GX_BP_ZCONTROL_PIXEL_FMT_MASK        (((1 << 3) - 1) << 31 - 31)
#define GX_BP_GET_ZCONTROL_PIXEL_FMT(reg)    GX_BITGET(reg, 29, 3)
#define GX_BP_SET_ZCONTROL_PIXEL_FMT(reg, x) (GX_BITFIELD_SET(reg, 29, 3, x))
// Z_FMT [26:28] (3)
#define GX_BP_ZCONTROL_Z_FMT_ST          26
#define GX_BP_ZCONTROL_Z_FMT_END         28
#define GX_BP_ZCONTROL_Z_FMT_SZ          3
#define GX_BP_ZCONTROL_Z_FMT_MASK        (((1 << 3) - 1) << 31 - 28)
#define GX_BP_GET_ZCONTROL_Z_FMT(reg)    GX_BITGET(reg, 26, 3)
#define GX_BP_SET_ZCONTROL_Z_FMT(reg, x) (GX_BITFIELD_SET(reg, 26, 3, x))
// BEFORE_TEX [25:25] (1) - Determines whether Z-buffering occurs before or after texturing
#define GX_BP_ZCONTROL_BEFORE_TEX_ST          25
#define GX_BP_ZCONTROL_BEFORE_TEX_END         25
#define GX_BP_ZCONTROL_BEFORE_TEX_SZ          1
#define GX_BP_ZCONTROL_BEFORE_TEX_MASK        (((1 << 1) - 1) << 31 - 25)
#define GX_BP_GET_ZCONTROL_BEFORE_TEX(reg)    GX_BITGET(reg, 25, 1)
#define GX_BP_SET_ZCONTROL_BEFORE_TEX(reg, x) (GX_BITFIELD_SET(reg, 25, 1, x))

/**
 * BP register 0x44 - FieldMask
 */
// ODD [31:31] (1) - Whether to write odd fields to the EFB
#define GX_BP_FIELDMASK_ODD_ST          31
#define GX_BP_FIELDMASK_ODD_END         31
#define GX_BP_FIELDMASK_ODD_SZ          1
#define GX_BP_FIELDMASK_ODD_MASK        (((1 << 1) - 1) << 31 - 31)
#define GX_BP_GET_FIELDMASK_ODD(reg)    GX_BITGET(reg, 31, 1)
#define GX_BP_SET_FIELDMASK_ODD(reg, x) (GX_BITFIELD_SET(reg, 31, 1, x))
// EVEN [30:30] (1) - Whether to write even fields to the EFB
#define GX_BP_FIELDMASK_EVEN_ST          30
#define GX_BP_FIELDMASK_EVEN_END         30
#define GX_BP_FIELDMASK_EVEN_SZ          1
#define GX_BP_FIELDMASK_EVEN_MASK        (((1 << 1) - 1) << 31 - 30)
#define GX_BP_GET_FIELDMASK_EVEN(reg)    GX_BITGET(reg, 30, 1)
#define GX_BP_SET_FIELDMASK_EVEN(reg, x) (GX_BITFIELD_SET(reg, 30, 1, x))

/**
 * BP register 0x59 - ScissorOffset
 */
// OX [22:31] (10)
#define GX_BP_SCISSOROFFSET_OX_ST          22
#define GX_BP_SCISSOROFFSET_OX_END         31
#define GX_BP_SCISSOROFFSET_OX_SZ          10
#define GX_BP_SCISSOROFFSET_OX_MASK        (((1 << 10) - 1) << 31 - 31)
#define GX_BP_GET_SCISSOROFFSET_OX(reg)    GX_BITGET(reg, 22, 10)
#define GX_BP_SET_SCISSOROFFSET_OX(reg, x) (GX_BITFIELD_SET(reg, 22, 10, x))
// OY [12:21] (10)
#define GX_BP_SCISSOROFFSET_OY_ST          12
#define GX_BP_SCISSOROFFSET_OY_END         21
#define GX_BP_SCISSOROFFSET_OY_SZ          10
#define GX_BP_SCISSOROFFSET_OY_MASK        (((1 << 10) - 1) << 31 - 21)
#define GX_BP_GET_SCISSOROFFSET_OY(reg)    GX_BITGET(reg, 12, 10)
#define GX_BP_SET_SCISSOROFFSET_OY(reg, x) (GX_BITFIELD_SET(reg, 12, 10, x))

/**
 * BP register 0x68 - FieldMode
 */
// TEX_LOD [31:31] (1) - Adjust vertex tex LOD computation to account for interlacing
#define GX_BP_FIELDMODE_TEX_LOD_ST          31
#define GX_BP_FIELDMODE_TEX_LOD_END         31
#define GX_BP_FIELDMODE_TEX_LOD_SZ          1
#define GX_BP_FIELDMODE_TEX_LOD_MASK        (((1 << 1) - 1) << 31 - 31)
#define GX_BP_GET_FIELDMODE_TEX_LOD(reg)    GX_BITGET(reg, 31, 1)
#define GX_BP_SET_FIELDMODE_TEX_LOD(reg, x) (GX_BITFIELD_SET(reg, 31, 1, x))

/**
 * BP register 0xE8 - FogRange
 */
// CENTER [22:31] (10)
#define GX_BP_FOGRANGE_CENTER_ST          22
#define GX_BP_FOGRANGE_CENTER_END         31
#define GX_BP_FOGRANGE_CENTER_SZ          10
#define GX_BP_FOGRANGE_CENTER_MASK        (((1 << 10) - 1) << 31 - 31)
#define GX_BP_GET_FOGRANGE_CENTER(reg)    GX_BITGET(reg, 22, 10)
#define GX_BP_SET_FOGRANGE_CENTER(reg, x) (GX_BITFIELD_SET(reg, 22, 10, x))
// ENABLED [21:21] (1)
#define GX_BP_FOGRANGE_ENABLED_ST          21
#define GX_BP_FOGRANGE_ENABLED_END         21
#define GX_BP_FOGRANGE_ENABLED_SZ          1
#define GX_BP_FOGRANGE_ENABLED_MASK        (((1 << 1) - 1) << 31 - 21)
#define GX_BP_GET_FOGRANGE_ENABLED(reg)    GX_BITGET(reg, 21, 1)
#define GX_BP_SET_FOGRANGE_ENABLED(reg, x) (GX_BITFIELD_SET(reg, 21, 1, x))

/**
 * BP structure - FogRangeK
 */
// HI [20:31] (12)
#define GX_BP_FOGRANGEK_HI_ST          20
#define GX_BP_FOGRANGEK_HI_END         31
#define GX_BP_FOGRANGEK_HI_SZ          12
#define GX_BP_FOGRANGEK_HI_MASK        (((1 << 12) - 1) << 31 - 31)
#define GX_BP_GET_FOGRANGEK_HI(reg)    GX_BITGET(reg, 20, 12)
#define GX_BP_SET_FOGRANGEK_HI(reg, x) (GX_BITFIELD_SET(reg, 20, 12, x))
// LO [8:19] (12)
#define GX_BP_FOGRANGEK_LO_ST          8
#define GX_BP_FOGRANGEK_LO_END         19
#define GX_BP_FOGRANGEK_LO_SZ          12
#define GX_BP_FOGRANGEK_LO_MASK        (((1 << 12) - 1) << 31 - 19)
#define GX_BP_GET_FOGRANGEK_LO(reg)    GX_BITGET(reg, 8, 12)
#define GX_BP_SET_FOGRANGEK_LO(reg, x) (GX_BITFIELD_SET(reg, 8, 12, x))

/**
 * BP register 0xEE - FogParam0
 */
// A_MANT [21:31] (11)
#define GX_BP_FOGPARAM0_A_MANT_ST          21
#define GX_BP_FOGPARAM0_A_MANT_END         31
#define GX_BP_FOGPARAM0_A_MANT_SZ          11
#define GX_BP_FOGPARAM0_A_MANT_MASK        (((1 << 11) - 1) << 31 - 31)
#define GX_BP_GET_FOGPARAM0_A_MANT(reg)    GX_BITGET(reg, 21, 11)
#define GX_BP_SET_FOGPARAM0_A_MANT(reg, x) (GX_BITFIELD_SET(reg, 21, 11, x))
// A_EXP [13:20] (8)
#define GX_BP_FOGPARAM0_A_EXP_ST          13
#define GX_BP_FOGPARAM0_A_EXP_END         20
#define GX_BP_FOGPARAM0_A_EXP_SZ          8
#define GX_BP_FOGPARAM0_A_EXP_MASK        (((1 << 8) - 1) << 31 - 20)
#define GX_BP_GET_FOGPARAM0_A_EXP(reg)    GX_BITGET(reg, 13, 8)
#define GX_BP_SET_FOGPARAM0_A_EXP(reg, x) (GX_BITFIELD_SET(reg, 13, 8, x))
// A_SIGN [12:12] (1)
#define GX_BP_FOGPARAM0_A_SIGN_ST          12
#define GX_BP_FOGPARAM0_A_SIGN_END         12
#define GX_BP_FOGPARAM0_A_SIGN_SZ          1
#define GX_BP_FOGPARAM0_A_SIGN_MASK        (((1 << 1) - 1) << 31 - 12)
#define GX_BP_GET_FOGPARAM0_A_SIGN(reg)    GX_BITGET(reg, 12, 1)
#define GX_BP_SET_FOGPARAM0_A_SIGN(reg, x) (GX_BITFIELD_SET(reg, 12, 1, x))

/**
 * BP register 0xEF - FogParam1
 */
// B_MAG [8:31] (24)
#define GX_BP_FOGPARAM1_B_MAG_ST          8
#define GX_BP_FOGPARAM1_B_MAG_END         31
#define GX_BP_FOGPARAM1_B_MAG_SZ          24
#define GX_BP_FOGPARAM1_B_MAG_MASK        (((1 << 24) - 1) << 31 - 31)
#define GX_BP_GET_FOGPARAM1_B_MAG(reg)    GX_BITGET(reg, 8, 24)
#define GX_BP_SET_FOGPARAM1_B_MAG(reg, x) (GX_BITFIELD_SET(reg, 8, 24, x))

/**
 * BP register 0xF0 - FogParam2
 */
// B_SHIFT [27:31] (5)
#define GX_BP_FOGPARAM2_B_SHIFT_ST          27
#define GX_BP_FOGPARAM2_B_SHIFT_END         31
#define GX_BP_FOGPARAM2_B_SHIFT_SZ          5
#define GX_BP_FOGPARAM2_B_SHIFT_MASK        (((1 << 5) - 1) << 31 - 31)
#define GX_BP_GET_FOGPARAM2_B_SHIFT(reg)    GX_BITGET(reg, 27, 5)
#define GX_BP_SET_FOGPARAM2_B_SHIFT(reg, x) (GX_BITFIELD_SET(reg, 27, 5, x))

/**
 * BP register 0xF1 - FogParam3
 */
// C_MANT [21:31] (11)
#define GX_BP_FOGPARAM3_C_MANT_ST          21
#define GX_BP_FOGPARAM3_C_MANT_END         31
#define GX_BP_FOGPARAM3_C_MANT_SZ          11
#define GX_BP_FOGPARAM3_C_MANT_MASK        (((1 << 11) - 1) << 31 - 31)
#define GX_BP_GET_FOGPARAM3_C_MANT(reg)    GX_BITGET(reg, 21, 11)
#define GX_BP_SET_FOGPARAM3_C_MANT(reg, x) (GX_BITFIELD_SET(reg, 21, 11, x))
// C_EXP [13:20] (8)
#define GX_BP_FOGPARAM3_C_EXP_ST          13
#define GX_BP_FOGPARAM3_C_EXP_END         20
#define GX_BP_FOGPARAM3_C_EXP_SZ          8
#define GX_BP_FOGPARAM3_C_EXP_MASK        (((1 << 8) - 1) << 31 - 20)
#define GX_BP_GET_FOGPARAM3_C_EXP(reg)    GX_BITGET(reg, 13, 8)
#define GX_BP_SET_FOGPARAM3_C_EXP(reg, x) (GX_BITFIELD_SET(reg, 13, 8, x))
// C_SIGN [12:12] (1)
#define GX_BP_FOGPARAM3_C_SIGN_ST          12
#define GX_BP_FOGPARAM3_C_SIGN_END         12
#define GX_BP_FOGPARAM3_C_SIGN_SZ          1
#define GX_BP_FOGPARAM3_C_SIGN_MASK        (((1 << 1) - 1) << 31 - 12)
#define GX_BP_GET_FOGPARAM3_C_SIGN(reg)    GX_BITGET(reg, 12, 1)
#define GX_BP_SET_FOGPARAM3_C_SIGN(reg, x) (GX_BITFIELD_SET(reg, 12, 1, x))
// PROJ [11:11] (1)
#define GX_BP_FOGPARAM3_PROJ_ST          11
#define GX_BP_FOGPARAM3_PROJ_END         11
#define GX_BP_FOGPARAM3_PROJ_SZ          1
#define GX_BP_FOGPARAM3_PROJ_MASK        (((1 << 1) - 1) << 31 - 11)
#define GX_BP_GET_FOGPARAM3_PROJ(reg)    GX_BITGET(reg, 11, 1)
#define GX_BP_SET_FOGPARAM3_PROJ(reg, x) (GX_BITFIELD_SET(reg, 11, 1, x))
// FSEL [8:10] (3)
#define GX_BP_FOGPARAM3_FSEL_ST          8
#define GX_BP_FOGPARAM3_FSEL_END         10
#define GX_BP_FOGPARAM3_FSEL_SZ          3
#define GX_BP_FOGPARAM3_FSEL_MASK        (((1 << 3) - 1) << 31 - 10)
#define GX_BP_GET_FOGPARAM3_FSEL(reg)    GX_BITGET(reg, 8, 3)
#define GX_BP_SET_FOGPARAM3_FSEL(reg, x) (GX_BITFIELD_SET(reg, 8, 3, x))

/**
 * BP register 0xF2 - FogColor
 */
// RGB [8:31] (24)
#define GX_BP_FOGCOLOR_RGB_ST          8
#define GX_BP_FOGCOLOR_RGB_END         31
#define GX_BP_FOGCOLOR_RGB_SZ          24
#define GX_BP_FOGCOLOR_RGB_MASK        (((1 << 24) - 1) << 31 - 31)
#define GX_BP_GET_FOGCOLOR_RGB(reg)    GX_BITGET(reg, 8, 24)
#define GX_BP_SET_FOGCOLOR_RGB(reg, x) (GX_BITFIELD_SET(reg, 8, 24, x))

#ifdef __cplusplus
}
#endif
#endif

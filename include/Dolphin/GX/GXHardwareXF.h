#ifndef DOLPHIN_GX_HARDWARE_XF_H
#define DOLPHIN_GX_HARDWARE_XF_H
#include "Dolphin/GX/GXTypes.h"
#include "types.h"
#ifdef __cplusplus
extern "C" {
#endif

/******************************************************************************
 *
 *
 * GX Transform Unit (XF)
 *
 *
 *****************************************************************************/

/**
 * XF registers
 */
typedef enum {
	GX_XF_REG_ERROR        = 0x1000,
	GX_XF_REG_DIAGNOSTICS  = 0x1001,
	GX_XF_REG_STATE0       = 0x1002,
	GX_XF_REG_STATE1       = 0x1003,
	GX_XF_REG_CLOCK        = 0x1004,
	GX_XF_REG_CLIPDISABLE  = 0x1005,
	GX_XF_REG_PERF0        = 0x1006,
	GX_XF_REG_PERF1        = 0x1007,
	GX_XF_REG_INVERTEXSPEC = 0x1008,
	GX_XF_REG_NUMCOLORS    = 0x1009,
	GX_XF_REG_AMBIENT0     = 0x100A,
	GX_XF_REG_AMBIENT1     = 0x100B,
	GX_XF_REG_MATERIAL0    = 0x100C,
	GX_XF_REG_MATERIAL1    = 0x100D,
	GX_XF_REG_COLOR0CNTRL  = 0x100E,
	GX_XF_REG_COLOR1CNTRL  = 0x100F,
	GX_XF_REG_ALPHA0CNTRL  = 0x1010,
	GX_XF_REG_ALPHA1CNTRL  = 0x1011,
	GX_XF_REG_DUALTEXTRAN  = 0x1012,
	GX_XF_REG_MATRIXINDEX0 = 0x1018,
	GX_XF_REG_MATRIXINDEX1 = 0x1019,
	GX_XF_REG_SCALEX       = 0x101A,
	GX_XF_REG_SCALEY       = 0x101B,
	GX_XF_REG_SCALEZ       = 0x101C,
	GX_XF_REG_OFFSETX      = 0x101D,
	GX_XF_REG_OFFSETY      = 0x101E,
	GX_XF_REG_OFFSETZ      = 0x101F,
	GX_XF_REG_PROJECTIONA  = 0x1020,
	GX_XF_REG_PROJECTIONB  = 0x1021,
	GX_XF_REG_PROJECTIONC  = 0x1022,
	GX_XF_REG_PROJECTIOND  = 0x1023,
	GX_XF_REG_PROJECTIONE  = 0x1024,
	GX_XF_REG_PROJECTIONF  = 0x1025,
	GX_XF_REG_PROJECTORTHO = 0x1026,
	GX_XF_REG_NUMTEX       = 0x103F,
	GX_XF_REG_TEX0         = 0x1040,
	GX_XF_REG_TEX1         = 0x1041,
	GX_XF_REG_TEX2         = 0x1042,
	GX_XF_REG_TEX3         = 0x1043,
	GX_XF_REG_TEX4         = 0x1044,
	GX_XF_REG_TEX5         = 0x1045,
	GX_XF_REG_TEX6         = 0x1046,
	GX_XF_REG_TEX7         = 0x1047,
	GX_XF_REG_DUALTEX0     = 0x1050,
	GX_XF_REG_DUALTEX1     = 0x1051,
	GX_XF_REG_DUALTEX2     = 0x1052,
	GX_XF_REG_DUALTEX3     = 0x1053,
	GX_XF_REG_DUALTEX4     = 0x1054,
	GX_XF_REG_DUALTEX5     = 0x1055,
	GX_XF_REG_DUALTEX6     = 0x1056,
	GX_XF_REG_DUALTEX7     = 0x1057,
} GX_XF_REG;

/**
 * XF register 0x1005 - ClipDisable
 */
// DETECT [31:31] (1) - Disable clipping detection
#define GX_XF_CLIPDISABLE_DETECT_ST          31
#define GX_XF_CLIPDISABLE_DETECT_END         31
#define GX_XF_CLIPDISABLE_DETECT_SZ          1
#define GX_XF_CLIPDISABLE_DETECT_MASK        (((1 << 1) - 1) << 31 - 31)
#define GX_XF_GET_CLIPDISABLE_DETECT(reg)    GX_BITGET(reg, 31, 1)
#define GX_XF_SET_CLIPDISABLE_DETECT(reg, x) ((reg) = GX_BITSET(reg, 31, 1, x))
// REJECT [30:30] (1) - Disable trivial rejection
#define GX_XF_CLIPDISABLE_REJECT_ST          30
#define GX_XF_CLIPDISABLE_REJECT_END         30
#define GX_XF_CLIPDISABLE_REJECT_SZ          1
#define GX_XF_CLIPDISABLE_REJECT_MASK        (((1 << 1) - 1) << 31 - 30)
#define GX_XF_GET_CLIPDISABLE_REJECT(reg)    GX_BITGET(reg, 30, 1)
#define GX_XF_SET_CLIPDISABLE_REJECT(reg, x) ((reg) = GX_BITSET(reg, 30, 1, x))
// ACCEL [29:29] (1) - Disable cpoly clipping acceleration
#define GX_XF_CLIPDISABLE_ACCEL_ST          29
#define GX_XF_CLIPDISABLE_ACCEL_END         29
#define GX_XF_CLIPDISABLE_ACCEL_SZ          1
#define GX_XF_CLIPDISABLE_ACCEL_MASK        (((1 << 1) - 1) << 31 - 29)
#define GX_XF_GET_CLIPDISABLE_ACCEL(reg)    GX_BITGET(reg, 29, 1)
#define GX_XF_SET_CLIPDISABLE_ACCEL(reg, x) ((reg) = GX_BITSET(reg, 29, 1, x))

/**
 * XF register 0x1007 - Perf1
 */
// TARGET [25:31] (7) - Target performance (Cycles/vertex)
#define GX_XF_PERF1_TARGET_ST          25
#define GX_XF_PERF1_TARGET_END         31
#define GX_XF_PERF1_TARGET_SZ          7
#define GX_XF_PERF1_TARGET_MASK        (((1 << 7) - 1) << 31 - 31)
#define GX_XF_GET_PERF1_TARGET(reg)    GX_BITGET(reg, 25, 7)
#define GX_XF_SET_PERF1_TARGET(reg, x) ((reg) = GX_BITSET(reg, 25, 7, x))

/**
 * XF register 0x1008 - InVertexSpec
 */
// CLR [30:31] (2)
#define GX_XF_INVERTEXSPEC_CLR_ST          30
#define GX_XF_INVERTEXSPEC_CLR_END         31
#define GX_XF_INVERTEXSPEC_CLR_SZ          2
#define GX_XF_INVERTEXSPEC_CLR_MASK        (((1 << 2) - 1) << 31 - 31)
#define GX_XF_GET_INVERTEXSPEC_CLR(reg)    GX_BITGET(reg, 30, 2)
#define GX_XF_SET_INVERTEXSPEC_CLR(reg, x) ((reg) = GX_BITSET(reg, 30, 2, x))
// NRM [28:29] (2)
#define GX_XF_INVERTEXSPEC_NRM_ST          28
#define GX_XF_INVERTEXSPEC_NRM_END         29
#define GX_XF_INVERTEXSPEC_NRM_SZ          2
#define GX_XF_INVERTEXSPEC_NRM_MASK        (((1 << 2) - 1) << 31 - 29)
#define GX_XF_GET_INVERTEXSPEC_NRM(reg)    GX_BITGET(reg, 28, 2)
#define GX_XF_SET_INVERTEXSPEC_NRM(reg, x) ((reg) = GX_BITSET(reg, 28, 2, x))
// TXC [24:27] (4)
#define GX_XF_INVERTEXSPEC_TXC_ST          24
#define GX_XF_INVERTEXSPEC_TXC_END         27
#define GX_XF_INVERTEXSPEC_TXC_SZ          4
#define GX_XF_INVERTEXSPEC_TXC_MASK        (((1 << 4) - 1) << 31 - 27)
#define GX_XF_GET_INVERTEXSPEC_TXC(reg)    GX_BITGET(reg, 24, 4)
#define GX_XF_SET_INVERTEXSPEC_TXC(reg, x) ((reg) = GX_BITSET(reg, 24, 4, x))

/**
 * XF register 0x100E - Color0Cntrl
 */
// MATSRC [31:31] (1)
#define GX_XF_COLOR0CNTRL_MATSRC_ST          31
#define GX_XF_COLOR0CNTRL_MATSRC_END         31
#define GX_XF_COLOR0CNTRL_MATSRC_SZ          1
#define GX_XF_COLOR0CNTRL_MATSRC_MASK        (((1 << 1) - 1) << 31 - 31)
#define GX_XF_GET_COLOR0CNTRL_MATSRC(reg)    GX_BITGET(reg, 31, 1)
#define GX_XF_SET_COLOR0CNTRL_MATSRC(reg, x) ((reg) = GX_BITSET(reg, 31, 1, x))
// LIGHT [30:30] (1)
#define GX_XF_COLOR0CNTRL_LIGHT_ST          30
#define GX_XF_COLOR0CNTRL_LIGHT_END         30
#define GX_XF_COLOR0CNTRL_LIGHT_SZ          1
#define GX_XF_COLOR0CNTRL_LIGHT_MASK        (((1 << 1) - 1) << 31 - 30)
#define GX_XF_GET_COLOR0CNTRL_LIGHT(reg)    GX_BITGET(reg, 30, 1)
#define GX_XF_SET_COLOR0CNTRL_LIGHT(reg, x) ((reg) = GX_BITSET(reg, 30, 1, x))
// LMASKHI [26:29] (4)
#define GX_XF_COLOR0CNTRL_LMASKHI_ST          26
#define GX_XF_COLOR0CNTRL_LMASKHI_END         29
#define GX_XF_COLOR0CNTRL_LMASKHI_SZ          4
#define GX_XF_COLOR0CNTRL_LMASKHI_MASK        (((1 << 4) - 1) << 31 - 29)
#define GX_XF_GET_COLOR0CNTRL_LMASKHI(reg)    GX_BITGET(reg, 26, 4)
#define GX_XF_SET_COLOR0CNTRL_LMASKHI(reg, x) ((reg) = GX_BITSET(reg, 26, 4, x))
// AMBSRC [25:25] (1)
#define GX_XF_COLOR0CNTRL_AMBSRC_ST          25
#define GX_XF_COLOR0CNTRL_AMBSRC_END         25
#define GX_XF_COLOR0CNTRL_AMBSRC_SZ          1
#define GX_XF_COLOR0CNTRL_AMBSRC_MASK        (((1 << 1) - 1) << 31 - 25)
#define GX_XF_GET_COLOR0CNTRL_AMBSRC(reg)    GX_BITGET(reg, 25, 1)
#define GX_XF_SET_COLOR0CNTRL_AMBSRC(reg, x) ((reg) = GX_BITSET(reg, 25, 1, x))
// DIFFUSEATTN [23:24] (2)
#define GX_XF_COLOR0CNTRL_DIFFUSEATTN_ST          23
#define GX_XF_COLOR0CNTRL_DIFFUSEATTN_END         24
#define GX_XF_COLOR0CNTRL_DIFFUSEATTN_SZ          2
#define GX_XF_COLOR0CNTRL_DIFFUSEATTN_MASK        (((1 << 2) - 1) << 31 - 24)
#define GX_XF_GET_COLOR0CNTRL_DIFFUSEATTN(reg)    GX_BITGET(reg, 23, 2)
#define GX_XF_SET_COLOR0CNTRL_DIFFUSEATTN(reg, x) ((reg) = GX_BITSET(reg, 23, 2, x))
// ATTNENABLE [22:22] (1)
#define GX_XF_COLOR0CNTRL_ATTNENABLE_ST          22
#define GX_XF_COLOR0CNTRL_ATTNENABLE_END         22
#define GX_XF_COLOR0CNTRL_ATTNENABLE_SZ          1
#define GX_XF_COLOR0CNTRL_ATTNENABLE_MASK        (((1 << 1) - 1) << 31 - 22)
#define GX_XF_GET_COLOR0CNTRL_ATTNENABLE(reg)    GX_BITGET(reg, 22, 1)
#define GX_XF_SET_COLOR0CNTRL_ATTNENABLE(reg, x) ((reg) = GX_BITSET(reg, 22, 1, x))
// ATTNSELECT [21:21] (1)
#define GX_XF_COLOR0CNTRL_ATTNSELECT_ST          21
#define GX_XF_COLOR0CNTRL_ATTNSELECT_END         21
#define GX_XF_COLOR0CNTRL_ATTNSELECT_SZ          1
#define GX_XF_COLOR0CNTRL_ATTNSELECT_MASK        (((1 << 1) - 1) << 31 - 21)
#define GX_XF_GET_COLOR0CNTRL_ATTNSELECT(reg)    GX_BITGET(reg, 21, 1)
#define GX_XF_SET_COLOR0CNTRL_ATTNSELECT(reg, x) ((reg) = GX_BITSET(reg, 21, 1, x))
// LMASKLO [17:20] (4)
#define GX_XF_COLOR0CNTRL_LMASKLO_ST          17
#define GX_XF_COLOR0CNTRL_LMASKLO_END         20
#define GX_XF_COLOR0CNTRL_LMASKLO_SZ          4
#define GX_XF_COLOR0CNTRL_LMASKLO_MASK        (((1 << 4) - 1) << 31 - 20)
#define GX_XF_GET_COLOR0CNTRL_LMASKLO(reg)    GX_BITGET(reg, 17, 4)
#define GX_XF_SET_COLOR0CNTRL_LMASKLO(reg, x) ((reg) = GX_BITSET(reg, 17, 4, x))

/**
 * XF register 0x1018 - MatrixIndex0
 */
// GEOM [26:31] (6)
#define GX_XF_MATRIXINDEX0_GEOM_ST          26
#define GX_XF_MATRIXINDEX0_GEOM_END         31
#define GX_XF_MATRIXINDEX0_GEOM_SZ          6
#define GX_XF_MATRIXINDEX0_GEOM_MASK        (((1 << 6) - 1) << 31 - 31)
#define GX_XF_GET_MATRIXINDEX0_GEOM(reg)    GX_BITGET(reg, 26, 6)
#define GX_XF_SET_MATRIXINDEX0_GEOM(reg, x) ((reg) = GX_BITSET(reg, 26, 6, x))
// TEX0 [20:25] (6)
#define GX_XF_MATRIXINDEX0_TEX0_ST          20
#define GX_XF_MATRIXINDEX0_TEX0_END         25
#define GX_XF_MATRIXINDEX0_TEX0_SZ          6
#define GX_XF_MATRIXINDEX0_TEX0_MASK        (((1 << 6) - 1) << 31 - 25)
#define GX_XF_GET_MATRIXINDEX0_TEX0(reg)    GX_BITGET(reg, 20, 6)
#define GX_XF_SET_MATRIXINDEX0_TEX0(reg, x) ((reg) = GX_BITSET(reg, 20, 6, x))
// TEX1 [14:19] (6)
#define GX_XF_MATRIXINDEX0_TEX1_ST          14
#define GX_XF_MATRIXINDEX0_TEX1_END         19
#define GX_XF_MATRIXINDEX0_TEX1_SZ          6
#define GX_XF_MATRIXINDEX0_TEX1_MASK        (((1 << 6) - 1) << 31 - 19)
#define GX_XF_GET_MATRIXINDEX0_TEX1(reg)    GX_BITGET(reg, 14, 6)
#define GX_XF_SET_MATRIXINDEX0_TEX1(reg, x) ((reg) = GX_BITSET(reg, 14, 6, x))
// TEX2 [8:13] (6)
#define GX_XF_MATRIXINDEX0_TEX2_ST          8
#define GX_XF_MATRIXINDEX0_TEX2_END         13
#define GX_XF_MATRIXINDEX0_TEX2_SZ          6
#define GX_XF_MATRIXINDEX0_TEX2_MASK        (((1 << 6) - 1) << 31 - 13)
#define GX_XF_GET_MATRIXINDEX0_TEX2(reg)    GX_BITGET(reg, 8, 6)
#define GX_XF_SET_MATRIXINDEX0_TEX2(reg, x) ((reg) = GX_BITSET(reg, 8, 6, x))
// TEX3 [2:7] (6)
#define GX_XF_MATRIXINDEX0_TEX3_ST          2
#define GX_XF_MATRIXINDEX0_TEX3_END         7
#define GX_XF_MATRIXINDEX0_TEX3_SZ          6
#define GX_XF_MATRIXINDEX0_TEX3_MASK        (((1 << 6) - 1) << 31 - 7)
#define GX_XF_GET_MATRIXINDEX0_TEX3(reg)    GX_BITGET(reg, 2, 6)
#define GX_XF_SET_MATRIXINDEX0_TEX3(reg, x) ((reg) = GX_BITSET(reg, 2, 6, x))

/**
 * XF register 0x1019 - MatrixIndex1
 */
// TEX4 [26:31] (6)
#define GX_XF_MATRIXINDEX1_TEX4_ST          26
#define GX_XF_MATRIXINDEX1_TEX4_END         31
#define GX_XF_MATRIXINDEX1_TEX4_SZ          6
#define GX_XF_MATRIXINDEX1_TEX4_MASK        (((1 << 6) - 1) << 31 - 31)
#define GX_XF_GET_MATRIXINDEX1_TEX4(reg)    GX_BITGET(reg, 26, 6)
#define GX_XF_SET_MATRIXINDEX1_TEX4(reg, x) ((reg) = GX_BITSET(reg, 26, 6, x))
// TEX5 [20:25] (6)
#define GX_XF_MATRIXINDEX1_TEX5_ST          20
#define GX_XF_MATRIXINDEX1_TEX5_END         25
#define GX_XF_MATRIXINDEX1_TEX5_SZ          6
#define GX_XF_MATRIXINDEX1_TEX5_MASK        (((1 << 6) - 1) << 31 - 25)
#define GX_XF_GET_MATRIXINDEX1_TEX5(reg)    GX_BITGET(reg, 20, 6)
#define GX_XF_SET_MATRIXINDEX1_TEX5(reg, x) ((reg) = GX_BITSET(reg, 20, 6, x))
// TEX6 [14:19] (6)
#define GX_XF_MATRIXINDEX1_TEX6_ST          14
#define GX_XF_MATRIXINDEX1_TEX6_END         19
#define GX_XF_MATRIXINDEX1_TEX6_SZ          6
#define GX_XF_MATRIXINDEX1_TEX6_MASK        (((1 << 6) - 1) << 31 - 19)
#define GX_XF_GET_MATRIXINDEX1_TEX6(reg)    GX_BITGET(reg, 14, 6)
#define GX_XF_SET_MATRIXINDEX1_TEX6(reg, x) ((reg) = GX_BITSET(reg, 14, 6, x))
// TEX7 [8:13] (6)
#define GX_XF_MATRIXINDEX1_TEX7_ST          8
#define GX_XF_MATRIXINDEX1_TEX7_END         13
#define GX_XF_MATRIXINDEX1_TEX7_SZ          6
#define GX_XF_MATRIXINDEX1_TEX7_MASK        (((1 << 6) - 1) << 31 - 13)
#define GX_XF_GET_MATRIXINDEX1_TEX7(reg)    GX_BITGET(reg, 8, 6)
#define GX_XF_SET_MATRIXINDEX1_TEX7(reg, x) ((reg) = GX_BITSET(reg, 8, 6, x))

/**
 * XF structure - Tex
 */
// PROJTYPE [30:30] (1)
#define GX_XF_TEX_PROJTYPE_ST          30
#define GX_XF_TEX_PROJTYPE_END         30
#define GX_XF_TEX_PROJTYPE_SZ          1
#define GX_XF_TEX_PROJTYPE_MASK        (((1 << 1) - 1) << 31 - 30)
#define GX_XF_GET_TEX_PROJTYPE(reg)    GX_BITGET(reg, 30, 1)
#define GX_XF_SET_TEX_PROJTYPE(reg, x) ((reg) = GX_BITSET(reg, 30, 1, x))
// INPUTFORM [29:29] (1)
#define GX_XF_TEX_INPUTFORM_ST          29
#define GX_XF_TEX_INPUTFORM_END         29
#define GX_XF_TEX_INPUTFORM_SZ          1
#define GX_XF_TEX_INPUTFORM_MASK        (((1 << 1) - 1) << 31 - 29)
#define GX_XF_GET_TEX_INPUTFORM(reg)    GX_BITGET(reg, 29, 1)
#define GX_XF_SET_TEX_INPUTFORM(reg, x) ((reg) = GX_BITSET(reg, 29, 1, x))
// TEXGENTYPE [25:27] (3)
#define GX_XF_TEX_TEXGENTYPE_ST          25
#define GX_XF_TEX_TEXGENTYPE_END         27
#define GX_XF_TEX_TEXGENTYPE_SZ          3
#define GX_XF_TEX_TEXGENTYPE_MASK        (((1 << 3) - 1) << 31 - 27)
#define GX_XF_GET_TEX_TEXGENTYPE(reg)    GX_BITGET(reg, 25, 3)
#define GX_XF_SET_TEX_TEXGENTYPE(reg, x) ((reg) = GX_BITSET(reg, 25, 3, x))
// SRCROW [20:24] (5)
#define GX_XF_TEX_SRCROW_ST          20
#define GX_XF_TEX_SRCROW_END         24
#define GX_XF_TEX_SRCROW_SZ          5
#define GX_XF_TEX_SRCROW_MASK        (((1 << 5) - 1) << 31 - 24)
#define GX_XF_GET_TEX_SRCROW(reg)    GX_BITGET(reg, 20, 5)
#define GX_XF_SET_TEX_SRCROW(reg, x) ((reg) = GX_BITSET(reg, 20, 5, x))
// BUMPSRCTEX [17:19] (3)
#define GX_XF_TEX_BUMPSRCTEX_ST          17
#define GX_XF_TEX_BUMPSRCTEX_END         19
#define GX_XF_TEX_BUMPSRCTEX_SZ          3
#define GX_XF_TEX_BUMPSRCTEX_MASK        (((1 << 3) - 1) << 31 - 19)
#define GX_XF_GET_TEX_BUMPSRCTEX(reg)    GX_BITGET(reg, 17, 3)
#define GX_XF_SET_TEX_BUMPSRCTEX(reg, x) ((reg) = GX_BITSET(reg, 17, 3, x))
// BUMPSRCLIGHT [14:16] (3)
#define GX_XF_TEX_BUMPSRCLIGHT_ST          14
#define GX_XF_TEX_BUMPSRCLIGHT_END         16
#define GX_XF_TEX_BUMPSRCLIGHT_SZ          3
#define GX_XF_TEX_BUMPSRCLIGHT_MASK        (((1 << 3) - 1) << 31 - 16)
#define GX_XF_GET_TEX_BUMPSRCLIGHT(reg)    GX_BITGET(reg, 14, 3)
#define GX_XF_SET_TEX_BUMPSRCLIGHT(reg, x) ((reg) = GX_BITSET(reg, 14, 3, x))

/**
 * XF structure - DualTex
 */
// BASEROW [26:31] (6) - Indicates which is the base row of the transform matrix
#define GX_XF_DUALTEX_BASEROW_ST          26
#define GX_XF_DUALTEX_BASEROW_END         31
#define GX_XF_DUALTEX_BASEROW_SZ          6
#define GX_XF_DUALTEX_BASEROW_MASK        (((1 << 6) - 1) << 31 - 31)
#define GX_XF_GET_DUALTEX_BASEROW(reg)    GX_BITGET(reg, 26, 6)
#define GX_XF_SET_DUALTEX_BASEROW(reg, x) ((reg) = GX_BITSET(reg, 26, 6, x))
// NORMALIZE [23:23] (1) - Normalize texcoord before sending transform
#define GX_XF_DUALTEX_NORMALIZE_ST          23
#define GX_XF_DUALTEX_NORMALIZE_END         23
#define GX_XF_DUALTEX_NORMALIZE_SZ          1
#define GX_XF_DUALTEX_NORMALIZE_MASK        (((1 << 1) - 1) << 31 - 23)
#define GX_XF_GET_DUALTEX_NORMALIZE(reg)    GX_BITGET(reg, 23, 1)
#define GX_XF_SET_DUALTEX_NORMALIZE(reg, x) ((reg) = GX_BITSET(reg, 23, 1, x))

#ifdef __cplusplus
}
#endif
#endif

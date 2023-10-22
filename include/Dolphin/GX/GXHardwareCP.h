#ifndef DOLPHIN_GX_HARDWARE_CP_H
#define DOLPHIN_GX_HARDWARE_CP_H
#include "Dolphin/GX/GXTypes.h"
#include "types.h"
#ifdef __cplusplus
extern "C" {
#endif

/******************************************************************************
 *
 *
 * GX Command Processor (CP)
 *
 *
 *****************************************************************************/

/**
 * CP registers
 */
typedef enum {
	GX_CP_REG_MATRIXINDEXA = 0x30,
	GX_CP_REG_MATRIXINDEXB = 0x40,
	GX_CP_REG_VCD_LO       = 0x50,
	GX_CP_REG_VCD_HI       = 0x60,
	GX_CP_REG_VAT_GROUP0   = 0x70,
	GX_CP_REG_VAT_GROUP1   = 0x80,
	GX_CP_REG_VAT_GROUP2   = 0x90,
	GX_CP_REG_ARRAYBASE    = 0xA0,
	GX_CP_REG_ARRAYSTRIDE  = 0xB0,
} GX_CP_REG;

/**
 * CP register 0x30 - MatrixIndexA
 */
// GEOM [26:31] (6)
#define GX_CP_MATRIXINDEXA_GEOM_ST          26
#define GX_CP_MATRIXINDEXA_GEOM_END         31
#define GX_CP_MATRIXINDEXA_GEOM_SZ          6
#define GX_CP_MATRIXINDEXA_GEOM_MASK        (((1 << 6) - 1) << 31 - 31)
#define GX_CP_GET_MATRIXINDEXA_GEOM(reg)    GX_BITGET(reg, 26, 6)
#define GX_CP_SET_MATRIXINDEXA_GEOM(reg, x) ((reg) = GX_BITSET(reg, 26, 6, x))
// TEX0 [20:25] (6)
#define GX_CP_MATRIXINDEXA_TEX0_ST          20
#define GX_CP_MATRIXINDEXA_TEX0_END         25
#define GX_CP_MATRIXINDEXA_TEX0_SZ          6
#define GX_CP_MATRIXINDEXA_TEX0_MASK        (((1 << 6) - 1) << 31 - 25)
#define GX_CP_GET_MATRIXINDEXA_TEX0(reg)    GX_BITGET(reg, 20, 6)
#define GX_CP_SET_MATRIXINDEXA_TEX0(reg, x) ((reg) = GX_BITSET(reg, 20, 6, x))
// TEX1 [14:19] (6)
#define GX_CP_MATRIXINDEXA_TEX1_ST          14
#define GX_CP_MATRIXINDEXA_TEX1_END         19
#define GX_CP_MATRIXINDEXA_TEX1_SZ          6
#define GX_CP_MATRIXINDEXA_TEX1_MASK        (((1 << 6) - 1) << 31 - 19)
#define GX_CP_GET_MATRIXINDEXA_TEX1(reg)    GX_BITGET(reg, 14, 6)
#define GX_CP_SET_MATRIXINDEXA_TEX1(reg, x) ((reg) = GX_BITSET(reg, 14, 6, x))
// TEX2 [8:13] (6)
#define GX_CP_MATRIXINDEXA_TEX2_ST          8
#define GX_CP_MATRIXINDEXA_TEX2_END         13
#define GX_CP_MATRIXINDEXA_TEX2_SZ          6
#define GX_CP_MATRIXINDEXA_TEX2_MASK        (((1 << 6) - 1) << 31 - 13)
#define GX_CP_GET_MATRIXINDEXA_TEX2(reg)    GX_BITGET(reg, 8, 6)
#define GX_CP_SET_MATRIXINDEXA_TEX2(reg, x) ((reg) = GX_BITSET(reg, 8, 6, x))
// TEX3 [2:7] (6)
#define GX_CP_MATRIXINDEXA_TEX3_ST          2
#define GX_CP_MATRIXINDEXA_TEX3_END         7
#define GX_CP_MATRIXINDEXA_TEX3_SZ          6
#define GX_CP_MATRIXINDEXA_TEX3_MASK        (((1 << 6) - 1) << 31 - 7)
#define GX_CP_GET_MATRIXINDEXA_TEX3(reg)    GX_BITGET(reg, 2, 6)
#define GX_CP_SET_MATRIXINDEXA_TEX3(reg, x) ((reg) = GX_BITSET(reg, 2, 6, x))

/**
 * CP register 0x40 - MatrixIndexB
 */
// TEX4 [26:31] (6)
#define GX_CP_MATRIXINDEXB_TEX4_ST          26
#define GX_CP_MATRIXINDEXB_TEX4_END         31
#define GX_CP_MATRIXINDEXB_TEX4_SZ          6
#define GX_CP_MATRIXINDEXB_TEX4_MASK        (((1 << 6) - 1) << 31 - 31)
#define GX_CP_GET_MATRIXINDEXB_TEX4(reg)    GX_BITGET(reg, 26, 6)
#define GX_CP_SET_MATRIXINDEXB_TEX4(reg, x) ((reg) = GX_BITSET(reg, 26, 6, x))
// TEX5 [20:25] (6)
#define GX_CP_MATRIXINDEXB_TEX5_ST          20
#define GX_CP_MATRIXINDEXB_TEX5_END         25
#define GX_CP_MATRIXINDEXB_TEX5_SZ          6
#define GX_CP_MATRIXINDEXB_TEX5_MASK        (((1 << 6) - 1) << 31 - 25)
#define GX_CP_GET_MATRIXINDEXB_TEX5(reg)    GX_BITGET(reg, 20, 6)
#define GX_CP_SET_MATRIXINDEXB_TEX5(reg, x) ((reg) = GX_BITSET(reg, 20, 6, x))
// TEX6 [14:19] (6)
#define GX_CP_MATRIXINDEXB_TEX6_ST          14
#define GX_CP_MATRIXINDEXB_TEX6_END         19
#define GX_CP_MATRIXINDEXB_TEX6_SZ          6
#define GX_CP_MATRIXINDEXB_TEX6_MASK        (((1 << 6) - 1) << 31 - 19)
#define GX_CP_GET_MATRIXINDEXB_TEX6(reg)    GX_BITGET(reg, 14, 6)
#define GX_CP_SET_MATRIXINDEXB_TEX6(reg, x) ((reg) = GX_BITSET(reg, 14, 6, x))
// TEX7 [8:13] (6)
#define GX_CP_MATRIXINDEXB_TEX7_ST          8
#define GX_CP_MATRIXINDEXB_TEX7_END         13
#define GX_CP_MATRIXINDEXB_TEX7_SZ          6
#define GX_CP_MATRIXINDEXB_TEX7_MASK        (((1 << 6) - 1) << 31 - 13)
#define GX_CP_GET_MATRIXINDEXB_TEX7(reg)    GX_BITGET(reg, 8, 6)
#define GX_CP_SET_MATRIXINDEXB_TEX7(reg, x) ((reg) = GX_BITSET(reg, 8, 6, x))

/**
 * CP register 0x50 - VCD_Lo
 */
// POSMATIDX [31:31] (1)
#define GX_CP_VCD_LO_POSMATIDX_ST          31
#define GX_CP_VCD_LO_POSMATIDX_END         31
#define GX_CP_VCD_LO_POSMATIDX_SZ          1
#define GX_CP_VCD_LO_POSMATIDX_MASK        (((1 << 1) - 1) << 31 - 31)
#define GX_CP_GET_VCD_LO_POSMATIDX(reg)    GX_BITGET(reg, 31, 1)
#define GX_CP_SET_VCD_LO_POSMATIDX(reg, x) ((reg) = GX_BITSET(reg, 31, 1, x))
// TEX0MATIDX [30:30] (1)
#define GX_CP_VCD_LO_TEX0MATIDX_ST          30
#define GX_CP_VCD_LO_TEX0MATIDX_END         30
#define GX_CP_VCD_LO_TEX0MATIDX_SZ          1
#define GX_CP_VCD_LO_TEX0MATIDX_MASK        (((1 << 1) - 1) << 31 - 30)
#define GX_CP_GET_VCD_LO_TEX0MATIDX(reg)    GX_BITGET(reg, 30, 1)
#define GX_CP_SET_VCD_LO_TEX0MATIDX(reg, x) ((reg) = GX_BITSET(reg, 30, 1, x))
// TEX1MATIDX [29:29] (1)
#define GX_CP_VCD_LO_TEX1MATIDX_ST          29
#define GX_CP_VCD_LO_TEX1MATIDX_END         29
#define GX_CP_VCD_LO_TEX1MATIDX_SZ          1
#define GX_CP_VCD_LO_TEX1MATIDX_MASK        (((1 << 1) - 1) << 31 - 29)
#define GX_CP_GET_VCD_LO_TEX1MATIDX(reg)    GX_BITGET(reg, 29, 1)
#define GX_CP_SET_VCD_LO_TEX1MATIDX(reg, x) ((reg) = GX_BITSET(reg, 29, 1, x))
// TEX2MATIDX [28:28] (1)
#define GX_CP_VCD_LO_TEX2MATIDX_ST          28
#define GX_CP_VCD_LO_TEX2MATIDX_END         28
#define GX_CP_VCD_LO_TEX2MATIDX_SZ          1
#define GX_CP_VCD_LO_TEX2MATIDX_MASK        (((1 << 1) - 1) << 31 - 28)
#define GX_CP_GET_VCD_LO_TEX2MATIDX(reg)    GX_BITGET(reg, 28, 1)
#define GX_CP_SET_VCD_LO_TEX2MATIDX(reg, x) ((reg) = GX_BITSET(reg, 28, 1, x))
// TEX3MATIDX [27:27] (1)
#define GX_CP_VCD_LO_TEX3MATIDX_ST          27
#define GX_CP_VCD_LO_TEX3MATIDX_END         27
#define GX_CP_VCD_LO_TEX3MATIDX_SZ          1
#define GX_CP_VCD_LO_TEX3MATIDX_MASK        (((1 << 1) - 1) << 31 - 27)
#define GX_CP_GET_VCD_LO_TEX3MATIDX(reg)    GX_BITGET(reg, 27, 1)
#define GX_CP_SET_VCD_LO_TEX3MATIDX(reg, x) ((reg) = GX_BITSET(reg, 27, 1, x))
// TEX4MATIDX [26:26] (1)
#define GX_CP_VCD_LO_TEX4MATIDX_ST          26
#define GX_CP_VCD_LO_TEX4MATIDX_END         26
#define GX_CP_VCD_LO_TEX4MATIDX_SZ          1
#define GX_CP_VCD_LO_TEX4MATIDX_MASK        (((1 << 1) - 1) << 31 - 26)
#define GX_CP_GET_VCD_LO_TEX4MATIDX(reg)    GX_BITGET(reg, 26, 1)
#define GX_CP_SET_VCD_LO_TEX4MATIDX(reg, x) ((reg) = GX_BITSET(reg, 26, 1, x))
// TEX5MATIDX [25:25] (1)
#define GX_CP_VCD_LO_TEX5MATIDX_ST          25
#define GX_CP_VCD_LO_TEX5MATIDX_END         25
#define GX_CP_VCD_LO_TEX5MATIDX_SZ          1
#define GX_CP_VCD_LO_TEX5MATIDX_MASK        (((1 << 1) - 1) << 31 - 25)
#define GX_CP_GET_VCD_LO_TEX5MATIDX(reg)    GX_BITGET(reg, 25, 1)
#define GX_CP_SET_VCD_LO_TEX5MATIDX(reg, x) ((reg) = GX_BITSET(reg, 25, 1, x))
// TEX6MATIDX [24:24] (1)
#define GX_CP_VCD_LO_TEX6MATIDX_ST          24
#define GX_CP_VCD_LO_TEX6MATIDX_END         24
#define GX_CP_VCD_LO_TEX6MATIDX_SZ          1
#define GX_CP_VCD_LO_TEX6MATIDX_MASK        (((1 << 1) - 1) << 31 - 24)
#define GX_CP_GET_VCD_LO_TEX6MATIDX(reg)    GX_BITGET(reg, 24, 1)
#define GX_CP_SET_VCD_LO_TEX6MATIDX(reg, x) ((reg) = GX_BITSET(reg, 24, 1, x))
// TEX7MATIDX [23:23] (1)
#define GX_CP_VCD_LO_TEX7MATIDX_ST          23
#define GX_CP_VCD_LO_TEX7MATIDX_END         23
#define GX_CP_VCD_LO_TEX7MATIDX_SZ          1
#define GX_CP_VCD_LO_TEX7MATIDX_MASK        (((1 << 1) - 1) << 31 - 23)
#define GX_CP_GET_VCD_LO_TEX7MATIDX(reg)    GX_BITGET(reg, 23, 1)
#define GX_CP_SET_VCD_LO_TEX7MATIDX(reg, x) ((reg) = GX_BITSET(reg, 23, 1, x))
// POSITION [21:22] (2)
#define GX_CP_VCD_LO_POSITION_ST          21
#define GX_CP_VCD_LO_POSITION_END         22
#define GX_CP_VCD_LO_POSITION_SZ          2
#define GX_CP_VCD_LO_POSITION_MASK        (((1 << 2) - 1) << 31 - 22)
#define GX_CP_GET_VCD_LO_POSITION(reg)    GX_BITGET(reg, 21, 2)
#define GX_CP_SET_VCD_LO_POSITION(reg, x) ((reg) = GX_BITSET(reg, 21, 2, x))
// NORMAL [19:20] (2)
#define GX_CP_VCD_LO_NORMAL_ST          19
#define GX_CP_VCD_LO_NORMAL_END         20
#define GX_CP_VCD_LO_NORMAL_SZ          2
#define GX_CP_VCD_LO_NORMAL_MASK        (((1 << 2) - 1) << 31 - 20)
#define GX_CP_GET_VCD_LO_NORMAL(reg)    GX_BITGET(reg, 19, 2)
#define GX_CP_SET_VCD_LO_NORMAL(reg, x) ((reg) = GX_BITSET(reg, 19, 2, x))
// COLORDIFFUSED [17:18] (2)
#define GX_CP_VCD_LO_COLORDIFFUSED_ST          17
#define GX_CP_VCD_LO_COLORDIFFUSED_END         18
#define GX_CP_VCD_LO_COLORDIFFUSED_SZ          2
#define GX_CP_VCD_LO_COLORDIFFUSED_MASK        (((1 << 2) - 1) << 31 - 18)
#define GX_CP_GET_VCD_LO_COLORDIFFUSED(reg)    GX_BITGET(reg, 17, 2)
#define GX_CP_SET_VCD_LO_COLORDIFFUSED(reg, x) ((reg) = GX_BITSET(reg, 17, 2, x))
// COLORSPECULAR [15:16] (2)
#define GX_CP_VCD_LO_COLORSPECULAR_ST          15
#define GX_CP_VCD_LO_COLORSPECULAR_END         16
#define GX_CP_VCD_LO_COLORSPECULAR_SZ          2
#define GX_CP_VCD_LO_COLORSPECULAR_MASK        (((1 << 2) - 1) << 31 - 16)
#define GX_CP_GET_VCD_LO_COLORSPECULAR(reg)    GX_BITGET(reg, 15, 2)
#define GX_CP_SET_VCD_LO_COLORSPECULAR(reg, x) ((reg) = GX_BITSET(reg, 15, 2, x))

/**
 * CP register 0x60 - VCD_Hi
 */
// TEX0COORD [30:31] (2)
#define GX_CP_VCD_HI_TEX0COORD_ST          30
#define GX_CP_VCD_HI_TEX0COORD_END         31
#define GX_CP_VCD_HI_TEX0COORD_SZ          2
#define GX_CP_VCD_HI_TEX0COORD_MASK        (((1 << 2) - 1) << 31 - 31)
#define GX_CP_GET_VCD_HI_TEX0COORD(reg)    GX_BITGET(reg, 30, 2)
#define GX_CP_SET_VCD_HI_TEX0COORD(reg, x) ((reg) = GX_BITSET(reg, 30, 2, x))
// TEX1COORD [28:29] (2)
#define GX_CP_VCD_HI_TEX1COORD_ST          28
#define GX_CP_VCD_HI_TEX1COORD_END         29
#define GX_CP_VCD_HI_TEX1COORD_SZ          2
#define GX_CP_VCD_HI_TEX1COORD_MASK        (((1 << 2) - 1) << 31 - 29)
#define GX_CP_GET_VCD_HI_TEX1COORD(reg)    GX_BITGET(reg, 28, 2)
#define GX_CP_SET_VCD_HI_TEX1COORD(reg, x) ((reg) = GX_BITSET(reg, 28, 2, x))
// TEX2COORD [26:27] (2)
#define GX_CP_VCD_HI_TEX2COORD_ST          26
#define GX_CP_VCD_HI_TEX2COORD_END         27
#define GX_CP_VCD_HI_TEX2COORD_SZ          2
#define GX_CP_VCD_HI_TEX2COORD_MASK        (((1 << 2) - 1) << 31 - 27)
#define GX_CP_GET_VCD_HI_TEX2COORD(reg)    GX_BITGET(reg, 26, 2)
#define GX_CP_SET_VCD_HI_TEX2COORD(reg, x) ((reg) = GX_BITSET(reg, 26, 2, x))
// TEX3COORD [24:25] (2)
#define GX_CP_VCD_HI_TEX3COORD_ST          24
#define GX_CP_VCD_HI_TEX3COORD_END         25
#define GX_CP_VCD_HI_TEX3COORD_SZ          2
#define GX_CP_VCD_HI_TEX3COORD_MASK        (((1 << 2) - 1) << 31 - 25)
#define GX_CP_GET_VCD_HI_TEX3COORD(reg)    GX_BITGET(reg, 24, 2)
#define GX_CP_SET_VCD_HI_TEX3COORD(reg, x) ((reg) = GX_BITSET(reg, 24, 2, x))
// TEX4COORD [22:23] (2)
#define GX_CP_VCD_HI_TEX4COORD_ST          22
#define GX_CP_VCD_HI_TEX4COORD_END         23
#define GX_CP_VCD_HI_TEX4COORD_SZ          2
#define GX_CP_VCD_HI_TEX4COORD_MASK        (((1 << 2) - 1) << 31 - 23)
#define GX_CP_GET_VCD_HI_TEX4COORD(reg)    GX_BITGET(reg, 22, 2)
#define GX_CP_SET_VCD_HI_TEX4COORD(reg, x) ((reg) = GX_BITSET(reg, 22, 2, x))
// TEX5COORD [20:21] (2)
#define GX_CP_VCD_HI_TEX5COORD_ST          20
#define GX_CP_VCD_HI_TEX5COORD_END         21
#define GX_CP_VCD_HI_TEX5COORD_SZ          2
#define GX_CP_VCD_HI_TEX5COORD_MASK        (((1 << 2) - 1) << 31 - 21)
#define GX_CP_GET_VCD_HI_TEX5COORD(reg)    GX_BITGET(reg, 20, 2)
#define GX_CP_SET_VCD_HI_TEX5COORD(reg, x) ((reg) = GX_BITSET(reg, 20, 2, x))
// TEX6COORD [18:19] (2)
#define GX_CP_VCD_HI_TEX6COORD_ST          18
#define GX_CP_VCD_HI_TEX6COORD_END         19
#define GX_CP_VCD_HI_TEX6COORD_SZ          2
#define GX_CP_VCD_HI_TEX6COORD_MASK        (((1 << 2) - 1) << 31 - 19)
#define GX_CP_GET_VCD_HI_TEX6COORD(reg)    GX_BITGET(reg, 18, 2)
#define GX_CP_SET_VCD_HI_TEX6COORD(reg, x) ((reg) = GX_BITSET(reg, 18, 2, x))
// TEX7COORD [16:17] (2)
#define GX_CP_VCD_HI_TEX7COORD_ST          16
#define GX_CP_VCD_HI_TEX7COORD_END         17
#define GX_CP_VCD_HI_TEX7COORD_SZ          2
#define GX_CP_VCD_HI_TEX7COORD_MASK        (((1 << 2) - 1) << 31 - 17)
#define GX_CP_GET_VCD_HI_TEX7COORD(reg)    GX_BITGET(reg, 16, 2)
#define GX_CP_SET_VCD_HI_TEX7COORD(reg, x) ((reg) = GX_BITSET(reg, 16, 2, x))

/**
 * CP register 0x70 - VAT_group0
 */
// POS_CNT [31:31] (1)
#define GX_CP_VAT_GROUP0_POS_CNT_ST          31
#define GX_CP_VAT_GROUP0_POS_CNT_END         31
#define GX_CP_VAT_GROUP0_POS_CNT_SZ          1
#define GX_CP_VAT_GROUP0_POS_CNT_MASK        (((1 << 1) - 1) << 31 - 31)
#define GX_CP_GET_VAT_GROUP0_POS_CNT(reg)    GX_BITGET(reg, 31, 1)
#define GX_CP_SET_VAT_GROUP0_POS_CNT(reg, x) ((reg) = GX_BITSET(reg, 31, 1, x))
// POS_TYPE [28:30] (3)
#define GX_CP_VAT_GROUP0_POS_TYPE_ST          28
#define GX_CP_VAT_GROUP0_POS_TYPE_END         30
#define GX_CP_VAT_GROUP0_POS_TYPE_SZ          3
#define GX_CP_VAT_GROUP0_POS_TYPE_MASK        (((1 << 3) - 1) << 31 - 30)
#define GX_CP_GET_VAT_GROUP0_POS_TYPE(reg)    GX_BITGET(reg, 28, 3)
#define GX_CP_SET_VAT_GROUP0_POS_TYPE(reg, x) ((reg) = GX_BITSET(reg, 28, 3, x))
// POS_SHIFT [23:27] (5)
#define GX_CP_VAT_GROUP0_POS_SHIFT_ST          23
#define GX_CP_VAT_GROUP0_POS_SHIFT_END         27
#define GX_CP_VAT_GROUP0_POS_SHIFT_SZ          5
#define GX_CP_VAT_GROUP0_POS_SHIFT_MASK        (((1 << 5) - 1) << 31 - 27)
#define GX_CP_GET_VAT_GROUP0_POS_SHIFT(reg)    GX_BITGET(reg, 23, 5)
#define GX_CP_SET_VAT_GROUP0_POS_SHIFT(reg, x) ((reg) = GX_BITSET(reg, 23, 5, x))
// NRM_CNT [22:22] (1)
#define GX_CP_VAT_GROUP0_NRM_CNT_ST          22
#define GX_CP_VAT_GROUP0_NRM_CNT_END         22
#define GX_CP_VAT_GROUP0_NRM_CNT_SZ          1
#define GX_CP_VAT_GROUP0_NRM_CNT_MASK        (((1 << 1) - 1) << 31 - 22)
#define GX_CP_GET_VAT_GROUP0_NRM_CNT(reg)    GX_BITGET(reg, 22, 1)
#define GX_CP_SET_VAT_GROUP0_NRM_CNT(reg, x) ((reg) = GX_BITSET(reg, 22, 1, x))
// NRM_TYPE [19:21] (3)
#define GX_CP_VAT_GROUP0_NRM_TYPE_ST          19
#define GX_CP_VAT_GROUP0_NRM_TYPE_END         21
#define GX_CP_VAT_GROUP0_NRM_TYPE_SZ          3
#define GX_CP_VAT_GROUP0_NRM_TYPE_MASK        (((1 << 3) - 1) << 31 - 21)
#define GX_CP_GET_VAT_GROUP0_NRM_TYPE(reg)    GX_BITGET(reg, 19, 3)
#define GX_CP_SET_VAT_GROUP0_NRM_TYPE(reg, x) ((reg) = GX_BITSET(reg, 19, 3, x))
// COLORDIFF_CNT [18:18] (1)
#define GX_CP_VAT_GROUP0_COLORDIFF_CNT_ST          18
#define GX_CP_VAT_GROUP0_COLORDIFF_CNT_END         18
#define GX_CP_VAT_GROUP0_COLORDIFF_CNT_SZ          1
#define GX_CP_VAT_GROUP0_COLORDIFF_CNT_MASK        (((1 << 1) - 1) << 31 - 18)
#define GX_CP_GET_VAT_GROUP0_COLORDIFF_CNT(reg)    GX_BITGET(reg, 18, 1)
#define GX_CP_SET_VAT_GROUP0_COLORDIFF_CNT(reg, x) ((reg) = GX_BITSET(reg, 18, 1, x))
// COLORDIFF_TYPE [15:17] (3)
#define GX_CP_VAT_GROUP0_COLORDIFF_TYPE_ST          15
#define GX_CP_VAT_GROUP0_COLORDIFF_TYPE_END         17
#define GX_CP_VAT_GROUP0_COLORDIFF_TYPE_SZ          3
#define GX_CP_VAT_GROUP0_COLORDIFF_TYPE_MASK        (((1 << 3) - 1) << 31 - 17)
#define GX_CP_GET_VAT_GROUP0_COLORDIFF_TYPE(reg)    GX_BITGET(reg, 15, 3)
#define GX_CP_SET_VAT_GROUP0_COLORDIFF_TYPE(reg, x) ((reg) = GX_BITSET(reg, 15, 3, x))
// COLORSPEC_CNT [14:14] (1)
#define GX_CP_VAT_GROUP0_COLORSPEC_CNT_ST          14
#define GX_CP_VAT_GROUP0_COLORSPEC_CNT_END         14
#define GX_CP_VAT_GROUP0_COLORSPEC_CNT_SZ          1
#define GX_CP_VAT_GROUP0_COLORSPEC_CNT_MASK        (((1 << 1) - 1) << 31 - 14)
#define GX_CP_GET_VAT_GROUP0_COLORSPEC_CNT(reg)    GX_BITGET(reg, 14, 1)
#define GX_CP_SET_VAT_GROUP0_COLORSPEC_CNT(reg, x) ((reg) = GX_BITSET(reg, 14, 1, x))
// COLORSPEC_TYPE [11:13] (3)
#define GX_CP_VAT_GROUP0_COLORSPEC_TYPE_ST          11
#define GX_CP_VAT_GROUP0_COLORSPEC_TYPE_END         13
#define GX_CP_VAT_GROUP0_COLORSPEC_TYPE_SZ          3
#define GX_CP_VAT_GROUP0_COLORSPEC_TYPE_MASK        (((1 << 3) - 1) << 31 - 13)
#define GX_CP_GET_VAT_GROUP0_COLORSPEC_TYPE(reg)    GX_BITGET(reg, 11, 3)
#define GX_CP_SET_VAT_GROUP0_COLORSPEC_TYPE(reg, x) ((reg) = GX_BITSET(reg, 11, 3, x))
// TXC0_CNT [10:10] (1)
#define GX_CP_VAT_GROUP0_TXC0_CNT_ST          10
#define GX_CP_VAT_GROUP0_TXC0_CNT_END         10
#define GX_CP_VAT_GROUP0_TXC0_CNT_SZ          1
#define GX_CP_VAT_GROUP0_TXC0_CNT_MASK        (((1 << 1) - 1) << 31 - 10)
#define GX_CP_GET_VAT_GROUP0_TXC0_CNT(reg)    GX_BITGET(reg, 10, 1)
#define GX_CP_SET_VAT_GROUP0_TXC0_CNT(reg, x) ((reg) = GX_BITSET(reg, 10, 1, x))
// TXC0_TYPE [7:9] (3)
#define GX_CP_VAT_GROUP0_TXC0_TYPE_ST          7
#define GX_CP_VAT_GROUP0_TXC0_TYPE_END         9
#define GX_CP_VAT_GROUP0_TXC0_TYPE_SZ          3
#define GX_CP_VAT_GROUP0_TXC0_TYPE_MASK        (((1 << 3) - 1) << 31 - 9)
#define GX_CP_GET_VAT_GROUP0_TXC0_TYPE(reg)    GX_BITGET(reg, 7, 3)
#define GX_CP_SET_VAT_GROUP0_TXC0_TYPE(reg, x) ((reg) = GX_BITSET(reg, 7, 3, x))
// TXC0_SHIFT [2:6] (5)
#define GX_CP_VAT_GROUP0_TXC0_SHIFT_ST          2
#define GX_CP_VAT_GROUP0_TXC0_SHIFT_END         6
#define GX_CP_VAT_GROUP0_TXC0_SHIFT_SZ          5
#define GX_CP_VAT_GROUP0_TXC0_SHIFT_MASK        (((1 << 5) - 1) << 31 - 6)
#define GX_CP_GET_VAT_GROUP0_TXC0_SHIFT(reg)    GX_BITGET(reg, 2, 5)
#define GX_CP_SET_VAT_GROUP0_TXC0_SHIFT(reg, x) ((reg) = GX_BITSET(reg, 2, 5, x))
// BYTEDEQUANT [1:1] (1)
#define GX_CP_VAT_GROUP0_BYTEDEQUANT_ST          1
#define GX_CP_VAT_GROUP0_BYTEDEQUANT_END         1
#define GX_CP_VAT_GROUP0_BYTEDEQUANT_SZ          1
#define GX_CP_VAT_GROUP0_BYTEDEQUANT_MASK        (((1 << 1) - 1) << 31 - 1)
#define GX_CP_GET_VAT_GROUP0_BYTEDEQUANT(reg)    GX_BITGET(reg, 1, 1)
#define GX_CP_SET_VAT_GROUP0_BYTEDEQUANT(reg, x) ((reg) = GX_BITSET(reg, 1, 1, x))
// NORMALINDEX3 [0:0] (1) - Input will be treated as three staggered indices (one per triple biased by component size) into normal table
#define GX_CP_VAT_GROUP0_NORMALINDEX3_ST          0
#define GX_CP_VAT_GROUP0_NORMALINDEX3_END         0
#define GX_CP_VAT_GROUP0_NORMALINDEX3_SZ          1
#define GX_CP_VAT_GROUP0_NORMALINDEX3_MASK        (((1 << 1) - 1) << 31 - 0)
#define GX_CP_GET_VAT_GROUP0_NORMALINDEX3(reg)    GX_BITGET(reg, 0, 1)
#define GX_CP_SET_VAT_GROUP0_NORMALINDEX3(reg, x) ((reg) = GX_BITSET(reg, 0, 1, x))

/**
 * CP register 0x80 - VAT_group1
 */
// TXC1_CNT [31:31] (1)
#define GX_CP_VAT_GROUP1_TXC1_CNT_ST          31
#define GX_CP_VAT_GROUP1_TXC1_CNT_END         31
#define GX_CP_VAT_GROUP1_TXC1_CNT_SZ          1
#define GX_CP_VAT_GROUP1_TXC1_CNT_MASK        (((1 << 1) - 1) << 31 - 31)
#define GX_CP_GET_VAT_GROUP1_TXC1_CNT(reg)    GX_BITGET(reg, 31, 1)
#define GX_CP_SET_VAT_GROUP1_TXC1_CNT(reg, x) ((reg) = GX_BITSET(reg, 31, 1, x))
// TXC1_TYPE [28:30] (3)
#define GX_CP_VAT_GROUP1_TXC1_TYPE_ST          28
#define GX_CP_VAT_GROUP1_TXC1_TYPE_END         30
#define GX_CP_VAT_GROUP1_TXC1_TYPE_SZ          3
#define GX_CP_VAT_GROUP1_TXC1_TYPE_MASK        (((1 << 3) - 1) << 31 - 30)
#define GX_CP_GET_VAT_GROUP1_TXC1_TYPE(reg)    GX_BITGET(reg, 28, 3)
#define GX_CP_SET_VAT_GROUP1_TXC1_TYPE(reg, x) ((reg) = GX_BITSET(reg, 28, 3, x))
// TXC1_SHIFT [23:27] (5)
#define GX_CP_VAT_GROUP1_TXC1_SHIFT_ST          23
#define GX_CP_VAT_GROUP1_TXC1_SHIFT_END         27
#define GX_CP_VAT_GROUP1_TXC1_SHIFT_SZ          5
#define GX_CP_VAT_GROUP1_TXC1_SHIFT_MASK        (((1 << 5) - 1) << 31 - 27)
#define GX_CP_GET_VAT_GROUP1_TXC1_SHIFT(reg)    GX_BITGET(reg, 23, 5)
#define GX_CP_SET_VAT_GROUP1_TXC1_SHIFT(reg, x) ((reg) = GX_BITSET(reg, 23, 5, x))
// TXC2_CNT [22:22] (1)
#define GX_CP_VAT_GROUP1_TXC2_CNT_ST          22
#define GX_CP_VAT_GROUP1_TXC2_CNT_END         22
#define GX_CP_VAT_GROUP1_TXC2_CNT_SZ          1
#define GX_CP_VAT_GROUP1_TXC2_CNT_MASK        (((1 << 1) - 1) << 31 - 22)
#define GX_CP_GET_VAT_GROUP1_TXC2_CNT(reg)    GX_BITGET(reg, 22, 1)
#define GX_CP_SET_VAT_GROUP1_TXC2_CNT(reg, x) ((reg) = GX_BITSET(reg, 22, 1, x))
// TXC2_TYPE [19:21] (3)
#define GX_CP_VAT_GROUP1_TXC2_TYPE_ST          19
#define GX_CP_VAT_GROUP1_TXC2_TYPE_END         21
#define GX_CP_VAT_GROUP1_TXC2_TYPE_SZ          3
#define GX_CP_VAT_GROUP1_TXC2_TYPE_MASK        (((1 << 3) - 1) << 31 - 21)
#define GX_CP_GET_VAT_GROUP1_TXC2_TYPE(reg)    GX_BITGET(reg, 19, 3)
#define GX_CP_SET_VAT_GROUP1_TXC2_TYPE(reg, x) ((reg) = GX_BITSET(reg, 19, 3, x))
// TXC2_SHIFT [14:18] (5)
#define GX_CP_VAT_GROUP1_TXC2_SHIFT_ST          14
#define GX_CP_VAT_GROUP1_TXC2_SHIFT_END         18
#define GX_CP_VAT_GROUP1_TXC2_SHIFT_SZ          5
#define GX_CP_VAT_GROUP1_TXC2_SHIFT_MASK        (((1 << 5) - 1) << 31 - 18)
#define GX_CP_GET_VAT_GROUP1_TXC2_SHIFT(reg)    GX_BITGET(reg, 14, 5)
#define GX_CP_SET_VAT_GROUP1_TXC2_SHIFT(reg, x) ((reg) = GX_BITSET(reg, 14, 5, x))
// TXC3_CNT [13:13] (1)
#define GX_CP_VAT_GROUP1_TXC3_CNT_ST          13
#define GX_CP_VAT_GROUP1_TXC3_CNT_END         13
#define GX_CP_VAT_GROUP1_TXC3_CNT_SZ          1
#define GX_CP_VAT_GROUP1_TXC3_CNT_MASK        (((1 << 1) - 1) << 31 - 13)
#define GX_CP_GET_VAT_GROUP1_TXC3_CNT(reg)    GX_BITGET(reg, 13, 1)
#define GX_CP_SET_VAT_GROUP1_TXC3_CNT(reg, x) ((reg) = GX_BITSET(reg, 13, 1, x))
// TXC3_TYPE [10:12] (3)
#define GX_CP_VAT_GROUP1_TXC3_TYPE_ST          10
#define GX_CP_VAT_GROUP1_TXC3_TYPE_END         12
#define GX_CP_VAT_GROUP1_TXC3_TYPE_SZ          3
#define GX_CP_VAT_GROUP1_TXC3_TYPE_MASK        (((1 << 3) - 1) << 31 - 12)
#define GX_CP_GET_VAT_GROUP1_TXC3_TYPE(reg)    GX_BITGET(reg, 10, 3)
#define GX_CP_SET_VAT_GROUP1_TXC3_TYPE(reg, x) ((reg) = GX_BITSET(reg, 10, 3, x))
// TXC3_SHIFT [5:9] (5)
#define GX_CP_VAT_GROUP1_TXC3_SHIFT_ST          5
#define GX_CP_VAT_GROUP1_TXC3_SHIFT_END         9
#define GX_CP_VAT_GROUP1_TXC3_SHIFT_SZ          5
#define GX_CP_VAT_GROUP1_TXC3_SHIFT_MASK        (((1 << 5) - 1) << 31 - 9)
#define GX_CP_GET_VAT_GROUP1_TXC3_SHIFT(reg)    GX_BITGET(reg, 5, 5)
#define GX_CP_SET_VAT_GROUP1_TXC3_SHIFT(reg, x) ((reg) = GX_BITSET(reg, 5, 5, x))
// TXC4_CNT [4:4] (1)
#define GX_CP_VAT_GROUP1_TXC4_CNT_ST          4
#define GX_CP_VAT_GROUP1_TXC4_CNT_END         4
#define GX_CP_VAT_GROUP1_TXC4_CNT_SZ          1
#define GX_CP_VAT_GROUP1_TXC4_CNT_MASK        (((1 << 1) - 1) << 31 - 4)
#define GX_CP_GET_VAT_GROUP1_TXC4_CNT(reg)    GX_BITGET(reg, 4, 1)
#define GX_CP_SET_VAT_GROUP1_TXC4_CNT(reg, x) ((reg) = GX_BITSET(reg, 4, 1, x))
// TXC4_TYPE [1:3] (3)
#define GX_CP_VAT_GROUP1_TXC4_TYPE_ST          1
#define GX_CP_VAT_GROUP1_TXC4_TYPE_END         3
#define GX_CP_VAT_GROUP1_TXC4_TYPE_SZ          3
#define GX_CP_VAT_GROUP1_TXC4_TYPE_MASK        (((1 << 3) - 1) << 31 - 3)
#define GX_CP_GET_VAT_GROUP1_TXC4_TYPE(reg)    GX_BITGET(reg, 1, 3)
#define GX_CP_SET_VAT_GROUP1_TXC4_TYPE(reg, x) ((reg) = GX_BITSET(reg, 1, 3, x))

/**
 * CP register 0x90 - VAT_group2
 */
// TXC4_SHIFT [27:31] (5)
#define GX_CP_VAT_GROUP2_TXC4_SHIFT_ST          27
#define GX_CP_VAT_GROUP2_TXC4_SHIFT_END         31
#define GX_CP_VAT_GROUP2_TXC4_SHIFT_SZ          5
#define GX_CP_VAT_GROUP2_TXC4_SHIFT_MASK        (((1 << 5) - 1) << 31 - 31)
#define GX_CP_GET_VAT_GROUP2_TXC4_SHIFT(reg)    GX_BITGET(reg, 27, 5)
#define GX_CP_SET_VAT_GROUP2_TXC4_SHIFT(reg, x) ((reg) = GX_BITSET(reg, 27, 5, x))
// TXC5_CNT [26:26] (1)
#define GX_CP_VAT_GROUP2_TXC5_CNT_ST          26
#define GX_CP_VAT_GROUP2_TXC5_CNT_END         26
#define GX_CP_VAT_GROUP2_TXC5_CNT_SZ          1
#define GX_CP_VAT_GROUP2_TXC5_CNT_MASK        (((1 << 1) - 1) << 31 - 26)
#define GX_CP_GET_VAT_GROUP2_TXC5_CNT(reg)    GX_BITGET(reg, 26, 1)
#define GX_CP_SET_VAT_GROUP2_TXC5_CNT(reg, x) ((reg) = GX_BITSET(reg, 26, 1, x))
// TXC5_TYPE [23:25] (3)
#define GX_CP_VAT_GROUP2_TXC5_TYPE_ST          23
#define GX_CP_VAT_GROUP2_TXC5_TYPE_END         25
#define GX_CP_VAT_GROUP2_TXC5_TYPE_SZ          3
#define GX_CP_VAT_GROUP2_TXC5_TYPE_MASK        (((1 << 3) - 1) << 31 - 25)
#define GX_CP_GET_VAT_GROUP2_TXC5_TYPE(reg)    GX_BITGET(reg, 23, 3)
#define GX_CP_SET_VAT_GROUP2_TXC5_TYPE(reg, x) ((reg) = GX_BITSET(reg, 23, 3, x))
// TXC5_SHIFT [18:22] (5)
#define GX_CP_VAT_GROUP2_TXC5_SHIFT_ST          18
#define GX_CP_VAT_GROUP2_TXC5_SHIFT_END         22
#define GX_CP_VAT_GROUP2_TXC5_SHIFT_SZ          5
#define GX_CP_VAT_GROUP2_TXC5_SHIFT_MASK        (((1 << 5) - 1) << 31 - 22)
#define GX_CP_GET_VAT_GROUP2_TXC5_SHIFT(reg)    GX_BITGET(reg, 18, 5)
#define GX_CP_SET_VAT_GROUP2_TXC5_SHIFT(reg, x) ((reg) = GX_BITSET(reg, 18, 5, x))
// TXC6_CNT [17:17] (1)
#define GX_CP_VAT_GROUP2_TXC6_CNT_ST          17
#define GX_CP_VAT_GROUP2_TXC6_CNT_END         17
#define GX_CP_VAT_GROUP2_TXC6_CNT_SZ          1
#define GX_CP_VAT_GROUP2_TXC6_CNT_MASK        (((1 << 1) - 1) << 31 - 17)
#define GX_CP_GET_VAT_GROUP2_TXC6_CNT(reg)    GX_BITGET(reg, 17, 1)
#define GX_CP_SET_VAT_GROUP2_TXC6_CNT(reg, x) ((reg) = GX_BITSET(reg, 17, 1, x))
// TXC6_TYPE [14:16] (3)
#define GX_CP_VAT_GROUP2_TXC6_TYPE_ST          14
#define GX_CP_VAT_GROUP2_TXC6_TYPE_END         16
#define GX_CP_VAT_GROUP2_TXC6_TYPE_SZ          3
#define GX_CP_VAT_GROUP2_TXC6_TYPE_MASK        (((1 << 3) - 1) << 31 - 16)
#define GX_CP_GET_VAT_GROUP2_TXC6_TYPE(reg)    GX_BITGET(reg, 14, 3)
#define GX_CP_SET_VAT_GROUP2_TXC6_TYPE(reg, x) ((reg) = GX_BITSET(reg, 14, 3, x))
// TXC6_SHIFT [9:13] (5)
#define GX_CP_VAT_GROUP2_TXC6_SHIFT_ST          9
#define GX_CP_VAT_GROUP2_TXC6_SHIFT_END         13
#define GX_CP_VAT_GROUP2_TXC6_SHIFT_SZ          5
#define GX_CP_VAT_GROUP2_TXC6_SHIFT_MASK        (((1 << 5) - 1) << 31 - 13)
#define GX_CP_GET_VAT_GROUP2_TXC6_SHIFT(reg)    GX_BITGET(reg, 9, 5)
#define GX_CP_SET_VAT_GROUP2_TXC6_SHIFT(reg, x) ((reg) = GX_BITSET(reg, 9, 5, x))
// TXC7_CNT [8:8] (1)
#define GX_CP_VAT_GROUP2_TXC7_CNT_ST          8
#define GX_CP_VAT_GROUP2_TXC7_CNT_END         8
#define GX_CP_VAT_GROUP2_TXC7_CNT_SZ          1
#define GX_CP_VAT_GROUP2_TXC7_CNT_MASK        (((1 << 1) - 1) << 31 - 8)
#define GX_CP_GET_VAT_GROUP2_TXC7_CNT(reg)    GX_BITGET(reg, 8, 1)
#define GX_CP_SET_VAT_GROUP2_TXC7_CNT(reg, x) ((reg) = GX_BITSET(reg, 8, 1, x))
// TXC7_TYPE [5:7] (3)
#define GX_CP_VAT_GROUP2_TXC7_TYPE_ST          5
#define GX_CP_VAT_GROUP2_TXC7_TYPE_END         7
#define GX_CP_VAT_GROUP2_TXC7_TYPE_SZ          3
#define GX_CP_VAT_GROUP2_TXC7_TYPE_MASK        (((1 << 3) - 1) << 31 - 7)
#define GX_CP_GET_VAT_GROUP2_TXC7_TYPE(reg)    GX_BITGET(reg, 5, 3)
#define GX_CP_SET_VAT_GROUP2_TXC7_TYPE(reg, x) ((reg) = GX_BITSET(reg, 5, 3, x))
// TXC7_SHIFT [0:4] (5)
#define GX_CP_VAT_GROUP2_TXC7_SHIFT_ST          0
#define GX_CP_VAT_GROUP2_TXC7_SHIFT_END         4
#define GX_CP_VAT_GROUP2_TXC7_SHIFT_SZ          5
#define GX_CP_VAT_GROUP2_TXC7_SHIFT_MASK        (((1 << 5) - 1) << 31 - 4)
#define GX_CP_GET_VAT_GROUP2_TXC7_SHIFT(reg)    GX_BITGET(reg, 0, 5)
#define GX_CP_SET_VAT_GROUP2_TXC7_SHIFT(reg, x) ((reg) = GX_BITSET(reg, 0, 5, x))

/**
 * CP register 0xA0 - ArrayBase
 */
// BASE [6:31] (26)
#define GX_CP_ARRAYBASE_BASE_ST          6
#define GX_CP_ARRAYBASE_BASE_END         31
#define GX_CP_ARRAYBASE_BASE_SZ          26
#define GX_CP_ARRAYBASE_BASE_MASK        (((1 << 26) - 1) << 31 - 31)
#define GX_CP_GET_ARRAYBASE_BASE(reg)    GX_BITGET(reg, 6, 26)
#define GX_CP_SET_ARRAYBASE_BASE(reg, x) ((reg) = GX_BITSET(reg, 6, 26, x))

/**
 * CP register 0xB0 - ArrayStride
 */
// STRIDE [24:31] (8)
#define GX_CP_ARRAYSTRIDE_STRIDE_ST          24
#define GX_CP_ARRAYSTRIDE_STRIDE_END         31
#define GX_CP_ARRAYSTRIDE_STRIDE_SZ          8
#define GX_CP_ARRAYSTRIDE_STRIDE_MASK        (((1 << 8) - 1) << 31 - 31)
#define GX_CP_GET_ARRAYSTRIDE_STRIDE(reg)    GX_BITGET(reg, 24, 8)
#define GX_CP_SET_ARRAYSTRIDE_STRIDE(reg, x) ((reg) = GX_BITSET(reg, 24, 8, x))

#ifdef __cplusplus
}
#endif
#endif

#include "types.h"
#include "Dolphin/vec.h"

#define R_RET fp1
#define FP2   fp2
#define FP3   fp3
#define FP4   fp4
#define FP5   fp5
#define FP6   fp6
#define FP7   fp7
#define FP8   fp8
#define FP9   fp9
#define FP10  fp10
#define FP11  fp11
#define FP12  fp12
#define FP13  fp13
/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void C_VECAdd(void)
{
	// UNUSED FUNCTION
}
/*
 * --INFO--
 * Address:	800EAEB4
 * Size:	000024
 */
// clang-format off
asm void PSVECAdd
(
    const register Vec *vec1,
    const register Vec *vec2,
    register Vec *ret
)
{
    nofralloc;
    psq_l     FP2,  0(vec1), 0, 0;
    psq_l     FP4,  0(vec2), 0, 0;
    ps_add    FP6, FP2, FP4;
    psq_st    FP6,  0(ret), 0, 0;
    psq_l     FP3,   8(vec1), 1, 0;
    psq_l     FP5,   8(vec2), 1, 0;
    ps_add    FP7, FP3, FP5;
    psq_st    FP7,   8(ret), 1, 0;
    blr
}
// clang-format on
/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void C_VECSubtract(void)
{
	// UNUSED FUNCTION
}
/*
 * --INFO--
 * Address:	800EAED8
 * Size:	000024
 */
// clang-format off
asm void PSVECSubtract
(
    const register Vec *vec1,
    const register Vec *vec2,
          register Vec *ret
)
{
    nofralloc;
    psq_l     FP2,  0(vec1), 0, 0;
    psq_l     FP4,  0(vec2), 0, 0;
    ps_sub    FP6, FP2, FP4;
    psq_st    FP6, 0(ret), 0, 0;
    psq_l     FP3,   8(vec1), 1, 0;
    psq_l     FP5,   8(vec2), 1, 0;
    ps_sub    FP7, FP3, FP5;
    psq_st    FP7,  8(ret), 1, 0;
    blr
}
// clang-format on
/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void C_VECScale(void)
{
	// UNUSED FUNCTION
}
/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void PSVECScale(void)
{
	// UNUSED FUNCTION
}
/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
void C_VECNormalize(void)
{
	// UNUSED FUNCTION
}
/*
 * --INFO--
 * Address:	800EAEFC
 * Size:	000044
 */
// clang-format off
void PSVECNormalize
(
    const register Vec *vec1,
          register Vec *ret
)
{
    register f32 half  = 0.5f;
    register f32 three = 3.0f;
    register f32 xx_zz, xx_yy;
    register f32 square_sum;
    register f32 ret_sqrt;
    register f32 n_0, n_1;
    asm
    {
        psq_l       FP2, 0(vec1), 0, 0;
        ps_mul      xx_yy, FP2, FP2;
        psq_l       FP3, 8(vec1), 1, 0;
        ps_madd     xx_zz, FP3, FP3, xx_yy;
        ps_sum0     square_sum, xx_zz, FP3, xx_yy;
        frsqrte     ret_sqrt, square_sum;
        fmuls       n_0, ret_sqrt, ret_sqrt;
        fmuls       n_1, ret_sqrt, half;
        fnmsubs     n_0, n_0, square_sum, three;
        fmuls       ret_sqrt, n_0, n_1;
        ps_muls0    FP2, FP2, ret_sqrt;
        psq_st      FP2, 0(ret), 0, 0;
        ps_muls0    FP3, FP3, ret_sqrt;
        psq_st      FP3, 8(ret), 1, 0;
    }
}
// clang-format on
/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void C_VECSquareMag(void)
{
	// UNUSED FUNCTION
}
/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void PSVECSquareMag(void)
{
	// UNUSED FUNCTION
}
/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void C_VECMag(void)
{
	// UNUSED FUNCTION
}
/*
 * --INFO--
 * Address:	800EAF40
 * Size:	000044
 */
// clang-format off
f32 PSVECMag ( const register Vec *v )
{
    register f32    v_xy, v_zz, square_mag;
    register f32    ret_mag, n_0, n_1;
    register f32    three, half, zero;
    half = 0.5f;
    asm
    {
        psq_l       v_xy, 0(v), 0, 0
        ps_mul      v_xy, v_xy, v_xy
        lfs         v_zz, 8(v)
        fsubs       zero, half, half
        ps_madd     square_mag, v_zz, v_zz, v_xy
        ps_sum0     square_mag, square_mag, v_xy, v_xy
        fcmpu       cr0, square_mag, zero
        beq-        __exit
        frsqrte     ret_mag, square_mag
    }
    three = 3.0f;
    asm
    {
        fmuls       n_0, ret_mag, ret_mag
        fmuls       n_1, ret_mag, half
        fnmsubs     n_0, n_0, square_mag, three
        fmuls       ret_mag, n_0, n_1
        fmuls       square_mag, square_mag, ret_mag
    __exit:
    }
    return square_mag;
}
// clang-format on
/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void C_VECDotProduct(void)
{
	// UNUSED FUNCTION
}
/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void PSVECDotProduct(void)
{
	// UNUSED FUNCTION
}
/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void C_VECCrossProduct(void)
{
	// UNUSED FUNCTION
}
/*
 * --INFO--
 * Address:	800EAF84
 * Size:	00003C
 */
// clang-format off
asm void PSVECCrossProduct
(
    const register Vec *vec1,
    const register Vec *vec2,
          register Vec *ret
)
{
    nofralloc;
    psq_l       fp1, 0(vec2), 0, 0
    lfs         fp2, 8(vec1)
    psq_l       fp0, 0(vec1), 0, 0
    ps_merge10  fp6, fp1, fp1
    lfs         fp3, 8(vec2)
    ps_mul      fp4, fp1, fp2
    ps_muls0    fp7, fp1, fp0
    ps_msub     fp5, fp0, fp3, fp4
    ps_msub     fp8, fp0, fp6, fp7
    ps_merge11  fp9, fp5, fp5
    ps_merge01  fp10, fp5, fp8
    psq_st      fp9, 0(ret), 1, 0
    ps_neg      fp10, fp10
    psq_st      fp10, 4(ret), 0, 0
    blr;
}
// clang-format on
/*
 * --INFO--
 * Address:	........
 * Size:	0000D8
 */
void C_VECHalfAngle(void)
{
	// UNUSED FUNCTION
}
/*
 * --INFO--
 * Address:	........
 * Size:	0000D4
 */
void C_VECReflect(void)
{
	// UNUSED FUNCTION
}
/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void C_VECSquareDistance(void)
{
	// UNUSED FUNCTION
}
/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void PSVECSquareDistance(void)
{
	// UNUSED FUNCTION
}
/*
 * --INFO--
 * Address:	........
 * Size:	0000AC
 */
void C_VECDistance(void)
{
	// UNUSED FUNCTION
}
/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void PSVECDistance(void)
{
	// UNUSED FUNCTION
}

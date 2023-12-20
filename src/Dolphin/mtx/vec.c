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
/**
 * @note Address: N/A
 * @note Size: 0x34
 */
void C_VECAdd(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800EAEB4
 * @note Size: 0x24
 */
ASM void PSVECAdd(const register Vec* vec1, const register Vec* vec2, register Vec* ret)
{
#ifdef __MWERKS__ // clang-format off
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
#endif // clang-format on
}

/**
 * @note Address: N/A
 * @note Size: 0x34
 */
void C_VECSubtract(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800EAED8
 * @note Size: 0x24
 */
ASM void PSVECSubtract(const register Vec* vec1, const register Vec* vec2, register Vec* ret)
{
#ifdef __MWERKS__ // clang-format off
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
#endif // clang-format on
}

/**
 * @note Address: N/A
 * @note Size: 0x28
 */
void C_VECScale(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
void PSVECScale(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xC8
 */
void C_VECNormalize(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800EAEFC
 * @note Size: 0x44
 */
void PSVECNormalize(const register Vec* vec1, register Vec* ret)
{
#ifdef __MWERKS__ // clang-format off
	register f32 half  = 0.5f;
	register f32 three = 3.0f;
	register f32 xx_zz, xx_yy;
	register f32 square_sum;
	register f32 ret_sqrt;
	register f32 n_0, n_1;
	asm {
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
#endif // clang-format on
}

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
void C_VECSquareMag(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x18
 */
void PSVECSquareMag(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x94
 */
void C_VECMag(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800EAF40
 * @note Size: 0x44
 */
f32 PSVECMag(const register Vec* v)
{
	register f32 v_xy, v_zz, square_mag;
	register f32 ret_mag, n_0, n_1;
	register f32 three, half, zero;
	half = 0.5f;
#ifdef __MWERKS__ // clang-format off
	asm {
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
#endif // clang-format on
	three = 3.0f;
#ifdef __MWERKS__ // clang-format off
	asm {
		fmuls       n_0, ret_mag, ret_mag
		fmuls       n_1, ret_mag, half
		fnmsubs     n_0, n_0, square_mag, three
		fmuls       ret_mag, n_0, n_1
		fmuls       square_mag, square_mag, ret_mag
	__exit:
	}
#endif // clang-format on
	return square_mag;
}

/**
 * @note Address: N/A
 * @note Size: 0x30
 */
void C_VECDotProduct(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
void PSVECDotProduct(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */
void C_VECCrossProduct(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800EAF84
 * @note Size: 0x3C
 */
ASM void PSVECCrossProduct(const register Vec* vec1, const register Vec* vec2, register Vec* ret)
{
#ifdef __MWERKS__ // clang-format off
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
#endif // clang-format on
}

/**
 * @note Address: N/A
 * @note Size: 0xD8
 */
void C_VECHalfAngle(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xD4
 */
void C_VECReflect(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x3C
 */
void C_VECSquareDistance(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x28
 */
void PSVECSquareDistance(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xAC
 */
void C_VECDistance(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
void PSVECDistance(void)
{
	// UNUSED FUNCTION
}

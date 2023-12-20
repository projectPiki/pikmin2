#include "Dolphin/mtx.h"

/**
 * @note Address: N/A
 * @note Size: 0x94
 */
void C_MTXMultVec(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800EABD8
 * @note Size: 0x54
 */
ASM void PSMTXMultVec(const register Mtx m, const register Vec* in, register Vec* out)
{
#ifdef __MWERKS__ // clang-format off
	nofralloc;
	psq_l fp0, 0(in), 0, 0;
	psq_l fp2, 0(m), 0, 0;
	psq_l fp1, 8(in), 1, 0;
	ps_mul fp4, fp2, fp0;
	psq_l fp3, 8(m), 0, 0;
	ps_madd fp5, fp3, fp1, fp4;
	psq_l fp8, 16(m), 0, 0;
	ps_sum0 fp6, fp5, fp6, fp5;
	psq_l fp9, 24(m), 0, 0;
	ps_mul fp10, fp8, fp0;
	psq_st fp6, 0(out), 1, 0;
	ps_madd fp11, fp9, fp1, fp10;
	psq_l fp2, 32(m), 0, 0;
	ps_sum0 fp12, fp11, fp12, fp11;
	psq_l fp3, 40(m), 0, 0;
	ps_mul fp4, fp2, fp0;
	psq_st fp12, 4(out), 1, 0;
	ps_madd fp5, fp3, fp1, fp4;
	ps_sum0 fp6, fp5, fp6, fp5;
	psq_st fp6, 8(out), 1, 0;
	blr;
#endif // clang-format on
}

/**
 * @note Address: N/A
 * @note Size: 0x204
 */
void C_MTXMultVecArray(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8C
 */
void PSMTXMultVecArray(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x7C
 */
void C_MTXMultVecSR(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800EAC2C
 * @note Size: 0x54
 */
ASM void PSMTXMultVecSR(const register Mtx mtx, const register Vec* in, register Vec* out)
{
#ifdef __MWERKS__ // clang-format off
	nofralloc;
	psq_l fp0, 0(mtx), 0, 0;
	psq_l fp6, 0(in), 0, 0;
	psq_l fp2, 0x10(mtx), 0, 0;
	ps_mul fp8, fp0, fp6;
	psq_l fp4, 0x20(mtx), 0, 0;
	ps_mul fp10, fp2, fp6;
	psq_l fp7, 8(in), 1, 0;
	ps_mul fp12, fp4, fp6;
	psq_l fp3, 0x18(mtx), 0, 0;
	ps_sum0 fp8, fp8, fp8, fp8;
	psq_l fp5, 0x28(mtx), 0, 0;
	ps_sum0 fp10, fp10, fp10, fp10;
	psq_l fp1, 8(mtx), 0, 0;
	ps_sum0 fp12, fp12, fp12, fp12;
	ps_madd fp9, fp1, fp7, fp8;
	psq_st fp9, 0(out), 1, 0;
	ps_madd fp11, fp3, fp7, fp10;
	psq_st fp11, 4(out), 1, 0;
	ps_madd fp13, fp5, fp7, fp12;
	psq_st fp13, 8(out), 1, 0;
	blr;
#endif // clang-format on
}

/**
 * @note Address: N/A
 * @note Size: 0x1BC
 */
void C_MTXMultVecArraySR(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800EAC80
 * @note Size: 0x88
 */
ASM void PSMTXMultVecArraySR(const register Mtx mtx, register f32* in, register f32* out, register f32* count)
{
#ifdef __MWERKS__ // clang-format off
	nofralloc;
	psq_l fp13, 0(mtx), 0, 0;
	psq_l fp12, 0x10(mtx), 0, 0;
	subi count, count, 1;
	psq_l fp11, 8(mtx), 1, 0;
	ps_merge00 fp0, fp13, fp12;
	subi out, out, 4;
	psq_l fp10, 0x18(mtx), 1, 0;
	ps_merge11 fp1, fp13, fp12;
	mtctr count;

	psq_l fp3, 0x20(mtx), 0, 0;
	ps_merge00 fp2, fp11, fp10;
	psq_l fp4, 0x28(mtx), 1, 0;
	psq_l fp6, 0(in), 0, 0;
	psq_lu fp7, 8(in), 1, 0;
	ps_muls0 fp8, fp0, fp6;
	ps_mul fp9, fp3, fp6;
	ps_madds1 fp8, fp1, fp6, fp8;
	ps_madd fp10, fp4, fp7, fp9;

loop:
	psq_lu fp6, 4(in), 0, 0;
	ps_madds0 fp12, fp2, fp7, fp8;
	psq_lu fp7, 8(in), 1, 0;
	ps_sum0 fp13, fp10, fp9, fp9;
	ps_muls0 fp8, fp0, fp6;
	ps_mul fp9, fp3, fp6;
	psq_stu fp12, 4(out), 0, 0;
	ps_madds1 fp8, fp1, fp6, fp8;
	psq_stu fp13, 8(out), 1, 0;
	ps_madd fp10, fp4, fp7, fp9;
	bdnz + loop;

	ps_madds0 fp12, fp2, fp7, fp8;
	ps_sum0 fp13, fp10, fp9, fp9;
	psq_stu fp12, 4(out), 0, 0;
	psq_stu fp13, 8(out), 1, 0;
	blr;
#endif // clang-format on
}

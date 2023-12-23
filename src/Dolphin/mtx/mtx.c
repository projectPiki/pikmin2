#include "types.h"
#include "fdlibm.h"
#include "Dolphin/mtx.h"
#include "math.h"
static f32 Unit01[] = { 0.0f, 1.0f };

extern f32 sinf(f32);

/**
 * @note Address: N/A
 * @note Size: 0x3C
 */
void C_MTXIdentity(Mtx mtx)
{
	mtx[0][0] = 1.0f;
	mtx[0][1] = 0.0f;
	mtx[0][2] = 0.0f;
	mtx[1][0] = 0.0f;
	mtx[1][1] = 1.0f;
	mtx[1][2] = 0.0f;
	mtx[2][0] = 0.0f;
	mtx[2][1] = 0.0f;
	mtx[2][2] = 1.0f;
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800EA2A0
 * @note Size: 0x2C
 */
void PSMTXIdentity(register Mtx m)
{
	register f32 zero_c = 0.0f;
	register f32 one_c  = 1.0f;
	register f32 c_01;
	register f32 c_10;

#ifdef __MWERKS__ // clang-format off
	asm {
		psq_st      zero_c, 8(m),   0, 0
		ps_merge01  c_01, zero_c, one_c
		psq_st      zero_c, 24(m),  0, 0
		ps_merge10  c_10, one_c, zero_c
		psq_st      zero_c, 32(m),  0, 0
		psq_st      c_01,   16(m),  0, 0
		psq_st      c_10,   0(m),   0, 0
		psq_st      c_10,   40(m),  0, 0
	}
#endif // clang-format on
}

/**
 * @note Address: N/A
 * @note Size: 0x6C
 */
void C_MTXCopy(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800EA2CC
 * @note Size: 0x34
 */
ASM void PSMTXCopy(const register Mtx src, register Mtx dst)
{
#ifdef __MWERKS__ // clang-format off
	nofralloc

	psq_l       fp0, 0(src),   0, 0
	psq_st      fp0, 0(dst),   0, 0
	psq_l       fp1, 8(src),   0, 0
	psq_st      fp1, 8(dst),   0, 0
	psq_l       fp2, 16(src),  0, 0
	psq_st      fp2, 16(dst),  0, 0
	psq_l       fp3, 24(src),  0, 0
	psq_st      fp3, 24(dst),  0, 0
	psq_l       fp4, 32(src),  0, 0
	psq_st      fp4, 32(dst),  0, 0
	psq_l       fp5, 40(src),  0, 0
	psq_st      fp5, 40(dst),  0, 0

	blr
#endif // clang-format on
}

/**
 * @note Address: N/A
 * @note Size: 0x2A8
 */
void C_MTXConcat(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800EA300
 * @note Size: 0xCC
 */
ASM void PSMTXConcat(const register Mtx mA, // r3
                     const register Mtx mB, // r4
                     register Mtx mAB       // r5
)
{
#ifdef __MWERKS__ // clang-format off
	nofralloc

#define FP0 fp0
#define FP1 fp1
#define FP2 fp2
#define FP3 fp3
#define FP4 fp4
#define FP5 fp5
#define FP6 fp6
#define FP7 fp7
#define FP8 fp8
#define FP9 fp9
#define FP10 fp10
#define FP11 fp11
#define FP12 fp12
#define FP13 fp13
#define FP14 fp14
#define FP15 fp15
#define FP31 fp31
	stwu    r1, -64(r1)
	psq_l   FP0, 0(mA), 0, 0
	stfd    fp14, 8(r1)
	psq_l   FP6, 0(mB), 0, 0
	addis   r6, 0, Unit01@ha
	psq_l   FP7, 8(mB), 0, 0
	stfd    fp15, 16(r1)
	addi    r6, r6, Unit01@l
	stfd    fp31, 40(r1)
	psq_l   FP8, 16(mB), 0, 0
	ps_muls0 FP12, FP6, FP0
	psq_l   FP2, 16(mA), 0, 0
	ps_muls0 FP13, FP7, FP0
	psq_l   FP31, 0(r6), 0, 0
	ps_muls0 FP14, FP6, FP2
	psq_l   FP9, 24(mB), 0, 0
	ps_muls0 FP15, FP7, FP2
	psq_l   FP1, 8(mA), 0, 0
		ps_madds1 FP12, FP8, FP0, FP12
	psq_l   FP3, 24(mA), 0, 0
		ps_madds1 FP14, FP8, FP2, FP14
	psq_l   FP10, 32(mB), 0, 0
		ps_madds1 FP13, FP9, FP0, FP13
	psq_l   FP11, 40(mB), 0, 0
		ps_madds1 FP15, FP9, FP2, FP15
	psq_l   FP4, 32(mA), 0, 0
	psq_l   FP5, 40(mA), 0, 0
			ps_madds0 FP12, FP10, FP1, FP12
			ps_madds0 FP13, FP11, FP1, FP13
			ps_madds0 FP14, FP10, FP3, FP14
			ps_madds0 FP15, FP11, FP3, FP15
	psq_st  FP12, 0(mAB), 0, 0

	ps_muls0 FP2, FP6, FP4
				ps_madds1 FP13, FP31, FP1, FP13
	ps_muls0 FP0, FP7, FP4
	psq_st  FP14, 16(mAB), 0, 0
				ps_madds1 FP15, FP31, FP3, FP15

	psq_st  FP13, 8(mAB), 0, 0

		ps_madds1 FP2, FP8, FP4, FP2
		ps_madds1 FP0, FP9, FP4, FP0
			ps_madds0 FP2, FP10, FP5, FP2
	lfd    fp14, 8(r1)
	psq_st  FP15, 24(mAB), 0, 0
			ps_madds0 FP0, FP11, FP5, FP0
	psq_st  FP2, 32(mAB), 0, 0
				ps_madds1 FP0, FP31, FP5, FP0
	lfd    fp15, 16(r1)
	psq_st  FP0, 40(mAB), 0, 0

	lfd    fp31, 40(r1)
	addi   r1, r1, 64

	blr

#undef FP0
#undef FP1
#undef FP2
#undef FP3
#undef FP4
#undef FP5
#undef FP6
#undef FP7
#undef FP8
#undef FP9
#undef FP10
#undef FP11
#undef FP12
#undef FP13
#undef FP14
#undef FP15
#undef FP31
#endif // clang-format on
}

/**
 * @note Address: N/A
 * @note Size: 0x68
 */
void C_MTXConcatArray(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x158
 */
void PSMTXConcatArray(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x9C
 */
void C_MTXTranspose(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800EA3CC
 * @note Size: 0x50
 */
#pragma scheduling off
void PSMTXTranspose(const register Mtx src, register Mtx xPose)
{
	register f32 c_zero = 0.0f;
	register f32 row0a, row1a, row0b, row1b;
	register f32 trns0, trns1, trns2;

#ifdef __MWERKS__ // clang-format off
	asm {
		psq_l       row0a, 0(src),  0, 0
		stfs        c_zero, 44(xPose)
		psq_l       row1a, 16(src), 0, 0
		ps_merge00  trns0, row0a, row1a
		psq_l       row0b, 8(src),  1, 0
		ps_merge11  trns1, row0a, row1a
		psq_l       row1b, 24(src), 1, 0
		psq_st      trns0, 0(xPose),  0, 0
		psq_l       row0a, 32(src), 0, 0
		ps_merge00  trns2, row0b, row1b
		psq_st      trns1, 16(xPose), 0, 0
		ps_merge00  trns0, row0a, c_zero
		psq_st      trns2, 32(xPose), 0, 0
		ps_merge10  trns1, row0a, c_zero
		psq_st      trns0, 8(xPose),  0, 0
		lfs         row0b, 40(src)
		psq_st      trns1, 24(xPose), 0, 0
		stfs        row0b, 40(xPose)
	}
#endif // clang-format on
}

/**
 * @note Address: N/A
 * @note Size: 0x2AC
 */
void C_MTXInverse(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800EA41C
 * @note Size: 0xF8
 */
ASM u32 PSMTXInverse(const register Mtx src, register Mtx inv)
{
#ifdef __MWERKS__ // clang-format off
	nofralloc
	psq_l       fp0, 0(src), 1, 0
	psq_l       fp1, 4(src), 0, 0
	psq_l       fp2, 16(src), 1, 0
		ps_merge10  fp6, fp1, fp0
	psq_l       fp3, 20(src), 0, 0
	psq_l       fp4, 32(src), 1, 0
		ps_merge10  fp7, fp3, fp2
	psq_l       fp5, 36(src), 0, 0
	ps_mul      fp11, fp3, fp6
	ps_mul      fp13, fp5, fp7
		ps_merge10  fp8, fp5, fp4
	ps_msub     fp11, fp1, fp7, fp11
	ps_mul      fp12, fp1, fp8
	ps_msub     fp13, fp3, fp8, fp13
		ps_mul      fp10, fp3, fp4
	ps_msub     fp12, fp5, fp6, fp12
		ps_mul      fp9,  fp0, fp5
		ps_mul      fp8,  fp1, fp2
	ps_sub      fp6, fp6, fp6
		ps_msub     fp10, fp2, fp5, fp10
	ps_mul      fp7, fp0, fp13
		ps_msub     fp9,  fp1, fp4, fp9
	ps_madd     fp7, fp2, fp12, fp7
		ps_msub     fp8,  fp0, fp3, fp8
	ps_madd     fp7, fp4, fp11, fp7
	ps_cmpo0    cr0, fp7, fp6
	bne         _regular
	addi        r3, 0, 0
	blr
  _regular:
	fres        fp0, fp7
	ps_add      fp6, fp0, fp0
	ps_mul      fp5, fp0, fp0
	ps_nmsub    fp0, fp7, fp5, fp6
	lfs         fp1, 12(src)
		ps_muls0    fp13, fp13, fp0
	lfs         fp2, 28(src)
		ps_muls0    fp12, fp12, fp0
	lfs         fp3, 44(src)
		ps_muls0    fp11, fp11, fp0
	ps_merge00  fp5, fp13, fp12
		ps_muls0    fp10, fp10, fp0
	ps_merge11  fp4, fp13, fp12
		ps_muls0    fp9,  fp9,  fp0
	psq_st      fp5,  0(inv), 0, 0
		ps_mul      fp6, fp13, fp1
	psq_st      fp4,  16(inv), 0, 0
		ps_muls0    fp8,  fp8,  fp0
		ps_madd     fp6, fp12, fp2, fp6
	psq_st      fp10, 32(inv), 1, 0
		ps_nmadd    fp6, fp11, fp3, fp6
	psq_st      fp9,  36(inv), 1, 0
		ps_mul      fp7, fp10, fp1
		ps_merge00  fp5, fp11, fp6
	psq_st      fp8,  40(inv), 1, 0
		ps_merge11  fp4, fp11, fp6
	psq_st      fp5,  8(inv), 0, 0
		ps_madd     fp7, fp9,  fp2, fp7
	psq_st      fp4,  24(inv), 0, 0
		ps_nmadd    fp7, fp8,  fp3, fp7
			addi        r3, 0, 1
	psq_st      fp7,  44(inv), 1, 0
	blr
#endif // clang-format on
}

/**
 * @note Address: N/A
 * @note Size: 0x21C
 */
void C_MTXInvXpose(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xC8
 */
void PSMTXInvXpose(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x70
 */
void C_MTXRotRad(void)
{
	// UNUSED FUNCTION
}
#pragma scheduling reset
/**
 * @note Address: 0x800EA514
 * @note Size: 0x70
 */
void PSMTXRotRad(Mtx m, char axis, f32 rad)
{
	f32 sinA, cosA;
	sinA = sinf(rad);
	cosA = cosf(rad);
	PSMTXRotTrig(m, axis, sinA, cosA);
}

/**
 * @note Address: N/A
 * @note Size: 0x104
 */
void C_MTXRotTrig(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800EA584
 * @note Size: 0xB0
 */
void PSMTXRotTrig(register Mtx m, register char axis, register f32 sinA, register f32 cosA)
{
	register f32 fc0, fc1, nsinA;
	register f32 fw0, fw1, fw2, fw3;

#ifdef __MWERKS__ // clang-format off
	asm {
		frsp        sinA, sinA
		frsp        cosA, cosA
	}
#endif // clang-format on

	fc0 = 0.0f;
	fc1 = 1.0f;

#ifdef __MWERKS__ // clang-format off
	asm {
		ori         axis, axis, 0x20
		ps_neg      nsinA, sinA
		cmplwi      axis, 'x'
		beq         _case_x
		cmplwi      axis, 'y'
		beq         _case_y
		cmplwi      axis, 'z'
		beq         _case_z
		b           _end

	_case_x:
		psq_st      fc1,  0(m), 1, 0
		psq_st      fc0,  4(m), 0, 0
		ps_merge00  fw0, sinA, cosA
		psq_st      fc0, 12(m), 0, 0
		ps_merge00  fw1, cosA, nsinA
		psq_st      fc0, 28(m), 0, 0
		psq_st      fc0, 44(m), 1, 0
		psq_st      fw0, 36(m), 0, 0
		psq_st      fw1, 20(m), 0, 0
		b           _end;

	_case_y:
		ps_merge00  fw0, cosA, fc0
		ps_merge00  fw1, fc0, fc1
		psq_st      fc0, 24(m), 0, 0
		psq_st      fw0,  0(m), 0, 0
		ps_merge00  fw2, nsinA, fc0
		ps_merge00  fw3, sinA, fc0
		psq_st      fw0, 40(m), 0, 0;
		psq_st      fw1, 16(m), 0, 0;
		psq_st      fw3,  8(m), 0, 0;
		psq_st      fw2, 32(m), 0, 0;
		b           _end;

	_case_z:
		psq_st      fc0,  8(m), 0, 0
		ps_merge00  fw0, sinA, cosA
		ps_merge00  fw2, cosA, nsinA
		psq_st      fc0, 24(m), 0, 0
		psq_st      fc0, 32(m), 0, 0
		ps_merge00  fw1, fc1, fc0
		psq_st      fw0, 16(m), 0, 0
		psq_st      fw2,  0(m), 0, 0
		psq_st      fw1, 40(m), 0, 0

	_end:

	}
#endif // clang-format on
}

/**
 * @note Address: N/A
 * @note Size: 0x118
 */
void C_MTXRotAxisRad(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800EA634
 * @note Size: 0xB0
 */
static void __PSMTXRotAxisRadInternal(register Mtx m, const register Vec* axis, register f32 sT, register f32 cT)
{
	register f32 tT, fc0;
	register f32 tmp0, tmp1, tmp2, tmp3, tmp4;
	register f32 tmp5, tmp6, tmp7, tmp8, tmp9;

	tmp9 = 0.5f;
	tmp8 = 3.0f;

#ifdef __MWERKS__ // clang-format off
	asm {
		frsp        cT, cT
		psq_l       tmp0, 0(axis), 0, 0
		frsp        sT, sT
		lfs         tmp1, 8(axis)
		ps_mul      tmp2, tmp0, tmp0
		fadds       tmp7, tmp9, tmp9
		ps_madd     tmp3, tmp1, tmp1, tmp2
		fsubs       fc0, tmp9, tmp9
		ps_sum0     tmp4, tmp3, tmp1, tmp2
		fsubs       tT, tmp7, cT
		frsqrte     tmp5, tmp4
		fmuls       tmp2, tmp5, tmp5
		fmuls       tmp3, tmp5, tmp9
		fnmsubs     tmp2, tmp2, tmp4, tmp8
		fmuls       tmp5, tmp2, tmp3
		ps_merge00  cT, cT, cT
		ps_muls0    tmp0, tmp0, tmp5
		ps_muls0    tmp1, tmp1, tmp5
		ps_muls0    tmp4, tmp0, tT
		ps_muls0    tmp9, tmp0, sT
		ps_muls0    tmp5, tmp1, tT
		ps_muls1    tmp3, tmp4, tmp0
		ps_muls0    tmp2, tmp4, tmp0
		ps_muls0    tmp4, tmp4, tmp1
		fnmsubs     tmp6, tmp1, sT, tmp3
		fmadds      tmp7, tmp1, sT, tmp3
		ps_neg      tmp0, tmp9
		ps_sum0     tmp8, tmp4, fc0, tmp9
		ps_sum0     tmp2, tmp2, tmp6, cT
		ps_sum1     tmp3, cT, tmp7, tmp3
		ps_sum0     tmp6, tmp0, fc0 ,tmp4
			psq_st      tmp8, 8(m), 0, 0
		ps_sum0     tmp0, tmp4, tmp4, tmp0
			psq_st      tmp2, 0(m), 0, 0
		ps_muls0    tmp5, tmp5, tmp1
			psq_st      tmp3, 16(m), 0, 0
		ps_sum1     tmp4, tmp9, tmp0, tmp4
			psq_st      tmp6, 24(m), 0, 0
		ps_sum0     tmp5, tmp5, fc0, cT
			psq_st      tmp4, 32(m), 0, 0
			psq_st      tmp5, 40(m), 0, 0
	}
#endif // clang-format on
}

/**
 * @note Address: 0x800EA6E4
 * @note Size: 0x70
 */
void PSMTXRotAxisRad(Mtx m, const Vec* axis, f32 rad)
{
	f32 sinT, cosT;

	sinT = sinf(rad);
	cosT = cosf(rad);

	__PSMTXRotAxisRadInternal(m, axis, sinT, cosT);
}

/**
 * @note Address: N/A
 * @note Size: 0x3C
 */
void C_MTXTrans(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800EA754
 * @note Size: 0x34
 */
void PSMTXTrans(register Mtx m, register f32 xT, register f32 yT, register f32 zT)
{
	register f32 c0 = 0.0f;
	register f32 c1 = 1.0f;

#ifdef __MWERKS__ // clang-format off
	asm {
		stfs        xT,     12(m)
		stfs        yT,     28(m)
		psq_st      c0,      4(m), 0, 0
		psq_st      c0,     32(m), 0, 0
		stfs        c0,     16(m)
		stfs        c1,     20(m)
		stfs        c0,     24(m)
		stfs        c1,     40(m)
		stfs        zT,     44(m)
		stfs        c1,      0(m)
	}
#endif // clang-format on
}

/**
 * @note Address: N/A
 * @note Size: 0x78
 */
void C_MTXTransApply(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800EA788
 * @note Size: 0x4C
 */
ASM void PSMTXTransApply(const register Mtx src, register Mtx dst, register f32 xT, register f32 yT, register f32 zT)
{
#ifdef __MWERKS__ // clang-format off
	nofralloc;
	psq_l       fp4, 0(src),        0, 0;
	frsp        xT, xT;
	psq_l       fp5, 8(src),        0, 0;
	frsp        yT, yT;
	psq_l       fp7, 24(src),       0, 0;
	frsp        zT, zT;
	psq_l       fp8, 40(src),       0, 0;
	psq_st      fp4, 0(dst),        0, 0;
	ps_sum1     fp5, xT, fp5, fp5;
	psq_l       fp6, 16(src),       0, 0;
	psq_st      fp5, 8(dst),        0, 0;
	ps_sum1     fp7, yT, fp7, fp7;
	psq_l       fp9, 32(src),       0, 0;
	psq_st      fp6, 16(dst),       0, 0;
	ps_sum1     fp8, zT, fp8, fp8;
	psq_st      fp7, 24(dst),       0, 0;
	psq_st      fp9, 32(dst),       0, 0;
	psq_st      fp8, 40(dst),       0, 0;
	blr;
#endif // clang-format on
}

/**
 * @note Address: N/A
 * @note Size: 0x38
 */
void C_MTXScale(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800EA7D4
 * @note Size: 0x28
 */
void PSMTXScale(register Mtx m, register f32 xS, register f32 yS, register f32 zS)
{
	register f32 c0 = 0.0f;

#ifdef __MWERKS__ // clang-format off
	asm {
		stfs        xS,      0(m)
		psq_st      c0,      4(m), 0, 0
		psq_st      c0,     12(m), 0, 0
		stfs        yS,     20(m)
		psq_st      c0,     24(m), 0, 0
		psq_st      c0,     32(m), 0, 0
		stfs        zS,     40(m)
		stfs        c0,     44(m)
	}
#endif // clang-format on
}

/**
 * @note Address: N/A
 * @note Size: 0x94
 */
void C_MTXScaleApply(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800EA7FC
 * @note Size: 0x58
 */
ASM void PSMTXScaleApply(const register Mtx src, register Mtx dst, register f32 xS, register f32 yS, register f32 zS)
{
#ifdef __MWERKS__ // clang-format off
	nofralloc;
	frsp        xS, xS;
	psq_l       fp4, 0(src),        0, 0;
	frsp        yS, yS;
	psq_l       fp5, 8(src),        0, 0;
	frsp        zS, zS;
	ps_muls0    fp4, fp4, xS;
	psq_l       fp6, 16(src),       0, 0;
	ps_muls0    fp5, fp5, xS;
	psq_l       fp7, 24(src),       0, 0;
	ps_muls0    fp6, fp6, yS;
	psq_l       fp8, 32(src),       0, 0;
	psq_st      fp4, 0(dst),        0, 0;
	ps_muls0    fp7, fp7, yS;
	psq_l       fp2, 40(src),       0, 0;
	psq_st      fp5, 8(dst),        0, 0;
	ps_muls0    fp8, fp8, zS;
	psq_st      fp6, 16(dst),       0, 0;
	ps_muls0    fp2, fp2, zS;
	psq_st      fp7, 24(dst),       0, 0;
	psq_st      fp8, 32(dst),       0, 0;
	psq_st      fp2, 40(dst),       0, 0;
	blr;
#endif // clang-format on
}

/**
 * @note Address: N/A
 * @note Size: 0xF0
 */
void C_MTXQuat(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800EA854
 * @note Size: 0xA4
 */
void PSMTXQuat(register Mtx m, const register PSQuaternion* q)
{
	register f32 c_zero, c_one, c_two, scale;
	register f32 tmp0, tmp1, tmp2, tmp3, tmp4;
	register f32 tmp5, tmp6, tmp7, tmp8, tmp9;
	c_one = 1.0f;
#ifdef __MWERKS__ // clang-format off
	asm {
		psq_l       tmp0, 0(q), 0, 0
		psq_l       tmp1, 8(q), 0, 0
		fsubs       c_zero, c_one, c_one
		fadds       c_two, c_one, c_one
		ps_mul      tmp2, tmp0, tmp0
		ps_merge10  tmp5, tmp0, tmp0
		ps_madd     tmp4, tmp1, tmp1, tmp2
		ps_mul      tmp3, tmp1, tmp1
			ps_sum0     scale, tmp4, tmp4, tmp4
		ps_muls1    tmp7, tmp5, tmp1
			fres        tmp9, scale
		ps_sum1     tmp4, tmp3, tmp4, tmp2
			ps_nmsub    scale, scale, tmp9, c_two
		ps_muls1    tmp6, tmp1, tmp1
			ps_mul      scale, tmp9, scale
		ps_sum0     tmp2, tmp2, tmp2, tmp2
			fmuls       scale, scale, c_two
		ps_madd     tmp8, tmp0, tmp5, tmp6
		ps_msub     tmp6, tmp0, tmp5, tmp6
			psq_st      c_zero, 12(m), 1, 0
		ps_nmsub    tmp2, tmp2, scale, c_one
		ps_nmsub    tmp4, tmp4, scale, c_one
			psq_st      c_zero, 44(m), 1, 0
		ps_mul      tmp8, tmp8, scale
		ps_mul      tmp6, tmp6, scale
			psq_st      tmp2, 40(m), 1, 0
		ps_madds0   tmp5, tmp0, tmp1, tmp7
		ps_merge00  tmp1, tmp8, tmp4
		ps_nmsub    tmp7, tmp7, c_two, tmp5
		ps_merge10  tmp0, tmp4, tmp6
			psq_st      tmp1, 16(m), 0, 0
		ps_mul      tmp5, tmp5, scale
		ps_mul      tmp7, tmp7, scale
			psq_st      tmp0,  0(m), 0, 0
			psq_st      tmp5,  8(m), 1, 0
		ps_merge10  tmp3, tmp7, c_zero
		ps_merge01  tmp9, tmp7, tmp5
			psq_st      tmp3, 24(m), 0, 0
			psq_st      tmp9, 32(m), 0, 0
	}
#endif // clang-format on
}

/**
 * @note Address: N/A
 * @note Size: 0x100
 */
void C_MTXReflect(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x70
 */
void PSMTXReflect(void)
{
	// UNUSED FUNCTION
}

#pragma fp_contract off

/**
 * @note Address: 0x800EA8F8
 * @note Size: 0x18C
 */
void C_MTXLookAt(Mtx m, const Vec* camPos, const Vec* camUp, const Vec* target)
{

	Vec vLook, vRight, vUp;

	vLook.x = camPos->x - target->x;
	vLook.y = camPos->y - target->y;
	vLook.z = camPos->z - target->z;
	PSVECNormalize(&vLook, &vLook);

	PSVECCrossProduct(camUp, &vLook, &vRight);
	PSVECNormalize(&vRight, &vRight);

	PSVECCrossProduct(&vLook, &vRight, &vUp);

	m[0][0] = vRight.x;
	m[0][1] = vRight.y;
	m[0][2] = vRight.z;
	m[0][3] = -(camPos->x * vRight.x + camPos->y * vRight.y + camPos->z * vRight.z);

	m[1][0] = vUp.x;
	m[1][1] = vUp.y;
	m[1][2] = vUp.z;
	m[1][3] = -(camPos->x * vUp.x + camPos->y * vUp.y + camPos->z * vUp.z);

	m[2][0] = vLook.x;
	m[2][1] = vLook.y;
	m[2][2] = vLook.z;
	m[2][3] = -(camPos->x * vLook.x + camPos->y * vLook.y + camPos->z * vLook.z);
}

/**
 * @note Address: N/A
 * @note Size: 0x94
 */
void C_MTXLightFrustum(Mtx m, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9)
{
	f32 tmp = 1.0f / (arg4 - arg3);
	m[0][0] = ((2 * arg5) * tmp) * arg6;
	m[0][1] = 0.0f;
	m[0][2] = (((arg4 + arg3) * tmp) * arg6) - arg8;
	m[0][3] = 0.0f;
	tmp     = 1.0f / (arg1 - arg2);
	m[1][0] = 0.0f;
	m[1][1] = ((2 * arg5) * tmp) * arg7;
	m[1][2] = (((arg1 + arg2) * tmp) * arg7) - arg9;
	m[1][3] = 0.0f;
	m[2][0] = 0.0f;
	m[2][1] = 0.0f;
	m[2][2] = -1.0f;
	m[2][3] = 0.0f;
}

/**
 * @note Address: 0x800EAA84
 * @note Size: 0xCC
 */
void C_MTXLightPerspective(Mtx m, f32 fovY, f32 aspect, f32 scaleS, f32 scaleT, f32 transS, f32 transT)
{
	f32 angle;
	f32 cot;

	angle = fovY * 0.5f;
	angle = MTXDegToRad(angle);

	cot = 1.0f / tanf(angle);

	m[0][0] = (cot / aspect) * scaleS;
	m[0][1] = 0.0f;
	m[0][2] = -transS;
	m[0][3] = 0.0f;

	m[1][0] = 0.0f;
	m[1][1] = cot * scaleT;
	m[1][2] = -transT;
	m[1][3] = 0.0f;

	m[2][0] = 0.0f;
	m[2][1] = 0.0f;
	m[2][2] = -1.0f;
	m[2][3] = 0.0f;
}

/**
 * @note Address: 0x800EAB50
 * @note Size: 0x88
 */
void C_MTXLightOrtho(Mtx m, f32 t, f32 b, f32 l, f32 r, f32 scaleS, f32 scaleT, f32 transS, f32 transT)
{
	f32 tmp;

	tmp     = 1.0f / (r - l);
	m[0][0] = (2.0f * tmp * scaleS);
	m[0][1] = 0.0f;
	m[0][2] = 0.0f;
	m[0][3] = ((-(r + l) * tmp) * scaleS) + transS;

	tmp     = 1.0f / (t - b);
	m[1][0] = 0.0f;
	m[1][1] = (2.0f * tmp) * scaleT;
	m[1][2] = 0.0f;
	m[1][3] = ((-(t + b) * tmp) * scaleT) + transT;

	m[2][0] = 0.0f;
	m[2][1] = 0.0f;
	m[2][2] = 0.0f;
	m[2][3] = 1.0f;
}
#pragma fp_contract reset

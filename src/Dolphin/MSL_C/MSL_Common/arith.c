#include "PowerPC_EABI_Support/MSL_C/MSL_Common/arith.h"

/**
 * @note Address: 0x800C6150
 * @note Size: 0x10
 */
int abs(int x) { return x > 0 ? x : -x; }

/**
 * @note Address: N/A
 * @note Size: 0x10
 */
s32 labs(s32 x)
{
	// UNUSED FUNCTION
	return x > 0 ? x : -x;
}

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
void llabs(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800C60F8
 * @note Size: 0x58
 */
div_t div(s32 __numer, s32 __denom)
{
	int iVar1;
	int iVar2;
	int iVar3;
	div_t ret;

	iVar2 = 1;
	iVar3 = 1;
	if (__numer < 0) {
		__numer = -__numer;
		iVar2   = -1;
	}
	if (__denom < 0) {
		__denom = -__denom;
		iVar3   = -1;
	}
	iVar1 = (__numer / __denom) * (iVar2 * iVar3);

	ret.quot = iVar1;
	ret.rem  = __numer * iVar2 - iVar3 * (iVar1 * __denom);
	return ret;
}

/**
 * @note Address: N/A
 * @note Size: 0x58
 */
void ldiv(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x15C
 */
void lldiv(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x60
 */
void __msl_add(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x60
 */
void __msl_ladd(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xD8
 */
void __lladd(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
void __msl_mul(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
void __msl_lmul(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x148
 */
void __llmul(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x78
 */
void __msl_div(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x78
 */
void __msl_ldiv(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x1C4
 */
void __lldiv(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x5C
 */
void __msl_mod(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x5C
 */
void __msl_lmod(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x198
 */
void __llmod(void)
{
	// UNUSED FUNCTION
}

#include "Dolphin/arith.h"

/*
 * --INFO--
 * Address:	........
 * Size:	000198
 */
void __llmod(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void __msl_lmod(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void __msl_mod(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001C4
 */
void __lldiv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void __msl_ldiv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void __msl_div(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000148
 */
void __llmul(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void __msl_lmul(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void __msl_mul(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D8
 */
void __lladd(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void __msl_ladd(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void __msl_add(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00015C
 */
void lldiv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void ldiv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C60F8
 * Size:	000058
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

	/*
	.loc_0x0:
	  mr.       r7, r3
	  stwu      r1, -0x10(r1)
	  li        r5, 0x1
	  li        r6, 0x1
	  bge-      .loc_0x1C
	  neg       r7, r7
	  li        r5, -0x1

	.loc_0x1C:
	  cmpwi     r4, 0
	  bge-      .loc_0x2C
	  neg       r4, r4
	  li        r6, -0x1

	.loc_0x2C:
	  divw      r3, r7, r4
	  mullw     r0, r5, r6
	  mullw     r3, r3, r0
	  mullw     r0, r3, r4
	  stw       r3, 0x8(r1)
	  mullw     r4, r6, r0
	  mullw     r0, r7, r5
	  sub       r4, r0, r4
	  stw       r4, 0xC(r1)
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void llabs(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
long labs(long __x)
{
	// UNUSED FUNCTION
	return (__x >> 0x1f ^ __x) - (__x >> 0x1f);
	/*
	.loc_0x0:
	  srawi     r4, r3, 0x1F
	  xor       r0, r4, r3
	  sub       r3, r0, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C6150
 * Size:	000010
 */
int abs(int __x)
{
	return (__x >> 0x1f ^ __x) - (__x >> 0x1f);
	/*
	.loc_0x0:
	  srawi     r4, r3, 0x1F
	  xor       r0, r4, r3
	  sub       r3, r0, r4
	  blr
	*/
}

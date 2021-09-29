

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
void PSVECAdd(void)
{
/*
.loc_0x0:
  psq_l     f2,0x0(r3),0,0
  psq_l     f4,0x0(r4),0,0
  ps_add    f6, f2, f4
  psq_st    f6,0x0(r5),0,0
  psq_l     f3,0x8(r3),0x1,0
  psq_l     f5,0x8(r4),0x1,0
  ps_add    f7, f3, f5
  psq_st    f7,0x8(r5),0x1,0
  blr
*/
}

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
void PSVECSubtract(void)
{
/*
.loc_0x0:
  psq_l     f2,0x0(r3),0,0
  psq_l     f4,0x0(r4),0,0
  ps_sub    f6, f2, f4
  psq_st    f6,0x0(r5),0,0
  psq_l     f3,0x8(r3),0x1,0
  psq_l     f5,0x8(r4),0x1,0
  ps_sub    f7, f3, f5
  psq_st    f7,0x8(r5),0x1,0
  blr
*/
}

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
void PSVECNormalize(void)
{
/*
.loc_0x0:
  lfs       f0, -0x6C18(r2)
  lfs       f1, -0x6C14(r2)
  psq_l     f2,0x0(r3),0,0
  ps_mul    f5, f2, f2
  psq_l     f3,0x8(r3),0x1,0
  ps_madd   f4, f3, f3, f5
  ps_sum0   f4, f4, f3, f5
  fsqrte    f5, f4
  fmuls     f6, f5, f5
  fmuls     f0, f5, f0
  fnmsubs   f6, f6, f4, f1
  fmuls     f5, f6, f0
  ps_muls0  f2, f2, f5
  psq_st    f2,0x0(r4),0,0
  ps_muls0  f3, f3, f5
  psq_st    f3,0x8(r4),0x1,0
  blr
*/
}

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
void PSVECMag(void)
{
/*
.loc_0x0:
  lfs       f4, -0x6C18(r2)
  psq_l     f0,0x0(r3),0,0
  ps_mul    f0, f0, f0
  lfs       f1, 0x8(r3)
  fsubs     f2, f4, f4
  ps_madd   f1, f1, f1, f0
  ps_sum0   f1, f1, f0, f0
  fcmpu     cr0, f1, f2
  beq-      .loc_0x40
  fsqrte    f0, f1
  lfs       f3, -0x6C14(r2)
  fmuls     f2, f0, f0
  fmuls     f0, f0, f4
  fnmsubs   f2, f2, f1, f3
  fmuls     f0, f2, f0
  fmuls     f1, f1, f0

.loc_0x40:
  blr
*/
}

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
void PSVECCrossProduct(void)
{
/*
.loc_0x0:
  psq_l     f1,0x0(r4),0,0
  lfs       f2, 0x8(r3)
  psq_l     f0,0x0(r3),0,0
  ps_merge10f6, f1, f1
  lfs       f3, 0x8(r4)
  ps_mul    f4, f1, f2
  ps_muls0  f7, f1, f0
  ps_msub   f5, f0, f3, f4
  ps_msub   f8, f0, f6, f7
  ps_merge11f9, f5, f5
  ps_merge01f10, f5, f8
  psq_st    f9,0x0(r5),0x1,0
  ps_neg    f10, f10
  psq_st    f10,0x4(r5),0,0
  blr
*/
}

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
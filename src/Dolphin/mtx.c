

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void C_MTXIdentity(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EA2A0
 * Size:	00002C
 */
void PSMTXIdentity(void)
{
/*
.loc_0x0:
  lfs       f0, -0x6C4C(r2)
  lfs       f1, -0x6C50(r2)
  psq_st    f0,0x8(r3),0,0
  ps_merge01f2, f0, f1
  psq_st    f0,0x18(r3),0,0
  ps_merge10f1, f1, f0
  psq_st    f0,0x20(r3),0,0
  psq_st    f2,0x10(r3),0,0
  psq_st    f1,0x0(r3),0,0
  psq_st    f1,0x28(r3),0,0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void C_MTXCopy(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EA2CC
 * Size:	000034
 */
void PSMTXCopy(void)
{
/*
.loc_0x0:
  psq_l     f0,0x0(r3),0,0
  psq_st    f0,0x0(r4),0,0
  psq_l     f1,0x8(r3),0,0
  psq_st    f1,0x8(r4),0,0
  psq_l     f2,0x10(r3),0,0
  psq_st    f2,0x10(r4),0,0
  psq_l     f3,0x18(r3),0,0
  psq_st    f3,0x18(r4),0,0
  psq_l     f4,0x20(r3),0,0
  psq_st    f4,0x20(r4),0,0
  psq_l     f5,0x28(r3),0,0
  psq_st    f5,0x28(r4),0,0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0002A8
 */
void C_MTXConcat(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EA300
 * Size:	0000CC
 */
void PSMTXConcat(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  psq_l     f0,0x0(r3),0,0
  stfd      f14, 0x8(r1)
  psq_l     f6,0x0(r4),0,0
  lis       r6, 0x8051
  psq_l     f7,0x8(r4),0,0
  stfd      f15, 0x10(r1)
  addi      r6, r6, 0x49C0
  stfd      f31, 0x28(r1)
  psq_l     f8,0x10(r4),0,0
  ps_muls0  f12, f6, f0
  psq_l     f2,0x10(r3),0,0
  ps_muls0  f13, f7, f0
  psq_l     f31,0x0(r6),0,0
  ps_muls0  f14, f6, f2
  psq_l     f9,0x18(r4),0,0
  ps_muls0  f15, f7, f2
  psq_l     f1,0x8(r3),0,0
  ps_madds1 f12, f8, f0, f12
  psq_l     f3,0x18(r3),0,0
  ps_madds1 f14, f8, f2, f14
  psq_l     f10,0x20(r4),0,0
  ps_madds1 f13, f9, f0, f13
  psq_l     f11,0x28(r4),0,0
  ps_madds1 f15, f9, f2, f15
  psq_l     f4,0x20(r3),0,0
  psq_l     f5,0x28(r3),0,0
  ps_madds0 f12, f10, f1, f12
  ps_madds0 f13, f11, f1, f13
  ps_madds0 f14, f10, f3, f14
  ps_madds0 f15, f11, f3, f15
  psq_st    f12,0x0(r5),0,0
  ps_muls0  f2, f6, f4
  ps_madds1 f13, f31, f1, f13
  ps_muls0  f0, f7, f4
  psq_st    f14,0x10(r5),0,0
  ps_madds1 f15, f31, f3, f15
  psq_st    f13,0x8(r5),0,0
  ps_madds1 f2, f8, f4, f2
  ps_madds1 f0, f9, f4, f0
  ps_madds0 f2, f10, f5, f2
  lfd       f14, 0x8(r1)
  psq_st    f15,0x18(r5),0,0
  ps_madds0 f0, f11, f5, f0
  psq_st    f2,0x20(r5),0,0
  ps_madds1 f0, f31, f5, f0
  lfd       f15, 0x10(r1)
  psq_st    f0,0x28(r5),0,0
  lfd       f31, 0x28(r1)
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void C_MTXConcatArray(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000158
 */
void PSMTXConcatArray(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
void C_MTXTranspose(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EA3CC
 * Size:	000050
 */
void PSMTXTranspose(void)
{
/*
.loc_0x0:
  lfs       f0, -0x6C4C(r2)
  psq_l     f1,0x0(r3),0,0
  stfs      f0, 0x2C(r4)
  psq_l     f2,0x10(r3),0,0
  ps_merge00f4, f1, f2
  psq_l     f3,0x8(r3),0x1,0
  ps_merge11f5, f1, f2
  psq_l     f2,0x18(r3),0x1,0
  psq_st    f4,0x0(r4),0,0
  psq_l     f1,0x20(r3),0,0
  ps_merge00f2, f3, f2
  psq_st    f5,0x10(r4),0,0
  ps_merge00f4, f1, f0
  psq_st    f2,0x20(r4),0,0
  ps_merge10f5, f1, f0
  psq_st    f4,0x8(r4),0,0
  lfs       f3, 0x28(r3)
  psq_st    f5,0x18(r4),0,0
  stfs      f3, 0x28(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0002AC
 */
void C_MTXInverse(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EA41C
 * Size:	0000F8
 */
void PSMTXInverse(void)
{
/*
.loc_0x0:
  psq_l     f0,0x0(r3),0x1,0
  psq_l     f1,0x4(r3),0,0
  psq_l     f2,0x10(r3),0x1,0
  ps_merge10f6, f1, f0
  psq_l     f3,0x14(r3),0,0
  psq_l     f4,0x20(r3),0x1,0
  ps_merge10f7, f3, f2
  psq_l     f5,0x24(r3),0,0
  ps_mul    f11, f3, f6
  ps_mul    f13, f5, f7
  ps_merge10f8, f5, f4
  ps_msub   f11, f1, f7, f11
  ps_mul    f12, f1, f8
  ps_msub   f13, f3, f8, f13
  ps_mul    f10, f3, f4
  ps_msub   f12, f5, f6, f12
  ps_mul    f9, f0, f5
  ps_mul    f8, f1, f2
  ps_sub    f6, f6, f6
  ps_msub   f10, f2, f5, f10
  ps_mul    f7, f0, f13
  ps_msub   f9, f1, f4, f9
  ps_madd   f7, f2, f12, f7
  ps_msub   f8, f0, f3, f8
  ps_madd   f7, f4, f11, f7
  ps_cmpo0  f0, f7, f6
  bne-      .loc_0x74
  li        r3, 0
  blr       

.loc_0x74:
  fres      f0, f7
  ps_add    f6, f0, f0
  ps_mul    f5, f0, f0
  ps_nmadd  f0, f7, f5, f6
  lfs       f1, 0xC(r3)
  ps_muls0  f13, f13, f0
  lfs       f2, 0x1C(r3)
  ps_muls0  f12, f12, f0
  lfs       f3, 0x2C(r3)
  ps_muls0  f11, f11, f0
  ps_merge00f5, f13, f12
  ps_muls0  f10, f10, f0
  ps_merge11f4, f13, f12
  ps_muls0  f9, f9, f0
  psq_st    f5,0x0(r4),0,0
  ps_mul    f6, f13, f1
  psq_st    f4,0x10(r4),0,0
  ps_muls0  f8, f8, f0
  ps_madd   f6, f12, f2, f6
  psq_st    f10,0x20(r4),0x1,0
  ps_nmsub  f6, f11, f3, f6
  psq_st    f9,0x24(r4),0x1,0
  ps_mul    f7, f10, f1
  ps_merge00f5, f11, f6
  psq_st    f8,0x28(r4),0x1,0
  ps_merge11f4, f11, f6
  psq_st    f5,0x8(r4),0,0
  ps_madd   f7, f9, f2, f7
  psq_st    f4,0x18(r4),0,0
  ps_nmsub  f7, f8, f3, f7
  li        r3, 0x1
  psq_st    f7,0x2C(r4),0x1,0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00021C
 */
void C_MTXInvXpose(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
void PSMTXInvXpose(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void C_MTXRotRad(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EA514
 * Size:	000070
 */
void PSMTXRotRad(void)
{
/*
.loc_0x0:
  mflr      r0
  stw       r0, 0x4(r1)
  stwu      r1, -0x28(r1)
  stfd      f31, 0x20(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  fmr       f31, f1
  mr        r30, r3
  mr        r31, r4
  fmr       f1, f31
  bl        -0x1A8C8
  fmr       f0, f1
  fmr       f1, f31
  fmr       f31, f0
  bl        -0x1A8B4
  fmr       f0, f1
  mr        r3, r30
  fmr       f1, f31
  mr        r4, r31
  fmr       f2, f0
  bl        .loc_0x70
  lwz       r0, 0x2C(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  addi      r1, r1, 0x28
  mtlr      r0
  blr       

.loc_0x70:
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000104
 */
void C_MTXRotTrig(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EA584
 * Size:	0000B0
 */
void PSMTXRotTrig(void)
{
/*
.loc_0x0:
  frsp      f5, f1
  frsp      f4, f2
  lfs       f0, -0x6C4C(r2)
  lfs       f1, -0x6C50(r2)
  ori       r0, r4, 0x20
  ps_neg    f2, f5
  cmplwi    r0, 0x78
  beq-      .loc_0x34
  cmplwi    r0, 0x79
  beq-      .loc_0x5C
  cmplwi    r0, 0x7A
  beq-      .loc_0x88
  b         .loc_0xAC

.loc_0x34:
  psq_st    f1,0x0(r3),0x1,0
  psq_st    f0,0x4(r3),0,0
  ps_merge00f3, f5, f4
  psq_st    f0,0xC(r3),0,0
  ps_merge00f1, f4, f2
  psq_st    f0,0x1C(r3),0,0
  psq_st    f0,0x2C(r3),0x1,0
  psq_st    f3,0x24(r3),0,0
  psq_st    f1,0x14(r3),0,0
  b         .loc_0xAC

.loc_0x5C:
  ps_merge00f3, f4, f0
  ps_merge00f1, f0, f1
  psq_st    f0,0x18(r3),0,0
  psq_st    f3,0x0(r3),0,0
  ps_merge00f2, f2, f0
  ps_merge00f0, f5, f0
  psq_st    f3,0x28(r3),0,0
  psq_st    f1,0x10(r3),0,0
  psq_st    f0,0x8(r3),0,0
  psq_st    f2,0x20(r3),0,0
  b         .loc_0xAC

.loc_0x88:
  psq_st    f0,0x8(r3),0,0
  ps_merge00f3, f5, f4
  ps_merge00f2, f4, f2
  psq_st    f0,0x18(r3),0,0
  psq_st    f0,0x20(r3),0,0
  ps_merge00f1, f1, f0
  psq_st    f3,0x10(r3),0,0
  psq_st    f2,0x0(r3),0,0
  psq_st    f1,0x28(r3),0,0

.loc_0xAC:
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000118
 */
void C_MTXRotAxisRad(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EA634
 * Size:	0000B0
 */
void __PSMTXRotAxisRadInternal(void)
{
/*
.loc_0x0:
  lfs       f10, -0x6C48(r2)
  lfs       f9, -0x6C44(r2)
  frsp      f11, f2
  psq_l     f2,0x0(r4),0,0
  frsp      f12, f1
  lfs       f3, 0x8(r4)
  ps_mul    f4, f2, f2
  fadds     f8, f10, f10
  ps_madd   f5, f3, f3, f4
  fsubs     f1, f10, f10
  ps_sum0   f6, f5, f3, f4
  fsubs     f0, f8, f11
  fsqrte    f7, f6
  fmuls     f4, f7, f7
  fmuls     f5, f7, f10
  fnmsubs   f4, f4, f6, f9
  fmuls     f7, f4, f5
  ps_merge00f11, f11, f11
  ps_muls0  f2, f2, f7
  ps_muls0  f3, f3, f7
  ps_muls0  f6, f2, f0
  ps_muls0  f10, f2, f12
  ps_muls0  f7, f3, f0
  ps_muls1  f5, f6, f2
  ps_muls0  f4, f6, f2
  ps_muls0  f6, f6, f3
  fnmsubs   f0, f3, f12, f5
  fmadds    f8, f3, f12, f5
  ps_neg    f2, f10
  ps_sum0   f9, f6, f1, f10
  ps_sum0   f4, f4, f0, f11
  ps_sum1   f5, f11, f8, f5
  ps_sum0   f0, f2, f1, f6
  psq_st    f9,0x8(r3),0,0
  ps_sum0   f2, f6, f6, f2
  psq_st    f4,0x0(r3),0,0
  ps_muls0  f7, f7, f3
  psq_st    f5,0x10(r3),0,0
  ps_sum1   f6, f10, f2, f6
  psq_st    f0,0x18(r3),0,0
  ps_sum0   f7, f7, f1, f11
  psq_st    f6,0x20(r3),0,0
  psq_st    f7,0x28(r3),0,0
  blr
*/
}

/*
 * --INFO--
 * Address:	800EA6E4
 * Size:	000070
 */
void PSMTXRotAxisRad(void)
{
/*
.loc_0x0:
  mflr      r0
  stw       r0, 0x4(r1)
  stwu      r1, -0x28(r1)
  stfd      f31, 0x20(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  fmr       f31, f1
  mr        r30, r3
  mr        r31, r4
  fmr       f1, f31
  bl        -0x1AA98
  fmr       f0, f1
  fmr       f1, f31
  fmr       f31, f0
  bl        -0x1AA84
  fmr       f0, f1
  mr        r3, r30
  fmr       f1, f31
  mr        r4, r31
  fmr       f2, f0
  bl        -0x100
  lwz       r0, 0x2C(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  addi      r1, r1, 0x28
  mtlr      r0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void C_MTXTrans(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EA754
 * Size:	000034
 */
void PSMTXTrans(void)
{
/*
.loc_0x0:
  lfs       f0, -0x6C4C(r2)
  lfs       f4, -0x6C50(r2)
  stfs      f1, 0xC(r3)
  stfs      f2, 0x1C(r3)
  psq_st    f0,0x4(r3),0,0
  psq_st    f0,0x20(r3),0,0
  stfs      f0, 0x10(r3)
  stfs      f4, 0x14(r3)
  stfs      f0, 0x18(r3)
  stfs      f4, 0x28(r3)
  stfs      f3, 0x2C(r3)
  stfs      f4, 0x0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void C_MTXTransApply(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EA788
 * Size:	00004C
 */
void PSMTXTransApply(void)
{
/*
.loc_0x0:
  psq_l     f4,0x0(r3),0,0
  frsp      f1, f1
  psq_l     f5,0x8(r3),0,0
  frsp      f2, f2
  psq_l     f7,0x18(r3),0,0
  frsp      f3, f3
  psq_l     f8,0x28(r3),0,0
  psq_st    f4,0x0(r4),0,0
  ps_sum1   f5, f1, f5, f5
  psq_l     f6,0x10(r3),0,0
  psq_st    f5,0x8(r4),0,0
  ps_sum1   f7, f2, f7, f7
  psq_l     f9,0x20(r3),0,0
  psq_st    f6,0x10(r4),0,0
  ps_sum1   f8, f3, f8, f8
  psq_st    f7,0x18(r4),0,0
  psq_st    f9,0x20(r4),0,0
  psq_st    f8,0x28(r4),0,0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void C_MTXScale(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EA7D4
 * Size:	000028
 */
void PSMTXScale(void)
{
/*
.loc_0x0:
  lfs       f0, -0x6C4C(r2)
  stfs      f1, 0x0(r3)
  psq_st    f0,0x4(r3),0,0
  psq_st    f0,0xC(r3),0,0
  stfs      f2, 0x14(r3)
  psq_st    f0,0x18(r3),0,0
  psq_st    f0,0x20(r3),0,0
  stfs      f3, 0x28(r3)
  stfs      f0, 0x2C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void C_MTXScaleApply(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EA7FC
 * Size:	000058
 */
void PSMTXScaleApply(void)
{
/*
.loc_0x0:
  frsp      f1, f1
  psq_l     f4,0x0(r3),0,0
  frsp      f2, f2
  psq_l     f5,0x8(r3),0,0
  frsp      f3, f3
  ps_muls0  f4, f4, f1
  psq_l     f6,0x10(r3),0,0
  ps_muls0  f5, f5, f1
  psq_l     f7,0x18(r3),0,0
  ps_muls0  f6, f6, f2
  psq_l     f8,0x20(r3),0,0
  psq_st    f4,0x0(r4),0,0
  ps_muls0  f7, f7, f2
  psq_l     f2,0x28(r3),0,0
  psq_st    f5,0x8(r4),0,0
  ps_muls0  f8, f8, f3
  psq_st    f6,0x10(r4),0,0
  ps_muls0  f2, f2, f3
  psq_st    f7,0x18(r4),0,0
  psq_st    f8,0x20(r4),0,0
  psq_st    f2,0x28(r4),0,0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F0
 */
void C_MTXQuat(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EA854
 * Size:	0000A4
 */
void PSMTXQuat(void)
{
/*
.loc_0x0:
  lfs       f1, -0x6C50(r2)
  psq_l     f4,0x0(r4),0,0
  psq_l     f5,0x8(r4),0,0
  fsubs     f0, f1, f1
  fadds     f2, f1, f1
  ps_mul    f6, f4, f4
  ps_merge10f9, f4, f4
  ps_madd   f8, f5, f5, f6
  ps_mul    f7, f5, f5
  ps_sum0   f3, f8, f8, f8
  ps_muls1  f10, f9, f5
  fres      f11, f3
  ps_sum1   f8, f7, f8, f6
  ps_nmadd  f3, f3, f11, f2
  ps_muls1  f7, f5, f5
  ps_mul    f3, f11, f3
  ps_sum0   f6, f6, f6, f6
  fmuls     f3, f3, f2
  ps_madd   f11, f4, f9, f7
  ps_msub   f7, f4, f9, f7
  psq_st    f0,0xC(r3),0x1,0
  ps_nmadd  f6, f6, f3, f1
  ps_nmadd  f8, f8, f3, f1
  psq_st    f0,0x2C(r3),0x1,0
  ps_mul    f11, f11, f3
  ps_mul    f7, f7, f3
  psq_st    f6,0x28(r3),0x1,0
  ps_madds0 f9, f4, f5, f10
  ps_merge00f5, f11, f8
  ps_nmadd  f10, f10, f2, f9
  ps_merge10f4, f8, f7
  psq_st    f5,0x10(r3),0,0
  ps_mul    f9, f9, f3
  ps_mul    f10, f10, f3
  psq_st    f4,0x0(r3),0,0
  psq_st    f9,0x8(r3),0x1,0
  ps_merge10f7, f10, f0
  ps_merge01f11, f10, f9
  psq_st    f7,0x18(r3),0,0
  psq_st    f11,0x20(r3),0,0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000100
 */
void C_MTXReflect(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void PSMTXReflect(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EA8F8
 * Size:	00018C
 */
void C_MTXLookAt(void)
{
/*
.loc_0x0:
  mflr      r0
  stw       r0, 0x4(r1)
  stwu      r1, -0x50(r1)
  stw       r31, 0x4C(r1)
  stw       r30, 0x48(r1)
  stw       r29, 0x44(r1)
  mr        r29, r3
  mr        r30, r4
  mr        r31, r5
  lfs       f1, 0x0(r30)
  addi      r3, r1, 0x30
  lfs       f0, 0x0(r6)
  mr        r4, r3
  fsubs     f0, f1, f0
  stfs      f0, 0x30(r1)
  lfs       f1, 0x4(r30)
  lfs       f0, 0x4(r6)
  fsubs     f0, f1, f0
  stfs      f0, 0x34(r1)
  lfs       f1, 0x8(r30)
  lfs       f0, 0x8(r6)
  fsubs     f0, f1, f0
  stfs      f0, 0x38(r1)
  bl        0x5A8
  mr        r3, r31
  addi      r4, r1, 0x30
  addi      r5, r1, 0x24
  bl        0x620
  addi      r3, r1, 0x24
  mr        r4, r3
  bl        0x58C
  addi      r3, r1, 0x30
  addi      r4, r1, 0x24
  addi      r5, r1, 0x18
  bl        0x604
  lfs       f0, 0x24(r1)
  stfs      f0, 0x0(r29)
  lfs       f0, 0x28(r1)
  stfs      f0, 0x4(r29)
  lfs       f0, 0x2C(r1)
  stfs      f0, 0x8(r29)
  lfs       f3, 0x0(r30)
  lfs       f2, 0x24(r1)
  lfs       f1, 0x4(r30)
  lfs       f0, 0x28(r1)
  fmuls     f2, f3, f2
  lfs       f3, 0x8(r30)
  fmuls     f0, f1, f0
  lfs       f1, 0x2C(r1)
  fmuls     f1, f3, f1
  fadds     f0, f2, f0
  fadds     f0, f1, f0
  fneg      f0, f0
  stfs      f0, 0xC(r29)
  lfs       f0, 0x18(r1)
  stfs      f0, 0x10(r29)
  lfs       f0, 0x1C(r1)
  stfs      f0, 0x14(r29)
  lfs       f0, 0x20(r1)
  stfs      f0, 0x18(r29)
  lfs       f3, 0x0(r30)
  lfs       f2, 0x18(r1)
  lfs       f1, 0x4(r30)
  lfs       f0, 0x1C(r1)
  fmuls     f2, f3, f2
  lfs       f3, 0x8(r30)
  fmuls     f0, f1, f0
  lfs       f1, 0x20(r1)
  fmuls     f1, f3, f1
  fadds     f0, f2, f0
  fadds     f0, f1, f0
  fneg      f0, f0
  stfs      f0, 0x1C(r29)
  lfs       f0, 0x30(r1)
  stfs      f0, 0x20(r29)
  lfs       f0, 0x34(r1)
  stfs      f0, 0x24(r29)
  lfs       f0, 0x38(r1)
  stfs      f0, 0x28(r29)
  lfs       f3, 0x0(r30)
  lfs       f2, 0x30(r1)
  lfs       f1, 0x4(r30)
  lfs       f0, 0x34(r1)
  fmuls     f2, f3, f2
  lfs       f3, 0x8(r30)
  fmuls     f0, f1, f0
  lfs       f1, 0x38(r1)
  fmuls     f1, f3, f1
  fadds     f0, f2, f0
  fadds     f0, f1, f0
  fneg      f0, f0
  stfs      f0, 0x2C(r29)
  lwz       r0, 0x54(r1)
  lwz       r31, 0x4C(r1)
  lwz       r30, 0x48(r1)
  lwz       r29, 0x44(r1)
  addi      r1, r1, 0x50
  mtlr      r0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void C_MTXLightFrustum(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EAA84
 * Size:	0000CC
 */
void C_MTXLightPerspective(void)
{
/*
.loc_0x0:
  mflr      r0
  stw       r0, 0x4(r1)
  stwu      r1, -0x58(r1)
  stfd      f31, 0x50(r1)
  stfd      f30, 0x48(r1)
  stfd      f29, 0x40(r1)
  stfd      f28, 0x38(r1)
  stfd      f27, 0x30(r1)
  stw       r31, 0x2C(r1)
  fmr       f27, f2
  mr        r31, r3
  fmr       f28, f3
  fmr       f29, f4
  fmr       f30, f5
  fmr       f31, f6
  lfs       f2, -0x6C48(r2)
  lfs       f0, -0x6C38(r2)
  fmuls     f1, f2, f1
  fmuls     f1, f0, f1
  bl        -0x1AE80
  lfs       f3, -0x6C50(r2)
  fneg      f2, f30
  fneg      f0, f31
  fdivs     f4, f3, f1
  fdivs     f1, f4, f27
  fmuls     f3, f28, f1
  fmuls     f1, f4, f29
  stfs      f3, 0x0(r31)
  lfs       f3, -0x6C4C(r2)
  stfs      f3, 0x4(r31)
  stfs      f2, 0x8(r31)
  stfs      f3, 0xC(r31)
  stfs      f3, 0x10(r31)
  stfs      f1, 0x14(r31)
  stfs      f0, 0x18(r31)
  stfs      f3, 0x1C(r31)
  stfs      f3, 0x20(r31)
  stfs      f3, 0x24(r31)
  lfs       f0, -0x6C3C(r2)
  stfs      f0, 0x28(r31)
  stfs      f3, 0x2C(r31)
  lwz       r0, 0x5C(r1)
  lfd       f31, 0x50(r1)
  lfd       f30, 0x48(r1)
  lfd       f29, 0x40(r1)
  lfd       f28, 0x38(r1)
  lfd       f27, 0x30(r1)
  lwz       r31, 0x2C(r1)
  addi      r1, r1, 0x58
  mtlr      r0
  blr
*/
}

/*
 * --INFO--
 * Address:	800EAB50
 * Size:	000088
 */
void C_MTXLightOrtho(void)
{
/*
.loc_0x0:
  fsubs     f10, f4, f3
  lfs       f11, -0x6C50(r2)
  fsubs     f0, f1, f2
  lfs       f9, -0x6C40(r2)
  fadds     f3, f4, f3
  fdivs     f12, f11, f10
  fdivs     f10, f11, f0
  fmuls     f4, f9, f12
  fneg      f3, f3
  fadds     f0, f1, f2
  fmuls     f1, f4, f5
  fmuls     f2, f12, f3
  fneg      f0, f0
  stfs      f1, 0x0(r3)
  fmuls     f1, f9, f10
  fmuls     f2, f5, f2
  lfs       f3, -0x6C4C(r2)
  fmuls     f0, f10, f0
  stfs      f3, 0x4(r3)
  fadds     f2, f7, f2
  fmuls     f1, f1, f6
  stfs      f3, 0x8(r3)
  fmuls     f0, f6, f0
  stfs      f2, 0xC(r3)
  stfs      f3, 0x10(r3)
  fadds     f0, f8, f0
  stfs      f1, 0x14(r3)
  stfs      f3, 0x18(r3)
  stfs      f0, 0x1C(r3)
  stfs      f3, 0x20(r3)
  stfs      f3, 0x24(r3)
  stfs      f3, 0x28(r3)
  stfs      f11, 0x2C(r3)
  blr
*/
}
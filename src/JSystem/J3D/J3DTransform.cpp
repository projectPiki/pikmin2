

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __MTGQR7(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void J3DGQRSetup7(unsigned long, unsigned long, unsigned long, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __MTGQR6(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void J3DGQRSetup6(unsigned long, unsigned long, unsigned long, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8005EE78
 * Size:	0000F0
 */
void J3DCalcBBoardMtx(float (*)[4])
{
	/*
	.loc_0x0:
	  lfs       f2, 0x0(r3)
	  lfs       f1, 0x10(r3)
	  fmuls     f2, f2, f2
	  lfs       f3, 0x20(r3)
	  fmuls     f1, f1, f1
	  lfs       f5, 0x4(r3)
	  lfs       f4, 0x14(r3)
	  fmuls     f7, f3, f3
	  lfs       f3, 0x8(r3)
	  fadds     f6, f2, f1
	  lfs       f2, 0x18(r3)
	  fmuls     f5, f5, f5
	  fmuls     f4, f4, f4
	  lfs       f8, 0x24(r3)
	  lfs       f9, 0x28(r3)
	  fmuls     f3, f3, f3
	  lfs       f1, -0x79C8(r2)
	  fmuls     f2, f2, f2
	  fadds     f7, f7, f6
	  fmuls     f6, f8, f8
	  fadds     f5, f5, f4
	  fmuls     f4, f9, f9
	  fadds     f2, f3, f2
	  fcmpo     cr0, f7, f1
	  fadds     f3, f6, f5
	  fadds     f2, f4, f2
	  ble-      .loc_0x84
	  ble-      .loc_0x7C
	  fsqrte    f1, f7
	  fmuls     f1, f1, f7
	  b         .loc_0x80

	.loc_0x7C:
	  fmr       f1, f7

	.loc_0x80:
	  fmr       f7, f1

	.loc_0x84:
	  lfs       f1, -0x79C8(r2)
	  fcmpo     cr0, f3, f1
	  ble-      .loc_0xA8
	  ble-      .loc_0xA0
	  fsqrte    f1, f3
	  fmuls     f1, f1, f3
	  b         .loc_0xA4

	.loc_0xA0:
	  fmr       f1, f3

	.loc_0xA4:
	  fmr       f3, f1

	.loc_0xA8:
	  lfs       f1, -0x79C8(r2)
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0xCC
	  ble-      .loc_0xC4
	  fsqrte    f1, f2
	  fmuls     f1, f1, f2
	  b         .loc_0xC8

	.loc_0xC4:
	  fmr       f1, f2

	.loc_0xC8:
	  fmr       f2, f1

	.loc_0xCC:
	  lfs       f0, -0x79C8(r2)
	  psq_st    f0,0x4(r3),0,0
	  psq_st    f0,0x20(r3),0,0
	  stfs      f7, 0x0(r3)
	  stfs      f0, 0x10(r3)
	  stfs      f3, 0x14(r3)
	  stfs      f0, 0x18(r3)
	  stfs      f2, 0x28(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005EF68
 * Size:	00013C
 */
void J3DCalcYBBoardMtx(float (*)[4])
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stfd      f30, 0x20(r1)
	  psq_st    f30,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lfs       f0, -0x79C8(r2)
	  lfs       f2, 0x0(r3)
	  lfs       f1, 0x10(r3)
	  fmuls     f2, f2, f2
	  lfs       f3, 0x20(r3)
	  fmuls     f1, f1, f1
	  lfs       f6, 0x8(r3)
	  lfs       f5, 0x18(r3)
	  fmuls     f4, f3, f3
	  fadds     f3, f2, f1
	  lfs       f7, 0x28(r3)
	  fmuls     f2, f6, f6
	  fmuls     f1, f5, f5
	  fadds     f31, f4, f3
	  fmuls     f3, f7, f7
	  fadds     f1, f2, f1
	  fcmpo     cr0, f31, f0
	  fadds     f30, f3, f1
	  ble-      .loc_0x88
	  ble-      .loc_0x80
	  fsqrte    f0, f31
	  fmuls     f0, f0, f31
	  b         .loc_0x84

	.loc_0x80:
	  fmr       f0, f31

	.loc_0x84:
	  fmr       f31, f0

	.loc_0x88:
	  lfs       f0, -0x79C8(r2)
	  fcmpo     cr0, f30, f0
	  ble-      .loc_0xAC
	  ble-      .loc_0xA4
	  fsqrte    f0, f30
	  fmuls     f0, f0, f30
	  b         .loc_0xA8

	.loc_0xA4:
	  fmr       f0, f30

	.loc_0xA8:
	  fmr       f30, f0

	.loc_0xAC:
	  lis       r4, 0x8048
	  addi      r3, r1, 0x8
	  subi      r7, r4, 0x7764
	  lwz       r6, 0x0(r7)
	  mr        r4, r3
	  lwz       r5, 0x4(r7)
	  lwz       r0, 0x8(r7)
	  stw       r6, 0x8(r1)
	  stw       r5, 0xC(r1)
	  stw       r0, 0x10(r1)
	  lfs       f0, 0x24(r31)
	  fneg      f0, f0
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x14(r31)
	  stfs      f0, 0x10(r1)
	  bl        0x8BEAC
	  stfs      f31, 0x0(r31)
	  lfs       f1, -0x79C8(r2)
	  stfs      f1, 0x8(r31)
	  stfs      f1, 0x10(r31)
	  lfs       f0, 0xC(r1)
	  fmuls     f0, f0, f30
	  stfs      f0, 0x18(r31)
	  stfs      f1, 0x20(r31)
	  lfs       f0, 0x10(r1)
	  fmuls     f0, f0, f30
	  stfs      f0, 0x28(r31)
	  psq_l     f31,0x38(r1),0,0
	  lfd       f31, 0x30(r1)
	  psq_l     f30,0x28(r1),0,0
	  lfd       f30, 0x20(r1)
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005F0A4
 * Size:	0000C8
 */
void J3DPSCalcInverseTranspose(float (*)[4], float (*)[3])
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
	  ps_merge10f8, f5, f4
	  ps_mul    f13, f5, f7
	  ps_msub   f11, f1, f7, f11
	  ps_mul    f12, f1, f8
	  ps_msub   f13, f3, f8, f13
	  ps_msub   f12, f5, f6, f12
	  ps_mul    f10, f3, f4
	  ps_mul    f9, f0, f5
	  ps_mul    f8, f1, f2
	  ps_msub   f10, f2, f5, f10
	  ps_msub   f9, f1, f4, f9
	  ps_msub   f8, f0, f3, f8
	  ps_mul    f7, f0, f13
	  ps_sub    f1, f1, f1
	  ps_madd   f7, f2, f12, f7
	  ps_madd   f7, f4, f11, f7
	  ps_cmpo0  f0, f7, f1
	  bne-      .loc_0x74
	  li        r3, 0
	  blr

	.loc_0x74:
	  fres      f0, f7
	  ps_add    f6, f0, f0
	  ps_mul    f5, f0, f0
	  ps_nmadd  f0, f7, f5, f6
	  ps_add    f6, f0, f0
	  ps_mul    f5, f0, f0
	  ps_nmadd  f0, f7, f5, f6
	  ps_muls0  f13, f13, f0
	  ps_muls0  f12, f12, f0
	  psq_st    f13,0x0(r4),0,0
	  ps_muls0  f11, f11, f0
	  psq_st    f12,0xC(r4),0,0
	  ps_muls0  f10, f10, f0
	  psq_st    f11,0x18(r4),0,0
	  ps_muls0  f9, f9, f0
	  psq_st    f10,0x8(r4),0x1,0
	  ps_muls0  f8, f8, f0
	  psq_st    f9,0x14(r4),0x1,0
	  li        r3, 0x1
	  psq_st    f8,0x20(r4),0x1,0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005F16C
 * Size:	0000B0
 */
void J3DGetTranslateRotateMtx(const J3DTransformInfo&, float (*)[4])
{
	/*
	.loc_0x0:
	  lha       r5, 0xE(r3)
	  lis       r6, 0x8050
	  addi      r6, r6, 0x71A0
	  lha       r0, 0x10(r3)
	  rlwinm    r5,r5,30,18,28
	  lha       r7, 0xC(r3)
	  lfsx      f8, r6, r5
	  rlwinm    r9,r0,30,18,28
	  addi      r8, r6, 0x4
	  rlwinm    r0,r7,30,18,28
	  fneg      f0, f8
	  lfsx      f6, r8, r5
	  lfsx      f10, r8, r9
	  lfsx      f4, r6, r0
	  lfsx      f5, r8, r0
	  fmuls     f1, f10, f6
	  lfsx      f9, r6, r9
	  fmuls     f12, f4, f10
	  fmuls     f3, f6, f4
	  lfs       f2, 0x14(r3)
	  stfs      f0, 0x20(r4)
	  fmuls     f0, f9, f6
	  stfs      f1, 0x0(r4)
	  fmuls     f11, f5, f9
	  fmuls     f7, f6, f5
	  lfs       f1, 0x18(r3)
	  stfs      f0, 0x10(r4)
	  fmuls     f10, f5, f10
	  lfs       f0, 0x1C(r3)
	  stfs      f3, 0x24(r4)
	  fmuls     f9, f4, f9
	  fmsubs    f6, f12, f8, f11
	  stfs      f7, 0x28(r4)
	  fmsubs    f5, f11, f8, f12
	  fmadds    f4, f10, f8, f9
	  stfs      f6, 0x4(r4)
	  fmadds    f3, f9, f8, f10
	  stfs      f5, 0x18(r4)
	  stfs      f4, 0x8(r4)
	  stfs      f3, 0x14(r4)
	  stfs      f2, 0xC(r4)
	  stfs      f1, 0x1C(r4)
	  stfs      f0, 0x2C(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005F21C
 * Size:	0000B0
 */
void J3DGetTranslateRotateMtx(short, short, short, float, float, float,
                              float (*)[4])
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  stfd      f31, 0x10(r1)
	  psq_st    f31,0x18(r1),0,0
	  lis       r7, 0x8050
	  rlwinm    r4,r4,30,18,28
	  addi      r7, r7, 0x71A0
	  rlwinm    r5,r5,30,18,28
	  lfsx      f10, r7, r4
	  addi      r8, r7, 0x4
	  rlwinm    r0,r3,30,18,28
	  lfsx      f6, r8, r4
	  lfsx      f12, r8, r5
	  fneg      f4, f10
	  lfsx      f8, r7, r0
	  lfsx      f9, r8, r0
	  fmuls     f5, f12, f6
	  lfsx      f11, r7, r5
	  fmuls     f0, f6, f8
	  fmuls     f31, f8, f12
	  stfs      f4, 0x20(r6)
	  fmuls     f4, f11, f6
	  fmuls     f13, f9, f11
	  stfs      f5, 0x0(r6)
	  fmuls     f7, f6, f9
	  fmuls     f8, f8, f11
	  stfs      f4, 0x10(r6)
	  fmuls     f9, f9, f12
	  fmsubs    f6, f31, f10, f13
	  stfs      f0, 0x24(r6)
	  fmsubs    f5, f13, f10, f31
	  fmadds    f4, f9, f10, f8
	  stfs      f7, 0x28(r6)
	  fmadds    f0, f8, f10, f9
	  stfs      f6, 0x4(r6)
	  stfs      f5, 0x18(r6)
	  stfs      f4, 0x8(r6)
	  stfs      f0, 0x14(r6)
	  stfs      f1, 0xC(r6)
	  stfs      f2, 0x1C(r6)
	  stfs      f3, 0x2C(r6)
	  psq_l     f31,0x18(r1),0,0
	  lfd       f31, 0x10(r1)
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005F2CC
 * Size:	0000AC
 */
void J3DGetTextureMtx(const J3DTextureSRTInfo&, const Vec&, float (*)[4])
{
	/*
	.loc_0x0:
	  lha       r0, 0x8(r3)
	  lis       r6, 0x8050
	  addi      r7, r6, 0x71A0
	  lfs       f2, 0x0(r3)
	  rlwinm    r0,r0,30,18,28
	  lfs       f6, 0x4(r4)
	  add       r6, r7, r0
	  lfsx      f0, r7, r0
	  lfs       f1, 0x4(r6)
	  lfs       f3, 0x4(r3)
	  fmuls     f5, f2, f0
	  fmuls     f4, f2, f1
	  lfs       f9, 0x0(r4)
	  fmuls     f10, f3, f0
	  lfs       f7, 0xC(r3)
	  fmuls     f11, f3, f1
	  fneg      f2, f4
	  fmuls     f0, f5, f6
	  stfs      f4, 0x0(r5)
	  fneg      f8, f5
	  lfs       f4, 0x10(r3)
	  fneg      f3, f10
	  fmadds    f2, f2, f9, f0
	  stfs      f8, 0x4(r5)
	  lfs       f1, -0x79C8(r2)
	  fadds     f5, f9, f2
	  lfs       f0, -0x79C4(r2)
	  fmuls     f2, f11, f6
	  fadds     f5, f7, f5
	  fmsubs    f2, f3, f9, f2
	  stfs      f5, 0x8(r5)
	  fadds     f2, f6, f2
	  stfs      f10, 0x10(r5)
	  fadds     f2, f4, f2
	  stfs      f11, 0x14(r5)
	  stfs      f2, 0x18(r5)
	  stfs      f1, 0x2C(r5)
	  stfs      f1, 0x24(r5)
	  stfs      f1, 0x20(r5)
	  stfs      f1, 0x1C(r5)
	  stfs      f1, 0xC(r5)
	  stfs      f0, 0x28(r5)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005F378
 * Size:	0000AC
 */
void J3DGetTextureMtxOld(const J3DTextureSRTInfo&, const Vec&, float (*)[4])
{
	/*
	.loc_0x0:
	  lha       r0, 0x8(r3)
	  lis       r6, 0x8050
	  addi      r7, r6, 0x71A0
	  lfs       f2, 0x0(r3)
	  rlwinm    r0,r0,30,18,28
	  lfs       f6, 0x4(r4)
	  add       r6, r7, r0
	  lfsx      f0, r7, r0
	  lfs       f1, 0x4(r6)
	  lfs       f3, 0x4(r3)
	  fmuls     f5, f2, f0
	  fmuls     f4, f2, f1
	  lfs       f9, 0x0(r4)
	  fmuls     f10, f3, f0
	  lfs       f7, 0xC(r3)
	  fmuls     f11, f3, f1
	  fneg      f2, f4
	  fmuls     f0, f5, f6
	  stfs      f4, 0x0(r5)
	  fneg      f8, f5
	  lfs       f4, 0x10(r3)
	  fneg      f3, f10
	  fmadds    f2, f2, f9, f0
	  stfs      f8, 0x4(r5)
	  lfs       f1, -0x79C8(r2)
	  fadds     f5, f9, f2
	  lfs       f0, -0x79C4(r2)
	  fmuls     f2, f11, f6
	  fadds     f5, f7, f5
	  fmsubs    f2, f3, f9, f2
	  stfs      f5, 0xC(r5)
	  fadds     f2, f6, f2
	  stfs      f10, 0x10(r5)
	  fadds     f2, f4, f2
	  stfs      f11, 0x14(r5)
	  stfs      f2, 0x1C(r5)
	  stfs      f1, 0x2C(r5)
	  stfs      f1, 0x24(r5)
	  stfs      f1, 0x20(r5)
	  stfs      f1, 0x18(r5)
	  stfs      f1, 0x8(r5)
	  stfs      f0, 0x28(r5)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005F424
 * Size:	0000A8
 */
void J3DGetTextureMtxMaya(const J3DTextureSRTInfo&, float (*)[4])
{
	/*
	.loc_0x0:
	  lfs       f9, -0x79C0(r2)
	  lis       r5, 0x8050
	  lfs       f0, 0x10(r3)
	  addi      r5, r5, 0x71A0
	  lha       r0, 0x8(r3)
	  fsubs     f1, f0, f9
	  lfs       f8, 0x4(r3)
	  rlwinm    r0,r0,30,18,28
	  lfs       f0, 0xC(r3)
	  lfsx      f10, r5, r0
	  add       r5, r5, r0
	  fadds     f6, f1, f8
	  lfs       f11, 0x4(r5)
	  lfs       f4, 0x0(r3)
	  fsubs     f12, f0, f9
	  fmuls     f7, f8, f10
	  lfs       f1, -0x79C8(r2)
	  fmuls     f3, f4, f11
	  lfs       f0, -0x79C4(r2)
	  fmuls     f2, f10, f6
	  fneg      f4, f4
	  stfs      f3, 0x0(r4)
	  fneg      f3, f12
	  fmsubs    f5, f12, f11, f2
	  fmuls     f2, f11, f6
	  stfs      f7, 0x4(r4)
	  fmuls     f4, f4, f10
	  fadds     f5, f9, f5
	  fmsubs    f2, f3, f10, f2
	  fmuls     f3, f8, f11
	  stfs      f5, 0x8(r4)
	  fadds     f2, f9, f2
	  stfs      f4, 0x10(r4)
	  stfs      f3, 0x14(r4)
	  stfs      f2, 0x18(r4)
	  stfs      f1, 0x2C(r4)
	  stfs      f1, 0x24(r4)
	  stfs      f1, 0x20(r4)
	  stfs      f1, 0x1C(r4)
	  stfs      f1, 0xC(r4)
	  stfs      f0, 0x28(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005F4CC
 * Size:	0000A8
 */
void J3DGetTextureMtxMayaOld(const J3DTextureSRTInfo&, float (*)[4])
{
	/*
	.loc_0x0:
	  lfs       f9, -0x79C0(r2)
	  lis       r5, 0x8050
	  lfs       f0, 0x10(r3)
	  addi      r5, r5, 0x71A0
	  lha       r0, 0x8(r3)
	  fsubs     f1, f0, f9
	  lfs       f8, 0x4(r3)
	  rlwinm    r0,r0,30,18,28
	  lfs       f0, 0xC(r3)
	  lfsx      f10, r5, r0
	  add       r5, r5, r0
	  fadds     f6, f1, f8
	  lfs       f11, 0x4(r5)
	  lfs       f4, 0x0(r3)
	  fsubs     f12, f0, f9
	  fmuls     f7, f8, f10
	  lfs       f1, -0x79C8(r2)
	  fmuls     f3, f4, f11
	  lfs       f0, -0x79C4(r2)
	  fmuls     f2, f10, f6
	  fneg      f4, f4
	  stfs      f3, 0x0(r4)
	  fneg      f3, f12
	  fmsubs    f5, f12, f11, f2
	  fmuls     f2, f11, f6
	  stfs      f7, 0x4(r4)
	  fmuls     f4, f4, f10
	  fadds     f5, f9, f5
	  fmsubs    f2, f3, f10, f2
	  fmuls     f3, f8, f11
	  stfs      f5, 0xC(r4)
	  fadds     f2, f9, f2
	  stfs      f4, 0x10(r4)
	  stfs      f3, 0x14(r4)
	  stfs      f2, 0x1C(r4)
	  stfs      f1, 0x2C(r4)
	  stfs      f1, 0x24(r4)
	  stfs      f1, 0x20(r4)
	  stfs      f1, 0x18(r4)
	  stfs      f1, 0x8(r4)
	  stfs      f0, 0x28(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005F574
 * Size:	000064
 */
void J3DScaleNrmMtx(float (*)[4], const Vec&)
{
	/*
	.loc_0x0:
	  psq_l     f2,0x0(r4),0,0
	  psq_l     f0,0x0(r3),0,0
	  lfs       f3, 0x8(r4)
	  lfs       f1, 0x8(r3)
	  ps_mul    f4, f0, f2
	  psq_st    f4,0x0(r3),0,0
	  fmuls     f4, f1, f3
	  stfs      f4, 0x8(r3)
	  psq_l     f2,0x0(r4),0,0
	  psq_l     f0,0x10(r3),0,0
	  lfs       f3, 0x8(r4)
	  lfs       f1, 0x18(r3)
	  ps_mul    f4, f0, f2
	  psq_st    f4,0x10(r3),0,0
	  fmuls     f4, f1, f3
	  stfs      f4, 0x18(r3)
	  psq_l     f2,0x0(r4),0,0
	  psq_l     f0,0x20(r3),0,0
	  lfs       f3, 0x8(r4)
	  lfs       f1, 0x28(r3)
	  ps_mul    f4, f0, f2
	  psq_st    f4,0x20(r3),0,0
	  fmuls     f4, f1, f3
	  stfs      f4, 0x28(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005F5D8
 * Size:	000054
 */
void J3DScaleNrmMtx33(float (*)[3], const Vec&)
{
	/*
	.loc_0x0:
	  psq_l     f0,0x0(r3),0,0
	  psq_l     f6,0x0(r4),0,0
	  lfs       f1, 0x8(r3)
	  lfs       f7, 0x8(r4)
	  ps_mul    f0, f0, f6
	  psq_l     f2,0xC(r3),0,0
	  fmuls     f1, f1, f7
	  lfs       f3, 0x14(r3)
	  ps_mul    f2, f2, f6
	  psq_l     f4,0x18(r3),0,0
	  fmuls     f3, f3, f7
	  lfs       f5, 0x20(r3)
	  ps_mul    f4, f4, f6
	  psq_st    f0,0x0(r3),0,0
	  fmuls     f5, f5, f7
	  stfs      f1, 0x8(r3)
	  psq_st    f2,0xC(r3),0,0
	  stfs      f3, 0x14(r3)
	  psq_st    f4,0x18(r3),0,0
	  stfs      f5, 0x20(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005F62C
 * Size:	000124
 */
void J3DMtxProjConcat(float (*)[4], float (*)[4], float (*)[4])
{
	/*
	.loc_0x0:
	  psq_l     f2,0x0(r3),0,0
	  psq_l     f3,0x8(r3),0,0
	  ps_merge00f6, f2, f2
	  ps_merge11f7, f2, f2
	  ps_merge00f8, f3, f3
	  ps_merge11f9, f3, f3
	  psq_l     f10,0x0(r4),0,0
	  psq_l     f11,0x10(r4),0,0
	  psq_l     f12,0x20(r4),0,0
	  psq_l     f13,0x30(r4),0,0
	  ps_mul    f0, f6, f10
	  ps_madd   f0, f7, f11, f0
	  ps_madd   f0, f8, f12, f0
	  ps_madd   f0, f9, f13, f0
	  psq_st    f0,0x0(r5),0,0
	  psq_l     f10,0x8(r4),0,0
	  psq_l     f11,0x18(r4),0,0
	  psq_l     f12,0x28(r4),0,0
	  psq_l     f13,0x38(r4),0,0
	  ps_mul    f0, f6, f10
	  ps_madd   f0, f7, f11, f0
	  ps_madd   f0, f8, f12, f0
	  ps_madd   f0, f9, f13, f0
	  psq_st    f0,0x8(r5),0,0
	  psq_l     f2,0x10(r3),0,0
	  psq_l     f3,0x18(r3),0,0
	  ps_merge00f6, f2, f2
	  ps_merge11f7, f2, f2
	  ps_merge00f8, f3, f3
	  ps_merge11f9, f3, f3
	  psq_l     f10,0x0(r4),0,0
	  psq_l     f11,0x10(r4),0,0
	  psq_l     f12,0x20(r4),0,0
	  psq_l     f13,0x30(r4),0,0
	  ps_mul    f0, f6, f10
	  ps_madd   f0, f7, f11, f0
	  ps_madd   f0, f8, f12, f0
	  ps_madd   f0, f9, f13, f0
	  psq_st    f0,0x10(r5),0,0
	  psq_l     f10,0x8(r4),0,0
	  psq_l     f11,0x18(r4),0,0
	  psq_l     f12,0x28(r4),0,0
	  psq_l     f13,0x38(r4),0,0
	  ps_mul    f0, f6, f10
	  ps_madd   f0, f7, f11, f0
	  ps_madd   f0, f8, f12, f0
	  ps_madd   f0, f9, f13, f0
	  psq_st    f0,0x18(r5),0,0
	  psq_l     f2,0x20(r3),0,0
	  psq_l     f3,0x28(r3),0,0
	  ps_merge00f6, f2, f2
	  ps_merge11f7, f2, f2
	  ps_merge00f8, f3, f3
	  ps_merge11f9, f3, f3
	  psq_l     f10,0x0(r4),0,0
	  psq_l     f11,0x10(r4),0,0
	  psq_l     f12,0x20(r4),0,0
	  psq_l     f13,0x30(r4),0,0
	  ps_mul    f0, f6, f10
	  ps_madd   f0, f7, f11, f0
	  ps_madd   f0, f8, f12, f0
	  ps_madd   f0, f9, f13, f0
	  psq_st    f0,0x20(r5),0,0
	  psq_l     f10,0x8(r4),0,0
	  psq_l     f11,0x18(r4),0,0
	  psq_l     f12,0x28(r4),0,0
	  psq_l     f13,0x38(r4),0,0
	  ps_mul    f0, f6, f10
	  ps_madd   f0, f7, f11, f0
	  ps_madd   f0, f8, f12, f0
	  ps_madd   f0, f9, f13, f0
	  psq_st    f0,0x28(r5),0,0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000098
 */
void J3DCalcHalfAngleVec(Vec*, Vec*, Vec*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000EC
 */
void J3DCalcHalfAngleMtx(Vec*, Vec*, float (*)[4])
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8005F750
 * Size:	0000DC
 */
void J3DPSMtxArrayConcat(float (*)[4], float (*)[4], float (*)[4],
                         unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  stfd      f14, 0x8(r1)
	  lis       r7, 0x8051
	  stfd      f15, 0x10(r1)
	  addi      r7, r7, 0x46E0
	  stfd      f31, 0x28(r1)
	  subi      r4, r4, 0x8
	  subi      r5, r5, 0x8
	  mtctr     r6

	.loc_0x24:
	  psq_l     f0,0x0(r3),0,0
	  psq_l     f6,0x8(r4),0,0
	  psq_l     f7,0x10(r4),0,0
	  psq_l     f8,0x18(r4),0,0
	  ps_muls0  f12, f6, f0
	  psq_l     f2,0x10(r3),0,0
	  ps_muls0  f13, f7, f0
	  psq_l     f31,0x0(r7),0,0
	  ps_muls0  f14, f6, f2
	  psq_l     f9,0x20(r4),0,0
	  ps_muls0  f15, f7, f2
	  psq_l     f1,0x8(r3),0,0
	  ps_madds1 f12, f8, f0, f12
	  psq_l     f3,0x18(r3),0,0
	  ps_madds1 f14, f8, f2, f14
	  psq_l     f10,0x28(r4),0,0
	  ps_madds1 f13, f9, f0, f13
	  psq_lu    f11,0x30(r4),0,0
	  ps_madds1 f15, f9, f2, f15
	  psq_l     f4,0x20(r3),0,0
	  psq_l     f5,0x28(r3),0,0
	  ps_madds0 f12, f10, f1, f12
	  ps_madds0 f13, f11, f1, f13
	  ps_madds0 f14, f10, f3, f14
	  ps_madds0 f15, f11, f3, f15
	  psq_st    f12,0x8(r5),0,0
	  ps_muls0  f2, f6, f4
	  ps_madds1 f13, f31, f1, f13
	  ps_muls0  f0, f7, f4
	  psq_st    f14,0x18(r5),0,0
	  ps_madds1 f15, f31, f3, f15
	  psq_st    f13,0x10(r5),0,0
	  ps_madds1 f2, f8, f4, f2
	  ps_madds1 f0, f9, f4, f0
	  ps_madds0 f2, f10, f5, f2
	  psq_st    f15,0x20(r5),0,0
	  ps_madds0 f0, f11, f5, f0
	  psq_st    f2,0x28(r5),0,0
	  ps_madds1 f0, f31, f5, f0
	  psq_stu   f0,0x30(r5),0,0
	  bdnz+     .loc_0x24
	  lfd       f14, 0x8(r1)
	  lfd       f15, 0x10(r1)
	  lfd       f31, 0x28(r1)
	  addi      r1, r1, 0x40
	  blr
	*/
}

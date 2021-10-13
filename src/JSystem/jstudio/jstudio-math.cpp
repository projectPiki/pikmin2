

/*
 * --INFO--
 * Address:	........
 * Size:	000158
 */
void JStudio::math::getRotation_xyz((float (*)[4], float, float, float))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80010FC4
 * Size:	0001B0
 */
void JStudio::math::getTransformation_SRxyzT((float (*)[4], Vec const&,
                                              Vec const&, Vec const&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x110(r1)
	  mflr      r0
	  stw       r0, 0x114(r1)
	  stfd      f31, 0x100(r1)
	  psq_st    f31,0x108(r1),0,0
	  stfd      f30, 0xF0(r1)
	  psq_st    f30,0xF8(r1),0,0
	  stfd      f29, 0xE0(r1)
	  psq_st    f29,0xE8(r1),0,0
	  stfd      f28, 0xD0(r1)
	  psq_st    f28,0xD8(r1),0,0
	  stfd      f27, 0xC0(r1)
	  psq_st    f27,0xC8(r1),0,0
	  stfd      f26, 0xB0(r1)
	  psq_st    f26,0xB8(r1),0,0
	  stw       r31, 0xAC(r1)
	  stw       r30, 0xA8(r1)
	  stw       r29, 0xA4(r1)
	  lfs       f1, 0x0(r4)
	  mr        r29, r3
	  lfs       f2, 0x4(r4)
	  mr        r30, r5
	  lfs       f3, 0x8(r4)
	  mr        r31, r6
	  addi      r3, r1, 0x68
	  bl        0xD97AC
	  lfs       f1, -0x7F18(r2)
	  lfs       f0, 0x0(r30)
	  lfs       f30, 0x8(r30)
	  fmuls     f27, f1, f0
	  lfs       f31, 0x4(r30)
	  fmr       f1, f27
	  bl        0xBE270
	  frsp      f29, f1
	  fmr       f1, f27
	  bl        0xBE7CC
	  lfs       f0, -0x7F18(r2)
	  frsp      f28, f1
	  fmuls     f31, f0, f31
	  fmr       f1, f31
	  bl        0xBE250
	  frsp      f27, f1
	  fmr       f1, f31
	  bl        0xBE7AC
	  lfs       f0, -0x7F18(r2)
	  frsp      f31, f1
	  fmuls     f26, f0, f30
	  fmr       f1, f26
	  bl        0xBE230
	  frsp      f30, f1
	  fmr       f1, f26
	  bl        0xBE78C
	  frsp      f7, f1
	  lfs       f0, -0x7F14(r2)
	  fmuls     f2, f27, f30
	  addi      r3, r1, 0x8
	  fneg      f1, f31
	  stfs      f0, 0x14(r1)
	  fmuls     f6, f29, f30
	  stfs      f2, 0x8(r1)
	  fmuls     f5, f28, f7
	  addi      r4, r1, 0x68
	  fmuls     f2, f27, f7
	  stfs      f1, 0x28(r1)
	  fmuls     f4, f28, f27
	  stfs      f0, 0x24(r1)
	  fmuls     f3, f29, f27
	  addi      r5, r1, 0x38
	  fmadds    f1, f6, f31, f5
	  stfs      f2, 0x18(r1)
	  fmadds    f2, f5, f31, f6
	  stfs      f4, 0x2C(r1)
	  fmuls     f5, f29, f7
	  fmuls     f4, f28, f30
	  stfs      f3, 0x30(r1)
	  stfs      f1, 0x10(r1)
	  fmsubs    f3, f4, f31, f5
	  fmsubs    f1, f5, f31, f4
	  stfs      f2, 0x1C(r1)
	  stfs      f3, 0xC(r1)
	  stfs      f1, 0x20(r1)
	  stfs      f0, 0x34(r1)
	  bl        0xD91F4
	  lfs       f1, 0x0(r31)
	  mr        r4, r29
	  lfs       f2, 0x4(r31)
	  addi      r3, r1, 0x38
	  lfs       f3, 0x8(r31)
	  bl        0xD9664
	  psq_l     f31,0x108(r1),0,0
	  lfd       f31, 0x100(r1)
	  psq_l     f30,0xF8(r1),0,0
	  lfd       f30, 0xF0(r1)
	  psq_l     f29,0xE8(r1),0,0
	  lfd       f29, 0xE0(r1)
	  psq_l     f28,0xD8(r1),0,0
	  lfd       f28, 0xD0(r1)
	  psq_l     f27,0xC8(r1),0,0
	  lfd       f27, 0xC0(r1)
	  psq_l     f26,0xB8(r1),0,0
	  lfd       f26, 0xB0(r1)
	  lwz       r31, 0xAC(r1)
	  lwz       r30, 0xA8(r1)
	  lwz       r0, 0x114(r1)
	  lwz       r29, 0xA4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x110
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001B4
 */
void JStudio::math::transform_SRxyzT((float (*)[4], float const (*)[4],
                                      Vec const&, Vec const&, Vec const&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80011174
 * Size:	000254
 */
void JStudio::math::getFromTransformation_SRxyzT((Vec*, Vec*, Vec*,
                                                  float const (*)[4]))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stfd      f31, 0x70(r1)
	  psq_st    f31,0x78(r1),0,0
	  stfd      f30, 0x60(r1)
	  psq_st    f30,0x68(r1),0,0
	  stfd      f29, 0x50(r1)
	  psq_st    f29,0x58(r1),0,0
	  stfd      f28, 0x40(r1)
	  psq_st    f28,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  stw       r29, 0x34(r1)
	  stw       r28, 0x30(r1)
	  mr        r31, r6
	  mr        r28, r3
	  lfs       f2, 0x0(r6)
	  mr        r29, r4
	  lfs       f1, 0x10(r6)
	  mr        r30, r5
	  lfs       f0, 0x20(r6)
	  addi      r3, r1, 0x20
	  stfs      f2, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  bl        0xD9D64
	  stfs      f1, 0x0(r28)
	  addi      r3, r1, 0x14
	  lfs       f2, 0x4(r31)
	  lfs       f1, 0x14(r31)
	  lfs       f0, 0x24(r31)
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        0xD9D40
	  stfs      f1, 0x4(r28)
	  addi      r3, r1, 0x8
	  lfs       f2, 0x8(r31)
	  lfs       f1, 0x18(r31)
	  lfs       f0, 0x28(r31)
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  bl        0xD9D1C
	  stfs      f1, 0x8(r28)
	  lfs       f0, 0xC(r31)
	  lfs       f1, 0x1C(r31)
	  stfs      f0, 0x0(r30)
	  lfs       f0, 0x2C(r31)
	  stfs      f1, 0x4(r30)
	  lfd       f10, -0x7F10(r2)
	  stfs      f0, 0x8(r30)
	  lfs       f0, -0x7F14(r2)
	  fmr       f11, f10
	  lfs       f1, 0x0(r28)
	  fmr       f4, f10
	  fcmpu     cr0, f0, f1
	  beq-      .loc_0xF4
	  lfd       f0, -0x7F08(r2)
	  fdiv      f10, f0, f1

	.loc_0xF4:
	  lfs       f0, -0x7F14(r2)
	  lfs       f1, 0x4(r28)
	  fcmpu     cr0, f0, f1
	  beq-      .loc_0x10C
	  lfd       f0, -0x7F08(r2)
	  fdiv      f11, f0, f1

	.loc_0x10C:
	  lfs       f0, -0x7F14(r2)
	  lfs       f1, 0x8(r28)
	  fcmpu     cr0, f0, f1
	  beq-      .loc_0x124
	  lfd       f0, -0x7F08(r2)
	  fdiv      f4, f0, f1

	.loc_0x124:
	  lfs       f0, 0x20(r31)
	  lis       r3, 0x8051
	  lfs       f2, 0x28(r31)
	  fmul      f31, f0, f10
	  lfs       f1, -0x7F00(r2)
	  lfs       f0, 0x48DC(r3)
	  fmul      f8, f2, f4
	  lfs       f7, 0x24(r31)
	  lfd       f3, -0x7F08(r2)
	  fmuls     f9, f1, f0
	  lfs       f2, 0x14(r31)
	  lfs       f6, 0x10(r31)
	  lfs       f4, 0x0(r31)
	  fsub      f1, f31, f3
	  fneg      f0, f9
	  lfs       f5, 0x4(r31)
	  fmul      f7, f7, f11
	  fcmpo     cr0, f1, f0
	  fmul      f2, f2, f11
	  fmul      f29, f6, f10
	  fmul      f1, f5, f11
	  fmul      f30, f4, f10
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x19C
	  fneg      f1, f1
	  bl        0xBE690
	  fmr       f28, f1
	  lfd       f3, -0x7EF8(r2)
	  lfd       f29, -0x7F10(r2)
	  b         .loc_0x1EC

	.loc_0x19C:
	  fadd      f0, f31, f3
	  fcmpo     cr0, f0, f9
	  cror      2, 0, 0x2
	  bne-      .loc_0x1C0
	  bl        0xBE66C
	  fmr       f28, f1
	  lfd       f3, -0x7EF0(r2)
	  lfd       f29, -0x7F10(r2)
	  b         .loc_0x1EC

	.loc_0x1C0:
	  fmr       f1, f7
	  fmr       f2, f8
	  bl        0xBE650
	  fmr       f28, f1
	  fmr       f1, f29
	  fmr       f2, f30
	  bl        0xBE640
	  fmr       f29, f1
	  fneg      f1, f31
	  bl        0xBE614
	  fmr       f3, f1

	.loc_0x1EC:
	  lfd       f0, -0x7EE8(r2)
	  fmul      f28, f28, f0
	  fmul      f3, f3, f0
	  fmul      f29, f29, f0
	  frsp      f2, f28
	  frsp      f1, f3
	  frsp      f0, f29
	  stfs      f2, 0x0(r29)
	  stfs      f1, 0x4(r29)
	  stfs      f0, 0x8(r29)
	  psq_l     f31,0x78(r1),0,0
	  lfd       f31, 0x70(r1)
	  psq_l     f30,0x68(r1),0,0
	  lfd       f30, 0x60(r1)
	  psq_l     f29,0x58(r1),0,0
	  lfd       f29, 0x50(r1)
	  psq_l     f28,0x48(r1),0,0
	  lfd       f28, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  lwz       r0, 0x84(r1)
	  lwz       r28, 0x30(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

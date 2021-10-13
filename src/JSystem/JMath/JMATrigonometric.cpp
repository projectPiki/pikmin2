

/*
 * --INFO--
 * Address:	........
 * Size:	0000D4
 */
void atan___Q25JMath18TAtanTable<1024, float> CFf(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80035108
 * Size:	000258
 */
void atan2___Q25JMath18TAtanTable<1024, float> CFff(void)
{
	/*
	.loc_0x0:
	  lfs       f0, -0x7C28(r2)
	  stwu      r1, -0x10(r1)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x130
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xA4
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x64
	  fcmpu     cr0, f0, f2
	  bne-      .loc_0x38
	  b         .loc_0x24C

	.loc_0x38:
	  lfs       f0, -0x7C1C(r2)
	  lfs       f3, -0x7C20(r2)
	  fmuls     f0, f0, f1
	  fdivs     f0, f0, f2
	  fadds     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  b         .loc_0x24C

	.loc_0x64:
	  fcmpu     cr0, f0, f1
	  lfs       f4, -0x7C24(r2)
	  bne-      .loc_0x74
	  b         .loc_0x9C

	.loc_0x74:
	  lfs       f0, -0x7C1C(r2)
	  lfs       f3, -0x7C20(r2)
	  fmuls     f0, f0, f2
	  fdivs     f0, f0, f1
	  fadds     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0

	.loc_0x9C:
	  fsubs     f0, f4, f0
	  b         .loc_0x24C

	.loc_0xA4:
	  fneg      f4, f2
	  fcmpo     cr0, f4, f1
	  bge-      .loc_0xF0
	  fcmpu     cr0, f0, f1
	  lfs       f3, -0x7C24(r2)
	  bne-      .loc_0xC0
	  b         .loc_0xE8

	.loc_0xC0:
	  lfs       f0, -0x7C1C(r2)
	  lfs       f2, -0x7C20(r2)
	  fmuls     f0, f0, f4
	  fdivs     f0, f0, f1
	  fadds     f0, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0

	.loc_0xE8:
	  fadds     f0, f3, f0
	  b         .loc_0x24C

	.loc_0xF0:
	  fcmpu     cr0, f0, f4
	  lfs       f3, -0x7C14(r2)
	  bne-      .loc_0x100
	  b         .loc_0x128

	.loc_0x100:
	  lfs       f0, -0x7C1C(r2)
	  lfs       f2, -0x7C20(r2)
	  fmuls     f0, f0, f1
	  fdivs     f0, f0, f4
	  fadds     f0, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0

	.loc_0x128:
	  fsubs     f0, f3, f0
	  b         .loc_0x24C

	.loc_0x130:
	  fcmpo     cr0, f2, f0
	  fneg      f4, f1
	  bge-      .loc_0x1CC
	  fneg      f3, f2
	  fcmpo     cr0, f3, f4
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x18C
	  fcmpu     cr0, f0, f3
	  lfs       f2, -0x7C10(r2)
	  bne-      .loc_0x15C
	  b         .loc_0x184

	.loc_0x15C:
	  lfs       f0, -0x7C1C(r2)
	  lfs       f1, -0x7C20(r2)
	  fmuls     f0, f0, f4
	  fdivs     f0, f0, f3
	  fadds     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0

	.loc_0x184:
	  fadds     f0, f2, f0
	  b         .loc_0x24C

	.loc_0x18C:
	  fcmpu     cr0, f0, f4
	  lfs       f2, -0x7C18(r2)
	  bne-      .loc_0x19C
	  b         .loc_0x1C4

	.loc_0x19C:
	  lfs       f0, -0x7C1C(r2)
	  lfs       f1, -0x7C20(r2)
	  fmuls     f0, f0, f3
	  fdivs     f0, f0, f4
	  fadds     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0

	.loc_0x1C4:
	  fsubs     f0, f2, f0
	  b         .loc_0x24C

	.loc_0x1CC:
	  fcmpo     cr0, f2, f4
	  bge-      .loc_0x214
	  fcmpu     cr0, f0, f4
	  lfs       f3, -0x7C18(r2)
	  bne-      .loc_0x1E4
	  b         .loc_0x20C

	.loc_0x1E4:
	  lfs       f0, -0x7C1C(r2)
	  lfs       f1, -0x7C20(r2)
	  fmuls     f0, f0, f2
	  fdivs     f0, f0, f4
	  fadds     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0

	.loc_0x20C:
	  fadds     f0, f3, f0
	  b         .loc_0x24C

	.loc_0x214:
	  fcmpu     cr0, f0, f2
	  bne-      .loc_0x220
	  b         .loc_0x248

	.loc_0x220:
	  lfs       f0, -0x7C1C(r2)
	  lfs       f1, -0x7C20(r2)
	  fmuls     f0, f0, f4
	  fdivs     f0, f0, f2
	  fadds     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0

	.loc_0x248:
	  fneg      f0, f0

	.loc_0x24C:
	  fmr       f1, f0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80035360
 * Size:	0001C0
 */
void __sinit_JMATrigonometric_cpp(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stfd      f31, 0x50(r1)
	  psq_st    f31,0x58(r1),0,0
	  stfd      f30, 0x40(r1)
	  psq_st    f30,0x48(r1),0,0
	  stfd      f29, 0x30(r1)
	  psq_st    f29,0x38(r1),0,0
	  stfd      f28, 0x20(r1)
	  psq_st    f28,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  lis       r3, 0x8050
	  lis       r4, 0x8003
	  addi      r3, r3, 0x71A0
	  li        r5, 0
	  addi      r4, r4, 0x5520
	  li        r6, 0x8
	  li        r7, 0x800
	  bl        0x8C488
	  lis       r3, 0x8050
	  lfd       f29, -0x7BE8(r2)
	  lfd       f31, -0x7C08(r2)
	  addi      r29, r3, 0x71A0
	  lfd       f30, -0x7C00(r2)
	  li        r30, 0
	  lis       r31, 0x4330

	.loc_0x74:
	  xoris     r0, r30, 0x8000
	  stw       r31, 0x8(r1)
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsub      f0, f0, f29
	  fmul      f0, f0, f31
	  fdiv      f28, f0, f30
	  fmr       f1, f28
	  bl        0x9A428
	  frsp      f0, f1
	  fmr       f1, f28
	  stfs      f0, 0x0(r29)
	  bl        0x99EB0
	  frsp      f0, f1
	  addi      r30, r30, 0x1
	  cmpwi     r30, 0x800
	  stfs      f0, 0x4(r29)
	  addi      r29, r29, 0x8
	  blt+      .loc_0x74
	  lis       r3, 0x8051
	  lfd       f31, -0x7BE8(r2)
	  lfd       f30, -0x7BF8(r2)
	  subi      r29, r3, 0x2E20
	  li        r30, 0
	  lis       r31, 0x4330

	.loc_0xD8:
	  xoris     r0, r30, 0x8000
	  stw       r31, 0x8(r1)
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsub      f0, f0, f31
	  fmul      f1, f0, f30
	  bl        0x99AE0
	  frsp      f0, f1
	  addi      r30, r30, 0x1
	  cmplwi    r30, 0x400
	  stfs      f0, 0x0(r29)
	  addi      r29, r29, 0x4
	  blt+      .loc_0xD8
	  lis       r3, 0x8051
	  lfs       f1, -0x7C28(r2)
	  subi      r4, r3, 0x2E20
	  lfs       f0, -0x7BF0(r2)
	  lis       r3, 0x8051
	  stfs      f1, 0x0(r4)
	  lfd       f30, -0x7BE8(r2)
	  subi      r29, r3, 0x1E00
	  stfs      f0, 0x1000(r4)
	  li        r30, 0
	  lfd       f31, -0x7BF8(r2)
	  lis       r31, 0x4330

	.loc_0x13C:
	  xoris     r0, r30, 0x8000
	  stw       r31, 0x8(r1)
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsub      f0, f0, f30
	  fmul      f1, f0, f31
	  bl        0x9A4B8
	  frsp      f0, f1
	  addi      r30, r30, 0x1
	  cmpwi     r30, 0x400
	  stfs      f0, 0x0(r29)
	  addi      r29, r29, 0x4
	  blt+      .loc_0x13C
	  lfs       f1, -0x7C28(r2)
	  lis       r3, 0x8051
	  lfs       f0, -0x7BF0(r2)
	  stfsu     f1, -0x1E00(r3)
	  stfs      f0, 0x1000(r3)
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  psq_l     f30,0x48(r1),0,0
	  lfd       f30, 0x40(r1)
	  psq_l     f29,0x38(r1),0,0
	  lfd       f29, 0x30(r1)
	  psq_l     f28,0x28(r1),0,0
	  lfd       f28, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r0, 0x64(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80035520
 * Size:	000010
 */
void __ct__Q23std9pair<float, float> Fv(void)
{
	/*
	.loc_0x0:
	  lfs       f0, -0x7C28(r2)
	  stfs      f0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	*/
}
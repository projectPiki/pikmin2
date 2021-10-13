

/*
 * --INFO--
 * Address:	80067678
 * Size:	000030
 */
void J3DFrameCtrl::init(short)
{
	/*
	.loc_0x0:
	  li        r5, 0x2
	  li        r0, 0
	  stb       r5, 0x4(r3)
	  lfs       f1, -0x7948(r2)
	  stb       r0, 0x5(r3)
	  lfs       f0, -0x7944(r2)
	  sth       r0, 0x6(r3)
	  sth       r4, 0x8(r3)
	  sth       r0, 0xA(r3)
	  stfs      f1, 0xC(r3)
	  stfs      f0, 0x10(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0005A0
 */
void J3DFrameCtrl::checkPass(float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800676A8
 * Size:	000474
 */
void J3DFrameCtrl::update()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  li        r0, 0
	  stb       r0, 0x5(r3)
	  lfs       f1, 0x10(r3)
	  lfs       f0, 0xC(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x10(r3)
	  lbz       r0, 0x4(r3)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x1BC
	  bge-      .loc_0x3C
	  cmpwi     r0, 0
	  beq-      .loc_0x4C
	  bge-      .loc_0x104
	  b         .loc_0x46C

	.loc_0x3C:
	  cmpwi     r0, 0x4
	  beq-      .loc_0x3AC
	  bge-      .loc_0x46C
	  b         .loc_0x2D4

	.loc_0x4C:
	  lha       r4, 0x6(r3)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  xoris     r4, r4, 0x8000
	  lfd       f2, -0x7938(r2)
	  stw       r4, 0xC(r1)
	  lfs       f1, 0x10(r3)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f2
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xA0
	  stw       r4, 0xC(r1)
	  lfs       f0, -0x7944(r2)
	  stw       r0, 0x8(r1)
	  lfd       f1, 0x8(r1)
	  fsubs     f1, f1, f2
	  stfs      f1, 0x10(r3)
	  stfs      f0, 0xC(r3)
	  lbz       r0, 0x5(r3)
	  ori       r0, r0, 0x1
	  stb       r0, 0x5(r3)

	.loc_0xA0:
	  lha       r4, 0x8(r3)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  xoris     r4, r4, 0x8000
	  lfd       f3, -0x7938(r2)
	  stw       r4, 0xC(r1)
	  lfs       f1, 0x10(r3)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f3
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x46C
	  stw       r4, 0xC(r1)
	  lfs       f1, -0x7940(r2)
	  stw       r0, 0x8(r1)
	  lfs       f0, -0x7944(r2)
	  lfd       f2, 0x8(r1)
	  fsubs     f2, f2, f3
	  fsubs     f1, f2, f1
	  stfs      f1, 0x10(r3)
	  stfs      f0, 0xC(r3)
	  lbz       r0, 0x5(r3)
	  ori       r0, r0, 0x1
	  stb       r0, 0x5(r3)
	  b         .loc_0x46C

	.loc_0x104:
	  lha       r4, 0x6(r3)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  xoris     r4, r4, 0x8000
	  lfd       f2, -0x7938(r2)
	  stw       r4, 0xC(r1)
	  lfs       f1, 0x10(r3)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f2
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x158
	  stw       r4, 0xC(r1)
	  lfs       f0, -0x7944(r2)
	  stw       r0, 0x8(r1)
	  lfd       f1, 0x8(r1)
	  fsubs     f1, f1, f2
	  stfs      f1, 0x10(r3)
	  stfs      f0, 0xC(r3)
	  lbz       r0, 0x5(r3)
	  ori       r0, r0, 0x1
	  stb       r0, 0x5(r3)

	.loc_0x158:
	  lha       r0, 0x8(r3)
	  lis       r4, 0x4330
	  stw       r4, 0x8(r1)
	  xoris     r0, r0, 0x8000
	  lfd       f2, -0x7938(r2)
	  stw       r0, 0xC(r1)
	  lfs       f1, 0x10(r3)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f2
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x46C
	  lha       r0, 0x6(r3)
	  stw       r4, 0x8(r1)
	  xoris     r0, r0, 0x8000
	  lfs       f0, -0x7944(r2)
	  stw       r0, 0xC(r1)
	  lfd       f1, 0x8(r1)
	  fsubs     f1, f1, f2
	  stfs      f1, 0x10(r3)
	  stfs      f0, 0xC(r3)
	  lbz       r0, 0x5(r3)
	  ori       r0, r0, 0x1
	  stb       r0, 0x5(r3)
	  b         .loc_0x46C

	.loc_0x1BC:
	  lfd       f3, -0x7938(r2)
	  lis       r4, 0x4330
	  lfs       f2, -0x7944(r2)
	  b         .loc_0x220

	.loc_0x1CC:
	  lbz       r0, 0x5(r3)
	  stw       r4, 0x8(r1)
	  ori       r0, r0, 0x2
	  stb       r0, 0x5(r3)
	  lha       r5, 0x6(r3)
	  lha       r0, 0xA(r3)
	  sub       r0, r0, r5
	  xoris     r0, r0, 0x8000
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f3
	  fcmpo     cr0, f0, f2
	  cror      2, 0, 0x2
	  beq-      .loc_0x244
	  stw       r0, 0xC(r1)
	  lfs       f1, 0x10(r3)
	  stw       r4, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f3
	  fadds     f0, f1, f0
	  stfs      f0, 0x10(r3)

	.loc_0x220:
	  lha       r0, 0x6(r3)
	  stw       r4, 0x8(r1)
	  xoris     r0, r0, 0x8000
	  lfs       f1, 0x10(r3)
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f3
	  fcmpo     cr0, f1, f0
	  blt+      .loc_0x1CC

	.loc_0x244:
	  lfd       f3, -0x7938(r2)
	  lis       r4, 0x4330
	  lfs       f2, -0x7944(r2)
	  b         .loc_0x2A8

	.loc_0x254:
	  lbz       r0, 0x5(r3)
	  stw       r4, 0x8(r1)
	  ori       r0, r0, 0x2
	  stb       r0, 0x5(r3)
	  lha       r5, 0xA(r3)
	  lha       r0, 0x8(r3)
	  sub       r0, r0, r5
	  xoris     r0, r0, 0x8000
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f3
	  fcmpo     cr0, f0, f2
	  cror      2, 0, 0x2
	  beq-      .loc_0x46C
	  stw       r0, 0xC(r1)
	  lfs       f1, 0x10(r3)
	  stw       r4, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f3
	  fsubs     f0, f1, f0
	  stfs      f0, 0x10(r3)

	.loc_0x2A8:
	  lha       r0, 0x8(r3)
	  stw       r4, 0x8(r1)
	  xoris     r0, r0, 0x8000
	  lfs       f1, 0x10(r3)
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f3
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  beq+      .loc_0x254
	  b         .loc_0x46C

	.loc_0x2D4:
	  lha       r4, 0x8(r3)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  xoris     r4, r4, 0x8000
	  lfd       f2, -0x7938(r2)
	  stw       r4, 0xC(r1)
	  lfs       f3, 0x10(r3)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f2
	  fcmpo     cr0, f3, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x33C
	  stw       r4, 0x14(r1)
	  stw       r0, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  stw       r4, 0xC(r1)
	  fsubs     f0, f0, f2
	  stw       r0, 0x8(r1)
	  lfd       f1, 0x8(r1)
	  fsubs     f0, f3, f0
	  fsubs     f1, f1, f2
	  fsubs     f0, f1, f0
	  stfs      f0, 0x10(r3)
	  lfs       f0, 0xC(r3)
	  fneg      f0, f0
	  stfs      f0, 0xC(r3)

	.loc_0x33C:
	  lha       r4, 0x6(r3)
	  lis       r0, 0x4330
	  stw       r0, 0x10(r1)
	  xoris     r4, r4, 0x8000
	  lfd       f3, -0x7938(r2)
	  stw       r4, 0x14(r1)
	  lfs       f4, 0x10(r3)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f3
	  fcmpo     cr0, f4, f0
	  bge-      .loc_0x46C
	  stw       r4, 0xC(r1)
	  lfs       f0, -0x7944(r2)
	  stw       r0, 0x8(r1)
	  lfd       f1, 0x8(r1)
	  stw       r4, 0x14(r1)
	  fsubs     f1, f1, f3
	  stw       r0, 0x10(r1)
	  lfd       f2, 0x10(r1)
	  fsubs     f1, f4, f1
	  fsubs     f2, f2, f3
	  fsubs     f1, f2, f1
	  stfs      f1, 0x10(r3)
	  stfs      f0, 0xC(r3)
	  lbz       r0, 0x5(r3)
	  ori       r0, r0, 0x1
	  stb       r0, 0x5(r3)
	  b         .loc_0x46C

	.loc_0x3AC:
	  lha       r4, 0x8(r3)
	  lis       r0, 0x4330
	  stw       r0, 0x10(r1)
	  xoris     r0, r4, 0x8000
	  lfd       f2, -0x7938(r2)
	  stw       r0, 0x14(r1)
	  lfs       f0, -0x7948(r2)
	  lfd       f1, 0x10(r1)
	  lfs       f3, 0x10(r3)
	  fsubs     f1, f1, f2
	  fsubs     f1, f1, f0
	  fcmpo     cr0, f3, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x3FC
	  fsubs     f0, f3, f1
	  fsubs     f0, f1, f0
	  stfs      f0, 0x10(r3)
	  lfs       f0, 0xC(r3)
	  fneg      f0, f0
	  stfs      f0, 0xC(r3)

	.loc_0x3FC:
	  lha       r4, 0x6(r3)
	  lis       r0, 0x4330
	  stw       r0, 0x10(r1)
	  xoris     r4, r4, 0x8000
	  lfd       f2, -0x7938(r2)
	  stw       r4, 0x14(r1)
	  lfs       f3, 0x10(r3)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f2
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x46C
	  stw       r4, 0xC(r1)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  stw       r4, 0x14(r1)
	  fsubs     f0, f0, f2
	  stw       r0, 0x10(r1)
	  lfd       f1, 0x10(r1)
	  fsubs     f0, f3, f0
	  fsubs     f1, f1, f2
	  fsubs     f0, f1, f0
	  stfs      f0, 0x10(r3)
	  lfs       f0, 0xC(r3)
	  fneg      f0, f0
	  stfs      f0, 0xC(r3)
	  lbz       r0, 0x5(r3)
	  ori       r0, r0, 0x2
	  stb       r0, 0x5(r3)

	.loc_0x46C:
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80067B1C
 * Size:	000360
 */
void J3DAnmTransformFull::getTransform(unsigned short, J3DTransformInfo*) const
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x3
	  lfs       f1, 0x8(r3)
	  lfs       f0, -0x7944(r2)
	  lwz       r8, 0x20(r3)
	  rlwinm    r6,r0,0,16,31
	  fcmpo     cr0, f1, f0
	  addi      r0, r6, 0x2
	  stwu      r1, -0x10(r1)
	  addi      r4, r6, 0x1
	  mulli     r7, r6, 0xC
	  mulli     r6, r4, 0xC
	  add       r4, r8, r7
	  mulli     r0, r0, 0xC
	  add       r6, r8, r6
	  add       r7, r8, r0
	  bge-      .loc_0xE0
	  lhz       r0, 0x2(r4)
	  lwz       r9, 0xC(r3)
	  rlwinm    r0,r0,2,0,29
	  lwz       r8, 0x10(r3)
	  lfsx      f0, r9, r0
	  lwz       r3, 0x14(r3)
	  stfs      f0, 0x0(r5)
	  lhz       r0, 0x2(r6)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r9, r0
	  stfs      f0, 0x4(r5)
	  lhz       r0, 0x2(r7)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r9, r0
	  stfs      f0, 0x8(r5)
	  lhz       r0, 0x6(r4)
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r8, r0
	  sth       r0, 0xC(r5)
	  lhz       r0, 0x6(r6)
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r8, r0
	  sth       r0, 0xE(r5)
	  lhz       r0, 0x6(r7)
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r8, r0
	  sth       r0, 0x10(r5)
	  lhz       r0, 0xA(r4)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x14(r5)
	  lhz       r0, 0xA(r6)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x18(r5)
	  lhz       r0, 0xA(r7)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x1C(r5)
	  b         .loc_0x358

	.loc_0xE0:
	  lfs       f0, -0x7930(r2)
	  lhz       r10, 0x0(r4)
	  fadds     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  cmplw     r0, r10
	  blt-      .loc_0x120
	  lhz       r8, 0x2(r4)
	  lwz       r9, 0xC(r3)
	  add       r8, r10, r8
	  subi      r8, r8, 0x1
	  rlwinm    r8,r8,2,0,29
	  lfsx      f0, r9, r8
	  stfs      f0, 0x0(r5)
	  b         .loc_0x138

	.loc_0x120:
	  lhz       r8, 0x2(r4)
	  lwz       r9, 0xC(r3)
	  add       r8, r8, r0
	  rlwinm    r8,r8,2,0,29
	  lfsx      f0, r9, r8
	  stfs      f0, 0x0(r5)

	.loc_0x138:
	  lhz       r10, 0x4(r4)
	  cmplw     r0, r10
	  blt-      .loc_0x164
	  lhz       r8, 0x6(r4)
	  lwz       r9, 0x10(r3)
	  add       r8, r10, r8
	  subi      r8, r8, 0x1
	  rlwinm    r8,r8,1,0,30
	  lhax      r8, r9, r8
	  sth       r8, 0xC(r5)
	  b         .loc_0x17C

	.loc_0x164:
	  lhz       r8, 0x6(r4)
	  lwz       r9, 0x10(r3)
	  add       r8, r8, r0
	  rlwinm    r8,r8,1,0,30
	  lhax      r8, r9, r8
	  sth       r8, 0xC(r5)

	.loc_0x17C:
	  lhz       r9, 0x8(r4)
	  cmplw     r0, r9
	  blt-      .loc_0x1A8
	  lhz       r4, 0xA(r4)
	  lwz       r8, 0x14(r3)
	  add       r4, r9, r4
	  subi      r4, r4, 0x1
	  rlwinm    r4,r4,2,0,29
	  lfsx      f0, r8, r4
	  stfs      f0, 0x14(r5)
	  b         .loc_0x1C0

	.loc_0x1A8:
	  lhz       r4, 0xA(r4)
	  lwz       r8, 0x14(r3)
	  add       r4, r4, r0
	  rlwinm    r4,r4,2,0,29
	  lfsx      f0, r8, r4
	  stfs      f0, 0x14(r5)

	.loc_0x1C0:
	  lhz       r9, 0x0(r6)
	  cmplw     r0, r9
	  blt-      .loc_0x1EC
	  lhz       r4, 0x2(r6)
	  lwz       r8, 0xC(r3)
	  add       r4, r9, r4
	  subi      r4, r4, 0x1
	  rlwinm    r4,r4,2,0,29
	  lfsx      f0, r8, r4
	  stfs      f0, 0x4(r5)
	  b         .loc_0x204

	.loc_0x1EC:
	  lhz       r4, 0x2(r6)
	  lwz       r8, 0xC(r3)
	  add       r4, r4, r0
	  rlwinm    r4,r4,2,0,29
	  lfsx      f0, r8, r4
	  stfs      f0, 0x4(r5)

	.loc_0x204:
	  lhz       r9, 0x4(r6)
	  cmplw     r0, r9
	  blt-      .loc_0x230
	  lhz       r4, 0x6(r6)
	  lwz       r8, 0x10(r3)
	  add       r4, r9, r4
	  subi      r4, r4, 0x1
	  rlwinm    r4,r4,1,0,30
	  lhax      r4, r8, r4
	  sth       r4, 0xE(r5)
	  b         .loc_0x248

	.loc_0x230:
	  lhz       r4, 0x6(r6)
	  lwz       r8, 0x10(r3)
	  add       r4, r4, r0
	  rlwinm    r4,r4,1,0,30
	  lhax      r4, r8, r4
	  sth       r4, 0xE(r5)

	.loc_0x248:
	  lhz       r8, 0x8(r6)
	  cmplw     r0, r8
	  blt-      .loc_0x274
	  lhz       r4, 0xA(r6)
	  lwz       r6, 0x14(r3)
	  add       r4, r8, r4
	  subi      r4, r4, 0x1
	  rlwinm    r4,r4,2,0,29
	  lfsx      f0, r6, r4
	  stfs      f0, 0x18(r5)
	  b         .loc_0x28C

	.loc_0x274:
	  lhz       r4, 0xA(r6)
	  lwz       r6, 0x14(r3)
	  add       r4, r4, r0
	  rlwinm    r4,r4,2,0,29
	  lfsx      f0, r6, r4
	  stfs      f0, 0x18(r5)

	.loc_0x28C:
	  lhz       r8, 0x0(r7)
	  cmplw     r0, r8
	  blt-      .loc_0x2B8
	  lhz       r4, 0x2(r7)
	  lwz       r6, 0xC(r3)
	  add       r4, r8, r4
	  subi      r4, r4, 0x1
	  rlwinm    r4,r4,2,0,29
	  lfsx      f0, r6, r4
	  stfs      f0, 0x8(r5)
	  b         .loc_0x2D0

	.loc_0x2B8:
	  lhz       r4, 0x2(r7)
	  lwz       r6, 0xC(r3)
	  add       r4, r4, r0
	  rlwinm    r4,r4,2,0,29
	  lfsx      f0, r6, r4
	  stfs      f0, 0x8(r5)

	.loc_0x2D0:
	  lhz       r8, 0x4(r7)
	  cmplw     r0, r8
	  blt-      .loc_0x2FC
	  lhz       r4, 0x6(r7)
	  lwz       r6, 0x10(r3)
	  add       r4, r8, r4
	  subi      r4, r4, 0x1
	  rlwinm    r4,r4,1,0,30
	  lhax      r4, r6, r4
	  sth       r4, 0x10(r5)
	  b         .loc_0x314

	.loc_0x2FC:
	  lhz       r4, 0x6(r7)
	  lwz       r6, 0x10(r3)
	  add       r4, r4, r0
	  rlwinm    r4,r4,1,0,30
	  lhax      r4, r6, r4
	  sth       r4, 0x10(r5)

	.loc_0x314:
	  lhz       r6, 0x8(r7)
	  cmplw     r0, r6
	  blt-      .loc_0x340
	  lhz       r0, 0xA(r7)
	  lwz       r4, 0x14(r3)
	  add       r3, r6, r0
	  subi      r0, r3, 0x1
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r4, r0
	  stfs      f0, 0x1C(r5)
	  b         .loc_0x358

	.loc_0x340:
	  lhz       r4, 0xA(r7)
	  lwz       r3, 0x14(r3)
	  add       r0, r4, r0
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x1C(r5)

	.loc_0x358:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80067E7C
 * Size:	000420
 */
void J3DAnmTransformKey::calcTransform(float, unsigned short,
                                       J3DTransformInfo*) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stmw      r27, 0x1C(r1)
	  mulli     r0, r4, 0x3
	  mr        r27, r3
	  lwz       r6, 0x24(r3)
	  fmr       f31, f1
	  mr        r28, r5
	  rlwinm    r3,r0,0,16,31
	  mulli     r0, r3, 0x12
	  addi      r4, r3, 0x1
	  addi      r3, r3, 0x2
	  add       r31, r6, r0
	  lhz       r0, 0x0(r31)
	  mulli     r4, r4, 0x12
	  cmpwi     r0, 0x1
	  mulli     r3, r3, 0x12
	  add       r30, r6, r4
	  add       r29, r6, r3
	  beq-      .loc_0x78
	  bge-      .loc_0x90
	  cmpwi     r0, 0
	  bge-      .loc_0x6C
	  b         .loc_0x90

	.loc_0x6C:
	  lfs       f0, -0x7948(r2)
	  stfs      f0, 0x0(r28)
	  b         .loc_0xB0

	.loc_0x78:
	  lhz       r0, 0x2(r31)
	  lwz       r3, 0xC(r27)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x0(r28)
	  b         .loc_0xB0

	.loc_0x90:
	  lhz       r0, 0x2(r31)
	  fmr       f1, f31
	  lwz       r4, 0xC(r27)
	  mr        r3, r31
	  rlwinm    r0,r0,2,0,29
	  add       r4, r4, r0
	  bl        0x2054
	  stfs      f1, 0x0(r28)

	.loc_0xB0:
	  lhz       r0, 0x0(r30)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xD8
	  bge-      .loc_0xF0
	  cmpwi     r0, 0
	  bge-      .loc_0xCC
	  b         .loc_0xF0

	.loc_0xCC:
	  lfs       f0, -0x7948(r2)
	  stfs      f0, 0x4(r28)
	  b         .loc_0x110

	.loc_0xD8:
	  lhz       r0, 0x2(r30)
	  lwz       r3, 0xC(r27)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x4(r28)
	  b         .loc_0x110

	.loc_0xF0:
	  lhz       r0, 0x2(r30)
	  fmr       f1, f31
	  lwz       r4, 0xC(r27)
	  mr        r3, r30
	  rlwinm    r0,r0,2,0,29
	  add       r4, r4, r0
	  bl        0x1FF4
	  stfs      f1, 0x4(r28)

	.loc_0x110:
	  lhz       r0, 0x0(r29)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x138
	  bge-      .loc_0x150
	  cmpwi     r0, 0
	  bge-      .loc_0x12C
	  b         .loc_0x150

	.loc_0x12C:
	  lfs       f0, -0x7948(r2)
	  stfs      f0, 0x8(r28)
	  b         .loc_0x170

	.loc_0x138:
	  lhz       r0, 0x2(r29)
	  lwz       r3, 0xC(r27)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x8(r28)
	  b         .loc_0x170

	.loc_0x150:
	  lhz       r0, 0x2(r29)
	  fmr       f1, f31
	  lwz       r4, 0xC(r27)
	  mr        r3, r29
	  rlwinm    r0,r0,2,0,29
	  add       r4, r4, r0
	  bl        0x1F94
	  stfs      f1, 0x8(r28)

	.loc_0x170:
	  lhz       r0, 0x6(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x198
	  bge-      .loc_0x1B8
	  cmpwi     r0, 0
	  bge-      .loc_0x18C
	  b         .loc_0x1B8

	.loc_0x18C:
	  li        r0, 0
	  sth       r0, 0xC(r28)
	  b         .loc_0x1EC

	.loc_0x198:
	  lhz       r0, 0x8(r31)
	  lwz       r4, 0x10(r27)
	  rlwinm    r3,r0,1,0,30
	  lwz       r0, 0x20(r27)
	  lhax      r3, r4, r3
	  slw       r0, r3, r0
	  sth       r0, 0xC(r28)
	  b         .loc_0x1EC

	.loc_0x1B8:
	  lhz       r0, 0x8(r31)
	  fmr       f1, f31
	  lwz       r4, 0x10(r27)
	  addi      r3, r31, 0x6
	  rlwinm    r0,r0,1,0,30
	  add       r4, r4, r0
	  bl        0x1CF8
	  fctiwz    f0, f1
	  lwz       r0, 0x20(r27)
	  stfd      f0, 0x8(r1)
	  lwz       r3, 0xC(r1)
	  slw       r0, r3, r0
	  sth       r0, 0xC(r28)

	.loc_0x1EC:
	  lhz       r0, 0x6(r30)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x214
	  bge-      .loc_0x234
	  cmpwi     r0, 0
	  bge-      .loc_0x208
	  b         .loc_0x234

	.loc_0x208:
	  li        r0, 0
	  sth       r0, 0xE(r28)
	  b         .loc_0x268

	.loc_0x214:
	  lhz       r0, 0x8(r30)
	  lwz       r4, 0x10(r27)
	  rlwinm    r3,r0,1,0,30
	  lwz       r0, 0x20(r27)
	  lhax      r3, r4, r3
	  slw       r0, r3, r0
	  sth       r0, 0xE(r28)
	  b         .loc_0x268

	.loc_0x234:
	  lhz       r0, 0x8(r30)
	  fmr       f1, f31
	  lwz       r4, 0x10(r27)
	  addi      r3, r30, 0x6
	  rlwinm    r0,r0,1,0,30
	  add       r4, r4, r0
	  bl        0x1C7C
	  fctiwz    f0, f1
	  lwz       r0, 0x20(r27)
	  stfd      f0, 0x8(r1)
	  lwz       r3, 0xC(r1)
	  slw       r0, r3, r0
	  sth       r0, 0xE(r28)

	.loc_0x268:
	  lhz       r0, 0x6(r29)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x290
	  bge-      .loc_0x2B0
	  cmpwi     r0, 0
	  bge-      .loc_0x284
	  b         .loc_0x2B0

	.loc_0x284:
	  li        r0, 0
	  sth       r0, 0x10(r28)
	  b         .loc_0x2E4

	.loc_0x290:
	  lhz       r0, 0x8(r29)
	  lwz       r4, 0x10(r27)
	  rlwinm    r3,r0,1,0,30
	  lwz       r0, 0x20(r27)
	  lhax      r3, r4, r3
	  slw       r0, r3, r0
	  sth       r0, 0x10(r28)
	  b         .loc_0x2E4

	.loc_0x2B0:
	  lhz       r0, 0x8(r29)
	  fmr       f1, f31
	  lwz       r4, 0x10(r27)
	  addi      r3, r29, 0x6
	  rlwinm    r0,r0,1,0,30
	  add       r4, r4, r0
	  bl        0x1C00
	  fctiwz    f0, f1
	  lwz       r0, 0x20(r27)
	  stfd      f0, 0x8(r1)
	  lwz       r3, 0xC(r1)
	  slw       r0, r3, r0
	  sth       r0, 0x10(r28)

	.loc_0x2E4:
	  lhz       r0, 0xC(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x30C
	  bge-      .loc_0x324
	  cmpwi     r0, 0
	  bge-      .loc_0x300
	  b         .loc_0x324

	.loc_0x300:
	  lfs       f0, -0x7944(r2)
	  stfs      f0, 0x14(r28)
	  b         .loc_0x344

	.loc_0x30C:
	  lhz       r0, 0xE(r31)
	  lwz       r3, 0x14(r27)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x14(r28)
	  b         .loc_0x344

	.loc_0x324:
	  lhz       r0, 0xE(r31)
	  fmr       f1, f31
	  lwz       r4, 0x14(r27)
	  addi      r3, r31, 0xC
	  rlwinm    r0,r0,2,0,29
	  add       r4, r4, r0
	  bl        0x1DC0
	  stfs      f1, 0x14(r28)

	.loc_0x344:
	  lhz       r0, 0xC(r30)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x36C
	  bge-      .loc_0x384
	  cmpwi     r0, 0
	  bge-      .loc_0x360
	  b         .loc_0x384

	.loc_0x360:
	  lfs       f0, -0x7944(r2)
	  stfs      f0, 0x18(r28)
	  b         .loc_0x3A4

	.loc_0x36C:
	  lhz       r0, 0xE(r30)
	  lwz       r3, 0x14(r27)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x18(r28)
	  b         .loc_0x3A4

	.loc_0x384:
	  lhz       r0, 0xE(r30)
	  fmr       f1, f31
	  lwz       r4, 0x14(r27)
	  addi      r3, r30, 0xC
	  rlwinm    r0,r0,2,0,29
	  add       r4, r4, r0
	  bl        0x1D60
	  stfs      f1, 0x18(r28)

	.loc_0x3A4:
	  lhz       r0, 0xC(r29)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x3CC
	  bge-      .loc_0x3E4
	  cmpwi     r0, 0
	  bge-      .loc_0x3C0
	  b         .loc_0x3E4

	.loc_0x3C0:
	  lfs       f0, -0x7944(r2)
	  stfs      f0, 0x1C(r28)
	  b         .loc_0x404

	.loc_0x3CC:
	  lhz       r0, 0xE(r29)
	  lwz       r3, 0x14(r27)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x1C(r28)
	  b         .loc_0x404

	.loc_0x3E4:
	  lhz       r0, 0xE(r29)
	  fmr       f1, f31
	  lwz       r4, 0x14(r27)
	  addi      r3, r29, 0xC
	  rlwinm    r0,r0,2,0,29
	  add       r4, r4, r0
	  bl        0x1D00
	  stfs      f1, 0x1C(r28)

	.loc_0x404:
	  psq_l     f31,0x38(r1),0,0
	  lfd       f31, 0x30(r1)
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006829C
 * Size:	000268
 */
void J3DAnmTextureSRTKey::calcTransform(float, unsigned short,
                                        J3DTextureSRTInfo*) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stmw      r27, 0x1C(r1)
	  mulli     r0, r4, 0x3
	  mr        r27, r3
	  lwz       r6, 0x10(r3)
	  fmr       f31, f1
	  mr        r28, r5
	  rlwinm    r3,r0,0,16,31
	  mulli     r0, r3, 0x12
	  addi      r4, r3, 0x1
	  addi      r3, r3, 0x2
	  add       r31, r6, r0
	  lhz       r0, 0x0(r31)
	  mulli     r4, r4, 0x12
	  cmpwi     r0, 0x1
	  mulli     r3, r3, 0x12
	  add       r30, r6, r4
	  add       r29, r6, r3
	  beq-      .loc_0x78
	  bge-      .loc_0x90
	  cmpwi     r0, 0
	  bge-      .loc_0x6C
	  b         .loc_0x90

	.loc_0x6C:
	  lfs       f0, -0x7948(r2)
	  stfs      f0, 0x0(r28)
	  b         .loc_0xB0

	.loc_0x78:
	  lhz       r0, 0x2(r31)
	  lwz       r3, 0x1C(r27)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x0(r28)
	  b         .loc_0xB0

	.loc_0x90:
	  lhz       r0, 0x2(r31)
	  fmr       f1, f31
	  lwz       r4, 0x1C(r27)
	  mr        r3, r31
	  rlwinm    r0,r0,2,0,29
	  add       r4, r4, r0
	  bl        0x1C34
	  stfs      f1, 0x0(r28)

	.loc_0xB0:
	  lhz       r0, 0x0(r30)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xD8
	  bge-      .loc_0xF0
	  cmpwi     r0, 0
	  bge-      .loc_0xCC
	  b         .loc_0xF0

	.loc_0xCC:
	  lfs       f0, -0x7948(r2)
	  stfs      f0, 0x4(r28)
	  b         .loc_0x110

	.loc_0xD8:
	  lhz       r0, 0x2(r30)
	  lwz       r3, 0x1C(r27)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x4(r28)
	  b         .loc_0x110

	.loc_0xF0:
	  lhz       r0, 0x2(r30)
	  fmr       f1, f31
	  lwz       r4, 0x1C(r27)
	  mr        r3, r30
	  rlwinm    r0,r0,2,0,29
	  add       r4, r4, r0
	  bl        0x1BD4
	  stfs      f1, 0x4(r28)

	.loc_0x110:
	  lhz       r0, 0x6(r29)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x138
	  bge-      .loc_0x158
	  cmpwi     r0, 0
	  bge-      .loc_0x12C
	  b         .loc_0x158

	.loc_0x12C:
	  li        r0, 0
	  sth       r0, 0x8(r28)
	  b         .loc_0x18C

	.loc_0x138:
	  lhz       r0, 0x8(r29)
	  lwz       r4, 0x20(r27)
	  rlwinm    r3,r0,1,0,30
	  lwz       r0, 0xC(r27)
	  lhax      r3, r4, r3
	  slw       r0, r3, r0
	  sth       r0, 0x8(r28)
	  b         .loc_0x18C

	.loc_0x158:
	  lhz       r0, 0x8(r29)
	  fmr       f1, f31
	  lwz       r4, 0x20(r27)
	  addi      r3, r29, 0x6
	  rlwinm    r0,r0,1,0,30
	  add       r4, r4, r0
	  bl        0x1938
	  fctiwz    f0, f1
	  lwz       r0, 0xC(r27)
	  stfd      f0, 0x8(r1)
	  lwz       r3, 0xC(r1)
	  slw       r0, r3, r0
	  sth       r0, 0x8(r28)

	.loc_0x18C:
	  lhz       r0, 0xC(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x1B4
	  bge-      .loc_0x1CC
	  cmpwi     r0, 0
	  bge-      .loc_0x1A8
	  b         .loc_0x1CC

	.loc_0x1A8:
	  lfs       f0, -0x7944(r2)
	  stfs      f0, 0xC(r28)
	  b         .loc_0x1EC

	.loc_0x1B4:
	  lhz       r0, 0xE(r31)
	  lwz       r3, 0x24(r27)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0xC(r28)
	  b         .loc_0x1EC

	.loc_0x1CC:
	  lhz       r0, 0xE(r31)
	  fmr       f1, f31
	  lwz       r4, 0x24(r27)
	  addi      r3, r31, 0xC
	  rlwinm    r0,r0,2,0,29
	  add       r4, r4, r0
	  bl        0x1AF8
	  stfs      f1, 0xC(r28)

	.loc_0x1EC:
	  lhz       r0, 0xC(r30)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x214
	  bge-      .loc_0x22C
	  cmpwi     r0, 0
	  bge-      .loc_0x208
	  b         .loc_0x22C

	.loc_0x208:
	  lfs       f0, -0x7944(r2)
	  stfs      f0, 0x10(r28)
	  b         .loc_0x24C

	.loc_0x214:
	  lhz       r0, 0xE(r30)
	  lwz       r3, 0x24(r27)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x10(r28)
	  b         .loc_0x24C

	.loc_0x22C:
	  lhz       r0, 0xE(r30)
	  fmr       f1, f31
	  lwz       r4, 0x24(r27)
	  addi      r3, r30, 0xC
	  rlwinm    r0,r0,2,0,29
	  add       r4, r4, r0
	  bl        0x1A98
	  stfs      f1, 0x10(r28)

	.loc_0x24C:
	  psq_l     f31,0x38(r1),0,0
	  lfd       f31, 0x30(r1)
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000274
 */
void J3DAnmTextureSRTKey::calcPostTransform(float, unsigned short,
                                            J3DTextureSRTInfo*) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80068504
 * Size:	000094
 */
void J3DAnmClusterFull::getWeight(unsigned short) const
{
	/*
	.loc_0x0:
	  lfs       f1, -0x7930(r2)
	  rlwinm    r0,r4,2,14,29
	  lfs       f2, 0x8(r3)
	  lfs       f0, -0x7944(r2)
	  fadds     f1, f1, f2
	  stwu      r1, -0x10(r1)
	  fcmpo     cr0, f2, f0
	  lwz       r4, 0x10(r3)
	  fctiwz    f0, f1
	  lhzx      r6, r4, r0
	  stfd      f0, 0x8(r1)
	  lwz       r5, 0xC(r1)
	  bge-      .loc_0x4C
	  add       r4, r4, r0
	  lwz       r3, 0xC(r3)
	  lhz       r0, 0x2(r4)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f1, r3, r0
	  b         .loc_0x8C

	.loc_0x4C:
	  cmpw      r5, r6
	  blt-      .loc_0x74
	  add       r4, r4, r0
	  lwz       r5, 0xC(r3)
	  lhz       r0, 0x2(r4)
	  add       r3, r6, r0
	  subi      r0, r3, 0x1
	  rlwinm    r0,r0,2,0,29
	  lfsx      f1, r5, r0
	  b         .loc_0x8C

	.loc_0x74:
	  add       r4, r4, r0
	  lwz       r3, 0xC(r3)
	  lhz       r0, 0x2(r4)
	  add       r0, r5, r0
	  rlwinm    r0,r0,2,0,29
	  lfsx      f1, r3, r0

	.loc_0x8C:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80068598
 * Size:	000084
 */
void J3DAnmClusterKey::getWeight(unsigned short) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lwz       r5, 0x10(r3)
	  mr        r6, r3
	  stw       r0, 0x14(r1)
	  rlwinm    r0,r4,0,16,31
	  mulli     r4, r0, 0x6
	  add       r3, r5, r4
	  lhz       r0, 0x0(r3)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x44
	  bge-      .loc_0x58
	  cmpwi     r0, 0
	  bge-      .loc_0x3C
	  b         .loc_0x58

	.loc_0x3C:
	  lfs       f1, -0x7948(r2)
	  b         .loc_0x74

	.loc_0x44:
	  lhz       r0, 0x2(r3)
	  lwz       r3, 0xC(r6)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f1, r3, r0
	  b         .loc_0x74

	.loc_0x58:
	  add       r4, r5, r4
	  lwz       r5, 0xC(r6)
	  lhz       r0, 0x2(r4)
	  lfs       f1, 0x8(r6)
	  rlwinm    r0,r0,2,0,29
	  add       r4, r5, r0
	  bl        0x1970

	.loc_0x74:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006861C
 * Size:	000178
 */
void J3DAnmVtxColorFull::getColor(unsigned char, unsigned short,
                                  _GXColor*) const
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,22,29
	  lfs       f1, 0x8(r3)
	  add       r4, r3, r0
	  lfs       f0, -0x7944(r2)
	  lwz       r4, 0x18(r4)
	  rlwinm    r0,r5,4,12,27
	  fcmpo     cr0, f1, f0
	  stwu      r1, -0x10(r1)
	  add       r4, r4, r0
	  bge-      .loc_0x6C
	  lwz       r5, 0x20(r3)
	  lhz       r0, 0x2(r4)
	  lwz       r7, 0x24(r3)
	  lbzx      r0, r5, r0
	  lwz       r5, 0x28(r3)
	  stb       r0, 0x0(r6)
	  lwz       r3, 0x2C(r3)
	  lhz       r0, 0x6(r4)
	  lbzx      r0, r7, r0
	  stb       r0, 0x1(r6)
	  lhz       r0, 0xA(r4)
	  lbzx      r0, r5, r0
	  stb       r0, 0x2(r6)
	  lhz       r0, 0xE(r4)
	  lbzx      r0, r3, r0
	  stb       r0, 0x3(r6)
	  b         .loc_0x170

	.loc_0x6C:
	  lfs       f0, -0x7930(r2)
	  lhz       r8, 0x0(r4)
	  fadds     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  cmpw      r0, r8
	  blt-      .loc_0xA8
	  lwz       r7, 0x20(r3)
	  lhz       r5, 0x2(r4)
	  add       r5, r7, r5
	  add       r5, r5, r8
	  lbz       r5, -0x1(r5)
	  stb       r5, 0x0(r6)
	  b         .loc_0xBC

	.loc_0xA8:
	  lhz       r5, 0x2(r4)
	  lwz       r7, 0x20(r3)
	  add       r5, r5, r0
	  lbzx      r5, r7, r5
	  stb       r5, 0x0(r6)

	.loc_0xBC:
	  lhz       r8, 0x4(r4)
	  cmpw      r0, r8
	  blt-      .loc_0xE4
	  lwz       r7, 0x24(r3)
	  lhz       r5, 0x6(r4)
	  add       r5, r7, r5
	  add       r5, r5, r8
	  lbz       r5, -0x1(r5)
	  stb       r5, 0x1(r6)
	  b         .loc_0xF8

	.loc_0xE4:
	  lhz       r5, 0x6(r4)
	  lwz       r7, 0x24(r3)
	  add       r5, r5, r0
	  lbzx      r5, r7, r5
	  stb       r5, 0x1(r6)

	.loc_0xF8:
	  lhz       r8, 0x8(r4)
	  cmpw      r0, r8
	  blt-      .loc_0x120
	  lwz       r7, 0x28(r3)
	  lhz       r5, 0xA(r4)
	  add       r5, r7, r5
	  add       r5, r5, r8
	  lbz       r5, -0x1(r5)
	  stb       r5, 0x2(r6)
	  b         .loc_0x134

	.loc_0x120:
	  lhz       r5, 0xA(r4)
	  lwz       r7, 0x28(r3)
	  add       r5, r5, r0
	  lbzx      r5, r7, r5
	  stb       r5, 0x2(r6)

	.loc_0x134:
	  lhz       r5, 0xC(r4)
	  cmpw      r0, r5
	  blt-      .loc_0x15C
	  lwz       r3, 0x2C(r3)
	  lhz       r0, 0xE(r4)
	  add       r0, r3, r0
	  add       r3, r0, r5
	  lbz       r0, -0x1(r3)
	  stb       r0, 0x3(r6)
	  b         .loc_0x170

	.loc_0x15C:
	  lhz       r4, 0xE(r4)
	  lwz       r3, 0x2C(r3)
	  add       r0, r4, r0
	  lbzx      r0, r3, r0
	  stb       r0, 0x3(r6)

	.loc_0x170:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80068794
 * Size:	0002F4
 */
void J3DAnmVtxColorKey::getColor(unsigned char, unsigned short, _GXColor*) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  rlwinm    r0,r5,0,16,31
	  mr        r29, r3
	  rlwinm    r3,r4,2,22,29
	  mr        r30, r6
	  add       r3, r29, r3
	  mulli     r0, r0, 0x18
	  lwz       r3, 0x18(r3)
	  add       r31, r3, r0
	  lhz       r0, 0x0(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x68
	  bge-      .loc_0x80
	  cmpwi     r0, 0
	  bge-      .loc_0x5C
	  b         .loc_0x80

	.loc_0x5C:
	  li        r0, 0
	  stb       r0, 0x0(r30)
	  b         .loc_0xE4

	.loc_0x68:
	  lhz       r0, 0x2(r31)
	  lwz       r3, 0x20(r29)
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r3, r0
	  stb       r0, 0x0(r30)
	  b         .loc_0xE4

	.loc_0x80:
	  lhz       r0, 0x2(r31)
	  mr        r3, r31
	  lwz       r4, 0x20(r29)
	  rlwinm    r0,r0,1,0,30
	  lfs       f1, 0x8(r29)
	  add       r4, r4, r0
	  bl        0x1518
	  fmr       f31, f1
	  lfs       f0, -0x7944(r2)
	  fcmpo     cr0, f31, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xBC
	  li        r0, 0
	  stb       r0, 0x0(r30)
	  b         .loc_0xE4

	.loc_0xBC:
	  lfs       f0, -0x792C(r2)
	  fcmpo     cr0, f31, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xDC
	  psq_st    f31,0x14(r1),0x1,0x2
	  lbz       r0, 0x14(r1)
	  stb       r0, 0x0(r30)
	  b         .loc_0xE4

	.loc_0xDC:
	  li        r0, 0xFF
	  stb       r0, 0x0(r30)

	.loc_0xE4:
	  lhz       r0, 0x6(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x10C
	  bge-      .loc_0x124
	  cmpwi     r0, 0
	  bge-      .loc_0x100
	  b         .loc_0x124

	.loc_0x100:
	  li        r0, 0
	  stb       r0, 0x1(r30)
	  b         .loc_0x188

	.loc_0x10C:
	  lhz       r0, 0x8(r31)
	  lwz       r3, 0x24(r29)
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r3, r0
	  stb       r0, 0x1(r30)
	  b         .loc_0x188

	.loc_0x124:
	  lhz       r0, 0x8(r31)
	  addi      r3, r31, 0x6
	  lwz       r4, 0x24(r29)
	  rlwinm    r0,r0,1,0,30
	  lfs       f1, 0x8(r29)
	  add       r4, r4, r0
	  bl        0x1474
	  fmr       f31, f1
	  lfs       f0, -0x7944(r2)
	  fcmpo     cr0, f31, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x160
	  li        r0, 0
	  stb       r0, 0x1(r30)
	  b         .loc_0x188

	.loc_0x160:
	  lfs       f0, -0x792C(r2)
	  fcmpo     cr0, f31, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x180
	  psq_st    f31,0x10(r1),0x1,0x2
	  lbz       r0, 0x10(r1)
	  stb       r0, 0x1(r30)
	  b         .loc_0x188

	.loc_0x180:
	  li        r0, 0xFF
	  stb       r0, 0x1(r30)

	.loc_0x188:
	  lhz       r0, 0xC(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x1B0
	  bge-      .loc_0x1C8
	  cmpwi     r0, 0
	  bge-      .loc_0x1A4
	  b         .loc_0x1C8

	.loc_0x1A4:
	  li        r0, 0
	  stb       r0, 0x2(r30)
	  b         .loc_0x22C

	.loc_0x1B0:
	  lhz       r0, 0xE(r31)
	  lwz       r3, 0x28(r29)
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r3, r0
	  stb       r0, 0x2(r30)
	  b         .loc_0x22C

	.loc_0x1C8:
	  lhz       r0, 0xE(r31)
	  addi      r3, r31, 0xC
	  lwz       r4, 0x28(r29)
	  rlwinm    r0,r0,1,0,30
	  lfs       f1, 0x8(r29)
	  add       r4, r4, r0
	  bl        0x13D0
	  fmr       f31, f1
	  lfs       f0, -0x7944(r2)
	  fcmpo     cr0, f31, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x204
	  li        r0, 0
	  stb       r0, 0x2(r30)
	  b         .loc_0x22C

	.loc_0x204:
	  lfs       f0, -0x792C(r2)
	  fcmpo     cr0, f31, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x224
	  psq_st    f31,0xC(r1),0x1,0x2
	  lbz       r0, 0xC(r1)
	  stb       r0, 0x2(r30)
	  b         .loc_0x22C

	.loc_0x224:
	  li        r0, 0xFF
	  stb       r0, 0x2(r30)

	.loc_0x22C:
	  lhz       r0, 0x12(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x254
	  bge-      .loc_0x26C
	  cmpwi     r0, 0
	  bge-      .loc_0x248
	  b         .loc_0x26C

	.loc_0x248:
	  li        r0, 0
	  stb       r0, 0x3(r30)
	  b         .loc_0x2D0

	.loc_0x254:
	  lhz       r0, 0x14(r31)
	  lwz       r3, 0x2C(r29)
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r3, r0
	  stb       r0, 0x3(r30)
	  b         .loc_0x2D0

	.loc_0x26C:
	  lhz       r0, 0x14(r31)
	  addi      r3, r31, 0x12
	  lwz       r4, 0x2C(r29)
	  rlwinm    r0,r0,1,0,30
	  lfs       f1, 0x8(r29)
	  add       r4, r4, r0
	  bl        0x132C
	  fmr       f31, f1
	  lfs       f0, -0x7944(r2)
	  fcmpo     cr0, f31, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x2A8
	  li        r0, 0
	  stb       r0, 0x3(r30)
	  b         .loc_0x2D0

	.loc_0x2A8:
	  lfs       f0, -0x792C(r2)
	  fcmpo     cr0, f31, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x2C8
	  psq_st    f31,0x8(r1),0x1,0x2
	  lbz       r0, 0x8(r1)
	  stb       r0, 0x3(r30)
	  b         .loc_0x2D0

	.loc_0x2C8:
	  li        r0, 0xFF
	  stb       r0, 0x3(r30)

	.loc_0x2D0:
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
void J3DAnmColor::searchUpdateMaterialID(J3DMaterialTable*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80068A88
 * Size:	0000A8
 */
void J3DAnmColor::searchUpdateMaterialID(J3DModelData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  b         .loc_0x78

	.loc_0x2C:
	  lwz       r30, 0x64(r29)
	  mr        r4, r31
	  addi      r3, r28, 0x1C
	  bl        -0x39CA4
	  mr        r4, r3
	  mr        r3, r30
	  bl        -0x39D48
	  cmpwi     r3, -0x1
	  beq-      .loc_0x60
	  lwz       r4, 0x18(r28)
	  rlwinm    r0,r31,1,15,30
	  sthx      r3, r4, r0
	  b         .loc_0x74

	.loc_0x60:
	  lis       r4, 0x1
	  lwz       r3, 0x18(r28)
	  subi      r4, r4, 0x1
	  rlwinm    r0,r31,1,15,30
	  sthx      r4, r3, r0

	.loc_0x74:
	  addi      r31, r31, 0x1

	.loc_0x78:
	  lhz       r0, 0x14(r28)
	  rlwinm    r3,r31,0,16,31
	  cmplw     r3, r0
	  blt+      .loc_0x2C
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80068B30
 * Size:	000170
 */
void J3DAnmColorFull::getColor(unsigned short, _GXColor*) const
{
	/*
	.loc_0x0:
	  lfs       f1, 0x8(r3)
	  rlwinm    r0,r4,4,12,27
	  lfs       f0, -0x7944(r2)
	  lwz       r4, 0x3C(r3)
	  fcmpo     cr0, f1, f0
	  stwu      r1, -0x10(r1)
	  add       r4, r4, r0
	  bge-      .loc_0x64
	  lwz       r6, 0x2C(r3)
	  lhz       r0, 0x2(r4)
	  lwz       r7, 0x30(r3)
	  lbzx      r0, r6, r0
	  lwz       r6, 0x34(r3)
	  stb       r0, 0x0(r5)
	  lwz       r3, 0x38(r3)
	  lhz       r0, 0x6(r4)
	  lbzx      r0, r7, r0
	  stb       r0, 0x1(r5)
	  lhz       r0, 0xA(r4)
	  lbzx      r0, r6, r0
	  stb       r0, 0x2(r5)
	  lhz       r0, 0xE(r4)
	  lbzx      r0, r3, r0
	  stb       r0, 0x3(r5)
	  b         .loc_0x168

	.loc_0x64:
	  lfs       f0, -0x7930(r2)
	  lhz       r8, 0x0(r4)
	  fadds     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  cmpw      r0, r8
	  blt-      .loc_0xA0
	  lwz       r7, 0x2C(r3)
	  lhz       r6, 0x2(r4)
	  add       r6, r7, r6
	  add       r6, r6, r8
	  lbz       r6, -0x1(r6)
	  stb       r6, 0x0(r5)
	  b         .loc_0xB4

	.loc_0xA0:
	  lhz       r6, 0x2(r4)
	  lwz       r7, 0x2C(r3)
	  add       r6, r6, r0
	  lbzx      r6, r7, r6
	  stb       r6, 0x0(r5)

	.loc_0xB4:
	  lhz       r8, 0x4(r4)
	  cmpw      r0, r8
	  blt-      .loc_0xDC
	  lwz       r7, 0x30(r3)
	  lhz       r6, 0x6(r4)
	  add       r6, r7, r6
	  add       r6, r6, r8
	  lbz       r6, -0x1(r6)
	  stb       r6, 0x1(r5)
	  b         .loc_0xF0

	.loc_0xDC:
	  lhz       r6, 0x6(r4)
	  lwz       r7, 0x30(r3)
	  add       r6, r6, r0
	  lbzx      r6, r7, r6
	  stb       r6, 0x1(r5)

	.loc_0xF0:
	  lhz       r8, 0x8(r4)
	  cmpw      r0, r8
	  blt-      .loc_0x118
	  lwz       r7, 0x34(r3)
	  lhz       r6, 0xA(r4)
	  add       r6, r7, r6
	  add       r6, r6, r8
	  lbz       r6, -0x1(r6)
	  stb       r6, 0x2(r5)
	  b         .loc_0x12C

	.loc_0x118:
	  lhz       r6, 0xA(r4)
	  lwz       r7, 0x34(r3)
	  add       r6, r6, r0
	  lbzx      r6, r7, r6
	  stb       r6, 0x2(r5)

	.loc_0x12C:
	  lhz       r6, 0xC(r4)
	  cmpw      r0, r6
	  blt-      .loc_0x154
	  lwz       r3, 0x38(r3)
	  lhz       r0, 0xE(r4)
	  add       r0, r3, r0
	  add       r3, r0, r6
	  lbz       r0, -0x1(r3)
	  stb       r0, 0x3(r5)
	  b         .loc_0x168

	.loc_0x154:
	  lhz       r4, 0xE(r4)
	  lwz       r3, 0x38(r3)
	  add       r0, r4, r0
	  lbzx      r0, r3, r0
	  stb       r0, 0x3(r5)

	.loc_0x168:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80068CA0
 * Size:	0002CC
 */
void J3DAnmColorKey::getColor(unsigned short, _GXColor*) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  rlwinm    r0,r4,0,16,31
	  mr        r29, r3
	  mulli     r0, r0, 0x18
	  lwz       r3, 0x3C(r3)
	  mr        r30, r5
	  add       r31, r3, r0
	  lhz       r0, 0x0(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x60
	  bge-      .loc_0x78
	  cmpwi     r0, 0
	  bge-      .loc_0x54
	  b         .loc_0x78

	.loc_0x54:
	  li        r0, 0
	  stb       r0, 0x0(r30)
	  b         .loc_0xD4

	.loc_0x60:
	  lhz       r0, 0x2(r31)
	  lwz       r3, 0x2C(r29)
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r3, r0
	  stb       r0, 0x0(r30)
	  b         .loc_0xD4

	.loc_0x78:
	  lhz       r0, 0x2(r31)
	  mr        r3, r31
	  lwz       r4, 0x2C(r29)
	  rlwinm    r0,r0,1,0,30
	  lfs       f1, 0x8(r29)
	  add       r4, r4, r0
	  bl        0x1014
	  fmr       f31, f1
	  lfs       f0, -0x7944(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0xB0
	  li        r0, 0
	  stb       r0, 0x0(r30)
	  b         .loc_0xD4

	.loc_0xB0:
	  lfs       f0, -0x792C(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0xC8
	  li        r0, 0xFF
	  stb       r0, 0x0(r30)
	  b         .loc_0xD4

	.loc_0xC8:
	  psq_st    f31,0x14(r1),0x1,0x2
	  lbz       r0, 0x14(r1)
	  stb       r0, 0x0(r30)

	.loc_0xD4:
	  lhz       r0, 0x6(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xFC
	  bge-      .loc_0x114
	  cmpwi     r0, 0
	  bge-      .loc_0xF0
	  b         .loc_0x114

	.loc_0xF0:
	  li        r0, 0
	  stb       r0, 0x1(r30)
	  b         .loc_0x170

	.loc_0xFC:
	  lhz       r0, 0x8(r31)
	  lwz       r3, 0x30(r29)
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r3, r0
	  stb       r0, 0x1(r30)
	  b         .loc_0x170

	.loc_0x114:
	  lhz       r0, 0x8(r31)
	  addi      r3, r31, 0x6
	  lwz       r4, 0x30(r29)
	  rlwinm    r0,r0,1,0,30
	  lfs       f1, 0x8(r29)
	  add       r4, r4, r0
	  bl        0xF78
	  fmr       f31, f1
	  lfs       f0, -0x7944(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x14C
	  li        r0, 0
	  stb       r0, 0x1(r30)
	  b         .loc_0x170

	.loc_0x14C:
	  lfs       f0, -0x792C(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x164
	  li        r0, 0xFF
	  stb       r0, 0x1(r30)
	  b         .loc_0x170

	.loc_0x164:
	  psq_st    f31,0x10(r1),0x1,0x2
	  lbz       r0, 0x10(r1)
	  stb       r0, 0x1(r30)

	.loc_0x170:
	  lhz       r0, 0xC(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x198
	  bge-      .loc_0x1B0
	  cmpwi     r0, 0
	  bge-      .loc_0x18C
	  b         .loc_0x1B0

	.loc_0x18C:
	  li        r0, 0
	  stb       r0, 0x2(r30)
	  b         .loc_0x20C

	.loc_0x198:
	  lhz       r0, 0xE(r31)
	  lwz       r3, 0x34(r29)
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r3, r0
	  stb       r0, 0x2(r30)
	  b         .loc_0x20C

	.loc_0x1B0:
	  lhz       r0, 0xE(r31)
	  addi      r3, r31, 0xC
	  lwz       r4, 0x34(r29)
	  rlwinm    r0,r0,1,0,30
	  lfs       f1, 0x8(r29)
	  add       r4, r4, r0
	  bl        0xEDC
	  fmr       f31, f1
	  lfs       f0, -0x7944(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x1E8
	  li        r0, 0
	  stb       r0, 0x2(r30)
	  b         .loc_0x20C

	.loc_0x1E8:
	  lfs       f0, -0x792C(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x200
	  li        r0, 0xFF
	  stb       r0, 0x2(r30)
	  b         .loc_0x20C

	.loc_0x200:
	  psq_st    f31,0xC(r1),0x1,0x2
	  lbz       r0, 0xC(r1)
	  stb       r0, 0x2(r30)

	.loc_0x20C:
	  lhz       r0, 0x12(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x234
	  bge-      .loc_0x24C
	  cmpwi     r0, 0
	  bge-      .loc_0x228
	  b         .loc_0x24C

	.loc_0x228:
	  li        r0, 0
	  stb       r0, 0x3(r30)
	  b         .loc_0x2A8

	.loc_0x234:
	  lhz       r0, 0x14(r31)
	  lwz       r3, 0x38(r29)
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r3, r0
	  stb       r0, 0x3(r30)
	  b         .loc_0x2A8

	.loc_0x24C:
	  lhz       r0, 0x14(r31)
	  addi      r3, r31, 0x12
	  lwz       r4, 0x38(r29)
	  rlwinm    r0,r0,1,0,30
	  lfs       f1, 0x8(r29)
	  add       r4, r4, r0
	  bl        0xE40
	  fmr       f31, f1
	  lfs       f0, -0x7944(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x284
	  li        r0, 0
	  stb       r0, 0x3(r30)
	  b         .loc_0x2A8

	.loc_0x284:
	  lfs       f0, -0x792C(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x29C
	  li        r0, 0xFF
	  stb       r0, 0x3(r30)
	  b         .loc_0x2A8

	.loc_0x29C:
	  psq_st    f31,0x8(r1),0x1,0x2
	  lbz       r0, 0x8(r1)
	  stb       r0, 0x3(r30)

	.loc_0x2A8:
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80068F6C
 * Size:	0000B4
 */
void J3DAnmTexPattern::getTexNo(unsigned short, unsigned short*) const
{
	/*
	.loc_0x0:
	  lfs       f2, 0x8(r3)
	  rlwinm    r4,r4,3,13,28
	  lfs       f0, -0x7944(r2)
	  stwu      r1, -0x10(r1)
	  lwz       r6, 0x10(r3)
	  fcmpo     cr0, f2, f0
	  lhzx      r7, r6, r4
	  bge-      .loc_0x3C
	  add       r4, r6, r4
	  lwz       r3, 0xC(r3)
	  lhz       r0, 0x2(r4)
	  rlwinm    r0,r0,1,0,30
	  lhzx      r0, r3, r0
	  sth       r0, 0x0(r5)
	  b         .loc_0xAC

	.loc_0x3C:
	  lis       r0, 0x4330
	  stw       r7, 0xC(r1)
	  lfd       f1, -0x7928(r2)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x84
	  add       r4, r6, r4
	  lwz       r6, 0xC(r3)
	  lhz       r0, 0x2(r4)
	  add       r3, r7, r0
	  subi      r0, r3, 0x1
	  rlwinm    r0,r0,1,0,30
	  lhzx      r0, r6, r0
	  sth       r0, 0x0(r5)
	  b         .loc_0xAC

	.loc_0x84:
	  fctiwz    f0, f2
	  add       r4, r6, r4
	  lhz       r0, 0x2(r4)
	  lwz       r4, 0xC(r3)
	  stfd      f0, 0x8(r1)
	  lwz       r3, 0xC(r1)
	  add       r0, r3, r0
	  rlwinm    r0,r0,1,0,30
	  lhzx      r0, r4, r0
	  sth       r0, 0x0(r5)

	.loc_0xAC:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void J3DAnmVisibilityFull::getVisibility(unsigned short, unsigned char*) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
void J3DAnmTexPattern::searchUpdateMaterialID(J3DMaterialTable*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
void J3DAnmTexPattern::searchUpdateMaterialID(J3DModelData*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000124
 */
void J3DAnmTextureSRTKey::searchUpdateMaterialID(J3DMaterialTable*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80069020
 * Size:	000124
 */
void J3DAnmTextureSRTKey::searchUpdateMaterialID(J3DModelData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x5555
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r30, r3
	  mr        r31, r4
	  li        r28, 0
	  addi      r29, r5, 0x5556
	  b         .loc_0x74

	.loc_0x28:
	  lwz       r27, 0x64(r31)
	  mr        r4, r28
	  addi      r3, r30, 0x30
	  bl        -0x3A238
	  mr        r4, r3
	  mr        r3, r27
	  bl        -0x3A2DC
	  cmpwi     r3, -0x1
	  beq-      .loc_0x5C
	  lwz       r4, 0x2C(r30)
	  rlwinm    r0,r28,1,15,30
	  sthx      r3, r4, r0
	  b         .loc_0x70

	.loc_0x5C:
	  lis       r4, 0x1
	  lwz       r3, 0x2C(r30)
	  subi      r4, r4, 0x1
	  rlwinm    r0,r28,1,15,30
	  sthx      r4, r3, r0

	.loc_0x70:
	  addi      r28, r28, 0x1

	.loc_0x74:
	  lhz       r0, 0x14(r30)
	  rlwinm    r4,r28,0,16,31
	  mulhw     r3, r29, r0
	  rlwinm    r0,r3,1,31,31
	  add       r0, r3, r0
	  rlwinm    r0,r0,0,16,31
	  cmplw     r4, r0
	  blt+      .loc_0x28
	  lis       r3, 0x5555
	  li        r28, 0
	  addi      r29, r3, 0x5556
	  b         .loc_0xF0

	.loc_0xA4:
	  lwz       r27, 0x64(r31)
	  mr        r4, r28
	  addi      r3, r30, 0x64
	  bl        -0x3A2B4
	  mr        r4, r3
	  mr        r3, r27
	  bl        -0x3A358
	  cmpwi     r3, -0x1
	  beq-      .loc_0xD8
	  lwz       r4, 0x60(r30)
	  rlwinm    r0,r28,1,15,30
	  sthx      r3, r4, r0
	  b         .loc_0xEC

	.loc_0xD8:
	  lis       r4, 0x1
	  lwz       r3, 0x60(r30)
	  subi      r4, r4, 0x1
	  rlwinm    r0,r28,1,15,30
	  sthx      r4, r3, r0

	.loc_0xEC:
	  addi      r28, r28, 0x1

	.loc_0xF0:
	  lhz       r0, 0x4A(r30)
	  rlwinm    r4,r28,0,16,31
	  mulhw     r3, r29, r0
	  rlwinm    r0,r3,1,31,31
	  add       r0, r3, r0
	  rlwinm    r0,r0,0,16,31
	  cmplw     r4, r0
	  blt+      .loc_0xA4
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80069144
 * Size:	0002CC
 */
void J3DAnmTevRegKey::getTevColorReg(unsigned short, _GXColorS10*) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  rlwinm    r0,r4,0,16,31
	  mr        r29, r3
	  mulli     r0, r0, 0x1C
	  lwz       r3, 0x48(r3)
	  mr        r30, r5
	  add       r31, r3, r0
	  lhz       r0, 0x0(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x60
	  bge-      .loc_0x78
	  cmpwi     r0, 0
	  bge-      .loc_0x54
	  b         .loc_0x78

	.loc_0x54:
	  li        r0, 0
	  sth       r0, 0x0(r30)
	  b         .loc_0xD4

	.loc_0x60:
	  lhz       r0, 0x2(r31)
	  lwz       r3, 0x50(r29)
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r3, r0
	  sth       r0, 0x0(r30)
	  b         .loc_0xD4

	.loc_0x78:
	  lhz       r0, 0x2(r31)
	  mr        r3, r31
	  lwz       r4, 0x50(r29)
	  rlwinm    r0,r0,1,0,30
	  lfs       f1, 0x8(r29)
	  add       r4, r4, r0
	  bl        0xB70
	  fmr       f31, f1
	  lfs       f0, -0x7920(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0xB0
	  li        r0, -0x400
	  sth       r0, 0x0(r30)
	  b         .loc_0xD4

	.loc_0xB0:
	  lfs       f0, -0x791C(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0xC8
	  li        r0, 0x3FF
	  sth       r0, 0x0(r30)
	  b         .loc_0xD4

	.loc_0xC8:
	  psq_st    f31,0x14(r1),0x1,0x5
	  lha       r0, 0x14(r1)
	  sth       r0, 0x0(r30)

	.loc_0xD4:
	  lhz       r0, 0x6(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xFC
	  bge-      .loc_0x114
	  cmpwi     r0, 0
	  bge-      .loc_0xF0
	  b         .loc_0x114

	.loc_0xF0:
	  li        r0, 0
	  sth       r0, 0x2(r30)
	  b         .loc_0x170

	.loc_0xFC:
	  lhz       r0, 0x8(r31)
	  lwz       r3, 0x54(r29)
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r3, r0
	  sth       r0, 0x2(r30)
	  b         .loc_0x170

	.loc_0x114:
	  lhz       r0, 0x8(r31)
	  addi      r3, r31, 0x6
	  lwz       r4, 0x54(r29)
	  rlwinm    r0,r0,1,0,30
	  lfs       f1, 0x8(r29)
	  add       r4, r4, r0
	  bl        0xAD4
	  fmr       f31, f1
	  lfs       f0, -0x7920(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x14C
	  li        r0, -0x400
	  sth       r0, 0x2(r30)
	  b         .loc_0x170

	.loc_0x14C:
	  lfs       f0, -0x791C(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x164
	  li        r0, 0x3FF
	  sth       r0, 0x2(r30)
	  b         .loc_0x170

	.loc_0x164:
	  psq_st    f31,0x10(r1),0x1,0x5
	  lha       r0, 0x10(r1)
	  sth       r0, 0x2(r30)

	.loc_0x170:
	  lhz       r0, 0xC(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x198
	  bge-      .loc_0x1B0
	  cmpwi     r0, 0
	  bge-      .loc_0x18C
	  b         .loc_0x1B0

	.loc_0x18C:
	  li        r0, 0
	  sth       r0, 0x4(r30)
	  b         .loc_0x20C

	.loc_0x198:
	  lhz       r0, 0xE(r31)
	  lwz       r3, 0x58(r29)
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r3, r0
	  sth       r0, 0x4(r30)
	  b         .loc_0x20C

	.loc_0x1B0:
	  lhz       r0, 0xE(r31)
	  addi      r3, r31, 0xC
	  lwz       r4, 0x58(r29)
	  rlwinm    r0,r0,1,0,30
	  lfs       f1, 0x8(r29)
	  add       r4, r4, r0
	  bl        0xA38
	  fmr       f31, f1
	  lfs       f0, -0x7920(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x1E8
	  li        r0, -0x400
	  sth       r0, 0x4(r30)
	  b         .loc_0x20C

	.loc_0x1E8:
	  lfs       f0, -0x791C(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x200
	  li        r0, 0x3FF
	  sth       r0, 0x4(r30)
	  b         .loc_0x20C

	.loc_0x200:
	  psq_st    f31,0xC(r1),0x1,0x5
	  lha       r0, 0xC(r1)
	  sth       r0, 0x4(r30)

	.loc_0x20C:
	  lhz       r0, 0x12(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x234
	  bge-      .loc_0x24C
	  cmpwi     r0, 0
	  bge-      .loc_0x228
	  b         .loc_0x24C

	.loc_0x228:
	  li        r0, 0
	  sth       r0, 0x6(r30)
	  b         .loc_0x2A8

	.loc_0x234:
	  lhz       r0, 0x14(r31)
	  lwz       r3, 0x5C(r29)
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r3, r0
	  sth       r0, 0x6(r30)
	  b         .loc_0x2A8

	.loc_0x24C:
	  lhz       r0, 0x14(r31)
	  addi      r3, r31, 0x12
	  lwz       r4, 0x5C(r29)
	  rlwinm    r0,r0,1,0,30
	  lfs       f1, 0x8(r29)
	  add       r4, r4, r0
	  bl        0x99C
	  fmr       f31, f1
	  lfs       f0, -0x7920(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x284
	  li        r0, -0x400
	  sth       r0, 0x6(r30)
	  b         .loc_0x2A8

	.loc_0x284:
	  lfs       f0, -0x791C(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x29C
	  li        r0, 0x3FF
	  sth       r0, 0x6(r30)
	  b         .loc_0x2A8

	.loc_0x29C:
	  psq_st    f31,0x8(r1),0x1,0x5
	  lha       r0, 0x8(r1)
	  sth       r0, 0x6(r30)

	.loc_0x2A8:
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80069410
 * Size:	0002CC
 */
void J3DAnmTevRegKey::getTevKonstReg(unsigned short, _GXColor*) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  rlwinm    r0,r4,0,16,31
	  mr        r29, r3
	  mulli     r0, r0, 0x1C
	  lwz       r3, 0x4C(r3)
	  mr        r30, r5
	  add       r31, r3, r0
	  lhz       r0, 0x0(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x60
	  bge-      .loc_0x78
	  cmpwi     r0, 0
	  bge-      .loc_0x54
	  b         .loc_0x78

	.loc_0x54:
	  li        r0, 0
	  stb       r0, 0x0(r30)
	  b         .loc_0xD4

	.loc_0x60:
	  lhz       r0, 0x2(r31)
	  lwz       r3, 0x60(r29)
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r3, r0
	  stb       r0, 0x0(r30)
	  b         .loc_0xD4

	.loc_0x78:
	  lhz       r0, 0x2(r31)
	  mr        r3, r31
	  lwz       r4, 0x60(r29)
	  rlwinm    r0,r0,1,0,30
	  lfs       f1, 0x8(r29)
	  add       r4, r4, r0
	  bl        0x8A4
	  fmr       f31, f1
	  lfs       f0, -0x7944(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0xB0
	  li        r0, 0
	  stb       r0, 0x0(r30)
	  b         .loc_0xD4

	.loc_0xB0:
	  lfs       f0, -0x792C(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0xC8
	  li        r0, 0xFF
	  stb       r0, 0x0(r30)
	  b         .loc_0xD4

	.loc_0xC8:
	  psq_st    f31,0x14(r1),0x1,0x2
	  lbz       r0, 0x14(r1)
	  stb       r0, 0x0(r30)

	.loc_0xD4:
	  lhz       r0, 0x6(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xFC
	  bge-      .loc_0x114
	  cmpwi     r0, 0
	  bge-      .loc_0xF0
	  b         .loc_0x114

	.loc_0xF0:
	  li        r0, 0
	  stb       r0, 0x1(r30)
	  b         .loc_0x170

	.loc_0xFC:
	  lhz       r0, 0x8(r31)
	  lwz       r3, 0x64(r29)
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r3, r0
	  stb       r0, 0x1(r30)
	  b         .loc_0x170

	.loc_0x114:
	  lhz       r0, 0x8(r31)
	  addi      r3, r31, 0x6
	  lwz       r4, 0x64(r29)
	  rlwinm    r0,r0,1,0,30
	  lfs       f1, 0x8(r29)
	  add       r4, r4, r0
	  bl        0x808
	  fmr       f31, f1
	  lfs       f0, -0x7944(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x14C
	  li        r0, 0
	  stb       r0, 0x1(r30)
	  b         .loc_0x170

	.loc_0x14C:
	  lfs       f0, -0x792C(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x164
	  li        r0, 0xFF
	  stb       r0, 0x1(r30)
	  b         .loc_0x170

	.loc_0x164:
	  psq_st    f31,0x10(r1),0x1,0x2
	  lbz       r0, 0x10(r1)
	  stb       r0, 0x1(r30)

	.loc_0x170:
	  lhz       r0, 0xC(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x198
	  bge-      .loc_0x1B0
	  cmpwi     r0, 0
	  bge-      .loc_0x18C
	  b         .loc_0x1B0

	.loc_0x18C:
	  li        r0, 0
	  stb       r0, 0x2(r30)
	  b         .loc_0x20C

	.loc_0x198:
	  lhz       r0, 0xE(r31)
	  lwz       r3, 0x68(r29)
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r3, r0
	  stb       r0, 0x2(r30)
	  b         .loc_0x20C

	.loc_0x1B0:
	  lhz       r0, 0xE(r31)
	  addi      r3, r31, 0xC
	  lwz       r4, 0x68(r29)
	  rlwinm    r0,r0,1,0,30
	  lfs       f1, 0x8(r29)
	  add       r4, r4, r0
	  bl        0x76C
	  fmr       f31, f1
	  lfs       f0, -0x7944(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x1E8
	  li        r0, 0
	  stb       r0, 0x2(r30)
	  b         .loc_0x20C

	.loc_0x1E8:
	  lfs       f0, -0x792C(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x200
	  li        r0, 0xFF
	  stb       r0, 0x2(r30)
	  b         .loc_0x20C

	.loc_0x200:
	  psq_st    f31,0xC(r1),0x1,0x2
	  lbz       r0, 0xC(r1)
	  stb       r0, 0x2(r30)

	.loc_0x20C:
	  lhz       r0, 0x12(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x234
	  bge-      .loc_0x24C
	  cmpwi     r0, 0
	  bge-      .loc_0x228
	  b         .loc_0x24C

	.loc_0x228:
	  li        r0, 0
	  stb       r0, 0x3(r30)
	  b         .loc_0x2A8

	.loc_0x234:
	  lhz       r0, 0x14(r31)
	  lwz       r3, 0x6C(r29)
	  rlwinm    r0,r0,1,0,30
	  lhax      r0, r3, r0
	  stb       r0, 0x3(r30)
	  b         .loc_0x2A8

	.loc_0x24C:
	  lhz       r0, 0x14(r31)
	  addi      r3, r31, 0x12
	  lwz       r4, 0x6C(r29)
	  rlwinm    r0,r0,1,0,30
	  lfs       f1, 0x8(r29)
	  add       r4, r4, r0
	  bl        0x6D0
	  fmr       f31, f1
	  lfs       f0, -0x7944(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x284
	  li        r0, 0
	  stb       r0, 0x3(r30)
	  b         .loc_0x2A8

	.loc_0x284:
	  lfs       f0, -0x792C(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x29C
	  li        r0, 0xFF
	  stb       r0, 0x3(r30)
	  b         .loc_0x2A8

	.loc_0x29C:
	  psq_st    f31,0x8(r1),0x1,0x2
	  lbz       r0, 0x8(r1)
	  stb       r0, 0x3(r30)

	.loc_0x2A8:
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00010C
 */
void J3DAnmTevRegKey::searchUpdateMaterialID(J3DMaterialTable*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800696DC
 * Size:	00010C
 */
void J3DAnmTevRegKey::searchUpdateMaterialID(J3DModelData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  li        r29, 0
	  stw       r28, 0x10(r1)
	  b         .loc_0x78

	.loc_0x2C:
	  lwz       r28, 0x64(r31)
	  mr        r4, r29
	  addi      r3, r30, 0x24
	  bl        -0x3A8F8
	  mr        r4, r3
	  mr        r3, r28
	  bl        -0x3A99C
	  cmpwi     r3, -0x1
	  beq-      .loc_0x60
	  lwz       r4, 0x20(r30)
	  rlwinm    r0,r29,1,15,30
	  sthx      r3, r4, r0
	  b         .loc_0x74

	.loc_0x60:
	  lis       r4, 0x1
	  lwz       r3, 0x20(r30)
	  subi      r4, r4, 0x1
	  rlwinm    r0,r29,1,15,30
	  sthx      r4, r3, r0

	.loc_0x74:
	  addi      r29, r29, 0x1

	.loc_0x78:
	  lhz       r0, 0xC(r30)
	  rlwinm    r3,r29,0,16,31
	  cmplw     r3, r0
	  blt+      .loc_0x2C
	  li        r29, 0
	  b         .loc_0xDC

	.loc_0x90:
	  lwz       r28, 0x64(r31)
	  mr        r4, r29
	  addi      r3, r30, 0x38
	  bl        -0x3A95C
	  mr        r4, r3
	  mr        r3, r28
	  bl        -0x3AA00
	  cmpwi     r3, -0x1
	  beq-      .loc_0xC4
	  lwz       r4, 0x34(r30)
	  rlwinm    r0,r29,1,15,30
	  sthx      r3, r4, r0
	  b         .loc_0xD8

	.loc_0xC4:
	  lis       r4, 0x1
	  lwz       r3, 0x34(r30)
	  subi      r4, r4, 0x1
	  rlwinm    r0,r29,1,15,30
	  sthx      r4, r3, r0

	.loc_0xD8:
	  addi      r29, r29, 0x1

	.loc_0xDC:
	  lhz       r0, 0xE(r30)
	  rlwinm    r3,r29,0,16,31
	  cmplw     r3, r0
	  blt+      .loc_0x90
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800697E8
 * Size:	000084
 */
void J3DAnmColorKey::~J3DAnmColorKey()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x6C
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1A20
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x5C
	  lis       r3, 0x804A
	  addic.    r0, r31, 0x1C
	  addi      r0, r3, 0x1A44
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x48
	  lis       r3, 0x804A
	  addi      r0, r3, 0x4E0
	  stw       r0, 0x1C(r31)

	.loc_0x48:
	  cmplwi    r31, 0
	  beq-      .loc_0x5C
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1A34
	  stw       r0, 0x0(r31)

	.loc_0x5C:
	  extsh.    r0, r4
	  ble-      .loc_0x6C
	  mr        r3, r31
	  bl        -0x4579C

	.loc_0x6C:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006986C
 * Size:	000008
 */
void J3DAnmColorKey::getKind() const
{
	/*
	.loc_0x0:
	  li        r3, 0xB
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80069874
 * Size:	000048
 */
void J3DAnmBase::~J3DAnmBase()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x30
	  lis       r5, 0x804A
	  extsh.    r0, r4
	  addi      r0, r5, 0x1A34
	  stw       r0, 0x0(r31)
	  ble-      .loc_0x30
	  bl        -0x457EC

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800698BC
 * Size:	000074
 */
void J3DAnmColor::~J3DAnmColor()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x5C
	  lis       r3, 0x804A
	  addic.    r0, r31, 0x1C
	  addi      r0, r3, 0x1A44
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x38
	  lis       r3, 0x804A
	  addi      r0, r3, 0x4E0
	  stw       r0, 0x1C(r31)

	.loc_0x38:
	  cmplwi    r31, 0
	  beq-      .loc_0x4C
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1A34
	  stw       r0, 0x0(r31)

	.loc_0x4C:
	  extsh.    r0, r4
	  ble-      .loc_0x5C
	  mr        r3, r31
	  bl        -0x45860

	.loc_0x5C:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80069930
 * Size:	000008
 */
void J3DAnmColor::getKind() const
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80069938
 * Size:	000004
 */
void J3DAnmColor::getColor(unsigned short, _GXColor*) const
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006993C
 * Size:	000084
 */
void J3DAnmColorFull::~J3DAnmColorFull()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x6C
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1A58
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x5C
	  lis       r3, 0x804A
	  addic.    r0, r31, 0x1C
	  addi      r0, r3, 0x1A44
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x48
	  lis       r3, 0x804A
	  addi      r0, r3, 0x4E0
	  stw       r0, 0x1C(r31)

	.loc_0x48:
	  cmplwi    r31, 0
	  beq-      .loc_0x5C
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1A34
	  stw       r0, 0x0(r31)

	.loc_0x5C:
	  extsh.    r0, r4
	  ble-      .loc_0x6C
	  mr        r3, r31
	  bl        -0x458F0

	.loc_0x6C:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800699C0
 * Size:	000008
 */
void J3DAnmColorFull::getKind() const
{
	/*
	.loc_0x0:
	  li        r3, 0xA
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800699C8
 * Size:	00006C
 */
void J3DAnmVtxColorKey::~J3DAnmVtxColorKey()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x54
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1A6C
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1A80
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1A34
	  stw       r0, 0x0(r31)

	.loc_0x44:
	  extsh.    r0, r4
	  ble-      .loc_0x54
	  mr        r3, r31
	  bl        -0x45964

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80069A34
 * Size:	000008
 */
void J3DAnmVtxColorKey::getKind() const
{
	/*
	.loc_0x0:
	  li        r3, 0xF
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80069A3C
 * Size:	00005C
 */
void J3DAnmVtxColor::~J3DAnmVtxColor()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1A80
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1A34
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x459C8

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80069A98
 * Size:	000008
 */
void J3DAnmVtxColor::getKind() const
{
	/*
	.loc_0x0:
	  li        r3, 0x7
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80069AA0
 * Size:	000004
 */
void J3DAnmVtxColor::getColor(unsigned char, unsigned short, _GXColor*) const
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80069AA4
 * Size:	00006C
 */
void J3DAnmVtxColorFull::~J3DAnmVtxColorFull()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x54
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1A94
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1A80
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1A34
	  stw       r0, 0x0(r31)

	.loc_0x44:
	  extsh.    r0, r4
	  ble-      .loc_0x54
	  mr        r3, r31
	  bl        -0x45A40

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80069B10
 * Size:	000008
 */
void J3DAnmVtxColorFull::getKind() const
{
	/*
	.loc_0x0:
	  li        r3, 0xE
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80069B18
 * Size:	00006C
 */
void J3DAnmClusterKey::~J3DAnmClusterKey()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x54
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1AA8
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1ABC
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1A34
	  stw       r0, 0x0(r31)

	.loc_0x44:
	  extsh.    r0, r4
	  ble-      .loc_0x54
	  mr        r3, r31
	  bl        -0x45AB4

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80069B84
 * Size:	000008
 */
void J3DAnmClusterKey::getKind() const
{
	/*
	.loc_0x0:
	  li        r3, 0xD
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80069B8C
 * Size:	00005C
 */
void J3DAnmCluster::~J3DAnmCluster()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1ABC
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1A34
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x45B18

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80069BE8
 * Size:	000008
 */
void J3DAnmCluster::getKind() const
{
	/*
	.loc_0x0:
	  li        r3, 0x3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80069BF0
 * Size:	000008
 */
void J3DAnmCluster::getWeight(unsigned short) const
{
	/*
	.loc_0x0:
	  lfs       f1, -0x7948(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80069BF8
 * Size:	00006C
 */
void J3DAnmClusterFull::~J3DAnmClusterFull()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x54
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1AD0
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1ABC
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1A34
	  stw       r0, 0x0(r31)

	.loc_0x44:
	  extsh.    r0, r4
	  ble-      .loc_0x54
	  mr        r3, r31
	  bl        -0x45B94

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80069C64
 * Size:	000008
 */
void J3DAnmClusterFull::getKind() const
{
	/*
	.loc_0x0:
	  li        r3, 0xC
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80069C6C
 * Size:	00006C
 */
void J3DAnmTransformFull::~J3DAnmTransformFull()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x54
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1AE4
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1AF8
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1A34
	  stw       r0, 0x0(r31)

	.loc_0x44:
	  extsh.    r0, r4
	  ble-      .loc_0x54
	  mr        r3, r31
	  bl        -0x45C08

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80069CD8
 * Size:	000008
 */
void J3DAnmTransformFull::getKind() const
{
	/*
	.loc_0x0:
	  li        r3, 0x9
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80069CE0
 * Size:	00005C
 */
void J3DAnmTransform::~J3DAnmTransform()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1AF8
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1A34
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x45C6C

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80069D3C
 * Size:	000008
 */
void J3DAnmTransform::getKind() const
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80069D44
 * Size:	000234
 */
void J3DGetKeyFrameInterpolation<short>(float, J3DAnmKeyTableBase*, short*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  lis       r5, 0x4330
	  lfd       f2, -0x7938(r2)
	  lha       r0, 0x0(r4)
	  stw       r5, 0x8(r1)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f2
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x48
	  lha       r0, 0x2(r4)
	  stw       r5, 0x8(r1)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f1, f0, f2
	  b         .loc_0x22C

	.loc_0x48:
	  lhz       r0, 0x4(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x144
	  lhz       r6, 0x0(r3)
	  stw       r5, 0x8(r1)
	  subi      r0, r6, 0x1
	  mulli     r3, r0, 0x6
	  lhax      r0, r4, r3
	  xoris     r0, r0, 0x8000
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f2
	  fcmpo     cr0, f0, f1
	  cror      2, 0, 0x2
	  bne-      .loc_0xE8
	  add       r3, r4, r3
	  stw       r5, 0x8(r1)
	  lha       r0, 0x2(r3)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f1, f0, f2
	  b         .loc_0x22C
	  b         .loc_0xE8

	.loc_0xA8:
	  rlwinm    r7,r6,31,1,31
	  stw       r5, 0x8(r1)
	  mulli     r0, r7, 0x3
	  rlwinm    r3,r0,1,0,30
	  lhax      r0, r4, r3
	  xoris     r0, r0, 0x8000
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f2
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xE4
	  add       r4, r4, r3
	  sub       r6, r6, r7
	  b         .loc_0xE8

	.loc_0xE4:
	  mr        r6, r7

	.loc_0xE8:
	  cmplwi    r6, 0x1
	  bgt+      .loc_0xA8
	  psq_l     f2,0x0(r4),0x1,0x5
	  psq_l     f0,0x6(r4),0x1,0x5
	  psq_l     f7,0x2(r4),0x1,0x5
	  fsubs     f5, f0, f2
	  psq_l     f6,0x8(r4),0x1,0x5
	  fsubs     f3, f1, f2
	  psq_l     f0,0xA(r4),0x1,0x5
	  fsubs     f4, f6, f7
	  fdivs     f3, f3, f5
	  psq_l     f1,0x4(r4),0x1,0x5
	  fmadds    f0, f0, f5, f7
	  fnmsubs   f4, f5, f1, f4
	  fmuls     f2, f3, f3
	  fsubs     f0, f0, f6
	  fsubs     f0, f0, f4
	  fmuls     f0, f2, f0
	  fmadds    f1, f5, f1, f0
	  fmadds    f1, f1, f3, f7
	  fmadds    f1, f4, f2, f1
	  fsubs     f1, f1, f0
	  b         .loc_0x22C

	.loc_0x144:
	  lhz       r6, 0x0(r3)
	  stw       r5, 0x8(r1)
	  subi      r0, r6, 0x1
	  rlwinm    r3,r0,3,0,28
	  lhax      r0, r4, r3
	  xoris     r0, r0, 0x8000
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f2
	  fcmpo     cr0, f0, f1
	  cror      2, 0, 0x2
	  bne-      .loc_0x1D4
	  add       r3, r4, r3
	  stw       r5, 0x8(r1)
	  lha       r0, 0x2(r3)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f1, f0, f2
	  b         .loc_0x22C
	  b         .loc_0x1D4

	.loc_0x198:
	  rlwinm    r3,r6,2,0,28
	  stw       r5, 0x8(r1)
	  lhax      r0, r4, r3
	  rlwinm    r7,r6,31,1,31
	  xoris     r0, r0, 0x8000
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f2
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1D0
	  add       r4, r4, r3
	  sub       r6, r6, r7
	  b         .loc_0x1D4

	.loc_0x1D0:
	  mr        r6, r7

	.loc_0x1D4:
	  cmplwi    r6, 0x1
	  bgt+      .loc_0x198
	  psq_l     f2,0x0(r4),0x1,0x5
	  psq_l     f0,0x8(r4),0x1,0x5
	  psq_l     f7,0x2(r4),0x1,0x5
	  fsubs     f5, f0, f2
	  psq_l     f6,0xA(r4),0x1,0x5
	  fsubs     f3, f1, f2
	  psq_l     f0,0xC(r4),0x1,0x5
	  fsubs     f4, f6, f7
	  fdivs     f3, f3, f5
	  psq_l     f1,0x6(r4),0x1,0x5
	  fmadds    f0, f0, f5, f7
	  fnmsubs   f4, f5, f1, f4
	  fmuls     f2, f3, f3
	  fsubs     f0, f0, f6
	  fsubs     f0, f0, f4
	  fmuls     f0, f2, f0
	  fmadds    f1, f5, f1, f0
	  fmadds    f1, f1, f3, f7
	  fmadds    f1, f4, f2, f1
	  fsubs     f1, f1, f0

	.loc_0x22C:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80069F78
 * Size:	00017C
 */
void J3DGetKeyFrameInterpolation<float>(float, J3DAnmKeyTableBase*, float*)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x0(r4)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x14
	  lfs       f1, 0x4(r4)
	  blr

	.loc_0x14:
	  lhz       r0, 0x4(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0xD0
	  lhz       r3, 0x0(r3)
	  subi      r0, r3, 0x1
	  mulli     r0, r0, 0xC
	  lfsx      f0, r4, r0
	  fcmpo     cr0, f0, f1
	  cror      2, 0, 0x2
	  bne-      .loc_0x78
	  add       r3, r4, r0
	  lfs       f1, 0x4(r3)
	  blr
	  b         .loc_0x78

	.loc_0x4C:
	  rlwinm    r5,r3,31,1,31
	  mulli     r0, r5, 0x3
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r4, r0
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x74
	  add       r4, r4, r0
	  sub       r3, r3, r5
	  b         .loc_0x78

	.loc_0x74:
	  mr        r3, r5

	.loc_0x78:
	  cmplwi    r3, 0x1
	  bgt+      .loc_0x4C
	  lfs       f0, 0x0(r4)
	  lfs       f2, 0xC(r4)
	  fsubs     f5, f1, f0
	  lfs       f6, 0x4(r4)
	  fsubs     f4, f2, f0
	  lfs       f2, 0x10(r4)
	  lfs       f7, 0x8(r4)
	  lfs       f8, 0x14(r4)
	  fdivs     f3, f5, f4
	  fmuls     f0, f3, f3
	  fsubs     f4, f6, f2
	  fadds     f1, f3, f3
	  fsubs     f2, f0, f3
	  fmsubs    f0, f1, f2, f0
	  fmadds    f1, f7, f2, f7
	  fmadds    f0, f0, f4, f6
	  fmadds    f1, f8, f2, f1
	  fmsubs    f1, f3, f7, f1
	  fnmsubs   f1, f5, f1, f0
	  blr

	.loc_0xD0:
	  lhz       r3, 0x0(r3)
	  subi      r0, r3, 0x1
	  rlwinm    r0,r0,4,0,27
	  lfsx      f0, r4, r0
	  fcmpo     cr0, f0, f1
	  cror      2, 0, 0x2
	  bne-      .loc_0x124
	  add       r3, r4, r0
	  lfs       f1, 0x4(r3)
	  blr
	  b         .loc_0x124

	.loc_0xFC:
	  rlwinm    r0,r3,3,0,27
	  rlwinm    r5,r3,31,1,31
	  lfsx      f0, r4, r0
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x120
	  add       r4, r4, r0
	  sub       r3, r3, r5
	  b         .loc_0x124

	.loc_0x120:
	  mr        r3, r5

	.loc_0x124:
	  cmplwi    r3, 0x1
	  bgt+      .loc_0xFC
	  lfs       f0, 0x0(r4)
	  lfs       f2, 0x10(r4)
	  fsubs     f5, f1, f0
	  lfs       f6, 0x4(r4)
	  fsubs     f4, f2, f0
	  lfs       f2, 0x14(r4)
	  lfs       f7, 0xC(r4)
	  lfs       f8, 0x18(r4)
	  fdivs     f3, f5, f4
	  fmuls     f0, f3, f3
	  fsubs     f4, f6, f2
	  fadds     f1, f3, f3
	  fsubs     f2, f0, f3
	  fmsubs    f0, f1, f2, f0
	  fmadds    f1, f7, f2, f7
	  fmadds    f0, f0, f4, f6
	  fmadds    f1, f8, f2, f1
	  fmsubs    f1, f3, f7, f1
	  fnmsubs   f1, f5, f1, f0
	  blr
	*/
}
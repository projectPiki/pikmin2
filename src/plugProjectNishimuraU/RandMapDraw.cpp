

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80245418
 * Size:	000008
 */
void Game::Cave::RandMapDraw::__ct((Game::Cave::MapUnitGenerator*))
{
	/*
	.loc_0x0:
	  stw       r4, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80245420
 * Size:	0001CC
 */
void radarMapPartsOpen__Q34Game4Cave11RandMapDrawFR10Vector3<float>(void)
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
	  stmw      r24, 0x10(r1)
	  lfs       f2, 0x0(r4)
	  lis       r27, 0x4330
	  lfs       f1, -0x3C10(r2)
	  lfs       f0, 0x8(r4)
	  fdivs     f30, f2, f1
	  lwz       r3, 0x0(r3)
	  lfd       f31, -0x3C08(r2)
	  lwz       r31, 0x28(r3)
	  lwz       r30, 0x2C(r3)
	  lwz       r29, 0x10(r31)
	  fdivs     f29, f0, f1
	  b         .loc_0x198

	.loc_0x58:
	  mr        r3, r29
	  bl        -0x1AE0
	  xoris     r0, r3, 0x8000
	  stw       r27, 0x8(r1)
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f31
	  fcmpo     cr0, f30, f0
	  ble-      .loc_0x194
	  mr        r3, r29
	  bl        -0x1AFC
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f1, -0x3C08(r2)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f29, f0
	  ble-      .loc_0x194
	  lwz       r3, 0x18(r29)
	  bl        -0x2948
	  mr        r28, r3
	  mr        r3, r29
	  bl        -0x1B3C
	  add       r3, r3, r28
	  lis       r0, 0x4330
	  xoris     r3, r3, 0x8000
	  stw       r0, 0x8(r1)
	  lfd       f1, -0x3C08(r2)
	  stw       r3, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f30, f0
	  bge-      .loc_0x194
	  lwz       r3, 0x18(r29)
	  bl        -0x297C
	  mr        r28, r3
	  mr        r3, r29
	  bl        -0x1B70
	  add       r3, r3, r28
	  lis       r0, 0x4330
	  xoris     r3, r3, 0x8000
	  stw       r0, 0x8(r1)
	  lfd       f1, -0x3C08(r2)
	  stw       r3, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f29, f0
	  bge-      .loc_0x194
	  mr        r3, r29
	  bl        0x1CC08C
	  mr        r3, r30
	  mr        r4, r29
	  bl        0x1CBEB8
	  mr        r3, r29
	  bl        -0x14F8
	  mr        r28, r3
	  li        r25, 0
	  li        r26, 0
	  b         .loc_0x18C

	.loc_0x14C:
	  lwz       r3, 0x28(r29)
	  lwzx      r24, r3, r26
	  lwz       r0, 0xC(r24)
	  cmplw     r31, r0
	  bne-      .loc_0x184
	  lwz       r3, 0x18(r24)
	  bl        -0x2A0C
	  cmpwi     r3, 0
	  bne-      .loc_0x184
	  mr        r3, r24
	  bl        0x1CC03C
	  mr        r3, r30
	  mr        r4, r24
	  bl        0x1CBE68

	.loc_0x184:
	  addi      r26, r26, 0xC
	  addi      r25, r25, 0x1

	.loc_0x18C:
	  cmpw      r25, r28
	  blt+      .loc_0x14C

	.loc_0x194:
	  lwz       r29, 0x4(r29)

	.loc_0x198:
	  cmplwi    r29, 0
	  bne+      .loc_0x58
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  psq_l     f30,0x48(r1),0,0
	  lfd       f30, 0x40(r1)
	  psq_l     f29,0x38(r1),0,0
	  lfd       f29, 0x30(r1)
	  lmw       r24, 0x10(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802455EC
 * Size:	000078
 */
void Game::Cave::RandMapDraw::draw((Graphics&, float, float, float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x28(r1)
	  fmr       f31, f3
	  stfd      f30, 0x20(r1)
	  fmr       f30, f2
	  stfd      f29, 0x18(r1)
	  fmr       f29, f1
	  stw       r31, 0x14(r1)
	  lwz       r3, 0x0(r3)
	  lwz       r3, 0x2C(r3)
	  lwz       r31, 0x10(r3)
	  b         .loc_0x50

	.loc_0x38:
	  fmr       f1, f29
	  mr        r3, r31
	  fmr       f2, f30
	  fmr       f3, f31
	  bl        -0x1DA8
	  lwz       r31, 0x4(r31)

	.loc_0x50:
	  cmplwi    r31, 0
	  bne+      .loc_0x38
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x28(r1)
	  lfd       f30, 0x20(r1)
	  lfd       f29, 0x18(r1)
	  lwz       r31, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

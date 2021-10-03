

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void _Print(char *, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void Game::WaterBox::__ct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B8
 */
void Game::AABBWaterBox::__ct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801AE448
 * Size:	000028
 */
void Game::AABBWaterBox::startDown( (float))
{
/*
.loc_0x0:
  lhz       r0, 0x8(r3)
  cmplwi    r0, 0
  bnelr-    
  stfs      f1, 0x10(r3)
  li        r0, 0x1
  lfs       f0, -0x5038(r2)
  stfs      f0, 0x14(r3)
  sth       r0, 0x8(r3)
  stfs      f0, 0x38(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	801AE470
 * Size:	000038
 */
void Game::AABBWaterBox::startUp( (float))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r3, 0x8048
  lis       r5, 0x8048
  stw       r0, 0x14(r1)
  subi      r3, r3, 0x69C
  li        r4, 0xA7
  subi      r5, r5, 0x68C
  crclr     6, 0x6
  bl        -0x183E54
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801AE4A8
 * Size:	0000B8
 */
void Game::AABBWaterBox::update(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r4, r3
  stw       r0, 0x14(r1)
  lhz       r0, 0x8(r3)
  cmpwi     r0, 0x1
  beq-      .loc_0x20
  b         .loc_0x94

.loc_0x20:
  lwz       r3, -0x6514(r13)
  lfs       f3, 0x38(r4)
  lfs       f1, 0x54(r3)
  lfs       f0, 0xC(r4)
  lfs       f2, -0x5034(r2)
  fnmsubs   f0, f3, f1, f0
  stfs      f0, 0xC(r4)
  lwz       r3, -0x6514(r13)
  lfs       f0, 0x38(r4)
  lfs       f1, 0x54(r3)
  fmadds    f0, f2, f1, f0
  stfs      f0, 0x38(r4)
  lfs       f1, 0x30(r4)
  lfs       f0, 0xC(r4)
  fadds     f0, f1, f0
  stfs      f0, 0x34(r4)
  lfs       f0, 0xC(r4)
  lfs       f1, 0x10(r4)
  fcmpo     cr0, f0, f1
  cror      2, 0, 0x2
  bne-      .loc_0x94
  stfs      f1, 0xC(r4)
  li        r0, 0x3
  sth       r0, 0x8(r4)
  lwz       r3, -0x6CF8(r13)
  lwz       r3, 0x10(r3)
  bl        0x1DB0
  li        r3, 0x1
  b         .loc_0xA8

.loc_0x94:
  lfs       f1, 0x30(r4)
  li        r3, 0
  lfs       f0, 0xC(r4)
  fadds     f0, f1, f0
  stfs      f0, 0x34(r4)

.loc_0xA8:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801AE560
 * Size:	0001B0
 */
void Game::AABBWaterBox::attachModel( (J3DModelData *, Sys::MatTexAnimation *, float))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r31, r3
  li        r0, -0x1
  sth       r0, 0x64(r3)
  li        r0, 0
  fmr       f31, f1
  mr        r30, r4
  stw       r0, 0x60(r3)
  mr        r29, r5
  li        r3, 0x14
  bl        -0x18A700
  mr.       r0, r3
  beq-      .loc_0x64
  mr        r4, r30
  li        r5, 0
  li        r6, 0x2
  bl        0x28FC1C
  mr        r0, r3

.loc_0x64:
  stw       r0, 0x50(r31)
  li        r0, 0x1
  lfs       f2, -0x5030(r2)
  addi      r3, r31, 0x54
  lwz       r5, 0x50(r31)
  mr        r4, r29
  stb       r0, 0x4(r5)
  lfs       f1, 0x24(r31)
  lfs       f0, 0x18(r31)
  fsubs     f0, f1, f0
  fabs      f0, f0
  frsp      f0, f0
  fdivs     f0, f0, f31
  stfs      f0, 0x3C(r31)
  lfs       f1, 0x2C(r31)
  lfs       f0, 0x20(r31)
  fsubs     f0, f1, f0
  fabs      f0, f0
  frsp      f0, f0
  fdivs     f0, f0, f31
  stfs      f0, 0x40(r31)
  lfs       f1, 0x18(r31)
  lfs       f0, 0x24(r31)
  fadds     f0, f1, f0
  fmuls     f0, f2, f0
  stfs      f0, 0x44(r31)
  lfs       f1, 0x20(r31)
  lfs       f0, 0x2C(r31)
  fadds     f0, f1, f0
  fmuls     f0, f2, f0
  stfs      f0, 0x4C(r31)
  lfs       f1, 0x30(r31)
  lfs       f0, 0xC(r31)
  fadds     f0, f1, f0
  stfs      f0, 0x48(r31)
  lwz       r12, 0x54(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x44(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0x30(r31)
  lis       r3, 0x8048
  lfs       f0, 0xC(r31)
  subi      r30, r3, 0x678
  li        r29, 0
  fadds     f0, f1, f0
  stfs      f0, 0x34(r31)
  b         .loc_0x16C

.loc_0x134:
  lwz       r3, 0x70(r5)
  mr        r4, r29
  bl        -0x17F880
  mr        r4, r30
  bl        -0xE3FE4
  cmpwi     r3, 0
  bne-      .loc_0x168
  lwz       r3, 0x50(r31)
  lwz       r3, 0x8(r3)
  lwz       r3, 0x4(r3)
  lwz       r0, 0x6C(r3)
  stw       r0, 0x60(r31)
  sth       r29, 0x64(r31)

.loc_0x168:
  addi      r29, r29, 0x1

.loc_0x16C:
  lwz       r3, 0x50(r31)
  rlwinm    r4,r29,0,16,31
  lwz       r3, 0x8(r3)
  lwz       r5, 0x4(r3)
  lwz       r3, 0x6C(r5)
  lhz       r0, 0x0(r3)
  cmplw     r4, r0
  blt+      .loc_0x134
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	801AE710
 * Size:	0000A0
 */
void Game::AABBWaterBox::calcMatrix(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stw       r31, 0x4C(r1)
  mr        r31, r3
  lwz       r0, 0x50(r3)
  cmplwi    r0, 0
  beq-      .loc_0x8C
  lfs       f2, 0x30(r31)
  lis       r3, 0x8051
  lfs       f1, 0xC(r31)
  addi      r5, r3, 0x41E4
  lfs       f0, -0x502C(r2)
  addi      r3, r1, 0x14
  fadds     f1, f2, f1
  addi      r4, r1, 0x8
  addi      r6, r31, 0x44
  stfs      f1, 0x48(r31)
  lfs       f2, 0x40(r31)
  lfs       f1, 0x3C(r31)
  stfs      f1, 0x8(r1)
  stfs      f0, 0xC(r1)
  stfs      f2, 0x10(r1)
  bl        0x279B6C
  lwz       r4, 0x50(r31)
  addi      r3, r1, 0x14
  lwz       r4, 0x8(r4)
  addi      r4, r4, 0x24
  bl        -0xC44B4
  lwz       r3, 0x50(r31)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     

.loc_0x8C:
  lwz       r0, 0x54(r1)
  lwz       r31, 0x4C(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	801AE7B0
 * Size:	000048
 */
void Game::AABBWaterBox::doAnimation(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f1, -0x5028(r2)
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  addi      r3, r31, 0x54
  bl        0x285D80
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x44(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801AE7F8
 * Size:	000030
 */
void Game::AABBWaterBox::doSetView( (int))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x50(r3)
  cmplwi    r3, 0
  beq-      .loc_0x20
  rlwinm    r4,r4,0,16,31
  bl        0x2908AC

.loc_0x20:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801AE828
 * Size:	00002C
 */
void Game::AABBWaterBox::doViewCalc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x50(r3)
  cmplwi    r3, 0
  beq-      .loc_0x1C
  bl        0x290818

.loc_0x1C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801AE854
 * Size:	000538
 */
void Game::AABBWaterBox::doEntry(void)
{
/*
.loc_0x0:
  stwu      r1, -0x80(r1)
  mflr      r0
  stw       r0, 0x84(r1)
  stw       r31, 0x7C(r1)
  mr        r31, r3
  stw       r30, 0x78(r1)
  lwz       r4, -0x6C18(r13)
  cmplwi    r4, 0
  beq-      .loc_0xC0
  lwz       r3, 0x44(r4)
  cmpwi     r3, 0
  beq-      .loc_0xC0
  cmpwi     r3, 0x4
  beq-      .loc_0xC0
  cmpwi     r3, 0x2
  li        r0, 0
  beq-      .loc_0x4C
  cmpwi     r3, 0x3
  bne-      .loc_0x50

.loc_0x4C:
  li        r0, 0x1

.loc_0x50:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0x78
  cmpwi     r3, 0x1
  li        r0, 0
  beq-      .loc_0x6C
  cmpwi     r3, 0x3
  bne-      .loc_0x70

.loc_0x6C:
  li        r0, 0x1

.loc_0x70:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0xC0

.loc_0x78:
  cmplwi    r4, 0
  beq-      .loc_0x520
  mr        r3, r4
  li        r4, 0x4
  bl        0x6764
  lwz       r3, 0x50(r31)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x50(r31)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x520

.loc_0xC0:
  lwz       r0, 0x44(r4)
  cmpwi     r0, 0
  bne-      .loc_0x2CC
  lwz       r30, 0x58(r4)
  lwz       r0, 0xE4(r30)
  cmpwi     r0, 0x2
  bne-      .loc_0x2CC
  cmplwi    r4, 0
  beq-      .loc_0x520
  mr        r3, r4
  li        r4, 0x4
  bl        0x6700
  addi      r3, r1, 0x48
  bl        -0xC46A8
  lwz       r3, 0x50(r31)
  li        r4, 0x3
  lwz       r3, 0x8(r3)
  lwz       r3, 0x4(r3)
  lwz       r3, 0x60(r3)
  lwz       r3, 0x0(r3)
  lwz       r3, 0x28(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x50(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x48(r1)
  lfs       f1, -0x5038(r2)
  stfs      f0, 0x24(r3)
  lfs       f0, -0x502C(r2)
  lfs       f2, 0x4C(r1)
  stfs      f2, 0x28(r3)
  lfs       f2, 0x50(r1)
  stfs      f2, 0x2C(r3)
  lfs       f2, 0x54(r1)
  stfs      f2, 0x30(r3)
  lfs       f2, 0x58(r1)
  stfs      f2, 0x34(r3)
  lfs       f2, 0x5C(r1)
  stfs      f2, 0x38(r3)
  lfs       f2, 0x60(r1)
  stfs      f2, 0x3C(r3)
  lfs       f2, 0x64(r1)
  stfs      f2, 0x40(r3)
  lfs       f2, 0x68(r1)
  stfs      f2, 0x44(r3)
  lfs       f2, 0x6C(r1)
  stfs      f2, 0x48(r3)
  lfs       f2, 0x70(r1)
  stfs      f2, 0x4C(r3)
  lfs       f2, 0x74(r1)
  stfs      f2, 0x50(r3)
  stfs      f1, 0x5C(r3)
  stfs      f1, 0x58(r3)
  stfs      f1, 0x54(r3)
  stfs      f0, 0x60(r3)
  lwz       r4, 0xF4(r30)
  lwz       r3, 0x60(r31)
  lha       r0, 0x64(r31)
  lwz       r4, 0x20(r4)
  lwz       r6, 0x4(r3)
  rlwinm    r0,r0,5,11,26
  lbz       r5, 0x0(r4)
  add       r6, r6, r0
  stb       r5, 0x0(r6)
  lbz       r5, 0x1(r4)
  stb       r5, 0x1(r6)
  lhz       r5, 0x2(r4)
  sth       r5, 0x2(r6)
  lhz       r5, 0x4(r4)
  sth       r5, 0x4(r6)
  lbz       r5, 0x6(r4)
  stb       r5, 0x6(r6)
  lbz       r5, 0x7(r4)
  stb       r5, 0x7(r6)
  lbz       r5, 0x8(r4)
  stb       r5, 0x8(r6)
  lbz       r5, 0x9(r4)
  stb       r5, 0x9(r6)
  lhz       r5, 0xA(r4)
  sth       r5, 0xA(r6)
  lwz       r5, 0xC(r4)
  stw       r5, 0xC(r6)
  lbz       r5, 0x10(r4)
  stb       r5, 0x10(r6)
  lbz       r5, 0x11(r4)
  stb       r5, 0x11(r6)
  lbz       r5, 0x12(r4)
  stb       r5, 0x12(r6)
  lbz       r5, 0x13(r4)
  stb       r5, 0x13(r6)
  lbz       r5, 0x14(r4)
  stb       r5, 0x14(r6)
  lbz       r5, 0x15(r4)
  stb       r5, 0x15(r6)
  lbz       r5, 0x16(r4)
  stb       r5, 0x16(r6)
  lbz       r5, 0x17(r4)
  stb       r5, 0x17(r6)
  lbz       r5, 0x18(r4)
  stb       r5, 0x18(r6)
  lbz       r5, 0x19(r4)
  stb       r5, 0x19(r6)
  lha       r5, 0x1A(r4)
  sth       r5, 0x1A(r6)
  lwz       r5, 0x1C(r4)
  stw       r5, 0x1C(r6)
  lwz       r5, 0x4(r3)
  add       r6, r5, r0
  lwz       r5, 0x1C(r6)
  add       r5, r4, r5
  sub       r5, r5, r6
  stw       r5, 0x1C(r6)
  lwz       r3, 0x4(r3)
  add       r3, r3, r0
  lwz       r0, 0xC(r3)
  add       r0, r4, r0
  sub       r0, r0, r3
  stw       r0, 0xC(r3)
  lwz       r3, 0x50(r31)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x50(r31)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x520

.loc_0x2CC:
  lwz       r3, -0x6514(r13)
  addi      r4, r1, 0x8
  lwz       r3, 0x24(r3)
  lwz       r3, 0x25C(r3)
  lwz       r3, 0x44(r3)
  addi      r3, r3, 0xB4
  bl        -0xC3CC8
  lfs       f5, 0x38(r1)
  lfs       f4, 0x3C(r1)
  lfs       f1, -0x5038(r2)
  lfs       f3, 0x40(r1)
  lfs       f2, 0x44(r1)
  lfs       f0, -0x502C(r2)
  stfs      f5, 0x28(r1)
  stfs      f4, 0x2C(r1)
  stfs      f3, 0x30(r1)
  stfs      f2, 0x34(r1)
  stfs      f1, 0x38(r1)
  stfs      f1, 0x3C(r1)
  stfs      f1, 0x40(r1)
  stfs      f0, 0x44(r1)
  lwz       r0, 0x50(r31)
  cmplwi    r0, 0
  beq-      .loc_0x520
  lwz       r3, -0x6C18(r13)
  cmplwi    r3, 0
  beq-      .loc_0x508
  li        r4, 0x4
  bl        0x64B0
  lwz       r3, 0x50(r31)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x60(r31)
  cmplwi    r0, 0
  beq-      .loc_0x508
  lwz       r3, 0x50(r31)
  li        r4, 0x3
  lwz       r3, 0x8(r3)
  lwz       r3, 0x4(r3)
  lwz       r3, 0x60(r3)
  lwz       r3, 0x0(r3)
  lwz       r3, 0x28(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x50(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x8(r1)
  lfs       f1, -0x5038(r2)
  stfs      f0, 0x24(r3)
  lfs       f0, -0x502C(r2)
  lfs       f2, 0xC(r1)
  stfs      f2, 0x28(r3)
  lfs       f2, 0x10(r1)
  stfs      f2, 0x2C(r3)
  lfs       f2, 0x14(r1)
  stfs      f2, 0x30(r3)
  lfs       f2, 0x18(r1)
  stfs      f2, 0x34(r3)
  lfs       f2, 0x1C(r1)
  stfs      f2, 0x38(r3)
  lfs       f2, 0x20(r1)
  stfs      f2, 0x3C(r3)
  lfs       f2, 0x24(r1)
  stfs      f2, 0x40(r3)
  lfs       f2, 0x28(r1)
  stfs      f2, 0x44(r3)
  lfs       f2, 0x2C(r1)
  stfs      f2, 0x48(r3)
  lfs       f2, 0x30(r1)
  stfs      f2, 0x4C(r3)
  lfs       f2, 0x34(r1)
  stfs      f2, 0x50(r3)
  stfs      f1, 0x5C(r3)
  stfs      f1, 0x58(r3)
  stfs      f1, 0x54(r3)
  stfs      f0, 0x60(r3)
  lwz       r3, -0x6C18(r13)
  lha       r0, 0x64(r31)
  lwz       r4, 0x54(r3)
  lwz       r3, 0x60(r31)
  rlwinm    r0,r0,5,11,26
  lwz       r4, 0x20(r4)
  lwz       r6, 0x4(r3)
  lbz       r5, 0x0(r4)
  add       r6, r6, r0
  stb       r5, 0x0(r6)
  lbz       r5, 0x1(r4)
  stb       r5, 0x1(r6)
  lhz       r5, 0x2(r4)
  sth       r5, 0x2(r6)
  lhz       r5, 0x4(r4)
  sth       r5, 0x4(r6)
  lbz       r5, 0x6(r4)
  stb       r5, 0x6(r6)
  lbz       r5, 0x7(r4)
  stb       r5, 0x7(r6)
  lbz       r5, 0x8(r4)
  stb       r5, 0x8(r6)
  lbz       r5, 0x9(r4)
  stb       r5, 0x9(r6)
  lhz       r5, 0xA(r4)
  sth       r5, 0xA(r6)
  lwz       r5, 0xC(r4)
  stw       r5, 0xC(r6)
  lbz       r5, 0x10(r4)
  stb       r5, 0x10(r6)
  lbz       r5, 0x11(r4)
  stb       r5, 0x11(r6)
  lbz       r5, 0x12(r4)
  stb       r5, 0x12(r6)
  lbz       r5, 0x13(r4)
  stb       r5, 0x13(r6)
  lbz       r5, 0x14(r4)
  stb       r5, 0x14(r6)
  lbz       r5, 0x15(r4)
  stb       r5, 0x15(r6)
  lbz       r5, 0x16(r4)
  stb       r5, 0x16(r6)
  lbz       r5, 0x17(r4)
  stb       r5, 0x17(r6)
  lbz       r5, 0x18(r4)
  stb       r5, 0x18(r6)
  lbz       r5, 0x19(r4)
  stb       r5, 0x19(r6)
  lha       r5, 0x1A(r4)
  sth       r5, 0x1A(r6)
  lwz       r5, 0x1C(r4)
  stw       r5, 0x1C(r6)
  lwz       r5, 0x4(r3)
  add       r6, r5, r0
  lwz       r5, 0x1C(r6)
  add       r5, r4, r5
  sub       r5, r5, r6
  stw       r5, 0x1C(r6)
  lwz       r3, 0x4(r3)
  add       r3, r3, r0
  lwz       r0, 0xC(r3)
  add       r0, r4, r0
  sub       r0, r0, r3
  stw       r0, 0xC(r3)

.loc_0x508:
  lwz       r3, 0x50(r31)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     

.loc_0x520:
  lwz       r0, 0x84(r1)
  lwz       r31, 0x7C(r1)
  lwz       r30, 0x78(r1)
  mtlr      r0
  addi      r1, r1, 0x80
  blr
*/
}

/*
 * --INFO--
 * Address:	801AED8C
 * Size:	000210
 */
void Game::SeaMgr::update(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x804B
  stw       r0, 0x24(r1)
  li        r0, 0
  addi      r4, r4, 0x19D4
  stw       r31, 0x1C(r1)
  cmplwi    r0, 0
  li        r31, 0
  stw       r0, 0x14(r1)
  stw       r4, 0x8(r1)
  stw       r0, 0xC(r1)
  stw       r3, 0x10(r1)
  bne-      .loc_0x50
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1C8

.loc_0x50:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0xBC

.loc_0x68:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1C8
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0xBC:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x68
  b         .loc_0x1C8

.loc_0xDC:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x10C
  li        r31, 0x1

.loc_0x10C:
  lwz       r0, 0x14(r1)
  cmplwi    r0, 0
  bne-      .loc_0x138
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1C8

.loc_0x138:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1AC

.loc_0x158:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1C8
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0x1AC:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x158

.loc_0x1C8:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0xC(r1)
  cmplw     r4, r3
  bne+      .loc_0xDC
  rlwinm.   r0,r31,0,24,31
  beq-      .loc_0x1FC
  lwz       r3, -0x6CF8(r13)
  lwz       r3, 0x8(r3)
  bl        -0x3C274

.loc_0x1FC:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801AEF9C
 * Size:	000104
 */
void Game::AABBWaterBox::inWater( (Sys::Sphere &))
{
/*
.loc_0x0:
  lfs       f1, 0x34(r3)
  lfs       f0, -0x5024(r2)
  lfs       f2, 0x4(r4)
  fsubs     f0, f1, f0
  fcmpo     cr0, f2, f0
  ble-      .loc_0x20
  li        r3, 0
  blr       

.loc_0x20:
  lfs       f1, 0x0(r4)
  lfs       f0, 0xC(r4)
  lfs       f4, 0x24(r3)
  fsubs     f2, f1, f0
  lfs       f3, 0x18(r3)
  fadds     f1, f1, f0
  fcmpo     cr0, f4, f2
  bge-      .loc_0x48
  li        r3, 0
  blr       

.loc_0x48:
  fcmpo     cr0, f1, f3
  bge-      .loc_0x58
  li        r3, 0
  blr       

.loc_0x58:
  fcmpo     cr0, f2, f3
  cror      2, 0, 0x2
  bne-      .loc_0x70
  fcmpo     cr0, f3, f1
  cror      2, 0, 0x2
  beq-      .loc_0x90

.loc_0x70:
  fcmpo     cr0, f3, f2
  cror      2, 0, 0x2
  bne-      .loc_0x88
  fcmpo     cr0, f2, f4
  cror      2, 0, 0x2
  beq-      .loc_0x90

.loc_0x88:
  li        r3, 0
  blr       

.loc_0x90:
  lfs       f1, 0x8(r4)
  lfs       f4, 0x2C(r3)
  fsubs     f2, f1, f0
  lfs       f3, 0x20(r3)
  fadds     f0, f1, f0
  fcmpo     cr0, f4, f2
  bge-      .loc_0xB4
  li        r3, 0
  blr       

.loc_0xB4:
  fcmpo     cr0, f0, f3
  bge-      .loc_0xC4
  li        r3, 0
  blr       

.loc_0xC4:
  fcmpo     cr0, f2, f3
  cror      2, 0, 0x2
  bne-      .loc_0xDC
  fcmpo     cr0, f3, f0
  cror      2, 0, 0x2
  beq-      .loc_0xFC

.loc_0xDC:
  fcmpo     cr0, f3, f2
  cror      2, 0, 0x2
  bne-      .loc_0xF4
  fcmpo     cr0, f2, f4
  cror      2, 0, 0x2
  beq-      .loc_0xFC

.loc_0xF4:
  li        r3, 0
  blr       

.loc_0xFC:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	801AF0A0
 * Size:	0000E4
 */
void Game::AABBWaterBox::inWater2d( (Sys::Sphere &))
{
/*
.loc_0x0:
  lfs       f1, 0x0(r4)
  lfs       f0, 0xC(r4)
  lfs       f4, 0x24(r3)
  fsubs     f2, f1, f0
  lfs       f3, 0x18(r3)
  fadds     f1, f1, f0
  fcmpo     cr0, f4, f2
  bge-      .loc_0x28
  li        r3, 0
  blr       

.loc_0x28:
  fcmpo     cr0, f1, f3
  bge-      .loc_0x38
  li        r3, 0
  blr       

.loc_0x38:
  fcmpo     cr0, f2, f3
  cror      2, 0, 0x2
  bne-      .loc_0x50
  fcmpo     cr0, f3, f1
  cror      2, 0, 0x2
  beq-      .loc_0x70

.loc_0x50:
  fcmpo     cr0, f3, f2
  cror      2, 0, 0x2
  bne-      .loc_0x68
  fcmpo     cr0, f2, f4
  cror      2, 0, 0x2
  beq-      .loc_0x70

.loc_0x68:
  li        r3, 0
  blr       

.loc_0x70:
  lfs       f1, 0x8(r4)
  lfs       f4, 0x2C(r3)
  fsubs     f2, f1, f0
  lfs       f3, 0x20(r3)
  fadds     f0, f1, f0
  fcmpo     cr0, f4, f2
  bge-      .loc_0x94
  li        r3, 0
  blr       

.loc_0x94:
  fcmpo     cr0, f0, f3
  bge-      .loc_0xA4
  li        r3, 0
  blr       

.loc_0xA4:
  fcmpo     cr0, f2, f3
  cror      2, 0, 0x2
  bne-      .loc_0xBC
  fcmpo     cr0, f3, f0
  cror      2, 0, 0x2
  beq-      .loc_0xDC

.loc_0xBC:
  fcmpo     cr0, f3, f2
  cror      2, 0, 0x2
  bne-      .loc_0xD4
  fcmpo     cr0, f2, f4
  cror      2, 0, 0x2
  beq-      .loc_0xDC

.loc_0xD4:
  li        r3, 0
  blr       

.loc_0xDC:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void create__Q24Game12AABBWaterBoxFR10Vector3<float>R10Vector3<float>(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801AF184
 * Size:	0001C8
 */
void Game::AABBWaterBox::globalise( (Game::AABBWaterBox *, Matrixf &))
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  lfs       f1, -0x5040(r2)
  stw       r0, 0x64(r1)
  stmw      r27, 0x4C(r1)
  mr        r28, r4
  mr        r27, r3
  mr        r29, r5
  addi      r31, r1, 0x14
  li        r30, 0
  lfs       f0, 0x18(r4)
  stfs      f0, 0x18(r3)
  lfs       f0, -0x503C(r2)
  lfs       f2, 0x1C(r4)
  stfs      f2, 0x1C(r3)
  lfs       f2, 0x20(r4)
  stfs      f2, 0x20(r3)
  lfs       f2, 0x24(r4)
  stfs      f2, 0x24(r3)
  lfs       f2, 0x28(r4)
  stfs      f2, 0x28(r3)
  lfs       f2, 0x2C(r4)
  stfs      f2, 0x2C(r3)
  lfs       f2, 0x18(r3)
  stfs      f2, 0x14(r1)
  lfs       f2, 0x1C(r3)
  stfs      f2, 0x18(r1)
  lfs       f2, 0x20(r3)
  stfs      f2, 0x1C(r1)
  lfs       f2, 0x24(r3)
  stfs      f2, 0x2C(r1)
  lfs       f2, 0x28(r3)
  stfs      f2, 0x30(r1)
  lfs       f2, 0x2C(r3)
  stfs      f2, 0x34(r1)
  lfs       f4, 0x2C(r3)
  lfs       f3, 0x1C(r3)
  lfs       f2, 0x18(r3)
  stfs      f2, 0x20(r1)
  stfs      f3, 0x24(r1)
  stfs      f4, 0x28(r1)
  lfs       f4, 0x20(r3)
  lfs       f2, 0x24(r3)
  stfs      f2, 0x38(r1)
  stfs      f3, 0x3C(r1)
  stfs      f4, 0x40(r1)
  stfs      f1, 0x18(r3)
  stfs      f1, 0x1C(r3)
  stfs      f1, 0x20(r3)
  stfs      f0, 0x24(r3)
  stfs      f0, 0x28(r3)
  stfs      f0, 0x2C(r3)

.loc_0xD0:
  mr        r3, r29
  mr        r4, r31
  addi      r5, r1, 0x8
  bl        -0xC4688
  lfs       f0, 0x8(r1)
  lfs       f1, 0xC(r1)
  stfs      f0, 0x0(r31)
  lfs       f0, 0x10(r1)
  stfs      f1, 0x4(r31)
  stfs      f0, 0x8(r31)
  lfs       f1, 0x0(r31)
  lfs       f0, 0x18(r27)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x10C
  stfs      f1, 0x18(r27)

.loc_0x10C:
  lfs       f1, 0x4(r31)
  lfs       f0, 0x1C(r27)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x120
  stfs      f1, 0x1C(r27)

.loc_0x120:
  lfs       f1, 0x8(r31)
  lfs       f0, 0x20(r27)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x134
  stfs      f1, 0x20(r27)

.loc_0x134:
  lfs       f1, 0x0(r31)
  lfs       f0, 0x24(r27)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x148
  stfs      f1, 0x24(r27)

.loc_0x148:
  lfs       f1, 0x4(r31)
  lfs       f0, 0x28(r27)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x15C
  stfs      f1, 0x28(r27)

.loc_0x15C:
  lfs       f1, 0x8(r31)
  lfs       f0, 0x2C(r27)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x170
  stfs      f1, 0x2C(r27)

.loc_0x170:
  addi      r30, r30, 0x1
  addi      r31, r31, 0xC
  cmpwi     r30, 0x4
  blt+      .loc_0xD0
  lfs       f0, 0x30(r28)
  li        r0, 0
  lfs       f1, -0x5020(r2)
  stfs      f0, 0x30(r27)
  lfs       f0, -0x5038(r2)
  lfs       f2, 0x1C(r27)
  fsubs     f1, f2, f1
  stfs      f1, 0x1C(r27)
  lfs       f1, 0x28(r27)
  stfs      f1, 0x30(r27)
  sth       r0, 0x8(r27)
  stfs      f0, 0xC(r27)
  stfs      f0, 0x14(r27)
  lmw       r27, 0x4C(r1)
  lwz       r0, 0x64(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	801AF34C
 * Size:	000004
 */
void Game::AABBWaterBox::directDraw( (Graphics &))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801AF350
 * Size:	0002F8
 */
void Game::SeaMgr::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x8048
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  subi      r31, r4, 0x6A8
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  stw       r28, 0x10(r1)
  mr        r28, r29
  bl        0x262014
  lis       r4, 0x804B
  lis       r3, 0x804B
  subi      r0, r4, 0x5324
  lis       r5, 0x804B
  stw       r0, 0x0(r28)
  addi      r0, r3, 0x5940
  lis       r4, 0x804B
  lis       r3, 0x804B
  stw       r0, 0x0(r28)
  li        r0, 0
  addi      r6, r4, 0x58C4
  addi      r4, r3, 0x5844
  stb       r0, 0x18(r28)
  subi      r0, r5, 0x4A10
  addi      r30, r28, 0x20
  addi      r5, r6, 0x2C
  stw       r0, 0x1C(r28)
  addi      r0, r4, 0x2C
  mr        r3, r30
  stw       r6, 0x0(r28)
  stw       r5, 0x1C(r28)
  stw       r4, 0x0(r28)
  stw       r0, 0x1C(r28)
  bl        0x261FB4
  lis       r4, 0x804B
  lis       r3, 0x804B
  addi      r4, r4, 0x5834
  li        r0, 0x1
  stw       r4, 0x0(r30)
  addi      r4, r3, 0x57B4
  addi      r3, r4, 0x2C
  stw       r4, 0x0(r29)
  stw       r3, 0x1C(r29)
  stw       r0, 0x3C(r29)
  lwz       r0, 0x3C(r29)
  rlwinm    r3,r0,2,0,29
  bl        -0x18B464
  stw       r3, 0x40(r29)
  lwz       r3, -0x6C18(r13)
  cmplwi    r3, 0
  beq-      .loc_0x114
  lwz       r3, 0x44(r3)
  li        r0, 0
  cmpwi     r3, 0x1
  beq-      .loc_0xEC
  cmpwi     r3, 0x3
  bne-      .loc_0xF0

.loc_0xEC:
  li        r0, 0x1

.loc_0xF0:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x114
  addi      r3, r31, 0x3C
  li        r4, 0x1
  li        r5, 0
  li        r6, 0x1
  bl        -0x194328
  mr        r30, r3
  b         .loc_0x12C

.loc_0x114:
  addi      r3, r31, 0x58
  li        r4, 0x1
  li        r5, 0
  li        r6, 0x1
  bl        -0x194344
  mr        r30, r3

.loc_0x12C:
  cmplwi    r30, 0
  bne-      .loc_0x148
  addi      r3, r31, 0xC
  addi      r5, r31, 0x78
  li        r4, 0x20F
  crclr     6, 0x6
  bl        -0x184E54

.loc_0x148:
  lwz       r3, -0x6C18(r13)
  cmplwi    r3, 0
  beq-      .loc_0x194
  lwz       r3, 0x44(r3)
  li        r0, 0
  cmpwi     r3, 0x1
  beq-      .loc_0x16C
  cmpwi     r3, 0x3
  bne-      .loc_0x170

.loc_0x16C:
  li        r0, 0x1

.loc_0x170:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x194
  mr        r3, r30
  addi      r4, r31, 0x84
  lwz       r12, 0x0(r30)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x1AC

.loc_0x194:
  mr        r3, r30
  addi      r4, r31, 0x9C
  lwz       r12, 0x0(r30)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     

.loc_0x1AC:
  lwz       r4, -0x6C18(r13)
  cmplwi    r4, 0
  beq-      .loc_0x1E8
  lwz       r4, 0x44(r4)
  li        r0, 0
  cmpwi     r4, 0x1
  beq-      .loc_0x1D0
  cmpwi     r4, 0x3
  bne-      .loc_0x1D4

.loc_0x1D0:
  li        r0, 0x1

.loc_0x1D4:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0x1E8
  lis       r4, 0x2024
  addi      r4, r4, 0x10
  b         .loc_0x1F0

.loc_0x1E8:
  lis       r4, 0x2124
  addi      r4, r4, 0x10

.loc_0x1F0:
  bl        -0x13FCAC
  lwz       r5, 0x40(r29)
  li        r4, 0
  stw       r3, 0x0(r5)
  lwz       r3, 0x40(r29)
  lwz       r3, 0x0(r3)
  bl        0x28ED44
  lwz       r28, 0x3C(r29)
  rlwinm    r3,r28,4,0,27
  addi      r3, r3, 0x10
  bl        -0x18B5BC
  lis       r4, 0x8043
  mr        r7, r28
  addi      r4, r4, 0x4134
  li        r5, 0
  li        r6, 0x10
  bl        -0xEDB90
  stw       r3, 0x44(r29)
  lwz       r3, -0x6C18(r13)
  cmplwi    r3, 0
  beq-      .loc_0x288
  lwz       r3, 0x44(r3)
  li        r0, 0
  cmpwi     r3, 0x1
  beq-      .loc_0x25C
  cmpwi     r3, 0x3
  bne-      .loc_0x260

.loc_0x25C:
  li        r0, 0x1

.loc_0x260:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x288
  mr        r3, r30
  addi      r4, r31, 0xA8
  lwz       r12, 0x0(r30)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  mr        r28, r3
  b         .loc_0x2A4

.loc_0x288:
  mr        r3, r30
  addi      r4, r31, 0xC0
  lwz       r12, 0x0(r30)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  mr        r28, r3

.loc_0x2A4:
  cmplwi    r28, 0
  bne-      .loc_0x2C0
  addi      r3, r31, 0xC
  addi      r5, r31, 0x78
  li        r4, 0x237
  crclr     6, 0x6
  bl        -0x184FCC

.loc_0x2C0:
  lwz       r5, 0x40(r29)
  mr        r4, r28
  lwz       r3, 0x44(r29)
  lwz       r5, 0x0(r5)
  bl        0x284A00
  lwz       r0, 0x24(r1)
  mr        r3, r29
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
 * Address:	801AF648
 * Size:	0000C8
 */
void NodeObjectMgr<Game::WaterBox>::~NodeObjectMgr()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr.       r30, r3
  beq-      .loc_0xAC
  lis       r3, 0x804B
  addic.    r0, r30, 0x20
  addi      r3, r3, 0x5844
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x2C
  stw       r0, 0x1C(r30)
  beq-      .loc_0x54
  lis       r4, 0x804B
  addi      r3, r30, 0x20
  addi      r0, r4, 0x5834
  li        r4, 0
  stw       r0, 0x20(r30)
  bl        0x261EF0

.loc_0x54:
  cmplwi    r30, 0
  beq-      .loc_0x9C
  lis       r3, 0x804B
  addi      r3, r3, 0x58C4
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x2C
  stw       r0, 0x1C(r30)
  beq-      .loc_0x9C
  lis       r3, 0x804B
  addi      r0, r3, 0x5940
  stw       r0, 0x0(r30)
  beq-      .loc_0x9C
  lis       r4, 0x804B
  mr        r3, r30
  subi      r0, r4, 0x5324
  li        r4, 0
  stw       r0, 0x0(r30)
  bl        0x261EA8

.loc_0x9C:
  extsh.    r0, r31
  ble-      .loc_0xAC
  mr        r3, r30
  bl        -0x18B63C

.loc_0xAC:
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801AF710
 * Size:	000060
 */
void TObjectNode<Game::WaterBox>::~TObjectNode()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr.       r30, r3
  beq-      .loc_0x44
  lis       r5, 0x804B
  li        r4, 0
  addi      r0, r5, 0x5834
  stw       r0, 0x0(r30)
  bl        0x261E48
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0x18B69C

.loc_0x44:
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801AF770
 * Size:	000088
 */
void ObjectMgr<Game::WaterBox>::~ObjectMgr()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr.       r30, r3
  beq-      .loc_0x6C
  lis       r4, 0x804B
  addi      r4, r4, 0x58C4
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x2C
  stw       r0, 0x1C(r30)
  beq-      .loc_0x5C
  lis       r4, 0x804B
  addi      r0, r4, 0x5940
  stw       r0, 0x0(r30)
  beq-      .loc_0x5C
  lis       r5, 0x804B
  li        r4, 0
  subi      r0, r5, 0x5324
  stw       r0, 0x0(r30)
  bl        0x261DC0

.loc_0x5C:
  extsh.    r0, r31
  ble-      .loc_0x6C
  mr        r3, r30
  bl        -0x18B724

.loc_0x6C:
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801AF7F8
 * Size:	000070
 */
void Container<Game::WaterBox>::~Container()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr.       r30, r3
  beq-      .loc_0x54
  lis       r4, 0x804B
  addi      r0, r4, 0x5940
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r5, 0x804B
  li        r4, 0
  subi      r0, r5, 0x5324
  stw       r0, 0x0(r30)
  bl        0x261D50

.loc_0x44:
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        -0x18B794

.loc_0x54:
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void Game::SeaMgr::addWaterBox( (Game::WaterBox *))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801AF868
 * Size:	000004
 */
void Game::WaterBox::attachModel( (J3DModelData *, Sys::MatTexAnimation *, float))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801AF86C
 * Size:	000214
 */
void Game::SeaMgr::findWater( (Sys::Sphere &))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x804B
  stw       r0, 0x24(r1)
  li        r0, 0
  addi      r5, r5, 0x19D4
  stw       r31, 0x1C(r1)
  cmplwi    r0, 0
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r0, 0x14(r1)
  stw       r5, 0x8(r1)
  stw       r0, 0xC(r1)
  stw       r3, 0x10(r1)
  bne-      .loc_0x54
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1D8

.loc_0x54:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0xC0

.loc_0x6C:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1D8
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0xC0:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x6C
  b         .loc_0x1D8

.loc_0xE0:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  mr        r31, r3
  mr        r4, r30
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x11C
  mr        r3, r31
  b         .loc_0x1FC

.loc_0x11C:
  lwz       r0, 0x14(r1)
  cmplwi    r0, 0
  bne-      .loc_0x148
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1D8

.loc_0x148:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1BC

.loc_0x168:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1D8
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0x1BC:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x168

.loc_0x1D8:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0xC(r1)
  cmplw     r4, r3
  bne+      .loc_0xE0
  li        r3, 0

.loc_0x1FC:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801AFA80
 * Size:	000214
 */
void Game::SeaMgr::findWater2d( (Sys::Sphere &))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x804B
  stw       r0, 0x24(r1)
  li        r0, 0
  addi      r5, r5, 0x19D4
  stw       r31, 0x1C(r1)
  cmplwi    r0, 0
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r0, 0x14(r1)
  stw       r5, 0x8(r1)
  stw       r0, 0xC(r1)
  stw       r3, 0x10(r1)
  bne-      .loc_0x54
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1D8

.loc_0x54:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0xC0

.loc_0x6C:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1D8
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0xC0:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x6C
  b         .loc_0x1D8

.loc_0xE0:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  mr        r31, r3
  mr        r4, r30
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x11C
  mr        r3, r31
  b         .loc_0x1FC

.loc_0x11C:
  lwz       r0, 0x14(r1)
  cmplwi    r0, 0
  bne-      .loc_0x148
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1D8

.loc_0x148:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1BC

.loc_0x168:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1D8
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0x1BC:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x168

.loc_0x1D8:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0xC(r1)
  cmplw     r4, r3
  bne+      .loc_0xE0
  li        r3, 0

.loc_0x1FC:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801AFC94
 * Size:	000008
 */
void Game::WaterBox::inWater2d( (Sys::Sphere &))
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Game::SeaMgr::directDraw( (Graphics &))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801AFC9C
 * Size:	00020C
 */
void Game::SeaMgr::read( (Stream &))
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
  stmw      r26, 0x28(r1)
  mr        r28, r4
  mr        r27, r3
  mr        r3, r28
  bl        0x264DB8
  mr        r3, r28
  bl        0x264DB0
  lfs       f28, -0x5040(r2)
  mr        r31, r3
  lfs       f29, -0x503C(r2)
  li        r29, 0
  lfs       f30, -0x5020(r2)
  lfs       f31, -0x5038(r2)
  b         .loc_0x1D0

.loc_0x64:
  stfs      f28, 0x8(r1)
  mr        r4, r28
  addi      r3, r1, 0x8
  stfs      f28, 0xC(r1)
  stfs      f28, 0x10(r1)
  stfs      f29, 0x14(r1)
  stfs      f29, 0x18(r1)
  stfs      f29, 0x1C(r1)
  bl        0x261C2C
  li        r3, 0x68
  bl        -0x18BE84
  mr.       r30, r3
  beq-      .loc_0x124
  lis       r4, 0x804B
  lis       r3, 0x804B
  addi      r0, r4, 0x59B4
  li        r4, 0
  stw       r0, 0x0(r30)
  addi      r0, r3, 0x596C
  lfs       f1, -0x5040(r2)
  addi      r3, r30, 0x54
  stb       r4, 0x4(r30)
  lfs       f0, -0x503C(r2)
  stb       r4, 0x4(r30)
  lbz       r4, 0x4(r30)
  ori       r4, r4, 0x1
  stb       r4, 0x4(r30)
  stw       r0, 0x0(r30)
  stfs      f1, 0x18(r30)
  stfs      f1, 0x1C(r30)
  stfs      f1, 0x20(r30)
  stfs      f0, 0x24(r30)
  stfs      f0, 0x28(r30)
  stfs      f0, 0x2C(r30)
  bl        0x2845CC
  lis       r3, 0x804F
  lfs       f0, -0x5038(r2)
  subi      r3, r3, 0x3B74
  li        r0, 0
  stw       r3, 0x54(r30)
  stfs      f0, 0xC(r30)
  sth       r0, 0x8(r30)
  stfs      f0, 0x10(r30)
  stfs      f0, 0x14(r30)
  stfs      f0, 0x30(r30)
  stw       r0, 0x50(r30)
  stfs      f0, 0x34(r30)
  stw       r0, 0x60(r30)

.loc_0x124:
  lfs       f1, 0xC(r1)
  li        r0, 0
  lfs       f0, 0x8(r1)
  li        r3, 0x1C
  fsubs     f1, f1, f30
  stfs      f1, 0xC(r1)
  stfs      f0, 0x18(r30)
  lfs       f0, 0xC(r1)
  stfs      f0, 0x1C(r30)
  lfs       f0, 0x10(r1)
  stfs      f0, 0x20(r30)
  lfs       f0, 0x14(r1)
  stfs      f0, 0x24(r30)
  lfs       f0, 0x18(r1)
  stfs      f0, 0x28(r30)
  lfs       f0, 0x1C(r1)
  stfs      f0, 0x2C(r30)
  lfs       f0, 0x18(r1)
  stfs      f0, 0x30(r30)
  sth       r0, 0x8(r30)
  stfs      f31, 0xC(r30)
  stfs      f31, 0x14(r30)
  bl        -0x18BF74
  mr.       r26, r3
  beq-      .loc_0x198
  bl        0x26156C
  lis       r3, 0x804B
  addi      r0, r3, 0x5834
  stw       r0, 0x0(r26)

.loc_0x198:
  stw       r30, 0x18(r26)
  mr        r3, r30
  lfs       f1, -0x501C(r2)
  lwz       r12, 0x0(r30)
  lwz       r4, 0x40(r27)
  lwz       r12, 0x40(r12)
  lwz       r4, 0x0(r4)
  lwz       r5, 0x44(r27)
  mtctr     r12
  bctrl     
  mr        r4, r26
  addi      r3, r27, 0x20
  bl        0x2615A4
  addi      r29, r29, 0x1

.loc_0x1D0:
  cmpw      r29, r31
  blt+      .loc_0x64
  psq_l     f31,0x78(r1),0,0
  lfd       f31, 0x70(r1)
  psq_l     f30,0x68(r1),0,0
  lfd       f30, 0x60(r1)
  psq_l     f29,0x58(r1),0,0
  lfd       f29, 0x50(r1)
  psq_l     f28,0x48(r1),0,0
  lfd       f28, 0x40(r1)
  lmw       r26, 0x28(r1)
  lwz       r0, 0x84(r1)
  mtlr      r0
  addi      r1, r1, 0x80
  blr
*/
}

/*
 * --INFO--
 * Address:	801AFEA8
 * Size:	000308
 */
void Game::SeaMgr::addSeaMgr( (Game::SeaMgr *, Matrixf &))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lis       r6, 0x804B
  stw       r0, 0x34(r1)
  li        r0, 0
  addi      r6, r6, 0x19D4
  stw       r31, 0x2C(r1)
  cmplwi    r0, 0
  mr        r31, r5
  stw       r30, 0x28(r1)
  mr        r30, r3
  stw       r29, 0x24(r1)
  stw       r28, 0x20(r1)
  stw       r0, 0x14(r1)
  stw       r6, 0x8(r1)
  stw       r0, 0xC(r1)
  stw       r4, 0x10(r1)
  bne-      .loc_0x64
  mr        r3, r4
  lwz       r12, 0x0(r4)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x2C8

.loc_0x64:
  mr        r3, r4
  lwz       r12, 0x0(r4)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0xD4

.loc_0x80:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x2C8
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0xD4:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x80
  b         .loc_0x2C8

.loc_0xF4:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r29, r3
  li        r3, 0x68
  bl        -0x18C114
  mr.       r28, r3
  beq-      .loc_0x1A8
  lis       r4, 0x804B
  lis       r3, 0x804B
  addi      r0, r4, 0x59B4
  li        r4, 0
  stw       r0, 0x0(r28)
  addi      r0, r3, 0x596C
  lfs       f1, -0x5040(r2)
  addi      r3, r28, 0x54
  stb       r4, 0x4(r28)
  lfs       f0, -0x503C(r2)
  stb       r4, 0x4(r28)
  lbz       r4, 0x4(r28)
  ori       r4, r4, 0x1
  stb       r4, 0x4(r28)
  stw       r0, 0x0(r28)
  stfs      f1, 0x18(r28)
  stfs      f1, 0x1C(r28)
  stfs      f1, 0x20(r28)
  stfs      f0, 0x24(r28)
  stfs      f0, 0x28(r28)
  stfs      f0, 0x2C(r28)
  bl        0x28433C
  lis       r3, 0x804F
  lfs       f0, -0x5038(r2)
  subi      r3, r3, 0x3B74
  li        r0, 0
  stw       r3, 0x54(r28)
  stfs      f0, 0xC(r28)
  sth       r0, 0x8(r28)
  stfs      f0, 0x10(r28)
  stfs      f0, 0x14(r28)
  stfs      f0, 0x30(r28)
  stw       r0, 0x50(r28)
  stfs      f0, 0x34(r28)
  stw       r0, 0x60(r28)

.loc_0x1A8:
  mr        r3, r28
  mr        r4, r29
  mr        r5, r31
  bl        -0xED8
  li        r3, 0x1C
  bl        -0x18C1C0
  mr.       r29, r3
  beq-      .loc_0x1D8
  bl        0x261320
  lis       r3, 0x804B
  addi      r0, r3, 0x5834
  stw       r0, 0x0(r29)

.loc_0x1D8:
  stw       r28, 0x18(r29)
  mr        r3, r28
  lfs       f1, -0x501C(r2)
  lwz       r12, 0x0(r28)
  lwz       r4, 0x40(r30)
  lwz       r12, 0x40(r12)
  lwz       r4, 0x0(r4)
  lwz       r5, 0x44(r30)
  mtctr     r12
  bctrl     
  mr        r4, r29
  addi      r3, r30, 0x20
  bl        0x261358
  lwz       r0, 0x14(r1)
  cmplwi    r0, 0
  bne-      .loc_0x238
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x2C8

.loc_0x238:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x2AC

.loc_0x258:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x2C8
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0x2AC:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x258

.loc_0x2C8:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0xC(r1)
  cmplw     r4, r3
  bne+      .loc_0xF4
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r29, 0x24(r1)
  lwz       r28, 0x20(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	801B01B0
 * Size:	0000E0
 */
void Game::SeaMgr::__dt(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  stw       r30, 0x8(r1)
  mr        r30, r4
  beq-      .loc_0xC4
  lis       r3, 0x804B
  addi      r3, r3, 0x57B4
  stw       r3, 0x0(r31)
  addi      r0, r3, 0x2C
  stw       r0, 0x1C(r31)
  beq-      .loc_0xB4
  lis       r3, 0x804B
  addic.    r0, r31, 0x20
  addi      r3, r3, 0x5844
  stw       r3, 0x0(r31)
  addi      r0, r3, 0x2C
  stw       r0, 0x1C(r31)
  beq-      .loc_0x6C
  lis       r4, 0x804B
  addi      r3, r31, 0x20
  addi      r0, r4, 0x5834
  li        r4, 0
  stw       r0, 0x20(r31)
  bl        0x261370

.loc_0x6C:
  cmplwi    r31, 0
  beq-      .loc_0xB4
  lis       r3, 0x804B
  addi      r3, r3, 0x58C4
  stw       r3, 0x0(r31)
  addi      r0, r3, 0x2C
  stw       r0, 0x1C(r31)
  beq-      .loc_0xB4
  lis       r3, 0x804B
  addi      r0, r3, 0x5940
  stw       r0, 0x0(r31)
  beq-      .loc_0xB4
  lis       r4, 0x804B
  mr        r3, r31
  subi      r0, r4, 0x5324
  li        r4, 0
  stw       r0, 0x0(r31)
  bl        0x261328

.loc_0xB4:
  extsh.    r0, r30
  ble-      .loc_0xC4
  mr        r3, r31
  bl        -0x18C1BC

.loc_0xC4:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801B0290
 * Size:	000010
 */
void Game::AABBWaterBox::getSeaLevel(void)
{
/*
.loc_0x0:
  lfs       f1, 0x30(r3)
  lfs       f0, 0xC(r3)
  fadds     f1, f1, f0
  blr
*/
}

/*
 * --INFO--
 * Address:	801B02A0
 * Size:	000008
 */
void Game::AABBWaterBox::getSeaHeightPtr(void)
{
/*
.loc_0x0:
  addi      r3, r3, 0x34
  blr
*/
}

/*
 * --INFO--
 * Address:	801B02A8
 * Size:	000004
 */
void Game::WaterBox::doSimulation( (float))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801B02AC
 * Size:	000004
 */
void Game::WaterBox::doDirectDraw( (Graphics &))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801B02B0
 * Size:	000004
 */
void Game::WaterBox::startDown( (float))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801B02B4
 * Size:	000004
 */
void Game::WaterBox::startUp( (float))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801B02B8
 * Size:	000004
 */
void Game::WaterBox::directDraw( (Graphics &))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801B02BC
 * Size:	000004
 */
void Game::WaterBox::calcMatrix(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801B02C0
 * Size:	000008
 */
void NodeObjectMgr<Game::WaterBox>::get(void *)
{
/*
.loc_0x0:
  lwz       r3, 0x18(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	801B02C8
 * Size:	000008
 */
void NodeObjectMgr<Game::WaterBox>::getNext(void *)
{
/*
.loc_0x0:
  lwz       r3, 0x4(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	801B02D0
 * Size:	000008
 */
void NodeObjectMgr<Game::WaterBox>::getStart()
{
/*
.loc_0x0:
  lwz       r3, 0x30(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	801B02D8
 * Size:	000008
 */
void NodeObjectMgr<Game::WaterBox>::getEnd()
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	801B02E0
 * Size:	000044
 */
void NodeObjectMgr<Game::WaterBox>::delNode(Game::WaterBox *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x30(r3)
  b         .loc_0x2C

.loc_0x14:
  lwz       r0, 0x18(r3)
  cmplw     r0, r4
  bne-      .loc_0x28
  bl        0x2612D0
  b         .loc_0x34

.loc_0x28:
  lwz       r3, 0x4(r3)

.loc_0x2C:
  cmplwi    r3, 0
  bne+      .loc_0x14

.loc_0x34:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801B0324
 * Size:	000018
 */
void NodeObjectMgr<Game::WaterBox>::resetMgr()
{
/*
.loc_0x0:
  li        r0, 0
  stw       r0, 0x30(r3)
  stw       r0, 0x2C(r3)
  stw       r0, 0x28(r3)
  stw       r0, 0x24(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	801B033C
 * Size:	0001F4
 */
void ObjectMgr<Game::WaterBox>::doSimulation(float)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x804B
  stw       r0, 0x24(r1)
  li        r0, 0
  addi      r4, r4, 0x19D4
  stfd      f31, 0x18(r1)
  fmr       f31, f1
  cmplwi    r0, 0
  stw       r4, 0x8(r1)
  stw       r0, 0x14(r1)
  stw       r0, 0xC(r1)
  stw       r3, 0x10(r1)
  bne-      .loc_0x50
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1C0

.loc_0x50:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0xBC

.loc_0x68:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1C0
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0xBC:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x68
  b         .loc_0x1C0

.loc_0xDC:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  fmr       f1, f31
  lwz       r12, 0x38(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  cmplwi    r0, 0
  bne-      .loc_0x130
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1C0

.loc_0x130:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1A4

.loc_0x150:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1C0
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0x1A4:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x150

.loc_0x1C0:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0xC(r1)
  cmplw     r4, r3
  bne+      .loc_0xDC
  lwz       r0, 0x24(r1)
  lfd       f31, 0x18(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801B0530
 * Size:	0001F4
 */
void ObjectMgr<Game::WaterBox>::doDirectDraw(Graphics &)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x804B
  stw       r0, 0x24(r1)
  li        r0, 0
  addi      r5, r5, 0x19D4
  stw       r31, 0x1C(r1)
  cmplwi    r0, 0
  mr        r31, r4
  stw       r0, 0x14(r1)
  stw       r5, 0x8(r1)
  stw       r0, 0xC(r1)
  stw       r3, 0x10(r1)
  bne-      .loc_0x50
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1C0

.loc_0x50:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0xBC

.loc_0x68:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1C0
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0xBC:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x68
  b         .loc_0x1C0

.loc_0xDC:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  mr        r4, r31
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  cmplwi    r0, 0
  bne-      .loc_0x130
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1C0

.loc_0x130:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1A4

.loc_0x150:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1C0
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0x1A4:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x150

.loc_0x1C0:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0xC(r1)
  cmplw     r4, r3
  bne+      .loc_0xDC
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801B0724
 * Size:	00002C
 */
void Container<Game::WaterBox>::getObject(void *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801B0750
 * Size:	000008
 */
void Container<Game::WaterBox>::getAt(int)
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	801B0758
 * Size:	000008
 */
void Container<Game::WaterBox>::getTo()
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	801B0760
 * Size:	000028
 */
void __sinit_gameSeaMgr_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804B
  stw       r0, -0x6C30(r13)
  stfsu     f0, 0x57A8(r3)
  stfs      f0, -0x6C2C(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	801B0788
 * Size:	000008
 */
void NodeObjectMgr<Game::WaterBox>::@28@resetMgr()
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x468
*/
}

/*
 * --INFO--
 * Address:	801B0790
 * Size:	000008
 */
void ObjectMgr<Game::WaterBox>::@28@doDirectDraw(Graphics &)
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x264
*/
}

/*
 * --INFO--
 * Address:	801B0798
 * Size:	000008
 */
void ObjectMgr<Game::WaterBox>::@28@doSimulation(float)
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x460
*/
}

/*
 * --INFO--
 * Address:	801B07A0
 * Size:	000008
 */
void ObjectMgr<Game::WaterBox>::@28@doViewCalc()
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x4C698
*/
}

/*
 * --INFO--
 * Address:	801B07A8
 * Size:	000008
 */
void ObjectMgr<Game::WaterBox>::@28@doSetView(int)
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x4C46C
*/
}

/*
 * --INFO--
 * Address:	801B07B0
 * Size:	000008
 */
void ObjectMgr<Game::WaterBox>::@28@doEntry()
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x4C27C
*/
}

/*
 * --INFO--
 * Address:	801B07B8
 * Size:	000008
 */
void ObjectMgr<Game::WaterBox>::@28@doAnimation()
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x4C09C
*/
}

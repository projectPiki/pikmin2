

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char *, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000108
 */
void og::newScreen::TitleMessageAnalyzer::__ct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8032EA58
 * Size:	000070
 */
void P2JME::Analyzer::__dt(void)
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
  lis       r4, 0x804F
  subi      r0, r4, 0x23A0
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r5, 0x804F
  li        r4, 0
  subi      r0, r5, 0x34CC
  stw       r0, 0x0(r30)
  bl        -0x32699C

.loc_0x44:
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        -0x30A9F4

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
 * Size:	000018
 */
void og::newScreen::TitleMessageAnalyzer::set2ByteString( (char *, int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8032EAC8
 * Size:	000228
 */
void og::newScreen::TitleMessageAnalyzer::do_character( (int))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  cmpwi     r4, 0
  rlwinm    r6,r4,0,24,31
  li        r7, 0
  lhz       r5, 0x2B58(r2)
  lbz       r0, 0x2B5A(r2)
  sth       r5, 0x8(r1)
  stb       r0, 0xA(r1)
  bne-      .loc_0x38
  lwz       r0, 0x38(r3)
  li        r5, 0
  add       r4, r3, r0
  stb       r5, 0x3C(r4)
  b         .loc_0x1A8

.loc_0x38:
  rlwinm.   r0,r4,0,16,23
  beq-      .loc_0x5C
  srawi     r4, r0, 0x8
  li        r0, 0
  stb       r4, 0x8(r1)
  li        r7, 0x1
  stb       r6, 0x9(r1)
  stb       r0, 0xA(r1)
  b         .loc_0x1A8

.loc_0x5C:
  cmpwi     r6, 0x41
  blt-      .loc_0x90
  cmpwi     r6, 0x5A
  bgt-      .loc_0x90
  addis     r4, r4, 0x1
  li        r0, 0
  subi      r4, r4, 0x7DE1
  stb       r0, 0xA(r1)
  rlwinm    r0,r4,24,24,31
  li        r7, 0x1
  stb       r0, 0x8(r1)
  stb       r4, 0x9(r1)
  b         .loc_0x1A8

.loc_0x90:
  cmpwi     r6, 0x61
  blt-      .loc_0xC4
  cmpwi     r6, 0x7A
  bgt-      .loc_0xC4
  addis     r4, r4, 0x1
  li        r0, 0
  subi      r4, r4, 0x7DE0
  stb       r0, 0xA(r1)
  rlwinm    r0,r4,24,24,31
  li        r7, 0x1
  stb       r0, 0x8(r1)
  stb       r4, 0x9(r1)
  b         .loc_0x1A8

.loc_0xC4:
  cmplwi    r6, 0xBF
  blt-      .loc_0xF8
  cmplwi    r6, 0xFF
  bgt-      .loc_0xF8
  addis     r4, r4, 0x1
  li        r0, 0
  subi      r4, r4, 0x1BF
  stb       r0, 0xA(r1)
  rlwinm    r0,r4,24,24,31
  li        r7, 0x1
  stb       r0, 0x8(r1)
  stb       r4, 0x9(r1)
  b         .loc_0x1A8

.loc_0xF8:
  cmpwi     r6, 0x20
  bne-      .loc_0x120
  li        r5, -0x7F
  li        r4, 0x40
  li        r0, 0
  stb       r5, 0x8(r1)
  li        r7, 0x1
  stb       r4, 0x9(r1)
  stb       r0, 0xA(r1)
  b         .loc_0x1A8

.loc_0x120:
  cmpwi     r6, 0x21
  bne-      .loc_0x148
  li        r5, -0x7F
  li        r4, 0x49
  li        r0, 0
  stb       r5, 0x8(r1)
  li        r7, 0x1
  stb       r4, 0x9(r1)
  stb       r0, 0xA(r1)
  b         .loc_0x1A8

.loc_0x148:
  cmpwi     r6, 0x3F
  bne-      .loc_0x170
  li        r5, -0x7F
  li        r4, 0x48
  li        r0, 0
  stb       r5, 0x8(r1)
  li        r7, 0x1
  stb       r4, 0x9(r1)
  stb       r0, 0xA(r1)
  b         .loc_0x1A8

.loc_0x170:
  subi      r0, r6, 0x26
  rlwinm    r0,r0,0,24,31
  cmplwi    r0, 0x1
  ble-      .loc_0x188
  cmplwi    r6, 0x2D
  bne-      .loc_0x1A8

.loc_0x188:
  addis     r4, r6, 0x1
  li        r0, 0
  subi      r4, r4, 0x100
  stb       r0, 0xA(r1)
  rlwinm    r0,r4,24,24,31
  li        r7, 0x1
  stb       r0, 0x8(r1)
  stb       r4, 0x9(r1)

.loc_0x1A8:
  rlwinm.   r0,r7,0,24,31
  beq-      .loc_0x220
  lwz       r0, 0x38(r3)
  lbz       r5, 0x8(r1)
  add       r4, r3, r0
  stb       r5, 0x3C(r4)
  lwz       r4, 0x38(r3)
  addi      r0, r4, 0x1
  stw       r0, 0x38(r3)
  lwz       r0, 0x38(r3)
  cmpwi     r0, 0xFE
  blt-      .loc_0x1E0
  li        r0, 0xFE
  stw       r0, 0x38(r3)

.loc_0x1E0:
  lwz       r0, 0x38(r3)
  lbz       r5, 0x9(r1)
  add       r4, r3, r0
  stb       r5, 0x3C(r4)
  lwz       r4, 0x38(r3)
  addi      r0, r4, 0x1
  stw       r0, 0x38(r3)
  lwz       r0, 0x38(r3)
  cmpwi     r0, 0xFE
  blt-      .loc_0x210
  li        r0, 0xFE
  stw       r0, 0x38(r3)

.loc_0x210:
  lwz       r0, 0x38(r3)
  li        r4, 0
  add       r3, r3, r0
  stb       r4, 0x3C(r3)

.loc_0x220:
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8032ECF0
 * Size:	00028C
 */
void og::newScreen::TitleMsg::__ct( (J2DScreen *, J2DPane *, char *))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lis       r7, 0x804E
  stw       r0, 0x34(r1)
  subi      r0, r7, 0x5D5C
  stmw      r26, 0x18(r1)
  mr        r30, r3
  mr        r31, r4
  mr        r27, r5
  addi      r28, r30, 0x4
  mr        r26, r6
  stw       r0, 0x0(r3)
  mr        r3, r28
  lwz       r4, -0x6840(r13)
  lwz       r4, 0x18(r4)
  lwz       r4, 0x0(r4)
  lwz       r4, 0x4(r4)
  bl        0x127394
  lis       r4, 0x804E
  li        r3, 0
  subi      r4, r4, 0x5D44
  li        r0, 0x8
  stw       r4, 0x0(r28)
  mr        r4, r3
  stw       r3, 0x38(r28)
  mtctr     r0

.loc_0x68:
  addi      r5, r4, 0x3C
  add       r5, r28, r5
  stb       r3, 0x0(r5)
  stb       r3, 0x1(r5)
  stb       r3, 0x2(r5)
  stb       r3, 0x3(r5)
  stb       r3, 0x4(r5)
  stb       r3, 0x5(r5)
  stb       r3, 0x6(r5)
  stb       r3, 0x7(r5)
  addi      r5, r4, 0x44
  add       r5, r28, r5
  stb       r3, 0x0(r5)
  stb       r3, 0x1(r5)
  stb       r3, 0x2(r5)
  stb       r3, 0x3(r5)
  stb       r3, 0x4(r5)
  stb       r3, 0x5(r5)
  stb       r3, 0x6(r5)
  stb       r3, 0x7(r5)
  addi      r5, r4, 0x4C
  add       r5, r28, r5
  stb       r3, 0x0(r5)
  stb       r3, 0x1(r5)
  stb       r3, 0x2(r5)
  stb       r3, 0x3(r5)
  stb       r3, 0x4(r5)
  stb       r3, 0x5(r5)
  stb       r3, 0x6(r5)
  stb       r3, 0x7(r5)
  addi      r5, r4, 0x54
  add       r5, r28, r5
  addi      r4, r4, 0x20
  stb       r3, 0x0(r5)
  stb       r3, 0x1(r5)
  stb       r3, 0x2(r5)
  stb       r3, 0x3(r5)
  stb       r3, 0x4(r5)
  stb       r3, 0x5(r5)
  stb       r3, 0x6(r5)
  stb       r3, 0x7(r5)
  bdnz+     .loc_0x68
  li        r0, -0x1
  mr        r4, r26
  stw       r0, 0x550(r30)
  addi      r3, r30, 0x4
  stw       r0, 0x554(r30)
  stw       r0, 0x558(r30)
  bl        0x1272F0
  addi      r29, r30, 0x40
  stw       r27, 0x54C(r30)
  mr        r3, r29
  bl        -0x264518
  rlwinm    r0,r3,31,1,31
  lfs       f0, -0x358(r2)
  stw       r0, 0x540(r30)
  li        r3, 0
  li        r0, 0xFF
  li        r28, 0
  stfs      f0, 0x544(r30)
  stb       r3, 0x550(r30)
  stb       r3, 0x551(r30)
  stb       r3, 0x552(r30)
  stb       r0, 0x553(r30)
  stb       r0, 0x554(r30)
  stb       r0, 0x555(r30)
  stb       r3, 0x556(r30)
  stb       r0, 0x557(r30)
  stb       r0, 0x558(r30)
  stb       r3, 0x559(r30)
  stb       r3, 0x55A(r30)
  stb       r3, 0x55B(r30)
  b         .loc_0x214

.loc_0x18C:
  mr        r3, r29
  bl        -0x2C15C
  mr        r26, r4
  addi      r5, r1, 0x8
  mr        r27, r3
  bl        -0x2C2C4
  mr        r3, r31
  mr        r6, r26
  lwz       r12, 0x0(r31)
  mr        r5, r27
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  mr.       r4, r3
  beq-      .loc_0x1D8
  mr        r3, r30
  mr        r5, r28
  bl        0x13C
  b         .loc_0x20C

.loc_0x1D8:
  mr        r3, r31
  lis       r4, 0x65
  lwz       r12, 0x0(r31)
  addi      r6, r4, 0x7272
  li        r5, 0
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  mr.       r4, r3
  beq-      .loc_0x20C
  mr        r3, r30
  mr        r5, r28
  bl        0x104

.loc_0x20C:
  addi      r29, r29, 0x2
  addi      r28, r28, 0x1

.loc_0x214:
  lwz       r0, 0x540(r30)
  cmplw     r28, r0
  blt+      .loc_0x18C
  mr        r3, r30
  li        r4, 0
  bl        0x238
  li        r5, 0
  lfs       f0, -0x358(r2)
  mr        r4, r5
  li        r6, 0
  b         .loc_0x258

.loc_0x240:
  addi      r3, r6, 0x55C
  addi      r0, r5, 0x5DC
  stbx      r4, r30, r3
  addi      r5, r5, 0x4
  addi      r6, r6, 0x1
  stfsx     f0, r30, r0

.loc_0x258:
  lwz       r0, 0x540(r30)
  cmplw     r6, r0
  blt+      .loc_0x240
  lfs       f1, -0x358(r2)
  mr        r3, r30
  lfs       f0, -0x354(r2)
  stfs      f1, 0x7DC(r30)
  stfs      f0, 0x7E0(r30)
  lmw       r26, 0x18(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	8032EF7C
 * Size:	000080
 */
void og::newScreen::TitleMessageAnalyzer::__dt(void)
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
  beq-      .loc_0x64
  lis       r4, 0x804E
  subi      r0, r4, 0x5D44
  stw       r0, 0x0(r30)
  beq-      .loc_0x54
  lis       r4, 0x804F
  subi      r0, r4, 0x23A0
  stw       r0, 0x0(r30)
  beq-      .loc_0x54
  lis       r5, 0x804F
  li        r4, 0
  subi      r0, r5, 0x34CC
  stw       r0, 0x0(r30)
  bl        -0x326ED0

.loc_0x54:
  extsh.    r0, r31
  ble-      .loc_0x64
  mr        r3, r30
  bl        -0x30AF28

.loc_0x64:
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
 * Address:	8032EFFC
 * Size:	000154
 */
void og::newScreen::TitleMsg::setFontPane( (J2DPictureEx *, int))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lis       r6, 0x7430
  lfs       f2, -0x350(r2)
  stw       r0, 0x34(r1)
  stmw      r26, 0x18(r1)
  mr        r26, r5
  mr        r30, r3
  lis       r5, 0x7446
  mr        r31, r4
  srawi     r28, r26, 0x1F
  addi      r3, r6, 0x3030
  addi      r0, r5, 0x6F6E
  addc      r6, r26, r3
  adde      r5, r28, r0
  mr        r3, r31
  lwz       r4, 0x54C(r30)
  lfs       f1, 0x544(r30)
  bl        -0x203F4
  rlwinm    r27,r26,2,0,29
  li        r4, 0x7
  add       r29, r30, r27
  stw       r3, 0x140(r29)
  lwz       r3, 0x140(r29)
  bl        -0x2F63A0
  lwz       r0, 0x550(r30)
  addi      r4, r1, 0x10
  stw       r0, 0x10(r1)
  lwz       r3, 0x140(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x12C(r12)
  mtctr     r12
  bctrl     
  lfs       f3, 0x28(r31)
  lis       r3, 0x7930
  lfs       f2, 0x20(r31)
  addi      r0, r3, 0x3030
  lfs       f1, 0x2C(r31)
  lis       r3, 0x7442
  fsubs     f4, f3, f2
  lfs       f0, 0x24(r31)
  lfs       f3, -0x34C(r2)
  addc      r6, r26, r0
  fsubs     f0, f1, f0
  lfs       f2, -0x348(r2)
  addi      r0, r3, 0x6F64
  fmsubs    f1, f4, f3, f2
  fmsubs    f2, f0, f3, f2
  lwz       r4, 0x140(r29)
  adde      r5, r28, r0
  mr        r3, r31
  bl        -0x20478
  add       r27, r30, r27
  li        r4, 0x7
  stw       r3, 0x340(r27)
  lwz       r3, 0x340(r27)
  bl        -0x2F6420
  lwz       r0, 0x554(r30)
  addi      r4, r1, 0xC
  stw       r0, 0xC(r1)
  lwz       r3, 0x340(r27)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x12C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x558(r30)
  addi      r4, r1, 0x8
  stw       r0, 0x8(r1)
  lwz       r3, 0x340(r27)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x128(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x140(r29)
  lfs       f2, 0x544(r30)
  lfs       f1, 0x28(r3)
  lfs       f0, 0x20(r3)
  fsubs     f0, f1, f0
  fadds     f0, f2, f0
  stfs      f0, 0x544(r30)
  lmw       r26, 0x18(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	8032F150
 * Size:	000164
 */
void og::newScreen::TitleMsg::setCentering( (og::newScreen::TitleMsg::EnumCentering))
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
  mr        r29, r3
  lfs       f29, -0x354(r2)
  stw       r4, 0x548(r3)
  lwz       r3, 0x54C(r3)
  lfs       f2, 0x544(r29)
  lfs       f1, 0x28(r3)
  lfs       f0, 0x20(r3)
  fsubs     f0, f1, f0
  fcmpo     cr0, f2, f0
  ble-      .loc_0x64
  fdivs     f29, f0, f2

.loc_0x64:
  lwz       r0, 0x548(r29)
  cmpwi     r0, 0x1
  beq-      .loc_0x94
  bge-      .loc_0x80
  cmpwi     r0, 0
  bge-      .loc_0x8C
  b         .loc_0xAC

.loc_0x80:
  cmpwi     r0, 0x3
  bge-      .loc_0xAC
  b         .loc_0x9C

.loc_0x8C:
  lfs       f30, -0x358(r2)
  b         .loc_0xB0

.loc_0x94:
  fnmsubs   f30, f2, f29, f0
  b         .loc_0xB0

.loc_0x9C:
  fnmsubs   f1, f2, f29, f0
  lfs       f0, -0x34C(r2)
  fmuls     f30, f1, f0
  b         .loc_0xB0

.loc_0xAC:
  lfs       f30, -0x358(r2)

.loc_0xB0:
  lfs       f28, -0x358(r2)
  mr        r31, r29
  lfs       f31, -0x354(r2)
  li        r30, 0
  b         .loc_0x118

.loc_0xC4:
  lwz       r3, 0x140(r31)
  fmadds    f1, f28, f29, f30
  lfs       f2, -0x358(r2)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x140(r31)
  stfs      f29, 0xCC(r3)
  stfs      f31, 0xD0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x140(r31)
  addi      r31, r31, 0x4
  addi      r30, r30, 0x1
  lfs       f1, 0x28(r3)
  lfs       f0, 0x20(r3)
  fsubs     f0, f1, f0
  fadds     f28, f28, f0

.loc_0x118:
  lwz       r0, 0x540(r29)
  cmplw     r30, r0
  blt+      .loc_0xC4
  stfs      f29, 0x7E0(r29)
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
 * Address:	........
 * Size:	000004
 */
void og::newScreen::TitleMsg::drawMsgArea( (J2DGrafContext &))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8032F2B4
 * Size:	0000D0
 */
void og::newScreen::TitleMsg::setColor( (JUtility::TColor &, JUtility::TColor &))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r27, 0x1C(r1)
  mr        r27, r3
  mr        r28, r4
  mr        r29, r5
  mr        r31, r27
  li        r30, 0
  lbz       r0, 0x0(r4)
  stb       r0, 0x554(r3)
  lbz       r0, 0x1(r4)
  stb       r0, 0x555(r3)
  lbz       r0, 0x2(r4)
  stb       r0, 0x556(r3)
  lbz       r0, 0x3(r4)
  stb       r0, 0x557(r3)
  lbz       r0, 0x0(r5)
  stb       r0, 0x558(r3)
  lbz       r0, 0x1(r5)
  stb       r0, 0x559(r3)
  lbz       r0, 0x2(r5)
  stb       r0, 0x55A(r3)
  lbz       r0, 0x3(r5)
  stb       r0, 0x55B(r3)
  b         .loc_0xB0

.loc_0x68:
  lwz       r0, 0x0(r28)
  addi      r4, r1, 0xC
  stw       r0, 0xC(r1)
  lwz       r3, 0x340(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x12C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x0(r29)
  addi      r4, r1, 0x8
  stw       r0, 0x8(r1)
  lwz       r3, 0x340(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x128(r12)
  mtctr     r12
  bctrl     
  addi      r31, r31, 0x4
  addi      r30, r30, 0x1

.loc_0xB0:
  lwz       r0, 0x540(r27)
  cmplw     r30, r0
  blt+      .loc_0x68
  lmw       r27, 0x1C(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	8032F384
 * Size:	0000F0
 */
void og::newScreen::TitleMsgDrop::__ct( (J2DScreen *, J2DPane *, char *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  bl        -0x6B4
  lis       r3, 0x804E
  lis       r4, 0x8033
  subi      r0, r3, 0x5DA4
  li        r6, 0x14
  lis       r3, 0x8033
  stw       r0, 0x0(r31)
  subi      r5, r3, 0xB8C
  subi      r4, r4, 0xB50
  addi      r3, r31, 0x7E4
  li        r7, 0x80
  bl        -0x26DB94
  li        r28, 0
  li        r29, 0
  b         .loc_0xC0

.loc_0x5C:
  li        r3, 0xC
  bl        -0x30B540
  mr.       r30, r3
  beq-      .loc_0xB0
  li        r4, 0x3
  bl        0x8A7B0
  lis       r4, 0x804E
  lis       r3, 0x804E
  subi      r0, r4, 0x5D74
  li        r6, 0x12
  stw       r0, 0x0(r30)
  li        r5, 0x13
  li        r4, 0x14
  subi      r0, r3, 0x5D8C
  lwz       r3, 0x8(r30)
  sth       r6, 0xC(r3)
  lwz       r3, 0x8(r30)
  sth       r5, 0x20(r3)
  lwz       r3, 0x8(r30)
  sth       r4, 0x34(r3)
  stw       r0, 0x0(r30)

.loc_0xB0:
  addi      r0, r29, 0x11E4
  addi      r28, r28, 0x1
  stwx      r30, r31, r0
  addi      r29, r29, 0x4

.loc_0xC0:
  lwz       r0, 0x540(r31)
  cmplw     r28, r0
  blt+      .loc_0x5C
  lwz       r0, 0x24(r1)
  mr        r3, r31
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
 * Address:	8032F474
 * Size:	00003C
 */
void og::newScreen::TitleMsgDrop::Motion::__dt(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x24
  extsh.    r0, r4
  ble-      .loc_0x24
  bl        -0x30B3E0

.loc_0x24:
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
 * Address:	8032F4B0
 * Size:	00001C
 */
void og::newScreen::TitleMsgDrop::Motion::__ct(void)
{
/*
.loc_0x0:
  lfs       f1, -0x344(r2)
  lfs       f0, -0x358(r2)
  stfs      f1, 0x0(r3)
  stfs      f0, 0x4(r3)
  stfs      f0, 0xC(r3)
  stfs      f0, 0x10(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void og::newScreen::TitleMsg::__dt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8032F4CC
 * Size:	000128
 */
void og::newScreen::TitleMsgDrop::init(void)
{
/*
.loc_0x0:
  stwu      r1, -0x90(r1)
  mflr      r0
  stw       r0, 0x94(r1)
  stfd      f31, 0x80(r1)
  psq_st    f31,0x88(r1),0,0
  stfd      f30, 0x70(r1)
  psq_st    f30,0x78(r1),0,0
  stfd      f29, 0x60(r1)
  psq_st    f29,0x68(r1),0,0
  stfd      f28, 0x50(r1)
  psq_st    f28,0x58(r1),0,0
  stfd      f27, 0x40(r1)
  psq_st    f27,0x48(r1),0,0
  stmw      r27, 0x2C(r1)
  mr        r27, r3
  lfd       f27, -0x330(r2)
  lfs       f28, -0x340(r2)
  mr        r30, r27
  lfs       f29, -0x33C(r2)
  addi      r29, r27, 0x7E4
  lfs       f30, -0x338(r2)
  li        r28, 0
  lfd       f31, -0x328(r2)
  lis       r31, 0x4330
  b         .loc_0xE0

.loc_0x64:
  bl        -0x265F90
  xoris     r3, r3, 0x8000
  xoris     r0, r28, 0x8000
  stw       r3, 0xC(r1)
  addi      r28, r28, 0x1
  stw       r31, 0x8(r1)
  lfd       f0, 0x8(r1)
  stw       r0, 0x14(r1)
  fsubs     f0, f0, f27
  stw       r31, 0x10(r1)
  fdivs     f1, f0, f28
  lfd       f0, 0x10(r1)
  stw       r31, 0x18(r1)
  fmuls     f2, f29, f1
  fsubs     f1, f0, f27
  stfs      f2, 0x4(r29)
  stfs      f30, 0x0(r29)
  lwz       r3, 0x140(r30)
  lfs       f0, 0xD4(r3)
  stfs      f0, 0x8(r29)
  lwz       r3, 0x140(r30)
  addi      r30, r30, 0x4
  lfs       f0, 0xD8(r3)
  stfs      f0, 0xC(r29)
  lwz       r0, 0x540(r27)
  stw       r0, 0x1C(r1)
  lfd       f0, 0x18(r1)
  fsubs     f0, f0, f31
  fdivs     f0, f1, f0
  stfs      f0, 0x10(r29)
  addi      r29, r29, 0x14

.loc_0xE0:
  lwz       r0, 0x540(r27)
  cmplw     r28, r0
  blt+      .loc_0x64
  psq_l     f31,0x88(r1),0,0
  lfd       f31, 0x80(r1)
  psq_l     f30,0x78(r1),0,0
  lfd       f30, 0x70(r1)
  psq_l     f29,0x68(r1),0,0
  lfd       f29, 0x60(r1)
  psq_l     f28,0x58(r1),0,0
  lfd       f28, 0x50(r1)
  psq_l     f27,0x48(r1),0,0
  lfd       f27, 0x40(r1)
  lmw       r27, 0x2C(r1)
  lwz       r0, 0x94(r1)
  mtlr      r0
  addi      r1, r1, 0x90
  blr
*/
}

/*
 * --INFO--
 * Address:	8032F5F4
 * Size:	000230
 */
void og::newScreen::TitleMsgDrop::update(void)
{
/*
.loc_0x0:
  stwu      r1, -0x80(r1)
  mflr      r0
  stw       r0, 0x84(r1)
  stfd      f31, 0x70(r1)
  psq_st    f31,0x78(r1),0,0
  stmw      r27, 0x5C(r1)
  mr        r27, r3
  lfs       f31, -0x358(r2)
  mr        r31, r27
  li        r29, 0
  addi      r30, r27, 0x7E4
  b         .loc_0x208

.loc_0x30:
  lfs       f1, 0x10(r30)
  lwz       r28, 0x140(r31)
  fcmpo     cr0, f1, f31
  ble-      .loc_0x54
  lwz       r3, -0x6514(r13)
  lfs       f0, 0x54(r3)
  fsubs     f0, f1, f0
  stfs      f0, 0x10(r30)
  b         .loc_0x198

.loc_0x54:
  lfs       f0, 0x4(r30)
  lfs       f2, -0x354(r2)
  fsubs     f0, f0, f2
  stfs      f0, 0x4(r30)
  lfs       f1, 0x0(r30)
  lfs       f0, 0x4(r30)
  fadds     f0, f1, f0
  stfs      f0, 0x0(r30)
  lfs       f0, 0x0(r30)
  fcmpo     cr0, f0, f31
  bge-      .loc_0x198
  lfs       f1, 0x4(r30)
  addi      r3, r29, 0x55C
  lfs       f0, -0x320(r2)
  fmuls     f0, f1, f0
  stfs      f0, 0x4(r30)
  lfs       f0, 0x4(r30)
  stfs      f0, 0x0(r30)
  lbzx      r0, r27, r3
  cmplwi    r0, 0
  bne-      .loc_0x198
  li        r0, 0x1
  mr        r4, r28
  stbx      r0, r27, r3
  addi      r3, r1, 0x24
  li        r5, 0
  stfs      f2, 0x5DC(r31)
  bl        -0x2F671C
  lwz       r5, 0x24(r1)
  mr        r4, r28
  lwz       r6, 0x28(r1)
  addi      r3, r1, 0x18
  lwz       r0, 0x2C(r1)
  stw       r5, 0x48(r1)
  li        r5, 0x3
  stw       r6, 0x4C(r1)
  stw       r0, 0x50(r1)
  bl        -0x2F6744
  lwz       r4, 0x18(r1)
  lis       r3, 0x804C
  lwz       r5, 0x1C(r1)
  addi      r0, r3, 0x1514
  stw       r4, 0x3C(r1)
  li        r4, 0x2
  lfs       f0, 0x7DC(r27)
  stw       r5, 0x40(r1)
  lfs       f4, 0x48(r1)
  lfs       f3, 0x3C(r1)
  lfs       f2, 0x4C(r1)
  lfs       f1, 0x40(r1)
  fadds     f4, f4, f3
  lfs       f3, -0x34C(r2)
  fadds     f1, f2, f1
  lwz       r3, 0x20(r1)
  fmuls     f2, f4, f3
  stw       r0, 0x38(r1)
  fmadds    f0, f1, f3, f0
  stw       r3, 0x44(r1)
  stfs      f2, 0x10(r1)
  stfs      f0, 0x14(r1)
  lwz       r3, 0x10(r1)
  lwz       r0, 0x14(r1)
  stw       r3, 0x8(r1)
  stw       r0, 0xC(r1)
  lfs       f1, 0x8(r1)
  lfs       f0, 0xC(r1)
  stfs      f1, 0x30(r1)
  stfs      f0, 0x34(r1)
  lwz       r3, 0x11E4(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x11E4(r31)
  addi      r4, r1, 0x30
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x6858(r13)
  bl        -0x227FC

.loc_0x198:
  addi      r0, r29, 0x55C
  lbzx      r0, r27, r0
  cmplwi    r0, 0
  beq-      .loc_0x1D0
  lwz       r3, -0x6514(r13)
  lfs       f2, 0x5DC(r31)
  lfs       f1, 0x54(r3)
  lfs       f0, -0x358(r2)
  fsubs     f1, f2, f1
  stfs      f1, 0x5DC(r31)
  lfs       f1, 0x5DC(r31)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x1D0
  stfs      f0, 0x5DC(r31)

.loc_0x1D0:
  lfs       f2, 0xC(r30)
  mr        r3, r28
  lfs       f1, 0x0(r30)
  lfs       f0, 0x8(r30)
  fsubs     f1, f2, f1
  stfs      f0, 0xD4(r28)
  stfs      f1, 0xD8(r28)
  lwz       r12, 0x0(r28)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  addi      r30, r30, 0x14
  addi      r31, r31, 0x4
  addi      r29, r29, 0x1

.loc_0x208:
  lwz       r0, 0x540(r27)
  cmplw     r29, r0
  blt+      .loc_0x30
  psq_l     f31,0x78(r1),0,0
  lfd       f31, 0x70(r1)
  lmw       r27, 0x5C(r1)
  lwz       r0, 0x84(r1)
  mtlr      r0
  addi      r1, r1, 0x80
  blr
*/
}

/*
 * --INFO--
 * Address:	8032F824
 * Size:	00006C
 */
void og::newScreen::TitleMsgDrop::end(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  mr        r29, r3
  mr        r31, r29
  b         .loc_0x44

.loc_0x28:
  lwz       r3, 0x11E4(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  addi      r31, r31, 0x4
  addi      r30, r30, 0x1

.loc_0x44:
  lwz       r0, 0x540(r29)
  cmplw     r30, r0
  blt+      .loc_0x28
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8032F890
 * Size:	00018C
 */
void og::newScreen::TitleMsgWave::__ct( (J2DScreen *, J2DPane *, char *))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stmw      r27, 0xC(r1)
  mr        r27, r3
  bl        -0xBBC
  lis       r3, 0x804E
  li        r29, 0
  subi      r0, r3, 0x5DF8
  lfs       f0, -0x354(r2)
  stw       r0, 0x0(r27)
  mr        r28, r29
  lfs       f1, -0x31C(r2)
  li        r30, 0
  stfs      f0, 0x9E4(r27)
  lfs       f0, -0x318(r2)
  stfs      f1, 0x9E8(r27)
  lfs       f1, -0x314(r2)
  stfs      f0, 0x9EC(r27)
  lfs       f0, -0x310(r2)
  stfs      f1, 0x9F0(r27)
  stfs      f0, 0x9F4(r27)

.loc_0x60:
  lwz       r0, 0x540(r27)
  cmplw     r30, r0
  bge-      .loc_0x90
  li        r3, 0x1C
  bl        -0x30BA5C
  mr.       r4, r3
  beq-      .loc_0x84
  bl        -0x6B08
  mr        r4, r3

.loc_0x84:
  addi      r0, r29, 0x7E4
  stwx      r4, r27, r0
  b         .loc_0x98

.loc_0x90:
  addi      r0, r29, 0x7E4
  stwx      r28, r27, r0

.loc_0x98:
  addi      r30, r30, 0x1
  addi      r29, r29, 0x4
  cmpwi     r30, 0x80
  blt+      .loc_0x60
  lis       r4, 0x804E
  lis       r3, 0x804E
  addi      r4, r4, 0x7420
  lfs       f31, -0x358(r2)
  subi      r3, r3, 0x5DDC
  li        r28, 0
  addi      r30, r4, 0x18
  li        r31, 0
  addi      r29, r3, 0x18
  b         .loc_0x160

.loc_0xD0:
  li        r3, 0x14
  bl        -0x30BAC0
  cmplwi    r3, 0
  beq-      .loc_0x13C
  lis       r5, 0x804C
  lis       r4, 0x804C
  addi      r0, r5, 0x14F0
  lis       r6, 0x804A
  stw       r0, 0x0(r3)
  addi      r0, r4, 0x14D8
  lis       r5, 0x804E
  lis       r4, 0x804E
  stw       r0, 0x0(r3)
  li        r8, 0
  subi      r7, r6, 0x1D84
  addi      r6, r5, 0x7420
  stb       r8, 0x4(r3)
  li        r5, 0x15
  subi      r0, r4, 0x5DDC
  stb       r8, 0x5(r3)
  stw       r7, 0x8(r3)
  stw       r6, 0x0(r3)
  stw       r30, 0x8(r3)
  sth       r5, 0xC(r3)
  stw       r8, 0x10(r3)
  stw       r0, 0x0(r3)
  stw       r29, 0x8(r3)

.loc_0x13C:
  addi      r0, r31, 0x9F8
  addi      r4, r28, 0x55C
  stwx      r3, r27, r0
  li        r3, 0
  addi      r0, r31, 0x5DC
  addi      r31, r31, 0x4
  stbx      r3, r27, r4
  addi      r28, r28, 0x1
  stfsx     f31, r27, r0

.loc_0x160:
  lwz       r0, 0x540(r27)
  cmplw     r28, r0
  blt+      .loc_0xD0
  mr        r3, r27
  psq_l     f31,0x28(r1),0,0
  lfd       f31, 0x20(r1)
  lmw       r27, 0xC(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	8032FA1C
 * Size:	000004
 */
void og::newScreen::TitleMsgWave::init(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8032FA20
 * Size:	0000B0
 */
void og::newScreen::TitleMsgWave::start(void)
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
  stw       r28, 0x10(r1)
  mr        r28, r3
  lfd       f31, -0x330(r2)
  mr        r30, r28
  li        r29, 0
  lis       r31, 0x4330
  b         .loc_0x74

.loc_0x3C:
  xoris     r0, r29, 0x8000
  stw       r31, 0x8(r1)
  lfs       f0, 0x9F4(r28)
  stw       r0, 0xC(r1)
  lwz       r3, 0x7E4(r30)
  lfd       f2, 0x8(r1)
  lfs       f1, 0x9E8(r28)
  fsubs     f4, f2, f31
  lfs       f2, 0x9EC(r28)
  lfs       f3, 0x9F0(r28)
  fmuls     f4, f4, f0
  bl        -0x6BB0
  addi      r30, r30, 0x4
  addi      r29, r29, 0x1

.loc_0x74:
  lwz       r0, 0x540(r28)
  cmplw     r29, r0
  blt+      .loc_0x3C
  lfs       f0, -0x348(r2)
  stfs      f0, 0x9E4(r28)
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	8032FAD0
 * Size:	0002E0
 */
void og::newScreen::TitleMsgWave::update(void)
{
/*
.loc_0x0:
  stwu      r1, -0xF0(r1)
  mflr      r0
  stw       r0, 0xF4(r1)
  stfd      f31, 0xE0(r1)
  psq_st    f31,0xE8(r1),0,0
  stfd      f30, 0xD0(r1)
  psq_st    f30,0xD8(r1),0,0
  stfd      f29, 0xC0(r1)
  psq_st    f29,0xC8(r1),0,0
  stfd      f28, 0xB0(r1)
  psq_st    f28,0xB8(r1),0,0
  stfd      f27, 0xA0(r1)
  psq_st    f27,0xA8(r1),0,0
  stfd      f26, 0x90(r1)
  psq_st    f26,0x98(r1),0,0
  stfd      f25, 0x80(r1)
  psq_st    f25,0x88(r1),0,0
  stmw      r27, 0x6C(r1)
  lbz       r0, -0x67C4(r13)
  mr        r28, r3
  extsb.    r0, r0
  bne-      .loc_0x68
  lfs       f0, -0x358(r2)
  li        r0, 0x1
  stb       r0, -0x67C4(r13)
  stfs      f0, -0x67C8(r13)

.loc_0x68:
  lfs       f26, -0x30C(r2)
  mr        r30, r28
  lfd       f27, -0x328(r2)
  li        r29, 0
  lfs       f28, -0x308(r2)
  lis       r31, 0x4330
  lfs       f29, -0x354(r2)
  lfs       f30, -0x304(r2)
  lfs       f31, -0x300(r2)
  b         .loc_0x240

.loc_0x90:
  lwz       r3, 0x7E4(r30)
  bl        -0x6BE0
  lwz       r0, 0x540(r28)
  fmr       f25, f1
  stw       r31, 0x58(r1)
  sub       r0, r0, r29
  lfs       f0, -0x67C8(r13)
  stw       r0, 0x5C(r1)
  lfd       f1, 0x58(r1)
  fsubs     f1, f1, f27
  fmadds    f1, f26, f1, f0
  fcmpo     cr0, f1, f28
  cror      2, 0x1, 0x2
  bne-      .loc_0xCC
  fsubs     f1, f1, f28

.loc_0xCC:
  bl        -0x260380
  frsp      f0, f1
  lfs       f2, 0x7E0(r28)
  lwz       r3, 0x140(r30)
  fadds     f0, f29, f0
  fmuls     f0, f0, f30
  fmadds    f1, f0, f31, f29
  fadds     f0, f29, f0
  fmuls     f1, f1, f25
  fmuls     f0, f0, f25
  fmuls     f1, f2, f1
  stfs      f1, 0xCC(r3)
  stfs      f0, 0xD0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  addi      r4, r29, 0x55C
  lbzx      r0, r28, r4
  cmplwi    r0, 0
  bne-      .loc_0x238
  lwz       r3, -0x6514(r13)
  lfs       f2, 0x5DC(r30)
  lfs       f1, 0x54(r3)
  lfs       f0, -0x2FC(r2)
  fadds     f1, f2, f1
  stfs      f1, 0x5DC(r30)
  lfs       f1, 0x5DC(r30)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x238
  li        r0, 0x1
  addi      r3, r1, 0x24
  stbx      r0, r28, r4
  li        r5, 0
  lwz       r27, 0x140(r30)
  mr        r4, r27
  bl        -0x2F6C94
  lwz       r5, 0x24(r1)
  mr        r4, r27
  lwz       r6, 0x28(r1)
  addi      r3, r1, 0x18
  lwz       r0, 0x2C(r1)
  stw       r5, 0x48(r1)
  li        r5, 0x3
  stw       r6, 0x4C(r1)
  stw       r0, 0x50(r1)
  bl        -0x2F6CBC
  lwz       r4, 0x18(r1)
  lis       r3, 0x804C
  lwz       r5, 0x1C(r1)
  addi      r0, r3, 0x1514
  stw       r4, 0x3C(r1)
  li        r4, 0x2
  lfs       f0, 0x7DC(r28)
  stw       r5, 0x40(r1)
  lfs       f4, 0x48(r1)
  lfs       f3, 0x3C(r1)
  lfs       f2, 0x4C(r1)
  lfs       f1, 0x40(r1)
  fadds     f4, f4, f3
  lfs       f3, -0x34C(r2)
  fadds     f1, f2, f1
  lwz       r3, 0x20(r1)
  fmuls     f2, f4, f3
  stw       r0, 0x38(r1)
  fmadds    f0, f1, f3, f0
  stw       r3, 0x44(r1)
  stfs      f2, 0x10(r1)
  stfs      f0, 0x14(r1)
  lwz       r3, 0x10(r1)
  lwz       r0, 0x14(r1)
  stw       r3, 0x8(r1)
  stw       r0, 0xC(r1)
  lfs       f1, 0x8(r1)
  lfs       f0, 0xC(r1)
  stfs      f1, 0x30(r1)
  stfs      f0, 0x34(r1)
  lwz       r3, 0x9F8(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x9F8(r30)
  addi      r4, r1, 0x30
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x9F8(r30)
  li        r4, 0x64
  bl        0x89E8C

.loc_0x238:
  addi      r30, r30, 0x4
  addi      r29, r29, 0x1

.loc_0x240:
  lwz       r0, 0x540(r28)
  cmplw     r29, r0
  blt+      .loc_0x90
  lwz       r3, -0x6514(r13)
  lfs       f2, 0x9E4(r28)
  lfs       f1, 0x54(r3)
  lfs       f0, -0x358(r2)
  fsubs     f1, f2, f1
  stfs      f1, 0x9E4(r28)
  lfs       f1, 0x9E4(r28)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x284
  mr        r3, r28
  lwz       r12, 0x0(r28)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     

.loc_0x284:
  lfs       f1, -0x67C8(r13)
  lfs       f0, -0x2FC(r2)
  fadds     f0, f1, f0
  stfs      f0, -0x67C8(r13)
  psq_l     f31,0xE8(r1),0,0
  lfd       f31, 0xE0(r1)
  psq_l     f30,0xD8(r1),0,0
  lfd       f30, 0xD0(r1)
  psq_l     f29,0xC8(r1),0,0
  lfd       f29, 0xC0(r1)
  psq_l     f28,0xB8(r1),0,0
  lfd       f28, 0xB0(r1)
  psq_l     f27,0xA8(r1),0,0
  lfd       f27, 0xA0(r1)
  psq_l     f26,0x98(r1),0,0
  lfd       f26, 0x90(r1)
  psq_l     f25,0x88(r1),0,0
  lfd       f25, 0x80(r1)
  lmw       r27, 0x6C(r1)
  lwz       r0, 0xF4(r1)
  mtlr      r0
  addi      r1, r1, 0xF0
  blr
*/
}

/*
 * --INFO--
 * Address:	8032FDB0
 * Size:	00006C
 */
void og::newScreen::TitleMsgWave::end(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  mr        r29, r3
  mr        r31, r29
  b         .loc_0x44

.loc_0x28:
  lwz       r3, 0x9F8(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  addi      r31, r31, 0x4
  addi      r30, r30, 0x1

.loc_0x44:
  lwz       r0, 0x540(r29)
  cmplw     r30, r0
  blt+      .loc_0x28
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8032FE1C
 * Size:	000014
 */
void og::newScreen::TitleMsgWave::setParam( (float, float, float, float))
{
/*
.loc_0x0:
  stfs      f1, 0x9E8(r3)
  stfs      f2, 0x9EC(r3)
  stfs      f3, 0x9F0(r3)
  stfs      f4, 0x9F4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8032FE30
 * Size:	0000F8
 */
void og::newScreen::TitleMsgClash::__ct( (J2DScreen *, J2DPane *, char *))
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
  stw       r28, 0x10(r1)
  mr        r31, r3
  bl        -0x1168
  lis       r3, 0x804E
  lfs       f31, -0x358(r2)
  subi      r0, r3, 0x5E40
  lfs       f0, -0x2F8(r2)
  stw       r0, 0x0(r31)
  li        r28, 0
  li        r29, 0
  stfs      f31, 0x7E4(r31)
  stfs      f0, 0x7E8(r31)
  b         .loc_0xC0

.loc_0x54:
  li        r3, 0xC
  bl        -0x30BFE4
  mr.       r30, r3
  beq-      .loc_0x9C
  li        r4, 0x2
  bl        0x89D0C
  lis       r4, 0x804E
  lis       r3, 0x804E
  subi      r0, r4, 0x5E10
  li        r5, 0x16
  stw       r0, 0x0(r30)
  li        r4, 0x17
  subi      r0, r3, 0x5E28
  lwz       r3, 0x8(r30)
  sth       r5, 0xC(r3)
  lwz       r3, 0x8(r30)
  sth       r4, 0x20(r3)
  stw       r0, 0x0(r30)

.loc_0x9C:
  addi      r0, r29, 0x7EC
  addi      r3, r28, 0x55C
  stwx      r30, r31, r0
  li        r4, 0
  addi      r0, r29, 0x5DC
  addi      r29, r29, 0x4
  stbx      r4, r31, r3
  addi      r28, r28, 0x1
  stfsx     f31, r31, r0

.loc_0xC0:
  lwz       r0, 0x540(r31)
  cmplw     r28, r0
  blt+      .loc_0x54
  mr        r3, r31
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	8032FF28
 * Size:	000014
 */
void og::newScreen::TitleMsgClash::init(void)
{
/*
.loc_0x0:
  lfs       f1, -0x358(r2)
  lfs       f0, -0x2F8(r2)
  stfs      f1, 0x7E4(r3)
  stfs      f0, 0x7E8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8032FF3C
 * Size:	000214
 */
void og::newScreen::TitleMsgClash::update(void)
{
/*
.loc_0x0:
  stwu      r1, -0x80(r1)
  mflr      r0
  stw       r0, 0x84(r1)
  stfd      f31, 0x70(r1)
  psq_st    f31,0x78(r1),0,0
  stw       r31, 0x6C(r1)
  stw       r30, 0x68(r1)
  stw       r29, 0x64(r1)
  stw       r28, 0x60(r1)
  lfs       f0, -0x34C(r2)
  mr        r29, r3
  lfs       f1, 0x7E4(r3)
  lfs       f2, -0x354(r2)
  fsubs     f0, f1, f0
  stfs      f0, 0x7E4(r3)
  lfs       f1, 0x7E8(r3)
  lfs       f0, 0x7E4(r3)
  fadds     f0, f1, f0
  stfs      f0, 0x7E8(r3)
  lfs       f0, 0x7E8(r3)
  fcmpo     cr0, f0, f2
  bge-      .loc_0x70
  stfs      f2, 0x7E8(r29)
  lfs       f1, -0x2F4(r2)
  lfs       f0, 0x7E4(r29)
  fneg      f0, f0
  fmuls     f0, f1, f0
  stfs      f0, 0x7E4(r29)

.loc_0x70:
  lwz       r3, -0x6858(r13)
  bl        -0x23020
  lfs       f31, -0x354(r2)
  mr        r31, r29
  li        r30, 0
  b         .loc_0x1E0

.loc_0x88:
  lfs       f1, 0x7E8(r29)
  lfs       f0, 0x7E0(r29)
  lwz       r3, 0x140(r31)
  fmuls     f0, f1, f0
  stfs      f0, 0xCC(r3)
  stfs      f31, 0xD0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  addi      r4, r30, 0x55C
  lbzx      r0, r29, r4
  cmplwi    r0, 0
  bne-      .loc_0x1D8
  lwz       r3, -0x6514(r13)
  lfs       f2, 0x5DC(r31)
  lfs       f1, 0x54(r3)
  lfs       f0, -0x354(r2)
  fadds     f1, f2, f1
  stfs      f1, 0x5DC(r31)
  lfs       f1, 0x5DC(r31)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x1D8
  li        r0, 0x1
  addi      r3, r1, 0x24
  stbx      r0, r29, r4
  li        r5, 0
  lwz       r28, 0x140(r31)
  mr        r4, r28
  bl        -0x2F70A0
  lwz       r5, 0x24(r1)
  mr        r4, r28
  lwz       r6, 0x28(r1)
  addi      r3, r1, 0x18
  lwz       r0, 0x2C(r1)
  stw       r5, 0x48(r1)
  li        r5, 0x3
  stw       r6, 0x4C(r1)
  stw       r0, 0x50(r1)
  bl        -0x2F70C8
  lwz       r4, 0x18(r1)
  lis       r3, 0x804C
  lwz       r5, 0x1C(r1)
  addi      r0, r3, 0x1514
  stw       r4, 0x3C(r1)
  li        r4, 0x2
  lfs       f0, 0x7DC(r29)
  stw       r5, 0x40(r1)
  lfs       f4, 0x48(r1)
  lfs       f3, 0x3C(r1)
  lfs       f2, 0x4C(r1)
  lfs       f1, 0x40(r1)
  fadds     f4, f4, f3
  lfs       f3, -0x34C(r2)
  fadds     f1, f2, f1
  lwz       r3, 0x20(r1)
  fmuls     f2, f4, f3
  stw       r0, 0x38(r1)
  fmadds    f0, f1, f3, f0
  stw       r3, 0x44(r1)
  stfs      f2, 0x10(r1)
  stfs      f0, 0x14(r1)
  lwz       r3, 0x10(r1)
  lwz       r0, 0x14(r1)
  stw       r3, 0x8(r1)
  stw       r0, 0xC(r1)
  lfs       f1, 0x8(r1)
  lfs       f0, 0xC(r1)
  stfs      f1, 0x30(r1)
  stfs      f0, 0x34(r1)
  lwz       r3, 0x7EC(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x7EC(r31)
  addi      r4, r1, 0x30
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x7EC(r31)
  li        r4, 0x82
  bl        0x89D50

.loc_0x1D8:
  addi      r31, r31, 0x4
  addi      r30, r30, 0x1

.loc_0x1E0:
  lwz       r0, 0x540(r29)
  cmplw     r30, r0
  blt+      .loc_0x88
  psq_l     f31,0x78(r1),0,0
  lwz       r0, 0x84(r1)
  lfd       f31, 0x70(r1)
  lwz       r31, 0x6C(r1)
  lwz       r30, 0x68(r1)
  lwz       r29, 0x64(r1)
  lwz       r28, 0x60(r1)
  mtlr      r0
  addi      r1, r1, 0x80
  blr
*/
}

/*
 * --INFO--
 * Address:	80330150
 * Size:	00006C
 */
void og::newScreen::TitleMsgClash::end(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  mr        r29, r3
  mr        r31, r29
  b         .loc_0x44

.loc_0x28:
  lwz       r3, 0x7EC(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  addi      r31, r31, 0x4
  addi      r30, r30, 0x1

.loc_0x44:
  lwz       r0, 0x540(r29)
  cmplw     r30, r0
  blt+      .loc_0x28
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	803301BC
 * Size:	000004
 */
void og::newScreen::TitleMsg::start(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	803301C0
 * Size:	000084
 */
void efx2d::T2DCvnameChal::__dt(void)
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
  beq-      .loc_0x68
  lis       r3, 0x804E
  subi      r3, r3, 0x5DDC
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x18
  stw       r0, 0x8(r30)
  beq-      .loc_0x58
  lis       r4, 0x804E
  addi      r3, r30, 0x8
  addi      r5, r4, 0x7420
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x18
  stw       r0, 0x8(r30)
  bl        -0x2A0578

.loc_0x58:
  extsh.    r0, r31
  ble-      .loc_0x68
  mr        r3, r30
  bl        -0x30C170

.loc_0x68:
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
 * Address:	80330244
 * Size:	000008
 */
void P2JME::Analyzer::tagColor( (void const *, unsigned long))
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	8033024C
 * Size:	000008
 */
void P2JME::Analyzer::tagSize( (void const *, unsigned long))
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	80330254
 * Size:	000008
 */
void P2JME::Analyzer::tagRuby( (void const *, unsigned long))
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	8033025C
 * Size:	000008
 */
void P2JME::Analyzer::tagFont( (void const *, unsigned long))
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	80330264
 * Size:	000008
 */
void P2JME::Analyzer::tagImage( (unsigned short, void const *, unsigned long))
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	8033026C
 * Size:	000008
 */
void P2JME::Analyzer::tagColorEX( (unsigned short, void const *, unsigned long))
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	80330274
 * Size:	000008
 */
void P2JME::Analyzer::tagControl( (unsigned short, void const *, unsigned long))
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	8033027C
 * Size:	000008
 */
void P2JME::Analyzer::tagPosition( (unsigned short, void const *, unsigned long))
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	80330284
 * Size:	000008
 */
void @8@efx2d::T2DCvnameChal::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x8
  b         -0xC8
*/
}



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
 * Size:	000024
 */
void CarryInfo::CarryInfo()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void CarryInfo::appear()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8011AFD0
 * Size:	00000C
 */
void CarryInfo::disappear()
{
/*
.loc_0x0:
  li        r0, 0x1
  stb       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void CarryInfo::hide()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8011AFDC
 * Size:	000264
 */
void CarryInfo::update(const CarryInfoParam &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  lbz       r5, 0xC(r3)
  cmplwi    r5, 0x2
  beq-      .loc_0x25C
  lwz       r0, 0x0(r4)
  cmpwi     r0, 0x1
  beq-      .loc_0x14C
  bge-      .loc_0x25C
  cmpwi     r0, 0
  bge-      .loc_0x2C
  b         .loc_0x25C

.loc_0x2C:
  cmpwi     r5, 0x1
  beq-      .loc_0x84
  bge-      .loc_0xE4
  cmpwi     r5, 0
  bge-      .loc_0x44
  b         .loc_0xE4

.loc_0x44:
  lfs       f2, 0x10(r4)
  lfs       f0, 0x4(r3)
  lfs       f1, -0x67FC(r2)
  fsubs     f0, f2, f0
  lfs       f3, 0x0(r3)
  fmuls     f0, f1, f0
  fadds     f0, f3, f0
  stfs      f0, 0x0(r3)
  lfs       f1, 0x4(r3)
  lfs       f0, 0x0(r3)
  fadds     f0, f1, f0
  stfs      f0, 0x4(r3)
  lfs       f0, 0x4(r3)
  fdivs     f0, f0, f2
  stfs      f0, 0x8(r3)
  b         .loc_0xE4

.loc_0x84:
  lfs       f0, 0x4(r3)
  lfs       f2, -0x67FC(r2)
  fneg      f1, f0
  lfs       f3, 0x0(r3)
  lfs       f0, -0x6800(r2)
  fmuls     f1, f2, f1
  fadds     f1, f3, f1
  stfs      f1, 0x0(r3)
  lfs       f2, 0x4(r3)
  lfs       f1, 0x0(r3)
  fadds     f1, f2, f1
  stfs      f1, 0x4(r3)
  lfs       f1, 0x4(r3)
  fcmpo     cr0, f1, f0
  bge-      .loc_0xD8
  stfs      f0, 0x0(r3)
  li        r0, 0x2
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  stb       r0, 0xC(r3)
  b         .loc_0xE4

.loc_0xD8:
  lfs       f0, 0x10(r4)
  fdivs     f0, f1, f0
  stfs      f0, 0x8(r3)

.loc_0xE4:
  lfs       f1, 0x0(r3)
  lfs       f0, -0x67F8(r2)
  lfs       f2, -0x67F4(r2)
  fmuls     f0, f1, f0
  stfs      f0, 0x0(r3)
  lfs       f0, 0x8(r3)
  fcmpo     cr0, f0, f2
  ble-      .loc_0x108
  b         .loc_0x10C

.loc_0x108:
  fmr       f2, f0

.loc_0x10C:
  lfs       f1, -0x67F0(r2)
  lfs       f0, -0x6800(r2)
  fmuls     f1, f1, f2
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x130
  lfs       f0, -0x67EC(r2)
  fadds     f0, f0, f1
  b         .loc_0x138

.loc_0x130:
  lfs       f0, -0x67EC(r2)
  fsubs     f0, f1, f0

.loc_0x138:
  fctiwz    f0, f0
  stfd      f0, 0x8(r1)
  lwz       r0, 0xC(r1)
  stb       r0, 0xD(r3)
  b         .loc_0x25C

.loc_0x14C:
  lbz       r5, 0xE(r3)
  lfs       f1, 0x10(r4)
  addi      r0, r5, 0x1
  stb       r0, 0xE(r3)
  lfs       f0, 0x4(r3)
  fcmpo     cr0, f0, f1
  bge-      .loc_0x180
  fsubs     f0, f1, f0
  lfs       f1, -0x67FC(r2)
  lfs       f2, 0x0(r3)
  fmuls     f0, f1, f0
  fadds     f0, f2, f0
  stfs      f0, 0x0(r3)

.loc_0x180:
  lfs       f1, 0x4(r3)
  lfs       f0, 0x0(r3)
  lfs       f2, -0x67E8(r2)
  fadds     f3, f1, f0
  lfs       f1, 0x10(r4)
  lfs       f0, -0x67F4(r2)
  stfs      f3, 0x4(r3)
  lfs       f3, 0x0(r3)
  fmuls     f2, f3, f2
  stfs      f2, 0x0(r3)
  lfs       f2, 0x4(r3)
  fdivs     f1, f2, f1
  stfs      f1, 0x8(r3)
  lfs       f1, 0x8(r3)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x1C4
  stfs      f0, 0x8(r3)

.loc_0x1C4:
  lbz       r0, 0xC(r3)
  cmpwi     r0, 0x1
  beq-      .loc_0x224
  bge-      .loc_0x25C
  cmpwi     r0, 0
  bge-      .loc_0x1E0
  b         .loc_0x25C

.loc_0x1E0:
  lfs       f2, -0x67F0(r2)
  lfs       f1, 0x8(r3)
  lfs       f0, -0x6800(r2)
  fmuls     f1, f2, f1
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x208
  lfs       f0, -0x67EC(r2)
  fadds     f0, f0, f1
  b         .loc_0x210

.loc_0x208:
  lfs       f0, -0x67EC(r2)
  fsubs     f0, f1, f0

.loc_0x210:
  fctiwz    f0, f0
  stfd      f0, 0x8(r1)
  lwz       r0, 0xC(r1)
  stb       r0, 0xD(r3)
  b         .loc_0x25C

.loc_0x224:
  lbz       r4, 0xD(r3)
  cmplwi    r4, 0x8
  ble-      .loc_0x23C
  subi      r0, r4, 0x8
  stb       r0, 0xD(r3)
  b         .loc_0x25C

.loc_0x23C:
  li        r0, 0
  lfs       f0, -0x6800(r2)
  stb       r0, 0xD(r3)
  li        r0, 0x2
  stfs      f0, 0x0(r3)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  stb       r0, 0xC(r3)

.loc_0x25C:
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000150
 */
void CarryInfo::initDraw(Graphics &)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8011B240
 * Size:	0004AC
 */
void CarryInfo::draw(Graphics &, CarryInfoParam &)
{
/*
.loc_0x0:
  stwu      r1, -0x150(r1)
  mflr      r0
  stw       r0, 0x154(r1)
  stfd      f31, 0x140(r1)
  psq_st    f31,0x148(r1),0,0
  stfd      f30, 0x130(r1)
  psq_st    f30,0x138(r1),0,0
  stfd      f29, 0x120(r1)
  psq_st    f29,0x128(r1),0,0
  stfd      f28, 0x110(r1)
  psq_st    f28,0x118(r1),0,0
  stmw      r27, 0xFC(r1)
  mr        r29, r3
  mr        r30, r4
  lbz       r0, 0xC(r3)
  mr        r31, r5
  cmplwi    r0, 0x2
  beq-      .loc_0x478
  lwz       r27, 0x25C(r30)
  li        r4, 0x1
  mr        r3, r27
  bl        0x309EC8
  lfs       f0, 0x0(r3)
  li        r4, 0x1
  lfs       f1, 0x8(r29)
  fmuls     f0, f0, f1
  stfs      f0, 0x18(r1)
  lfs       f0, 0x4(r3)
  fmuls     f0, f0, f1
  stfs      f0, 0x28(r1)
  lfs       f0, 0x8(r3)
  fmuls     f0, f0, f1
  stfs      f0, 0x38(r1)
  lfs       f0, 0x10(r3)
  fmuls     f0, f0, f1
  stfs      f0, 0x1C(r1)
  lfs       f0, 0x14(r3)
  fmuls     f0, f0, f1
  stfs      f0, 0x2C(r1)
  lfs       f0, 0x18(r3)
  fmuls     f0, f0, f1
  stfs      f0, 0x3C(r1)
  lfs       f0, 0x20(r3)
  fmuls     f0, f0, f1
  stfs      f0, 0x20(r1)
  lfs       f0, 0x24(r3)
  fmuls     f0, f0, f1
  stfs      f0, 0x30(r1)
  lfs       f0, 0x28(r3)
  mr        r3, r27
  fmuls     f0, f0, f1
  stfs      f0, 0x40(r1)
  lfs       f0, 0x4(r31)
  stfs      f0, 0x24(r1)
  lfs       f1, 0x8(r31)
  lfs       f0, 0x4(r29)
  fadds     f0, f1, f0
  stfs      f0, 0x34(r1)
  lfs       f0, 0xC(r31)
  stfs      f0, 0x44(r1)
  bl        0x309E2C
  addi      r4, r1, 0x18
  addi      r5, r1, 0x48
  bl        -0x3103C
  addi      r3, r1, 0x48
  li        r4, 0
  bl        -0x31DD0
  lwz       r6, 0x0(r31)
  cmpwi     r6, 0x1
  beq-      .loc_0x218
  bge-      .loc_0x45C
  cmpwi     r6, 0
  bge-      .loc_0x128
  b         .loc_0x45C

.loc_0x128:
  lwz       r0, 0x1C(r31)
  cmpwi     r0, 0
  bne-      .loc_0x148
  lfs       f29, -0x67E4(r2)
  lfs       f28, -0x67E0(r2)
  lfs       f31, -0x67DC(r2)
  lfs       f30, -0x67D8(r2)
  b         .loc_0x158

.loc_0x148:
  lfs       f29, -0x67E0(r2)
  lfs       f28, -0x67E4(r2)
  lfs       f31, -0x67D4(r2)
  lfs       f30, -0x67D0(r2)

.loc_0x158:
  lbz       r0, 0x15(r31)
  lis       r4, 0x804B
  lis       r3, 0x804B
  lbz       r10, 0xD(r29)
  rlwinm    r5,r0,2,0,29
  subi      r0, r4, 0x3CD4
  add       r4, r0, r5
  subi      r0, r3, 0x3CB8
  add       r5, r0, r5
  lfs       f1, -0x6800(r2)
  lbz       r9, 0x2(r4)
  mr        r3, r29
  lbz       r8, 0x1(r4)
  fmr       f2, f1
  lbz       r7, 0x0(r4)
  mr        r4, r30
  lbz       r12, 0x2(r5)
  addi      r6, r1, 0x14
  lbz       r11, 0x1(r5)
  lbz       r0, 0x0(r5)
  li        r5, 0xA
  stb       r7, 0x14(r1)
  lfs       f3, -0x67F4(r2)
  stb       r8, 0x15(r1)
  stb       r9, 0x16(r1)
  stb       r10, 0x17(r1)
  stb       r0, 0x10(r1)
  stb       r11, 0x11(r1)
  stb       r12, 0x12(r1)
  stb       r10, 0x13(r1)
  bl        0x604
  fmr       f2, f31
  lfs       f1, -0x6800(r2)
  fmr       f3, f29
  lhz       r5, 0x16(r31)
  mr        r3, r29
  mr        r4, r30
  addi      r6, r1, 0x14
  bl        .loc_0x4AC
  fmr       f2, f30
  lfs       f1, -0x6800(r2)
  fmr       f3, f28
  lhz       r5, 0x18(r31)
  mr        r3, r29
  mr        r4, r30
  addi      r6, r1, 0x10
  bl        .loc_0x4AC
  b         .loc_0x478

.loc_0x218:
  lbz       r3, 0xE(r29)
  lis       r0, 0x4330
  stw       r0, 0x78(r1)
  rlwinm    r0,r3,27,0,4
  rlwinm    r3,r3,1,31,31
  sub       r0, r0, r3
  lfd       f5, -0x67A8(r2)
  rlwinm    r0,r0,5,0,31
  lfs       f6, -0x67CC(r2)
  add       r0, r0, r3
  lfs       f2, -0x67C8(r2)
  xoris     r0, r0, 0x8000
  lfs       f0, -0x6800(r2)
  stw       r0, 0x7C(r1)
  lfs       f3, -0x67EC(r2)
  lfd       f4, 0x78(r1)
  lfs       f1, -0x67F4(r2)
  fsubs     f4, f4, f5
  fmuls     f4, f6, f4
  fmuls     f2, f4, f2
  fcmpo     cr0, f2, f0
  bge-      .loc_0x29C
  lfs       f0, -0x67C4(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f2, f0
  fctiwz    f0, f0
  stfd      f0, 0x80(r1)
  lwz       r0, 0x84(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0
  fneg      f0, f0
  b         .loc_0x2C0

.loc_0x29C:
  lfs       f0, -0x67C0(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f2, f0
  fctiwz    f0, f0
  stfd      f0, 0x88(r1)
  lwz       r0, 0x8C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0

.loc_0x2C0:
  lbz       r27, 0xD(r29)
  lis       r5, 0x4330
  li        r7, 0x7F
  li        r10, 0xB
  li        r9, 0
  rlwinm    r0,r27,0,24,31
  stw       r7, 0x94(r1)
  fadds     f2, f1, f0
  li        r28, 0xFF
  li        r12, 0x8A
  stw       r5, 0x90(r1)
  li        r11, 0x15
  lfd       f0, -0x67A0(r2)
  lfd       f1, 0x90(r1)
  fmuls     f4, f3, f2
  stw       r10, 0xAC(r1)
  mr        r3, r29
  fsubs     f2, f1, f0
  lfs       f3, -0x67F0(r2)
  stw       r5, 0xA8(r1)
  lfs       f5, -0x67BC(r2)
  mr        r4, r30
  lfd       f1, 0xA8(r1)
  stw       r9, 0xC4(r1)
  fsubs     f10, f3, f2
  fsubs     f3, f1, f0
  lfs       f7, -0x67B8(r2)
  stw       r5, 0xC0(r1)
  addi      r6, r1, 0xC
  lfs       f1, -0x67B4(r2)
  lfd       f2, 0xC0(r1)
  stw       r27, 0xDC(r1)
  fsubs     f9, f5, f3
  fsubs     f6, f2, f0
  lfs       f2, -0x6800(r2)
  stw       r5, 0xD8(r1)
  lfs       f3, -0x67F4(r2)
  lfd       f5, 0xD8(r1)
  fsubs     f7, f7, f6
  stw       r0, 0xE4(r1)
  fsubs     f6, f5, f0
  stw       r5, 0xE0(r1)
  lfd       f5, 0xE0(r1)
  stw       r7, 0x9C(r1)
  fsubs     f5, f5, f0
  stw       r5, 0x98(r1)
  lfd       f8, 0x98(r1)
  fsubs     f6, f6, f5
  stw       r10, 0xB4(r1)
  fsubs     f8, f8, f0
  stw       r5, 0xB0(r1)
  lfd       f5, 0xB0(r1)
  fmadds    f10, f4, f10, f8
  stw       r9, 0xCC(r1)
  fsubs     f8, f5, f0
  stw       r5, 0xC8(r1)
  fctiwz    f10, f10
  lfd       f5, 0xC8(r1)
  fmadds    f8, f4, f9, f8
  stfd      f10, 0xA0(r1)
  fsubs     f5, f5, f0
  fctiwz    f8, f8
  stw       r0, 0xEC(r1)
  lwz       r8, 0xA4(r1)
  stw       r5, 0xE8(r1)
  fmadds    f7, f4, f7, f5
  lfd       f5, 0xE8(r1)
  fctiwz    f7, f7
  stfd      f8, 0xB8(r1)
  fsubs     f0, f5, f0
  stb       r7, 0x8(r1)
  lwz       r7, 0xBC(r1)
  fmadds    f0, f4, f6, f0
  stfd      f7, 0xD0(r1)
  stb       r10, 0x9(r1)
  fctiwz    f0, f0
  lwz       r5, 0xD4(r1)
  stb       r9, 0xA(r1)
  stfd      f0, 0xF0(r1)
  stb       r27, 0xB(r1)
  lwz       r0, 0xF4(r1)
  stb       r28, 0xC(r1)
  stb       r12, 0xD(r1)
  stb       r11, 0xE(r1)
  stb       r27, 0xF(r1)
  stb       r8, 0x8(r1)
  stb       r7, 0x9(r1)
  stb       r5, 0xA(r1)
  stb       r0, 0xB(r1)
  lwz       r5, 0x20(r31)
  bl        .loc_0x4AC
  fneg      f1, f1
  lfs       f3, -0x67EC(r2)
  lfs       f0, -0x67B0(r2)
  mr        r3, r29
  lfs       f2, -0x6800(r2)
  mr        r4, r30
  fmsubs    f1, f3, f1, f0
  lfs       f3, -0x67F4(r2)
  addi      r6, r1, 0x8
  li        r5, 0xB
  bl        0x380
  b         .loc_0x478

.loc_0x45C:
  lis       r3, 0x8048
  lis       r4, 0x8048
  subi      r5, r4, 0x4D84
  subi      r3, r3, 0x4D98
  li        r4, 0x193
  crclr     6, 0x6
  bl        -0xF1074

.loc_0x478:
  psq_l     f31,0x148(r1),0,0
  lfd       f31, 0x140(r1)
  psq_l     f30,0x138(r1),0,0
  lfd       f30, 0x130(r1)
  psq_l     f29,0x128(r1),0,0
  lfd       f29, 0x120(r1)
  psq_l     f28,0x118(r1),0,0
  lfd       f28, 0x110(r1)
  lmw       r27, 0xFC(r1)
  lwz       r0, 0x154(r1)
  mtlr      r0
  addi      r1, r1, 0x150
  blr       

.loc_0x4AC:
*/
}

/*
 * --INFO--
 * Address:	8011B6EC
 * Size:	000328
 */
void CarryInfo::drawNumber(Graphics &, float, float, int, Color4 &, float)
{
/*
.loc_0x0:
  stwu      r1, -0x70(r1)
  mflr      r0
  stw       r0, 0x74(r1)
  stfd      f31, 0x60(r1)
  psq_st    f31,0x68(r1),0,0
  stfd      f30, 0x50(r1)
  psq_st    f30,0x58(r1),0,0
  stfd      f29, 0x40(r1)
  psq_st    f29,0x48(r1),0,0
  stfd      f28, 0x30(r1)
  psq_st    f28,0x38(r1),0,0
  stfd      f27, 0x20(r1)
  psq_st    f27,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  mr        r30, r5
  fmr       f27, f1
  fmr       f28, f2
  cmpwi     r30, 0xA
  fmr       f29, f3
  mr        r28, r3
  mr        r29, r4
  mr        r31, r6
  bge-      .loc_0x78
  bl        .loc_0x328
  lfs       f0, -0x67B4(r2)
  fmuls     f1, f0, f29
  b         .loc_0x2E0

.loc_0x78:
  cmpwi     r30, 0x64
  bge-      .loc_0xF8
  lis       r5, 0x6666
  lfs       f0, -0x6798(r2)
  addi      r0, r5, 0x6667
  mulhw     r0, r0, r30
  fmuls     f31, f0, f29
  fsubs     f1, f27, f31
  srawi     r0, r0, 0x2
  rlwinm    r5,r0,1,31,31
  add       r5, r0, r5
  bl        .loc_0x328
  lis       r3, 0x6666
  fmr       f2, f28
  addi      r0, r3, 0x6667
  fmr       f3, f29
  mulhw     r0, r0, r30
  fadds     f1, f27, f31
  mr        r3, r28
  mr        r4, r29
  mr        r6, r31
  srawi     r0, r0, 0x2
  rlwinm    r5,r0,1,31,31
  add       r0, r0, r5
  mulli     r0, r0, 0xA
  sub       r5, r30, r0
  bl        .loc_0x328
  lfs       f0, -0x67B4(r2)
  lfs       f1, -0x6794(r2)
  fmuls     f0, f0, f29
  fmadds    f1, f1, f31, f0
  b         .loc_0x2E0

.loc_0xF8:
  cmpwi     r30, 0x3E8
  bge-      .loc_0x1C4
  lis       r5, 0x51EC
  lfs       f0, -0x6790(r2)
  subi      r0, r5, 0x7AE1
  mulhw     r0, r0, r30
  fmuls     f31, f0, f29
  fsubs     f1, f27, f31
  srawi     r0, r0, 0x5
  rlwinm    r5,r0,1,31,31
  add       r5, r0, r5
  bl        .loc_0x328
  lis       r3, 0x6666
  fmr       f1, f27
  addi      r8, r3, 0x6667
  fmr       f2, f28
  mulhw     r0, r8, r30
  fmr       f3, f29
  mr        r3, r28
  mr        r4, r29
  mr        r6, r31
  srawi     r0, r0, 0x2
  rlwinm    r5,r0,1,31,31
  add       r7, r0, r5
  mulhw     r0, r8, r7
  srawi     r0, r0, 0x2
  rlwinm    r5,r0,1,31,31
  add       r0, r0, r5
  mulli     r0, r0, 0xA
  sub       r5, r7, r0
  bl        .loc_0x328
  lis       r3, 0x6666
  fmr       f2, f28
  addi      r0, r3, 0x6667
  fmr       f3, f29
  mulhw     r0, r0, r30
  fadds     f1, f27, f31
  mr        r3, r28
  mr        r4, r29
  mr        r6, r31
  srawi     r0, r0, 0x2
  rlwinm    r5,r0,1,31,31
  add       r0, r0, r5
  mulli     r0, r0, 0xA
  sub       r5, r30, r0
  bl        .loc_0x328
  lfs       f0, -0x67B4(r2)
  lfs       f1, -0x6794(r2)
  fmuls     f0, f0, f29
  fmadds    f1, f1, f31, f0
  b         .loc_0x2E0

.loc_0x1C4:
  lfs       f1, -0x6798(r2)
  lis       r5, 0x1062
  addi      r0, r5, 0x4DD3
  lfs       f0, -0x67B0(r2)
  fmuls     f30, f1, f29
  mulhw     r0, r0, r30
  fmuls     f31, f0, f30
  srawi     r0, r0, 0x6
  fsubs     f1, f27, f31
  rlwinm    r5,r0,1,31,31
  add       r5, r0, r5
  bl        .loc_0x328
  lis       r4, 0x51EC
  lis       r3, 0x6666
  subi      r0, r4, 0x7AE1
  fmr       f2, f28
  mulhw     r5, r0, r30
  addi      r0, r3, 0x6667
  fmr       f3, f29
  mr        r3, r28
  fsubs     f1, f27, f30
  mr        r4, r29
  srawi     r5, r5, 0x5
  mr        r6, r31
  rlwinm    r7,r5,1,31,31
  add       r7, r5, r7
  mulhw     r0, r0, r7
  srawi     r0, r0, 0x2
  rlwinm    r5,r0,1,31,31
  add       r0, r0, r5
  mulli     r0, r0, 0xA
  sub       r5, r7, r0
  bl        .loc_0x328
  lis       r3, 0x6666
  fmr       f2, f28
  addi      r8, r3, 0x6667
  fmr       f3, f29
  mulhw     r0, r8, r30
  fadds     f1, f27, f30
  mr        r3, r28
  mr        r4, r29
  mr        r6, r31
  srawi     r0, r0, 0x2
  rlwinm    r5,r0,1,31,31
  add       r7, r0, r5
  mulhw     r0, r8, r7
  srawi     r0, r0, 0x2
  rlwinm    r5,r0,1,31,31
  add       r0, r0, r5
  mulli     r0, r0, 0xA
  sub       r5, r7, r0
  bl        .loc_0x328
  lis       r3, 0x6666
  fmr       f2, f28
  addi      r0, r3, 0x6667
  fmr       f3, f29
  mulhw     r0, r0, r30
  fadds     f1, f27, f31
  mr        r3, r28
  mr        r4, r29
  mr        r6, r31
  srawi     r0, r0, 0x2
  rlwinm    r5,r0,1,31,31
  add       r0, r0, r5
  mulli     r0, r0, 0xA
  sub       r5, r30, r0
  bl        .loc_0x328
  lfs       f0, -0x67B4(r2)
  lfs       f1, -0x678C(r2)
  fmuls     f0, f0, f29
  fmadds    f1, f1, f30, f0

.loc_0x2E0:
  psq_l     f31,0x68(r1),0,0
  lfd       f31, 0x60(r1)
  psq_l     f30,0x58(r1),0,0
  lfd       f30, 0x50(r1)
  psq_l     f29,0x48(r1),0,0
  lfd       f29, 0x40(r1)
  psq_l     f28,0x38(r1),0,0
  lfd       f28, 0x30(r1)
  psq_l     f27,0x28(r1),0,0
  lfd       f27, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r0, 0x74(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x70
  blr       

.loc_0x328:
*/
}

/*
 * --INFO--
 * Address:	8011BA14
 * Size:	0001B4
 */
void CarryInfo::drawNumberPrim(Graphics &, float, float, int, Color4 &, float)
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
  stfd      f27, 0x30(r1)
  psq_st    f27,0x38(r1),0,0
  stfd      f26, 0x20(r1)
  psq_st    f26,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  xoris     r3, r5, 0x8000
  lis       r0, 0x4330
  stw       r3, 0xC(r1)
  mr        r31, r6
  lfs       f0, -0x67B4(r2)
  li        r3, 0x98
  stw       r0, 0x8(r1)
  li        r4, 0
  lfd       f4, -0x67A8(r2)
  fmuls     f5, f0, f3
  lfd       f0, 0x8(r1)
  li        r5, 0x4
  lfs       f3, -0x6788(r2)
  fsubs     f0, f0, f4
  fsubs     f31, f1, f5
  fadds     f30, f1, f5
  fmuls     f27, f3, f0
  fsubs     f29, f2, f5
  fadds     f28, f2, f5
  fadds     f26, f27, f3
  bl        -0x3611C
  lis       r6, 0xCC01
  lfs       f1, -0x6800(r2)
  stfs      f31, -0x8000(r6)
  lfs       f0, -0x67F4(r2)
  stfs      f29, -0x8000(r6)
  stfs      f1, -0x8000(r6)
  lbz       r5, 0x3(r31)
  lbz       r4, 0x2(r31)
  lbz       r3, 0x1(r31)
  lbz       r0, 0x0(r31)
  stb       r0, -0x8000(r6)
  stb       r3, -0x8000(r6)
  stb       r4, -0x8000(r6)
  stb       r5, -0x8000(r6)
  stfs      f27, -0x8000(r6)
  stfs      f0, -0x8000(r6)
  stfs      f30, -0x8000(r6)
  stfs      f29, -0x8000(r6)
  stfs      f1, -0x8000(r6)
  lbz       r5, 0x3(r31)
  lbz       r4, 0x2(r31)
  lbz       r3, 0x1(r31)
  lbz       r0, 0x0(r31)
  stb       r0, -0x8000(r6)
  stb       r3, -0x8000(r6)
  stb       r4, -0x8000(r6)
  stb       r5, -0x8000(r6)
  stfs      f26, -0x8000(r6)
  stfs      f0, -0x8000(r6)
  stfs      f31, -0x8000(r6)
  stfs      f28, -0x8000(r6)
  stfs      f1, -0x8000(r6)
  lbz       r5, 0x3(r31)
  lbz       r4, 0x2(r31)
  lbz       r3, 0x1(r31)
  lbz       r0, 0x0(r31)
  stb       r0, -0x8000(r6)
  stb       r3, -0x8000(r6)
  stb       r4, -0x8000(r6)
  stb       r5, -0x8000(r6)
  stfs      f27, -0x8000(r6)
  stfs      f1, -0x8000(r6)
  stfs      f30, -0x8000(r6)
  stfs      f28, -0x8000(r6)
  stfs      f1, -0x8000(r6)
  lbz       r5, 0x3(r31)
  lbz       r4, 0x2(r31)
  lbz       r3, 0x1(r31)
  lbz       r0, 0x0(r31)
  stb       r0, -0x8000(r6)
  stb       r3, -0x8000(r6)
  stb       r4, -0x8000(r6)
  stb       r5, -0x8000(r6)
  stfs      f26, -0x8000(r6)
  stfs      f1, -0x8000(r6)
  psq_l     f31,0x78(r1),0,0
  lfd       f31, 0x70(r1)
  psq_l     f30,0x68(r1),0,0
  lfd       f30, 0x60(r1)
  psq_l     f29,0x58(r1),0,0
  lfd       f29, 0x50(r1)
  psq_l     f28,0x48(r1),0,0
  lfd       f28, 0x40(r1)
  psq_l     f27,0x38(r1),0,0
  lfd       f27, 0x30(r1)
  psq_l     f26,0x28(r1),0,0
  lfd       f26, 0x20(r1)
  lwz       r0, 0x84(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x80
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void CarryInfo::debugDraw(Graphics &, CarryInfoParam &)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8011BBC8
 * Size:	000004
 */
void CarryInfoList::init()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8011BBCC
 * Size:	00004C
 */
void CarryInfoList::update()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  addi      r4, r31, 0x24
  lwz       r3, 0x20(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x48
  addi      r4, r31, 0x24
  bl        -0xC24
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8011BC18
 * Size:	00002C
 */
void CarryInfoList::draw(Graphics &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r5, r3
  stw       r0, 0x14(r1)
  addi      r3, r5, 0x48
  addi      r5, r5, 0x24
  bl        -0x9F0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void CarryInfoList::debugDraw(Graphics &)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8011BC44
 * Size:	00003C
 */
void PokoInfoOwner::getCarryInfoParam(CarryInfoParam &)
{
/*
.loc_0x0:
  li        r0, 0x1
  lfs       f0, -0x6784(r2)
  stw       r0, 0x0(r4)
  li        r0, 0x4
  lfs       f1, 0x24(r3)
  stfs      f1, 0x4(r4)
  lfs       f1, 0x28(r3)
  stfs      f1, 0x8(r4)
  lfs       f1, 0x2C(r3)
  stfs      f1, 0xC(r4)
  stfs      f0, 0x10(r4)
  stb       r0, 0x15(r4)
  lwz       r0, 0x30(r3)
  stw       r0, 0x20(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void PokoInfoOwner::start(CarryInfoList *, const Vector3<float> &, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
void PokoInfoOwner::update()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8011BC80
 * Size:	000014
 */
void CarryInfoList::isFinish()
{
/*
.loc_0x0:
  lbz       r0, 0x54(r3)
  subfic    r0, r0, 0x2
  cntlzw    r0, r0
  rlwinm    r3,r0,27,5,31
  blr
*/
}

/*
 * --INFO--
 * Address:	8011BC94
 * Size:	0000D4
 */
void CarryInfoMgr::CarryInfoMgr(int)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  bl        0xCC4
  lis       r4, 0x804B
  addi      r3, r29, 0xBC
  subi      r0, r4, 0x3C9C
  stw       r0, 0x0(r29)
  bl        0x2F56CC
  addi      r3, r29, 0xD4
  bl        0x2F56C4
  li        r0, 0
  li        r3, 0x114
  stw       r0, 0xCC(r29)
  stw       r0, 0xC8(r29)
  stw       r0, 0xC4(r29)
  stw       r0, 0xC0(r29)
  stw       r0, 0xE4(r29)
  stw       r0, 0xE0(r29)
  stw       r0, 0xDC(r29)
  stw       r0, 0xD8(r29)
  bl        -0xF7D4C
  lis       r4, 0x8012
  lis       r5, 0x8012
  subi      r4, r4, 0x422C
  li        r6, 0x34
  subi      r5, r5, 0x4298
  li        r7, 0x5
  bl        -0x5A324
  li        r30, 0
  mr        r31, r3

.loc_0x8C:
  cmplwi    r31, 0
  mr        r4, r31
  beq-      .loc_0x9C
  addi      r4, r31, 0x4

.loc_0x9C:
  addi      r3, r29, 0xD4
  bl        0x2F56D4
  addi      r30, r30, 0x1
  addi      r31, r31, 0x34
  cmplwi    r30, 0x5
  blt+      .loc_0x8C
  lwz       r0, 0x24(r1)
  mr        r3, r29
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
 * Address:	8011BD68
 * Size:	00006C
 */
void PokoInfoOwner::~PokoInfoOwner()
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
  beq-      .loc_0x50
  lis       r4, 0x804B
  addi      r3, r30, 0x4
  subi      r5, r4, 0x3C1C
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0xC
  stw       r0, 0x4(r30)
  bl        0x2F57E4
  extsh.    r0, r31
  ble-      .loc_0x50
  mr        r3, r30
  bl        -0xF7D00

.loc_0x50:
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
 * Address:	8011BDD4
 * Size:	000078
 */
void PokoInfoOwner::PokoInfoOwner()
{
/*
.loc_0x0:
  lis       r4, 0x804B
  lis       r5, 0x804B
  subi      r0, r4, 0x3C28
  lis       r6, 0x804F
  stw       r0, 0x0(r3)
  subi      r0, r6, 0x4AD8
  li        r7, 0
  subi      r6, r2, 0x677C
  stw       r0, 0x4(r3)
  subi      r5, r5, 0x3C1C
  addi      r0, r5, 0xC
  lfs       f0, -0x6800(r2)
  stw       r7, 0x14(r3)
  lis       r4, 0x8051
  stw       r7, 0x10(r3)
  stw       r7, 0xC(r3)
  stw       r7, 0x8(r3)
  stw       r6, 0x18(r3)
  stw       r5, 0x0(r3)
  stw       r0, 0x4(r3)
  stfs      f0, 0x1C(r3)
  stw       r7, 0x20(r3)
  lfsu      f0, 0x41E4(r4)
  stfs      f0, 0x24(r3)
  lfs       f0, 0x4(r4)
  stfs      f0, 0x28(r3)
  lfs       f0, 0x8(r4)
  stfs      f0, 0x2C(r3)
  stw       r7, 0x30(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8011BE4C
 * Size:	00013C
 */
void InfoMgr<CarryInfoOwner, CarryInfoList>::~InfoMgr()
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
  beq-      .loc_0x120
  lis       r3, 0x804B
  addic.    r0, r30, 0x5C
  subi      r0, r3, 0x3C48
  stw       r0, 0x0(r30)
  beq-      .loc_0x94
  lis       r3, 0x804B
  addic.    r0, r30, 0x5C
  subi      r0, r3, 0x3BFC
  stw       r0, 0x5C(r30)
  beq-      .loc_0x94
  lis       r3, 0x804B
  subi      r0, r3, 0x3C64
  stw       r0, 0x5C(r30)
  lwz       r3, 0x74(r30)
  cmplwi    r3, 0
  beq-      .loc_0x68
  lwz       r0, 0x78(r30)
  stw       r0, 0x1C(r3)

.loc_0x68:
  lwz       r3, 0x78(r30)
  cmplwi    r3, 0
  beq-      .loc_0x7C
  lwz       r0, 0x74(r30)
  stw       r0, 0x18(r3)

.loc_0x7C:
  li        r0, 0
  addi      r3, r30, 0x5C
  stw       r0, 0x78(r30)
  li        r4, 0
  stw       r0, 0x74(r30)
  bl        -0xFEEA8

.loc_0x94:
  addic.    r0, r30, 0x4
  beq-      .loc_0xFC
  lis       r3, 0x804B
  addic.    r0, r30, 0x4
  subi      r0, r3, 0x3BFC
  stw       r0, 0x4(r30)
  beq-      .loc_0xFC
  lis       r3, 0x804B
  subi      r0, r3, 0x3C64
  stw       r0, 0x4(r30)
  lwz       r3, 0x1C(r30)
  cmplwi    r3, 0
  beq-      .loc_0xD0
  lwz       r0, 0x20(r30)
  stw       r0, 0x1C(r3)

.loc_0xD0:
  lwz       r3, 0x20(r30)
  cmplwi    r3, 0
  beq-      .loc_0xE4
  lwz       r0, 0x1C(r30)
  stw       r0, 0x18(r3)

.loc_0xE4:
  li        r0, 0
  addi      r3, r30, 0x4
  stw       r0, 0x20(r30)
  li        r4, 0
  stw       r0, 0x1C(r30)
  bl        -0xFEF10

.loc_0xFC:
  cmplwi    r30, 0
  beq-      .loc_0x110
  lis       r3, 0x804B
  subi      r0, r3, 0x3C7C
  stw       r0, 0x0(r30)

.loc_0x110:
  extsh.    r0, r31
  ble-      .loc_0x120
  mr        r3, r30
  bl        -0xF7EB4

.loc_0x120:
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
 * Address:	8011BF88
 * Size:	000170
 */
void CarryInfoMgr::~CarryInfoMgr()
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
  beq-      .loc_0x154
  lis       r3, 0x804B
  li        r0, 0
  subi      r4, r3, 0x3C9C
  addi      r3, r30, 0xD4
  stw       r4, 0x0(r30)
  li        r4, -0x1
  stw       r0, -0x6DE8(r13)
  bl        0x2F55C4
  addi      r3, r30, 0xBC
  li        r4, -0x1
  bl        0x2F55B8
  cmplwi    r30, 0
  beq-      .loc_0x144
  lis       r3, 0x804B
  addic.    r0, r30, 0x5C
  subi      r0, r3, 0x3C48
  stw       r0, 0x0(r30)
  beq-      .loc_0xC8
  lis       r3, 0x804B
  addic.    r0, r30, 0x5C
  subi      r0, r3, 0x3BFC
  stw       r0, 0x5C(r30)
  beq-      .loc_0xC8
  lis       r3, 0x804B
  subi      r0, r3, 0x3C64
  stw       r0, 0x5C(r30)
  lwz       r3, 0x74(r30)
  cmplwi    r3, 0
  beq-      .loc_0x9C
  lwz       r0, 0x78(r30)
  stw       r0, 0x1C(r3)

.loc_0x9C:
  lwz       r3, 0x78(r30)
  cmplwi    r3, 0
  beq-      .loc_0xB0
  lwz       r0, 0x74(r30)
  stw       r0, 0x18(r3)

.loc_0xB0:
  li        r0, 0
  addi      r3, r30, 0x5C
  stw       r0, 0x78(r30)
  li        r4, 0
  stw       r0, 0x74(r30)
  bl        -0xFF018

.loc_0xC8:
  addic.    r0, r30, 0x4
  beq-      .loc_0x130
  lis       r3, 0x804B
  addic.    r0, r30, 0x4
  subi      r0, r3, 0x3BFC
  stw       r0, 0x4(r30)
  beq-      .loc_0x130
  lis       r3, 0x804B
  subi      r0, r3, 0x3C64
  stw       r0, 0x4(r30)
  lwz       r3, 0x1C(r30)
  cmplwi    r3, 0
  beq-      .loc_0x104
  lwz       r0, 0x20(r30)
  stw       r0, 0x1C(r3)

.loc_0x104:
  lwz       r3, 0x20(r30)
  cmplwi    r3, 0
  beq-      .loc_0x118
  lwz       r0, 0x1C(r30)
  stw       r0, 0x18(r3)

.loc_0x118:
  li        r0, 0
  addi      r3, r30, 0x4
  stw       r0, 0x20(r30)
  li        r4, 0
  stw       r0, 0x1C(r30)
  bl        -0xFF080

.loc_0x130:
  cmplwi    r30, 0
  beq-      .loc_0x144
  lis       r3, 0x804B
  subi      r0, r3, 0x3C7C
  stw       r0, 0x0(r30)

.loc_0x144:
  extsh.    r0, r31
  ble-      .loc_0x154
  mr        r3, r30
  bl        -0xF8024

.loc_0x154:
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
 * Address:	8011C0F8
 * Size:	0000C0
 */
void CarryInfoMgr::appearPoko(const Vector3<float> &, int)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r27, r3
  mr        r28, r4
  mr        r29, r5
  lwz       r30, 0xE4(r3)
  cmplwi    r30, 0
  beq-      .loc_0x2C
  subi      r30, r30, 0x4

.loc_0x2C:
  cmplwi    r30, 0
  beq-      .loc_0xAC
  mr        r3, r27
  mr        r4, r30
  lwz       r12, 0x0(r27)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  mr.       r31, r3
  beq-      .loc_0xAC
  addi      r3, r30, 0x4
  bl        0x2F5480
  cmplwi    r30, 0
  mr        r4, r30
  beq-      .loc_0x6C
  addi      r4, r30, 0x4

.loc_0x6C:
  addi      r3, r27, 0xBC
  bl        0x2F5258
  stw       r31, 0x20(r30)
  li        r0, 0
  lfs       f1, 0x0(r28)
  lfs       f0, 0x4(r28)
  stfs      f1, 0x24(r30)
  lfs       f1, 0x8(r28)
  stfs      f0, 0x28(r30)
  lfs       f0, -0x6800(r2)
  stfs      f1, 0x2C(r30)
  stw       r29, 0x30(r30)
  stfs      f0, 0x1C(r30)
  lwz       r3, 0x20(r30)
  stb       r0, 0x54(r3)
  stb       r0, 0x56(r3)

.loc_0xAC:
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8011C1B8
 * Size:	000020
 */
void CarryInfoMgr::regist(CarryInfoOwner *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        0x73C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8011C1D8
 * Size:	000040
 */
void CarryInfoMgr::appear(CarryInfoOwner *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  cmplwi    r3, 0
  beq-      .loc_0x30
  li        r0, 0
  stb       r0, 0x54(r3)
  stb       r0, 0x56(r3)

.loc_0x30:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void CarryInfoMgr::disappear(CarryInfoOwner *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8011C218
 * Size:	000098
 */
void CarryInfoMgr::loadResource()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x8048
  li        r5, 0
  stw       r0, 0x24(r1)
  li        r6, 0x1
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  subi      r3, r4, 0x4D70
  li        r4, 0x1
  bl        -0x101118
  lis       r5, 0x8048
  mr        r4, r3
  subi      r3, r5, 0x4D50
  bl        -0xF9240
  mr        r30, r3
  li        r3, 0x40
  bl        -0xF83C0
  mr.       r31, r3
  beq-      .loc_0x78
  li        r0, 0
  mr        r4, r30
  stw       r0, 0x28(r31)
  li        r5, 0
  bl        -0xE91FC
  lbz       r0, 0x3B(r31)
  rlwinm    r0,r0,0,30,30
  stb       r0, 0x3B(r31)

.loc_0x78:
  stw       r31, 0xB8(r29)
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
 * Address:	8011C2B0
 * Size:	000198
 */
void CarryInfoMgr::draw(Graphics &)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stw       r31, 0x3C(r1)
  mr        r31, r4
  stw       r30, 0x38(r1)
  mr        r30, r3
  lwz       r5, -0x64AC(r13)
  cmplwi    r5, 0
  beq-      .loc_0x34
  lwz       r0, 0x1F0(r5)
  rlwinm.   r0,r0,0,31,31
  bne-      .loc_0x180

.loc_0x34:
  bl        0x30BC20
  li        r3, 0x1
  bl        -0x35488
  li        r3, 0
  bl        -0x33F7C
  li        r3, 0x1
  bl        -0x33744
  li        r3, 0
  li        r4, 0
  bl        -0x33E8C
  li        r3, 0
  li        r4, 0
  li        r5, 0
  li        r6, 0x4
  bl        -0x33900
  li        r3, 0x4
  li        r4, 0
  li        r5, 0
  li        r6, 0x1
  li        r7, 0
  li        r8, 0
  li        r9, 0x2
  bl        -0x3549C
  bl        -0x37C70
  li        r3, 0x9
  li        r4, 0x1
  bl        -0x380C8
  li        r3, 0xB
  li        r4, 0x1
  bl        -0x380D4
  li        r3, 0xD
  li        r4, 0x1
  bl        -0x380E0
  li        r3, 0
  li        r4, 0x9
  li        r5, 0x1
  li        r6, 0x4
  li        r7, 0
  bl        -0x37C74
  li        r3, 0
  li        r4, 0xB
  li        r5, 0x1
  li        r6, 0x5
  li        r7, 0
  bl        -0x37C8C
  li        r3, 0
  li        r4, 0xD
  li        r5, 0x1
  li        r6, 0x4
  li        r7, 0
  bl        -0x37CA4
  li        r3, 0x1
  li        r4, 0x4
  li        r5, 0x5
  li        r6, 0xF
  bl        -0x332E8
  li        r3, 0
  li        r4, 0x1
  li        r5, 0
  bl        -0x3324C
  li        r3, 0
  bl        -0x32DC0
  li        r3, 0x1
  bl        -0x37444
  li        r3, 0
  li        r4, 0x1
  li        r5, 0xC
  li        r6, 0x3C
  li        r7, 0
  li        r8, 0x7D
  bl        -0x376E0
  addi      r3, r1, 0x8
  bl        -0x32164
  addi      r3, r1, 0x8
  li        r4, 0x1E
  li        r5, 0x1
  bl        -0x32DC8
  lwz       r3, 0xB8(r30)
  li        r4, 0
  bl        -0xE8DF0
  mr        r3, r30
  mr        r4, r31
  bl        0x3D4

.loc_0x180:
  lwz       r0, 0x44(r1)
  lwz       r31, 0x3C(r1)
  lwz       r30, 0x38(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	8011C448
 * Size:	000034
 */
void CarryInfoMgr::update()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        .loc_0x34
  mr        r3, r31
  bl        0x310
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x34:
*/
}

/*
 * --INFO--
 * Address:	8011C47C
 * Size:	000108
 */
void CarryInfoMgr::updatePokoInfoOwners()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  mr        r28, r3
  lwz       r3, 0xCC(r3)
  cmplwi    r3, 0
  beq-      .loc_0x30
  subi      r3, r3, 0x4

.loc_0x30:
  mr        r30, r3
  b         .loc_0xE0

.loc_0x38:
  lwz       r4, 0x8(r30)
  cmplwi    r4, 0
  beq-      .loc_0x48
  subi      r4, r4, 0x4

.loc_0x48:
  lwz       r3, 0x20(r30)
  mr        r29, r4
  li        r31, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x7C
  lwz       r3, 0x20(r30)
  lwz       r0, 0x20(r3)
  cmplw     r0, r30
  beq-      .loc_0x84

.loc_0x7C:
  li        r31, 0x1
  b         .loc_0xB4

.loc_0x84:
  lwz       r3, -0x6514(r13)
  lfs       f2, 0x1C(r30)
  lfs       f1, 0x54(r3)
  lfs       f0, -0x6780(r2)
  fadds     f1, f2, f1
  stfs      f1, 0x1C(r30)
  lfs       f1, 0x1C(r30)
  fcmpo     cr0, f1, f0
  ble-      .loc_0xB4
  lwz       r3, 0x20(r30)
  li        r0, 0x1
  stb       r0, 0x54(r3)

.loc_0xB4:
  rlwinm.   r0,r31,0,24,31
  beq-      .loc_0xDC
  addi      r3, r30, 0x4
  bl        0x2F5094
  cmplwi    r30, 0
  mr        r4, r30
  beq-      .loc_0xD4
  addi      r4, r30, 0x4

.loc_0xD4:
  addi      r3, r28, 0xD4
  bl        0x2F4EB4

.loc_0xDC:
  mr        r30, r29

.loc_0xE0:
  cmplwi    r30, 0
  bne+      .loc_0x38
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
 * Address:	........
 * Size:	000020
 */
void CarryInfoMgr::getActiveCarryInfoListNum()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void CarryInfoMgr::getInactiveCarryInfoListNum()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000104
 */
void CarryInfoMgr::drawDebugInfo(Graphics &, int, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8011C584
 * Size:	000020
 */
void CarryInfoMgr::scratch(CarryInfoOwner *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        0x1A0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8011C5A4
 * Size:	000048
 */
void InfoMgrBase::~InfoMgrBase()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x30
  lis       r5, 0x804B
  extsh.    r0, r4
  subi      r0, r5, 0x3C7C
  stw       r0, 0x0(r31)
  ble-      .loc_0x30
  bl        -0xF851C

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
 * Address:	8011C5EC
 * Size:	000004
 */
void InfoListBase<CarryInfoOwner, CarryInfoList>::init()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8011C5F0
 * Size:	000098
 */
void InfoListBase<CarryInfoOwner, CarryInfoList>::~InfoListBase()
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
  beq-      .loc_0x7C
  lis       r3, 0x804B
  subi      r0, r3, 0x3C64
  stw       r0, 0x0(r30)
  lwz       r3, 0x18(r30)
  cmplwi    r3, 0
  beq-      .loc_0x40
  lwz       r0, 0x1C(r30)
  stw       r0, 0x1C(r3)

.loc_0x40:
  lwz       r3, 0x1C(r30)
  cmplwi    r3, 0
  beq-      .loc_0x54
  lwz       r0, 0x18(r30)
  stw       r0, 0x18(r3)

.loc_0x54:
  li        r0, 0
  mr        r3, r30
  stw       r0, 0x1C(r30)
  li        r4, 0
  stw       r0, 0x18(r30)
  bl        -0xFF624
  extsh.    r0, r31
  ble-      .loc_0x7C
  mr        r3, r30
  bl        -0xF85B4

.loc_0x7C:
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
 * Address:	8011C688
 * Size:	0000A8
 */
void CarryInfoList::~CarryInfoList()
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
  beq-      .loc_0x8C
  lis       r3, 0x804B
  subi      r0, r3, 0x3BFC
  stw       r0, 0x0(r30)
  beq-      .loc_0x7C
  lis       r3, 0x804B
  subi      r0, r3, 0x3C64
  stw       r0, 0x0(r30)
  lwz       r3, 0x18(r30)
  cmplwi    r3, 0
  beq-      .loc_0x50
  lwz       r0, 0x1C(r30)
  stw       r0, 0x1C(r3)

.loc_0x50:
  lwz       r3, 0x1C(r30)
  cmplwi    r3, 0
  beq-      .loc_0x64
  lwz       r0, 0x18(r30)
  stw       r0, 0x18(r3)

.loc_0x64:
  li        r0, 0
  mr        r3, r30
  stw       r0, 0x1C(r30)
  li        r4, 0
  stw       r0, 0x18(r30)
  bl        -0xFF6CC

.loc_0x7C:
  extsh.    r0, r31
  ble-      .loc_0x8C
  mr        r3, r30
  bl        -0xF865C

.loc_0x8C:
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
 * Address:	8011C730
 * Size:	000044
 */
void InfoMgr<CarryInfoOwner, CarryInfoList>::scratch(CarryInfoOwner *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r5, r4
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r4, 0x20(r3)
  bl        0x11C
  mr.       r4, r3
  beq-      .loc_0x30
  mr        r3, r31
  bl        0x140

.loc_0x30:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8011C774
 * Size:	00008C
 */
void InfoMgr<CarryInfoOwner, CarryInfoList>::update()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  lwz       r31, 0x20(r3)
  b         .loc_0x68

.loc_0x24:
  mr        r3, r31
  lwz       r30, 0x1C(r31)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x64
  mr        r3, r29
  mr        r4, r31
  bl        0xC8

.loc_0x64:
  mr        r31, r30

.loc_0x68:
  cmplwi    r31, 0
  bne+      .loc_0x24
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
 * Address:	8011C800
 * Size:	000068
 */
void InfoMgr<CarryInfoOwner, CarryInfoList>::draw(Graphics &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r4
  lwz       r0, 0x20(r3)
  cmplwi    r0, 0
  beq-      .loc_0x50
  mr        r31, r0
  b         .loc_0x48

.loc_0x2C:
  mr        r3, r31
  mr        r4, r30
  lwz       r12, 0x0(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r31, 0x1C(r31)

.loc_0x48:
  cmplwi    r31, 0
  bne+      .loc_0x2C

.loc_0x50:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8011C868
 * Size:	00002C
 */
void InfoMgr<CarryInfoOwner, CarryInfoList>::search(CarryInfoList *, CarryInfoOwner *)
{
/*
.loc_0x0:
  b         .loc_0x1C

.loc_0x4:
  lwz       r0, 0x20(r4)
  cmplw     r0, r5
  bne-      .loc_0x18
  mr        r3, r4
  blr       

.loc_0x18:
  lwz       r4, 0x1C(r4)

.loc_0x1C:
  cmplwi    r4, 0
  bne+      .loc_0x4
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	8011C894
 * Size:	000004
 */
void InfoListBase<CarryInfoOwner, CarryInfoList>::update()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8011C898
 * Size:	000004
 */
void InfoListBase<CarryInfoOwner, CarryInfoList>::draw(Graphics &)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8011C89C
 * Size:	000064
 */
void InfoMgr<CarryInfoOwner, CarryInfoList>::addInactiveList(CarryInfoList *)
{
/*
.loc_0x0:
  li        r0, 0
  stw       r0, 0x20(r4)
  lwz       r5, 0x18(r4)
  cmplwi    r5, 0
  beq-      .loc_0x1C
  lwz       r0, 0x1C(r4)
  stw       r0, 0x1C(r5)

.loc_0x1C:
  lwz       r5, 0x1C(r4)
  cmplwi    r5, 0
  beq-      .loc_0x30
  lwz       r0, 0x18(r4)
  stw       r0, 0x18(r5)

.loc_0x30:
  li        r5, 0
  addi      r0, r3, 0x5C
  stw       r5, 0x1C(r4)
  stw       r5, 0x18(r4)
  stw       r0, 0x18(r4)
  lwz       r0, 0x78(r3)
  stw       r0, 0x1C(r4)
  lwz       r5, 0x78(r3)
  cmplwi    r5, 0
  beq-      .loc_0x5C
  stw       r4, 0x18(r5)

.loc_0x5C:
  stw       r4, 0x78(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8011C900
 * Size:	000074
 */
void InfoMgr<CarryInfoOwner, CarryInfoList>::regist(CarryInfoOwner *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  lwz       r5, 0x20(r3)
  b         .loc_0x2C

.loc_0x18:
  lwz       r0, 0x20(r5)
  cmplw     r0, r4
  bne-      .loc_0x28
  b         .loc_0x38

.loc_0x28:
  lwz       r5, 0x1C(r5)

.loc_0x2C:
  cmplwi    r5, 0
  bne+      .loc_0x18
  li        r5, 0

.loc_0x38:
  cmplwi    r5, 0
  mr        r31, r5
  bne-      .loc_0x48
  lwz       r31, 0x78(r3)

.loc_0x48:
  cmplwi    r31, 0
  beq-      .loc_0x5C
  stw       r4, 0x20(r31)
  mr        r4, r31
  bl        0x2FC

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
 * Address:	8011C974
 * Size:	0002E0
 */
void InfoMgr<CarryInfoOwner, CarryInfoList>::InfoMgr(int)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x804B
  stw       r0, 0x24(r1)
  subi      r0, r5, 0x3C7C
  stmw      r26, 0x8(r1)
  mr        r28, r3
  lis       r3, 0x804B
  mr        r30, r4
  addi      r26, r28, 0x4
  stw       r0, 0x0(r28)
  subi      r0, r3, 0x3C48
  mr        r3, r26
  stw       r0, 0x0(r28)
  bl        -0xFF9E0
  lis       r3, 0x804B
  li        r0, 0
  subi      r4, r3, 0x3C64
  mr        r3, r26
  stw       r4, 0x0(r26)
  stw       r0, 0x20(r26)
  stw       r0, 0x1C(r26)
  stw       r0, 0x18(r26)
  lwz       r12, 0x0(r26)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lis       r3, 0x804B
  li        r5, 0
  subi      r0, r3, 0x3BFC
  lfs       f1, -0x6778(r2)
  stw       r0, 0x0(r26)
  lis       r3, 0x8051
  addi      r31, r3, 0x41E4
  addi      r27, r28, 0x5C
  stw       r5, 0x24(r26)
  li        r4, 0x6
  lfs       f0, -0x6800(r2)
  li        r0, 0x2
  lfs       f2, 0x0(r31)
  mr        r3, r27
  stfs      f2, 0x28(r26)
  lfs       f2, 0x4(r31)
  stfs      f2, 0x2C(r26)
  lfs       f2, 0x8(r31)
  stfs      f2, 0x30(r26)
  stfs      f1, 0x34(r26)
  stb       r5, 0x38(r26)
  stb       r4, 0x39(r26)
  sth       r5, 0x3A(r26)
  sth       r5, 0x3C(r26)
  stw       r5, 0x40(r26)
  stw       r5, 0x44(r26)
  stfs      f0, 0x48(r26)
  stfs      f0, 0x4C(r26)
  stb       r0, 0x54(r26)
  stb       r5, 0x55(r26)
  stb       r5, 0x56(r26)
  bl        -0xFFA90
  lis       r3, 0x804B
  li        r0, 0
  subi      r4, r3, 0x3C64
  mr        r3, r27
  stw       r4, 0x0(r27)
  stw       r0, 0x20(r27)
  stw       r0, 0x1C(r27)
  stw       r0, 0x18(r27)
  lwz       r12, 0x0(r27)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x804B
  li        r5, 0
  subi      r0, r4, 0x3BFC
  lis       r3, 0x8051
  stw       r0, 0x0(r27)
  addi      r4, r3, 0x41E4
  lfs       f1, -0x6778(r2)
  li        r3, 0x6
  stw       r5, 0x24(r27)
  li        r0, 0x2
  lfs       f0, -0x6800(r2)
  mr        r26, r27
  lfs       f2, 0x0(r4)
  li        r29, 0
  stfs      f2, 0x28(r27)
  lfs       f2, 0x4(r31)
  stfs      f2, 0x2C(r27)
  lfs       f2, 0x8(r31)
  stfs      f2, 0x30(r27)
  stfs      f1, 0x34(r27)
  stb       r5, 0x38(r27)
  stb       r3, 0x39(r27)
  sth       r5, 0x3A(r27)
  sth       r5, 0x3C(r27)
  stw       r5, 0x40(r27)
  stw       r5, 0x44(r27)
  stfs      f0, 0x48(r27)
  stfs      f0, 0x4C(r27)
  stb       r0, 0x54(r27)
  stb       r5, 0x55(r27)
  stb       r5, 0x56(r27)
  stw       r30, 0xB4(r28)
  b         .loc_0x2BC

.loc_0x1A0:
  li        r3, 0x58
  bl        -0xF8C74
  mr.       r30, r3
  beq-      .loc_0x25C
  mr        r27, r30
  bl        -0xFFB5C
  lis       r3, 0x804B
  li        r0, 0
  subi      r4, r3, 0x3C64
  mr        r3, r27
  stw       r4, 0x0(r27)
  stw       r0, 0x20(r27)
  stw       r0, 0x1C(r27)
  stw       r0, 0x18(r27)
  lwz       r12, 0x0(r27)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x804B
  lis       r3, 0x8051
  subi      r0, r4, 0x3BFC
  li        r5, 0
  stw       r0, 0x0(r30)
  addi      r4, r3, 0x41E4
  lfs       f1, -0x6778(r2)
  li        r3, 0x6
  stw       r5, 0x24(r30)
  li        r0, 0x2
  lfs       f0, -0x6800(r2)
  lfs       f2, 0x0(r4)
  stfs      f2, 0x28(r30)
  lfs       f2, 0x4(r31)
  stfs      f2, 0x2C(r30)
  lfs       f2, 0x8(r31)
  stfs      f2, 0x30(r30)
  stfs      f1, 0x34(r30)
  stb       r5, 0x38(r30)
  stb       r3, 0x39(r30)
  sth       r5, 0x3A(r30)
  sth       r5, 0x3C(r30)
  stw       r5, 0x40(r30)
  stw       r5, 0x44(r30)
  stfs      f0, 0x48(r30)
  stfs      f0, 0x4C(r30)
  stb       r0, 0x54(r30)
  stb       r5, 0x55(r30)
  stb       r5, 0x56(r30)

.loc_0x25C:
  li        r0, 0
  stw       r0, 0x20(r30)
  lwz       r3, 0x18(r30)
  cmplwi    r3, 0
  beq-      .loc_0x278
  lwz       r0, 0x1C(r30)
  stw       r0, 0x1C(r3)

.loc_0x278:
  lwz       r3, 0x1C(r30)
  cmplwi    r3, 0
  beq-      .loc_0x28C
  lwz       r0, 0x18(r30)
  stw       r0, 0x18(r3)

.loc_0x28C:
  li        r0, 0
  stw       r0, 0x1C(r30)
  stw       r0, 0x18(r30)
  stw       r26, 0x18(r30)
  lwz       r0, 0x78(r28)
  stw       r0, 0x1C(r30)
  lwz       r3, 0x78(r28)
  cmplwi    r3, 0
  beq-      .loc_0x2B4
  stw       r30, 0x18(r3)

.loc_0x2B4:
  stw       r30, 0x78(r28)
  addi      r29, r29, 0x1

.loc_0x2BC:
  lwz       r0, 0xB4(r28)
  cmpw      r29, r0
  blt+      .loc_0x1A0
  mr        r3, r28
  lmw       r26, 0x8(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8011CC54
 * Size:	00005C
 */
void InfoMgr<CarryInfoOwner, CarryInfoList>::addActiveList(CarryInfoList *)
{
/*
.loc_0x0:
  lwz       r5, 0x18(r4)
  cmplwi    r5, 0
  beq-      .loc_0x14
  lwz       r0, 0x1C(r4)
  stw       r0, 0x1C(r5)

.loc_0x14:
  lwz       r5, 0x1C(r4)
  cmplwi    r5, 0
  beq-      .loc_0x28
  lwz       r0, 0x18(r4)
  stw       r0, 0x18(r5)

.loc_0x28:
  li        r5, 0
  addi      r0, r3, 0x4
  stw       r5, 0x1C(r4)
  stw       r5, 0x18(r4)
  stw       r0, 0x18(r4)
  lwz       r0, 0x20(r3)
  stw       r0, 0x1C(r4)
  lwz       r5, 0x20(r3)
  cmplwi    r5, 0
  beq-      .loc_0x54
  stw       r4, 0x18(r5)

.loc_0x54:
  stw       r4, 0x20(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8011CCB0
 * Size:	000028
 */
void __sinit_carryInfoMgr_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804B
  stw       r0, -0x6DF0(r13)
  stfsu     f0, -0x3CE0(r3)
  stfs      f0, -0x6DEC(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8011CCD8
 * Size:	000008
 */
void PokoInfoOwner::@4@__dt()
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0xF74
*/
}

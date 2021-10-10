

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
 * Address:	8023B534
 * Size:	000064
 */
void Game::BaseGameSection::drawOtakaraWindow((Graphics&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x8051
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  subi      r3, r5, 0xDD0
	  bl        -0x1DD194
	  lis       r3, 0x8051
	  subi      r3, r3, 0xDD0
	  bl        -0x1DD958
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x11C(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	8023B598
 * Size:	000094
 */
void Game::BaseGameSection::setDraw2DCreature((Game::Creature*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  beq-      .loc_0x78
	  lwz       r3, 0x13C(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x78
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1A8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x13C(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1AC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1A8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1AC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x78:
	  stw       r31, 0x13C(r30)
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
 * Address:	8023B62C
 * Size:	0001E0
 */
void Game::BaseGameSection::startZoomWindow(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  mr        r30, r3
	  li        r0, 0x1
	  stw       r0, 0x134(r3)
	  lfs       f0, -0x3DE8(r2)
	  stfs      f0, 0x140(r3)
	  lwz       r3, 0x13C(r3)
	  lwz       r31, 0x174(r3)
	  mr        r3, r31
	  bl        0x202F6C
	  fmr       f31, f1
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  bl        0x2030B8
	  lwz       r3, 0x13C(r30)
	  lfs       f2, 0x8(r1)
	  lwz       r12, 0x0(r3)
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  lwz       r12, 0x28(r12)
	  stfs      f2, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,16,31
	  cmplwi    r0, 0x406
	  bne-      .loc_0x90
	  lfs       f0, -0x3DE4(r2)
	  fmuls     f31, f31, f0

	.loc_0x90:
	  lwz       r3, 0x13C(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,16,31
	  cmplwi    r0, 0x401
	  bne-      .loc_0x134
	  lwz       r31, 0x13C(r30)
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x3
	  bne-      .loc_0x120
	  mr        r3, r31
	  bl        -0xD4D24
	  li        r5, 0
	  subi      r4, r13, 0x7B90
	  b         .loc_0x110

	.loc_0xE8:
	  cmpw      r3, r0
	  bne-      .loc_0x108
	  rlwinm    r0,r5,3,0,28
	  subi      r3, r13, 0x7B90
	  add       r3, r3, r0
	  lfs       f0, 0x4(r3)
	  fdivs     f31, f31, f0
	  b         .loc_0x134

	.loc_0x108:
	  addi      r4, r4, 0x8
	  addi      r5, r5, 0x1

	.loc_0x110:
	  lwz       r0, 0x0(r4)
	  cmpwi     r0, -0x1
	  bne+      .loc_0xE8
	  b         .loc_0x134

	.loc_0x120:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x134:
	  fmr       f2, f31
	  lwz       r3, 0x14C(r30)
	  lfs       f1, -0x3DE0(r2)
	  bl        0x1DF78C
	  lfs       f5, 0x20(r1)
	  lfs       f2, 0x24(r1)
	  fmuls     f0, f5, f5
	  lfs       f3, 0x28(r1)
	  fmuls     f4, f2, f2
	  lfs       f2, -0x3DE8(r2)
	  fmuls     f3, f3, f3
	  fadds     f0, f0, f4
	  fadds     f0, f3, f0
	  fcmpo     cr0, f0, f2
	  ble-      .loc_0x18C
	  fmadds    f0, f5, f5, f4
	  fadds     f0, f3, f0
	  fcmpo     cr0, f0, f2
	  ble-      .loc_0x190
	  fsqrte    f2, f0
	  fmuls     f0, f2, f0
	  b         .loc_0x190

	.loc_0x18C:
	  fmr       f0, f2

	.loc_0x190:
	  lis       r3, 0x8050
	  lfs       f3, -0x3DE8(r2)
	  addi      r3, r3, 0x71A0
	  stfs      f0, 0x18(r1)
	  lfs       f0, 0x800(r3)
	  addi      r4, r1, 0x14
	  stfs      f3, 0x14(r1)
	  fmuls     f2, f1, f0
	  stfs      f3, 0x1C(r1)
	  lwz       r3, 0x14C(r30)
	  lwz       r5, 0x10C(r30)
	  bl        0x348
	  psq_l     f31,0x48(r1),0,0
	  lwz       r0, 0x54(r1)
	  lfd       f31, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8023B80C
 * Size:	000258
 */
void Game::BaseGameSection::startKantei2D(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stw       r31, 0x7C(r1)
	  stw       r30, 0x78(r1)
	  mr        r30, r3
	  stw       r29, 0x74(r1)
	  stw       r28, 0x70(r1)
	  lwz       r3, 0x13C(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x80(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1EC
	  lwz       r31, 0x13C(r30)
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x3
	  beq-      .loc_0x80
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x4
	  bne-      .loc_0x19C

	.loc_0x80:
	  lis       r3, 0x804B
	  li        r9, 0
	  addi      r0, r3, 0x1148
	  li        r7, 0x7B
	  lis       r3, 0x804C
	  stw       r0, 0x30(r1)
	  addi      r8, r3, 0x172C
	  li        r4, 0x1388
	  li        r3, 0x15B3
	  li        r0, 0x1
	  stw       r9, 0x34(r1)
	  addi      r5, r1, 0xC
	  lwz       r10, -0x6B70(r13)
	  addi      r6, r1, 0x8
	  stw       r8, 0x30(r1)
	  stw       r7, 0x38(r1)
	  stw       r4, 0x3C(r1)
	  stw       r9, 0x64(r1)
	  stw       r9, 0x40(r1)
	  stw       r9, 0x4C(r1)
	  stw       r9, 0x48(r1)
	  stw       r9, 0x50(r1)
	  stw       r3, 0x54(r1)
	  stb       r9, 0x58(r1)
	  stw       r9, 0x5C(r1)
	  stb       r9, 0x59(r1)
	  stb       r9, 0x60(r1)
	  stb       r9, 0x68(r1)
	  stb       r0, 0x69(r1)
	  lwz       r4, 0x35C(r31)
	  lwz       r29, 0xE8(r10)
	  lwz       r28, 0xEC(r10)
	  lwz       r0, 0x170(r4)
	  stw       r0, 0x38(r1)
	  lwz       r0, 0x148(r30)
	  stw       r0, 0x40(r1)
	  lwz       r3, 0x230(r4)
	  lwz       r4, 0x234(r4)
	  stw       r4, 0x4C(r1)
	  stw       r3, 0x48(r1)
	  bl        0x201A00
	  add       r0, r29, r28
	  stw       r28, 0x54(r1)
	  stw       r0, 0x3C(r1)
	  lwz       r3, 0x35C(r31)
	  lhz       r3, 0x254(r3)
	  subi      r3, r3, 0x1
	  bl        -0x13744
	  stw       r3, 0x50(r1)
	  li        r3, 0
	  lwz       r4, -0x6C18(r13)
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x160
	  cmpwi     r0, 0x3
	  bne-      .loc_0x164

	.loc_0x160:
	  li        r3, 0x1

	.loc_0x164:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x178
	  lwz       r0, 0x110(r30)
	  stw       r0, 0x5C(r1)
	  b         .loc_0x180

	.loc_0x178:
	  li        r0, 0
	  stw       r0, 0x5C(r1)

	.loc_0x180:
	  lwz       r3, -0x6560(r13)
	  lwz       r4, 0x10C(r30)
	  bl        0x1C06E4
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0x30
	  bl        0x1C1900
	  b         .loc_0x238

	.loc_0x19C:
	  lis       r3, 0x804B
	  li        r5, 0
	  addi      r0, r3, 0x1148
	  lis       r3, 0x804C
	  stw       r0, 0x20(r1)
	  addi      r4, r3, 0x1714
	  li        r0, 0x1
	  lwz       r3, -0x6560(r13)
	  stw       r5, 0x24(r1)
	  stw       r4, 0x20(r1)
	  stw       r5, 0x28(r1)
	  stb       r0, 0x2C(r1)
	  lwz       r0, 0x148(r30)
	  stw       r0, 0x28(r1)
	  lwz       r4, 0x10C(r30)
	  bl        0x1C0694
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0x20
	  bl        0x1C1ACC
	  b         .loc_0x238

	.loc_0x1EC:
	  lis       r3, 0x804B
	  li        r5, 0
	  addi      r0, r3, 0x1148
	  lis       r3, 0x804C
	  stw       r0, 0x10(r1)
	  addi      r4, r3, 0x1714
	  li        r0, 0x1
	  lwz       r3, -0x6560(r13)
	  stw       r5, 0x14(r1)
	  stw       r4, 0x10(r1)
	  stw       r5, 0x18(r1)
	  stb       r0, 0x1C(r1)
	  lwz       r0, 0x148(r30)
	  stw       r0, 0x18(r1)
	  lwz       r4, 0x10C(r30)
	  bl        0x1C0644
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0x10
	  bl        0x1C1A7C

	.loc_0x238:
	  lwz       r0, 0x84(r1)
	  lwz       r31, 0x7C(r1)
	  lwz       r30, 0x78(r1)
	  lwz       r29, 0x74(r1)
	  lwz       r28, 0x70(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8023BA64
 * Size:	0000CC
 */
void onKanteiDone__Q24Game15BaseGameSectionFR7Rect<float>(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  mr        r30, r3
	  lfs       f3, 0x4(r4)
	  lfs       f2, 0xC(r4)
	  lfs       f1, 0x0(r4)
	  lfs       f0, 0x8(r4)
	  fadds     f3, f3, f2
	  lfs       f2, -0x3DDC(r2)
	  fadds     f0, f1, f0
	  fmuls     f1, f3, f2
	  fmuls     f0, f0, f2
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x8(r1)
	  bl        -0x47C
	  bl        0x1E7778
	  lhz       r31, 0x4(r3)
	  bl        0x1E7770
	  lhz       r3, 0x6(r3)
	  lis       r0, 0x4330
	  lfs       f2, -0x3DE8(r2)
	  addi      r4, r1, 0x10
	  stw       r3, 0x24(r1)
	  lfd       f3, -0x3DD8(r2)
	  stw       r0, 0x20(r1)
	  lfs       f1, -0x3DDC(r2)
	  lfd       f0, 0x20(r1)
	  stw       r31, 0x2C(r1)
	  fsubs     f4, f0, f3
	  lfs       f0, 0xC(r1)
	  stw       r0, 0x28(r1)
	  fnmsubs   f5, f1, f4, f0
	  lfd       f0, 0x28(r1)
	  stfs      f2, 0x10(r1)
	  fsubs     f1, f0, f3
	  fadds     f0, f5, f4
	  stfs      f5, 0x14(r1)
	  fadds     f1, f2, f1
	  stfs      f0, 0x1C(r1)
	  stfs      f1, 0x18(r1)
	  lwz       r3, 0x138(r30)
	  bl        0x1E986C
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
 * Address:	........
 * Size:	000038
 */
void Game::BaseGameSection::closeZoomWindow(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8023BB30
 * Size:	000114
 */
void init__Q34Game15BaseGameSection10ZoomCameraFffR10Vector3<float>
P10Controller(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x10(r1)
	  psq_st    f31,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  fmr       f31, f1
	  mr        r30, r3
	  lfs       f0, -0x3DCC(r2)
	  mr        r31, r4
	  stw       r5, 0x1AC(r3)
	  fdivs     f2, f2, f31
	  lfs       f1, -0x3DD0(r2)
	  stfs      f1, 0x198(r3)
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x4C
	  b         .loc_0xB4

	.loc_0x4C:
	  lfs       f0, -0x3DC8(r2)
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x64
	  lfs       f1, -0x3DC4(r2)
	  b         .loc_0xB4

	.loc_0x64:
	  lfs       f0, -0x3DE8(r2)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x98
	  fneg      f0, f2
	  lfs       f1, -0x3DC0(r2)
	  fmuls     f1, f1, f0
	  bl        -0x17A060
	  lis       r4, 0x8051
	  rlwinm    r0,r3,2,0,29
	  subi      r3, r4, 0x1E00
	  lfsx      f0, r3, r0
	  fneg      f1, f0
	  b         .loc_0xB4

	.loc_0x98:
	  lfs       f0, -0x3DC0(r2)
	  fmuls     f1, f0, f2
	  bl        -0x17A084
	  lis       r4, 0x8051
	  rlwinm    r0,r3,2,0,29
	  subi      r3, r4, 0x1E00
	  lfsx      f1, r3, r0

	.loc_0xB4:
	  stfs      f1, 0x19C(r30)
	  mr        r3, r30
	  lfs       f0, -0x3DBC(r2)
	  stfs      f1, 0x1A8(r30)
	  stfs      f31, 0x1A0(r30)
	  stfs      f31, 0x1A4(r30)
	  lfs       f1, 0x1A0(r30)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x1A0(r30)
	  lfs       f0, 0x0(r31)
	  stfs      f0, 0x180(r30)
	  lfs       f0, 0x4(r31)
	  stfs      f0, 0x184(r30)
	  lfs       f0, 0x8(r31)
	  stfs      f0, 0x188(r30)
	  bl        .loc_0x114
	  psq_l     f31,0x18(r1),0,0
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x114:
	*/
}

/*
 * --INFO--
 * Address:	8023BC44
 * Size:	0002B0
 */
void Game::BaseGameSection::ZoomCamera::makeLookAt(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  lfs       f0, -0x3DE8(r2)
	  lfs       f3, 0x19C(r3)
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x40
	  lfs       f0, -0x3DB8(r2)
	  lis       r4, 0x8050
	  addi      r4, r4, 0x71A0
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f1, f0
	  b         .loc_0x64

	.loc_0x40:
	  lfs       f0, -0x3DB4(r2)
	  lis       r4, 0x8050
	  addi      r4, r4, 0x71A0
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r4, r0

	.loc_0x64:
	  lfs       f4, 0x1A0(r3)
	  lfs       f0, -0x3DE8(r2)
	  fmuls     f7, f4, f1
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x7C
	  fneg      f3, f3

	.loc_0x7C:
	  lfs       f2, -0x3DB4(r2)
	  lis       r4, 0x8050
	  addi      r5, r4, 0x71A0
	  lfs       f6, 0x198(r3)
	  fmuls     f1, f3, f2
	  lfs       f0, -0x3DE8(r2)
	  addi      r4, r5, 0x4
	  fcmpo     cr0, f6, f0
	  fctiwz    f0, f1
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fmuls     f8, f4, f0
	  bge-      .loc_0xDC
	  lfs       f0, -0x3DB8(r2)
	  fmuls     f0, f6, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r5, r0
	  fneg      f1, f0
	  b         .loc_0xF4

	.loc_0xDC:
	  fmuls     f0, f6, f2
	  fctiwz    f0, f0
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r5, r0

	.loc_0xF4:
	  lfs       f0, -0x3DE8(r2)
	  fmuls     f5, f7, f1
	  fcmpo     cr0, f6, f0
	  bge-      .loc_0x108
	  fneg      f6, f6

	.loc_0x108:
	  lfs       f2, -0x3DB4(r2)
	  lfs       f4, 0x188(r3)
	  fmuls     f1, f6, f2
	  lfs       f0, 0x184(r3)
	  lfs       f3, 0x180(r3)
	  fadds     f4, f4, f5
	  fadds     f6, f0, f8
	  lfs       f0, -0x3DE8(r2)
	  fctiwz    f1, f1
	  stfd      f1, 0x30(r1)
	  lwz       r0, 0x34(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r4, r0
	  fmuls     f1, f7, f1
	  fadds     f1, f3, f1
	  stfs      f1, 0x174(r3)
	  stfs      f6, 0x178(r3)
	  stfs      f4, 0x17C(r3)
	  lfs       f6, 0x198(r3)
	  fcmpo     cr0, f6, f0
	  bge-      .loc_0x188
	  lfs       f0, -0x3DB8(r2)
	  lis       r5, 0x8050
	  addi      r5, r5, 0x71A0
	  fmuls     f0, f6, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x38(r1)
	  lwz       r0, 0x3C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r5, r0
	  fneg      f1, f0
	  b         .loc_0x1A8

	.loc_0x188:
	  fmuls     f0, f6, f2
	  lis       r5, 0x8050
	  addi      r5, r5, 0x71A0
	  fctiwz    f0, f0
	  stfd      f0, 0x40(r1)
	  lwz       r0, 0x44(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r5, r0

	.loc_0x1A8:
	  lfs       f5, 0x19C(r3)
	  lfs       f0, -0x3DE8(r2)
	  fmr       f4, f5
	  fcmpo     cr0, f5, f0
	  bge-      .loc_0x1C0
	  fneg      f4, f5

	.loc_0x1C0:
	  lfs       f2, -0x3DB4(r2)
	  fneg      f3, f1
	  lfs       f0, -0x3DE8(r2)
	  fmuls     f1, f4, f2
	  fcmpo     cr0, f5, f0
	  fctiwz    f0, f1
	  stfd      f0, 0x48(r1)
	  lwz       r0, 0x4C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fmuls     f3, f3, f0
	  bge-      .loc_0x21C
	  lfs       f0, -0x3DB8(r2)
	  lis       r5, 0x8050
	  addi      r5, r5, 0x71A0
	  fmuls     f0, f5, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x50(r1)
	  lwz       r0, 0x54(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r5, r0
	  fneg      f2, f0
	  b         .loc_0x23C

	.loc_0x21C:
	  fmuls     f0, f5, f2
	  lis       r5, 0x8050
	  addi      r5, r5, 0x71A0
	  fctiwz    f0, f0
	  stfd      f0, 0x58(r1)
	  lwz       r0, 0x5C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f2, r5, r0

	.loc_0x23C:
	  lfs       f0, -0x3DE8(r2)
	  fcmpo     cr0, f6, f0
	  bge-      .loc_0x24C
	  fneg      f6, f6

	.loc_0x24C:
	  lfs       f1, -0x3DB4(r2)
	  lfs       f0, -0x3DE8(r2)
	  fmuls     f1, f6, f1
	  fcmpo     cr0, f5, f0
	  fctiwz    f0, f1
	  stfd      f0, 0x60(r1)
	  lwz       r0, 0x64(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r4, r0
	  bge-      .loc_0x278
	  fneg      f5, f5

	.loc_0x278:
	  lfs       f0, -0x3DB4(r2)
	  fneg      f1, f1
	  fmuls     f0, f5, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x68(r1)
	  lwz       r0, 0x6C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fmuls     f0, f1, f0
	  stfs      f0, 0x18C(r3)
	  stfs      f2, 0x190(r3)
	  stfs      f3, 0x194(r3)
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8023BEF4
 * Size:	000164
 */
void Game::BaseGameSection::ZoomCamera::doUpdate(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x3DB0(r2)
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  li        r5, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x1AC(r3)
	  lfs       f1, 0x48(r3)
	  fabs      f2, f1
	  fmr       f3, f1
	  frsp      f1, f2
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x40
	  lfs       f3, -0x3DE8(r2)

	.loc_0x40:
	  frsp      f1, f2
	  lfs       f0, -0x3DB0(r2)
	  fcmpo     cr0, f1, f0
	  mfcr      r0
	  rlwinm.   r0,r0,1,31,31
	  bne-      .loc_0x5C
	  li        r4, 0x1

	.loc_0x5C:
	  lfs       f2, -0x3DAC(r2)
	  lfs       f0, 0x198(r31)
	  lfs       f1, -0x3DA8(r2)
	  fnmsubs   f0, f2, f3, f0
	  stfs      f0, 0x198(r31)
	  lfs       f2, 0x198(r31)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x8C
	  fsubs     f0, f2, f1
	  stfs      f0, 0x198(r31)
	  b         .loc_0xA0

	.loc_0x8C:
	  lfs       f0, -0x3DE8(r2)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0xA0
	  fadds     f0, f2, f1
	  stfs      f0, 0x198(r31)

	.loc_0xA0:
	  lwz       r3, 0x1AC(r31)
	  lfs       f0, -0x3DB0(r2)
	  lfs       f1, 0x4C(r3)
	  fabs      f2, f1
	  fmr       f3, f1
	  frsp      f1, f2
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xC4
	  lfs       f3, -0x3DE8(r2)

	.loc_0xC4:
	  frsp      f1, f2
	  lfs       f0, -0x3DB0(r2)
	  fcmpo     cr0, f1, f0
	  mfcr      r0
	  rlwinm.   r0,r0,1,31,31
	  bne-      .loc_0xE0
	  li        r5, 0x1

	.loc_0xE0:
	  lfs       f2, -0x3DA4(r2)
	  lfs       f1, 0x19C(r31)
	  lfs       f0, -0x3DA0(r2)
	  fnmsubs   f1, f2, f3, f1
	  stfs      f1, 0x19C(r31)
	  lfs       f1, 0x1A8(r31)
	  lfs       f2, 0x19C(r31)
	  fsubs     f3, f1, f0
	  fadds     f0, f0, f1
	  fcmpo     cr0, f2, f3
	  bge-      .loc_0x118
	  stfs      f3, 0x19C(r31)
	  li        r5, 0
	  b         .loc_0x128

	.loc_0x118:
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x128
	  stfs      f0, 0x19C(r31)
	  li        r5, 0

	.loc_0x128:
	  rlwinm.   r0,r4,0,24,31
	  bne-      .loc_0x138
	  rlwinm.   r0,r5,0,24,31
	  beq-      .loc_0x148

	.loc_0x138:
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1084
	  li        r5, 0
	  bl        0xFC5F8

	.loc_0x148:
	  mr        r3, r31
	  bl        -0x3FC
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8023C058
 * Size:	000410
 */
void Game::BaseGameSection::do_drawOtakaraWindow((Graphics&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0xF0(r1)
	  mflr      r0
	  stw       r0, 0xF4(r1)
	  stfd      f31, 0xE0(r1)
	  psq_st    f31,0xE8(r1),0,0
	  stw       r31, 0xDC(r1)
	  stw       r30, 0xD8(r1)
	  stw       r29, 0xD4(r1)
	  lwz       r5, -0x6C18(r13)
	  mr        r30, r3
	  mr        r31, r4
	  lwz       r0, 0x44(r5)
	  cmpwi     r0, 0x4
	  beq-      .loc_0x3EC
	  lwz       r3, 0x13C(r30)
	  lwz       r4, -0x6514(r13)
	  cmplwi    r3, 0
	  lfs       f31, 0x54(r4)
	  beq-      .loc_0xE4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x80(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xE4
	  lwz       r29, 0x13C(r30)
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x3
	  beq-      .loc_0xA8
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x4
	  bne-      .loc_0xE4

	.loc_0xA8:
	  lwz       r3, -0x6560(r13)
	  bl        0x1C1344
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xE4
	  lwz       r0, 0x134(r30)
	  cmpwi     r0, 0x2
	  bne-      .loc_0xE4
	  li        r0, 0x4
	  stw       r0, 0x134(r30)
	  lwz       r3, -0x64AC(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0xE4
	  li        r4, 0x1
	  li        r5, 0
	  bl        0x1F2250

	.loc_0xE4:
	  lwz       r0, 0x134(r30)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x18C
	  bge-      .loc_0x104
	  cmpwi     r0, 0
	  beq-      .loc_0x3EC
	  bge-      .loc_0x114
	  b         .loc_0x18C

	.loc_0x104:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x18C
	  b         .loc_0x150
	  b         .loc_0x3EC

	.loc_0x114:
	  lfs       f2, -0x3D9C(r2)
	  lfs       f1, 0x140(r30)
	  lfs       f0, -0x3DCC(r2)
	  fmadds    f1, f2, f31, f1
	  stfs      f1, 0x140(r30)
	  lfs       f1, 0x140(r30)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x18C
	  stfs      f0, 0x140(r30)
	  li        r0, 0x2
	  lfs       f0, -0x3D98(r2)
	  stw       r0, 0x134(r30)
	  stfs      f0, 0x144(r30)
	  b         .loc_0x18C

	.loc_0x150:
	  lfs       f2, -0x3D94(r2)
	  li        r0, 0
	  lfs       f1, 0x140(r30)
	  lfs       f0, -0x3DE8(r2)
	  fnmsubs   f1, f2, f31, f1
	  stfs      f1, 0x140(r30)
	  stfs      f0, 0x140(r30)
	  stfs      f0, 0x140(r30)
	  stw       r0, 0x134(r30)
	  lwz       r3, -0x64AC(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x18C
	  li        r4, 0x1
	  li        r5, 0
	  bl        0x1F21A8

	.loc_0x18C:
	  lwz       r3, 0xF8(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r1, 0x84
	  bl        -0x151F5C
	  lwz       r3, 0xF8(r30)
	  addi      r4, r1, 0x84
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x14C(r30)
	  bl        0x1DEB98
	  bl        0x1E7004
	  lhz       r29, 0x6(r3)
	  bl        0x1E6FFC
	  lhz       r4, 0x4(r3)
	  lis       r0, 0x4330
	  lfs       f3, -0x3DE8(r2)
	  mr        r3, r31
	  stw       r4, 0xBC(r1)
	  addi      r4, r1, 0x14
	  lfd       f2, -0x3DD8(r2)
	  stw       r0, 0xB8(r1)
	  lfd       f0, 0xB8(r1)
	  stw       r29, 0xC4(r1)
	  fsubs     f1, f0, f2
	  stw       r0, 0xC0(r1)
	  lfd       f0, 0xC0(r1)
	  stfs      f3, 0x14(r1)
	  fsubs     f0, f0, f2
	  stfs      f3, 0x18(r1)
	  stfs      f1, 0x1C(r1)
	  stfs      f0, 0x20(r1)
	  bl        0x1EA650
	  lis       r3, 0x8051
	  addi      r4, r1, 0x54
	  subi      r3, r3, 0xDD0
	  bl        -0x151FB8
	  lwz       r0, 0x13C(r30)
	  lwz       r29, 0x138(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x380
	  mr        r3, r29
	  li        r4, 0
	  bl        0x1E9278
	  lwz       r31, 0x14C(r30)
	  mr        r3, r31
	  bl        0x1DEA98
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x8051
	  subi      r4, r4, 0xDD0
	  bl        -0x152004
	  lwz       r3, 0x13C(r30)
	  lbz       r0, 0xD8(r3)
	  ori       r0, r0, 0x34
	  stb       r0, 0xD8(r3)
	  lwz       r3, 0x13C(r30)
	  addi      r3, r3, 0x138
	  bl        -0x15204C
	  lfs       f0, 0x140(r30)
	  addi      r3, r1, 0x24
	  fmuls     f0, f0, f0
	  stfs      f0, 0x8(r1)
	  stfs      f0, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  bl        -0x152068
	  lwz       r4, 0x13C(r30)
	  addi      r3, r1, 0x24
	  lwz       r4, 0x174(r4)
	  lwz       r4, 0x8(r4)
	  addi      r4, r4, 0x24
	  bl        -0x152054
	  lwz       r3, 0x13C(r30)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x13C(r30)
	  lfs       f2, 0x8(r1)
	  lwz       r3, 0x174(r3)
	  lfs       f1, 0xC(r1)
	  lwz       r3, 0x8(r3)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x18(r3)
	  stfs      f1, 0x1C(r3)
	  stfs      f0, 0x20(r3)
	  lwz       r3, 0x13C(r30)
	  lwz       r3, 0x174(r3)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  bl        0x202CD0
	  lwz       r3, 0x13C(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  bl        0x202CAC
	  lwz       r3, 0x13C(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  li        r4, 0x5
	  bl        -0xEAF58
	  lwz       r3, 0x13C(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  li        r4, 0
	  bl        -0xEAF78

	.loc_0x380:
	  mr        r3, r29
	  bl        0x1E9068
	  mr        r3, r29
	  bl        0x1E8DBC
	  lwz       r3, 0x12C(r30)
	  li        r4, 0x5
	  bl        0x2196D4
	  bl        0x2194A4
	  lwz       r3, 0x130(r30)
	  li        r4, 0x5
	  bl        0x2196C4
	  bl        0x219494
	  lwz       r3, 0x12C(r30)
	  li        r4, 0x5
	  bl        0x2196B4
	  bl        0x21950C
	  lwz       r3, 0x130(r30)
	  li        r4, 0x5
	  bl        0x2196A4
	  bl        0x2194FC
	  lis       r4, 0x8051
	  addi      r3, r1, 0x54
	  subi      r4, r4, 0xDD0
	  bl        -0x152168
	  lis       r3, 0x8051
	  subi      r3, r3, 0xDD0
	  bl        -0x1DE07C

	.loc_0x3EC:
	  psq_l     f31,0xE8(r1),0,0
	  lwz       r0, 0xF4(r1)
	  lfd       f31, 0xE0(r1)
	  lwz       r31, 0xDC(r1)
	  lwz       r30, 0xD8(r1)
	  lwz       r29, 0xD4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xF0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8023C468
 * Size:	0000D0
 */
void Game::BaseGameSection::ZoomCamera::__dt(void)
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
	  beq-      .loc_0xB4
	  lis       r4, 0x804C
	  addi      r0, r4, 0x1694
	  stw       r0, 0x0(r31)
	  beq-      .loc_0xA4
	  lis       r4, 0x804F
	  subi      r0, r4, 0x4860
	  stw       r0, 0x0(r31)
	  beq-      .loc_0xA4
	  lis       r4, 0x804F
	  subi      r0, r4, 0x47E0
	  stw       r0, 0x0(r31)
	  beq-      .loc_0xA4
	  lis       r4, 0x804F
	  subi      r0, r4, 0x4764
	  stw       r0, 0x0(r31)
	  beq-      .loc_0xA4
	  lis       r4, 0x804B
	  addi      r0, r4, 0xE94
	  stw       r0, 0x0(r31)
	  beq-      .loc_0xA4
	  lis       r4, 0x804B
	  addi      r0, r4, 0xE4C
	  stw       r0, 0x0(r31)
	  beq-      .loc_0xA4
	  lis       r4, 0x804B
	  addi      r0, r4, 0xE20
	  stw       r0, 0x0(r31)
	  beq-      .loc_0xA4
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r31)
	  bl        0x1D5080

	.loc_0xA4:
	  extsh.    r0, r30
	  ble-      .loc_0xB4
	  mr        r3, r31
	  bl        -0x218464

	.loc_0xB4:
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
 * Address:	8023C538
 * Size:	000004
 */
void LookAtCamera::startVibration(int)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8023C53C
 * Size:	000008
 */
void og::Screen::DispMemberSpecialItem::getSize(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8023C544
 * Size:	00000C
 */
void og::Screen::DispMemberSpecialItem::getOwnerID(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x4F
	  addi      r3, r3, 0x4741
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8023C550
 * Size:	000014
 */
void og::Screen::DispMemberSpecialItem::getMemberID(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x4954
	  lis       r3, 0x53
	  addi      r4, r4, 0x454D
	  addi      r3, r3, 0x505F
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8023C564
 * Size:	000008
 */
void og::Screen::DispMemberKantei::getSize(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8023C56C
 * Size:	00000C
 */
void og::Screen::DispMemberKantei::getOwnerID(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x4F
	  addi      r3, r3, 0x4741
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8023C578
 * Size:	000010
 */
void og::Screen::DispMemberKantei::getMemberID(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x4E54
	  li        r3, 0x4B41
	  addi      r4, r4, 0x4549
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8023C588
 * Size:	000028
 */
void __sinit_baseGameSectionKantei_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804C
	  stw       r0, -0x69B8(r13)
	  stfsu     f0, 0x1688(r3)
	  stfs      f0, -0x69B4(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

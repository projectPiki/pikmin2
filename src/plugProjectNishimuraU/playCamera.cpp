

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
 * Address:	8023F3F0
 * Size:	000138
 */
void Game::PlayCamera::__ct( (Game::Navi *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr        r30, r3
  bl        0x1DC08C
  lis       r4, 0x804C
  lis       r3, 0x8048
  addi      r0, r4, 0x1964
  li        r5, 0
  stw       r0, 0x0(r30)
  li        r4, 0x1
  lfs       f4, -0x3D00(r2)
  addi      r0, r3, 0x3FD0
  stw       r31, 0x198(r30)
  mr        r3, r30
  lfs       f3, -0x3CFC(r2)
  stw       r5, 0x19C(r30)
  lfs       f2, -0x3CF8(r2)
  stw       r4, 0x1A0(r30)
  lfs       f1, -0x3CF4(r2)
  stw       r5, 0x1A4(r30)
  lfs       f0, -0x3CF0(r2)
  stb       r4, 0x248(r30)
  stb       r5, 0x249(r30)
  stfs      f4, 0x1AC(r30)
  stfs      f4, 0x1A8(r30)
  stfs      f3, 0x1B4(r30)
  stfs      f3, 0x1B0(r30)
  stfs      f3, 0x1BC(r30)
  stfs      f3, 0x1B8(r30)
  stfs      f2, 0x1C0(r30)
  stfs      f2, 0x28(r30)
  stfs      f1, 0x1C4(r30)
  stfs      f1, 0x70(r30)
  stfs      f0, 0x1C8(r30)
  stfs      f0, 0x74(r30)
  stfs      f3, 0x1CC(r30)
  stfs      f3, 0x1D0(r30)
  stfs      f3, 0x1D4(r30)
  stfs      f3, 0x1D8(r30)
  stfs      f3, 0x1DC(r30)
  stfs      f3, 0x1E0(r30)
  stb       r5, 0x1F0(r30)
  stfs      f3, 0x23C(r30)
  stfs      f3, 0x230(r30)
  stfs      f3, 0x224(r30)
  stfs      f3, 0x218(r30)
  stfs      f3, 0x20C(r30)
  stfs      f3, 0x200(r30)
  stfs      f3, 0x1F4(r30)
  stb       r5, 0x1F1(r30)
  stfs      f3, 0x240(r30)
  stfs      f3, 0x234(r30)
  stfs      f3, 0x228(r30)
  stfs      f3, 0x21C(r30)
  stfs      f3, 0x210(r30)
  stfs      f3, 0x204(r30)
  stfs      f3, 0x1F8(r30)
  stb       r5, 0x1F2(r30)
  stfs      f3, 0x244(r30)
  stfs      f3, 0x238(r30)
  stfs      f3, 0x22C(r30)
  stfs      f3, 0x220(r30)
  stfs      f3, 0x214(r30)
  stfs      f3, 0x208(r30)
  stfs      f3, 0x1FC(r30)
  stw       r5, 0x24C(r30)
  stw       r5, 0x250(r30)
  stw       r0, 0x14(r30)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8023F528
 * Size:	000008
 */
void Game::PlayCamera::setCameraParms( (Game::CameraParms *))
{
/*
.loc_0x0:
  stw       r4, 0x24C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8023F530
 * Size:	000008
 */
void Game::PlayCamera::setVibrationParms( (Game::VibrationParms *))
{
/*
.loc_0x0:
  stw       r4, 0x250(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8023F538
 * Size:	00016C
 */
void Game::PlayCamera::init(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r0, 0x198(r3)
  cmplwi    r0, 0
  bne-      .loc_0x3C
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x3FDC
  li        r4, 0x78
  addi      r5, r5, 0x3FEC
  crclr     6, 0x6
  bl        -0x214F30

.loc_0x3C:
  lwz       r0, 0x24C(r31)
  cmplwi    r0, 0
  bne-      .loc_0x64
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x3FDC
  li        r4, 0x79
  addi      r5, r5, 0x3FEC
  crclr     6, 0x6
  bl        -0x214F58

.loc_0x64:
  lwz       r0, 0x250(r31)
  cmplwi    r0, 0
  bne-      .loc_0x8C
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x3FDC
  li        r4, 0x7A
  addi      r5, r5, 0x3FEC
  crclr     6, 0x6
  bl        -0x214F80

.loc_0x8C:
  li        r4, 0x1
  li        r0, 0
  stb       r4, 0x248(r31)
  mr        r3, r31
  stw       r0, 0x19C(r31)
  stw       r4, 0x1A0(r31)
  stw       r0, 0x1A4(r31)
  bl        0x9EC
  mr        r3, r31
  bl        0xEA4
  lfs       f0, 0x1AC(r31)
  stfs      f0, 0x1A8(r31)
  lwz       r3, 0x198(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  lfs       f2, -0x3CEC(r2)
  lfs       f0, -0x3CFC(r2)
  fadds     f1, f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0xF0
  lfs       f0, -0x3CE8(r2)
  fadds     f1, f0, f1
  b         .loc_0x104

.loc_0xF0:
  lfs       f0, -0x3CE8(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x104
  fsubs     f1, f1, f0

.loc_0x104:
  stfs      f1, 0x1B4(r31)
  mr        r3, r31
  stfs      f1, 0x1B0(r31)
  lfs       f0, 0x1BC(r31)
  stfs      f0, 0x1B8(r31)
  lfs       f0, 0x1C0(r31)
  stfs      f0, 0x28(r31)
  lfs       f0, 0x1C4(r31)
  stfs      f0, 0x70(r31)
  lfs       f0, 0x1C8(r31)
  stfs      f0, 0x74(r31)
  lfs       f0, 0x1E4(r31)
  stfs      f0, 0x180(r31)
  lfs       f0, 0x1E8(r31)
  stfs      f0, 0x184(r31)
  lfs       f0, 0x1EC(r31)
  stfs      f0, 0x188(r31)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x74(r12)
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
 * Address:	8023F6A4
 * Size:	000034
 */
void Game::PlayCamera::setCameraAngle( (float))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stfs      f1, 0x1B4(r3)
  stfs      f1, 0x1B0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x74(r12)
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
 * Address:	8023F6D8
 * Size:	00005C
 */
void Game::PlayCamera::getCameraData( (Game::CameraData &))
{
/*
.loc_0x0:
  lfs       f0, 0x1A8(r3)
  stfs      f0, 0x0(r4)
  lfs       f0, 0x1B0(r3)
  stfs      f0, 0x4(r4)
  lfs       f0, 0x1B8(r3)
  stfs      f0, 0x8(r4)
  lfs       f0, 0x28(r3)
  stfs      f0, 0xC(r4)
  lfs       f0, 0x70(r3)
  stfs      f0, 0x10(r4)
  lfs       f0, 0x74(r3)
  stfs      f0, 0x14(r4)
  lfs       f0, 0x180(r3)
  stfs      f0, 0x18(r4)
  lfs       f0, 0x184(r3)
  stfs      f0, 0x1C(r4)
  lfs       f0, 0x188(r3)
  stfs      f0, 0x20(r4)
  lwz       r0, 0x1A0(r3)
  stw       r0, 0x24(r4)
  lwz       r0, 0x1A4(r3)
  stw       r0, 0x28(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	8023F734
 * Size:	00005C
 */
void Game::PlayCamera::setCameraData( (Game::CameraData &))
{
/*
.loc_0x0:
  lfs       f0, 0x0(r4)
  stfs      f0, 0x1A8(r3)
  lfs       f0, 0x4(r4)
  stfs      f0, 0x1B0(r3)
  lfs       f0, 0x8(r4)
  stfs      f0, 0x1B8(r3)
  lfs       f0, 0xC(r4)
  stfs      f0, 0x28(r3)
  lfs       f0, 0x10(r4)
  stfs      f0, 0x70(r3)
  lfs       f0, 0x14(r4)
  stfs      f0, 0x74(r3)
  lfs       f0, 0x18(r4)
  stfs      f0, 0x180(r3)
  lfs       f0, 0x1C(r4)
  stfs      f0, 0x184(r3)
  lfs       f0, 0x20(r4)
  stfs      f0, 0x188(r3)
  lwz       r0, 0x24(r4)
  stw       r0, 0x1A0(r3)
  lwz       r0, 0x28(r4)
  stw       r0, 0x1A4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8023F790
 * Size:	000080
 */
void Game::PlayCamera::changePlayerMode( (bool))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0x1
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr        r30, r3
  stw       r0, 0x19C(r3)
  bl        0x818
  mr        r3, r30
  bl        0xCD0
  rlwinm.   r0,r31,0,24,31
  beq-      .loc_0x44
  mr        r3, r30
  bl        0xAF8
  b         .loc_0x4C

.loc_0x44:
  lfs       f0, 0x1B0(r30)
  stfs      f0, 0x1B4(r30)

.loc_0x4C:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x74(r12)
  mtctr     r12
  bctrl     
  mr        r3, r30
  bl        0x1DB550
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
 * Address:	8023F810
 * Size:	00004C
 */
void Game::PlayCamera::isSpecialCamera(void)
{
/*
.loc_0x0:
  lwz       r4, 0x198(r3)
  lwz       r0, 0x278(r4)
  cmplwi    r0, 0
  beq-      .loc_0x44
  lbz       r0, 0x248(r3)
  cmplwi    r0, 0
  beq-      .loc_0x44
  lwz       r0, 0x19C(r3)
  cmpwi     r0, 0
  bne-      .loc_0x44
  lfs       f1, 0x1E0(r3)
  lfs       f0, -0x3CF4(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x44
  li        r3, 0x1
  blr       

.loc_0x44:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	8023F85C
 * Size:	0000E8
 */
void Game::PlayCamera::doUpdate(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  bl        0x568
  rlwinm.   r0,r3,0,27,27
  mr        r31, r3
  beq-      .loc_0x30
  mr        r3, r30
  bl        0x640

.loc_0x30:
  rlwinm.   r0,r31,0,25,25
  beq-      .loc_0x40
  mr        r3, r30
  bl        0x524

.loc_0x40:
  rlwinm.   r0,r31,0,30,31
  beq-      .loc_0x54
  mr        r3, r30
  mr        r4, r31
  bl        0x69C

.loc_0x54:
  rlwinm.   r0,r31,0,29,29
  beq-      .loc_0x64
  mr        r3, r30
  bl        0xA78

.loc_0x64:
  rlwinm.   r0,r31,0,28,28
  beq-      .loc_0x74
  mr        r3, r30
  bl        0xA78

.loc_0x74:
  mr        r3, r30
  bl        0xAD8
  mr        r3, r30
  bl        0xBB0
  mr        r3, r30
  mr        r4, r31
  bl        0x13A0
  mr        r3, r30
  mr        r4, r31
  bl        0xF1C
  li        r31, 0

.loc_0xA0:
  addi      r0, r31, 0x1F0
  lbzx      r0, r30, r0
  cmplwi    r0, 0
  beq-      .loc_0xBC
  mr        r3, r30
  mr        r4, r31
  bl        0x1060

.loc_0xBC:
  addi      r31, r31, 0x1
  cmpwi     r31, 0x3
  blt+      .loc_0xA0
  mr        r3, r30
  bl        0x11EC
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
 * Address:	8023F944
 * Size:	0000E0
 */
void Game::PlayCamera::updateMatrix(void)
{
/*
.loc_0x0:
  stwu      r1, -0x100(r1)
  mflr      r0
  li        r4, 0x5A
  stw       r0, 0x104(r1)
  stw       r31, 0xFC(r1)
  mr        r31, r3
  addi      r3, r1, 0xC8
  lfs       f1, 0x200(r31)
  bl        -0x155450
  lfs       f0, 0x1B0(r31)
  addi      r3, r1, 0x98
  li        r4, 0x59
  fneg      f1, f0
  bl        -0x155464
  lfs       f1, 0x1B8(r31)
  addi      r3, r1, 0x68
  li        r4, 0x58
  bl        -0x155474
  lfs       f1, -0x3CFC(r2)
  addi      r3, r1, 0x38
  lfs       f3, 0x208(r31)
  lfs       f0, 0x1A8(r31)
  fmr       f2, f1
  fsubs     f3, f3, f0
  bl        -0x155250
  lfs       f0, 0x204(r31)
  addi      r3, r1, 0x8
  lfs       f1, 0x180(r31)
  fneg      f3, f0
  lfs       f2, 0x184(r31)
  lfs       f0, 0x188(r31)
  fneg      f1, f1
  fsubs     f2, f3, f2
  fneg      f3, f0
  bl        -0x155278
  addi      r3, r1, 0x68
  addi      r4, r1, 0x98
  addi      r5, r31, 0x144
  bl        -0x1556DC
  addi      r4, r31, 0x144
  addi      r3, r1, 0xC8
  mr        r5, r4
  bl        -0x1556EC
  addi      r4, r31, 0x144
  addi      r3, r1, 0x38
  mr        r5, r4
  bl        -0x1556FC
  addi      r3, r31, 0x144
  addi      r4, r1, 0x8
  mr        r5, r3
  bl        -0x15570C
  lwz       r0, 0x104(r1)
  lwz       r31, 0xFC(r1)
  mtlr      r0
  addi      r1, r1, 0x100
  blr
*/
}

/*
 * --INFO--
 * Address:	8023FA24
 * Size:	00007C
 */
void Game::PlayCamera::noUpdate(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  addi      r3, r31, 0xB4
  addi      r4, r31, 0xF4
  bl        -0x154BD0
  mr        r3, r31
  li        r4, 0
  lwz       r12, 0x0(r31)
  lwz       r12, 0x48(r12)
  mtctr     r12
  bctrl     
  addi      r4, r31, 0x34
  bl        -0x155794
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x54(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x50(r12)
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
 * Address:	8023FAA0
 * Size:	000044
 */
void Game::PlayCamera::isVibration(void)
{
/*
.loc_0x0:
  lbz       r0, 0x1F0(r3)
  cmplwi    r0, 0
  beq-      .loc_0x14
  li        r3, 0x1
  blr       

.loc_0x14:
  lbz       r0, 0x1F1(r3)
  cmplwi    r0, 0
  beq-      .loc_0x28
  li        r3, 0x1
  blr       

.loc_0x28:
  lbz       r0, 0x1F2(r3)
  cmplwi    r0, 0
  beq-      .loc_0x3C
  li        r3, 0x1
  blr       

.loc_0x3C:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	8023FAE4
 * Size:	000208
 */
void Game::PlayCamera::startVibration( (int, float))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  cmpwi     r31, 0x1D
  stw       r30, 0x8(r1)
  mr        r30, r3
  bne-      .loc_0x68
  li        r0, 0x1
  lfs       f0, -0x3CFC(r2)
  stb       r0, 0x1F0(r30)
  li        r4, 0
  stfs      f0, 0x218(r30)
  stfs      f1, 0x230(r30)
  lwz       r5, 0x250(r30)
  lfs       f0, 0x27C(r5)
  stfs      f0, 0x23C(r30)
  lwz       r5, 0x250(r30)
  lfs       f0, 0x2A4(r5)
  stfs      f0, 0x1F4(r30)
  lwz       r5, 0x250(r30)
  lfs       f0, 0x2CC(r5)
  stfs      f0, 0x224(r30)
  bl        0xF5C
  b         .loc_0x1F0

.loc_0x68:
  cmpwi     r31, 0x1C
  bne-      .loc_0xB4
  li        r0, 0x1
  lfs       f0, -0x3CFC(r2)
  stb       r0, 0x1F2(r30)
  li        r4, 0x2
  stfs      f0, 0x220(r30)
  stfs      f1, 0x238(r30)
  lwz       r5, 0x250(r30)
  lfs       f0, 0x204(r5)
  stfs      f0, 0x244(r30)
  lwz       r5, 0x250(r30)
  lfs       f0, 0x22C(r5)
  stfs      f0, 0x1FC(r30)
  lwz       r5, 0x250(r30)
  lfs       f0, 0x254(r5)
  stfs      f0, 0x22C(r30)
  bl        0xF10
  b         .loc_0x1F0

.loc_0xB4:
  li        r0, 0x1
  lfs       f0, -0x3CFC(r2)
  stb       r0, 0x1F1(r30)
  li        r4, 0x1
  stfs      f0, 0x21C(r30)
  stfs      f1, 0x234(r30)
  bl        0xEF0
  cmpwi     r31, 0x1B
  bne-      .loc_0x100
  lwz       r3, 0x250(r30)
  lfs       f0, 0x18C(r3)
  stfs      f0, 0x240(r30)
  lwz       r3, 0x250(r30)
  lfs       f0, 0x1B4(r3)
  stfs      f0, 0x1F8(r30)
  lwz       r3, 0x250(r30)
  lfs       f0, 0x1DC(r3)
  stfs      f0, 0x228(r30)
  b         .loc_0x1F0

.loc_0x100:
  cmpwi     r31, 0x8
  bgt-      .loc_0x118
  lwz       r3, 0x250(r30)
  lfs       f0, 0x24(r3)
  stfs      f0, 0x240(r30)
  b         .loc_0x13C

.loc_0x118:
  cmpwi     r31, 0x11
  bgt-      .loc_0x130
  lwz       r3, 0x250(r30)
  lfs       f0, 0x4C(r3)
  stfs      f0, 0x240(r30)
  b         .loc_0x13C

.loc_0x130:
  lwz       r3, 0x250(r30)
  lfs       f0, 0x74(r3)
  stfs      f0, 0x240(r30)

.loc_0x13C:
  lis       r3, 0x5555
  addi      r3, r3, 0x5556
  mulhw     r4, r3, r31
  rlwinm    r0,r4,1,31,31
  add       r4, r4, r0
  mulhw     r3, r3, r4
  rlwinm    r0,r3,1,31,31
  add       r0, r3, r0
  mulli     r0, r0, 0x3
  sub.      r0, r4, r0
  bne-      .loc_0x178
  lwz       r3, 0x250(r30)
  lfs       f0, 0x9C(r3)
  stfs      f0, 0x1F8(r30)
  b         .loc_0x19C

.loc_0x178:
  cmpwi     r0, 0x1
  bne-      .loc_0x190
  lwz       r3, 0x250(r30)
  lfs       f0, 0xC4(r3)
  stfs      f0, 0x1F8(r30)
  b         .loc_0x19C

.loc_0x190:
  lwz       r3, 0x250(r30)
  lfs       f0, 0xEC(r3)
  stfs      f0, 0x1F8(r30)

.loc_0x19C:
  lis       r3, 0x5555
  addi      r0, r3, 0x5556
  mulhw     r3, r0, r31
  rlwinm    r0,r3,1,31,31
  add       r0, r3, r0
  mulli     r0, r0, 0x3
  sub.      r0, r31, r0
  bne-      .loc_0x1CC
  lwz       r3, 0x250(r30)
  lfs       f0, 0x114(r3)
  stfs      f0, 0x228(r30)
  b         .loc_0x1F0

.loc_0x1CC:
  cmpwi     r0, 0x1
  bne-      .loc_0x1E4
  lwz       r3, 0x250(r30)
  lfs       f0, 0x13C(r3)
  stfs      f0, 0x228(r30)
  b         .loc_0x1F0

.loc_0x1E4:
  lwz       r3, 0x250(r30)
  lfs       f0, 0x164(r3)
  stfs      f0, 0x228(r30)

.loc_0x1F0:
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
 * Address:	8023FCEC
 * Size:	0000D0
 */
void Game::PlayCamera::startDemoCamera( (int))
{
/*
.loc_0x0:
  cmpwi     r4, 0x1
  beq-      .loc_0xC
  b         .loc_0x64

.loc_0xC:
  lwz       r4, 0x24C(r3)
  lfs       f5, -0x3CE4(r2)
  lfs       f0, 0x7A4(r4)
  lfs       f4, -0x3CF4(r2)
  stfs      f0, 0x1AC(r3)
  lfs       f3, -0x3CF0(r2)
  lwz       r4, 0x24C(r3)
  lfs       f2, -0x3CE0(r2)
  lfs       f0, 0x7CC(r4)
  lfs       f1, -0x3CDC(r2)
  fmuls     f5, f5, f0
  lfs       f0, -0x3CD8(r2)
  stfs      f5, 0x1BC(r3)
  lwz       r4, 0x24C(r3)
  lfs       f5, 0x7F4(r4)
  stfs      f5, 0x1C0(r3)
  stfs      f4, 0x1C4(r3)
  stfs      f3, 0x1C8(r3)
  stfs      f2, 0x1CC(r3)
  stfs      f1, 0x1D0(r3)
  stfs      f0, 0x1D4(r3)
  blr       

.loc_0x64:
  lwz       r4, 0x24C(r3)
  lfs       f1, -0x3CE4(r2)
  lfs       f0, 0x24(r4)
  stfs      f0, 0x1AC(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x4C(r4)
  fmuls     f0, f1, f0
  stfs      f0, 0x1BC(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x74(r4)
  stfs      f0, 0x1C0(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x114(r4)
  stfs      f0, 0x1C4(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x13C(r4)
  stfs      f0, 0x1C8(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x9C(r4)
  stfs      f0, 0x1CC(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0xC4(r4)
  stfs      f0, 0x1D0(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0xEC(r4)
  stfs      f0, 0x1D4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8023FDBC
 * Size:	000020
 */
void Game::PlayCamera::finishDemoCamera(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        0x204
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8023FDDC
 * Size:	0000EC
 */
void Game::PlayCamera::updateCameraMode(void)
{
/*
.loc_0x0:
  lwz       r4, 0x198(r3)
  li        r6, 0
  lwz       r5, 0x278(r4)
  cmplwi    r5, 0
  beq-      .loc_0xE4
  lbz       r0, 0x248(r3)
  cmplwi    r0, 0
  beq-      .loc_0xE4
  lwz       r0, 0x19C(r3)
  cmpwi     r0, 0
  bne-      .loc_0xE4
  lwz       r0, 0x18(r5)
  rlwinm.   r0,r0,0,26,26
  beq-      .loc_0x78
  lfs       f2, 0x1E0(r3)
  lfs       f1, -0x3CF4(r2)
  fcmpo     cr0, f2, f1
  bge-      .loc_0x70
  lwz       r4, -0x6514(r13)
  lfs       f0, 0x54(r4)
  fadds     f0, f2, f0
  stfs      f0, 0x1E0(r3)
  lfs       f0, 0x1E0(r3)
  fcmpo     cr0, f0, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x98
  ori       r6, r6, 0x30
  b         .loc_0x98

.loc_0x70:
  ori       r6, r6, 0x20
  b         .loc_0x98

.loc_0x78:
  lfs       f1, 0x1E0(r3)
  lfs       f0, -0x3CF4(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x90
  ori       r6, r6, 0x40

.loc_0x90:
  lfs       f0, -0x3CFC(r2)
  stfs      f0, 0x1E0(r3)

.loc_0x98:
  rlwinm.   r0,r6,0,26,26
  bne-      .loc_0xBC
  lwz       r3, 0x1C(r5)
  rlwinm.   r0,r3,0,26,26
  beq-      .loc_0xB0
  ori       r6, r6, 0x1

.loc_0xB0:
  rlwinm.   r0,r3,0,27,27
  beq-      .loc_0xBC
  ori       r6, r6, 0x2

.loc_0xBC:
  lwz       r0, 0x1C(r5)
  rlwinm.   r0,r0,0,25,25
  beq-      .loc_0xD0
  ori       r6, r6, 0x4
  b         .loc_0xE4

.loc_0xD0:
  lfs       f1, 0x28(r5)
  lfs       f0, -0x3CD4(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0xE4
  ori       r6, r6, 0x8

.loc_0xE4:
  mr        r3, r6
  blr
*/
}

/*
 * --INFO--
 * Address:	8023FEC8
 * Size:	000080
 */
void Game::PlayCamera::startZoomCamera(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f5, -0x3CE4(r2)
  li        r4, 0x1888
  stw       r0, 0x14(r1)
  li        r5, 0
  lfs       f4, -0x3CF4(r2)
  lwz       r6, 0x24C(r3)
  lfs       f3, -0x3CF0(r2)
  lfs       f0, 0x7A4(r6)
  lfs       f2, -0x3CE0(r2)
  stfs      f0, 0x1AC(r3)
  lfs       f1, -0x3CDC(r2)
  lwz       r6, 0x24C(r3)
  lfs       f0, 0x7CC(r6)
  fmuls     f5, f5, f0
  lfs       f0, -0x3CD8(r2)
  stfs      f5, 0x1BC(r3)
  lwz       r6, 0x24C(r3)
  lfs       f5, 0x7F4(r6)
  stfs      f5, 0x1C0(r3)
  stfs      f4, 0x1C4(r3)
  stfs      f3, 0x1C8(r3)
  stfs      f2, 0x1CC(r3)
  stfs      f1, 0x1D0(r3)
  stfs      f0, 0x1D4(r3)
  lwz       r3, -0x67A8(r13)
  bl        0xF86FC
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8023FF48
 * Size:	000084
 */
void Game::PlayCamera::startGameCamera( (int))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  rlwinm.   r0,r4,0,31,31
  stw       r31, 0xC(r1)
  mr        r31, r3
  beq-      .loc_0x3C
  lwz       r3, 0x1A0(r31)
  addi      r0, r3, 0x1
  stw       r0, 0x1A0(r31)
  lwz       r0, 0x1A0(r31)
  cmpwi     r0, 0x2
  ble-      .loc_0x3C
  li        r0, 0
  stw       r0, 0x1A0(r31)

.loc_0x3C:
  rlwinm.   r0,r4,0,30,30
  beq-      .loc_0x58
  lwz       r3, 0x1A4(r31)
  li        r0, 0
  xori      r3, r3, 0x1
  stw       r3, 0x1A4(r31)
  stb       r0, 0x249(r31)

.loc_0x58:
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180F
  li        r5, 0
  bl        0xF8684
  mr        r3, r31
  bl        .loc_0x84
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x84:
*/
}

/*
 * --INFO--
 * Address:	8023FFCC
 * Size:	0002F8
 */
void Game::PlayCamera::setTargetParms(void)
{
/*
.loc_0x0:
  lfs       f0, -0x3CFC(r2)
  stfs      f0, 0x1E0(r3)
  lwz       r0, 0x1A4(r3)
  cmpwi     r0, 0x1
  beq-      .loc_0x18C
  bgelr-    
  cmpwi     r0, 0
  bltlr-    
  lwz       r0, 0x1A0(r3)
  cmpwi     r0, 0x1
  beq-      .loc_0xB4
  bge-      .loc_0x3C
  cmpwi     r0, 0
  bge-      .loc_0x48
  blr       

.loc_0x3C:
  cmpwi     r0, 0x3
  bgelr-    
  b         .loc_0x120

.loc_0x48:
  lwz       r4, 0x24C(r3)
  lfs       f1, -0x3CE4(r2)
  lfs       f0, 0x24(r4)
  stfs      f0, 0x1AC(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x4C(r4)
  fmuls     f0, f1, f0
  stfs      f0, 0x1BC(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x74(r4)
  stfs      f0, 0x1C0(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x114(r4)
  stfs      f0, 0x1C4(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x13C(r4)
  stfs      f0, 0x1C8(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x9C(r4)
  stfs      f0, 0x1CC(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0xC4(r4)
  stfs      f0, 0x1D0(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0xEC(r4)
  stfs      f0, 0x1D4(r3)
  blr       

.loc_0xB4:
  lwz       r4, 0x24C(r3)
  lfs       f1, -0x3CE4(r2)
  lfs       f0, 0x164(r4)
  stfs      f0, 0x1AC(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x18C(r4)
  fmuls     f0, f1, f0
  stfs      f0, 0x1BC(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x1B4(r4)
  stfs      f0, 0x1C0(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x254(r4)
  stfs      f0, 0x1C4(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x27C(r4)
  stfs      f0, 0x1C8(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x1DC(r4)
  stfs      f0, 0x1CC(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x204(r4)
  stfs      f0, 0x1D0(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x22C(r4)
  stfs      f0, 0x1D4(r3)
  blr       

.loc_0x120:
  lwz       r4, 0x24C(r3)
  lfs       f1, -0x3CE4(r2)
  lfs       f0, 0x2A4(r4)
  stfs      f0, 0x1AC(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x2CC(r4)
  fmuls     f0, f1, f0
  stfs      f0, 0x1BC(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x2F4(r4)
  stfs      f0, 0x1C0(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x394(r4)
  stfs      f0, 0x1C4(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x3BC(r4)
  stfs      f0, 0x1C8(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x31C(r4)
  stfs      f0, 0x1CC(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x344(r4)
  stfs      f0, 0x1D0(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x36C(r4)
  stfs      f0, 0x1D4(r3)
  blr       

.loc_0x18C:
  lwz       r0, 0x1A0(r3)
  cmpwi     r0, 0x1
  beq-      .loc_0x220
  bge-      .loc_0x1A8
  cmpwi     r0, 0
  bge-      .loc_0x1B4
  blr       

.loc_0x1A8:
  cmpwi     r0, 0x3
  bgelr-    
  b         .loc_0x28C

.loc_0x1B4:
  lwz       r4, 0x24C(r3)
  lfs       f1, -0x3CE4(r2)
  lfs       f0, 0x3E4(r4)
  stfs      f0, 0x1AC(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x40C(r4)
  fmuls     f0, f1, f0
  stfs      f0, 0x1BC(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x434(r4)
  stfs      f0, 0x1C0(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x4D4(r4)
  stfs      f0, 0x1C4(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x4FC(r4)
  stfs      f0, 0x1C8(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x45C(r4)
  stfs      f0, 0x1CC(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x484(r4)
  stfs      f0, 0x1D0(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x4AC(r4)
  stfs      f0, 0x1D4(r3)
  blr       

.loc_0x220:
  lwz       r4, 0x24C(r3)
  lfs       f1, -0x3CE4(r2)
  lfs       f0, 0x524(r4)
  stfs      f0, 0x1AC(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x54C(r4)
  fmuls     f0, f1, f0
  stfs      f0, 0x1BC(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x574(r4)
  stfs      f0, 0x1C0(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x614(r4)
  stfs      f0, 0x1C4(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x63C(r4)
  stfs      f0, 0x1C8(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x59C(r4)
  stfs      f0, 0x1CC(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x5C4(r4)
  stfs      f0, 0x1D0(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x5EC(r4)
  stfs      f0, 0x1D4(r3)
  blr       

.loc_0x28C:
  lwz       r4, 0x24C(r3)
  lfs       f1, -0x3CE4(r2)
  lfs       f0, 0x664(r4)
  stfs      f0, 0x1AC(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x68C(r4)
  fmuls     f0, f1, f0
  stfs      f0, 0x1BC(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x6B4(r4)
  stfs      f0, 0x1C0(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x754(r4)
  stfs      f0, 0x1C4(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x77C(r4)
  stfs      f0, 0x1C8(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x6DC(r4)
  stfs      f0, 0x1CC(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x704(r4)
  stfs      f0, 0x1D0(r3)
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x72C(r4)
  stfs      f0, 0x1D4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802402C4
 * Size:	000070
 */
void Game::PlayCamera::setTargetThetaToWhistle(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  addi      r3, r1, 0x8
  lwz       r4, 0x198(r31)
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x198(r31)
  lis       r3, 0x8051
  lfs       f3, 0x8(r1)
  subi      r3, r3, 0x2E20
  lwz       r4, 0x28C(r4)
  lfs       f2, 0x10(r1)
  lfs       f1, 0xC(r4)
  lfs       f0, 0x14(r4)
  fsubs     f1, f3, f1
  fsubs     f2, f2, f0
  bl        -0x20B210
  stfs      f1, 0x1B4(r31)
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80240334
 * Size:	000010
 */
void Game::PlayCamera::setFollowTime(void)
{
/*
.loc_0x0:
  lwz       r4, 0x24C(r3)
  lfs       f0, 0x90C(r4)
  stfs      f0, 0x1DC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80240344
 * Size:	000068
 */
void Game::PlayCamera::setSmoothThetaSpeed(void)
{
/*
.loc_0x0:
  lwz       r4, 0x198(r3)
  lwz       r6, 0x278(r4)
  cmplwi    r6, 0
  beqlr-    
  lwz       r5, 0x24C(r3)
  lwz       r4, -0x6514(r13)
  lfs       f2, 0x48(r6)
  lfs       f1, 0x934(r5)
  lfs       f0, 0x1D8(r3)
  lfs       f4, 0x95C(r5)
  lfs       f3, 0x54(r4)
  fmadds    f0, f2, f1, f0
  fmuls     f2, f4, f3
  stfs      f0, 0x1D8(r3)
  fneg      f1, f2
  lfs       f0, 0x1D8(r3)
  fcmpo     cr0, f0, f1
  bge-      .loc_0x4C
  b         .loc_0x60

.loc_0x4C:
  fcmpo     cr0, f0, f2
  ble-      .loc_0x5C
  fmr       f1, f2
  b         .loc_0x60

.loc_0x5C:
  fmr       f1, f0

.loc_0x60:
  stfs      f1, 0x1D8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802403AC
 * Size:	0000E0
 */
void Game::PlayCamera::changeTargetTheta(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lfs       f2, -0x3CFC(r2)
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  lfs       f1, 0x1DC(r3)
  fcmpo     cr0, f1, f2
  ble-      .loc_0x80
  lwz       r4, -0x6514(r13)
  addi      r3, r1, 0x8
  lfs       f0, 0x54(r4)
  fsubs     f0, f1, f0
  stfs      f0, 0x1DC(r31)
  lwz       r4, 0x198(r31)
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x198(r31)
  lis       r3, 0x8051
  lfs       f3, 0x8(r1)
  subi      r3, r3, 0x2E20
  lwz       r4, 0x28C(r4)
  lfs       f2, 0x10(r1)
  lfs       f1, 0xC(r4)
  lfs       f0, 0x14(r4)
  fsubs     f1, f3, f1
  fsubs     f2, f2, f0
  bl        -0x20B318
  stfs      f1, 0x1B4(r31)
  b         .loc_0xB8

.loc_0x80:
  lfs       f1, 0x1B4(r31)
  lfs       f0, 0x1D8(r31)
  fsubs     f1, f1, f0
  fcmpo     cr0, f1, f2
  bge-      .loc_0xA0
  lfs       f0, -0x3CE8(r2)
  fadds     f1, f0, f1
  b         .loc_0xB4

.loc_0xA0:
  lfs       f0, -0x3CE8(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0xB4
  fsubs     f1, f1, f0

.loc_0xB4:
  stfs      f1, 0x1B4(r31)

.loc_0xB8:
  lwz       r3, 0x24C(r31)
  lfs       f1, 0x1D8(r31)
  lfs       f0, 0x984(r3)
  fmuls     f0, f1, f0
  stfs      f0, 0x1D8(r31)
  lwz       r31, 0x1C(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8024048C
 * Size:	000384
 */
void Game::PlayCamera::changeTargetAtPosition(void)
{
/*
.loc_0x0:
  stwu      r1, -0xB0(r1)
  mflr      r0
  stw       r0, 0xB4(r1)
  stfd      f31, 0xA0(r1)
  psq_st    f31,0xA8(r1),0,0
  stfd      f30, 0x90(r1)
  psq_st    f30,0x98(r1),0,0
  stfd      f29, 0x80(r1)
  psq_st    f29,0x88(r1),0,0
  stfd      f28, 0x70(r1)
  psq_st    f28,0x78(r1),0,0
  stfd      f27, 0x60(r1)
  psq_st    f27,0x68(r1),0,0
  stfd      f26, 0x50(r1)
  psq_st    f26,0x58(r1),0,0
  stfd      f25, 0x40(r1)
  psq_st    f25,0x48(r1),0,0
  stw       r31, 0x3C(r1)
  mr        r31, r3
  addi      r3, r1, 0x14
  lwz       r4, 0x198(r31)
  lfs       f25, 0x1D0(r31)
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x198(r31)
  lis       r4, 0x804B
  lfs       f29, 0x14(r1)
  li        r0, 0
  lwz       r3, 0x254(r3)
  subi      r4, r4, 0x437C
  lfs       f31, 0x18(r1)
  cmplwi    r0, 0
  lfs       f30, 0x1C(r1)
  fmuls     f28, f29, f25
  fmuls     f27, f31, f25
  stw       r4, 0x20(r1)
  fmuls     f26, f30, f25
  stw       r0, 0x2C(r1)
  stw       r0, 0x24(r1)
  stw       r3, 0x28(r1)
  bne-      .loc_0xC4
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x24(r1)
  b         .loc_0x260

.loc_0xC4:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x24(r1)
  b         .loc_0x130

.loc_0xDC:
  lwz       r3, 0x28(r1)
  lwz       r4, 0x24(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x2C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x260
  lwz       r3, 0x28(r1)
  lwz       r4, 0x24(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x24(r1)

.loc_0x130:
  lwz       r12, 0x20(r1)
  addi      r3, r1, 0x20
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0xDC
  b         .loc_0x260

.loc_0x150:
  lwz       r3, 0x28(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  cmplwi    r3, 0
  beq-      .loc_0x1A4
  mr        r4, r3
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x8(r1)
  lfs       f2, 0xC(r1)
  lfs       f1, 0x10(r1)
  fadds     f28, f28, f0
  lfs       f0, -0x3CF4(r2)
  fadds     f27, f27, f2
  fadds     f26, f26, f1
  fadds     f25, f25, f0

.loc_0x1A4:
  lwz       r0, 0x2C(r1)
  cmplwi    r0, 0
  bne-      .loc_0x1D0
  lwz       r3, 0x28(r1)
  lwz       r4, 0x24(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x24(r1)
  b         .loc_0x260

.loc_0x1D0:
  lwz       r3, 0x28(r1)
  lwz       r4, 0x24(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x24(r1)
  b         .loc_0x244

.loc_0x1F0:
  lwz       r3, 0x28(r1)
  lwz       r4, 0x24(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x2C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x260
  lwz       r3, 0x28(r1)
  lwz       r4, 0x24(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x24(r1)

.loc_0x244:
  lwz       r12, 0x20(r1)
  addi      r3, r1, 0x20
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x1F0

.loc_0x260:
  lwz       r3, 0x28(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x24(r1)
  cmplw     r4, r3
  bne+      .loc_0x150
  fdivs     f1, f28, f25
  lfs       f0, -0x3CFC(r2)
  fdivs     f2, f27, f25
  stfs      f1, 0x1E4(r31)
  fdivs     f1, f26, f25
  stfs      f2, 0x1E8(r31)
  stfs      f1, 0x1EC(r31)
  lfs       f6, 0x1E8(r31)
  lfs       f7, 0x1E4(r31)
  fsubs     f2, f6, f31
  lfs       f5, 0x1EC(r31)
  fsubs     f3, f7, f29
  fsubs     f1, f5, f30
  fmuls     f2, f2, f2
  fmuls     f4, f1, f1
  fmadds    f1, f3, f3, f2
  fadds     f1, f4, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x2DC
  ble-      .loc_0x2E0
  fsqrte    f0, f1
  fmuls     f1, f0, f1
  b         .loc_0x2E0

.loc_0x2DC:
  fmr       f1, f0

.loc_0x2E0:
  lfs       f0, 0x1D4(r31)
  fcmpo     cr0, f0, f1
  bge-      .loc_0x328
  fdivs     f8, f0, f1
  lfs       f0, -0x3CF4(r2)
  fsubs     f1, f0, f8
  fmuls     f0, f7, f8
  fmuls     f2, f6, f8
  fmuls     f4, f29, f1
  fmuls     f3, f31, f1
  fmuls     f1, f30, f1
  fadds     f4, f4, f0
  fmuls     f0, f5, f8
  fadds     f2, f3, f2
  stfs      f4, 0x1E4(r31)
  fadds     f0, f1, f0
  stfs      f2, 0x1E8(r31)
  stfs      f0, 0x1EC(r31)

.loc_0x328:
  lfs       f1, 0x1E8(r31)
  lfs       f0, 0x1CC(r31)
  fadds     f0, f1, f0
  stfs      f0, 0x1E8(r31)
  psq_l     f31,0xA8(r1),0,0
  lfd       f31, 0xA0(r1)
  psq_l     f30,0x98(r1),0,0
  lfd       f30, 0x90(r1)
  psq_l     f29,0x88(r1),0,0
  lfd       f29, 0x80(r1)
  psq_l     f28,0x78(r1),0,0
  lfd       f28, 0x70(r1)
  psq_l     f27,0x68(r1),0,0
  lfd       f27, 0x60(r1)
  psq_l     f26,0x58(r1),0,0
  lfd       f26, 0x50(r1)
  psq_l     f25,0x48(r1),0,0
  lfd       f25, 0x40(r1)
  lwz       r0, 0xB4(r1)
  lwz       r31, 0x3C(r1)
  mtlr      r0
  addi      r1, r1, 0xB0
  blr
*/
}

/*
 * --INFO--
 * Address:	80240810
 * Size:	000164
 */
void Game::PlayCamera::updateParms( (int))
{
/*
.loc_0x0:
  lwz       r5, 0x24C(r3)
  rlwinm.   r0,r4,0,26,26
  lfs       f1, -0x3CF4(r2)
  lfs       f0, 0x8BC(r5)
  lfs       f2, 0x1AC(r3)
  fsubs     f1, f1, f0
  lfs       f3, 0x1A8(r3)
  fmuls     f2, f2, f0
  fmadds    f2, f3, f1, f2
  stfs      f2, 0x1A8(r3)
  lfs       f2, 0x1BC(r3)
  lfs       f3, 0x1B8(r3)
  fmuls     f2, f2, f0
  fmadds    f2, f3, f1, f2
  stfs      f2, 0x1B8(r3)
  lfs       f2, 0x1C0(r3)
  lfs       f3, 0x28(r3)
  fmuls     f2, f2, f0
  fmadds    f2, f3, f1, f2
  stfs      f2, 0x28(r3)
  lfs       f2, 0x1C4(r3)
  lfs       f3, 0x70(r3)
  fmuls     f2, f2, f0
  fmadds    f2, f3, f1, f2
  stfs      f2, 0x70(r3)
  lfs       f2, 0x1C8(r3)
  lfs       f3, 0x74(r3)
  fmuls     f2, f2, f0
  fmadds    f2, f3, f1, f2
  stfs      f2, 0x74(r3)
  beq-      .loc_0x84
  lfs       f0, -0x3CD0(r2)
  lfs       f1, -0x3CCC(r2)

.loc_0x84:
  lfs       f3, 0x180(r3)
  lfs       f2, 0x1E4(r3)
  lfs       f5, 0x184(r3)
  fmuls     f3, f3, f1
  fmuls     f2, f2, f0
  lfs       f4, 0x1E8(r3)
  lfs       f7, 0x188(r3)
  fmuls     f5, f5, f1
  fmuls     f4, f4, f0
  lfs       f6, 0x1EC(r3)
  fadds     f2, f3, f2
  fmuls     f1, f7, f1
  fmuls     f0, f6, f0
  fadds     f3, f5, f4
  stfs      f2, 0x180(r3)
  fadds     f0, f1, f0
  stfs      f3, 0x184(r3)
  stfs      f0, 0x188(r3)
  lfs       f4, 0x1B4(r3)
  lfs       f2, 0x1B0(r3)
  lwz       r4, 0x24C(r3)
  fcmpo     cr0, f4, f2
  cror      2, 0x1, 0x2
  bne-      .loc_0x100
  fsubs     f3, f4, f2
  lfs       f1, -0x3CE8(r2)
  fsubs     f0, f1, f3
  fcmpo     cr0, f0, f3
  bge-      .loc_0x118
  fsubs     f4, f4, f1
  b         .loc_0x118

.loc_0x100:
  fsubs     f3, f2, f4
  lfs       f1, -0x3CE8(r2)
  fsubs     f0, f1, f3
  fcmpo     cr0, f0, f3
  bge-      .loc_0x118
  fadds     f4, f4, f1

.loc_0x118:
  fsubs     f2, f4, f2
  lfs       f3, 0x8E4(r4)
  lfs       f1, 0x1B0(r3)
  lfs       f0, -0x3CFC(r2)
  fmadds    f1, f3, f2, f1
  stfs      f1, 0x1B0(r3)
  lfs       f1, 0x1B0(r3)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x148
  lfs       f0, -0x3CE8(r2)
  fadds     f1, f0, f1
  b         .loc_0x15C

.loc_0x148:
  lfs       f0, -0x3CE8(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x15C
  fsubs     f1, f1, f0

.loc_0x15C:
  stfs      f1, 0x1B0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80240974
 * Size:	00012C
 */
void Game::PlayCamera::updateVibration( (int))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  rlwinm    r6,r4,2,0,29
  add       r7, r3, r6
  lfs       f0, -0x3CE8(r2)
  lwz       r5, -0x6514(r13)
  addi      r8, r7, 0x218
  lfs       f2, 0x1F4(r7)
  lfs       f1, 0x54(r5)
  lfs       f3, 0x20C(r7)
  fmuls     f1, f2, f1
  lfs       f4, -0x3CF4(r2)
  fadds     f1, f3, f1
  stfs      f1, 0x20C(r7)
  lwz       r5, -0x6514(r13)
  lfs       f2, 0x218(r7)
  lfs       f1, 0x54(r5)
  fadds     f1, f2, f1
  stfs      f1, 0x218(r7)
  lfs       f1, 0x20C(r7)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x5C
  fsubs     f0, f1, f0
  stfs      f0, 0x20C(r7)

.loc_0x5C:
  add       r5, r3, r6
  lfs       f1, 0x0(r8)
  lfs       f0, 0x224(r5)
  fcmpo     cr0, f1, f0
  ble-      .loc_0xA4
  fsubs     f2, f1, f0
  lfs       f1, -0x3CC8(r2)
  lfs       f0, -0x3CFC(r2)
  fdivs     f1, f2, f1
  fsubs     f4, f4, f1
  fcmpo     cr0, f4, f0
  bge-      .loc_0xA4
  add       r4, r3, r4
  li        r0, 0
  stb       r0, 0x1F0(r4)
  fmr       f4, f0
  stfs      f0, 0x20C(r7)
  stfs      f0, 0x0(r8)

.loc_0xA4:
  add       r4, r3, r6
  lfs       f3, 0x20C(r7)
  lfs       f1, 0x230(r4)
  lfs       f0, -0x3CFC(r2)
  fmuls     f1, f4, f1
  lfs       f2, 0x23C(r4)
  fcmpo     cr0, f3, f0
  fmuls     f1, f2, f1
  bge-      .loc_0xF4
  lfs       f0, -0x3CC4(r2)
  lis       r4, 0x8050
  addi      r4, r4, 0x71A0
  fmuls     f0, f3, f0
  fctiwz    f0, f0
  stfd      f0, 0x8(r1)
  lwz       r0, 0xC(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r4, r0
  fneg      f0, f0
  b         .loc_0x118

.loc_0xF4:
  lfs       f0, -0x3CC0(r2)
  lis       r4, 0x8050
  addi      r4, r4, 0x71A0
  fmuls     f0, f3, f0
  fctiwz    f0, f0
  stfd      f0, 0x10(r1)
  lwz       r0, 0x14(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r4, r0

.loc_0x118:
  fmuls     f0, f1, f0
  add       r3, r3, r6
  stfs      f0, 0x200(r3)
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80240AA0
 * Size:	000074
 */
void Game::PlayCamera::otherVibFinished( (int))
{
/*
.loc_0x0:
  lbz       r0, 0x1F0(r3)
  li        r5, 0
  lfs       f1, -0x3CF0(r2)
  cmplwi    r0, 0
  beq-      .loc_0x28
  cmpw      r5, r4
  beq-      .loc_0x28
  lfs       f0, 0x218(r3)
  fadds     f0, f0, f1
  stfs      f0, 0x218(r3)

.loc_0x28:
  lbz       r0, 0x1F1(r3)
  li        r5, 0x1
  cmplwi    r0, 0
  beq-      .loc_0x4C
  cmpw      r5, r4
  beq-      .loc_0x4C
  lfs       f0, 0x21C(r3)
  fadds     f0, f0, f1
  stfs      f0, 0x21C(r3)

.loc_0x4C:
  lbz       r0, 0x1F2(r3)
  li        r5, 0x2
  cmplwi    r0, 0
  beqlr-    
  cmpw      r5, r4
  beqlr-    
  lfs       f0, 0x220(r3)
  fadds     f0, f0, f1
  stfs      f0, 0x220(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80240B14
 * Size:	000174
 */
void Game::PlayCamera::isModCameraFinished(void)
{
/*
.loc_0x0:
  lwz       r0, 0x19C(r3)
  cmpwi     r0, 0x1
  bne-      .loc_0x16C
  lfs       f3, 0x1B4(r3)
  lfs       f4, 0x1B0(r3)
  fcmpo     cr0, f3, f4
  cror      2, 0x1, 0x2
  bne-      .loc_0x3C
  fsubs     f2, f3, f4
  lfs       f1, -0x3CE8(r2)
  fsubs     f0, f1, f2
  fcmpo     cr0, f0, f2
  bge-      .loc_0x54
  fsubs     f3, f3, f1
  b         .loc_0x54

.loc_0x3C:
  fsubs     f2, f4, f3
  lfs       f1, -0x3CE8(r2)
  fsubs     f0, f1, f2
  fcmpo     cr0, f0, f2
  bge-      .loc_0x54
  fadds     f3, f3, f1

.loc_0x54:
  fsubs     f1, f3, f4
  lfs       f0, -0x3CFC(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x68
  b         .loc_0x6C

.loc_0x68:
  fneg      f1, f1

.loc_0x6C:
  lfs       f0, -0x3CD4(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x16C
  lfs       f2, 0x1AC(r3)
  lfs       f1, 0x1A8(r3)
  lfs       f0, -0x3CFC(r2)
  fsubs     f1, f2, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x94
  b         .loc_0x98

.loc_0x94:
  fneg      f1, f1

.loc_0x98:
  lfs       f0, -0x3CE0(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x16C
  lfs       f2, 0x1BC(r3)
  lfs       f1, 0x1B8(r3)
  lfs       f0, -0x3CFC(r2)
  fsubs     f1, f2, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0xC0
  b         .loc_0xC4

.loc_0xC0:
  fneg      f1, f1

.loc_0xC4:
  lfs       f0, -0x3CD4(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x16C
  lfs       f2, 0x1C0(r3)
  lfs       f1, 0x28(r3)
  lfs       f0, -0x3CFC(r2)
  fsubs     f1, f2, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0xEC
  b         .loc_0xF0

.loc_0xEC:
  fneg      f1, f1

.loc_0xF0:
  lfs       f0, -0x3CF4(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x16C
  lfs       f1, 0x1E8(r3)
  lfs       f0, 0x184(r3)
  lfs       f3, 0x1E4(r3)
  fsubs     f4, f1, f0
  lfs       f2, 0x180(r3)
  lfs       f1, 0x1EC(r3)
  lfs       f0, 0x188(r3)
  fsubs     f3, f3, f2
  fmuls     f4, f4, f4
  fsubs     f2, f1, f0
  lfs       f0, -0x3CFC(r2)
  fmadds    f1, f3, f3, f4
  fmuls     f2, f2, f2
  fadds     f1, f2, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x14C
  ble-      .loc_0x150
  fsqrte    f0, f1
  fmuls     f1, f0, f1
  b         .loc_0x150

.loc_0x14C:
  fmr       f1, f0

.loc_0x150:
  lfs       f0, -0x3CBC(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x16C
  li        r0, 0
  stw       r0, 0x19C(r3)
  li        r3, 0x1
  blr       

.loc_0x16C:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	80240C88
 * Size:	000158
 */
void Game::PlayCamera::setCollisionCameraTargetPhi( (int))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  rlwinm.   r0,r4,0,26,26
  stw       r31, 0xC(r1)
  mr        r31, r3
  beq-      .loc_0x34
  lwz       r4, 0x24C(r31)
  lfs       f1, 0x7CC(r4)
  lfs       f2, 0x7A4(r4)
  bl        .loc_0x158
  stfs      f1, 0x1BC(r31)
  b         .loc_0x144

.loc_0x34:
  lwz       r0, 0x1A4(r31)
  cmpwi     r0, 0
  bne-      .loc_0x144
  lbz       r0, 0x249(r31)
  cmplwi    r0, 0
  beq-      .loc_0x110
  lwz       r0, 0x1A0(r31)
  cmpwi     r0, 0x1
  beq-      .loc_0x88
  bge-      .loc_0x68
  cmpwi     r0, 0
  bge-      .loc_0x74
  b         .loc_0xB0

.loc_0x68:
  cmpwi     r0, 0x3
  bge-      .loc_0xB0
  b         .loc_0x9C

.loc_0x74:
  lwz       r4, 0x24C(r31)
  lfs       f1, 0x4C(r4)
  lfs       f2, 0x81C(r4)
  bl        .loc_0x158
  b         .loc_0xC4

.loc_0x88:
  lwz       r4, 0x24C(r31)
  lfs       f1, 0x18C(r4)
  lfs       f2, 0x81C(r4)
  bl        .loc_0x158
  b         .loc_0xC4

.loc_0x9C:
  lwz       r4, 0x24C(r31)
  lfs       f1, 0x2CC(r4)
  lfs       f2, 0x81C(r4)
  bl        .loc_0x158
  b         .loc_0xC4

.loc_0xB0:
  lwz       r4, 0x24C(r31)
  mr        r3, r31
  lfs       f1, 0x7CC(r4)
  lfs       f2, 0x81C(r4)
  bl        .loc_0x158

.loc_0xC4:
  lfs       f2, 0x1BC(r31)
  lwz       r3, 0x24C(r31)
  fsubs     f4, f2, f1
  lfs       f0, -0x3CFC(r2)
  lfs       f3, 0x844(r3)
  fcmpo     cr0, f4, f0
  ble-      .loc_0xE4
  b         .loc_0xE8

.loc_0xE4:
  fneg      f4, f4

.loc_0xE8:
  fcmpo     cr0, f4, f3
  bge-      .loc_0xF4
  b         .loc_0x108

.loc_0xF4:
  fcmpo     cr0, f2, f1
  bge-      .loc_0x104
  fadds     f1, f2, f3
  b         .loc_0x108

.loc_0x104:
  fsubs     f1, f2, f3

.loc_0x108:
  stfs      f1, 0x1BC(r31)
  b         .loc_0x144

.loc_0x110:
  lfs       f2, 0x1B8(r31)
  lfs       f1, 0x1BC(r31)
  lfs       f0, -0x3CFC(r2)
  fsubs     f1, f2, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x12C
  b         .loc_0x130

.loc_0x12C:
  fneg      f1, f1

.loc_0x130:
  lfs       f0, -0x3CD4(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x144
  li        r0, 0x1
  stb       r0, 0x249(r31)

.loc_0x144:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x158:
*/
}

/*
 * --INFO--
 * Address:	80240DE0
 * Size:	000384
 */
void Game::PlayCamera::getCollisionCameraTargetPhi( (float, float))
{
/*
.loc_0x0:
  stwu      r1, -0x160(r1)
  mflr      r0
  stw       r0, 0x164(r1)
  stfd      f31, 0x150(r1)
  psq_st    f31,0x158(r1),0,0
  stfd      f30, 0x140(r1)
  psq_st    f30,0x148(r1),0,0
  stfd      f29, 0x130(r1)
  psq_st    f29,0x138(r1),0,0
  stfd      f28, 0x120(r1)
  psq_st    f28,0x128(r1),0,0
  stfd      f27, 0x110(r1)
  psq_st    f27,0x118(r1),0,0
  stfd      f26, 0x100(r1)
  psq_st    f26,0x108(r1),0,0
  stfd      f25, 0xF0(r1)
  psq_st    f25,0xF8(r1),0,0
  stfd      f24, 0xE0(r1)
  psq_st    f24,0xE8(r1),0,0
  stfd      f23, 0xD0(r1)
  psq_st    f23,0xD8(r1),0,0
  stfd      f22, 0xC0(r1)
  psq_st    f22,0xC8(r1),0,0
  stfd      f21, 0xB0(r1)
  psq_st    f21,0xB8(r1),0,0
  stfd      f20, 0xA0(r1)
  psq_st    f20,0xA8(r1),0,0
  stfd      f19, 0x90(r1)
  psq_st    f19,0x98(r1),0,0
  stfd      f18, 0x80(r1)
  psq_st    f18,0x88(r1),0,0
  stw       r31, 0x7C(r1)
  stw       r30, 0x78(r1)
  stw       r29, 0x74(r1)
  lfs       f0, -0x3CB8(r2)
  mr        r31, r3
  lfs       f3, -0x3CE4(r2)
  fdivs     f19, f2, f0
  lfs       f5, 0x1B4(r3)
  lfs       f0, -0x3CFC(r2)
  fmr       f4, f5
  fcmpo     cr0, f5, f0
  fmuls     f18, f1, f3
  bge-      .loc_0xB4
  fneg      f4, f5

.loc_0xB4:
  lfs       f2, -0x3CC0(r2)
  lis       r3, 0x8050
  lfs       f0, -0x3CFC(r2)
  addi      r3, r3, 0x71A0
  fmuls     f1, f4, f2
  addi      r4, r3, 0x4
  fcmpo     cr0, f5, f0
  fctiwz    f0, f1
  stfd      f0, 0x38(r1)
  lwz       r0, 0x3C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f22, r4, r0
  bge-      .loc_0x10C
  lfs       f0, -0x3CC4(r2)
  fmuls     f0, f5, f0
  fctiwz    f0, f0
  stfd      f0, 0x40(r1)
  lwz       r0, 0x44(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0
  fneg      f26, f0
  b         .loc_0x124

.loc_0x10C:
  fmuls     f0, f5, f2
  fctiwz    f0, f0
  stfd      f0, 0x48(r1)
  lwz       r0, 0x4C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f26, r3, r0

.loc_0x124:
  lfs       f0, -0x3CFC(r2)
  fcmpo     cr0, f18, f0
  bge-      .loc_0x15C
  lfs       f0, -0x3CC4(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f18, f0
  fctiwz    f0, f0
  stfd      f0, 0x50(r1)
  lwz       r0, 0x54(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0
  fneg      f24, f0
  b         .loc_0x180

.loc_0x15C:
  lfs       f0, -0x3CC0(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f18, f0
  fctiwz    f0, f0
  stfd      f0, 0x58(r1)
  lwz       r0, 0x5C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f24, r3, r0

.loc_0x180:
  lfs       f0, -0x3CFC(r2)
  fmr       f1, f18
  fcmpo     cr0, f18, f0
  bge-      .loc_0x194
  fneg      f1, f18

.loc_0x194:
  lfs       f0, -0x3CC0(r2)
  li        r29, 0x1
  lfd       f27, -0x3CA8(r2)
  lis       r30, 0x4330
  fmuls     f0, f1, f0
  lfs       f28, -0x3CB4(r2)
  lfs       f29, -0x3CB0(r2)
  lfs       f30, -0x3CFC(r2)
  fctiwz    f0, f0
  lfs       f31, -0x3CF4(r2)
  stfd      f0, 0x60(r1)
  lwz       r0, 0x64(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f23, r4, r0

.loc_0x1CC:
  xoris     r6, r29, 0x8000
  lwz       r3, 0x24C(r31)
  stw       r6, 0x64(r1)
  li        r0, 0x1
  lfs       f3, 0x1EC(r31)
  li        r5, 0
  stw       r30, 0x60(r1)
  addi      r4, r1, 0x8
  lfs       f2, 0x1E8(r31)
  lfd       f1, 0x60(r1)
  lfs       f0, 0x1E4(r31)
  fsubs     f1, f1, f27
  lfs       f4, 0x86C(r3)
  stw       r6, 0x5C(r1)
  lwz       r3, -0x6CF8(r13)
  fmuls     f21, f19, f1
  stw       r30, 0x58(r1)
  stb       r0, 0x14(r1)
  fmuls     f6, f21, f23
  lfd       f5, 0x58(r1)
  fmuls     f1, f21, f24
  stw       r5, 0x1C(r1)
  fsubs     f5, f5, f27
  fmadds    f3, f22, f6, f3
  fadds     f25, f2, f1
  stfs      f28, 0x20(r1)
  fmadds    f0, f26, f6, f0
  stfs      f29, 0x24(r1)
  fmuls     f20, f5, f4
  stw       r5, 0x18(r1)
  stfs      f30, 0x28(r1)
  stfs      f31, 0x2C(r1)
  stfs      f30, 0x30(r1)
  stb       r5, 0x15(r1)
  stfs      f0, 0x8(r1)
  stfs      f25, 0xC(r1)
  stfs      f3, 0x10(r1)
  stb       r5, 0x14(r1)
  lwz       r12, 0x4(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x6C18(r13)
  cmplwi    r3, 0
  beq-      .loc_0x2B4
  lbz       r0, 0x48(r3)
  cmplwi    r0, 0
  beq-      .loc_0x2B4
  lwz       r0, 0x1C(r1)
  cmplwi    r0, 0
  beq-      .loc_0x2A4
  lfs       f0, 0x20(r1)
  fadds     f20, f20, f0
  b         .loc_0x2BC

.loc_0x2A4:
  lwz       r3, 0x24C(r31)
  lfs       f0, 0x894(r3)
  fadds     f20, f25, f0
  b         .loc_0x2BC

.loc_0x2B4:
  lfs       f0, 0x24(r1)
  fadds     f20, f20, f0

.loc_0x2BC:
  fcmpo     cr0, f20, f25
  ble-      .loc_0x2E8
  lfs       f0, 0x1E8(r31)
  lis       r3, 0x8051
  fmr       f2, f21
  subi      r3, r3, 0x2E20
  fsubs     f1, f20, f0
  bl        -0x20BFB0
  fcmpo     cr0, f1, f18
  ble-      .loc_0x2E8
  fmr       f18, f1

.loc_0x2E8:
  addi      r29, r29, 0x1
  cmpwi     r29, 0xF
  ble+      .loc_0x1CC
  fmr       f1, f18
  psq_l     f31,0x158(r1),0,0
  lfd       f31, 0x150(r1)
  psq_l     f30,0x148(r1),0,0
  lfd       f30, 0x140(r1)
  psq_l     f29,0x138(r1),0,0
  lfd       f29, 0x130(r1)
  psq_l     f28,0x128(r1),0,0
  lfd       f28, 0x120(r1)
  psq_l     f27,0x118(r1),0,0
  lfd       f27, 0x110(r1)
  psq_l     f26,0x108(r1),0,0
  lfd       f26, 0x100(r1)
  psq_l     f25,0xF8(r1),0,0
  lfd       f25, 0xF0(r1)
  psq_l     f24,0xE8(r1),0,0
  lfd       f24, 0xE0(r1)
  psq_l     f23,0xD8(r1),0,0
  lfd       f23, 0xD0(r1)
  psq_l     f22,0xC8(r1),0,0
  lfd       f22, 0xC0(r1)
  psq_l     f21,0xB8(r1),0,0
  lfd       f21, 0xB0(r1)
  psq_l     f20,0xA8(r1),0,0
  lfd       f20, 0xA0(r1)
  psq_l     f19,0x98(r1),0,0
  lfd       f19, 0x90(r1)
  psq_l     f18,0x88(r1),0,0
  lfd       f18, 0x80(r1)
  lwz       r31, 0x7C(r1)
  lwz       r30, 0x78(r1)
  lwz       r0, 0x164(r1)
  lwz       r29, 0x74(r1)
  mtlr      r0
  addi      r1, r1, 0x160
  blr
*/
}

/*
 * --INFO--
 * Address:	80241164
 * Size:	0000D0
 */
void Game::PlayCamera::__dt(void)
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
  addi      r0, r4, 0x1964
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
  bl        0x1D0384

.loc_0xA4:
  extsh.    r0, r30
  ble-      .loc_0xB4
  mr        r3, r31
  bl        -0x21D160

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
 * Address:	80241234
 * Size:	000004
 */
void Game::PlayCamera::startVibration( (int))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80241238
 * Size:	00001C
 */
void Game::PlayCamera::getLookAtPosition_(void)
{
/*
.loc_0x0:
  lfs       f0, 0x180(r4)
  stfs      f0, 0x0(r3)
  lfs       f0, 0x184(r4)
  stfs      f0, 0x4(r3)
  lfs       f0, 0x188(r4)
  stfs      f0, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80241254
 * Size:	000028
 */
void __sinit_playCamera_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804C
  stw       r0, -0x6990(r13)
  stfsu     f0, 0x1958(r3)
  stfs      f0, -0x698C(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}

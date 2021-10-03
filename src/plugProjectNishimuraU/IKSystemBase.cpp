

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
 * Address:	802A9E5C
 * Size:	000070
 */
void Game::IKSystemBase::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x8012
  li        r5, 0
  stw       r0, 0x14(r1)
  subi      r4, r4, 0xCB8
  li        r6, 0xC
  li        r7, 0x3
  stw       r31, 0xC(r1)
  mr        r31, r3
  addi      r3, r31, 0x28
  bl        -0x1E864C
  li        r4, 0
  li        r0, 0x1
  stb       r4, 0x0(r31)
  mr        r3, r31
  lfs       f0, -0x23C0(r2)
  stb       r0, 0x3(r31)
  stb       r0, 0x2(r31)
  stb       r4, 0x4(r31)
  stfs      f0, 0x8(r31)
  stfs      f0, 0xC(r31)
  stw       r4, 0x58(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802A9ECC
 * Size:	000030
 */
void Game::IKSystemBase::init(void)
{
/*
.loc_0x0:
  li        r4, 0
  li        r0, 0x1
  stb       r4, 0x0(r3)
  lfs       f0, -0x23C0(r2)
  stb       r0, 0x3(r3)
  stb       r0, 0x2(r3)
  stb       r4, 0x4(r3)
  stfs      f0, 0x8(r3)
  stfs      f0, 0xC(r3)
  stfs      f0, 0x10(r3)
  stw       r4, 0x58(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802A9EFC
 * Size:	000010
 */
void Game::IKSystemBase::setLegJointMatrix( (int, Matrixf *))
{
/*
.loc_0x0:
  rlwinm    r0,r4,2,0,29
  add       r3, r3, r0
  stw       r5, 0x4C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802A9F0C
 * Size:	000008
 */
void Game::IKSystemBase::setParameters( (Game::IKSystemParms *))
{
/*
.loc_0x0:
  stw       r4, 0x58(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802A9F14
 * Size:	0000F0
 */
void Game::IKSystemBase::startProgramedIK(void)
{
/*
.loc_0x0:
  li        r4, 0x1
  li        r0, 0
  stb       r4, 0x0(r3)
  lfs       f2, -0x23C0(r2)
  stb       r0, 0x1(r3)
  lfs       f0, -0x23BC(r2)
  stb       r0, 0x4(r3)
  stfs      f2, 0x8(r3)
  stfs      f0, 0xC(r3)
  stfs      f2, 0x10(r3)
  lwz       r4, 0x54(r3)
  lfs       f3, 0x2C(r4)
  lfs       f1, 0x1C(r4)
  lfs       f0, 0xC(r4)
  stfs      f0, 0x1C(r3)
  stfs      f1, 0x20(r3)
  stfs      f3, 0x24(r3)
  lwz       r4, 0x4C(r3)
  lwz       r5, 0x50(r3)
  lfs       f0, 0x1C(r4)
  lfs       f5, 0x1C(r5)
  lfs       f6, 0x2C(r5)
  fsubs     f3, f0, f5
  lfs       f0, 0x2C(r4)
  lfs       f4, 0xC(r5)
  lfs       f1, 0xC(r4)
  fsubs     f0, f0, f6
  fmuls     f3, f3, f3
  fsubs     f1, f1, f4
  fmuls     f7, f0, f0
  fmadds    f0, f1, f1, f3
  fadds     f0, f7, f0
  fcmpo     cr0, f0, f2
  ble-      .loc_0x98
  ble-      .loc_0x9C
  fsqrte    f1, f0
  fmuls     f0, f1, f0
  b         .loc_0x9C

.loc_0x98:
  fmr       f0, f2

.loc_0x9C:
  stfs      f0, 0x14(r3)
  lfs       f0, -0x23C0(r2)
  lfs       f1, 0x20(r3)
  lfs       f2, 0x1C(r3)
  fsubs     f3, f5, f1
  lfs       f1, 0x24(r3)
  fsubs     f2, f4, f2
  fsubs     f1, f6, f1
  fmuls     f3, f3, f3
  fmuls     f4, f1, f1
  fmadds    f1, f2, f2, f3
  fadds     f1, f4, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0xE4
  ble-      .loc_0xE8
  fsqrte    f0, f1
  fmuls     f1, f0, f1
  b         .loc_0xE8

.loc_0xE4:
  fmr       f1, f0

.loc_0xE8:
  stfs      f1, 0x18(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802AA004
 * Size:	0000F4
 */
void startMovePosition__Q24Game12IKSystemBaseFR10Vector3<float>(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, -0x23C0(r2)
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr        r30, r3
  stb       r0, 0x2(r3)
  stfs      f0, 0x8(r3)
  stfs      f0, 0xC(r3)
  stfs      f0, 0x10(r3)
  lfs       f0, 0x1C(r3)
  stfs      f0, 0x28(r3)
  lfs       f0, 0x20(r3)
  stfs      f0, 0x2C(r3)
  lfs       f0, 0x24(r3)
  stfs      f0, 0x30(r3)
  lwz       r3, -0x6CF8(r13)
  lwz       r12, 0x4(r3)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x4(r31)
  lfs       f2, -0x23B8(r2)
  lfs       f0, 0x0(r31)
  stfs      f0, 0x40(r30)
  lfs       f0, 0x4(r31)
  stfs      f0, 0x44(r30)
  lfs       f0, 0x8(r31)
  stfs      f0, 0x48(r30)
  lwz       r3, 0x58(r30)
  lfs       f0, 0x28(r30)
  lfs       f3, 0xC(r3)
  lfs       f1, 0x40(r30)
  fsubs     f2, f2, f3
  fmuls     f0, f2, f0
  fmadds    f0, f3, f1, f0
  stfs      f0, 0x34(r30)
  lfs       f0, 0x2C(r30)
  lfs       f1, 0x44(r30)
  fmuls     f0, f2, f0
  fmadds    f0, f3, f1, f0
  stfs      f0, 0x38(r30)
  lfs       f0, 0x30(r30)
  lfs       f1, 0x48(r30)
  fmuls     f0, f2, f0
  fmadds    f0, f3, f1, f0
  stfs      f0, 0x3C(r30)
  lwz       r3, 0x58(r30)
  lfs       f1, 0x38(r30)
  lfs       f0, 0x10(r3)
  fadds     f0, f1, f0
  stfs      f0, 0x38(r30)
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
 * Address:	802AA0F8
 * Size:	00000C
 */
void Game::IKSystemBase::startBlendMotion(void)
{
/*
.loc_0x0:
  li        r0, 0x1
  stb       r0, 0x1(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802AA104
 * Size:	00000C
 */
void Game::IKSystemBase::finishBlendMotion(void)
{
/*
.loc_0x0:
  li        r0, 0
  stb       r0, 0x1(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802AA110
 * Size:	00000C
 */
void Game::IKSystemBase::checkJointScaleOn(void)
{
/*
.loc_0x0:
  li        r0, 0x1
  stb       r0, 0x4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void Game::IKSystemBase::checkJointScaleOff(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802AA11C
 * Size:	00007C
 */
void Game::IKSystemBase::update(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lbz       r0, 0x0(r3)
  cmplwi    r0, 0
  beq-      .loc_0x68
  lbz       r0, 0x2(r31)
  cmplwi    r0, 0
  bne-      .loc_0x58
  bl        0x148
  lfs       f1, 0xC(r31)
  lfs       f0, -0x23B8(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x58
  mr        r3, r31
  bl        0x26C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x58
  li        r0, 0x1
  stb       r0, 0x2(r31)

.loc_0x58:
  mr        r3, r31
  bl        0x4D4
  lbz       r0, 0x2(r31)
  stb       r0, 0x3(r31)

.loc_0x68:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802AA198
 * Size:	0000F8
 */
void Game::IKSystemBase::makeMatrix(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stw       r31, 0x3C(r1)
  mr        r31, r3
  lbz       r0, 0x0(r3)
  cmplwi    r0, 0
  beq-      .loc_0xE4
  lwz       r6, 0x4C(r31)
  mr        r4, r31
  addi      r3, r1, 0x8
  addi      r5, r1, 0x2C
  lfs       f2, 0x2C(r6)
  lfs       f1, 0x1C(r6)
  lfs       f0, 0xC(r6)
  stfs      f0, 0x2C(r1)
  stfs      f1, 0x30(r1)
  stfs      f2, 0x34(r1)
  bl        0x4F0
  lfs       f2, 0x8(r1)
  addi      r3, r1, 0x2C
  lfs       f1, 0xC(r1)
  addi      r4, r31, 0x1C
  lfs       f0, 0x10(r1)
  addi      r5, r1, 0x20
  stfs      f2, 0x20(r1)
  addi      r6, r1, 0x14
  stfs      f1, 0x24(r1)
  stfs      f0, 0x28(r1)
  lfs       f1, 0x14(r31)
  lfs       f2, 0x18(r31)
  bl        -0x6C9BC
  mr        r3, r31
  addi      r4, r1, 0x2C
  addi      r5, r1, 0x14
  bl        0x548
  mr        r3, r31
  addi      r4, r1, 0x2C
  addi      r5, r1, 0x14
  bl        0x7CC
  lwz       r5, 0x50(r31)
  mr        r3, r31
  lfs       f0, 0x14(r1)
  addi      r4, r1, 0x2C
  stfs      f0, 0xC(r5)
  lfs       f0, 0x18(r1)
  stfs      f0, 0x1C(r5)
  lfs       f0, 0x1C(r1)
  stfs      f0, 0x2C(r5)
  lwz       r5, 0x54(r31)
  lfs       f0, 0x1C(r31)
  stfs      f0, 0xC(r5)
  lfs       f0, 0x20(r31)
  stfs      f0, 0x1C(r5)
  lfs       f0, 0x24(r31)
  stfs      f0, 0x2C(r5)
  bl        0xA1C

.loc_0xE4:
  lwz       r0, 0x44(r1)
  lwz       r31, 0x3C(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	802AA290
 * Size:	0000C4
 */
void Game::IKSystemBase::moveBottomJointPosition(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, -0x23B8(r2)
  mr        r7, r3
  stw       r0, 0x14(r1)
  lfs       f1, 0xC(r3)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x38
  lwz       r3, 0x58(r7)
  lfs       f1, 0x10(r7)
  lfs       f0, 0x18(r3)
  fadds     f0, f1, f0
  stfs      f0, 0x10(r7)
  b         .loc_0x4C

.loc_0x38:
  lwz       r3, 0x58(r7)
  lfs       f1, 0x10(r7)
  lfs       f0, 0x1C(r3)
  fadds     f0, f1, f0
  stfs      f0, 0x10(r7)

.loc_0x4C:
  lwz       r3, 0x58(r7)
  lfs       f0, 0x10(r7)
  lfs       f1, 0x24(r3)
  lfs       f2, 0x20(r3)
  fcmpo     cr0, f0, f1
  bge-      .loc_0x68
  b         .loc_0x7C

.loc_0x68:
  fcmpo     cr0, f0, f2
  ble-      .loc_0x78
  fmr       f1, f2
  b         .loc_0x7C

.loc_0x78:
  fmr       f1, f0

.loc_0x7C:
  stfs      f1, 0x10(r7)
  addi      r3, r7, 0x28
  addi      r4, r7, 0x1C
  lwz       r6, 0x58(r7)
  lwz       r5, -0x6514(r13)
  lfs       f2, 0x14(r6)
  lfs       f0, 0x10(r7)
  lfs       f1, 0x54(r5)
  fadds     f2, f2, f0
  lfs       f0, 0xC(r7)
  fmadds    f0, f2, f1, f0
  stfs      f0, 0xC(r7)
  lfs       f1, 0xC(r7)
  bl        -0x6CB90
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802AA354
 * Size:	000008
 */
void Game::IKSystemBase::onGround(void)
{
/*
.loc_0x0:
  lbz       r3, 0x2(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802AA35C
 * Size:	00001C
 */
void Game::IKSystemBase::getBottomJointPosition(void)
{
/*
.loc_0x0:
  lfs       f0, 0x1C(r4)
  stfs      f0, 0x0(r3)
  lfs       f0, 0x20(r4)
  stfs      f0, 0x4(r3)
  lfs       f0, 0x24(r4)
  stfs      f0, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802AA378
 * Size:	00004C
 */
void Game::IKSystemBase::getCollisionCentre(void)
{
/*
.loc_0x0:
  lwz       r5, 0x54(r4)
  lwz       r4, 0x58(r4)
  lfs       f3, 0x0(r5)
  lfs       f2, 0x4(r4)
  lfs       f4, 0x10(r5)
  fmuls     f3, f3, f2
  lfs       f0, 0xC(r5)
  lfs       f5, 0x20(r5)
  fmuls     f4, f4, f2
  lfs       f1, 0x1C(r5)
  fadds     f3, f3, f0
  lfs       f0, 0x2C(r5)
  fmuls     f5, f5, f2
  fadds     f4, f4, f1
  stfs      f3, 0x0(r3)
  fadds     f5, f5, f0
  stfs      f4, 0x4(r3)
  stfs      f5, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802AA3C4
 * Size:	000008
 */
void Game::IKSystemBase::getMoveRatio(void)
{
/*
.loc_0x0:
  lfs       f1, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802AA3CC
 * Size:	000280
 */
void Game::IKSystemBase::onGroundPosition(void)
{
/*
.loc_0x0:
  stwu      r1, -0xD0(r1)
  mflr      r0
  stw       r0, 0xD4(r1)
  stfd      f31, 0xC0(r1)
  psq_st    f31,0xC8(r1),0,0
  stfd      f30, 0xB0(r1)
  psq_st    f30,0xB8(r1),0,0
  stfd      f29, 0xA0(r1)
  psq_st    f29,0xA8(r1),0,0
  stfd      f28, 0x90(r1)
  psq_st    f28,0x98(r1),0,0
  stfd      f27, 0x80(r1)
  psq_st    f27,0x88(r1),0,0
  stfd      f26, 0x70(r1)
  psq_st    f26,0x78(r1),0,0
  stfd      f25, 0x60(r1)
  psq_st    f25,0x68(r1),0,0
  stfd      f24, 0x50(r1)
  psq_st    f24,0x58(r1),0,0
  stfd      f23, 0x40(r1)
  psq_st    f23,0x48(r1),0,0
  stw       r31, 0x3C(r1)
  stw       r30, 0x38(r1)
  stw       r29, 0x34(r1)
  stw       r28, 0x30(r1)
  mr        r29, r3
  lwz       r3, -0x6CF8(r13)
  addi      r4, r29, 0x1C
  lfs       f25, -0x23B4(r2)
  lwz       r12, 0x4(r3)
  li        r31, 0
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  lfs       f4, 0x20(r29)
  fcmpo     cr0, f1, f4
  ble-      .loc_0x9C
  fmr       f25, f1
  li        r31, 0x1

.loc_0x9C:
  lwz       r5, 0x58(r29)
  lwz       r0, 0x0(r5)
  cmpwi     r0, 0
  ble-      .loc_0x208
  xoris     r3, r0, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x1C(r1)
  lis       r3, 0x8050
  lwz       r4, 0x54(r29)
  addi      r28, r3, 0x71A0
  stw       r0, 0x18(r1)
  li        r30, 0
  lfd       f1, -0x23A0(r2)
  lfd       f0, 0x18(r1)
  lfs       f2, -0x23B0(r2)
  fsubs     f0, f0, f1
  lfs       f24, -0x23C0(r2)
  lfs       f28, 0x0(r4)
  lfs       f3, 0x4(r5)
  fmr       f29, f24
  fdivs     f23, f2, f0
  lfs       f27, 0x10(r4)
  lfs       f26, 0x20(r4)
  lfs       f1, 0x1C(r29)
  lfs       f0, 0x24(r29)
  lfs       f30, -0x23AC(r2)
  fmuls     f28, f28, f3
  fmuls     f27, f27, f3
  fmuls     f26, f26, f3
  fmr       f31, f24
  fadds     f28, f28, f1
  fadds     f27, f27, f4
  fadds     f26, f26, f0
  b         .loc_0x1F8

.loc_0x124:
  fmr       f0, f24
  fcmpo     cr0, f24, f29
  bge-      .loc_0x134
  fneg      f0, f24

.loc_0x134:
  fmuls     f0, f0, f30
  lfs       f2, 0x8(r3)
  fcmpo     cr0, f24, f31
  fctiwz    f0, f0
  stfd      f0, 0x18(r1)
  lwz       r0, 0x1C(r1)
  rlwinm    r0,r0,3,18,28
  add       r3, r28, r0
  lfs       f0, 0x4(r3)
  fmadds    f1, f2, f0, f26
  bge-      .loc_0x18C
  lfs       f0, -0x23A8(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f24, f0
  fctiwz    f0, f0
  stfd      f0, 0x20(r1)
  lwz       r0, 0x24(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0
  fneg      f0, f0
  b         .loc_0x1AC

.loc_0x18C:
  fmuls     f0, f24, f30
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fctiwz    f0, f0
  stfd      f0, 0x28(r1)
  lwz       r0, 0x2C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0

.loc_0x1AC:
  fmadds    f0, f2, f0, f28
  stfs      f27, 0xC(r1)
  lwz       r3, -0x6CF8(r13)
  addi      r4, r1, 0x8
  stfs      f1, 0x10(r1)
  stfs      f0, 0x8(r1)
  lwz       r12, 0x4(r3)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0xC(r1)
  fadds     f24, f24, f23
  fcmpo     cr0, f1, f0
  ble-      .loc_0x1F4
  fcmpo     cr0, f1, f25
  ble-      .loc_0x1F4
  fmr       f25, f1
  li        r31, 0x1

.loc_0x1F4:
  addi      r30, r30, 0x1

.loc_0x1F8:
  lwz       r3, 0x58(r29)
  lwz       r0, 0x0(r3)
  cmpw      r30, r0
  blt+      .loc_0x124

.loc_0x208:
  rlwinm.   r0,r31,0,24,31
  beq-      .loc_0x214
  stfs      f25, 0x20(r29)

.loc_0x214:
  mr        r3, r31
  psq_l     f31,0xC8(r1),0,0
  lfd       f31, 0xC0(r1)
  psq_l     f30,0xB8(r1),0,0
  lfd       f30, 0xB0(r1)
  psq_l     f29,0xA8(r1),0,0
  lfd       f29, 0xA0(r1)
  psq_l     f28,0x98(r1),0,0
  lfd       f28, 0x90(r1)
  psq_l     f27,0x88(r1),0,0
  lfd       f27, 0x80(r1)
  psq_l     f26,0x78(r1),0,0
  lfd       f26, 0x70(r1)
  psq_l     f25,0x68(r1),0,0
  lfd       f25, 0x60(r1)
  psq_l     f24,0x58(r1),0,0
  lfd       f24, 0x50(r1)
  psq_l     f23,0x48(r1),0,0
  lfd       f23, 0x40(r1)
  lwz       r31, 0x3C(r1)
  lwz       r30, 0x38(r1)
  lwz       r29, 0x34(r1)
  lwz       r0, 0xD4(r1)
  lwz       r28, 0x30(r1)
  mtlr      r0
  addi      r1, r1, 0xD0
  blr
*/
}

/*
 * --INFO--
 * Address:	802AA64C
 * Size:	000084
 */
void Game::IKSystemBase::makeBendRatio(void)
{
/*
.loc_0x0:
  lbz       r0, 0x2(r3)
  cmplwi    r0, 0
  beq-      .loc_0x18
  lfs       f0, -0x23C0(r2)
  stfs      f0, 0x8(r3)
  blr       

.loc_0x18:
  lfs       f2, -0x23B8(r2)
  lfs       f1, 0xC(r3)
  lfs       f0, -0x23C0(r2)
  fsubs     f1, f2, f1
  lfs       f3, -0x2398(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x38
  b         .loc_0x3C

.loc_0x38:
  fneg      f1, f1

.loc_0x3C:
  fsubs     f2, f2, f1
  lfs       f1, -0x2394(r2)
  lwz       r4, 0x58(r3)
  lfs       f0, -0x23C0(r2)
  fsubs     f2, f2, f1
  lfs       f1, 0x28(r4)
  fmuls     f2, f3, f2
  fcmpo     cr0, f2, f0
  bge-      .loc_0x64
  b         .loc_0x78

.loc_0x64:
  lfs       f0, -0x23B8(r2)
  fcmpo     cr0, f2, f0
  ble-      .loc_0x74
  b         .loc_0x78

.loc_0x74:
  fmr       f0, f2

.loc_0x78:
  fmuls     f0, f1, f0
  stfs      f0, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802AA6D0
 * Size:	00009C
 */
void getMiddleDirection__Q24Game12IKSystemBaseFR10Vector3<float>(void)
{
/*
.loc_0x0:
  lbz       r0, 0x1(r4)
  cmplwi    r0, 0
  beq-      .loc_0x20
  lwz       r4, 0x4C(r4)
  lfs       f2, 0x0(r4)
  lfs       f3, 0x10(r4)
  lfs       f4, 0x20(r4)
  b         .loc_0x8C

.loc_0x20:
  lfs       f3, 0x1C(r4)
  lfs       f2, 0x0(r5)
  lfs       f1, 0x24(r4)
  lfs       f0, 0x8(r5)
  fsubs     f2, f3, f2
  lfs       f3, -0x23C0(r2)
  fsubs     f4, f1, f0
  fmadds    f0, f2, f2, f3
  fmuls     f1, f4, f4
  fadds     f1, f1, f0
  fcmpo     cr0, f1, f3
  ble-      .loc_0x60
  ble-      .loc_0x64
  fsqrte    f0, f1
  fmuls     f1, f0, f1
  b         .loc_0x64

.loc_0x60:
  fmr       f1, f3

.loc_0x64:
  lfs       f0, -0x23C0(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x84
  lfs       f0, -0x23B8(r2)
  fdivs     f0, f0, f1
  fmuls     f2, f2, f0
  fmuls     f3, f3, f0
  fmuls     f4, f4, f0

.loc_0x84:
  lfs       f0, -0x2390(r2)
  fadds     f3, f3, f0

.loc_0x8C:
  stfs      f2, 0x0(r3)
  stfs      f3, 0x4(r3)
  stfs      f4, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802AA76C
 * Size:	000294
 */
void setTopJointRotation__Q24Game12IKSystemBaseFR10Vector3<float>R10Vector3<float>(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  stfd      f31, 0x10(r1)
  psq_st    f31,0x18(r1),0,0
  lfs       f1, 0x4(r5)
  lfs       f0, 0x4(r4)
  lbz       r0, 0x1(r3)
  fsubs     f1, f1, f0
  lfs       f2, 0x8(r5)
  lfs       f7, 0x8(r4)
  cmplwi    r0, 0
  lfs       f0, 0x0(r5)
  lfs       f5, 0x0(r4)
  fsubs     f2, f2, f7
  fsubs     f0, f0, f5
  beq-      .loc_0x80
  lwz       r4, 0x4C(r3)
  lfs       f7, 0x4(r4)
  lfs       f5, 0x14(r4)
  lfs       f8, 0x24(r4)
  fmuls     f3, f1, f7
  fmuls     f6, f2, f5
  fmuls     f4, f0, f8
  fmsubs    f5, f0, f5, f3
  fmsubs    f3, f1, f8, f6
  fmsubs    f4, f2, f7, f4
  fmuls     f6, f5, f1
  fmuls     f7, f3, f2
  fmuls     f8, f4, f0
  fmsubs    f6, f4, f2, f6
  fmsubs    f7, f5, f0, f7
  fmsubs    f8, f3, f1, f8
  b         .loc_0xC4

.loc_0x80:
  lfs       f4, 0x1C(r3)
  lfs       f3, 0x24(r3)
  fsubs     f9, f5, f4
  lfs       f6, -0x23C0(r2)
  fsubs     f7, f3, f7
  fmuls     f3, f6, f0
  fmuls     f5, f9, f1
  fmuls     f4, f7, f2
  fmsubs    f8, f7, f1, f3
  fmsubs    f6, f6, f2, f5
  fmsubs    f7, f9, f0, f4
  fmuls     f4, f0, f8
  fmuls     f3, f1, f6
  fmuls     f9, f2, f7
  fmsubs    f4, f2, f6, f4
  fmsubs    f5, f0, f7, f3
  fmsubs    f3, f1, f8, f9

.loc_0xC4:
  fmuls     f10, f1, f1
  lfs       f9, -0x23C0(r2)
  fmuls     f11, f2, f2
  fmadds    f10, f0, f0, f10
  fadds     f10, f11, f10
  fcmpo     cr0, f10, f9
  ble-      .loc_0xF0
  ble-      .loc_0xF4
  fsqrte    f9, f10
  fmuls     f10, f9, f10
  b         .loc_0xF4

.loc_0xF0:
  fmr       f10, f9

.loc_0xF4:
  lfs       f9, -0x23C0(r2)
  fcmpo     cr0, f10, f9
  ble-      .loc_0x114
  lfs       f9, -0x23B8(r2)
  fdivs     f9, f9, f10
  fmuls     f0, f0, f9
  fmuls     f1, f1, f9
  fmuls     f2, f2, f9

.loc_0x114:
  fmuls     f10, f7, f7
  lfs       f9, -0x23C0(r2)
  fmuls     f11, f8, f8
  fmadds    f10, f6, f6, f10
  fadds     f10, f11, f10
  fcmpo     cr0, f10, f9
  ble-      .loc_0x140
  ble-      .loc_0x144
  fsqrte    f9, f10
  fmuls     f10, f9, f10
  b         .loc_0x144

.loc_0x140:
  fmr       f10, f9

.loc_0x144:
  lfs       f9, -0x23C0(r2)
  fcmpo     cr0, f10, f9
  ble-      .loc_0x164
  lfs       f9, -0x23B8(r2)
  fdivs     f9, f9, f10
  fmuls     f6, f6, f9
  fmuls     f7, f7, f9
  fmuls     f8, f8, f9

.loc_0x164:
  fmuls     f10, f4, f4
  lfs       f9, -0x23C0(r2)
  fmuls     f11, f5, f5
  fmadds    f10, f3, f3, f10
  fadds     f10, f11, f10
  fcmpo     cr0, f10, f9
  ble-      .loc_0x190
  ble-      .loc_0x194
  fsqrte    f9, f10
  fmuls     f10, f9, f10
  b         .loc_0x194

.loc_0x190:
  fmr       f10, f9

.loc_0x194:
  lfs       f9, -0x23C0(r2)
  fcmpo     cr0, f10, f9
  ble-      .loc_0x1B4
  lfs       f9, -0x23B8(r2)
  fdivs     f9, f9, f10
  fmuls     f3, f3, f9
  fmuls     f4, f4, f9
  fmuls     f5, f5, f9

.loc_0x1B4:
  lbz       r0, 0x4(r3)
  cmplwi    r0, 0
  beq-      .loc_0x254
  lwz       r4, 0x4C(r3)
  lfs       f9, -0x23C0(r2)
  lfs       f10, 0x14(r4)
  lfs       f11, 0x24(r4)
  fmuls     f31, f10, f10
  lfs       f10, 0x4(r4)
  fmuls     f11, f11, f11
  lfs       f12, 0x8(r4)
  lfs       f13, 0x18(r4)
  fmadds    f10, f10, f10, f31
  lfs       f31, 0x28(r4)
  fadds     f11, f11, f10
  fcmpo     cr0, f11, f9
  ble-      .loc_0x208
  ble-      .loc_0x20C
  fsqrte    f9, f11
  fmuls     f11, f9, f11
  b         .loc_0x20C

.loc_0x208:
  fmr       f11, f9

.loc_0x20C:
  fmuls     f10, f13, f13
  lfs       f9, -0x23C0(r2)
  fmuls     f13, f31, f31
  fmadds    f10, f12, f12, f10
  fadds     f10, f13, f10
  fcmpo     cr0, f10, f9
  ble-      .loc_0x238
  ble-      .loc_0x23C
  fsqrte    f9, f10
  fmuls     f10, f9, f10
  b         .loc_0x23C

.loc_0x238:
  fmr       f10, f9

.loc_0x23C:
  fmuls     f6, f6, f11
  fmuls     f7, f7, f11
  fmuls     f8, f8, f11
  fmuls     f3, f3, f10
  fmuls     f4, f4, f10
  fmuls     f5, f5, f10

.loc_0x254:
  lwz       r4, 0x4C(r3)
  stfs      f0, 0x0(r4)
  stfs      f1, 0x10(r4)
  stfs      f2, 0x20(r4)
  lwz       r4, 0x4C(r3)
  stfs      f6, 0x4(r4)
  stfs      f7, 0x14(r4)
  stfs      f8, 0x24(r4)
  lwz       r3, 0x4C(r3)
  stfs      f3, 0x8(r3)
  stfs      f4, 0x18(r3)
  stfs      f5, 0x28(r3)
  psq_l     f31,0x18(r1),0,0
  lfd       f31, 0x10(r1)
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	802AAA00
 * Size:	000294
 */
void setMiddleJointRotation__Q24Game12IKSystemBaseFR10Vector3<float>R10Vector3<float>(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  stfd      f31, 0x10(r1)
  psq_st    f31,0x18(r1),0,0
  lfs       f1, 0x20(r3)
  lfs       f0, 0x4(r5)
  lbz       r0, 0x1(r3)
  fsubs     f1, f1, f0
  lfs       f7, 0x24(r3)
  lfs       f2, 0x8(r5)
  cmplwi    r0, 0
  lfs       f5, 0x1C(r3)
  lfs       f0, 0x0(r5)
  fsubs     f2, f7, f2
  fsubs     f0, f5, f0
  beq-      .loc_0x80
  lwz       r4, 0x50(r3)
  lfs       f7, 0x4(r4)
  lfs       f5, 0x14(r4)
  lfs       f8, 0x24(r4)
  fmuls     f3, f1, f7
  fmuls     f6, f2, f5
  fmuls     f4, f0, f8
  fmsubs    f5, f0, f5, f3
  fmsubs    f3, f1, f8, f6
  fmsubs    f4, f2, f7, f4
  fmuls     f6, f5, f1
  fmuls     f7, f3, f2
  fmuls     f8, f4, f0
  fmsubs    f6, f4, f2, f6
  fmsubs    f7, f5, f0, f7
  fmsubs    f8, f3, f1, f8
  b         .loc_0xC4

.loc_0x80:
  lfs       f4, 0x0(r4)
  lfs       f3, 0x8(r4)
  fsubs     f9, f4, f5
  lfs       f6, -0x23C0(r2)
  fsubs     f7, f7, f3
  fmuls     f3, f6, f0
  fmuls     f5, f9, f1
  fmuls     f4, f7, f2
  fmsubs    f8, f7, f1, f3
  fmsubs    f6, f6, f2, f5
  fmsubs    f7, f9, f0, f4
  fmuls     f4, f0, f8
  fmuls     f3, f1, f6
  fmuls     f9, f2, f7
  fmsubs    f4, f2, f6, f4
  fmsubs    f5, f0, f7, f3
  fmsubs    f3, f1, f8, f9

.loc_0xC4:
  fmuls     f10, f1, f1
  lfs       f9, -0x23C0(r2)
  fmuls     f11, f2, f2
  fmadds    f10, f0, f0, f10
  fadds     f10, f11, f10
  fcmpo     cr0, f10, f9
  ble-      .loc_0xF0
  ble-      .loc_0xF4
  fsqrte    f9, f10
  fmuls     f10, f9, f10
  b         .loc_0xF4

.loc_0xF0:
  fmr       f10, f9

.loc_0xF4:
  lfs       f9, -0x23C0(r2)
  fcmpo     cr0, f10, f9
  ble-      .loc_0x114
  lfs       f9, -0x23B8(r2)
  fdivs     f9, f9, f10
  fmuls     f0, f0, f9
  fmuls     f1, f1, f9
  fmuls     f2, f2, f9

.loc_0x114:
  fmuls     f10, f7, f7
  lfs       f9, -0x23C0(r2)
  fmuls     f11, f8, f8
  fmadds    f10, f6, f6, f10
  fadds     f10, f11, f10
  fcmpo     cr0, f10, f9
  ble-      .loc_0x140
  ble-      .loc_0x144
  fsqrte    f9, f10
  fmuls     f10, f9, f10
  b         .loc_0x144

.loc_0x140:
  fmr       f10, f9

.loc_0x144:
  lfs       f9, -0x23C0(r2)
  fcmpo     cr0, f10, f9
  ble-      .loc_0x164
  lfs       f9, -0x23B8(r2)
  fdivs     f9, f9, f10
  fmuls     f6, f6, f9
  fmuls     f7, f7, f9
  fmuls     f8, f8, f9

.loc_0x164:
  fmuls     f10, f4, f4
  lfs       f9, -0x23C0(r2)
  fmuls     f11, f5, f5
  fmadds    f10, f3, f3, f10
  fadds     f10, f11, f10
  fcmpo     cr0, f10, f9
  ble-      .loc_0x190
  ble-      .loc_0x194
  fsqrte    f9, f10
  fmuls     f10, f9, f10
  b         .loc_0x194

.loc_0x190:
  fmr       f10, f9

.loc_0x194:
  lfs       f9, -0x23C0(r2)
  fcmpo     cr0, f10, f9
  ble-      .loc_0x1B4
  lfs       f9, -0x23B8(r2)
  fdivs     f9, f9, f10
  fmuls     f3, f3, f9
  fmuls     f4, f4, f9
  fmuls     f5, f5, f9

.loc_0x1B4:
  lbz       r0, 0x4(r3)
  cmplwi    r0, 0
  beq-      .loc_0x254
  lwz       r4, 0x50(r3)
  lfs       f9, -0x23C0(r2)
  lfs       f10, 0x14(r4)
  lfs       f11, 0x24(r4)
  fmuls     f31, f10, f10
  lfs       f10, 0x4(r4)
  fmuls     f11, f11, f11
  lfs       f12, 0x8(r4)
  lfs       f13, 0x18(r4)
  fmadds    f10, f10, f10, f31
  lfs       f31, 0x28(r4)
  fadds     f11, f11, f10
  fcmpo     cr0, f11, f9
  ble-      .loc_0x208
  ble-      .loc_0x20C
  fsqrte    f9, f11
  fmuls     f11, f9, f11
  b         .loc_0x20C

.loc_0x208:
  fmr       f11, f9

.loc_0x20C:
  fmuls     f10, f13, f13
  lfs       f9, -0x23C0(r2)
  fmuls     f13, f31, f31
  fmadds    f10, f12, f12, f10
  fadds     f10, f13, f10
  fcmpo     cr0, f10, f9
  ble-      .loc_0x238
  ble-      .loc_0x23C
  fsqrte    f9, f10
  fmuls     f10, f9, f10
  b         .loc_0x23C

.loc_0x238:
  fmr       f10, f9

.loc_0x23C:
  fmuls     f6, f6, f11
  fmuls     f7, f7, f11
  fmuls     f8, f8, f11
  fmuls     f3, f3, f10
  fmuls     f4, f4, f10
  fmuls     f5, f5, f10

.loc_0x254:
  lwz       r4, 0x50(r3)
  stfs      f0, 0x0(r4)
  stfs      f1, 0x10(r4)
  stfs      f2, 0x20(r4)
  lwz       r4, 0x50(r3)
  stfs      f6, 0x4(r4)
  stfs      f7, 0x14(r4)
  stfs      f8, 0x24(r4)
  lwz       r3, 0x50(r3)
  stfs      f3, 0x8(r3)
  stfs      f4, 0x18(r3)
  stfs      f5, 0x28(r3)
  psq_l     f31,0x18(r1),0,0
  lfd       f31, 0x10(r1)
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	802AAC94
 * Size:	000100
 */
void makeBottomMatrix__Q24Game12IKSystemBaseFR10Vector3<float>(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stw       r31, 0x3C(r1)
  mr        r31, r3
  lbz       r0, 0x1(r3)
  cmplwi    r0, 0
  bne-      .loc_0xEC
  lfs       f2, 0x24(r31)
  lfs       f0, 0x8(r4)
  lfs       f1, 0x1C(r31)
  fsubs     f4, f2, f0
  lfs       f0, 0x0(r4)
  lfs       f3, -0x23C0(r2)
  fsubs     f2, f1, f0
  fmuls     f1, f4, f4
  fmadds    f0, f2, f2, f3
  fadds     f1, f1, f0
  fcmpo     cr0, f1, f3
  ble-      .loc_0x60
  ble-      .loc_0x64
  fsqrte    f0, f1
  fmuls     f1, f0, f1
  b         .loc_0x64

.loc_0x60:
  fmr       f1, f3

.loc_0x64:
  lfs       f0, -0x23C0(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x84
  lfs       f0, -0x23B8(r2)
  fdivs     f0, f0, f1
  fmuls     f2, f2, f0
  fmuls     f3, f3, f0
  fmuls     f4, f4, f0

.loc_0x84:
  lwz       r5, 0x50(r31)
  addi      r3, r1, 0x8
  lwz       r6, 0x54(r31)
  li        r4, 0x5A
  lfs       f5, 0x8(r5)
  lfs       f6, 0x18(r5)
  lfs       f7, 0x28(r5)
  lfs       f1, -0x23C0(r2)
  stfs      f2, 0x0(r6)
  lfs       f0, -0x238C(r2)
  stfs      f3, 0x10(r6)
  stfs      f4, 0x20(r6)
  lwz       r5, 0x54(r31)
  stfs      f1, 0x4(r5)
  stfs      f0, 0x14(r5)
  stfs      f1, 0x24(r5)
  lwz       r5, 0x54(r31)
  stfs      f5, 0x8(r5)
  stfs      f6, 0x18(r5)
  stfs      f7, 0x28(r5)
  lfs       f1, 0x8(r31)
  bl        -0x1C0858
  lwz       r3, 0x54(r31)
  addi      r4, r1, 0x8
  mr        r5, r3
  bl        -0x1C0A7C

.loc_0xEC:
  lwz       r0, 0x44(r1)
  lwz       r31, 0x3C(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

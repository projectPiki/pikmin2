

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
 * Address:	802A8A80
 * Size:	000038
 */
void Game::IKJointCallBack(J3DJoint *, int)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmpwi     r4, 0x1
  stw       r0, 0x14(r1)
  bne-      .loc_0x24
  lwz       r3, -0x6908(r13)
  cmplwi    r3, 0
  beq-      .loc_0x24
  bl        0x6C0

.loc_0x24:
  lwz       r0, 0x14(r1)
  li        r3, 0
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802A8AB8
 * Size:	00007C
 */
void Game::IKSystemMgr::__ct(void)
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
  li        r7, 0x4
  stw       r31, 0xC(r1)
  mr        r31, r3
  addi      r3, r31, 0x5C
  bl        -0x1E72A8
  li        r0, 0
  li        r3, 0x180
  stw       r0, -0x6908(r13)
  bl        -0x284B48
  lis       r4, 0x802B
  li        r5, 0
  subi      r4, r4, 0x61A4
  li        r6, 0x5C
  li        r7, 0x4
  bl        -0x1E711C
  stw       r3, 0x8C(r31)
  li        r0, 0
  mr        r3, r31
  stw       r0, 0x94(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802A8B34
 * Size:	000144
 */
void Game::IKSystemMgr::init( (Game::EnemyBase *, Game::JointGroundCallBack *))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  li        r0, 0
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  stw       r29, 0x24(r1)
  mr        r29, r5
  stw       r28, 0x20(r1)
  mr        r28, r3
  stw       r4, 0x90(r3)
  stb       r0, 0x0(r3)
  stb       r0, 0x1(r3)
  stb       r0, 0x2(r3)
  lwz       r3, 0x90(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x4(r28)
  li        r0, 0
  lfs       f1, -0x23F0(r2)
  addi      r3, r1, 0x14
  lfs       f0, -0x23EC(r2)
  stfs      f1, 0x8(r28)
  stfs      f0, 0xC(r28)
  stw       r0, 0x1C(r28)
  stfs      f0, 0x10(r28)
  stw       r0, 0x20(r28)
  stfs      f0, 0x14(r28)
  stw       r0, 0x24(r28)
  stfs      f0, 0x18(r28)
  stw       r0, 0x28(r28)
  stfs      f0, 0x34(r28)
  stfs      f0, 0x30(r28)
  stfs      f0, 0x2C(r28)
  lwz       r4, 0x90(r28)
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x14(r1)
  addi      r3, r1, 0x8
  stfs      f0, 0x38(r28)
  lfs       f0, 0x18(r1)
  stfs      f0, 0x3C(r28)
  lfs       f0, 0x1C(r1)
  stfs      f0, 0x40(r28)
  lwz       r4, 0x90(r28)
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0x8(r1)
  li        r30, 0
  lfs       f0, -0x23EC(r2)
  li        r31, 0
  stfs      f1, 0x44(r28)
  lfs       f1, 0xC(r1)
  stfs      f1, 0x48(r28)
  lfs       f1, 0x10(r1)
  stfs      f1, 0x4C(r28)
  stfs      f0, 0x58(r28)
  stfs      f0, 0x54(r28)
  stfs      f0, 0x50(r28)

.loc_0x104:
  lwz       r0, 0x8C(r28)
  add       r3, r0, r31
  bl        0x128C
  addi      r30, r30, 0x1
  addi      r31, r31, 0x5C
  cmpwi     r30, 0x4
  blt+      .loc_0x104
  stw       r29, 0x94(r28)
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
 * Address:	802A8C78
 * Size:	00006C
 */
void Game::IKSystemMgr::setupJoint( (SysShape::Model *, int, char **))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mulli     r30, r5, 0x5C
  mr        r27, r3
  mr        r28, r4
  mr        r31, r6
  li        r29, 0

.loc_0x24:
  lwz       r4, 0x0(r31)
  mr        r3, r28
  bl        0x196340
  bl        0x180BF8
  lwz       r0, 0x8C(r27)
  mr        r5, r3
  mr        r4, r29
  add       r3, r0, r30
  bl        0x1240
  addi      r29, r29, 0x1
  addi      r31, r31, 0x4
  cmpwi     r29, 0x3
  blt+      .loc_0x24
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	802A8CE4
 * Size:	000038
 */
void Game::IKSystemMgr::setupCallBack( (SysShape::Model *, char *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r3, r4
  mr        r4, r5
  stw       r0, 0x14(r1)
  bl        0x1962EC
  lis       r4, 0x802B
  lwz       r3, 0x18(r3)
  subi      r0, r4, 0x7580
  stw       r0, 0x4(r3)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802A8D1C
 * Size:	000064
 */
void Game::IKSystemMgr::setParameters( (Game::IKSystemParms *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  mr        r29, r3
  stw       r4, 0x98(r3)

.loc_0x28:
  lwz       r0, 0x8C(r29)
  lwz       r4, 0x98(r29)
  add       r3, r0, r31
  bl        0x11BC
  addi      r30, r30, 0x1
  addi      r31, r31, 0x5C
  cmpwi     r30, 0x4
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
 * Address:	802A8D80
 * Size:	000188
 */
void Game::IKSystemMgr::startProgramedIK(void)
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
  stmw      r27, 0x3C(r1)
  mr        r27, r3
  li        r0, 0x1
  stb       r0, 0x0(r3)
  li        r31, 0
  mr        r30, r27
  li        r28, 0
  stb       r31, 0x1(r3)
  mr        r29, r31
  stb       r31, 0x2(r3)

.loc_0x4C:
  stw       r31, 0x1C(r30)
  lwz       r0, 0x8C(r27)
  add       r3, r0, r29
  bl        0x113C
  addi      r28, r28, 0x1
  addi      r29, r29, 0x5C
  cmpwi     r28, 0x4
  addi      r30, r30, 0x4
  blt+      .loc_0x4C
  lwz       r4, 0x90(r27)
  addi      r3, r1, 0x20
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f29, 0x20(r1)
  addi      r3, r1, 0x14
  lfs       f30, 0x24(r1)
  lfs       f31, 0x28(r1)
  lwz       r4, 0x8C(r27)
  bl        0x1540
  lfs       f0, 0x18(r1)
  lfs       f2, 0x14(r1)
  fsubs     f3, f30, f0
  lfs       f1, 0x1C(r1)
  fsubs     f2, f29, f2
  lfs       f0, -0x23EC(r2)
  fsubs     f1, f31, f1
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
  lis       r3, 0x8051
  stfs      f1, 0x8(r27)
  mr        r30, r27
  li        r28, 0
  subi      r31, r3, 0x2E20
  li        r29, 0

.loc_0x100:
  lwz       r0, 0x8C(r27)
  addi      r3, r1, 0x8
  add       r4, r0, r29
  bl        0x14D0
  lfs       f1, 0x8(r1)
  mr        r3, r31
  lfs       f0, 0x10(r1)
  fsubs     f1, f1, f29
  fsubs     f2, f0, f31
  bl        -0x273D9C
  lwz       r3, 0x90(r27)
  fmr       f30, f1
  lwz       r12, 0x0(r3)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fsubs     f0, f30, f1
  addi      r28, r28, 0x1
  cmpwi     r28, 0x4
  addi      r29, r29, 0x5C
  stfs      f0, 0xC(r30)
  addi      r30, r30, 0x4
  blt+      .loc_0x100
  psq_l     f31,0x78(r1),0,0
  lfd       f31, 0x70(r1)
  psq_l     f30,0x68(r1),0,0
  lfd       f30, 0x60(r1)
  psq_l     f29,0x58(r1),0,0
  lfd       f29, 0x50(r1)
  lmw       r27, 0x3C(r1)
  lwz       r0, 0x84(r1)
  mtlr      r0
  addi      r1, r1, 0x80
  blr
*/
}

/*
 * --INFO--
 * Address:	802A8F08
 * Size:	000024
 */
void Game::IKSystemMgr::startIKMotion(void)
{
/*
.loc_0x0:
  li        r4, 0x1
  li        r0, 0
  stb       r4, 0x1(r3)
  stb       r0, 0x2(r3)
  stw       r0, 0x1C(r3)
  stw       r0, 0x20(r3)
  stw       r0, 0x24(r3)
  stw       r0, 0x28(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802A8F2C
 * Size:	00000C
 */
void Game::IKSystemMgr::finishIKMotion(void)
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
 * Address:	802A8F38
 * Size:	000014
 */
void Game::IKSystemMgr::forceFinishIKMotion(void)
{
/*
.loc_0x0:
  li        r4, 0
  li        r0, 0x1
  stb       r4, 0x1(r3)
  stb       r0, 0x2(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802A8F4C
 * Size:	00005C
 */
void Game::IKSystemMgr::startBlendMotion(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  mr        r29, r3

.loc_0x24:
  lwz       r0, 0x8C(r29)
  add       r3, r0, r31
  bl        0x1180
  addi      r30, r30, 0x1
  addi      r31, r31, 0x5C
  cmpwi     r30, 0x4
  blt+      .loc_0x24
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
 * Address:	802A8FA8
 * Size:	00005C
 */
void Game::IKSystemMgr::finishBlendMotion(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  mr        r29, r3

.loc_0x24:
  lwz       r0, 0x8C(r29)
  add       r3, r0, r31
  bl        0x1130
  addi      r30, r30, 0x1
  addi      r31, r31, 0x5C
  cmpwi     r30, 0x4
  blt+      .loc_0x24
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
 * Address:	802A9004
 * Size:	00005C
 */
void Game::IKSystemMgr::checkJointScaleOn(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  mr        r29, r3

.loc_0x24:
  lwz       r0, 0x8C(r29)
  add       r3, r0, r31
  bl        0x10E0
  addi      r30, r30, 0x1
  addi      r31, r31, 0x5C
  cmpwi     r30, 0x4
  blt+      .loc_0x24
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
 * Address:	........
 * Size:	00005C
 */
void Game::IKSystemMgr::checkJointScaleOff(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802A9060
 * Size:	000070
 */
void Game::IKSystemMgr::isFinishIKMotion(void)
{
/*
.loc_0x0:
  lbz       r0, 0x1(r3)
  cmplwi    r0, 0
  bne-      .loc_0x68
  lwz       r0, 0x1C(r3)
  cmpwi     r0, 0x3
  beq-      .loc_0x20
  li        r3, 0
  blr       

.loc_0x20:
  lwz       r0, 0x20(r3)
  cmpwi     r0, 0x3
  beq-      .loc_0x34
  li        r3, 0
  blr       

.loc_0x34:
  addi      r3, r3, 0x8
  lwz       r0, 0x1C(r3)
  cmpwi     r0, 0x3
  beq-      .loc_0x4C
  li        r3, 0
  blr       

.loc_0x4C:
  lwz       r0, 0x20(r3)
  cmpwi     r0, 0x3
  beq-      .loc_0x60
  li        r3, 0
  blr       

.loc_0x60:
  li        r3, 0x1
  blr       

.loc_0x68:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	802A90D0
 * Size:	00000C
 */
void Game::IKSystemMgr::resetAnimationCallBack(void)
{
/*
.loc_0x0:
  li        r0, 0
  stw       r0, -0x6908(r13)
  blr
*/
}

/*
 * --INFO--
 * Address:	802A90DC
 * Size:	000008
 */
void Game::IKSystemMgr::setAnimationCallBack(void)
{
/*
.loc_0x0:
  stw       r3, -0x6908(r13)
  blr
*/
}

/*
 * --INFO--
 * Address:	802A90E4
 * Size:	00007C
 */
void Game::IKSystemMgr::doUpdate(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  mr        r29, r3

.loc_0x24:
  lwz       r0, 0x8C(r29)
  add       r3, r0, r31
  bl        0x100C
  addi      r30, r30, 0x1
  addi      r31, r31, 0x5C
  cmpwi     r30, 0x4
  blt+      .loc_0x24
  mr        r3, r29
  bl        0x1D8
  mr        r3, r29
  bl        0x8B4
  mr        r3, r29
  bl        0x9A8
  mr        r3, r29
  bl        0xC38
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
 * Address:	802A9160
 * Size:	00005C
 */
void Game::IKSystemMgr::makeMatrix(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  mr        r29, r3

.loc_0x24:
  lwz       r0, 0x8C(r29)
  add       r3, r0, r31
  bl        0x100C
  addi      r30, r30, 0x1
  addi      r31, r31, 0x5C
  cmpwi     r30, 0x4
  blt+      .loc_0x24
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
 * Address:	802A91BC
 * Size:	000038
 */
void Game::IKSystemMgr::getCollisionCentre( (int))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  mulli     r0, r5, 0x5C
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r4, 0x8C(r4)
  add       r4, r4, r0
  bl        0x119C
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802A91F4
 * Size:	00010C
 */
void Game::IKSystemMgr::isCollisionCheck( (CollPart *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr.       r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  beq-      .loc_0xEC
  lis       r4, 0x6C66
  addi      r3, r30, 0x30
  addi      r4, r4, 0x7370
  li        r31, -0x1
  bl        0x16A20C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x48
  li        r31, 0x3
  b         .loc_0xA4

.loc_0x48:
  lis       r4, 0x6C68
  addi      r3, r30, 0x30
  addi      r4, r4, 0x7370
  bl        0x16A1EC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x68
  li        r31, 0x1
  b         .loc_0xA4

.loc_0x68:
  lis       r4, 0x7266
  addi      r3, r30, 0x30
  addi      r4, r4, 0x7370
  bl        0x16A1CC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x88
  li        r31, 0x2
  b         .loc_0xA4

.loc_0x88:
  lis       r4, 0x7268
  addi      r3, r30, 0x30
  addi      r4, r4, 0x7370
  bl        0x16A1AC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xA4
  li        r31, 0

.loc_0xA4:
  cmpwi     r31, 0
  blt-      .loc_0xEC
  rlwinm    r0,r31,2,0,29
  add       r3, r29, r0
  lwz       r0, 0x1C(r3)
  cmpwi     r0, 0x1
  beq-      .loc_0xC8
  cmpwi     r0, 0x2
  bne-      .loc_0xEC

.loc_0xC8:
  mulli     r0, r31, 0x5C
  lwz       r3, 0x8C(r29)
  add       r3, r3, r0
  bl        0x10FC
  lfs       f0, -0x23E8(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0xEC
  li        r3, 0x1
  b         .loc_0xF0

.loc_0xEC:
  li        r3, 0

.loc_0xF0:
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
 * Address:	802A9300
 * Size:	000308
 */
void Game::IKSystemMgr::updateController(void)
{
/*
.loc_0x0:
  stwu      r1, -0x80(r1)
  mflr      r0
  stw       r0, 0x84(r1)
  stmw      r26, 0x68(r1)
  mr        r28, r3
  lbz       r0, 0x1(r3)
  cmplwi    r0, 0
  beq-      .loc_0x154
  lwz       r0, 0x1C(r28)
  li        r4, 0x1
  cmpwi     r0, 0x3
  beq-      .loc_0x34
  li        r4, 0

.loc_0x34:
  lwz       r0, 0x20(r28)
  cmpwi     r0, 0x3
  beq-      .loc_0x44
  li        r4, 0

.loc_0x44:
  addi      r3, r28, 0x8
  lwz       r0, 0x24(r28)
  cmpwi     r0, 0x3
  beq-      .loc_0x58
  li        r4, 0

.loc_0x58:
  lwz       r0, 0x20(r3)
  cmpwi     r0, 0x3
  beq-      .loc_0x68
  li        r4, 0

.loc_0x68:
  rlwinm.   r0,r4,0,24,31
  beq-      .loc_0x84
  li        r0, 0
  stw       r0, 0x1C(r28)
  stw       r0, 0x20(r28)
  stw       r0, 0x24(r28)
  stw       r0, 0x28(r28)

.loc_0x84:
  lwz       r0, 0x1C(r28)
  li        r4, 0x1
  cmpwi     r0, 0
  beq-      .loc_0x98
  li        r4, 0

.loc_0x98:
  lwz       r0, 0x20(r28)
  cmpwi     r0, 0
  beq-      .loc_0xA8
  li        r4, 0

.loc_0xA8:
  addi      r3, r28, 0x8
  lwz       r0, 0x24(r28)
  cmpwi     r0, 0
  beq-      .loc_0xBC
  li        r4, 0

.loc_0xBC:
  lwz       r0, 0x20(r3)
  cmpwi     r0, 0
  beq-      .loc_0xCC
  li        r4, 0

.loc_0xCC:
  rlwinm.   r0,r4,0,24,31
  beq-      .loc_0x154
  mr        r3, r28
  bl        .loc_0x308
  lwz       r3, 0x8C(r28)
  addi      r4, r28, 0x5C
  bl        0xC20
  li        r0, 0x1
  stw       r0, 0x1C(r28)
  lwz       r0, 0x94(r28)
  cmplwi    r0, 0
  beq-      .loc_0x154
  lwz       r4, 0x8C(r28)
  addi      r3, r1, 0x20
  bl        0xF58
  lfs       f3, 0x20(r1)
  addi      r4, r1, 0x4C
  lfs       f2, 0x24(r1)
  lfs       f1, 0x28(r1)
  lfs       f0, -0x23E4(r2)
  stfs      f3, 0x4C(r1)
  lwz       r3, -0x6CF8(r13)
  stfs      f2, 0x50(r1)
  stfs      f1, 0x54(r1)
  stfs      f0, 0x58(r1)
  bl        -0x145B08
  mr        r0, r3
  lwz       r3, 0x94(r28)
  mr        r5, r0
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     

.loc_0x154:
  mr        r31, r28
  li        r29, 0
  li        r30, 0

.loc_0x160:
  lwz       r0, 0x1C(r31)
  cmpwi     r0, 0x1
  bne-      .loc_0x18C
  lwz       r0, 0x8C(r28)
  add       r3, r0, r30
  bl        0xEE0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x2E0
  li        r0, 0x2
  stw       r0, 0x1C(r31)
  b         .loc_0x2E0

.loc_0x18C:
  cmpwi     r0, 0x2
  bne-      .loc_0x2E0
  li        r0, 0x3
  stw       r0, 0x1C(r31)
  lwz       r3, 0x98(r28)
  lfs       f1, 0x54(r28)
  lfs       f0, 0x44(r3)
  fadds     f0, f1, f0
  stfs      f0, 0x54(r28)
  lwz       r0, 0x94(r28)
  cmplwi    r0, 0
  beq-      .loc_0x218
  lwz       r0, 0x8C(r28)
  addi      r3, r1, 0x14
  add       r4, r0, r30
  bl        0xE94
  lfs       f3, 0x14(r1)
  addi      r4, r1, 0x3C
  lfs       f2, 0x18(r1)
  lfs       f1, 0x1C(r1)
  lfs       f0, -0x23E4(r2)
  stfs      f3, 0x3C(r1)
  lwz       r3, -0x6CF8(r13)
  stfs      f2, 0x40(r1)
  stfs      f1, 0x44(r1)
  stfs      f0, 0x48(r1)
  bl        -0x145BCC
  mr        r0, r3
  lwz       r3, 0x94(r28)
  mr        r5, r0
  mr        r4, r29
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x218:
  addic.    r0, r29, 0x1
  bge-      .loc_0x228
  addi      r27, r29, 0x5
  b         .loc_0x238

.loc_0x228:
  addi      r27, r29, 0x1
  cmpwi     r27, 0x3
  ble-      .loc_0x238
  subi      r27, r29, 0x3

.loc_0x238:
  cmpwi     r27, 0
  ble-      .loc_0x2E0
  lbz       r0, 0x2(r28)
  cmplwi    r0, 0
  bne-      .loc_0x2E0
  mulli     r3, r27, 0xC
  lwz       r0, 0x8C(r28)
  mulli     r26, r27, 0x5C
  addi      r4, r3, 0x5C
  add       r3, r0, r26
  add       r4, r28, r4
  bl        0xAA0
  rlwinm    r3,r27,2,0,29
  li        r4, 0x1
  addi      r0, r3, 0x1C
  stwx      r4, r28, r0
  lwz       r0, 0x94(r28)
  cmplwi    r0, 0
  beq-      .loc_0x2E0
  lwz       r0, 0x8C(r28)
  addi      r3, r1, 0x8
  add       r4, r0, r26
  bl        0xDCC
  lfs       f3, 0x8(r1)
  addi      r4, r1, 0x2C
  lfs       f2, 0xC(r1)
  lfs       f1, 0x10(r1)
  lfs       f0, -0x23E4(r2)
  stfs      f3, 0x2C(r1)
  lwz       r3, -0x6CF8(r13)
  stfs      f2, 0x30(r1)
  stfs      f1, 0x34(r1)
  stfs      f0, 0x38(r1)
  bl        -0x145C94
  mr        r0, r3
  lwz       r3, 0x94(r28)
  mr        r5, r0
  mr        r4, r27
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     

.loc_0x2E0:
  addi      r29, r29, 0x1
  addi      r30, r30, 0x5C
  cmpwi     r29, 0x4
  addi      r31, r31, 0x4
  blt+      .loc_0x160
  lmw       r26, 0x68(r1)
  lwz       r0, 0x84(r1)
  mtlr      r0
  addi      r1, r1, 0x80
  blr       

.loc_0x308:
*/
}

/*
 * --INFO--
 * Address:	802A9608
 * Size:	0003DC
 */
void Game::IKSystemMgr::setNextCentrePosition(void)
{
/*
.loc_0x0:
  stwu      r1, -0xA0(r1)
  mflr      r0
  stw       r0, 0xA4(r1)
  stfd      f31, 0x90(r1)
  psq_st    f31,0x98(r1),0,0
  stfd      f30, 0x80(r1)
  psq_st    f30,0x88(r1),0,0
  stfd      f29, 0x70(r1)
  psq_st    f29,0x78(r1),0,0
  stfd      f28, 0x60(r1)
  psq_st    f28,0x68(r1),0,0
  stw       r31, 0x5C(r1)
  stw       r30, 0x58(r1)
  mr        r31, r3
  addi      r3, r1, 0x14
  lwz       r30, 0x90(r31)
  mr        r4, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f5, 0x14(r1)
  lis       r3, 0x8051
  lfs       f3, 0x1C(r1)
  subi      r3, r3, 0x2E20
  lfs       f1, 0x2C(r31)
  lfs       f0, 0x34(r31)
  lfs       f4, 0x18(r1)
  fsubs     f1, f1, f5
  fsubs     f2, f0, f3
  stfs      f5, 0x8(r1)
  stfs      f4, 0xC(r1)
  stfs      f3, 0x10(r1)
  bl        -0x274584
  bl        0x168540
  lwz       r12, 0x0(r30)
  fmr       f28, f1
  mr        r3, r30
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  fmr       f1, f28
  bl        0x168548
  lwz       r3, 0x98(r31)
  fmr       f28, f1
  lfs       f0, -0x23DC(r2)
  lfs       f2, 0x34(r3)
  lfs       f1, -0x23E0(r2)
  fmuls     f0, f0, f2
  fabs      f2, f28
  fmuls     f0, f1, f0
  frsp      f1, f2
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x250
  lwz       r4, 0x90(r31)
  addi      r3, r1, 0x2C
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0x2C(r1)
  lfs       f31, 0x2C(r31)
  lfs       f0, 0x34(r1)
  lfs       f29, 0x34(r31)
  fsubs     f2, f1, f31
  lfs       f30, -0x23EC(r2)
  fsubs     f3, f0, f29
  fmadds    f2, f2, f2, f30
  fmuls     f3, f3, f3
  fadds     f2, f3, f2
  fcmpo     cr0, f2, f30
  ble-      .loc_0x138
  ble-      .loc_0x13C
  fsqrte    f3, f2
  fmuls     f2, f3, f2
  b         .loc_0x13C

.loc_0x138:
  fmr       f2, f30

.loc_0x13C:
  lwz       r3, 0x98(r31)
  lfs       f5, 0x2C(r3)
  fcmpo     cr0, f2, f5
  ble-      .loc_0x1C8
  lfs       f3, -0x23EC(r2)
  fsubs     f29, f29, f0
  fsubs     f31, f31, f1
  fsubs     f30, f30, f3
  fmuls     f4, f29, f29
  fmuls     f2, f30, f30
  fmadds    f2, f31, f31, f2
  fadds     f4, f4, f2
  fcmpo     cr0, f4, f3
  ble-      .loc_0x184
  ble-      .loc_0x188
  fsqrte    f2, f4
  fmuls     f4, f2, f4
  b         .loc_0x188

.loc_0x184:
  fmr       f4, f3

.loc_0x188:
  lfs       f2, -0x23EC(r2)
  fcmpo     cr0, f4, f2
  ble-      .loc_0x1A8
  lfs       f2, -0x23E8(r2)
  fdivs     f2, f2, f4
  fmuls     f31, f31, f2
  fmuls     f30, f30, f2
  fmuls     f29, f29, f2

.loc_0x1A8:
  fmuls     f31, f31, f5
  lfs       f2, -0x23EC(r2)
  fmuls     f30, f30, f5
  fmuls     f29, f29, f5
  fadds     f31, f31, f1
  fadds     f30, f30, f2
  fadds     f29, f29, f0
  b         .loc_0x2B4

.loc_0x1C8:
  lfs       f5, 0x30(r3)
  fcmpo     cr0, f2, f5
  bge-      .loc_0x2B4
  lfs       f3, -0x23EC(r2)
  fsubs     f29, f29, f0
  fsubs     f31, f31, f1
  fsubs     f30, f30, f3
  fmuls     f4, f29, f29
  fmuls     f2, f30, f30
  fmadds    f2, f31, f31, f2
  fadds     f4, f4, f2
  fcmpo     cr0, f4, f3
  ble-      .loc_0x20C
  ble-      .loc_0x210
  fsqrte    f2, f4
  fmuls     f4, f2, f4
  b         .loc_0x210

.loc_0x20C:
  fmr       f4, f3

.loc_0x210:
  lfs       f2, -0x23EC(r2)
  fcmpo     cr0, f4, f2
  ble-      .loc_0x230
  lfs       f2, -0x23E8(r2)
  fdivs     f2, f2, f4
  fmuls     f31, f31, f2
  fmuls     f30, f30, f2
  fmuls     f29, f29, f2

.loc_0x230:
  fmuls     f31, f31, f5
  lfs       f2, -0x23EC(r2)
  fmuls     f30, f30, f5
  fmuls     f29, f29, f5
  fadds     f31, f31, f1
  fadds     f30, f30, f2
  fadds     f29, f29, f0
  b         .loc_0x2B4

.loc_0x250:
  lwz       r4, 0x90(r31)
  addi      r3, r1, 0x20
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x98(r31)
  fabs      f2, f28
  lfs       f0, -0x23DC(r2)
  lfs       f3, 0x38(r3)
  lfs       f1, -0x23E0(r2)
  frsp      f2, f2
  fmuls     f0, f0, f3
  lfs       f31, 0x20(r1)
  lfs       f29, 0x28(r1)
  lfs       f30, -0x23EC(r2)
  fmuls     f0, f1, f0
  fcmpo     cr0, f2, f0
  cror      2, 0, 0x2
  beq-      .loc_0x2B4
  fcmpo     cr0, f28, f30
  ble-      .loc_0x2B0
  fmr       f28, f0
  b         .loc_0x2B4

.loc_0x2B0:
  fneg      f28, f0

.loc_0x2B4:
  lwz       r3, 0x90(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  lfs       f4, -0x23EC(r2)
  lis       r3, 0x8050
  fadds     f6, f28, f1
  li        r0, 0x4
  fadds     f1, f30, f4
  mr        r5, r31
  mr        r6, r31
  addi      r4, r3, 0x71A0
  lfs       f3, -0x23D8(r2)
  mtctr     r0

.loc_0x2F0:
  lfs       f0, 0xC(r5)
  fadds     f7, f6, f0
  fmr       f0, f7
  fcmpo     cr0, f7, f4
  bge-      .loc_0x308
  fneg      f0, f7

.loc_0x308:
  fmuls     f0, f0, f3
  lfs       f2, 0x8(r31)
  fcmpo     cr0, f7, f4
  fctiwz    f0, f0
  stfd      f0, 0x38(r1)
  lwz       r0, 0x3C(r1)
  rlwinm    r0,r0,3,18,28
  add       r3, r4, r0
  lfs       f0, 0x4(r3)
  fmuls     f5, f2, f0
  bge-      .loc_0x360
  lfs       f0, -0x23D4(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f7, f0
  fctiwz    f0, f0
  stfd      f0, 0x40(r1)
  lwz       r0, 0x44(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0
  fneg      f0, f0
  b         .loc_0x380

.loc_0x360:
  fmuls     f0, f7, f3
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fctiwz    f0, f0
  stfd      f0, 0x48(r1)
  lwz       r0, 0x4C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0

.loc_0x380:
  fmuls     f2, f2, f0
  addi      r5, r5, 0x4
  fadds     f0, f29, f5
  fadds     f2, f31, f2
  stfs      f2, 0x5C(r6)
  stfs      f1, 0x60(r6)
  stfs      f0, 0x64(r6)
  addi      r6, r6, 0xC
  bdnz+     .loc_0x2F0
  psq_l     f31,0x98(r1),0,0
  lfd       f31, 0x90(r1)
  psq_l     f30,0x88(r1),0,0
  lfd       f30, 0x80(r1)
  psq_l     f29,0x78(r1),0,0
  lfd       f29, 0x70(r1)
  psq_l     f28,0x68(r1),0,0
  lfd       f28, 0x60(r1)
  lwz       r31, 0x5C(r1)
  lwz       r0, 0xA4(r1)
  lwz       r30, 0x58(r1)
  mtlr      r0
  addi      r1, r1, 0xA0
  blr
*/
}

/*
 * --INFO--
 * Address:	802A99E4
 * Size:	0000FC
 */
void Game::IKSystemMgr::calcFaceDir(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stfd      f31, 0x40(r1)
  psq_st    f31,0x48(r1),0,0
  stfd      f30, 0x30(r1)
  psq_st    f30,0x38(r1),0,0
  stw       r31, 0x2C(r1)
  mr        r31, r3
  lbz       r0, 0x0(r3)
  cmplwi    r0, 0
  beq-      .loc_0xC0
  lwz       r4, 0x8C(r31)
  addi      r3, r1, 0x14
  bl        0x940
  lwz       r4, 0x8C(r31)
  addi      r3, r1, 0x8
  lfs       f31, 0x14(r1)
  lfs       f30, 0x1C(r1)
  addi      r4, r4, 0x5C
  bl        0x928
  lfs       f1, 0x8(r1)
  lis       r3, 0x8051
  lfs       f0, 0x10(r1)
  subi      r3, r3, 0x2E20
  fadds     f4, f31, f1
  lfs       f3, -0x23D0(r2)
  fadds     f2, f30, f0
  lfs       f1, 0x38(r31)
  lfs       f0, 0x40(r31)
  fmsubs    f1, f4, f3, f1
  fmsubs    f2, f2, f3, f0
  bl        -0x27495C
  stfs      f1, 0x4(r31)
  lfs       f0, -0x23EC(r2)
  lfs       f1, 0x4(r31)
  fcmpo     cr0, f1, f0
  bge-      .loc_0xA4
  lfs       f0, -0x23CC(r2)
  fadds     f1, f0, f1
  b         .loc_0xB8

.loc_0xA4:
  lfs       f0, -0x23CC(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0xB8
  fsubs     f1, f1, f0

.loc_0xB8:
  stfs      f1, 0x4(r31)
  b         .loc_0xD8

.loc_0xC0:
  lwz       r3, 0x90(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x4(r31)

.loc_0xD8:
  psq_l     f31,0x48(r1),0,0
  lfd       f31, 0x40(r1)
  psq_l     f30,0x38(r1),0,0
  lfd       f30, 0x30(r1)
  lwz       r0, 0x54(r1)
  lwz       r31, 0x2C(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	802A9AE0
 * Size:	000298
 */
void Game::IKSystemMgr::calcCentrePosition(void)
{
/*
.loc_0x0:
  stwu      r1, -0xA0(r1)
  mflr      r0
  stw       r0, 0xA4(r1)
  stw       r31, 0x9C(r1)
  mr        r31, r3
  lbz       r0, 0x0(r3)
  cmplwi    r0, 0
  beq-      .loc_0x254
  lwz       r4, 0x8C(r31)
  addi      r3, r1, 0x38
  bl        0x854
  lfs       f2, 0x38(r1)
  addi      r3, r1, 0x2C
  lfs       f1, 0x3C(r1)
  lfs       f0, 0x40(r1)
  lwz       r4, 0x8C(r31)
  stfs      f2, 0x64(r1)
  addi      r4, r4, 0x5C
  stfs      f1, 0x68(r1)
  stfs      f0, 0x6C(r1)
  bl        0x82C
  lfs       f2, 0x2C(r1)
  addi      r3, r1, 0x20
  lfs       f1, 0x30(r1)
  lfs       f0, 0x34(r1)
  lwz       r4, 0x8C(r31)
  stfs      f2, 0x70(r1)
  addi      r4, r4, 0xB8
  stfs      f1, 0x74(r1)
  stfs      f0, 0x78(r1)
  bl        0x804
  lfs       f2, 0x20(r1)
  addi      r3, r1, 0x14
  lfs       f1, 0x24(r1)
  lfs       f0, 0x28(r1)
  lwz       r4, 0x8C(r31)
  stfs      f2, 0x7C(r1)
  addi      r4, r4, 0x114
  stfs      f1, 0x80(r1)
  stfs      f0, 0x84(r1)
  bl        0x7DC
  lfs       f11, 0x18(r1)
  addi      r5, r1, 0x54
  lfs       f12, 0x14(r1)
  li        r6, 0
  lfs       f10, 0x1C(r1)
  lfs       f0, -0x23EC(r2)
  lfs       f2, 0x68(r1)
  stfs      f0, 0x40(r31)
  lfs       f1, 0x74(r1)
  stfs      f0, 0x3C(r31)
  lfs       f3, 0x64(r1)
  stfs      f0, 0x38(r31)
  lfs       f0, 0x80(r1)
  lfs       f4, 0x38(r31)
  lfs       f8, 0x6C(r1)
  fadds     f3, f4, f3
  lfs       f7, 0x70(r1)
  lfs       f6, 0x78(r1)
  stfs      f2, 0x54(r1)
  lfs       f5, 0x7C(r1)
  stfs      f3, 0x38(r31)
  lfs       f4, 0x84(r1)
  lfs       f9, 0x40(r31)
  stfs      f1, 0x58(r1)
  fadds     f8, f9, f8
  lfs       f3, -0x23C8(r2)
  stfs      f0, 0x5C(r1)
  stfs      f8, 0x40(r31)
  lfs       f8, 0x38(r31)
  stfs      f12, 0x88(r1)
  fadds     f7, f8, f7
  stfs      f11, 0x8C(r1)
  stfs      f7, 0x38(r31)
  lfs       f2, 0x40(r31)
  stfs      f10, 0x90(r1)
  fadds     f1, f2, f6
  stfs      f11, 0x60(r1)
  stfs      f1, 0x40(r31)
  lfs       f0, 0x38(r31)
  fadds     f0, f0, f5
  stfs      f0, 0x38(r31)
  lfs       f0, 0x40(r31)
  fadds     f0, f0, f4
  stfs      f0, 0x40(r31)
  lfs       f0, 0x38(r31)
  fadds     f0, f0, f12
  stfs      f0, 0x38(r31)
  lfs       f0, 0x40(r31)
  fadds     f0, f0, f10
  stfs      f0, 0x40(r31)
  lfs       f0, 0x38(r31)
  fmuls     f0, f0, f3
  stfs      f0, 0x38(r31)
  lfs       f0, 0x40(r31)
  fmuls     f0, f0, f3
  stfs      f0, 0x40(r31)

.loc_0x184:
  addi      r7, r6, 0x1
  addi      r4, r1, 0x54
  rlwinm    r3,r7,2,0,29
  subfic    r0, r7, 0x4
  add       r4, r4, r3
  mtctr     r0
  cmpwi     r7, 0x4
  bge-      .loc_0x1C8

.loc_0x1A4:
  lfs       f1, 0x0(r5)
  lfs       f0, 0x0(r4)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x1BC
  stfs      f1, 0x0(r4)
  stfs      f0, 0x0(r5)

.loc_0x1BC:
  addi      r4, r4, 0x4
  addi      r7, r7, 0x1
  bdnz+     .loc_0x1A4

.loc_0x1C8:
  addi      r6, r6, 0x1
  addi      r5, r5, 0x4
  cmpwi     r6, 0x3
  blt+      .loc_0x184
  lis       r3, 0x8049
  lfs       f1, 0x54(r1)
  subi      r5, r3, 0x6698
  lfs       f0, 0x3C(r31)
  lwz       r0, 0x0(r5)
  lwz       r4, 0x4(r5)
  stw       r0, 0x44(r1)
  lwz       r3, 0x8(r5)
  lfs       f2, 0x44(r1)
  lwz       r0, 0xC(r5)
  fmadds    f0, f2, f1, f0
  stw       r4, 0x48(r1)
  lfs       f1, 0x58(r1)
  stw       r3, 0x4C(r1)
  lfs       f2, 0x48(r1)
  stfs      f0, 0x3C(r31)
  lfs       f4, 0x4C(r1)
  lfs       f0, 0x3C(r31)
  stw       r0, 0x50(r1)
  fmadds    f0, f2, f1, f0
  lfs       f3, 0x5C(r1)
  lfs       f2, 0x50(r1)
  lfs       f1, 0x60(r1)
  stfs      f0, 0x3C(r31)
  lfs       f0, 0x3C(r31)
  fmadds    f0, f4, f3, f0
  stfs      f0, 0x3C(r31)
  lfs       f0, 0x3C(r31)
  fmadds    f0, f2, f1, f0
  stfs      f0, 0x3C(r31)
  b         .loc_0x284

.loc_0x254:
  lwz       r4, 0x90(r31)
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x8(r1)
  stfs      f0, 0x38(r31)
  lfs       f0, 0xC(r1)
  stfs      f0, 0x3C(r31)
  lfs       f0, 0x10(r1)
  stfs      f0, 0x40(r31)

.loc_0x284:
  lwz       r0, 0xA4(r1)
  lwz       r31, 0x9C(r1)
  mtlr      r0
  addi      r1, r1, 0xA0
  blr
*/
}

/*
 * --INFO--
 * Address:	802A9D78
 * Size:	0000E4
 */
void Game::IKSystemMgr::calcTraceCentrePosition(void)
{
/*
.loc_0x0:
  lbz       r0, 0x0(r3)
  cmplwi    r0, 0
  beq-      .loc_0xC8
  lfs       f1, 0x38(r3)
  lfs       f0, 0x44(r3)
  lwz       r4, 0x98(r3)
  fsubs     f5, f1, f0
  lfs       f0, 0x50(r3)
  lfs       f4, 0x3C(r4)
  lfs       f3, 0x3C(r3)
  fmuls     f5, f5, f4
  lfs       f1, 0x48(r3)
  lfs       f2, 0x40(r3)
  fsubs     f3, f3, f1
  lfs       f1, 0x4C(r3)
  fadds     f0, f0, f5
  fsubs     f1, f2, f1
  fmuls     f3, f3, f4
  stfs      f0, 0x50(r3)
  fmuls     f1, f1, f4
  lfs       f0, 0x54(r3)
  fadds     f0, f0, f3
  stfs      f0, 0x54(r3)
  lfs       f0, 0x58(r3)
  fadds     f0, f0, f1
  stfs      f0, 0x58(r3)
  lfs       f1, 0x44(r3)
  lfs       f0, 0x50(r3)
  fadds     f0, f1, f0
  stfs      f0, 0x44(r3)
  lfs       f1, 0x48(r3)
  lfs       f0, 0x54(r3)
  fadds     f0, f1, f0
  stfs      f0, 0x48(r3)
  lfs       f1, 0x4C(r3)
  lfs       f0, 0x58(r3)
  fadds     f0, f1, f0
  stfs      f0, 0x4C(r3)
  lwz       r4, 0x98(r3)
  lfs       f0, 0x50(r3)
  lfs       f1, 0x40(r4)
  fmuls     f0, f0, f1
  stfs      f0, 0x50(r3)
  lfs       f0, 0x54(r3)
  fmuls     f0, f0, f1
  stfs      f0, 0x54(r3)
  lfs       f0, 0x58(r3)
  fmuls     f0, f0, f1
  stfs      f0, 0x58(r3)
  blr       

.loc_0xC8:
  lfs       f0, 0x38(r3)
  stfs      f0, 0x44(r3)
  lfs       f0, 0x3C(r3)
  stfs      f0, 0x48(r3)
  lfs       f0, 0x40(r3)
  stfs      f0, 0x4C(r3)
  blr
*/
}

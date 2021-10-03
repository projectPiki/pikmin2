

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
 * Address:	802CE798
 * Size:	00016C
 */
void Game::SnakeWhole::Obj::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  extsh.    r0, r4
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r30, 0x8(r1)
  beq-      .loc_0x40
  addi      r0, r31, 0x330
  lis       r3, 0x804B
  stw       r0, 0x17C(r31)
  subi      r3, r3, 0x5988
  li        r0, 0
  stw       r3, 0x330(r31)
  stw       r0, 0x334(r31)
  stw       r0, 0x338(r31)

.loc_0x40:
  mr        r3, r31
  li        r4, 0
  bl        -0x1CD440
  lis       r3, 0x804D
  addi      r0, r31, 0x330
  addi      r5, r3, 0x2478
  addi      r3, r31, 0x2D0
  stw       r5, 0x0(r31)
  addi      r4, r5, 0x1B0
  addi      r5, r5, 0x2FC
  stw       r4, 0x178(r31)
  lwz       r4, 0x17C(r31)
  stw       r5, 0x0(r4)
  lwz       r4, 0x17C(r31)
  sub       r0, r0, r4
  stw       r0, 0xC(r4)
  bl        -0x1962D0
  lis       r4, 0x8012
  addi      r3, r31, 0x2E8
  subi      r4, r4, 0xCB8
  li        r5, 0
  li        r6, 0xC
  li        r7, 0x5
  bl        -0x20CFF8
  li        r3, 0x2C
  bl        -0x2AA998
  mr.       r30, r3
  beq-      .loc_0xF0
  bl        -0x1A6ED4
  lis       r3, 0x804D
  lis       r4, 0x804B
  addi      r0, r3, 0x2330
  lis       r3, 0x804F
  stw       r0, 0x0(r30)
  subi      r4, r4, 0x4678
  subi      r3, r3, 0x4200
  li        r0, 0
  stw       r4, 0x10(r30)
  stw       r3, 0x10(r30)
  stb       r0, 0x28(r30)
  stw       r0, 0x1C(r30)
  stw       r0, 0x14(r30)
  stb       r0, 0x28(r30)
  stw       r0, 0x20(r30)

.loc_0xF0:
  stw       r30, 0x184(r31)
  li        r3, 0x1C
  bl        -0x2AA9EC
  mr.       r4, r3
  beq-      .loc_0x124
  lis       r5, 0x804B
  lis       r3, 0x804D
  subi      r0, r5, 0x680
  li        r5, -0x1
  stw       r0, 0x0(r4)
  addi      r0, r3, 0x230C
  stw       r5, 0x18(r4)
  stw       r0, 0x0(r4)

.loc_0x124:
  lwz       r12, 0x0(r31)
  mr        r3, r31
  lwz       r12, 0x2F8(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  bl        0x2014
  mr        r3, r31
  bl        0x229C
  mr        r3, r31
  bl        0x27EC
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
 * Address:	802CE904
 * Size:	000004
 */
void Game::SnakeWhole::Obj::setInitialSetting( (Game::EnemyInitialParamBase *))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	802CE908
 * Size:	0000CC
 */
void Game::SnakeWhole::Obj::onInit( (Game::CreatureInitArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1CCEC4
  lwz       r3, -0x6980(r13)
  mr        r4, r31
  bl        -0x8CA90
  li        r0, 0x1
  li        r4, 0
  stb       r0, 0x2C0(r31)
  li        r0, -0x1
  lfs       f0, -0x1AF8(r2)
  mr        r3, r31
  stb       r4, 0x2C1(r31)
  stfs      f0, 0x2C4(r31)
  stw       r0, 0x2CC(r31)
  stw       r0, 0x2E4(r31)
  stfs      f0, 0x2C8(r31)
  bl        0x1FD8
  mr        r3, r31
  bl        0x21A0
  mr        r3, r31
  bl        0x2258
  mr        r3, r31
  bl        0x27C8
  li        r3, 0x1
  li        r0, 0
  stb       r3, 0x2C2(r31)
  mr        r3, r31
  stb       r0, 0x2C3(r31)
  bl        0x25AC
  lwz       r3, 0x2BC(r31)
  mr        r4, r31
  li        r5, 0x1
  li        r6, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1DC(r12)
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
 * Address:	802CE9D4
 * Size:	000050
 */
void Game::SnakeWhole::Obj::doUpdate(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  mr        r4, r31
  lwz       r3, 0x2BC(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  bl        0x7FC
  addi      r3, r31, 0x2D0
  bl        -0x1963E0
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802CEA24
 * Size:	000034
 */
void Game::SnakeWhole::Obj::doUpdateCommon(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1CBB24
  mr        r3, r31
  bl        0x23F8
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802CEA58
 * Size:	000034
 */
void Game::SnakeWhole::Obj::doAnimationUpdateAnimator(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1CBA74
  mr        r3, r31
  bl        0x1EE0
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802CEA8C
 * Size:	00003C
 */
void Game::SnakeWhole::Obj::doAnimationCullingOff(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1CBA20
  mr        r3, r31
  bl        0x213C
  mr        r3, r31
  bl        0x1EC8
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802CEAC8
 * Size:	000004
 */
void Game::SnakeWhole::Obj::doDirectDraw( (Graphics &))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	802CEACC
 * Size:	000020
 */
void Game::SnakeWhole::Obj::doDebugDraw( (Graphics &))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        -0x1C8C6C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802CEAEC
 * Size:	00004C
 */
void Game::SnakeWhole::Obj::setFSM( (Game::SnakeWhole::FSM *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r4, 0x2BC(r3)
  mr        r4, r31
  lwz       r3, 0x2BC(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  stw       r0, 0x2B4(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802CEB38
 * Size:	0000B0
 */
void Game::SnakeWhole::Obj::getShadowParam( (Game::ShadowParam &))
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
  lis       r3, 0x8049
  subi      r0, r3, 0x44B8
  lwz       r3, 0x174(r30)
  mr        r4, r0
  bl        0x170480
  bl        0x15AD38
  lfs       f4, 0x2C(r3)
  lfs       f2, 0x1C(r3)
  lfs       f0, 0xC(r3)
  lfs       f3, -0x1AF4(r2)
  stfs      f0, 0x0(r31)
  lfs       f1, -0x1AF8(r2)
  stfs      f2, 0x4(r31)
  lfs       f0, -0x1AF0(r2)
  stfs      f4, 0x8(r31)
  lfs       f2, 0x190(r30)
  fadds     f2, f3, f2
  stfs      f2, 0x4(r31)
  stfs      f1, 0xC(r31)
  stfs      f0, 0x10(r31)
  stfs      f1, 0x14(r31)
  lwz       r0, 0x1E4(r30)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0x88
  lfs       f0, -0x1AEC(r2)
  stfs      f0, 0x18(r31)
  b         .loc_0x90

.loc_0x88:
  lfs       f0, -0x1AE8(r2)
  stfs      f0, 0x18(r31)

.loc_0x90:
  lfs       f0, -0x1AE4(r2)
  stfs      f0, 0x1C(r31)
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
 * Address:	802CEBE8
 * Size:	000098
 */
void Game::SnakeWhole::Obj::damageCallBack( (Game::Creature *, float, CollPart *))
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
  cmplwi    r4, 0
  mr        r30, r3
  mr        r31, r5
  beq-      .loc_0x74
  mr        r3, r4
  lwz       r12, 0x0(r4)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x74
  cmplwi    r31, 0
  bne-      .loc_0x5C
  lfs       f0, -0x1AE0(r2)
  fmuls     f31, f31, f0

.loc_0x5C:
  fmr       f1, f31
  lfs       f2, -0x1AF0(r2)
  mr        r3, r30
  bl        -0x1C8C24
  li        r3, 0x1
  b         .loc_0x78

.loc_0x74:
  li        r3, 0

.loc_0x78:
  psq_l     f31,0x18(r1),0,0
  lwz       r0, 0x24(r1)
  lfd       f31, 0x10(r1)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	802CEC80
 * Size:	000020
 */
void Game::SnakeWhole::Obj::doStartStoneState(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        -0x1CBD98
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802CECA0
 * Size:	000048
 */
void Game::SnakeWhole::Obj::doFinishStoneState(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1CBDAC
  lfs       f1, -0x1AF0(r2)
  mr        r3, r31
  lfs       f2, -0x1ADC(r2)
  li        r4, 0
  lfs       f3, -0x1AF8(r2)
  lfs       f4, -0x1AD8(r2)
  bl        -0x1BBBB4
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802CECE8
 * Size:	000028
 */
void Game::SnakeWhole::Obj::startCarcassMotion(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0xD
  li        r5, 0
  stw       r0, 0x14(r1)
  bl        -0x1C9CF8
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802CED10
 * Size:	000020
 */
void Game::SnakeWhole::Obj::doStartMovie(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        0x279C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802CED30
 * Size:	000020
 */
void Game::SnakeWhole::Obj::doEndMovie(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        0x274C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802CED50
 * Size:	0000BC
 */
void Game::SnakeWhole::Obj::initMouthSlots(void)
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
  mr        r30, r3
  lis       r3, 0x8049
  subi      r31, r3, 0x44C8
  li        r4, 0x3
  addi      r3, r30, 0x2D0
  bl        -0x196828
  lwz       r5, 0x174(r30)
  addi      r3, r30, 0x2D0
  addi      r6, r31, 0x1C
  li        r4, 0
  bl        -0x196704
  lwz       r5, 0x174(r30)
  addi      r3, r30, 0x2D0
  addi      r6, r31, 0x28
  li        r4, 0x1
  bl        -0x196718
  lwz       r5, 0x174(r30)
  addi      r3, r30, 0x2D0
  addi      r6, r31, 0x34
  li        r4, 0x2
  bl        -0x19672C
  lfs       f31, -0x1AD4(r2)
  li        r31, 0
  b         .loc_0x90

.loc_0x7C:
  mr        r4, r31
  addi      r3, r30, 0x2D0
  bl        -0x19665C
  stfs      f31, 0x1C(r3)
  addi      r31, r31, 0x1

.loc_0x90:
  lwz       r0, 0x2D0(r30)
  cmpw      r31, r0
  blt+      .loc_0x7C
  psq_l     f31,0x18(r1),0,0
  lwz       r0, 0x24(r1)
  lfd       f31, 0x10(r1)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	802CEE0C
 * Size:	000058
 */
void getThrowupItemPosition__Q34Game10SnakeWhole3ObjFP10Vector3<float>(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r5, 0x8049
  stw       r0, 0x14(r1)
  subi      r0, r5, 0x44B8
  stw       r31, 0xC(r1)
  mr        r31, r4
  mr        r4, r0
  lwz       r3, 0x174(r3)
  bl        0x1701B4
  bl        0x15AA6C
  lfs       f2, 0x2C(r3)
  lfs       f1, 0x1C(r3)
  lfs       f0, 0xC(r3)
  stfs      f0, 0x0(r31)
  stfs      f1, 0x4(r31)
  stfs      f2, 0x8(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802CEE64
 * Size:	00003C
 */
void Game::SnakeWhole::Obj::isOutTerritory(void)
{
/*
.loc_0x0:
  lfs       f1, 0x194(r3)
  lfs       f0, 0x1A0(r3)
  lfs       f2, 0x18C(r3)
  fsubs     f3, f1, f0
  lfs       f1, 0x198(r3)
  lwz       r4, 0xC0(r3)
  fsubs     f2, f2, f1
  fmuls     f1, f3, f3
  lfs       f0, 0x35C(r4)
  fmuls     f0, f0, f0
  fmadds    f1, f2, f2, f1
  fcmpo     cr0, f1, f0
  mfcr      r0
  rlwinm    r3,r0,2,31,31
  blr
*/
}

/*
 * --INFO--
 * Address:	802CEEA0
 * Size:	00003C
 */
void Game::SnakeWhole::Obj::isInHomeRange(void)
{
/*
.loc_0x0:
  lfs       f1, 0x194(r3)
  lfs       f0, 0x1A0(r3)
  lfs       f2, 0x18C(r3)
  fsubs     f3, f1, f0
  lfs       f1, 0x198(r3)
  lwz       r4, 0xC0(r3)
  fsubs     f2, f2, f1
  fmuls     f1, f3, f3
  lfs       f0, 0x384(r4)
  fmuls     f0, f0, f0
  fmadds    f1, f2, f2, f1
  fcmpo     cr0, f1, f0
  mfcr      r0
  rlwinm    r3,r0,1,31,31
  blr
*/
}

/*
 * --INFO--
 * Address:	802CEEDC
 * Size:	0002AC
 */
void setJumpMove__Q34Game10SnakeWhole3ObjFR10Vector3<float>(void)
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
  mr        r31, r4
  mr        r4, r30
  addi      r3, r1, 0x14
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f5, 0x14(r1)
  lis       r3, 0x8051
  lfs       f3, 0x1C(r1)
  subi      r3, r3, 0x2E20
  lfs       f1, 0x0(r31)
  lfs       f0, 0x8(r31)
  lfs       f4, 0x18(r1)
  fsubs     f1, f1, f5
  fsubs     f2, f0, f3
  stfs      f5, 0x8(r1)
  stfs      f4, 0xC(r1)
  stfs      f3, 0x10(r1)
  bl        -0x299E40
  bl        0x142C84
  lwz       r12, 0x0(r30)
  fmr       f31, f1
  mr        r3, r30
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  fmr       f1, f31
  bl        0x142C8C
  lfs       f0, -0x1AF8(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0xAC
  fmr       f0, f1
  b         .loc_0xB0

.loc_0xAC:
  fneg      f0, f1

.loc_0xB0:
  lfs       f4, -0x1AD0(r2)
  fcmpo     cr0, f0, f4
  ble-      .loc_0x114
  lfs       f0, -0x1AF8(r2)
  fcmpu     cr0, f0, f1
  bne-      .loc_0xD0
  li        r0, 0
  b         .loc_0xE4

.loc_0xD0:
  fcmpo     cr0, f1, f0
  ble-      .loc_0xE0
  li        r0, 0x1
  b         .loc_0xE4

.loc_0xE0:
  li        r0, -0x1

.loc_0xE4:
  xoris     r3, r0, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x34(r1)
  lfd       f3, -0x1AC0(r2)
  stw       r0, 0x30(r1)
  lfs       f0, -0x1ACC(r2)
  lfd       f2, 0x30(r1)
  fsubs     f2, f2, f3
  fmuls     f2, f4, f2
  fdivs     f0, f2, f0
  stfs      f0, 0x2C8(r30)
  b         .loc_0x120

.loc_0x114:
  lfs       f0, -0x1ACC(r2)
  fdivs     f0, f1, f0
  stfs      f0, 0x2C8(r30)

.loc_0x120:
  fabs      f1, f1
  lfs       f0, -0x1AC8(r2)
  frsp      f1, f1
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x254
  lfs       f2, 0x0(r31)
  lfs       f0, 0x18C(r30)
  lfs       f1, -0x1AF8(r2)
  fsubs     f2, f2, f0
  lfs       f3, 0x8(r31)
  lfs       f0, 0x194(r30)
  fmuls     f4, f1, f1
  fsubs     f3, f3, f0
  stfs      f2, 0x20(r1)
  fmuls     f0, f2, f2
  stfs      f1, 0x24(r1)
  fmuls     f5, f3, f3
  fadds     f0, f0, f4
  stfs      f3, 0x28(r1)
  fadds     f0, f5, f0
  fcmpo     cr0, f0, f1
  ble-      .loc_0x198
  fmadds    f0, f2, f2, f4
  fadds     f4, f5, f0
  fcmpo     cr0, f4, f1
  ble-      .loc_0x19C
  fsqrte    f0, f4
  fmuls     f4, f0, f4
  b         .loc_0x19C

.loc_0x198:
  fmr       f4, f1

.loc_0x19C:
  lfs       f0, -0x1AF8(r2)
  fcmpo     cr0, f4, f0
  ble-      .loc_0x1D8
  lfs       f0, -0x1AF0(r2)
  lfs       f2, 0x20(r1)
  fdivs     f3, f0, f4
  lfs       f1, 0x24(r1)
  lfs       f0, 0x28(r1)
  fmuls     f2, f2, f3
  fmuls     f1, f1, f3
  fmuls     f0, f0, f3
  stfs      f2, 0x20(r1)
  stfs      f1, 0x24(r1)
  stfs      f0, 0x28(r1)
  b         .loc_0x1DC

.loc_0x1D8:
  fmr       f4, f0

.loc_0x1DC:
  lwz       r3, 0xC0(r30)
  fmr       f1, f4
  lfs       f0, 0x2E4(r3)
  fcmpo     cr0, f4, f0
  ble-      .loc_0x1F4
  fmr       f1, f0

.loc_0x1F4:
  lfs       f0, -0x1AC4(r2)
  mr        r3, r30
  lfs       f2, 0x20(r1)
  addi      r4, r1, 0x20
  fmuls     f3, f0, f1
  lfs       f1, 0x24(r1)
  lfs       f0, 0x28(r1)
  fmuls     f2, f2, f3
  fmuls     f1, f1, f3
  fmuls     f0, f0, f3
  stfs      f2, 0x20(r1)
  stfs      f1, 0x24(r1)
  stfs      f0, 0x28(r1)
  lwz       r12, 0x0(r30)
  lwz       r12, 0x68(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x20(r1)
  stfs      f0, 0x1D4(r30)
  lfs       f0, 0x24(r1)
  stfs      f0, 0x1D8(r30)
  lfs       f0, 0x28(r1)
  stfs      f0, 0x1DC(r30)
  b         .loc_0x28C

.loc_0x254:
  lwz       r12, 0x0(r30)
  lis       r4, 0x8051
  mr        r3, r30
  lwz       r12, 0x68(r12)
  addi      r4, r4, 0x41E4
  mtctr     r12
  bctrl     
  lis       r3, 0x8051
  lfsu      f0, 0x41E4(r3)
  stfs      f0, 0x1D4(r30)
  lfs       f0, 0x4(r3)
  stfs      f0, 0x1D8(r30)
  lfs       f0, 0x8(r3)
  stfs      f0, 0x1DC(r30)

.loc_0x28C:
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
 * Address:	802CF188
 * Size:	000078
 */
void Game::SnakeWhole::Obj::updateFace(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r12, 0x0(r3)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x2C8(r31)
  lfs       f0, -0x1AF8(r2)
  fadds     f1, f1, f2
  fcmpo     cr0, f1, f0
  bge-      .loc_0x44
  lfs       f0, -0x1AB8(r2)
  fadds     f1, f0, f1
  b         .loc_0x58

.loc_0x44:
  lfs       f0, -0x1AB8(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x58
  fsubs     f1, f1, f0

.loc_0x58:
  stfs      f1, 0x1FC(r31)
  lfs       f0, 0x1FC(r31)
  stfs      f0, 0x1A8(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802CF200
 * Size:	000080
 */
void Game::SnakeWhole::Obj::updateConstraint(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1C7E20
  cmpwi     r3, 0x5
  blt-      .loc_0x64
  lbz       r0, 0x2C1(r31)
  cmplwi    r0, 0
  bne-      .loc_0x64
  lwz       r0, 0xC8(r31)
  cmplwi    r0, 0
  beq-      .loc_0x64
  lfs       f1, 0xD0(r31)
  lfs       f0, -0x1AB4(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x58
  lwz       r0, 0x1E0(r31)
  ori       r0, r0, 0x400
  stw       r0, 0x1E0(r31)
  b         .loc_0x6C

.loc_0x58:
  mr        r3, r31
  bl        -0x1C7AF0
  b         .loc_0x6C

.loc_0x64:
  mr        r3, r31
  bl        -0x1C7AFC

.loc_0x6C:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802CF280
 * Size:	000530
 */
void Game::SnakeWhole::Obj::appearNearByTarget( (Game::Creature *))
{
/*
.loc_0x0:
  stwu      r1, -0xE0(r1)
  mflr      r0
  stw       r0, 0xE4(r1)
  stfd      f31, 0xD0(r1)
  psq_st    f31,0xD8(r1),0,0
  stfd      f30, 0xC0(r1)
  psq_st    f30,0xC8(r1),0,0
  stfd      f29, 0xB0(r1)
  psq_st    f29,0xB8(r1),0,0
  stfd      f28, 0xA0(r1)
  psq_st    f28,0xA8(r1),0,0
  stw       r31, 0x9C(r1)
  stw       r30, 0x98(r1)
  lwz       r12, 0x0(r4)
  mr        r30, r3
  addi      r3, r1, 0x8
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f31, 0x8(r1)
  lfs       f30, 0xC(r1)
  lfs       f29, 0x10(r1)
  bl        -0x205D38
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x7C(r1)
  lfd       f3, -0x1AC0(r2)
  stw       r0, 0x78(r1)
  lfs       f2, -0x1AB8(r2)
  lfd       f0, 0x78(r1)
  lfs       f1, -0x1AB0(r2)
  fsubs     f3, f0, f3
  lfs       f0, -0x1AF8(r2)
  fmuls     f2, f2, f3
  fdivs     f3, f2, f1
  fmr       f28, f3
  fmr       f1, f3
  fcmpo     cr0, f3, f0
  bge-      .loc_0xA0
  fneg      f1, f3

.loc_0xA0:
  lfs       f2, -0x1AAC(r2)
  lis       r3, 0x8050
  lfs       f0, -0x1AF8(r2)
  addi      r3, r3, 0x71A0
  fmuls     f1, f1, f2
  addi      r31, r3, 0x4
  fcmpo     cr0, f3, f0
  fctiwz    f0, f1
  stfd      f0, 0x80(r1)
  lwz       r0, 0x84(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r31, r0
  fneg      f5, f0
  bge-      .loc_0xFC
  lfs       f0, -0x1AA8(r2)
  fmuls     f0, f3, f0
  fctiwz    f0, f0
  stfd      f0, 0x88(r1)
  lwz       r0, 0x8C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0
  fneg      f0, f0
  b         .loc_0x114

.loc_0xFC:
  fmuls     f0, f3, f2
  fctiwz    f0, f0
  stfd      f0, 0x90(r1)
  lwz       r0, 0x94(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0

.loc_0x114:
  fneg      f3, f0
  lfs       f2, -0x1AF8(r2)
  lfs       f1, -0x1AA4(r2)
  frsp      f0, f5
  stfs      f2, 0x18(r1)
  frsp      f4, f3
  fmuls     f2, f2, f1
  stfs      f3, 0x14(r1)
  fmuls     f3, f0, f1
  fmuls     f4, f4, f1
  stfs      f5, 0x1C(r1)
  fadds     f1, f2, f30
  stfs      f2, 0x18(r1)
  fadds     f0, f3, f29
  fadds     f2, f4, f31
  stfs      f4, 0x14(r1)
  stfs      f3, 0x1C(r1)
  stfs      f2, 0x14(r1)
  stfs      f1, 0x18(r1)
  stfs      f0, 0x1C(r1)
  lfs       f3, 0x1A0(r30)
  lfs       f4, 0x198(r30)
  fsubs     f1, f3, f0
  lwz       r3, 0xC0(r30)
  fsubs     f2, f4, f2
  lfs       f0, 0x35C(r3)
  fmuls     f1, f1, f1
  fmuls     f0, f0, f0
  fmadds    f1, f2, f2, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x2C0
  fsubs     f1, f31, f4
  lis       r3, 0x8051
  fsubs     f2, f29, f3
  subi      r3, r3, 0x2E20
  bl        -0x29A318
  fmr       f28, f1
  bl        -0x205E88
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x94(r1)
  lfd       f1, -0x1AC0(r2)
  stw       r0, 0x90(r1)
  lfs       f3, -0x1AA0(r2)
  lfd       f0, 0x90(r1)
  lfs       f2, -0x1AB0(r2)
  fsubs     f4, f0, f1
  lfs       f1, -0x1AD0(r2)
  lfs       f0, -0x1AF8(r2)
  fmuls     f3, f3, f4
  fdivs     f2, f3, f2
  fsubs     f1, f2, f1
  fadds     f28, f28, f1
  fmr       f1, f28
  fcmpo     cr0, f28, f0
  bge-      .loc_0x1F8
  fneg      f1, f28

.loc_0x1F8:
  lfs       f2, -0x1AAC(r2)
  lfs       f0, -0x1AF8(r2)
  fmuls     f1, f1, f2
  fcmpo     cr0, f28, f0
  fctiwz    f0, f1
  stfd      f0, 0x88(r1)
  lwz       r0, 0x8C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r31, r0
  fneg      f5, f0
  bge-      .loc_0x250
  lfs       f0, -0x1AA8(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f28, f0
  fctiwz    f0, f0
  stfd      f0, 0x80(r1)
  lwz       r0, 0x84(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0
  fneg      f0, f0
  b         .loc_0x270

.loc_0x250:
  fmuls     f0, f28, f2
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fctiwz    f0, f0
  stfd      f0, 0x78(r1)
  lwz       r0, 0x7C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0

.loc_0x270:
  fneg      f3, f0
  lfs       f2, -0x1AF8(r2)
  lfs       f1, -0x1AA4(r2)
  frsp      f0, f5
  stfs      f2, 0x18(r1)
  frsp      f4, f3
  fmuls     f2, f2, f1
  stfs      f3, 0x14(r1)
  fmuls     f3, f0, f1
  fmuls     f4, f4, f1
  stfs      f5, 0x1C(r1)
  fadds     f1, f2, f30
  stfs      f2, 0x18(r1)
  fadds     f0, f3, f29
  fadds     f2, f4, f31
  stfs      f4, 0x14(r1)
  stfs      f3, 0x1C(r1)
  stfs      f2, 0x14(r1)
  stfs      f1, 0x18(r1)
  stfs      f0, 0x1C(r1)

.loc_0x2C0:
  li        r0, 0x1
  li        r5, 0
  lfs       f4, -0x1AF8(r2)
  addi      r4, r1, 0x4C
  stb       r0, 0x58(r1)
  lfs       f6, -0x1A9C(r2)
  lfs       f5, -0x1A98(r2)
  lfs       f3, -0x1AF0(r2)
  lfs       f2, 0x14(r1)
  lfs       f1, 0x18(r1)
  lfs       f0, 0x1C(r1)
  stw       r5, 0x60(r1)
  lwz       r3, -0x6CF8(r13)
  stfs      f6, 0x64(r1)
  stfs      f5, 0x68(r1)
  stw       r5, 0x5C(r1)
  stfs      f4, 0x6C(r1)
  stfs      f3, 0x70(r1)
  stfs      f4, 0x74(r1)
  stb       r5, 0x59(r1)
  stfs      f2, 0x4C(r1)
  stfs      f1, 0x50(r1)
  stfs      f0, 0x54(r1)
  stb       r5, 0x58(r1)
  lwz       r12, 0x4(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x60(r1)
  cmplwi    r0, 0
  beq-      .loc_0x348
  lfs       f0, 0x64(r1)
  stfs      f0, 0x18(r1)
  b         .loc_0x4D4

.loc_0x348:
  lfs       f1, 0x198(r30)
  lis       r3, 0x8051
  lfs       f0, 0x1A0(r30)
  subi      r3, r3, 0x2E20
  fsubs     f1, f31, f1
  fsubs     f2, f29, f0
  bl        -0x29A4D8
  fmr       f2, f1
  lfs       f0, -0x1AF8(r2)
  fmr       f28, f1
  fcmpo     cr0, f2, f0
  bge-      .loc_0x37C
  fneg      f2, f2

.loc_0x37C:
  lfs       f3, -0x1AAC(r2)
  lfs       f0, -0x1AF8(r2)
  fmuls     f2, f2, f3
  fcmpo     cr0, f1, f0
  fctiwz    f0, f2
  stfd      f0, 0x90(r1)
  lwz       r0, 0x94(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r31, r0
  fneg      f5, f0
  bge-      .loc_0x3D4
  lfs       f0, -0x1AA8(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x88(r1)
  lwz       r0, 0x8C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0
  fneg      f0, f0
  b         .loc_0x3F4

.loc_0x3D4:
  fmuls     f0, f1, f3
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fctiwz    f0, f0
  stfd      f0, 0x80(r1)
  lwz       r0, 0x84(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0

.loc_0x3F4:
  fneg      f4, f0
  lfs       f8, -0x1AF8(r2)
  li        r5, 0
  lfs       f1, -0x1AA4(r2)
  frsp      f0, f5
  li        r0, 0x1
  frsp      f3, f4
  stb       r0, 0x2C(r1)
  fmuls     f7, f8, f1
  lfs       f2, -0x1A9C(r2)
  fmuls     f6, f0, f1
  stfs      f8, 0x18(r1)
  fmuls     f0, f3, f1
  stfs      f4, 0x14(r1)
  fadds     f4, f7, f30
  lfs       f1, -0x1A98(r2)
  stfs      f5, 0x1C(r1)
  fadds     f3, f6, f29
  fadds     f5, f0, f31
  stfs      f0, 0x14(r1)
  lfs       f0, -0x1AF0(r2)
  addi      r4, r1, 0x20
  stfs      f7, 0x18(r1)
  lwz       r3, -0x6CF8(r13)
  stfs      f6, 0x1C(r1)
  stfs      f5, 0x14(r1)
  stfs      f4, 0x18(r1)
  stfs      f3, 0x1C(r1)
  stw       r5, 0x34(r1)
  stfs      f2, 0x38(r1)
  stfs      f1, 0x3C(r1)
  stw       r5, 0x30(r1)
  stfs      f8, 0x40(r1)
  stfs      f0, 0x44(r1)
  stfs      f8, 0x48(r1)
  stb       r5, 0x2D(r1)
  stfs      f5, 0x20(r1)
  stfs      f4, 0x24(r1)
  stfs      f3, 0x28(r1)
  stb       r5, 0x2C(r1)
  lwz       r12, 0x4(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x34(r1)
  cmplwi    r0, 0
  beq-      .loc_0x4BC
  lfs       f0, 0x38(r1)
  stfs      f0, 0x18(r1)
  b         .loc_0x4D4

.loc_0x4BC:
  lfs       f0, 0x198(r30)
  stfs      f0, 0x14(r1)
  lfs       f0, 0x19C(r30)
  stfs      f0, 0x18(r1)
  lfs       f0, 0x1A0(r30)
  stfs      f0, 0x1C(r1)

.loc_0x4D4:
  mr        r3, r30
  addi      r4, r1, 0x14
  lwz       r12, 0x0(r30)
  lwz       r12, 0x70(r12)
  mtctr     r12
  bctrl     
  stfs      f28, 0x1FC(r30)
  lfs       f0, 0x1FC(r30)
  stfs      f0, 0x1A8(r30)
  psq_l     f31,0xD8(r1),0,0
  lfd       f31, 0xD0(r1)
  psq_l     f30,0xC8(r1),0,0
  lfd       f30, 0xC0(r1)
  psq_l     f29,0xB8(r1),0,0
  lfd       f29, 0xB0(r1)
  psq_l     f28,0xA8(r1),0,0
  lfd       f28, 0xA0(r1)
  lwz       r31, 0x9C(r1)
  lwz       r0, 0xE4(r1)
  lwz       r30, 0x98(r1)
  mtlr      r0
  addi      r1, r1, 0xE0
  blr
*/
}

/*
 * --INFO--
 * Address:	802CF7B0
 * Size:	00020C
 */
void Game::SnakeWhole::Obj::setAttackPosition(void)
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
  stmw      r27, 0x4C(r1)
  mr        r31, r3
  lfs       f0, -0x1AF8(r2)
  lfs       f3, 0x1FC(r3)
  fmr       f1, f3
  fcmpo     cr0, f3, f0
  bge-      .loc_0x44
  fneg      f1, f3

.loc_0x44:
  lfs       f2, -0x1AAC(r2)
  lis       r3, 0x8050
  lfs       f0, -0x1AF8(r2)
  addi      r4, r3, 0x71A0
  fmuls     f1, f1, f2
  fcmpo     cr0, f3, f0
  fctiwz    f0, f1
  stfd      f0, 0x30(r1)
  lwz       r0, 0x34(r1)
  rlwinm    r0,r0,3,18,28
  add       r3, r4, r0
  lfs       f31, 0x4(r3)
  bge-      .loc_0x9C
  lfs       f0, -0x1AA8(r2)
  fmuls     f0, f3, f0
  fctiwz    f0, f0
  stfd      f0, 0x38(r1)
  lwz       r0, 0x3C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r4, r0
  fneg      f30, f0
  b         .loc_0xB4

.loc_0x9C:
  fmuls     f0, f3, f2
  fctiwz    f0, f0
  stfd      f0, 0x40(r1)
  lwz       r0, 0x44(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f30, r4, r0

.loc_0xB4:
  lis       r4, 0x8049
  lwzu      r12, -0x4488(r4)
  lis       r3, 0x8049
  fneg      f29, f31
  subi      r7, r3, 0x4474
  lwz       r11, 0x4(r4)
  lwz       r10, 0x8(r4)
  mr        r28, r31
  lwz       r9, 0xC(r4)
  lwz       r8, 0x10(r4)
  addi      r30, r1, 0x1C
  lwz       r6, 0x0(r7)
  addi      r29, r1, 0x8
  lwz       r5, 0x4(r7)
  li        r27, 0
  lwz       r4, 0x8(r7)
  lwz       r3, 0xC(r7)
  lwz       r0, 0x10(r7)
  stw       r12, 0x1C(r1)
  stw       r11, 0x20(r1)
  stw       r10, 0x24(r1)
  stw       r9, 0x28(r1)
  stw       r8, 0x2C(r1)
  stw       r6, 0x8(r1)
  stw       r5, 0xC(r1)
  stw       r4, 0x10(r1)
  stw       r3, 0x14(r1)
  stw       r0, 0x18(r1)

.loc_0x124:
  lfs       f0, 0x18C(r31)
  addi      r4, r28, 0x2E8
  lfs       f1, 0x0(r30)
  stfs      f0, 0x2E8(r28)
  lfs       f2, 0x0(r29)
  fmuls     f3, f30, f1
  lfs       f0, 0x190(r31)
  fmuls     f5, f31, f1
  lfs       f4, -0x1AF8(r2)
  fmuls     f6, f29, f2
  stfs      f0, 0x2EC(r28)
  fmr       f7, f4
  lfs       f0, 0x194(r31)
  fmuls     f4, f4, f1
  fmuls     f1, f30, f2
  stfs      f0, 0x2F0(r28)
  fmuls     f7, f7, f2
  lfs       f0, 0x2E8(r28)
  fadds     f0, f0, f3
  stfs      f0, 0x2E8(r28)
  lfs       f0, 0x2EC(r28)
  fadds     f0, f0, f4
  stfs      f0, 0x2EC(r28)
  lfs       f0, 0x2F0(r28)
  fadds     f0, f0, f5
  stfs      f0, 0x2F0(r28)
  lfs       f0, 0x2E8(r28)
  fadds     f0, f0, f6
  stfs      f0, 0x2E8(r28)
  lfs       f0, 0x2EC(r28)
  fadds     f0, f0, f7
  stfs      f0, 0x2EC(r28)
  lfs       f0, 0x2F0(r28)
  fadds     f0, f0, f1
  stfs      f0, 0x2F0(r28)
  lwz       r3, -0x6CF8(r13)
  lwz       r12, 0x4(r3)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  addi      r27, r27, 0x1
  stfs      f1, 0x2EC(r28)
  cmpwi     r27, 0x5
  addi      r30, r30, 0x4
  addi      r29, r29, 0x4
  addi      r28, r28, 0xC
  blt+      .loc_0x124
  psq_l     f31,0x88(r1),0,0
  lfd       f31, 0x80(r1)
  psq_l     f30,0x78(r1),0,0
  lfd       f30, 0x70(r1)
  psq_l     f29,0x68(r1),0,0
  lfd       f29, 0x60(r1)
  lmw       r27, 0x4C(r1)
  lwz       r0, 0x94(r1)
  mtlr      r0
  addi      r1, r1, 0x90
  blr
*/
}

/*
 * --INFO--
 * Address:	802CF9BC
 * Size:	0005F4
 */
void Game::SnakeWhole::Obj::getAttackPiki( (int))
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
  stmw      r19, 0xCC(r1)
  cmpwi     r4, 0x5
  lis       r5, 0x8049
  mr        r28, r3
  li        r30, 0
  subi      r31, r5, 0x44C8
  li        r29, 0x5
  bge-      .loc_0x64
  mr        r30, r4
  addi      r29, r4, 0x1

.loc_0x64:
  mr        r4, r28
  addi      r3, r1, 0x14
  lwz       r12, 0x0(r28)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f3, 0x1FC(r28)
  lfs       f0, -0x1AF8(r2)
  fmr       f1, f3
  lfs       f28, 0x14(r1)
  fcmpo     cr0, f3, f0
  lfs       f27, 0x18(r1)
  lfs       f26, 0x1C(r1)
  bge-      .loc_0xA0
  fneg      f1, f3

.loc_0xA0:
  lfs       f2, -0x1AAC(r2)
  lis       r3, 0x8050
  lfs       f0, -0x1AF8(r2)
  addi      r4, r3, 0x71A0
  fmuls     f1, f1, f2
  fcmpo     cr0, f3, f0
  fctiwz    f0, f1
  stfd      f0, 0xA8(r1)
  lwz       r0, 0xAC(r1)
  rlwinm    r0,r0,3,18,28
  add       r3, r4, r0
  lfs       f30, 0x4(r3)
  bge-      .loc_0xF8
  lfs       f0, -0x1AA8(r2)
  fmuls     f0, f3, f0
  fctiwz    f0, f0
  stfd      f0, 0xB0(r1)
  lwz       r0, 0xB4(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r4, r0
  fneg      f29, f0
  b         .loc_0x110

.loc_0xF8:
  fmuls     f0, f3, f2
  fctiwz    f0, f0
  stfd      f0, 0xB8(r1)
  lwz       r0, 0xBC(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f29, r4, r0

.loc_0x110:
  lwz       r0, 0xB8(r31)
  fneg      f31, f30
  lwz       r11, 0xBC(r31)
  lwz       r10, 0xC0(r31)
  lwz       r9, 0xC4(r31)
  lwz       r8, 0xC8(r31)
  lwz       r7, 0xCC(r31)
  lwz       r6, 0xD0(r31)
  lwz       r5, 0xD4(r31)
  lwz       r4, 0xD8(r31)
  lwz       r3, 0xDC(r31)
  lfs       f1, 0x2EC(r28)
  lfs       f0, 0x2F8(r28)
  lfs       f2, 0x304(r28)
  fsubs     f8, f1, f27
  lfs       f1, 0x310(r28)
  fsubs     f6, f0, f27
  lfs       f0, 0x31C(r28)
  fsubs     f12, f2, f27
  stw       r0, 0x44(r1)
  lwz       r0, 0x68(r31)
  fsubs     f11, f1, f27
  stw       r11, 0x48(r1)
  fsubs     f10, f0, f27
  lfs       f0, 0x44(r1)
  stw       r10, 0x4C(r1)
  lfs       f1, 0x48(r1)
  fadds     f9, f0, f8
  stw       r9, 0x50(r1)
  lfs       f0, 0x4C(r1)
  fadds     f7, f1, f6
  stw       r8, 0x54(r1)
  lfs       f1, 0x50(r1)
  fadds     f5, f0, f12
  stw       r7, 0x30(r1)
  lfs       f0, 0x54(r1)
  fadds     f3, f1, f11
  stw       r6, 0x34(r1)
  lfs       f4, 0x30(r1)
  fadds     f1, f0, f10
  stw       r5, 0x38(r1)
  lfs       f2, 0x34(r1)
  fadds     f8, f4, f8
  stw       r4, 0x3C(r1)
  lfs       f0, 0x38(r1)
  fadds     f6, f2, f6
  stw       r3, 0x40(r1)
  lfs       f2, 0x3C(r1)
  fadds     f4, f0, f12
  lfs       f0, 0x40(r1)
  fadds     f2, f2, f11
  lwz       r19, 0x6C(r31)
  fadds     f0, f0, f10
  lwz       r20, 0x70(r31)
  lwz       r21, 0x74(r31)
  lwz       r22, 0x78(r31)
  lwz       r23, 0x7C(r31)
  lwz       r24, 0x80(r31)
  lwz       r25, 0x84(r31)
  lwz       r26, 0x88(r31)
  lwz       r27, 0x8C(r31)
  lwz       r12, 0x90(r31)
  lwz       r11, 0x94(r31)
  lwz       r10, 0x98(r31)
  lwz       r9, 0x9C(r31)
  lwz       r8, 0xA0(r31)
  lwz       r7, 0xA4(r31)
  lwz       r6, 0xA8(r31)
  lwz       r5, 0xAC(r31)
  lwz       r4, 0xB0(r31)
  lwz       r3, 0xB4(r31)
  stw       r0, 0x94(r1)
  stw       r19, 0x98(r1)
  stw       r20, 0x9C(r1)
  stw       r21, 0xA0(r1)
  stw       r22, 0xA4(r1)
  stw       r23, 0x80(r1)
  stw       r24, 0x84(r1)
  stw       r25, 0x88(r1)
  stw       r26, 0x8C(r1)
  stw       r27, 0x90(r1)
  stw       r12, 0x6C(r1)
  stw       r11, 0x70(r1)
  stw       r10, 0x74(r1)
  stw       r9, 0x78(r1)
  stw       r8, 0x7C(r1)
  stw       r7, 0x58(r1)
  stw       r6, 0x5C(r1)
  stw       r5, 0x60(r1)
  stw       r4, 0x64(r1)
  stw       r3, 0x68(r1)
  stfs      f9, 0x44(r1)
  stfs      f8, 0x30(r1)
  stfs      f7, 0x48(r1)
  stfs      f6, 0x34(r1)
  stfs      f5, 0x4C(r1)
  stfs      f4, 0x38(r1)
  stfs      f3, 0x50(r1)
  stfs      f2, 0x3C(r1)
  stfs      f1, 0x54(r1)
  stfs      f0, 0x40(r1)
  li        r0, 0
  lwz       r3, -0x6D0C(r13)
  lis       r4, 0x804B
  stw       r0, 0x2C(r1)
  subi      r4, r4, 0x4364
  cmplwi    r0, 0
  stw       r4, 0x20(r1)
  stw       r0, 0x24(r1)
  stw       r3, 0x28(r1)
  bne-      .loc_0x2E4
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x24(r1)
  b         .loc_0x58C

.loc_0x2E4:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x24(r1)
  b         .loc_0x350

.loc_0x2FC:
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
  bne-      .loc_0x58C
  lwz       r3, 0x28(r1)
  lwz       r4, 0x24(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x24(r1)

.loc_0x350:
  lwz       r12, 0x20(r1)
  addi      r3, r1, 0x20
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x2FC
  b         .loc_0x58C

.loc_0x370:
  lwz       r3, 0x28(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  mr        r19, r3
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x4D0
  mr        r3, r19
  lwz       r12, 0x0(r19)
  lwz       r12, 0x1C0(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x4D0
  mr        r3, r19
  bl        -0x1307F4
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x4D0
  mr        r4, r19
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r19)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0xC(r1)
  rlwinm    r9,r30,2,0,29
  lfs       f1, 0x8(r1)
  addi      r3, r1, 0x94
  fsubs     f4, f0, f27
  lfs       f0, -0x1AF8(r2)
  lfs       f2, 0x10(r1)
  addi      r4, r1, 0x80
  addi      r5, r1, 0x6C
  addi      r6, r1, 0x58
  fsubs     f3, f1, f28
  addi      r7, r1, 0x44
  fmuls     f0, f0, f4
  addi      r8, r1, 0x30
  fsubs     f2, f2, f26
  sub       r0, r29, r30
  fmadds    f1, f29, f3, f0
  mr        r10, r30
  fmadds    f0, f31, f3, f0
  add       r3, r3, r9
  add       r4, r4, r9
  add       r5, r5, r9
  fmadds    f1, f30, f2, f1
  add       r6, r6, r9
  fmadds    f2, f29, f2, f0
  add       r7, r7, r9
  add       r8, r8, r9
  mtctr     r0
  cmpw      r30, r29
  bge-      .loc_0x4D0

.loc_0x45C:
  lfs       f0, 0x0(r3)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x4B0
  lfs       f0, 0x0(r4)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x4B0
  lfs       f0, 0x0(r5)
  fcmpo     cr0, f2, f0
  bge-      .loc_0x4B0
  lfs       f0, 0x0(r6)
  fcmpo     cr0, f2, f0
  ble-      .loc_0x4B0
  lfs       f0, 0x0(r7)
  fcmpo     cr0, f4, f0
  bge-      .loc_0x4B0
  lfs       f0, 0x0(r8)
  fcmpo     cr0, f4, f0
  ble-      .loc_0x4B0
  stw       r10, 0x2E4(r28)
  mr        r3, r19
  b         .loc_0x5B0

.loc_0x4B0:
  addi      r3, r3, 0x4
  addi      r4, r4, 0x4
  addi      r5, r5, 0x4
  addi      r6, r6, 0x4
  addi      r7, r7, 0x4
  addi      r8, r8, 0x4
  addi      r10, r10, 0x1
  bdnz+     .loc_0x45C

.loc_0x4D0:
  lwz       r0, 0x2C(r1)
  cmplwi    r0, 0
  bne-      .loc_0x4FC
  lwz       r3, 0x28(r1)
  lwz       r4, 0x24(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x24(r1)
  b         .loc_0x58C

.loc_0x4FC:
  lwz       r3, 0x28(r1)
  lwz       r4, 0x24(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x24(r1)
  b         .loc_0x570

.loc_0x51C:
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
  bne-      .loc_0x58C
  lwz       r3, 0x28(r1)
  lwz       r4, 0x24(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x24(r1)

.loc_0x570:
  lwz       r12, 0x20(r1)
  addi      r3, r1, 0x20
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x51C

.loc_0x58C:
  lwz       r3, 0x28(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x24(r1)
  cmplw     r4, r3
  bne+      .loc_0x370
  li        r3, 0

.loc_0x5B0:
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
  lmw       r19, 0xCC(r1)
  lwz       r0, 0x164(r1)
  mtlr      r0
  addi      r1, r1, 0x160
  blr
*/
}

/*
 * --INFO--
 * Address:	802CFFB0
 * Size:	0005C8
 */
void Game::SnakeWhole::Obj::getAttackNavi( (int))
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
  stmw      r19, 0xCC(r1)
  cmpwi     r4, 0x5
  lis       r5, 0x8049
  mr        r28, r3
  li        r30, 0
  subi      r31, r5, 0x44C8
  li        r29, 0x5
  bge-      .loc_0x64
  mr        r30, r4
  addi      r29, r4, 0x1

.loc_0x64:
  mr        r4, r28
  addi      r3, r1, 0x14
  lwz       r12, 0x0(r28)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f3, 0x1FC(r28)
  lfs       f0, -0x1AF8(r2)
  fmr       f1, f3
  lfs       f28, 0x14(r1)
  fcmpo     cr0, f3, f0
  lfs       f27, 0x18(r1)
  lfs       f26, 0x1C(r1)
  bge-      .loc_0xA0
  fneg      f1, f3

.loc_0xA0:
  lfs       f2, -0x1AAC(r2)
  lis       r3, 0x8050
  lfs       f0, -0x1AF8(r2)
  addi      r4, r3, 0x71A0
  fmuls     f1, f1, f2
  fcmpo     cr0, f3, f0
  fctiwz    f0, f1
  stfd      f0, 0xA8(r1)
  lwz       r0, 0xAC(r1)
  rlwinm    r0,r0,3,18,28
  add       r3, r4, r0
  lfs       f30, 0x4(r3)
  bge-      .loc_0xF8
  lfs       f0, -0x1AA8(r2)
  fmuls     f0, f3, f0
  fctiwz    f0, f0
  stfd      f0, 0xB0(r1)
  lwz       r0, 0xB4(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r4, r0
  fneg      f29, f0
  b         .loc_0x110

.loc_0xF8:
  fmuls     f0, f3, f2
  fctiwz    f0, f0
  stfd      f0, 0xB8(r1)
  lwz       r0, 0xBC(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f29, r4, r0

.loc_0x110:
  lwz       r0, 0x130(r31)
  fneg      f31, f30
  lwz       r11, 0x134(r31)
  lwz       r10, 0x138(r31)
  lwz       r9, 0x13C(r31)
  lwz       r8, 0x140(r31)
  lwz       r7, 0x144(r31)
  lwz       r6, 0x148(r31)
  lwz       r5, 0x14C(r31)
  lwz       r4, 0x150(r31)
  lwz       r3, 0x154(r31)
  lfs       f1, 0x2EC(r28)
  lfs       f0, 0x2F8(r28)
  lfs       f2, 0x304(r28)
  fsubs     f8, f1, f27
  lfs       f1, 0x310(r28)
  fsubs     f6, f0, f27
  lfs       f0, 0x31C(r28)
  fsubs     f12, f2, f27
  stw       r0, 0x44(r1)
  lwz       r0, 0xE0(r31)
  fsubs     f11, f1, f27
  stw       r11, 0x48(r1)
  fsubs     f10, f0, f27
  lfs       f0, 0x44(r1)
  stw       r10, 0x4C(r1)
  lfs       f1, 0x48(r1)
  fadds     f9, f0, f8
  stw       r9, 0x50(r1)
  lfs       f0, 0x4C(r1)
  fadds     f7, f1, f6
  stw       r8, 0x54(r1)
  lfs       f1, 0x50(r1)
  fadds     f5, f0, f12
  stw       r7, 0x30(r1)
  lfs       f0, 0x54(r1)
  fadds     f3, f1, f11
  stw       r6, 0x34(r1)
  lfs       f4, 0x30(r1)
  fadds     f1, f0, f10
  stw       r5, 0x38(r1)
  lfs       f2, 0x34(r1)
  fadds     f8, f4, f8
  stw       r4, 0x3C(r1)
  lfs       f0, 0x38(r1)
  fadds     f6, f2, f6
  stw       r3, 0x40(r1)
  lfs       f2, 0x3C(r1)
  fadds     f4, f0, f12
  lfs       f0, 0x40(r1)
  fadds     f2, f2, f11
  lwz       r19, 0xE4(r31)
  fadds     f0, f0, f10
  lwz       r20, 0xE8(r31)
  lwz       r21, 0xEC(r31)
  lwz       r22, 0xF0(r31)
  lwz       r23, 0xF4(r31)
  lwz       r24, 0xF8(r31)
  lwz       r25, 0xFC(r31)
  lwz       r26, 0x100(r31)
  lwz       r27, 0x104(r31)
  lwz       r12, 0x108(r31)
  lwz       r11, 0x10C(r31)
  lwz       r10, 0x110(r31)
  lwz       r9, 0x114(r31)
  lwz       r8, 0x118(r31)
  lwz       r7, 0x11C(r31)
  lwz       r6, 0x120(r31)
  lwz       r5, 0x124(r31)
  lwz       r4, 0x128(r31)
  lwz       r3, 0x12C(r31)
  stw       r0, 0x94(r1)
  stw       r19, 0x98(r1)
  stw       r20, 0x9C(r1)
  stw       r21, 0xA0(r1)
  stw       r22, 0xA4(r1)
  stw       r23, 0x80(r1)
  stw       r24, 0x84(r1)
  stw       r25, 0x88(r1)
  stw       r26, 0x8C(r1)
  stw       r27, 0x90(r1)
  stw       r12, 0x6C(r1)
  stw       r11, 0x70(r1)
  stw       r10, 0x74(r1)
  stw       r9, 0x78(r1)
  stw       r8, 0x7C(r1)
  stw       r7, 0x58(r1)
  stw       r6, 0x5C(r1)
  stw       r5, 0x60(r1)
  stw       r4, 0x64(r1)
  stw       r3, 0x68(r1)
  stfs      f9, 0x44(r1)
  stfs      f8, 0x30(r1)
  stfs      f7, 0x48(r1)
  stfs      f6, 0x34(r1)
  stfs      f5, 0x4C(r1)
  stfs      f4, 0x38(r1)
  stfs      f3, 0x50(r1)
  stfs      f2, 0x3C(r1)
  stfs      f1, 0x54(r1)
  stfs      f0, 0x40(r1)
  li        r0, 0
  lwz       r3, -0x6D20(r13)
  lis       r4, 0x804B
  stw       r0, 0x2C(r1)
  subi      r4, r4, 0x434C
  cmplwi    r0, 0
  stw       r4, 0x20(r1)
  stw       r0, 0x24(r1)
  stw       r3, 0x28(r1)
  bne-      .loc_0x2E4
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x24(r1)
  b         .loc_0x560

.loc_0x2E4:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x24(r1)
  b         .loc_0x350

.loc_0x2FC:
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
  bne-      .loc_0x560
  lwz       r3, 0x28(r1)
  lwz       r4, 0x24(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x24(r1)

.loc_0x350:
  lwz       r12, 0x20(r1)
  addi      r3, r1, 0x20
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x2FC
  b         .loc_0x560

.loc_0x370:
  lwz       r3, 0x28(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  mr        r19, r3
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x4A4
  mr        r4, r19
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r19)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0xC(r1)
  rlwinm    r9,r30,2,0,29
  lfs       f1, 0x8(r1)
  addi      r3, r1, 0x94
  fsubs     f4, f0, f27
  lfs       f0, -0x1AF8(r2)
  lfs       f2, 0x10(r1)
  addi      r4, r1, 0x80
  addi      r5, r1, 0x6C
  addi      r6, r1, 0x58
  fsubs     f3, f1, f28
  addi      r7, r1, 0x44
  fmuls     f0, f0, f4
  addi      r8, r1, 0x30
  fsubs     f2, f2, f26
  sub       r0, r29, r30
  fmadds    f1, f29, f3, f0
  mr        r10, r30
  fmadds    f0, f31, f3, f0
  add       r3, r3, r9
  add       r4, r4, r9
  add       r5, r5, r9
  fmadds    f1, f30, f2, f1
  add       r6, r6, r9
  fmadds    f2, f29, f2, f0
  add       r7, r7, r9
  add       r8, r8, r9
  mtctr     r0
  cmpw      r30, r29
  bge-      .loc_0x4A4

.loc_0x430:
  lfs       f0, 0x0(r3)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x484
  lfs       f0, 0x0(r4)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x484
  lfs       f0, 0x0(r5)
  fcmpo     cr0, f2, f0
  bge-      .loc_0x484
  lfs       f0, 0x0(r6)
  fcmpo     cr0, f2, f0
  ble-      .loc_0x484
  lfs       f0, 0x0(r7)
  fcmpo     cr0, f4, f0
  bge-      .loc_0x484
  lfs       f0, 0x0(r8)
  fcmpo     cr0, f4, f0
  ble-      .loc_0x484
  stw       r10, 0x2E4(r28)
  mr        r3, r19
  b         .loc_0x584

.loc_0x484:
  addi      r3, r3, 0x4
  addi      r4, r4, 0x4
  addi      r5, r5, 0x4
  addi      r6, r6, 0x4
  addi      r7, r7, 0x4
  addi      r8, r8, 0x4
  addi      r10, r10, 0x1
  bdnz+     .loc_0x430

.loc_0x4A4:
  lwz       r0, 0x2C(r1)
  cmplwi    r0, 0
  bne-      .loc_0x4D0
  lwz       r3, 0x28(r1)
  lwz       r4, 0x24(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x24(r1)
  b         .loc_0x560

.loc_0x4D0:
  lwz       r3, 0x28(r1)
  lwz       r4, 0x24(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x24(r1)
  b         .loc_0x544

.loc_0x4F0:
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
  bne-      .loc_0x560
  lwz       r3, 0x28(r1)
  lwz       r4, 0x24(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x24(r1)

.loc_0x544:
  lwz       r12, 0x20(r1)
  addi      r3, r1, 0x20
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x4F0

.loc_0x560:
  lwz       r3, 0x28(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x24(r1)
  cmplw     r4, r3
  bne+      .loc_0x370
  li        r3, 0

.loc_0x584:
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
  lmw       r19, 0xCC(r1)
  lwz       r0, 0x164(r1)
  mtlr      r0
  addi      r1, r1, 0x160
  blr
*/
}

/*
 * --INFO--
 * Address:	802D0578
 * Size:	000050
 */
void Game::SnakeWhole::Obj::getSearchedTarget(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r0, 0x1F4(r3)
  cmpwi     r0, 0
  beq-      .loc_0x20
  lfs       f1, -0x1A94(r2)
  b         .loc_0x28

.loc_0x20:
  lwz       r4, 0xC0(r3)
  lfs       f1, 0x424(r4)

.loc_0x28:
  lwz       r7, 0xC0(r3)
  li        r4, 0
  li        r5, 0
  li        r6, 0
  lfs       f2, 0x3D4(r7)
  bl        -0x1BD564
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802D05C8
 * Size:	000068
 */
void Game::SnakeWhole::Obj::getSwallowSlot(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  li        r31, 0
  stw       r30, 0x8(r1)
  mr        r30, r3
  b         .loc_0x40

.loc_0x20:
  mr        r4, r31
  addi      r3, r30, 0x2D0
  bl        -0x197E78
  lwz       r0, 0x64(r3)
  cmplwi    r0, 0
  bne-      .loc_0x3C
  b         .loc_0x50

.loc_0x3C:
  addi      r31, r31, 0x1

.loc_0x40:
  lwz       r0, 0x2D0(r30)
  cmpw      r31, r0
  blt+      .loc_0x20
  li        r3, 0

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
 * Address:	802D0630
 * Size:	00006C
 */
void Game::SnakeWhole::Obj::isSwallowPikmin(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  li        r31, 0
  stw       r30, 0x8(r1)
  mr        r30, r3
  b         .loc_0x44

.loc_0x20:
  mr        r4, r31
  addi      r3, r30, 0x2D0
  bl        -0x197EE0
  lwz       r0, 0x64(r3)
  cmplwi    r0, 0
  beq-      .loc_0x40
  li        r3, 0x1
  b         .loc_0x54

.loc_0x40:
  addi      r31, r31, 0x1

.loc_0x44:
  lwz       r0, 0x2D0(r30)
  cmpw      r31, r0
  blt+      .loc_0x20
  li        r3, 0

.loc_0x54:
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
 * Address:	802D069C
 * Size:	00024C
 */
void Game::SnakeWhole::Obj::getStickHeadPikmin(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  mr        r4, r3
  stw       r0, 0x44(r1)
  addi      r3, r1, 0x18
  stw       r31, 0x3C(r1)
  li        r31, 0
  stw       r30, 0x38(r1)
  bl        -0x130A60
  li        r0, 0
  lis       r3, 0x804B
  subi      r4, r3, 0x437C
  addi      r3, r1, 0x18
  cmplwi    r0, 0
  stw       r4, 0x8(r1)
  stw       r0, 0x14(r1)
  stw       r0, 0xC(r1)
  stw       r3, 0x10(r1)
  bne-      .loc_0x64
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x204

.loc_0x64:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0xD0

.loc_0x7C:
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
  bne-      .loc_0x204
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0xD0:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x7C
  b         .loc_0x204

.loc_0xF0:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  mr        r30, r3
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x148
  lwz       r3, 0xF8(r30)
  cmplwi    r3, 0
  beq-      .loc_0x148
  lis       r4, 0x6865
  addi      r3, r3, 0x30
  addi      r4, r4, 0x6164
  bl        0x142C60
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x148
  addi      r31, r31, 0x1

.loc_0x148:
  lwz       r0, 0x14(r1)
  cmplwi    r0, 0
  bne-      .loc_0x174
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x204

.loc_0x174:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1E8

.loc_0x194:
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
  bne-      .loc_0x204
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0x1E8:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x194

.loc_0x204:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0xC(r1)
  cmplw     r4, r3
  bne+      .loc_0xF0
  addi      r3, r1, 0x18
  li        r4, -0x1
  bl        -0x130B64
  lwz       r0, 0x44(r1)
  mr        r3, r31
  lwz       r31, 0x3C(r1)
  lwz       r30, 0x38(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	802D08E8
 * Size:	000048
 */
void Game::SnakeWhole::Obj::createJointCallBack(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  li        r3, 0x30
  bl        -0x2ACA5C
  mr.       r0, r3
  beq-      .loc_0x30
  mr        r4, r31
  bl        0xD5C
  mr        r0, r3

.loc_0x30:
  stw       r0, 0x324(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802D0930
 * Size:	000024
 */
void Game::SnakeWhole::Obj::setupJointCallBack(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x324(r3)
  bl        0xD68
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802D0954
 * Size:	000024
 */
void Game::SnakeWhole::Obj::doAnimationJointCallBack(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x324(r3)
  bl        0xE44
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802D0978
 * Size:	000024
 */
void Game::SnakeWhole::Obj::finishAnimationJointCallBack(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x324(r3)
  bl        0xEA0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802D099C
 * Size:	0000B8
 */
void Game::SnakeWhole::Obj::startJointCallBack(void)
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
  mr        r30, r3
  lwz       r0, 0x2E4(r3)
  lwz       r3, 0x184(r3)
  mulli     r0, r0, 0xC
  lfs       f0, 0x190(r30)
  lwz       r12, 0x0(r3)
  add       r4, r30, r0
  lwz       r12, 0x10(r12)
  lfs       f1, 0x2EC(r4)
  fsubs     f31, f1, f0
  mtctr     r12
  bctrl     
  lwz       r3, 0xC(r3)
  li        r4, 0x3
  bl        0x158F64
  mr        r31, r3
  mr        r3, r30
  bl        -0x1CB790
  lwz       r3, 0x18(r31)
  lis       r0, 0x4330
  fmr       f3, f1
  stw       r0, 0x8(r1)
  xoris     r0, r3, 0x8000
  lfd       f2, -0x1AC0(r2)
  stw       r0, 0xC(r1)
  fmr       f1, f31
  lfd       f0, 0x8(r1)
  lwz       r3, 0x324(r30)
  fsubs     f0, f0, f2
  fsubs     f2, f0, f3
  bl        0xD30
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	802D0A54
 * Size:	000088
 */
void Game::SnakeWhole::Obj::returnJointCallBack(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r3
  lwz       r3, 0x184(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xC(r3)
  li        r4, 0x4
  bl        0x158ECC
  mr        r31, r3
  mr        r3, r30
  bl        -0x1CB828
  lwz       r3, 0x18(r31)
  lis       r0, 0x4330
  stw       r0, 0x8(r1)
  xoris     r0, r3, 0x8000
  lfd       f2, -0x1AC0(r2)
  stw       r0, 0xC(r1)
  lwz       r3, 0x324(r30)
  lfd       f0, 0x8(r1)
  fsubs     f0, f0, f2
  fsubs     f1, f0, f1
  bl        0xCC0
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
 * Address:	802D0ADC
 * Size:	000024
 */
void Game::SnakeWhole::Obj::finishJointCallBack(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x324(r3)
  bl        0xCB0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802D0B00
 * Size:	000038
 */
void Game::SnakeWhole::Obj::setupCollision(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x626F
  stw       r0, 0x14(r1)
  addi      r4, r4, 0x6431
  lwz       r3, 0x114(r3)
  bl        -0x19ACD4
  cmplwi    r3, 0
  beq-      .loc_0x28
  bl        -0x199788

.loc_0x28:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802D0B38
 * Size:	000040
 */
void Game::SnakeWhole::Obj::lifeIncrement(void)
{
/*
.loc_0x0:
  lfs       f1, -0x1AF8(r2)
  lfs       f0, -0x1ADC(r2)
  stfs      f1, 0x208(r3)
  lwz       r0, 0x1E0(r3)
  rlwinm    r0,r0,0,31,29
  stw       r0, 0x1E0(r3)
  lfs       f1, 0x200(r3)
  fadds     f0, f1, f0
  stfs      f0, 0x200(r3)
  lwz       r4, 0xC0(r3)
  lfs       f1, 0x200(r3)
  lfs       f0, 0x104(r4)
  fcmpo     cr0, f1, f0
  blelr-    
  stfs      f0, 0x200(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802D0B78
 * Size:	000048
 */
void Game::SnakeWhole::Obj::createShadowSystem(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  li        r3, 0x74
  bl        -0x2ACCEC
  mr.       r0, r3
  beq-      .loc_0x30
  mr        r4, r31
  bl        0x28164
  mr        r0, r3

.loc_0x30:
  stw       r0, 0x328(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802D0BC0
 * Size:	000024
 */
void Game::SnakeWhole::Obj::setupShadowSystem(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x328(r3)
  bl        0x28220
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802D0BE4
 * Size:	000024
 */
void Game::SnakeWhole::Obj::doAnimationShadowSystem(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x328(r3)
  bl        0x283A0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802D0C08
 * Size:	000024
 */
void Game::SnakeWhole::Obj::startJointShadow(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x328(r3)
  bl        0x282A0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802D0C2C
 * Size:	000024
 */
void Game::SnakeWhole::Obj::finishJointShadow(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x328(r3)
  bl        0x282F4
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802D0C50
 * Size:	000040
 */
void Game::SnakeWhole::Obj::deleteJointShadow(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  mr        r4, r31
  lwz       r3, -0x6980(r13)
  bl        -0x8EF38
  lwz       r3, -0x6980(r13)
  mr        r4, r31
  bl        -0x8ED74
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802D0C90
 * Size:	0000E0
 */
void Game::SnakeWhole::Obj::startBossAttackBGM(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  lbz       r0, 0x2C2(r3)
  cmplwi    r0, 0
  beq-      .loc_0x2C
  li        r0, 0
  stb       r0, 0x2C2(r3)
  b         .loc_0xC8

.loc_0x2C:
  lwz       r30, 0x28C(r3)
  li        r31, 0
  mr        r3, r30
  lwz       r12, 0x28(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x5
  beq-      .loc_0x88
  mr        r3, r30
  lwz       r12, 0x28(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x6
  beq-      .loc_0x88
  mr        r3, r30
  lwz       r12, 0x28(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x7
  bne-      .loc_0x8C

.loc_0x88:
  li        r31, 0x1

.loc_0x8C:
  rlwinm.   r0,r31,0,24,31
  bne-      .loc_0xB0
  lis       r3, 0x8049
  lis       r5, 0x8049
  subi      r3, r3, 0x4370
  li        r4, 0x454
  subi      r5, r5, 0x4358
  crclr     6, 0x6
  bl        -0x2A66FC

.loc_0xB0:
  mr        r3, r30
  li        r4, 0x3
  lwz       r12, 0x28(r30)
  lwz       r12, 0xD4(r12)
  mtctr     r12
  bctrl     

.loc_0xC8:
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
 * Address:	802D0D70
 * Size:	0000C8
 */
void Game::SnakeWhole::Obj::startBossFlickBGM(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  li        r31, 0
  stw       r30, 0x8(r1)
  lwz       r30, 0x28C(r3)
  lwz       r12, 0x28(r30)
  mr        r3, r30
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x5
  beq-      .loc_0x70
  mr        r3, r30
  lwz       r12, 0x28(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x6
  beq-      .loc_0x70
  mr        r3, r30
  lwz       r12, 0x28(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x7
  bne-      .loc_0x74

.loc_0x70:
  li        r31, 0x1

.loc_0x74:
  rlwinm.   r0,r31,0,24,31
  bne-      .loc_0x98
  lis       r3, 0x8049
  lis       r5, 0x8049
  subi      r3, r3, 0x4370
  li        r4, 0x454
  subi      r5, r5, 0x4358
  crclr     6, 0x6
  bl        -0x2A67C4

.loc_0x98:
  mr        r3, r30
  li        r4, 0x4
  lwz       r12, 0x28(r30)
  lwz       r12, 0xD4(r12)
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
 * Address:	802D0E38
 * Size:	0000FC
 */
void Game::SnakeWhole::Obj::updateBossBGM(void)
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
  mr        r29, r3
  lwz       r30, 0x28C(r3)
  lwz       r12, 0x28(r30)
  mr        r3, r30
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x5
  beq-      .loc_0x78
  mr        r3, r30
  lwz       r12, 0x28(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x6
  beq-      .loc_0x78
  mr        r3, r30
  lwz       r12, 0x28(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x7
  bne-      .loc_0x7C

.loc_0x78:
  li        r31, 0x1

.loc_0x7C:
  rlwinm.   r0,r31,0,24,31
  bne-      .loc_0xA0
  lis       r3, 0x8049
  lis       r5, 0x8049
  subi      r3, r3, 0x4370
  li        r4, 0x454
  subi      r5, r5, 0x4358
  crclr     6, 0x6
  bl        -0x2A6894

.loc_0xA0:
  lwz       r0, 0x1F4(r29)
  cmpwi     r0, 0
  beq-      .loc_0xC8
  mr        r3, r30
  li        r4, 0x1
  lwz       r12, 0x28(r30)
  lwz       r12, 0xD8(r12)
  mtctr     r12
  bctrl     
  b         .loc_0xE0

.loc_0xC8:
  mr        r3, r30
  li        r4, 0
  lwz       r12, 0x28(r30)
  lwz       r12, 0xD8(r12)
  mtctr     r12
  bctrl     

.loc_0xE0:
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
 * Address:	802D0F34
 * Size:	0000D0
 */
void Game::SnakeWhole::Obj::resetBossAppearBGM(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  lbz       r0, 0x2C3(r3)
  cmplwi    r0, 0
  bne-      .loc_0xB8
  li        r0, 0x1
  li        r31, 0
  stb       r0, 0x2C3(r3)
  lwz       r30, 0x28C(r3)
  mr        r3, r30
  lwz       r12, 0x28(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x5
  beq-      .loc_0x84
  mr        r3, r30
  lwz       r12, 0x28(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x6
  beq-      .loc_0x84
  mr        r3, r30
  lwz       r12, 0x28(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x7
  bne-      .loc_0x88

.loc_0x84:
  li        r31, 0x1

.loc_0x88:
  rlwinm.   r0,r31,0,24,31
  bne-      .loc_0xAC
  lis       r3, 0x8049
  lis       r5, 0x8049
  subi      r3, r3, 0x4370
  li        r4, 0x454
  subi      r5, r5, 0x4358
  crclr     6, 0x6
  bl        -0x2A699C

.loc_0xAC:
  mr        r3, r30
  li        r4, 0
  bl        0x18EA08

.loc_0xB8:
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
 * Address:	802D1004
 * Size:	0000CC
 */
void Game::SnakeWhole::Obj::setBossAppearBGM(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  lbz       r0, 0x2C3(r3)
  cmplwi    r0, 0
  beq-      .loc_0xB4
  li        r31, 0
  stb       r31, 0x2C3(r3)
  lwz       r30, 0x28C(r3)
  lwz       r12, 0x28(r30)
  mr        r3, r30
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x5
  beq-      .loc_0x80
  mr        r3, r30
  lwz       r12, 0x28(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x6
  beq-      .loc_0x80
  mr        r3, r30
  lwz       r12, 0x28(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x7
  bne-      .loc_0x84

.loc_0x80:
  li        r31, 0x1

.loc_0x84:
  rlwinm.   r0,r31,0,24,31
  bne-      .loc_0xA8
  lis       r3, 0x8049
  lis       r5, 0x8049
  subi      r3, r3, 0x4370
  li        r4, 0x454
  subi      r5, r5, 0x4358
  crclr     6, 0x6
  bl        -0x2A6A68

.loc_0xA8:
  mr        r3, r30
  li        r4, 0x1
  bl        0x18E93C

.loc_0xB4:
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
 * Address:	802D10D0
 * Size:	000068
 */
void Game::SnakeWhole::Obj::createEffect(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  li        r3, 0x54
  bl        -0x2AD248
  mr.       r31, r3
  beq-      .loc_0x4C
  li        r4, 0
  li        r5, 0x1F2
  li        r6, 0x1F3
  li        r7, 0x1F4
  li        r8, 0x1F5
  bl        0xDF550
  lis       r3, 0x804D
  addi      r0, r3, 0x245C
  stw       r0, 0x0(r31)

.loc_0x4C:
  stw       r31, 0x32C(r30)
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
 * Address:	802D1138
 * Size:	000078
 */
void Game::SnakeWhole::Obj::setupEffect(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lis       r3, 0x8049
  subi      r4, r3, 0x434C
  lwz       r3, 0x174(r31)
  bl        0x16DE8C
  bl        0x158744
  mr        r0, r3
  lwz       r3, 0x32C(r31)
  mr        r4, r0
  bl        0xDF59C
  lis       r4, 0x8049
  lwz       r3, 0x174(r31)
  subi      r4, r4, 0x44B8
  bl        0x16DE68
  bl        0x158720
  lfs       f2, 0x2C(r3)
  lfs       f1, 0x1C(r3)
  lfs       f0, 0xC(r3)
  stfs      f0, 0x2D8(r31)
  stfs      f1, 0x2DC(r31)
  stfs      f2, 0x2E0(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802D11B0
 * Size:	0001D4
 */
void Game::SnakeWhole::Obj::createAppearEffect( (int))
{
/*
.loc_0x0:
  stwu      r1, -0x80(r1)
  mflr      r0
  lis       r5, 0x804B
  cmpwi     r4, 0x1
  stw       r0, 0x84(r1)
  subi      r0, r5, 0x5814
  stw       r0, 0x8(r1)
  lfs       f0, 0x18C(r3)
  stfs      f0, 0xC(r1)
  lfs       f0, 0x190(r3)
  stfs      f0, 0x10(r1)
  lfs       f0, 0x194(r3)
  stfs      f0, 0x14(r1)
  beq-      .loc_0xD0
  bge-      .loc_0x48
  cmpwi     r4, 0
  bge-      .loc_0x54
  b         .loc_0x1C4

.loc_0x48:
  cmpwi     r4, 0x3
  bge-      .loc_0x1C4
  b         .loc_0x14C

.loc_0x54:
  lis       r3, 0x804B
  li        r6, 0
  subi      r0, r3, 0x5808
  lis       r3, 0x804E
  stw       r0, 0x58(r1)
  addi      r0, r3, 0x6A3C
  lis       r4, 0x804E
  lis       r3, 0x804D
  stw       r0, 0x58(r1)
  addi      r0, r4, 0x6E30
  li        r4, 0xA0
  li        r9, 0xA1
  stw       r0, 0x58(r1)
  subi      r0, r3, 0x4A48
  li        r8, 0xA2
  li        r7, 0xA3
  li        r5, 0x28
  sth       r4, 0x5C(r1)
  addi      r3, r1, 0x58
  addi      r4, r1, 0x8
  sth       r9, 0x5E(r1)
  sth       r8, 0x60(r1)
  sth       r7, 0x62(r1)
  stw       r6, 0x64(r1)
  stw       r6, 0x68(r1)
  stw       r6, 0x6C(r1)
  stw       r6, 0x70(r1)
  stw       r5, 0x74(r1)
  stw       r0, 0x58(r1)
  bl        0xE2830
  b         .loc_0x1C4

.loc_0xD0:
  lis       r3, 0x804B
  li        r6, 0
  subi      r0, r3, 0x5808
  lis       r3, 0x804E
  stw       r0, 0x38(r1)
  addi      r0, r3, 0x6A3C
  lis       r4, 0x804E
  lis       r3, 0x804D
  stw       r0, 0x38(r1)
  addi      r0, r4, 0x6E30
  li        r4, 0xA0
  li        r9, 0xA1
  stw       r0, 0x38(r1)
  subi      r0, r3, 0x4A5C
  li        r8, 0xA2
  li        r7, 0xA3
  li        r5, 0x41
  sth       r4, 0x3C(r1)
  addi      r3, r1, 0x38
  addi      r4, r1, 0x8
  sth       r9, 0x3E(r1)
  sth       r8, 0x40(r1)
  sth       r7, 0x42(r1)
  stw       r6, 0x44(r1)
  stw       r6, 0x48(r1)
  stw       r6, 0x4C(r1)
  stw       r6, 0x50(r1)
  stw       r5, 0x54(r1)
  stw       r0, 0x38(r1)
  bl        0xE27B4
  b         .loc_0x1C4

.loc_0x14C:
  lis       r3, 0x804B
  li        r6, 0
  subi      r0, r3, 0x5808
  lis       r3, 0x804E
  stw       r0, 0x18(r1)
  addi      r0, r3, 0x6A3C
  lis       r4, 0x804E
  lis       r3, 0x804D
  stw       r0, 0x18(r1)
  addi      r0, r4, 0x6E30
  li        r4, 0xA0
  li        r9, 0xA1
  stw       r0, 0x18(r1)
  subi      r0, r3, 0x4A70
  li        r8, 0xA2
  li        r7, 0xA3
  li        r5, 0x23
  sth       r4, 0x1C(r1)
  addi      r3, r1, 0x18
  addi      r4, r1, 0x8
  sth       r9, 0x1E(r1)
  sth       r8, 0x20(r1)
  sth       r7, 0x22(r1)
  stw       r6, 0x24(r1)
  stw       r6, 0x28(r1)
  stw       r6, 0x2C(r1)
  stw       r6, 0x30(r1)
  stw       r5, 0x34(r1)
  stw       r0, 0x18(r1)
  bl        0xE2738

.loc_0x1C4:
  lwz       r0, 0x84(r1)
  mtlr      r0
  addi      r1, r1, 0x80
  blr
*/
}

/*
 * --INFO--
 * Address:	802D1384
 * Size:	000034
 */
void Game::SnakeWhole::Obj::createDeadStartEffect(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0
  stw       r0, 0x14(r1)
  lwz       r3, 0x32C(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
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
 * Address:	802D13B8
 * Size:	000094
 */
void Game::SnakeWhole::Obj::createDeadFinishEffect(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lis       r4, 0x8049
  stw       r0, 0x34(r1)
  subi      r4, r4, 0x44B8
  lwz       r3, 0x174(r3)
  bl        0x16DC14
  bl        0x1584CC
  lis       r4, 0x804B
  lfs       f2, 0x2C(r3)
  lfs       f1, 0x1C(r3)
  subi      r4, r4, 0x5808
  lfs       f0, 0xC(r3)
  lis       r3, 0x804E
  addi      r0, r3, 0x6A78
  lis       r5, 0x804B
  stw       r4, 0x8(r1)
  lis       r3, 0x804D
  subi      r4, r5, 0x5814
  li        r6, 0x1F6
  li        r5, 0
  stw       r0, 0x8(r1)
  addi      r0, r3, 0x2448
  addi      r3, r1, 0x8
  stw       r4, 0x14(r1)
  addi      r4, r1, 0x14
  stfs      f0, 0x18(r1)
  stfs      f1, 0x1C(r1)
  stfs      f2, 0x20(r1)
  sth       r6, 0xC(r1)
  stw       r5, 0x10(r1)
  stw       r0, 0x8(r1)
  bl        0xDDB4C
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	802D144C
 * Size:	00003C
 */
void Game::SnakeWhole::Obj::createWalkSmokeEffect( (float))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r0, 0x280(r3)
  cmplwi    r0, 0
  beq-      .loc_0x24
  addi      r4, r3, 0x18C
  bl        -0x1CDA70
  b         .loc_0x2C

.loc_0x24:
  addi      r4, r3, 0x18C
  bl        -0x1CDB34

.loc_0x2C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802D1488
 * Size:	000030
 */
void Game::SnakeWhole::Obj::effectDrawOn(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x32C(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
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
 * Address:	802D14B8
 * Size:	000030
 */
void Game::SnakeWhole::Obj::effectDrawOff(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x32C(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
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
 * Address:	802D14E8
 * Size:	000048
 */
void Game::SnakeWhole::Obj::createEfxHamon(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r12, 0x0(r3)
  lwz       r12, 0xD0(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x34
  mr        r3, r31
  bl        -0x1CFC14

.loc_0x34:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802D1530
 * Size:	000008
 */
void Game::SnakeWhole::Obj::isUnderground(void)
{
/*
.loc_0x0:
  lbz       r3, 0x2C0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802D1538
 * Size:	000058
 */
void Game::SnakeWhole::Obj::getFitEffectPos(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lis       r3, 0x8049
  subi      r4, r3, 0x44B8
  lwz       r3, 0x174(r31)
  bl        0x16DA8C
  bl        0x158344
  lfs       f2, 0x2C(r3)
  lfs       f1, 0x1C(r3)
  lfs       f0, 0xC(r3)
  addi      r3, r31, 0x2D8
  stfs      f0, 0x2D8(r31)
  stfs      f1, 0x2DC(r31)
  stfs      f2, 0x2E0(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802D1590
 * Size:	000004
 */
void Game::SnakeWhole::Obj::inWaterCallback( (Game::WaterBox *))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	802D1594
 * Size:	000004
 */
void Game::SnakeWhole::Obj::outWaterCallback(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	802D1598
 * Size:	000008
 */
void Game::SnakeWhole::Obj::getDamageCoeStoneState(void)
{
/*
.loc_0x0:
  lfs       f1, -0x1A90(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	802D15A0
 * Size:	000008
 */
void Game::SnakeWhole::Obj::getMouthSlots(void)
{
/*
.loc_0x0:
  addi      r3, r3, 0x2D0
  blr
*/
}

/*
 * --INFO--
 * Address:	802D15A8
 * Size:	000004
 */
void Game::SnakeWhole::Obj::throwupItemInDeathProcedure(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	802D15AC
 * Size:	000008
 */
void Game::SnakeWhole::Obj::getDownSmokeScale(void)
{
/*
.loc_0x0:
  lfs       f1, -0x1A8C(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	802D15B4
 * Size:	000008
 */
void Game::SnakeWhole::Obj::getEnemyTypeID(void)
{
/*
.loc_0x0:
  li        r3, 0x46
  blr
*/
}

/*
 * --INFO--
 * Address:	802D15BC
 * Size:	000014
 */
void @816@12@Game::EnemyBase::viewOnPelletKilled(void)
{
/*
.loc_0x0:
  li        r11, 0xC
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x330
  b         -0x1CACB0
*/
}

/*
 * --INFO--
 * Address:	802D15D0
 * Size:	000014
 */
void @816@12@Game::EnemyBase::viewStartCarryMotion(void)
{
/*
.loc_0x0:
  li        r11, 0xC
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x330
  b         -0x1CAF38
*/
}

/*
 * --INFO--
 * Address:	802D15E4
 * Size:	000014
 */
void @816@12@Game::EnemyBase::viewStartPreCarryMotion(void)
{
/*
.loc_0x0:
  li        r11, 0xC
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x330
  b         -0x1CAF2C
*/
}

/*
 * --INFO--
 * Address:	802D15F8
 * Size:	000014
 */
void @816@12@Game::EnemyBase::view_finish_carrymotion(void)
{
/*
.loc_0x0:
  li        r11, 0xC
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x330
  b         -0x1CAB90
*/
}

/*
 * --INFO--
 * Address:	802D160C
 * Size:	000014
 */
void @816@12@Game::EnemyBase::view_start_carrymotion(void)
{
/*
.loc_0x0:
  li        r11, 0xC
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x330
  b         -0x1CABD0
*/
}

/*
 * --INFO--
 * Address:	802D1620
 * Size:	000014
 */
void @816@12@Game::EnemyBase::viewGetShape(void)
{
/*
.loc_0x0:
  li        r11, 0xC
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x330
  b         -0x1CAF90
*/
}

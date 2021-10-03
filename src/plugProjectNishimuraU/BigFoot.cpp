

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
 * Address:	802C7EF0
 * Size:	000024
 */
void Game::BigFoot::BigFootGroundCallBack::invokeOnGround( (int, Game::WaterBox *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x4(r3)
  bl        0x264C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802C7F14
 * Size:	000024
 */
void Game::BigFoot::BigFootGroundCallBack::invokeOffGround( (int, Game::WaterBox *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x4(r3)
  bl        0x2850
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802C7F38
 * Size:	00016C
 */
void Game::BigFoot::Obj::__ct(void)
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
  addi      r0, r31, 0x4AC
  lis       r3, 0x804B
  stw       r0, 0x17C(r31)
  subi      r3, r3, 0x5988
  li        r0, 0
  stw       r3, 0x4AC(r31)
  stw       r0, 0x4B0(r31)
  stw       r0, 0x4B4(r31)

.loc_0x40:
  mr        r3, r31
  li        r4, 0
  bl        -0x1C6BE0
  lis       r4, 0x804D
  addi      r0, r31, 0x4AC
  addi      r6, r4, 0x1E10
  lis       r3, 0x8012
  stw       r6, 0x0(r31)
  addi      r5, r6, 0x1B0
  addi      r9, r6, 0x2FC
  subi      r4, r3, 0xCB8
  stw       r5, 0x178(r31)
  addi      r3, r31, 0x2F0
  li        r5, 0
  li        r6, 0xC
  lwz       r8, 0x17C(r31)
  li        r7, 0x10
  stw       r9, 0x0(r8)
  lwz       r8, 0x17C(r31)
  sub       r0, r0, r8
  stw       r0, 0xC(r8)
  bl        -0x206790
  li        r3, 0x2C
  bl        -0x2A4130
  mr.       r30, r3
  beq-      .loc_0xE8
  bl        -0x1A066C
  lis       r3, 0x804D
  lis       r4, 0x804B
  addi      r0, r3, 0x1AA8
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

.loc_0xE8:
  stw       r30, 0x184(r31)
  li        r3, 0x1C
  bl        -0x2A4184
  mr.       r4, r3
  beq-      .loc_0x11C
  lis       r5, 0x804B
  lis       r3, 0x804D
  subi      r0, r5, 0x680
  li        r5, -0x1
  stw       r0, 0x0(r4)
  addi      r0, r3, 0x1A80
  stw       r5, 0x18(r4)
  stw       r0, 0x0(r4)

.loc_0x11C:
  lwz       r12, 0x0(r31)
  mr        r3, r31
  lwz       r12, 0x2F8(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  bl        0xC94
  mr        r3, r31
  bl        0x1224
  mr        r3, r31
  bl        0x1C24
  mr        r3, r31
  bl        0x12F4
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
 * Address:	802C80A4
 * Size:	000004
 */
void Game::BigFoot::Obj::setInitialSetting( (Game::EnemyInitialParamBase *))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	802C80A8
 * Size:	000148
 */
void Game::BigFoot::Obj::onInit( (Game::CreatureInitArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1C6664
  mr        r3, r31
  bl        -0x1C0948
  lwz       r3, 0x1E0(r31)
  li        r4, -0x1
  lfs       f1, -0x1C38(r2)
  li        r0, 0
  rlwinm    r5,r3,0,20,18
  mr        r3, r31
  stw       r5, 0x1E0(r31)
  lwz       r5, 0x1E0(r31)
  rlwinm    r5,r5,0,25,23
  stw       r5, 0x1E0(r31)
  stfs      f1, 0x2C0(r31)
  stw       r4, 0x2C4(r31)
  lfs       f0, 0x198(r31)
  stfs      f0, 0x2C8(r31)
  lfs       f0, 0x19C(r31)
  stfs      f0, 0x2CC(r31)
  lfs       f0, 0x1A0(r31)
  stfs      f0, 0x2D0(r31)
  stfs      f1, 0x2D4(r31)
  stb       r0, 0x2DC(r31)
  stb       r0, 0x2DD(r31)
  bl        0x6DC
  li        r0, 0
  mr        r3, r31
  stb       r0, 0x2DE(r31)
  bl        0xCE0
  mr        r3, r31
  bl        0x11AC
  mr        r3, r31
  bl        0x13BC
  mr        r3, r31
  bl        0x2224
  mr        r3, r31
  bl        0x2D98
  mr        r3, r31
  bl        0x19D4
  lwz       r3, -0x6980(r13)
  mr        r4, r31
  bl        -0x86470
  mr        r3, r31
  bl        0x1264
  lwz       r3, 0x2BC(r31)
  mr        r4, r31
  li        r5, 0x1
  li        r6, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x6C18(r13)
  cmplwi    r3, 0
  beq-      .loc_0x120
  lwz       r0, 0x44(r3)
  cmpwi     r0, 0x4
  bne-      .loc_0x120
  lwz       r3, 0x2BC(r31)
  mr        r4, r31
  li        r5, 0x2
  li        r6, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x134

.loc_0x120:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1DC(r12)
  mtctr     r12
  bctrl     

.loc_0x134:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802C81F0
 * Size:	000044
 */
void Game::BigFoot::Obj::onKill( (Game::CreatureKillArg *))
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
  bl        0x2D4C
  mr        r3, r30
  mr        r4, r31
  bl        -0x1C6330
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
 * Address:	802C8234
 * Size:	000050
 */
void Game::BigFoot::Obj::doUpdate(void)
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
  bl        0x2A2C
  mr        r3, r31
  bl        0xE08
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802C8284
 * Size:	000034
 */
void Game::BigFoot::Obj::doUpdateCommon(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1C5384
  mr        r3, r31
  bl        0x178C
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802C82B8
 * Size:	000098
 */
void Game::BigFoot::Obj::doAnimationCullingOff(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r4, 0x188(r3)
  stb       r0, 0x24(r4)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1D8(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  bl        0xDE8
  lwz       r4, 0x174(r31)
  addi      r3, r31, 0x138
  lwz       r4, 0x8(r4)
  addi      r4, r4, 0x24
  bl        -0x1DE034
  lwz       r3, 0x174(r31)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x114(r31)
  bl        -0x192884
  mr        r3, r31
  bl        0x102C
  mr        r3, r31
  bl        0x10D8
  mr        r3, r31
  bl        0xDFC
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802C8350
 * Size:	000004
 */
void Game::BigFoot::Obj::doDirectDraw( (Graphics &))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	802C8354
 * Size:	000020
 */
void Game::BigFoot::Obj::doDebugDraw( (Graphics &))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        -0x1C24F4
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802C8374
 * Size:	00004C
 */
void Game::BigFoot::Obj::setFSM( (Game::BigFoot::FSM *))
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
 * Address:	802C83C0
 * Size:	00003C
 */
void Game::BigFoot::Obj::getShadowParam( (Game::ShadowParam &))
{
/*
.loc_0x0:
  lfs       f0, 0x18C(r3)
  lfs       f2, -0x1C38(r2)
  stfs      f0, 0x0(r4)
  lfs       f1, -0x1C34(r2)
  lfs       f3, 0x190(r3)
  lfs       f0, -0x1C30(r2)
  stfs      f3, 0x4(r4)
  lfs       f3, 0x194(r3)
  stfs      f3, 0x8(r4)
  stfs      f2, 0xC(r4)
  stfs      f1, 0x10(r4)
  stfs      f2, 0x14(r4)
  stfs      f0, 0x18(r4)
  stfs      f0, 0x1C(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	802C83FC
 * Size:	000050
 */
void Game::BigFoot::Obj::needShadow(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1C1000
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x28
  li        r3, 0x1
  b         .loc_0x3C

.loc_0x28:
  mr        r3, r31
  bl        -0x1C1034
  subfic    r0, r3, 0x2
  cntlzw    r0, r0
  rlwinm    r3,r0,27,24,31

.loc_0x3C:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802C844C
 * Size:	00009C
 */
void Game::BigFoot::Obj::damageCallBack( (Game::Creature *, float, CollPart *))
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
  mr.       r31, r4
  fmr       f31, f1
  mr        r30, r3
  beq-      .loc_0x78
  cmplwi    r5, 0
  beq-      .loc_0x78
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x78
  mr        r3, r31
  bl        -0x128F2C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x78
  fmr       f1, f31
  lfs       f2, -0x1C34(r2)
  mr        r3, r30
  bl        -0x1C248C
  li        r3, 0x1
  b         .loc_0x7C

.loc_0x78:
  li        r3, 0

.loc_0x7C:
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
 * Address:	802C84E8
 * Size:	0001AC
 */
void Game::BigFoot::Obj::collisionCallback( (Game::CollEvent &))
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stw       r31, 0x3C(r1)
  stw       r30, 0x38(r1)
  mr        r30, r4
  stw       r29, 0x34(r1)
  mr        r29, r3
  lwz       r0, 0x1E0(r3)
  rlwinm.   r0,r0,0,22,22
  bne-      .loc_0x178
  lwz       r31, 0x0(r30)
  cmplwi    r31, 0
  beq-      .loc_0x178
  lwz       r0, 0x4(r30)
  cmplwi    r0, 0
  beq-      .loc_0x178
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x178
  lwz       r0, 0xC8(r31)
  cmplwi    r0, 0
  beq-      .loc_0x178
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xA4
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x104

.loc_0xA4:
  lwz       r4, 0x8(r30)
  mr        r3, r29
  bl        0xCE0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x178
  lwz       r5, 0xC0(r29)
  lis       r4, 0x804B
  lis       r3, 0x804B
  li        r0, 0
  lfs       f0, 0x604(r5)
  subi      r4, r4, 0x5D00
  subi      r5, r3, 0x4CE0
  mr        r3, r31
  stw       r4, 0x18(r1)
  addi      r4, r1, 0x18
  stw       r29, 0x1C(r1)
  stw       r5, 0x18(r1)
  stfs      f0, 0x20(r1)
  stw       r0, 0x24(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x178

.loc_0x104:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x178
  lwz       r4, 0x8(r30)
  mr        r3, r29
  bl        0xC64
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x178
  lwz       r5, 0x4(r30)
  lis       r3, 0x804B
  subi      r0, r3, 0x5D00
  lfs       f0, -0x1C2C(r2)
  lis       r3, 0x804B
  stw       r0, 0x8(r1)
  addi      r0, r3, 0x4DE0
  mr        r3, r31
  stw       r29, 0xC(r1)
  addi      r4, r1, 0x8
  stw       r0, 0x8(r1)
  stfs      f0, 0x10(r1)
  stw       r5, 0x14(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     

.loc_0x178:
  mr        r3, r29
  mr        r4, r30
  lwz       r12, 0x0(r29)
  lwz       r12, 0x240(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x44(r1)
  lwz       r31, 0x3C(r1)
  lwz       r30, 0x38(r1)
  lwz       r29, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	802C8694
 * Size:	000044
 */
void Game::BigFoot::Obj::doStartStoneState(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1C57B4
  mr        r3, r31
  bl        0x23C8
  mr        r3, r31
  bl        0x28A0
  mr        r3, r31
  bl        0x11C4
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802C86D8
 * Size:	00006C
 */
void Game::BigFoot::Obj::doFinishStoneState(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1C57E4
  lfs       f1, -0x1C34(r2)
  mr        r3, r31
  lfs       f2, -0x1C28(r2)
  li        r4, 0
  lfs       f3, -0x1C38(r2)
  lfs       f4, -0x1C24(r2)
  bl        -0x1B55EC
  lbz       r0, 0x2DD(r31)
  cmplwi    r0, 0
  beq-      .loc_0x48
  mr        r3, r31
  bl        0x21BC

.loc_0x48:
  mr        r3, r31
  bl        0x27C0
  mr        r3, r31
  bl        0x122C
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802C8744
 * Size:	000020
 */
void Game::BigFoot::Obj::doStartMovie(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        0x2AB4
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802C8764
 * Size:	000020
 */
void Game::BigFoot::Obj::doEndMovie(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        0x28BC
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802C8784
 * Size:	000060
 */
void getThrowupItemPosition__Q34Game7BigFoot3ObjFP10Vector3<float>(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  subi      r4, r2, 0x1C20
  lwz       r3, 0x174(r3)
  bl        0x176844
  bl        0x1610FC
  lfs       f3, 0x2C(r3)
  lfs       f2, 0x1C(r3)
  lfs       f1, 0xC(r3)
  lfs       f0, -0x1C18(r2)
  stfs      f1, 0x0(r31)
  stfs      f2, 0x4(r31)
  stfs      f3, 0x8(r31)
  lfs       f1, 0x4(r31)
  fsubs     f0, f1, f0
  stfs      f0, 0x4(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802C87E4
 * Size:	000014
 */
void getThrowupItemVelocity__Q34Game7BigFoot3ObjFP10Vector3<float>(void)
{
/*
.loc_0x0:
  lfs       f0, -0x1C38(r2)
  stfs      f0, 0x8(r4)
  stfs      f0, 0x4(r4)
  stfs      f0, 0x0(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	802C87F8
 * Size:	00008C
 */
void Game::BigFoot::Obj::resetFlickWalkTimeMax(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stfd      f31, 0x30(r1)
  psq_st    f31,0x38(r1),0,0
  stfd      f30, 0x20(r1)
  psq_st    f30,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  mr        r31, r3
  lfs       f0, -0x1C14(r2)
  lwz       r3, 0xC0(r3)
  lfs       f31, 0xA24(r3)
  fmuls     f30, f0, f31
  bl        -0x1FF28C
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0xC(r1)
  lfd       f2, -0x1C08(r2)
  stw       r0, 0x8(r1)
  lfs       f0, -0x1C10(r2)
  lfd       f1, 0x8(r1)
  fsubs     f1, f1, f2
  fmuls     f1, f31, f1
  fdivs     f0, f1, f0
  fadds     f0, f30, f0
  stfs      f0, 0x2D8(r31)
  psq_l     f31,0x38(r1),0,0
  lfd       f31, 0x30(r1)
  psq_l     f30,0x28(r1),0,0
  lfd       f30, 0x20(r1)
  lwz       r0, 0x44(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	802C8884
 * Size:	00008C
 */
void Game::BigFoot::Obj::setFlickWalkTimeMax(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stfd      f31, 0x30(r1)
  psq_st    f31,0x38(r1),0,0
  stfd      f30, 0x20(r1)
  psq_st    f30,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  mr        r31, r3
  lfs       f0, -0x1C14(r2)
  lwz       r3, 0xC0(r3)
  lfs       f31, 0xA4C(r3)
  fmuls     f30, f0, f31
  bl        -0x1FF318
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0xC(r1)
  lfd       f2, -0x1C08(r2)
  stw       r0, 0x8(r1)
  lfs       f0, -0x1C10(r2)
  lfd       f1, 0x8(r1)
  fsubs     f1, f1, f2
  fmuls     f1, f31, f1
  fdivs     f0, f1, f0
  fadds     f0, f30, f0
  stfs      f0, 0x2D8(r31)
  psq_l     f31,0x38(r1),0,0
  lfd       f31, 0x30(r1)
  psq_l     f30,0x28(r1),0,0
  lfd       f30, 0x20(r1)
  lwz       r0, 0x44(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	802C8910
 * Size:	0003F0
 */
void Game::BigFoot::Obj::getTargetPosition(void)
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
  stw       r31, 0x5C(r1)
  mr        r31, r3
  lfs       f1, 0x194(r3)
  lfs       f0, 0x1A0(r3)
  lwz       r7, 0xC0(r3)
  fsubs     f2, f1, f0
  lfs       f1, 0x18C(r3)
  lfs       f4, 0x198(r3)
  lfs       f0, 0x35C(r7)
  fsubs     f3, f1, f4
  fmuls     f1, f2, f2
  fmuls     f0, f0, f0
  fmadds    f1, f3, f3, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x3AC
  lbz       r0, 0x2DE(r31)
  cmplwi    r0, 0
  beq-      .loc_0x18C
  lwz       r3, 0x2E4(r31)
  lfs       f1, -0x1C00(r2)
  lfs       f0, 0x34(r3)
  fmuls     f30, f1, f0
  bl        -0x1FF3E4
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x24(r1)
  lwz       r4, 0x2E4(r31)
  stw       r0, 0x20(r1)
  lfd       f1, -0x1C08(r2)
  lfd       f0, 0x20(r1)
  lwz       r3, 0xC0(r31)
  fsubs     f0, f0, f1
  lfs       f3, -0x1C10(r2)
  lfs       f1, 0x34(r4)
  lfs       f2, -0x1BF8(r2)
  fmuls     f6, f30, f0
  lfs       f4, -0x1BFC(r2)
  lfs       f5, 0x1FC(r31)
  lfs       f0, -0x1C38(r2)
  fdivs     f6, f6, f3
  lfs       f3, 0x9FC(r3)
  fsubs     f1, f6, f1
  fmuls     f1, f2, f1
  fmuls     f1, f4, f1
  fadds     f4, f5, f1
  fcmpo     cr0, f4, f0
  bge-      .loc_0x104
  lfs       f0, -0x1BF4(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f4, f0
  fctiwz    f0, f0
  stfd      f0, 0x28(r1)
  lwz       r0, 0x2C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0
  fneg      f2, f0
  b         .loc_0x128

.loc_0x104:
  lfs       f0, -0x1BF0(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f4, f0
  fctiwz    f0, f0
  stfd      f0, 0x30(r1)
  lwz       r0, 0x34(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f2, r3, r0

.loc_0x128:
  lfs       f1, 0x18C(r31)
  lfs       f0, -0x1C38(r2)
  fmadds    f1, f3, f2, f1
  fcmpo     cr0, f4, f0
  stfs      f1, 0x2C8(r31)
  lfs       f0, 0x190(r31)
  stfs      f0, 0x2CC(r31)
  lwz       r4, 0xC0(r31)
  bge-      .loc_0x150
  fneg      f4, f4

.loc_0x150:
  lfs       f0, -0x1BF0(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  lfs       f2, 0x9FC(r4)
  fmuls     f1, f4, f0
  lfs       f0, 0x194(r31)
  fctiwz    f1, f1
  stfd      f1, 0x38(r1)
  lwz       r0, 0x3C(r1)
  rlwinm    r0,r0,3,18,28
  add       r3, r3, r0
  lfs       f1, 0x4(r3)
  fmadds    f0, f2, f1, f0
  stfs      f0, 0x2D0(r31)
  b         .loc_0x3C0

.loc_0x18C:
  lis       r5, 0x804B
  lis       r4, 0x804D
  subi      r6, r5, 0x43A0
  stw       r31, 0xC(r1)
  subi      r0, r4, 0x2490
  addi      r5, r1, 0x8
  stw       r6, 0x8(r1)
  li        r4, 0
  stw       r0, 0x8(r1)
  lfs       f1, 0x424(r7)
  lfs       f2, 0x3D4(r7)
  bl        -0x1B5F64
  cmplwi    r3, 0
  beq-      .loc_0x1F8
  mr        r4, r3
  addi      r3, r1, 0x10
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x10(r1)
  stfs      f0, 0x2C8(r31)
  lfs       f0, 0x14(r1)
  stfs      f0, 0x2CC(r31)
  lfs       f0, 0x18(r1)
  stfs      f0, 0x2D0(r31)
  b         .loc_0x3C0

.loc_0x1F8:
  lfs       f1, 0x194(r31)
  lfs       f0, 0x2D0(r31)
  lfs       f2, 0x18C(r31)
  fsubs     f3, f1, f0
  lfs       f1, 0x2C8(r31)
  lfs       f0, -0x1BEC(r2)
  fsubs     f2, f2, f1
  fmuls     f1, f3, f3
  fmadds    f1, f2, f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x3C0
  lwz       r3, 0xC0(r31)
  lfs       f1, 0x35C(r3)
  lfs       f0, 0x384(r3)
  fsubs     f30, f1, f0
  bl        -0x1FF5A4
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x3C(r1)
  lis       r3, 0x8051
  lwz       r4, 0xC0(r31)
  subi      r3, r3, 0x2E20
  stw       r0, 0x38(r1)
  lfd       f1, -0x1C08(r2)
  lfd       f0, 0x38(r1)
  lfs       f5, -0x1C10(r2)
  fsubs     f0, f0, f1
  lfs       f3, 0x18C(r31)
  lfs       f1, 0x198(r31)
  lfs       f4, 0x384(r4)
  fmuls     f6, f30, f0
  lfs       f2, 0x194(r31)
  fsubs     f1, f3, f1
  lfs       f0, 0x1A0(r31)
  fdivs     f3, f6, f5
  fadds     f31, f4, f3
  fsubs     f2, f2, f0
  bl        -0x293A94
  fmr       f30, f1
  bl        -0x1FF604
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x34(r1)
  lfd       f2, -0x1C08(r2)
  stw       r0, 0x30(r1)
  lfs       f3, -0x1BFC(r2)
  lfd       f0, 0x30(r1)
  lfs       f1, -0x1C10(r2)
  fsubs     f4, f0, f2
  lfs       f2, -0x1BE8(r2)
  lfs       f0, -0x1C38(r2)
  fmuls     f3, f3, f4
  fdivs     f1, f3, f1
  fadds     f1, f30, f1
  fadds     f3, f2, f1
  fcmpo     cr0, f3, f0
  bge-      .loc_0x308
  lfs       f0, -0x1BF4(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f3, f0
  fctiwz    f0, f0
  stfd      f0, 0x28(r1)
  lwz       r0, 0x2C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0
  fneg      f2, f0
  b         .loc_0x32C

.loc_0x308:
  lfs       f0, -0x1BF0(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f3, f0
  fctiwz    f0, f0
  stfd      f0, 0x20(r1)
  lwz       r0, 0x24(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f2, r3, r0

.loc_0x32C:
  lfs       f1, 0x198(r31)
  lfs       f0, -0x1C38(r2)
  fmadds    f1, f31, f2, f1
  fcmpo     cr0, f3, f0
  stfs      f1, 0x2C8(r31)
  lfs       f0, 0x19C(r31)
  stfs      f0, 0x2CC(r31)
  bge-      .loc_0x378
  lfs       f0, -0x1BF4(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f3, f0
  fctiwz    f0, f0
  stfd      f0, 0x40(r1)
  lwz       r0, 0x44(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0
  fneg      f1, f0
  b         .loc_0x39C

.loc_0x378:
  lfs       f0, -0x1BF0(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f3, f0
  fctiwz    f0, f0
  stfd      f0, 0x48(r1)
  lwz       r0, 0x4C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f1, r3, r0

.loc_0x39C:
  lfs       f0, 0x1A0(r31)
  fmadds    f0, f31, f1, f0
  stfs      f0, 0x2D0(r31)
  b         .loc_0x3C0

.loc_0x3AC:
  stfs      f4, 0x2C8(r31)
  lfs       f0, 0x19C(r31)
  stfs      f0, 0x2CC(r31)
  lfs       f0, 0x1A0(r31)
  stfs      f0, 0x2D0(r31)

.loc_0x3C0:
  mr        r3, r31
  addi      r4, r31, 0x2C8
  bl        0x37C
  psq_l     f31,0x78(r1),0,0
  lfd       f31, 0x70(r1)
  psq_l     f30,0x68(r1),0,0
  lfd       f30, 0x60(r1)
  lwz       r0, 0x84(r1)
  lwz       r31, 0x5C(r1)
  mtlr      r0
  addi      r1, r1, 0x80
  blr
*/
}

/*
 * --INFO--
 * Address:	802C8D00
 * Size:	00010C
 */
void Game::BigFoot::Obj::createIKSystem(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  li        r3, 0x9C
  bl        -0x2A4E74
  mr.       r0, r3
  beq-      .loc_0x2C
  bl        -0x2026C
  mr        r0, r3

.loc_0x2C:
  stw       r0, 0x2E0(r31)
  li        r3, 0x48
  bl        -0x2A4E90
  cmplwi    r3, 0
  beq-      .loc_0xC4
  li        r0, -0x1
  lfs       f5, -0x1C38(r2)
  stw       r0, 0x0(r3)
  lfs       f1, -0x1BE4(r2)
  stfs      f5, 0x4(r3)
  lfs       f0, -0x1BE0(r2)
  stfs      f5, 0x8(r3)
  lfs       f2, -0x1BDC(r2)
  stfs      f1, 0xC(r3)
  lfs       f1, -0x1BD8(r2)
  stfs      f0, 0x10(r3)
  lfs       f0, -0x1C14(r2)
  stfs      f2, 0x14(r3)
  lfs       f2, -0x1C28(r2)
  stfs      f1, 0x18(r3)
  lfs       f1, -0x1BD4(r2)
  stfs      f0, 0x1C(r3)
  lfs       f0, -0x1BD0(r2)
  stfs      f2, 0x20(r3)
  lfs       f4, -0x1BCC(r2)
  stfs      f1, 0x24(r3)
  lfs       f3, -0x1BC8(r2)
  stfs      f5, 0x28(r3)
  lfs       f2, -0x1C30(r2)
  stfs      f0, 0x2C(r3)
  lfs       f1, -0x1BC4(r2)
  stfs      f5, 0x30(r3)
  lfs       f0, -0x1BC0(r2)
  stfs      f4, 0x34(r3)
  stfs      f3, 0x38(r3)
  stfs      f2, 0x3C(r3)
  stfs      f1, 0x40(r3)
  stfs      f0, 0x44(r3)

.loc_0xC4:
  stw       r3, 0x2E4(r31)
  li        r3, 0x8
  bl        -0x2A4F28
  cmplwi    r3, 0
  beq-      .loc_0xF4
  lis       r5, 0x804D
  lis       r4, 0x804D
  subi      r0, r5, 0x24A0
  stw       r0, 0x0(r3)
  addi      r0, r4, 0x213C
  stw       r0, 0x0(r3)
  stw       r31, 0x4(r3)

.loc_0xF4:
  stw       r3, 0x2E8(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802C8E0C
 * Size:	000124
 */
void Game::BigFoot::Obj::setupIKSystem(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  li        r5, 0
  stw       r0, 0x54(r1)
  stmw      r27, 0x3C(r1)
  mr        r31, r3
  mr        r4, r31
  lwz       r3, 0x2E0(r3)
  bl        -0x202F8
  lis       r3, 0x8049
  addi      r6, r1, 0x8
  subi      r27, r3, 0x4888
  li        r5, 0
  lwz       r28, 0x0(r27)
  lwz       r29, 0x4(r27)
  lwz       r30, 0x8(r27)
  lwz       r12, 0xC(r27)
  lwz       r11, 0x10(r27)
  lwz       r10, 0x14(r27)
  lwz       r9, 0x18(r27)
  lwz       r8, 0x1C(r27)
  lwz       r7, 0x20(r27)
  lwz       r4, 0x24(r27)
  lwz       r3, 0x28(r27)
  lwz       r0, 0x2C(r27)
  stw       r28, 0x8(r1)
  stw       r29, 0xC(r1)
  stw       r30, 0x10(r1)
  stw       r12, 0x14(r1)
  stw       r11, 0x18(r1)
  stw       r10, 0x1C(r1)
  stw       r9, 0x20(r1)
  stw       r8, 0x24(r1)
  stw       r7, 0x28(r1)
  stw       r4, 0x2C(r1)
  stw       r3, 0x30(r1)
  stw       r0, 0x34(r1)
  lwz       r3, 0x2E0(r31)
  lwz       r4, 0x174(r31)
  bl        -0x20230
  lwz       r3, 0x2E0(r31)
  addi      r6, r1, 0x14
  lwz       r4, 0x174(r31)
  li        r5, 0x1
  bl        -0x20244
  lwz       r3, 0x2E0(r31)
  addi      r6, r1, 0x20
  lwz       r4, 0x174(r31)
  li        r5, 0x2
  bl        -0x20258
  lwz       r3, 0x2E0(r31)
  addi      r6, r1, 0x2C
  lwz       r4, 0x174(r31)
  li        r5, 0x3
  bl        -0x2026C
  lis       r4, 0x8049
  lwz       r3, 0x2E0(r31)
  subi      r5, r4, 0x4900
  lwz       r4, 0x174(r31)
  bl        -0x20214
  mr        r3, r31
  bl        .loc_0x124
  lwz       r3, 0x2E0(r31)
  lwz       r4, 0x2E4(r31)
  bl        -0x201F0
  lwz       r0, 0x2E8(r31)
  lwz       r3, 0x2E0(r31)
  stw       r0, 0x94(r3)
  lmw       r27, 0x3C(r1)
  lwz       r0, 0x54(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr       

.loc_0x124:
*/
}

/*
 * --INFO--
 * Address:	802C8F30
 * Size:	000124
 */
void Game::BigFoot::Obj::setIKParameter(void)
{
/*
.loc_0x0:
  lwz       r4, 0x2E4(r3)
  li        r0, 0xC
  lfs       f2, -0x1C28(r2)
  stw       r0, 0x0(r4)
  lfs       f1, -0x1BBC(r2)
  lwz       r4, 0x2E4(r3)
  lfs       f0, -0x1C14(r2)
  stfs      f2, 0x4(r4)
  lwz       r4, 0x2E4(r3)
  stfs      f1, 0x8(r4)
  lwz       r4, 0x2E4(r3)
  stfs      f0, 0x28(r4)
  lwz       r5, 0xC0(r3)
  lwz       r4, 0x2E4(r3)
  lfs       f0, 0x334(r5)
  stfs      f0, 0x38(r4)
  lwz       r5, 0xC0(r3)
  lwz       r4, 0x2E4(r3)
  lfs       f0, 0x2E4(r5)
  stfs      f0, 0x2C(r4)
  lbz       r0, 0x2DE(r3)
  cmplwi    r0, 0
  beq-      .loc_0xC0
  lwz       r5, 0xC0(r3)
  lwz       r4, 0x2E4(r3)
  lfs       f0, 0x90C(r5)
  stfs      f0, 0x14(r4)
  lwz       r5, 0xC0(r3)
  lwz       r4, 0x2E4(r3)
  lfs       f0, 0x934(r5)
  stfs      f0, 0x18(r4)
  lwz       r5, 0xC0(r3)
  lwz       r4, 0x2E4(r3)
  lfs       f0, 0x95C(r5)
  stfs      f0, 0x1C(r4)
  lwz       r5, 0xC0(r3)
  lwz       r4, 0x2E4(r3)
  lfs       f0, 0x9AC(r5)
  stfs      f0, 0x20(r4)
  lwz       r5, 0xC0(r3)
  lwz       r4, 0x2E4(r3)
  lfs       f0, 0x984(r5)
  stfs      f0, 0x24(r4)
  lwz       r4, 0xC0(r3)
  lwz       r3, 0x2E4(r3)
  lfs       f0, 0x9D4(r4)
  stfs      f0, 0x10(r3)
  blr       

.loc_0xC0:
  lwz       r5, 0xC0(r3)
  lwz       r4, 0x2E4(r3)
  lfs       f0, 0x81C(r5)
  stfs      f0, 0x14(r4)
  lwz       r5, 0xC0(r3)
  lwz       r4, 0x2E4(r3)
  lfs       f0, 0x844(r5)
  stfs      f0, 0x18(r4)
  lwz       r5, 0xC0(r3)
  lwz       r4, 0x2E4(r3)
  lfs       f0, 0x86C(r5)
  stfs      f0, 0x1C(r4)
  lwz       r5, 0xC0(r3)
  lwz       r4, 0x2E4(r3)
  lfs       f0, 0x8BC(r5)
  stfs      f0, 0x20(r4)
  lwz       r5, 0xC0(r3)
  lwz       r4, 0x2E4(r3)
  lfs       f0, 0x894(r5)
  stfs      f0, 0x24(r4)
  lwz       r4, 0xC0(r3)
  lwz       r3, 0x2E4(r3)
  lfs       f0, 0x8E4(r4)
  stfs      f0, 0x10(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802C9054
 * Size:	000020
 */
void setIKSystemTargetPosition__Q34Game7BigFoot3ObjFR10Vector3<float>(void)
{
/*
.loc_0x0:
  lwz       r3, 0x2E0(r3)
  lfs       f0, 0x0(r4)
  stfs      f0, 0x2C(r3)
  lfs       f0, 0x4(r4)
  stfs      f0, 0x30(r3)
  lfs       f0, 0x8(r4)
  stfs      f0, 0x34(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802C9074
 * Size:	000060
 */
void Game::BigFoot::Obj::updateIKSystem(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0x2E0(r3)
  bl        -0x1FFA8
  lwz       r3, 0x2E0(r31)
  lfs       f1, 0x3C(r3)
  lfs       f2, 0x40(r3)
  lfs       f0, 0x38(r3)
  stfs      f0, 0x18C(r31)
  stfs      f1, 0x190(r31)
  stfs      f2, 0x194(r31)
  lwz       r3, 0x2E0(r31)
  lfs       f0, 0x4(r3)
  stfs      f0, 0x1FC(r31)
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
 * Address:	802C90D4
 * Size:	000060
 */
void Game::BigFoot::Obj::doAnimationIKSystem(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  lwz       r3, 0x2E0(r3)
  bl        -0x20010
  lwz       r7, 0x2E0(r31)
  addi      r3, r31, 0x138
  addi      r4, r31, 0x168
  addi      r5, r31, 0x1A4
  lfs       f1, 0x48(r7)
  addi      r6, r1, 0x8
  lfs       f2, 0x4C(r7)
  lfs       f0, 0x44(r7)
  stfs      f0, 0x8(r1)
  stfs      f1, 0xC(r1)
  stfs      f2, 0x10(r1)
  bl        0x15F1BC
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	802C9134
 * Size:	000024
 */
void Game::BigFoot::Obj::finishAnimationIKSystem(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x2E0(r3)
  bl        -0x20074
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802C9158
 * Size:	000024
 */
void Game::BigFoot::Obj::startProgramedIK(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x2E0(r3)
  bl        -0x203E8
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802C917C
 * Size:	000024
 */
void Game::BigFoot::Obj::startIKMotion(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x2E0(r3)
  bl        -0x20284
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802C91A0
 * Size:	000024
 */
void Game::BigFoot::Obj::finishIKMotion(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x2E0(r3)
  bl        -0x20284
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802C91C4
 * Size:	000024
 */
void Game::BigFoot::Obj::forceFinishIKMotion(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x2E0(r3)
  bl        -0x2029C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802C91E8
 * Size:	000024
 */
void Game::BigFoot::Obj::isFinishIKMotion(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x2E0(r3)
  bl        -0x20198
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802C920C
 * Size:	000024
 */
void Game::BigFoot::Obj::startBlendMotion(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x2E0(r3)
  bl        -0x202D0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802C9230
 * Size:	000024
 */
void Game::BigFoot::Obj::finishBlendMotion(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x2E0(r3)
  bl        -0x20298
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802C9254
 * Size:	000020
 */
void Game::BigFoot::Obj::getTraceCentrePosition(void)
{
/*
.loc_0x0:
  lwz       r4, 0x2E0(r4)
  lfs       f0, 0x44(r4)
  stfs      f0, 0x0(r3)
  lfs       f0, 0x48(r4)
  stfs      f0, 0x4(r3)
  lfs       f0, 0x4C(r4)
  stfs      f0, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802C9274
 * Size:	000024
 */
void Game::BigFoot::Obj::isCollisionCheck( (CollPart *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x2E0(r3)
  bl        -0x20090
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802C9298
 * Size:	000048
 */
void Game::BigFoot::Obj::createShadowSystem(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  li        r3, 0xB0
  bl        -0x2A540C
  mr.       r0, r3
  beq-      .loc_0x30
  mr        r4, r31
  bl        -0x1AB0
  mr        r0, r3

.loc_0x30:
  stw       r0, 0x2EC(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802C92E0
 * Size:	000074
 */
void Game::BigFoot::Obj::setupShadowSystem(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r27, r3
  lwz       r3, 0x2EC(r3)
  bl        -0x18DC
  li        r29, 0
  mr        r30, r27

.loc_0x24:
  li        r28, 0
  mr        r31, r30

.loc_0x2C:
  lwz       r3, 0x2EC(r27)
  mr        r4, r29
  mr        r5, r28
  addi      r6, r31, 0x2F0
  bl        -0x17B4
  addi      r28, r28, 0x1
  addi      r31, r31, 0xC
  cmpwi     r28, 0x4
  blt+      .loc_0x2C
  addi      r29, r29, 0x1
  addi      r30, r30, 0x30
  cmpwi     r29, 0x4
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
 * Address:	802C9354
 * Size:	000024
 */
void Game::BigFoot::Obj::doAnimationShadowSystem(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x2EC(r3)
  bl        -0x17E4
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802C9378
 * Size:	000054
 */
void Game::BigFoot::Obj::createMaterialAnimation(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  li        r3, 0xC
  bl        -0x2A54F0
  mr.       r31, r3
  beq-      .loc_0x38
  bl        0x16AFB4
  lis       r3, 0x804F
  subi      r0, r3, 0x3B74
  stw       r0, 0x0(r31)

.loc_0x38:
  stw       r31, 0x4A8(r30)
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
 * Address:	802C93CC
 * Size:	00003C
 */
void Game::BigFoot::Obj::startMaterialAnimation(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r4, r3
  stw       r0, 0x14(r1)
  lwz       r3, 0x4A8(r3)
  lwz       r4, 0x180(r4)
  lwz       r12, 0x0(r3)
  lwz       r4, 0x44(r4)
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
 * Address:	802C9408
 * Size:	0000F0
 */
void Game::BigFoot::Obj::updateMaterialAnimation(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stfd      f31, 0x10(r1)
  psq_st    f31,0x18(r1),0,0
  stw       r31, 0xC(r1)
  mr        r31, r3
  lbz       r0, 0x2DC(r3)
  cmplwi    r0, 0
  beq-      .loc_0xA0
  lwz       r4, 0x4A8(r31)
  lwz       r3, 0x4(r4)
  lfs       f31, 0x8(r4)
  cmplwi    r3, 0
  beq-      .loc_0x44
  bl        0x16AC60
  b         .loc_0x48

.loc_0x44:
  lfs       f1, -0x1C38(r2)

.loc_0x48:
  lfs       f0, -0x1BB8(r2)
  fcmpo     cr0, f31, f1
  lfs       f2, -0x1C34(r2)
  fsubs     f0, f1, f0
  fdivs     f31, f2, f0
  bge-      .loc_0x70
  lwz       r3, 0x4A8(r31)
  lfs       f1, -0x1BCC(r2)
  bl        0x16B0DC
  b         .loc_0x7C

.loc_0x70:
  lwz       r3, 0x4A8(r31)
  lfs       f1, -0x1C38(r2)
  bl        0x16B0CC

.loc_0x7C:
  lfs       f1, 0x2D4(r31)
  lfs       f0, -0x1C38(r2)
  fsubs     f1, f1, f31
  stfs      f1, 0x2D4(r31)
  lfs       f1, 0x2D4(r31)
  fcmpo     cr0, f1, f0
  bge-      .loc_0xD4
  stfs      f0, 0x2D4(r31)
  b         .loc_0xD4

.loc_0xA0:
  lwz       r3, 0xC0(r31)
  lfs       f1, 0x200(r31)
  lfs       f0, 0x104(r3)
  lfs       f2, -0x1C34(r2)
  fdivs     f0, f1, f0
  lfs       f1, -0x1BB8(r2)
  lwz       r3, 0x4A8(r31)
  fsubs     f0, f2, f0
  fmuls     f1, f1, f0
  bl        0x16AF10
  lwz       r3, 0x4A8(r31)
  lfs       f1, -0x1C38(r2)
  bl        0x16B074

.loc_0xD4:
  psq_l     f31,0x18(r1),0,0
  lwz       r0, 0x24(r1)
  lfd       f31, 0x10(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	802C94F8
 * Size:	000090
 */
void Game::BigFoot::Obj::setupCollision(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lis       r4, 0x8049
  stw       r0, 0x34(r1)
  subi      r6, r4, 0x4858
  stw       r31, 0x2C(r1)
  addi      r31, r1, 0x8
  stw       r30, 0x28(r1)
  li        r30, 0
  stw       r29, 0x24(r1)
  mr        r29, r3
  lwz       r5, 0x0(r6)
  lwz       r4, 0x4(r6)
  lwz       r3, 0x8(r6)
  lwz       r0, 0xC(r6)
  stw       r5, 0x8(r1)
  stw       r4, 0xC(r1)
  stw       r3, 0x10(r1)
  stw       r0, 0x14(r1)

.loc_0x4C:
  lwz       r3, 0x114(r29)
  lwz       r4, 0x0(r31)
  bl        -0x193708
  cmplwi    r3, 0
  beq-      .loc_0x64
  bl        -0x1921BC

.loc_0x64:
  addi      r30, r30, 0x1
  addi      r31, r31, 0x4
  cmpwi     r30, 0x4
  blt+      .loc_0x4C
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r29, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	802C9588
 * Size:	0000A4
 */
void Game::BigFoot::Obj::createItemAndEnemy(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stw       r31, 0x4C(r1)
  stw       r30, 0x48(r1)
  mr        r30, r3
  addi      r3, r30, 0x250
  bl        -0x15BD1C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x8C
  lwz       r3, -0x6E20(r13)
  li        r4, 0x44
  bl        -0x1BB914
  mr.       r31, r3
  beq-      .loc_0x8C
  addi      r3, r1, 0x14
  bl        -0x19A9A4
  lfs       f0, 0x1FC(r30)
  mr        r3, r30
  addi      r4, r1, 0x14
  stfs      f0, 0x20(r1)
  lwz       r12, 0x0(r30)
  lwz       r12, 0x268(r12)
  mtctr     r12
  bctrl     
  lfs       f0, -0x1C38(r2)
  mr        r3, r31
  lfs       f1, -0x1C18(r2)
  addi      r4, r1, 0x14
  stfs      f0, 0x8(r1)
  addi      r6, r1, 0x8
  li        r5, 0x1E
  stfs      f0, 0xC(r1)
  stfs      f0, 0x10(r1)
  bl        0xA4918

.loc_0x8C:
  lwz       r0, 0x54(r1)
  lwz       r31, 0x4C(r1)
  lwz       r30, 0x48(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	802C962C
 * Size:	0000C8
 */
void Game::BigFoot::Obj::startBossChargeBGM(void)
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
  subi      r3, r3, 0x4848
  li        r4, 0x454
  subi      r5, r5, 0x4830
  crclr     6, 0x6
  bl        -0x29F080

.loc_0x98:
  mr        r3, r30
  li        r4, 0x2
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
 * Address:	802C96F4
 * Size:	0000C8
 */
void Game::BigFoot::Obj::startBossAttackLoopBGM(void)
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
  subi      r3, r3, 0x4848
  li        r4, 0x454
  subi      r5, r5, 0x4830
  crclr     6, 0x6
  bl        -0x29F148

.loc_0x98:
  mr        r3, r30
  li        r4, 0x8
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
 * Address:	802C97BC
 * Size:	0000C8
 */
void Game::BigFoot::Obj::finishBossAttackLoopBGM(void)
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
  subi      r3, r3, 0x4848
  li        r4, 0x454
  subi      r5, r5, 0x4830
  crclr     6, 0x6
  bl        -0x29F210

.loc_0x98:
  mr        r3, r30
  li        r4, 0x1
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
 * Address:	802C9884
 * Size:	0000D4
 */
void Game::BigFoot::Obj::startStoneStateBossAttackLoopBGM(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  lbz       r0, 0x2DE(r3)
  cmplwi    r0, 0
  beq-      .loc_0xBC
  lwz       r30, 0x28C(r3)
  li        r31, 0
  mr        r3, r30
  lwz       r12, 0x28(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x5
  beq-      .loc_0x7C
  mr        r3, r30
  lwz       r12, 0x28(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x6
  beq-      .loc_0x7C
  mr        r3, r30
  lwz       r12, 0x28(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x7
  bne-      .loc_0x80

.loc_0x7C:
  li        r31, 0x1

.loc_0x80:
  rlwinm.   r0,r31,0,24,31
  bne-      .loc_0xA4
  lis       r3, 0x8049
  lis       r5, 0x8049
  subi      r3, r3, 0x4848
  li        r4, 0x454
  subi      r5, r5, 0x4830
  crclr     6, 0x6
  bl        -0x29F2E4

.loc_0xA4:
  mr        r3, r30
  li        r4, 0x1
  lwz       r12, 0x28(r30)
  lwz       r12, 0xD4(r12)
  mtctr     r12
  bctrl     

.loc_0xBC:
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
 * Address:	802C9958
 * Size:	0000D4
 */
void Game::BigFoot::Obj::finishStoneStateBossAttackLoopBGM(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  lbz       r0, 0x2DE(r3)
  cmplwi    r0, 0
  beq-      .loc_0xBC
  lwz       r30, 0x28C(r3)
  li        r31, 0
  mr        r3, r30
  lwz       r12, 0x28(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x5
  beq-      .loc_0x7C
  mr        r3, r30
  lwz       r12, 0x28(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x6
  beq-      .loc_0x7C
  mr        r3, r30
  lwz       r12, 0x28(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x7
  bne-      .loc_0x80

.loc_0x7C:
  li        r31, 0x1

.loc_0x80:
  rlwinm.   r0,r31,0,24,31
  bne-      .loc_0xA4
  lis       r3, 0x8049
  lis       r5, 0x8049
  subi      r3, r3, 0x4848
  li        r4, 0x454
  subi      r5, r5, 0x4830
  crclr     6, 0x6
  bl        -0x29F3B8

.loc_0xA4:
  mr        r3, r30
  li        r4, 0x8
  lwz       r12, 0x28(r30)
  lwz       r12, 0xD4(r12)
  mtctr     r12
  bctrl     

.loc_0xBC:
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
 * Address:	802C9A2C
 * Size:	0000FC
 */
void Game::BigFoot::Obj::updateBossBGM(void)
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
  subi      r3, r3, 0x4848
  li        r4, 0x454
  subi      r5, r5, 0x4830
  crclr     6, 0x6
  bl        -0x29F488

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
 * Address:	802C9B28
 * Size:	0000BC
 */
void Game::BigFoot::Obj::resetBossAppearBGM(void)
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
  subi      r3, r3, 0x4848
  li        r4, 0x454
  subi      r5, r5, 0x4830
  crclr     6, 0x6
  bl        -0x29F57C

.loc_0x98:
  mr        r3, r30
  li        r4, 0
  bl        0x195E28
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
 * Address:	802C9BE4
 * Size:	0000BC
 */
void Game::BigFoot::Obj::setBossAppearBGM(void)
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
  subi      r3, r3, 0x4848
  li        r4, 0x454
  subi      r5, r5, 0x4830
  crclr     6, 0x6
  bl        -0x29F638

.loc_0x98:
  mr        r3, r30
  li        r4, 0x1
  bl        0x195D6C
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
 * Address:	802C9CA0
 * Size:	0006C8
 */
void Game::BigFoot::Obj::createEffect(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  lis       r12, 0x804E
  lis       r11, 0x804D
  stw       r0, 0x54(r1)
  lis       r10, 0x804E
  lis       r9, 0x804D
  lis       r8, 0x804D
  stmw      r14, 0x8(r1)
  mr        r16, r3
  lis       r14, 0x804E
  lis       r7, 0x804D
  lis       r6, 0x804D
  lis       r5, 0x804D
  lis       r4, 0x804E
  lis       r3, 0x804D
  addi      r14, r14, 0x698C
  addi      r12, r12, 0x6940
  subi      r11, r11, 0x2508
  addi      r10, r10, 0x6810
  addi      r9, r9, 0x1DA8
  subi      r8, r8, 0x25A0
  subi      r7, r7, 0x25EC
  addi      r6, r6, 0x1D5C
  addi      r5, r5, 0x1D10
  addi      r4, r4, 0x68A8
  addi      r3, r3, 0x1CC4
  mr        r31, r16
  mr        r30, r16
  mr        r29, r16
  addi      r20, r14, 0x14
  addi      r19, r12, 0x14
  addi      r28, r11, 0x14
  addi      r27, r10, 0x14
  addi      r26, r9, 0x14
  addi      r25, r8, 0x14
  addi      r24, r7, 0x14
  addi      r23, r6, 0x14
  addi      r22, r5, 0x14
  addi      r18, r4, 0x14
  addi      r21, r3, 0x14
  li        r17, 0

.loc_0xA8:
  li        r3, 0x2C
  bl        -0x2A5EA8
  mr.       r15, r3
  beq-      .loc_0xD4
  li        r4, 0
  li        r5, 0xF1
  li        r6, 0x25
  bl        0xE64DC
  lis       r3, 0x804D
  addi      r0, r3, 0x1DF4
  stw       r0, 0x0(r15)

.loc_0xD4:
  stw       r15, 0x3B0(r31)
  li        r3, 0x14
  bl        -0x2A5ED8
  cmplwi    r3, 0
  beq-      .loc_0x150
  lis       r5, 0x804B
  lis       r4, 0x804A
  subi      r0, r5, 0x5808
  lis       r6, 0x804E
  stw       r0, 0x0(r3)
  subi      r0, r4, 0x1D84
  lis       r5, 0x804E
  lis       r4, 0x804D
  stw       r0, 0x4(r3)
  addi      r0, r6, 0x698C
  li        r8, 0
  li        r7, 0x2B2
  stw       r0, 0x0(r3)
  addi      r6, r5, 0x6940
  li        r5, 0x23
  subi      r0, r4, 0x2508
  stw       r20, 0x4(r3)
  stw       r8, 0x8(r3)
  sth       r7, 0xC(r3)
  stb       r8, 0xE(r3)
  stw       r6, 0x0(r3)
  stw       r19, 0x4(r3)
  stw       r8, 0x10(r3)
  sth       r5, 0xC(r3)
  stw       r0, 0x0(r3)
  stw       r28, 0x4(r3)

.loc_0x150:
  stw       r3, 0x3C0(r31)
  mr        r15, r30
  li        r14, 0

.loc_0x15C:
  li        r3, 0x18
  bl        -0x2A5F5C
  cmplwi    r3, 0
  beq-      .loc_0x1D8
  lis       r5, 0x804B
  lis       r4, 0x804A
  subi      r0, r5, 0x5808
  lis       r6, 0x804E
  stw       r0, 0x0(r3)
  subi      r0, r4, 0x1D84
  lis       r5, 0x804E
  lis       r4, 0x804D
  stw       r0, 0x4(r3)
  addi      r0, r6, 0x698C
  li        r8, 0
  li        r7, 0x2B2
  stw       r0, 0x0(r3)
  addi      r6, r5, 0x6810
  li        r5, 0xF4
  addi      r0, r4, 0x1DA8
  stw       r20, 0x4(r3)
  stw       r8, 0x8(r3)
  sth       r7, 0xC(r3)
  stb       r8, 0xE(r3)
  stw       r6, 0x0(r3)
  stw       r27, 0x4(r3)
  stw       r8, 0x10(r3)
  stw       r8, 0x14(r3)
  sth       r5, 0xC(r3)
  stw       r0, 0x0(r3)
  stw       r26, 0x4(r3)

.loc_0x1D8:
  stw       r3, 0x3DC(r15)
  li        r3, 0x18
  bl        -0x2A5FDC
  cmplwi    r3, 0
  beq-      .loc_0x258
  lis       r5, 0x804B
  lis       r4, 0x804A
  subi      r0, r5, 0x5808
  lis       r6, 0x804E
  stw       r0, 0x0(r3)
  subi      r0, r4, 0x1D84
  lis       r5, 0x804E
  lis       r4, 0x804D
  stw       r0, 0x4(r3)
  addi      r0, r6, 0x698C
  li        r8, 0
  li        r7, 0x2B2
  stw       r0, 0x0(r3)
  addi      r6, r5, 0x6810
  li        r5, 0x1D
  subi      r0, r4, 0x25A0
  stw       r20, 0x4(r3)
  stw       r8, 0x8(r3)
  sth       r7, 0xC(r3)
  stb       r8, 0xE(r3)
  stw       r6, 0x0(r3)
  stw       r27, 0x4(r3)
  stw       r8, 0x10(r3)
  stw       r8, 0x14(r3)
  sth       r5, 0xC(r3)
  stw       r0, 0x0(r3)
  stw       r25, 0x4(r3)

.loc_0x258:
  addi      r14, r14, 0x1
  stw       r3, 0x40C(r15)
  cmpwi     r14, 0x3
  addi      r15, r15, 0x4
  blt+      .loc_0x15C
  li        r14, 0
  mr        r15, r29

.loc_0x274:
  li        r3, 0x14
  bl        -0x2A6074
  cmplwi    r3, 0
  beq-      .loc_0x2EC
  lis       r5, 0x804B
  lis       r4, 0x804A
  subi      r0, r5, 0x5808
  lis       r6, 0x804E
  stw       r0, 0x0(r3)
  subi      r0, r4, 0x1D84
  lis       r5, 0x804E
  lis       r4, 0x804D
  stw       r0, 0x4(r3)
  addi      r0, r6, 0x698C
  li        r8, 0
  li        r7, 0x2B2
  stw       r0, 0x0(r3)
  addi      r6, r5, 0x6940
  li        r5, 0x1E
  subi      r0, r4, 0x25EC
  stw       r20, 0x4(r3)
  stw       r8, 0x8(r3)
  sth       r7, 0xC(r3)
  stb       r8, 0xE(r3)
  stw       r6, 0x0(r3)
  stw       r19, 0x4(r3)
  stw       r8, 0x10(r3)
  sth       r5, 0xC(r3)
  stw       r0, 0x0(r3)
  stw       r24, 0x4(r3)

.loc_0x2EC:
  stw       r3, 0x43C(r15)
  li        r3, 0x18
  bl        -0x2A60F0
  cmplwi    r3, 0
  beq-      .loc_0x36C
  lis       r5, 0x804B
  lis       r4, 0x804A
  subi      r0, r5, 0x5808
  lis       r6, 0x804E
  stw       r0, 0x0(r3)
  subi      r0, r4, 0x1D84
  lis       r5, 0x804E
  lis       r4, 0x804D
  stw       r0, 0x4(r3)
  addi      r0, r6, 0x698C
  li        r8, 0
  li        r7, 0x2B2
  stw       r0, 0x0(r3)
  addi      r6, r5, 0x6810
  li        r5, 0xED
  addi      r0, r4, 0x1D5C
  stw       r20, 0x4(r3)
  stw       r8, 0x8(r3)
  sth       r7, 0xC(r3)
  stb       r8, 0xE(r3)
  stw       r6, 0x0(r3)
  stw       r27, 0x4(r3)
  stw       r8, 0x10(r3)
  stw       r8, 0x14(r3)
  sth       r5, 0xC(r3)
  stw       r0, 0x0(r3)
  stw       r23, 0x4(r3)

.loc_0x36C:
  addi      r14, r14, 0x1
  stw       r3, 0x45C(r15)
  cmpwi     r14, 0x2
  addi      r15, r15, 0x4
  blt+      .loc_0x274
  li        r3, 0x18
  bl        -0x2A6180
  cmplwi    r3, 0
  beq-      .loc_0x3FC
  lis       r5, 0x804B
  lis       r4, 0x804A
  subi      r0, r5, 0x5808
  lis       r6, 0x804E
  stw       r0, 0x0(r3)
  subi      r0, r4, 0x1D84
  lis       r5, 0x804E
  lis       r4, 0x804D
  stw       r0, 0x4(r3)
  addi      r0, r6, 0x698C
  li        r8, 0
  li        r7, 0x2B2
  stw       r0, 0x0(r3)
  addi      r6, r5, 0x6810
  li        r5, 0xEE
  addi      r0, r4, 0x1D10
  stw       r20, 0x4(r3)
  stw       r8, 0x8(r3)
  sth       r7, 0xC(r3)
  stb       r8, 0xE(r3)
  stw       r6, 0x0(r3)
  stw       r27, 0x4(r3)
  stw       r8, 0x10(r3)
  stw       r8, 0x14(r3)
  sth       r5, 0xC(r3)
  stw       r0, 0x0(r3)
  stw       r22, 0x4(r3)

.loc_0x3FC:
  stw       r3, 0x47C(r31)
  li        r3, 0x14
  bl        -0x2A6200
  cmplwi    r3, 0
  beq-      .loc_0x478
  lis       r5, 0x804B
  lis       r4, 0x804A
  subi      r0, r5, 0x5808
  lis       r6, 0x804E
  stw       r0, 0x0(r3)
  subi      r0, r4, 0x1D84
  lis       r5, 0x804E
  lis       r4, 0x804D
  stw       r0, 0x4(r3)
  addi      r0, r6, 0x698C
  li        r8, 0
  li        r7, 0x2B2
  stw       r0, 0x0(r3)
  addi      r6, r5, 0x68A8
  li        r5, 0xF3
  addi      r0, r4, 0x1CC4
  stw       r20, 0x4(r3)
  stw       r8, 0x8(r3)
  sth       r7, 0xC(r3)
  stb       r8, 0xE(r3)
  stw       r6, 0x0(r3)
  stw       r18, 0x4(r3)
  stw       r8, 0x10(r3)
  sth       r5, 0xC(r3)
  stw       r0, 0x0(r3)
  stw       r21, 0x4(r3)

.loc_0x478:
  addi      r17, r17, 0x1
  stw       r3, 0x498(r31)
  cmpwi     r17, 0x4
  addi      r31, r31, 0x4
  addi      r30, r30, 0xC
  addi      r29, r29, 0x8
  blt+      .loc_0xA8
  lis       r3, 0x804D
  mr        r15, r16
  subi      r3, r3, 0x26D0
  li        r14, 0
  addi      r17, r3, 0x14

.loc_0x4A8:
  li        r3, 0x14
  bl        -0x2A62A8
  cmplwi    r3, 0
  beq-      .loc_0x520
  lis       r5, 0x804B
  lis       r4, 0x804A
  subi      r0, r5, 0x5808
  lis       r6, 0x804E
  stw       r0, 0x0(r3)
  subi      r0, r4, 0x1D84
  lis       r5, 0x804E
  lis       r4, 0x804D
  stw       r0, 0x4(r3)
  addi      r0, r6, 0x698C
  li        r8, 0
  li        r7, 0x2B2
  stw       r0, 0x0(r3)
  addi      r6, r5, 0x6940
  li        r5, 0x27
  subi      r0, r4, 0x26D0
  stw       r20, 0x4(r3)
  stw       r8, 0x8(r3)
  sth       r7, 0xC(r3)
  stb       r8, 0xE(r3)
  stw       r6, 0x0(r3)
  stw       r19, 0x4(r3)
  stw       r8, 0x10(r3)
  sth       r5, 0xC(r3)
  stw       r0, 0x0(r3)
  stw       r17, 0x4(r3)

.loc_0x520:
  addi      r14, r14, 0x1
  stw       r3, 0x3D0(r15)
  cmpwi     r14, 0x3
  addi      r15, r15, 0x4
  blt+      .loc_0x4A8
  li        r3, 0x14
  bl        -0x2A6334
  cmplwi    r3, 0
  beq-      .loc_0x5B0
  lis       r5, 0x804B
  lis       r4, 0x804A
  subi      r0, r5, 0x5808
  lis       r6, 0x804E
  stw       r0, 0x0(r3)
  subi      r0, r4, 0x1D84
  lis       r5, 0x804E
  lis       r4, 0x804D
  stw       r0, 0x4(r3)
  addi      r0, r6, 0x698C
  addi      r4, r4, 0x1C78
  li        r8, 0
  stw       r0, 0x0(r3)
  li        r7, 0x2B2
  addi      r6, r5, 0x68A8
  li        r5, 0xEF
  stw       r20, 0x4(r3)
  addi      r0, r4, 0x14
  stw       r8, 0x8(r3)
  sth       r7, 0xC(r3)
  stb       r8, 0xE(r3)
  stw       r6, 0x0(r3)
  stw       r18, 0x4(r3)
  stw       r8, 0x10(r3)
  sth       r5, 0xC(r3)
  stw       r4, 0x0(r3)
  stw       r0, 0x4(r3)

.loc_0x5B0:
  stw       r3, 0x48C(r16)
  li        r3, 0x14
  bl        -0x2A63B4
  cmplwi    r3, 0
  beq-      .loc_0x630
  lis       r5, 0x804B
  lis       r4, 0x804A
  subi      r0, r5, 0x5808
  lis       r6, 0x804E
  stw       r0, 0x0(r3)
  subi      r0, r4, 0x1D84
  lis       r5, 0x804E
  lis       r4, 0x804D
  stw       r0, 0x4(r3)
  addi      r0, r6, 0x698C
  addi      r4, r4, 0x1C2C
  li        r8, 0
  stw       r0, 0x0(r3)
  li        r7, 0x2B2
  addi      r6, r5, 0x68A8
  li        r5, 0xF0
  stw       r20, 0x4(r3)
  addi      r0, r4, 0x14
  stw       r8, 0x8(r3)
  sth       r7, 0xC(r3)
  stb       r8, 0xE(r3)
  stw       r6, 0x0(r3)
  stw       r18, 0x4(r3)
  stw       r8, 0x10(r3)
  sth       r5, 0xC(r3)
  stw       r4, 0x0(r3)
  stw       r0, 0x4(r3)

.loc_0x630:
  stw       r3, 0x490(r16)
  li        r3, 0x14
  bl        -0x2A6434
  cmplwi    r3, 0
  beq-      .loc_0x6B0
  lis       r5, 0x804B
  lis       r4, 0x804A
  subi      r0, r5, 0x5808
  lis       r6, 0x804E
  stw       r0, 0x0(r3)
  subi      r0, r4, 0x1D84
  lis       r5, 0x804E
  lis       r4, 0x804D
  stw       r0, 0x4(r3)
  addi      r0, r6, 0x698C
  addi      r4, r4, 0x1BE0
  li        r8, 0
  stw       r0, 0x0(r3)
  li        r7, 0x2B2
  addi      r6, r5, 0x68A8
  li        r5, 0xF2
  stw       r20, 0x4(r3)
  addi      r0, r4, 0x14
  stw       r8, 0x8(r3)
  sth       r7, 0xC(r3)
  stb       r8, 0xE(r3)
  stw       r6, 0x0(r3)
  stw       r18, 0x4(r3)
  stw       r8, 0x10(r3)
  sth       r5, 0xC(r3)
  stw       r4, 0x0(r3)
  stw       r0, 0x4(r3)

.loc_0x6B0:
  stw       r3, 0x494(r16)
  lmw       r14, 0x8(r1)
  lwz       r0, 0x54(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	802CA368
 * Size:	0001E4
 */
void Game::BigFoot::Obj::setupEffect(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  lis       r4, 0x8049
  stw       r0, 0x44(r1)
  subi      r6, r4, 0x4824
  stmw      r24, 0x20(r1)
  mr        r25, r3
  addi      r27, r1, 0x8
  li        r26, 0
  mr        r31, r25
  mr        r30, r25
  mr        r29, r25
  mr        r28, r25
  lwz       r5, 0x0(r6)
  lwz       r4, 0x4(r6)
  lwz       r3, 0x8(r6)
  lwz       r0, 0xC(r6)
  stw       r5, 0x8(r1)
  stw       r4, 0xC(r1)
  stw       r3, 0x10(r1)
  stw       r0, 0x14(r1)

.loc_0x54:
  lwz       r3, 0x3B0(r30)
  addi      r4, r31, 0x314
  bl        0xE5F80
  lwz       r3, 0x3C0(r30)
  addi      r10, r31, 0x314
  li        r8, 0x1
  li        r5, 0x1
  stw       r10, 0x10(r3)
  mulli     r7, r8, 0xC
  addi      r9, r31, 0x2F0
  lwz       r4, 0x0(r27)
  lwz       r11, 0x3DC(r29)
  li        r8, 0x2
  addi      r12, r7, 0x2F0
  stw       r9, 0x10(r11)
  mulli     r6, r5, 0xC
  add       r12, r31, r12
  stw       r12, 0x14(r11)
  mr        r3, r9
  mulli     r7, r8, 0xC
  li        r8, 0x3
  lwz       r11, 0x40C(r29)
  addi      r24, r6, 0x2F0
  li        r5, 0x2
  stw       r9, 0x10(r11)
  addi      r9, r31, 0x2FC
  add       r24, r31, r24
  stw       r12, 0x14(r11)
  addi      r12, r7, 0x2F0
  add       r12, r31, r12
  addi      r0, r31, 0x308
  lwz       r11, 0x3E0(r29)
  mulli     r7, r8, 0xC
  stw       r9, 0x10(r11)
  mulli     r6, r5, 0xC
  stw       r12, 0x14(r11)
  lwz       r11, 0x410(r29)
  stw       r9, 0x10(r11)
  addi      r9, r31, 0x308
  stw       r12, 0x14(r11)
  addi      r12, r7, 0x2F0
  add       r12, r31, r12
  lwz       r11, 0x3E4(r29)
  stw       r9, 0x10(r11)
  stw       r12, 0x14(r11)
  lwz       r11, 0x414(r29)
  stw       r9, 0x10(r11)
  stw       r12, 0x14(r11)
  lwz       r5, 0x43C(r28)
  stw       r24, 0x10(r5)
  lwz       r5, 0x45C(r28)
  stw       r3, 0x10(r5)
  addi      r3, r31, 0x2FC
  stw       r24, 0x14(r5)
  addi      r24, r6, 0x2F0
  add       r24, r31, r24
  lwz       r5, 0x440(r28)
  stw       r24, 0x10(r5)
  lwz       r5, 0x460(r28)
  stw       r3, 0x10(r5)
  stw       r24, 0x14(r5)
  lwz       r3, 0x47C(r30)
  stw       r0, 0x10(r3)
  stw       r10, 0x14(r3)
  lwz       r3, 0x174(r25)
  bl        0x174B24
  bl        0x15F3DC
  lwz       r4, 0x498(r30)
  addi      r26, r26, 0x1
  cmpwi     r26, 0x4
  addi      r30, r30, 0x4
  stw       r3, 0x10(r4)
  addi      r29, r29, 0xC
  addi      r28, r28, 0x8
  addi      r27, r27, 0x4
  addi      r31, r31, 0x30
  blt+      .loc_0x54
  lwz       r3, 0x174(r25)
  subi      r4, r2, 0x1BB4
  bl        0x174AEC
  bl        0x15F3A4
  lwz       r5, 0x48C(r25)
  subi      r4, r2, 0x1BAC
  stw       r3, 0x10(r5)
  lwz       r3, 0x174(r25)
  bl        0x174AD4
  bl        0x15F38C
  lwz       r5, 0x490(r25)
  subi      r4, r2, 0x1C20
  stw       r3, 0x10(r5)
  lwz       r3, 0x174(r25)
  bl        0x174ABC
  bl        0x15F374
  lwz       r4, 0x494(r25)
  stw       r3, 0x10(r4)
  lmw       r24, 0x20(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	802CA54C
 * Size:	000228
 */
void Game::BigFoot::Obj::createOnGroundEffect( (int, Game::WaterBox *))
{
/*
.loc_0x0:
  stwu      r1, -0x80(r1)
  mflr      r0
  stw       r0, 0x84(r1)
  stw       r31, 0x7C(r1)
  mr        r31, r4
  stw       r30, 0x78(r1)
  mr        r30, r3
  stw       r29, 0x74(r1)
  stw       r28, 0x70(r1)
  mr        r28, r5
  mr        r5, r31
  lwz       r4, 0x2E0(r3)
  addi      r3, r1, 0x8
  bl        -0x213C4
  lfs       f2, 0x8(r1)
  cmplwi    r28, 0
  lfs       f1, 0xC(r1)
  lfs       f0, 0x10(r1)
  stfs      f2, 0x44(r1)
  stfs      f1, 0x48(r1)
  stfs      f0, 0x4C(r1)
  beq-      .loc_0x128
  mr        r3, r28
  lwz       r12, 0x0(r28)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x0(r3)
  lis       r3, 0x804B
  subi      r0, r3, 0x5808
  li        r5, 0
  lis       r3, 0x804E
  stw       r0, 0x50(r1)
  addi      r0, r3, 0x6A50
  lfs       f1, 0x44(r1)
  lfs       f0, 0x4C(r1)
  lis       r4, 0x804B
  lis       r3, 0x804D
  li        r8, 0x28
  subi      r9, r4, 0x5814
  li        r7, 0x29
  li        r6, 0x2A
  stw       r0, 0x50(r1)
  subi      r0, r3, 0x27B4
  addi      r3, r1, 0x50
  stfs      f2, 0x48(r1)
  addi      r4, r1, 0x34
  stw       r9, 0x34(r1)
  stfs      f1, 0x38(r1)
  stfs      f2, 0x3C(r1)
  stfs      f0, 0x40(r1)
  sth       r8, 0x54(r1)
  sth       r7, 0x56(r1)
  sth       r6, 0x58(r1)
  stw       r5, 0x5C(r1)
  stw       r5, 0x60(r1)
  stw       r5, 0x64(r1)
  stw       r0, 0x50(r1)
  bl        0xE4A88
  mulli     r4, r31, 0x30
  li        r3, 0x3849
  addi      r4, r4, 0x314
  add       r4, r30, r4
  bl        0x1A3A6C
  cmplwi    r3, 0
  beq-      .loc_0x18C
  lwz       r12, 0x10(r3)
  li        r4, 0
  lfs       f1, -0x1BA4(r2)
  li        r5, 0
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x18C

.loc_0x128:
  lis       r3, 0x804B
  li        r5, 0
  subi      r0, r3, 0x5808
  lis       r3, 0x804E
  stw       r0, 0x14(r1)
  addi      r0, r3, 0x6A64
  lis       r4, 0x804B
  lis       r3, 0x804D
  stw       r0, 0x14(r1)
  subi      r4, r4, 0x5814
  addi      r0, r3, 0x1BCC
  li        r7, 0xF5
  li        r6, 0xF6
  stw       r4, 0x24(r1)
  addi      r3, r1, 0x14
  addi      r4, r1, 0x24
  stfs      f2, 0x28(r1)
  stfs      f1, 0x2C(r1)
  stfs      f0, 0x30(r1)
  sth       r7, 0x18(r1)
  sth       r6, 0x1A(r1)
  stw       r5, 0x1C(r1)
  stw       r5, 0x20(r1)
  stw       r0, 0x14(r1)
  bl        0xE4940

.loc_0x18C:
  lbz       r0, 0x2DD(r30)
  cmplwi    r0, 0
  beq-      .loc_0x1CC
  mulli     r0, r31, 0xC
  li        r28, 0
  add       r29, r30, r0

.loc_0x1A4:
  lwz       r3, 0x3DC(r29)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r28, r28, 0x1
  addi      r29, r29, 0x4
  cmpwi     r28, 0x3
  blt+      .loc_0x1A4

.loc_0x1CC:
  mulli     r4, r31, 0x30
  li        r3, 0x5896
  addi      r4, r4, 0x314
  add       r4, r30, r4
  bl        0x1A398C
  lwz       r3, -0x6960(r13)
  addi      r5, r1, 0x44
  li        r4, 0x6
  li        r6, 0x2
  bl        -0x78500
  lwz       r3, -0x6958(r13)
  addi      r5, r1, 0x44
  li        r4, 0xE
  li        r6, 0x2
  bl        -0x76FD0
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
 * Address:	802CA774
 * Size:	000164
 */
void Game::BigFoot::Obj::createOffGroundEffect( (int, Game::WaterBox *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmplwi    r5, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  beq-      .loc_0x40
  rlwinm    r0,r4,2,0,29
  li        r4, 0
  add       r3, r31, r0
  lwz       r3, 0x3C0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x60

.loc_0x40:
  rlwinm    r0,r4,2,0,29
  li        r4, 0
  add       r3, r31, r0
  lwz       r3, 0x3B0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x60:
  lbz       r0, 0x2DE(r31)
  cmplwi    r0, 0
  beq-      .loc_0x9C
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xF4(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  li        r4, 0x584B
  li        r5, 0
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x150

.loc_0x9C:
  lwz       r3, 0xC0(r31)
  lfs       f2, 0x200(r31)
  lfs       f1, 0x104(r3)
  lfs       f0, -0x1BA0(r2)
  fdivs     f1, f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0xE8
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xF4(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  li        r4, 0x584A
  li        r5, 0
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x150

.loc_0xE8:
  lfs       f0, -0x1B9C(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x124
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xF4(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  li        r4, 0x5849
  li        r5, 0
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x150

.loc_0x124:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xF4(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  li        r4, 0x5848
  li        r5, 0
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     

.loc_0x150:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802CA8D8
 * Size:	0001A0
 */
void Game::BigFoot::Obj::startPinchJointEffect(void)
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
  stmw      r26, 0x38(r1)
  addi      r30, r1, 0x18
  lfd       f31, -0x1C08(r2)
  lfs       f30, -0x1C10(r2)
  mr        r29, r3
  lfs       f29, -0x1C00(r2)
  mr        r31, r30
  li        r27, 0
  lis       r28, 0x4330

.loc_0x48:
  bl        -0x201380
  xoris     r0, r3, 0x8000
  addi      r27, r27, 0x1
  stw       r0, 0x2C(r1)
  cmpwi     r27, 0x3
  stw       r28, 0x28(r1)
  lfd       f0, 0x28(r1)
  fsubs     f0, f0, f31
  fdivs     f0, f0, f30
  fmuls     f0, f29, f0
  fctiwz    f0, f0
  stfd      f0, 0x30(r1)
  lwz       r3, 0x34(r1)
  addi      r0, r3, 0x1
  stw       r0, 0x0(r31)
  addi      r31, r31, 0x4
  blt+      .loc_0x48
  li        r5, 0
  li        r4, 0x1
  li        r3, 0x2
  li        r0, 0x3
  addi      r31, r1, 0x8
  stw       r5, 0x8(r1)
  lfd       f29, -0x1C08(r2)
  mr        r27, r31
  stw       r4, 0xC(r1)
  li        r26, 0
  lfs       f30, -0x1C10(r2)
  lis       r28, 0x4330
  stw       r3, 0x10(r1)
  lfs       f31, -0x1B98(r2)
  stw       r0, 0x14(r1)

.loc_0xC8:
  bl        -0x201400
  xoris     r0, r3, 0x8000
  addi      r26, r26, 0x1
  stw       r0, 0x34(r1)
  cmpwi     r26, 0x4
  lwz       r4, 0x0(r27)
  stw       r28, 0x30(r1)
  lfd       f0, 0x30(r1)
  fsubs     f0, f0, f29
  fdivs     f0, f0, f30
  fmuls     f0, f31, f0
  fctiwz    f0, f0
  stfd      f0, 0x28(r1)
  lwz       r0, 0x2C(r1)
  rlwinm    r3,r0,2,0,29
  lwzx      r0, r31, r3
  stw       r0, 0x0(r27)
  addi      r27, r27, 0x4
  stwx      r4, r31, r3
  blt+      .loc_0xC8
  mr        r27, r29
  li        r26, 0

.loc_0x120:
  lwz       r3, 0x0(r31)
  li        r4, 0
  lwz       r0, 0x0(r30)
  mulli     r5, r3, 0x30
  lwz       r3, 0x3D0(r27)
  mulli     r0, r0, 0xC
  add       r5, r5, r0
  addi      r0, r5, 0x2F0
  add       r0, r29, r0
  stw       r0, 0x10(r3)
  lwz       r3, 0x3D0(r27)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r26, r26, 0x1
  addi      r31, r31, 0x4
  cmpwi     r26, 0x3
  addi      r27, r27, 0x4
  addi      r30, r30, 0x4
  blt+      .loc_0x120
  psq_l     f31,0x78(r1),0,0
  lfd       f31, 0x70(r1)
  psq_l     f30,0x68(r1),0,0
  lfd       f30, 0x60(r1)
  psq_l     f29,0x58(r1),0,0
  lfd       f29, 0x50(r1)
  lmw       r26, 0x38(r1)
  lwz       r0, 0x84(r1)
  mtlr      r0
  addi      r1, r1, 0x80
  blr
*/
}

/*
 * --INFO--
 * Address:	802CAA78
 * Size:	000058
 */
void Game::BigFoot::Obj::finishPinchJointEffect(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r30, 0x8(r1)
  li        r30, 0

.loc_0x1C:
  lwz       r3, 0x3D0(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  addi      r30, r30, 0x1
  addi      r31, r31, 0x4
  cmpwi     r30, 0x3
  blt+      .loc_0x1C
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
 * Address:	802CAAD0
 * Size:	0001C0
 */
void Game::BigFoot::Obj::startDeadEffect(void)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  lis       r6, 0x804B
  lis       r5, 0x804B
  stw       r0, 0x64(r1)
  lis       r4, 0x804E
  stmw      r18, 0x28(r1)
  mr        r27, r3
  lis       r3, 0x804D
  subi      r21, r6, 0x5814
  mr        r31, r27
  mr        r30, r27
  mr        r29, r27
  mr        r28, r27
  subi      r22, r5, 0x5808
  addi      r23, r4, 0x6A78
  subi      r26, r3, 0x27DC
  li        r19, 0

.loc_0x48:
  addi      r20, r31, 0xC
  li        r18, 0x1
  li        r24, 0x1C
  li        r25, 0

.loc_0x58:
  stw       r21, 0x14(r1)
  addi      r3, r1, 0x8
  addi      r4, r1, 0x14
  lfs       f0, 0x2F0(r20)
  stfs      f0, 0x18(r1)
  lfs       f0, 0x2F4(r20)
  stfs      f0, 0x1C(r1)
  lfs       f0, 0x2F8(r20)
  stw       r22, 0x8(r1)
  stw       r23, 0x8(r1)
  stfs      f0, 0x20(r1)
  sth       r24, 0xC(r1)
  stw       r25, 0x10(r1)
  stw       r26, 0x8(r1)
  bl        0xE4424
  addi      r18, r18, 0x1
  addi      r20, r20, 0xC
  cmpwi     r18, 0x3
  blt+      .loc_0x58
  li        r18, 0
  mr        r20, r30

.loc_0xAC:
  lwz       r3, 0x40C(r20)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r18, r18, 0x1
  addi      r20, r20, 0x4
  cmpwi     r18, 0x3
  blt+      .loc_0xAC
  li        r18, 0
  mr        r20, r29

.loc_0xDC:
  lwz       r3, 0x43C(r20)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x45C(r20)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r18, r18, 0x1
  addi      r20, r20, 0x4
  cmpwi     r18, 0x2
  blt+      .loc_0xDC
  lwz       r3, 0x47C(r28)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r19, r19, 0x1
  addi      r30, r30, 0xC
  cmpwi     r19, 0x4
  addi      r29, r29, 0x8
  addi      r28, r28, 0x4
  addi      r31, r31, 0x30
  blt+      .loc_0x48
  lwz       r3, 0x48C(r27)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x490(r27)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  li        r21, 0
  mr        r20, r27

.loc_0x188:
  lwz       r3, 0x3D0(r20)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  addi      r21, r21, 0x1
  addi      r20, r20, 0x4
  cmpwi     r21, 0x3
  blt+      .loc_0x188
  lmw       r18, 0x28(r1)
  lwz       r0, 0x64(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	802CAC90
 * Size:	000254
 */
void Game::BigFoot::Obj::updatePinchLife(void)
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
  stmw      r26, 0x38(r1)
  lwz       r12, 0x0(r3)
  mr        r29, r3
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x228
  lwz       r3, 0xC0(r29)
  lbz       r0, 0x2DD(r29)
  lfs       f1, 0x200(r29)
  lfs       f0, 0x104(r3)
  cmplwi    r0, 0
  fdivs     f1, f1, f0
  beq-      .loc_0xA4
  lfs       f0, -0x1B9C(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x228
  li        r28, 0
  mr        r27, r29

.loc_0x74:
  lwz       r3, 0x3D0(r27)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  addi      r28, r28, 0x1
  addi      r27, r27, 0x4
  cmpwi     r28, 0x3
  blt+      .loc_0x74
  li        r0, 0
  stb       r0, 0x2DD(r29)
  b         .loc_0x228

.loc_0xA4:
  lfs       f0, -0x1B9C(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x228
  addi      r30, r1, 0x8
  lfd       f31, -0x1C08(r2)
  lfs       f30, -0x1C10(r2)
  mr        r31, r30
  lfs       f29, -0x1C00(r2)
  li        r27, 0
  lis       r28, 0x4330

.loc_0xCC:
  bl        -0x2017BC
  xoris     r0, r3, 0x8000
  addi      r27, r27, 0x1
  stw       r0, 0x2C(r1)
  cmpwi     r27, 0x3
  stw       r28, 0x28(r1)
  lfd       f0, 0x28(r1)
  fsubs     f0, f0, f31
  fdivs     f0, f0, f30
  fmuls     f0, f29, f0
  fctiwz    f0, f0
  stfd      f0, 0x30(r1)
  lwz       r3, 0x34(r1)
  addi      r0, r3, 0x1
  stw       r0, 0x0(r31)
  addi      r31, r31, 0x4
  blt+      .loc_0xCC
  li        r27, 0
  li        r4, 0x1
  li        r3, 0x2
  li        r0, 0x3
  addi      r31, r1, 0x14
  stw       r27, 0x14(r1)
  lfd       f29, -0x1C08(r2)
  mr        r26, r31
  stw       r4, 0x18(r1)
  lis       r28, 0x4330
  lfs       f30, -0x1C10(r2)
  stw       r3, 0x1C(r1)
  lfs       f31, -0x1B98(r2)
  stw       r0, 0x20(r1)

.loc_0x148:
  bl        -0x201838
  xoris     r0, r3, 0x8000
  addi      r27, r27, 0x1
  stw       r0, 0x34(r1)
  cmpwi     r27, 0x4
  lwz       r4, 0x0(r26)
  stw       r28, 0x30(r1)
  lfd       f0, 0x30(r1)
  fsubs     f0, f0, f29
  fdivs     f0, f0, f30
  fmuls     f0, f31, f0
  fctiwz    f0, f0
  stfd      f0, 0x28(r1)
  lwz       r0, 0x2C(r1)
  rlwinm    r3,r0,2,0,29
  lwzx      r0, r31, r3
  stw       r0, 0x0(r26)
  addi      r26, r26, 0x4
  stwx      r4, r31, r3
  blt+      .loc_0x148
  mr        r26, r29
  li        r28, 0

.loc_0x1A0:
  lwz       r3, 0x0(r31)
  li        r4, 0
  lwz       r0, 0x0(r30)
  mulli     r5, r3, 0x30
  lwz       r3, 0x3D0(r26)
  mulli     r0, r0, 0xC
  add       r5, r5, r0
  addi      r0, r5, 0x2F0
  add       r0, r29, r0
  stw       r0, 0x10(r3)
  lwz       r3, 0x3D0(r26)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r28, r28, 0x1
  addi      r31, r31, 0x4
  cmpwi     r28, 0x3
  addi      r26, r26, 0x4
  addi      r30, r30, 0x4
  blt+      .loc_0x1A0
  li        r0, 0x1
  mr        r3, r29
  stb       r0, 0x2DD(r29)
  lwz       r12, 0x0(r29)
  lwz       r12, 0xF4(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  li        r4, 0x5844
  li        r5, 0
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     

.loc_0x228:
  psq_l     f31,0x78(r1),0,0
  lfd       f31, 0x70(r1)
  psq_l     f30,0x68(r1),0,0
  lfd       f30, 0x60(r1)
  psq_l     f29,0x58(r1),0,0
  lfd       f29, 0x50(r1)
  lmw       r26, 0x38(r1)
  lwz       r0, 0x84(r1)
  mtlr      r0
  addi      r1, r1, 0x80
  blr
*/
}

/*
 * --INFO--
 * Address:	802CAEE4
 * Size:	000074
 */
void Game::BigFoot::Obj::startFurEffect(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r30, 0x8(r1)
  lwz       r3, 0x494(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  li        r30, 0

.loc_0x34:
  lwz       r3, 0x498(r31)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r30, r30, 0x1
  addi      r31, r31, 0x4
  cmpwi     r30, 0x4
  blt+      .loc_0x34
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
 * Address:	802CAF58
 * Size:	00006C
 */
void Game::BigFoot::Obj::finishFurEffect(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r30, 0x8(r1)
  lwz       r3, 0x494(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  li        r30, 0

.loc_0x30:
  lwz       r3, 0x498(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  addi      r30, r30, 0x1
  addi      r31, r31, 0x4
  cmpwi     r30, 0x4
  blt+      .loc_0x30
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
 * Address:	802CAFC4
 * Size:	000068
 */
void Game::BigFoot::Obj::updateDeadFurEffect(void)
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
  lwz       r3, 0x494(r3)
  lfs       f1, 0x2D4(r29)
  bl        0x121A7C
  li        r30, 0
  mr        r31, r29

.loc_0x30:
  lwz       r3, 0x498(r31)
  lfs       f1, 0x2D4(r29)
  bl        0x121A80
  addi      r30, r30, 0x1
  addi      r31, r31, 0x4
  cmpwi     r30, 0x4
  blt+      .loc_0x30
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
 * Address:	802CB02C
 * Size:	0001D8
 */
void Game::BigFoot::Obj::effectDrawOn(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r27, r3
  li        r30, 0
  mr        r31, r27

.loc_0x1C:
  lwz       r3, 0x3B0(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x3C0(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x44(r12)
  mtctr     r12
  bctrl     
  addi      r30, r30, 0x1
  addi      r31, r31, 0x4
  cmpwi     r30, 0x4
  blt+      .loc_0x1C
  li        r30, 0
  mr        r31, r27

.loc_0x5C:
  lwz       r3, 0x3D0(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x44(r12)
  mtctr     r12
  bctrl     
  addi      r30, r30, 0x1
  addi      r31, r31, 0x4
  cmpwi     r30, 0x3
  blt+      .loc_0x5C
  li        r29, 0
  mr        r30, r27

.loc_0x88:
  li        r28, 0
  mr        r31, r30

.loc_0x90:
  lwz       r3, 0x3DC(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x44(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x40C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x44(r12)
  mtctr     r12
  bctrl     
  addi      r28, r28, 0x1
  addi      r31, r31, 0x4
  cmpwi     r28, 0x3
  blt+      .loc_0x90
  addi      r29, r29, 0x1
  addi      r30, r30, 0xC
  cmpwi     r29, 0x4
  blt+      .loc_0x88
  li        r28, 0
  mr        r31, r27

.loc_0xE0:
  li        r29, 0
  mr        r30, r31

.loc_0xE8:
  lwz       r3, 0x43C(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x44(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x45C(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x44(r12)
  mtctr     r12
  bctrl     
  addi      r29, r29, 0x1
  addi      r30, r30, 0x4
  cmpwi     r29, 0x2
  blt+      .loc_0xE8
  addi      r28, r28, 0x1
  addi      r31, r31, 0x8
  cmpwi     r28, 0x4
  blt+      .loc_0xE0
  li        r28, 0
  mr        r30, r27

.loc_0x138:
  lwz       r3, 0x47C(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x44(r12)
  mtctr     r12
  bctrl     
  addi      r28, r28, 0x1
  addi      r30, r30, 0x4
  cmpwi     r28, 0x4
  blt+      .loc_0x138
  lwz       r3, 0x48C(r27)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x44(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x490(r27)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x44(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x494(r27)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x44(r12)
  mtctr     r12
  bctrl     
  li        r28, 0
  mr        r30, r27

.loc_0x1A0:
  lwz       r3, 0x498(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x44(r12)
  mtctr     r12
  bctrl     
  addi      r28, r28, 0x1
  addi      r30, r30, 0x4
  cmpwi     r28, 0x4
  blt+      .loc_0x1A0
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	802CB204
 * Size:	0001D8
 */
void Game::BigFoot::Obj::effectDrawOff(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r27, r3
  li        r30, 0
  mr        r31, r27

.loc_0x1C:
  lwz       r3, 0x3B0(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x3C0(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  addi      r30, r30, 0x1
  addi      r31, r31, 0x4
  cmpwi     r30, 0x4
  blt+      .loc_0x1C
  li        r30, 0
  mr        r31, r27

.loc_0x5C:
  lwz       r3, 0x3D0(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  addi      r30, r30, 0x1
  addi      r31, r31, 0x4
  cmpwi     r30, 0x3
  blt+      .loc_0x5C
  li        r29, 0
  mr        r30, r27

.loc_0x88:
  li        r28, 0
  mr        r31, r30

.loc_0x90:
  lwz       r3, 0x3DC(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x40C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  addi      r28, r28, 0x1
  addi      r31, r31, 0x4
  cmpwi     r28, 0x3
  blt+      .loc_0x90
  addi      r29, r29, 0x1
  addi      r30, r30, 0xC
  cmpwi     r29, 0x4
  blt+      .loc_0x88
  li        r28, 0
  mr        r31, r27

.loc_0xE0:
  li        r29, 0
  mr        r30, r31

.loc_0xE8:
  lwz       r3, 0x43C(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x45C(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  addi      r29, r29, 0x1
  addi      r30, r30, 0x4
  cmpwi     r29, 0x2
  blt+      .loc_0xE8
  addi      r28, r28, 0x1
  addi      r31, r31, 0x8
  cmpwi     r28, 0x4
  blt+      .loc_0xE0
  li        r28, 0
  mr        r30, r27

.loc_0x138:
  lwz       r3, 0x47C(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  addi      r28, r28, 0x1
  addi      r30, r30, 0x4
  cmpwi     r28, 0x4
  blt+      .loc_0x138
  lwz       r3, 0x48C(r27)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x490(r27)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x494(r27)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  li        r28, 0
  mr        r30, r27

.loc_0x1A0:
  lwz       r3, 0x498(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  addi      r28, r28, 0x1
  addi      r30, r30, 0x4
  cmpwi     r28, 0x4
  blt+      .loc_0x1A0
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	802CB3DC
 * Size:	000038
 */
void Game::BigFoot::Obj::addShadowScale(void)
{
/*
.loc_0x0:
  lfs       f3, 0x2D4(r3)
  lfs       f2, -0x1C34(r2)
  fcmpo     cr0, f3, f2
  bgelr-    
  lwz       r4, -0x6514(r13)
  lfs       f1, -0x1C00(r2)
  lfs       f0, 0x54(r4)
  fmadds    f0, f1, f0, f3
  stfs      f0, 0x2D4(r3)
  lfs       f0, 0x2D4(r3)
  fcmpo     cr0, f0, f2
  blelr-    
  stfs      f2, 0x2D4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802CB414
 * Size:	00009C
 */
void efx::TOdamaFur1::__dt(void)
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
  beq-      .loc_0x80
  lis       r3, 0x804D
  addi      r3, r3, 0x1BE0
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r3, 0x804E
  addi      r3, r3, 0x68A8
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r4, 0x804E
  addi      r3, r30, 0x4
  addi      r5, r4, 0x698C
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x14
  stw       r0, 0x4(r30)
  bl        -0x23B7E4

.loc_0x70:
  extsh.    r0, r31
  ble-      .loc_0x80
  mr        r3, r30
  bl        -0x2A73DC

.loc_0x80:
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
 * Address:	802CB4B0
 * Size:	00009C
 */
void efx::TOdamaDeadHahenC2::__dt(void)
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
  beq-      .loc_0x80
  lis       r3, 0x804D
  addi      r3, r3, 0x1C2C
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r3, 0x804E
  addi      r3, r3, 0x68A8
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r4, 0x804E
  addi      r3, r30, 0x4
  addi      r5, r4, 0x698C
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x14
  stw       r0, 0x4(r30)
  bl        -0x23B880

.loc_0x70:
  extsh.    r0, r31
  ble-      .loc_0x80
  mr        r3, r30
  bl        -0x2A7478

.loc_0x80:
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
 * Address:	802CB54C
 * Size:	00009C
 */
void efx::TOdamaDeadHahenC1::__dt(void)
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
  beq-      .loc_0x80
  lis       r3, 0x804D
  addi      r3, r3, 0x1C78
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r3, 0x804E
  addi      r3, r3, 0x68A8
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r4, 0x804E
  addi      r3, r30, 0x4
  addi      r5, r4, 0x698C
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x14
  stw       r0, 0x4(r30)
  bl        -0x23B91C

.loc_0x70:
  extsh.    r0, r31
  ble-      .loc_0x80
  mr        r3, r30
  bl        -0x2A7514

.loc_0x80:
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
 * Address:	802CB5E8
 * Size:	00009C
 */
void efx::TOdamaFur2::__dt(void)
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
  beq-      .loc_0x80
  lis       r3, 0x804D
  addi      r3, r3, 0x1CC4
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r3, 0x804E
  addi      r3, r3, 0x68A8
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r4, 0x804E
  addi      r3, r30, 0x4
  addi      r5, r4, 0x698C
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x14
  stw       r0, 0x4(r30)
  bl        -0x23B9B8

.loc_0x70:
  extsh.    r0, r31
  ble-      .loc_0x80
  mr        r3, r30
  bl        -0x2A75B0

.loc_0x80:
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
 * Address:	802CB684
 * Size:	00009C
 */
void efx::TOdamaDeadHahenB::__dt(void)
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
  beq-      .loc_0x80
  lis       r3, 0x804D
  addi      r3, r3, 0x1D10
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r3, 0x804E
  addi      r3, r3, 0x6810
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r4, 0x804E
  addi      r3, r30, 0x4
  addi      r5, r4, 0x698C
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x14
  stw       r0, 0x4(r30)
  bl        -0x23BA54

.loc_0x70:
  extsh.    r0, r31
  ble-      .loc_0x80
  mr        r3, r30
  bl        -0x2A764C

.loc_0x80:
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
 * Address:	802CB720
 * Size:	00009C
 */
void efx::TOdamaDeadHahenA::__dt(void)
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
  beq-      .loc_0x80
  lis       r3, 0x804D
  addi      r3, r3, 0x1D5C
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r3, 0x804E
  addi      r3, r3, 0x6810
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r4, 0x804E
  addi      r3, r30, 0x4
  addi      r5, r4, 0x698C
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x14
  stw       r0, 0x4(r30)
  bl        -0x23BAF0

.loc_0x70:
  extsh.    r0, r31
  ble-      .loc_0x80
  mr        r3, r30
  bl        -0x2A76E8

.loc_0x80:
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
 * Address:	802CB7BC
 * Size:	00009C
 */
void efx::TOdamaHahen::__dt(void)
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
  beq-      .loc_0x80
  lis       r3, 0x804D
  addi      r3, r3, 0x1DA8
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r3, 0x804E
  addi      r3, r3, 0x6810
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r4, 0x804E
  addi      r3, r30, 0x4
  addi      r5, r4, 0x698C
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x14
  stw       r0, 0x4(r30)
  bl        -0x23BB8C

.loc_0x70:
  extsh.    r0, r31
  ble-      .loc_0x80
  mr        r3, r30
  bl        -0x2A7784

.loc_0x80:
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
 * Address:	802CB858
 * Size:	000004
 */
void Game::BigFoot::Obj::inWaterCallback( (Game::WaterBox *))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	802CB85C
 * Size:	000004
 */
void Game::BigFoot::Obj::outWaterCallback(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	802CB860
 * Size:	000008
 */
void Game::BigFoot::Obj::getDamageCoeStoneState(void)
{
/*
.loc_0x0:
  lfs       f1, -0x1B94(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	802CB868
 * Size:	000004
 */
void Game::BigFoot::Obj::throwupItemInDeathProcedure(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	802CB86C
 * Size:	000008
 */
void Game::BigFoot::Obj::getEnemyTypeID(void)
{
/*
.loc_0x0:
  li        r3, 0x45
  blr
*/
}

/*
 * --INFO--
 * Address:	802CB874
 * Size:	000028
 */
void __sinit_BigFoot_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804D
  stw       r0, -0x68D0(r13)
  stfsu     f0, 0x1BC0(r3)
  stfs      f0, -0x68CC(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802CB89C
 * Size:	000014
 */
void @1196@12@Game::EnemyBase::viewOnPelletKilled(void)
{
/*
.loc_0x0:
  li        r11, 0xC
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x4AC
  b         -0x1C4F90
*/
}

/*
 * --INFO--
 * Address:	802CB8B0
 * Size:	000014
 */
void @1196@12@Game::EnemyBase::viewStartCarryMotion(void)
{
/*
.loc_0x0:
  li        r11, 0xC
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x4AC
  b         -0x1C5218
*/
}

/*
 * --INFO--
 * Address:	802CB8C4
 * Size:	000014
 */
void @1196@12@Game::EnemyBase::viewStartPreCarryMotion(void)
{
/*
.loc_0x0:
  li        r11, 0xC
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x4AC
  b         -0x1C520C
*/
}

/*
 * --INFO--
 * Address:	802CB8D8
 * Size:	000014
 */
void @1196@12@Game::EnemyBase::view_finish_carrymotion(void)
{
/*
.loc_0x0:
  li        r11, 0xC
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x4AC
  b         -0x1C4E70
*/
}

/*
 * --INFO--
 * Address:	802CB8EC
 * Size:	000014
 */
void @1196@12@Game::EnemyBase::view_start_carrymotion(void)
{
/*
.loc_0x0:
  li        r11, 0xC
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x4AC
  b         -0x1C4EB0
*/
}

/*
 * --INFO--
 * Address:	802CB900
 * Size:	000014
 */
void @1196@12@Game::EnemyBase::viewGetShape(void)
{
/*
.loc_0x0:
  li        r11, 0xC
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x4AC
  b         -0x1C5270
*/
}

/*
 * --INFO--
 * Address:	802CB914
 * Size:	000008
 */
void @4@efx::TOdamaHahen::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x15C
*/
}

/*
 * --INFO--
 * Address:	802CB91C
 * Size:	000008
 */
void @4@efx::TOdamaDeadHahenA::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x200
*/
}

/*
 * --INFO--
 * Address:	802CB924
 * Size:	000008
 */
void @4@efx::TOdamaDeadHahenB::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x2A4
*/
}

/*
 * --INFO--
 * Address:	802CB92C
 * Size:	000008
 */
void @4@efx::TOdamaFur2::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x348
*/
}

/*
 * --INFO--
 * Address:	802CB934
 * Size:	000008
 */
void @4@efx::TOdamaDeadHahenC1::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x3EC
*/
}

/*
 * --INFO--
 * Address:	802CB93C
 * Size:	000008
 */
void @4@efx::TOdamaDeadHahenC2::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x490
*/
}

/*
 * --INFO--
 * Address:	802CB944
 * Size:	000008
 */
void @4@efx::TOdamaFur1::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x534
*/
}

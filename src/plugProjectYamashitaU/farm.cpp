

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void Game::Farm::_Print( (char *,...))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void Game::Farm::Plant::__ct( (Game::Creature *))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void Game::Farm::Plant::sendInteraction(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Game::Farm::Plant::doDebugDraw( (Graphics &))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F0
 */
void Game::Farm::Obstacle::__ct( (Game::Farm::Farm *, Game::FieldVtxColorMgr *, Game::Creature *, float, float))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801234F8
 * Size:	000030
 */
void Game::Farm::Obstacle::setPower( (float))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x1
  stw       r0, 0x14(r1)
  lwz       r5, 0x20(r3)
  stfs      f1, 0x14(r5)
  lwz       r3, 0x18(r3)
  bl        0x608
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C0
 */
void Game::Farm::Obstacle::doDebugDraw( (Graphics &))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80123528
 * Size:	0000BC
 */
void Game::Farm::Farm::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x804F
  lis       r6, 0x804B
  stw       r0, 0x14(r1)
  subi      r9, r4, 0x4AD8
  lis       r5, 0x8048
  lis       r4, 0x8048
  stw       r31, 0xC(r1)
  li        r8, 0
  subi      r7, r2, 0x64E4
  subi      r6, r6, 0x2678
  stw       r9, 0x0(r3)
  subi      r5, r5, 0x4938
  subi      r0, r4, 0x4928
  mr        r31, r3
  stw       r8, 0x10(r3)
  addi      r4, r31, 0x30
  stw       r8, 0xC(r3)
  stw       r8, 0x8(r3)
  stw       r8, 0x4(r3)
  stw       r7, 0x14(r3)
  stw       r6, 0x0(r3)
  stw       r8, 0x24(r3)
  stw       r8, 0x28(r3)
  stw       r9, 0x30(r3)
  stw       r8, 0x40(r3)
  stw       r8, 0x3C(r3)
  stw       r8, 0x38(r3)
  stw       r8, 0x34(r3)
  stw       r5, 0x44(r3)
  stw       r9, 0x48(r3)
  stw       r8, 0x58(r3)
  stw       r8, 0x54(r3)
  stw       r8, 0x50(r3)
  stw       r8, 0x4C(r3)
  stw       r0, 0x5C(r3)
  bl        0x2EDE4C
  mr        r3, r31
  addi      r4, r31, 0x48
  bl        0x2EDE40
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
 * Address:	801235E4
 * Size:	000200
 */
void Game::Farm::Farm::loadResource( (unsigned long, void *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r6, 0x8048
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  stw       r30, 0x18(r1)
  subi      r30, r6, 0x4938
  stw       r29, 0x14(r1)
  mr        r29, r5
  li        r5, 0
  stw       r28, 0x10(r1)
  mr        r28, r4
  addi      r4, r30, 0x1C
  lwz       r3, -0x6514(r13)
  bl        0x2FFD3C
  lwz       r3, -0x6514(r13)
  subi      r4, r2, 0x64DC
  li        r5, 0
  bl        0x2FFD2C
  mr        r3, r29
  lis       r4, 0x2000
  bl        -0xB3DA8
  stw       r3, 0x24(r31)
  subi      r4, r2, 0x64DC
  lwz       r3, -0x6514(r13)
  bl        0x2FFD18
  lfs       f0, -0x64D4(r2)
  li        r5, 0
  stfs      f0, 0x18(r31)
  stfs      f0, 0x1C(r31)
  stfs      f0, 0x20(r31)
  lwz       r3, 0x24(r31)
  lwz       r4, 0xA0(r3)
  b         .loc_0xC8

.loc_0x8C:
  mulli     r0, r0, 0xC
  lfs       f1, 0x18(r31)
  addi      r5, r5, 0x1
  add       r3, r4, r0
  lfs       f0, 0x0(r3)
  fadds     f0, f1, f0
  stfs      f0, 0x18(r31)
  lfs       f1, 0x1C(r31)
  lfs       f0, 0x4(r3)
  fadds     f0, f1, f0
  stfs      f0, 0x1C(r31)
  lfs       f1, 0x20(r31)
  lfs       f0, 0x8(r3)
  fadds     f0, f1, f0
  stfs      f0, 0x20(r31)

.loc_0xC8:
  lwz       r3, 0x24(r31)
  rlwinm    r0,r5,0,16,31
  lwz       r3, 0x88(r3)
  cmplw     r0, r3
  blt+      .loc_0x8C
  lis       r0, 0x4330
  stw       r3, 0xC(r1)
  lfd       f2, -0x64C8(r2)
  addi      r4, r30, 0x2C
  stw       r0, 0x8(r1)
  li        r5, 0
  lfs       f3, -0x64D0(r2)
  lfd       f1, 0x8(r1)
  lfs       f0, 0x18(r31)
  fsubs     f1, f1, f2
  fdivs     f1, f3, f1
  fmuls     f0, f0, f1
  stfs      f0, 0x18(r31)
  lfs       f0, 0x1C(r31)
  fmuls     f0, f0, f1
  stfs      f0, 0x1C(r31)
  lfs       f0, 0x20(r31)
  fmuls     f0, f0, f1
  stfs      f0, 0x20(r31)
  lwz       r3, -0x6514(r13)
  bl        0x2FFC4C
  li        r3, 0x14
  bl        -0xFF874
  mr.       r0, r3
  beq-      .loc_0x154
  lwz       r4, 0x24(r31)
  mr        r6, r28
  li        r5, 0
  bl        0x31AAA8
  mr        r0, r3

.loc_0x154:
  stw       r0, 0x28(r31)
  addi      r4, r30, 0x2C
  lwz       r3, -0x6514(r13)
  bl        0x2FFC20
  lwz       r3, -0x6514(r13)
  addi      r4, r30, 0x38
  li        r5, 0
  bl        0x2FFC08
  li        r3, 0x3C
  bl        -0xFF8B8
  mr.       r0, r3
  beq-      .loc_0x190
  lwz       r4, 0x24(r31)
  bl        -0x131C
  mr        r0, r3

.loc_0x190:
  stw       r0, 0x2C(r31)
  lwz       r3, 0x2C(r31)
  bl        -0x1068
  lwz       r4, 0x2C(r31)
  cmplwi    r4, 0
  beq-      .loc_0x1AC
  addi      r4, r4, 0xC

.loc_0x1AC:
  mr        r3, r31
  bl        0x2EDC74
  lwz       r3, -0x6514(r13)
  addi      r4, r30, 0x38
  bl        0x2FFBC4
  lwz       r3, 0x28(r31)
  li        r5, 0
  lwz       r4, 0x2C(r31)
  lwz       r3, 0x8(r3)
  bl        -0xBCAAC
  lwz       r3, -0x6514(r13)
  addi      r4, r30, 0x1C
  bl        0x2FFBA4
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
 * Address:	801237E4
 * Size:	000004
 */
void Game::Farm::Farm::update(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801237E8
 * Size:	000034
 */
void Game::Farm::Farm::doAnimation(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x28(r3)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
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
 * Address:	8012381C
 * Size:	000034
 */
void Game::Farm::Farm::doEntry(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x28(r3)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
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
 * Address:	80123850
 * Size:	000024
 */
void Game::Farm::Farm::doSetView( (unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x28(r3)
  bl        0x31B860
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80123874
 * Size:	000024
 */
void Game::Farm::Farm::doViewCalc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x28(r3)
  bl        0x31B7D4
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80123898
 * Size:	000070
 */
void Game::Farm::Farm::addObstacle( (Game::Creature *, float, float))
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
  bl        0x60
  mr        r0, r3
  mr        r3, r31
  lwz       r12, 0x0(r31)
  mr        r31, r0
  lwz       r12, 0x1A8(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x14(r31)
  lwz       r3, 0x2C(r30)
  bl        -0x11C8
  mr        r3, r30
  li        r4, 0x1
  bl        0x234
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
 * Address:	80123908
 * Size:	00000C
 */
void Game::Creature::getCreatureName(void)
{
/*
.loc_0x0:
  lis       r3, 0x8048
  subi      r3, r3, 0x48F4
  blr
*/
}

/*
 * --INFO--
 * Address:	80123914
 * Size:	000114
 */
void Game::Farm::Farm::createNewObstacle( (Game::Creature *, float, float))
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
  stw       r30, 0x28(r1)
  stw       r29, 0x24(r1)
  stw       r28, 0x20(r1)
  fmr       f30, f1
  mr        r28, r3
  fmr       f31, f2
  mr        r29, r4
  li        r3, 0x24
  bl        -0xFFAB0
  mr.       r31, r3
  beq-      .loc_0xD4
  lis       r3, 0x804F
  lwz       r30, 0x2C(r28)
  subi      r0, r3, 0x4AD8
  li        r6, 0
  stw       r0, 0x0(r31)
  lis       r3, 0x804B
  subi      r0, r3, 0x2668
  subi      r5, r2, 0x64E8
  stw       r6, 0x10(r31)
  mr        r4, r29
  addi      r3, r1, 0x14
  stw       r6, 0xC(r31)
  stw       r6, 0x8(r31)
  stw       r6, 0x4(r31)
  stw       r5, 0x14(r31)
  stw       r0, 0x0(r31)
  stw       r28, 0x18(r31)
  lwz       r12, 0x0(r29)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f4, 0x14(r1)
  fmr       f1, f30
  lfs       f3, 0x18(r1)
  fmr       f2, f31
  lfs       f0, 0x1C(r1)
  mr        r3, r30
  stfs      f4, 0x8(r1)
  addi      r4, r1, 0x8
  stfs      f3, 0xC(r1)
  stfs      f0, 0x10(r1)
  stw       r29, 0x1C(r31)
  bl        -0xB1C
  stw       r3, 0x20(r31)

.loc_0xD4:
  mr        r4, r31
  addi      r3, r28, 0x30
  bl        0x2EDA18
  mr        r3, r31
  psq_l     f31,0x48(r1),0,0
  lfd       f31, 0x40(r1)
  psq_l     f30,0x38(r1),0,0
  lfd       f30, 0x30(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r29, 0x24(r1)
  lwz       r0, 0x54(r1)
  lwz       r28, 0x20(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	80123A28
 * Size:	000044
 */
void Game::Farm::Farm::addPlant( (Game::Creature *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        .loc_0x44
  mr        r0, r3
  mr        r3, r31
  mr        r31, r0
  li        r4, 0x1
  bl        0xCC
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x44:
*/
}

/*
 * --INFO--
 * Address:	80123A6C
 * Size:	0000B0
 */
void Game::Farm::Farm::createNewPlant( (Game::Creature *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  li        r3, 0x20
  bl        -0xFFBEC
  mr.       r31, r3
  beq-      .loc_0x6C
  lis       r4, 0x804F
  lis       r3, 0x804B
  subi      r0, r4, 0x4AD8
  li        r5, 0
  stw       r0, 0x0(r31)
  subi      r4, r2, 0x64E8
  subi      r0, r3, 0x2658
  stw       r5, 0x10(r31)
  stw       r5, 0xC(r31)
  stw       r5, 0x8(r31)
  stw       r5, 0x4(r31)
  stw       r4, 0x14(r31)
  stw       r0, 0x0(r31)
  stw       r30, 0x18(r31)
  stw       r5, 0x1C(r31)

.loc_0x6C:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1A8(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x14(r31)
  mr        r4, r31
  addi      r3, r29, 0x48
  bl        0x2ED910
  lwz       r0, 0x24(r1)
  mr        r3, r31
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
 * Address:	80123B1C
 * Size:	0001DC
 */
void Game::Farm::Farm::updateObjectRelation( (bool))
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
  stmw      r27, 0x3C(r1)
  mr        r31, r3
  lfs       f31, -0x64D4(r2)
  lwz       r29, 0x58(r3)
  rlwinm    r30,r4,0,24,31
  b         .loc_0x1A0

.loc_0x44:
  lwz       r4, 0x18(r29)
  addi      r3, r1, 0x2C
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f30, 0x2C(r1)
  li        r28, 0
  lfs       f29, 0x30(r1)
  lfs       f28, 0x34(r1)
  lwz       r27, 0x40(r31)
  b         .loc_0x100

.loc_0x74:
  lwz       r4, 0x1C(r27)
  addi      r3, r1, 0x20
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x24(r1)
  lfs       f1, 0x20(r1)
  fsubs     f2, f0, f29
  lfs       f0, 0x28(r1)
  fsubs     f1, f1, f30
  fsubs     f0, f0, f28
  fmuls     f2, f2, f2
  fmuls     f3, f0, f0
  fmadds    f0, f1, f1, f2
  fadds     f1, f3, f0
  fcmpo     cr0, f1, f31
  ble-      .loc_0xCC
  ble-      .loc_0xD0
  fsqrte    f0, f1
  fmuls     f1, f0, f1
  b         .loc_0xD0

.loc_0xCC:
  fmr       f1, f31

.loc_0xD0:
  lwz       r3, 0x20(r27)
  lfs       f2, 0x10(r3)
  fcmpo     cr0, f1, f2
  bge-      .loc_0xFC
  lfs       f0, 0x14(r3)
  fmuls     f0, f2, f0
  fcmpo     cr0, f1, f0
  bge-      .loc_0xF8
  subi      r28, r28, 0x1
  b         .loc_0xFC

.loc_0xF8:
  addi      r28, r28, 0x1

.loc_0xFC:
  lwz       r27, 0x4(r27)

.loc_0x100:
  cmplwi    r27, 0
  bne+      .loc_0x74
  cmplwi    r30, 0
  stw       r28, 0x1C(r29)
  beq-      .loc_0x19C
  lwz       r6, 0x1C(r29)
  cmpwi     r6, 0
  ble-      .loc_0x15C
  lwz       r3, 0x18(r29)
  lis       r4, 0x804B
  subi      r0, r4, 0x5D00
  lis       r4, 0x804B
  stw       r0, 0x8(r1)
  addi      r0, r4, 0x73E8
  stw       r3, 0xC(r1)
  addi      r4, r1, 0x8
  stw       r0, 0x8(r1)
  stw       r6, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x19C

.loc_0x15C:
  bge-      .loc_0x19C
  lwz       r3, 0x18(r29)
  lis       r4, 0x804B
  subi      r0, r4, 0x5D00
  lis       r4, 0x804B
  stw       r0, 0x14(r1)
  addi      r5, r4, 0x740C
  neg       r0, r6
  stw       r3, 0x18(r1)
  addi      r4, r1, 0x14
  stw       r5, 0x14(r1)
  stw       r0, 0x1C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     

.loc_0x19C:
  lwz       r29, 0x4(r29)

.loc_0x1A0:
  cmplwi    r29, 0
  bne+      .loc_0x44
  psq_l     f31,0x88(r1),0,0
  lfd       f31, 0x80(r1)
  psq_l     f30,0x78(r1),0,0
  lfd       f30, 0x70(r1)
  psq_l     f29,0x68(r1),0,0
  lfd       f29, 0x60(r1)
  psq_l     f28,0x58(r1),0,0
  lfd       f28, 0x50(r1)
  lmw       r27, 0x3C(r1)
  lwz       r0, 0x94(r1)
  mtlr      r0
  addi      r1, r1, 0x90
  blr
*/
}

/*
 * --INFO--
 * Address:	80123CF8
 * Size:	000108
 */
void Game::Farm::Farm::doDebugDraw( (Graphics &))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  mr        r30, r4
  stw       r29, 0x24(r1)
  mr        r29, r3
  lwz       r3, 0x25C(r4)
  li        r4, 0
  bl        0x30143C
  mr        r4, r3
  mr        r3, r30
  bl        0x301AF0
  lwz       r31, 0x40(r29)
  b         .loc_0xD0

.loc_0x40:
  lwz       r4, 0x1C(r31)
  addi      r3, r1, 0x14
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x14(r1)
  li        r0, 0xFF
  lfs       f1, 0x18(r1)
  mr        r3, r30
  lfs       f0, 0x1C(r1)
  addi      r4, r1, 0x8
  stfs      f2, 0x8(r1)
  stfs      f1, 0xC(r1)
  stfs      f0, 0x10(r1)
  stb       r0, 0x84(r30)
  stb       r0, 0x85(r30)
  stb       r0, 0x86(r30)
  stb       r0, 0x87(r30)
  lwz       r5, 0x20(r31)
  lfs       f1, 0x10(r5)
  bl        0x301D20
  li        r5, 0xFF
  li        r0, 0x37
  stb       r5, 0x84(r30)
  mr        r3, r30
  addi      r4, r1, 0x8
  stb       r0, 0x85(r30)
  stb       r0, 0x86(r30)
  stb       r5, 0x87(r30)
  lwz       r5, 0x20(r31)
  lfs       f1, 0x14(r5)
  lfs       f0, 0x10(r5)
  fmuls     f1, f0, f1
  bl        0x301CEC
  lwz       r31, 0x4(r31)

.loc_0xD0:
  cmplwi    r31, 0
  bne+      .loc_0x40
  lwz       r3, 0x40(r29)
  b         .loc_0xE4

.loc_0xE0:
  lwz       r3, 0x4(r3)

.loc_0xE4:
  cmplwi    r3, 0
  bne+      .loc_0xE0
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
 * Address:	80123E00
 * Size:	0000DC
 */
void Game::Farm::Farm::initAllObjectNodes(void)
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
  lwz       r31, 0x40(r3)
  b         .loc_0x54

.loc_0x24:
  lwz       r30, 0x4(r31)
  mr        r3, r31
  bl        0x2ED7A4
  cmplwi    r31, 0
  beq-      .loc_0x50
  mr        r3, r31
  li        r4, 0x1
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x50:
  mr        r31, r30

.loc_0x54:
  cmplwi    r31, 0
  bne+      .loc_0x24
  lwz       r30, 0x58(r29)
  b         .loc_0x94

.loc_0x64:
  lwz       r31, 0x4(r30)
  mr        r3, r30
  bl        0x2ED764
  cmplwi    r30, 0
  beq-      .loc_0x90
  mr        r3, r30
  li        r4, 0x1
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x90:
  mr        r30, r31

.loc_0x94:
  cmplwi    r30, 0
  bne+      .loc_0x64
  li        r0, 0
  stw       r0, 0x40(r29)
  stw       r0, 0x3C(r29)
  stw       r0, 0x38(r29)
  stw       r0, 0x34(r29)
  stw       r0, 0x58(r29)
  stw       r0, 0x54(r29)
  stw       r0, 0x50(r29)
  stw       r0, 0x4C(r29)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80123EDC
 * Size:	000060
 */
void Game::Farm::Plant::__dt(void)
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
  subi      r0, r5, 0x2658
  stw       r0, 0x0(r30)
  bl        0x2ED67C
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0xFFE68

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
 * Address:	80123F3C
 * Size:	000060
 */
void Game::Farm::Obstacle::__dt(void)
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
  subi      r0, r5, 0x2668
  stw       r0, 0x0(r30)
  bl        0x2ED61C
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0xFFEC8

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
 * Address:	80123F9C
 * Size:	00007C
 */
void Game::Farm::Farm::__dt(void)
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
  beq-      .loc_0x60
  lis       r4, 0x804B
  addi      r3, r30, 0x48
  subi      r0, r4, 0x2678
  li        r4, -0x1
  stw       r0, 0x0(r30)
  bl        0x2ED5B8
  addi      r3, r30, 0x30
  li        r4, -0x1
  bl        0x2ED5AC
  mr        r3, r30
  li        r4, 0
  bl        0x2ED5A0
  extsh.    r0, r31
  ble-      .loc_0x60
  mr        r3, r30
  bl        -0xFFF44

.loc_0x60:
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

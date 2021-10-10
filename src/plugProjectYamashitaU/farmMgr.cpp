

/*
 * --INFO--
 * Address:	80124018
 * Size:	0000C0
 */
void Game::Farm::FarmMgr::__ct((unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  li        r8, 0
	  stw       r0, 0x14(r1)
	  subi      r0, r5, 0x4A10
	  lis       r5, 0x8048
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lis       r3, 0x804F
	  subi      r7, r5, 0x48E8
	  stw       r0, 0x0(r31)
	  subi      r9, r3, 0x4AD8
	  lis       r3, 0x804B
	  stw       r9, 0x4(r31)
	  subi      r6, r3, 0x263C
	  lis       r3, 0x8048
	  stw       r8, 0x14(r31)
	  subi      r0, r3, 0x48D8
	  addi      r5, r6, 0x38
	  addi      r3, r31, 0x4
	  stw       r8, 0x10(r31)
	  stw       r8, 0xC(r31)
	  stw       r8, 0x8(r31)
	  stw       r7, 0x18(r31)
	  stw       r6, 0x0(r31)
	  stw       r5, 0x4(r31)
	  stw       r4, 0x1C(r31)
	  addi      r4, r31, 0x20
	  stw       r9, 0x20(r31)
	  stw       r8, 0x30(r31)
	  stw       r8, 0x2C(r31)
	  stw       r8, 0x28(r31)
	  stw       r8, 0x24(r31)
	  stw       r0, 0x34(r31)
	  stw       r8, 0x38(r31)
	  stb       r8, 0x3C(r31)
	  stb       r8, 0x3D(r31)
	  bl        0x2ED358
	  li        r0, 0
	  mr        r3, r31
	  stb       r0, 0x3C(r31)
	  stb       r0, 0x3D(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801240D8
 * Size:	00002C
 */
void Game::Farm::FarmMgr::setupSound(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x30(r3)
	  b         .loc_0x20

	.loc_0x8:
	  lwz       r4, 0x40(r3)
	  b         .loc_0x14

	.loc_0x10:
	  lwz       r4, 0x4(r4)

	.loc_0x14:
	  cmplwi    r4, 0
	  bne+      .loc_0x10
	  lwz       r3, 0x4(r3)

	.loc_0x20:
	  cmplwi    r3, 0
	  bne+      .loc_0x8
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80124104
 * Size:	000124
 */
void Game::Farm::FarmMgr::doAnimation(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stmw      r26, 0x8(r1)
	  mr        r26, r3
	  li        r30, 0
	  lwz       r0, 0x30(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xF8
	  lfs       f31, -0x64C0(r2)
	  mr        r29, r0
	  b         .loc_0xF0

	.loc_0x38:
	  lwz       r28, 0x40(r29)
	  b         .loc_0xD4

	.loc_0x40:
	  lwz       r3, 0x1C(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  mr.       r31, r3
	  beq-      .loc_0x60
	  subi      r31, r31, 0x30

	.loc_0x60:
	  lwz       r3, -0x6D20(r13)
	  bl        0x36AB8
	  lwz       r4, 0x20(r28)
	  mr        r27, r3
	  lfs       f0, 0x14(r4)
	  fcmpo     cr0, f0, f31
	  cror      2, 0, 0x2
	  bne-      .loc_0xB8
	  cmplwi    r27, 0
	  beq-      .loc_0xB8
	  bl        0x33F0B8
	  mr        r3, r31
	  mr        r4, r27
	  bl        0x33901C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB8
	  lwz       r3, 0x38(r26)
	  cmplwi    r3, 0
	  beq-      .loc_0xCC
	  mr        r4, r30
	  bl        0x334364
	  b         .loc_0xCC

	.loc_0xB8:
	  lwz       r3, 0x38(r26)
	  cmplwi    r3, 0
	  beq-      .loc_0xCC
	  mr        r4, r30
	  bl        0x334380

	.loc_0xCC:
	  lwz       r28, 0x4(r28)
	  addi      r30, r30, 0x1

	.loc_0xD4:
	  cmplwi    r28, 0
	  bne+      .loc_0x40
	  mr        r3, r29
	  bl        -0xA00
	  mr        r3, r29
	  bl        -0xA04
	  lwz       r29, 0x4(r29)

	.loc_0xF0:
	  cmplwi    r29, 0
	  bne+      .loc_0x38

	.loc_0xF8:
	  lwz       r3, 0x38(r26)
	  cmplwi    r3, 0
	  beq-      .loc_0x108
	  bl        0x334378

	.loc_0x108:
	  psq_l     f31,0x28(r1),0,0
	  lfd       f31, 0x20(r1)
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80124228
 * Size:	000008
 */
void Game::Creature::getJAIObject(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80124230
 * Size:	000068
 */
void Game::Farm::FarmMgr::doEntry(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x9
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, -0x6C18(r13)
	  bl        0x90DF4
	  lwz       r0, 0x30(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x48
	  mr        r31, r0
	  b         .loc_0x40

	.loc_0x34:
	  mr        r3, r31
	  bl        -0xA4C
	  lwz       r31, 0x4(r31)

	.loc_0x40:
	  cmplwi    r31, 0
	  bne+      .loc_0x34

	.loc_0x48:
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0
	  bl        0x90DC0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80124298
 * Size:	00005C
 */
void Game::Farm::FarmMgr::doSetView((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  lwz       r0, 0x30(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x44
	  mr        r30, r0
	  mr        r31, r4
	  b         .loc_0x3C

	.loc_0x2C:
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0xA7C
	  lwz       r30, 0x4(r30)

	.loc_0x3C:
	  cmplwi    r30, 0
	  bne+      .loc_0x2C

	.loc_0x44:
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
 * Address:	801242F4
 * Size:	00004C
 */
void Game::Farm::FarmMgr::doViewCalc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r0, 0x30(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x38
	  mr        r31, r0
	  b         .loc_0x30

	.loc_0x24:
	  mr        r3, r31
	  bl        -0xAA8
	  lwz       r31, 0x4(r31)

	.loc_0x30:
	  cmplwi    r31, 0
	  bne+      .loc_0x24

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80124340
 * Size:	000004
 */
void Game::Farm::FarmMgr::doSimulation((float))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80124344
 * Size:	000004
 */
void Game::Farm::FarmMgr::doDirectDraw((Graphics&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80124348
 * Size:	000050
 */
void Game::Farm::FarmMgr::doDebugDraw((Graphics&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lwz       r31, 0x30(r3)
	  b         .loc_0x30

	.loc_0x20:
	  mr        r3, r31
	  mr        r4, r30
	  bl        -0x678
	  lwz       r31, 0x4(r31)

	.loc_0x30:
	  cmplwi    r31, 0
	  bne+      .loc_0x20
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
 * Address:	80124398
 * Size:	000068
 */
void Game::Farm::FarmMgr::addFarmBmd((void*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x8048
	  stw       r0, 0x14(r1)
	  subi      r0, r5, 0x48C8
	  li        r5, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r4, r0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, -0x6514(r13)
	  bl        0x2FEF94
	  mr        r3, r30
	  mr        r4, r31
	  bl        .loc_0x68
	  lis       r4, 0x8048
	  lwz       r3, -0x6514(r13)
	  subi      r4, r4, 0x48C8
	  bl        0x2FEF80
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x68:
	*/
}

/*
 * --INFO--
 * Address:	80124400
 * Size:	000074
 */
void Game::Farm::FarmMgr::createNewFarm((void*))
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
	  li        r3, 0x60
	  bl        -0x100580
	  mr.       r31, r3
	  beq-      .loc_0x38
	  bl        -0xF08
	  mr        r31, r3

	.loc_0x38:
	  lwz       r4, 0x1C(r29)
	  mr        r3, r31
	  mr        r5, r30
	  bl        -0xE60
	  mr        r4, r31
	  addi      r3, r29, 0x20
	  bl        0x2ECFB8
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
 * Address:	........
 * Size:	000098
 */
void getNearestFarm__Q34Game4Farm7FarmMgrFR10Vector3<float>(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80124474
 * Size:	000120
 */
void Game::Farm::FarmMgr::addObstacle((Game::Creature*, float, float))
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
	  stw       r30, 0x18(r1)
	  lwz       r12, 0x0(r4)
	  mr        r30, r3
	  fmr       f30, f1
	  mr        r31, r4
	  lwz       r12, 0x8(r12)
	  fmr       f31, f2
	  addi      r3, r1, 0x8
	  mtctr     r12
	  bctrl
	  lwz       r5, 0x30(r30)
	  lis       r3, 0x8051
	  addi      r4, r3, 0x48D8
	  lfs       f5, 0x8(r1)
	  cmplwi    r5, 0
	  lfs       f6, 0xC(r1)
	  lfs       f7, 0x10(r1)
	  li        r3, 0
	  lfs       f3, 0x0(r4)
	  beq-      .loc_0xD8
	  lfs       f0, -0x64C0(r2)
	  b         .loc_0xD0

	.loc_0x78:
	  lfs       f1, 0x1C(r5)
	  lfs       f2, 0x18(r5)
	  fsubs     f4, f1, f6
	  lfs       f1, 0x20(r5)
	  fsubs     f2, f2, f5
	  fsubs     f1, f1, f7
	  fmuls     f4, f4, f4
	  fmuls     f8, f1, f1
	  fmadds    f1, f2, f2, f4
	  fadds     f1, f8, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xB8
	  ble-      .loc_0xBC
	  fsqrte    f2, f1
	  fmuls     f1, f2, f1
	  b         .loc_0xBC

	.loc_0xB8:
	  fmr       f1, f0

	.loc_0xBC:
	  fcmpo     cr0, f1, f3
	  bge-      .loc_0xCC
	  mr        r3, r5
	  fmr       f3, f1

	.loc_0xCC:
	  lwz       r5, 0x4(r5)

	.loc_0xD0:
	  cmplwi    r5, 0
	  bne+      .loc_0x78

	.loc_0xD8:
	  cmplwi    r3, 0
	  beq-      .loc_0xF4
	  fmr       f1, f30
	  mr        r4, r31
	  fmr       f2, f31
	  bl        -0xCC8
	  b         .loc_0xF8

	.loc_0xF4:
	  li        r3, 0

	.loc_0xF8:
	  psq_l     f31,0x38(r1),0,0
	  lfd       f31, 0x30(r1)
	  psq_l     f30,0x28(r1),0,0
	  lfd       f30, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r0, 0x44(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80124594
 * Size:	0000F0
 */
void Game::Farm::FarmMgr::addPlant((Game::Creature*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r5, 0x30(r30)
	  lis       r3, 0x8051
	  addi      r4, r3, 0x48D8
	  lfs       f5, 0x8(r1)
	  cmplwi    r5, 0
	  lfs       f6, 0xC(r1)
	  lfs       f7, 0x10(r1)
	  li        r3, 0
	  lfs       f3, 0x0(r4)
	  beq-      .loc_0xC0
	  lfs       f0, -0x64C0(r2)
	  b         .loc_0xB8

	.loc_0x60:
	  lfs       f1, 0x1C(r5)
	  lfs       f2, 0x18(r5)
	  fsubs     f4, f1, f6
	  lfs       f1, 0x20(r5)
	  fsubs     f2, f2, f5
	  fsubs     f1, f1, f7
	  fmuls     f4, f4, f4
	  fmuls     f8, f1, f1
	  fmadds    f1, f2, f2, f4
	  fadds     f1, f8, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xA0
	  ble-      .loc_0xA4
	  fsqrte    f2, f1
	  fmuls     f1, f2, f1
	  b         .loc_0xA4

	.loc_0xA0:
	  fmr       f1, f0

	.loc_0xA4:
	  fcmpo     cr0, f1, f3
	  bge-      .loc_0xB4
	  mr        r3, r5
	  fmr       f3, f1

	.loc_0xB4:
	  lwz       r5, 0x4(r5)

	.loc_0xB8:
	  cmplwi    r5, 0
	  bne+      .loc_0x60

	.loc_0xC0:
	  cmplwi    r3, 0
	  beq-      .loc_0xD4
	  mr        r4, r31
	  bl        -0xC38
	  b         .loc_0xD8

	.loc_0xD4:
	  li        r3, 0

	.loc_0xD8:
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
 * Address:	80124684
 * Size:	00004C
 */
void Game::Farm::FarmMgr::initAllFarmObjectNodes(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r0, 0x30(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x38
	  mr        r31, r0
	  b         .loc_0x30

	.loc_0x24:
	  mr        r3, r31
	  bl        -0x8AC
	  lwz       r31, 0x4(r31)

	.loc_0x30:
	  cmplwi    r31, 0
	  bne+      .loc_0x24

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801246D0
 * Size:	000078
 */
void Game::Farm::FarmMgr::__dt(void)
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
	  beq-      .loc_0x5C
	  lis       r4, 0x804B
	  addi      r3, r30, 0x20
	  subi      r5, r4, 0x263C
	  li        r4, -0x1
	  stw       r5, 0x0(r30)
	  addi      r0, r5, 0x38
	  stw       r0, 0x4(r30)
	  bl        0x2ECE7C
	  addi      r3, r30, 0x4
	  li        r4, 0
	  bl        0x2ECE70
	  extsh.    r0, r31
	  ble-      .loc_0x5C
	  mr        r3, r30
	  bl        -0x100674

	.loc_0x5C:
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
 * Address:	80124748
 * Size:	000028
 */
void __sinit_farmMgr_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804B
	  stw       r0, -0x6DD8(r13)
	  stfsu     f0, -0x2648(r3)
	  stfs      f0, -0x6DD4(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80124770
 * Size:	000008
 */
void @4 @Game::Farm::FarmMgr::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0xA4
	*/
}

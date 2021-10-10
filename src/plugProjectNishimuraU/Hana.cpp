

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
 * Address:	802F3138
 * Size:	0000A4
 */
void Game::Hana::Obj::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  beq-      .loc_0x3C
	  addi      r0, r31, 0x2E8
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x2E8(r31)
	  stw       r0, 0x2EC(r31)
	  stw       r0, 0x2F0(r31)

	.loc_0x3C:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1C882C
	  lis       r3, 0x804D
	  addi      r0, r31, 0x2E8
	  addi      r5, r3, 0x53D4
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r4, r5, 0x1B0
	  addi      r5, r5, 0x334
	  stw       r4, 0x178(r31)
	  lwz       r4, 0x17C(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0x17C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0xC(r4)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x31C(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	802F31DC
 * Size:	000004
 */
void Game::Hana::Obj::createEffect(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F31E0
 * Size:	000064
 */
void Game::Hana::Obj::onInit((Game::CreatureInitArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1C8700
	  lwz       r3, 0x174(r31)
	  subi      r4, r2, 0x11C0
	  bl        0x14BDE4
	  stw       r3, 0x2C8(r31)
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x318(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x320(r12)
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
 * Address:	802F3244
 * Size:	000004
 */
void Game::Hana::Obj::setupEffect(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F3248
 * Size:	000004
 */
void Game::Hana::Obj::doDirectDraw((Graphics&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F324C
 * Size:	0000E8
 */
void Game::Hana::Obj::getShadowParam((Game::ShadowParam&))
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
	  bl        -0x1EBE74
	  cmpwi     r3, 0x7
	  bne-      .loc_0x64
	  lfs       f0, 0x18C(r30)
	  lfs       f2, -0x11B8(r2)
	  stfs      f0, 0x0(r31)
	  lfs       f1, -0x11B4(r2)
	  lfs       f3, 0x190(r30)
	  lfs       f0, -0x11B0(r2)
	  stfs      f3, 0x4(r31)
	  lfs       f3, 0x194(r30)
	  stfs      f3, 0x8(r31)
	  stfs      f2, 0xC(r31)
	  stfs      f1, 0x10(r31)
	  stfs      f2, 0x14(r31)
	  stfs      f0, 0x18(r31)
	  stfs      f0, 0x1C(r31)
	  b         .loc_0xD0

	.loc_0x64:
	  lwz       r3, 0x2C8(r30)
	  bl        0x1365EC
	  lfs       f4, 0x2C(r3)
	  lfs       f2, 0x1C(r3)
	  lfs       f0, 0xC(r3)
	  lfs       f3, -0x11AC(r2)
	  stfs      f0, 0x0(r31)
	  lfs       f1, -0x11B8(r2)
	  stfs      f2, 0x4(r31)
	  lfs       f0, -0x11B4(r2)
	  stfs      f4, 0x8(r31)
	  lfs       f2, 0x190(r30)
	  fadds     f2, f3, f2
	  stfs      f2, 0x4(r31)
	  stfs      f1, 0xC(r31)
	  stfs      f0, 0x10(r31)
	  stfs      f1, 0x14(r31)
	  lwz       r0, 0x1E4(r30)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0xC0
	  lfs       f0, -0x11A8(r2)
	  stfs      f0, 0x18(r31)
	  b         .loc_0xC8

	.loc_0xC0:
	  lfs       f0, -0x11A4(r2)
	  stfs      f0, 0x18(r31)

	.loc_0xC8:
	  lfs       f0, -0x11A0(r2)
	  stfs      f0, 0x1C(r31)

	.loc_0xD0:
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
 * Address:	802F3334
 * Size:	0000B4
 */
void Game::Hana::Obj::initMouthSlots(void)
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
	  li        r4, 0x3
	  addi      r3, r30, 0x2C0
	  bl        -0x1BAE04
	  lwz       r5, 0x174(r30)
	  addi      r3, r30, 0x2C0
	  li        r4, 0
	  subi      r6, r2, 0x119C
	  bl        -0x1BACE0
	  lwz       r5, 0x174(r30)
	  addi      r3, r30, 0x2C0
	  li        r4, 0x1
	  subi      r6, r2, 0x1194
	  bl        -0x1BACF4
	  lwz       r5, 0x174(r30)
	  addi      r3, r30, 0x2C0
	  li        r4, 0x2
	  subi      r6, r2, 0x118C
	  bl        -0x1BAD08
	  lfs       f31, -0x1184(r2)
	  li        r31, 0
	  b         .loc_0x88

	.loc_0x74:
	  mr        r4, r31
	  addi      r3, r30, 0x2C0
	  bl        -0x1BAC38
	  stfs      f31, 0x1C(r3)
	  addi      r31, r31, 0x1

	.loc_0x88:
	  lwz       r0, 0x2C0(r30)
	  cmpw      r31, r0
	  blt+      .loc_0x74
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
 * Address:	802F33E8
 * Size:	000080
 */
void Game::Hana::Obj::isWakeup(void)
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
	  li        r4, 0
	  lwz       r5, 0xC0(r3)
	  lfs       f31, 0x3AC(r5)
	  fmr       f1, f31
	  bl        -0x1DE954
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x40
	  li        r3, 0x1
	  b         .loc_0x64

	.loc_0x40:
	  fmr       f1, f31
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1DED00
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x60
	  li        r3, 0x1
	  b         .loc_0x64

	.loc_0x60:
	  li        r3, 0

	.loc_0x64:
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
 * Address:	802F3468
 * Size:	000084
 */
void Game::Hana::Obj::flickStatePikmin(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f4, -0x1180(r2)
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r5, 0xC0(r3)
	  lfs       f1, 0x53C(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x1E0378
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x1180(r2)
	  li        r4, 0
	  lfs       f1, 0x514(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x1DFFE0
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x1180(r2)
	  li        r4, 0
	  lfs       f1, 0x514(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x1DFD44
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F34EC
 * Size:	0000F0
 */
void Game::Hana::Obj::flickAttackBomb(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lfs       f4, -0x1180(r2)
	  li        r4, 0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  lwz       r5, 0xC0(r3)
	  lfs       f1, 0x53C(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x1E03FC
	  lwz       r3, 0x174(r31)
	  subi      r4, r2, 0x117C
	  bl        0x14BAC0
	  bl        0x136378
	  lis       r4, 0x804B
	  li        r6, 0
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x14(r1)
	  addi      r0, r4, 0x6A64
	  lis       r5, 0x804E
	  lis       r4, 0x804D
	  stw       r0, 0x14(r1)
	  addi      r0, r5, 0x6A00
	  li        r7, 0x258
	  li        r5, 0x259
	  stw       r0, 0x14(r1)
	  addi      r0, r4, 0x53C0
	  li        r4, 0
	  stw       r3, 0x24(r1)
	  addi      r3, r1, 0x14
	  sth       r7, 0x18(r1)
	  sth       r5, 0x1A(r1)
	  stw       r6, 0x1C(r1)
	  stw       r6, 0x20(r1)
	  stw       r0, 0x14(r1)
	  bl        0xBBE14
	  lfs       f0, 0x18C(r31)
	  addi      r5, r1, 0x8
	  lwz       r3, -0x6960(r13)
	  li        r4, 0x1C
	  stfs      f0, 0x8(r1)
	  li        r6, 0x2
	  lfs       f0, 0x190(r31)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x194(r31)
	  stfs      f0, 0x10(r1)
	  bl        -0xA1374
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x8
	  li        r4, 0xB
	  li        r6, 0x2
	  bl        -0x9FE44
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F35DC
 * Size:	00003C
 */
void Game::Hana::Obj::eatAttackPikmin(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  lis       r5, 0x804D
	  stw       r0, 0x14(r1)
	  subi      r0, r4, 0x43A0
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  addi      r0, r5, 0x53B4
	  stw       r0, 0x8(r1)
	  bl        -0x1DFAD0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F3618
 * Size:	000070
 */
void Game::Hana::Obj::resetUnderGround(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stb       r0, 0x2E4(r3)
	  lwz       r0, 0x1E0(r3)
	  rlwinm    r0,r0,0,10,8
	  stw       r0, 0x1E0(r3)
	  lwz       r0, 0x1E0(r3)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r3)
	  bl        -0x1EBEB8
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  li        r4, 0x1
	  rlwinm    r0,r0,0,0,30
	  stw       r0, 0x1E0(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA4(r12)
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
 * Address:	802F3688
 * Size:	000084
 */
void Game::Hana::Obj::setUnderGround(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f4, -0x1180(r2)
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r5, 0xC0(r3)
	  lfs       f1, 0x53C(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x1E0598
	  li        r0, 0x1
	  mr        r3, r31
	  stb       r0, 0x2E4(r31)
	  lwz       r0, 0x1E0(r31)
	  oris      r0, r0, 0x40
	  stw       r0, 0x1E0(r31)
	  bl        -0x1EBF54
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  li        r4, 0
	  ori       r0, r0, 0x1
	  stw       r0, 0x1E0(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA4(r12)
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
 * Address:	802F370C
 * Size:	0001C0
 */
void Game::Hana::Obj::createSmokeEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  lfs       f0, 0x18C(r3)
	  stfs      f0, 0x8(r1)
	  lfs       f0, 0x190(r3)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x194(r3)
	  stfs      f0, 0x10(r1)
	  bl        -0x1EC3F0
	  cmpwi     r3, 0x8
	  bne-      .loc_0x120
	  lfs       f6, 0x1FC(r31)
	  lfs       f0, -0x11B8(r2)
	  fmr       f1, f6
	  fcmpo     cr0, f6, f0
	  bge-      .loc_0x50
	  fneg      f1, f6

	.loc_0x50:
	  lfs       f2, -0x1170(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x11B8(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f1, f1, f2
	  lfs       f3, -0x1174(r2)
	  fcmpo     cr0, f6, f0
	  lfs       f4, 0x8(r1)
	  fctiwz    f0, f1
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f5, f3, f0
	  bge-      .loc_0xB4
	  lfs       f0, -0x116C(r2)
	  fmuls     f0, f6, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f0, f0
	  b         .loc_0xCC

	.loc_0xB4:
	  fmuls     f0, f6, f2
	  fctiwz    f0, f0
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0

	.loc_0xCC:
	  fmuls     f3, f3, f0
	  lfs       f0, 0x10(r1)
	  lfs       f2, 0xC(r1)
	  addi      r5, r1, 0x8
	  lfs       f1, -0x11B8(r2)
	  fsubs     f0, f0, f5
	  fsubs     f3, f4, f3
	  lwz       r3, -0x6960(r13)
	  fsubs     f1, f2, f1
	  stfs      f0, 0x10(r1)
	  li        r4, 0x3
	  li        r6, 0x2
	  stfs      f3, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  bl        -0xA15D4
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x8
	  li        r4, 0xB
	  li        r6, 0x2
	  bl        -0xA00A4
	  b         .loc_0x19C

	.loc_0x120:
	  cmpwi     r3, 0x4
	  bne-      .loc_0x1AC
	  mr        r3, r31
	  li        r4, 0x1
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x1180(r2)
	  li        r4, 0
	  lfs       f1, 0x3AC(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x1E0394
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x1180(r2)
	  li        r4, 0
	  lfs       f1, 0x3AC(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x1E00F8
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x8
	  li        r4, 0xA
	  li        r6, 0x2
	  bl        -0xA011C
	  b         .loc_0x19C
	  b         .loc_0x1AC

	.loc_0x19C:
	  lfs       f1, -0x11B4(r2)
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  bl        -0x1EFD64

	.loc_0x1AC:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F38CC
 * Size:	00007C
 */
void Game::ConditionNotStickSlot::satisfy((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x64
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x64
	  mr        r3, r31
	  bl        -0x154394
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x64
	  li        r3, 0x1
	  b         .loc_0x68

	.loc_0x64:
	  li        r3, 0

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
 * Address:	802F3948
 * Size:	000004
 */
void Game::Hana::Obj::changeMaterial(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F394C
 * Size:	000008
 */
void Game::Hana::Obj::isUnderground(void)
{
	/*
	.loc_0x0:
	  lbz       r3, 0x2E4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F3954
 * Size:	000004
 */
void Game::Hana::Obj::initWalkSmokeEffect(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F3958
 * Size:	000008
 */
void Game::Hana::Obj::getWalkSmokeEffectMgr(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F3960
 * Size:	000008
 */
void Game::Hana::Obj::getDownSmokeScale(void)
{
	/*
	.loc_0x0:
	  lfs       f1, -0x1168(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F3968
 * Size:	000008
 */
void Game::Hana::Obj::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x54
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F3970
 * Size:	000004
 */
void Game::Hana::Obj::setAnimationSpeed((float))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F3974
 * Size:	000004
 */
void Game::Hana::Obj::flickAttackFail(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F3978
 * Size:	000004
 */
void Game::Hana::Obj::startSleepEffect(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F397C
 * Size:	000004
 */
void Game::Hana::Obj::finishSleepEffect(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F3980
 * Size:	000028
 */
void __sinit_Hana_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804D
	  stw       r0, -0x6880(r13)
	  stfsu     f0, 0x53A8(r3)
	  stfs      f0, -0x687C(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

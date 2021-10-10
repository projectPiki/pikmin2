

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
 * Address:	8013AE84
 * Size:	00012C
 */
void Game::Creature::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x14(r1)
	  addi      r0, r4, 0x2A4
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r0, 0x0(r3)
	  addi      r3, r31, 0x4
	  bl        0x1018D0
	  lis       r3, 0x804B
	  lis       r4, 0x8014
	  addi      r0, r3, 0x278
	  li        r5, 0
	  stw       r0, 0x0(r31)
	  addi      r3, r31, 0x54
	  subi      r4, r4, 0x5050
	  li        r6, 0x14
	  li        r7, 0x4
	  bl        -0x79694
	  addi      r3, r31, 0xA8
	  bl        0x1BF40
	  li        r0, 0x1
	  lis       r3, 0x804B
	  stb       r0, 0x64(r31)
	  li        r4, 0
	  addi      r0, r3, 0xC8
	  addi      r3, r31, 0xD8
	  stb       r4, 0x78(r31)
	  stb       r4, 0x8C(r31)
	  stb       r4, 0xA0(r31)
	  stw       r31, 0x60(r31)
	  stw       r31, 0x74(r31)
	  stw       r31, 0x88(r31)
	  stw       r31, 0x9C(r31)
	  stw       r4, 0xA4(r31)
	  stw       r0, 0x0(r31)
	  stb       r4, 0xBC(r31)
	  stb       r4, 0xBD(r31)
	  stb       r4, 0xBE(r31)
	  stb       r4, 0xBF(r31)
	  bl        0x9C8FC
	  addi      r3, r31, 0x12C
	  bl        0x5B740
	  li        r0, 0
	  lfs       f1, -0x60E0(r2)
	  stw       r0, 0x114(r31)
	  addi      r3, r31, 0x138
	  lfs       f0, -0x60DC(r2)
	  stw       r0, 0x174(r31)
	  stfs      f1, 0x118(r31)
	  stw       r0, 0xC4(r31)
	  stfs      f0, 0x168(r31)
	  stfs      f0, 0x16C(r31)
	  stfs      f0, 0x170(r31)
	  bl        -0x50CC0
	  lis       r3, 0x1
	  li        r0, 0
	  subi      r4, r3, 0x2
	  mr        r3, r31
	  sth       r4, 0x128(r31)
	  stb       r0, 0xBC(r31)
	  stb       r0, 0xBD(r31)
	  stb       r0, 0xBE(r31)
	  stb       r0, 0xBF(r31)
	  lwz       r0, 0xBC(r31)
	  ori       r0, r0, 0x7
	  stw       r0, 0xBC(r31)
	  bl        0x63F00
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
 * Address:	8013AFB0
 * Size:	000018
 */
void Game::CellLeg::__ct(void)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x4(r3)
	  stw       r0, 0x0(r3)
	  stw       r0, 0xC(r3)
	  stw       r0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013AFC8
 * Size:	000120
 */
void Game::Creature::init((Game::CreatureInitArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  stw       r0, 0xDC(r3)
	  stw       r0, 0xE0(r3)
	  stw       r0, 0xE4(r3)
	  stw       r0, 0xE8(r3)
	  stw       r0, 0xEC(r3)
	  stb       r0, 0xBC(r3)
	  stb       r0, 0xBD(r3)
	  stb       r0, 0xBE(r3)
	  stb       r0, 0xBF(r3)
	  lwz       r0, 0xBC(r3)
	  ori       r0, r0, 0x7
	  stw       r0, 0xBC(r3)
	  bl        0x63E7C
	  lwz       r4, -0x6CB0(r13)
	  addi      r3, r30, 0x12C
	  bl        0x5B6C0
	  lfs       f0, -0x60D8(r2)
	  mr        r3, r30
	  stfs      f0, 0x11C(r30)
	  stfs      f0, 0x120(r30)
	  stfs      f0, 0x124(r30)
	  bl        0x64A60
	  li        r0, 0
	  lfs       f1, -0x60D8(r2)
	  stw       r0, 0xC8(r30)
	  mr        r3, r30
	  lfs       f0, -0x60DC(r2)
	  stfs      f1, 0xCC(r30)
	  stfs      f0, 0xD0(r30)
	  stfs      f1, 0xD4(r30)
	  bl        0x64A3C
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x150(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0xD8
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x150(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stw       r0, 0x4(r3)
	  stw       r0, 0x0(r3)

	.loc_0xD8:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x38(r12)
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
 * Address:	8013B0E8
 * Size:	000004
 */
void Game::Creature::onInitPost((Game::CreatureInitArg*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013B0EC
 * Size:	000004
 */
void Game::Creature::onInit((Game::CreatureInitArg*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013B0F0
 * Size:	0000B4
 */
void Game::Creature::kill((Game::CreatureKillArg*))
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
	  bl        0x64318
	  mr        r3, r30
	  li        r4, 0
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, -0x6D38(r13)
	  mr        r3, r30
	  stw       r0, -0x6D28(r13)
	  bl        0x1B558
	  li        r0, 0
	  addi      r3, r30, 0x12C
	  stw       r0, -0x6D28(r13)
	  bl        0x5B5DC
	  mr        r3, r30
	  bl        0x63D6C
	  mr        r3, r30
	  bl        0x64948
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xC4(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x9C
	  mr        r4, r30
	  bl        0x6FB74
	  li        r0, 0
	  stw       r0, 0xC4(r30)

	.loc_0x9C:
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
 * Address:	8013B1A4
 * Size:	000004
 */
void Game::Creature::onKill((Game::CreatureKillArg*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013B1A8
 * Size:	0000C8
 */
void setPosition__Q24Game8CreatureFR10Vector3<float> b(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r31,0,24,31
	  bne-      .loc_0xAC
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x78(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x174(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x94
	  lwz       r4, 0x8(r3)
	  addi      r3, r29, 0x138
	  addi      r4, r4, 0x24
	  bl        -0x50F44
	  lwz       r3, 0x174(r29)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x114(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x94
	  bl        -0x579C

	.loc_0x94:
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x74(r12)
	  mtctr     r12
	  bctrl

	.loc_0xAC:
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
 * Address:	8013B270
 * Size:	000004
 */
void onSetPositionPost__Q24Game8CreatureFR10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013B274
 * Size:	0000CC
 */
void initPosition__Q24Game8CreatureFR10Vector3<float>(void)
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
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x78(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x174(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x84
	  lwz       r4, 0x8(r3)
	  addi      r3, r30, 0x138
	  addi      r4, r4, 0x24
	  bl        -0x51000
	  lwz       r3, 0x174(r30)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x114(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x84
	  bl        -0x5858

	.loc_0x84:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x74(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x60(r12)
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
 * Address:	8013B340
 * Size:	0000A0
 */
void getYVector__Q24Game8CreatureFR10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x13C(r3)
	  lfs       f1, -0x60D8(r2)
	  stfs      f0, 0x0(r4)
	  lfs       f0, 0x14C(r3)
	  stfs      f0, 0x4(r4)
	  lfs       f0, 0x15C(r3)
	  stfs      f0, 0x8(r4)
	  lfs       f3, 0x0(r4)
	  lfs       f2, 0x4(r4)
	  fmuls     f0, f3, f3
	  lfs       f4, 0x8(r4)
	  fmuls     f2, f2, f2
	  fmuls     f4, f4, f4
	  fadds     f0, f0, f2
	  fadds     f0, f4, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x60
	  fmadds    f0, f3, f3, f2
	  fadds     f2, f4, f0
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x64
	  fsqrte    f0, f2
	  fmuls     f2, f0, f2
	  b         .loc_0x64

	.loc_0x60:
	  fmr       f2, f1

	.loc_0x64:
	  lfs       f0, -0x60D8(r2)
	  fcmpo     cr0, f2, f0
	  blelr-
	  lfs       f1, -0x60DC(r2)
	  lfs       f0, 0x0(r4)
	  fdivs     f1, f1, f2
	  fmuls     f0, f0, f1
	  stfs      f0, 0x0(r4)
	  lfs       f0, 0x4(r4)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x4(r4)
	  lfs       f0, 0x8(r4)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x8(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013B3E0
 * Size:	000034
 */
void Game::Creature::getBodyRadius(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x24(r1)
	  lfs       f1, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013B414
 * Size:	000034
 */
void Game::Creature::getCellRadius(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x24(r1)
	  lfs       f1, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013B448
 * Size:	000024
 */
void Game::Creature::getTypeName(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lhz       r3, 0x128(r3)
	  bl        0x41FA0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013B46C
 * Size:	00008C
 */
void Game::Creature::getShadowParam((Game::ShadowParam&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  mr        r4, r3
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x8(r1)
	  lfs       f4, -0x60D4(r2)
	  stfs      f0, 0x0(r31)
	  lfs       f3, -0x60D0(r2)
	  lfs       f0, 0xC(r1)
	  lfs       f2, -0x60CC(r2)
	  stfs      f0, 0x4(r31)
	  lfs       f1, -0x60D8(r2)
	  lfs       f5, 0x10(r1)
	  lfs       f0, -0x60DC(r2)
	  stfs      f5, 0x8(r31)
	  lfs       f5, 0x4(r31)
	  fadds     f4, f5, f4
	  stfs      f4, 0x4(r31)
	  stfs      f3, 0x18(r31)
	  stfs      f2, 0x1C(r31)
	  stfs      f1, 0xC(r31)
	  stfs      f0, 0x10(r31)
	  stfs      f1, 0x14(r31)
	  lwz       r31, 0x1C(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013B4F8
 * Size:	00000C
 */
void Game::Creature::needShadow(void)
{
	/*
	.loc_0x0:
	  lbz       r0, 0xD8(r3)
	  rlwinm    r3,r0,30,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013B504
 * Size:	000070
 */
void Game::Creature::getLifeGaugeParam((Game::LifeGaugeParam&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  mr        r4, r3
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x8(r1)
	  li        r0, 0x1
	  lfs       f1, -0x60DC(r2)
	  stfs      f0, 0x0(r31)
	  lfs       f0, -0x60D0(r2)
	  lfs       f2, 0xC(r1)
	  stfs      f2, 0x4(r31)
	  lfs       f2, 0x10(r1)
	  stfs      f2, 0x8(r31)
	  stfs      f1, 0xC(r31)
	  stfs      f0, 0x10(r31)
	  stb       r0, 0x14(r31)
	  lwz       r31, 0x1C(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013B574
 * Size:	000090
 */
void Game::Creature::save((Stream&, unsigned char))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  rlwinm.   r0,r5,0,31,31
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  beq-      .loc_0x60
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  mr        r4, r31
	  lfs       f1, 0xC(r1)
	  addi      r3, r1, 0x14
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        0x2D6418

	.loc_0x60:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xE0(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013B604
 * Size:	0000E4
 */
void Game::Creature::load((Stream&, unsigned char))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  rlwinm.   r0,r5,0,31,31
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  beq-      .loc_0xB4
	  addi      r3, r1, 0x8
	  bl        0x2D6364
	  mr        r3, r30
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x78(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x174(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x9C
	  lwz       r4, 0x8(r3)
	  addi      r3, r30, 0x138
	  addi      r4, r4, 0x24
	  bl        -0x513A8
	  lwz       r3, 0x174(r30)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x114(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x9C
	  bl        -0x5C00

	.loc_0x9C:
	  mr        r3, r30
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x74(r12)
	  mtctr     r12
	  bctrl

	.loc_0xB4:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xE4(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	........
 * Size:	0000A0
 */
void Game::Creature::calcSphereDistance((Sys::Sphere&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8013B6E8
 * Size:	0000BC
 */
void Game::Creature::calcSphereDistance((Game::Creature*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  mr        r3, r4
	  addi      r4, r1, 0x18
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x1C(r1)
	  lfs       f3, 0x10(r1)
	  fsubs     f4, f1, f0
	  lfs       f2, 0x20(r1)
	  lfs       f1, 0x8(r1)
	  lfs       f0, 0x18(r1)
	  fsubs     f2, f3, f2
	  fmuls     f3, f4, f4
	  fsubs     f1, f1, f0
	  lfs       f0, -0x60D8(r2)
	  fmuls     f2, f2, f2
	  fmadds    f1, f1, f1, f3
	  fadds     f2, f2, f1
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x94
	  ble-      .loc_0x98
	  fsqrte    f0, f2
	  fmuls     f2, f0, f2
	  b         .loc_0x98

	.loc_0x94:
	  fmr       f2, f0

	.loc_0x98:
	  lfs       f1, 0x14(r1)
	  lfs       f0, 0x24(r1)
	  fadds     f0, f1, f0
	  fsubs     f1, f2, f0
	  lwz       r31, 0x2C(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013B7A4
 * Size:	0000CC
 */
void Game::Creature::applyAirDrag((float, float, float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stfd      f31, 0x50(r1)
	  psq_st    f31,0x58(r1),0,0
	  stfd      f30, 0x40(r1)
	  psq_st    f30,0x48(r1),0,0
	  stfd      f29, 0x30(r1)
	  psq_st    f29,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  fmr       f29, f1
	  mr        r4, r31
	  fmr       f30, f2
	  lwz       r12, 0x0(r31)
	  fmr       f31, f3
	  addi      r3, r1, 0x8
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f4, 0xC(r1)
	  fmuls     f5, f29, f30
	  lfs       f0, 0x8(r1)
	  mr        r3, r31
	  fmuls     f2, f29, f4
	  lfs       f3, 0x10(r1)
	  fnmsubs   f1, f0, f5, f0
	  stfs      f0, 0x14(r1)
	  fnmsubs   f0, f3, f5, f3
	  fnmsubs   f2, f31, f2, f4
	  stfs      f4, 0x18(r1)
	  addi      r4, r1, 0x14
	  stfs      f3, 0x1C(r1)
	  stfs      f2, 0x18(r1)
	  stfs      f1, 0x14(r1)
	  stfs      f0, 0x1C(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  psq_l     f30,0x48(r1),0,0
	  lfd       f30, 0x40(r1)
	  psq_l     f29,0x38(r1),0,0
	  lfd       f29, 0x30(r1)
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013B870
 * Size:	00003C
 */
void Game::Creature::doAnimation(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x174(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x2C
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x2C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013B8AC
 * Size:	000004
 */
void Game::Creature::doEntry(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013B8B0
 * Size:	000108
 */
void Game::Creature::doSetView((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  mr.       r30, r4
	  blt-      .loc_0x30
	  cmpwi     r30, 0x2
	  bge-      .loc_0x30
	  li        r0, 0x1

	.loc_0x30:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x54
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x3918
	  li        r4, 0x22E
	  subi      r5, r5, 0x3908
	  crclr     6, 0x6
	  bl        -0x1112C0

	.loc_0x54:
	  lwz       r0, 0x174(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xF0
	  bne-      .loc_0x80
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x3918
	  li        r4, 0x233
	  subi      r5, r5, 0x3908
	  crclr     6, 0x6
	  bl        -0x1112EC

	.loc_0x80:
	  lwz       r3, 0x174(r31)
	  rlwinm    r4,r30,0,16,31
	  bl        0x303788
	  lbz       r0, -0x7C00(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0xDC
	  li        r0, 0x10
	  lbz       r3, 0xD8(r31)
	  slw       r0, r0, r30
	  and.      r0, r3, r0
	  beq-      .loc_0xC4
	  lwz       r3, 0x174(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xF0

	.loc_0xC4:
	  lwz       r3, 0x174(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xF0

	.loc_0xDC:
	  lwz       r3, 0x174(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl

	.loc_0xF0:
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
 * Address:	8013B9B8
 * Size:	00002C
 */
void Game::Creature::doViewCalc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x174(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x1C
	  bl        0x303688

	.loc_0x1C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013B9E4
 * Size:	000010
 */
void Game::Creature::isPiki(void)
{
	/*
	.loc_0x0:
	  lhz       r0, 0x128(r3)
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013B9F4
 * Size:	000014
 */
void Game::Creature::isNavi(void)
{
	/*
	.loc_0x0:
	  lhz       r0, 0x128(r3)
	  subfic    r0, r0, 0x1
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013BA08
 * Size:	000014
 */
void Game::Creature::isTeki(void)
{
	/*
	.loc_0x0:
	  lhz       r0, 0x128(r3)
	  subfic    r0, r0, 0x2
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013BA1C
 * Size:	000014
 */
void Game::Creature::isPellet(void)
{
	/*
	.loc_0x0:
	  lhz       r0, 0x128(r3)
	  subfic    r0, r0, 0x401
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013BA30
 * Size:	000020
 */
void Game::Creature::sound_culling(void)
{
	/*
	.loc_0x0:
	  lbz       r4, 0xD8(r3)
	  li        r3, 0
	  rlwinm.   r0,r4,0,28,28
	  bnelr-
	  rlwinm.   r0,r4,0,29,29
	  bnelr-
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013BA50
 * Size:	00009C
 */
void Game::Creature::movie_begin((bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  rlwinm.   r0,r31,0,24,31
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r4, 0xBC(r3)
	  ori       r0, r4, 0x10
	  stw       r0, 0xBC(r3)
	  bne-      .loc_0x50
	  lwz       r0, 0xBC(r30)
	  ori       r0, r0, 0x40
	  stw       r0, 0xBC(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x6C

	.loc_0x50:
	  lwz       r0, 0xBC(r30)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0xBC(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl

	.loc_0x6C:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x110(r12)
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
 * Address:	8013BAEC
 * Size:	000050
 */
void Game::Creature::movie_end((bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x114(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0xBC(r31)
	  rlwinm    r0,r0,0,28,26
	  stw       r0, 0xBC(r31)
	  lwz       r0, 0xBC(r31)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0xBC(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013BB3C
 * Size:	0000E0
 */
void Game::Creature::checkWater((Game::WaterBox*, Sys::Sphere&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  stw       r30, 0x18(r1)
	  mr.       r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  beq-      .loc_0x84
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xC0
	  lwz       r3, -0x6CF8(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x60
	  mr        r4, r31
	  bl        0x27D94
	  mr        r30, r3

	.loc_0x60:
	  cmplwi    r30, 0
	  bne-      .loc_0xC0
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x88(r12)
	  mtctr     r12
	  bctrl
	  li        r30, 0
	  b         .loc_0xC0

	.loc_0x84:
	  lwz       r3, -0x6CF8(r13)
	  li        r4, 0
	  cmplwi    r3, 0
	  beq-      .loc_0xA0
	  mr        r4, r31
	  bl        0x27D54
	  mr        r4, r3

	.loc_0xA0:
	  cmplwi    r4, 0
	  mr        r30, r4
	  beq-      .loc_0xC0
	  lwz       r12, 0x0(r29)
	  mr        r3, r29
	  lwz       r12, 0x84(r12)
	  mtctr     r12
	  bctrl

	.loc_0xC0:
	  lwz       r0, 0x24(r1)
	  mr        r3, r30
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
 * Address:	8013BC1C
 * Size:	000004
 */
void Game::Creature::inWaterCallback((Game::WaterBox*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013BC20
 * Size:	000004
 */
void Game::Creature::outWaterCallback(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013BC24
 * Size:	000144
 */
void Game::Creature::checkHell((Game::Creature::CheckHellArg&))
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
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0xC(r1)
	  lfs       f0, -0x60C8(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x11C
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x84
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x84
	  li        r3, 0
	  bl        0xF4A74

	.loc_0x84:
	  lbz       r0, 0x0(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x114
	  mr        r3, r30
	  bl        0x6376C
	  mr        r3, r30
	  li        r4, 0
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, -0x6D38(r13)
	  mr        r3, r30
	  stw       r0, -0x6D28(r13)
	  bl        0x1A9AC
	  li        r0, 0
	  addi      r3, r30, 0x12C
	  stw       r0, -0x6D28(r13)
	  bl        0x5AA30
	  mr        r3, r30
	  bl        0x631C0
	  mr        r3, r30
	  bl        0x63D9C
	  mr        r3, r30
	  li        r4, 0
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xC4(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x114
	  mr        r4, r30
	  bl        0x6EFC8
	  li        r0, 0
	  stw       r0, 0xC4(r30)

	.loc_0x114:
	  li        r3, 0x2
	  b         .loc_0x12C

	.loc_0x11C:
	  lfs       f0, -0x60C4(r2)
	  fcmpo     cr0, f1, f0
	  mfcr      r0
	  rlwinm    r3,r0,1,31,31

	.loc_0x12C:
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
 * Address:	8013BD68
 * Size:	000178
 */
void Game::Creature::updateCell(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  stw       r29, 0x34(r1)
	  mr        r29, r3
	  lwz       r4, -0x6C18(r13)
	  cmplwi    r4, 0
	  beq-      .loc_0x34
	  lbz       r0, 0x3C(r4)
	  rlwinm.   r0,r0,0,29,29
	  bne-      .loc_0x15C

	.loc_0x34:
	  li        r0, -0x1
	  mr        r4, r29
	  stw       r0, 0xA4(r29)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  mr        r3, r29
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  frsp      f0, f1
	  lfs       f2, 0x14(r1)
	  stfs      f1, 0x20(r1)
	  cmplwi    r29, 0
	  mr        r31, r29
	  fsubs     f0, f2, f0
	  stfs      f0, 0x4(r29)
	  lfs       f1, 0x14(r1)
	  lfs       f0, 0x20(r1)
	  fadds     f0, f1, f0
	  stfs      f0, 0x18(r29)
	  lfs       f1, 0x1C(r1)
	  lfs       f0, 0x20(r1)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x2C(r29)
	  lfs       f1, 0x1C(r1)
	  lfs       f0, 0x20(r1)
	  fadds     f0, f1, f0
	  stfs      f0, 0x40(r29)
	  beq-      .loc_0xD4
	  addi      r31, r29, 0x4

	.loc_0xD4:
	  lwz       r30, -0x6D38(r13)
	  mr        r3, r31
	  mr        r4, r30
	  bl        0x100768
	  mr        r4, r30
	  addi      r3, r31, 0x14
	  bl        0x10075C
	  addi      r3, r31, 0x28
	  addi      r4, r30, 0x14
	  bl        0x100750
	  addi      r3, r31, 0x3C
	  addi      r4, r30, 0x14
	  bl        0x100744
	  lwz       r0, -0x6D38(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x15C
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1A8(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, -0x7BE4(r13)
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1AC(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, -0x6D24(r13)
	  mr        r4, r29
	  lwz       r3, -0x6D38(r13)
	  addi      r5, r1, 0x14
	  addi      r6, r29, 0xDC
	  addi      r7, r29, 0xE0
	  bl        0x1C694

	.loc_0x15C:
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
 * Address:	8013BEE0
 * Size:	000008
 */
void Game::Creature::getCreatureID(void)
{
	/*
	.loc_0x0:
	  li        r3, -0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013BEE8
 * Size:	000044
 */
void Game::Creature::getCellPikiCount(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r3
	  stw       r0, 0x14(r1)
	  lwz       r0, -0x6D38(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x30
	  lwz       r4, 0xDC(r5)
	  mr        r3, r0
	  addi      r5, r5, 0xE0
	  bl        0x1CE24
	  b         .loc_0x34

	.loc_0x30:
	  li        r3, 0

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013BF2C
 * Size:	0000B0
 */
void applyImpulse__Q24Game8CreatureFR10Vector3<float> R10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r5
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x8(r1)
	  mr        r3, r30
	  lfs       f4, 0xC(r1)
	  addi      r4, r1, 0x14
	  lfs       f3, 0x10(r1)
	  stfs      f5, 0x14(r1)
	  stfs      f4, 0x18(r1)
	  stfs      f3, 0x1C(r1)
	  lfs       f6, 0x118(r30)
	  lfs       f2, 0x8(r31)
	  lfs       f1, 0x4(r31)
	  lfs       f0, 0x0(r31)
	  fmuls     f2, f2, f6
	  fmuls     f1, f1, f6
	  fmuls     f0, f0, f6
	  fadds     f2, f3, f2
	  fadds     f1, f4, f1
	  fadds     f0, f5, f0
	  stfs      f2, 0x1C(r1)
	  stfs      f0, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013BFDC
 * Size:	0002E4
 */
void Game::Creature::checkCollision((Game::CellObject*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stmw      r27, 0x4C(r1)
	  mr        r29, r3
	  mr        r30, r4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xD8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x58
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1A8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1A8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x58:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2D0
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x94
	  b         .loc_0x2D0

	.loc_0x94:
	  mr        r3, r29
	  bl        0x63500
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB0
	  lwz       r0, 0xF4(r29)
	  cmplw     r0, r30
	  beq-      .loc_0x2D0

	.loc_0xB0:
	  mr        r3, r30
	  bl        0x634E4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xCC
	  lwz       r0, 0xF4(r30)
	  cmplw     r0, r29
	  beq-      .loc_0x2D0

	.loc_0xCC:
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x190(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2D0
	  mr        r3, r30
	  mr        r4, r29
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x190(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x110
	  b         .loc_0x2D0

	.loc_0x110:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2D0
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x14C
	  b         .loc_0x2D0

	.loc_0x14C:
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xD8(r12)
	  mtctr     r12
	  bctrl
	  lis       r3, 0x804B
	  lis       r4, 0x804B
	  addi      r5, r3, 0xA4
	  lis       r3, 0x804B
	  lwz       r7, 0x0(r5)
	  addi      r4, r4, 0xBC
	  lwz       r6, 0x4(r5)
	  addi      r0, r3, 0xB0
	  lwz       r5, 0x8(r5)
	  mr        r3, r29
	  stw       r4, 0x30(r1)
	  addi      r31, r1, 0x38
	  stw       r0, 0x30(r1)
	  stw       r29, 0x34(r1)
	  stw       r7, 0x38(r1)
	  stw       r6, 0x3C(r1)
	  stw       r5, 0x40(r1)
	  stw       r30, -0x6D88(r13)
	  lwz       r12, 0x0(r29)
	  stw       r7, 0x24(r1)
	  lwz       r12, 0xD8(r12)
	  stw       r6, 0x28(r1)
	  stw       r5, 0x2C(r1)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1D4
	  li        r0, 0x1
	  stb       r0, -0x6DA0(r13)

	.loc_0x1D4:
	  mr        r3, r29
	  li        r28, 0x1
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x214
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x214
	  li        r28, 0

	.loc_0x214:
	  mr        r3, r30
	  li        r27, 0x1
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x254
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x254
	  li        r27, 0

	.loc_0x254:
	  rlwinm.   r0,r28,0,24,31
	  beq-      .loc_0x264
	  rlwinm.   r0,r27,0,24,31
	  bne-      .loc_0x274

	.loc_0x264:
	  rlwinm.   r0,r28,0,24,31
	  bne-      .loc_0x2B4
	  rlwinm.   r0,r27,0,24,31
	  bne-      .loc_0x2B4

	.loc_0x274:
	  lwz       r3, 0x114(r29)
	  addi      r5, r1, 0xC
	  lwz       r4, 0x114(r30)
	  addi      r6, r1, 0x8
	  addi      r7, r1, 0x10
	  bl        -0x7D14
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2C4
	  lwz       r3, 0x34(r1)
	  mr        r12, r31
	  lwz       r4, 0xC(r1)
	  addi      r6, r1, 0x10
	  lwz       r5, 0x8(r1)
	  bl        -0x7A760
	  nop
	  b         .loc_0x2C4

	.loc_0x2B4:
	  lwz       r3, 0x114(r29)
	  addi      r5, r1, 0x30
	  lwz       r4, 0x114(r30)
	  bl        -0x6D38

	.loc_0x2C4:
	  li        r0, 0
	  stb       r0, -0x6DA0(r13)
	  stw       r0, -0x6D88(r13)

	.loc_0x2D0:
	  lmw       r27, 0x4C(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013C2C0
 * Size:	0008CC
 */
void resolveOneColl__Q24Game8CreatureFP8CollPartP8CollPartR10Vector3<float>(
    void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xF0(r1)
	  mflr      r0
	  stw       r0, 0xF4(r1)
	  stfd      f31, 0xE0(r1)
	  psq_st    f31,0xE8(r1),0,0
	  stfd      f30, 0xD0(r1)
	  psq_st    f30,0xD8(r1),0,0
	  stfd      f29, 0xC0(r1)
	  psq_st    f29,0xC8(r1),0,0
	  stmw      r26, 0xA8(r1)
	  lwz       r0, -0x6D88(r13)
	  mr        r28, r3
	  mr        r29, r4
	  mr        r30, r5
	  cmplwi    r0, 0
	  mr        r26, r6
	  mr        r31, r0
	  beq-      .loc_0x8A0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xD8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x88
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x1A8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1A8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x88:
	  mr        r3, r28
	  li        r27, 0
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0xB0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xC4
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xB0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xC8

	.loc_0xC4:
	  li        r27, 0x1

	.loc_0xC8:
	  lfs       f1, 0x4(r26)
	  lfs       f0, 0x0(r26)
	  fneg      f3, f1
	  lfs       f2, 0x8(r26)
	  fneg      f0, f0
	  lfs       f1, -0x60D8(r2)
	  fneg      f2, f2
	  frsp      f4, f3
	  frsp      f5, f0
	  stfs      f0, 0x98(r1)
	  frsp      f6, f2
	  fmuls     f4, f4, f4
	  stfs      f3, 0x9C(r1)
	  fmuls     f0, f5, f5
	  fmuls     f3, f6, f6
	  stfs      f2, 0xA0(r1)
	  fadds     f0, f0, f4
	  fadds     f0, f3, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x134
	  fmadds    f0, f5, f5, f4
	  fadds     f4, f3, f0
	  fcmpo     cr0, f4, f1
	  ble-      .loc_0x138
	  fsqrte    f0, f4
	  fmuls     f4, f0, f4
	  b         .loc_0x138

	.loc_0x134:
	  fmr       f4, f1

	.loc_0x138:
	  lfs       f0, -0x60D8(r2)
	  fcmpo     cr0, f4, f0
	  ble-      .loc_0x174
	  lfs       f0, -0x60DC(r2)
	  lfs       f2, 0x98(r1)
	  fdivs     f3, f0, f4
	  lfs       f1, 0x9C(r1)
	  lfs       f0, 0xA0(r1)
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x98(r1)
	  stfs      f1, 0x9C(r1)
	  stfs      f0, 0xA0(r1)
	  b         .loc_0x178

	.loc_0x174:
	  fmr       f4, f0

	.loc_0x178:
	  lfs       f1, -0x60D8(r2)
	  fcmpu     cr0, f1, f4
	  bne-      .loc_0x194
	  lfs       f0, -0x60DC(r2)
	  stfs      f1, 0x98(r1)
	  stfs      f1, 0x9C(r1)
	  stfs      f0, 0xA0(r1)

	.loc_0x194:
	  lfs       f0, 0x1C(r29)
	  mr        r3, r28
	  lfs       f6, 0xA0(r1)
	  addi      r4, r1, 0x74
	  lfs       f7, 0x9C(r1)
	  addi      r5, r1, 0x8C
	  lfs       f8, 0x98(r1)
	  fmuls     f5, f6, f0
	  lfs       f2, 0x54(r29)
	  fmuls     f4, f7, f0
	  lfs       f1, 0x50(r29)
	  fmuls     f3, f8, f0
	  lfs       f0, 0x4C(r29)
	  fadds     f2, f2, f5
	  fadds     f1, f1, f4
	  fadds     f0, f0, f3
	  stfs      f2, 0x7C(r1)
	  stfs      f0, 0x74(r1)
	  stfs      f1, 0x78(r1)
	  lfs       f0, 0x1C(r30)
	  lfs       f5, 0x54(r30)
	  fmuls     f4, f6, f0
	  lfs       f3, 0x50(r30)
	  fmuls     f2, f7, f0
	  lfs       f1, 0x4C(r30)
	  fmuls     f0, f8, f0
	  fsubs     f4, f5, f4
	  fsubs     f2, f3, f2
	  fsubs     f0, f1, f0
	  stfs      f4, 0x70(r1)
	  stfs      f0, 0x68(r1)
	  stfs      f2, 0x6C(r1)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x184(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  addi      r4, r1, 0x68
	  lwz       r12, 0x0(r31)
	  addi      r5, r1, 0x80
	  lwz       r12, 0x184(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x118(r28)
	  lfs       f1, 0x118(r31)
	  lfs       f0, -0x60D8(r2)
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x268
	  fdivs     f31, f2, f1
	  lfs       f0, -0x60DC(r2)
	  fsubs     f30, f0, f31
	  b         .loc_0x270

	.loc_0x268:
	  lfs       f30, -0x60D4(r2)
	  fmr       f31, f30

	.loc_0x270:
	  lwz       r4, -0x6514(r13)
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lfs       f1, -0x60DC(r2)
	  lfs       f0, 0x54(r4)
	  lwz       r12, 0x1C(r12)
	  fdivs     f29, f1, f0
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x320
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x320
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x35C
	  lfs       f1, -0x60D4(r2)
	  lfs       f0, -0x60D8(r2)
	  fmuls     f1, f1, f29
	  lfs       f3, 0x0(r26)
	  fmuls     f0, f0, f29
	  lfs       f2, 0x11C(r28)
	  fmuls     f4, f31, f1
	  fmuls     f1, f31, f0
	  fmadds    f0, f3, f4, f2
	  stfs      f0, 0x11C(r28)
	  lfs       f2, 0x8(r26)
	  lfs       f0, 0x124(r28)
	  fmadds    f0, f2, f4, f0
	  stfs      f0, 0x124(r28)
	  lfs       f2, 0x4(r26)
	  lfs       f0, 0x120(r28)
	  fmadds    f0, f2, f1, f0
	  stfs      f0, 0x120(r28)
	  b         .loc_0x35C

	.loc_0x320:
	  lfs       f1, -0x60D4(r2)
	  lfs       f0, -0x60D8(r2)
	  fmuls     f1, f1, f29
	  lfs       f2, 0x0(r26)
	  fmuls     f0, f0, f29
	  fmuls     f3, f31, f1
	  fmuls     f0, f31, f0
	  fmuls     f1, f2, f3
	  stfs      f1, 0x11C(r28)
	  lfs       f1, 0x8(r26)
	  fmuls     f1, f1, f3
	  stfs      f1, 0x124(r28)
	  lfs       f1, 0x4(r26)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x120(r28)

	.loc_0x35C:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x3FC
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x3FC
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x444
	  lfs       f0, -0x60D4(r2)
	  lfs       f2, 0x0(r26)
	  fmuls     f1, f0, f29
	  lfs       f0, -0x60D8(r2)
	  fneg      f2, f2
	  fmuls     f0, f0, f29
	  fmuls     f3, f30, f1
	  fmuls     f0, f30, f0
	  fmuls     f1, f2, f3
	  stfs      f1, 0x11C(r31)
	  lfs       f1, 0x8(r26)
	  fneg      f1, f1
	  fmuls     f1, f1, f3
	  stfs      f1, 0x124(r31)
	  lfs       f1, 0x4(r26)
	  fneg      f1, f1
	  fmuls     f0, f1, f0
	  stfs      f0, 0x120(r31)
	  b         .loc_0x444

	.loc_0x3FC:
	  lfs       f0, -0x60D4(r2)
	  lfs       f2, 0x0(r26)
	  fmuls     f1, f0, f29
	  lfs       f0, -0x60D8(r2)
	  fneg      f2, f2
	  fmuls     f0, f0, f29
	  fmuls     f3, f30, f1
	  fmuls     f0, f30, f0
	  fmuls     f1, f2, f3
	  stfs      f1, 0x11C(r31)
	  lfs       f1, 0x8(r26)
	  fneg      f1, f1
	  fmuls     f1, f1, f3
	  stfs      f1, 0x124(r31)
	  lfs       f1, 0x4(r26)
	  fneg      f1, f1
	  fmuls     f0, f1, f0
	  stfs      f0, 0x120(r31)

	.loc_0x444:
	  lfs       f2, 0x11C(r28)
	  lfs       f1, 0x120(r28)
	  fmuls     f0, f2, f2
	  lfs       f3, 0x124(r28)
	  fmuls     f4, f1, f1
	  lfs       f1, -0x60D8(r2)
	  fmuls     f3, f3, f3
	  fadds     f0, f0, f4
	  fadds     f0, f3, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x48C
	  fmadds    f0, f2, f2, f4
	  fadds     f3, f3, f0
	  fcmpo     cr0, f3, f1
	  ble-      .loc_0x490
	  fsqrte    f0, f3
	  fmuls     f3, f0, f3
	  b         .loc_0x490

	.loc_0x48C:
	  fmr       f3, f1

	.loc_0x490:
	  lfs       f2, -0x60C0(r2)
	  fcmpo     cr0, f3, f2
	  ble-      .loc_0x4CC
	  lfs       f1, -0x60DC(r2)
	  lfs       f0, 0x11C(r28)
	  fdivs     f1, f1, f3
	  fmuls     f1, f2, f1
	  fmuls     f0, f0, f1
	  stfs      f0, 0x11C(r28)
	  lfs       f0, 0x120(r28)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x120(r28)
	  lfs       f0, 0x124(r28)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x124(r28)

	.loc_0x4CC:
	  lfs       f2, 0x11C(r31)
	  lfs       f1, 0x120(r31)
	  fmuls     f0, f2, f2
	  lfs       f3, 0x124(r31)
	  fmuls     f4, f1, f1
	  lfs       f1, -0x60D8(r2)
	  fmuls     f3, f3, f3
	  fadds     f0, f0, f4
	  fadds     f0, f3, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x514
	  fmadds    f0, f2, f2, f4
	  fadds     f3, f3, f0
	  fcmpo     cr0, f3, f1
	  ble-      .loc_0x518
	  fsqrte    f0, f3
	  fmuls     f3, f0, f3
	  b         .loc_0x518

	.loc_0x514:
	  fmr       f3, f1

	.loc_0x518:
	  lfs       f2, -0x60C0(r2)
	  fcmpo     cr0, f3, f2
	  ble-      .loc_0x554
	  lfs       f1, -0x60DC(r2)
	  lfs       f0, 0x11C(r31)
	  fdivs     f1, f1, f3
	  fmuls     f1, f2, f1
	  fmuls     f0, f0, f1
	  stfs      f0, 0x11C(r31)
	  lfs       f0, 0x120(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x120(r31)
	  lfs       f0, 0x124(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x124(r31)

	.loc_0x554:
	  rlwinm.   r0,r27,0,24,31
	  beq-      .loc_0x578
	  lfs       f0, -0x60D8(r2)
	  stfs      f0, 0x11C(r28)
	  stfs      f0, 0x120(r28)
	  stfs      f0, 0x124(r28)
	  stfs      f0, 0x11C(r31)
	  stfs      f0, 0x120(r31)
	  stfs      f0, 0x124(r31)

	.loc_0x578:
	  lfs       f1, 0x90(r1)
	  mr        r3, r28
	  lfs       f0, 0x84(r1)
	  addi      r4, r1, 0x5C
	  lfs       f3, 0x8C(r1)
	  lfs       f2, 0x80(r1)
	  fsubs     f1, f1, f0
	  lfs       f0, 0x9C(r1)
	  fsubs     f2, f3, f2
	  stw       r31, 0x5C(r1)
	  fmuls     f0, f1, f0
	  lfs       f1, 0x98(r1)
	  stw       r30, 0x60(r1)
	  lfs       f3, 0x94(r1)
	  stw       r29, 0x64(r1)
	  fmadds    f0, f2, f1, f0
	  lfs       f1, 0x88(r1)
	  lwz       r12, 0x0(r28)
	  fsubs     f2, f3, f1
	  lfs       f1, 0xA0(r1)
	  lwz       r12, 0xEC(r12)
	  fmadds    f29, f2, f1, f0
	  mtctr     r12
	  bctrl
	  stw       r28, 0x50(r1)
	  mr        r3, r31
	  addi      r4, r1, 0x50
	  stw       r29, 0x54(r1)
	  stw       r30, 0x58(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xEC(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x60D8(r2)
	  fcmpo     cr0, f29, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x654
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0xD8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x8A0
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x1A8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1A8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x8A0

	.loc_0x654:
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0xD8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r27,0,24,31
	  beq-      .loc_0x688
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0xD8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x8A0

	.loc_0x688:
	  mr        r3, r28
	  lfs       f30, -0x60BC(r2)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x6C4
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x6C8

	.loc_0x6C4:
	  lfs       f30, -0x60D8(r2)

	.loc_0x6C8:
	  lfs       f0, -0x60DC(r2)
	  li        r27, 0
	  lfs       f2, 0x118(r28)
	  fadds     f3, f0, f30
	  lfs       f1, 0x118(r31)
	  lfs       f0, -0x60D8(r2)
	  fadds     f2, f2, f1
	  fneg      f1, f3
	  fmr       f30, f2
	  fcmpu     cr0, f0, f2
	  fmuls     f29, f1, f29
	  bne-      .loc_0x700
	  lfs       f30, -0x60B8(r2)
	  li        r27, 0x1

	.loc_0x700:
	  mr        r3, r28
	  addi      r4, r1, 0x74
	  lwz       r12, 0x0(r28)
	  addi      r5, r1, 0x98
	  lwz       r12, 0x188(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  fadds     f30, f30, f1
	  lwz       r12, 0x0(r31)
	  addi      r4, r1, 0x68
	  addi      r5, r1, 0x98
	  lwz       r12, 0x188(r12)
	  mtctr     r12
	  bctrl
	  fadds     f30, f30, f1
	  lfs       f1, 0xA0(r1)
	  lfs       f6, 0x9C(r1)
	  rlwinm.   r0,r27,0,24,31
	  lfs       f7, 0x98(r1)
	  fdivs     f2, f29, f30
	  fneg      f5, f2
	  fmuls     f0, f1, f2
	  fmuls     f3, f6, f2
	  fmuls     f4, f1, f5
	  fmuls     f2, f7, f2
	  stfs      f0, 0x4C(r1)
	  fmuls     f1, f7, f5
	  fmuls     f0, f6, f5
	  stfs      f3, 0x48(r1)
	  stfs      f2, 0x44(r1)
	  stfs      f1, 0x38(r1)
	  stfs      f0, 0x3C(r1)
	  stfs      f4, 0x40(r1)
	  bne-      .loc_0x7C8
	  mr        r3, r28
	  addi      r4, r1, 0x74
	  lwz       r12, 0x0(r28)
	  addi      r5, r1, 0x44
	  lwz       r12, 0x18C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  addi      r4, r1, 0x68
	  lwz       r12, 0x0(r31)
	  addi      r5, r1, 0x38
	  lwz       r12, 0x18C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x8A0

	.loc_0x7C8:
	  mr        r4, r28
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x14(r1)
	  mr        r3, r28
	  lfs       f4, 0x18(r1)
	  addi      r4, r1, 0x2C
	  lfs       f3, 0x1C(r1)
	  lfs       f2, 0x4C(r1)
	  lfs       f1, 0x48(r1)
	  lfs       f0, 0x44(r1)
	  fadds     f2, f3, f2
	  stfs      f3, 0x34(r1)
	  fadds     f1, f4, f1
	  fadds     f0, f5, f0
	  stfs      f5, 0x2C(r1)
	  stfs      f4, 0x30(r1)
	  stfs      f0, 0x2C(r1)
	  stfs      f1, 0x30(r1)
	  stfs      f2, 0x34(r1)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x8(r1)
	  mr        r3, r31
	  lfs       f4, 0xC(r1)
	  addi      r4, r1, 0x20
	  lfs       f3, 0x10(r1)
	  lfs       f2, 0x40(r1)
	  lfs       f1, 0x3C(r1)
	  lfs       f0, 0x38(r1)
	  fadds     f2, f3, f2
	  stfs      f3, 0x28(r1)
	  fadds     f1, f4, f1
	  fadds     f0, f5, f0
	  stfs      f5, 0x20(r1)
	  stfs      f4, 0x24(r1)
	  stfs      f0, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f2, 0x28(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl

	.loc_0x8A0:
	  psq_l     f31,0xE8(r1),0,0
	  lfd       f31, 0xE0(r1)
	  psq_l     f30,0xD8(r1),0,0
	  lfd       f30, 0xD0(r1)
	  psq_l     f29,0xC8(r1),0,0
	  lfd       f29, 0xC0(r1)
	  lmw       r26, 0xA8(r1)
	  lwz       r0, 0xF4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xF0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013CB8C
 * Size:	000004
 */
void Game::Creature::collisionCallback((Game::CollEvent&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013CB90
 * Size:	000030
 */
void Delegate3<Game::Creature, CollPart*, CollPart*, Vector3<float>&>::invoke(
    CollPart*, CollPart*, Vector3<float>&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r7, r3
	  stw       r0, 0x14(r1)
	  addi      r12, r7, 0x8
	  lwz       r3, 0x4(r3)
	  bl        -0x7B084
	  nop
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013CBC0
 * Size:	000004
 */
void Game::Creature::constructor(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013CBC4
 * Size:	000004
 */
void Game::Creature::doSimulation((float))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013CBC8
 * Size:	000008
 */
void Game::Creature::inWater(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013CBD0
 * Size:	000008
 */
void Game::Creature::isFlying(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013CBD8
 * Size:	000008
 */
void Game::Creature::getPSCreature(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013CBE0
 * Size:	000008
 */
void Game::Creature::getSound_PosPtr(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013CBE8
 * Size:	000008
 */
void Game::Creature::getSound_CurrAnimFrame(void)
{
	/*
	.loc_0x0:
	  lfs       f1, -0x60D8(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013CBF0
 * Size:	000008
 */
void Game::Creature::getSound_CurrAnimSpeed(void)
{
	/*
	.loc_0x0:
	  lfs       f1, -0x60D8(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013CBF8
 * Size:	00002C
 */
void Game::Creature::getLODSphere((Sys::Sphere&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
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
 * Address:	8013CC24
 * Size:	000004
 */
void Game::Creature::onStickStart((Game::Creature*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013CC28
 * Size:	000004
 */
void Game::Creature::onStickEnd((Game::Creature*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013CC2C
 * Size:	000004
 */
void Game::CellObject::checkCollision((Game::CellObject*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013CC30
 * Size:	000008
 */
void Game::CellObject::isPiki(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013CC38
 * Size:	000008
 */
void Game::CellObject::isNavi(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013CC40
 * Size:	000028
 */
void __sinit_creature_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804B
	  stw       r0, -0x6D90(r13)
	  stfsu     f0, 0x98(r3)
	  stfs      f0, -0x6D8C(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

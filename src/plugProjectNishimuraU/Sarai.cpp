

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
 * Address:	80272BC4
 * Size:	000138
 */
void Game::Sarai::Obj::__ct(void)
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
	  addi      r0, r31, 0x2D8
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x2D8(r31)
	  stw       r0, 0x2DC(r31)
	  stw       r0, 0x2E0(r31)

	.loc_0x40:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x17186C
	  lis       r3, 0x804C
	  addi      r0, r31, 0x2D8
	  addi      r5, r3, 0x65B8
	  addi      r3, r31, 0x2C4
	  stw       r5, 0x0(r31)
	  addi      r4, r5, 0x1B0
	  addi      r5, r5, 0x30C
	  stw       r4, 0x178(r31)
	  lwz       r4, 0x17C(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0x17C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0xC(r4)
	  bl        -0x13A6FC
	  li        r3, 0x2C
	  bl        -0x24EDA8
	  mr.       r30, r3
	  beq-      .loc_0xD4
	  bl        -0x14B2E4
	  lis       r3, 0x804C
	  lis       r4, 0x804B
	  addi      r0, r3, 0x64A0
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

	.loc_0xD4:
	  stw       r30, 0x184(r31)
	  li        r3, 0x1C
	  bl        -0x24EDFC
	  mr.       r4, r3
	  beq-      .loc_0x108
	  lis       r5, 0x804B
	  lis       r3, 0x804C
	  subi      r0, r5, 0x680
	  li        r5, -0x1
	  stw       r0, 0x0(r4)
	  addi      r0, r3, 0x6478
	  stw       r5, 0x18(r4)
	  stw       r0, 0x0(r4)

	.loc_0x108:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x2F8(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	80272CFC
 * Size:	000004
 */
void Game::Sarai::Obj::setInitialSetting((Game::EnemyInitialParamBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80272D00
 * Size:	000078
 */
void Game::Sarai::Obj::onInit((Game::CreatureInitArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1712BC
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x3168(r2)
	  ori       r0, r0, 0x4
	  lfs       f1, -0x3164(r2)
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x2C0(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x308(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
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
 * Address:	80272D78
 * Size:	000048
 */
void Game::Sarai::Obj::doUpdate(void)
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
	  addi      r3, r31, 0x2C4
	  bl        -0x13A77C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80272DC0
 * Size:	00004C
 */
void Game::Sarai::Obj::setFSM((Game::Sarai::FSM*))
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
 * Address:	80272E0C
 * Size:	000004
 */
void Game::Sarai::Obj::doDirectDraw((Graphics&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80272E10
 * Size:	000020
 */
void Game::Sarai::Obj::doDebugDraw((Graphics&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x16CFB0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80272E30
 * Size:	000140
 */
void Game::Sarai::Obj::getShadowParam((Game::ShadowParam&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  subi      r4, r2, 0x3160
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x174(r3)
	  bl        0x1CC190
	  bl        0x1B6A48
	  lfs       f2, 0x2C(r3)
	  lfs       f1, 0x1C(r3)
	  lfs       f0, 0xC(r3)
	  mr        r3, r30
	  stfs      f0, 0x0(r31)
	  stfs      f1, 0x4(r31)
	  stfs      f2, 0x8(r31)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xF4
	  mr        r3, r30
	  bl        -0x16BAA0
	  subi      r0, r3, 0x1
	  cmplwi    r0, 0x1
	  ble-      .loc_0x7C
	  cmpwi     r3, 0x3
	  bne-      .loc_0xA4

	.loc_0x7C:
	  lfs       f2, 0x4(r31)
	  lfs       f0, -0x3158(r2)
	  lfs       f1, -0x3154(r2)
	  fsubs     f0, f2, f0
	  stfs      f0, 0x4(r31)
	  lwz       r3, 0xC0(r30)
	  lfs       f0, 0x81C(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x18(r31)
	  b         .loc_0x10C

	.loc_0xA4:
	  lwz       r0, 0xC8(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0xCC
	  lfs       f2, 0x4(r31)
	  lfs       f1, -0x3158(r2)
	  lfs       f0, -0x3150(r2)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x4(r31)
	  stfs      f0, 0x18(r31)
	  b         .loc_0x10C

	.loc_0xCC:
	  lfs       f2, 0x4(r31)
	  lfs       f0, -0x314C(r2)
	  lfs       f1, -0x3154(r2)
	  fsubs     f0, f2, f0
	  stfs      f0, 0x4(r31)
	  lwz       r3, 0xC0(r30)
	  lfs       f0, 0x81C(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x18(r31)
	  b         .loc_0x10C

	.loc_0xF4:
	  lfs       f2, -0x3148(r2)
	  lfs       f1, 0x190(r30)
	  lfs       f0, -0x3144(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0x4(r31)
	  stfs      f0, 0x18(r31)

	.loc_0x10C:
	  lfs       f2, -0x3168(r2)
	  lfs       f1, -0x3140(r2)
	  stfs      f2, 0xC(r31)
	  lfs       f0, -0x313C(r2)
	  stfs      f1, 0x10(r31)
	  stfs      f2, 0x14(r31)
	  stfs      f0, 0x1C(r31)
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
 * Address:	80272F70
 * Size:	000034
 */
void Game::Sarai::Obj::doStartStoneState(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x170090
	  mr        r3, r31
	  bl        0x8D0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80272FA4
 * Size:	00005C
 */
void Game::Sarai::Obj::doFinishStoneState(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1700B0
	  mr        r3, r31
	  bl        -0x16BBCC
	  cmpwi     r3, 0x3
	  blt-      .loc_0x48
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80273000
 * Size:	000028
 */
void Game::Sarai::Obj::startCarcassMotion(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0xB
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  bl        -0x16E010
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80273028
 * Size:	0000A8
 */
void Game::Sarai::Obj::initMouthSlots(void)
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
	  li        r4, 0x2
	  addi      r3, r30, 0x2C4
	  bl        -0x13AAF8
	  lis       r3, 0x8048
	  lwz       r5, 0x174(r30)
	  addi      r6, r3, 0x6C50
	  li        r4, 0
	  addi      r3, r30, 0x2C4
	  bl        -0x13A9D8
	  lis       r3, 0x8048
	  lwz       r5, 0x174(r30)
	  addi      r6, r3, 0x6C5C
	  li        r4, 0x1
	  addi      r3, r30, 0x2C4
	  bl        -0x13A9F0
	  lfs       f31, -0x3138(r2)
	  li        r31, 0
	  b         .loc_0x7C

	.loc_0x68:
	  mr        r4, r31
	  addi      r3, r30, 0x2C4
	  bl        -0x13A920
	  stfs      f31, 0x1C(r3)
	  addi      r31, r31, 0x1

	.loc_0x7C:
	  lwz       r0, 0x2C4(r30)
	  cmpw      r31, r0
	  blt+      .loc_0x68
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
 * Address:	802730D0
 * Size:	000108
 */
void Game::Sarai::Obj::setHeightVelocity(void)
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
	  lwz       r3, 0x1F4(r3)
	  cmpwi     r3, 0
	  bge-      .loc_0x38
	  li        r0, 0
	  b         .loc_0x48

	.loc_0x38:
	  cmpwi     r3, 0x5
	  li        r0, 0x5
	  bgt-      .loc_0x48
	  mr        r0, r3

	.loc_0x48:
	  xoris     r3, r0, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  addi      r4, r31, 0x18C
	  lwz       r5, 0xC0(r31)
	  stw       r0, 0x8(r1)
	  lfd       f1, -0x3130(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f4, -0x3158(r2)
	  fsubs     f1, f0, f1
	  lwz       r3, -0x6CF8(r13)
	  lfs       f0, 0x934(r5)
	  lwz       r12, 0x4(r3)
	  fsubs     f3, f4, f1
	  lfs       f2, 0x90C(r5)
	  fdivs     f1, f1, f4
	  lwz       r12, 0x28(r12)
	  fdivs     f3, f3, f4
	  fmuls     f0, f1, f0
	  fmadds    f30, f3, f2, f0
	  mtctr     r12
	  bctrl
	  fmr       f31, f1
	  mr        r3, r31
	  bl        0x524
	  cmpwi     r3, 0
	  beq-      .loc_0xC0
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x844(r3)
	  b         .loc_0xC8

	.loc_0xC0:
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x81C(r3)

	.loc_0xC8:
	  fadds     f1, f31, f0
	  lfs       f0, 0x190(r31)
	  fsubs     f0, f1, f0
	  fmuls     f0, f30, f0
	  stfs      f0, 0x1CC(r31)
	  lfs       f0, 0x190(r31)
	  fsubs     f1, f0, f31
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
 * Address:	802731D8
 * Size:	000230
 */
void Game::Sarai::Obj::setRandTarget(void)
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
	  bl        0x4A0
	  cmpwi     r3, 0
	  beq-      .loc_0x6C
	  lwz       r3, 0xC0(r31)
	  lfs       f30, 0x384(r3)
	  bl        -0x1A9C70
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f2, -0x3130(r2)
	  stw       r0, 0x8(r1)
	  lfs       f0, -0x3128(r2)
	  lfd       f1, 0x8(r1)
	  fsubs     f1, f1, f2
	  fmuls     f1, f30, f1
	  fdivs     f0, f1, f0
	  fmr       f31, f0
	  b         .loc_0x104

	.loc_0x6C:
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0xBC
	  lbz       r0, 0x48(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xBC
	  bl        -0x1A9CBC
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, -0x3130(r2)
	  stw       r0, 0x8(r1)
	  lfs       f2, -0x3150(r2)
	  lfd       f1, 0x8(r1)
	  lfs       f0, -0x3128(r2)
	  fsubs     f1, f1, f3
	  fmuls     f1, f2, f1
	  fdivs     f0, f1, f0
	  fadds     f31, f2, f0
	  b         .loc_0x104

	.loc_0xBC:
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x35C(r3)
	  lfs       f0, 0x384(r3)
	  fsubs     f30, f1, f0
	  bl        -0x1A9D04
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lwz       r3, 0xC0(r31)
	  stw       r0, 0x8(r1)
	  lfd       f2, -0x3130(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f1, -0x3128(r2)
	  fsubs     f2, f0, f2
	  lfs       f0, 0x384(r3)
	  fmuls     f2, f30, f2
	  fdivs     f1, f2, f1
	  fadds     f31, f0, f1

	.loc_0x104:
	  lfs       f3, 0x18C(r31)
	  lis       r3, 0x8051
	  lfs       f1, 0x198(r31)
	  subi      r3, r3, 0x2E20
	  lfs       f2, 0x194(r31)
	  lfs       f0, 0x1A0(r31)
	  fsubs     f1, f3, f1
	  fsubs     f2, f2, f0
	  bl        -0x23E1F4
	  fmr       f30, f1
	  bl        -0x1A9D64
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f2, -0x3130(r2)
	  stw       r0, 0x8(r1)
	  lfs       f3, -0x3124(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f1, -0x3128(r2)
	  fsubs     f4, f0, f2
	  lfs       f2, -0x3120(r2)
	  lfs       f0, -0x3168(r2)
	  fmuls     f3, f3, f4
	  fdivs     f1, f3, f1
	  fadds     f1, f30, f1
	  fadds     f5, f2, f1
	  fmr       f1, f5
	  fcmpo     cr0, f5, f0
	  bge-      .loc_0x17C
	  fneg      f1, f5

	.loc_0x17C:
	  lfs       f3, -0x311C(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x3168(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f2, f1, f3
	  lfs       f1, 0x1A0(r31)
	  fcmpo     cr0, f5, f0
	  lfs       f4, 0x19C(r31)
	  fctiwz    f0, f2
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f0, 0x4(r3)
	  fmadds    f2, f31, f0, f1
	  bge-      .loc_0x1E0
	  lfs       f0, -0x3118(r2)
	  fmuls     f0, f5, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f1, f0
	  b         .loc_0x1F8

	.loc_0x1E0:
	  fmuls     f0, f5, f3
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r4, r0

	.loc_0x1F8:
	  lfs       f0, 0x198(r31)
	  fmadds    f0, f31, f1, f0
	  stfs      f0, 0x2CC(r31)
	  stfs      f4, 0x2D0(r31)
	  stfs      f2, 0x2D4(r31)
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
 * Address:	80273408
 * Size:	000294
 */
void Game::Sarai::Obj::fallMeckGround(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stw       r31, 0x5C(r1)
	  mr        r31, r3
	  addi      r3, r1, 0x30
	  stw       r30, 0x58(r1)
	  mr        r4, r31
	  bl        -0xD37CC
	  li        r0, 0
	  lis       r3, 0x804B
	  subi      r4, r3, 0x437C
	  addi      r3, r1, 0x30
	  cmplwi    r0, 0
	  stw       r4, 0x20(r1)
	  stw       r0, 0x2C(r1)
	  stw       r0, 0x24(r1)
	  stw       r3, 0x28(r1)
	  bne-      .loc_0x64
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x250

	.loc_0x64:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0xD0

	.loc_0x7C:
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
	  bne-      .loc_0x250
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)

	.loc_0xD0:
	  lwz       r12, 0x20(r1)
	  addi      r3, r1, 0x20
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x7C
	  b         .loc_0x250

	.loc_0xF0:
	  lwz       r3, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r30, r3
	  bl        -0xD3F88
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x194
	  lwz       r6, 0xC0(r31)
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  mr        r3, r30
	  lfs       f0, 0x604(r6)
	  subi      r5, r5, 0x5D00
	  addi      r0, r4, 0x48E4
	  addi      r4, r1, 0x14
	  stw       r5, 0x14(r1)
	  stw       r31, 0x18(r1)
	  stw       r0, 0x14(r1)
	  stfs      f0, 0x1C(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x194
	  lfs       f1, -0x3168(r2)
	  mr        r3, r30
	  addi      r4, r1, 0x8
	  stfs      f1, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f1, 0x10(r1)
	  lwz       r5, 0xC0(r31)
	  lfs       f0, 0xA24(r5)
	  fsubs     f0, f1, f0
	  stfs      f0, 0xC(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl

	.loc_0x194:
	  lwz       r0, 0x2C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x1C0
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x250

	.loc_0x1C0:
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x234

	.loc_0x1E0:
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
	  bne-      .loc_0x250
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)

	.loc_0x234:
	  lwz       r12, 0x20(r1)
	  addi      r3, r1, 0x20
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x1E0

	.loc_0x250:
	  lwz       r3, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x24(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xF0
	  addi      r3, r1, 0x30
	  li        r4, -0x1
	  bl        -0xD391C
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8027369C
 * Size:	00007C
 */
void Game::Sarai::Obj::getCatchTargetNum(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  li        r29, 0
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lwz       r31, 0x2C4(r3)
	  b         .loc_0x50

	.loc_0x30:
	  mr        r4, r29
	  addi      r3, r28, 0x2C4
	  bl        -0x13AF5C
	  lwz       r0, 0x64(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x4C
	  addi      r30, r30, 0x1

	.loc_0x4C:
	  addi      r29, r29, 0x1

	.loc_0x50:
	  cmpw      r29, r31
	  blt+      .loc_0x30
	  lwz       r0, 0x24(r1)
	  mr        r3, r30
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
 * Address:	80273718
 * Size:	000144
 */
void Game::Sarai::Obj::getNextStateOnHeight(void)
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
	  lfs       f0, -0x3168(r2)
	  lfs       f1, 0x200(r3)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x3C
	  li        r3, 0x1
	  b         .loc_0x124

	.loc_0x3C:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2FC(r12)
	  mtctr     r12
	  bctrl
	  mr.       r31, r3
	  beq-      .loc_0x120
	  mr        r3, r30
	  li        r4, 0x3
	  bl        -0x15E5C0
	  cmpwi     r3, 0
	  ble-      .loc_0x70
	  li        r3, 0x1
	  b         .loc_0x124

	.loc_0x70:
	  subic.    r0, r31, 0x1
	  bge-      .loc_0x80
	  li        r3, 0
	  b         .loc_0x94

	.loc_0x80:
	  subi      r0, r31, 0x1
	  li        r3, 0x4
	  cmpwi     r0, 0x4
	  bgt-      .loc_0x94
	  mr        r3, r0

	.loc_0x94:
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lwz       r3, 0xC0(r30)
	  stw       r0, 0x8(r1)
	  lfd       f2, -0x3130(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f1, -0x3114(r2)
	  fsubs     f5, f0, f2
	  lfs       f3, -0x3110(r2)
	  lfs       f0, 0x984(r3)
	  lfs       f2, 0x95C(r3)
	  fsubs     f4, f1, f5
	  fmuls     f1, f5, f3
	  fmuls     f3, f4, f3
	  fmuls     f0, f1, f0
	  fmadds    f31, f3, f2, f0
	  bl        -0x1AA250
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x14(r1)
	  lfd       f3, -0x3130(r2)
	  stw       r0, 0x10(r1)
	  lfs       f1, -0x3140(r2)
	  lfd       f2, 0x10(r1)
	  lfs       f0, -0x3128(r2)
	  fsubs     f2, f2, f3
	  fmuls     f1, f1, f2
	  fdivs     f0, f1, f0
	  fcmpo     cr0, f0, f31
	  bge-      .loc_0x118
	  li        r3, 0x4
	  b         .loc_0x124

	.loc_0x118:
	  li        r3, 0x1
	  b         .loc_0x124

	.loc_0x120:
	  li        r3, -0x1

	.loc_0x124:
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
 * Address:	8027385C
 * Size:	0000B0
 */
void Game::Sarai::Obj::flickStickTarget(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  li        r30, 0
	  stw       r29, 0x24(r1)
	  mr        r29, r3
	  lwz       r31, 0x2C4(r3)
	  b         .loc_0x8C

	.loc_0x28:
	  mr        r4, r30
	  addi      r3, r29, 0x2C4
	  bl        -0x13B114
	  lwz       r3, 0x64(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x88
	  lis       r4, 0x804B
	  lfs       f2, -0x310C(r2)
	  subi      r0, r4, 0x5D00
	  lfs       f1, -0x3168(r2)
	  lfs       f0, -0x3108(r2)
	  lis       r4, 0x804B
	  stw       r0, 0x8(r1)
	  addi      r0, r4, 0x4E04
	  addi      r4, r1, 0x8
	  stw       r29, 0xC(r1)
	  stw       r0, 0x8(r1)
	  stfs      f2, 0x10(r1)
	  stfs      f1, 0x14(r1)
	  stfs      f0, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x88:
	  addi      r30, r30, 0x1

	.loc_0x8C:
	  cmpw      r30, r31
	  blt+      .loc_0x28
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
 * Address:	8027390C
 * Size:	000080
 */
void Game::Sarai::Obj::getStickPikminNum(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  mr        r31, r30
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lwz       r29, 0x2C4(r3)
	  b         .loc_0x50

	.loc_0x30:
	  mr        r4, r31
	  addi      r3, r28, 0x2C4
	  bl        -0x13B1CC
	  lwz       r0, 0x64(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x4C
	  addi      r30, r30, 0x1

	.loc_0x4C:
	  addi      r31, r31, 0x1

	.loc_0x50:
	  cmpw      r31, r29
	  blt+      .loc_0x30
	  lwz       r0, 0x1F4(r28)
	  lwz       r31, 0x1C(r1)
	  sub       r3, r0, r30
	  lwz       r0, 0x24(r1)
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
 * Address:	8027398C
 * Size:	0003D0
 */
void Game::Sarai::Obj::getAttackableTarget(void)
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
	  stw       r31, 0x5C(r1)
	  stw       r30, 0x58(r1)
	  mr        r31, r3
	  lfs       f1, 0x194(r3)
	  lfs       f0, 0x1A0(r3)
	  lwz       r4, 0xC0(r3)
	  fsubs     f3, f1, f0
	  lfs       f2, 0x18C(r3)
	  lfs       f1, 0x198(r3)
	  lfs       f0, 0x35C(r4)
	  fsubs     f2, f2, f1
	  fmuls     f1, f3, f3
	  fmuls     f0, f0, f0
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x39C
	  lfs       f2, -0x3104(r2)
	  lis       r3, 0x804B
	  lfs       f1, 0x424(r4)
	  li        r0, 0
	  lfs       f0, 0x3D4(r4)
	  subi      r4, r3, 0x4364
	  fmuls     f1, f2, f1
	  lfs       f2, -0x3124(r2)
	  lwz       r3, -0x6D0C(r13)
	  cmplwi    r0, 0
	  fmuls     f30, f0, f0
	  stw       r4, 0x44(r1)
	  fmuls     f31, f2, f1
	  stw       r0, 0x50(r1)
	  stw       r0, 0x48(r1)
	  stw       r3, 0x4C(r1)
	  bne-      .loc_0xC0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x48(r1)
	  b         .loc_0x37C

	.loc_0xC0:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x48(r1)
	  b         .loc_0x12C

	.loc_0xD8:
	  lwz       r3, 0x4C(r1)
	  lwz       r4, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x50(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x37C
	  lwz       r3, 0x4C(r1)
	  lwz       r4, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x48(r1)

	.loc_0x12C:
	  lwz       r12, 0x44(r1)
	  addi      r3, r1, 0x44
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xD8
	  b         .loc_0x37C

	.loc_0x14C:
	  lwz       r3, 0x4C(r1)
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
	  beq-      .loc_0x2C0
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2C0
	  mr        r3, r30
	  bl        -0xD45A0
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2C0
	  lwz       r0, 0xF4(r30)
	  cmplw     r0, r31
	  beq-      .loc_0x2C0
	  lwz       r0, 0xC8(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x2C0
	  mr        r4, r30
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f2, 0x20(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x2C
	  lfs       f1, 0x24(r1)
	  lfs       f0, 0x28(r1)
	  lwz       r12, 0x8(r12)
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x2C(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0x34(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0x8(r1)
	  lfs       f0, 0x10(r1)
	  lfs       f4, 0x30(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0x14(r1)
	  stfs      f4, 0x18(r1)
	  stfs      f3, 0x1C(r1)
	  bl        -0x23EABC
	  bl        0x19E008
	  lwz       r12, 0x0(r31)
	  fmr       f29, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f29
	  bl        0x19E010
	  fabs      f0, f1
	  frsp      f0, f0
	  fcmpo     cr0, f0, f31
	  cror      2, 0, 0x2
	  bne-      .loc_0x2C0
	  mr        r4, r30
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x194(r31)
	  lfs       f0, 0x40(r1)
	  lfs       f2, 0x18C(r31)
	  fsubs     f1, f1, f0
	  lfs       f0, 0x38(r1)
	  fsubs     f2, f2, f0
	  fmuls     f0, f1, f1
	  fmadds    f0, f2, f2, f0
	  fcmpo     cr0, f0, f30
	  bge-      .loc_0x2C0
	  mr        r3, r30
	  b         .loc_0x3A0

	.loc_0x2C0:
	  lwz       r0, 0x50(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x2EC
	  lwz       r3, 0x4C(r1)
	  lwz       r4, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x48(r1)
	  b         .loc_0x37C

	.loc_0x2EC:
	  lwz       r3, 0x4C(r1)
	  lwz       r4, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x48(r1)
	  b         .loc_0x360

	.loc_0x30C:
	  lwz       r3, 0x4C(r1)
	  lwz       r4, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x50(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x37C
	  lwz       r3, 0x4C(r1)
	  lwz       r4, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x48(r1)

	.loc_0x360:
	  lwz       r12, 0x44(r1)
	  addi      r3, r1, 0x44
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x30C

	.loc_0x37C:
	  lwz       r3, 0x4C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x48(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x14C

	.loc_0x39C:
	  li        r3, 0

	.loc_0x3A0:
	  psq_l     f31,0x88(r1),0,0
	  lfd       f31, 0x80(r1)
	  psq_l     f30,0x78(r1),0,0
	  lfd       f30, 0x70(r1)
	  psq_l     f29,0x68(r1),0,0
	  lfd       f29, 0x60(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r0, 0x94(r1)
	  lwz       r30, 0x58(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80273D5C
 * Size:	000024
 */
void Game::Sarai::Obj::catchTarget(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  bl        -0x160238
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80273D80
 * Size:	000044
 */
void Game::Sarai::Obj::createDownEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2EC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  addi      r4, r31, 0x18C
	  bl        -0x17025C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80273DC4
 * Size:	000008
 */
void Game::Sarai::Obj::getDownSmokeScale(void)
{
	/*
	.loc_0x0:
	  lfs       f1, -0x3100(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80273DCC
 * Size:	000004
 */
void Game::Sarai::Obj::inWaterCallback((Game::WaterBox*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80273DD0
 * Size:	000004
 */
void Game::Sarai::Obj::outWaterCallback(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80273DD4
 * Size:	000008
 */
void Game::Sarai::Obj::getMouthSlots(void)
{
	/*
	.loc_0x0:
	  addi      r3, r3, 0x2C4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80273DDC
 * Size:	000008
 */
void Game::Sarai::Obj::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x17
	  blr
	*/
}

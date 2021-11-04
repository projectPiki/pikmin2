

/*
 * --INFO--
 * Address:	802785D0
 * Size:	000130
 */
void Game::Tadpole::Obj::Obj()
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
	  bl        -0x177278
	  lis       r3, 0x804C
	  addi      r0, r31, 0x2D8
	  addi      r5, r3, 0x750C
	  li        r3, 0x2C
	  stw       r5, 0x0(r31)
	  addi      r4, r5, 0x1B0
	  addi      r5, r5, 0x2FC
	  stw       r4, 0x178(r31)
	  lwz       r4, 0x17C(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0x17C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0xC(r4)
	  bl        -0x2547AC
	  mr.       r30, r3
	  beq-      .loc_0xCC
	  bl        -0x150CE8
	  lis       r3, 0x804C
	  lis       r4, 0x804B
	  addi      r0, r3, 0x73E0
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

	.loc_0xCC:
	  stw       r30, 0x184(r31)
	  li        r3, 0x1C
	  bl        -0x254800
	  mr.       r4, r3
	  beq-      .loc_0x100
	  lis       r5, 0x804B
	  lis       r3, 0x804C
	  subi      r0, r5, 0x680
	  li        r5, -0x1
	  stw       r0, 0x0(r4)
	  addi      r0, r3, 0x73BC
	  stw       r5, 0x18(r4)
	  stw       r0, 0x0(r4)

	.loc_0x100:
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
 * Address:	80278700
 * Size:	000004
 */
void Game::Tadpole::Obj::setInitialSetting(Game::EnemyInitialParamBase*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80278704
 * Size:	000064
 */
void Game::Tadpole::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x176CC0
	  lfs       f0, -0x2F50(r2)
	  li        r3, -0x1
	  li        r0, 0x1
	  mr        r4, r31
	  stfs      f0, 0x2C4(r31)
	  li        r5, 0x1
	  li        r6, 0
	  stw       r3, 0x2C8(r31)
	  stb       r0, 0x2C0(r31)
	  lwz       r3, 0x2BC(r31)
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
 * Address:	80278768
 * Size:	000034
 */
void Game::Tadpole::Obj::doUpdate()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2BC(r3)
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
 * Address:	8027879C
 * Size:	000004
 */
void Game::Tadpole::Obj::doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802787A0
 * Size:	000020
 */
void Game::Tadpole::Obj::doDebugDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x172940
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802787C0
 * Size:	00004C
 */
void Game::Tadpole::Obj::setFSM(Game::Tadpole::FSM*)
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
 * Address:	8027880C
 * Size:	0000B0
 */
void Game::Tadpole::Obj::getShadowParam(Game::ShadowParam&)
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
	  lfs       f0, 0x8(r1)
	  lfs       f2, -0x2F4C(r2)
	  stfs      f0, 0x0(r31)
	  lfs       f1, -0x2F50(r2)
	  lfs       f3, 0xC(r1)
	  lfs       f0, -0x2F48(r2)
	  stfs      f3, 0x4(r31)
	  lfs       f3, 0x10(r1)
	  stfs      f3, 0x8(r31)
	  lfs       f3, 0x4(r31)
	  fadds     f2, f3, f2
	  stfs      f2, 0x4(r31)
	  stfs      f1, 0xC(r31)
	  stfs      f0, 0x10(r31)
	  stfs      f1, 0x14(r31)
	  lwz       r0, 0x1E4(r30)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x88
	  lfs       f0, -0x2F44(r2)
	  stfs      f0, 0x18(r31)
	  b         .loc_0x90

	.loc_0x88:
	  lfs       f0, -0x2F40(r2)
	  stfs      f0, 0x18(r31)

	.loc_0x90:
	  lfs       f0, -0x2F40(r2)
	  stfs      f0, 0x1C(r31)
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
 * Address:	802788BC
 * Size:	000068
 */
void Game::Tadpole::Obj::hipdropCallBack(Game::Creature*, float, CollPart*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x50
	  lwz       r0, 0x1E0(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne-      .loc_0x50
	  lfs       f1, 0x200(r31)
	  mr        r3, r31
	  lfs       f2, -0x2F48(r2)
	  bl        -0x1728D4
	  li        r3, 0x1
	  b         .loc_0x54

	.loc_0x50:
	  li        r3, 0

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80278924
 * Size:	000028
 */
void Game::Tadpole::Obj::startCarcassMotion()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x5
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  bl        -0x173934
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8027894C
 * Size:	0001E4
 */
void Game::Tadpole::Obj::setRandTarget(bool)
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
	  stfd      f27, 0x50(r1)
	  psq_st    f27,0x58(r1),0,0
	  stw       r31, 0x4C(r1)
	  rlwinm.   r0,r4,0,24,31
	  lfs       f27, -0x2F50(r2)
	  mr        r31, r3
	  bne-      .loc_0x58
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x35C(r3)
	  lfs       f0, 0x384(r3)
	  fsubs     f27, f1, f0

	.loc_0x58:
	  bl        -0x1AF404
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x1C(r1)
	  mr        r4, r31
	  lwz       r5, 0xC0(r31)
	  addi      r3, r1, 0x8
	  stw       r0, 0x18(r1)
	  lfd       f1, -0x2F28(r2)
	  lfd       f0, 0x18(r1)
	  lwz       r12, 0x0(r31)
	  fsubs     f2, f0, f1
	  lfs       f1, -0x2F3C(r2)
	  lfs       f0, 0x384(r5)
	  lwz       r12, 0x8(r12)
	  fmuls     f2, f27, f2
	  fdivs     f1, f2, f1
	  fadds     f28, f0, f1
	  mtctr     r12
	  bctrl
	  lfs       f31, 0x198(r31)
	  lis       r3, 0x8051
	  lfs       f1, 0x8(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f29, 0x1A0(r31)
	  lfs       f0, 0x10(r1)
	  fsubs     f1, f1, f31
	  lfs       f30, 0x19C(r31)
	  fsubs     f2, f0, f29
	  bl        -0x243910
	  fmr       f27, f1
	  bl        -0x1AF480
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x24(r1)
	  lfd       f2, -0x2F28(r2)
	  stw       r0, 0x20(r1)
	  lfs       f3, -0x2F38(r2)
	  lfd       f0, 0x20(r1)
	  lfs       f1, -0x2F3C(r2)
	  fsubs     f4, f0, f2
	  lfs       f2, -0x2F34(r2)
	  lfs       f0, -0x2F50(r2)
	  fmuls     f3, f3, f4
	  fdivs     f1, f3, f1
	  fadds     f1, f27, f1
	  fadds     f3, f2, f1
	  fmr       f1, f3
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x124
	  fneg      f1, f3

	.loc_0x124:
	  lfs       f2, -0x2F30(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x2F50(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f1, f1, f2
	  fcmpo     cr0, f3, f0
	  fctiwz    f0, f1
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f0, 0x4(r3)
	  fmadds    f1, f28, f0, f29
	  bge-      .loc_0x180
	  lfs       f0, -0x2F2C(r2)
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x30(r1)
	  lwz       r0, 0x34(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f0, f0
	  b         .loc_0x198

	.loc_0x180:
	  fmuls     f0, f3, f2
	  fctiwz    f0, f0
	  stfd      f0, 0x38(r1)
	  lwz       r0, 0x3C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0

	.loc_0x198:
	  fmadds    f0, f28, f0, f31
	  stfs      f0, 0x2CC(r31)
	  stfs      f30, 0x2D0(r31)
	  stfs      f1, 0x2D4(r31)
	  psq_l     f31,0x98(r1),0,0
	  lfd       f31, 0x90(r1)
	  psq_l     f30,0x88(r1),0,0
	  lfd       f30, 0x80(r1)
	  psq_l     f29,0x78(r1),0,0
	  lfd       f29, 0x70(r1)
	  psq_l     f28,0x68(r1),0,0
	  lfd       f28, 0x60(r1)
	  psq_l     f27,0x58(r1),0,0
	  lfd       f27, 0x50(r1)
	  lwz       r0, 0xA4(r1)
	  lwz       r31, 0x4C(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80278B30
 * Size:	0001C8
 */
void Game::Tadpole::Obj::getTargetPosition(Game::Creature*)
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
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  lwz       r12, 0x0(r4)
	  mr        r29, r3
	  mr        r30, r4
	  mr        r31, r5
	  lwz       r12, 0x8(r12)
	  addi      r3, r1, 0x14
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lfs       f30, 0x14(r1)
	  lwz       r12, 0x8(r12)
	  lfs       f31, 0x18(r1)
	  lfs       f29, 0x1C(r1)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x10(r1)
	  lfs       f2, 0x8(r1)
	  fsubs     f1, f29, f0
	  lfs       f0, -0x2F50(r2)
	  fsubs     f8, f30, f2
	  lfs       f5, 0x198(r30)
	  lfs       f6, 0x19C(r30)
	  fmuls     f3, f1, f1
	  fmadds    f2, f8, f8, f0
	  lfs       f7, 0x1A0(r30)
	  fadds     f3, f3, f2
	  fcmpo     cr0, f3, f0
	  ble-      .loc_0xB8
	  ble-      .loc_0xBC
	  fsqrte    f2, f3
	  fmuls     f3, f2, f3
	  b         .loc_0xBC

	.loc_0xB8:
	  fmr       f3, f0

	.loc_0xBC:
	  lfs       f2, -0x2F50(r2)
	  fcmpo     cr0, f3, f2
	  ble-      .loc_0xDC
	  lfs       f2, -0x2F48(r2)
	  fdivs     f2, f2, f3
	  fmuls     f8, f8, f2
	  fmuls     f0, f0, f2
	  fmuls     f1, f1, f2

	.loc_0xDC:
	  lwz       r3, 0xC0(r30)
	  lfs       f2, 0x2E4(r3)
	  lfs       f9, 0x35C(r3)
	  fmuls     f1, f1, f2
	  fmuls     f8, f8, f2
	  fmuls     f0, f0, f2
	  fadds     f1, f1, f29
	  fadds     f8, f8, f30
	  fmuls     f2, f9, f9
	  fsubs     f3, f1, f7
	  fsubs     f4, f8, f5
	  fadds     f0, f0, f31
	  fmuls     f3, f3, f3
	  fmadds    f3, f4, f4, f3
	  fcmpo     cr0, f3, f2
	  ble-      .loc_0x188
	  fsubs     f1, f1, f7
	  lfs       f0, -0x2F50(r2)
	  fsubs     f8, f8, f5
	  fmuls     f3, f1, f1
	  fmadds    f2, f8, f8, f0
	  fadds     f3, f3, f2
	  fcmpo     cr0, f3, f0
	  ble-      .loc_0x14C
	  ble-      .loc_0x150
	  fsqrte    f2, f3
	  fmuls     f3, f2, f3
	  b         .loc_0x150

	.loc_0x14C:
	  fmr       f3, f0

	.loc_0x150:
	  lfs       f2, -0x2F50(r2)
	  fcmpo     cr0, f3, f2
	  ble-      .loc_0x170
	  lfs       f2, -0x2F48(r2)
	  fdivs     f2, f2, f3
	  fmuls     f8, f8, f2
	  fmuls     f0, f0, f2
	  fmuls     f1, f1, f2

	.loc_0x170:
	  fmuls     f8, f8, f9
	  fmuls     f0, f0, f9
	  fmuls     f1, f1, f9
	  fadds     f8, f8, f5
	  fadds     f0, f0, f6
	  fadds     f1, f1, f7

	.loc_0x188:
	  stfs      f8, 0x0(r29)
	  stfs      f0, 0x4(r29)
	  stfs      f1, 0x8(r29)
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  psq_l     f30,0x48(r1),0,0
	  lfd       f30, 0x40(r1)
	  psq_l     f29,0x38(r1),0,0
	  lfd       f29, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r0, 0x64(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80278CF8
 * Size:	000188
 */
void Game::Tadpole::Obj::createLeapEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stw       r31, 0x6C(r1)
	  mr        r31, r3
	  lwz       r3, 0x280(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x110
	  lwz       r12, 0x0(r3)
	  lfs       f2, 0x18C(r31)
	  lfs       f1, 0x190(r31)
	  lfs       f0, 0x194(r31)
	  lwz       r12, 0x14(r12)
	  stfs      f2, 0x40(r1)
	  stfs      f1, 0x44(r1)
	  stfs      f0, 0x48(r1)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x0(r3)
	  lfs       f1, 0x190(r31)
	  lfs       f0, -0x2F20(r2)
	  fsubs     f1, f2, f1
	  stfs      f2, 0x44(r1)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x174
	  lwz       r4, 0x40(r1)
	  lis       r3, 0x804B
	  lwz       r7, 0x44(r1)
	  subi      r0, r3, 0x5808
	  lwz       r6, 0x48(r1)
	  lis       r3, 0x804B
	  stw       r4, 0x8(r1)
	  lis       r4, 0x804E
	  subi      r10, r3, 0x5814
	  lfs       f0, -0x2F1C(r2)
	  li        r5, 0
	  stw       r7, 0xC(r1)
	  lfs       f3, 0x8(r1)
	  lis       r9, 0x804B
	  stw       r6, 0x10(r1)
	  lis       r3, 0x804F
	  lfs       f2, 0xC(r1)
	  li        r7, 0x159
	  lfs       f1, 0x10(r1)
	  li        r6, 0x15A
	  stw       r0, 0x30(r1)
	  addi      r8, r4, 0x6A64
	  subi      r9, r9, 0x5D24
	  subi      r0, r3, 0x7A18
	  stw       r10, 0x4C(r1)
	  addi      r3, r1, 0x30
	  addi      r4, r1, 0x4C
	  stw       r8, 0x30(r1)
	  stfs      f3, 0x50(r1)
	  stfs      f2, 0x54(r1)
	  stfs      f1, 0x58(r1)
	  stw       r9, 0x4C(r1)
	  stfs      f0, 0x5C(r1)
	  sth       r7, 0x34(r1)
	  sth       r6, 0x36(r1)
	  stw       r5, 0x38(r1)
	  stw       r5, 0x3C(r1)
	  stw       r0, 0x30(r1)
	  bl        0x14FAE4
	  lfs       f1, -0x2F18(r2)
	  mr        r3, r31
	  bl        0x1F5A40
	  b         .loc_0x174

	.loc_0x110:
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  subi      r0, r3, 0x5814
	  lis       r4, 0x804E
	  stw       r0, 0x20(r1)
	  lis       r3, 0x804C
	  subi      r8, r5, 0x5808
	  addi      r7, r4, 0x6A78
	  lfs       f0, 0x18C(r31)
	  addi      r0, r3, 0x74F8
	  li        r6, 0x15A
	  li        r5, 0
	  stfs      f0, 0x24(r1)
	  addi      r3, r1, 0x14
	  addi      r4, r1, 0x20
	  lfs       f0, 0x190(r31)
	  stfs      f0, 0x28(r1)
	  lfs       f0, 0x194(r31)
	  stw       r8, 0x14(r1)
	  stw       r7, 0x14(r1)
	  stfs      f0, 0x2C(r1)
	  sth       r6, 0x18(r1)
	  stw       r5, 0x1C(r1)
	  stw       r0, 0x14(r1)
	  bl        0x13611C

	.loc_0x174:
	  lwz       r0, 0x74(r1)
	  lwz       r31, 0x6C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80278E80
 * Size:	000004
 */
void Game::Tadpole::Obj::inWaterCallback(Game::WaterBox*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80278E84
 * Size:	000004
 */
void Game::Tadpole::Obj::outWaterCallback()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80278E88
 * Size:	000008
 */
void Game::Tadpole::Obj::getEnemyTypeID()
{
	/*
	.loc_0x0:
	  li        r3, 0x1B
	  blr
	*/
}

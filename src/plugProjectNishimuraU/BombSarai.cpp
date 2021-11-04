

/*
 * --INFO--
 * Address:	802B27CC
 * Size:	000138
 */
void Game::BombSarai::Obj::Obj()
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
	  addi      r0, r31, 0x2E4
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x2E4(r31)
	  stw       r0, 0x2E8(r31)
	  stw       r0, 0x2EC(r31)

	.loc_0x40:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1B1474
	  lis       r3, 0x804D
	  addi      r0, r31, 0x2E4
	  subi      r5, r3, 0x1608
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
	  bl        -0x28E9A8
	  mr.       r30, r3
	  beq-      .loc_0xCC
	  bl        -0x18AEE4
	  lis       r3, 0x804D
	  lis       r4, 0x804B
	  subi      r0, r3, 0x1780
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
	  bl        -0x28E9FC
	  mr.       r4, r3
	  beq-      .loc_0x100
	  lis       r5, 0x804B
	  lis       r3, 0x804D
	  subi      r0, r5, 0x680
	  li        r5, -0x1
	  stw       r0, 0x0(r4)
	  subi      r0, r3, 0x17A4
	  stw       r5, 0x18(r4)
	  stw       r0, 0x0(r4)

	.loc_0x100:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x2F8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0xB40
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
 * Address:	802B2904
 * Size:	000004
 */
void Game::BombSarai::Obj::setInitialSetting(Game::EnemyInitialParamBase*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B2908
 * Size:	000098
 */
void Game::BombSarai::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1B0EC4
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x3C
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x4
	  bne-      .loc_0x3C
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x1
	  stw       r0, 0x1E0(r31)

	.loc_0x3C:
	  li        r0, -0x1
	  lfs       f0, -0x2168(r2)
	  stw       r0, 0x2DC(r31)
	  li        r0, 0
	  mr        r3, r31
	  stfs      f0, 0x2C4(r31)
	  stfs      f0, 0x2C8(r31)
	  stfs      f0, 0x2C0(r31)
	  stw       r0, 0x2D8(r31)
	  bl        0xB6C
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  li        r5, 0x2
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
 * Address:	802B29A0
 * Size:	000050
 */
void Game::BombSarai::Obj::onKill(Game::CreatureKillArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x8051
	  stw       r0, 0x14(r1)
	  addi      r0, r5, 0x41E4
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r4, r0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bl        0x830
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0x1B0AEC
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
 * Address:	802B29F0
 * Size:	0000A4
 */
void Game::BombSarai::Obj::doUpdate()
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
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x90
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xCC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x90
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x50E5
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x90:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B2A94
 * Size:	000004
 */
void Game::BombSarai::Obj::doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B2A98
 * Size:	000020
 */
void Game::BombSarai::Obj::doDebugDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x1ACC38
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B2AB8
 * Size:	00004C
 */
void Game::BombSarai::Obj::setFSM(Game::BombSarai::FSM*)
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
 * Address:	802B2B04
 * Size:	0000D4
 */
void Game::BombSarai::Obj::getShadowParam(Game::ShadowParam&)
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
	  subi      r0, r3, 0x5DA0
	  lwz       r3, 0x174(r30)
	  mr        r4, r0
	  bl        0x18C4B4
	  bl        0x176D6C
	  lfs       f2, 0x2C(r3)
	  lfs       f1, 0x1C(r3)
	  lfs       f0, 0xC(r3)
	  mr        r3, r30
	  stfs      f0, 0x0(r31)
	  stfs      f1, 0x4(r31)
	  stfs      f2, 0x8(r31)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xCC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x7C
	  lfs       f1, 0x4(r31)
	  lfs       f0, -0x2164(r2)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x4(r31)
	  b         .loc_0x8C

	.loc_0x7C:
	  lfs       f1, -0x2160(r2)
	  lfs       f0, 0x190(r30)
	  fadds     f0, f1, f0
	  stfs      f0, 0x4(r31)

	.loc_0x8C:
	  lfs       f1, -0x2168(r2)
	  lfs       f0, -0x215C(r2)
	  stfs      f1, 0xC(r31)
	  lfs       f2, -0x2158(r2)
	  stfs      f0, 0x10(r31)
	  lfs       f0, -0x2154(r2)
	  stfs      f1, 0x14(r31)
	  lwz       r3, 0xC0(r30)
	  lfs       f1, 0x81C(r3)
	  fadds     f1, f2, f1
	  stfs      f1, 0x18(r31)
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
 * Address:	802B2BD8
 * Size:	00003C
 */
void Game::BombSarai::Obj::bombCallBack(Game::Creature*, Vector3<float>&, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0xC8(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x28
	  lfs       f2, -0x215C(r2)
	  bl        -0x1ACBC8
	  li        r3, 0x1
	  b         .loc_0x2C

	.loc_0x28:
	  li        r3, 0

	.loc_0x2C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B2C14
 * Size:	00008C
 */
void Game::BombSarai::Obj::doFinishStoneState()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1AFD20
	  lwz       r3, 0xC0(r31)
	  lfs       f1, -0x2150(r2)
	  lfs       f0, 0x104(r3)
	  lfs       f2, 0x200(r31)
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x58
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  li        r5, 0x9
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x78

	.loc_0x58:
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  li        r5, 0xA
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x78:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B2CA0
 * Size:	000034
 */
void Game::BombSarai::Obj::doStartWaitingBirthTypeDrop()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1AB31C
	  mr        r3, r31
	  bl        0xA00
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B2CD4
 * Size:	000034
 */
void Game::BombSarai::Obj::doFinishWaitingBirthTypeDrop()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1AB320
	  mr        r3, r31
	  bl        0x99C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B2D08
 * Size:	000028
 */
void Game::BombSarai::Obj::startCarcassMotion()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0xB
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  bl        -0x1ADD18
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B2D30
 * Size:	000020
 */
void Game::BombSarai::Obj::doStartMovie()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x980
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B2D50
 * Size:	000020
 */
void Game::BombSarai::Obj::doEndMovie()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x930
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B2D70
 * Size:	0001A0
 */
void Game::BombSarai::Obj::setHeightVelocity(bool)
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
	  stfd      f29, 0x20(r1)
	  psq_st    f29,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r31, r3
	  lwz       r3, -0x6CF8(r13)
	  mr        r30, r4
	  lwz       r12, 0x4(r3)
	  addi      r4, r31, 0x18C
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r30,0,24,31
	  fmr       f31, f1
	  lfs       f30, -0x214C(r2)
	  bne-      .loc_0xC0
	  lwz       r3, 0x1F4(r31)
	  cmpwi     r3, 0
	  bge-      .loc_0x70
	  li        r0, 0
	  b         .loc_0x80

	.loc_0x70:
	  cmpwi     r3, 0x5
	  li        r0, 0x5
	  bgt-      .loc_0x80
	  mr        r0, r3

	.loc_0x80:
	  xoris     r3, r0, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lwz       r3, 0xC0(r31)
	  stw       r0, 0x8(r1)
	  lfd       f1, -0x2140(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f4, -0x2160(r2)
	  fsubs     f1, f0, f1
	  lfs       f0, 0x8E4(r3)
	  lfs       f2, 0x8BC(r3)
	  fsubs     f3, f4, f1
	  fdivs     f1, f1, f4
	  fdivs     f3, f3, f4
	  fmuls     f0, f1, f0
	  fmadds    f30, f3, f2, f0

	.loc_0xC0:
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x190(r31)
	  lfs       f29, 0x81C(r3)
	  lfs       f0, 0x894(r3)
	  fsubs     f1, f1, f31
	  fsubs     f0, f29, f0
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x154
	  mr        r3, r31
	  bl        0x2A4
	  lfs       f2, 0x2C0(r31)
	  lfs       f0, -0x2168(r2)
	  lwz       r3, 0xC0(r31)
	  fcmpo     cr0, f2, f0
	  lfs       f1, 0x894(r3)
	  bge-      .loc_0x12C
	  lfs       f0, -0x2148(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f0, f0
	  b         .loc_0x150

	.loc_0x12C:
	  lfs       f0, -0x2144(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0

	.loc_0x150:
	  fmadds    f29, f1, f0, f29

	.loc_0x154:
	  fadds     f1, f31, f29
	  lfs       f0, 0x190(r31)
	  fsubs     f0, f1, f0
	  fmuls     f0, f30, f0
	  stfs      f0, 0x1CC(r31)
	  lfs       f0, 0x190(r31)
	  fsubs     f1, f0, f31
	  psq_l     f31,0x48(r1),0,0
	  lfd       f31, 0x40(r1)
	  psq_l     f30,0x38(r1),0,0
	  lfd       f30, 0x30(r1)
	  psq_l     f29,0x28(r1),0,0
	  lfd       f29, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r0, 0x54(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B2F10
 * Size:	0001E8
 */
void Game::BombSarai::Obj::setRandTarget()
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
	  lwz       r4, -0x6C18(r13)
	  mr        r31, r3
	  cmplwi    r4, 0
	  beq-      .loc_0x74
	  lbz       r0, 0x48(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x74
	  bl        -0x1E99AC
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, -0x2140(r2)
	  stw       r0, 0x8(r1)
	  lfs       f2, -0x2158(r2)
	  lfd       f1, 0x8(r1)
	  lfs       f0, -0x2138(r2)
	  fsubs     f1, f1, f3
	  fmuls     f1, f2, f1
	  fdivs     f0, f1, f0
	  fadds     f31, f2, f0
	  b         .loc_0xBC

	.loc_0x74:
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x35C(r3)
	  lfs       f0, 0x384(r3)
	  fsubs     f30, f1, f0
	  bl        -0x1E99F4
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lwz       r3, 0xC0(r31)
	  stw       r0, 0x8(r1)
	  lfd       f2, -0x2140(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f1, -0x2138(r2)
	  fsubs     f2, f0, f2
	  lfs       f0, 0x384(r3)
	  fmuls     f2, f30, f2
	  fdivs     f1, f2, f1
	  fadds     f31, f0, f1

	.loc_0xBC:
	  lfs       f3, 0x18C(r31)
	  lis       r3, 0x8051
	  lfs       f1, 0x198(r31)
	  subi      r3, r3, 0x2E20
	  lfs       f2, 0x194(r31)
	  lfs       f0, 0x1A0(r31)
	  fsubs     f1, f3, f1
	  fsubs     f2, f2, f0
	  bl        -0x27DEE4
	  fmr       f30, f1
	  bl        -0x1E9A54
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f2, -0x2140(r2)
	  stw       r0, 0x8(r1)
	  lfs       f3, -0x2134(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f1, -0x2138(r2)
	  fsubs     f4, f0, f2
	  lfs       f2, -0x2130(r2)
	  lfs       f0, -0x2168(r2)
	  fmuls     f3, f3, f4
	  fdivs     f1, f3, f1
	  fadds     f1, f30, f1
	  fadds     f5, f2, f1
	  fmr       f1, f5
	  fcmpo     cr0, f5, f0
	  bge-      .loc_0x134
	  fneg      f1, f5

	.loc_0x134:
	  lfs       f3, -0x2144(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x2168(r2)
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
	  bge-      .loc_0x198
	  lfs       f0, -0x2148(r2)
	  fmuls     f0, f5, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f1, f0
	  b         .loc_0x1B0

	.loc_0x198:
	  fmuls     f0, f5, f3
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r4, r0

	.loc_0x1B0:
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
 * Address:	802B30F8
 * Size:	000038
 */
void Game::BombSarai::Obj::addPitchRatio()
{
	/*
	.loc_0x0:
	  lwz       r5, 0xC0(r3)
	  lwz       r4, -0x6514(r13)
	  lfs       f3, 0x86C(r5)
	  lfs       f2, 0x54(r4)
	  lfs       f1, 0x2C0(r3)
	  lfs       f0, -0x212C(r2)
	  fmadds    f1, f3, f2, f1
	  stfs      f1, 0x2C0(r3)
	  lfs       f1, 0x2C0(r3)
	  fcmpo     cr0, f1, f0
	  blelr-
	  fsubs     f0, f1, f0
	  stfs      f0, 0x2C0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B3130
 * Size:	0000C8
 */
void Game::BombSarai::Obj::supplyBomb()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  stw       r30, 0x48(r1)
	  mr        r30, r3
	  lwz       r0, 0x2D8(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0xB0
	  lwz       r3, -0x6E20(r13)
	  li        r4, 0x24
	  bl        -0x1A54B8
	  mr.       r31, r3
	  beq-      .loc_0xB0
	  addi      r3, r1, 0x8
	  bl        -0x184548
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x14(r1)
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0xB0
	  stw       r3, 0x2D8(r30)
	  li        r4, 0
	  lwz       r3, 0x2D8(r30)
	  bl        -0x1781EC
	  lis       r4, 0x8049
	  lwz       r3, 0x174(r30)
	  subi      r4, r4, 0x5D94
	  bl        0x18BE20
	  bl        0x1766D8
	  mr        r4, r3
	  lwz       r3, 0x2D8(r30)
	  bl        -0x11372C
	  lwz       r3, 0x2D8(r30)
	  stw       r30, 0x2CC(r3)

	.loc_0xB0:
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
 * Address:	802B31F8
 * Size:	000078
 */
void Game::BombSarai::Obj::throwBomb(Vector3<float>&)
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
	  lwz       r3, 0x2D8(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x58
	  bl        -0x113684
	  lwz       r3, 0x2D8(r30)
	  mr        r4, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2D8(r30)
	  lfs       f0, 0x1FC(r30)
	  stfs      f0, 0x1FC(r3)
	  lfs       f0, 0x1FC(r3)
	  stfs      f0, 0x1A8(r3)

	.loc_0x58:
	  li        r0, 0
	  stw       r0, 0x2D8(r30)
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
 * Address:	802B3270
 * Size:	000070
 */
void Game::BombSarai::Obj::getAttackablePikmin()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lfs       f1, 0x194(r3)
	  lfs       f0, 0x1A0(r3)
	  lfs       f2, 0x18C(r3)
	  fsubs     f3, f1, f0
	  lfs       f1, 0x198(r3)
	  lwz       r5, 0xC0(r3)
	  fsubs     f2, f2, f1
	  fmuls     f1, f3, f3
	  lfs       f0, 0x35C(r5)
	  fmuls     f0, f0, f0
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x5C
	  lfs       f1, 0x424(r5)
	  li        r4, 0
	  lfs       f2, 0x3D4(r5)
	  li        r5, 0
	  li        r6, 0
	  bl        -0x1A0274
	  b         .loc_0x60

	.loc_0x5C:
	  li        r3, 0

	.loc_0x60:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B32E0
 * Size:	000144
 */
void Game::BombSarai::Obj::getNextStateOnHeight()
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
	  lfs       f0, -0x2168(r2)
	  lfs       f1, 0x200(r3)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x3C
	  li        r3, 0x8
	  b         .loc_0x124

	.loc_0x3C:
	  lwz       r31, 0x1F4(r30)
	  cmpwi     r31, 0
	  beq-      .loc_0x120
	  li        r4, 0x3
	  bl        -0x19E178
	  cmpwi     r3, 0
	  ble-      .loc_0x60
	  li        r3, 0x8
	  b         .loc_0x124

	.loc_0x60:
	  subic.    r0, r31, 0x1
	  bge-      .loc_0x70
	  li        r3, 0
	  b         .loc_0x84

	.loc_0x70:
	  subi      r0, r31, 0x1
	  li        r3, 0x4
	  cmpwi     r0, 0x4
	  bgt-      .loc_0x84
	  mr        r3, r0

	.loc_0x84:
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lwz       r3, 0xC0(r30)
	  stw       r0, 0x8(r1)
	  lfd       f2, -0x2140(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f1, -0x2128(r2)
	  fsubs     f5, f0, f2
	  lfs       f3, -0x2124(r2)
	  lfs       f0, 0x934(r3)
	  lfs       f2, 0x90C(r3)
	  fsubs     f4, f1, f5
	  fmuls     f1, f5, f3
	  fmuls     f3, f4, f3
	  fmuls     f0, f1, f0
	  fmadds    f31, f3, f2, f0
	  bl        -0x1E9E08
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x14(r1)
	  lfd       f3, -0x2140(r2)
	  stw       r0, 0x10(r1)
	  lfs       f1, -0x215C(r2)
	  lfd       f2, 0x10(r1)
	  lfs       f0, -0x2138(r2)
	  fsubs     f2, f2, f3
	  fmuls     f1, f1, f2
	  fdivs     f0, f1, f0
	  fcmpo     cr0, f0, f31
	  bge-      .loc_0x118
	  lwz       r3, 0x2D8(r30)
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm    r3,r0,1,31,31
	  addi      r3, r3, 0xB
	  b         .loc_0x124

	.loc_0x118:
	  li        r3, 0x8
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
 * Address:	802B3424
 * Size:	0000B0
 */
void Game::BombSarai::Obj::createEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x14
	  bl        -0x28F598
	  cmplwi    r3, 0
	  beq-      .loc_0x98
	  lis       r4, 0x804B
	  lis       r5, 0x804A
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x0(r3)
	  subi      r0, r5, 0x1D84
	  addi      r5, r4, 0x698C
	  lis       r4, 0x804E
	  stw       r0, 0x4(r3)
	  addi      r7, r4, 0x68A8
	  lis       r4, 0x804D
	  addi      r0, r5, 0x14
	  stw       r5, 0x0(r3)
	  subi      r4, r4, 0x1654
	  li        r9, 0
	  li        r8, 0x2B2
	  stw       r0, 0x4(r3)
	  addi      r6, r7, 0x14
	  li        r5, 0x14
	  addi      r0, r4, 0x14
	  stw       r9, 0x8(r3)
	  sth       r8, 0xC(r3)
	  stb       r9, 0xE(r3)
	  stw       r7, 0x0(r3)
	  stw       r6, 0x4(r3)
	  stw       r9, 0x10(r3)
	  sth       r5, 0xC(r3)
	  stw       r4, 0x0(r3)
	  stw       r0, 0x4(r3)

	.loc_0x98:
	  stw       r3, 0x2E0(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B34D4
 * Size:	000044
 */
void Game::BombSarai::Obj::setupEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lis       r3, 0x8049
	  subi      r4, r3, 0x5D88
	  lwz       r3, 0x174(r31)
	  bl        0x18BAF0
	  bl        0x1763A8
	  lwz       r4, 0x2E0(r31)
	  stw       r3, 0x10(r4)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B3518
 * Size:	000034
 */
void Game::BombSarai::Obj::createSupliEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2E0(r3)
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
 * Address:	802B354C
 * Size:	00011C
 */
void Game::BombSarai::Obj::createBalloonEffect(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  cmpwi     r4, 0
	  lis       r5, 0x8049
	  stw       r0, 0x34(r1)
	  subi      r5, r5, 0x5DB0
	  bne-      .loc_0x30
	  lwz       r3, 0x174(r3)
	  addi      r4, r5, 0x34
	  bl        0x18BA74
	  bl        0x17632C
	  b         .loc_0x94

	.loc_0x30:
	  cmpwi     r4, 0x1
	  bne-      .loc_0x4C
	  lwz       r3, 0x174(r3)
	  addi      r4, r5, 0x40
	  bl        0x18BA58
	  bl        0x176310
	  b         .loc_0x94

	.loc_0x4C:
	  cmpwi     r4, 0x2
	  bne-      .loc_0x68
	  lwz       r3, 0x174(r3)
	  addi      r4, r5, 0x4C
	  bl        0x18BA3C
	  bl        0x1762F4
	  b         .loc_0x94

	.loc_0x68:
	  cmpwi     r4, 0x3
	  bne-      .loc_0x84
	  lwz       r3, 0x174(r3)
	  addi      r4, r5, 0x58
	  bl        0x18BA20
	  bl        0x1762D8
	  b         .loc_0x94

	.loc_0x84:
	  lwz       r3, 0x174(r3)
	  addi      r4, r5, 0x64
	  bl        0x18BA0C
	  bl        0x1762C4

	.loc_0x94:
	  cmplwi    r3, 0
	  beq-      .loc_0x10C
	  lis       r4, 0x804B
	  lfs       f0, 0xC(r3)
	  lfs       f1, 0x1C(r3)
	  subi      r0, r4, 0x5808
	  lfs       f2, 0x2C(r3)
	  lis       r3, 0x804E
	  addi      r5, r3, 0x6A64
	  li        r6, 0
	  stw       r0, 0x18(r1)
	  lis       r4, 0x804D
	  lis       r3, 0x804B
	  li        r8, 0x12
	  subi      r0, r3, 0x5814
	  li        r7, 0x13
	  stw       r5, 0x18(r1)
	  subi      r5, r4, 0x1668
	  addi      r3, r1, 0x18
	  addi      r4, r1, 0x8
	  sth       r8, 0x1C(r1)
	  sth       r7, 0x1E(r1)
	  stw       r6, 0x20(r1)
	  stw       r6, 0x24(r1)
	  stw       r5, 0x18(r1)
	  stw       r0, 0x8(r1)
	  stfs      f0, 0xC(r1)
	  stfs      f1, 0x10(r1)
	  stfs      f2, 0x14(r1)
	  bl        0xFB9C0

	.loc_0x10C:
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B3668
 * Size:	000024
 */
void Game::BombSarai::Obj::createDownEffect(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r4, r3, 0x18C
	  stw       r0, 0x14(r1)
	  bl        -0x1AFB28
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B368C
 * Size:	000030
 */
void Game::BombSarai::Obj::effectDrawOn()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2E0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
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
 * Address:	802B36BC
 * Size:	000030
 */
void Game::BombSarai::Obj::effectDrawOff()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2E0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
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
 * Address:	802B36EC
 * Size:	00009C
 */
void efx::TBsaraiSupli::~TBsaraiSupli()
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
	  subi      r3, r3, 0x1654
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
	  bl        -0x223ABC

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x28F6B4

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
 * Address:	802B3788
 * Size:	000004
 */
void Game::BombSarai::Obj::inWaterCallback(Game::WaterBox*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B378C
 * Size:	000004
 */
void Game::BombSarai::Obj::outWaterCallback()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B3790
 * Size:	000008
 */
void Game::BombSarai::Obj::getDownSmokeScale()
{
	/*
	.loc_0x0:
	  lfs       f1, -0x2120(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B3798
 * Size:	000008
 */
void Game::BombSarai::Obj::getEnemyTypeID()
{
	/*
	.loc_0x0:
	  li        r3, 0x3A
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B37A0
 * Size:	000008
 */
void efx::TBsaraiSupli::@4 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0xB8
	*/
}

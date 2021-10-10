

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void _Print(char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8034A21C
 * Size:	000020
 */
void Game::Bomb::Obj::setParameters(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x247650
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034A23C
 * Size:	0000EC
 */
void Game::Bomb::Obj::onStartCapture(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  li        r5, 0
	  li        r6, 0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  mr        r4, r31
	  lwz       r3, 0x2D0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r5, 0xB8(r31)
	  cmplwi    r5, 0
	  beq-      .loc_0xD8
	  lfs       f2, 0x2C(r5)
	  mr        r3, r31
	  lfs       f1, 0x1C(r5)
	  addi      r4, r1, 0x8
	  lfs       f0, 0xC(r5)
	  stfs      f0, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f2, 0x10(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x30(r2)
	  stfs      f0, 0x1C8(r31)
	  stfs      f0, 0x1CC(r31)
	  stfs      f0, 0x1D0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x400
	  stw       r0, 0x1E0(r31)
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0xC0
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0xC0
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,0,30
	  stw       r0, 0x1E0(r31)
	  b         .loc_0xCC

	.loc_0xC0:
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x1
	  stw       r0, 0x1E0(r31)

	.loc_0xCC:
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r31)

	.loc_0xD8:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034A328
 * Size:	000048
 */
void Game::Bomb::Obj::onEndCapture(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x242BD0
	  lwz       r4, 0x1E0(r31)
	  li        r3, 0x1
	  li        r0, 0
	  rlwinm    r4,r4,0,0,30
	  stw       r4, 0x1E0(r31)
	  stb       r3, 0x2BC(r31)
	  stw       r0, 0xB8(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034A370
 * Size:	000020
 */
void birth__Q34Game4Bomb3ObjFR10Vector3<float> f(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x24797C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034A390
 * Size:	000168
 */
void Game::Bomb::Obj::onInit((Game::CreatureInitArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  bl        -0x24894C
	  lwz       r3, 0x1E0(r31)
	  li        r0, 0
	  mr        r4, r31
	  li        r5, 0
	  rlwinm    r3,r3,0,25,23
	  li        r6, 0
	  stw       r3, 0x1E0(r31)
	  lwz       r3, 0x1E0(r31)
	  rlwinm    r3,r3,0,29,27
	  stw       r3, 0x1E0(r31)
	  lwz       r3, 0x1E0(r31)
	  rlwinm    r3,r3,0,24,22
	  stw       r3, 0x1E0(r31)
	  stb       r0, 0x2BC(r31)
	  stb       r0, 0x2BD(r31)
	  stb       r0, 0x2C8(r31)
	  stw       r0, 0x2C0(r31)
	  stw       r0, 0x2C4(r31)
	  stw       r0, 0x2CC(r31)
	  lwz       r3, 0x2D0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        -0x2429E0
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xDC
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x400
	  stw       r0, 0x1E0(r31)
	  lwz       r3, -0x6CF8(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0xDC
	  lfs       f1, 0x18C(r31)
	  addi      r4, r1, 0x8
	  lfs       f0, -0x2C(r2)
	  stfs      f1, 0x8(r1)
	  lfs       f1, 0x190(r31)
	  stfs      f1, 0xC(r1)
	  fadds     f0, f1, f0
	  lfs       f1, 0x194(r31)
	  stfs      f1, 0x10(r1)
	  stfs      f0, 0xC(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x190(r31)

	.loc_0xDC:
	  lwz       r4, 0x188(r31)
	  li        r0, 0
	  mr        r3, r31
	  stb       r0, 0x24(r4)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1D8(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x138
	  addi      r4, r31, 0x168
	  addi      r5, r31, 0x1A4
	  addi      r6, r31, 0x18C
	  bl        0xDDE3C
	  lwz       r4, 0x174(r31)
	  addi      r3, r31, 0x138
	  lwz       r4, 0x8(r4)
	  addi      r4, r4, 0x24
	  bl        -0x2601E4
	  lwz       r3, 0x174(r31)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x174(r31)
	  subi      r4, r2, 0x28
	  bl        0xF4B10
	  bl        0xDF3C8
	  lwz       r4, 0x2D4(r31)
	  stw       r3, 0x10(r4)
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034A4F8
 * Size:	0001DC
 */
void Game::Bomb::Obj::__ct(void)
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
	  bl        -0x2491A0
	  lis       r3, 0x804E
	  addi      r4, r31, 0x2D8
	  subi      r3, r3, 0x444C
	  li        r0, 0
	  stw       r3, 0x0(r31)
	  addi      r5, r3, 0x1B0
	  addi      r6, r3, 0x2FC
	  li        r3, 0x2C
	  stw       r5, 0x178(r31)
	  lwz       r5, 0x17C(r31)
	  stw       r6, 0x0(r5)
	  lwz       r5, 0x17C(r31)
	  sub       r4, r4, r5
	  stw       r4, 0xC(r5)
	  stb       r0, 0x2BC(r31)
	  stb       r0, 0x2BD(r31)
	  stw       r0, 0x2C0(r31)
	  stw       r0, 0x2C4(r31)
	  stb       r0, 0x2C8(r31)
	  stb       r0, 0x2C9(r31)
	  stw       r0, 0x2D0(r31)
	  stw       r0, 0x2D4(r31)
	  bl        -0x3266F8
	  mr.       r30, r3
	  beq-      .loc_0xF0
	  bl        -0x222C34
	  lis       r3, 0x804E
	  lis       r4, 0x804B
	  subi      r0, r3, 0x45B0
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
	  bl        -0x32674C
	  mr.       r4, r3
	  beq-      .loc_0x124
	  lis       r5, 0x804B
	  lis       r3, 0x804E
	  subi      r0, r5, 0x680
	  li        r5, -0x1
	  stw       r0, 0x0(r4)
	  subi      r0, r3, 0x45D4
	  stw       r5, 0x18(r4)
	  stw       r0, 0x0(r4)

	.loc_0x124:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x2F8(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x14
	  bl        -0x326790
	  cmplwi    r3, 0
	  beq-      .loc_0x1BC
	  lis       r4, 0x804B
	  lis       r5, 0x804A
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x0(r3)
	  subi      r0, r5, 0x1D84
	  addi      r5, r4, 0x698C
	  lis       r4, 0x804E
	  stw       r0, 0x4(r3)
	  addi      r7, r4, 0x685C
	  lis       r4, 0x804E
	  addi      r0, r5, 0x14
	  stw       r5, 0x0(r3)
	  subi      r4, r4, 0x4498
	  li        r9, 0
	  li        r8, 0x2B2
	  stw       r0, 0x4(r3)
	  addi      r6, r7, 0x14
	  li        r5, 0x260
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

	.loc_0x1BC:
	  stw       r3, 0x2D4(r31)
	  mr        r3, r31
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
 * Address:	8034A6D4
 * Size:	00004C
 */
void Game::Bomb::Obj::setFSM((Game::Bomb::FSM*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r4, 0x2D0(r3)
	  mr        r4, r31
	  lwz       r3, 0x2D0(r3)
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
 * Address:	8034A720
 * Size:	0000D4
 */
void Game::Bomb::Obj::doUpdate(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x2C9(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x78
	  lfs       f1, 0x11C(r4)
	  lfs       f2, -0x20(r2)
	  lfs       f0, -0x30(r2)
	  fmuls     f1, f1, f2
	  stfs      f1, 0x11C(r4)
	  lfs       f1, 0x120(r4)
	  fmuls     f1, f1, f2
	  stfs      f1, 0x120(r4)
	  lfs       f1, 0x124(r4)
	  fmuls     f1, f1, f2
	  stfs      f1, 0x124(r4)
	  lfs       f1, 0x1C8(r4)
	  fmuls     f1, f1, f2
	  stfs      f1, 0x1C8(r4)
	  lfs       f1, 0x1CC(r4)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x68
	  fmuls     f0, f1, f2
	  stfs      f0, 0x1CC(r4)

	.loc_0x68:
	  lfs       f1, 0x1D0(r4)
	  lfs       f0, -0x20(r2)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x1D0(r4)

	.loc_0x78:
	  lwz       r0, 0xC8(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x98
	  lfs       f0, -0x30(r2)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  b         .loc_0xB0

	.loc_0x98:
	  lfs       f0, 0x1C8(r4)
	  stfs      f0, 0x1D4(r4)
	  lfs       f0, 0x1CC(r4)
	  stfs      f0, 0x1D8(r4)
	  lfs       f0, 0x1D0(r4)
	  stfs      f0, 0x1DC(r4)

	.loc_0xB0:
	  lwz       r3, 0x2D0(r4)
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
 * Address:	8034A7F4
 * Size:	000004
 */
void Game::Bomb::Obj::doDirectDraw((Graphics&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034A7F8
 * Size:	000004
 */
void Game::Bomb::Obj::doDebugDraw((Graphics&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034A7FC
 * Size:	00002C
 */
void Game::Bomb::Obj::doEntry(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x2BD(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x1C
	  bl        -0x2471C8

	.loc_0x1C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034A828
 * Size:	0001F4
 */
void Game::Bomb::Obj::doAnimationCullingOff(void)
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
	  li        r0, 0
	  lwz       r4, 0x188(r3)
	  stb       r0, 0x24(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1D8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xB8(r31)
	  li        r30, 0x1
	  lfs       f29, 0x164(r31)
	  cmplwi    r3, 0
	  lfs       f30, 0x154(r31)
	  lfs       f31, 0x144(r31)
	  beq-      .loc_0x9C
	  lfs       f0, 0xC(r3)
	  lfs       f1, 0x2C(r3)
	  fcmpu     cr0, f31, f0
	  lfs       f0, 0x1C(r3)
	  bne-      .loc_0x8C
	  fcmpu     cr0, f30, f0
	  bne-      .loc_0x8C
	  fcmpu     cr0, f29, f1
	  beq-      .loc_0xF8

	.loc_0x8C:
	  addi      r4, r31, 0x138
	  li        r30, 0x1
	  bl        -0x2605F0
	  b         .loc_0xF8

	.loc_0x9C:
	  mr        r3, r31
	  li        r30, 0
	  bl        -0x1AB344
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xE0
	  lwz       r0, 0x1E0(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne-      .loc_0xE0
	  lfs       f0, 0x18C(r31)
	  fcmpu     cr0, f0, f31
	  bne-      .loc_0xE0
	  lfs       f0, 0x190(r31)
	  fcmpu     cr0, f0, f30
	  bne-      .loc_0xE0
	  lfs       f0, 0x194(r31)
	  fcmpu     cr0, f0, f29
	  beq-      .loc_0xF8

	.loc_0xE0:
	  addi      r3, r31, 0x138
	  addi      r4, r31, 0x168
	  addi      r5, r31, 0x1A4
	  addi      r6, r31, 0x18C
	  li        r30, 0x1
	  bl        0xDD9BC

	.loc_0xF8:
	  rlwinm.   r0,r30,0,24,31
	  bne-      .loc_0x110
	  mr        r3, r31
	  bl        -0x2435F4
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x144

	.loc_0x110:
	  lwz       r4, 0x174(r31)
	  addi      r3, r31, 0x138
	  lwz       r4, 0x8(r4)
	  addi      r4, r4, 0x24
	  bl        -0x26067C
	  lwz       r3, 0x174(r31)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x114(r31)
	  bl        -0x214ECC

	.loc_0x144:
	  mr        r3, r31
	  bl        -0x1AB3FC
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C4
	  mr        r3, r31
	  bl        -0x243648
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C4
	  lbz       r0, 0x2C8(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x1C4
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x1C(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x1C4
	  li        r0, 0x1
	  lis       r3, 0x804B
	  stb       r0, 0x2C8(r31)
	  subi      r0, r3, 0x5814
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  lfs       f0, 0x18C(r31)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x190(r31)
	  stfs      f0, 0x10(r1)
	  lfs       f0, 0x194(r31)
	  stfs      f0, 0x14(r1)
	  lwz       r3, 0x2D4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1C4:
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
 * Address:	8034AA1C
 * Size:	00004C
 */
void Game::Bomb::Obj::doAnimationCullingOn(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x784
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x30
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r31)
	  b         .loc_0x38

	.loc_0x30:
	  mr        r3, r31
	  bl        -0x247738

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
 * Address:	8034AA68
 * Size:	000134
 */
void Game::Bomb::Obj::doSimulation((float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  fmr       f31, f1
	  bl        -0x1AB514
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xDC
	  lfs       f4, 0x1FC(r31)
	  lfs       f0, -0x30(r2)
	  fmr       f1, f4
	  fcmpo     cr0, f4, f0
	  bge-      .loc_0x44
	  fneg      f1, f4

	.loc_0x44:
	  lfs       f2, -0x18(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x30(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f1, f1, f2
	  fcmpo     cr0, f4, f0
	  fctiwz    f0, f1
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f3, 0x4(r3)
	  bge-      .loc_0x9C
	  lfs       f0, -0x14(r2)
	  fmuls     f0, f4, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f1, f0
	  b         .loc_0xB4

	.loc_0x9C:
	  fmuls     f0, f4, f2
	  fctiwz    f0, f0
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r4, r0

	.loc_0xB4:
	  lfs       f0, -0x30(r2)
	  mr        r3, r31
	  stfs      f1, 0x8(r1)
	  addi      r4, r1, 0x8
	  stfs      f0, 0xC(r1)
	  stfs      f3, 0x10(r1)
	  bl        -0x1AB54C
	  mr        r3, r31
	  bl        -0x20EDD4
	  b         .loc_0x118

	.loc_0xDC:
	  lwz       r4, 0xB8(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x10C
	  lfs       f2, 0x2C(r4)
	  mr        r3, r31
	  lfs       f1, 0x1C(r4)
	  lfs       f0, 0xC(r4)
	  stfs      f0, 0x18C(r31)
	  stfs      f1, 0x190(r31)
	  stfs      f2, 0x194(r31)
	  bl        -0x24729C
	  b         .loc_0x118

	.loc_0x10C:
	  fmr       f1, f31
	  mr        r3, r31
	  bl        -0x246124

	.loc_0x118:
	  psq_l     f31,0x48(r1),0,0
	  lwz       r0, 0x54(r1)
	  lfd       f31, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034AB9C
 * Size:	000050
 */
void Game::Bomb::Obj::getShadowParam((Game::ShadowParam&))
{
	/*
	.loc_0x0:
	  lfs       f0, 0x18C(r3)
	  lfs       f5, -0x10(r2)
	  stfs      f0, 0x0(r4)
	  lfs       f3, -0x30(r2)
	  lfs       f0, 0x190(r3)
	  lfs       f2, -0xC(r2)
	  stfs      f0, 0x4(r4)
	  lfs       f1, -0x8(r2)
	  lfs       f4, 0x194(r3)
	  lfs       f0, -0x4(r2)
	  stfs      f4, 0x8(r4)
	  lfs       f4, 0x190(r3)
	  fadds     f4, f5, f4
	  stfs      f4, 0x4(r4)
	  stfs      f3, 0xC(r4)
	  stfs      f2, 0x10(r4)
	  stfs      f3, 0x14(r4)
	  stfs      f1, 0x18(r4)
	  stfs      f0, 0x1C(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034ABEC
 * Size:	000048
 */
void Game::Bomb::Obj::needShadow(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x2437F0
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x28
	  li        r3, 0
	  b         .loc_0x34

	.loc_0x28:
	  lwz       r0, 0xB8(r31)
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31

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
 * Address:	8034AC34
 * Size:	000080
 */
void Game::Bomb::Obj::doFinishStoneState(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x247D40
	  mr        r3, r31
	  bl        -0x24385C
	  cmpwi     r3, 0
	  bne-      .loc_0x50
	  mr        r3, r31
	  bl        -0x2459F4
	  lfs       f0, -0x30(r2)
	  fcmpu     cr0, f0, f1
	  bne-      .loc_0x50
	  lbz       r0, 0x2BC(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x50
	  mr        r3, r31
	  bl        -0x2439A0

	.loc_0x50:
	  lwz       r0, 0x1E0(r31)
	  lfs       f0, -0x30(r2)
	  rlwinm    r0,r0,0,0,30
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034ACB4
 * Size:	000048
 */
void Game::Bomb::Obj::doStartStoneState(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x247DD4
	  lwz       r3, 0x2D4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stb       r0, 0x2C8(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034ACFC
 * Size:	000084
 */
void Game::Bomb::Obj::onKill((Game::CreatureKillArg*))
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
	  lwz       r3, 0x2CC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x4C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x5D
	  bne-      .loc_0x4C
	  lwz       r3, 0x2CC(r30)
	  li        r0, 0
	  stw       r0, 0x230(r3)

	.loc_0x4C:
	  lwz       r3, 0x2D4(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0x248E7C
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
 * Address:	8034AD80
 * Size:	000030
 */
void Game::Bomb::Obj::doStartMovie(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2D4(r3)
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
 * Address:	8034ADB0
 * Size:	000030
 */
void Game::Bomb::Obj::doEndMovie(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2D4(r3)
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
 * Address:	8034ADE0
 * Size:	000074
 */
void Game::Bomb::Obj::damageCallBack((Game::Creature*, float, CollPart*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x2BC(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x24
	  lwz       r0, 0xC8(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x60

	.loc_0x24:
	  lwz       r0, 0x1E0(r3)
	  rlwinm.   r0,r0,0,22,22
	  beq-      .loc_0x58
	  lwz       r4, 0x2C4(r3)
	  addi      r0, r4, 0x1
	  stw       r0, 0x2C4(r3)
	  lwz       r0, 0x2C4(r3)
	  cmpwi     r0, 0x4
	  ble-      .loc_0x50
	  li        r4, 0
	  bl        -0x20FD3C

	.loc_0x50:
	  li        r3, 0x1
	  b         .loc_0x64

	.loc_0x58:
	  lfs       f1, -0x30(r2)
	  bl        -0x244DD0

	.loc_0x60:
	  li        r3, 0

	.loc_0x64:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034AE54
 * Size:	000160
 */
void bombCallBack__Q34Game4Bomb3ObjFPQ24Game8CreatureR10Vector3<float> f(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  lwz       r0, 0xB8(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x144
	  lwz       r0, 0x1E0(r30)
	  rlwinm.   r0,r0,0,22,22
	  bne-      .loc_0x144
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x144
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x24
	  bne-      .loc_0x114
	  mr        r3, r30
	  bl        -0x243AD0
	  cmpwi     r3, 0
	  bne-      .loc_0x134
	  lwz       r0, 0x2C0(r30)
	  cmpwi     r0, 0
	  bne-      .loc_0x134
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x10(r1)
	  lis       r0, 0x4330
	  lfs       f0, 0x194(r30)
	  lwz       r3, 0xC0(r30)
	  fsubs     f2, f1, f0
	  lfs       f1, 0x8(r1)
	  lfs       f0, 0x18C(r30)
	  lfs       f4, 0x5B4(r3)
	  fsubs     f1, f1, f0
	  lwz       r3, 0x894(r3)
	  fmuls     f0, f2, f2
	  stw       r0, 0x18(r1)
	  fmuls     f4, f4, f4
	  xoris     r0, r3, 0x8000
	  fmadds    f0, f1, f1, f0
	  stw       r0, 0x1C(r1)
	  lfs       f3, -0xC(r2)
	  lfd       f1, 0x0(r2)
	  fdivs     f2, f0, f4
	  lfd       f0, 0x18(r1)
	  fsubs     f2, f3, f2
	  fsubs     f0, f0, f1
	  fmuls     f0, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r3, 0x24(r1)
	  addi      r0, r3, 0x1
	  stw       r0, 0x2C0(r30)
	  b         .loc_0x134

	.loc_0x114:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  lfs       f1, -0x30(r2)
	  lwz       r12, 0x278(r12)
	  mtctr     r12
	  bctrl

	.loc_0x134:
	  lfs       f0, -0x30(r2)
	  li        r3, 0x1
	  stfs      f0, 0x20C(r30)
	  b         .loc_0x148

	.loc_0x144:
	  li        r3, 0

	.loc_0x148:
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
 * Address:	8034AFB4
 * Size:	000008
 */
void Game::Bomb::Obj::pressCallBack((Game::Creature*, float, CollPart*))
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034AFBC
 * Size:	000078
 */
void Game::Bomb::Obj::bounceCallback((Sys::Triangle*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lbz       r0, 0x2BC(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x30
	  lfs       f1, 0x8(r2)
	  addi      r4, r31, 0x18C
	  bl        -0x247494
	  b         .loc_0x64

	.loc_0x30:
	  bl        -0x2435C0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x64
	  mr        r3, r31
	  bl        -0x243C08
	  cmpwi     r3, 0
	  bne-      .loc_0x64
	  lfs       f1, 0x8(r2)
	  mr        r3, r31
	  addi      r4, r31, 0x18C
	  bl        -0x2474C4
	  mr        r3, r31
	  bl        0xB4

	.loc_0x64:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034B034
 * Size:	00009C
 */
void Game::Bomb::Obj::collisionCallback((Game::CollEvent&))
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
	  bl        -0x244A40
	  mr        r3, r30
	  bl        -0x24362C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x84
	  lwz       r3, 0x0(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x84
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x84
	  mr        r3, r30
	  bl        -0x243C98
	  cmpwi     r3, 0
	  bne-      .loc_0x84
	  lfs       f1, 0x8(r2)
	  mr        r3, r30
	  addi      r4, r30, 0x18C
	  bl        -0x247554
	  mr        r3, r30
	  bl        .loc_0x9C
	  li        r0, 0x1
	  stb       r0, 0x2C9(r30)

	.loc_0x84:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x9C:
	*/
}

/*
 * --INFO--
 * Address:	8034B0D0
 * Size:	000060
 */
void Game::Bomb::Obj::forceBomb(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x243CF0
	  cmpwi     r3, 0
	  bne-      .loc_0x4C
	  lwz       r0, 0x1E0(r31)
	  mr        r4, r31
	  li        r5, 0x1
	  li        r6, 0
	  rlwinm    r0,r0,0,0,30
	  stw       r0, 0x1E0(r31)
	  lwz       r3, 0x2D0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x4C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void Game::Bomb::Obj::isBombStart(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8034B130
 * Size:	000028
 */
void Game::Bomb::Obj::bombEffInWater(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, 0xC(r2)
	  addi      r4, r3, 0x18C
	  stw       r0, 0x14(r1)
	  bl        -0x24774C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034B158
 * Size:	00005C
 */
void Game::Bomb::Obj::canEat(void)
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
	  beq-      .loc_0x44
	  mr        r3, r31
	  bl        -0x243D94
	  cmpwi     r3, 0
	  bne-      .loc_0x44
	  li        r3, 0x1
	  b         .loc_0x48

	.loc_0x44:
	  li        r3, 0

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
 * Address:	8034B1B4
 * Size:	0000D8
 */
void Game::Bomb::Obj::isAnimStart(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  bl        -0x24379C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x54
	  lwz       r3, 0xC0(r31)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  lwz       r0, 0x86C(r3)
	  lfd       f1, 0x0(r2)
	  xoris     r0, r0, 0x8000
	  lfs       f2, 0x20C(r31)
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  beq-      .loc_0xB8

	.loc_0x54:
	  lbz       r0, 0x2BC(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x6C
	  lwz       r0, 0xC8(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xB8

	.loc_0x6C:
	  lwz       r3, 0x2C0(r31)
	  cmpwi     r3, 0
	  bne-      .loc_0x80
	  li        r3, 0
	  b         .loc_0xB0

	.loc_0x80:
	  addi      r0, r3, 0x1
	  stw       r0, 0x2C0(r31)
	  lwz       r3, 0xC0(r31)
	  lwz       r4, 0x2C0(r31)
	  lwz       r0, 0x894(r3)
	  cmpw      r4, r0
	  ble-      .loc_0xAC
	  li        r0, 0
	  li        r3, 0x1
	  stw       r0, 0x2C0(r31)
	  b         .loc_0xB0

	.loc_0xAC:
	  li        r3, 0

	.loc_0xB0:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xC0

	.loc_0xB8:
	  li        r3, 0x1
	  b         .loc_0xC4

	.loc_0xC0:
	  li        r3, 0

	.loc_0xC4:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034B28C
 * Size:	00009C
 */
void efx::TBombrockLight::__dt(void)
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
	  lis       r3, 0x804E
	  subi      r3, r3, 0x4498
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r3, 0x804E
	  addi      r3, r3, 0x685C
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
	  bl        -0x2BB65C

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x327254

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
 * Address:	8034B328
 * Size:	000004
 */
void Game::Bomb::Obj::setInitialSetting((Game::EnemyInitialParamBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034B32C
 * Size:	000040
 */
void Game::Bomb::Obj::isLivingThing(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0xB8(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x24
	  bl        -0x24400C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2C

	.loc_0x24:
	  li        r3, 0
	  b         .loc_0x30

	.loc_0x2C:
	  li        r3, 0x1

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034B36C
 * Size:	000048
 */
void Game::Bomb::Obj::isUnderground(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  lwz       r0, 0x1E0(r3)
	  rlwinm.   r0,r0,0,22,22
	  bne-      .loc_0x30
	  bl        -0x244054
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x30
	  li        r31, 0x1

	.loc_0x30:
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
 * Address:	8034B3B4
 * Size:	000008
 */
void Game::Bomb::Obj::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x24
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034B3BC
 * Size:	000008
 */
void @4 @efx::TBombrockLight::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x134
	*/
}



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
 * Address:	8028F62C
 * Size:	0000AC
 */
void Game::FireChappy::Obj::__ct(void)
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
	  addi      r0, r31, 0x300
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x300(r31)
	  stw       r0, 0x304(r31)
	  stw       r0, 0x308(r31)

	.loc_0x3C:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x164D20
	  lis       r3, 0x804D
	  addi      r0, r31, 0x300
	  subi      r5, r3, 0x50BC
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
	  mr        r3, r31
	  bl        0x5E4
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
 * Address:	8028F6D8
 * Size:	000058
 */
void Game::FireChappy::Obj::onInit((Game::CreatureInitArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x164BF8
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x320(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  mr        r3, r31
	  stb       r0, 0x2E4(r31)
	  bl        0x3A8
	  mr        r3, r31
	  bl        0x5D4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028F730
 * Size:	000048
 */
void Game::FireChappy::Obj::onKill((Game::CreatureKillArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bl        0x3B0
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0x18D874
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
 * Address:	8028F778
 * Size:	000004
 */
void Game::FireChappy::Obj::doDirectDraw((Graphics&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028F77C
 * Size:	000020
 */
void Game::FireChappy::Obj::doDebugDraw((Graphics&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x18991C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028F79C
 * Size:	0000C0
 */
void Game::FireChappy::Obj::changeMaterial(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lwz       r3, 0x174(r3)
	  lwz       r29, 0x8(r3)
	  lwz       r12, 0x0(r29)
	  mr        r3, r29
	  lwz       r30, 0x4(r29)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r28
	  bl        0x56C
	  lis       r3, 0x8051
	  li        r28, 0
	  subi      r31, r3, 0xDD0
	  b         .loc_0x90

	.loc_0x58:
	  lwz       r4, 0xC0(r29)
	  rlwinm    r3,r28,6,10,25
	  rlwinm    r0,r28,2,14,29
	  add       r4, r4, r3
	  stw       r4, 0x3C(r31)
	  lwz       r3, 0x60(r30)
	  lwz       r4, 0x2C(r4)
	  lwzx      r3, r3, r0
	  lwz       r4, 0x34(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  addi      r28, r28, 0x1

	.loc_0x90:
	  lhz       r0, 0x5C(r30)
	  rlwinm    r3,r28,0,16,31
	  cmplw     r3, r0
	  blt+      .loc_0x58
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
 * Address:	8028F85C
 * Size:	000034
 */
void Game::FireChappy::Obj::doUpdateCommon(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x18C95C
	  mr        r3, r31
	  bl        0x31C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028F890
 * Size:	0000A0
 */
void Game::FireChappy::Obj::getShadowParam((Game::ShadowParam&))
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
	  lwz       r3, 0x2C8(r3)
	  bl        0x199FF0
	  lfs       f4, 0x2C(r3)
	  lfs       f2, 0x1C(r3)
	  lfs       f0, 0xC(r3)
	  lfs       f3, -0x2998(r2)
	  stfs      f0, 0x0(r31)
	  lfs       f1, -0x2994(r2)
	  stfs      f2, 0x4(r31)
	  lfs       f0, -0x2990(r2)
	  stfs      f4, 0x8(r31)
	  lfs       f2, 0x190(r30)
	  fadds     f2, f3, f2
	  stfs      f2, 0x4(r31)
	  stfs      f1, 0xC(r31)
	  stfs      f0, 0x10(r31)
	  stfs      f1, 0x14(r31)
	  lwz       r0, 0x1E4(r30)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x78
	  lfs       f0, -0x298C(r2)
	  stfs      f0, 0x18(r31)
	  b         .loc_0x80

	.loc_0x78:
	  lfs       f0, -0x2988(r2)
	  stfs      f0, 0x18(r31)

	.loc_0x80:
	  lfs       f0, -0x2984(r2)
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
 * Address:	8028F930
 * Size:	0000E0
 */
void Game::FireChappy::Obj::collisionCallback((Game::CollEvent&))
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
	  bl        -0x164C78
	  lbz       r0, 0x2E4(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0xC8
	  lwz       r3, 0x0(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xC8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xC8
	  lwz       r3, 0x0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x88
	  lwz       r3, 0x0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xC8

	.loc_0x88:
	  lwz       r6, 0xC0(r30)
	  lis       r5, 0x804B
	  lis       r3, 0x804B
	  addi      r4, r1, 0x8
	  lfs       f0, 0x604(r6)
	  subi      r5, r5, 0x5D00
	  addi      r0, r3, 0x4878
	  stw       r5, 0x8(r1)
	  stw       r30, 0xC(r1)
	  stw       r0, 0x8(r1)
	  stfs      f0, 0x10(r1)
	  lwz       r3, 0x0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl

	.loc_0xC8:
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
 * Address:	8028FA10
 * Size:	000034
 */
void Game::FireChappy::Obj::doStartWaitingBirthTypeDrop(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x18808C
	  mr        r3, r31
	  bl        0x95C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028FA44
 * Size:	000034
 */
void Game::FireChappy::Obj::doFinishWaitingBirthTypeDrop(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x188090
	  mr        r3, r31
	  bl        0x89C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028FA78
 * Size:	000020
 */
void Game::FireChappy::Obj::doStartMovie(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x904
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028FA98
 * Size:	000020
 */
void Game::FireChappy::Obj::doEndMovie(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x858
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028FAB8
 * Size:	000048
 */
void Game::FireChappy::Obj::startFireState(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lbz       r0, 0x2E4(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x2C
	  li        r0, 0x1
	  stb       r0, 0x2E4(r31)
	  bl        0x710

	.loc_0x2C:
	  lfs       f0, -0x2980(r2)
	  stfs      f0, 0x2F8(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028FB00
 * Size:	000094
 */
void Game::FireChappy::Obj::finishFireState((bool))
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
	  lbz       r0, 0x2E4(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x7C
	  li        r0, 0
	  stb       r0, 0x2E4(r30)
	  bl        0x6F4
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x48
	  mr        r3, r30
	  bl        0x788
	  b         .loc_0x50

	.loc_0x48:
	  mr        r3, r30
	  bl        0x748

	.loc_0x50:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x58B5
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x7C:
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
 * Address:	8028FB94
 * Size:	00010C
 */
void Game::FireChappy::Obj::updateFireState(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lbz       r0, 0x2E4(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xB0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x50B4
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0x274
	  lwz       r0, 0x280(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xF8
	  lbz       r0, 0x2E4(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xF8
	  li        r0, 0
	  mr        r3, r31
	  stb       r0, 0x2E4(r31)
	  bl        0x61C
	  mr        r3, r31
	  bl        0x6B8
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x58B5
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xF8

	.loc_0xB0:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xF8
	  lwz       r0, 0x280(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xF8
	  lbz       r0, 0x2E4(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xF0
	  li        r0, 0x1
	  mr        r3, r31
	  stb       r0, 0x2E4(r31)
	  bl        0x570

	.loc_0xF0:
	  lfs       f0, -0x2980(r2)
	  stfs      f0, 0x2F8(r31)

	.loc_0xF8:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028FCA0
 * Size:	00004C
 */
void Game::FireChappy::Obj::createMaterialAnimation(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x28
	  bl        -0x26BD0C
	  lis       r4, 0x8016
	  li        r5, 0
	  addi      r4, r4, 0x38EC
	  li        r6, 0xC
	  li        r7, 0x2
	  bl        -0x1CE2E0
	  stw       r3, 0x2FC(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028FCEC
 * Size:	000060
 */
void Game::FireChappy::Obj::startMaterialAnimation(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x2FC(r3)
	  lwz       r4, 0x180(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r4, 0x48(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2FC(r31)
	  lwzu      r12, 0xC(r3)
	  lwz       r4, 0x180(r31)
	  lwz       r12, 0x8(r12)
	  lwz       r4, 0x4C(r4)
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
 * Address:	8028FD4C
 * Size:	000108
 */
void Game::FireChappy::Obj::updateMaterialAnimation(void)
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
	  lfs       f31, -0x2980(r2)
	  lbz       r0, 0x2E4(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0xD0
	  lwz       r4, 0x2FC(r31)
	  lwz       r3, 0x4(r4)
	  lfs       f31, 0x8(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0x48
	  bl        0x1A4318
	  b         .loc_0x4C

	.loc_0x48:
	  lfs       f1, -0x2994(r2)

	.loc_0x4C:
	  lfs       f0, -0x2980(r2)
	  lfs       f2, 0x2F8(r31)
	  fsubs     f1, f1, f0
	  fcmpu     cr0, f0, f2
	  bne-      .loc_0x90
	  lfs       f0, -0x2990(r2)
	  fsubs     f0, f1, f0
	  fcmpo     cr0, f31, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xB0
	  fcmpo     cr0, f31, f1
	  cror      2, 0, 0x2
	  bne-      .loc_0xB0
	  lfs       f0, -0x297C(r2)
	  fsubs     f0, f2, f0
	  stfs      f0, 0x2F8(r31)
	  b         .loc_0xB0

	.loc_0x90:
	  lfs       f1, -0x297C(r2)
	  lfs       f0, -0x2994(r2)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x2F8(r31)
	  lfs       f1, 0x2F8(r31)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xB0
	  stfs      f0, 0x2F8(r31)

	.loc_0xB0:
	  lfs       f1, 0x2F8(r31)
	  lfs       f0, -0x2994(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xCC
	  fmr       f31, f0
	  b         .loc_0xD0

	.loc_0xCC:
	  fmr       f31, f1

	.loc_0xD0:
	  fmr       f1, f31
	  lwz       r3, 0x2FC(r31)
	  bl        0x1A4728
	  lwz       r3, 0x2FC(r31)
	  fmr       f1, f31
	  addi      r3, r3, 0xC
	  bl        0x1A4718
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
 * Address:	8028FE54
 * Size:	00002C
 */
void Game::FireChappy::Obj::updateEfxLod(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lbz       r0, 0xD8(r3)
	  lwz       r3, 0x2E8(r3)
	  rlwinm    r4,r0,0,30,31
	  bl        0x123DCC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028FE80
 * Size:	000288
 */
void Game::FireChappy::Obj::createEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x54
	  stw       r30, 0x8(r1)
	  bl        -0x26BFF8
	  mr.       r30, r3
	  beq-      .loc_0x4C
	  li        r4, 0
	  li        r5, 0x1E6
	  li        r6, 0x1E7
	  li        r7, 0x1E8
	  li        r8, 0x1E9
	  bl        0x1207A0
	  lis       r3, 0x804D
	  subi      r0, r3, 0x50D8
	  stw       r0, 0x0(r30)

	.loc_0x4C:
	  stw       r30, 0x2E8(r31)
	  li        r3, 0x14
	  bl        -0x26C030
	  cmplwi    r3, 0
	  beq-      .loc_0xD4
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
	  subi      r4, r4, 0x5124
	  li        r9, 0
	  li        r8, 0x2B2
	  stw       r0, 0x4(r3)
	  addi      r6, r7, 0x14
	  li        r5, 0x8C
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

	.loc_0xD4:
	  stw       r3, 0x2D8(r31)
	  li        r3, 0x14
	  bl        -0x26C0B8
	  cmplwi    r3, 0
	  beq-      .loc_0x15C
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
	  subi      r4, r4, 0x5170
	  li        r9, 0
	  li        r8, 0x2B2
	  stw       r0, 0x4(r3)
	  addi      r6, r7, 0x14
	  li        r5, 0x242
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

	.loc_0x15C:
	  stw       r3, 0x2EC(r31)
	  li        r3, 0x14
	  bl        -0x26C140
	  cmplwi    r3, 0
	  beq-      .loc_0x1E4
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
	  lis       r4, 0x804D
	  addi      r0, r5, 0x14
	  stw       r5, 0x0(r3)
	  subi      r4, r4, 0x51BC
	  li        r9, 0
	  li        r8, 0x2B2
	  stw       r0, 0x4(r3)
	  addi      r6, r7, 0x14
	  li        r5, 0x241
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

	.loc_0x1E4:
	  stw       r3, 0x2F0(r31)
	  li        r3, 0x14
	  bl        -0x26C1C8
	  cmplwi    r3, 0
	  beq-      .loc_0x26C
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
	  subi      r4, r4, 0x5208
	  li        r9, 0
	  li        r8, 0x2B2
	  stw       r0, 0x4(r3)
	  addi      r6, r7, 0x14
	  li        r5, 0x286
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

	.loc_0x26C:
	  stw       r3, 0x2F4(r31)
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
 * Address:	80290108
 * Size:	000084
 */
void Game::FireChappy::Obj::setupEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  subi      r4, r2, 0x2978
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x174(r3)
	  bl        0x1AEEBC
	  bl        0x199774
	  mr        r0, r3
	  lwz       r3, 0x2E8(r30)
	  mr        r31, r0
	  mr        r4, r31
	  bl        0x1205C8
	  lwz       r3, 0x2EC(r30)
	  subi      r4, r2, 0x2970
	  stw       r31, 0x10(r3)
	  lwz       r3, 0x2F0(r30)
	  stw       r31, 0x10(r3)
	  lwz       r3, 0x2F4(r30)
	  stw       r31, 0x10(r3)
	  lwz       r3, 0x174(r30)
	  bl        0x1AEE80
	  bl        0x199738
	  lwz       r4, 0x2D8(r30)
	  stw       r3, 0x10(r4)
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
 * Address:	8029018C
 * Size:	000034
 */
void Game::FireChappy::Obj::startSleepEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2D8(r3)
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
 * Address:	802901C0
 * Size:	000030
 */
void Game::FireChappy::Obj::finishSleepEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2D8(r3)
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
 * Address:	802901F0
 * Size:	000034
 */
void Game::FireChappy::Obj::startBodyEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2E8(r3)
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
 * Address:	80290224
 * Size:	000030
 */
void Game::FireChappy::Obj::finishBodyEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2E8(r3)
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
 * Address:	80290254
 * Size:	000040
 */
void Game::FireChappy::Obj::createFlickEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x2E4(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x30
	  lwz       r3, 0x2EC(r3)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80290294
 * Size:	000034
 */
void Game::FireChappy::Obj::createDeadSmokeEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2F0(r3)
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
 * Address:	802902C8
 * Size:	000034
 */
void Game::FireChappy::Obj::createDeadSteamEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2F4(r3)
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
 * Address:	802902FC
 * Size:	00008C
 */
void Game::FireChappy::Obj::effectDrawOn(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x2E8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2EC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2F0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2F4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2D8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
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
 * Address:	80290388
 * Size:	00008C
 */
void Game::FireChappy::Obj::effectDrawOff(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x2E8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2EC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2F0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2F4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2D8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
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
 * Address:	80290414
 * Size:	00009C
 */
void efx::TYakiSteam::__dt(void)
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
	  subi      r3, r3, 0x5208
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
	  bl        -0x2007E4

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x26C3DC

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
 * Address:	802904B0
 * Size:	00009C
 */
void efx::TYakiDeadsmoke::__dt(void)
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
	  subi      r3, r3, 0x51BC
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
	  bl        -0x200880

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x26C478

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
 * Address:	8029054C
 * Size:	00009C
 */
void efx::TYakiFlick::__dt(void)
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
	  subi      r3, r3, 0x5170
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
	  bl        -0x20091C

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x26C514

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
 * Address:	802905E8
 * Size:	00009C
 */
void efx::THanachoY::__dt(void)
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
	  subi      r3, r3, 0x5124
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
	  bl        -0x2009B8

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x26C5B0

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
 * Address:	80290684
 * Size:	000008
 */
void Game::FireChappy::Obj::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x21
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029068C
 * Size:	000014
 */
void @768 @12 @Game::EnemyBase::viewOnPelletKilled(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x300
	  b         -0x189D80
	*/
}

/*
 * --INFO--
 * Address:	802906A0
 * Size:	000014
 */
void @768 @12 @Game::EnemyBase::viewStartCarryMotion(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x300
	  b         -0x18A008
	*/
}

/*
 * --INFO--
 * Address:	802906B4
 * Size:	000014
 */
void @768 @12 @Game::EnemyBase::viewStartPreCarryMotion(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x300
	  b         -0x189FFC
	*/
}

/*
 * --INFO--
 * Address:	802906C8
 * Size:	000014
 */
void @768 @12 @Game::EnemyBase::view_finish_carrymotion(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x300
	  b         -0x189C60
	*/
}

/*
 * --INFO--
 * Address:	802906DC
 * Size:	000014
 */
void @768 @12 @Game::EnemyBase::view_start_carrymotion(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x300
	  b         -0x189CA0
	*/
}

/*
 * --INFO--
 * Address:	802906F0
 * Size:	000014
 */
void @768 @12 @Game::EnemyBase::viewGetShape(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x300
	  b         -0x18A060
	*/
}

/*
 * --INFO--
 * Address:	80290704
 * Size:	000008
 */
void @4 @efx::THanachoY::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x120
	*/
}

/*
 * --INFO--
 * Address:	8029070C
 * Size:	000008
 */
void @4 @efx::TYakiFlick::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x1C4
	*/
}

/*
 * --INFO--
 * Address:	80290714
 * Size:	000008
 */
void @4 @efx::TYakiDeadsmoke::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x268
	*/
}

/*
 * --INFO--
 * Address:	8029071C
 * Size:	000008
 */
void @4 @efx::TYakiSteam::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x30C
	*/
}

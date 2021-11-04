

/*
 * --INFO--
 * Address:	80262FF0
 * Size:	000138
 */
void Game::Rock::Obj::Obj()
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
	  addi      r0, r31, 0x2E8
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x2E8(r31)
	  stw       r0, 0x2EC(r31)
	  stw       r0, 0x2F0(r31)

	.loc_0x40:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x161C98
	  lis       r3, 0x804C
	  addi      r0, r31, 0x2E8
	  addi      r5, r3, 0x4234
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
	  bl        -0x23F1CC
	  mr.       r30, r3
	  beq-      .loc_0xCC
	  bl        -0x13B708
	  lis       r3, 0x804C
	  lis       r4, 0x804B
	  addi      r0, r3, 0x3FE8
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
	  bl        -0x23F220
	  mr.       r4, r3
	  beq-      .loc_0x100
	  lis       r5, 0x804B
	  lis       r3, 0x804C
	  subi      r0, r5, 0x680
	  li        r5, -0x1
	  stw       r0, 0x0(r4)
	  addi      r0, r3, 0x3FC0
	  stw       r5, 0x18(r4)
	  stw       r0, 0x0(r4)

	.loc_0x100:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x2F8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0xE18
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
 * Address:	80263128
 * Size:	00005C
 */
void Game::Rock::Obj::birth(Vector3<float>&, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  bl        -0x16073C
	  lfs       f2, -0x35C0(r2)
	  mr        r3, r31
	  lfs       f1, -0x35BC(r2)
	  addi      r4, r1, 0x8
	  lfs       f0, -0x35B8(r2)
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80263184
 * Size:	000028
 */
void Game::Rock::Obj::setInitialSetting(Game::EnemyInitialParamBase*)
{
	/*
	.loc_0x0:
	  lwz       r4, 0xC0(r3)
	  lfs       f0, 0x44C(r4)
	  stfs      f0, 0x2CC(r3)
	  lwz       r4, 0xC0(r3)
	  lfs       f0, 0x474(r4)
	  stfs      f0, 0x2D0(r3)
	  lwz       r4, 0xC0(r3)
	  lfs       f0, 0x49C(r4)
	  stfs      f0, 0x2D4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802631AC
 * Size:	0001E0
 */
void Game::Rock::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  bl        -0x161768
	  lbz       r0, 0x2B0(r31)
	  extsb.    r0, r0
	  bne-      .loc_0x44
	  lfs       f1, -0x35B4(r2)
	  stfs      f1, 0x1F8(r31)
	  stfs      f1, 0x168(r31)
	  stfs      f1, 0x16C(r31)
	  stfs      f1, 0x170(r31)
	  lwz       r3, 0x114(r31)
	  lwz       r3, 0x0(r3)
	  bl        -0x12B3E0

	.loc_0x44:
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  ori       r0, r0, 0x1
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,29,27
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,25,23
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,24,22
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,21,19
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  oris      r0, r0, 0x40
	  stw       r0, 0x1E0(r31)
	  bl        -0x161834
	  mr        r3, r31
	  bl        0xE80
	  lfs       f0, -0x35B0(r2)
	  li        r0, 0
	  mr        r3, r31
	  stfs      f0, 0x2C8(r31)
	  stb       r0, 0x2C4(r31)
	  stw       r0, 0x2C0(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x13
	  bne-      .loc_0x190
	  lfs       f1, -0x35B0(r2)
	  lfs       f0, 0x2AC(r31)
	  fcmpu     cr0, f1, f0
	  beq-      .loc_0x11C
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r31)
	  bl        -0x199CF4
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, -0x35A0(r2)
	  stw       r0, 0x8(r1)
	  lfs       f1, -0x35AC(r2)
	  lfd       f2, 0x8(r1)
	  lfs       f0, -0x35A8(r2)
	  fsubs     f2, f2, f3
	  fmuls     f1, f1, f2
	  fdivs     f0, f1, f0
	  stfs      f0, 0x2C8(r31)

	.loc_0x11C:
	  lbz       r0, 0x2B0(r31)
	  extsb.    r0, r0
	  bne-      .loc_0x160
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1DC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x180

	.loc_0x160:
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x180:
	  lwz       r3, -0x6980(r13)
	  mr        r4, r31
	  bl        -0x21644
	  b         .loc_0x1CC

	.loc_0x190:
	  mr        r3, r31
	  bl        0x740
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1DC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1CC:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8026338C
 * Size:	000008
 */
void Game::Rock::Obj::getEnemyTypeID()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x2E4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80263394
 * Size:	000054
 */
void Game::Rock::Obj::onKill(Game::CreatureKillArg*)
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
	  bl        0xD60
	  mr        r3, r30
	  bl        0xDBC
	  mr        r3, r30
	  bl        0xEDC
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0x1614E4
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
 * Address:	802633E8
 * Size:	000034
 */
void Game::Rock::Obj::doUpdate()
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
 * Address:	8026341C
 * Size:	00004C
 */
void Game::Rock::Obj::setFSM(Game::Rock::FSM*)
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
 * Address:	80263468
 * Size:	000004
 */
void Game::Rock::Obj::doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8026346C
 * Size:	000020
 */
void Game::Rock::Obj::doDebugDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x15D60C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8026348C
 * Size:	0000E4
 */
void Game::Rock::Obj::getShadowParam(Game::ShadowParam&)
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
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x13
	  bne-      .loc_0x68
	  lfs       f0, 0x18C(r30)
	  lfs       f2, -0x3598(r2)
	  stfs      f0, 0x0(r31)
	  lfs       f0, 0x190(r30)
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x194(r30)
	  stfs      f0, 0x8(r31)
	  lfs       f1, 0x190(r30)
	  lfs       f0, 0x19C(r30)
	  fsubs     f0, f1, f0
	  fadds     f0, f2, f0
	  stfs      f0, 0x18(r31)
	  b         .loc_0xA8

	.loc_0x68:
	  lfs       f2, -0x3594(r2)
	  lfs       f1, 0x190(r30)
	  lfs       f3, 0x194(r30)
	  lfs       f0, 0x18C(r30)
	  fadds     f1, f2, f1
	  stfs      f0, 0x0(r31)
	  stfs      f1, 0x4(r31)
	  stfs      f3, 0x8(r31)
	  lwz       r0, 0x1E4(r30)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0xA0
	  lfs       f0, -0x3598(r2)
	  stfs      f0, 0x18(r31)
	  b         .loc_0xA8

	.loc_0xA0:
	  lfs       f0, -0x3590(r2)
	  stfs      f0, 0x18(r31)

	.loc_0xA8:
	  lfs       f2, -0x35B0(r2)
	  lfs       f0, -0x358C(r2)
	  stfs      f2, 0xC(r31)
	  lfs       f1, -0x3588(r2)
	  stfs      f0, 0x10(r31)
	  stfs      f2, 0x14(r31)
	  lfs       f0, 0x1F8(r30)
	  fmuls     f0, f1, f0
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
 * Address:	80263570
 * Size:	000060
 */
void Game::Rock::Obj::needShadow()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x15C174
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x28
	  li        r3, 0x1
	  b         .loc_0x4C

	.loc_0x28:
	  mr        r3, r31
	  bl        -0x15C1A8
	  cmpwi     r3, 0x1
	  beq-      .loc_0x40
	  cmpwi     r3, 0x3
	  bne-      .loc_0x48

	.loc_0x40:
	  li        r3, 0x1
	  b         .loc_0x4C

	.loc_0x48:
	  li        r3, 0

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
 * Address:	802635D0
 * Size:	000088
 */
void Game::Rock::Obj::hipdropCallBack(Game::Creature*, float, CollPart*)
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
	  beq-      .loc_0x70
	  lwz       r0, 0x1E0(r31)
	  rlwinm.   r0,r0,0,22,22
	  bne-      .loc_0x70
	  mr        r3, r31
	  bl        -0x15C218
	  cmpwi     r3, 0x4
	  bne-      .loc_0x70
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x1
	  b         .loc_0x74

	.loc_0x70:
	  li        r3, 0

	.loc_0x74:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80263658
 * Size:	0001A4
 */
void Game::Rock::Obj::collisionCallback(Game::CollEvent&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stmw      r27, 0x2C(r1)
	  mr        r29, r4
	  mr        r28, r3
	  lwz       r27, 0x0(r4)
	  cmplwi    r27, 0
	  beq-      .loc_0x190
	  mr        r3, r27
	  li        r31, 0x1
	  lwz       r12, 0x0(r27)
	  li        r30, 0x1
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x64
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xD4

	.loc_0x64:
	  lwz       r0, 0xC8(r27)
	  li        r31, 0
	  cmplwi    r0, 0
	  beq-      .loc_0x160
	  lwz       r0, 0x2C0(r28)
	  mr        r6, r28
	  cmplwi    r0, 0
	  beq-      .loc_0x88
	  mr        r6, r0

	.loc_0x88:
	  lwz       r5, 0xC0(r28)
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  li        r0, 0
	  lfs       f0, 0x604(r5)
	  subi      r5, r4, 0x5D00
	  subi      r3, r3, 0x4CE0
	  addi      r4, r1, 0x18
	  stw       r5, 0x18(r1)
	  stw       r6, 0x1C(r1)
	  stw       r3, 0x18(r1)
	  stfs      f0, 0x20(r1)
	  stw       r0, 0x24(r1)
	  lwz       r3, 0x0(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x160

	.loc_0xD4:
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x160
	  lwz       r5, 0x4(r29)
	  lis       r3, 0x804B
	  subi      r0, r3, 0x5D00
	  lfs       f0, -0x3584(r2)
	  lis       r3, 0x804B
	  stw       r0, 0x8(r1)
	  addi      r0, r3, 0x4DE0
	  mr        r3, r27
	  stw       r28, 0xC(r1)
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  stfs      f0, 0x10(r1)
	  stw       r5, 0x14(r1)
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x2E4(r28)
	  cmpwi     r0, 0x13
	  bne-      .loc_0x160
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x13
	  bne-      .loc_0x160
	  li        r30, 0

	.loc_0x160:
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x170
	  lfs       f0, -0x35B0(r2)
	  stfs      f0, 0x200(r28)

	.loc_0x170:
	  rlwinm.   r0,r30,0,24,31
	  beq-      .loc_0x190
	  mr        r3, r28
	  mr        r4, r29
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x240(r12)
	  mtctr     r12
	  bctrl

	.loc_0x190:
	  lmw       r27, 0x2C(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802637FC
 * Size:	000054
 */
void Game::Rock::Obj::wallCallback(const Game::MoveInfo&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x15C41C
	  cmpwi     r3, 0x4
	  bne-      .loc_0x40
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x40:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80263850
 * Size:	00006C
 */
void Game::Rock::Obj::inWaterCallback(Game::WaterBox*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x4A
	  bne-      .loc_0x58
	  mr        r3, r31
	  bl        -0x15C48C
	  cmpwi     r3, 0x4
	  bne-      .loc_0x58
	  mr        r3, r31
	  bl        0x8E4
	  mr        r3, r31
	  bl        0x90C
	  lfs       f1, 0x1F8(r31)
	  mr        r3, r31
	  bl        0x20AF9C

	.loc_0x58:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802638BC
 * Size:	000060
 */
void Game::Rock::Obj::outWaterCallback()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x4A
	  bne-      .loc_0x4C
	  mr        r3, r31
	  bl        -0x15C4F8
	  cmpwi     r3, 0x4
	  bne-      .loc_0x4C
	  mr        r3, r31
	  bl        0x9A0
	  mr        r3, r31
	  bl        0x83C

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
 * Address:	8026391C
 * Size:	000020
 */
void Game::Rock::Obj::doStartMovie()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0xB88
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8026393C
 * Size:	000020
 */
void Game::Rock::Obj::doEndMovie()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0xB04
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8026395C
 * Size:	00002C
 */
void Game::Rock::Obj::ignoreAtari(Game::Creature*)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x2C0(r3)
	  cmplw     r4, r0
	  bne-      .loc_0x24
	  lfs       f1, 0x2C8(r3)
	  lfs       f0, -0x358C(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x24
	  li        r3, 0x1
	  blr

	.loc_0x24:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80263988
 * Size:	00007C
 */
void Game::Rock::Obj::fallRockScaleUp()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f2, -0x358C(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  lfs       f3, 0x1F8(r3)
	  fcmpo     cr0, f3, f2
	  bge-      .loc_0x64
	  lwz       r4, -0x6514(r13)
	  lfs       f1, 0x2D4(r3)
	  lfs       f0, 0x54(r4)
	  fmadds    f1, f1, f0, f3
	  fcmpo     cr0, f1, f2
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x48
	  li        r31, 0x1
	  fmr       f1, f2

	.loc_0x48:
	  stfs      f1, 0x1F8(r3)
	  stfs      f1, 0x168(r3)
	  stfs      f1, 0x16C(r3)
	  stfs      f1, 0x170(r3)
	  lwz       r3, 0x114(r3)
	  lwz       r3, 0x0(r3)
	  bl        -0x12BBDC

	.loc_0x64:
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
 * Address:	80263A04
 * Size:	00007C
 */
void Game::Rock::Obj::moveRockScaleUp()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f2, -0x358C(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  lfs       f3, 0x1F8(r3)
	  fcmpo     cr0, f3, f2
	  bge-      .loc_0x64
	  lwz       r4, -0x6514(r13)
	  lfs       f1, -0x3594(r2)
	  lfs       f0, 0x54(r4)
	  fmadds    f1, f1, f0, f3
	  fcmpo     cr0, f1, f2
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x48
	  li        r31, 0x1
	  fmr       f1, f2

	.loc_0x48:
	  stfs      f1, 0x1F8(r3)
	  stfs      f1, 0x168(r3)
	  stfs      f1, 0x16C(r3)
	  stfs      f1, 0x170(r3)
	  lwz       r3, 0x114(r3)
	  lwz       r3, 0x0(r3)
	  bl        -0x12BC58

	.loc_0x64:
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
 * Address:	80263A80
 * Size:	000100
 */
void Game::Rock::Obj::initMoveVelocity()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lfs       f0, -0x35B0(r2)
	  stw       r0, 0x34(r1)
	  lfs       f3, 0x1FC(r3)
	  fmr       f1, f3
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x24
	  fneg      f1, f3

	.loc_0x24:
	  lfs       f2, -0x3580(r2)
	  lis       r4, 0x8050
	  lfs       f0, -0x35B0(r2)
	  addi      r5, r4, 0x71A0
	  fmuls     f1, f1, f2
	  fcmpo     cr0, f3, f0
	  fctiwz    f0, f1
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r4, r5, r0
	  lfs       f4, 0x4(r4)
	  bge-      .loc_0x7C
	  lfs       f0, -0x357C(r2)
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r5, r0
	  fneg      f2, f0
	  b         .loc_0x94

	.loc_0x7C:
	  fmuls     f0, f3, f2
	  fctiwz    f0, f0
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f2, r5, r0

	.loc_0x94:
	  lfs       f1, -0x35B0(r2)
	  frsp      f0, f2
	  stfs      f2, 0x8(r1)
	  addi      r4, r1, 0x8
	  stfs      f1, 0xC(r1)
	  stfs      f4, 0x10(r1)
	  lwz       r5, 0xC0(r3)
	  lfs       f3, 0x2E4(r5)
	  fmuls     f2, f0, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f4, f3
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  stfs      f2, 0x1D4(r3)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x1D8(r3)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x1DC(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80263B80
 * Size:	0003A0
 */
void Game::Rock::Obj::updateMoveVelocity()
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
	  stw       r31, 0x5C(r1)
	  mr        r31, r3
	  lbz       r0, 0x2C4(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x234
	  lwz       r4, -0x6C18(r13)
	  li        r3, 0
	  cmplwi    r4, 0
	  beq-      .loc_0x7C
	  lwz       r4, 0x44(r4)
	  li        r0, 0
	  cmpwi     r4, 0x1
	  beq-      .loc_0x68
	  cmpwi     r4, 0x3
	  bne-      .loc_0x6C

	.loc_0x68:
	  li        r0, 0x1

	.loc_0x6C:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x7C
	  lwz       r3, -0x6D20(r13)
	  bl        -0x108FD8

	.loc_0x7C:
	  cmplwi    r3, 0
	  bne-      .loc_0xA4
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f1, -0x3578(r2)
	  li        r4, 0
	  lfs       f2, 0x3D4(r5)
	  li        r5, 0
	  li        r6, 0
	  bl        -0x150BD0

	.loc_0xA4:
	  cmplwi    r3, 0
	  beq-      .loc_0xD0
	  mr        r4, r3
	  addi      r3, r1, 0x44
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f28, 0x44(r1)
	  lfs       f29, 0x4C(r1)
	  b         .loc_0xE8

	.loc_0xD0:
	  lfs       f3, 0x18C(r31)
	  lfs       f2, 0x1D4(r31)
	  lfs       f1, 0x194(r31)
	  lfs       f0, 0x1DC(r31)
	  fadds     f28, f3, f2
	  fadds     f29, f1, f0

	.loc_0xE8:
	  mr        r4, r31
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x2C
	  lfs       f30, 0x334(r5)
	  lwz       r12, 0x8(r12)
	  lfs       f31, 0x30C(r5)
	  mtctr     r12
	  bctrl
	  lfs       f4, 0x2C(r1)
	  lis       r3, 0x8051
	  lfs       f0, 0x34(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f3, 0x30(r1)
	  fsubs     f1, f28, f4
	  fsubs     f2, f29, f0
	  stfs      f4, 0x20(r1)
	  stfs      f3, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  bl        -0x22EBAC
	  bl        0x1ADF18
	  lwz       r12, 0x0(r31)
	  fmr       f28, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f28
	  bl        0x1ADF20
	  fmuls     f31, f1, f31
	  lfs       f0, -0x3570(r2)
	  lfs       f1, -0x3574(r2)
	  fmuls     f0, f0, f30
	  fabs      f2, f31
	  fmuls     f1, f1, f0
	  frsp      f0, f2
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x19C
	  lfs       f0, -0x35B0(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x198
	  fmr       f31, f1
	  b         .loc_0x19C

	.loc_0x198:
	  fneg      f31, f1

	.loc_0x19C:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f31, f1
	  bl        0x1ADE9C
	  stfs      f1, 0x1FC(r31)
	  mr        r3, r31
	  lfs       f0, 0x1FC(r31)
	  stfs      f0, 0x1A8(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r4, 0xC0(r31)
	  lwz       r12, 0x64(r12)
	  lfs       f30, 0x81C(r4)
	  mtctr     r12
	  bctrl
	  bl        -0x194544
	  mr        r3, r31
	  lfs       f2, 0x1D4(r31)
	  lwz       r12, 0x0(r31)
	  frsp      f28, f1
	  lfs       f31, 0x1D8(r31)
	  lfs       f0, 0x1DC(r31)
	  lwz       r12, 0x64(r12)
	  stfs      f2, 0x38(r1)
	  stfs      f31, 0x3C(r1)
	  stfs      f0, 0x40(r1)
	  mtctr     r12
	  bctrl
	  bl        -0x194AE0
	  fmuls     f0, f30, f28
	  frsp      f1, f1
	  stfs      f0, 0x1D4(r31)
	  fmuls     f0, f30, f1
	  stfs      f31, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  b         .loc_0x36C

	.loc_0x234:
	  lfs       f2, -0x3568(r2)
	  mr        r4, r31
	  lfs       f0, 0x1D4(r31)
	  addi      r3, r1, 0x14
	  lfs       f3, -0x356C(r2)
	  fmuls     f0, f2, f0
	  lfs       f1, 0x1C8(r31)
	  fmadds    f0, f3, f1, f0
	  stfs      f0, 0x1D4(r31)
	  lfs       f0, 0x1D8(r31)
	  lfs       f1, 0x1CC(r31)
	  fmuls     f0, f2, f0
	  fmadds    f0, f3, f1, f0
	  stfs      f0, 0x1D8(r31)
	  lfs       f0, 0x1DC(r31)
	  lfs       f1, 0x1D0(r31)
	  fmuls     f0, f2, f0
	  fmadds    f0, f3, f1, f0
	  stfs      f0, 0x1DC(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r5, 0xC0(r31)
	  lfs       f3, 0x194(r31)
	  lfs       f2, 0x1DC(r31)
	  lfs       f1, 0x18C(r31)
	  lfs       f0, 0x1D4(r31)
	  fadds     f28, f3, f2
	  lwz       r12, 0x8(r12)
	  fadds     f29, f1, f0
	  lfs       f31, 0x334(r5)
	  lfs       f30, 0x30C(r5)
	  mtctr     r12
	  bctrl
	  lfs       f4, 0x14(r1)
	  lis       r3, 0x8051
	  lfs       f0, 0x1C(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f3, 0x18(r1)
	  fsubs     f1, f29, f4
	  fsubs     f2, f28, f0
	  stfs      f4, 0x8(r1)
	  stfs      f3, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  bl        -0x22ED54
	  bl        0x1ADD70
	  lwz       r12, 0x0(r31)
	  fmr       f28, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f28
	  bl        0x1ADD78
	  fmuls     f30, f1, f30
	  lfs       f0, -0x3570(r2)
	  lfs       f1, -0x3574(r2)
	  fmuls     f0, f0, f31
	  fabs      f2, f30
	  fmuls     f1, f1, f0
	  frsp      f0, f2
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x344
	  lfs       f0, -0x35B0(r2)
	  fcmpo     cr0, f30, f0
	  ble-      .loc_0x340
	  fmr       f30, f1
	  b         .loc_0x344

	.loc_0x340:
	  fneg      f30, f1

	.loc_0x344:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f30, f1
	  bl        0x1ADCF4
	  stfs      f1, 0x1FC(r31)
	  lfs       f0, 0x1FC(r31)
	  stfs      f0, 0x1A8(r31)

	.loc_0x36C:
	  psq_l     f31,0x98(r1),0,0
	  lfd       f31, 0x90(r1)
	  psq_l     f30,0x88(r1),0,0
	  lfd       f30, 0x80(r1)
	  psq_l     f29,0x78(r1),0,0
	  lfd       f29, 0x70(r1)
	  psq_l     f28,0x68(r1),0,0
	  lfd       f28, 0x60(r1)
	  lwz       r0, 0xA4(r1)
	  lwz       r31, 0x5C(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80263F20
 * Size:	0001A4
 */
void Game::Rock::Obj::createEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  li        r3, 0x14
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  bl        -0x24009C
	  cmplwi    r3, 0
	  beq-      .loc_0xA0
	  lis       r4, 0x804B
	  lis       r5, 0x804A
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x0(r3)
	  subi      r0, r5, 0x1D84
	  addi      r5, r4, 0x698C
	  lis       r4, 0x804E
	  stw       r0, 0x4(r3)
	  addi      r7, r4, 0x6940
	  lis       r4, 0x804C
	  addi      r0, r5, 0x14
	  stw       r5, 0x0(r3)
	  addi      r4, r4, 0x41E8
	  li        r9, 0
	  li        r8, 0x2B2
	  stw       r0, 0x4(r3)
	  addi      r6, r7, 0x14
	  li        r5, 0x1AA
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

	.loc_0xA0:
	  stw       r3, 0x2D8(r31)
	  li        r3, 0x14
	  bl        -0x240124
	  cmplwi    r3, 0
	  beq-      .loc_0x128
	  lis       r4, 0x804B
	  lis       r5, 0x804A
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x0(r3)
	  subi      r0, r5, 0x1D84
	  addi      r5, r4, 0x698C
	  lis       r4, 0x804E
	  stw       r0, 0x4(r3)
	  addi      r7, r4, 0x6940
	  lis       r4, 0x804C
	  addi      r0, r5, 0x14
	  stw       r5, 0x0(r3)
	  addi      r4, r4, 0x419C
	  li        r9, 0
	  li        r8, 0x2B2
	  stw       r0, 0x4(r3)
	  addi      r6, r7, 0x14
	  li        r5, 0x1A9
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

	.loc_0x128:
	  stw       r3, 0x2DC(r31)
	  li        r3, 0x58
	  bl        -0x2401AC
	  mr.       r30, r3
	  beq-      .loc_0x184
	  lis       r4, 0x804B
	  lis       r3, 0x804C
	  subi      r0, r4, 0x5808
	  addi      r29, r30, 0x4
	  stw       r0, 0x0(r30)
	  addi      r0, r3, 0x4188
	  mr        r3, r29
	  addi      r4, r30, 0x48
	  stw       r0, 0x0(r30)
	  li        r5, 0x28E
	  li        r6, 0x28F
	  li        r7, 0x290
	  bl        0x14C2C4
	  lis       r3, 0x804C
	  li        r0, 0
	  addi      r3, r3, 0x416C
	  stw       r3, 0x0(r29)
	  stb       r0, 0x54(r30)

	.loc_0x184:
	  stw       r30, 0x2E0(r31)
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
 * Address:	802640C4
 * Size:	000018
 */
void Game::Rock::Obj::setupEffect()
{
	/*
	.loc_0x0:
	  lwz       r4, 0x2D8(r3)
	  addi      r0, r3, 0x18C
	  stw       r0, 0x10(r4)
	  lwz       r3, 0x2DC(r3)
	  stw       r0, 0x10(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802640DC
 * Size:	000034
 */
void Game::Rock::Obj::startFallEffect()
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
 * Address:	80264110
 * Size:	000030
 */
void Game::Rock::Obj::finishFallEffect()
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
 * Address:	80264140
 * Size:	000034
 */
void Game::Rock::Obj::startRollingGroundEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2DC(r3)
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
 * Address:	80264174
 * Size:	000030
 */
void Game::Rock::Obj::finishRollingGroundEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2DC(r3)
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
 * Address:	802641A4
 * Size:	0000E8
 */
void Game::Rock::Obj::startRollingWaterEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x35B0(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x280(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x38
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x0(r3)

	.loc_0x38:
	  lwz       r3, 0x2E0(r31)
	  li        r4, 0
	  stfs      f0, 0x44(r3)
	  lwz       r3, 0x2E0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r5, 0x2E0(r31)
	  lbz       r0, 0x54(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0xD4
	  lfs       f2, 0x44(r5)
	  lfs       f1, 0x190(r31)
	  lfs       f0, -0x3564(r2)
	  fsubs     f1, f2, f1
	  fcmpo     cr0, f0, f1
	  cror      2, 0, 0x2
	  bne-      .loc_0xC0
	  lfs       f0, -0x3560(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xC0
	  lfs       f1, 0x194(r31)
	  addi      r3, r5, 0x4
	  lfs       f0, 0x18C(r31)
	  li        r4, 0
	  stfs      f0, 0x48(r5)
	  stfs      f2, 0x4C(r5)
	  stfs      f1, 0x50(r5)
	  lwz       r12, 0x4(r5)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xD4

	.loc_0xC0:
	  addi      r3, r5, 0x4
	  lwz       r12, 0x4(r5)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0xD4:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8026428C
 * Size:	000010
 */
void efx::TRockWRun::create(efx::Arg*)
{
	/*
	.loc_0x0:
	  li        r0, 0x1
	  stb       r0, 0x54(r3)
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8026429C
 * Size:	000030
 */
void Game::Rock::Obj::finishRollingWaterEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2E0(r3)
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
 * Address:	802642CC
 * Size:	000044
 */
void efx::TRockWRun::fade()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x4
	  lwz       r12, 0x4(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stb       r0, 0x54(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80264310
 * Size:	0000A4
 */
void Game::Rock::Obj::updateWaterEffectPosition()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x280(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x94
	  lwz       r5, 0x2E0(r3)
	  lbz       r0, 0x54(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x94
	  lfs       f2, 0x44(r5)
	  lfs       f1, 0x190(r3)
	  lfs       f0, -0x3564(r2)
	  fsubs     f1, f2, f1
	  fcmpo     cr0, f0, f1
	  cror      2, 0, 0x2
	  bne-      .loc_0x80
	  lfs       f0, -0x3560(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x80
	  lfs       f1, 0x194(r3)
	  li        r4, 0
	  lfs       f0, 0x18C(r3)
	  addi      r3, r5, 0x4
	  stfs      f0, 0x48(r5)
	  stfs      f2, 0x4C(r5)
	  stfs      f1, 0x50(r5)
	  lwz       r12, 0x4(r5)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x94

	.loc_0x80:
	  addi      r3, r5, 0x4
	  lwz       r12, 0x4(r5)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x94:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802643B4
 * Size:	000098
 */
void Game::Rock::Obj::createRockDeadEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r6, 0x804B
	  lis       r5, 0x804E
	  stw       r0, 0x34(r1)
	  lis       r4, 0x804B
	  subi      r0, r4, 0x5814
	  subi      r10, r6, 0x5808
	  stw       r0, 0x8(r1)
	  addi      r9, r5, 0x6A50
	  lis       r4, 0x804C
	  li        r8, 0x1A6
	  lfs       f0, 0x18C(r3)
	  addi      r0, r4, 0x4120
	  li        r7, 0x1A7
	  li        r6, 0x1A8
	  stfs      f0, 0xC(r1)
	  li        r5, 0
	  addi      r4, r1, 0x8
	  lfs       f0, 0x190(r3)
	  stfs      f0, 0x10(r1)
	  lfs       f0, 0x194(r3)
	  addi      r3, r1, 0x18
	  stw       r10, 0x18(r1)
	  stw       r9, 0x18(r1)
	  stfs      f0, 0x14(r1)
	  sth       r8, 0x1C(r1)
	  sth       r7, 0x1E(r1)
	  sth       r6, 0x20(r1)
	  stw       r5, 0x24(r1)
	  stw       r5, 0x28(r1)
	  stw       r5, 0x2C(r1)
	  stw       r0, 0x18(r1)
	  bl        0x14AC84
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8026444C
 * Size:	000064
 */
void Game::Rock::Obj::effectDrawOn()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x2D8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2DC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2E0(r31)
	  lwzu      r12, 0x4(r3)
	  lwz       r12, 0x18(r12)
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
 * Address:	802644B0
 * Size:	000064
 */
void Game::Rock::Obj::effectDrawOff()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x2D8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2DC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2E0(r31)
	  lwzu      r12, 0x4(r3)
	  lwz       r12, 0x14(r12)
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
 * Address:	80264514
 * Size:	000044
 */
void efx::TRockWRun::forceKill()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x4
	  lwz       r12, 0x4(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stb       r0, 0x54(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80264558
 * Size:	00009C
 */
void efx::TRockGrRun::~TRockGrRun()
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
	  lis       r3, 0x804C
	  addi      r3, r3, 0x419C
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r3, 0x804E
	  addi      r3, r3, 0x6940
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
	  bl        -0x1D4928

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x240520

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
 * Address:	802645F4
 * Size:	00009C
 */
void efx::TRockRun::~TRockRun()
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
	  lis       r3, 0x804C
	  addi      r3, r3, 0x41E8
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r3, 0x804E
	  addi      r3, r3, 0x6940
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
	  bl        -0x1D49C4

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x2405BC

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
 * Address:	80264690
 * Size:	000008
 */
void Game::Rock::Obj::isLivingThing()
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80264698
 * Size:	000014
 */
void Game::EnemyBase::@744 @12 @viewOnPelletKilled()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2E8
	  b         -0x15DD8C
	*/
}

/*
 * --INFO--
 * Address:	802646AC
 * Size:	000014
 */
void Game::EnemyBase::@744 @12 @viewStartCarryMotion()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2E8
	  b         -0x15E014
	*/
}

/*
 * --INFO--
 * Address:	802646C0
 * Size:	000014
 */
void Game::EnemyBase::@744 @12 @viewStartPreCarryMotion()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2E8
	  b         -0x15E008
	*/
}

/*
 * --INFO--
 * Address:	802646D4
 * Size:	000014
 */
void Game::EnemyBase::@744 @12 @view_finish_carrymotion()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2E8
	  b         -0x15DC6C
	*/
}

/*
 * --INFO--
 * Address:	802646E8
 * Size:	000014
 */
void Game::EnemyBase::@744 @12 @view_start_carrymotion()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2E8
	  b         -0x15DCAC
	*/
}

/*
 * --INFO--
 * Address:	802646FC
 * Size:	000014
 */
void Game::EnemyBase::@744 @12 @viewGetShape()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2E8
	  b         -0x15E06C
	*/
}

/*
 * --INFO--
 * Address:	80264710
 * Size:	000008
 */
void efx::TRockRun::@4 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x120
	*/
}

/*
 * --INFO--
 * Address:	80264718
 * Size:	000008
 */
void efx::TRockGrRun::@4 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x1C4
	*/
}

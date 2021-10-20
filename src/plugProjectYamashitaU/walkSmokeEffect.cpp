

/*
 * --INFO--
 * Address:	8012A320
 * Size:	000034
 */
void Game::WalkSmokeEffect::Obj::Obj()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  lfs       f0, -0x6318(r2)
	  stb       r0, 0x0(r3)
	  lis       r4, 0x8051
	  stw       r0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  lfsu      f0, 0x41E4(r4)
	  stfs      f0, 0xC(r3)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x10(r3)
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0x14(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012A354
 * Size:	000010
 */
void Game::WalkSmokeEffect::Mgr::Mgr()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x0(r3)
	  stw       r0, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012A364
 * Size:	0000B4
 */
void Game::WalkSmokeEffect::Mgr::alloc(int)
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
	  lis       r3, 0x8048
	  lwz       r0, 0x4(r29)
	  subi      r31, r3, 0x40D0
	  cmplwi    r0, 0
	  bne-      .loc_0x84
	  stw       r4, 0x0(r29)
	  lwz       r30, 0x0(r29)
	  mulli     r3, r30, 0x18
	  addi      r3, r3, 0x10
	  bl        -0x1063F8
	  lis       r4, 0x8013
	  mr        r7, r30
	  subi      r4, r4, 0x5CE0
	  li        r5, 0
	  li        r6, 0x18
	  bl        -0x689CC
	  stw       r3, 0x4(r29)
	  lwz       r0, 0x4(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x98
	  addi      r3, r31, 0xC
	  addi      r5, r31, 0x20
	  li        r4, 0xA8
	  crclr     6, 0x6
	  bl        -0xFFDA0
	  b         .loc_0x98

	.loc_0x84:
	  addi      r3, r31, 0xC
	  addi      r5, r31, 0x30
	  li        r4, 0xAD
	  crclr     6, 0x6
	  bl        -0xFFDB8

	.loc_0x98:
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
 * Address:	8012A418
 * Size:	0001C8
 */
void Game::WalkSmokeEffect::Mgr::update(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stfd      f31, 0x60(r1)
	  psq_st    f31,0x68(r1),0,0
	  stmw      r27, 0x4C(r1)
	  mr        r27, r3
	  mr        r28, r4
	  li        r29, 0
	  li        r30, 0
	  b         .loc_0x1A0

	.loc_0x2C:
	  lwz       r0, 0x4(r27)
	  add       r31, r0, r30
	  lwz       r3, 0x4(r31)
	  lfs       f0, 0xC(r3)
	  stfs      f0, 0xC(r1)
	  lfs       f1, 0x1C(r3)
	  stfs      f1, 0x10(r1)
	  lfs       f0, 0x2C(r3)
	  stfs      f0, 0x14(r1)
	  lfs       f0, 0x8(r31)
	  fsubs     f2, f1, f0
	  stfs      f2, 0x10(r1)
	  lbz       r0, 0x0(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x154
	  lfs       f1, 0x10(r31)
	  lfs       f0, -0x6318(r2)
	  fsubs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x180
	  lwz       r3, -0x6CF8(r13)
	  addi      r4, r1, 0xC
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x10(r1)
	  fcmpo     cr0, f0, f1
	  bge-      .loc_0x180
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x8C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x148
	  mr        r3, r28
	  lfs       f31, 0x1F8(r28)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  lwz       r6, 0xC(r1)
	  lis       r5, 0x804B
	  lwz       r0, 0x10(r1)
	  lis       r4, 0x804B
	  lwz       r8, 0x14(r1)
	  subi      r7, r5, 0x5814
	  stw       r6, 0x18(r1)
	  subi      r5, r4, 0x5808
	  lis       r6, 0x804B
	  lis       r4, 0x804F
	  stw       r0, 0x1C(r1)
	  subi      r6, r6, 0x5820
	  lfs       f2, 0x18(r1)
	  subi      r0, r4, 0x79B4
	  stw       r8, 0x20(r1)
	  addi      r4, r1, 0x24
	  lfs       f1, 0x1C(r1)
	  stw       r7, 0x24(r1)
	  lfs       f0, 0x20(r1)
	  stw       r5, 0x8(r1)
	  stw       r3, 0x34(r1)
	  addi      r3, r1, 0x8
	  stfs      f2, 0x28(r1)
	  stfs      f1, 0x2C(r1)
	  stfs      f0, 0x30(r1)
	  stw       r6, 0x24(r1)
	  stfs      f31, 0x38(r1)
	  stw       r0, 0x8(r1)
	  bl        0x29DD9C

	.loc_0x148:
	  li        r0, 0x1
	  stb       r0, 0x0(r31)
	  b         .loc_0x180

	.loc_0x154:
	  lwz       r3, -0x6CF8(r13)
	  addi      r4, r1, 0xC
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x10(r1)
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x180
	  li        r0, 0
	  stb       r0, 0x0(r31)

	.loc_0x180:
	  lfs       f0, 0xC(r1)
	  addi      r30, r30, 0x18
	  addi      r29, r29, 0x1
	  stfs      f0, 0xC(r31)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x10(r31)
	  lfs       f0, 0x14(r1)
	  stfs      f0, 0x14(r31)

	.loc_0x1A0:
	  lwz       r0, 0x0(r27)
	  cmpw      r29, r0
	  blt+      .loc_0x2C
	  psq_l     f31,0x68(r1),0,0
	  lfd       f31, 0x60(r1)
	  lmw       r27, 0x4C(r1)
	  lwz       r0, 0x74(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012A5E0
 * Size:	000090
 */
void Game::WalkSmokeEffect::Mgr::setup(int, SysShape::Model*, char*, float)
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
	  fmr       f31, f1
	  mr        r30, r3
	  mr        r31, r4
	  mr        r3, r5
	  mr        r4, r6
	  bl        0x3149D4
	  bl        0x2FF28C
	  mulli     r4, r31, 0x18
	  lwz       r5, 0x4(r30)
	  li        r0, 0x1
	  add       r4, r5, r4
	  stw       r3, 0x4(r4)
	  stfs      f31, 0x8(r4)
	  lwz       r3, 0x4(r4)
	  lfs       f0, 0xC(r3)
	  stfs      f0, 0xC(r4)
	  lfs       f0, 0x1C(r3)
	  stfs      f0, 0x10(r4)
	  lfs       f0, 0x2C(r3)
	  stfs      f0, 0x14(r4)
	  stb       r0, 0x0(r4)
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

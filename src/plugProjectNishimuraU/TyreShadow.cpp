

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
 * Address:	803019EC
 * Size:	00025C
 */
void Game::TyreTubeShadowNode::makeShadowSRT((Game::JointShadowParm&, Matrixf*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lfs       f0, -0xE78(r2)
	  stw       r0, 0x44(r1)
	  addi      r0, r1, 0x2C
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  lfs       f6, 0x10(r5)
	  lfs       f7, 0x20(r5)
	  fmuls     f2, f6, f6
	  lfs       f5, 0x0(r5)
	  lfs       f1, 0xC(r5)
	  fmuls     f3, f7, f7
	  stfs      f1, 0x2C(r1)
	  fmadds    f1, f5, f5, f2
	  lfs       f2, 0x1C(r5)
	  stfs      f2, 0x30(r1)
	  fadds     f2, f3, f1
	  lfs       f1, 0x2C(r5)
	  fcmpo     cr0, f2, f0
	  stfs      f1, 0x34(r1)
	  ble-      .loc_0x68
	  ble-      .loc_0x6C
	  fsqrte    f0, f2
	  fmuls     f2, f0, f2
	  b         .loc_0x6C

	.loc_0x68:
	  fmr       f2, f0

	.loc_0x6C:
	  lfs       f0, -0xE78(r2)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x8C
	  lfs       f0, -0xE74(r2)
	  fdivs     f0, f0, f2
	  fmuls     f5, f5, f0
	  fmuls     f6, f6, f0
	  fmuls     f7, f7, f0

	.loc_0x8C:
	  lfs       f0, 0x18(r4)
	  lfs       f1, -0xE78(r2)
	  fmuls     f3, f5, f0
	  fmuls     f2, f6, f0
	  fmuls     f0, f7, f0
	  stfs      f3, 0x8(r1)
	  stfs      f2, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  lfs       f9, 0x10(r4)
	  lfs       f2, 0x14(r4)
	  fmuls     f0, f7, f9
	  lfs       f8, 0xC(r4)
	  fmuls     f3, f5, f2
	  fmuls     f4, f6, f8
	  fmsubs    f2, f6, f2, f0
	  fmsubs    f3, f7, f8, f3
	  fmsubs    f4, f5, f9, f4
	  fmuls     f0, f2, f2
	  stfs      f2, 0x20(r1)
	  fmuls     f5, f3, f3
	  fmuls     f6, f4, f4
	  stfs      f3, 0x24(r1)
	  fadds     f0, f0, f5
	  stfs      f4, 0x28(r1)
	  fadds     f0, f6, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x114
	  fmadds    f0, f2, f2, f5
	  fadds     f3, f6, f0
	  fcmpo     cr0, f3, f1
	  ble-      .loc_0x118
	  fsqrte    f0, f3
	  fmuls     f3, f0, f3
	  b         .loc_0x118

	.loc_0x114:
	  fmr       f3, f1

	.loc_0x118:
	  lfs       f0, -0xE78(r2)
	  fcmpo     cr0, f3, f0
	  ble-      .loc_0x150
	  lfs       f0, -0xE74(r2)
	  lfs       f2, 0x20(r1)
	  fdivs     f3, f0, f3
	  lfs       f1, 0x24(r1)
	  lfs       f0, 0x28(r1)
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)

	.loc_0x150:
	  lfs       f2, 0x20(r1)
	  lfs       f5, 0x1C(r4)
	  lfs       f1, 0x24(r1)
	  lfs       f0, 0x28(r1)
	  fmuls     f4, f2, f5
	  fmuls     f3, f1, f5
	  lfs       f2, 0x30(r1)
	  fmuls     f1, f0, f5
	  lfs       f0, -0xE78(r2)
	  stfs      f4, 0x20(r1)
	  lwz       r3, -0x6CF8(r13)
	  stfs      f3, 0x24(r1)
	  stfs      f1, 0x28(r1)
	  lfs       f1, 0x24(r4)
	  mr        r4, r0
	  fadds     f1, f2, f1
	  stfs      f0, 0x14(r1)
	  stfs      f0, 0x1C(r1)
	  stfs      f1, 0x30(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x30(r1)
	  lfs       f0, -0xE78(r2)
	  fsubs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x1CC
	  lfs       f0, -0xE70(r2)
	  stfs      f0, 0x18(r1)
	  b         .loc_0x1D8

	.loc_0x1CC:
	  lfs       f0, -0xE6C(r2)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x18(r1)

	.loc_0x1D8:
	  lwz       r3, 0x1C(r31)
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x0(r3)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x10(r3)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x20(r3)
	  lwz       r3, 0x1C(r31)
	  lfs       f0, 0x14(r1)
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x18(r1)
	  stfs      f0, 0x14(r3)
	  lfs       f0, 0x1C(r1)
	  stfs      f0, 0x24(r3)
	  lwz       r3, 0x1C(r31)
	  lfs       f0, 0x20(r1)
	  stfs      f0, 0x8(r3)
	  lfs       f0, 0x24(r1)
	  stfs      f0, 0x18(r3)
	  lfs       f0, 0x28(r1)
	  stfs      f0, 0x28(r3)
	  lwz       r3, 0x1C(r31)
	  lfs       f0, 0x2C(r1)
	  stfs      f0, 0xC(r3)
	  lfs       f0, 0x30(r1)
	  stfs      f0, 0x1C(r3)
	  lfs       f0, 0x34(r1)
	  stfs      f0, 0x2C(r3)
	  lwz       r31, 0x3C(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80301C48
 * Size:	0000E4
 */
void Game::Tyre::TyreShadowMgr::__ct((Game::Tyre::Obj*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0xE74(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  stw       r31, 0xC(r3)
	  li        r3, 0x20
	  stfs      f0, 0x0(r30)
	  bl        -0x2DDDD0
	  mr.       r0, r3
	  beq-      .loc_0x44
	  mr        r4, r31
	  bl        -0xC0A08
	  mr        r0, r3

	.loc_0x44:
	  stw       r0, 0x10(r30)
	  li        r3, 0x24
	  bl        -0x2DDDF0
	  mr.       r31, r3
	  beq-      .loc_0x6C
	  li        r4, 0x2
	  bl        -0xC09C8
	  lis       r3, 0x804D
	  addi      r0, r3, 0x7AB0
	  stw       r0, 0x0(r31)

	.loc_0x6C:
	  stw       r31, 0x14(r30)
	  li        r0, 0x2
	  lwz       r3, 0x14(r30)
	  stw       r0, 0x18(r3)
	  lwz       r3, 0x10(r30)
	  lwz       r4, 0x14(r30)
	  bl        0x10F73C
	  li        r3, 0x24
	  bl        -0x2DDE30
	  mr.       r31, r3
	  beq-      .loc_0xAC
	  li        r4, 0x2
	  bl        -0xC0A08
	  lis       r3, 0x804D
	  addi      r0, r3, 0x7AB0
	  stw       r0, 0x0(r31)

	.loc_0xAC:
	  stw       r31, 0x18(r30)
	  li        r0, 0x2
	  lwz       r3, 0x18(r30)
	  stw       r0, 0x18(r3)
	  lwz       r3, 0x10(r30)
	  lwz       r4, 0x18(r30)
	  bl        0x10F6FC
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
 * Address:	80301D2C
 * Size:	000068
 */
void Game::Tyre::TyreShadowMgr::init(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lis       r3, 0x8049
	  lwz       r5, 0xC(r30)
	  subi      r4, r3, 0x2358
	  lwz       r31, 0x174(r5)
	  mr        r3, r31
	  bl        0x13D28C
	  bl        0x127B44
	  lis       r4, 0x8049
	  stw       r3, 0x4(r30)
	  subi      r4, r4, 0x234C
	  mr        r3, r31
	  bl        0x13D274
	  bl        0x127B2C
	  stw       r3, 0x8(r30)
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
 * Address:	80301D94
 * Size:	0000B4
 */
void Game::Tyre::TyreShadowMgr::update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  mr        r31, r3
	  addi      r3, r1, 0x8
	  lwz       r4, 0xC(r31)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f4, -0xE78(r2)
	  addi      r4, r1, 0x14
	  lfs       f2, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  lfs       f3, -0xE74(r2)
	  stfs      f2, 0x14(r1)
	  lfs       f2, -0xE68(r2)
	  stfs      f1, 0x18(r1)
	  lfs       f1, -0xE64(r2)
	  stfs      f0, 0x1C(r1)
	  lfs       f0, -0xE60(r2)
	  stfs      f4, 0x20(r1)
	  stfs      f3, 0x24(r1)
	  stfs      f4, 0x28(r1)
	  lfs       f3, 0x0(r31)
	  fmuls     f2, f2, f3
	  stfs      f4, 0x34(r1)
	  fmuls     f1, f1, f3
	  stfs      f0, 0x38(r1)
	  stfs      f2, 0x2C(r1)
	  stfs      f1, 0x30(r1)
	  lwz       r3, 0x14(r31)
	  lwz       r5, 0x4(r31)
	  bl        -0x434
	  lwz       r3, 0x18(r31)
	  addi      r4, r1, 0x14
	  lwz       r5, 0x8(r31)
	  bl        -0x444
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80301E48
 * Size:	000070
 */
void Game::TyreTubeShadowNode::__dt(void)
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
	  beq-      .loc_0x54
	  lis       r4, 0x804D
	  addi      r0, r4, 0x7AB0
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x44
	  lis       r5, 0x804C
	  li        r4, 0
	  addi      r0, r5, 0x1A34
	  stw       r0, 0x0(r30)
	  bl        0x10F700

	.loc_0x44:
	  extsh.    r0, r31
	  ble-      .loc_0x54
	  mr        r3, r30
	  bl        -0x2DDDE4

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

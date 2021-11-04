

/*
 * --INFO--
 * Address:	8028EB68
 * Size:	0001AC
 */
void Game::Queen::QueenShadowNode::makeShadowSRT()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  mr        r30, r3
	  lwz       r31, 0x1C(r3)
	  lwz       r3, 0x24(r3)
	  bl        0x19AD18
	  mr        r5, r31
	  addi      r4, r30, 0x28
	  bl        -0x1A4894
	  lwz       r3, 0x1C(r30)
	  addi      r4, r1, 0x2C
	  lfs       f1, -0x2A18(r2)
	  lfs       f0, 0x0(r3)
	  stfs      f0, 0x8(r1)
	  lfs       f0, 0x10(r3)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x20(r3)
	  stfs      f0, 0x10(r1)
	  lfs       f0, 0x4(r3)
	  stfs      f0, 0x14(r1)
	  lfs       f0, 0x14(r3)
	  stfs      f0, 0x18(r1)
	  lfs       f0, 0x24(r3)
	  stfs      f0, 0x1C(r1)
	  lfs       f3, 0x8(r3)
	  stfs      f3, 0x20(r1)
	  fmuls     f0, f3, f3
	  lfs       f2, 0x18(r3)
	  stfs      f2, 0x24(r1)
	  fmuls     f4, f2, f2
	  lfs       f2, 0x28(r3)
	  fadds     f0, f0, f4
	  stfs      f2, 0x28(r1)
	  fmuls     f5, f2, f2
	  lfs       f2, 0xC(r3)
	  fadds     f0, f5, f0
	  stfs      f2, 0x2C(r1)
	  lfs       f2, 0x1C(r3)
	  fcmpo     cr0, f0, f1
	  stfs      f2, 0x30(r1)
	  lfs       f0, 0x2C(r3)
	  stfs      f0, 0x34(r1)
	  ble-      .loc_0xD4
	  fmadds    f0, f3, f3, f4
	  fadds     f2, f5, f0
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0xD8
	  fsqrte    f0, f2
	  fmuls     f2, f0, f2
	  b         .loc_0xD8

	.loc_0xD4:
	  fmr       f2, f1

	.loc_0xD8:
	  lfs       f1, -0x2A18(r2)
	  lfs       f0, -0x2A14(r2)
	  stfs      f2, 0x8(r1)
	  lwz       r3, -0x6CF8(r13)
	  stfs      f1, 0xC(r1)
	  stfs      f1, 0x10(r1)
	  stfs      f1, 0x14(r1)
	  stfs      f0, 0x18(r1)
	  stfs      f1, 0x1C(r1)
	  stfs      f1, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f2, 0x28(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, -0x2A10(r2)
	  lfs       f0, 0x8(r1)
	  fadds     f1, f2, f1
	  stfs      f1, 0x30(r1)
	  lwz       r3, 0x1C(r30)
	  stfs      f0, 0x0(r3)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x10(r3)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x20(r3)
	  lwz       r3, 0x1C(r30)
	  lfs       f0, 0x14(r1)
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x18(r1)
	  stfs      f0, 0x14(r3)
	  lfs       f0, 0x1C(r1)
	  stfs      f0, 0x24(r3)
	  lwz       r3, 0x1C(r30)
	  lfs       f0, 0x20(r1)
	  stfs      f0, 0x8(r3)
	  lfs       f0, 0x24(r1)
	  stfs      f0, 0x18(r3)
	  lfs       f0, 0x28(r1)
	  stfs      f0, 0x28(r3)
	  lwz       r3, 0x1C(r30)
	  lfs       f0, 0x2C(r1)
	  stfs      f0, 0xC(r3)
	  lfs       f0, 0x30(r1)
	  stfs      f0, 0x1C(r3)
	  lfs       f0, 0x34(r1)
	  stfs      f0, 0x2C(r3)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028ED14
 * Size:	0000B4
 */
void Game::Queen::QueenShadowMgr::QueenShadowMgr(Game::Queen::Obj*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r28, r4
	  mr        r27, r3
	  stw       r28, 0x0(r3)
	  li        r3, 0x20
	  bl        -0x26AE90
	  mr.       r0, r3
	  beq-      .loc_0x38
	  mr        r4, r28
	  bl        -0x4DAC8
	  mr        r0, r3

	.loc_0x38:
	  stw       r0, 0x4(r27)
	  li        r3, 0x18
	  bl        -0x26ADA8
	  lis       r4, 0x804D
	  stw       r3, 0x8(r27)
	  subi      r31, r4, 0x52F8
	  li        r28, 0
	  li        r29, 0

	.loc_0x58:
	  li        r3, 0x58
	  bl        -0x26AECC
	  mr.       r30, r3
	  beq-      .loc_0x74
	  li        r4, 0x2
	  bl        -0x4DAA4
	  stw       r31, 0x0(r30)

	.loc_0x74:
	  lwz       r3, 0x8(r27)
	  stwx      r30, r3, r29
	  lwz       r4, 0x8(r27)
	  lwz       r3, 0x4(r27)
	  lwzx      r4, r4, r29
	  bl        0x18266C
	  addi      r28, r28, 0x1
	  addi      r29, r29, 0x4
	  cmpwi     r28, 0x6
	  blt+      .loc_0x58
	  mr        r3, r27
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028EDC8
 * Size:	0002A4
 */
void Game::Queen::QueenShadowMgr::init()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lfs       f2, -0x2A18(r2)
	  subi      r4, r2, 0x2A00
	  stw       r0, 0x44(r1)
	  lfs       f3, -0x2A0C(r2)
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  lfs       f1, -0x2A08(r2)
	  lfs       f0, -0x2A04(r2)
	  stfs      f3, 0x8(r1)
	  stfs      f2, 0x18(r1)
	  stfs      f2, 0x28(r1)
	  stfs      f2, 0xC(r1)
	  stfs      f1, 0x1C(r1)
	  stfs      f2, 0x2C(r1)
	  stfs      f2, 0x10(r1)
	  stfs      f2, 0x20(r1)
	  stfs      f3, 0x30(r1)
	  stfs      f2, 0x14(r1)
	  stfs      f0, 0x24(r1)
	  stfs      f2, 0x34(r1)
	  lwz       r3, 0x0(r3)
	  lwz       r3, 0x174(r3)
	  bl        0x1B01BC
	  lwz       r4, 0x8(r31)
	  lwz       r4, 0x0(r4)
	  stw       r3, 0x24(r4)
	  addi      r3, r1, 0x8
	  addi      r4, r4, 0x28
	  bl        -0x1A4B74
	  lfs       f3, -0x2A18(r2)
	  subi      r4, r2, 0x29EC
	  lfs       f4, -0x29F8(r2)
	  lfs       f2, -0x29F4(r2)
	  lfs       f1, -0x29F0(r2)
	  lfs       f0, -0x2A04(r2)
	  stfs      f4, 0x8(r1)
	  stfs      f3, 0x18(r1)
	  stfs      f3, 0x28(r1)
	  stfs      f3, 0xC(r1)
	  stfs      f2, 0x1C(r1)
	  stfs      f3, 0x2C(r1)
	  stfs      f3, 0x10(r1)
	  stfs      f3, 0x20(r1)
	  stfs      f4, 0x30(r1)
	  stfs      f1, 0x14(r1)
	  stfs      f0, 0x24(r1)
	  stfs      f3, 0x34(r1)
	  lwz       r3, 0x0(r31)
	  lwz       r3, 0x174(r3)
	  bl        0x1B0150
	  lwz       r4, 0x8(r31)
	  lwz       r4, 0x4(r4)
	  stw       r3, 0x24(r4)
	  addi      r3, r1, 0x8
	  addi      r4, r4, 0x28
	  bl        -0x1A4BE0
	  lfs       f3, -0x2A18(r2)
	  subi      r4, r2, 0x29D8
	  lfs       f4, -0x29E4(r2)
	  lfs       f2, -0x29E0(r2)
	  lfs       f1, -0x29DC(r2)
	  lfs       f0, -0x2A04(r2)
	  stfs      f4, 0x8(r1)
	  stfs      f3, 0x18(r1)
	  stfs      f3, 0x28(r1)
	  stfs      f3, 0xC(r1)
	  stfs      f2, 0x1C(r1)
	  stfs      f3, 0x2C(r1)
	  stfs      f3, 0x10(r1)
	  stfs      f3, 0x20(r1)
	  stfs      f4, 0x30(r1)
	  stfs      f1, 0x14(r1)
	  stfs      f0, 0x24(r1)
	  stfs      f3, 0x34(r1)
	  lwz       r3, 0x0(r31)
	  lwz       r3, 0x174(r3)
	  bl        0x1B00E4
	  lwz       r4, 0x8(r31)
	  lwz       r4, 0x8(r4)
	  stw       r3, 0x24(r4)
	  addi      r3, r1, 0x8
	  addi      r4, r4, 0x28
	  bl        -0x1A4C4C
	  lfs       f1, -0x2A18(r2)
	  subi      r4, r2, 0x29CC
	  lfs       f2, -0x29D0(r2)
	  lfs       f0, -0x2A04(r2)
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f1, 0x28(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f2, 0x1C(r1)
	  stfs      f1, 0x2C(r1)
	  stfs      f1, 0x10(r1)
	  stfs      f1, 0x20(r1)
	  stfs      f2, 0x30(r1)
	  stfs      f1, 0x14(r1)
	  stfs      f0, 0x24(r1)
	  stfs      f1, 0x34(r1)
	  lwz       r3, 0x0(r31)
	  lwz       r3, 0x174(r3)
	  bl        0x1B0080
	  lwz       r4, 0x8(r31)
	  lwz       r4, 0xC(r4)
	  stw       r3, 0x24(r4)
	  addi      r3, r1, 0x8
	  addi      r4, r4, 0x28
	  bl        -0x1A4CB0
	  lfs       f3, -0x2A18(r2)
	  subi      r4, r2, 0x29B8
	  lfs       f4, -0x29C4(r2)
	  lfs       f2, -0x29C0(r2)
	  lfs       f1, -0x29BC(r2)
	  lfs       f0, -0x2A04(r2)
	  stfs      f4, 0x8(r1)
	  stfs      f3, 0x18(r1)
	  stfs      f3, 0x28(r1)
	  stfs      f3, 0xC(r1)
	  stfs      f2, 0x1C(r1)
	  stfs      f3, 0x2C(r1)
	  stfs      f3, 0x10(r1)
	  stfs      f3, 0x20(r1)
	  stfs      f4, 0x30(r1)
	  stfs      f1, 0x14(r1)
	  stfs      f0, 0x24(r1)
	  stfs      f3, 0x34(r1)
	  lwz       r3, 0x0(r31)
	  lwz       r3, 0x174(r3)
	  bl        0x1B0014
	  lwz       r4, 0x8(r31)
	  lwz       r4, 0x10(r4)
	  stw       r3, 0x24(r4)
	  addi      r3, r1, 0x8
	  addi      r4, r4, 0x28
	  bl        -0x1A4D1C
	  lfs       f3, -0x2A18(r2)
	  subi      r4, r2, 0x29A4
	  lfs       f4, -0x29B0(r2)
	  lfs       f2, -0x29AC(r2)
	  lfs       f1, -0x29A8(r2)
	  lfs       f0, -0x2A04(r2)
	  stfs      f4, 0x8(r1)
	  stfs      f3, 0x18(r1)
	  stfs      f3, 0x28(r1)
	  stfs      f3, 0xC(r1)
	  stfs      f2, 0x1C(r1)
	  stfs      f3, 0x2C(r1)
	  stfs      f3, 0x10(r1)
	  stfs      f3, 0x20(r1)
	  stfs      f4, 0x30(r1)
	  stfs      f1, 0x14(r1)
	  stfs      f0, 0x24(r1)
	  stfs      f3, 0x34(r1)
	  lwz       r3, 0x0(r31)
	  lwz       r3, 0x174(r3)
	  bl        0x1AFFA8
	  lwz       r4, 0x8(r31)
	  lwz       r4, 0x14(r4)
	  stw       r3, 0x24(r4)
	  addi      r3, r1, 0x8
	  addi      r4, r4, 0x28
	  bl        -0x1A4D88
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028F06C
 * Size:	00005C
 */
void Game::Queen::QueenShadowMgr::update()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r3

	.loc_0x24:
	  lwz       r3, 0x8(r29)
	  lwzx      r3, r3, r31
	  bl        -0x530
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r30, 0x6
	  blt+      .loc_0x24
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
 * Address:	8028F0C8
 * Size:	000070
 */
void Game::Queen::QueenShadowNode::~QueenShadowNode()
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
	  subi      r0, r4, 0x52F8
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x44
	  lis       r5, 0x804C
	  li        r4, 0
	  addi      r0, r5, 0x1A34
	  stw       r0, 0x0(r30)
	  bl        0x182480

	.loc_0x44:
	  extsh.    r0, r31
	  ble-      .loc_0x54
	  mr        r3, r30
	  bl        -0x26B064

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

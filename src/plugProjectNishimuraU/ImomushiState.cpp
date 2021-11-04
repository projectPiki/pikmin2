

/*
 * --INFO--
 * Address:	802BA0D8
 * Size:	0004D4
 */
void Game::Imomushi::FSM::init(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8049
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  subi      r30, r4, 0x5750
	  li        r4, 0xE
	  bl        -0x189898
	  li        r3, 0x10
	  bl        -0x296260
	  mr.       r4, r3
	  beq-      .loc_0x70
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r7, 0
	  addi      r6, r5, 0x798
	  subi      r5, r2, 0x2030
	  stw       r7, 0x4(r4)
	  addi      r0, r3, 0x774
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x70:
	  mr        r3, r31
	  bl        -0x189844
	  li        r3, 0x10
	  bl        -0x2962B0
	  mr.       r4, r3
	  beq-      .loc_0xC4
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x2
	  li        r7, 0
	  addi      r6, r5, 0x798
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x14
	  addi      r0, r3, 0x750
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0xC4:
	  mr        r3, r31
	  bl        -0x189898
	  li        r3, 0x10
	  bl        -0x296304
	  mr.       r4, r3
	  beq-      .loc_0x118
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x3
	  li        r7, 0
	  addi      r6, r5, 0x798
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x20
	  addi      r0, r3, 0x72C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x118:
	  mr        r3, r31
	  bl        -0x1898EC
	  li        r3, 0x10
	  bl        -0x296358
	  mr.       r4, r3
	  beq-      .loc_0x16C
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x4
	  li        r7, 0
	  addi      r6, r5, 0x798
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2028
	  addi      r0, r3, 0x708
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x16C:
	  mr        r3, r31
	  bl        -0x189940
	  li        r3, 0x10
	  bl        -0x2963AC
	  mr.       r4, r3
	  beq-      .loc_0x1C0
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x5
	  li        r7, 0
	  addi      r6, r5, 0x798
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2020
	  addi      r0, r3, 0x6E4
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x1C0:
	  mr        r3, r31
	  bl        -0x189994
	  li        r3, 0x10
	  bl        -0x296400
	  mr.       r4, r3
	  beq-      .loc_0x214
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x6
	  li        r7, 0
	  addi      r6, r5, 0x798
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2018
	  addi      r0, r3, 0x6C0
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x214:
	  mr        r3, r31
	  bl        -0x1899E8
	  li        r3, 0x10
	  bl        -0x296454
	  mr.       r4, r3
	  beq-      .loc_0x268
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x7
	  li        r7, 0
	  addi      r6, r5, 0x798
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2010
	  addi      r0, r3, 0x69C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x268:
	  mr        r3, r31
	  bl        -0x189A3C
	  li        r3, 0x10
	  bl        -0x2964A8
	  mr.       r4, r3
	  beq-      .loc_0x2BC
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x8
	  li        r7, 0
	  addi      r6, r5, 0x798
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2008
	  addi      r0, r3, 0x678
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x2BC:
	  mr        r3, r31
	  bl        -0x189A90
	  li        r3, 0x10
	  bl        -0x2964FC
	  mr.       r4, r3
	  beq-      .loc_0x310
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0xA
	  li        r7, 0
	  addi      r6, r5, 0x798
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2000
	  addi      r0, r3, 0x654
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x310:
	  mr        r3, r31
	  bl        -0x189AE4
	  li        r3, 0x10
	  bl        -0x296550
	  mr.       r4, r3
	  beq-      .loc_0x364
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x9
	  li        r7, 0
	  addi      r6, r5, 0x798
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1FF8
	  addi      r0, r3, 0x630
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x364:
	  mr        r3, r31
	  bl        -0x189B38
	  li        r3, 0x10
	  bl        -0x2965A4
	  mr.       r4, r3
	  beq-      .loc_0x3B8
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x1
	  li        r7, 0
	  addi      r6, r5, 0x798
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1FF0
	  addi      r0, r3, 0x60C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x3B8:
	  mr        r3, r31
	  bl        -0x189B8C
	  li        r3, 0x10
	  bl        -0x2965F8
	  mr.       r4, r3
	  beq-      .loc_0x40C
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0xB
	  li        r7, 0
	  addi      r6, r5, 0x798
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x2C
	  addi      r0, r3, 0x5E8
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x40C:
	  mr        r3, r31
	  bl        -0x189BE0
	  li        r3, 0x10
	  bl        -0x29664C
	  mr.       r4, r3
	  beq-      .loc_0x460
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0xC
	  li        r7, 0
	  addi      r6, r5, 0x798
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x38
	  addi      r0, r3, 0x5C4
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x460:
	  mr        r3, r31
	  bl        -0x189C34
	  li        r3, 0x10
	  bl        -0x2966A0
	  mr.       r4, r3
	  beq-      .loc_0x4B4
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0xD
	  li        r7, 0
	  addi      r6, r5, 0x798
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x44
	  addi      r0, r3, 0x5A0
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x4B4:
	  mr        r3, r31
	  bl        -0x189C88
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
 * Address:	802BA5AC
 * Size:	000050
 */
void Game::Imomushi::StateDead::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x1B4EA4
	  lfs       f0, -0x1FE8(r2)
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1B55E0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BA5FC
 * Size:	000044
 */
void Game::Imomushi::StateDead::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x188(r4)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x34
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x34
	  mr        r3, r4
	  li        r4, 0
	  bl        -0x17F53C

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BA640
 * Size:	000004
 */
void Game::Imomushi::StateDead::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BA644
 * Size:	00004C
 */
void Game::Imomushi::StateFallDive::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, -0x1
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  lfs       f0, -0x1FE8(r2)
	  stw       r5, 0x2C4(r4)
	  li        r4, 0x6
	  li        r5, 0
	  stw       r0, 0x230(r3)
	  stfs      f0, 0x1D4(r3)
	  stfs      f0, 0x1D8(r3)
	  stfs      f0, 0x1DC(r3)
	  bl        -0x1B5678
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BA690
 * Size:	000140
 */
void Game::Imomushi::StateFallDive::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  lwz       r12, 0x0(r4)
	  mr        r30, r3
	  addi      r3, r1, 0x14
	  mr        r31, r4
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lfs       f31, 0x18(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r4, r1, 0x20
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x20(r1)
	  lwz       r3, -0x6CF8(r13)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x1FE8(r2)
	  fcmpo     cr0, f31, f0
	  bgt-      .loc_0xA4
	  lfs       f2, 0x24(r1)
	  lfs       f0, -0x1FE4(r2)
	  fsubs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xAC

	.loc_0xA4:
	  mr        r3, r31
	  bl        -0x1B5498

	.loc_0xAC:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x120
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x120
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x1FE8(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x100
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x120

	.loc_0x100:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x8
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x120:
	  psq_l     f31,0x48(r1),0,0
	  lwz       r0, 0x54(r1)
	  lfd       f31, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BA7D0
 * Size:	000004
 */
void Game::Imomushi::StateFallDive::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BA7D4
 * Size:	00004C
 */
void Game::Imomushi::StateFallMove::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, -0x1
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  lfs       f0, -0x1FE8(r2)
	  stw       r5, 0x2C4(r4)
	  li        r4, 0x5
	  li        r5, 0
	  stw       r0, 0x230(r3)
	  stfs      f0, 0x1D4(r3)
	  stfs      f0, 0x1D8(r3)
	  stfs      f0, 0x1DC(r3)
	  bl        -0x1B5808
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BA820
 * Size:	000178
 */
void Game::Imomushi::StateFallMove::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  lwz       r12, 0x0(r4)
	  mr        r30, r3
	  addi      r3, r1, 0x14
	  mr        r31, r4
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lfs       f31, 0x18(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r4, r1, 0x20
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x20(r1)
	  lwz       r3, -0x6CF8(r13)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x1FE8(r2)
	  fcmpo     cr0, f31, f0
	  bgt-      .loc_0xA4
	  lfs       f2, 0x24(r1)
	  lfs       f0, -0x1FE4(r2)
	  fsubs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xAC

	.loc_0xA4:
	  mr        r3, r31
	  bl        -0x1B5628

	.loc_0xAC:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x158
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x158
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x1FE8(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x100
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x158

	.loc_0x100:
	  mr        r3, r31
	  bl        0x2488
	  cmplwi    r3, 0
	  stw       r3, 0x230(r31)
	  beq-      .loc_0x138
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x7
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x158

	.loc_0x138:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x8
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x158:
	  psq_l     f31,0x48(r1),0,0
	  lwz       r0, 0x54(r1)
	  lfd       f31, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BA998
 * Size:	000004
 */
void Game::Imomushi::StateFallMove::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BA99C
 * Size:	0000C8
 */
void Game::Imomushi::StateStay::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  mr        r0, r4
	  li        r4, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r0
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x1E0(r31)
	  li        r0, 0x1
	  mr        r3, r31
	  ori       r4, r4, 0x1
	  stw       r4, 0x1E0(r31)
	  stb       r0, 0x2C0(r31)
	  lwz       r0, 0x1E0(r31)
	  oris      r0, r0, 0x40
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x2000
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,21,19
	  stw       r0, 0x1E0(r31)
	  bl        -0x1B328C
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x1FE8(r2)
	  li        r4, 0x1
	  rlwinm    r0,r0,0,17,15
	  li        r5, 0
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  oris      r0, r0, 0x4000
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  stfs      f0, 0x2C8(r31)
	  bl        -0x1B5A40
	  mr        r3, r31
	  bl        -0x1B376C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BAA64
 * Size:	0000A8
 */
void Game::Imomushi::StateStay::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x1FE0(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r5, -0x6514(r13)
	  lfs       f2, 0x2C8(r4)
	  lfs       f1, 0x54(r5)
	  fadds     f1, f2, f1
	  stfs      f1, 0x2C8(r4)
	  lfs       f1, 0x2C8(r4)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x90
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  li        r4, 0
	  lfs       f1, 0x3AC(r5)
	  bl        -0x1A6380
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x90
	  mr        r3, r31
	  bl        0x22E8
	  cmplwi    r3, 0
	  stw       r3, 0x230(r31)
	  beq-      .loc_0x90
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x90:
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
 * Address:	802BAB0C
 * Size:	000090
 */
void Game::Imomushi::StateStay::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  mr        r0, r4
	  li        r4, 0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r0
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x1E0(r31)
	  li        r0, 0
	  mr        r3, r31
	  rlwinm    r4,r4,0,0,30
	  stw       r4, 0x1E0(r31)
	  stb       r0, 0x2C0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,10,8
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,19,17
	  stw       r0, 0x1E0(r31)
	  bl        -0x1B33D8
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x8000
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,2,0
	  stw       r0, 0x1E0(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BAB9C
 * Size:	000080
 */
void Game::Imomushi::StateAppear::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        0x20FC
	  mr        r3, r31
	  bl        -0x1B3440
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x1FE8(r2)
	  oris      r0, r0, 0x20
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x800
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1B9220
	  mr        r3, r31
	  li        r4, 0x1
	  li        r5, 0
	  bl        -0x1B5BF8
	  mr        r3, r31
	  bl        0x2C1C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BAC1C
 * Size:	0000D8
 */
void Game::Imomushi::StateAppear::exec(Game::EnemyBase*)
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
	  lwz       r5, 0x188(r4)
	  lbz       r0, 0x24(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0xC0
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xC0
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x1FE8(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x68
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xC0

	.loc_0x68:
	  mr        r3, r31
	  bl        0x2124
	  cmplwi    r3, 0
	  stw       r3, 0x230(r31)
	  beq-      .loc_0xA0
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x7
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xC0

	.loc_0xA0:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xC0:
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
 * Address:	802BACF4
 * Size:	00003C
 */
void Game::Imomushi::StateAppear::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x1B3578
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BAD30
 * Size:	000074
 */
void Game::Imomushi::StateDive::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x1B35CC
	  lwz       r4, 0x1E0(r31)
	  li        r0, 0
	  lfs       f0, -0x1FE8(r2)
	  mr        r3, r31
	  oris      r4, r4, 0x40
	  stw       r4, 0x1E0(r31)
	  stw       r0, 0x230(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1B93F8
	  mr        r3, r31
	  li        r4, 0x2
	  li        r5, 0
	  bl        -0x1B5D80
	  mr        r3, r31
	  bl        0x2B20
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BADA4
 * Size:	000050
 */
void Game::Imomushi::StateDive::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r5, 0x188(r4)
	  lbz       r0, 0x24(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x40
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x40
	  lwz       r12, 0x0(r3)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x40:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BADF4
 * Size:	00003C
 */
void Game::Imomushi::StateDive::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x1B3678
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,10,8
	  stw       r0, 0x1E0(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BAE30
 * Size:	000048
 */
void Game::Imomushi::StateMove::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0x3
	  stw       r0, 0x2C4(r31)
	  mr        r3, r31
	  bl        -0x1B5E54
	  mr        r3, r31
	  bl        0x2AD8
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BAE78
 * Size:	000238
 */
void Game::Imomushi::StateMove::exec(Game::EnemyBase*)
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
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  stw       r29, 0x34(r1)
	  lfs       f0, -0x1FE8(r2)
	  mr        r30, r4
	  lfs       f1, 0x200(r4)
	  mr        r29, r3
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x60
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x20C

	.loc_0x60:
	  lwz       r31, 0x230(r30)
	  cmplwi    r31, 0
	  beq-      .loc_0x154
	  mr        r3, r30
	  bl        -0x1B3BE8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x90
	  lfs       f0, -0x1FE8(r2)
	  stfs      f0, 0x1D4(r30)
	  stfs      f0, 0x1D8(r30)
	  stfs      f0, 0x1DC(r30)
	  b         .loc_0x164

	.loc_0x90:
	  mr        r4, r30
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lfs       f31, 0x14(r1)
	  lwz       r12, 0x8(r12)
	  lfs       f30, 0x1C(r1)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  mr        r3, r30
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  bl        0x24CC
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x100
	  mr        r3, r30
	  bl        0x1E40
	  stw       r3, 0x230(r30)
	  b         .loc_0x134

	.loc_0x100:
	  lfs       f0, 0x28(r1)
	  lfs       f1, 0x20(r1)
	  fsubs     f2, f30, f0
	  lfs       f0, -0x1FDC(r2)
	  fsubs     f3, f31, f1
	  fmuls     f1, f2, f2
	  fmadds    f1, f3, f3, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x134
	  li        r0, 0xA
	  mr        r3, r30
	  stw       r0, 0x2C4(r30)
	  bl        -0x1B5D08

	.loc_0x134:
	  lwz       r5, 0xC0(r30)
	  mr        r3, r30
	  addi      r4, r1, 0x20
	  lfs       f1, 0x2E4(r5)
	  lfs       f2, 0x30C(r5)
	  lfs       f3, 0x334(r5)
	  bl        -0x1A59E8
	  b         .loc_0x164

	.loc_0x154:
	  li        r0, 0x8
	  mr        r3, r30
	  stw       r0, 0x2C4(r30)
	  bl        -0x1B5D38

	.loc_0x164:
	  lwz       r3, 0x188(r30)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x20C
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x20C
	  lwz       r5, 0x2C4(r30)
	  cmpwi     r5, 0xA
	  bne-      .loc_0x1F0
	  mr        r3, r30
	  bl        0x2420
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1C0
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  li        r5, 0xA
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x20C

	.loc_0x1C0:
	  mr        r3, r30
	  bl        0x1D70
	  stw       r3, 0x230(r30)
	  mr        r3, r29
	  mr        r4, r30
	  li        r5, 0x7
	  lwz       r12, 0x0(r29)
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x20C

	.loc_0x1F0:
	  lwz       r12, 0x0(r29)
	  mr        r3, r29
	  mr        r4, r30
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x20C:
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  psq_l     f30,0x48(r1),0,0
	  lfd       f30, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r0, 0x64(r1)
	  lwz       r29, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BB0B0
 * Size:	000024
 */
void Game::Imomushi::StateMove::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        0x28FC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BB0D4
 * Size:	000048
 */
void Game::Imomushi::StateGoHome::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0x3
	  stw       r0, 0x2C4(r31)
	  mr        r3, r31
	  bl        -0x1B60F8
	  mr        r3, r31
	  bl        0x2834
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BB11C
 * Size:	00014C
 */
void Game::Imomushi::StateGoHome::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lfs       f0, -0x1FE8(r2)
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  lfs       f1, 0x200(r4)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x4C
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x134

	.loc_0x4C:
	  mr        r3, r31
	  bl        -0x1B3E6C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x70
	  lfs       f0, -0x1FE8(r2)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  b         .loc_0xF8

	.loc_0x70:
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x10(r1)
	  lfs       f4, 0x1A0(r31)
	  lfs       f3, 0x19C(r31)
	  lfs       f1, 0x198(r31)
	  fsubs     f2, f0, f4
	  lfs       f0, 0x8(r1)
	  stfs      f1, 0x14(r1)
	  fsubs     f1, f0, f1
	  fmuls     f0, f2, f2
	  stfs      f3, 0x18(r1)
	  stfs      f4, 0x1C(r1)
	  fmadds    f1, f1, f1, f0
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x384(r3)
	  fmuls     f0, f0, f0
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xDC
	  li        r0, 0x6
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x1B5F54

	.loc_0xDC:
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  addi      r4, r1, 0x14
	  lfs       f1, 0x2E4(r5)
	  lfs       f2, 0x30C(r5)
	  lfs       f3, 0x334(r5)
	  bl        -0x1A5C34

	.loc_0xF8:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x134
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x134
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C4(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x134:
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
 * Address:	802BB268
 * Size:	000024
 */
void Game::Imomushi::StateGoHome::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        0x2744
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BB28C
 * Size:	00014C
 */
void Game::Imomushi::StateClimb::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  li        r0, -0x1
	  addi      r3, r1, 0x8
	  stw       r31, 0x3C(r1)
	  mr        r31, r4
	  stw       r0, 0x2C4(r4)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x8(r1)
	  mr        r3, r31
	  lfs       f2, 0x10(r1)
	  bl        0x1AC8
	  lwz       r4, 0x230(r31)
	  mr        r3, r31
	  lwz       r4, 0x114(r4)
	  lwz       r4, 0x0(r4)
	  lwz       r4, 0x10(r4)
	  bl        0x1DE8
	  lfs       f0, -0x1FE8(r2)
	  mr        r3, r31
	  li        r4, 0x4
	  li        r5, 0
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1B62FC
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  lfs       f0, -0x1FE8(r2)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0xA0
	  fneg      f2, f2

	.loc_0xA0:
	  lfs       f3, -0x1FD8(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x1FE8(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f2, f2, f3
	  fcmpo     cr0, f1, f0
	  fctiwz    f0, f2
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f4, 0x4(r3)
	  bge-      .loc_0xF8
	  lfs       f0, -0x1FD4(r2)
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f0, f0
	  b         .loc_0x110

	.loc_0xF8:
	  fmuls     f0, f1, f3
	  fctiwz    f0, f0
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0

	.loc_0x110:
	  stfs      f0, 0x2D8(r31)
	  fneg      f2, f0
	  lfs       f3, -0x1FD0(r2)
	  fneg      f0, f4
	  lfs       f1, -0x1FE8(r2)
	  stfs      f3, 0x2DC(r31)
	  stfs      f4, 0x2E0(r31)
	  stfs      f2, 0x2E4(r31)
	  stfs      f1, 0x2E8(r31)
	  stfs      f0, 0x2EC(r31)
	  lwz       r31, 0x3C(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BB3D8
 * Size:	000170
 */
void Game::Imomushi::StateClimb::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x1FE8(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lfs       f1, 0x200(r4)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x4C
	  lwz       r12, 0x0(r3)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x158

	.loc_0x4C:
	  mr        r3, r31
	  bl        0x2074
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x80
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x158

	.loc_0x80:
	  mr        r3, r31
	  bl        -0x1B415C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x11C
	  mr        r3, r31
	  bl        0x1D24
	  lfs       f1, 0x2FC(r31)
	  lfs       f0, -0x1FCC(r2)
	  lfs       f2, 0x108(r31)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0xEC
	  lwz       r3, 0xF8(r31)
	  lwz       r4, 0x10(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0xD8
	  lbz       r0, 0x58(r4)
	  cmplwi    r0, 0x2
	  bne-      .loc_0xD8
	  mr        r3, r31
	  bl        0x1C20
	  b         .loc_0x11C

	.loc_0xD8:
	  li        r0, 0x9
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x1B621C
	  b         .loc_0x11C

	.loc_0xEC:
	  fneg      f0, f1
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x11C
	  lwz       r3, 0xF8(r31)
	  lwz       r4, 0xC(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x11C
	  lbz       r0, 0x58(r4)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x11C
	  mr        r3, r31
	  bl        0x1BD8

	.loc_0x11C:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x158
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x158
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C4(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x158:
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
 * Address:	802BB548
 * Size:	000024
 */
void Game::Imomushi::StateClimb::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x11C134
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BB56C
 * Size:	00009C
 */
void Game::Imomushi::StateAttack::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f0, -0x1FE8(r2)
	  lis       r3, 0x746F
	  stw       r0, 0x24(r1)
	  li        r0, -0x1
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  stw       r0, 0x2C4(r4)
	  addi      r4, r3, 0x7073
	  stfs      f0, 0x2C8(r30)
	  lwz       r31, 0x230(r30)
	  lwz       r3, 0x114(r31)
	  bl        -0x185764
	  mr        r0, r3
	  mr        r3, r30
	  mr        r29, r0
	  bl        -0x11C194
	  mr        r3, r30
	  mr        r4, r31
	  mr        r5, r29
	  bl        -0x11C6D4
	  lfs       f0, -0x1FE8(r2)
	  mr        r3, r30
	  li        r4, 0x7
	  li        r5, 0
	  stfs      f0, 0x1D4(r30)
	  stfs      f0, 0x1D8(r30)
	  stfs      f0, 0x1DC(r30)
	  bl        -0x1B65E4
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
 * Address:	802BB608
 * Size:	00015C
 */
void Game::Imomushi::StateAttack::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x1FE8(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lfs       f1, 0x200(r4)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x4C
	  lwz       r12, 0x0(r3)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x144

	.loc_0x4C:
	  mr        r3, r31
	  bl        0x1E44
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x80
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x144

	.loc_0x80:
	  mr        r3, r31
	  bl        -0x1B438C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xE0
	  mr        r3, r31
	  bl        0x1B24
	  mr        r3, r31
	  bl        0x1D84
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xE0
	  mr        r3, r31
	  bl        0x16F8
	  cmplwi    r3, 0
	  beq-      .loc_0xD0
	  stw       r3, 0x230(r31)
	  li        r0, 0x3
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x1B6430
	  b         .loc_0xE0

	.loc_0xD0:
	  li        r0, 0x1
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x1B6444

	.loc_0xE0:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C8(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C8(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x144
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x11C
	  mr        r3, r31
	  bl        0x1B70
	  b         .loc_0x144

	.loc_0x11C:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x144
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C4(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x144:
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
 * Address:	802BB764
 * Size:	000024
 */
void Game::Imomushi::StateAttack::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x11C350
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BB788
 * Size:	000094
 */
void Game::Imomushi::StateWait::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r3, 0x746F
	  stw       r0, 0x24(r1)
	  li        r0, -0x1
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  stw       r0, 0x2C4(r4)
	  addi      r4, r3, 0x7073
	  lwz       r31, 0x230(r30)
	  lwz       r3, 0x114(r31)
	  bl        -0x185978
	  mr        r0, r3
	  mr        r3, r30
	  mr        r29, r0
	  bl        -0x11C3A8
	  mr        r3, r30
	  mr        r4, r31
	  mr        r5, r29
	  bl        -0x11C8E8
	  lfs       f0, -0x1FE8(r2)
	  mr        r3, r30
	  li        r4, 0x4
	  li        r5, 0
	  stfs      f0, 0x1D4(r30)
	  stfs      f0, 0x1D8(r30)
	  stfs      f0, 0x1DC(r30)
	  bl        -0x1B67F8
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
 * Address:	802BB81C
 * Size:	000138
 */
void Game::Imomushi::StateWait::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f0, -0x1FE8(r2)
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lfs       f1, 0x200(r4)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x11C

	.loc_0x50:
	  mr        r3, r30
	  bl        0x1C2C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x84
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x11C

	.loc_0x84:
	  mr        r3, r30
	  bl        -0x1B45A4
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xE0
	  mr        r3, r30
	  bl        0x190C
	  lwz       r31, 0xF4(r30)
	  mr        r3, r30
	  bl        0x14EC
	  cmplwi    r3, 0
	  beq-      .loc_0xE0
	  cmplw     r31, r3
	  stw       r3, 0x230(r30)
	  bne-      .loc_0xD0
	  li        r0, 0x9
	  mr        r3, r30
	  stw       r0, 0x2C4(r30)
	  bl        -0x1B6644
	  b         .loc_0xE0

	.loc_0xD0:
	  li        r0, 0x3
	  mr        r3, r30
	  stw       r0, 0x2C4(r30)
	  bl        -0x1B6658

	.loc_0xE0:
	  lwz       r3, 0x188(r30)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x11C
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x11C
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  li        r6, 0
	  lwz       r5, 0x2C4(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x11C:
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
 * Address:	802BB954
 * Size:	000024
 */
void Game::Imomushi::StateWait::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x11C540
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BB978
 * Size:	00006C
 */
void Game::Imomushi::StateZukanStay::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        0x1344
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  oris      r0, r0, 0x40
	  stw       r0, 0x1E0(r31)
	  bl        -0x1B4228
	  lfs       f0, -0x1FE8(r2)
	  mr        r3, r31
	  li        r4, 0x1
	  li        r5, 0
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1B69C0
	  mr        r3, r31
	  bl        -0x1B46EC
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BB9E4
 * Size:	000058
 */
void Game::Imomushi::StateZukanStay::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x1FC8(r2)
	  stw       r0, 0x14(r1)
	  lwz       r5, -0x6514(r13)
	  lfs       f2, 0x2C8(r4)
	  lfs       f1, 0x54(r5)
	  fadds     f1, f2, f1
	  stfs      f1, 0x2C8(r4)
	  lfs       f1, 0x2C8(r4)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  li        r5, 0xC
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BBA3C
 * Size:	000030
 */
void Game::Imomushi::StateZukanStay::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,10,8
	  stw       r0, 0x1E0(r4)
	  bl        -0x1B42C4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BBA6C
 * Size:	00005C
 */
void Game::Imomushi::StateZukanAppear::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x1FE8(r2)
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0x1
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  oris      r0, r0, 0x20
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1B6AA4
	  mr        r3, r31
	  bl        0x1D70
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BBAC8
 * Size:	000050
 */
void Game::Imomushi::StateZukanAppear::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r5, 0x188(r4)
	  lbz       r0, 0x24(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x40
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x40
	  lwz       r12, 0x0(r3)
	  li        r5, 0xD
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x40:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BBB18
 * Size:	000010
 */
void Game::Imomushi::StateZukanAppear::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BBB28
 * Size:	000058
 */
void Game::Imomushi::StateZukanMove::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        0x19A8
	  lfs       f0, -0x1FE8(r2)
	  mr        r3, r31
	  li        r4, 0x3
	  li        r5, 0
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1B6B5C
	  mr        r3, r31
	  bl        0x1DD0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BBB80
 * Size:	0000BC
 */
void Game::Imomushi::StateZukanMove::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  addi      r4, r1, 0x8
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  mr        r3, r31
	  lfs       f1, 0x2F4(r31)
	  lfs       f2, 0x2F8(r31)
	  lfs       f0, 0x2F0(r31)
	  stfs      f0, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f2, 0x10(r1)
	  lwz       r5, 0xC0(r31)
	  lfs       f1, 0x2E4(r5)
	  lfs       f2, 0x30C(r5)
	  lfs       f3, 0x334(r5)
	  bl        -0x1A65F0
	  mr        r3, r31
	  bl        0x1A9C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x68
	  mr        r3, r31
	  bl        0x1904

	.loc_0x68:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xA4
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xA4
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0xD
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xA4:
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
 * Address:	802BBC3C
 * Size:	000024
 */
void Game::Imomushi::StateZukanMove::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        0x1D70
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}



/*
 * --INFO--
 * Address:	8029A63C
 * Size:	000324
 */
void Game::Fuefuki::FSM::init(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x9
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x169DF0
	  li        r3, 0x10
	  bl        -0x2767B8
	  mr.       r4, r3
	  beq-      .loc_0x64
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r7, 0
	  subi      r6, r5, 0x3EE4
	  subi      r5, r2, 0x2770
	  stw       r7, 0x4(r4)
	  subi      r0, r3, 0x3F08
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x64:
	  mr        r3, r31
	  bl        -0x169D9C
	  li        r3, 0x10
	  bl        -0x276808
	  mr.       r4, r3
	  beq-      .loc_0xB8
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x1
	  li        r7, 0
	  subi      r6, r5, 0x3EE4
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2768
	  subi      r0, r3, 0x3F2C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0xB8:
	  mr        r3, r31
	  bl        -0x169DF0
	  li        r3, 0x10
	  bl        -0x27685C
	  mr.       r4, r3
	  beq-      .loc_0x10C
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x2
	  li        r7, 0
	  subi      r6, r5, 0x3EE4
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2760
	  subi      r0, r3, 0x3F50
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x10C:
	  mr        r3, r31
	  bl        -0x169E44
	  li        r3, 0x10
	  bl        -0x2768B0
	  mr.       r4, r3
	  beq-      .loc_0x160
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x3
	  li        r7, 0
	  subi      r6, r5, 0x3EE4
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2758
	  subi      r0, r3, 0x3F74
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x160:
	  mr        r3, r31
	  bl        -0x169E98
	  li        r3, 0x10
	  bl        -0x276904
	  mr.       r4, r3
	  beq-      .loc_0x1B4
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x4
	  li        r7, 0
	  subi      r6, r5, 0x3EE4
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2750
	  subi      r0, r3, 0x3F98
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x1B4:
	  mr        r3, r31
	  bl        -0x169EEC
	  li        r3, 0x10
	  bl        -0x276958
	  mr.       r4, r3
	  beq-      .loc_0x208
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x5
	  li        r7, 0
	  subi      r6, r5, 0x3EE4
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2748
	  subi      r0, r3, 0x3FBC
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x208:
	  mr        r3, r31
	  bl        -0x169F40
	  li        r3, 0x10
	  bl        -0x2769AC
	  mr.       r4, r3
	  beq-      .loc_0x25C
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x6
	  li        r7, 0
	  subi      r6, r5, 0x3EE4
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2740
	  subi      r0, r3, 0x3FE0
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x25C:
	  mr        r3, r31
	  bl        -0x169F94
	  li        r3, 0x10
	  bl        -0x276A00
	  mr.       r4, r3
	  beq-      .loc_0x2B0
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x7
	  li        r7, 0
	  subi      r6, r5, 0x3EE4
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2738
	  subi      r0, r3, 0x4004
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x2B0:
	  mr        r3, r31
	  bl        -0x169FE8
	  li        r3, 0x10
	  bl        -0x276A54
	  mr.       r4, r3
	  beq-      .loc_0x308
	  lis       r3, 0x804B
	  lis       r6, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r5, 0x8049
	  stw       r0, 0x0(r4)
	  li        r0, 0x8
	  lis       r3, 0x804D
	  li        r7, 0
	  stw       r0, 0x4(r4)
	  subi      r6, r6, 0x3EE4
	  subi      r5, r5, 0x73F0
	  subi      r0, r3, 0x4028
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x308:
	  mr        r3, r31
	  bl        -0x16A040
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029A960
 * Size:	00005C
 */
void Game::Fuefuki::StateDead::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x195258
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x2730(r2)
	  li        r4, 0
	  rlwinm    r0,r0,0,26,24
	  li        r5, 0
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1959A0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029A9BC
 * Size:	000044
 */
void Game::Fuefuki::StateDead::exec(Game::EnemyBase*)
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
	  bl        -0x15F8FC

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029AA00
 * Size:	000004
 */
void Game::Fuefuki::StateDead::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029AA04
 * Size:	0000A0
 */
void Game::Fuefuki::StateStay::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stb       r0, 0x2C0(r4)
	  bl        0x1F44
	  lfs       f0, -0x2730(r2)
	  mr        r3, r31
	  li        r4, 0x1
	  li        r5, 0
	  stfs      f0, 0x2C8(r31)
	  lwz       r0, 0x1E0(r31)
	  oris      r0, r0, 0x40
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x4
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,21,19
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x195A80
	  mr        r3, r31
	  bl        -0x1937AC
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029AAA4
 * Size:	00005C
 */
void Game::Fuefuki::StateStay::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r5, -0x6514(r13)
	  lfs       f1, 0x2C8(r4)
	  lfs       f0, 0x54(r5)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C8(r4)
	  lwz       r5, 0xC0(r4)
	  lfs       f1, 0x2C8(r4)
	  lfs       f0, 0x86C(r5)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x4C
	  lwz       r12, 0x0(r3)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x4C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029AB00
 * Size:	000004
 */
void Game::Fuefuki::StateStay::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029AB04
 * Size:	00018C
 */
void Game::Fuefuki::StateLand::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  li        r3, 0
	  lfs       f0, -0x2730(r2)
	  stw       r0, 0x34(r1)
	  li        r0, 0x4
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  mr        r30, r4
	  stb       r3, 0x2C0(r4)
	  mr        r3, r30
	  stw       r0, 0x2D8(r4)
	  stfs      f0, 0x2C8(r4)
	  bl        0x1E30
	  mr        r3, r30
	  li        r4, 0x1
	  bl        0x1E9C
	  lwz       r5, -0x6514(r13)
	  mr        r3, r30
	  lfs       f1, 0x2CC(r30)
	  li        r4, 0x1
	  lfs       f0, 0x54(r5)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2CC(r30)
	  bl        0x22B4
	  lfs       f1, 0x2E0(r30)
	  mr        r3, r30
	  lfs       f2, 0x2E4(r30)
	  addi      r4, r1, 0x8
	  lfs       f0, 0x2DC(r30)
	  stfs      f0, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f2, 0x10(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  bl        -0x1D15F8
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x1C(r1)
	  lfd       f3, -0x2720(r2)
	  stw       r0, 0x18(r1)
	  lfs       f2, -0x272C(r2)
	  lfd       f0, 0x18(r1)
	  lfs       f1, -0x2728(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, -0x2730(r2)
	  fmuls     f2, f2, f3
	  fdivs     f1, f2, f1
	  stfs      f1, 0x1FC(r30)
	  lfs       f1, 0x1FC(r30)
	  stfs      f1, 0x1A8(r30)
	  lwz       r0, 0x1E0(r30)
	  rlwinm    r0,r0,0,10,8
	  stw       r0, 0x1E0(r30)
	  lwz       r0, 0x1E0(r30)
	  oris      r0, r0, 0x20
	  stw       r0, 0x1E0(r30)
	  lwz       r0, 0x1E0(r30)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0x1E0(r30)
	  lwz       r0, 0x1E0(r30)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r30)
	  stfs      f0, 0x1D4(r30)
	  stfs      f0, 0x1D8(r30)
	  stfs      f0, 0x1DC(r30)
	  lwz       r31, 0xC0(r30)
	  bl        -0x1D1678
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x24(r1)
	  lfd       f3, -0x2720(r2)
	  stw       r0, 0x20(r1)
	  lfs       f2, -0x2724(r2)
	  lfd       f0, 0x20(r1)
	  lfs       f1, -0x2728(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, 0x95C(r31)
	  fmuls     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x164
	  mr        r3, r30
	  li        r4, 0x1
	  li        r5, 0
	  bl        -0x195C5C
	  b         .loc_0x174

	.loc_0x164:
	  mr        r3, r30
	  li        r4, 0x2
	  li        r5, 0
	  bl        -0x195C70

	.loc_0x174:
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
 * Address:	8029AC90
 * Size:	000124
 */
void Game::Fuefuki::StateLand::exec(Game::EnemyBase*)
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
	  mr        r3, r31
	  bl        0x2408
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x40
	  li        r0, 0x3
	  mr        r3, r31
	  stw       r0, 0x2D8(r31)
	  bl        -0x195A28
	  b         .loc_0x60

	.loc_0x40:
	  mr        r3, r31
	  bl        0x1D38
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x60
	  li        r0, 0x7
	  mr        r3, r31
	  stw       r0, 0x2D8(r31)
	  bl        -0x195A4C

	.loc_0x60:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x10C
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0xC4
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f1, -0x2718(r2)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x800
	  stw       r0, 0x1E0(r31)
	  bl        0x29EC
	  lwz       r0, 0x280(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x10C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x250(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x10C

	.loc_0xC4:
	  cmplwi    r0, 0x3
	  bne-      .loc_0xE4
	  li        r0, 0x1
	  stb       r0, 0x2C0(r31)
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x40
	  stw       r0, 0x1E0(r31)
	  b         .loc_0x10C

	.loc_0xE4:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x10C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2D8(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x10C:
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
 * Address:	8029ADB4
 * Size:	000050
 */
void Game::Fuefuki::StateLand::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  mr        r0, r4
	  mr        r3, r0
	  li        r4, 0
	  lwz       r0, 0x1E0(r3)
	  rlwinm    r0,r0,0,10,8
	  stw       r0, 0x1E0(r3)
	  lwz       r0, 0x1E0(r3)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r3)
	  lwz       r0, 0x1E0(r3)
	  ori       r0, r0, 0x800
	  stw       r0, 0x1E0(r3)
	  bl        0x2028
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029AE04
 * Size:	00005C
 */
void Game::Fuefuki::StateJump::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x1
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  lfs       f0, -0x2730(r2)
	  stb       r5, 0x2C0(r4)
	  li        r4, 0x8
	  li        r5, 0
	  stw       r0, 0x2D8(r3)
	  stfs      f0, 0x2C8(r3)
	  lwz       r0, 0x1E0(r3)
	  rlwinm    r0,r0,0,10,8
	  stw       r0, 0x1E0(r3)
	  stfs      f0, 0x1D4(r3)
	  stfs      f0, 0x1D8(r3)
	  stfs      f0, 0x1DC(r3)
	  bl        -0x195E48
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029AE60
 * Size:	00030C
 */
void Game::Fuefuki::StateJump::exec(Game::EnemyBase*)
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
	  lbz       r0, 0x2C0(r4)
	  mr        r30, r3
	  mr        r31, r4
	  cmplwi    r0, 0
	  beq-      .loc_0x74
	  lfs       f1, -0x2730(r2)
	  stfs      f1, 0x1D4(r31)
	  stfs      f1, 0x1D8(r31)
	  stfs      f1, 0x1DC(r31)
	  lfs       f0, 0x200(r31)
	  fcmpo     cr0, f0, f1
	  cror      2, 0, 0x2
	  bne-      .loc_0xFC
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x2E4

	.loc_0x74:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  bl        -0x1CB6CC
	  mr        r3, r31
	  lfs       f2, 0x1D4(r31)
	  lwz       r12, 0x0(r31)
	  frsp      f30, f1
	  lfs       f31, 0x1D8(r31)
	  lfs       f0, 0x1DC(r31)
	  lwz       r12, 0x64(r12)
	  stfs      f2, 0x14(r1)
	  stfs      f31, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  mtctr     r12
	  bctrl
	  bl        -0x1CBC68
	  lfs       f0, -0x2714(r2)
	  frsp      f2, f1
	  lfs       f4, -0x2710(r2)
	  mr        r3, r31
	  fmuls     f1, f0, f30
	  li        r4, 0
	  fmuls     f0, f0, f2
	  stfs      f1, 0x1D4(r31)
	  stfs      f31, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  lwz       r5, 0xC0(r31)
	  lfs       f1, 0x53C(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x187E3C

	.loc_0xFC:
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x2C8(r31)
	  lfs       f0, 0x934(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x118
	  mr        r3, r31
	  bl        -0x195CD4

	.loc_0x118:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C8(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C8(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x2E4
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x158
	  lwz       r0, 0x1E0(r31)
	  oris      r0, r0, 0x40
	  stw       r0, 0x1E0(r31)
	  b         .loc_0x2E4

	.loc_0x158:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x2BC
	  li        r0, 0
	  mr        r3, r31
	  stb       r0, 0x2C0(r31)
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x4
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,21,19
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  bl        -0x1CB7E4
	  mr        r3, r31
	  lfs       f2, 0x1D4(r31)
	  lwz       r12, 0x0(r31)
	  frsp      f30, f1
	  lfs       f31, 0x1D8(r31)
	  lfs       f0, 0x1DC(r31)
	  lwz       r12, 0x64(r12)
	  stfs      f2, 0x8(r1)
	  stfs      f31, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  mtctr     r12
	  bctrl
	  bl        -0x1CBD80
	  lfs       f0, -0x2714(r2)
	  frsp      f2, f1
	  mr        r3, r31
	  addi      r4, r1, 0x20
	  fmuls     f1, f0, f30
	  fmuls     f0, f0, f2
	  stfs      f1, 0x1D4(r31)
	  stfs      f31, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  lfs       f1, 0x1D8(r31)
	  lfs       f2, 0x1DC(r31)
	  lfs       f0, 0x1D4(r31)
	  stfs      f0, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f2, 0x28(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x2710(r2)
	  li        r4, 0
	  lfs       f1, 0x514(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x187910
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x2710(r2)
	  li        r4, 0
	  lfs       f1, 0x514(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x187BEC
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x2710(r2)
	  li        r4, 0
	  lfs       f1, 0x53C(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x187FC4
	  lfs       f0, -0x2730(r2)
	  mr        r3, r31
	  lfs       f1, -0x270C(r2)
	  stfs      f0, 0x20C(r31)
	  bl        0x2624
	  lwz       r0, 0x280(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x2E4
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x254(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x2E4

	.loc_0x2BC:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x2E4
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x2E4:
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  psq_l     f30,0x48(r1),0,0
	  lfd       f30, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r0, 0x64(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029B16C
 * Size:	000010
 */
void Game::Fuefuki::StateJump::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,10,8
	  stw       r0, 0x1E0(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029B17C
 * Size:	000060
 */
void Game::Fuefuki::StateWait::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2730(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stw       r0, 0x2D8(r4)
	  stfs      f0, 0x2C8(r4)
	  bl        -0x1997D8
	  lfs       f0, -0x2730(r2)
	  mr        r3, r31
	  li        r4, 0x5
	  li        r5, 0
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1961C0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029B1DC
 * Size:	00011C
 */
void Game::Fuefuki::StateWait::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2730(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lfs       f1, 0x2C8(r4)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x3C
	  li        r0, 0x5
	  mr        r3, r31
	  stw       r0, 0x2D8(r31)
	  bl        -0x195F74

	.loc_0x3C:
	  mr        r3, r31
	  bl        0x17F0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x5C
	  li        r0, 0x7
	  mr        r3, r31
	  stw       r0, 0x2D8(r31)
	  bl        -0x195F94

	.loc_0x5C:
	  mr        r3, r31
	  bl        0x1E7C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x7C
	  li        r0, 0x3
	  mr        r3, r31
	  stw       r0, 0x2D8(r31)
	  bl        -0x195FB4

	.loc_0x7C:
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x2730(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xA0
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x2D8(r31)
	  bl        -0x195FD8

	.loc_0xA0:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C8(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C8(r31)
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2CC(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2CC(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x104
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x104
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2D8(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x104:
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
 * Address:	8029B2F8
 * Size:	000024
 */
void Game::Fuefuki::StateWait::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x19998C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029B31C
 * Size:	000060
 */
void Game::Fuefuki::StateTurn::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2730(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x2C8(r4)
	  stw       r0, 0x2D8(r4)
	  bl        -0x199978
	  lfs       f0, -0x2730(r2)
	  mr        r3, r31
	  li        r4, 0x4
	  li        r5, 0
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x196360
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029B37C
 * Size:	000248
 */
void Game::Fuefuki::StateTurn::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stfd      f31, 0x60(r1)
	  psq_st    f31,0x68(r1),0,0
	  stfd      f30, 0x50(r1)
	  psq_st    f30,0x58(r1),0,0
	  stfd      f29, 0x40(r1)
	  psq_st    f29,0x48(r1),0,0
	  stfd      f28, 0x30(r1)
	  psq_st    f28,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  lwz       r12, 0x0(r4)
	  mr        r30, r3
	  lwz       r5, 0xC0(r4)
	  mr        r31, r4
	  lwz       r12, 0x8(r12)
	  addi      r3, r1, 0x14
	  lfs       f31, 0x2DC(r4)
	  lfs       f28, 0x2E4(r4)
	  lfs       f29, 0x334(r5)
	  lfs       f30, 0x30C(r5)
	  mtctr     r12
	  bctrl
	  lfs       f4, 0x14(r1)
	  lis       r3, 0x8051
	  lfs       f0, 0x1C(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f3, 0x18(r1)
	  fsubs     f1, f31, f4
	  fsubs     f2, f28, f0
	  stfs      f4, 0x8(r1)
	  stfs      f3, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  bl        -0x266300
	  bl        0x1767C4
	  lwz       r12, 0x0(r31)
	  fmr       f31, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f31
	  bl        0x1767CC
	  fmr       f31, f1
	  lfs       f0, -0x2704(r2)
	  lfs       f1, -0x2708(r2)
	  fmuls     f0, f0, f29
	  fmuls     f29, f31, f30
	  fmuls     f1, f1, f0
	  fabs      f0, f29
	  frsp      f0, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0xF8
	  lfs       f0, -0x2730(r2)
	  fcmpo     cr0, f29, f0
	  ble-      .loc_0xF4
	  fmr       f29, f1
	  b         .loc_0xF8

	.loc_0xF4:
	  fneg      f29, f1

	.loc_0xF8:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f29, f1
	  bl        0x176744
	  fabs      f3, f31
	  stfs      f1, 0x1FC(r31)
	  lfs       f0, -0x2700(r2)
	  lfs       f2, 0x1FC(r31)
	  frsp      f1, f3
	  stfs      f2, 0x1A8(r31)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x148
	  li        r0, 0x6
	  mr        r3, r31
	  stw       r0, 0x2D8(r31)
	  bl        -0x196220

	.loc_0x148:
	  mr        r3, r31
	  bl        0x1544
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x168
	  li        r0, 0x7
	  mr        r3, r31
	  stw       r0, 0x2D8(r31)
	  bl        -0x196240

	.loc_0x168:
	  mr        r3, r31
	  bl        0x1BD0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x188
	  li        r0, 0x3
	  mr        r3, r31
	  stw       r0, 0x2D8(r31)
	  bl        -0x196260

	.loc_0x188:
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x2730(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x1AC
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x2D8(r31)
	  bl        -0x196284

	.loc_0x1AC:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C8(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C8(r31)
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2CC(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2CC(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x210
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x210
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2D8(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x210:
	  psq_l     f31,0x68(r1),0,0
	  lfd       f31, 0x60(r1)
	  psq_l     f30,0x58(r1),0,0
	  lfd       f30, 0x50(r1)
	  psq_l     f29,0x48(r1),0,0
	  lfd       f29, 0x40(r1)
	  psq_l     f28,0x38(r1),0,0
	  lfd       f28, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r0, 0x74(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029B5C4
 * Size:	000024
 */
void Game::Fuefuki::StateTurn::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x199C58
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029B5E8
 * Size:	000050
 */
void Game::Fuefuki::StateWalk::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2730(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stw       r0, 0x2D8(r4)
	  stfs      f0, 0x2C8(r4)
	  bl        -0x199C44
	  mr        r3, r31
	  li        r4, 0x3
	  li        r5, 0
	  bl        -0x19661C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029B638
 * Size:	0001CC
 */
void Game::Fuefuki::StateWalk::exec(Game::EnemyBase*)
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
	  mr        r3, r31
	  lfs       f1, 0x2E0(r4)
	  lfs       f2, 0x2E4(r4)
	  lfs       f0, 0x2DC(r4)
	  stfs      f0, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f2, 0x10(r1)
	  bl        -0x194370
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xA0
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  lfs       f1, 0x2E4(r5)
	  lfs       f2, 0x30C(r5)
	  lfs       f3, 0x334(r5)
	  bl        -0x1860B8
	  mr        r3, r31
	  bl        0x1BFC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB0
	  lfs       f1, 0x2D4(r31)
	  lfs       f0, -0x2730(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x8C
	  li        r0, 0x5
	  stw       r0, 0x2D8(r31)
	  b         .loc_0x94

	.loc_0x8C:
	  li        r0, 0x4
	  stw       r0, 0x2D8(r31)

	.loc_0x94:
	  mr        r3, r31
	  bl        -0x196430
	  b         .loc_0xB0

	.loc_0xA0:
	  lfs       f0, -0x2730(r2)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)

	.loc_0xB0:
	  lfs       f1, 0x2C8(r31)
	  lfs       f0, -0x26FC(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xEC
	  lfs       f1, 0x2D4(r31)
	  lfs       f0, -0x2730(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xDC
	  li        r0, 0x5
	  stw       r0, 0x2D8(r31)
	  b         .loc_0xE4

	.loc_0xDC:
	  li        r0, 0x4
	  stw       r0, 0x2D8(r31)

	.loc_0xE4:
	  mr        r3, r31
	  bl        -0x196480

	.loc_0xEC:
	  mr        r3, r31
	  bl        0x12E4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x10C
	  li        r0, 0x7
	  mr        r3, r31
	  stw       r0, 0x2D8(r31)
	  bl        -0x1964A0

	.loc_0x10C:
	  mr        r3, r31
	  bl        0x1970
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x12C
	  li        r0, 0x3
	  mr        r3, r31
	  stw       r0, 0x2D8(r31)
	  bl        -0x1964C0

	.loc_0x12C:
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x2730(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x150
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x2D8(r31)
	  bl        -0x1964E4

	.loc_0x150:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C8(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C8(r31)
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2CC(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2CC(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x1B4
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x1B4
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2D8(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1B4:
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
 * Address:	8029B804
 * Size:	00003C
 */
void Game::Fuefuki::StateWalk::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x199EA0
	  mr        r3, r31
	  li        r4, 0
	  bl        0x15F0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029B840
 * Size:	000068
 */
void Game::Fuefuki::StateWhisle::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2730(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stw       r0, 0x2D8(r4)
	  stfs      f0, 0x2C8(r4)
	  bl        0x121C
	  mr        r3, r31
	  bl        -0x199EA4
	  lfs       f0, -0x2730(r2)
	  mr        r3, r31
	  li        r4, 0x6
	  li        r5, 0
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x19688C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029B8A8
 * Size:	00010C
 */
void Game::Fuefuki::StateWhisle::exec(Game::EnemyBase*)
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
	  mr        r3, r31
	  bl        0x11F4
	  lfs       f1, 0x2C8(r31)
	  lfs       f0, -0x26F8(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x60
	  lfs       f1, 0x2D4(r31)
	  lfs       f0, -0x2730(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x50
	  li        r0, 0x5
	  stw       r0, 0x2D8(r31)
	  b         .loc_0x58

	.loc_0x50:
	  li        r0, 0x4
	  stw       r0, 0x2D8(r31)

	.loc_0x58:
	  mr        r3, r31
	  bl        -0x196664

	.loc_0x60:
	  mr        r3, r31
	  bl        0x17AC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x80
	  li        r0, 0x3
	  mr        r3, r31
	  stw       r0, 0x2D8(r31)
	  bl        -0x196684

	.loc_0x80:
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x2730(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xA4
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x2D8(r31)
	  bl        -0x1966A8

	.loc_0xA4:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C8(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C8(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xF4
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xF4
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2D8(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xF4:
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
 * Address:	8029B9B4
 * Size:	000064
 */
void Game::Fuefuki::StateWhisle::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x19A050
	  mr        r3, r31
	  bl        0x140C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x596D
	  li        r5, 0
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
 * Address:	8029BA18
 * Size:	000068
 */
void Game::Fuefuki::StateStruggle::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, 0
	  lfs       f0, -0x2730(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stb       r3, 0x2C0(r4)
	  mr        r3, r31
	  stw       r0, 0x2D8(r4)
	  stfs      f0, 0x2C8(r4)
	  bl        -0x19A07C
	  lfs       f0, -0x2730(r2)
	  mr        r3, r31
	  li        r4, 0x7
	  li        r5, 0
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x196A64
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029BA80
 * Size:	00010C
 */
void Game::Fuefuki::StateStruggle::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2730(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lfs       f1, 0x200(r4)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  beq-      .loc_0x60
	  lwz       r0, 0x1F4(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0x4C
	  lfs       f1, 0x2C8(r31)
	  lfs       f0, -0x26F8(r2)
	  fcmpo     cr0, f1, f0
	  bgt-      .loc_0x60

	.loc_0x4C:
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x2C8(r31)
	  lfs       f0, 0x90C(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x68

	.loc_0x60:
	  mr        r3, r31
	  bl        -0x196844

	.loc_0x68:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C8(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C8(r31)
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2CC(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2CC(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xF4
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xF4
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x2730(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xCC
	  li        r0, 0
	  stw       r0, 0x2D8(r31)
	  b         .loc_0xD4

	.loc_0xCC:
	  li        r0, 0x3
	  stw       r0, 0x2D8(r31)

	.loc_0xD4:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2D8(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xF4:
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
 * Address:	8029BB8C
 * Size:	000038
 */
void Game::Fuefuki::StateStruggle::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x19A228
	  li        r0, 0x1
	  stb       r0, 0x2C0(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

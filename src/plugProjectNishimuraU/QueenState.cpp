

/*
 * --INFO--
 * Address:	80287B70
 * Size:	000278
 */
void Game::Queen::FSM::init(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x7
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x157324
	  li        r3, 0x10
	  bl        -0x263CEC
	  mr.       r4, r3
	  beq-      .loc_0x64
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r7, 0
	  subi      r6, r5, 0x6440
	  subi      r5, r2, 0x2BC8
	  stw       r7, 0x4(r4)
	  subi      r0, r3, 0x6464
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x64:
	  mr        r3, r31
	  bl        -0x1572D0
	  li        r3, 0x10
	  bl        -0x263D3C
	  mr.       r4, r3
	  beq-      .loc_0xB8
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x1
	  li        r7, 0
	  subi      r6, r5, 0x6440
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2BC0
	  subi      r0, r3, 0x6488
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0xB8:
	  mr        r3, r31
	  bl        -0x157324
	  li        r3, 0x10
	  bl        -0x263D90
	  mr.       r4, r3
	  beq-      .loc_0x10C
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x2
	  li        r7, 0
	  subi      r6, r5, 0x6440
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2BB8
	  subi      r0, r3, 0x64AC
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x10C:
	  mr        r3, r31
	  bl        -0x157378
	  li        r3, 0x10
	  bl        -0x263DE4
	  mr.       r4, r3
	  beq-      .loc_0x160
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x3
	  li        r7, 0
	  subi      r6, r5, 0x6440
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2BB0
	  subi      r0, r3, 0x64D0
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x160:
	  mr        r3, r31
	  bl        -0x1573CC
	  li        r3, 0x10
	  bl        -0x263E38
	  mr.       r4, r3
	  beq-      .loc_0x1B4
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x4
	  li        r7, 0
	  subi      r6, r5, 0x6440
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2BA8
	  subi      r0, r3, 0x64F4
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x1B4:
	  mr        r3, r31
	  bl        -0x157420
	  li        r3, 0x10
	  bl        -0x263E8C
	  mr.       r4, r3
	  beq-      .loc_0x208
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x5
	  li        r7, 0
	  subi      r6, r5, 0x6440
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2BA0
	  subi      r0, r3, 0x6518
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x208:
	  mr        r3, r31
	  bl        -0x157474
	  li        r3, 0x10
	  bl        -0x263EE0
	  mr.       r4, r3
	  beq-      .loc_0x25C
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x6
	  li        r7, 0
	  subi      r6, r5, 0x6440
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2B98
	  subi      r0, r3, 0x653C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x25C:
	  mr        r3, r31
	  bl        -0x1574C8
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80287DE8
 * Size:	000058
 */
void Game::Queen::StateDead::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        0x3D5C
	  lfs       f0, -0x2B90(r2)
	  mr        r3, r31
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1826F8
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  bl        -0x182E24
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80287E40
 * Size:	0000B8
 */
void Game::Queen::StateDead::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  lwz       r3, 0x188(r4)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xA4
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x88
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r5, r1, 0x14
	  lfs       f1, 0xC(r1)
	  li        r4, 0x6
	  lfs       f0, 0x10(r1)
	  li        r6, 0x2
	  stfs      f2, 0x14(r1)
	  lwz       r3, -0x6960(r13)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        -0x35C70
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x14
	  li        r4, 0xE
	  li        r6, 0x2
	  bl        -0x34740
	  b         .loc_0xA4

	.loc_0x88:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xA4
	  mr        r3, r31
	  bl        0x2DC4
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x14CDF0

	.loc_0xA4:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80287EF8
 * Size:	000004
 */
void Game::Queen::StateDead::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80287EFC
 * Size:	000070
 */
void Game::Queen::StateSleep::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, -0x1
	  lfs       f0, -0x2B90(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r3, 0x2D4(r4)
	  mr        r3, r31
	  stb       r0, 0x2C5(r4)
	  stfs      f0, 0x2C8(r4)
	  lfs       f0, 0x20C(r4)
	  stfs      f0, 0x2D0(r4)
	  bl        -0x1807B8
	  lfs       f0, -0x2B90(r2)
	  mr        r3, r31
	  li        r4, 0x1
	  li        r5, 0
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x182F50
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80287F6C
 * Size:	000154
 */
void Game::Queen::StateSleep::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2B90(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lfs       f1, 0x200(r4)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  beq-      .loc_0x50
	  mr        r3, r31
	  bl        0x2CB8
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x50
	  mr        r3, r31
	  bl        0x2C6C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x58

	.loc_0x50:
	  mr        r3, r31
	  bl        -0x182D20

	.loc_0x58:
	  mr        r3, r31
	  bl        -0x180CC8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xC8
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x2B90(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x88
	  li        r0, 0
	  stw       r0, 0x2D4(r31)
	  b         .loc_0xC8

	.loc_0x88:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1739A4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xA8
	  li        r0, 0x4
	  stw       r0, 0x2D4(r31)
	  b         .loc_0xC8

	.loc_0xA8:
	  lwz       r0, 0x1F4(r31)
	  cmpwi     r0, 0
	  beq-      .loc_0xC0
	  li        r0, 0x3
	  stw       r0, 0x2D4(r31)
	  b         .loc_0xC8

	.loc_0xC0:
	  li        r0, 0x2
	  stw       r0, 0x2D4(r31)

	.loc_0xC8:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x13C
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0xF0
	  mr        r3, r31
	  bl        0x3B70
	  b         .loc_0x13C

	.loc_0xF0:
	  cmplwi    r0, 0x2
	  bne-      .loc_0x114
	  mr        r3, r31
	  bl        0x3B90
	  mr        r3, r31
	  bl        0x3B20
	  mr        r3, r31
	  bl        0x3228
	  b         .loc_0x13C

	.loc_0x114:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x13C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2D4(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x13C:
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
 * Address:	802880C0
 * Size:	000040
 */
void Game::Queen::StateSleep::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x180944
	  mr        r3, r31
	  bl        0x3B18
	  mr        r3, r31
	  bl        0x31B8
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80288100
 * Size:	000070
 */
void Game::Queen::StateWait::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, -0x1
	  lfs       f0, -0x2B90(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r3, 0x2D4(r4)
	  mr        r3, r31
	  stb       r0, 0x2C5(r4)
	  stfs      f0, 0x2C8(r4)
	  lfs       f0, 0x20C(r4)
	  stfs      f0, 0x2D0(r4)
	  bl        -0x1809BC
	  lfs       f0, -0x2B90(r2)
	  mr        r3, r31
	  li        r4, 0x2
	  li        r5, 0
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x183154
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80288170
 * Size:	00013C
 */
void Game::Queen::StateWait::exec(Game::EnemyBase*)
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
	  bl        0x2A8C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x4C
	  lfs       f1, 0x2C8(r31)
	  lfs       f0, -0x2B8C(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x4C
	  li        r0, 0x1
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x182F18

	.loc_0x4C:
	  mr        r3, r31
	  bl        0x2A98
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x6C
	  li        r0, 0x3
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x182F38

	.loc_0x6C:
	  mr        r3, r31
	  bl        0x2A3C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x8C
	  li        r0, 0x6
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x182F58

	.loc_0x8C:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x173BAC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB0
	  li        r0, 0x4
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x182F7C

	.loc_0xB0:
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x2B90(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xD4
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x182FA0

	.loc_0xD4:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C8(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C8(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x124
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x124
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2D4(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x124:
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
 * Address:	802882AC
 * Size:	000024
 */
void Game::Queen::StateWait::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x180B28
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802882D0
 * Size:	000078
 */
void Game::Queen::StateDamage::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, -0x1
	  lfs       f0, -0x2B90(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r3, 0x2D4(r4)
	  mr        r3, r31
	  stb       r0, 0x2C5(r4)
	  stfs      f0, 0x2C8(r4)
	  bl        0x37C4
	  mr        r3, r31
	  bl        -0x180B8C
	  lfs       f0, -0x2B90(r2)
	  mr        r3, r31
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x186954
	  mr        r3, r31
	  li        r4, 0x3
	  li        r5, 0
	  bl        -0x18332C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80288348
 * Size:	0000F4
 */
void Game::Queen::StateDamage::exec(Game::EnemyBase*)
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
	  bl        0x28B4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x3C
	  li        r0, 0x6
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x1830E0

	.loc_0x3C:
	  lwz       r0, 0x1F4(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0x58
	  li        r0, 0x2
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x1830FC

	.loc_0x58:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x173D50
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x7C
	  li        r0, 0x4
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x183120

	.loc_0x7C:
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x2B90(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xA0
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x183144

	.loc_0xA0:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xDC
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xDC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2D4(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xDC:
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
 * Address:	8028843C
 * Size:	000040
 */
void Game::Queen::StateDamage::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x180CC0
	  mr        r3, r31
	  bl        0x369C
	  mr        r3, r31
	  bl        -0x186AE8
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028847C
 * Size:	000080
 */
void Game::Queen::StateFlick::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, -0x1
	  lfs       f0, -0x2B90(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r3, 0x2D4(r4)
	  mr        r3, r31
	  stb       r0, 0x2C5(r4)
	  stfs      f0, 0x2C8(r4)
	  bl        0x367C
	  mr        r3, r31
	  bl        -0x180D38
	  lfs       f0, -0x2B90(r2)
	  mr        r3, r31
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x186B00
	  mr        r3, r31
	  li        r4, 0x4
	  li        r5, 0
	  bl        -0x1834D8
	  mr        r3, r31
	  bl        0x27F4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802884FC
 * Size:	0000FC
 */
void Game::Queen::StateFlick::exec(Game::EnemyBase*)
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
	  beq-      .loc_0xE4
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x58
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0x1A50
	  b         .loc_0xE4

	.loc_0x58:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xE4
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x2B90(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x90
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xE4

	.loc_0x90:
	  mr        r3, r31
	  bl        0x1DB4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xC4
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x5
	  subi      r6, r2, 0x2B88
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xE4

	.loc_0xC4:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xE4:
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
 * Address:	802885F8
 * Size:	000038
 */
void Game::Queen::StateFlick::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x180E7C
	  mr        r3, r31
	  bl        -0x186C9C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80288630
 * Size:	000088
 */
void Game::Queen::StateRolling::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, -0x1
	  lfs       f0, -0x2B90(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r5
	  stw       r3, 0x2D4(r4)
	  mr        r3, r31
	  stb       r0, 0x2C2(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  bl        -0x186CA4
	  cmplwi    r30, 0
	  beq-      .loc_0x60
	  mr        r3, r31
	  li        r4, 0x5
	  li        r5, 0
	  bl        -0x183684
	  b         .loc_0x70

	.loc_0x60:
	  mr        r3, r31
	  li        r4, 0x6
	  li        r5, 0
	  bl        -0x183698

	.loc_0x70:
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
 * Address:	802886B8
 * Size:	0005BC
 */
void Game::Queen::StateRolling::exec(Game::EnemyBase*)
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
	  stw       r31, 0x6C(r1)
	  stw       r30, 0x68(r1)
	  lbz       r0, 0x2C2(r4)
	  mr        r30, r3
	  mr        r31, r4
	  cmplwi    r0, 0
	  beq-      .loc_0x244
	  mr        r3, r31
	  bl        -0x1813B4
	  cmpwi     r3, 0x5
	  bne-      .loc_0x58
	  lfs       f30, -0x2B80(r2)
	  b         .loc_0x5C

	.loc_0x58:
	  lfs       f30, -0x2B7C(r2)

	.loc_0x5C:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f3, f30, f1
	  lfs       f0, -0x2B90(r2)
	  fmr       f1, f3
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x88
	  fneg      f1, f3

	.loc_0x88:
	  lfs       f2, -0x2B78(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x2B90(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f1, f1, f2
	  fcmpo     cr0, f3, f0
	  fctiwz    f0, f1
	  stfd      f0, 0x50(r1)
	  lwz       r0, 0x54(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f31, 0x4(r3)
	  bge-      .loc_0xE0
	  lfs       f0, -0x2B74(r2)
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x58(r1)
	  lwz       r0, 0x5C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f30, f0
	  b         .loc_0xF8

	.loc_0xE0:
	  fmuls     f0, f3, f2
	  fctiwz    f0, f0
	  stfd      f0, 0x60(r1)
	  lwz       r0, 0x64(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f30, r4, r0

	.loc_0xF8:
	  mr        r4, r31
	  addi      r3, r1, 0x2C
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f8, 0x2C(r1)
	  lfs       f5, 0x198(r31)
	  lwz       r3, 0xC0(r31)
	  fsubs     f0, f8, f5
	  lfs       f7, -0x2B90(r2)
	  lfs       f4, 0x34(r1)
	  lfs       f6, 0x1A0(r31)
	  fmadds    f0, f0, f30, f7
	  lfs       f3, 0x35C(r3)
	  fsubs     f1, f4, f6
	  fmadds    f0, f1, f31, f0
	  fcmpo     cr0, f0, f3
	  ble-      .loc_0x154
	  stfs      f7, 0x1D4(r31)
	  stfs      f7, 0x1D8(r31)
	  stfs      f7, 0x1DC(r31)
	  b         .loc_0x1D4

	.loc_0x154:
	  lfs       f2, -0x2B70(r2)
	  fsubs     f1, f5, f8
	  fsubs     f0, f6, f4
	  fadds     f3, f2, f3
	  fmuls     f2, f30, f3
	  fmuls     f3, f31, f3
	  fadds     f2, f2, f1
	  fadds     f3, f3, f0
	  fmadds    f0, f2, f2, f7
	  fmuls     f1, f3, f3
	  fadds     f1, f1, f0
	  fcmpo     cr0, f1, f7
	  ble-      .loc_0x198
	  ble-      .loc_0x19C
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x19C

	.loc_0x198:
	  fmr       f1, f7

	.loc_0x19C:
	  lfs       f0, -0x2B90(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1BC
	  lfs       f0, -0x2B6C(r2)
	  fdivs     f0, f0, f1
	  fmuls     f2, f2, f0
	  fmuls     f7, f7, f0
	  fmuls     f3, f3, f0

	.loc_0x1BC:
	  lfs       f0, 0x2E4(r3)
	  fmuls     f2, f2, f0
	  fmuls     f3, f3, f0
	  stfs      f2, 0x1D4(r31)
	  stfs      f7, 0x1D8(r31)
	  stfs      f3, 0x1DC(r31)

	.loc_0x1D4:
	  lfs       f1, -0x2B68(r2)
	  mr        r3, r31
	  bl        0x1708
	  mr        r3, r31
	  bl        0x1414
	  lwz       r5, -0x6514(r13)
	  mr        r4, r31
	  lfs       f1, 0x2C8(r31)
	  addi      r3, r1, 0x20
	  lfs       f0, 0x54(r5)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C8(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x20(r1)
	  addi      r5, r1, 0x44
	  lfs       f1, 0x24(r1)
	  li        r4, 0xF
	  lfs       f0, 0x28(r1)
	  li        r6, 0x2
	  stfs      f2, 0x44(r1)
	  lwz       r3, -0x6960(r13)
	  stfs      f1, 0x48(r1)
	  stfs      f0, 0x4C(r1)
	  bl        -0x366B8
	  b         .loc_0x254

	.loc_0x244:
	  lfs       f0, -0x2B90(r2)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)

	.loc_0x254:
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x2B90(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x290
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  stb       r0, 0x2C2(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x18369C
	  mr        r3, r31
	  bl        0x2538

	.loc_0x290:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x58C
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x500
	  mr        r3, r31
	  bl        -0x181620
	  cmpwi     r3, 0x5
	  bne-      .loc_0x2C4
	  lfs       f30, -0x2B80(r2)
	  b         .loc_0x2C8

	.loc_0x2C4:
	  lfs       f30, -0x2B7C(r2)

	.loc_0x2C8:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f3, f30, f1
	  lfs       f0, -0x2B90(r2)
	  fmr       f1, f3
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x2F4
	  fneg      f1, f3

	.loc_0x2F4:
	  lfs       f2, -0x2B78(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x2B90(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f1, f1, f2
	  fcmpo     cr0, f3, f0
	  fctiwz    f0, f1
	  stfd      f0, 0x60(r1)
	  lwz       r0, 0x64(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f31, 0x4(r3)
	  bge-      .loc_0x34C
	  lfs       f0, -0x2B74(r2)
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x58(r1)
	  lwz       r0, 0x5C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f30, f0
	  b         .loc_0x364

	.loc_0x34C:
	  fmuls     f0, f3, f2
	  fctiwz    f0, f0
	  stfd      f0, 0x50(r1)
	  lwz       r0, 0x54(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f30, r4, r0

	.loc_0x364:
	  mr        r4, r31
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x14(r1)
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x198(r31)
	  lfs       f4, 0x1C(r1)
	  lfs       f2, 0x1A0(r31)
	  fsubs     f1, f1, f0
	  lfs       f3, -0x2B90(r2)
	  lfs       f0, 0x200(r31)
	  fsubs     f5, f4, f2
	  fmadds    f4, f1, f30, f3
	  lfs       f2, -0x2B64(r2)
	  lfs       f1, 0x384(r3)
	  fcmpo     cr0, f0, f3
	  lfs       f3, 0x35C(r3)
	  fadds     f0, f2, f1
	  fmadds    f30, f5, f31, f4
	  fsubs     f31, f3, f2
	  fneg      f29, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x3D4
	  mr        r3, r31
	  bl        0x23F4

	.loc_0x3D4:
	  fcmpo     cr0, f30, f31
	  ble-      .loc_0x49C
	  lbz       r0, 0x2C2(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x448
	  mr        r3, r31
	  bl        0x1A48
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r5, r1, 0x38
	  lfs       f1, 0xC(r1)
	  li        r4, 0x1B
	  lfs       f0, 0x10(r1)
	  li        r6, 0x2
	  stfs      f2, 0x38(r1)
	  lwz       r3, -0x6960(r13)
	  stfs      f1, 0x3C(r1)
	  stfs      f0, 0x40(r1)
	  bl        -0x368AC
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x38
	  li        r4, 0xF
	  li        r6, 0x2
	  bl        -0x3537C

	.loc_0x448:
	  li        r3, 0
	  li        r0, 0x5
	  stb       r3, 0x2C2(r31)
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x183874
	  mr        r3, r31
	  li        r4, 0x1
	  bl        0x2E60
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x58BA
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x58C

	.loc_0x49C:
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x2C8(r31)
	  lfs       f0, 0x81C(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x58C
	  fcmpo     cr0, f30, f29
	  ble-      .loc_0x58C
	  lfs       f0, -0x2B64(r2)
	  fcmpo     cr0, f30, f0
	  bge-      .loc_0x58C
	  lbz       r0, 0x2C2(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x4D8
	  mr        r3, r31
	  bl        0x22F0

	.loc_0x4D8:
	  li        r3, 0
	  li        r0, 0x2
	  stb       r3, 0x2C2(r31)
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x183904
	  mr        r3, r31
	  li        r4, 0
	  bl        0x2DD0
	  b         .loc_0x58C

	.loc_0x500:
	  cmplwi    r0, 0
	  bne-      .loc_0x530
	  lbz       r0, 0x2C2(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x58C
	  li        r0, 0x1
	  mr        r3, r31
	  stb       r0, 0x2C2(r31)
	  bl        0x2D28
	  mr        r3, r31
	  bl        0x21C0
	  b         .loc_0x58C

	.loc_0x530:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x58C
	  mr        r3, r31
	  bl        -0x1818AC
	  cmpwi     r3, 0x6
	  bne-      .loc_0x56C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  subi      r6, r2, 0x2B88
	  lwz       r5, 0x2D4(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x58C

	.loc_0x56C:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2D4(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x58C:
	  psq_l     f31,0x98(r1),0,0
	  lfd       f31, 0x90(r1)
	  psq_l     f30,0x88(r1),0,0
	  lfd       f30, 0x80(r1)
	  psq_l     f29,0x78(r1),0,0
	  lfd       f29, 0x70(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r0, 0xA4(r1)
	  lwz       r30, 0x68(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80288C74
 * Size:	00004C
 */
void Game::Queen::StateRolling::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x187310
	  mr        r3, r31
	  bl        0x2DCC
	  lfs       f0, -0x2B90(r2)
	  li        r0, 0
	  stfs      f0, 0x20C(r31)
	  stfs      f0, 0x2D0(r31)
	  stb       r0, 0x2C2(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80288CC0
 * Size:	000070
 */
void Game::Queen::StateBorn::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, -0x1
	  lfs       f0, -0x2B90(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r3, 0x2D4(r4)
	  mr        r3, r31
	  stb       r0, 0x2C5(r4)
	  stfs      f0, 0x2C8(r4)
	  bl        -0x181574
	  lfs       f0, -0x2B90(r2)
	  mr        r3, r31
	  li        r4, 0x7
	  li        r5, 0
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x183D0C
	  mr        r3, r31
	  bl        -0x18734C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80288D30
 * Size:	0000A8
 */
void Game::Queen::StateBorn::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lwz       r5, 0x188(r4)
	  lbz       r0, 0x24(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x94
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x44
	  mr        r3, r31
	  bl        0x1A5C
	  mr        r3, r31
	  bl        0x2B60
	  b         .loc_0x94

	.loc_0x44:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x94
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x2B90(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x7C
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x94

	.loc_0x7C:
	  lwz       r12, 0x0(r3)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x94:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80288DD8
 * Size:	000040
 */
void Game::Queen::StateBorn::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x18165C
	  mr        r3, r31
	  bl        -0x18747C
	  lfs       f0, -0x2B90(r2)
	  stfs      f0, 0x2CC(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80288E18
 * Size:	000028
 */
void __sinit_QueenState_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804D
	  stw       r0, -0x6938(r13)
	  stfsu     f0, -0x6548(r3)
	  stfs      f0, -0x6934(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

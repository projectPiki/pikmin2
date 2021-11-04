

/*
 * --INFO--
 * Address:	802708A0
 * Size:	0003D0
 */
void Game::Sarai::FSM::init(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0xB
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x140054
	  li        r3, 0x10
	  bl        -0x24CA1C
	  mr.       r4, r3
	  beq-      .loc_0x64
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r7, 0
	  addi      r6, r5, 0x6454
	  subi      r5, r2, 0x3250
	  stw       r7, 0x4(r4)
	  addi      r0, r3, 0x6430
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x64:
	  mr        r3, r31
	  bl        -0x140000
	  li        r3, 0x10
	  bl        -0x24CA6C
	  mr.       r4, r3
	  beq-      .loc_0xB8
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x1
	  li        r7, 0
	  addi      r6, r5, 0x6454
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x3248
	  addi      r0, r3, 0x640C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0xB8:
	  mr        r3, r31
	  bl        -0x140054
	  li        r3, 0x10
	  bl        -0x24CAC0
	  mr.       r4, r3
	  beq-      .loc_0x10C
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x2
	  li        r7, 0
	  addi      r6, r5, 0x6454
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x3240
	  addi      r0, r3, 0x63E8
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x10C:
	  mr        r3, r31
	  bl        -0x1400A8
	  li        r3, 0x10
	  bl        -0x24CB14
	  mr.       r4, r3
	  beq-      .loc_0x160
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x3
	  li        r7, 0
	  addi      r6, r5, 0x6454
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x3238
	  addi      r0, r3, 0x63C4
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x160:
	  mr        r3, r31
	  bl        -0x1400FC
	  li        r3, 0x10
	  bl        -0x24CB68
	  mr.       r4, r3
	  beq-      .loc_0x1B4
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x4
	  li        r7, 0
	  addi      r6, r5, 0x6454
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x3230
	  addi      r0, r3, 0x63A0
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x1B4:
	  mr        r3, r31
	  bl        -0x140150
	  li        r3, 0x10
	  bl        -0x24CBBC
	  mr.       r4, r3
	  beq-      .loc_0x208
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x5
	  li        r7, 0
	  addi      r6, r5, 0x6454
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x3228
	  addi      r0, r3, 0x637C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x208:
	  mr        r3, r31
	  bl        -0x1401A4
	  li        r3, 0x10
	  bl        -0x24CC10
	  mr.       r4, r3
	  beq-      .loc_0x25C
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x6
	  li        r7, 0
	  addi      r6, r5, 0x6454
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x3220
	  addi      r0, r3, 0x6358
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x25C:
	  mr        r3, r31
	  bl        -0x1401F8
	  li        r3, 0x10
	  bl        -0x24CC64
	  mr.       r4, r3
	  beq-      .loc_0x2B0
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x7
	  li        r7, 0
	  addi      r6, r5, 0x6454
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x3218
	  addi      r0, r3, 0x6334
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x2B0:
	  mr        r3, r31
	  bl        -0x14024C
	  li        r3, 0x10
	  bl        -0x24CCB8
	  mr.       r4, r3
	  beq-      .loc_0x304
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x8
	  li        r7, 0
	  addi      r6, r5, 0x6454
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x3210
	  addi      r0, r3, 0x6310
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x304:
	  mr        r3, r31
	  bl        -0x1402A0
	  li        r3, 0x10
	  bl        -0x24CD0C
	  mr.       r4, r3
	  beq-      .loc_0x35C
	  lis       r3, 0x804B
	  lis       r6, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r5, 0x8048
	  stw       r0, 0x0(r4)
	  li        r0, 0x9
	  lis       r3, 0x804C
	  li        r7, 0
	  stw       r0, 0x4(r4)
	  addi      r6, r6, 0x6454
	  addi      r5, r5, 0x6878
	  addi      r0, r3, 0x62EC
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x35C:
	  mr        r3, r31
	  bl        -0x1402F8
	  li        r3, 0x10
	  bl        -0x24CD64
	  mr.       r4, r3
	  beq-      .loc_0x3B4
	  lis       r3, 0x804B
	  lis       r6, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r5, 0x8048
	  stw       r0, 0x0(r4)
	  li        r0, 0xA
	  lis       r3, 0x804C
	  li        r7, 0
	  stw       r0, 0x4(r4)
	  addi      r6, r6, 0x6454
	  addi      r5, r5, 0x6884
	  addi      r0, r3, 0x62C8
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x3B4:
	  mr        r3, r31
	  bl        -0x140350
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80270C70
 * Size:	000070
 */
void Game::Sarai::StateDead::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x16B568
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x3208(r2)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0x1E0(r31)
	  bl        0x2BA4
	  mr        r3, r31
	  li        r4, 0xA
	  li        r5, 0
	  bl        -0x16BCC4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80270CE0
 * Size:	000044
 */
void Game::Sarai::StateDead::exec(Game::EnemyBase*)
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
	  bl        -0x135C20

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80270D24
 * Size:	000004
 */
void Game::Sarai::StateDead::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80270D28
 * Size:	000068
 */
void Game::Sarai::StateFall::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x3208(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x2C0(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0x1E0(r4)
	  bl        -0x16F394
	  mr        r3, r31
	  li        r4, 0x6
	  li        r5, 0
	  bl        -0x16BD6C
	  mr        r3, r31
	  bl        0x2AE4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80270D90
 * Size:	0001B8
 */
void Game::Sarai::StateFall::exec(Game::EnemyBase*)
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
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r4, r1, 0x14
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x14(r1)
	  lwz       r3, -0x6CF8(r13)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x18(r1)
	  lfs       f0, -0x3204(r2)
	  fsubs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  blt-      .loc_0x84
	  lfs       f1, 0x2C0(r31)
	  lfs       f0, -0x3200(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x8C

	.loc_0x84:
	  mr        r3, r31
	  bl        -0x16BB78

	.loc_0x8C:
	  mr        r3, r31
	  bl        -0x169B20
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xF0
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, -0x31FC(r2)
	  lfs       f0, -0x3208(r2)
	  fsubs     f1, f1, f2
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xD0
	  lfs       f0, -0x31F8(r2)
	  fadds     f1, f0, f1
	  b         .loc_0xE4

	.loc_0xD0:
	  lfs       f0, -0x31F8(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xE4
	  fsubs     f1, f1, f0

	.loc_0xE4:
	  stfs      f1, 0x1FC(r31)
	  lfs       f0, 0x1FC(r31)
	  stfs      f0, 0x1A8(r31)

	.loc_0xF0:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C0(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C0(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x1A0
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x140
	  mr        r3, r31
	  bl        0x2ECC
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x14
	  li        r4, 0xB
	  li        r6, 0x2
	  bl        -0x1D748
	  b         .loc_0x1A0

	.loc_0x140:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x1A0
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x3208(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x180
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1A0

	.loc_0x180:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1A0:
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
 * Address:	80270F48
 * Size:	000024
 */
void Game::Sarai::StateFall::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x16F5DC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80270F6C
 * Size:	000068
 */
void Game::Sarai::StateDamage::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x3208(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x2C0(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0x1E0(r4)
	  bl        -0x16F5D8
	  mr        r3, r31
	  li        r4, 0x7
	  li        r5, 0
	  bl        -0x16BFB0
	  mr        r3, r31
	  bl        0x28A0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80270FD4
 * Size:	000108
 */
void Game::Sarai::StateDamage::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x3208(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lfs       f1, 0x200(r4)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  beq-      .loc_0x60
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x2C0(r31)
	  lfs       f0, 0x9AC(r3)
	  fcmpo     cr0, f1, f0
	  bgt-      .loc_0x60
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x2FC(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0
	  bne-      .loc_0x68

	.loc_0x60:
	  mr        r3, r31
	  bl        -0x16BD98

	.loc_0x68:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C0(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C0(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xF0
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xF0
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x3208(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xD0
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xF0

	.loc_0xD0:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xF0:
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
 * Address:	802710DC
 * Size:	000024
 */
void Game::Sarai::StateDamage::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x16F770
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80271100
 * Size:	00004C
 */
void Game::Sarai::StateTakeOff::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  lwz       r0, 0x1E0(r4)
	  ori       r0, r0, 0x4
	  stw       r0, 0x1E0(r4)
	  bl        -0x16F758
	  mr        r3, r31
	  li        r4, 0x8
	  li        r5, 0
	  bl        -0x16C130
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8027114C
 * Size:	000108
 */
void Game::Sarai::StateTakeOff::exec(Game::EnemyBase*)
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
	  bl        0x1F64
	  lfs       f2, 0x200(r31)
	  lfs       f0, -0x3208(r2)
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  beq-      .loc_0x48
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x86C(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x50

	.loc_0x48:
	  mr        r3, r31
	  bl        -0x16BEF8

	.loc_0x50:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xF0
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xF0
	  mr        r3, r31
	  bl        0x255C
	  mr.       r5, r3
	  blt-      .loc_0x9C
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  mr        r4, r31
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xF0

	.loc_0x9C:
	  mr        r3, r31
	  bl        0x24B0
	  cmpwi     r3, 0
	  beq-      .loc_0xD0
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x9
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xF0

	.loc_0xD0:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xF0:
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
 * Address:	80271254
 * Size:	000024
 */
void Game::Sarai::StateTakeOff::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x16F8E8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80271278
 * Size:	000058
 */
void Game::Sarai::StateFlick::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  lwz       r0, 0x1E0(r4)
	  ori       r0, r0, 0x4
	  stw       r0, 0x1E0(r4)
	  lwz       r0, 0x1E0(r4)
	  oris      r0, r0, 0x20
	  stw       r0, 0x1E0(r4)
	  bl        -0x16F8DC
	  mr        r3, r31
	  li        r4, 0x5
	  li        r5, 0
	  bl        -0x16C2B4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802712D0
 * Size:	000118
 */
void Game::Sarai::StateFlick::exec(Game::EnemyBase*)
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
	  bl        0x1DE0
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x100
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x6C
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x31F4(r2)
	  li        r4, 0
	  lfs       f1, 0x53C(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x15E210
	  lfs       f0, -0x3208(r2)
	  stfs      f0, 0x20C(r31)
	  b         .loc_0x100

	.loc_0x6C:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x100
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x3208(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xAC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x100

	.loc_0xAC:
	  mr        r3, r31
	  bl        0x231C
	  cmpwi     r3, 0
	  beq-      .loc_0xE0
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x9
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x100

	.loc_0xE0:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x100:
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
 * Address:	802713E8
 * Size:	000030
 */
void Game::Sarai::StateFlick::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r4)
	  bl        -0x16FA88
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80271418
 * Size:	0000B0
 */
void Game::Sarai::StateWait::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f0, -0x3208(r2)
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stfs      f0, 0x2C0(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  stw       r0, 0x230(r4)
	  lwz       r0, 0x1E0(r4)
	  ori       r0, r0, 0x4
	  stw       r0, 0x1E0(r4)
	  bl        -0x1A7EB4
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, -0x31E8(r2)
	  stw       r0, 0x8(r1)
	  lfs       f2, -0x3200(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f1, -0x31F0(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, -0x31EC(r2)
	  fmuls     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x8C
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  bl        -0x16C498
	  b         .loc_0x9C

	.loc_0x8C:
	  mr        r3, r31
	  li        r4, 0x1
	  li        r5, 0
	  bl        -0x16C4AC

	.loc_0x9C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802714C8
 * Size:	000160
 */
void Game::Sarai::StateWait::exec(Game::EnemyBase*)
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
	  stw       r29, 0x14(r1)
	  mr        r30, r4
	  mr        r29, r3
	  mr        r3, r30
	  bl        0x1BDC
	  mr        r3, r30
	  fmr       f31, f1
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x300(r12)
	  mtctr     r12
	  bctrl
	  mr.       r31, r3
	  bne-      .loc_0x64
	  lwz       r3, 0xC0(r30)
	  lfs       f1, 0x2C0(r30)
	  lfs       f0, 0x8E4(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x6C

	.loc_0x64:
	  mr        r3, r30
	  bl        -0x16C290

	.loc_0x6C:
	  lwz       r3, 0xC0(r30)
	  lfs       f0, 0x86C(r3)
	  fcmpo     cr0, f31, f0
	  bgt-      .loc_0x8C
	  lfs       f1, 0x2C0(r30)
	  lfs       f0, -0x31E0(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xBC

	.loc_0x8C:
	  mr        r3, r30
	  bl        0x21C0
	  mr.       r5, r3
	  blt-      .loc_0xBC
	  lwz       r12, 0x0(r29)
	  mr        r3, r29
	  mr        r4, r30
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x13C

	.loc_0xBC:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C0(r30)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C0(r30)
	  lwz       r3, 0x188(r30)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x13C
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x13C
	  cmplwi    r31, 0
	  beq-      .loc_0x11C
	  stw       r31, 0x230(r30)
	  mr        r3, r29
	  mr        r4, r30
	  li        r5, 0x7
	  lwz       r12, 0x0(r29)
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x13C

	.loc_0x11C:
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x13C:
	  psq_l     f31,0x28(r1),0,0
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80271628
 * Size:	000004
 */
void Game::Sarai::StateWait::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8027162C
 * Size:	00005C
 */
void Game::Sarai::StateMove::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x3208(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x2C0(r4)
	  bl        0x1B8C
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x230(r31)
	  li        r4, 0x1
	  li        r5, 0
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x4
	  stw       r0, 0x1E0(r31)
	  bl        -0x16C66C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80271688
 * Size:	000208
 */
void Game::Sarai::StateMove::exec(Game::EnemyBase*)
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
	  stfd      f29, 0x30(r1)
	  psq_st    f29,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  mr        r30, r4
	  mr        r29, r3
	  mr        r3, r30
	  bl        0x1A0C
	  mr        r4, r30
	  fmr       f31, f1
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x2D0(r30)
	  mr        r3, r30
	  lfs       f2, 0x2D4(r30)
	  lfs       f0, 0x2CC(r30)
	  lfs       f30, 0x8(r1)
	  stfs      f0, 0x14(r1)
	  lfs       f29, 0x10(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f2, 0x1C(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x300(r12)
	  mtctr     r12
	  bctrl
	  mr.       r31, r3
	  bne-      .loc_0xCC
	  lfs       f1, 0x2C0(r30)
	  lfs       f0, -0x3204(r2)
	  fcmpo     cr0, f1, f0
	  bgt-      .loc_0xCC
	  lfs       f0, 0x1C(r1)
	  lfs       f1, 0x14(r1)
	  fsubs     f2, f29, f0
	  lfs       f0, -0x31DC(r2)
	  fsubs     f3, f30, f1
	  fmuls     f1, f2, f2
	  fmadds    f1, f3, f3, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xE8

	.loc_0xCC:
	  lfs       f0, -0x3208(r2)
	  mr        r3, r30
	  stfs      f0, 0x1D4(r30)
	  stfs      f0, 0x1D8(r30)
	  stfs      f0, 0x1DC(r30)
	  bl        -0x16C4C8
	  b         .loc_0x104

	.loc_0xE8:
	  lwz       r5, 0xC0(r30)
	  mr        r3, r30
	  addi      r4, r1, 0x14
	  lfs       f1, 0x894(r5)
	  lfs       f2, 0x30C(r5)
	  lfs       f3, 0x334(r5)
	  bl        -0x15C1AC

	.loc_0x104:
	  lwz       r3, 0xC0(r30)
	  lfs       f0, 0x86C(r3)
	  fcmpo     cr0, f31, f0
	  bgt-      .loc_0x124
	  lfs       f1, 0x2C0(r30)
	  lfs       f0, -0x31E0(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x154

	.loc_0x124:
	  mr        r3, r30
	  bl        0x1F68
	  mr.       r5, r3
	  blt-      .loc_0x154
	  lwz       r12, 0x0(r29)
	  mr        r3, r29
	  mr        r4, r30
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1D4

	.loc_0x154:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C0(r30)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C0(r30)
	  lwz       r3, 0x188(r30)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x1D4
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x1D4
	  cmplwi    r31, 0
	  beq-      .loc_0x1B4
	  stw       r31, 0x230(r30)
	  mr        r3, r29
	  mr        r4, r30
	  li        r5, 0x7
	  lwz       r12, 0x0(r29)
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1D4

	.loc_0x1B4:
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1D4:
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  psq_l     f30,0x48(r1),0,0
	  lfd       f30, 0x40(r1)
	  psq_l     f29,0x38(r1),0,0
	  lfd       f29, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r0, 0x64(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80271890
 * Size:	000004
 */
void Game::Sarai::StateMove::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80271894
 * Size:	000078
 */
void Game::Sarai::StateAttack::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x3208(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x2C0(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  lwz       r0, 0x1E0(r4)
	  oris      r0, r0, 0x20
	  stw       r0, 0x1E0(r4)
	  lwz       r0, 0x1E0(r4)
	  ori       r0, r0, 0x4
	  stw       r0, 0x1E0(r4)
	  bl        -0x16FF18
	  mr        r3, r31
	  li        r4, 0x2
	  li        r5, 0
	  bl        -0x16C8F0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8027190C
 * Size:	000614
 */
void Game::Sarai::StateAttack::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xE0(r1)
	  mflr      r0
	  stw       r0, 0xE4(r1)
	  stfd      f31, 0xD0(r1)
	  psq_st    f31,0xD8(r1),0,0
	  stfd      f30, 0xC0(r1)
	  psq_st    f30,0xC8(r1),0,0
	  stfd      f29, 0xB0(r1)
	  psq_st    f29,0xB8(r1),0,0
	  stfd      f28, 0xA0(r1)
	  psq_st    f28,0xA8(r1),0,0
	  stw       r31, 0x9C(r1)
	  stw       r30, 0x98(r1)
	  stw       r29, 0x94(r1)
	  lwz       r30, 0x230(r4)
	  mr        r29, r3
	  mr        r31, r4
	  cmplwi    r30, 0
	  beq-      .loc_0x3A4
	  mr        r3, r31
	  bl        -0x16C6F0
	  fmr       f31, f1
	  lfs       f0, -0x3204(r2)
	  fcmpo     cr0, f31, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x160
	  mr        r3, r31
	  bl        0x1758
	  mr        r4, r30
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x20
	  lfs       f30, 0x334(r5)
	  lwz       r12, 0x8(r12)
	  lfs       f31, 0x30C(r5)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x2C
	  lwz       r12, 0x0(r31)
	  lfs       f29, 0x20(r1)
	  lwz       r12, 0x8(r12)
	  lfs       f28, 0x28(r1)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x2C(r1)
	  lis       r3, 0x8051
	  lfs       f0, 0x34(r1)
	  subi      r3, r3, 0x2E20
	  fsubs     f1, f29, f1
	  fsubs     f2, f28, f0
	  bl        -0x23C8D0
	  bl        0x1A01F4
	  lwz       r12, 0x0(r31)
	  fmr       f29, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f29
	  bl        0x1A01FC
	  fmuls     f31, f1, f31
	  lfs       f0, -0x31D4(r2)
	  lfs       f1, -0x31D8(r2)
	  fmuls     f0, f0, f30
	  fabs      f2, f31
	  fmuls     f1, f1, f0
	  frsp      f0, f2
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x134
	  lfs       f0, -0x3208(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x130
	  fmr       f31, f1
	  b         .loc_0x134

	.loc_0x130:
	  fneg      f31, f1

	.loc_0x134:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f31, f1
	  bl        0x1A0178
	  stfs      f1, 0x1FC(r31)
	  lfs       f0, 0x1FC(r31)
	  stfs      f0, 0x1A8(r31)
	  b         .loc_0x3BC

	.loc_0x160:
	  lfs       f0, -0x31D0(r2)
	  fcmpo     cr0, f31, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x36C
	  lwz       r0, 0xC8(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x180
	  stfs      f0, 0x2C0(r31)

	.loc_0x180:
	  lfs       f1, 0x2C0(r31)
	  lfs       f0, -0x31D0(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x3BC
	  mr        r4, r30
	  addi      r3, r1, 0x68
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f28, 0x6C(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x5C
	  lfs       f0, -0x31CC(r2)
	  lwz       r12, 0x8(r12)
	  fadds     f28, f28, f0
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x50
	  lwz       r12, 0x0(r31)
	  lfs       f29, 0x60(r1)
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f3, 0x50(r1)
	  fsubs     f2, f28, f29
	  lfs       f0, 0x54(r1)
	  lfs       f1, 0x58(r1)
	  stfs      f3, 0x80(r1)
	  lwz       r3, -0x6514(r13)
	  stfs      f0, 0x84(r1)
	  lfs       f0, -0x31C8(r2)
	  stfs      f1, 0x88(r1)
	  lfs       f1, 0x54(r3)
	  lwz       r3, 0xC0(r31)
	  fdivs     f2, f2, f1
	  lfs       f1, 0x9D4(r3)
	  fmuls     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x22C
	  b         .loc_0x240

	.loc_0x22C:
	  lfs       f0, -0x31C4(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x23C
	  b         .loc_0x240

	.loc_0x23C:
	  fmr       f0, f1

	.loc_0x240:
	  stfs      f0, 0x84(r1)
	  mr        r3, r31
	  addi      r4, r1, 0x80
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x31C0(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x27C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x304(r12)
	  mtctr     r12
	  bctrl

	.loc_0x27C:
	  mr        r4, r30
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x8
	  lfs       f31, 0x334(r5)
	  lwz       r12, 0x8(r12)
	  lfs       f30, 0x30C(r5)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r31)
	  lfs       f28, 0x8(r1)
	  lwz       r12, 0x8(r12)
	  lfs       f29, 0x10(r1)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x14(r1)
	  lis       r3, 0x8051
	  lfs       f0, 0x1C(r1)
	  subi      r3, r3, 0x2E20
	  fsubs     f1, f28, f1
	  fsubs     f2, f29, f0
	  bl        -0x23CADC
	  bl        0x19FFE8
	  lwz       r12, 0x0(r31)
	  fmr       f29, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f29
	  bl        0x19FFF0
	  fmuls     f30, f1, f30
	  lfs       f0, -0x31D4(r2)
	  lfs       f1, -0x31D8(r2)
	  fmuls     f0, f0, f31
	  fabs      f2, f30
	  fmuls     f1, f1, f0
	  frsp      f0, f2
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x340
	  lfs       f0, -0x3208(r2)
	  fcmpo     cr0, f30, f0
	  ble-      .loc_0x33C
	  fmr       f30, f1
	  b         .loc_0x340

	.loc_0x33C:
	  fneg      f30, f1

	.loc_0x340:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f30, f1
	  bl        0x19FF6C
	  stfs      f1, 0x1FC(r31)
	  lfs       f0, 0x1FC(r31)
	  stfs      f0, 0x1A8(r31)
	  b         .loc_0x3BC

	.loc_0x36C:
	  mr        r3, r31
	  bl        0x1454
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x1D4(r31)
	  lfs       f0, 0x9FC(r3)
	  lfs       f2, 0x1D8(r31)
	  fmuls     f1, f1, f0
	  lfs       f3, 0x1DC(r31)
	  fmuls     f2, f2, f0
	  fmuls     f3, f3, f0
	  stfs      f1, 0x1D4(r31)
	  stfs      f2, 0x1D8(r31)
	  stfs      f3, 0x1DC(r31)
	  b         .loc_0x3BC

	.loc_0x3A4:
	  lwz       r12, 0x0(r3)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x3BC:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x5D8
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x528
	  lwz       r4, 0x230(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x5D8
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x44
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r31)
	  lfs       f28, 0x44(r1)
	  lwz       r12, 0x8(r12)
	  lfs       f29, 0x48(r1)
	  lfs       f30, 0x4C(r1)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x3C(r1)
	  lfs       f2, 0x40(r1)
	  fsubs     f6, f29, f0
	  lfs       f1, 0x38(r1)
	  fsubs     f7, f30, f2
	  lfs       f0, -0x3208(r2)
	  fsubs     f5, f28, f1
	  fmuls     f1, f6, f6
	  fmuls     f2, f7, f7
	  stfs      f6, 0x78(r1)
	  fmadds    f1, f5, f5, f1
	  stfs      f5, 0x74(r1)
	  stfs      f7, 0x7C(r1)
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x46C
	  ble-      .loc_0x470
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x470

	.loc_0x46C:
	  fmr       f1, f0

	.loc_0x470:
	  lfs       f0, -0x3208(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x490
	  lfs       f0, -0x3200(r2)
	  fdivs     f0, f0, f1
	  fmuls     f5, f5, f0
	  fmuls     f6, f6, f0
	  fmuls     f7, f7, f0

	.loc_0x490:
	  lfs       f2, -0x31BC(r2)
	  mr        r3, r31
	  lfs       f1, 0x78(r1)
	  addi      r4, r1, 0x74
	  fmuls     f6, f6, f2
	  lfs       f4, 0x74(r1)
	  fmuls     f5, f5, f2
	  lfs       f0, 0x7C(r1)
	  fmuls     f7, f7, f2
	  lfs       f3, -0x3208(r2)
	  fsubs     f2, f1, f6
	  lwz       r5, -0x6514(r13)
	  fsubs     f5, f4, f5
	  lfs       f1, -0x31B8(r2)
	  fsubs     f4, f0, f7
	  stfs      f2, 0x78(r1)
	  stfs      f5, 0x74(r1)
	  stfs      f4, 0x7C(r1)
	  stfs      f3, 0x78(r1)
	  lfs       f0, 0x54(r5)
	  fdivs     f0, f1, f0
	  fmuls     f2, f5, f0
	  fmuls     f1, f3, f0
	  fmuls     f0, f4, f0
	  stfs      f2, 0x74(r1)
	  stfs      f1, 0x78(r1)
	  stfs      f0, 0x7C(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x74(r1)
	  stfs      f0, 0x1D4(r31)
	  lfs       f0, 0x78(r1)
	  stfs      f0, 0x1D8(r31)
	  lfs       f0, 0x7C(r1)
	  stfs      f0, 0x1DC(r31)
	  b         .loc_0x5D8

	.loc_0x528:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x540
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r31)
	  b         .loc_0x5D8

	.loc_0x540:
	  cmplwi    r0, 0x4
	  bne-      .loc_0x57C
	  mr        r3, r31
	  bl        0x1844
	  cmpwi     r3, 0
	  bne-      .loc_0x5D8
	  mr        r3, r29
	  mr        r4, r31
	  lwz       r12, 0x0(r29)
	  li        r5, 0x8
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x5D8

	.loc_0x57C:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x5D8
	  mr        r3, r31
	  bl        0x1808
	  cmpwi     r3, 0
	  beq-      .loc_0x5B8
	  mr        r3, r29
	  mr        r4, r31
	  lwz       r12, 0x0(r29)
	  li        r5, 0x9
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x5D8

	.loc_0x5B8:
	  mr        r3, r29
	  mr        r4, r31
	  lwz       r12, 0x0(r29)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x5D8:
	  psq_l     f31,0xD8(r1),0,0
	  lfd       f31, 0xD0(r1)
	  psq_l     f30,0xC8(r1),0,0
	  lfd       f30, 0xC0(r1)
	  psq_l     f29,0xB8(r1),0,0
	  lfd       f29, 0xB0(r1)
	  psq_l     f28,0xA8(r1),0,0
	  lfd       f28, 0xA0(r1)
	  lwz       r31, 0x9C(r1)
	  lwz       r30, 0x98(r1)
	  lwz       r0, 0xE4(r1)
	  lwz       r29, 0x94(r1)
	  mtlr      r0
	  addi      r1, r1, 0xE0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80271F20
 * Size:	000044
 */
void Game::Sarai::StateAttack::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  lwz       r5, 0x1E0(r4)
	  ori       r5, r5, 0x40
	  stw       r5, 0x1E0(r4)
	  lwz       r5, 0x1E0(r4)
	  rlwinm    r5,r5,0,11,9
	  stw       r5, 0x1E0(r4)
	  stw       r0, 0x230(r4)
	  bl        -0x1705D4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80271F64
 * Size:	000058
 */
void Game::Sarai::StateFail::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  lwz       r0, 0x1E0(r4)
	  ori       r0, r0, 0x4
	  stw       r0, 0x1E0(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r4)
	  bl        -0x1705C8
	  mr        r3, r31
	  li        r4, 0x9
	  li        r5, 0
	  bl        -0x16CFA0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80271FBC
 * Size:	0000D8
 */
void Game::Sarai::StateFail::exec(Game::EnemyBase*)
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
	  bl        0x10F4
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x1D4(r31)
	  lfs       f0, 0x9FC(r3)
	  lfs       f2, 0x1D8(r31)
	  fmuls     f1, f1, f0
	  lfs       f3, 0x1DC(r31)
	  fmuls     f2, f2, f0
	  fmuls     f3, f3, f0
	  stfs      f1, 0x1D4(r31)
	  stfs      f2, 0x1D8(r31)
	  stfs      f3, 0x1DC(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xC0
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xC0
	  mr        r3, r31
	  bl        0x1670
	  cmpwi     r3, 0
	  beq-      .loc_0xA0
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x9
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
 * Address:	80272094
 * Size:	000030
 */
void Game::Sarai::StateFail::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x1E0(r4)
	  ori       r0, r0, 0x40
	  stw       r0, 0x1E0(r4)
	  bl        -0x170734
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802720C4
 * Size:	000064
 */
void Game::Sarai::StateCatchFly::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x3208(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x2C0(r4)
	  bl        0x10F4
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x230(r31)
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x4
	  stw       r0, 0x1E0(r31)
	  bl        -0x170734
	  mr        r3, r31
	  li        r4, 0x3
	  li        r5, 0
	  bl        -0x16D10C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80272128
 * Size:	0001C0
 */
void Game::Sarai::StateCatchFly::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  mr        r31, r4
	  mr        r30, r3
	  mr        r3, r31
	  bl        0xF80
	  mr        r4, r31
	  fmr       f31, f1
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x2D0(r31)
	  lfs       f5, 0x2D4(r31)
	  lfs       f2, 0x2CC(r31)
	  lfs       f0, -0x3204(r2)
	  stfs      f2, 0x14(r1)
	  lfs       f3, 0x8(r1)
	  stfs      f1, 0x18(r1)
	  lfs       f4, 0x10(r1)
	  stfs      f5, 0x1C(r1)
	  lfs       f1, 0x2C0(r31)
	  fcmpo     cr0, f1, f0
	  bgt-      .loc_0x94
	  fsubs     f1, f4, f5
	  lfs       f0, -0x31DC(r2)
	  fsubs     f2, f3, f2
	  fmuls     f1, f1, f1
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xB0

	.loc_0x94:
	  lfs       f0, -0x3208(r2)
	  mr        r3, r31
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x16CF30
	  b         .loc_0xCC

	.loc_0xB0:
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  addi      r4, r1, 0x14
	  lfs       f1, 0x8BC(r5)
	  lfs       f2, 0x30C(r5)
	  lfs       f3, 0x334(r5)
	  bl        -0x15CC14

	.loc_0xCC:
	  mr        r3, r31
	  bl        0x14A4
	  cmpwi     r3, 0
	  bne-      .loc_0x100
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1A0

	.loc_0x100:
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x86C(r3)
	  fcmpo     cr0, f31, f0
	  bgt-      .loc_0x120
	  lfs       f1, 0x2C0(r31)
	  lfs       f0, -0x31E0(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x150

	.loc_0x120:
	  mr        r3, r31
	  bl        0x14CC
	  mr.       r5, r3
	  blt-      .loc_0x150
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  mr        r4, r31
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1A0

	.loc_0x150:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C0(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C0(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x1A0
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x1A0
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0xA
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1A0:
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802722E8
 * Size:	000024
 */
void Game::Sarai::StateCatchFly::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x17097C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8027230C
 * Size:	000070
 */
void Game::Sarai::StateFallMeck::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x3208(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  lwz       r4, 0x1E0(r4)
	  rlwinm    r4,r4,0,11,9
	  stw       r4, 0x1E0(r31)
	  lwz       r4, 0x1E0(r31)
	  ori       r4, r4, 0x4
	  stw       r4, 0x1E0(r31)
	  stw       r0, 0x230(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x170988
	  mr        r3, r31
	  li        r4, 0x4
	  li        r5, 0
	  bl        -0x16D360
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8027237C
 * Size:	0000BC
 */
void Game::Sarai::StateFallMeck::exec(Game::EnemyBase*)
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
	  bl        0xD34
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xA4
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x50
	  lwz       r0, 0x1E0(r31)
	  oris      r0, r0, 0x20
	  stw       r0, 0x1E0(r31)
	  b         .loc_0xA4

	.loc_0x50:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x64
	  mr        r3, r31
	  bl        0x1030
	  b         .loc_0xA4

	.loc_0x64:
	  cmplwi    r0, 0x4
	  bne-      .loc_0x7C
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r31)
	  b         .loc_0xA4

	.loc_0x7C:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xA4
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xA4:
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
 * Address:	80272438
 * Size:	000054
 */
void Game::Sarai::StateFallMeck::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, -0x3208(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r4)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x308(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        -0x170AF8
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8027248C
 * Size:	000004
 */
void Game::Sarai::Obj::resetAttackableTimer(float)
{
	/*
	.loc_0x0:
	  blr
	*/
}

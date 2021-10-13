

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
 * Address:	802AFC74
 * Size:	000480
 */
void Game::BombSarai::FSM::init((Game::EnemyBase*))
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
	  subi      r30, r4, 0x6180
	  li        r4, 0xD
	  bl        -0x17F434
	  li        r3, 0x10
	  bl        -0x28BDFC
	  mr.       r4, r3
	  beq-      .loc_0x70
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r7, 0
	  subi      r6, r5, 0x17C8
	  subi      r5, r2, 0x2230
	  stw       r7, 0x4(r4)
	  subi      r0, r3, 0x17EC
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x70:
	  mr        r3, r31
	  bl        -0x17F3E0
	  li        r3, 0x10
	  bl        -0x28BE4C
	  mr.       r4, r3
	  beq-      .loc_0xC4
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x1
	  li        r7, 0
	  subi      r6, r5, 0x17C8
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2228
	  subi      r0, r3, 0x1810
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0xC4:
	  mr        r3, r31
	  bl        -0x17F434
	  li        r3, 0x10
	  bl        -0x28BEA0
	  mr.       r4, r3
	  beq-      .loc_0x118
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x2
	  li        r7, 0
	  subi      r6, r5, 0x17C8
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2220
	  subi      r0, r3, 0x1834
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x118:
	  mr        r3, r31
	  bl        -0x17F488
	  li        r3, 0x10
	  bl        -0x28BEF4
	  mr.       r4, r3
	  beq-      .loc_0x16C
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x3
	  li        r7, 0
	  subi      r6, r5, 0x17C8
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x20
	  subi      r0, r3, 0x1858
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x16C:
	  mr        r3, r31
	  bl        -0x17F4DC
	  li        r3, 0x10
	  bl        -0x28BF48
	  mr.       r4, r3
	  beq-      .loc_0x1C0
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x4
	  li        r7, 0
	  subi      r6, r5, 0x17C8
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2218
	  subi      r0, r3, 0x187C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x1C0:
	  mr        r3, r31
	  bl        -0x17F530
	  li        r3, 0x10
	  bl        -0x28BF9C
	  mr.       r4, r3
	  beq-      .loc_0x214
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x5
	  li        r7, 0
	  subi      r6, r5, 0x17C8
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x2C
	  subi      r0, r3, 0x18A0
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x214:
	  mr        r3, r31
	  bl        -0x17F584
	  li        r3, 0x10
	  bl        -0x28BFF0
	  mr.       r4, r3
	  beq-      .loc_0x268
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x6
	  li        r7, 0
	  subi      r6, r5, 0x17C8
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2210
	  subi      r0, r3, 0x18C4
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x268:
	  mr        r3, r31
	  bl        -0x17F5D8
	  li        r3, 0x10
	  bl        -0x28C044
	  mr.       r4, r3
	  beq-      .loc_0x2BC
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x7
	  li        r7, 0
	  subi      r6, r5, 0x17C8
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2208
	  subi      r0, r3, 0x18E8
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x2BC:
	  mr        r3, r31
	  bl        -0x17F62C
	  li        r3, 0x10
	  bl        -0x28C098
	  mr.       r4, r3
	  beq-      .loc_0x310
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x8
	  li        r7, 0
	  subi      r6, r5, 0x17C8
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2200
	  subi      r0, r3, 0x190C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x310:
	  mr        r3, r31
	  bl        -0x17F680
	  li        r3, 0x10
	  bl        -0x28C0EC
	  mr.       r4, r3
	  beq-      .loc_0x364
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x9
	  li        r7, 0
	  subi      r6, r5, 0x17C8
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x38
	  subi      r0, r3, 0x1930
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x364:
	  mr        r3, r31
	  bl        -0x17F6D4
	  li        r3, 0x10
	  bl        -0x28C140
	  mr.       r4, r3
	  beq-      .loc_0x3B8
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0xA
	  li        r7, 0
	  subi      r6, r5, 0x17C8
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x44
	  subi      r0, r3, 0x1954
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x3B8:
	  mr        r3, r31
	  bl        -0x17F728
	  li        r3, 0x10
	  bl        -0x28C194
	  mr.       r4, r3
	  beq-      .loc_0x40C
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0xB
	  li        r7, 0
	  subi      r6, r5, 0x17C8
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x21F8
	  subi      r0, r3, 0x1978
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x40C:
	  mr        r3, r31
	  bl        -0x17F77C
	  li        r3, 0x10
	  bl        -0x28C1E8
	  mr.       r4, r3
	  beq-      .loc_0x460
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0xC
	  li        r7, 0
	  subi      r6, r5, 0x17C8
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x50
	  subi      r0, r3, 0x199C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x460:
	  mr        r3, r31
	  bl        -0x17F7D0
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
 * Address:	802B00F4
 * Size:	000094
 */
void Game::BombSarai::StateDead::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x1AA9EC
	  lfs       f0, -0x21F0(r2)
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r31)
	  bl        -0x1AB140
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x58EA
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
 * Address:	802B0188
 * Size:	000134
 */
void Game::BombSarai::StateDead::exec((Game::EnemyBase*))
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
	  beq-      .loc_0x120
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x40
	  mr        r3, r31
	  li        r4, 0
	  bl        0x338C
	  b         .loc_0x120

	.loc_0x40:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x58
	  mr        r3, r31
	  li        r4, 0x1
	  bl        0x3374
	  b         .loc_0x120

	.loc_0x58:
	  cmplwi    r0, 0x4
	  bne-      .loc_0x70
	  mr        r3, r31
	  li        r4, 0x2
	  bl        0x335C
	  b         .loc_0x120

	.loc_0x70:
	  cmplwi    r0, 0x5
	  bne-      .loc_0x88
	  mr        r3, r31
	  li        r4, 0x3
	  bl        0x3344
	  b         .loc_0x120

	.loc_0x88:
	  cmplwi    r0, 0x6
	  bne-      .loc_0xA0
	  mr        r3, r31
	  li        r4, 0x4
	  bl        0x332C
	  b         .loc_0x120

	.loc_0xA0:
	  cmplwi    r0, 0x7
	  bne-      .loc_0x10C
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r5, r1, 0x14
	  lfs       f1, 0xC(r1)
	  li        r4, 0
	  lfs       f0, 0x10(r1)
	  li        r6, 0x2
	  stfs      f2, 0x14(r1)
	  lwz       r3, -0x6960(r13)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        -0x5E030
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x14
	  li        r4, 0xB
	  li        r6, 0x2
	  bl        -0x5CB00
	  lfs       f1, -0x21EC(r2)
	  mr        r3, r31
	  bl        0x33DC
	  b         .loc_0x120

	.loc_0x10C:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x120
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1751B4

	.loc_0x120:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B02BC
 * Size:	000004
 */
void Game::BombSarai::StateDead::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B02C0
 * Size:	0000B0
 */
void Game::BombSarai::StateDamage::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lfs       f0, -0x21F0(r2)
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x2C4(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0x1E0(r4)
	  bl        -0x1AE938
	  mr        r3, r31
	  li        r4, 0x4
	  li        r5, 0
	  bl        -0x1AB310
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r5, r1, 0x14
	  lfs       f1, 0xC(r1)
	  li        r4, 0x8
	  lfs       f0, 0x10(r1)
	  li        r6, 0x2
	  stfs      f2, 0x14(r1)
	  lwz       r3, -0x6958(r13)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        -0x5CBD8
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B0370
 * Size:	0001B4
 */
void Game::BombSarai::StateDamage::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lfs       f0, -0x21F0(r2)
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  lfs       f1, 0x200(r4)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  beq-      .loc_0x50
	  lwz       r0, 0x1F4(r31)
	  cmpwi     r0, 0
	  beq-      .loc_0x50
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x95C(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x58

	.loc_0x50:
	  mr        r3, r31
	  bl        -0x1AB124

	.loc_0x58:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C4(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x19C
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x98
	  lwz       r0, 0x1E0(r31)
	  oris      r0, r0, 0x20
	  stw       r0, 0x1E0(r31)
	  b         .loc_0x19C

	.loc_0x98:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x100
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f1, -0x21E8(r2)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r31)
	  bl        0x3244
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r5, r1, 0x14
	  lfs       f1, 0xC(r1)
	  li        r4, 0x8
	  lfs       f0, 0x10(r1)
	  li        r6, 0x2
	  stfs      f2, 0x14(r1)
	  lwz       r3, -0x6958(r13)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        -0x5CCE8
	  b         .loc_0x19C

	.loc_0x100:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x19C
	  lfs       f2, 0x200(r31)
	  lfs       f0, -0x21F0(r2)
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x140
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x19C

	.loc_0x140:
	  lwz       r3, 0xC0(r31)
	  lfs       f0, -0x21E4(r2)
	  lfs       f1, 0x104(r3)
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x17C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x9
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x19C

	.loc_0x17C:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0xA
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x19C:
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
 * Address:	802B0524
 * Size:	000030
 */
void Game::BombSarai::StateDamage::cleanup((Game::EnemyBase*))
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
	  bl        -0x1AEBC4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B0554
 * Size:	000054
 */
void Game::BombSarai::StateWait::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  lfs       f0, -0x21F0(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  li        r5, 0
	  lwz       r6, 0x1E0(r4)
	  li        r4, 0xC
	  ori       r6, r6, 0x4
	  stw       r6, 0x1E0(r3)
	  stw       r0, 0x2DC(r3)
	  stfs      f0, 0x2C4(r3)
	  stfs      f0, 0x1D4(r3)
	  stfs      f0, 0x1D8(r3)
	  stfs      f0, 0x1DC(r3)
	  bl        -0x1AB590
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B05A8
 * Size:	000148
 */
void Game::BombSarai::StateWait::exec((Game::EnemyBase*))
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
	  mr        r31, r4
	  mr        r30, r3
	  li        r4, 0
	  mr        r3, r31
	  bl        0x279C
	  fmr       f31, f1
	  mr        r3, r31
	  bl        -0x1A92E0
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x9C
	  mr        r3, r31
	  bl        0x2C80
	  cmplwi    r3, 0
	  beq-      .loc_0x68
	  li        r0, 0x6
	  mr        r3, r31
	  stw       r0, 0x2DC(r31)
	  bl        -0x1AB368
	  b         .loc_0x9C

	.loc_0x68:
	  lwz       r3, -0x6514(r13)
	  lfs       f2, 0x2C4(r31)
	  lfs       f1, 0x54(r3)
	  lfs       f0, -0x21E0(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0x2C4(r31)
	  lfs       f1, 0x2C4(r31)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x9C
	  li        r0, 0x4
	  mr        r3, r31
	  stw       r0, 0x2DC(r31)
	  bl        -0x1AB3A0

	.loc_0x9C:
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x844(r3)
	  fcmpo     cr0, f31, f0
	  bgt-      .loc_0xBC
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, -0x21DC(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xEC

	.loc_0xBC:
	  mr        r3, r31
	  bl        0x2C78
	  mr.       r5, r3
	  blt-      .loc_0xEC
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  mr        r4, r31
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x128

	.loc_0xEC:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x128
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x128
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2DC(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x128:
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

/*
 * --INFO--
 * Address:	802B06F0
 * Size:	000004
 */
void Game::BombSarai::StateWait::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B06F4
 * Size:	000074
 */
void Game::BombSarai::StateBombWait::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x21F0(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  lwz       r4, 0x1E0(r4)
	  ori       r4, r4, 0x4
	  stw       r4, 0x1E0(r31)
	  lwz       r4, 0x1E0(r31)
	  oris      r4, r4, 0x20
	  stw       r4, 0x1E0(r31)
	  stw       r0, 0x2DC(r31)
	  stfs      f0, 0x2C4(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1AED74
	  mr        r3, r31
	  li        r4, 0xD
	  li        r5, 0
	  bl        -0x1AB74C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B0768
 * Size:	000454
 */
void Game::BombSarai::StateBombWait::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x120(r1)
	  mflr      r0
	  stw       r0, 0x124(r1)
	  stfd      f31, 0x110(r1)
	  psq_st    f31,0x118(r1),0,0
	  stfd      f30, 0x100(r1)
	  psq_st    f30,0x108(r1),0,0
	  stfd      f29, 0xF0(r1)
	  psq_st    f29,0xF8(r1),0,0
	  stfd      f28, 0xE0(r1)
	  psq_st    f28,0xE8(r1),0,0
	  stfd      f27, 0xD0(r1)
	  psq_st    f27,0xD8(r1),0,0
	  stfd      f26, 0xC0(r1)
	  psq_st    f26,0xC8(r1),0,0
	  stfd      f25, 0xB0(r1)
	  psq_st    f25,0xB8(r1),0,0
	  stw       r31, 0xAC(r1)
	  stw       r30, 0xA8(r1)
	  stw       r29, 0xA4(r1)
	  stw       r28, 0xA0(r1)
	  mr        r31, r4
	  mr        r30, r3
	  li        r4, 0
	  mr        r3, r31
	  bl        0x25A4
	  fmr       f31, f1
	  mr        r3, r31
	  bl        0x2A98
	  lfs       f1, 0x2C8(r31)
	  mr        r28, r3
	  lfs       f0, -0x21D8(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x9C
	  li        r0, 0x7
	  mr        r3, r31
	  stw       r0, 0x2DC(r31)
	  bl        -0x1AB55C
	  b         .loc_0x318

	.loc_0x9C:
	  cmplwi    r28, 0
	  beq-      .loc_0x2F8
	  mr        r4, r28
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x0(r28)
	  addi      r3, r1, 0x68
	  lfs       f29, 0x58C(r5)
	  lwz       r12, 0x8(r12)
	  lfs       f30, 0x564(r5)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f2, 0x68(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x74
	  lfs       f1, 0x6C(r1)
	  lfs       f0, 0x70(r1)
	  lwz       r12, 0x8(r12)
	  stfs      f2, 0x50(r1)
	  stfs      f1, 0x54(r1)
	  stfs      f0, 0x58(r1)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x74(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0x7C(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0x50(r1)
	  lfs       f0, 0x58(r1)
	  lfs       f4, 0x78(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0x5C(r1)
	  stfs      f4, 0x60(r1)
	  stfs      f3, 0x64(r1)
	  bl        -0x27B788
	  bl        0x16133C
	  lwz       r12, 0x0(r31)
	  fmr       f25, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f25
	  bl        0x161344
	  mr        r4, r31
	  fmr       f27, f1
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x14
	  li        r29, 0
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r28)
	  lfs       f28, 0x14(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x8(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x2C
	  fsubs     f25, f0, f28
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r28)
	  lfs       f28, 0x30(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x24(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x44
	  fsubs     f26, f0, f28
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r28)
	  lfs       f28, 0x4C(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fmuls     f1, f26, f26
	  lfs       f2, 0x40(r1)
	  fmuls     f0, f30, f30
	  fsubs     f2, f2, f28
	  fmadds    f1, f25, f25, f1
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x250
	  lfs       f0, -0x21D0(r2)
	  fabs      f2, f27
	  lfs       f1, -0x21D4(r2)
	  fmuls     f0, f0, f29
	  frsp      f2, f2
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x250
	  li        r29, 0x1

	.loc_0x250:
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x26C
	  li        r0, 0x7
	  mr        r3, r31
	  stw       r0, 0x2DC(r31)
	  bl        -0x1AB72C
	  b         .loc_0x318

	.loc_0x26C:
	  mr        r4, r31
	  addi      r3, r1, 0x8C
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x80
	  lwz       r12, 0x0(r28)
	  lfs       f25, 0x8C(r1)
	  lwz       r12, 0x8(r12)
	  lfs       f26, 0x94(r1)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x88(r1)
	  lfs       f1, 0x80(r1)
	  fsubs     f2, f26, f0
	  lwz       r3, 0xC0(r31)
	  fsubs     f3, f25, f1
	  lfs       f0, 0x5B4(r3)
	  fmuls     f1, f2, f2
	  fmuls     f0, f0, f0
	  fmadds    f1, f3, f3, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x2E4
	  li        r0, 0x7
	  mr        r3, r31
	  stw       r0, 0x2DC(r31)
	  bl        -0x1AB7A4
	  b         .loc_0x318

	.loc_0x2E4:
	  li        r0, 0x5
	  mr        r3, r31
	  stw       r0, 0x2DC(r31)
	  bl        -0x1AB7B8
	  b         .loc_0x318

	.loc_0x2F8:
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, -0x21E0(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x318
	  li        r0, 0x5
	  mr        r3, r31
	  stw       r0, 0x2DC(r31)
	  bl        -0x1AB7DC

	.loc_0x318:
	  lwz       r0, 0x1E0(r31)
	  rlwinm.   r0,r0,0,11,11
	  beq-      .loc_0x348
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x8
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x3FC

	.loc_0x348:
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x844(r3)
	  fcmpo     cr0, f31, f0
	  bgt-      .loc_0x368
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, -0x21DC(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x398

	.loc_0x368:
	  mr        r3, r31
	  bl        0x280C
	  mr.       r5, r3
	  blt-      .loc_0x398
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  mr        r4, r31
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x3FC

	.loc_0x398:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C4(r31)
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C8(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C8(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x3FC
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x3FC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2DC(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x3FC:
	  psq_l     f31,0x118(r1),0,0
	  lfd       f31, 0x110(r1)
	  psq_l     f30,0x108(r1),0,0
	  lfd       f30, 0x100(r1)
	  psq_l     f29,0xF8(r1),0,0
	  lfd       f29, 0xF0(r1)
	  psq_l     f28,0xE8(r1),0,0
	  lfd       f28, 0xE0(r1)
	  psq_l     f27,0xD8(r1),0,0
	  lfd       f27, 0xD0(r1)
	  psq_l     f26,0xC8(r1),0,0
	  lfd       f26, 0xC0(r1)
	  psq_l     f25,0xB8(r1),0,0
	  lfd       f25, 0xB0(r1)
	  lwz       r31, 0xAC(r1)
	  lwz       r30, 0xA8(r1)
	  lwz       r29, 0xA4(r1)
	  lwz       r0, 0x124(r1)
	  lwz       r28, 0xA0(r1)
	  mtlr      r0
	  addi      r1, r1, 0x120
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B0BBC
 * Size:	000030
 */
void Game::BombSarai::StateBombWait::cleanup((Game::EnemyBase*))
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
	  bl        -0x1AF25C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B0BEC
 * Size:	00006C
 */
void Game::BombSarai::StateMove::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x21F0(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  lwz       r4, 0x1E0(r4)
	  ori       r4, r4, 0x4
	  stw       r4, 0x1E0(r31)
	  stw       r0, 0x2DC(r31)
	  stfs      f0, 0x2C4(r31)
	  bl        0x22F0
	  lfs       f0, -0x21F0(r2)
	  mr        r3, r31
	  li        r4, 0x6
	  li        r5, 0
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1ABC3C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B0C58
 * Size:	0001CC
 */
void Game::BombSarai::StateMove::exec((Game::EnemyBase*))
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
	  li        r4, 0
	  mr        r3, r31
	  bl        0x20EC
	  fmr       f31, f1
	  mr        r3, r31
	  bl        -0x1A9990
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x110
	  mr        r3, r31
	  bl        0x25D0
	  cmplwi    r3, 0
	  beq-      .loc_0x68
	  li        r0, 0x6
	  mr        r3, r31
	  stw       r0, 0x2DC(r31)
	  bl        -0x1ABA18
	  b         .loc_0x120

	.loc_0x68:
	  lwz       r5, -0x6514(r13)
	  mr        r4, r31
	  lfs       f1, 0x2C4(r31)
	  addi      r3, r1, 0x8
	  lfs       f0, 0x54(r5)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C4(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x2D0(r31)
	  lfs       f5, 0x2D4(r31)
	  lfs       f2, 0x2CC(r31)
	  lfs       f0, -0x21DC(r2)
	  stfs      f2, 0x14(r1)
	  lfs       f3, 0x8(r1)
	  stfs      f1, 0x18(r1)
	  lfs       f4, 0x10(r1)
	  stfs      f5, 0x1C(r1)
	  lfs       f1, 0x2C4(r31)
	  fcmpo     cr0, f1, f0
	  bgt-      .loc_0xE0
	  fsubs     f1, f4, f5
	  lfs       f0, -0x21CC(r2)
	  fsubs     f2, f3, f2
	  fmuls     f1, f1, f1
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xF0

	.loc_0xE0:
	  li        r0, 0x2
	  mr        r3, r31
	  stw       r0, 0x2DC(r31)
	  bl        -0x1ABAA4

	.loc_0xF0:
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  addi      r4, r1, 0x14
	  lfs       f1, 0x2E4(r5)
	  lfs       f2, 0x30C(r5)
	  lfs       f3, 0x334(r5)
	  bl        -0x19B784
	  b         .loc_0x120

	.loc_0x110:
	  lfs       f0, -0x21F0(r2)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)

	.loc_0x120:
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x844(r3)
	  fcmpo     cr0, f31, f0
	  bgt-      .loc_0x140
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, -0x21DC(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x170

	.loc_0x140:
	  mr        r3, r31
	  bl        0x2544
	  mr.       r5, r3
	  blt-      .loc_0x170
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  mr        r4, r31
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1AC

	.loc_0x170:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x1AC
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x1AC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2DC(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1AC:
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
 * Address:	802B0E24
 * Size:	000004
 */
void Game::BombSarai::StateMove::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B0E28
 * Size:	000080
 */
void Game::BombSarai::StateBombMove::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x21F0(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  lwz       r4, 0x1E0(r4)
	  ori       r4, r4, 0x4
	  stw       r4, 0x1E0(r31)
	  lwz       r4, 0x1E0(r31)
	  oris      r4, r4, 0x20
	  stw       r4, 0x1E0(r31)
	  stw       r0, 0x2DC(r31)
	  stfs      f0, 0x2C4(r31)
	  bl        0x20A8
	  mr        r3, r31
	  bl        -0x1AF4A4
	  lfs       f0, -0x21F0(r2)
	  mr        r3, r31
	  li        r4, 0x7
	  li        r5, 0
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1ABE8C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B0EA8
 * Size:	0004E4
 */
void Game::BombSarai::StateBombMove::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x150(r1)
	  mflr      r0
	  stw       r0, 0x154(r1)
	  stfd      f31, 0x140(r1)
	  psq_st    f31,0x148(r1),0,0
	  stfd      f30, 0x130(r1)
	  psq_st    f30,0x138(r1),0,0
	  stfd      f29, 0x120(r1)
	  psq_st    f29,0x128(r1),0,0
	  stfd      f28, 0x110(r1)
	  psq_st    f28,0x118(r1),0,0
	  stfd      f27, 0x100(r1)
	  psq_st    f27,0x108(r1),0,0
	  stfd      f26, 0xF0(r1)
	  psq_st    f26,0xF8(r1),0,0
	  stfd      f25, 0xE0(r1)
	  psq_st    f25,0xE8(r1),0,0
	  stfd      f24, 0xD0(r1)
	  psq_st    f24,0xD8(r1),0,0
	  stfd      f23, 0xC0(r1)
	  psq_st    f23,0xC8(r1),0,0
	  stw       r31, 0xBC(r1)
	  stw       r30, 0xB8(r1)
	  stw       r29, 0xB4(r1)
	  stw       r28, 0xB0(r1)
	  mr        r31, r4
	  mr        r30, r3
	  li        r4, 0
	  mr        r3, r31
	  bl        0x1E54
	  fmr       f31, f1
	  mr        r3, r31
	  bl        0x2348
	  lwz       r12, 0x0(r31)
	  mr        r28, r3
	  mr        r4, r31
	  addi      r3, r1, 0x8C
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x2C8(r31)
	  lfs       f0, -0x21D8(r2)
	  lfs       f28, 0x8C(r1)
	  fcmpo     cr0, f1, f0
	  lfs       f27, 0x94(r1)
	  ble-      .loc_0xCC
	  li        r0, 0x7
	  mr        r3, r31
	  stw       r0, 0x2DC(r31)
	  bl        -0x1ABCCC
	  b         .loc_0x358

	.loc_0xCC:
	  cmplwi    r28, 0
	  beq-      .loc_0x304
	  mr        r4, r28
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x0(r28)
	  addi      r3, r1, 0x68
	  lfs       f29, 0x58C(r5)
	  lwz       r12, 0x8(r12)
	  lfs       f30, 0x564(r5)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f2, 0x68(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x74
	  lfs       f1, 0x6C(r1)
	  lfs       f0, 0x70(r1)
	  lwz       r12, 0x8(r12)
	  stfs      f2, 0x50(r1)
	  stfs      f1, 0x54(r1)
	  stfs      f0, 0x58(r1)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x74(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0x7C(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0x50(r1)
	  lfs       f0, 0x58(r1)
	  lfs       f4, 0x78(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0x5C(r1)
	  stfs      f4, 0x60(r1)
	  stfs      f3, 0x64(r1)
	  bl        -0x27BEF8
	  bl        0x160BCC
	  lwz       r12, 0x0(r31)
	  fmr       f23, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f23
	  bl        0x160BD4
	  mr        r4, r31
	  fmr       f25, f1
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x14
	  li        r29, 0
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r28)
	  lfs       f26, 0x14(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x8(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x2C
	  fsubs     f23, f0, f26
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r28)
	  lfs       f26, 0x30(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x24(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x44
	  fsubs     f24, f0, f26
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r28)
	  lfs       f26, 0x4C(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fmuls     f1, f24, f24
	  lfs       f2, 0x40(r1)
	  fmuls     f0, f30, f30
	  fsubs     f2, f2, f26
	  fmadds    f1, f23, f23, f1
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x280
	  lfs       f0, -0x21D0(r2)
	  fabs      f2, f25
	  lfs       f1, -0x21D4(r2)
	  fmuls     f0, f0, f29
	  frsp      f2, f2
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x280
	  li        r29, 0x1

	.loc_0x280:
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x29C
	  li        r0, 0x7
	  mr        r3, r31
	  stw       r0, 0x2DC(r31)
	  bl        -0x1ABE9C
	  b         .loc_0x358

	.loc_0x29C:
	  mr        r4, r28
	  addi      r3, r1, 0x80
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x80(r1)
	  lfs       f1, 0x88(r1)
	  lfs       f0, 0x84(r1)
	  fsubs     f4, f28, f2
	  fsubs     f3, f27, f1
	  stfs      f2, 0x98(r1)
	  stfs      f0, 0x9C(r1)
	  fmuls     f0, f3, f3
	  stfs      f1, 0xA0(r1)
	  lwz       r3, 0xC0(r31)
	  fmadds    f1, f4, f4, f0
	  lfs       f0, 0x5B4(r3)
	  fmuls     f0, f0, f0
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x358
	  li        r0, 0x7
	  mr        r3, r31
	  stw       r0, 0x2DC(r31)
	  bl        -0x1ABF04
	  b         .loc_0x358

	.loc_0x304:
	  lfs       f1, 0x2D0(r31)
	  lfs       f3, 0x2D4(r31)
	  lfs       f2, 0x2CC(r31)
	  lfs       f0, -0x21DC(r2)
	  stfs      f2, 0x98(r1)
	  stfs      f1, 0x9C(r1)
	  stfs      f3, 0xA0(r1)
	  lfs       f1, 0x2C4(r31)
	  fcmpo     cr0, f1, f0
	  bgt-      .loc_0x348
	  fsubs     f1, f27, f3
	  lfs       f0, -0x21CC(r2)
	  fsubs     f2, f28, f2
	  fmuls     f1, f1, f1
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x358

	.loc_0x348:
	  li        r0, 0x5
	  mr        r3, r31
	  stw       r0, 0x2DC(r31)
	  bl        -0x1ABF5C

	.loc_0x358:
	  mr        r3, r31
	  bl        -0x1A9F04
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x37C
	  lfs       f0, -0x21F0(r2)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  b         .loc_0x398

	.loc_0x37C:
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  addi      r4, r1, 0x98
	  lfs       f1, 0x2E4(r5)
	  lfs       f2, 0x30C(r5)
	  lfs       f3, 0x334(r5)
	  bl        -0x19BC60

	.loc_0x398:
	  lwz       r0, 0x1E0(r31)
	  rlwinm.   r0,r0,0,11,11
	  beq-      .loc_0x3C8
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x8
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x47C

	.loc_0x3C8:
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x844(r3)
	  fcmpo     cr0, f31, f0
	  bgt-      .loc_0x3E8
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, -0x21DC(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x418

	.loc_0x3E8:
	  mr        r3, r31
	  bl        0x204C
	  mr.       r5, r3
	  blt-      .loc_0x418
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  mr        r4, r31
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x47C

	.loc_0x418:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C4(r31)
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C8(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C8(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x47C
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x47C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2DC(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x47C:
	  psq_l     f31,0x148(r1),0,0
	  lfd       f31, 0x140(r1)
	  psq_l     f30,0x138(r1),0,0
	  lfd       f30, 0x130(r1)
	  psq_l     f29,0x128(r1),0,0
	  lfd       f29, 0x120(r1)
	  psq_l     f28,0x118(r1),0,0
	  lfd       f28, 0x110(r1)
	  psq_l     f27,0x108(r1),0,0
	  lfd       f27, 0x100(r1)
	  psq_l     f26,0xF8(r1),0,0
	  lfd       f26, 0xF0(r1)
	  psq_l     f25,0xE8(r1),0,0
	  lfd       f25, 0xE0(r1)
	  psq_l     f24,0xD8(r1),0,0
	  lfd       f24, 0xD0(r1)
	  psq_l     f23,0xC8(r1),0,0
	  lfd       f23, 0xC0(r1)
	  lwz       r31, 0xBC(r1)
	  lwz       r30, 0xB8(r1)
	  lwz       r29, 0xB4(r1)
	  lwz       r0, 0x154(r1)
	  lwz       r28, 0xB0(r1)
	  mtlr      r0
	  addi      r1, r1, 0x150
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B138C
 * Size:	000030
 */
void Game::BombSarai::StateBombMove::cleanup((Game::EnemyBase*))
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
	  bl        -0x1AFA2C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B13BC
 * Size:	000080
 */
void Game::BombSarai::StateSupply::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  lwz       r4, 0x1E0(r4)
	  ori       r4, r4, 0x4
	  stw       r4, 0x1E0(r31)
	  lwz       r4, 0x1E0(r31)
	  oris      r4, r4, 0x20
	  stw       r4, 0x1E0(r31)
	  stw       r0, 0x2DC(r31)
	  bl        0x1D3C
	  mr        r3, r31
	  bl        -0x1AFA30
	  lfs       f0, -0x21F0(r2)
	  mr        r3, r31
	  li        r4, 0x8
	  li        r5, 0
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1AC418
	  mr        r3, r31
	  bl        0x20F4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B143C
 * Size:	0000AC
 */
void Game::BombSarai::StateSupply::exec((Game::EnemyBase*))
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
	  mr        r3, r31
	  bl        0x1910
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x94
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x94
	  mr        r3, r31
	  bl        0x1E5C
	  mr.       r5, r3
	  blt-      .loc_0x74
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  mr        r4, r31
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x94

	.loc_0x74:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x94:
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
 * Address:	802B14E8
 * Size:	000038
 */
void Game::BombSarai::StateSupply::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x21F0(r2)
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r4)
	  stfs      f0, 0x2C8(r4)
	  bl        -0x1AFB90
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B1520
 * Size:	000070
 */
void Game::BombSarai::StateRelease::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x21F0(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  lwz       r4, 0x1E0(r4)
	  ori       r4, r4, 0x4
	  stw       r4, 0x1E0(r31)
	  lwz       r4, 0x1E0(r31)
	  oris      r4, r4, 0x20
	  stw       r4, 0x1E0(r31)
	  stw       r0, 0x2DC(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1AFB9C
	  mr        r3, r31
	  li        r4, 0x5
	  li        r5, 0
	  bl        -0x1AC574
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B1590
 * Size:	000184
 */
void Game::BombSarai::StateRelease::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  mr        r31, r4
	  li        r4, 0
	  stw       r30, 0x38(r1)
	  mr        r30, r3
	  mr        r3, r31
	  bl        0x17BC
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x16C
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x114
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  lfs       f0, -0x21F0(r2)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x6C
	  fneg      f2, f2

	.loc_0x6C:
	  lfs       f3, -0x21C4(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x21F0(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f2, f2, f3
	  lfs       f4, -0x21C8(r2)
	  fcmpo     cr0, f1, f0
	  fctiwz    f0, f2
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f2, f4, f0
	  bge-      .loc_0xCC
	  lfs       f0, -0x21C0(r2)
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f0, f0
	  b         .loc_0xE4

	.loc_0xCC:
	  fmuls     f0, f1, f3
	  fctiwz    f0, f0
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0

	.loc_0xE4:
	  fmuls     f1, f4, f0
	  lfs       f0, -0x21BC(r2)
	  stfs      f2, 0x10(r1)
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  stfs      f1, 0x8(r1)
	  stfs      f0, 0xC(r1)
	  bl        0x1B68
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r31)
	  b         .loc_0x16C

	.loc_0x114:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x16C
	  mr        r3, r31
	  bl        0x1C30
	  mr.       r5, r3
	  blt-      .loc_0x14C
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  mr        r4, r31
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x16C

	.loc_0x14C:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x16C:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B1714
 * Size:	000030
 */
void Game::BombSarai::StateRelease::cleanup((Game::EnemyBase*))
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
	  bl        -0x1AFDB4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B1744
 * Size:	0000C4
 */
void Game::BombSarai::StateFall::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lfs       f0, -0x21F0(r2)
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x2C4(r4)
	  lwz       r0, 0x1E0(r4)
	  oris      r0, r0, 0x20
	  stw       r0, 0x1E0(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0x1E0(r4)
	  bl        -0x1AFDBC
	  mr        r3, r31
	  li        r4, 0x1
	  li        r5, 0
	  bl        -0x1AC794
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r5, r1, 0x14
	  lfs       f1, 0xC(r1)
	  li        r4, 0
	  lfs       f0, 0x10(r1)
	  li        r6, 0x2
	  stfs      f2, 0x14(r1)
	  lwz       r3, -0x6960(r13)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        -0x5F5A0
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x14
	  li        r4, 0xB
	  li        r6, 0x2
	  bl        -0x5E070
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B1808
 * Size:	0002D8
 */
void Game::BombSarai::StateFall::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stw       r31, 0x6C(r1)
	  mr        r31, r4
	  stw       r30, 0x68(r1)
	  mr        r30, r3
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x14(r1)
	  addi      r4, r1, 0x38
	  lfs       f1, 0x18(r1)
	  lfs       f0, 0x1C(r1)
	  stfs      f2, 0x38(r1)
	  lwz       r3, -0x6CF8(r13)
	  stfs      f1, 0x3C(r1)
	  stfs      f0, 0x40(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x3C(r1)
	  lfs       f0, -0x21B8(r2)
	  fsubs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  blt-      .loc_0x84
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, -0x21B4(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x8C

	.loc_0x84:
	  mr        r3, r31
	  bl        -0x1AC5F0

	.loc_0x8C:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C4(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x2C0
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x18C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  lfs       f0, -0x21F0(r2)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0xE4
	  fneg      f2, f2

	.loc_0xE4:
	  lfs       f3, -0x21C4(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x21F0(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f2, f2, f3
	  lfs       f4, -0x21BC(r2)
	  fcmpo     cr0, f1, f0
	  fctiwz    f0, f2
	  stfd      f0, 0x48(r1)
	  lwz       r0, 0x4C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f2, f4, f0
	  bge-      .loc_0x144
	  lfs       f0, -0x21C0(r2)
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x50(r1)
	  lwz       r0, 0x54(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f0, f0
	  b         .loc_0x15C

	.loc_0x144:
	  fmuls     f0, f1, f3
	  fctiwz    f0, f0
	  stfd      f0, 0x58(r1)
	  lwz       r0, 0x5C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0

	.loc_0x15C:
	  fmuls     f1, f4, f0
	  lfs       f0, -0x21B0(r2)
	  stfs      f2, 0x34(r1)
	  mr        r3, r31
	  addi      r4, r1, 0x2C
	  stfs      f1, 0x2C(r1)
	  stfs      f0, 0x30(r1)
	  bl        0x1878
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r31)
	  b         .loc_0x2C0

	.loc_0x18C:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x1A4
	  mr        r3, r31
	  li        r4, 0
	  bl        0x1BA8
	  b         .loc_0x2C0

	.loc_0x1A4:
	  cmplwi    r0, 0x4
	  bne-      .loc_0x1BC
	  mr        r3, r31
	  li        r4, 0x1
	  bl        0x1B90
	  b         .loc_0x2C0

	.loc_0x1BC:
	  cmplwi    r0, 0x5
	  bne-      .loc_0x1D4
	  mr        r3, r31
	  li        r4, 0x2
	  bl        0x1B78
	  b         .loc_0x2C0

	.loc_0x1D4:
	  cmplwi    r0, 0x6
	  bne-      .loc_0x1EC
	  mr        r3, r31
	  li        r4, 0x3
	  bl        0x1B60
	  b         .loc_0x2C0

	.loc_0x1EC:
	  cmplwi    r0, 0x7
	  bne-      .loc_0x204
	  mr        r3, r31
	  li        r4, 0x4
	  bl        0x1B48
	  b         .loc_0x2C0

	.loc_0x204:
	  cmplwi    r0, 0x8
	  bne-      .loc_0x260
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r5, r1, 0x20
	  lfs       f1, 0xC(r1)
	  li        r4, 0xB
	  lfs       f0, 0x10(r1)
	  li        r6, 0x2
	  stfs      f2, 0x20(r1)
	  lwz       r3, -0x6958(r13)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  bl        -0x5E2D4
	  lfs       f1, -0x21EC(r2)
	  mr        r3, r31
	  bl        0x1C08
	  b         .loc_0x2C0

	.loc_0x260:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x2C0
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x21F0(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x2A0
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x2C0

	.loc_0x2A0:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x2C0:
	  lwz       r0, 0x74(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r30, 0x68(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B1AE0
 * Size:	000030
 */
void Game::BombSarai::StateFall::cleanup((Game::EnemyBase*))
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
	  bl        -0x1B0180
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B1B10
 * Size:	000054
 */
void Game::BombSarai::StateTakeOff1::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x21F0(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x20C(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0x1E0(r4)
	  bl        -0x1B0170
	  mr        r3, r31
	  li        r4, 0x9
	  li        r5, 0
	  bl        -0x1ACB48
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B1B64
 * Size:	000110
 */
void Game::BombSarai::StateTakeOff1::exec((Game::EnemyBase*))
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
	  lfs       f31, -0x21F0(r2)
	  mr        r31, r4
	  mr        r30, r3
	  mr        r3, r31
	  bl        -0x1AC924
	  lfs       f0, -0x21AC(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x58
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  li        r4, 0
	  ori       r0, r0, 0x4
	  stw       r0, 0x1E0(r31)
	  bl        0x11BC
	  fmr       f31, f1

	.loc_0x58:
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x21F0(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  beq-      .loc_0x7C
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x844(r3)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0xB4

	.loc_0x7C:
	  mr        r3, r31
	  bl        0x16FC
	  mr.       r5, r3
	  blt-      .loc_0xAC
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  mr        r4, r31
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xF0

	.loc_0xAC:
	  mr        r3, r31
	  bl        -0x1AC974

	.loc_0xB4:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xF0
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xF0
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xF0:
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

/*
 * --INFO--
 * Address:	802B1C74
 * Size:	000024
 */
void Game::BombSarai::StateTakeOff1::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x1B0308
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B1C98
 * Size:	000054
 */
void Game::BombSarai::StateTakeOff2::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x21F0(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x20C(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0x1E0(r4)
	  bl        -0x1B02F8
	  mr        r3, r31
	  li        r4, 0xA
	  li        r5, 0
	  bl        -0x1ACCD0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B1CEC
 * Size:	000110
 */
void Game::BombSarai::StateTakeOff2::exec((Game::EnemyBase*))
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
	  lfs       f31, -0x21F0(r2)
	  mr        r31, r4
	  mr        r30, r3
	  mr        r3, r31
	  bl        -0x1ACAAC
	  lfs       f0, -0x21A8(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x58
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  li        r4, 0x1
	  ori       r0, r0, 0x4
	  stw       r0, 0x1E0(r31)
	  bl        0x1034
	  fmr       f31, f1

	.loc_0x58:
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x21F0(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  beq-      .loc_0x7C
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x844(r3)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0xB4

	.loc_0x7C:
	  mr        r3, r31
	  bl        0x1574
	  mr.       r5, r3
	  blt-      .loc_0xAC
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  mr        r4, r31
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xF0

	.loc_0xAC:
	  mr        r3, r31
	  bl        -0x1ACAFC

	.loc_0xB4:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xF0
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xF0
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xF0:
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

/*
 * --INFO--
 * Address:	802B1DFC
 * Size:	000024
 */
void Game::BombSarai::StateTakeOff2::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x1B0490
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B1E20
 * Size:	00004C
 */
void Game::BombSarai::StateFlick::init((Game::EnemyBase*, Game::StateArg*))
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
	  bl        -0x1B0478
	  mr        r3, r31
	  li        r4, 0x2
	  li        r5, 0
	  bl        -0x1ACE50
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B1E6C
 * Size:	0000E0
 */
void Game::BombSarai::StateFlick::exec((Game::EnemyBase*))
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
	  mr        r3, r31
	  bl        0xEE0
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xC8
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x70
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x21A4(r2)
	  li        r4, 0
	  lfs       f1, 0x53C(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x19EDB0
	  lfs       f0, -0x21F0(r2)
	  stfs      f0, 0x20C(r31)
	  b         .loc_0xC8

	.loc_0x70:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xC8
	  mr        r3, r31
	  bl        0x13F8
	  mr.       r5, r3
	  blt-      .loc_0xA8
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  mr        r4, r31
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xC8

	.loc_0xA8:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xC8:
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
 * Address:	802B1F4C
 * Size:	000024
 */
void Game::BombSarai::StateFlick::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x1B05E0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B1F70
 * Size:	000058
 */
void Game::BombSarai::StateBombFlick::init((Game::EnemyBase*, Game::StateArg*))
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
	  bl        -0x1B05D4
	  mr        r3, r31
	  li        r4, 0x3
	  li        r5, 0
	  bl        -0x1ACFAC
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B1FC8
 * Size:	000110
 */
void Game::BombSarai::StateBombFlick::exec((Game::EnemyBase*))
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
	  mr        r3, r31
	  bl        0xD84
	  lwz       r0, 0x1E0(r31)
	  rlwinm.   r0,r0,0,11,11
	  beq-      .loc_0x58
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x8
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xF8

	.loc_0x58:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xF8
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0xA0
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x21A4(r2)
	  li        r4, 0
	  lfs       f1, 0x53C(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x19EF3C
	  lfs       f0, -0x21F0(r2)
	  stfs      f0, 0x20C(r31)
	  b         .loc_0xF8

	.loc_0xA0:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xF8
	  mr        r3, r31
	  bl        0x126C
	  mr.       r5, r3
	  blt-      .loc_0xD8
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  mr        r4, r31
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xF8

	.loc_0xD8:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xF8:
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
 * Address:	802B20D8
 * Size:	000030
 */
void Game::BombSarai::StateBombFlick::cleanup((Game::EnemyBase*))
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
	  bl        -0x1B0778
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802B2108
 * Size:	000028
 */
void __sinit_BombSaraiState_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804D
	  stw       r0, -0x68F8(r13)
	  stfsu     f0, -0x19A8(r3)
	  stfs      f0, -0x68F4(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

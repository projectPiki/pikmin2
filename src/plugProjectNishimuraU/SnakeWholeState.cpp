

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
 * Address:	802CB94C
 * Size:	0003D0
 */
void Game::SnakeWhole::FSM::init((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0xB
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x19B100
	  li        r3, 0x10
	  bl        -0x2A7AC8
	  mr.       r4, r3
	  beq-      .loc_0x64
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r7, 0
	  addi      r6, r5, 0x22E8
	  subi      r5, r2, 0x1B90
	  stw       r7, 0x4(r4)
	  addi      r0, r3, 0x22C4
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x64:
	  mr        r3, r31
	  bl        -0x19B0AC
	  li        r3, 0x10
	  bl        -0x2A7B18
	  mr.       r4, r3
	  beq-      .loc_0xB8
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x1
	  li        r7, 0
	  addi      r6, r5, 0x22E8
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1B88
	  addi      r0, r3, 0x22A0
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0xB8:
	  mr        r3, r31
	  bl        -0x19B100
	  li        r3, 0x10
	  bl        -0x2A7B6C
	  mr.       r4, r3
	  beq-      .loc_0x10C
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x2
	  li        r7, 0
	  addi      r6, r5, 0x22E8
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1B80
	  addi      r0, r3, 0x227C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x10C:
	  mr        r3, r31
	  bl        -0x19B154
	  li        r3, 0x10
	  bl        -0x2A7BC0
	  mr.       r4, r3
	  beq-      .loc_0x160
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x3
	  li        r7, 0
	  addi      r6, r5, 0x22E8
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1B78
	  addi      r0, r3, 0x2258
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x160:
	  mr        r3, r31
	  bl        -0x19B1A8
	  li        r3, 0x10
	  bl        -0x2A7C14
	  mr.       r4, r3
	  beq-      .loc_0x1B8
	  lis       r3, 0x804B
	  lis       r6, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r5, 0x8049
	  stw       r0, 0x0(r4)
	  li        r0, 0x4
	  lis       r3, 0x804D
	  li        r7, 0
	  stw       r0, 0x4(r4)
	  addi      r6, r6, 0x22E8
	  subi      r5, r5, 0x4810
	  addi      r0, r3, 0x2234
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x1B8:
	  mr        r3, r31
	  bl        -0x19B200
	  li        r3, 0x10
	  bl        -0x2A7C6C
	  mr.       r4, r3
	  beq-      .loc_0x20C
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x5
	  li        r7, 0
	  addi      r6, r5, 0x22E8
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1B70
	  addi      r0, r3, 0x2210
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x20C:
	  mr        r3, r31
	  bl        -0x19B254
	  li        r3, 0x10
	  bl        -0x2A7CC0
	  mr.       r4, r3
	  beq-      .loc_0x260
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x6
	  li        r7, 0
	  addi      r6, r5, 0x22E8
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1B68
	  addi      r0, r3, 0x21EC
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x260:
	  mr        r3, r31
	  bl        -0x19B2A8
	  li        r3, 0x10
	  bl        -0x2A7D14
	  mr.       r4, r3
	  beq-      .loc_0x2B4
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x7
	  li        r7, 0
	  addi      r6, r5, 0x22E8
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1B60
	  addi      r0, r3, 0x21C8
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x2B4:
	  mr        r3, r31
	  bl        -0x19B2FC
	  li        r3, 0x10
	  bl        -0x2A7D68
	  mr.       r4, r3
	  beq-      .loc_0x308
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x8
	  li        r7, 0
	  addi      r6, r5, 0x22E8
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1B58
	  addi      r0, r3, 0x21A4
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x308:
	  mr        r3, r31
	  bl        -0x19B350
	  li        r3, 0x10
	  bl        -0x2A7DBC
	  mr.       r4, r3
	  beq-      .loc_0x35C
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x9
	  li        r7, 0
	  addi      r6, r5, 0x22E8
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1B50
	  addi      r0, r3, 0x2180
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x35C:
	  mr        r3, r31
	  bl        -0x19B3A4
	  li        r3, 0x10
	  bl        -0x2A7E10
	  mr.       r4, r3
	  beq-      .loc_0x3B4
	  lis       r3, 0x804B
	  lis       r6, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r5, 0x8049
	  stw       r0, 0x0(r4)
	  li        r0, 0xA
	  lis       r3, 0x804D
	  li        r7, 0
	  stw       r0, 0x4(r4)
	  addi      r6, r6, 0x22E8
	  subi      r5, r5, 0x4804
	  addi      r0, r3, 0x215C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x3B4:
	  mr        r3, r31
	  bl        -0x19B3FC
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802CBD1C
 * Size:	0000C4
 */
void Game::SnakeWhole::StateDead::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x1C6614
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x1B4C(r2)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1CA3DC
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  bl        -0x1C6D64
	  mr        r3, r31
	  bl        0x5614
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
	  bl        -0x79B78
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x14
	  li        r4, 0xD
	  li        r6, 0x2
	  bl        -0x78648
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802CBDE0
 * Size:	0001C0
 */
void Game::SnakeWhole::StateDead::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stw       r31, 0x5C(r1)
	  mr        r31, r4
	  lwz       r3, 0x188(r4)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x1AC
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x58
	  mr        r3, r31
	  bl        0x4E3C
	  mr        r3, r31
	  bl        0x559C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x264(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1AC

	.loc_0x58:
	  cmplwi    r0, 0x3
	  bne-      .loc_0xC8
	  lfs       f1, -0x1B48(r2)
	  mr        r3, r31
	  bl        0x5604
	  mr        r4, r31
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x20(r1)
	  addi      r5, r1, 0x44
	  lfs       f1, 0x24(r1)
	  li        r4, 0x3
	  lfs       f0, 0x28(r1)
	  li        r6, 0x2
	  stfs      f2, 0x44(r1)
	  lwz       r3, -0x6960(r13)
	  stfs      f1, 0x48(r1)
	  stfs      f0, 0x4C(r1)
	  bl        -0x79C50
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x44
	  li        r4, 0xB
	  li        r6, 0x2
	  bl        -0x78720
	  b         .loc_0x1AC

	.loc_0xC8:
	  cmplwi    r0, 0x4
	  bne-      .loc_0x138
	  lfs       f1, -0x1B44(r2)
	  mr        r3, r31
	  bl        0x5594
	  mr        r4, r31
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x14(r1)
	  addi      r5, r1, 0x38
	  lfs       f1, 0x18(r1)
	  li        r4, 0x3
	  lfs       f0, 0x1C(r1)
	  li        r6, 0x2
	  stfs      f2, 0x38(r1)
	  lwz       r3, -0x6960(r13)
	  stfs      f1, 0x3C(r1)
	  stfs      f0, 0x40(r1)
	  bl        -0x79CC0
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x38
	  li        r4, 0xB
	  li        r6, 0x2
	  bl        -0x78790
	  b         .loc_0x1AC

	.loc_0x138:
	  cmplwi    r0, 0x5
	  bne-      .loc_0x198
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r5, r1, 0x2C
	  lfs       f1, 0xC(r1)
	  li        r4, 0x8
	  lfs       f0, 0x10(r1)
	  li        r6, 0x2
	  stfs      f2, 0x2C(r1)
	  lwz       r3, -0x6960(r13)
	  stfs      f1, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  bl        -0x79D20
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x2C
	  li        r4, 0xD
	  li        r6, 0x2
	  bl        -0x787F0
	  b         .loc_0x1AC

	.loc_0x198:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x1AC
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x190E98

	.loc_0x1AC:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802CBFA0
 * Size:	000004
 */
void Game::SnakeWhole::StateDead::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802CBFA4
 * Size:	00012C
 */
void Game::SnakeWhole::StateStay::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lfs       f0, -0x1B4C(r2)
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x2C4(r4)
	  bl        0x4C68
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  mr        r3, r31
	  lfs       f1, 0xC(r1)
	  addi      r4, r1, 0x14
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  li        r4, 0
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
	  bl        -0x1C48D0
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x1B4C(r2)
	  li        r4, 0x1
	  rlwinm    r0,r0,0,17,15
	  li        r5, 0
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  oris      r0, r0, 0x4000
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,21,19
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1C708C
	  mr        r3, r31
	  bl        -0x1C4DB8
	  lwz       r0, 0x280(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x118
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x254(r12)
	  mtctr     r12
	  bctrl

	.loc_0x118:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802CC0D0
 * Size:	000618
 */
void Game::SnakeWhole::StateStay::exec((Game::EnemyBase*))
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
	  stmw      r27, 0x4C(r1)
	  mr        r28, r3
	  lwz       r3, 0xC0(r4)
	  lfs       f1, 0x2C4(r4)
	  mr        r31, r4
	  lfs       f0, 0x86C(r3)
	  li        r30, 0
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x52C
	  lfs       f0, 0x35C(r3)
	  lis       r3, 0x804B
	  li        r0, 0
	  lfs       f31, 0x198(r31)
	  lfs       f30, 0x19C(r31)
	  cmplwi    r0, 0
	  lfs       f29, 0x1A0(r31)
	  subi      r4, r3, 0x4364
	  lwz       r3, -0x6D0C(r13)
	  fmuls     f28, f0, f0
	  stw       r4, 0x30(r1)
	  li        r29, 0x1
	  stw       r0, 0x3C(r1)
	  stw       r0, 0x34(r1)
	  stw       r3, 0x38(r1)
	  bne-      .loc_0xA8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x34(r1)
	  b         .loc_0x2B4

	.loc_0xA8:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x34(r1)
	  b         .loc_0x114

	.loc_0xC0:
	  lwz       r3, 0x38(r1)
	  lwz       r4, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2B4
	  lwz       r3, 0x38(r1)
	  lwz       r4, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x34(r1)

	.loc_0x114:
	  lwz       r12, 0x30(r1)
	  addi      r3, r1, 0x30
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xC0
	  b         .loc_0x2B4

	.loc_0x134:
	  lwz       r3, 0x38(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r27, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1F0
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1F0
	  mr        r3, r27
	  bl        -0x12CCCC
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1F0
	  mr        r4, r27
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x18(r1)
	  lfs       f1, 0x14(r1)
	  fsubs     f2, f30, f0
	  lfs       f0, 0x1C(r1)
	  fsubs     f3, f31, f1
	  fsubs     f1, f29, f0
	  fmuls     f0, f2, f2
	  fmadds    f0, f3, f3, f0
	  fmadds    f1, f1, f1, f0
	  fcmpo     cr0, f1, f28
	  bge-      .loc_0x1E0
	  mr        r30, r27
	  li        r29, 0
	  b         .loc_0x1F0

	.loc_0x1E0:
	  lfs       f0, -0x1B40(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x1F0
	  li        r29, 0

	.loc_0x1F0:
	  cmplwi    r30, 0
	  bne-      .loc_0x2D4
	  lwz       r0, 0x3C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x224
	  lwz       r3, 0x38(r1)
	  lwz       r4, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x34(r1)
	  b         .loc_0x2B4

	.loc_0x224:
	  lwz       r3, 0x38(r1)
	  lwz       r4, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x34(r1)
	  b         .loc_0x298

	.loc_0x244:
	  lwz       r3, 0x38(r1)
	  lwz       r4, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2B4
	  lwz       r3, 0x38(r1)
	  lwz       r4, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x34(r1)

	.loc_0x298:
	  lwz       r12, 0x30(r1)
	  addi      r3, r1, 0x30
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x244

	.loc_0x2B4:
	  lwz       r3, 0x38(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x34(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x134

	.loc_0x2D4:
	  cmplwi    r30, 0
	  bne-      .loc_0x51C
	  li        r0, 0
	  lwz       r3, -0x6D20(r13)
	  lis       r4, 0x804B
	  stw       r0, 0x2C(r1)
	  subi      r4, r4, 0x434C
	  cmplwi    r0, 0
	  stw       r4, 0x20(r1)
	  stw       r0, 0x24(r1)
	  stw       r3, 0x28(r1)
	  bne-      .loc_0x31C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x4FC

	.loc_0x31C:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x388

	.loc_0x334:
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x4FC
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)

	.loc_0x388:
	  lwz       r12, 0x20(r1)
	  addi      r3, r1, 0x20
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x334
	  b         .loc_0x4FC

	.loc_0x3A8:
	  lwz       r3, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r27, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x438
	  mr        r4, r27
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0xC(r1)
	  lfs       f1, 0x8(r1)
	  fsubs     f2, f30, f0
	  lfs       f0, 0x10(r1)
	  fsubs     f3, f31, f1
	  fsubs     f1, f29, f0
	  fmuls     f0, f2, f2
	  fmadds    f0, f3, f3, f0
	  fmadds    f1, f1, f1, f0
	  fcmpo     cr0, f1, f28
	  bge-      .loc_0x428
	  mr        r30, r27
	  li        r29, 0
	  b         .loc_0x438

	.loc_0x428:
	  lfs       f0, -0x1B40(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x438
	  li        r29, 0

	.loc_0x438:
	  cmplwi    r30, 0
	  bne-      .loc_0x51C
	  lwz       r0, 0x2C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x46C
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x4FC

	.loc_0x46C:
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x4E0

	.loc_0x48C:
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x4FC
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)

	.loc_0x4E0:
	  lwz       r12, 0x20(r1)
	  addi      r3, r1, 0x20
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x48C

	.loc_0x4FC:
	  lwz       r3, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x24(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x3A8

	.loc_0x51C:
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x52C
	  mr        r3, r31
	  bl        0x493C

	.loc_0x52C:
	  lwz       r3, -0x6514(r13)
	  cmplwi    r30, 0
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C4(r31)
	  beq-      .loc_0x5E4
	  stw       r30, 0x230(r31)
	  mr        r3, r31
	  mr        r4, r30
	  bl        0x2C5C
	  mr        r3, r31
	  bl        0x49D8
	  lwz       r29, 0xC0(r31)
	  bl        -0x203094
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x44(r1)
	  lfd       f3, -0x1B30(r2)
	  stw       r0, 0x40(r1)
	  lfs       f2, -0x1B3C(r2)
	  lfd       f0, 0x40(r1)
	  lfs       f1, -0x1B38(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, 0x81C(r29)
	  fmuls     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x5C4
	  mr        r3, r28
	  mr        r4, r31
	  lwz       r12, 0x0(r28)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x5E4

	.loc_0x5C4:
	  mr        r3, r28
	  mr        r4, r31
	  lwz       r12, 0x0(r28)
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x5E4:
	  psq_l     f31,0x98(r1),0,0
	  lfd       f31, 0x90(r1)
	  psq_l     f30,0x88(r1),0,0
	  lfd       f30, 0x80(r1)
	  psq_l     f29,0x78(r1),0,0
	  lfd       f29, 0x70(r1)
	  psq_l     f28,0x68(r1),0,0
	  lfd       f28, 0x60(r1)
	  lmw       r27, 0x4C(r1)
	  lwz       r0, 0xA4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802CC6E8
 * Size:	000098
 */
void Game::SnakeWhole::StateStay::cleanup((Game::EnemyBase*))
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
	  bl        -0x1C4FA8
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  ori       r0, r0, 0x8000
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,2,0
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x800
	  stw       r0, 0x1E0(r31)
	  bl        0x43D0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802CC780
 * Size:	0000D4
 */
void Game::SnakeWhole::StateAppear1::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  mr        r3, r31
	  lwz       r0, 0x1E0(r4)
	  oris      r0, r0, 0x20
	  stw       r0, 0x1E0(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r4)
	  bl        -0x1C5034
	  lfs       f0, -0x1B4C(r2)
	  mr        r3, r31
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1CADFC
	  mr        r3, r31
	  li        r4, 0x1
	  li        r5, 0
	  bl        -0x1C77D4
	  mr        r3, r31
	  li        r4, 0
	  bl        0x49CC
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
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
	  bl        -0x7A5EC
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x14
	  li        r4, 0xF
	  li        r6, 0x2
	  bl        -0x790BC
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802CC854
 * Size:	0002F8
 */
void Game::SnakeWhole::StateAppear1::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stw       r31, 0x5C(r1)
	  mr        r31, r4
	  stw       r30, 0x58(r1)
	  mr        r30, r3
	  lwz       r3, 0x188(r4)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x2E0
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x50
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r31)
	  bl        0x436C
	  b         .loc_0x288

	.loc_0x50:
	  cmplwi    r0, 0x3
	  bne-      .loc_0xC8
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  oris      r0, r0, 0x20
	  stw       r0, 0x1E0(r31)
	  bl        0x43D4
	  mr        r4, r31
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x20(r1)
	  addi      r5, r1, 0x44
	  lfs       f1, 0x24(r1)
	  li        r4, 0x6
	  lfs       f0, 0x28(r1)
	  li        r6, 0x2
	  stfs      f2, 0x44(r1)
	  lwz       r3, -0x6960(r13)
	  stfs      f1, 0x48(r1)
	  stfs      f0, 0x4C(r1)
	  bl        -0x7A6C4
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x44
	  li        r4, 0xE
	  li        r6, 0x2
	  bl        -0x79194
	  b         .loc_0x288

	.loc_0xC8:
	  cmplwi    r0, 0x4
	  bne-      .loc_0x134
	  lwz       r0, 0x1E0(r31)
	  addi      r3, r1, 0x14
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r31)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x14(r1)
	  addi      r5, r1, 0x38
	  lfs       f1, 0x18(r1)
	  li        r4, 0x6
	  lfs       f0, 0x1C(r1)
	  li        r6, 0x2
	  stfs      f2, 0x38(r1)
	  lwz       r3, -0x6960(r13)
	  stfs      f1, 0x3C(r1)
	  stfs      f0, 0x40(r1)
	  bl        -0x7A730
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x38
	  li        r4, 0xE
	  li        r6, 0x2
	  bl        -0x79200
	  b         .loc_0x288

	.loc_0x134:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x288
	  mr        r3, r31
	  bl        0x2E1C
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x1B4C(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x17C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x288

	.loc_0x17C:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1B8380
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1B4
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x288

	.loc_0x1B4:
	  mr        r3, r31
	  li        r4, 0x5
	  bl        0x2FAC
	  cmplwi    r3, 0
	  bne-      .loc_0x1DC
	  mr        r3, r31
	  li        r4, 0x5
	  bl        0x358C
	  cmplwi    r3, 0
	  beq-      .loc_0x234

	.loc_0x1DC:
	  mr        r3, r31
	  bl        0x3C68
	  cmpwi     r3, 0
	  beq-      .loc_0x210
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0xA
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x288

	.loc_0x210:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x8
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x288

	.loc_0x234:
	  mr        r3, r31
	  bl        0x3AEC
	  cmplwi    r3, 0
	  beq-      .loc_0x268
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x288

	.loc_0x268:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x288:
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r5, r1, 0x2C
	  lfs       f1, 0xC(r1)
	  li        r4, 0x3
	  lfs       f0, 0x10(r1)
	  li        r6, 0x2
	  stfs      f2, 0x2C(r1)
	  lwz       r3, -0x6960(r13)
	  stfs      f1, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  bl        -0x7A8E0
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x2C
	  li        r4, 0x8
	  li        r6, 0x2
	  bl        -0x793B0

	.loc_0x2E0:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802CCB4C
 * Size:	000068
 */
void Game::SnakeWhole::StateAppear1::cleanup((Game::EnemyBase*))
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
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r4)
	  lwz       r0, 0x1E0(r4)
	  ori       r0, r0, 0x40
	  stw       r0, 0x1E0(r4)
	  bl        -0x1C53E8
	  lwz       r0, 0x280(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x54
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x250(r12)
	  mtctr     r12
	  bctrl

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802CCBB4
 * Size:	0000D4
 */
void Game::SnakeWhole::StateAppear2::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  mr        r3, r31
	  lwz       r0, 0x1E0(r4)
	  oris      r0, r0, 0x20
	  stw       r0, 0x1E0(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r4)
	  bl        -0x1C5468
	  lfs       f0, -0x1B4C(r2)
	  mr        r3, r31
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1CB230
	  mr        r3, r31
	  li        r4, 0x2
	  li        r5, 0
	  bl        -0x1C7C08
	  mr        r3, r31
	  li        r4, 0x1
	  bl        0x4598
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
	  lwz       r3, -0x6960(r13)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        -0x7AA20
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x14
	  li        r4, 0xC
	  li        r6, 0x2
	  bl        -0x794F0
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802CCC88
 * Size:	000318
 */
void Game::SnakeWhole::StateAppear2::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stw       r31, 0x5C(r1)
	  mr        r31, r4
	  stw       r30, 0x58(r1)
	  mr        r30, r3
	  lwz       r3, 0x188(r4)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x300
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x50
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r31)
	  bl        0x3F38
	  b         .loc_0x300

	.loc_0x50:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x64
	  mr        r3, r31
	  bl        0x3FAC
	  b         .loc_0x300

	.loc_0x64:
	  cmplwi    r0, 0x4
	  bne-      .loc_0xD4
	  mr        r3, r31
	  li        r4, 0x2
	  bl        0x44B4
	  mr        r4, r31
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x20(r1)
	  addi      r5, r1, 0x44
	  lfs       f1, 0x24(r1)
	  li        r4, 0x3
	  lfs       f0, 0x28(r1)
	  li        r6, 0x2
	  stfs      f2, 0x44(r1)
	  lwz       r3, -0x6960(r13)
	  stfs      f1, 0x48(r1)
	  stfs      f0, 0x4C(r1)
	  bl        -0x7AB04
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x44
	  li        r4, 0xB
	  li        r6, 0x2
	  bl        -0x795D4
	  b         .loc_0x300

	.loc_0xD4:
	  cmplwi    r0, 0x5
	  bne-      .loc_0x140
	  lwz       r0, 0x1E0(r31)
	  addi      r3, r1, 0x14
	  oris      r0, r0, 0x20
	  stw       r0, 0x1E0(r31)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x14(r1)
	  addi      r5, r1, 0x38
	  lfs       f1, 0x18(r1)
	  li        r4, 0x3
	  lfs       f0, 0x1C(r1)
	  li        r6, 0x2
	  stfs      f2, 0x38(r1)
	  lwz       r3, -0x6960(r13)
	  stfs      f1, 0x3C(r1)
	  stfs      f0, 0x40(r1)
	  bl        -0x7AB70
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x38
	  li        r4, 0xB
	  li        r6, 0x2
	  bl        -0x79640
	  b         .loc_0x300

	.loc_0x140:
	  cmplwi    r0, 0x6
	  bne-      .loc_0x1AC
	  lwz       r0, 0x1E0(r31)
	  addi      r3, r1, 0x8
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r31)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r5, r1, 0x2C
	  lfs       f1, 0xC(r1)
	  li        r4, 0x6
	  lfs       f0, 0x10(r1)
	  li        r6, 0x2
	  stfs      f2, 0x2C(r1)
	  lwz       r3, -0x6960(r13)
	  stfs      f1, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  bl        -0x7ABDC
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x2C
	  li        r4, 0xE
	  li        r6, 0x2
	  bl        -0x796AC
	  b         .loc_0x300

	.loc_0x1AC:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x300
	  mr        r3, r31
	  bl        0x2970
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x1B4C(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x1F4
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x300

	.loc_0x1F4:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1B882C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x22C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x300

	.loc_0x22C:
	  mr        r3, r31
	  li        r4, 0x5
	  bl        0x2B00
	  cmplwi    r3, 0
	  bne-      .loc_0x254
	  mr        r3, r31
	  li        r4, 0x5
	  bl        0x30E0
	  cmplwi    r3, 0
	  beq-      .loc_0x2AC

	.loc_0x254:
	  mr        r3, r31
	  bl        0x37BC
	  cmpwi     r3, 0
	  beq-      .loc_0x288
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0xA
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x300

	.loc_0x288:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x8
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x300

	.loc_0x2AC:
	  mr        r3, r31
	  bl        0x3640
	  cmplwi    r3, 0
	  beq-      .loc_0x2E0
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x300

	.loc_0x2E0:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x300:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802CCFA0
 * Size:	000068
 */
void Game::SnakeWhole::StateAppear2::cleanup((Game::EnemyBase*))
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
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r4)
	  lwz       r0, 0x1E0(r4)
	  ori       r0, r0, 0x40
	  stw       r0, 0x1E0(r4)
	  bl        -0x1C583C
	  lwz       r0, 0x280(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x54
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x250(r12)
	  mtctr     r12
	  bctrl

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802CD008
 * Size:	000064
 */
void Game::SnakeWhole::StateDisappear::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x1C58A4
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x1B4C(r2)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1CB6C8
	  mr        r3, r31
	  li        r4, 0x3
	  li        r5, 0
	  bl        -0x1C8050
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802CD06C
 * Size:	000214
 */
void Game::SnakeWhole::StateDisappear::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stw       r31, 0x5C(r1)
	  mr        r31, r4
	  lwz       r5, 0x188(r4)
	  lbz       r0, 0x24(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x200
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x2
	  bne-      .loc_0xA8
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x1B28(r2)
	  li        r4, 0
	  lfs       f1, 0x514(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x1B9928
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x1B28(r2)
	  li        r4, 0
	  lfs       f1, 0x514(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x1B9C04
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x1B28(r2)
	  li        r4, 0
	  lfs       f1, 0x53C(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x1B9FDC
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  oris      r0, r0, 0x20
	  stw       r0, 0x1E0(r31)
	  bl        0x3C64
	  b         .loc_0x200

	.loc_0xA8:
	  cmplwi    r0, 0x3
	  bne-      .loc_0xC0
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r31)
	  b         .loc_0x200

	.loc_0xC0:
	  cmplwi    r0, 0x4
	  bne-      .loc_0x1B0
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lis       r3, 0x804B
	  li        r6, 0
	  subi      r0, r3, 0x5808
	  lfs       f2, 0x8(r1)
	  lis       r3, 0x804E
	  stw       r0, 0x30(r1)
	  addi      r0, r3, 0x6A3C
	  lfs       f1, 0xC(r1)
	  lis       r3, 0x804E
	  stw       r0, 0x30(r1)
	  addi      r0, r3, 0x6E30
	  lfs       f0, 0x10(r1)
	  lis       r4, 0x804B
	  lis       r3, 0x804D
	  subi      r11, r4, 0x5814
	  li        r10, 0xA0
	  li        r9, 0xA1
	  li        r8, 0xA2
	  li        r7, 0xA3
	  li        r5, 0x1E
	  stw       r0, 0x30(r1)
	  subi      r0, r3, 0x4CBC
	  addi      r3, r1, 0x30
	  addi      r4, r1, 0x14
	  stfs      f2, 0x24(r1)
	  stfs      f1, 0x28(r1)
	  stfs      f0, 0x2C(r1)
	  stw       r11, 0x14(r1)
	  stfs      f2, 0x18(r1)
	  stfs      f1, 0x1C(r1)
	  stfs      f0, 0x20(r1)
	  sth       r10, 0x34(r1)
	  sth       r9, 0x36(r1)
	  sth       r8, 0x38(r1)
	  sth       r7, 0x3A(r1)
	  stw       r6, 0x3C(r1)
	  stw       r6, 0x40(r1)
	  stw       r6, 0x44(r1)
	  stw       r6, 0x48(r1)
	  stw       r5, 0x4C(r1)
	  stw       r0, 0x30(r1)
	  bl        0xE68BC
	  lwz       r3, -0x6960(r13)
	  addi      r5, r1, 0x24
	  li        r4, 0x6
	  li        r6, 0x2
	  bl        -0x7AFC4
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x24
	  li        r4, 0xF
	  li        r6, 0x2
	  bl        -0x79A94
	  b         .loc_0x200

	.loc_0x1B0:
	  cmplwi    r0, 0x5
	  bne-      .loc_0x1E0
	  li        r0, 0x1
	  lfs       f0, -0x1B4C(r2)
	  stb       r0, 0x2C0(r31)
	  mr        r3, r31
	  lwz       r0, 0x1E0(r31)
	  oris      r0, r0, 0x40
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x20C(r31)
	  bl        0x39E8
	  b         .loc_0x200

	.loc_0x1E0:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x200
	  lwz       r12, 0x0(r3)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x200:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802CD280
 * Size:	000078
 */
void Game::SnakeWhole::StateDisappear::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, -0x1B3C(r2)
	  stw       r0, 0x14(r1)
	  lfs       f2, -0x1B24(r2)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lfs       f3, -0x1B4C(r2)
	  mr        r3, r31
	  lfs       f4, -0x1B28(r2)
	  li        r4, 0
	  bl        -0x1BA190
	  li        r0, 0
	  mr        r3, r31
	  stb       r0, 0x2C0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,10,8
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x40
	  stw       r0, 0x1E0(r31)
	  bl        -0x1C5B4C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802CD2F8
 * Size:	000068
 */
void Game::SnakeWhole::StateWait::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x1B4C(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x2C4(r4)
	  stw       r0, 0x2CC(r4)
	  bl        0x2490
	  li        r0, 0
	  lfs       f0, -0x1B4C(r2)
	  stw       r0, 0x230(r31)
	  mr        r3, r31
	  li        r4, 0x9
	  li        r5, 0
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1C8344
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802CD360
 * Size:	000198
 */
void Game::SnakeWhole::StateWait::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x1B4C(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lfs       f1, 0x200(r4)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x44
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x2CC(r31)
	  bl        -0x1C80FC
	  b         .loc_0x10C

	.loc_0x44:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1B8D54
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x6C
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x844(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x80

	.loc_0x6C:
	  li        r0, 0x4
	  mr        r3, r31
	  stw       r0, 0x2CC(r31)
	  bl        -0x1C8138
	  b         .loc_0x10C

	.loc_0x80:
	  mr        r3, r31
	  bl        0x1A80
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xA4
	  li        r0, 0x7
	  mr        r3, r31
	  stw       r0, 0x2CC(r31)
	  bl        -0x1C815C
	  b         .loc_0x10C

	.loc_0xA4:
	  mr        r3, r31
	  li        r4, 0x5
	  bl        0x25B0
	  cmplwi    r3, 0
	  bne-      .loc_0xCC
	  mr        r3, r31
	  li        r4, 0x5
	  bl        0x2B90
	  cmplwi    r3, 0
	  beq-      .loc_0xE0

	.loc_0xCC:
	  li        r0, 0x8
	  mr        r3, r31
	  stw       r0, 0x2CC(r31)
	  bl        -0x1C8198
	  b         .loc_0x10C

	.loc_0xE0:
	  mr        r3, r31
	  bl        0x3134
	  cmplwi    r3, 0
	  beq-      .loc_0x104
	  li        r0, 0x6
	  mr        r3, r31
	  stw       r0, 0x2CC(r31)
	  bl        -0x1C81BC
	  b         .loc_0x10C

	.loc_0x104:
	  li        r0, 0x5
	  stw       r0, 0x2CC(r31)

	.loc_0x10C:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C4(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x180
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x180
	  lwz       r0, 0x2CC(r31)
	  cmpwi     r0, 0x8
	  bne-      .loc_0x160
	  mr        r3, r31
	  bl        0x31F0
	  cmpwi     r3, 0
	  beq-      .loc_0x160
	  li        r0, 0xA
	  stw       r0, 0x2CC(r31)

	.loc_0x160:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2CC(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x180:
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
 * Address:	802CD4F8
 * Size:	000004
 */
void Game::SnakeWhole::StateWait::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802CD4FC
 * Size:	000048
 */
void Game::SnakeWhole::StateWalk::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x1B4C(r2)
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  li        r5, 0
	  stb       r0, 0x2C1(r4)
	  li        r4, 0xC
	  stfs      f0, 0x2C8(r3)
	  stfs      f0, 0x1D4(r3)
	  stfs      f0, 0x1D8(r3)
	  stfs      f0, 0x1DC(r3)
	  bl        -0x1C852C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802CD544
 * Size:	000288
 */
void Game::SnakeWhole::StateWalk::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  mr        r31, r4
	  stw       r30, 0x38(r1)
	  mr        r30, r3
	  mr        r3, r31
	  bl        0x224C
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x1B4C(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x4C
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x2CC(r31)
	  bl        -0x1C82E8
	  b         .loc_0xD0

	.loc_0x4C:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1B8F40
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x74
	  li        r0, 0x4
	  mr        r3, r31
	  stw       r0, 0x2CC(r31)
	  bl        -0x1C8310
	  b         .loc_0xD0

	.loc_0x74:
	  mr        r3, r31
	  bl        0x18A8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x98
	  li        r0, 0x7
	  mr        r3, r31
	  stw       r0, 0x2CC(r31)
	  bl        -0x1C8334
	  b         .loc_0xD0

	.loc_0x98:
	  mr        r3, r31
	  li        r4, 0x5
	  bl        0x23D8
	  cmplwi    r3, 0
	  bne-      .loc_0xC0
	  mr        r3, r31
	  li        r4, 0x5
	  bl        0x29B8
	  cmplwi    r3, 0
	  beq-      .loc_0xD0

	.loc_0xC0:
	  li        r0, 0x8
	  mr        r3, r31
	  stw       r0, 0x2CC(r31)
	  bl        -0x1C8370

	.loc_0xD0:
	  lbz       r0, 0x2C1(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xE8
	  mr        r3, r31
	  bl        0x1B64
	  b         .loc_0xF8

	.loc_0xE8:
	  lfs       f0, -0x1B4C(r2)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)

	.loc_0xF8:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x270
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x1A0
	  lwz       r4, 0x1E0(r31)
	  li        r0, 0x1
	  lfs       f0, -0x1B4C(r2)
	  mr        r3, r31
	  oris      r4, r4, 0x20
	  stw       r4, 0x1E0(r31)
	  stb       r0, 0x2C1(r31)
	  stfs      f0, 0x2C8(r31)
	  bl        0x2F00
	  cmplwi    r3, 0
	  beq-      .loc_0x180
	  mr        r4, r3
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x14(r1)
	  mr        r3, r31
	  lfs       f1, 0x18(r1)
	  addi      r4, r1, 0x2C
	  lfs       f0, 0x1C(r1)
	  stfs      f2, 0x2C(r1)
	  stfs      f1, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  bl        0x1820
	  b         .loc_0x190

	.loc_0x180:
	  li        r0, 0x5
	  mr        r3, r31
	  stw       r0, 0x2CC(r31)
	  bl        -0x1C8430

	.loc_0x190:
	  lfs       f1, -0x1B44(r2)
	  mr        r3, r31
	  bl        0x3D70
	  b         .loc_0x270

	.loc_0x1A0:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x224
	  lwz       r4, 0x1E0(r31)
	  li        r0, 0
	  lfs       f1, -0x1B44(r2)
	  mr        r3, r31
	  rlwinm    r4,r4,0,11,9
	  stw       r4, 0x1E0(r31)
	  stb       r0, 0x2C1(r31)
	  bl        0x3D44
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r5, r1, 0x20
	  lfs       f1, 0xC(r1)
	  li        r4, 0x6
	  lfs       f0, 0x10(r1)
	  li        r6, 0x2
	  stfs      f2, 0x20(r1)
	  lwz       r3, -0x6960(r13)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  bl        -0x7B510
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x20
	  li        r4, 0xE
	  li        r6, 0x2
	  bl        -0x79FE0
	  b         .loc_0x270

	.loc_0x224:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x270
	  lwz       r0, 0x2CC(r31)
	  cmpwi     r0, 0x8
	  bne-      .loc_0x250
	  mr        r3, r31
	  bl        0x2F1C
	  cmpwi     r3, 0
	  beq-      .loc_0x250
	  li        r0, 0xA
	  stw       r0, 0x2CC(r31)

	.loc_0x250:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2CC(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x270:
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
 * Address:	802CD7CC
 * Size:	000010
 */
void Game::SnakeWhole::StateWalk::cleanup((Game::EnemyBase*))
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
 * Address:	802CD7DC
 * Size:	000048
 */
void Game::SnakeWhole::StateHome::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x1B4C(r2)
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  li        r5, 0
	  stb       r0, 0x2C1(r4)
	  li        r4, 0xC
	  stfs      f0, 0x2C8(r3)
	  stfs      f0, 0x1D4(r3)
	  stfs      f0, 0x1D8(r3)
	  stfs      f0, 0x1DC(r3)
	  bl        -0x1C880C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802CD824
 * Size:	0001A4
 */
void Game::SnakeWhole::StateHome::exec((Game::EnemyBase*))
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
	  bl        0x1F6C
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x1B4C(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x4C
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x2CC(r31)
	  bl        -0x1C85C8
	  b         .loc_0xA4

	.loc_0x4C:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1B9220
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x74
	  li        r0, 0x4
	  mr        r3, r31
	  stw       r0, 0x2CC(r31)
	  bl        -0x1C85F0
	  b         .loc_0xA4

	.loc_0x74:
	  mr        r3, r31
	  bl        0x1604
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xA4
	  lfs       f0, -0x1B4C(r2)
	  li        r0, 0x5
	  mr        r3, r31
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  stw       r0, 0x2CC(r31)
	  bl        -0x1C8624

	.loc_0xA4:
	  lbz       r0, 0x2C1(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xBC
	  mr        r3, r31
	  bl        0x18B0
	  b         .loc_0xCC

	.loc_0xBC:
	  lfs       f0, -0x1B4C(r2)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)

	.loc_0xCC:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x18C
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x138
	  lwz       r4, 0x1E0(r31)
	  li        r0, 0x1
	  lfs       f0, -0x1B4C(r2)
	  mr        r3, r31
	  oris      r5, r4, 0x20
	  addi      r4, r1, 0x8
	  stw       r5, 0x1E0(r31)
	  stb       r0, 0x2C1(r31)
	  stfs      f0, 0x2C8(r31)
	  lfs       f1, 0x19C(r31)
	  lfs       f2, 0x1A0(r31)
	  lfs       f0, 0x198(r31)
	  stfs      f0, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f2, 0x10(r1)
	  bl        0x1594
	  lfs       f1, -0x1B44(r2)
	  mr        r3, r31
	  bl        0x3AF8
	  b         .loc_0x18C

	.loc_0x138:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x164
	  lwz       r4, 0x1E0(r31)
	  li        r0, 0
	  lfs       f1, -0x1B44(r2)
	  mr        r3, r31
	  rlwinm    r4,r4,0,11,9
	  stw       r4, 0x1E0(r31)
	  stb       r0, 0x2C1(r31)
	  bl        0x3ACC
	  b         .loc_0x18C

	.loc_0x164:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x18C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2CC(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x18C:
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
 * Address:	802CD9C8
 * Size:	000010
 */
void Game::SnakeWhole::StateHome::cleanup((Game::EnemyBase*))
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
 * Address:	802CD9D8
 * Size:	00004C
 */
void Game::SnakeWhole::StateAttack::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x1B4C(r2)
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  li        r5, 0
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  lwz       r4, 0x2E4(r4)
	  addi      r4, r4, 0x4
	  bl        -0x1C8A0C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802CDA24
 * Size:	0003D0
 */
void Game::SnakeWhole::StateAttack::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  mr        r31, r4
	  stw       r30, 0x38(r1)
	  stw       r29, 0x34(r1)
	  mr        r29, r3
	  mr        r3, r31
	  bl        -0x1C6748
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x38
	  mr        r3, r31
	  bl        0x1D58

	.loc_0x38:
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x1B4C(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x54
	  mr        r3, r31
	  bl        -0x1C87D4

	.loc_0x54:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x3B4
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x7C
	  mr        r3, r31
	  bl        0x2F04
	  b         .loc_0x3B4

	.loc_0x7C:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x168
	  lwz       r30, 0x2E4(r31)
	  mr        r3, r31
	  mr        r4, r30
	  bl        0x1F08
	  mr.       r29, r3
	  beq-      .loc_0xFC
	  mr        r3, r31
	  bl        0x2B04
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  subi      r0, r5, 0x5D00
	  lfs       f0, -0x1B3C(r2)
	  stw       r0, 0x18(r1)
	  addi      r5, r4, 0x4DE0
	  lis       r4, 0x804B
	  li        r0, 0
	  stw       r5, 0x18(r1)
	  addi      r5, r4, 0x4DBC
	  addi      r4, r1, 0x18
	  stw       r3, 0x24(r1)
	  mr        r3, r29
	  stw       r31, 0x1C(r1)
	  stfs      f0, 0x20(r1)
	  stw       r5, 0x18(r1)
	  stw       r0, 0x28(r1)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x15C

	.loc_0xFC:
	  mr        r3, r31
	  mr        r4, r30
	  bl        0x2488
	  cmplwi    r3, 0
	  beq-      .loc_0x154
	  lwz       r6, 0xC0(r31)
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  li        r0, 0
	  lfs       f0, 0x604(r6)
	  subi      r6, r5, 0x5D00
	  addi      r5, r4, 0x4DE0
	  addi      r4, r1, 0x8
	  stw       r6, 0x8(r1)
	  stw       r31, 0xC(r1)
	  stw       r5, 0x8(r1)
	  stfs      f0, 0x10(r1)
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x154:
	  mr        r3, r31
	  bl        -0x1C88DC

	.loc_0x15C:
	  mr        r3, r31
	  bl        0x2ED0
	  b         .loc_0x3B4

	.loc_0x168:
	  cmplwi    r0, 0x4
	  bne-      .loc_0x200
	  mr        r3, r31
	  bl        -0x1C6898
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1F4
	  mr        r3, r31
	  bl        0x2A20
	  cmplwi    r3, 0
	  beq-      .loc_0x1F4
	  mr        r3, r31
	  li        r4, 0x5
	  bl        0x1E00
	  cmplwi    r3, 0
	  bne-      .loc_0x1B8
	  mr        r3, r31
	  li        r4, 0x5
	  bl        0x23E0
	  cmplwi    r3, 0
	  beq-      .loc_0x1E8

	.loc_0x1B8:
	  lwz       r4, 0x2E4(r31)
	  mr        r3, r31
	  li        r5, 0
	  addi      r4, r4, 0x4
	  bl        -0x1C8BE8
	  mr        r3, r31
	  bl        -0x1C697C
	  mr        r3, r31
	  bl        -0x1C89D4
	  mr        r3, r31
	  bl        0x2D98
	  b         .loc_0x3B4

	.loc_0x1E8:
	  mr        r3, r31
	  bl        0x2ECC
	  b         .loc_0x3B4

	.loc_0x1F4:
	  mr        r3, r31
	  bl        0x2EC0
	  b         .loc_0x3B4

	.loc_0x200:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x3B4
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x1B4C(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x240
	  mr        r3, r29
	  mr        r4, r31
	  lwz       r12, 0x0(r29)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x3B4

	.loc_0x240:
	  mr        r3, r31
	  bl        0x29C8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x274
	  mr        r3, r29
	  mr        r4, r31
	  lwz       r12, 0x0(r29)
	  li        r5, 0x9
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x3B4

	.loc_0x274:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1B9648
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2AC
	  mr        r3, r29
	  mr        r4, r31
	  lwz       r12, 0x0(r29)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x3B4

	.loc_0x2AC:
	  mr        r3, r31
	  li        r4, 0x5
	  bl        0x1CE4
	  cmplwi    r3, 0
	  bne-      .loc_0x2D4
	  mr        r3, r31
	  li        r4, 0x5
	  bl        0x22C4
	  cmplwi    r3, 0
	  beq-      .loc_0x32C

	.loc_0x2D4:
	  mr        r3, r31
	  bl        0x29A0
	  cmpwi     r3, 0
	  beq-      .loc_0x308
	  mr        r3, r29
	  mr        r4, r31
	  lwz       r12, 0x0(r29)
	  li        r5, 0xA
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x3B4

	.loc_0x308:
	  mr        r3, r29
	  mr        r4, r31
	  lwz       r12, 0x0(r29)
	  li        r5, 0x8
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x3B4

	.loc_0x32C:
	  mr        r3, r31
	  bl        0x1110
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x360
	  mr        r3, r29
	  mr        r4, r31
	  lwz       r12, 0x0(r29)
	  li        r5, 0x7
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x3B4

	.loc_0x360:
	  mr        r3, r31
	  bl        0x27F0
	  cmplwi    r3, 0
	  beq-      .loc_0x394
	  mr        r3, r29
	  mr        r4, r31
	  lwz       r12, 0x0(r29)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x3B4

	.loc_0x394:
	  mr        r3, r29
	  mr        r4, r31
	  lwz       r12, 0x0(r29)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x3B4:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802CDDF4
 * Size:	000010
 */
void Game::SnakeWhole::StateAttack::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  lwz       r0, 0x1E0(r4)
	  ori       r0, r0, 0x40
	  stw       r0, 0x1E0(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802CDE04
 * Size:	00003C
 */
void Game::SnakeWhole::StateEat::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  lfs       f0, -0x1B4C(r2)
	  stw       r0, 0x14(r1)
	  li        r4, 0xA
	  li        r5, 0
	  stfs      f0, 0x1D4(r3)
	  stfs      f0, 0x1D8(r3)
	  stfs      f0, 0x1DC(r3)
	  bl        -0x1C8E28
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802CDE40
 * Size:	0001F0
 */
void Game::SnakeWhole::StateEat::exec((Game::EnemyBase*))
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
	  lwz       r3, 0x188(r4)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x1D8
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x50
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  li        r4, 0
	  lfs       f1, 0x894(r5)
	  bl        -0x1BA004
	  b         .loc_0x1D8

	.loc_0x50:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x1D8
	  mr        r3, r31
	  bl        0x1914
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x1B4C(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x98
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1D8

	.loc_0x98:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1B9888
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xD0
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1D8

	.loc_0xD0:
	  mr        r3, r31
	  li        r4, 0x5
	  bl        0x1AA4
	  cmplwi    r3, 0
	  bne-      .loc_0xF8
	  mr        r3, r31
	  li        r4, 0x5
	  bl        0x2084
	  cmplwi    r3, 0
	  beq-      .loc_0x150

	.loc_0xF8:
	  mr        r3, r31
	  bl        0x2760
	  cmpwi     r3, 0
	  beq-      .loc_0x12C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0xA
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1D8

	.loc_0x12C:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x8
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1D8

	.loc_0x150:
	  mr        r3, r31
	  bl        0xED0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x184
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x7
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1D8

	.loc_0x184:
	  mr        r3, r31
	  bl        0x25B0
	  cmplwi    r3, 0
	  beq-      .loc_0x1B8
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1D8

	.loc_0x1B8:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1D8:
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
 * Address:	802CE030
 * Size:	000004
 */
void Game::SnakeWhole::StateEat::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802CE034
 * Size:	000040
 */
void Game::SnakeWhole::StateStruggle::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  lfs       f0, -0x1B4C(r2)
	  stw       r0, 0x14(r1)
	  li        r4, 0xB
	  li        r5, 0
	  stfs      f0, 0x2C4(r3)
	  stfs      f0, 0x1D4(r3)
	  stfs      f0, 0x1D8(r3)
	  stfs      f0, 0x1DC(r3)
	  bl        -0x1C905C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802CE074
 * Size:	0001C8
 */
void Game::SnakeWhole::StateStruggle::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x1B20(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lfs       f1, 0x2C4(r4)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x34
	  mr        r3, r31
	  bl        -0x1C8E04

	.loc_0x34:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C4(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x1B0
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x1B0
	  mr        r3, r31
	  bl        0x16D4
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x1B4C(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xA4
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1B0

	.loc_0xA4:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1B9AC8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xDC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1B0

	.loc_0xDC:
	  mr        r3, r31
	  li        r4, 0x5
	  bl        0x1864
	  cmplwi    r3, 0
	  bne-      .loc_0x104
	  mr        r3, r31
	  li        r4, 0x5
	  bl        0x1E44
	  cmplwi    r3, 0
	  beq-      .loc_0x128

	.loc_0x104:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x8
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1B0

	.loc_0x128:
	  mr        r3, r31
	  bl        0xCC4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x15C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x7
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1B0

	.loc_0x15C:
	  mr        r3, r31
	  bl        0x23A4
	  cmplwi    r3, 0
	  beq-      .loc_0x190
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1B0

	.loc_0x190:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1B0:
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
 * Address:	802CE23C
 * Size:	000004
 */
void Game::SnakeWhole::StateStruggle::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802CE240
 * Size:	000028
 */
void __sinit_SnakeWholeState_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804D
	  stw       r0, -0x68C8(r13)
	  stfsu     f0, 0x2150(r3)
	  stfs      f0, -0x68C4(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

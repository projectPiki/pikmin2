

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
 * Address:	802BDAB0
 * Size:	000278
 */
void Game::Houdai::FSM::init((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x7
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x18D264
	  li        r3, 0x10
	  bl        -0x299C2C
	  mr.       r4, r3
	  beq-      .loc_0x64
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r7, 0
	  addi      r6, r5, 0xD38
	  subi      r5, r2, 0x1F48
	  stw       r7, 0x4(r4)
	  addi      r0, r3, 0xD14
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x64:
	  mr        r3, r31
	  bl        -0x18D210
	  li        r3, 0x10
	  bl        -0x299C7C
	  mr.       r4, r3
	  beq-      .loc_0xB8
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x1
	  li        r7, 0
	  addi      r6, r5, 0xD38
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1F40
	  addi      r0, r3, 0xCF0
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0xB8:
	  mr        r3, r31
	  bl        -0x18D264
	  li        r3, 0x10
	  bl        -0x299CD0
	  mr.       r4, r3
	  beq-      .loc_0x10C
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x2
	  li        r7, 0
	  addi      r6, r5, 0xD38
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1F38
	  addi      r0, r3, 0xCCC
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x10C:
	  mr        r3, r31
	  bl        -0x18D2B8
	  li        r3, 0x10
	  bl        -0x299D24
	  mr.       r4, r3
	  beq-      .loc_0x160
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x3
	  li        r7, 0
	  addi      r6, r5, 0xD38
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1F30
	  addi      r0, r3, 0xCA8
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x160:
	  mr        r3, r31
	  bl        -0x18D30C
	  li        r3, 0x10
	  bl        -0x299D78
	  mr.       r4, r3
	  beq-      .loc_0x1B4
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x4
	  li        r7, 0
	  addi      r6, r5, 0xD38
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1F28
	  addi      r0, r3, 0xC84
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x1B4:
	  mr        r3, r31
	  bl        -0x18D360
	  li        r3, 0x10
	  bl        -0x299DCC
	  mr.       r4, r3
	  beq-      .loc_0x208
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x5
	  li        r7, 0
	  addi      r6, r5, 0xD38
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1F20
	  addi      r0, r3, 0xC60
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x208:
	  mr        r3, r31
	  bl        -0x18D3B4
	  li        r3, 0x10
	  bl        -0x299E20
	  mr.       r4, r3
	  beq-      .loc_0x25C
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x6
	  li        r7, 0
	  addi      r6, r5, 0xD38
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1F18
	  addi      r0, r3, 0xC3C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x25C:
	  mr        r3, r31
	  bl        -0x18D408
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BDD28
 * Size:	0000BC
 */
void Game::Houdai::StateDead::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        0x316C
	  mr        r3, r31
	  bl        -0x1B8628
	  lfs       f0, -0x1F10(r2)
	  mr        r3, r31
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1BC3E4
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  bl        -0x1B8D6C
	  mr        r3, r31
	  bl        0x4B00
	  mr        r3, r31
	  bl        0x4FF4
	  mr        r3, r31
	  bl        0x4F80
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r5, r1, 0x14
	  lfs       f1, 0xC(r1)
	  li        r4, 0x7
	  lfs       f0, 0x10(r1)
	  li        r6, 0x2
	  stfs      f2, 0x14(r1)
	  lwz       r3, -0x6958(r13)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        -0x6A64C
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BDDE4
 * Size:	0000B8
 */
void Game::Houdai::StateDead::exec((Game::EnemyBase*))
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
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xA4
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x264(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0x4FA4
	  mr        r3, r31
	  bl        0x5084
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r5, r1, 0x14
	  lfs       f1, 0xC(r1)
	  li        r4, 0x15
	  lfs       f0, 0x10(r1)
	  li        r6, 0x2
	  stfs      f2, 0x14(r1)
	  lwz       r3, -0x6960(r13)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        -0x6BC3C
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x182D94

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
 * Address:	802BDE9C
 * Size:	000004
 */
void Game::Houdai::StateDead::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BDEA0
 * Size:	000078
 */
void Game::Houdai::StateStay::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, -0x1
	  lfs       f0, -0x1F10(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  li        r5, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r3, 0x2D0(r4)
	  mr        r3, r31
	  li        r4, 0x1
	  lwz       r6, 0x1E0(r31)
	  oris      r6, r6, 0x40
	  stw       r6, 0x1E0(r31)
	  lwz       r6, 0x1E0(r31)
	  rlwinm    r6,r6,0,17,15
	  stw       r6, 0x1E0(r31)
	  stw       r0, 0x230(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1B8EF4
	  mr        r3, r31
	  bl        -0x1B6C20
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BDF18
 * Size:	0000C4
 */
void Game::Houdai::StateStay::exec((Game::EnemyBase*))
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
	  lwz       r0, 0x1E0(r4)
	  mr        r30, r3
	  mr        r31, r4
	  rlwinm.   r0,r0,0,30,30
	  bne-      .loc_0x84
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  li        r4, 0
	  lfs       f31, 0x3AC(r5)
	  fmr       f1, f31
	  bl        -0x1A949C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x58
	  li        r0, 0x1
	  b         .loc_0x7C

	.loc_0x58:
	  fmr       f1, f31
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1A9848
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x78
	  li        r0, 0x1
	  b         .loc_0x7C

	.loc_0x78:
	  li        r0, 0

	.loc_0x7C:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0xA4

	.loc_0x84:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xA4:
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
 * Address:	802BDFDC
 * Size:	000004
 */
void Game::Houdai::StateStay::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BDFE0
 * Size:	0000E4
 */
void Game::Houdai::StateLand::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  li        r0, -0x1
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stw       r0, 0x2D0(r4)
	  lwz       r0, 0x1E0(r4)
	  oris      r0, r0, 0x40
	  stw       r0, 0x1E0(r4)
	  lwz       r0, 0x1E0(r4)
	  ori       r0, r0, 0x8000
	  stw       r0, 0x1E0(r4)
	  bl        -0x1BC64C
	  li        r0, 0
	  lfs       f0, -0x1F10(r2)
	  stw       r0, 0x230(r31)
	  mr        r3, r31
	  li        r4, 0x1
	  li        r5, 0
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1B903C
	  mr        r3, r31
	  bl        0x4AE4
	  lwz       r3, -0x6980(r13)
	  mr        r4, r31
	  bl        -0x7C274
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
	  bl        -0x6BE5C
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x14
	  li        r4, 0x6
	  li        r6, 0x2
	  bl        -0x6A92C
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BE0C4
 * Size:	0002F0
 */
void Game::Houdai::StateLand::exec((Game::EnemyBase*))
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
	  bl        -0x1B6DB4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x104
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  li        r4, 0
	  lfs       f31, 0x3AC(r5)
	  fmr       f1, f31
	  bl        -0x1A964C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x5C
	  li        r0, 0x1
	  b         .loc_0x80

	.loc_0x5C:
	  fmr       f1, f31
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1A99F8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x7C
	  li        r0, 0x1
	  b         .loc_0x80

	.loc_0x7C:
	  li        r0, 0

	.loc_0x80:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x104
	  mr        r3, r31
	  bl        -0x1B6F4C
	  mr        r3, r31
	  bl        -0x1BC78C
	  mr        r3, r31
	  bl        0x49CC
	  lwz       r3, -0x6980(r13)
	  mr        r4, r31
	  bl        -0x7C38C
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
	  bl        -0x6BF74
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x14
	  li        r4, 0x6
	  li        r6, 0x2
	  bl        -0x6AA44

	.loc_0x104:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x2D0
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x148
	  lfs       f1, -0x1F0C(r2)
	  mr        r3, r31
	  lfs       f2, -0x1F08(r2)
	  li        r4, 0
	  lfs       f3, -0x1F10(r2)
	  lfs       f4, -0x1F04(r2)
	  bl        -0x1AB0E0
	  mr        r3, r31
	  bl        0x4B70
	  b         .loc_0x2D0

	.loc_0x148:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x15C
	  mr        r3, r31
	  bl        0x4BB8
	  b         .loc_0x2D0

	.loc_0x15C:
	  cmplwi    r0, 0x4
	  bne-      .loc_0x190
	  lfs       f1, -0x1F0C(r2)
	  mr        r3, r31
	  lfs       f2, -0x1F08(r2)
	  li        r4, 0
	  lfs       f3, -0x1F10(r2)
	  lfs       f4, -0x1F04(r2)
	  bl        -0x1AB124
	  mr        r3, r31
	  li        r4, 0
	  bl        0x4A04
	  b         .loc_0x2D0

	.loc_0x190:
	  cmplwi    r0, 0x5
	  bne-      .loc_0x1E0
	  lfs       f1, -0x1F0C(r2)
	  mr        r3, r31
	  lfs       f2, -0x1F08(r2)
	  li        r4, 0
	  lfs       f3, -0x1F10(r2)
	  lfs       f4, -0x1F04(r2)
	  bl        -0x1AB158
	  lwz       r5, 0x280(r31)
	  mr        r3, r31
	  li        r4, 0
	  bl        0x4054
	  mr        r3, r31
	  li        r4, 0x2
	  bl        0x49C0
	  mr        r3, r31
	  li        r4, 0x1
	  bl        0x49B4
	  b         .loc_0x2D0

	.loc_0x1E0:
	  cmplwi    r0, 0x6
	  bne-      .loc_0x21C
	  lfs       f1, -0x1F0C(r2)
	  mr        r3, r31
	  lfs       f2, -0x1F08(r2)
	  li        r4, 0
	  lfs       f3, -0x1F10(r2)
	  lfs       f4, -0x1F04(r2)
	  bl        -0x1AB1A8
	  mr        r3, r31
	  bl        0x4950
	  mr        r3, r31
	  li        r4, 0x3
	  bl        0x4978
	  b         .loc_0x2D0

	.loc_0x21C:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x2D0
	  lfs       f1, -0x1F0C(r2)
	  mr        r3, r31
	  lfs       f2, -0x1F08(r2)
	  li        r4, 0
	  lfs       f3, -0x1F10(r2)
	  lfs       f4, -0x1F04(r2)
	  bl        -0x1AB1E4
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x1F10(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x278
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x2D0

	.loc_0x278:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1A9CEC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2B0
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x2D0

	.loc_0x2B0:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x2D0:
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
 * Address:	802BE3B4
 * Size:	000050
 */
void Game::Houdai::StateLand::cleanup((Game::EnemyBase*))
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
	  rlwinm    r0,r0,0,10,8
	  stw       r0, 0x1E0(r4)
	  bl        0x2A68
	  mr        r3, r31
	  li        r4, 0x1
	  bl        0x48A8
	  mr        r3, r31
	  bl        0x36BC
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BE404
 * Size:	000098
 */
void Game::Houdai::StateWait::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f0, -0x1F10(r2)
	  stw       r0, 0x24(r1)
	  li        r0, -0x1
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r0, 0x2D0(r4)
	  stfs      f0, 0x2C0(r4)
	  bl        -0x1F4E88
	  xoris     r0, r3, 0x8000
	  lis       r4, 0x4330
	  stw       r0, 0xC(r1)
	  li        r0, 0
	  lfd       f2, -0x1EF8(r2)
	  mr        r3, r31
	  stw       r4, 0x8(r1)
	  li        r4, 0x2
	  lfs       f3, -0x1F00(r2)
	  li        r5, 0
	  lfd       f0, 0x8(r1)
	  lfs       f1, -0x1EFC(r2)
	  fsubs     f2, f0, f2
	  lfs       f0, -0x1F10(r2)
	  fmuls     f2, f3, f2
	  fdivs     f1, f2, f1
	  fadds     f1, f3, f1
	  stfs      f1, 0x2C4(r31)
	  stw       r0, 0x230(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1B9480
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BE49C
 * Size:	000118
 */
void Game::Houdai::StateWait::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x1F10(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r5, -0x6514(r13)
	  lfs       f2, 0x2C0(r4)
	  lfs       f1, 0x54(r5)
	  fadds     f1, f2, f1
	  stfs      f1, 0x2C0(r4)
	  lfs       f1, 0x200(r4)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x58
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x2D0(r31)
	  bl        -0x1B924C
	  b         .loc_0xC4

	.loc_0x58:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1A9EA4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x80
	  li        r0, 0x4
	  mr        r3, r31
	  stw       r0, 0x2D0(r31)
	  bl        -0x1B9274
	  b         .loc_0xC4

	.loc_0x80:
	  mr        r3, r31
	  bl        0x2C3C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xA4
	  li        r0, 0x6
	  mr        r3, r31
	  stw       r0, 0x2D0(r31)
	  bl        -0x1B9298
	  b         .loc_0xC4

	.loc_0xA4:
	  lfs       f1, 0x2C0(r31)
	  lfs       f0, 0x2C4(r31)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xC4
	  li        r0, 0x5
	  mr        r3, r31
	  stw       r0, 0x2D0(r31)
	  bl        -0x1B92BC

	.loc_0xC4:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x100
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x100
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2D0(r31)
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
 * Address:	802BE5B4
 * Size:	000004
 */
void Game::Houdai::StateWait::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BE5B8
 * Size:	000064
 */
void Game::Houdai::StateFlick::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x1F10(r2)
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stw       r0, 0x2D0(r4)
	  li        r0, 0
	  li        r4, 0x3
	  stfs      f0, 0x2C0(r31)
	  stw       r0, 0x230(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1B95F8
	  mr        r3, r31
	  bl        0x28F0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BE61C
 * Size:	0000F0
 */
void Game::Houdai::StateFlick::exec((Game::EnemyBase*))
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
	  beq-      .loc_0xDC
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x3C
	  mr        r3, r31
	  bl        0x4724
	  b         .loc_0xDC

	.loc_0x3C:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x78
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x1F04(r2)
	  li        r4, 0
	  lfs       f1, 0x53C(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x1AB560
	  lfs       f0, -0x1F10(r2)
	  mr        r3, r31
	  stfs      f0, 0x20C(r31)
	  bl        0x319C
	  b         .loc_0xDC

	.loc_0x78:
	  cmplwi    r0, 0x4
	  bne-      .loc_0x8C
	  mr        r3, r31
	  bl        0x4730
	  b         .loc_0xDC

	.loc_0x8C:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xDC
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x1F10(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xC4
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xDC

	.loc_0xC4:
	  lwz       r12, 0x0(r3)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xDC:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BE70C
 * Size:	000024
 */
void Game::Houdai::StateFlick::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        0x27FC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BE730
 * Size:	000098
 */
void Game::Houdai::StateWalk::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f0, -0x1F10(r2)
	  stw       r0, 0x24(r1)
	  li        r0, -0x1
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r0, 0x2D0(r4)
	  stfs      f0, 0x2C0(r4)
	  bl        -0x1F51B4
	  xoris     r0, r3, 0x8000
	  lis       r4, 0x4330
	  stw       r0, 0xC(r1)
	  li        r0, 0
	  lfd       f2, -0x1EF8(r2)
	  mr        r3, r31
	  stw       r4, 0x8(r1)
	  lfs       f3, -0x1EF0(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f1, -0x1EFC(r2)
	  fsubs     f2, f0, f2
	  lfs       f0, -0x1F10(r2)
	  fmuls     f2, f3, f2
	  fdivs     f1, f2, f1
	  fadds     f1, f3, f1
	  stfs      f1, 0x2C4(r31)
	  stw       r0, 0x230(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        0x26BC
	  mr        r3, r31
	  bl        0x1E00
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BE7C8
 * Size:	000100
 */
void Game::Houdai::StateWalk::exec((Game::EnemyBase*))
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
	  bl        0x1DC8
	  lwz       r5, -0x6514(r13)
	  mr        r3, r31
	  lfs       f1, 0x2C0(r31)
	  li        r4, 0
	  lfs       f0, 0x54(r5)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C0(r31)
	  bl        -0x1AA1B0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x60
	  li        r0, 0x4
	  mr        r3, r31
	  stw       r0, 0x2D0(r31)
	  bl        0x2668
	  b         .loc_0x80

	.loc_0x60:
	  lfs       f1, 0x2C0(r31)
	  lfs       f0, 0x2C4(r31)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x80
	  li        r0, 0x3
	  mr        r3, r31
	  stw       r0, 0x2D0(r31)
	  bl        0x2644

	.loc_0x80:
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x1F10(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xB8
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xE8

	.loc_0xB8:
	  mr        r3, r31
	  bl        0x264C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xE8
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2D0(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xE8:
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
 * Address:	802BE8C8
 * Size:	000004
 */
void Game::Houdai::StateWalk::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BE8CC
 * Size:	000090
 */
void Game::Houdai::StateShot::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x1F10(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stw       r0, 0x2D0(r4)
	  stfs      f0, 0x2C0(r4)
	  bl        0x1BF4
	  li        r0, 0
	  lfs       f0, -0x1F10(r2)
	  stb       r0, 0x2ED(r31)
	  mr        r3, r31
	  li        r4, 0x4
	  li        r5, 0
	  stfs      f0, 0x2CC(r31)
	  stw       r0, 0x230(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1B9920
	  mr        r3, r31
	  bl        0x25C8
	  mr        r3, r31
	  bl        0x44F4
	  li        r0, 0
	  mr        r3, r31
	  stb       r0, 0x2EF(r31)
	  bl        0x2AC0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BE95C
 * Size:	0003B0
 */
void Game::Houdai::StateShot::exec((Game::EnemyBase*))
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
	  bl        -0x1B7644
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x188
	  lbz       r0, 0x2ED(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x9C
	  mr        r3, r31
	  bl        -0x1B7698
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x5C
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x2CC(r31)
	  lfs       f0, 0x95C(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x6C

	.loc_0x5C:
	  mr        r3, r31
	  bl        0x2680
	  mr        r3, r31
	  bl        -0x1B77C0

	.loc_0x6C:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x5139
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x188

	.loc_0x9C:
	  mr        r3, r31
	  bl        0x292C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x118
	  mr        r3, r31
	  bl        0x28F8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xE8
	  lfs       f1, 0x2C0(r31)
	  lfs       f0, -0x1EEC(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x188
	  li        r0, 0
	  lfs       f0, -0x1F10(r2)
	  stb       r0, 0x2ED(r31)
	  mr        r3, r31
	  stfs      f0, 0x2C0(r31)
	  bl        -0x1B7838
	  b         .loc_0x188

	.loc_0xE8:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x5139
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x188

	.loc_0x118:
	  mr        r3, r31
	  bl        0x288C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x15C
	  lfs       f1, 0x2C0(r31)
	  lfs       f0, -0x1EEC(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x15C
	  li        r0, 0x1
	  lfs       f0, -0x1F10(r2)
	  stb       r0, 0x2ED(r31)
	  mr        r3, r31
	  stfs      f0, 0x2CC(r31)
	  stfs      f0, 0x2C0(r31)
	  bl        -0x1B78A8
	  mr        r3, r31
	  bl        0x2A18

	.loc_0x15C:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x5139
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x188:
	  mr        r3, r31
	  bl        0x27F8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1C4
	  mr        r3, r31
	  bl        0x1D50
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x2C0(r31)
	  lfs       f0, 0x49C(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1C4
	  lfs       f0, -0x1F10(r2)
	  mr        r3, r31
	  stfs      f0, 0x2C0(r31)
	  bl        -0x1B987C

	.loc_0x1C4:
	  lwz       r3, -0x6514(r13)
	  lfs       f2, 0x2CC(r31)
	  lfs       f1, 0x54(r3)
	  lfs       f0, -0x1F10(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0x2CC(r31)
	  lwz       r3, -0x6514(r13)
	  lfs       f2, 0x2C0(r31)
	  lfs       f1, 0x54(r3)
	  fadds     f1, f2, f1
	  stfs      f1, 0x2C0(r31)
	  lfs       f1, 0x200(r31)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x228
	  mr        r3, r31
	  bl        -0x1B7828
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x218
	  mr        r3, r31
	  bl        -0x1B796C

	.loc_0x218:
	  mr        r3, r31
	  bl        0x2A30
	  mr        r3, r31
	  bl        -0x1B98E0

	.loc_0x228:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x398
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x260
	  lfs       f0, -0x1F10(r2)
	  mr        r3, r31
	  stfs      f0, 0x2C0(r31)
	  bl        -0x1B78CC
	  mr        r3, r31
	  bl        0x26E4
	  b         .loc_0x398

	.loc_0x260:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x2AC
	  mr        r3, r31
	  bl        -0x1B78C8
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x398
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x1F04(r2)
	  li        r4, 0
	  lfs       f1, 0x53C(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x1ABAD4
	  lfs       f0, -0x1F10(r2)
	  mr        r3, r31
	  stfs      f0, 0x20C(r31)
	  bl        0x274C
	  b         .loc_0x398

	.loc_0x2AC:
	  cmplwi    r0, 0x4
	  bne-      .loc_0x304
	  mr        r3, r31
	  bl        -0x1B7914
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x398
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x2C0(r31)
	  lfs       f2, 0x49C(r3)
	  lfs       f0, 0x95C(r3)
	  fsubs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x398
	  lfs       f1, 0x2CC(r31)
	  lfs       f0, 0x90C(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x398
	  mr        r3, r31
	  bl        0x2464
	  mr        r3, r31
	  bl        -0x1B7978
	  b         .loc_0x398

	.loc_0x304:
	  cmplwi    r0, 0x5
	  bne-      .loc_0x338
	  li        r0, 0
	  lfs       f0, -0x1F10(r2)
	  stb       r0, 0x2ED(r31)
	  mr        r3, r31
	  stfs      f0, 0x2C0(r31)
	  bl        -0x1B799C
	  mr        r3, r31
	  bl        0x2638
	  mr        r3, r31
	  bl        0x291C
	  b         .loc_0x398

	.loc_0x338:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x398
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x1F10(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x378
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x398

	.loc_0x378:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x398:
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
 * Address:	802BED0C
 * Size:	000038
 */
void Game::Houdai::StateShot::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        0x21F4
	  mr        r3, r31
	  bl        0x287C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BED44
 * Size:	000028
 */
void __sinit_HoudaiState_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804D
	  stw       r0, -0x68F0(r13)
	  stfsu     f0, 0xC30(r3)
	  stfs      f0, -0x68EC(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}



/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void _Print(char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8010AB38
 * Size:	0001E0
 */
void Game::Pelplant::FSM::init((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0xA
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x25D14
	  li        r3, 0x14
	  bl        -0xE6CB4
	  mr.       r4, r3
	  beq-      .loc_0x3C
	  li        r4, 0
	  li        r5, 0
	  bl        0x410
	  mr        r4, r3

	.loc_0x3C:
	  mr        r3, r31
	  bl        0x25D90
	  li        r3, 0x14
	  bl        -0xE6CDC
	  mr.       r4, r3
	  beq-      .loc_0x64
	  li        r4, 0x1
	  li        r5, 0x1
	  bl        0x3E8
	  mr        r4, r3

	.loc_0x64:
	  mr        r3, r31
	  bl        0x25D68
	  li        r3, 0x14
	  bl        -0xE6D04
	  mr.       r4, r3
	  beq-      .loc_0x8C
	  li        r4, 0x2
	  li        r5, 0x2
	  bl        0x3C0
	  mr        r4, r3

	.loc_0x8C:
	  mr        r3, r31
	  bl        0x25D40
	  li        r3, 0x18
	  bl        -0xE6D2C
	  mr.       r4, r3
	  beq-      .loc_0xB8
	  li        r4, 0x3
	  li        r5, 0x2
	  li        r6, 0x1
	  bl        0x7DC
	  mr        r4, r3

	.loc_0xB8:
	  mr        r3, r31
	  bl        0x25D14
	  li        r3, 0x18
	  bl        -0xE6D58
	  mr.       r4, r3
	  beq-      .loc_0xE4
	  li        r4, 0x4
	  li        r5, 0x3
	  li        r6, 0x2
	  bl        0x7B0
	  mr        r4, r3

	.loc_0xE4:
	  mr        r3, r31
	  bl        0x25CE8
	  li        r3, 0x14
	  bl        -0xE6D84
	  mr.       r4, r3
	  beq-      .loc_0x10C
	  li        r4, 0x5
	  li        r5, 0
	  bl        0xB10
	  mr        r4, r3

	.loc_0x10C:
	  mr        r3, r31
	  bl        0x25CC0
	  li        r3, 0x14
	  bl        -0xE6DAC
	  mr.       r4, r3
	  beq-      .loc_0x134
	  li        r4, 0x6
	  li        r5, 0x1
	  bl        0xC2C
	  mr        r4, r3

	.loc_0x134:
	  mr        r3, r31
	  bl        0x25C98
	  li        r3, 0x1C
	  bl        -0xE6DD4
	  mr.       r4, r3
	  beq-      .loc_0x164
	  li        r4, 0x7
	  li        r5, 0
	  li        r6, 0x6
	  li        r7, 0x4
	  bl        0x13C
	  mr        r4, r3

	.loc_0x164:
	  mr        r3, r31
	  bl        0x25C68
	  li        r3, 0x1C
	  bl        -0xE6E04
	  mr.       r4, r3
	  beq-      .loc_0x194
	  li        r4, 0x8
	  li        r5, 0
	  li        r6, 0x5
	  li        r7, 0x4
	  bl        0x10C
	  mr        r4, r3

	.loc_0x194:
	  mr        r3, r31
	  bl        0x25C38
	  li        r3, 0x1C
	  bl        -0xE6E34
	  mr.       r4, r3
	  beq-      .loc_0x1C4
	  li        r4, 0x9
	  li        r5, 0
	  li        r6, 0x4
	  li        r7, 0x4
	  bl        0xDC
	  mr        r4, r3

	.loc_0x1C4:
	  mr        r3, r31
	  bl        0x25C08
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void Game::Pelplant::StateBlendAnim::__ct((int, int, int, int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8010AD18
 * Size:	00003C
 */
void Game::Pelplant::StateBlendAnim::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r3
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  subi      r6, r13, 0x6DBC
	  lfs       f1, -0x6A00(r2)
	  li        r7, 0
	  lwz       r4, 0x14(r5)
	  lwz       r5, 0x18(r5)
	  bl        -0x5F88
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010AD54
 * Size:	00007C
 */
void Game::Pelplant::StateBlendAnim::exec((Game::EnemyBase*))
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
	  beq-      .loc_0x64
	  lwz       r0, 0x1C(r3)
	  cmpwi     r0, 0x7D0
	  beq-      .loc_0x3C
	  b         .loc_0x64

	.loc_0x3C:
	  mr        r3, r31
	  bl        -0x5DEC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x10(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x64:
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
 * Address:	8010ADD0
 * Size:	000098
 */
void Game::Pelplant::StateWither::__ct((int, int, int, int))
{
	/*
	.loc_0x0:
	  lis       r8, 0x804B
	  lis       r10, 0x804B
	  subi      r0, r8, 0x65C
	  lis       r9, 0x804B
	  stw       r0, 0x0(r3)
	  lis       r8, 0x804B
	  li        r11, 0
	  subi      r10, r10, 0x4D70
	  stw       r4, 0x4(r3)
	  subi      r9, r9, 0x4D94
	  cmpwi     r4, 0x8
	  subi      r0, r8, 0x4DB8
	  stw       r11, 0x8(r3)
	  lis       r12, 0x8048
	  subi      r8, r12, 0x55E0
	  stw       r10, 0x0(r3)
	  stw       r9, 0x0(r3)
	  stw       r5, 0x10(r3)
	  stw       r6, 0x14(r3)
	  stw       r7, 0x18(r3)
	  stw       r0, 0x0(r3)
	  beq-      .loc_0x80
	  bge-      .loc_0x68
	  cmpwi     r4, 0x7
	  bge-      .loc_0x74
	  blr

	.loc_0x68:
	  cmpwi     r4, 0xA
	  bgelr-
	  b         .loc_0x8C

	.loc_0x74:
	  addi      r0, r8, 0
	  stw       r0, 0xC(r3)
	  blr

	.loc_0x80:
	  addi      r0, r8, 0xC
	  stw       r0, 0xC(r3)
	  blr

	.loc_0x8C:
	  addi      r0, r8, 0x1C
	  stw       r0, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010AE68
 * Size:	000070
 */
void Game::Pelplant::StateWither::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r3
	  lfs       f1, -0x6A00(r2)
	  stw       r0, 0x14(r1)
	  subi      r6, r13, 0x6DBC
	  li        r7, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lwz       r4, 0x14(r3)
	  mr        r3, r31
	  lwz       r5, 0x18(r5)
	  bl        -0x60E0
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f1, -0x69FC(r2)
	  li        r4, 0
	  ori       r0, r0, 0x1
	  lfs       f2, -0x69F8(r2)
	  stw       r0, 0x1E0(r31)
	  lfs       f3, -0x69F4(r2)
	  lfs       f4, -0x69F0(r2)
	  bl        0x825C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010AED8
 * Size:	00007C
 */
void Game::Pelplant::StateWither::exec((Game::EnemyBase*))
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
	  beq-      .loc_0x64
	  lwz       r0, 0x1C(r3)
	  cmpwi     r0, 0x7D0
	  beq-      .loc_0x3C
	  b         .loc_0x64

	.loc_0x3C:
	  mr        r3, r31
	  bl        -0x5F70
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x10(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x64:
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
 * Address:	8010AF54
 * Size:	000028
 */
void Game::Pelplant::StateWither::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  bl        -0x2670
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010AF7C
 * Size:	000088
 */
void Game::Pelplant::StateWait::__ct((int, int))
{
	/*
	.loc_0x0:
	  lis       r8, 0x804B
	  lis       r7, 0x804B
	  subi      r0, r8, 0x65C
	  lis       r6, 0x804B
	  stw       r0, 0x0(r3)
	  li        r8, 0
	  subi      r7, r7, 0x4D70
	  subi      r0, r6, 0x4DDC
	  stw       r4, 0x4(r3)
	  lis       r9, 0x8048
	  subi      r4, r9, 0x55E0
	  stw       r8, 0x8(r3)
	  stw       r7, 0x0(r3)
	  stw       r0, 0x0(r3)
	  stw       r5, 0x10(r3)
	  lwz       r0, 0x10(r3)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x70
	  bge-      .loc_0x58
	  cmpwi     r0, 0
	  bge-      .loc_0x64
	  blr

	.loc_0x58:
	  cmpwi     r0, 0x3
	  bgelr-
	  b         .loc_0x7C

	.loc_0x64:
	  addi      r0, r4, 0x2C
	  stw       r0, 0xC(r3)
	  blr

	.loc_0x70:
	  addi      r0, r4, 0x38
	  stw       r0, 0xC(r3)
	  blr

	.loc_0x7C:
	  addi      r0, r4, 0x44
	  stw       r0, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010B004
 * Size:	000144
 */
void Game::Pelplant::StateWait::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r4)
	  lbz       r0, 0x2C8(r4)
	  rlwinm    r0,r0,0,31,29
	  stb       r0, 0x2C8(r4)
	  lwz       r0, 0x1E0(r4)
	  ori       r0, r0, 0x1
	  stw       r0, 0x1E0(r4)
	  lwz       r0, 0x10(r3)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x74
	  bge-      .loc_0x54
	  cmpwi     r0, 0
	  bge-      .loc_0x60
	  b         .loc_0xC8

	.loc_0x54:
	  cmpwi     r0, 0x3
	  bge-      .loc_0xC8
	  b         .loc_0x88

	.loc_0x60:
	  mr        r3, r31
	  li        r4, 0x4
	  li        r5, 0
	  bl        -0x606C
	  b         .loc_0xC8

	.loc_0x74:
	  mr        r3, r31
	  li        r4, 0x5
	  li        r5, 0
	  bl        -0x6080
	  b         .loc_0xC8

	.loc_0x88:
	  lbz       r0, 0x2C8(r31)
	  mr        r3, r31
	  li        r4, 0x6
	  li        r5, 0
	  ori       r0, r0, 0x2
	  stb       r0, 0x2C8(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,0,30
	  stw       r0, 0x1E0(r31)
	  bl        -0x60AC
	  mr        r3, r31
	  li        r4, 0x2
	  bl        -0x27C4
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x40
	  stw       r0, 0x1E0(r31)

	.loc_0xC8:
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
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
	  stfs      f1, 0x18(r1)
	  mr        r3, r31
	  addi      r4, r1, 0x14
	  li        r5, 0
	  stw       r31, -0x6E24(r13)
	  bl        0x30080
	  li        r0, 0
	  stw       r0, -0x6E24(r13)
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010B148
 * Size:	000278
 */
void Game::Pelplant::StateWait::exec((Game::EnemyBase*))
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
	  lbz       r0, 0x2C8(r31)
	  lwz       r4, -0x6514(r13)
	  rlwinm.   r0,r0,0,31,31
	  lfs       f1, 0x54(r4)
	  beq-      .loc_0x3C
	  lfs       f0, 0x2C0(r31)
	  fadds     f0, f0, f1
	  stfs      f0, 0x2C0(r31)

	.loc_0x3C:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x1C4
	  lwz       r0, 0x1C(r3)
	  cmpwi     r0, 0x3E8
	  beq-      .loc_0x68
	  bge-      .loc_0x260
	  cmpwi     r0, 0x1
	  beq-      .loc_0x68
	  b         .loc_0x260

	.loc_0x68:
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x4
	  bne-      .loc_0xAC
	  bl        -0x41C20
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, -0x69E0(r2)
	  stw       r0, 0x8(r1)
	  lfs       f1, -0x69EC(r2)
	  lfd       f2, 0x8(r1)
	  lfs       f0, -0x69E8(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f1, f0, f1
	  b         .loc_0xCC

	.loc_0xAC:
	  lwz       r0, 0x10(r30)
	  cmpwi     r0, 0
	  bne-      .loc_0xC4
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x81C(r3)
	  b         .loc_0xCC

	.loc_0xC4:
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x844(r3)

	.loc_0xCC:
	  lfs       f0, 0x2C0(r31)
	  fcmpo     cr0, f0, f1
	  bgt-      .loc_0xE4
	  lbz       r3, 0x2D6(r31)
	  extsb.    r0, r3
	  ble-      .loc_0x154

	.loc_0xE4:
	  lfs       f0, -0x69F4(r2)
	  stfs      f0, 0x2C0(r31)
	  lwz       r0, 0x10(r30)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x130
	  bge-      .loc_0x260
	  cmpwi     r0, 0
	  bge-      .loc_0x10C
	  b         .loc_0x260
	  b         .loc_0x260

	.loc_0x10C:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x260

	.loc_0x130:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x260

	.loc_0x154:
	  extsb.    r0, r3
	  bge-      .loc_0x260
	  lwz       r0, 0x10(r30)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x17C
	  bge-      .loc_0x170
	  b         .loc_0x260

	.loc_0x170:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x260
	  b         .loc_0x1A0

	.loc_0x17C:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x8
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x260

	.loc_0x1A0:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x7
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x260

	.loc_0x1C4:
	  mr        r3, r31
	  bl        -0x23CC
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x23C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x260
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x69F4(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x230
	  lwz       r0, 0x10(r30)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x20C
	  b         .loc_0x260

	.loc_0x20C:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x260

	.loc_0x230:
	  lwz       r0, 0x10(r30)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x240
	  b         .loc_0x260

	.loc_0x240:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x260:
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
 * Address:	8010B3C0
 * Size:	000004
 */
void Game::Pelplant::StateWait::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010B3C4
 * Size:	000044
 */
void Game::Pelplant::StateGrow::__ct((int, int, int))
{
	/*
	.loc_0x0:
	  lis       r7, 0x804B
	  lis       r8, 0x804B
	  subi      r0, r7, 0x65C
	  lis       r7, 0x804B
	  stw       r0, 0x0(r3)
	  li        r9, 0
	  subi      r8, r8, 0x4D70
	  subi      r7, r7, 0x4E00
	  stw       r4, 0x4(r3)
	  subi      r0, r2, 0x69D8
	  stw       r9, 0x8(r3)
	  stw       r8, 0x0(r3)
	  stw       r7, 0x0(r3)
	  stw       r5, 0x10(r3)
	  stw       r6, 0x14(r3)
	  stw       r0, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010B408
 * Size:	0002E0
 */
void Game::Pelplant::StateGrow::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stw       r31, 0x9C(r1)
	  mr        r31, r4
	  stw       r30, 0x98(r1)
	  mr        r30, r3
	  lwz       r0, 0x1E0(r4)
	  ori       r0, r0, 0x1
	  stw       r0, 0x1E0(r4)
	  lwz       r0, 0x10(r3)
	  cmpwi     r0, 0x3
	  bne-      .loc_0x3C
	  mr        r3, r31
	  bl        -0x236C

	.loc_0x3C:
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  lis       r3, 0x804B
	  lfs       f1, 0xC(r1)
	  subi      r0, r3, 0x5814
	  lfs       f0, 0x10(r1)
	  stw       r0, 0x24(r1)
	  stfs      f2, 0x28(r1)
	  stfs      f1, 0x2C(r1)
	  stfs      f0, 0x30(r1)
	  lwz       r0, 0x14(r30)
	  cmpwi     r0, 0x2
	  beq-      .loc_0xF4
	  bge-      .loc_0x2C8
	  cmpwi     r0, 0x1
	  bge-      .loc_0x94
	  b         .loc_0x2C8

	.loc_0x94:
	  lis       r3, 0x804B
	  li        r5, 0
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804E
	  stw       r0, 0x14(r1)
	  addi      r0, r3, 0x6A64
	  lis       r3, 0x804B
	  li        r4, 0x187
	  stw       r0, 0x14(r1)
	  subi      r0, r3, 0x4E14
	  li        r6, 0x188
	  addi      r3, r1, 0x14
	  sth       r4, 0x18(r1)
	  addi      r4, r1, 0x24
	  sth       r6, 0x1A(r1)
	  stw       r5, 0x1C(r1)
	  stw       r5, 0x20(r1)
	  stw       r0, 0x14(r1)
	  bl        0x2A3B30
	  lwz       r4, 0x10(r30)
	  mr        r3, r31
	  li        r5, 0
	  bl        -0x64F0
	  b         .loc_0x2C8

	.loc_0xF4:
	  lbz       r0, 0x2D5(r31)
	  cmplwi    r0, 0x14
	  bgt-      .loc_0x284
	  lis       r3, 0x804B
	  rlwinm    r0,r0,2,0,29
	  subi      r3, r3, 0x4F00
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  lis       r3, 0x804B
	  li        r5, 0
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804E
	  stw       r0, 0x7C(r1)
	  addi      r0, r3, 0x6A50
	  lis       r3, 0x804B
	  li        r4, 0x189
	  stw       r0, 0x7C(r1)
	  subi      r0, r3, 0x4E28
	  li        r7, 0x18A
	  li        r6, 0x18B
	  sth       r4, 0x80(r1)
	  addi      r3, r1, 0x7C
	  addi      r4, r1, 0x24
	  sth       r7, 0x82(r1)
	  sth       r6, 0x84(r1)
	  stw       r5, 0x88(r1)
	  stw       r5, 0x8C(r1)
	  stw       r5, 0x90(r1)
	  stw       r0, 0x7C(r1)
	  bl        0x2A3B48
	  b         .loc_0x284
	  lis       r3, 0x804B
	  li        r5, 0
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804E
	  stw       r0, 0x64(r1)
	  addi      r0, r3, 0x6A50
	  lis       r3, 0x804B
	  li        r4, 0x189
	  stw       r0, 0x64(r1)
	  subi      r0, r3, 0x4E3C
	  li        r7, 0x18A
	  li        r6, 0x25D
	  sth       r4, 0x68(r1)
	  addi      r3, r1, 0x64
	  addi      r4, r1, 0x24
	  sth       r7, 0x6A(r1)
	  sth       r6, 0x6C(r1)
	  stw       r5, 0x70(r1)
	  stw       r5, 0x74(r1)
	  stw       r5, 0x78(r1)
	  stw       r0, 0x64(r1)
	  bl        0x2A3AEC
	  b         .loc_0x284
	  lis       r3, 0x804B
	  li        r5, 0
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804E
	  stw       r0, 0x4C(r1)
	  addi      r0, r3, 0x6A50
	  lis       r3, 0x804B
	  li        r4, 0x189
	  stw       r0, 0x4C(r1)
	  subi      r0, r3, 0x4E50
	  li        r7, 0x18A
	  li        r6, 0x25B
	  sth       r4, 0x50(r1)
	  addi      r3, r1, 0x4C
	  addi      r4, r1, 0x24
	  sth       r7, 0x52(r1)
	  sth       r6, 0x54(r1)
	  stw       r5, 0x58(r1)
	  stw       r5, 0x5C(r1)
	  stw       r5, 0x60(r1)
	  stw       r0, 0x4C(r1)
	  bl        0x2A3A90
	  b         .loc_0x284
	  lis       r3, 0x804B
	  li        r5, 0
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804E
	  stw       r0, 0x34(r1)
	  addi      r0, r3, 0x6A50
	  lis       r3, 0x804B
	  li        r4, 0x189
	  stw       r0, 0x34(r1)
	  subi      r0, r3, 0x4E64
	  li        r7, 0x18A
	  li        r6, 0x25C
	  sth       r4, 0x38(r1)
	  addi      r3, r1, 0x34
	  addi      r4, r1, 0x24
	  sth       r7, 0x3A(r1)
	  sth       r6, 0x3C(r1)
	  stw       r5, 0x40(r1)
	  stw       r5, 0x44(r1)
	  stw       r5, 0x48(r1)
	  stw       r0, 0x34(r1)
	  bl        0x2A3A34

	.loc_0x284:
	  mr        r3, r31
	  li        r4, 0x2
	  bl        -0x2D9C
	  lbz       r0, 0x2D5(r31)
	  cmplwi    r0, 0xA
	  beq-      .loc_0x2A4
	  cmplwi    r0, 0x14
	  bne-      .loc_0x2B8

	.loc_0x2A4:
	  mr        r3, r31
	  li        r4, 0x7
	  li        r5, 0
	  bl        -0x66B4
	  b         .loc_0x2C8

	.loc_0x2B8:
	  lwz       r4, 0x10(r30)
	  mr        r3, r31
	  li        r5, 0
	  bl        -0x66C8

	.loc_0x2C8:
	  lwz       r0, 0xA4(r1)
	  lwz       r31, 0x9C(r1)
	  lwz       r30, 0x98(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010B6E8
 * Size:	000060
 */
void Game::Pelplant::StateGrow::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r5, 0x188(r4)
	  lbz       r0, 0x24(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x50
	  lwz       r0, 0x1C(r5)
	  cmpwi     r0, 0x3E8
	  beq-      .loc_0x38
	  bge-      .loc_0x50
	  cmpwi     r0, 0x1
	  beq-      .loc_0x38
	  b         .loc_0x50

	.loc_0x38:
	  lwz       r12, 0x0(r3)
	  li        r6, 0
	  lwz       r5, 0x14(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x50:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010B748
 * Size:	000004
 */
void Game::Pelplant::StateGrow::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010B74C
 * Size:	000040
 */
void Game::Pelplant::StateDamage::__ct((int, int))
{
	/*
	.loc_0x0:
	  lis       r6, 0x804B
	  lis       r7, 0x804B
	  subi      r0, r6, 0x65C
	  lis       r6, 0x804B
	  stw       r0, 0x0(r3)
	  li        r8, 0
	  subi      r7, r7, 0x4D70
	  subi      r6, r6, 0x4E88
	  stw       r4, 0x4(r3)
	  subi      r0, r2, 0x69D0
	  stw       r8, 0x8(r3)
	  stw       r7, 0x0(r3)
	  stw       r6, 0x0(r3)
	  stw       r0, 0xC(r3)
	  stw       r5, 0x10(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010B78C
 * Size:	00008C
 */
void Game::Pelplant::StateDamage::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lwz       r0, 0x10(r3)
	  cmpwi     r0, 0x5
	  beq-      .loc_0x34
	  mr        r3, r31
	  mr        r4, r0
	  li        r5, 0
	  bl        -0x67B4
	  b         .loc_0x6C

	.loc_0x34:
	  lbz       r3, 0x2D5(r31)
	  cmplwi    r3, 0xA
	  beq-      .loc_0x48
	  cmplwi    r3, 0x14
	  bne-      .loc_0x5C

	.loc_0x48:
	  mr        r3, r31
	  li        r4, 0x8
	  li        r5, 0
	  bl        -0x67DC
	  b         .loc_0x6C

	.loc_0x5C:
	  mr        r3, r31
	  mr        r4, r0
	  li        r5, 0
	  bl        -0x67F0

	.loc_0x6C:
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,0,30
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
 * Address:	8010B818
 * Size:	000068
 */
void Game::Pelplant::StateDamage::exec((Game::EnemyBase*))
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
	  beq-      .loc_0x4C
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x4C
	  lwz       r12, 0x0(r3)
	  li        r6, 0
	  lwz       r5, 0x8(r3)
	  lwz       r12, 0x1C(r12)
	  lwz       r5, 0x18(r5)
	  mtctr     r12
	  bctrl

	.loc_0x4C:
	  mr        r3, r31
	  bl        -0x2924
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010B880
 * Size:	000010
 */
void Game::Pelplant::StateDamage::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  lwz       r0, 0x1E0(r4)
	  ori       r0, r0, 0x1
	  stw       r0, 0x1E0(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010B890
 * Size:	000040
 */
void Game::Pelplant::StateDead::__ct((int, int))
{
	/*
	.loc_0x0:
	  lis       r6, 0x804B
	  lis       r7, 0x804B
	  subi      r0, r6, 0x65C
	  lis       r6, 0x804B
	  stw       r0, 0x0(r3)
	  li        r8, 0
	  subi      r7, r7, 0x4D70
	  subi      r6, r6, 0x4EAC
	  stw       r4, 0x4(r3)
	  subi      r0, r2, 0x69C8
	  stw       r8, 0x8(r3)
	  stw       r7, 0x0(r3)
	  stw       r6, 0x0(r3)
	  stw       r0, 0xC(r3)
	  stw       r5, 0x10(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010B8D0
 * Size:	0000B4
 */
void Game::Pelplant::StateDead::init((Game::EnemyBase*, Game::StateArg*))
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
	  lwz       r4, 0x10(r3)
	  cmpwi     r4, 0x1
	  beq-      .loc_0x38
	  mr        r3, r31
	  li        r5, 0
	  bl        -0x68FC
	  b         .loc_0x6C

	.loc_0x38:
	  lbz       r0, 0x2D5(r31)
	  cmplwi    r0, 0xA
	  beq-      .loc_0x4C
	  cmplwi    r0, 0x14
	  bne-      .loc_0x60

	.loc_0x4C:
	  mr        r3, r31
	  li        r4, 0x9
	  li        r5, 0
	  bl        -0x6924
	  b         .loc_0x6C

	.loc_0x60:
	  mr        r3, r31
	  li        r5, 0
	  bl        -0x6934

	.loc_0x6C:
	  mr        r3, r31
	  bl        -0x6220
	  lwz       r0, 0x10(r30)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x9C
	  lwz       r3, 0x2CC(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x9C
	  li        r4, 0
	  bl        0x2F790
	  li        r0, 0
	  stw       r0, 0x2CC(r31)

	.loc_0x9C:
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
 * Address:	8010B984
 * Size:	000068
 */
void Game::Pelplant::StateDead::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lwz       r3, 0x188(r4)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x54
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x54
	  lwz       r3, 0x2CC(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x48
	  bl        0x941DC
	  li        r0, 0
	  stw       r0, 0x2CC(r31)

	.loc_0x48:
	  mr        r3, r31
	  li        r4, 0
	  bl        0x2F71C

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
 * Address:	8010B9EC
 * Size:	000004
 */
void Game::Pelplant::StateDead::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010B9F0
 * Size:	000004
 */
void efx::TSimple3::forceKill(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010B9F4
 * Size:	000004
 */
void efx::TSimple3::fade(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010B9F8
 * Size:	000004
 */
void efx::TSimple2::forceKill(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010B9FC
 * Size:	000004
 */
void efx::TSimple2::fade(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

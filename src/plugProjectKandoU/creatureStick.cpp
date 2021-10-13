

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
 * Address:	8019EE94
 * Size:	000024
 */
void Game::Creature::clearStick(void)
{
	/*
	.loc_0x0:
	  li        r4, 0
	  li        r0, -0x1
	  stw       r4, 0x100(r3)
	  stw       r4, 0xFC(r3)
	  stw       r4, 0xF4(r3)
	  stw       r4, 0xF0(r3)
	  stw       r4, 0xF8(r3)
	  sth       r0, 0x110(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8019EEB8
 * Size:	00003C
 */
void Game::Creature::releaseAllStickers(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  b         .loc_0x1C

	.loc_0x18:
	  bl        0x554

	.loc_0x1C:
	  lwz       r3, 0xF0(r31)
	  cmplwi    r3, 0
	  bne+      .loc_0x18
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8019EEF4
 * Size:	000174
 */
void Game::Creature::startStick((Game::Creature*, CollPart*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r5
	  stw       r30, 0x28(r1)
	  mr        r30, r4
	  stw       r29, 0x24(r1)
	  mr        r29, r3
	  bl        0x65C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x70
	  mr        r3, r29
	  bl        0x660
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x68
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x68
	  mr        r3, r29
	  bl        0x4D0
	  b         .loc_0x70

	.loc_0x68:
	  li        r3, 0
	  b         .loc_0x158

	.loc_0x70:
	  stw       r30, 0xF4(r29)
	  stw       r31, 0xF8(r29)
	  lwz       r3, 0xF8(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0xA4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xA4
	  lwz       r3, 0xF8(r29)
	  stw       r29, 0x64(r3)

	.loc_0xA4:
	  lwz       r3, 0xF0(r30)
	  cmplwi    r3, 0
	  bne-      .loc_0xC4
	  stw       r29, 0xF0(r30)
	  li        r0, 0
	  stw       r0, 0x100(r29)
	  stw       r0, 0xFC(r29)
	  b         .loc_0xD8

	.loc_0xC4:
	  stw       r29, 0xF0(r30)
	  li        r0, 0
	  stw       r0, 0x100(r29)
	  stw       r3, 0xFC(r29)
	  stw       r29, 0x100(r3)

	.loc_0xD8:
	  lwz       r0, 0xF8(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x124
	  mr        r4, r29
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r4, r1, 0x14
	  lfs       f1, 0xC(r1)
	  addi      r5, r29, 0x104
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  lwz       r3, 0xF8(r29)
	  bl        -0x67A64

	.loc_0x124:
	  lwz       r3, 0xF4(r29)
	  mr        r4, r29
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x158(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r29
	  lwz       r4, 0xF4(r29)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x160(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x1

	.loc_0x158:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8019F068
 * Size:	0001B0
 */
void Game::Creature::startStickMouth((Game::Creature*, CollPart*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  stw       r30, 0x28(r1)
	  mr        r30, r5
	  mr        r3, r30
	  stw       r29, 0x24(r1)
	  mr        r29, r4
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x5C
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0xDD8
	  li        r4, 0xCA
	  subi      r5, r5, 0xDC4
	  crclr     6, 0x6
	  bl        -0x174A80

	.loc_0x5C:
	  mr        r3, r31
	  bl        0x4AC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xAC
	  mr        r3, r31
	  bl        0x4B0
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xA4
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xA4
	  mr        r3, r31
	  bl        0x320
	  b         .loc_0xAC

	.loc_0xA4:
	  li        r3, 0
	  b         .loc_0x194

	.loc_0xAC:
	  stw       r29, 0xF4(r31)
	  stw       r30, 0xF8(r31)
	  lwz       r3, 0xF8(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xE0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xE0
	  lwz       r3, 0xF8(r31)
	  stw       r31, 0x64(r3)

	.loc_0xE0:
	  lwz       r3, 0xF0(r29)
	  cmplwi    r3, 0
	  bne-      .loc_0x100
	  stw       r31, 0xF0(r29)
	  li        r0, 0
	  stw       r0, 0x100(r31)
	  stw       r0, 0xFC(r31)
	  b         .loc_0x114

	.loc_0x100:
	  stw       r31, 0xF0(r29)
	  li        r0, 0
	  stw       r0, 0x100(r31)
	  stw       r3, 0xFC(r31)
	  stw       r31, 0x100(r3)

	.loc_0x114:
	  lwz       r0, 0xF8(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x160
	  mr        r4, r31
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x14(r1)
	  addi      r4, r1, 0x8
	  lfs       f1, 0x18(r1)
	  addi      r5, r31, 0x104
	  lfs       f0, 0x1C(r1)
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  lwz       r3, 0xF8(r31)
	  bl        -0x67C14

	.loc_0x160:
	  lwz       r3, 0xF4(r31)
	  mr        r4, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x158(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r4, 0xF4(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x160(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x1

	.loc_0x194:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8019F218
 * Size:	00020C
 */
void Game::Creature::startStick((Game::Creature*, short))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r5
	  stw       r30, 0x28(r1)
	  mr        r30, r4
	  stw       r29, 0x24(r1)
	  mr        r29, r3
	  bl        0x338
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x38
	  li        r3, 0
	  b         .loc_0x1F0

	.loc_0x38:
	  mr        r3, r29
	  bl        0x320
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x88
	  mr        r3, r29
	  bl        0x324
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x80
	  li        r3, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x80
	  mr        r3, r29
	  bl        .loc_0x20C
	  b         .loc_0x88

	.loc_0x80:
	  li        r0, 0
	  b         .loc_0x174

	.loc_0x88:
	  stw       r30, 0xF4(r29)
	  li        r0, 0
	  stw       r0, 0xF8(r29)
	  lwz       r3, 0xF8(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0xC0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xC0
	  lwz       r3, 0xF8(r29)
	  stw       r29, 0x64(r3)

	.loc_0xC0:
	  lwz       r3, 0xF0(r30)
	  cmplwi    r3, 0
	  bne-      .loc_0xE0
	  stw       r29, 0xF0(r30)
	  li        r0, 0
	  stw       r0, 0x100(r29)
	  stw       r0, 0xFC(r29)
	  b         .loc_0xF4

	.loc_0xE0:
	  stw       r29, 0xF0(r30)
	  li        r0, 0
	  stw       r0, 0x100(r29)
	  stw       r3, 0xFC(r29)
	  stw       r29, 0x100(r3)

	.loc_0xF4:
	  lwz       r0, 0xF8(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x140
	  mr        r4, r29
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x14(r1)
	  addi      r4, r1, 0x8
	  lfs       f1, 0x18(r1)
	  addi      r5, r29, 0x104
	  lfs       f0, 0x1C(r1)
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  lwz       r3, 0xF8(r29)
	  bl        -0x67DA4

	.loc_0x140:
	  lwz       r3, 0xF4(r29)
	  mr        r4, r29
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x158(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r29
	  lwz       r4, 0xF4(r29)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x160(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1

	.loc_0x174:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x1EC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x168(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1DC
	  mr        r3, r30
	  mr        r4, r29
	  lwz       r12, 0x0(r30)
	  mr        r5, r31
	  lwz       r12, 0x178(r12)
	  mtctr     r12
	  bctrl
	  sth       r31, 0x110(r29)
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x160(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x1
	  b         .loc_0x1F0

	.loc_0x1DC:
	  mr        r3, r29
	  bl        .loc_0x20C
	  li        r3, 0
	  b         .loc_0x1F0

	.loc_0x1EC:
	  li        r3, 0

	.loc_0x1F0:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr

	.loc_0x20C:
	*/
}

/*
 * --INFO--
 * Address:	8019F424
 * Size:	000150
 */
void Game::Creature::endStick(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        .loc_0x150
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x13C
	  mr        r3, r31
	  lwz       r4, 0xF4(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x164(r12)
	  mtctr     r12
	  bctrl
	  lha       r5, 0x110(r31)
	  cmpwi     r5, -0x1
	  beq-      .loc_0x68
	  lwz       r3, 0xF4(r31)
	  mr        r4, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x17C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, -0x1
	  sth       r0, 0x110(r31)
	  b         .loc_0x80

	.loc_0x68:
	  lwz       r3, 0xF4(r31)
	  mr        r4, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x15C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x80:
	  lwz       r3, 0xF8(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xB0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB0
	  lwz       r3, 0xF8(r31)
	  li        r0, 0
	  stw       r0, 0x64(r3)

	.loc_0xB0:
	  lwz       r3, 0x100(r31)
	  cmplwi    r3, 0
	  bne-      .loc_0xE0
	  lwz       r0, 0xFC(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xE0
	  lwz       r3, 0xF4(r31)
	  li        r0, 0
	  stw       r0, 0xF0(r3)
	  stw       r0, 0xF4(r31)
	  stw       r0, 0xF8(r31)
	  b         .loc_0x13C

	.loc_0xE0:
	  cmplwi    r3, 0
	  bne-      .loc_0x114
	  lwz       r4, 0xFC(r31)
	  li        r0, 0
	  lwz       r3, 0xF4(r31)
	  stw       r4, 0xF0(r3)
	  lwz       r3, 0xFC(r31)
	  stw       r0, 0x100(r3)
	  stw       r0, 0xF4(r31)
	  stw       r0, 0xF8(r31)
	  stw       r0, 0x100(r31)
	  stw       r0, 0xFC(r31)
	  b         .loc_0x13C

	.loc_0x114:
	  li        r0, 0
	  stw       r0, 0xF4(r31)
	  lwz       r0, 0xFC(r31)
	  lwz       r3, 0x100(r31)
	  stw       r0, 0xFC(r3)
	  lwz       r3, 0xFC(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x13C
	  lwz       r0, 0x100(r31)
	  stw       r0, 0x100(r3)

	.loc_0x13C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x150:
	*/
}

/*
 * --INFO--
 * Address:	8019F574
 * Size:	000014
 */
void Game::Creature::isStickTo(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0xF4(r3)
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm    r3,r0,1,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8019F588
 * Size:	000060
 */
void Game::Creature::isStickToMouth(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  lwz       r0, 0xF4(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x48
	  lwz       r3, 0xF8(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x48
	  li        r31, 0x1

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void Game::Creature::isStickLeader(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8019F5E8
 * Size:	0004B4
 */
void updateStick__Q24Game8CreatureFR10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x110(r1)
	  mflr      r0
	  stw       r0, 0x114(r1)
	  stfd      f31, 0x100(r1)
	  psq_st    f31,0x108(r1),0,0
	  stw       r31, 0xFC(r1)
	  mr        r31, r3
	  lwz       r0, 0xF4(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x44
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0xDD8
	  li        r4, 0x127
	  subi      r5, r5, 0xDC4
	  crclr     6, 0x6
	  bl        -0x174FE8

	.loc_0x44:
	  lwz       r12, 0x0(r31)
	  lis       r4, 0x8051
	  mr        r3, r31
	  lwz       r12, 0x68(r12)
	  addi      r4, r4, 0x41E4
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xF8(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x18C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x18C
	  lwz       r3, 0xF8(r31)
	  addi      r4, r1, 0xBC
	  bl        -0x67164
	  lwz       r3, 0xF8(r31)
	  lfs       f31, -0x5320(r2)
	  lbz       r0, 0x6C(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x120
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xE8
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1AC(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0
	  bne-      .loc_0xE4
	  lfs       f31, -0x531C(r2)
	  b         .loc_0xE8

	.loc_0xE4:
	  lfs       f31, -0x5318(r2)

	.loc_0xE8:
	  lfs       f0, -0x5314(r2)
	  addi      r3, r1, 0x8C
	  stfs      f31, 0x80(r1)
	  addi      r4, r1, 0x80
	  addi      r5, r1, 0x74
	  stfs      f31, 0x84(r1)
	  stfs      f31, 0x88(r1)
	  stfs      f0, 0x74(r1)
	  stfs      f0, 0x78(r1)
	  stfs      f0, 0x7C(r1)
	  lwz       r6, 0xF8(r31)
	  addi      r6, r6, 0x20
	  bl        0x288BD8
	  b         .loc_0x150

	.loc_0x120:
	  lfs       f1, -0x5314(r2)
	  addi      r3, r1, 0x8C
	  lfs       f0, -0x5310(r2)
	  addi      r4, r1, 0x68
	  stfs      f31, 0x68(r1)
	  addi      r5, r1, 0x5C
	  stfs      f31, 0x6C(r1)
	  stfs      f31, 0x70(r1)
	  stfs      f1, 0x5C(r1)
	  stfs      f1, 0x60(r1)
	  stfs      f0, 0x64(r1)
	  bl        0x288E7C

	.loc_0x150:
	  addi      r3, r1, 0xBC
	  addi      r4, r1, 0x8C
	  addi      r5, r31, 0x138
	  bl        -0xB5444
	  lfs       f0, 0x144(r31)
	  mr        r3, r31
	  addi      r4, r1, 0x50
	  li        r5, 0x1
	  stfs      f0, 0x50(r1)
	  lfs       f0, 0x154(r31)
	  stfs      f0, 0x54(r1)
	  lfs       f0, 0x164(r31)
	  stfs      f0, 0x58(r1)
	  bl        -0x645C4
	  b         .loc_0x498

	.loc_0x18C:
	  lwz       r0, 0xF8(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x3AC
	  mr        r4, r31
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x14(r1)
	  addi      r4, r31, 0x104
	  lfs       f1, 0x18(r1)
	  addi      r5, r1, 0x44
	  lfs       f0, 0x1C(r1)
	  stfs      f2, 0x44(r1)
	  stfs      f1, 0x48(r1)
	  stfs      f0, 0x4C(r1)
	  lwz       r3, 0xF8(r31)
	  bl        -0x67FE0
	  lwz       r3, 0xF8(r31)
	  lbz       r0, 0x58(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x2C8
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x38(r1)
	  addi      r4, r1, 0x38
	  addi      r5, r31, 0x138
	  lfs       f0, 0x108(r31)
	  stfs      f0, 0x3C(r1)
	  lwz       r3, 0xF8(r31)
	  bl        -0x67EB8
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x380
	  lfs       f1, 0x138(r31)
	  lfs       f0, 0x168(r31)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x138(r31)
	  lfs       f1, 0x148(r31)
	  lfs       f0, 0x168(r31)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x148(r31)
	  lfs       f1, 0x158(r31)
	  lfs       f0, 0x168(r31)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x158(r31)
	  lfs       f1, 0x13C(r31)
	  lfs       f0, 0x16C(r31)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x13C(r31)
	  lfs       f1, 0x14C(r31)
	  lfs       f0, 0x16C(r31)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x14C(r31)
	  lfs       f1, 0x15C(r31)
	  lfs       f0, 0x16C(r31)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x15C(r31)
	  lfs       f1, 0x140(r31)
	  lfs       f0, 0x170(r31)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x140(r31)
	  lfs       f1, 0x150(r31)
	  lfs       f0, 0x170(r31)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x150(r31)
	  lfs       f1, 0x160(r31)
	  lfs       f0, 0x170(r31)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x160(r31)
	  b         .loc_0x380

	.loc_0x2C8:
	  addi      r4, r1, 0x44
	  addi      r5, r31, 0x138
	  bl        -0x67F74
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x380
	  lfs       f1, 0x138(r31)
	  lfs       f0, 0x168(r31)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x138(r31)
	  lfs       f1, 0x148(r31)
	  lfs       f0, 0x168(r31)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x148(r31)
	  lfs       f1, 0x158(r31)
	  lfs       f0, 0x168(r31)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x158(r31)
	  lfs       f1, 0x13C(r31)
	  lfs       f0, 0x16C(r31)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x13C(r31)
	  lfs       f1, 0x14C(r31)
	  lfs       f0, 0x16C(r31)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x14C(r31)
	  lfs       f1, 0x15C(r31)
	  lfs       f0, 0x16C(r31)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x15C(r31)
	  lfs       f1, 0x140(r31)
	  lfs       f0, 0x170(r31)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x140(r31)
	  lfs       f1, 0x150(r31)
	  lfs       f0, 0x170(r31)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x150(r31)
	  lfs       f1, 0x160(r31)
	  lfs       f0, 0x170(r31)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x160(r31)

	.loc_0x380:
	  mr        r3, r31
	  addi      r4, r1, 0x44
	  li        r5, 0x1
	  bl        -0x647CC
	  lfs       f0, 0x44(r1)
	  stfs      f0, 0x144(r31)
	  lfs       f0, 0x48(r1)
	  stfs      f0, 0x154(r31)
	  lfs       f0, 0x4C(r1)
	  stfs      f0, 0x164(r31)
	  b         .loc_0x498

	.loc_0x3AC:
	  lha       r4, 0x110(r31)
	  cmpwi     r4, -0x1
	  beq-      .loc_0x498
	  lwz       r3, 0xF4(r31)
	  addi      r5, r1, 0x2C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x180(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xF4(r31)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x30(r1)
	  lfs       f2, 0x10(r1)
	  fsubs     f3, f1, f0
	  lfs       f0, 0x34(r1)
	  lfs       f1, 0x8(r1)
	  fsubs     f2, f2, f0
	  lfs       f0, 0x2C(r1)
	  fmuls     f3, f3, f3
	  fsubs     f1, f1, f0
	  lfs       f0, -0x5314(r2)
	  fmuls     f4, f2, f2
	  fmadds    f3, f1, f1, f3
	  fadds     f3, f4, f3
	  fcmpo     cr0, f3, f0
	  ble-      .loc_0x438
	  ble-      .loc_0x43C
	  fsqrte    f0, f3
	  fmuls     f3, f0, f3
	  b         .loc_0x43C

	.loc_0x438:
	  fmr       f3, f0

	.loc_0x43C:
	  lfs       f0, -0x5314(r2)
	  fcmpo     cr0, f3, f0
	  ble-      .loc_0x458
	  lfs       f0, -0x5320(r2)
	  fdivs     f0, f0, f3
	  fmuls     f1, f1, f0
	  fmuls     f2, f2, f0

	.loc_0x458:
	  lis       r3, 0x8051
	  subi      r3, r3, 0x2E20
	  bl        -0x16A940
	  fmr       f31, f1
	  mr        r3, r31
	  addi      r4, r1, 0x2C
	  li        r5, 0x1
	  bl        -0x648B4
	  lfs       f0, -0x5314(r2)
	  addi      r3, r31, 0x138
	  stfs      f31, 0x24(r1)
	  addi      r4, r1, 0x2C
	  addi      r5, r1, 0x20
	  stfs      f0, 0x20(r1)
	  stfs      f0, 0x28(r1)
	  bl        0x288E0C

	.loc_0x498:
	  psq_l     f31,0x108(r1),0,0
	  lwz       r0, 0x114(r1)
	  lfd       f31, 0x100(r1)
	  lwz       r31, 0xFC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x110
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8019FA9C
 * Size:	00000C
 */
void Game::Creature::clearCapture(void)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0xB8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8019FAA8
 * Size:	000054
 */
void Game::Creature::startCapture((Matrixf*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r4, 0xB8(r3)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x94(r12)
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
 * Address:	8019FAFC
 * Size:	0000A0
 */
void Game::Creature::updateCapture((Matrixf&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  mr        r31, r4
	  stw       r30, 0x48(r1)
	  mr        r30, r3
	  lwz       r3, 0xB8(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x88
	  addi      r5, r30, 0x138
	  bl        -0xB5828
	  addi      r3, r30, 0x138
	  addi      r4, r1, 0x14
	  bl        -0xB5868
	  lfs       f0, 0x144(r30)
	  mr        r3, r30
	  addi      r4, r1, 0x8
	  li        r5, 0
	  stfs      f0, 0x8(r1)
	  lfs       f0, 0x154(r30)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x164(r30)
	  stfs      f0, 0x10(r1)
	  bl        -0x649B4
	  addi      r3, r1, 0x14
	  addi      r4, r30, 0x138
	  bl        -0xB589C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x98(r12)
	  mtctr     r12
	  bctrl

	.loc_0x88:
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8019FB9C
 * Size:	000058
 */
void Game::Creature::endCapture(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x1
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r0, 0xB8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x9C(r12)
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
 * Address:	8019FBF4
 * Size:	000068
 */
void Game::Stickers::initialise(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  li        r3, 0x1B8
	  stw       r0, 0x14(r1)
	  li        r0, 0x6E
	  stb       r4, -0x6C8C(r13)
	  stw       r0, -0x7BD0(r13)
	  stw       r4, -0x6C90(r13)
	  bl        -0x17BC6C
	  li        r5, 0
	  stw       r3, -0x6C88(r13)
	  mr        r4, r5
	  li        r6, 0
	  b         .loc_0x4C

	.loc_0x3C:
	  lwz       r3, -0x6C88(r13)
	  addi      r6, r6, 0x1
	  stwx      r4, r3, r5
	  addi      r5, r5, 0x4

	.loc_0x4C:
	  lwz       r0, -0x7BD0(r13)
	  cmpw      r6, r0
	  blt+      .loc_0x3C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8019FC5C
 * Size:	000108
 */
void Game::Stickers::__ct((Game::Creature*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x8048
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  mr        r0, r31
	  stw       r30, 0x18(r1)
	  subi      r30, r5, 0xDE8
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r0
	  bl        0x271700
	  lis       r3, 0x804B
	  lis       r4, 0x804B
	  subi      r0, r3, 0x5324
	  lis       r3, 0x804B
	  stw       r0, 0x0(r28)
	  addi      r5, r4, 0x4A08
	  li        r4, 0
	  addi      r0, r3, 0x4D68
	  stw       r5, 0x0(r28)
	  stb       r4, 0x18(r28)
	  stw       r0, 0x0(r31)
	  lbz       r0, -0x6C8C(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x84
	  addi      r3, r30, 0x10
	  addi      r5, r30, 0x24
	  li        r4, 0x200
	  crclr     6, 0x6
	  bl        -0x17569C

	.loc_0x84:
	  li        r3, 0x1
	  li        r0, 0
	  stb       r3, -0x6C8C(r13)
	  lwz       r29, 0xF0(r29)
	  stw       r0, -0x6C90(r13)
	  b         .loc_0xDC

	.loc_0x9C:
	  lwz       r3, -0x6C90(r13)
	  lwz       r0, -0x7BD0(r13)
	  cmpw      r3, r0
	  blt-      .loc_0xC0
	  addi      r3, r30, 0x10
	  addi      r5, r30, 0x30
	  li        r4, 0x207
	  crclr     6, 0x6
	  bl        -0x1756D8

	.loc_0xC0:
	  lwz       r4, -0x6C90(r13)
	  lwz       r5, -0x6C88(r13)
	  addi      r3, r4, 0x1
	  rlwinm    r0,r4,2,0,29
	  stw       r3, -0x6C90(r13)
	  stwx      r29, r5, r0
	  lwz       r29, 0xFC(r29)

	.loc_0xDC:
	  cmplwi    r29, 0
	  bne+      .loc_0x9C
	  lwz       r0, 0x24(r1)
	  mr        r3, r31
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8019FD64
 * Size:	00008C
 */
void Game::Stickers::__dt(void)
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
	  beq-      .loc_0x70
	  lis       r4, 0x804B
	  li        r0, 0
	  addi      r4, r4, 0x4D68
	  stw       r4, 0x0(r30)
	  stb       r0, -0x6C8C(r13)
	  stw       r0, -0x6C90(r13)
	  beq-      .loc_0x60
	  lis       r4, 0x804B
	  addi      r0, r4, 0x4A08
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x60
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x2717C8

	.loc_0x60:
	  extsh.    r0, r31
	  ble-      .loc_0x70
	  mr        r3, r30
	  bl        -0x17BD1C

	.loc_0x70:
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
 * Address:	8019FDF0
 * Size:	000070
 */
void Game::Stickers::get((void*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  blt-      .loc_0x2C
	  lwz       r0, -0x6C90(r13)
	  cmpw      r31, r0
	  bge-      .loc_0x2C
	  li        r3, 0x1

	.loc_0x2C:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x50
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0xDD8
	  li        r4, 0x217
	  subi      r5, r5, 0xDC4
	  crclr     6, 0x6
	  bl        -0x1757FC

	.loc_0x50:
	  lwz       r3, -0x6C88(r13)
	  rlwinm    r0,r31,2,0,29
	  lwzx      r3, r3, r0
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8019FE60
 * Size:	000008
 */
void Game::Stickers::getNext((void*))
{
	/*
	.loc_0x0:
	  addi      r3, r4, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8019FE68
 * Size:	000008
 */
void Game::Stickers::getStart(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8019FE70
 * Size:	000008
 */
void Game::Stickers::getEnd(void)
{
	/*
	.loc_0x0:
	  lwz       r3, -0x6C90(r13)
	  blr
	*/
}

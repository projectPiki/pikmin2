

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
 * Address:	802292A4
 * Size:	0000A4
 */
void Game::VsGame::GameState::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r6, 0x804C
	  lis       r4, 0x804C
	  stw       r0, 0x14(r1)
	  addi      r0, r4, 0xEE4
	  li        r8, 0
	  addi      r6, r6, 0xE98
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lis       r5, 0x804C
	  li        r7, 0x2
	  stw       r0, 0x0(r3)
	  li        r0, 0x2
	  lis       r3, 0x8023
	  stw       r0, 0x4(r31)
	  addi      r0, r5, 0xF8C
	  subi      r4, r3, 0x6CB8
	  addi      r3, r31, 0x25
	  stw       r8, 0x8(r31)
	  li        r5, 0
	  stw       r6, 0x0(r31)
	  li        r6, 0x1
	  stw       r0, 0x0(r31)
	  stb       r8, 0x14(r31)
	  stb       r8, 0x15(r31)
	  bl        -0x167AD0
	  li        r3, 0xB0
	  bl        -0x205470
	  mr.       r0, r3
	  beq-      .loc_0x88
	  li        r4, 0
	  bl        0x1FBB30
	  mr        r0, r3

	.loc_0x88:
	  stw       r0, 0x10(r31)
	  mr        r3, r31
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80229348
 * Size:	00000C
 */
void BitFlag<unsigned char>::BitFlag()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stb       r0, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80229354
 * Size:	0001AC
 */
void Game::VsGame::GameState::init((Game::VsGameSection*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  stb       r0, 0x16(r3)
	  mr        r3, r31
	  stb       r0, 0x14(r30)
	  stb       r0, 0x15(r30)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, -0x40F8(r2)
	  mr        r3, r31
	  lfs       f2, -0x40F4(r2)
	  li        r4, 0x1
	  bl        -0xDB69C
	  bl        0x72D4
	  lwz       r4, -0x6C18(r13)
	  mr        r3, r31
	  lbz       r0, 0x3C(r4)
	  rlwinm    r0,r0,0,31,29
	  stb       r0, 0x3C(r4)
	  lwz       r4, -0x6C18(r13)
	  lbz       r0, 0x3C(r4)
	  ori       r0, r0, 0x20
	  stb       r0, 0x3C(r4)
	  bl        -0x673BC
	  lwz       r4, -0x6C18(r13)
	  li        r3, 0
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xB4
	  cmpwi     r0, 0x3
	  bne-      .loc_0xB8

	.loc_0xB4:
	  li        r3, 0x1

	.loc_0xB8:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xCC
	  mr        r3, r31
	  li        r4, 0
	  bl        -0xDBB04

	.loc_0xCC:
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0xF8
	  mr        r3, r31
	  li        r4, 0x2
	  bl        -0xDBB20
	  mr        r3, r30
	  bl        .loc_0x1AC
	  lwz       r3, -0x6560(r13)
	  bl        0x1D432C

	.loc_0xF8:
	  li        r3, 0
	  stb       r3, 0x24(r30)
	  lwz       r4, -0x6C18(r13)
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x118
	  cmpwi     r0, 0x3
	  bne-      .loc_0x11C

	.loc_0x118:
	  li        r3, 0x1

	.loc_0x11C:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x174
	  lfs       f0, 0x3C0(r31)
	  mr        r3, r31
	  stfs      f0, 0x18(r30)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x334(r31)
	  rlwinm    r0,r3,2,0,29
	  lfs       f0, -0x40F0(r2)
	  lwz       r3, 0x78(r4)
	  lfsx      f1, r3, r0
	  stfs      f1, 0x1C(r30)
	  lfs       f1, 0x18(r30)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x20(r30)
	  lfs       f1, 0x3C0(r31)
	  lfs       f0, 0x1C(r30)
	  fadds     f0, f1, f0
	  stfs      f0, 0x3C0(r31)

	.loc_0x174:
	  li        r0, 0
	  lfs       f0, -0x40EC(r2)
	  stw       r0, 0x3D8(r31)
	  stw       r0, 0x3D4(r31)
	  stw       r0, 0x3E0(r31)
	  stw       r0, 0x3DC(r31)
	  stfs      f0, 0x1F4(r31)
	  stfs      f0, 0x1F0(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x1AC:
	*/
}

/*
 * --INFO--
 * Address:	80229500
 * Size:	000014
 */
void Game::VsGame::GameState::clearLoseCauses(void)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stb       r0, 0x25(r3)
	  stb       r0, 0x26(r3)
	  stb       r0, 0x16(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80229514
 * Size:	0001D4
 */
void Game::VsGame::GameState::do_init((Game::VsGameSection*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  li        r6, 0
	  lis       r7, 0x8048
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  mr        r31, r4
	  stw       r30, 0x48(r1)
	  addi      r30, r7, 0x3550
	  stw       r29, 0x44(r1)
	  mr        r29, r3
	  lwz       r0, 0x104(r4)
	  lwz       r5, -0x64AC(r13)
	  stw       r0, 0x190(r5)
	  stb       r6, 0x14(r3)
	  stb       r6, 0x15(r3)
	  lwz       r5, -0x6C18(r13)
	  lwz       r0, 0x44(r5)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x110
	  lwz       r7, 0xC8(r31)
	  addi      r0, r30, 0x18
	  lfs       f0, -0x40EC(r2)
	  addi      r30, r1, 0x20
	  stw       r0, 0x8(r1)
	  mr        r4, r30
	  lwz       r3, -0x6CF8(r13)
	  li        r5, 0
	  stw       r6, 0xC(r1)
	  stw       r7, 0x14(r1)
	  stfs      f0, 0x20(r1)
	  stfs      f0, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  stfs      f0, 0x2C(r1)
	  stw       r6, 0x30(r1)
	  stw       r6, 0x18(r1)
	  stw       r6, 0x10(r1)
	  stw       r6, 0x34(r1)
	  stw       r6, 0x1C(r1)
	  stw       r6, 0x38(r1)
	  lwz       r0, 0xCC(r31)
	  stw       r0, 0x18(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6CF8(r13)
	  mr        r4, r30
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x24(r1)
	  lwz       r3, -0x6CD0(r13)
	  lwz       r3, 0xAC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0xF8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x2C(r1)

	.loc_0xF8:
	  lwz       r3, -0x64AC(r13)
	  addi      r4, r1, 0x8
	  bl        0x2033BC
	  lwz       r3, -0x6560(r13)
	  bl        0x1D4110
	  b         .loc_0x174

	.loc_0x110:
	  li        r5, 0x1
	  bl        0x25D8
	  lwz       r3, -0x6C18(r13)
	  addi      r5, r30, 0x28
	  li        r4, 0
	  li        r6, 0x3
	  bl        -0x746A8
	  lwz       r3, -0x6C18(r13)
	  addi      r5, r30, 0x34
	  li        r4, 0x1
	  li        r6, 0x6
	  bl        -0x746BC
	  lwz       r3, -0x6C18(r13)
	  addi      r5, r30, 0x34
	  li        r4, 0x1
	  bl        -0x746DC
	  lhz       r0, 0x14(r29)
	  mr        r3, r31
	  ori       r0, r0, 0x80
	  sth       r0, 0x14(r29)
	  lwz       r4, -0x6C18(r13)
	  lbz       r0, 0x3C(r4)
	  ori       r0, r0, 0x2
	  stb       r0, 0x3C(r4)
	  bl        -0xDB8FC

	.loc_0x174:
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x198
	  mr        r3, r31
	  bl        -0x66E40
	  mr        r3, r31
	  bl        -0x65FE8
	  b         .loc_0x1A8

	.loc_0x198:
	  mr        r3, r31
	  addi      r4, r31, 0x214
	  li        r5, 0
	  bl        -0x67290

	.loc_0x1A8:
	  lwz       r3, -0x6560(r13)
	  li        r0, 0x1
	  lwz       r3, 0x18(r3)
	  stb       r0, 0x91(r3)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  lwz       r29, 0x44(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802296E8
 * Size:	00000C
 */
void Game::VsGame::GameState::goingToCave((Game::VsGameSection*))
{
	/*
	.loc_0x0:
	  lhz       r0, 0x14(r3)
	  rlwinm    r3,r0,0,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802296F4
 * Size:	0008FC
 */
void Game::VsGame::GameState::exec((Game::VsGameSection*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stmw      r27, 0x3C(r1)
	  mr        r29, r3
	  lis       r3, 0x8048
	  mr        r30, r4
	  addi      r31, r3, 0x3550
	  lhz       r0, 0x14(r29)
	  rlwinm.   r0,r0,0,16,16
	  bne-      .loc_0x8E8
	  mr        r3, r30
	  bl        -0xDDEA8
	  lwz       r3, 0x180(r30)
	  lwz       r0, 0x4(r3)
	  cmpwi     r0, 0x2
	  bne-      .loc_0x8E8
	  lhz       r0, 0x14(r29)
	  rlwinm.   r0,r0,0,24,24
	  beq-      .loc_0xAC
	  lwz       r3, -0x6560(r13)
	  bl        0x1D5230
	  cmpwi     r3, 0x1
	  beq-      .loc_0x64
	  b         .loc_0x8E8

	.loc_0x64:
	  lwz       r3, -0x6C18(r13)
	  addi      r5, r31, 0x40
	  li        r4, 0
	  li        r6, 0x3
	  bl        -0x747D4
	  lwz       r3, -0x6C18(r13)
	  addi      r5, r31, 0x40
	  li        r4, 0
	  bl        -0x747F4
	  lhz       r0, 0x14(r29)
	  rlwinm    r0,r0,0,25,23
	  sth       r0, 0x14(r29)
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x3C(r3)
	  ori       r0, r0, 0x2
	  stb       r0, 0x3C(r3)
	  b         .loc_0xAC
	  b         .loc_0x8E8

	.loc_0xAC:
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x2
	  beq-      .loc_0xC8
	  cmpwi     r0, 0x3
	  bne-      .loc_0xCC

	.loc_0xC8:
	  li        r4, 0x1

	.loc_0xCC:
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0xE4
	  mr        r3, r29
	  mr        r4, r30
	  bl        .loc_0x8FC
	  b         .loc_0x2D0

	.loc_0xE4:
	  bl        -0x74818
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2D0
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x2D0
	  lfs       f1, 0x1F0(r30)
	  lfs       f0, -0x40EC(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1D8
	  lwz       r3, -0x6514(r13)
	  li        r4, 0
	  lfs       f0, 0x54(r3)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x1F0(r30)
	  lwz       r3, -0x6D20(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x1C4
	  lfs       f1, 0x1F0(r30)
	  lfs       f0, -0x40EC(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x1C4
	  lwz       r28, 0x2D0(r3)
	  lwz       r0, 0x0(r28)
	  rlwinm.   r0,r0,0,0,0
	  beq-      .loc_0x178
	  lwz       r0, 0x4(r28)
	  stw       r0, 0x0(r28)
	  lwz       r0, 0x0(r28)
	  rlwinm    r0,r0,0,1,31
	  stw       r0, 0x0(r28)

	.loc_0x178:
	  lwz       r0, 0x0(r28)
	  rlwinm.   r27,r0,0,31,31
	  beq-      .loc_0x1A4
	  ori       r0, r0, 0x1
	  mr        r3, r28
	  stw       r0, 0x0(r28)
	  bl        0x18E698
	  cmplwi    r27, 0
	  bne-      .loc_0x1A4
	  addi      r3, r28, 0x1C
	  bl        0x18E000

	.loc_0x1A4:
	  lwz       r3, 0x0(r28)
	  rlwinm.   r0,r3,0,30,30
	  beq-      .loc_0x1C4
	  ori       r0, r3, 0x2
	  mr        r3, r28
	  stw       r0, 0x0(r28)
	  lwz       r4, 0x10(r28)
	  bl        0x18E848

	.loc_0x1C4:
	  lwz       r3, -0x6D0C(r13)
	  li        r4, 0x1
	  li        r5, 0
	  bl        -0xCA2D0
	  b         .loc_0x1E8

	.loc_0x1D8:
	  lwz       r3, -0x6D0C(r13)
	  li        r4, 0x1
	  li        r5, 0x1
	  bl        -0xCA2E4

	.loc_0x1E8:
	  lfs       f1, 0x1F4(r30)
	  lfs       f0, -0x40EC(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x2C0
	  lwz       r3, -0x6514(r13)
	  li        r4, 0x1
	  lfs       f0, 0x54(r3)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x1F4(r30)
	  lwz       r3, -0x6D20(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x2AC
	  lfs       f1, 0x1F4(r30)
	  lfs       f0, -0x40EC(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x2AC
	  lwz       r28, 0x2D0(r3)
	  lwz       r0, 0x0(r28)
	  rlwinm.   r0,r0,0,0,0
	  beq-      .loc_0x260
	  lwz       r0, 0x4(r28)
	  stw       r0, 0x0(r28)
	  lwz       r0, 0x0(r28)
	  rlwinm    r0,r0,0,1,31
	  stw       r0, 0x0(r28)

	.loc_0x260:
	  lwz       r0, 0x0(r28)
	  rlwinm.   r27,r0,0,31,31
	  beq-      .loc_0x28C
	  ori       r0, r0, 0x1
	  mr        r3, r28
	  stw       r0, 0x0(r28)
	  bl        0x18E5B0
	  cmplwi    r27, 0
	  bne-      .loc_0x28C
	  addi      r3, r28, 0x1C
	  bl        0x18DF18

	.loc_0x28C:
	  lwz       r3, 0x0(r28)
	  rlwinm.   r0,r3,0,30,30
	  beq-      .loc_0x2AC
	  ori       r0, r3, 0x2
	  mr        r3, r28
	  stw       r0, 0x0(r28)
	  lwz       r4, 0x10(r28)
	  bl        0x18E760

	.loc_0x2AC:
	  lwz       r3, -0x6D0C(r13)
	  li        r4, 0
	  li        r5, 0
	  bl        -0xCA3B8
	  b         .loc_0x2D0

	.loc_0x2C0:
	  lwz       r3, -0x6D0C(r13)
	  li        r4, 0
	  li        r5, 0x1
	  bl        -0xCA3CC

	.loc_0x2D0:
	  mr        r3, r29
	  mr        r4, r30
	  bl        0xFE8
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x4A8
	  mr        r3, r30
	  bl        -0x65938
	  lwz       r3, -0x6C18(r13)
	  bl        -0x74A24
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x314
	  mr        r3, r30
	  bl        -0x6632C
	  lwz       r3, 0x330(r30)
	  bl        0xBF60

	.loc_0x314:
	  lhz       r3, 0x14(r29)
	  rlwinm.   r0,r3,0,23,23
	  beq-      .loc_0x414
	  lwz       r3, -0x6560(r13)
	  bl        0x1D5098
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x8E8
	  lhz       r0, 0x14(r29)
	  rlwinm    r0,r0,0,24,22
	  sth       r0, 0x14(r29)
	  lhz       r0, 0x14(r29)
	  ori       r0, r0, 0x200
	  sth       r0, 0x14(r29)
	  lbz       r0, 0x25(r29)
	  lbz       r3, 0x26(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x374
	  cmplwi    r3, 0
	  bne-      .loc_0x374
	  lwz       r3, -0x6BE8(r13)
	  li        r6, 0x3
	  addi      r0, r3, 0x1
	  stw       r0, -0x6BE8(r13)
	  b         .loc_0x3D4

	.loc_0x374:
	  cmplwi    r0, 0
	  bne-      .loc_0x398
	  lwz       r3, -0x6BF0(r13)
	  li        r0, 0
	  li        r6, 0x1
	  addi      r3, r3, 0x1
	  stw       r3, -0x6BF0(r13)
	  stw       r0, 0x34C(r30)
	  b         .loc_0x3D4

	.loc_0x398:
	  cmplwi    r3, 0
	  bne-      .loc_0x3BC
	  lwz       r3, -0x6BEC(r13)
	  li        r0, 0x1
	  li        r6, 0x2
	  addi      r3, r3, 0x1
	  stw       r3, -0x6BEC(r13)
	  stw       r0, 0x34C(r30)
	  b         .loc_0x3D4

	.loc_0x3BC:
	  lwz       r3, -0x6BE8(r13)
	  li        r0, -0x1
	  li        r6, 0x3
	  addi      r3, r3, 0x1
	  stw       r3, -0x6BE8(r13)
	  stw       r0, 0x34C(r30)

	.loc_0x3D4:
	  lis       r4, 0x804B
	  lis       r3, 0x804C
	  addi      r0, r4, 0x1148
	  li        r4, 0
	  stw       r0, 0x20(r1)
	  addi      r5, r3, 0xF5C
	  li        r0, 0x1
	  lwz       r3, -0x6560(r13)
	  stw       r4, 0x24(r1)
	  addi      r4, r1, 0x20
	  stw       r5, 0x20(r1)
	  stw       r6, 0x28(r1)
	  stw       r0, 0x2C(r1)
	  bl        0x1D501C
	  b         .loc_0x8E8
	  b         .loc_0x8E8

	.loc_0x414:
	  rlwinm.   r0,r3,0,22,22
	  beq-      .loc_0x460
	  lwz       r3, -0x6560(r13)
	  bl        0x1D50AC
	  cmpwi     r3, 0x3
	  beq-      .loc_0x434
	  bge-      .loc_0x8E8
	  b         .loc_0x8E8

	.loc_0x434:
	  li        r0, 0x1
	  mr        r3, r29
	  stb       r0, 0xC(r1)
	  mr        r4, r30
	  addi      r6, r1, 0xC
	  li        r5, 0
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x8E8

	.loc_0x460:
	  lbz       r0, 0x16(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x688
	  li        r3, 0x1
	  bl        -0x58C28
	  cmpwi     r3, 0
	  bne-      .loc_0x488
	  lbz       r0, 0x25(r29)
	  ori       r0, r0, 0x2
	  stb       r0, 0x25(r29)

	.loc_0x488:
	  li        r3, 0
	  bl        -0x58C44
	  cmpwi     r3, 0
	  bne-      .loc_0x688
	  lbz       r0, 0x26(r29)
	  ori       r0, r0, 0x2
	  stb       r0, 0x26(r29)
	  b         .loc_0x688

	.loc_0x4A8:
	  bl        0x22F1F4
	  mr        r0, r3
	  li        r3, -0x1
	  mr        r27, r0
	  bl        -0x58D9C
	  cmpwi     r3, 0xA
	  bge-      .loc_0x4F0
	  lwz       r0, -0x69E8(r13)
	  cmpwi     r0, 0
	  ble-      .loc_0x4F0
	  cmplwi    r27, 0
	  beq-      .loc_0x50C
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x50C

	.loc_0x4F0:
	  cmplwi    r27, 0
	  beq-      .loc_0x50C
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x50C:
	  lhz       r0, 0x14(r29)
	  rlwinm.   r0,r0,0,28,28
	  beq-      .loc_0x56C
	  lwz       r3, -0x6560(r13)
	  bl        0x1D4FB0
	  cmpwi     r3, 0x3
	  beq-      .loc_0x530
	  bge-      .loc_0x8E8
	  b         .loc_0x8E8

	.loc_0x530:
	  lis       r3, 0x8051
	  addi      r3, r3, 0x25EC
	  bl        -0x58BBC
	  li        r0, 0
	  addi      r6, r1, 0x8
	  stb       r0, 0x8(r1)
	  mr        r3, r29
	  mr        r4, r30
	  li        r5, 0x4
	  stb       r0, 0x8(r1)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x8E8

	.loc_0x56C:
	  lwz       r3, -0x6C18(r13)
	  bl        -0x74C9C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x688
	  lfs       f1, 0x3C0(r30)
	  lfs       f0, -0x40EC(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x688
	  lhz       r0, 0x14(r29)
	  rlwinm.   r0,r0,0,29,29
	  beq-      .loc_0x688
	  lbz       r0, 0x1F8(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x688
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x3C(r3)
	  rlwinm.   r0,r0,0,26,26
	  beq-      .loc_0x688
	  bl        -0x74CE8
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x688
	  lwz       r3, -0x64AC(r13)
	  lwz       r0, 0x18(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x688
	  lwz       r3, -0x6514(r13)
	  lfs       f3, -0x40E8(r2)
	  lfs       f2, 0x54(r3)
	  lfs       f1, 0x3C0(r30)
	  lfs       f0, -0x40EC(r2)
	  fnmsubs   f1, f3, f2, f1
	  stfs      f1, 0x3C0(r30)
	  lfs       f1, 0x3C0(r30)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x688
	  lhz       r0, 0x14(r29)
	  rlwinm.   r0,r0,0,28,28
	  bne-      .loc_0x688
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0x1
	  subi      r5, r2, 0x40E4
	  li        r6, 0x3
	  lbz       r0, 0x3C(r3)
	  rlwinm    r0,r0,0,27,25
	  stb       r0, 0x3C(r3)
	  lwz       r3, -0x6C18(r13)
	  bl        -0x74D88
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0x1
	  subi      r5, r2, 0x40E4
	  bl        -0x74DA8
	  lhz       r0, 0x14(r29)
	  li        r3, 0
	  ori       r0, r0, 0x8
	  sth       r0, 0x14(r29)
	  lwz       r4, -0x6C18(r13)
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x664
	  cmpwi     r0, 0x3
	  bne-      .loc_0x668

	.loc_0x664:
	  li        r3, 0x1

	.loc_0x668:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x67C
	  lwz       r3, -0x6560(r13)
	  bl        0x1D4EE8
	  b         .loc_0x8E8

	.loc_0x67C:
	  lwz       r3, -0x6560(r13)
	  bl        0x1D4FB0
	  b         .loc_0x8E8

	.loc_0x688:
	  lhz       r0, 0x14(r29)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x774
	  lwz       r0, 0x1FC(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x774
	  lwz       r3, -0x6560(r13)
	  bl        0x1D43A4
	  cmpwi     r3, 0x2
	  beq-      .loc_0x72C
	  bge-      .loc_0x6C4
	  cmpwi     r3, 0
	  beq-      .loc_0x774
	  bge-      .loc_0x6D0
	  b         .loc_0x774

	.loc_0x6C4:
	  cmpwi     r3, 0x4
	  bge-      .loc_0x774
	  b         .loc_0x754

	.loc_0x6D0:
	  lwz       r3, -0x6C18(r13)
	  addi      r5, r31, 0x4C
	  li        r4, 0
	  li        r6, 0x3
	  lbz       r0, 0x3C(r3)
	  rlwinm    r0,r0,0,27,25
	  stb       r0, 0x3C(r3)
	  lwz       r3, -0x6C18(r13)
	  bl        -0x74E50
	  lwz       r3, -0x6C18(r13)
	  addi      r5, r31, 0x4C
	  li        r4, 0
	  bl        -0x74E70
	  mr        r3, r30
	  lwz       r4, 0x1FC(r30)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  lhz       r0, 0x14(r29)
	  ori       r0, r0, 0x1
	  sth       r0, 0x14(r29)
	  b         .loc_0x8E8

	.loc_0x72C:
	  lwz       r3, -0x6C18(r13)
	  addi      r5, r31, 0x58
	  li        r4, 0
	  li        r6, 0x3
	  bl        -0x74E9C
	  lwz       r3, -0x6C18(r13)
	  addi      r5, r31, 0x58
	  li        r4, 0
	  bl        -0x74EBC
	  b         .loc_0x774

	.loc_0x754:
	  lwz       r3, -0x6C18(r13)
	  addi      r5, r31, 0x64
	  li        r4, 0
	  lbz       r0, 0x3C(r3)
	  rlwinm    r0,r0,0,27,25
	  stb       r0, 0x3C(r3)
	  lwz       r3, -0x6C18(r13)
	  bl        -0x74EE0

	.loc_0x774:
	  lbz       r0, 0x1F8(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x790
	  mr        r3, r30
	  bl        -0x67E38
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x8E8

	.loc_0x790:
	  mr        r3, r29
	  mr        r4, r30
	  bl        0x20B0
	  lbz       r0, 0x16(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x7B4
	  mr        r3, r29
	  mr        r4, r30
	  bl        0x4D4

	.loc_0x7B4:
	  lwz       r7, -0x6C18(r13)
	  lwz       r0, 0x44(r7)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x8E8
	  lhz       r3, 0x14(r29)
	  rlwinm.   r0,r3,0,23,23
	  bne-      .loc_0x8E8
	  rlwinm.   r0,r3,0,22,22
	  bne-      .loc_0x8E8
	  lbz       r0, 0x16(r29)
	  cmplwi    r0, 0x1
	  beq-      .loc_0x8E8
	  lbz       r0, 0x25(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x7FC
	  lbz       r0, 0x26(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x8E8

	.loc_0x7FC:
	  lbz       r0, 0x3C(r7)
	  li        r4, 0x1
	  li        r5, 0
	  li        r6, 0x3
	  rlwinm    r0,r0,0,27,25
	  stb       r0, 0x3C(r7)
	  lhz       r0, 0x14(r29)
	  ori       r0, r0, 0x100
	  sth       r0, 0x14(r29)
	  lwz       r3, -0x6C18(r13)
	  bl        -0x74F84
	  lbz       r3, 0x25(r29)
	  li        r6, -0x1
	  li        r7, -0x1
	  rlwinm.   r0,r3,0,29,29
	  beq-      .loc_0x844
	  li        r7, 0x3
	  b         .loc_0x860

	.loc_0x844:
	  rlwinm.   r0,r3,0,31,31
	  beq-      .loc_0x854
	  li        r6, 0x1
	  b         .loc_0x860

	.loc_0x854:
	  rlwinm.   r0,r3,0,30,30
	  beq-      .loc_0x860
	  li        r6, 0x2

	.loc_0x860:
	  cmpwi     r7, 0x3
	  beq-      .loc_0x898
	  lbz       r3, 0x26(r29)
	  rlwinm.   r0,r3,0,29,29
	  beq-      .loc_0x87C
	  li        r6, 0x3
	  b         .loc_0x898

	.loc_0x87C:
	  rlwinm.   r0,r3,0,31,31
	  beq-      .loc_0x88C
	  li        r7, 0x1
	  b         .loc_0x898

	.loc_0x88C:
	  rlwinm.   r0,r3,0,30,30
	  beq-      .loc_0x898
	  li        r7, 0x2

	.loc_0x898:
	  lis       r4, 0x804B
	  lis       r3, 0x804C
	  addi      r0, r4, 0x1148
	  li        r5, 0
	  stw       r0, 0x10(r1)
	  addi      r0, r3, 0xF44
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0x10
	  stw       r5, 0x14(r1)
	  stw       r0, 0x10(r1)
	  stw       r6, 0x18(r1)
	  stw       r7, 0x1C(r1)
	  bl        0x1D4A4C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x8E8
	  addi      r3, r31, 0x70
	  addi      r5, r31, 0x80
	  li        r4, 0x201
	  crclr     6, 0x6
	  bl        -0x1FF998

	.loc_0x8E8:
	  lmw       r27, 0x3C(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr

	.loc_0x8FC:
	*/
}

/*
 * --INFO--
 * Address:	80229FF0
 * Size:	000388
 */
void Game::VsGame::GameState::checkFindKeyDemo((Game::VsGameSection*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0xC0(r1)
	  mflr      r0
	  stw       r0, 0xC4(r1)
	  stfd      f31, 0xB0(r1)
	  psq_st    f31,0xB8(r1),0,0
	  stfd      f30, 0xA0(r1)
	  psq_st    f30,0xA8(r1),0,0
	  stfd      f29, 0x90(r1)
	  psq_st    f29,0x98(r1),0,0
	  stw       r31, 0x8C(r1)
	  stw       r30, 0x88(r1)
	  stw       r29, 0x84(r1)
	  stw       r28, 0x80(r1)
	  mr        r29, r3
	  mr        r30, r4
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x350
	  lwz       r3, -0x6D20(r13)
	  bl        -0xCF41C
	  mr.       r31, r3
	  beq-      .loc_0x350
	  lwz       r3, -0x6AD8(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x68
	  addi      r3, r3, 0x54

	.loc_0x68:
	  li        r0, 0
	  lis       r4, 0x804B
	  addi      r4, r4, 0x1B74
	  stw       r0, 0x3C(r1)
	  cmplwi    r0, 0
	  stw       r4, 0x30(r1)
	  stw       r0, 0x34(r1)
	  stw       r3, 0x38(r1)
	  bne-      .loc_0xA4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x34(r1)
	  b         .loc_0x330

	.loc_0xA4:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x34(r1)
	  b         .loc_0x110

	.loc_0xBC:
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
	  bne-      .loc_0x330
	  lwz       r3, 0x38(r1)
	  lwz       r4, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x34(r1)

	.loc_0x110:
	  lwz       r12, 0x30(r1)
	  addi      r3, r1, 0x30
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xBC
	  b         .loc_0x330

	.loc_0x130:
	  lwz       r3, 0x38(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r28, r3
	  bl        -0xC3758
	  cmpwi     r3, 0xC
	  bne-      .loc_0x274
	  mr        r4, r28
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f31, 0x14(r1)
	  mr        r3, r28
	  lfs       f30, 0x18(r1)
	  lfs       f29, 0x1C(r1)
	  bl        -0xC37B0
	  lfs       f0, -0x40DC(r2)
	  mr        r3, r31
	  stfs      f31, 0x20(r1)
	  addi      r4, r1, 0x20
	  fadds     f0, f0, f1
	  stfs      f30, 0x24(r1)
	  stfs      f29, 0x28(r1)
	  stfs      f0, 0x2C(r1)
	  bl        -0x938C
	  cmplwi    r3, 0
	  beq-      .loc_0x274
	  lwz       r3, -0x6514(r13)
	  bl        0x1F8D90
	  bl        0xA66C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x274
	  lwz       r6, 0xC8(r30)
	  lis       r3, 0x8048
	  li        r0, 0
	  lfs       f0, -0x40EC(r2)
	  addi      r5, r3, 0x35DC
	  stw       r0, 0x44(r1)
	  mr        r4, r28
	  addi      r3, r1, 0x8
	  stw       r5, 0x40(r1)
	  stw       r6, 0x4C(r1)
	  stfs      f0, 0x58(r1)
	  stfs      f0, 0x5C(r1)
	  stfs      f0, 0x60(r1)
	  stfs      f0, 0x64(r1)
	  stw       r0, 0x68(r1)
	  stw       r0, 0x50(r1)
	  stw       r0, 0x48(r1)
	  stw       r0, 0x6C(r1)
	  stw       r0, 0x54(r1)
	  stw       r0, 0x70(r1)
	  lwz       r0, 0xCC(r30)
	  stw       r0, 0x50(r1)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  lis       r3, 0x8051
	  lfs       f1, 0xC(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x58(r1)
	  stfs      f1, 0x5C(r1)
	  stfs      f0, 0x60(r1)
	  lfs       f1, 0x140(r28)
	  lfs       f2, 0x160(r28)
	  bl        -0x1F5138
	  stfs      f1, 0x64(r1)
	  addi      r4, r1, 0x40
	  lwz       r3, -0x64AC(r13)
	  stw       r28, 0x194(r3)
	  lwz       r3, -0x64AC(r13)
	  bl        0x202778
	  li        r0, 0x1
	  stb       r0, 0x24(r29)

	.loc_0x274:
	  lwz       r0, 0x3C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x2A0
	  lwz       r3, 0x38(r1)
	  lwz       r4, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x34(r1)
	  b         .loc_0x330

	.loc_0x2A0:
	  lwz       r3, 0x38(r1)
	  lwz       r4, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x34(r1)
	  b         .loc_0x314

	.loc_0x2C0:
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
	  bne-      .loc_0x330
	  lwz       r3, 0x38(r1)
	  lwz       r4, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x34(r1)

	.loc_0x314:
	  lwz       r12, 0x30(r1)
	  addi      r3, r1, 0x30
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x2C0

	.loc_0x330:
	  lwz       r3, 0x38(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x34(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x130

	.loc_0x350:
	  psq_l     f31,0xB8(r1),0,0
	  lfd       f31, 0xB0(r1)
	  psq_l     f30,0xA8(r1),0,0
	  lfd       f30, 0xA0(r1)
	  psq_l     f29,0x98(r1),0,0
	  lfd       f29, 0x90(r1)
	  lwz       r31, 0x8C(r1)
	  lwz       r30, 0x88(r1)
	  lwz       r29, 0x84(r1)
	  lwz       r0, 0xC4(r1)
	  lwz       r28, 0x80(r1)
	  mtlr      r0
	  addi      r1, r1, 0xC0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022A378
 * Size:	0003E4
 */
void Game::VsGame::GameState::checkSMenu((Game::VsGameSection*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x1F0(r1)
	  mflr      r0
	  lis       r5, 0x8048
	  stw       r0, 0x1F4(r1)
	  stw       r31, 0x1EC(r1)
	  mr        r31, r4
	  stw       r30, 0x1E8(r1)
	  addi      r30, r5, 0x3550
	  stw       r29, 0x1E4(r1)
	  mr        r29, r3
	  lwz       r3, -0x6560(r13)
	  bl        0x1D2B8C
	  cmpwi     r3, 0x3
	  beq-      .loc_0xA0
	  bge-      .loc_0x54
	  cmpwi     r3, 0x1
	  beq-      .loc_0x60
	  bge-      .loc_0x88
	  cmpwi     r3, 0
	  bge-      .loc_0x3C8
	  b         .loc_0x28C

	.loc_0x54:
	  cmpwi     r3, 0x5
	  beq-      .loc_0xB8
	  b         .loc_0x28C

	.loc_0x60:
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0
	  subi      r5, r2, 0x40D8
	  li        r6, 0x3
	  bl        -0x75454
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0
	  subi      r5, r2, 0x40D8
	  bl        -0x75474
	  b         .loc_0x3C8

	.loc_0x88:
	  addi      r3, r30, 0x70
	  addi      r5, r30, 0x9C
	  li        r4, 0x269
	  crclr     6, 0x6
	  bl        -0x1FFDD0
	  b         .loc_0x3C8

	.loc_0xA0:
	  addi      r3, r30, 0x70
	  li        r4, 0x26C
	  subi      r5, r2, 0x40D0
	  crclr     6, 0x6
	  bl        -0x1FFDE8
	  b         .loc_0x3C8

	.loc_0xB8:
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0
	  subi      r5, r2, 0x40C8
	  bl        -0x754B8
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x11C
	  li        r3, -0x1
	  li        r0, 0x1
	  stw       r3, 0x34C(r31)
	  mr        r3, r29
	  mr        r4, r31
	  addi      r6, r1, 0x8
	  lwz       r8, -0x6C18(r13)
	  li        r5, 0
	  lbz       r7, 0x3C(r8)
	  rlwinm    r7,r7,0,27,25
	  stb       r7, 0x3C(r8)
	  stb       r0, 0x8(r1)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x3C8

	.loc_0x11C:
	  lwz       r4, -0x64AC(r13)
	  lwz       r0, 0x18(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x268
	  lhz       r0, 0x14(r29)
	  rlwinm.   r0,r0,0,30,30
	  bne-      .loc_0x268
	  lbz       r5, 0x3C(r3)
	  addi      r4, r30, 0xAC
	  lfs       f0, -0x40EC(r2)
	  li        r0, 0
	  rlwinm    r5,r5,0,27,25
	  stb       r5, 0x3C(r3)
	  lwz       r5, 0xC8(r31)
	  lwz       r3, -0x6CD0(r13)
	  stw       r4, 0x18(r1)
	  stw       r0, 0x1C(r1)
	  stw       r5, 0x24(r1)
	  stfs      f0, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  stfs      f0, 0x38(r1)
	  stfs      f0, 0x3C(r1)
	  stw       r0, 0x40(r1)
	  stw       r0, 0x28(r1)
	  stw       r0, 0x20(r1)
	  stw       r0, 0x44(r1)
	  stw       r0, 0x2C(r1)
	  stw       r0, 0x48(r1)
	  lwz       r0, 0xCC(r31)
	  stw       r0, 0x28(r1)
	  lwz       r31, 0xAC(r3)
	  cmplwi    r31, 0
	  bne-      .loc_0x1B4
	  addi      r3, r30, 0x70
	  addi      r5, r30, 0xBC
	  li        r4, 0x28C
	  crclr     6, 0x6
	  bl        -0x1FFEE8

	.loc_0x1B4:
	  mr        r4, r31
	  addi      r3, r1, 0xC
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0xC(r1)
	  mr        r3, r31
	  lfs       f1, 0x10(r1)
	  lfs       f0, 0x14(r1)
	  stfs      f2, 0x30(r1)
	  stfs      f1, 0x34(r1)
	  stfs      f0, 0x38(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x3C(r1)
	  li        r30, 0

	.loc_0x200:
	  lwz       r3, -0x6D20(r13)
	  mr        r4, r30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r31, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x24C
	  mr        r3, r31
	  bl        -0x8B03C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x24C
	  mr        r3, r31
	  bl        -0x8B19C

	.loc_0x24C:
	  addi      r30, r30, 0x1
	  cmpwi     r30, 0x2
	  blt+      .loc_0x200
	  lwz       r3, -0x64AC(r13)
	  addi      r4, r1, 0x18
	  bl        0x2023F8
	  b         .loc_0x3C8

	.loc_0x268:
	  li        r4, 0
	  subi      r5, r2, 0x40C8
	  bl        -0x75664
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0
	  subi      r5, r2, 0x40C8
	  li        r6, 0x3
	  bl        -0x75668
	  b         .loc_0x3C8

	.loc_0x28C:
	  lwz       r3, -0x64AC(r13)
	  lwz       r0, 0x18(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x3C8
	  lwz       r3, -0x6C18(r13)
	  bl        -0x75658
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x3C8
	  lwz       r3, 0x10C(r31)
	  lwz       r0, 0x1C(r3)
	  rlwinm.   r0,r0,0,19,19
	  beq-      .loc_0x328
	  addi      r3, r1, 0x110
	  bl        -0x15340
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0x2
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x2DC
	  li        r4, 0x1

	.loc_0x2DC:
	  stw       r4, 0x1CC(r1)
	  lwz       r3, -0x6560(r13)
	  lwz       r4, 0x10C(r31)
	  bl        0x1D1A18
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0x110
	  bl        0x1D2664
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x3C8
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0x1
	  subi      r5, r2, 0x40C0
	  li        r6, 0x3
	  bl        -0x756F4
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0x1
	  subi      r5, r2, 0x40C0
	  bl        -0x75714
	  b         .loc_0x3C8

	.loc_0x328:
	  lwz       r4, -0x6C18(r13)
	  li        r3, 0
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x344
	  cmpwi     r0, 0x3
	  bne-      .loc_0x348

	.loc_0x344:
	  li        r3, 0x1

	.loc_0x348:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x3C8
	  lwz       r3, 0x110(r31)
	  lwz       r0, 0x1C(r3)
	  rlwinm.   r0,r0,0,19,19
	  beq-      .loc_0x3C8
	  addi      r3, r1, 0x4C
	  bl        -0x153E4
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0x2
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x380
	  li        r4, 0x1

	.loc_0x380:
	  stw       r4, 0x108(r1)
	  lwz       r3, -0x6560(r13)
	  lwz       r4, 0x110(r31)
	  bl        0x1D1974
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0x4C
	  bl        0x1D25C0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x3C8
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0x1
	  subi      r5, r2, 0x40C0
	  li        r6, 0x3
	  bl        -0x75798
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0x1
	  subi      r5, r2, 0x40C0
	  bl        -0x757B8

	.loc_0x3C8:
	  lwz       r0, 0x1F4(r1)
	  lwz       r31, 0x1EC(r1)
	  lwz       r30, 0x1E8(r1)
	  lwz       r29, 0x1E4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x1F0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022A75C
 * Size:	000050
 */
void Game::VsGame::GameState::pre2dDraw((Graphics&, Game::VsGameSection*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r6, -0x6C18(r13)
	  lwz       r0, 0x44(r6)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x40
	  lhz       r0, 0x14(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x40
	  lwz       r3, -0x64AC(r13)
	  lwz       r0, 0x18(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x40
	  lwz       r3, 0x330(r5)
	  bl        0xB214

	.loc_0x40:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022A7AC
 * Size:	000034
 */
void Game::VsGame::GameState::draw((Game::VsGameSection*, Graphics&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lhz       r0, 0x14(r3)
	  rlwinm.   r0,r0,0,16,16
	  bne-      .loc_0x24
	  mr        r3, r4
	  mr        r4, r5
	  bl        -0xDEBA4

	.loc_0x24:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022A7E0
 * Size:	000044
 */
void Game::VsGame::GameState::cleanup((Game::VsGameSection*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8048
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  addi      r5, r3, 0x361C
	  lwz       r6, -0x6C18(r13)
	  lbz       r0, 0x3C(r6)
	  rlwinm    r0,r0,0,31,29
	  stb       r0, 0x3C(r6)
	  lwz       r3, -0x6C18(r13)
	  bl        -0x75888
	  bl        0x23CC28
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022A824
 * Size:	000034
 */
void Game::VsGame::GameState::onBattleFinished((Game::VsGameSection*, int,
                                                bool))
{
	/*
	.loc_0x0:
	  lbz       r0, 0x16(r3)
	  cmplwi    r0, 0
	  bnelr-
	  subfic    r4, r5, 0x1
	  rlwinm.   r0,r6,0,24,31
	  add       r5, r3, r4
	  lbz       r4, 0x25(r5)
	  ori       r0, r4, 0x4
	  stb       r0, 0x25(r5)
	  beqlr-
	  li        r0, 0x1
	  stb       r0, 0x16(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022A858
 * Size:	000010
 */
void Game::VsGame::GameState::isCardUsable((Game::VsGameSection*))
{
	/*
	.loc_0x0:
	  lbz       r0, 0x16(r3)
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,24,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022A868
 * Size:	00014C
 */
void Game::VsGame::GameState::onRedOrBlueSuckStart((Game::VsGameSection*, int,
                                                    bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  rlwinm.   r0,r6,0,24,31
	  stw       r31, 0x4C(r1)
	  beq-      .loc_0x3C
	  rlwinm    r0,r5,2,0,29
	  add       r7, r4, r0
	  lwz       r4, 0x3DC(r7)
	  addi      r0, r4, 0x1
	  stw       r0, 0x3DC(r7)
	  beq-      .loc_0x3C
	  lwz       r0, 0x3DC(r7)
	  cmpwi     r0, 0x4
	  blt-      .loc_0x138

	.loc_0x3C:
	  lbz       r0, 0x16(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x138
	  rlwinm.   r0,r6,0,24,31
	  li        r4, 0x1
	  stb       r4, 0x16(r3)
	  li        r6, 0x4
	  bne-      .loc_0x64
	  ori       r0, r6, 0x80
	  rlwinm    r6,r0,0,24,31

	.loc_0x64:
	  subfic    r4, r5, 0x1
	  addi      r5, r4, 0x25
	  lbzx      r0, r3, r5
	  or        r0, r0, r6
	  stbx      r0, r3, r5
	  lwz       r3, -0x6CD0(r13)
	  bl        -0xAEE48
	  lwz       r6, -0x6C18(r13)
	  mr        r31, r3
	  li        r5, 0
	  lis       r4, 0x8048
	  lwz       r8, 0x58(r6)
	  addi      r6, r4, 0x362C
	  lfs       f0, -0x40EC(r2)
	  mr        r4, r31
	  lwz       r7, 0xC8(r8)
	  addi      r3, r1, 0x8
	  lwz       r0, -0x7B80(r13)
	  stw       r5, 0x1C(r1)
	  stw       r6, 0x14(r1)
	  stw       r5, 0x18(r1)
	  stw       r7, 0x20(r1)
	  stfs      f0, 0x2C(r1)
	  stfs      f0, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  stfs      f0, 0x38(r1)
	  stw       r5, 0x3C(r1)
	  stw       r5, 0x24(r1)
	  stw       r5, 0x40(r1)
	  stw       r5, 0x28(r1)
	  stw       r5, 0x44(r1)
	  stw       r0, 0x1C(r1)
	  lwz       r0, 0xCC(r8)
	  stw       r0, 0x24(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  mr        r3, r31
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x2C(r1)
	  stfs      f1, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x38(r1)
	  addi      r4, r1, 0x14
	  lwz       r3, -0x64AC(r13)
	  bl        0x202034

	.loc_0x138:
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022A9B4
 * Size:	000188
 */
void Game::VsGame::GameState::checkPikminZero((Game::VsGameSection*))
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
	  stw       r29, 0x54(r1)
	  lwz       r5, -0x6C18(r13)
	  lwz       r0, 0x44(r5)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x16C
	  lhz       r0, 0x14(r30)
	  rlwinm.   r0,r0,0,30,30
	  bne-      .loc_0x16C
	  li        r3, -0x1
	  bl        -0x59AB8
	  cmpwi     r3, 0
	  bne-      .loc_0x16C
	  lwz       r3, -0x6C18(r13)
	  bl        -0x75A44
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x16C
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x3C(r3)
	  rlwinm.   r0,r0,0,26,26
	  beq-      .loc_0x16C
	  lwz       r3, -0x6D20(r13)
	  bl        -0xCFE04
	  mr.       r29, r3
	  bne-      .loc_0xB0
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0x1
	  lwz       r3, 0x58(r3)
	  lwz       r0, 0xE4(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x98
	  li        r4, 0

	.loc_0x98:
	  lwz       r3, -0x6D20(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  mr        r29, r3

	.loc_0xB0:
	  lhz       r0, 0x14(r30)
	  lis       r3, 0x8048
	  lfs       f0, -0x40EC(r2)
	  addi      r5, r3, 0x363C
	  ori       r3, r0, 0x2
	  li        r0, 0
	  sth       r3, 0x14(r30)
	  mr        r4, r29
	  addi      r3, r1, 0x8
	  lwz       r6, 0xC8(r31)
	  stw       r5, 0x14(r1)
	  stw       r0, 0x18(r1)
	  stw       r6, 0x20(r1)
	  stfs      f0, 0x2C(r1)
	  stfs      f0, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  stfs      f0, 0x38(r1)
	  stw       r0, 0x3C(r1)
	  stw       r0, 0x24(r1)
	  stw       r0, 0x1C(r1)
	  stw       r0, 0x40(r1)
	  stw       r0, 0x28(r1)
	  stw       r0, 0x44(r1)
	  lwz       r0, 0xCC(r31)
	  stw       r0, 0x24(r1)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  mr        r3, r29
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x2C(r1)
	  stfs      f1, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x38(r1)
	  addi      r4, r1, 0x14
	  lwz       r3, -0x64AC(r13)
	  bl        0x201EC0
	  lwz       r3, -0x6560(r13)
	  li        r4, 0x4
	  bl        0x1D2E30

	.loc_0x16C:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  lwz       r29, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022AB3C
 * Size:	000474
 */
void Game::VsGame::GameState::onMovieStart((Game::VsGameSection*,
                                            Game::MovieConfig*, unsigned long,
                                            unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  lis       r3, 0x8048
	  stw       r0, 0x64(r1)
	  stmw      r27, 0x4C(r1)
	  mr        r30, r5
	  addi      r31, r3, 0x3550
	  mr        r29, r4
	  mr        r27, r7
	  mr        r3, r30
	  addi      r4, r31, 0xFC
	  bl        0x206D64
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x4C
	  mr        r3, r30
	  addi      r4, r31, 0x10C
	  bl        0x206D50
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x54

	.loc_0x4C:
	  lwz       r3, -0x6560(r13)
	  bl        0x1D1544

	.loc_0x54:
	  mr        r3, r30
	  addi      r4, r31, 0x18
	  bl        0x206D34
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x70
	  mr        r3, r29
	  bl        -0xD9674

	.loc_0x70:
	  lwz       r3, -0x6560(r13)
	  bl        0x1D2BC4
	  mr        r3, r30
	  addi      r4, r31, 0x120
	  bl        0x206D10
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x114
	  cmplwi    r27, 0
	  bne-      .loc_0xD0
	  lwz       r4, -0x6C18(r13)
	  li        r28, 0x1
	  li        r3, 0
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xB4
	  cmpwi     r0, 0x3
	  bne-      .loc_0xB8

	.loc_0xB4:
	  li        r3, 0x1

	.loc_0xB8:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x108
	  mr        r3, r29
	  li        r4, 0
	  bl        -0xDD2EC
	  b         .loc_0x108

	.loc_0xD0:
	  lwz       r4, -0x6C18(r13)
	  li        r28, 0x2
	  li        r3, 0
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xF0
	  cmpwi     r0, 0x3
	  bne-      .loc_0xF4

	.loc_0xF0:
	  li        r3, 0x1

	.loc_0xF4:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x108
	  mr        r3, r29
	  li        r4, 0x1
	  bl        -0xDD328

	.loc_0x108:
	  lwz       r3, -0x6560(r13)
	  mr        r4, r28
	  bl        0x1D2D00

	.loc_0x114:
	  mr        r3, r30
	  addi      r4, r31, 0xAC
	  bl        0x206C74
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x34C
	  lwz       r3, -0x6560(r13)
	  lwz       r3, 0x18(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  lwz       r3, -0x6D0C(r13)
	  lis       r4, 0x804B
	  stw       r0, 0x44(r1)
	  subi      r4, r4, 0x4364
	  cmplwi    r0, 0
	  stw       r4, 0x38(r1)
	  stw       r0, 0x3C(r1)
	  stw       r3, 0x40(r1)
	  bne-      .loc_0x180
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)
	  b         .loc_0x32C

	.loc_0x180:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)
	  b         .loc_0x1EC

	.loc_0x198:
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x32C
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)

	.loc_0x1EC:
	  lwz       r12, 0x38(r1)
	  addi      r3, r1, 0x38
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x198
	  b         .loc_0x32C

	.loc_0x20C:
	  lwz       r3, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r28, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x270
	  mr        r3, r28
	  bl        -0x8B808
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x270
	  mr        r3, r28
	  li        r4, 0
	  bl        -0xEF340
	  mr        r3, r28
	  bl        -0x8B974
	  lwz       r3, 0x294(r28)
	  li        r4, 0x1
	  li        r5, 0
	  bl        -0x93E14

	.loc_0x270:
	  lwz       r0, 0x44(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x29C
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)
	  b         .loc_0x32C

	.loc_0x29C:
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)
	  b         .loc_0x310

	.loc_0x2BC:
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x32C
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)

	.loc_0x310:
	  lwz       r12, 0x38(r1)
	  addi      r3, r1, 0x38
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x2BC

	.loc_0x32C:
	  lwz       r3, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x3C(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x20C

	.loc_0x34C:
	  mr        r3, r30
	  addi      r4, r31, 0x130
	  bl        0x206A3C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x410
	  lwz       r4, 0x1FC(r29)
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x14(r1)
	  mr        r3, r29
	  lfs       f1, 0x18(r1)
	  addi      r4, r1, 0x2C
	  lfs       f0, 0x1C(r1)
	  li        r5, 0x1
	  stfs      f2, 0x2C(r1)
	  stfs      f1, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  bl        -0xDCDA8
	  lwz       r3, -0x6D0C(r13)
	  addi      r4, r29, 0x214
	  bl        -0xCA1A8
	  li        r28, 0

	.loc_0x3B0:
	  lwz       r3, -0x6D20(r13)
	  mr        r4, r28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r27, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x3FC
	  mr        r3, r27
	  bl        -0x8B9B0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x3FC
	  mr        r3, r27
	  bl        -0x8BB10

	.loc_0x3FC:
	  addi      r28, r28, 0x1
	  cmpwi     r28, 0x2
	  blt+      .loc_0x3B0
	  li        r0, 0
	  stw       r0, 0x1FC(r29)

	.loc_0x410:
	  mr        r3, r30
	  addi      r4, r31, 0x13C
	  bl        0x206978
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x460
	  lwz       r4, 0x200(r29)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  mr        r3, r29
	  lfs       f1, 0xC(r1)
	  addi      r4, r1, 0x20
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  bl        -0xDC7DC

	.loc_0x460:
	  lmw       r27, 0x4C(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022AFB0
 * Size:	0009D0
 */
void Game::VsGame::GameState::onMovieDone((Game::VsGameSection*,
                                           Game::MovieConfig*, unsigned long,
                                           unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0xC0(r1)
	  mflr      r0
	  stw       r0, 0xC4(r1)
	  stfd      f31, 0xB0(r1)
	  psq_st    f31,0xB8(r1),0,0
	  stmw      r24, 0x90(r1)
	  lwz       r8, -0x6C18(r13)
	  lis       r6, 0x8048
	  mr        r30, r3
	  mr        r31, r4
	  lwz       r0, 0x44(r8)
	  mr        r25, r5
	  mr        r26, r7
	  addi      r29, r6, 0x3550
	  cmpwi     r0, 0x1
	  li        r3, 0
	  beq-      .loc_0x4C
	  cmpwi     r0, 0x3
	  bne-      .loc_0x50

	.loc_0x4C:
	  li        r3, 0x1

	.loc_0x50:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x64
	  mr        r3, r31
	  li        r4, 0x2
	  bl        -0xDD6F8

	.loc_0x64:
	  lwz       r3, -0x6CF8(r13)
	  lwz       r28, 0x30(r3)
	  lwz       r3, 0x28(r3)
	  bl        -0x53B30
	  lwz       r5, -0x6C18(r13)
	  subi      r0, r3, 0x1
	  sub       r4, r0, r28
	  li        r3, 0
	  lwz       r0, 0x44(r5)
	  cntlzw    r4, r4
	  rlwinm    r27,r4,27,5,31
	  cmpwi     r0, 0x2
	  beq-      .loc_0xA0
	  cmpwi     r0, 0x3
	  bne-      .loc_0xA4

	.loc_0xA0:
	  li        r3, 0x1

	.loc_0xA4:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1B8
	  bl        -0xCA2C
	  cmpwi     r3, 0
	  bne-      .loc_0x1B8
	  mr        r3, r25
	  addi      r4, r29, 0xFC
	  bl        0x20685C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xE0
	  mr        r3, r25
	  addi      r4, r29, 0x10C
	  bl        0x206848
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1B8

	.loc_0xE0:
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x100
	  addi      r3, r29, 0x14C
	  addi      r5, r29, 0x80
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x200A6C

	.loc_0x100:
	  lwz       r24, -0x6780(r13)
	  cmplwi    r24, 0
	  bne-      .loc_0x120
	  addi      r3, r29, 0x14C
	  addi      r5, r29, 0x80
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x200A8C

	.loc_0x120:
	  lwz       r0, 0x4(r24)
	  cmplwi    r0, 0
	  bne-      .loc_0x140
	  addi      r3, r29, 0x158
	  addi      r5, r29, 0x80
	  li        r4, 0xCF
	  crclr     6, 0x6
	  bl        -0x200AAC

	.loc_0x140:
	  lwz       r3, 0x4(r24)
	  lwz       r24, 0x4(r3)
	  cmplwi    r24, 0
	  bne-      .loc_0x164
	  addi      r3, r29, 0x158
	  addi      r5, r29, 0x164
	  li        r4, 0xD1
	  crclr     6, 0x6
	  bl        -0x200AD0

	.loc_0x164:
	  lwz       r12, 0x0(r24)
	  mr        r3, r24
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x194
	  addi      r3, r29, 0x188
	  addi      r5, r29, 0x80
	  li        r4, 0x177
	  crclr     6, 0x6
	  bl        -0x200B00

	.loc_0x194:
	  mr        r3, r24
	  lwz       r12, 0x0(r24)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1B8
	  mr        r3, r24
	  bl        0x23EFDC

	.loc_0x1B8:
	  mr        r3, r25
	  addi      r4, r29, 0xDC
	  bl        0x20675C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x298
	  lbz       r0, 0x25(r30)
	  rlwinm.   r0,r0,0,24,24
	  bne-      .loc_0x1E4
	  lbz       r0, 0x26(r30)
	  rlwinm.   r0,r0,0,24,24
	  beq-      .loc_0x298

	.loc_0x1E4:
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x204
	  addi      r3, r29, 0x14C
	  addi      r5, r29, 0x80
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x200B70

	.loc_0x204:
	  lwz       r24, -0x6780(r13)
	  cmplwi    r24, 0
	  bne-      .loc_0x224
	  addi      r3, r29, 0x14C
	  addi      r5, r29, 0x80
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x200B90

	.loc_0x224:
	  lwz       r0, 0x4(r24)
	  cmplwi    r0, 0
	  bne-      .loc_0x244
	  addi      r3, r29, 0x158
	  addi      r5, r29, 0x80
	  li        r4, 0xCF
	  crclr     6, 0x6
	  bl        -0x200BB0

	.loc_0x244:
	  lwz       r3, 0x4(r24)
	  lwz       r24, 0x4(r3)
	  cmplwi    r24, 0
	  bne-      .loc_0x268
	  addi      r3, r29, 0x158
	  addi      r5, r29, 0x164
	  li        r4, 0xD1
	  crclr     6, 0x6
	  bl        -0x200BD4

	.loc_0x268:
	  mr        r3, r24
	  lwz       r12, 0x0(r24)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x288
	  b         .loc_0x28C

	.loc_0x288:
	  li        r24, 0

	.loc_0x28C:
	  addi      r3, r24, 0x10
	  li        r4, 0xF
	  bl        0x1089F8

	.loc_0x298:
	  mr        r3, r25
	  addi      r4, r29, 0x19C
	  bl        0x20667C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x324
	  lwz       r4, -0x6C18(r13)
	  mr        r3, r31
	  lbz       r0, 0x3C(r4)
	  ori       r0, r0, 0x2
	  stb       r0, 0x3C(r4)
	  bl        -0xDD4E8
	  rlwinm.   r0,r27,0,24,31
	  beq-      .loc_0x2E0
	  mr        r3, r30
	  mr        r4, r31
	  li        r5, 0x3
	  bl        0x978
	  b         .loc_0x2F0

	.loc_0x2E0:
	  mr        r3, r30
	  mr        r4, r31
	  li        r5, 0x1
	  bl        0x964

	.loc_0x2F0:
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0x1
	  subi      r5, r2, 0x40B8
	  li        r6, 0x6
	  bl        -0x7631C
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0x1
	  subi      r5, r2, 0x40B8
	  bl        -0x7633C
	  lhz       r0, 0x14(r30)
	  ori       r0, r0, 0x80
	  sth       r0, 0x14(r30)
	  b         .loc_0x9B4

	.loc_0x324:
	  mr        r3, r25
	  addi      r4, r29, 0x18
	  bl        0x2065F0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x7CC
	  li        r0, 0
	  lwz       r3, -0x6D0C(r13)
	  lis       r4, 0x804B
	  stw       r0, 0x54(r1)
	  subi      r4, r4, 0x4364
	  cmplwi    r0, 0
	  stw       r4, 0x48(r1)
	  stw       r0, 0x4C(r1)
	  stw       r3, 0x50(r1)
	  bne-      .loc_0x378
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4C(r1)
	  b         .loc_0x400

	.loc_0x378:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4C(r1)
	  b         .loc_0x3E4

	.loc_0x390:
	  lwz       r3, 0x50(r1)
	  lwz       r4, 0x4C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x400
	  lwz       r3, 0x50(r1)
	  lwz       r4, 0x4C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4C(r1)

	.loc_0x3E4:
	  lwz       r12, 0x48(r1)
	  addi      r3, r1, 0x48
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x390

	.loc_0x400:
	  lfs       f31, -0x40EC(r2)
	  b         .loc_0x550

	.loc_0x408:
	  lwz       r3, 0x50(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r24, r3
	  addi      r3, r1, 0x24
	  lwz       r12, 0x0(r24)
	  mr        r4, r24
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x24(r1)
	  addi      r4, r1, 0x3C
	  lfs       f1, 0x28(r1)
	  lfs       f0, 0x2C(r1)
	  stfs      f2, 0x3C(r1)
	  lwz       r3, -0x6CF8(r13)
	  stfs      f1, 0x40(r1)
	  stfs      f0, 0x44(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x40(r1)
	  mr        r3, r24
	  addi      r4, r1, 0x3C
	  li        r5, 0
	  bl        -0xF0280
	  stfs      f31, 0x200(r24)
	  stfs      f31, 0x204(r24)
	  stfs      f31, 0x208(r24)
	  stfs      f31, 0x1E4(r24)
	  stfs      f31, 0x1E8(r24)
	  stfs      f31, 0x1EC(r24)
	  lwz       r0, 0x54(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x4C0
	  lwz       r3, 0x50(r1)
	  lwz       r4, 0x4C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4C(r1)
	  b         .loc_0x550

	.loc_0x4C0:
	  lwz       r3, 0x50(r1)
	  lwz       r4, 0x4C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4C(r1)
	  b         .loc_0x534

	.loc_0x4E0:
	  lwz       r3, 0x50(r1)
	  lwz       r4, 0x4C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x550
	  lwz       r3, 0x50(r1)
	  lwz       r4, 0x4C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4C(r1)

	.loc_0x534:
	  lwz       r12, 0x48(r1)
	  addi      r3, r1, 0x48
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x4E0

	.loc_0x550:
	  lwz       r3, 0x50(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x4C(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x408
	  lwz       r3, -0x6560(r13)
	  bl        0x1D213C
	  lhz       r0, 0x14(r30)
	  cmpwi     r28, 0
	  ori       r0, r0, 0x4
	  sth       r0, 0x14(r30)
	  bne-      .loc_0x6B0
	  lwz       r3, -0x6514(r13)
	  bl        0x1F79F0
	  bl        0x92E8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x6B0
	  lwz       r3, -0x6C18(r13)
	  lwz       r4, 0x44(r3)
	  cmpwi     r4, 0x1
	  beq-      .loc_0x6B0
	  lwz       r5, 0xC8(r31)
	  li        r0, 0
	  lfs       f0, -0x40EC(r2)
	  addi      r3, r29, 0x19C
	  stw       r3, 0x58(r1)
	  addi      r25, r1, 0x70
	  stw       r0, 0x5C(r1)
	  stw       r5, 0x64(r1)
	  stfs      f0, 0x70(r1)
	  stfs      f0, 0x74(r1)
	  stfs      f0, 0x78(r1)
	  stfs      f0, 0x7C(r1)
	  stw       r0, 0x80(r1)
	  stw       r0, 0x68(r1)
	  stw       r0, 0x60(r1)
	  stw       r0, 0x84(r1)
	  stw       r0, 0x6C(r1)
	  stw       r0, 0x88(r1)
	  beq-      .loc_0x604
	  cmpwi     r4, 0x3
	  bne-      .loc_0x608

	.loc_0x604:
	  li        r0, 0x1

	.loc_0x608:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x61C
	  mr        r3, r31
	  li        r4, 0
	  bl        -0xDDCB0

	.loc_0x61C:
	  mr        r3, r31
	  bl        -0xDD848
	  lwz       r0, 0xCC(r31)
	  lwz       r3, -0x6CD0(r13)
	  stw       r0, 0x68(r1)
	  lwz       r24, 0xAC(r3)
	  cmplwi    r24, 0
	  beq-      .loc_0x684
	  mr        r3, r24
	  lwz       r12, 0x0(r24)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x7C(r1)
	  mr        r4, r24
	  addi      r3, r1, 0x18
	  lwz       r12, 0x0(r24)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x18(r1)
	  lfs       f1, 0x1C(r1)
	  lfs       f0, 0x20(r1)
	  stfs      f2, 0x70(r1)
	  stfs      f1, 0x74(r1)
	  stfs      f0, 0x78(r1)

	.loc_0x684:
	  lwz       r3, -0x6CF8(r13)
	  mr        r4, r25
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x74(r1)
	  addi      r4, r1, 0x58
	  lwz       r3, -0x64AC(r13)
	  bl        0x201378
	  b         .loc_0x9B4

	.loc_0x6B0:
	  lwz       r4, -0x6C18(r13)
	  mr        r3, r31
	  lbz       r0, 0x3C(r4)
	  ori       r0, r0, 0x2
	  stb       r0, 0x3C(r4)
	  bl        -0xDD8EC
	  lwz       r3, -0x6C18(r13)
	  cmpwi     r28, 0
	  lbz       r0, 0x3C(r3)
	  ori       r0, r0, 0x2
	  stb       r0, 0x3C(r3)
	  bne-      .loc_0x740
	  rlwinm.   r0,r27,0,24,31
	  beq-      .loc_0x6FC
	  mr        r3, r30
	  mr        r4, r31
	  li        r5, 0x3
	  bl        0x55C
	  b         .loc_0x70C

	.loc_0x6FC:
	  mr        r3, r30
	  mr        r4, r31
	  li        r5, 0x1
	  bl        0x548

	.loc_0x70C:
	  lwz       r3, -0x6C18(r13)
	  addi      r5, r29, 0x1B0
	  li        r4, 0x1
	  li        r6, 0x6
	  bl        -0x76738
	  lwz       r3, -0x6C18(r13)
	  addi      r5, r29, 0x1B0
	  li        r4, 0x1
	  bl        -0x76758
	  lhz       r0, 0x14(r30)
	  ori       r0, r0, 0x80
	  sth       r0, 0x14(r30)
	  b         .loc_0x9B4

	.loc_0x740:
	  rlwinm.   r0,r27,0,24,31
	  beq-      .loc_0x75C
	  mr        r3, r30
	  mr        r4, r31
	  li        r5, 0x2
	  bl        0x4FC
	  b         .loc_0x9B4

	.loc_0x75C:
	  mr        r3, r30
	  mr        r4, r31
	  li        r5, 0
	  bl        0x4E8
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x78C
	  addi      r3, r29, 0x14C
	  addi      r5, r29, 0x80
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x2010F8

	.loc_0x78C:
	  lwz       r24, -0x6780(r13)
	  lwz       r0, 0x4(r24)
	  cmplwi    r0, 0
	  bne-      .loc_0x7B0
	  addi      r3, r29, 0x158
	  addi      r5, r29, 0x80
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x20111C

	.loc_0x7B0:
	  lwz       r3, 0x4(r24)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x9B4

	.loc_0x7CC:
	  mr        r3, r25
	  addi      r4, r29, 0x130
	  bl        0x206148
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x830
	  bl        0x23BCA8
	  lwz       r4, 0x324(r31)
	  li        r7, 0
	  li        r0, 0x1
	  mr        r3, r30
	  addi      r5, r4, 0x1
	  mr        r4, r31
	  stw       r5, 0x324(r31)
	  addi      r6, r1, 0x30
	  li        r5, 0x1
	  stw       r7, 0x34(r1)
	  stb       r7, 0x38(r1)
	  stw       r7, 0x30(r1)
	  stw       r7, 0x34(r1)
	  stb       r0, 0x38(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x9B4

	.loc_0x830:
	  mr        r3, r25
	  addi      r4, r29, 0xAC
	  bl        0x2060E4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x888
	  bl        0x23BC44
	  lis       r3, 0x8051
	  addi      r3, r3, 0x25EC
	  bl        -0x5A790
	  lwz       r3, -0x64AC(r13)
	  bl        0x201780
	  li        r0, 0x1
	  mr        r3, r30
	  stb       r0, 0x14(r1)
	  mr        r4, r31
	  addi      r6, r1, 0x14
	  li        r5, 0
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x9B4

	.loc_0x888:
	  mr        r3, r25
	  addi      r4, r29, 0x120
	  bl        0x20608C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x918
	  lwz       r3, -0x6D20(r13)
	  mr        r4, r26
	  bl        -0xD064C
	  lwz       r3, -0x6560(r13)
	  bl        0x1D2348
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x8D8
	  addi      r3, r29, 0x70
	  addi      r5, r29, 0x1BC
	  li        r4, 0x4FF
	  crclr     6, 0x6
	  bl        -0x201240
	  b         .loc_0x9B4

	.loc_0x8D8:
	  lis       r3, 0x8051
	  addi      r3, r3, 0x25EC
	  bl        -0x5A820
	  bl        0x23BBA4
	  li        r0, 0
	  addi      r6, r1, 0x10
	  stb       r0, 0x10(r1)
	  mr        r3, r30
	  mr        r4, r31
	  li        r5, 0x4
	  stb       r0, 0x10(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x9B4

	.loc_0x918:
	  mr        r3, r25
	  addi      r4, r29, 0xEC
	  bl        0x205FFC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x968
	  bl        0x23BB5C
	  lwz       r3, -0x6560(r13)
	  bl        0x1D22C0
	  li        r0, 0
	  addi      r6, r1, 0xC
	  stb       r0, 0xC(r1)
	  mr        r3, r30
	  mr        r4, r31
	  li        r5, 0x4
	  stb       r0, 0xC(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x9B4

	.loc_0x968:
	  mr        r3, r25
	  addi      r4, r29, 0x13C
	  bl        0x205FAC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x9B4
	  bl        0x23BB0C
	  li        r5, 0
	  addi      r6, r1, 0x8
	  stb       r5, 0x8(r1)
	  ori       r0, r5, 0x1
	  mr        r3, r30
	  mr        r4, r31
	  stb       r5, 0x8(r1)
	  li        r5, 0x4
	  stb       r0, 0x8(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x9B4:
	  psq_l     f31,0xB8(r1),0,0
	  lfd       f31, 0xB0(r1)
	  lmw       r24, 0x90(r1)
	  lwz       r0, 0xC4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xC0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022B980
 * Size:	0000E4
 */
void Game::VsGame::GameState::onNextFloor((Game::VsGameSection*,
                                           Game::ItemHole::Item*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  lis       r3, 0x8048
	  lfs       f0, -0x40EC(r2)
	  stw       r0, 0x54(r1)
	  li        r0, 0
	  addi      r3, r3, 0x3680
	  stw       r31, 0x4C(r1)
	  mr        r31, r5
	  stw       r30, 0x48(r1)
	  mr        r30, r4
	  lwz       r6, 0xC8(r4)
	  mr        r4, r31
	  stw       r3, 0x14(r1)
	  addi      r3, r1, 0x8
	  stw       r0, 0x18(r1)
	  stw       r6, 0x20(r1)
	  stfs      f0, 0x2C(r1)
	  stfs      f0, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  stfs      f0, 0x38(r1)
	  stw       r0, 0x3C(r1)
	  stw       r0, 0x24(r1)
	  stw       r0, 0x1C(r1)
	  stw       r0, 0x40(r1)
	  stw       r0, 0x28(r1)
	  stw       r0, 0x44(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  mr        r3, r31
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x2C(r1)
	  stfs      f1, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x38(r1)
	  addi      r4, r1, 0x14
	  lwz       r3, -0x64AC(r13)
	  lwz       r0, 0xCC(r30)
	  stw       r0, 0x24(r1)
	  stw       r0, 0x24(r1)
	  stw       r31, 0x194(r3)
	  lwz       r3, -0x64AC(r13)
	  bl        0x200F88
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
 * Address:	8022BA64
 * Size:	00019C
 */
void Game::VsGame::GameState::onOrimaDown((Game::VsGameSection*, int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  li        r0, 0
	  stw       r31, 0x5C(r1)
	  stw       r30, 0x58(r1)
	  mr.       r30, r5
	  lis       r5, 0x8048
	  stw       r29, 0x54(r1)
	  mr        r29, r4
	  addi      r31, r5, 0x3550
	  stw       r28, 0x50(r1)
	  mr        r28, r3
	  blt-      .loc_0x44
	  cmpwi     r30, 0x2
	  bge-      .loc_0x44
	  li        r0, 0x1

	.loc_0x44:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x60
	  addi      r3, r31, 0x70
	  addi      r5, r31, 0x80
	  li        r4, 0x53D
	  crclr     6, 0x6
	  bl        -0x201480

	.loc_0x60:
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x90
	  lbz       r0, 0x16(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0x17C
	  add       r3, r28, r30
	  lbz       r0, 0x25(r3)
	  ori       r0, r0, 0x1
	  stb       r0, 0x25(r3)
	  b         .loc_0x17C

	.loc_0x90:
	  lwz       r5, 0xC8(r29)
	  li        r0, 0
	  lfs       f0, -0x40EC(r2)
	  addi      r3, r31, 0x120
	  stw       r3, 0x14(r1)
	  mr        r4, r30
	  lwz       r3, -0x6D20(r13)
	  stw       r0, 0x18(r1)
	  stw       r5, 0x20(r1)
	  stfs      f0, 0x2C(r1)
	  stfs      f0, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  stfs      f0, 0x38(r1)
	  stw       r30, 0x3C(r1)
	  stw       r0, 0x24(r1)
	  stw       r0, 0x1C(r1)
	  stw       r0, 0x40(r1)
	  stw       r0, 0x28(r1)
	  stw       r0, 0x44(r1)
	  lwz       r0, 0xCC(r29)
	  stw       r0, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  addi      r3, r1, 0x8
	  mr        r31, r0
	  mr        r4, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  mr        r3, r31
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x2C(r1)
	  stfs      f1, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x38(r1)
	  cmpwi     r30, 0
	  lwz       r3, -0x64AC(r13)
	  stw       r31, 0x18C(r3)
	  bne-      .loc_0x164
	  lwz       r0, 0x104(r29)
	  lwz       r3, -0x64AC(r13)
	  stw       r0, 0x190(r3)
	  b         .loc_0x170

	.loc_0x164:
	  lwz       r0, 0x108(r29)
	  lwz       r3, -0x64AC(r13)
	  stw       r0, 0x190(r3)

	.loc_0x170:
	  lwz       r3, -0x64AC(r13)
	  addi      r4, r1, 0x14
	  bl        0x200DF4

	.loc_0x17C:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  lwz       r29, 0x54(r1)
	  lwz       r28, 0x50(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022BC00
 * Size:	00033C
 */
void Game::VsGame::GameState::open_GameChallenge((Game::VsGameSection*, int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x180(r1)
	  mflr      r0
	  stw       r0, 0x184(r1)
	  li        r0, 0
	  stw       r31, 0x17C(r1)
	  mr        r31, r5
	  stw       r30, 0x178(r1)
	  mr        r30, r3
	  stw       r29, 0x174(r1)
	  stw       r28, 0x170(r1)
	  lwz       r6, -0x6C18(r13)
	  lwz       r3, 0x44(r6)
	  cmpwi     r3, 0x1
	  beq-      .loc_0x40
	  cmpwi     r3, 0x3
	  bne-      .loc_0x44

	.loc_0x40:
	  li        r0, 0x1

	.loc_0x44:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x148
	  lis       r3, 0x804B
	  li        r28, 0
	  addi      r29, r3, 0x1148
	  li        r9, 0x1
	  lfs       f3, -0x40EC(r2)
	  lis       r6, 0x804C
	  li        r7, 0xA
	  lfs       f2, -0x40F8(r2)
	  lfs       f1, -0x40B0(r2)
	  li        r8, 0x2
	  lfs       f0, -0x40AC(r2)
	  lis       r3, 0x804B
	  li        r11, 0x4D2
	  li        r10, 0x32
	  li        r5, 0x9EC
	  li        r0, 0x1092
	  stw       r29, 0xF4(r1)
	  addi      r12, r6, 0xF2C
	  addi      r6, r3, 0x10C4
	  mr        r3, r4
	  stw       r29, 0x15C(r1)
	  stw       r28, 0xF8(r1)
	  stw       r12, 0xF4(r1)
	  stfs      f3, 0xFC(r1)
	  stw       r28, 0x100(r1)
	  stw       r28, 0x108(r1)
	  stw       r11, 0x104(r1)
	  stw       r10, 0x10C(r1)
	  stb       r28, 0x110(r1)
	  stw       r28, 0x114(r1)
	  stfs      f2, 0x118(r1)
	  stw       r9, 0x11C(r1)
	  stw       r8, 0x120(r1)
	  stw       r7, 0x124(r1)
	  stw       r7, 0x128(r1)
	  stb       r9, 0x12C(r1)
	  stfs      f2, 0x130(r1)
	  stw       r9, 0x134(r1)
	  stw       r8, 0x138(r1)
	  stw       r7, 0x13C(r1)
	  stw       r7, 0x140(r1)
	  stb       r9, 0x144(r1)
	  stw       r28, 0x160(r1)
	  stw       r6, 0x15C(r1)
	  stfs      f1, 0x168(r1)
	  stfs      f1, 0x164(r1)
	  stw       r5, 0x148(r1)
	  stb       r28, 0x14C(r1)
	  stfs      f0, 0x150(r1)
	  stw       r0, 0x158(r1)
	  stfs      f3, 0x154(r1)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x108(r1)
	  mr        r5, r31
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0xF4
	  lfs       f0, 0x1C(r30)
	  stfs      f0, 0x154(r1)
	  bl        0x1D0C68
	  b         .loc_0x31C

	.loc_0x148:
	  cmpwi     r3, 0x1
	  bne-      .loc_0x224
	  lis       r3, 0x804B
	  li        r28, 0
	  addi      r4, r3, 0x1148
	  li        r9, 0x1
	  lfs       f1, -0x40F8(r2)
	  lis       r3, 0x804C
	  li        r7, 0xA
	  lfs       f0, -0x40A8(r2)
	  li        r8, 0x2
	  lfs       f2, -0x40EC(r2)
	  li        r11, 0x4D2
	  li        r10, 0x32
	  li        r6, 0x6F
	  li        r0, 0xDE
	  stw       r4, 0x80(r1)
	  addi      r12, r3, 0xF14
	  lwz       r3, -0x6560(r13)
	  mr        r5, r31
	  stw       r28, 0x84(r1)
	  addi      r4, r1, 0x80
	  stw       r12, 0x80(r1)
	  stfs      f2, 0x8C(r1)
	  stw       r28, 0x90(r1)
	  stw       r28, 0x98(r1)
	  stw       r11, 0x94(r1)
	  stw       r10, 0x9C(r1)
	  stb       r28, 0xA0(r1)
	  stw       r28, 0xA4(r1)
	  stfs      f1, 0xA8(r1)
	  stw       r9, 0xAC(r1)
	  stw       r8, 0xB0(r1)
	  stw       r7, 0xB4(r1)
	  stw       r7, 0xB8(r1)
	  stb       r9, 0xBC(r1)
	  stfs      f1, 0xC0(r1)
	  stw       r9, 0xC4(r1)
	  stw       r8, 0xC8(r1)
	  stw       r7, 0xCC(r1)
	  stw       r7, 0xD0(r1)
	  stb       r9, 0xD4(r1)
	  stw       r6, 0xD8(r1)
	  stw       r0, 0xDC(r1)
	  stw       r28, 0xE0(r1)
	  stw       r28, 0xE4(r1)
	  stw       r28, 0x88(r1)
	  stb       r28, 0xE8(r1)
	  stb       r28, 0xE9(r1)
	  stb       r28, 0xEA(r1)
	  stb       r28, 0xEB(r1)
	  stfs      f0, 0xEC(r1)
	  stfs      f0, 0xF0(r1)
	  bl        0x1D061C
	  b         .loc_0x31C

	.loc_0x224:
	  lis       r3, 0x804B
	  li        r29, 0
	  addi      r28, r3, 0x1148
	  li        r9, 0x1
	  lfs       f3, -0x40EC(r2)
	  lis       r6, 0x804C
	  li        r7, 0xA
	  lfs       f2, -0x40F8(r2)
	  lfs       f1, -0x40B0(r2)
	  li        r8, 0x2
	  lfs       f0, -0x40AC(r2)
	  lis       r3, 0x804B
	  li        r11, 0x4D2
	  li        r10, 0x32
	  li        r5, 0x9EC
	  li        r0, 0x1092
	  stw       r28, 0x8(r1)
	  addi      r12, r6, 0xF74
	  addi      r6, r3, 0x10C4
	  mr        r3, r4
	  stw       r28, 0x70(r1)
	  stw       r29, 0xC(r1)
	  stw       r12, 0x8(r1)
	  stfs      f3, 0x10(r1)
	  stw       r29, 0x14(r1)
	  stw       r29, 0x1C(r1)
	  stw       r11, 0x18(r1)
	  stw       r10, 0x20(r1)
	  stb       r29, 0x24(r1)
	  stw       r29, 0x28(r1)
	  stfs      f2, 0x2C(r1)
	  stw       r9, 0x30(r1)
	  stw       r8, 0x34(r1)
	  stw       r7, 0x38(r1)
	  stw       r7, 0x3C(r1)
	  stb       r9, 0x40(r1)
	  stfs      f2, 0x44(r1)
	  stw       r9, 0x48(r1)
	  stw       r8, 0x4C(r1)
	  stw       r7, 0x50(r1)
	  stw       r7, 0x54(r1)
	  stb       r9, 0x58(r1)
	  stw       r29, 0x74(r1)
	  stw       r6, 0x70(r1)
	  stfs      f1, 0x7C(r1)
	  stfs      f1, 0x78(r1)
	  stw       r5, 0x5C(r1)
	  stb       r29, 0x60(r1)
	  stfs      f0, 0x64(r1)
	  stw       r0, 0x6C(r1)
	  stfs      f3, 0x68(r1)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x1C(r1)
	  mr        r5, r31
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0x8
	  lfs       f0, 0x1C(r30)
	  stfs      f0, 0x68(r1)
	  bl        0x1D075C

	.loc_0x31C:
	  lwz       r0, 0x184(r1)
	  lwz       r31, 0x17C(r1)
	  lwz       r30, 0x178(r1)
	  lwz       r29, 0x174(r1)
	  lwz       r28, 0x170(r1)
	  mtlr      r0
	  addi      r1, r1, 0x180
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022BF3C
 * Size:	0007D0
 */
void Game::VsGame::GameState::update_GameChallenge((Game::VsGameSection*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x180(r1)
	  mflr      r0
	  stw       r0, 0x184(r1)
	  li        r0, 0
	  stw       r31, 0x17C(r1)
	  mr        r31, r4
	  stw       r30, 0x178(r1)
	  mr        r30, r3
	  stw       r29, 0x174(r1)
	  lwz       r5, -0x6C18(r13)
	  lwz       r3, 0x44(r5)
	  cmpwi     r3, 0x1
	  beq-      .loc_0x3C
	  cmpwi     r3, 0x3
	  bne-      .loc_0x40

	.loc_0x3C:
	  li        r0, 0x1

	.loc_0x40:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x2CC
	  lis       r3, 0x804B
	  li        r12, 0
	  addi      r29, r3, 0x1148
	  li        r8, 0x1
	  lfs       f3, -0x40EC(r2)
	  lis       r5, 0x804C
	  li        r6, 0xA
	  lfs       f2, -0x40F8(r2)
	  lfs       f1, -0x40B0(r2)
	  li        r7, 0x2
	  lfs       f0, -0x40AC(r2)
	  lis       r3, 0x804B
	  li        r10, 0x4D2
	  li        r9, 0x32
	  li        r4, 0x9EC
	  li        r0, 0x1092
	  stw       r29, 0xF4(r1)
	  addi      r11, r5, 0xF2C
	  addi      r5, r3, 0x10C4
	  mr        r3, r31
	  stw       r29, 0x15C(r1)
	  stw       r12, 0xF8(r1)
	  stw       r11, 0xF4(r1)
	  stfs      f3, 0xFC(r1)
	  stw       r12, 0x100(r1)
	  stw       r12, 0x108(r1)
	  stw       r10, 0x104(r1)
	  stw       r9, 0x10C(r1)
	  stb       r12, 0x110(r1)
	  stw       r12, 0x114(r1)
	  stfs      f2, 0x118(r1)
	  stw       r8, 0x11C(r1)
	  stw       r7, 0x120(r1)
	  stw       r6, 0x124(r1)
	  stw       r6, 0x128(r1)
	  stb       r8, 0x12C(r1)
	  stfs      f2, 0x130(r1)
	  stw       r8, 0x134(r1)
	  stw       r7, 0x138(r1)
	  stw       r6, 0x13C(r1)
	  stw       r6, 0x140(r1)
	  stb       r8, 0x144(r1)
	  stw       r12, 0x160(r1)
	  stw       r5, 0x15C(r1)
	  stfs      f1, 0x168(r1)
	  stfs      f1, 0x164(r1)
	  stw       r4, 0x148(r1)
	  stb       r12, 0x14C(r1)
	  stfs      f0, 0x150(r1)
	  stw       r0, 0x158(r1)
	  stfs      f3, 0x154(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x108(r1)
	  li        r4, 0
	  lwz       r3, -0x6D20(r13)
	  lwz       r0, 0x208(r31)
	  stw       r0, 0x158(r1)
	  lwz       r0, 0x3BC(r31)
	  stw       r0, 0x148(r1)
	  lfs       f0, 0x1C(r30)
	  stfs      f0, 0x154(r1)
	  lfs       f0, 0x3C0(r31)
	  stfs      f0, 0x150(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x8051
	  mr        r0, r3
	  addi      r3, r4, 0x22EC
	  lwz       r12, 0x0(r3)
	  mr        r29, r0
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x11C(r1)
	  mr        r3, r29
	  bl        -0xE569C
	  stw       r3, 0x120(r1)
	  li        r4, 0x1
	  lwz       r3, -0x6B70(r13)
	  bl        -0x43CFC
	  stw       r3, 0x124(r1)
	  li        r4, 0
	  lwz       r3, -0x6B70(r13)
	  bl        -0x43D0C
	  stw       r3, 0x128(r1)
	  mr        r3, r29
	  bl        -0xEA0F4
	  stfs      f1, 0x118(r1)
	  li        r4, 0x1
	  lwz       r3, -0x6D20(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x8051
	  mr        r0, r3
	  addi      r3, r4, 0x22EC
	  lwzu      r12, 0x20(r3)
	  mr        r29, r0
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x134(r1)
	  mr        r3, r29
	  bl        -0xE5710
	  stw       r3, 0x138(r1)
	  li        r4, 0x1
	  lwz       r3, -0x6B70(r13)
	  bl        -0x43D70
	  stw       r3, 0x13C(r1)
	  li        r4, 0
	  lwz       r3, -0x6B70(r13)
	  bl        -0x43D80
	  stw       r3, 0x140(r1)
	  mr        r3, r29
	  bl        -0xEA168
	  stfs      f1, 0x130(r1)
	  lwz       r3, -0x6D20(r13)
	  bl        -0xD1550
	  cmplwi    r3, 0
	  li        r0, 0x2
	  beq-      .loc_0x248
	  lhz       r0, 0x2DC(r3)

	.loc_0x248:
	  cmpwi     r0, 0
	  bne-      .loc_0x264
	  li        r3, 0x1
	  li        r0, 0
	  stb       r3, 0x12C(r1)
	  stb       r0, 0x144(r1)
	  b         .loc_0x2B0

	.loc_0x264:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x280
	  li        r3, 0
	  li        r0, 0x1
	  stb       r3, 0x12C(r1)
	  stb       r0, 0x144(r1)
	  b         .loc_0x2B0

	.loc_0x280:
	  lwz       r0, 0xE4(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0x2A0
	  li        r3, 0
	  li        r0, 0x1
	  stb       r3, 0x12C(r1)
	  stb       r0, 0x144(r1)
	  b         .loc_0x2B0

	.loc_0x2A0:
	  li        r3, 0x1
	  li        r0, 0
	  stb       r3, 0x12C(r1)
	  stb       r0, 0x144(r1)

	.loc_0x2B0:
	  li        r3, -0x1
	  bl        -0x5B390
	  stw       r3, 0x10C(r1)
	  addi      r4, r1, 0xF4
	  lwz       r3, -0x6560(r13)
	  bl        0x1CFE9C
	  b         .loc_0x7B4

	.loc_0x2CC:
	  cmpwi     r3, 0x1
	  bne-      .loc_0x5B4
	  lwz       r3, -0x6560(r13)
	  bl        0x1D03C4
	  cmpwi     r3, 0x2
	  bne-      .loc_0x30C
	  lbz       r0, 0x16(r30)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x30C
	  lwz       r3, -0x64AC(r13)
	  lwz       r0, 0x1F0(r3)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x30C
	  li        r0, 0x2
	  stb       r0, 0x16(r30)
	  b         .loc_0x320

	.loc_0x30C:
	  lbz       r0, 0x16(r30)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x320
	  lwz       r3, -0x6560(r13)
	  bl        0x1D0380

	.loc_0x320:
	  lis       r3, 0x804B
	  li        r12, 0
	  addi      r4, r3, 0x1148
	  li        r8, 0x1
	  lfs       f1, -0x40F8(r2)
	  lis       r3, 0x804C
	  li        r6, 0xA
	  lfs       f0, -0x40A8(r2)
	  li        r7, 0x2
	  lfs       f2, -0x40EC(r2)
	  li        r10, 0x4D2
	  li        r9, 0x32
	  li        r5, 0x6F
	  li        r0, 0xDE
	  stw       r4, 0x80(r1)
	  addi      r11, r3, 0xF14
	  lwz       r3, -0x6D20(r13)
	  li        r4, 0
	  stw       r12, 0x84(r1)
	  stw       r11, 0x80(r1)
	  stfs      f2, 0x8C(r1)
	  stw       r12, 0x90(r1)
	  stw       r12, 0x98(r1)
	  stw       r10, 0x94(r1)
	  stw       r9, 0x9C(r1)
	  stb       r12, 0xA0(r1)
	  stw       r12, 0xA4(r1)
	  stfs      f1, 0xA8(r1)
	  stw       r8, 0xAC(r1)
	  stw       r7, 0xB0(r1)
	  stw       r6, 0xB4(r1)
	  stw       r6, 0xB8(r1)
	  stb       r8, 0xBC(r1)
	  stfs      f1, 0xC0(r1)
	  stw       r8, 0xC4(r1)
	  stw       r7, 0xC8(r1)
	  stw       r6, 0xCC(r1)
	  stw       r6, 0xD0(r1)
	  stb       r8, 0xD4(r1)
	  stw       r5, 0xD8(r1)
	  stw       r0, 0xDC(r1)
	  stw       r12, 0xE0(r1)
	  stw       r12, 0xE4(r1)
	  stw       r12, 0x88(r1)
	  stb       r12, 0xE8(r1)
	  stb       r12, 0xE9(r1)
	  stb       r12, 0xEA(r1)
	  stb       r12, 0xEB(r1)
	  stfs      f0, 0xEC(r1)
	  stfs      f0, 0xF0(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x8051
	  mr        r0, r3
	  addi      r3, r4, 0x22EC
	  lwz       r12, 0x0(r3)
	  mr        r29, r0
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xAC(r1)
	  mr        r3, r29
	  bl        -0xE5934
	  stw       r3, 0xB0(r1)
	  mr        r3, r29
	  li        r4, 0x1
	  bl        -0xEB4F0
	  stw       r3, 0xB4(r1)
	  mr        r3, r29
	  li        r4, 0
	  bl        -0xEB500
	  stw       r3, 0xB8(r1)
	  mr        r3, r29
	  bl        -0xEA38C
	  stfs      f1, 0xA8(r1)
	  li        r4, 0x1
	  lwz       r3, -0x6D20(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x8051
	  mr        r0, r3
	  addi      r3, r4, 0x22EC
	  lwzu      r12, 0x20(r3)
	  mr        r29, r0
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC4(r1)
	  mr        r3, r29
	  bl        -0xE59A8
	  stw       r3, 0xC8(r1)
	  mr        r3, r29
	  li        r4, 0x1
	  bl        -0xEB564
	  stw       r3, 0xCC(r1)
	  mr        r3, r29
	  li        r4, 0
	  bl        -0xEB574
	  stw       r3, 0xD0(r1)
	  mr        r3, r29
	  bl        -0xEA400
	  stfs      f1, 0xC0(r1)
	  li        r3, 0x1
	  bl        -0x5B5A8
	  stw       r3, 0xD8(r1)
	  li        r3, 0
	  bl        -0x5B5B4
	  stw       r3, 0xDC(r1)
	  lfs       f1, -0x40EC(r2)
	  lfs       f2, 0x1F0(r31)
	  fcmpo     cr0, f2, f1
	  mfcr      r0
	  rlwinm    r0,r0,2,31,31
	  stb       r0, 0xEA(r1)
	  lfs       f0, 0x1F4(r31)
	  fcmpo     cr0, f0, f1
	  mfcr      r0
	  stfs      f2, 0xEC(r1)
	  rlwinm    r0,r0,2,31,31
	  stb       r0, 0xEB(r1)
	  stfs      f0, 0xF0(r1)
	  lwz       r4, 0x3D4(r31)
	  lwz       r5, 0x3D8(r31)
	  cmpwi     r4, 0x4
	  bne-      .loc_0x538
	  lwz       r3, -0x64AC(r13)
	  lwz       r0, 0x1F0(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x538
	  subi      r4, r4, 0x1

	.loc_0x538:
	  cmpwi     r5, 0x4
	  bne-      .loc_0x554
	  lwz       r3, -0x64AC(r13)
	  lwz       r0, 0x1F0(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x554
	  subi      r5, r5, 0x1

	.loc_0x554:
	  stw       r4, 0xE0(r1)
	  li        r6, 0
	  lwz       r3, -0x64AC(r13)
	  li        r4, 0
	  stw       r5, 0xE4(r1)
	  lwz       r0, 0x1F0(r3)
	  rlwinm.   r3,r0,0,31,31
	  bne-      .loc_0x584
	  lbz       r0, 0x26(r30)
	  rlwinm.   r0,r0,0,24,24
	  beq-      .loc_0x584
	  li        r6, 0x1

	.loc_0x584:
	  cmplwi    r3, 0
	  bne-      .loc_0x59C
	  lbz       r0, 0x25(r30)
	  rlwinm.   r0,r0,0,24,24
	  beq-      .loc_0x59C
	  li        r4, 0x1

	.loc_0x59C:
	  stb       r4, 0xE9(r1)
	  addi      r4, r1, 0x80
	  lwz       r3, -0x6560(r13)
	  stb       r6, 0xE8(r1)
	  bl        0x1CFBB4
	  b         .loc_0x7B4

	.loc_0x5B4:
	  lis       r3, 0x804B
	  li        r12, 0
	  addi      r29, r3, 0x1148
	  li        r8, 0x1
	  lfs       f3, -0x40EC(r2)
	  lis       r5, 0x804C
	  li        r6, 0xA
	  lfs       f2, -0x40F8(r2)
	  lfs       f1, -0x40B0(r2)
	  li        r7, 0x2
	  lfs       f0, -0x40AC(r2)
	  lis       r3, 0x804B
	  li        r10, 0x4D2
	  li        r9, 0x32
	  li        r4, 0x9EC
	  li        r0, 0x1092
	  stw       r29, 0x8(r1)
	  addi      r11, r5, 0xF74
	  addi      r5, r3, 0x10C4
	  mr        r3, r31
	  stw       r29, 0x70(r1)
	  stw       r12, 0xC(r1)
	  stw       r11, 0x8(r1)
	  stfs      f3, 0x10(r1)
	  stw       r12, 0x14(r1)
	  stw       r12, 0x1C(r1)
	  stw       r10, 0x18(r1)
	  stw       r9, 0x20(r1)
	  stb       r12, 0x24(r1)
	  stw       r12, 0x28(r1)
	  stfs      f2, 0x2C(r1)
	  stw       r8, 0x30(r1)
	  stw       r7, 0x34(r1)
	  stw       r6, 0x38(r1)
	  stw       r6, 0x3C(r1)
	  stb       r8, 0x40(r1)
	  stfs      f2, 0x44(r1)
	  stw       r8, 0x48(r1)
	  stw       r7, 0x4C(r1)
	  stw       r6, 0x50(r1)
	  stw       r6, 0x54(r1)
	  stb       r8, 0x58(r1)
	  stw       r12, 0x74(r1)
	  stw       r5, 0x70(r1)
	  stfs      f1, 0x7C(r1)
	  stfs      f1, 0x78(r1)
	  stw       r4, 0x5C(r1)
	  stb       r12, 0x60(r1)
	  stfs      f0, 0x64(r1)
	  stw       r0, 0x6C(r1)
	  stfs      f3, 0x68(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x1C(r1)
	  li        r4, 0
	  lwz       r3, -0x6D20(r13)
	  lwz       r0, 0x3BC(r31)
	  stw       r0, 0x5C(r1)
	  lfs       f0, 0x1C(r30)
	  stfs      f0, 0x68(r1)
	  lfs       f0, 0x3C0(r31)
	  stfs      f0, 0x64(r1)
	  lwz       r0, 0x208(r31)
	  stw       r0, 0x6C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x8051
	  mr        r0, r3
	  addi      r3, r4, 0x22EC
	  lwz       r12, 0x0(r3)
	  mr        r29, r0
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x30(r1)
	  mr        r3, r29
	  bl        -0xE5C08
	  stw       r3, 0x34(r1)
	  li        r4, 0x1
	  lwz       r3, -0x6B70(r13)
	  bl        -0x44268
	  stw       r3, 0x38(r1)
	  li        r4, 0
	  lwz       r3, -0x6B70(r13)
	  bl        -0x44278
	  stw       r3, 0x3C(r1)
	  mr        r3, r29
	  bl        -0xEA660
	  stfs      f1, 0x2C(r1)
	  li        r4, 0x1
	  lwz       r3, -0x6D20(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x8051
	  mr        r0, r3
	  addi      r3, r4, 0x22EC
	  lwzu      r12, 0x20(r3)
	  mr        r29, r0
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x48(r1)
	  mr        r3, r29
	  bl        -0xE5C7C
	  stw       r3, 0x4C(r1)
	  li        r4, 0x1
	  lwz       r3, -0x6B70(r13)
	  bl        -0x442DC
	  stw       r3, 0x50(r1)
	  li        r4, 0
	  lwz       r3, -0x6B70(r13)
	  bl        -0x442EC
	  stw       r3, 0x54(r1)
	  mr        r3, r29
	  bl        -0xEA6D4
	  stfs      f1, 0x44(r1)
	  li        r3, -0x1
	  bl        -0x5B87C
	  stw       r3, 0x20(r1)
	  addi      r4, r1, 0x8
	  lwz       r3, -0x6560(r13)
	  bl        0x1CF9B0

	.loc_0x7B4:
	  lwz       r0, 0x184(r1)
	  lwz       r31, 0x17C(r1)
	  lwz       r30, 0x178(r1)
	  lwz       r29, 0x174(r1)
	  mtlr      r0
	  addi      r1, r1, 0x180
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022C70C
 * Size:	000004
 */
void Game::VsGame::GameState::drawStatus((Graphics&, Game::VsGameSection*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022C710
 * Size:	000008
 */
void og::Screen::DispMemberVs::getSize(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x74
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022C718
 * Size:	00000C
 */
void og::Screen::DispMemberVs::getOwnerID(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x4F
	  addi      r3, r3, 0x4741
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022C724
 * Size:	00000C
 */
void og::Screen::DispMemberVs::getMemberID(void)
{
	/*
	.loc_0x0:
	  li        r4, 0x5653
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022C730
 * Size:	000008
 */
void og::Screen::DispMemberChallenge1P::getSize(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x78
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022C738
 * Size:	00000C
 */
void og::Screen::DispMemberChallenge1P::getOwnerID(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x4F
	  addi      r3, r3, 0x4741
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022C744
 * Size:	000010
 */
void og::Screen::DispMemberChallenge1P::getMemberID(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x414C
	  li        r3, 0x4348
	  addi      r4, r4, 0x3150
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022C754
 * Size:	000008
 */
void kh::Screen::DispWinLoseReason::getSize(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022C75C
 * Size:	000008
 */
void kh::Screen::DispWinLoseReason::getOwnerID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x4B48
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022C764
 * Size:	000010
 */
void kh::Screen::DispWinLoseReason::getMemberID(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x5F52
	  li        r3, 0x574C
	  addi      r4, r4, 0x534E
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022C774
 * Size:	000008
 */
void kh::Screen::DispWinLose::getSize(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022C77C
 * Size:	000008
 */
void kh::Screen::DispWinLose::getOwnerID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x4B48
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022C784
 * Size:	000014
 */
void kh::Screen::DispWinLose::getMemberID(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x4C4F
	  lis       r3, 0x5749
	  addi      r4, r4, 0x5345
	  addi      r3, r3, 0x4E5F
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022C798
 * Size:	000008
 */
void og::Screen::DispMemberChallenge2P::getSize(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x78
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022C7A0
 * Size:	00000C
 */
void og::Screen::DispMemberChallenge2P::getOwnerID(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x4F
	  addi      r3, r3, 0x4741
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022C7AC
 * Size:	000010
 */
void og::Screen::DispMemberChallenge2P::getMemberID(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x414C
	  li        r3, 0x4348
	  addi      r4, r4, 0x3250
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022C7BC
 * Size:	000010
 */
void Game::VsGame::GameState::on_section_fadeout((Game::VsGameSection*))
{
	/*
	.loc_0x0:
	  lhz       r0, 0x14(r3)
	  ori       r0, r0, 0x8000
	  sth       r0, 0x14(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022C7CC
 * Size:	000028
 */
void __sinit_vsGS_Game_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804C
	  stw       r0, -0x6A18(r13)
	  stfsu     f0, 0xF08(r3)
	  stfs      f0, -0x6A14(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}



/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void Game::_Print(char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042C700
 * Size:	000150
 */
void Game::MoviePlayer::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  bl        -0x40F748
	  lis       r4, 0x804F
	  addi      r3, r31, 0x1C
	  subi      r0, r4, 0x3FF4
	  stw       r0, 0x0(r31)
	  bl        -0x7F10
	  addi      r3, r31, 0xCC
	  bl        0x660
	  addi      r3, r31, 0x128
	  bl        0x658
	  li        r0, 0
	  lis       r4, 0x6
	  stw       r0, 0x1E4(r31)
	  mr        r3, r31
	  lfs       f0, 0x22B0(r2)
	  addi      r4, r4, 0x400
	  stw       r0, 0x1E8(r31)
	  stw       r0, 0x1EC(r31)
	  stb       r0, 0x1F0(r31)
	  stb       r0, 0x1F1(r31)
	  stb       r0, 0x1F2(r31)
	  stb       r0, 0x1F3(r31)
	  stw       r0, -0x64B0(r13)
	  stfs      f0, 0x1BC(r31)
	  stfs      f0, 0x1C0(r31)
	  stfs      f0, 0x1C4(r31)
	  stw       r0, 0x18C(r31)
	  stw       r0, 0x190(r31)
	  stw       r0, 0x19C(r31)
	  stw       r0, 0x1A0(r31)
	  stw       r0, 0x198(r31)
	  stw       r0, 0x194(r31)
	  stb       r0, 0x1F0(r31)
	  stb       r0, 0x1F1(r31)
	  stb       r0, 0x1F2(r31)
	  stb       r0, 0x1F3(r31)
	  stw       r0, 0xB0(r31)
	  stw       r0, 0xB4(r31)
	  stw       r0, 0xBC(r31)
	  stw       r0, 0x1B0(r31)
	  stw       r0, 0xB8(r31)
	  stw       r0, 0xC0(r31)
	  stw       r0, 0xC4(r31)
	  stw       r0, 0x18(r31)
	  stw       r0, 0x1CC(r31)
	  stw       r0, 0xAC(r31)
	  stw       r0, 0x1E4(r31)
	  bl        0x144
	  mr        r3, r31
	  bl        0x668
	  li        r3, 0x14
	  bl        -0x40893C
	  cmplwi    r3, 0
	  beq-      .loc_0x134
	  lis       r4, 0x804F
	  lis       r5, 0x804B
	  subi      r8, r4, 0x4044
	  lis       r4, 0x804F
	  lwz       r7, 0x0(r8)
	  addi      r5, r5, 0xF00
	  lwz       r6, 0x4(r8)
	  subi      r0, r4, 0x4000
	  lwz       r4, 0x8(r8)
	  stw       r7, 0x8(r1)
	  stw       r5, 0x0(r3)
	  stw       r0, 0x0(r3)
	  stw       r31, 0x4(r3)
	  stw       r7, 0x8(r3)
	  stw       r6, 0xC(r3)
	  stw       r6, 0xC(r1)
	  stw       r4, 0x10(r1)
	  stw       r4, 0x10(r3)

	.loc_0x134:
	  stw       r3, 0x1A4(r31)
	  mr        r3, r31
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042C850
 * Size:	000060
 */
void Game::MovieContext::__dt(void)
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
	  beq-      .loc_0x44
	  lis       r5, 0x804F
	  li        r4, 0
	  subi      r0, r5, 0x4018
	  stw       r0, 0x0(r30)
	  bl        -0x1B2F8
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x4087DC

	.loc_0x44:
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
 * Address:	8042C8B0
 * Size:	00002C
 */
void Game::MoviePlayer::reset(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x1F0(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x1C
	  bl        0x167C

	.loc_0x1C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042C8DC
 * Size:	00001C
 */
void Game::MoviePlayer::getActiveOrima(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x19C(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x14
	  mr        r3, r0
	  blr

	.loc_0x14:
	  lwz       r3, 0x18C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042C8F8
 * Size:	00001C
 */
void Game::MoviePlayer::getActiveGameCamera(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x1A0(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x14
	  mr        r3, r0
	  blr

	.loc_0x14:
	  lwz       r3, 0x190(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void Game::MoviePlayer::setMovieHeap((JKRHeap*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042C914
 * Size:	0000BC
 */
void Game::MoviePlayer::allocMovieHeap((unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r0, 0x1B0(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x48
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x60D8
	  li        r4, 0x1FF
	  subi      r5, r5, 0x60C8
	  crclr     6, 0x6
	  bl        -0x402318

	.loc_0x48:
	  lwz       r30, -0x77D4(r13)
	  mr        r3, r31
	  li        r5, 0x1
	  mr        r4, r30
	  bl        -0x407BFC
	  lwz       r0, 0x1B0(r29)
	  mr        r31, r3
	  cmplwi    r0, 0
	  beq-      .loc_0x88
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x60D8
	  li        r4, 0x1F5
	  subi      r5, r5, 0x60C8
	  crclr     6, 0x6
	  bl        -0x402358

	.loc_0x88:
	  stw       r31, 0x1B0(r29)
	  mr        r3, r31
	  bl        -0x4091C4
	  stw       r3, 0x1B4(r29)
	  mr        r3, r30
	  bl        -0x40940C
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
 * Address:	........
 * Size:	000038
 */
void Game::MoviePlayer::clearMovieHeap(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042C9D0
 * Size:	000060
 */
void Game::MoviePlayer::play((Game::MoviePlayArg&))
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
	  lwz       r4, 0x0(r4)
	  lwz       r5, 0x4(r31)
	  bl        0x378
	  mr.       r4, r3
	  beq-      .loc_0x44
	  mr        r3, r30
	  mr        r5, r31
	  li        r6, 0
	  bl        .loc_0x60
	  b         .loc_0x48

	.loc_0x44:
	  li        r3, 0x1

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x60:
	*/
}

/*
 * --INFO--
 * Address:	8042CA30
 * Size:	00033C
 */
void Game::MoviePlayer::play((Game::MovieConfig*, Game::MoviePlayArg&, bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x420(r1)
	  mflr      r0
	  lis       r7, 0x804A
	  stw       r0, 0x424(r1)
	  stmw      r27, 0x40C(r1)
	  mr        r28, r3
	  mr        r27, r4
	  mr        r29, r5
	  mr        r30, r6
	  subi      r31, r7, 0x60F0
	  lwz       r0, 0x1F0(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x74
	  bl        0x5D0
	  mr.       r4, r3
	  bne-      .loc_0x5C
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0x34
	  li        r4, 0x230
	  crclr     6, 0x6
	  bl        -0x402440
	  li        r3, 0x3
	  b         .loc_0x328

	.loc_0x5C:
	  mr        r3, r28
	  mr        r5, r27
	  mr        r6, r29
	  bl        0x610
	  li        r3, 0x2
	  b         .loc_0x328

	.loc_0x74:
	  lwz       r3, -0x6560(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x84
	  bl        -0x2E218

	.loc_0x84:
	  lwz       r0, 0x18C(r28)
	  li        r4, 0x2
	  stw       r0, 0x19C(r28)
	  lwz       r0, 0x190(r28)
	  stw       r0, 0x1A0(r28)
	  lwz       r3, -0x6960(r13)
	  bl        -0x1DA660
	  mr        r3, r27
	  bl        0x4DCC
	  stw       r27, 0xB0(r28)
	  cmplwi    r27, 0
	  lwz       r0, 0x28(r29)
	  stw       r0, 0xB8(r28)
	  bne-      .loc_0xD0
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0x28
	  li        r4, 0x252
	  crclr     6, 0x6
	  bl        -0x4024BC

	.loc_0xD0:
	  addi      r3, r1, 0x208
	  addi      r4, r31, 0x5C
	  addi      r5, r27, 0x45
	  crclr     6, 0x6
	  bl        -0x3656D8
	  addi      r3, r1, 0x8
	  addi      r4, r31, 0x7C
	  addi      r5, r27, 0x45
	  crclr     6, 0x6
	  bl        -0x3656EC
	  lwz       r3, -0x6C18(r13)
	  addi      r5, r31, 0x9C
	  li        r4, 0x1
	  li        r6, 0x3
	  bl        -0x277BA4
	  stb       r3, 0x88(r28)
	  li        r3, 0
	  stw       r3, 0xA8(r28)
	  lwz       r4, 0xB0(r28)
	  lbz       r5, 0x24(r4)
	  rlwinm.   r0,r5,0,31,31
	  bne-      .loc_0x220
	  rlwinm.   r0,r5,0,29,29
	  bne-      .loc_0x138
	  rlwinm.   r0,r5,0,28,28
	  beq-      .loc_0x13C

	.loc_0x138:
	  li        r3, 0x1

	.loc_0x13C:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1C0
	  lfs       f0, 0x18(r29)
	  lfs       f1, 0x22B4(r2)
	  stfs      f0, 0x8C(r28)
	  lfs       f0, 0x1C(r29)
	  stfs      f0, 0x90(r28)
	  lfs       f0, 0x20(r29)
	  stfs      f0, 0x94(r28)
	  lfs       f0, 0x24(r29)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x98(r28)
	  lwz       r3, 0xB0(r28)
	  lbz       r0, 0x24(r3)
	  rlwinm.   r0,r0,0,28,28
	  beq-      .loc_0x220
	  lwz       r0, -0x6CF8(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x19C
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0xAC
	  li        r4, 0x261
	  crclr     6, 0x6
	  bl        -0x402588

	.loc_0x19C:
	  lwz       r3, -0x6CF8(r13)
	  addi      r4, r28, 0x8C
	  lfs       f1, 0x22B8(r2)
	  lfs       f2, 0x22BC(r2)
	  bl        -0x2CA49C
	  lfs       f0, 0x22B4(r2)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x98(r28)
	  b         .loc_0x220

	.loc_0x1C0:
	  rlwinm.   r0,r5,0,27,27
	  beq-      .loc_0x1FC
	  lfs       f0, 0x18(r29)
	  lfs       f1, 0x22B4(r2)
	  stfs      f0, 0x8C(r28)
	  lfs       f0, 0x1C(r29)
	  stfs      f0, 0x90(r28)
	  lfs       f0, 0x20(r29)
	  stfs      f0, 0x94(r28)
	  lfs       f0, 0x24(r29)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x98(r28)
	  lwz       r0, 0x30(r29)
	  stw       r0, 0xA8(r28)
	  b         .loc_0x220

	.loc_0x1FC:
	  lfs       f0, 0xA4(r4)
	  stfs      f0, 0x8C(r28)
	  lfs       f0, 0xA8(r4)
	  stfs      f0, 0x90(r28)
	  lfs       f0, 0xAC(r4)
	  stfs      f0, 0x94(r28)
	  lwz       r3, 0xB0(r28)
	  lfs       f0, 0xB0(r3)
	  stfs      f0, 0x98(r28)

	.loc_0x220:
	  lwz       r3, 0x1F0(r28)
	  rlwinm.   r0,r30,0,24,31
	  li        r0, 0x1
	  rlwinm    r3,r3,0,31,29
	  stw       r3, 0x1F0(r28)
	  lwz       r3, 0x1F0(r28)
	  ori       r3, r3, 0x1
	  stw       r3, 0x1F0(r28)
	  lwz       r3, 0x1F0(r28)
	  rlwinm    r3,r3,0,1,31
	  stw       r3, 0x1F0(r28)
	  lwz       r3, 0xC(r29)
	  stw       r3, 0xB4(r28)
	  lwz       r3, 0x10(r29)
	  stw       r3, 0xBC(r28)
	  lwz       r3, 0x8(r29)
	  stw       r3, 0xC0(r28)
	  lwz       r3, 0x2C(r29)
	  stw       r3, 0xC4(r28)
	  lwz       r3, -0x6560(r13)
	  lwz       r3, 0x18(r3)
	  stb       r0, 0x92(r3)
	  bne-      .loc_0x304
	  lwz       r3, 0xB0(r28)
	  lhz       r0, 0xC0(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x304
	  lwz       r3, -0x6C18(r13)
	  lwz       r3, 0x58(r3)
	  lwz       r3, 0x18(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x2D8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2D8
	  lwz       r3, -0x6C18(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x22B0(r2)
	  stfs      f0, 0xA0(r28)
	  b         .loc_0x2F8

	.loc_0x2D8:
	  lwz       r3, -0x6C18(r13)
	  lfs       f1, 0x22C0(r2)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x90(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x22C0(r2)
	  stfs      f0, 0xA0(r28)

	.loc_0x2F8:
	  li        r0, 0x1
	  stw       r0, 0x18(r28)
	  b         .loc_0x324

	.loc_0x304:
	  lwz       r3, -0x6514(r13)
	  addi      r4, r28, 0x1C
	  lwz       r5, 0x1A4(r28)
	  bl        -0x9E08
	  li        r0, 0x2
	  lfs       f0, 0x22B0(r2)
	  stw       r0, 0x18(r28)
	  stfs      f0, 0xA0(r28)

	.loc_0x324:
	  li        r3, 0

	.loc_0x328:
	  lmw       r27, 0x40C(r1)
	  lwz       r0, 0x424(r1)
	  mtlr      r0
	  addi      r1, r1, 0x420
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void Game::MoviePlayer::doStartMovie(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042CD6C
 * Size:	000024
 */
void Game::MoviePlayer::findConfig((char*, char*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x6468(r13)
	  bl        0x5104
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042CD90
 * Size:	0000B0
 */
void Game::MovieContext::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1BA14
	  lis       r3, 0x804F
	  li        r0, 0
	  subi      r3, r3, 0x4018
	  lfs       f0, 0x22B0(r2)
	  stw       r3, 0x0(r31)
	  mr        r3, r31
	  stw       r0, 0x1C(r31)
	  stw       r0, 0x18(r31)
	  stw       r0, 0x24(r31)
	  stw       r0, 0x28(r31)
	  stfs      f0, 0x30(r31)
	  stfs      f0, 0x34(r31)
	  stfs      f0, 0x38(r31)
	  stfs      f0, 0x3C(r31)
	  stw       r0, 0x40(r31)
	  stw       r0, 0x20(r31)
	  stw       r0, 0x44(r31)
	  stw       r0, 0x2C(r31)
	  stw       r0, 0x48(r31)
	  stw       r0, 0x4C(r31)
	  stw       r0, 0x1C(r31)
	  stw       r0, 0x18(r31)
	  stw       r0, 0x24(r31)
	  stw       r0, 0x28(r31)
	  stfs      f0, 0x30(r31)
	  stfs      f0, 0x34(r31)
	  stfs      f0, 0x38(r31)
	  stfs      f0, 0x3C(r31)
	  stw       r0, 0x40(r31)
	  stw       r0, 0x20(r31)
	  stw       r0, 0x44(r31)
	  stw       r0, 0x2C(r31)
	  stw       r0, 0x48(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042CE40
 * Size:	00009C
 */
void Game::MoviePlayer::allocContexts(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0x8
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  stw       r0, 0x188(r3)
	  li        r0, 0
	  stw       r0, 0x184(r3)
	  lwz       r31, 0x188(r3)
	  mulli     r3, r31, 0x5C
	  addi      r3, r3, 0x10
	  bl        -0x408EC8
	  lis       r4, 0x8043
	  lis       r5, 0x8043
	  subi      r4, r4, 0x3270
	  mr        r7, r31
	  subi      r5, r5, 0x37B0
	  li        r6, 0x5C
	  bl        -0x36B4A0
	  stw       r3, 0xC8(r30)
	  li        r0, 0
	  mr        r3, r30
	  stw       r0, 0xDC(r30)
	  stw       r0, 0xD8(r30)
	  stw       r0, 0xD4(r30)
	  stw       r0, 0xD0(r30)
	  stw       r0, 0x138(r30)
	  stw       r0, 0x134(r30)
	  stw       r0, 0x130(r30)
	  stw       r0, 0x12C(r30)
	  bl        .loc_0x9C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x9C:
	*/
}

/*
 * --INFO--
 * Address:	8042CEDC
 * Size:	0000AC
 */
void Game::MoviePlayer::clearContexts(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  mr        r30, r31
	  stw       r29, 0x14(r1)
	  li        r29, 0
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  stw       r31, 0xDC(r3)
	  stw       r31, 0xD8(r3)
	  stw       r31, 0xD4(r3)
	  stw       r31, 0xD0(r3)
	  stw       r31, 0x138(r3)
	  stw       r31, 0x134(r3)
	  stw       r31, 0x130(r3)
	  stw       r31, 0x12C(r3)
	  b         .loc_0x78

	.loc_0x50:
	  lwz       r0, 0xC8(r28)
	  addi      r3, r28, 0x128
	  add       r4, r0, r30
	  stw       r31, 0x10(r4)
	  stw       r31, 0xC(r4)
	  stw       r31, 0x8(r4)
	  stw       r31, 0x4(r4)
	  bl        -0x1BB40
	  addi      r30, r30, 0x5C
	  addi      r29, r29, 0x1

	.loc_0x78:
	  lwz       r0, 0x188(r28)
	  cmpw      r29, r0
	  blt+      .loc_0x50
	  li        r0, 0
	  stw       r0, 0x184(r28)
	  lwz       r0, 0x24(r1)
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
 * Address:	........
 * Size:	0000F0
 */
void Game::MoviePlayer::playSuspended(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042CF88
 * Size:	0000AC
 */
void Game::MoviePlayer::clearSuspendedDemo(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  mr        r30, r31
	  stw       r29, 0x14(r1)
	  mr        r29, r31
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  stw       r31, 0xDC(r3)
	  stw       r31, 0xD8(r3)
	  stw       r31, 0xD4(r3)
	  stw       r31, 0xD0(r3)
	  stw       r31, 0x138(r3)
	  stw       r31, 0x134(r3)
	  stw       r31, 0x130(r3)
	  stw       r31, 0x12C(r3)
	  b         .loc_0x78

	.loc_0x50:
	  lwz       r0, 0xC8(r28)
	  addi      r3, r28, 0x128
	  add       r4, r0, r29
	  stw       r31, 0x10(r4)
	  stw       r31, 0xC(r4)
	  stw       r31, 0x8(r4)
	  stw       r31, 0x4(r4)
	  bl        -0x1BBEC
	  addi      r29, r29, 0x5C
	  addi      r30, r30, 0x1

	.loc_0x78:
	  lwz       r0, 0x188(r28)
	  cmpw      r30, r0
	  blt+      .loc_0x50
	  li        r0, 0
	  stw       r0, 0x184(r28)
	  lwz       r0, 0x24(r1)
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
 * Address:	........
 * Size:	000020
 */
void Game::MoviePlayer::hasSuspendedDemo(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042D034
 * Size:	00006C
 */
void Game::MoviePlayer::getNewContext(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  addi      r3, r30, 0x128
	  lwz       r12, 0x128(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr.       r31, r3
	  beq-      .loc_0x50
	  bl        -0x1BA98
	  mr        r4, r31
	  addi      r3, r30, 0xCC
	  bl        -0x1BC6C
	  lwz       r3, 0x184(r30)
	  addi      r0, r3, 0x1
	  stw       r0, 0x184(r30)

	.loc_0x50:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042D0A0
 * Size:	000008
 */
void Game::MovieContext::getChild(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x10(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void Game::MoviePlayer::hasSuspendedContext(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void Game::MoviePlayer::getSuspendedContext(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042D0A8
 * Size:	000088
 */
void Game::MoviePlayer::setContext((Game::MovieContext*, Game::MovieConfig*,
                                    Game::MoviePlayArg&))
{
	/*
	.loc_0x0:
	  stw       r5, 0x4C(r4)
	  lwz       r0, 0x18C(r3)
	  stw       r0, 0x50(r4)
	  lwz       r0, 0x194(r3)
	  stw       r0, 0x54(r4)
	  lwz       r0, 0x190(r3)
	  stw       r0, 0x58(r4)
	  lwz       r0, 0x0(r6)
	  stw       r0, 0x18(r4)
	  lwz       r0, 0x4(r6)
	  stw       r0, 0x1C(r4)
	  lwz       r0, 0x8(r6)
	  stw       r0, 0x20(r4)
	  lwz       r0, 0xC(r6)
	  stw       r0, 0x24(r4)
	  lwz       r0, 0x10(r6)
	  stw       r0, 0x28(r4)
	  lwz       r0, 0x14(r6)
	  stw       r0, 0x2C(r4)
	  lfs       f0, 0x18(r6)
	  stfs      f0, 0x30(r4)
	  lfs       f0, 0x1C(r6)
	  stfs      f0, 0x34(r4)
	  lfs       f0, 0x20(r6)
	  stfs      f0, 0x38(r4)
	  lfs       f0, 0x24(r6)
	  stfs      f0, 0x3C(r4)
	  lwz       r0, 0x28(r6)
	  stw       r0, 0x40(r4)
	  lwz       r0, 0x2C(r6)
	  stw       r0, 0x44(r4)
	  lwz       r0, 0x30(r6)
	  stw       r0, 0x48(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042D130
 * Size:	000478
 */
void Game::MoviePlayer::loadResource(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x250(r1)
	  mflr      r0
	  stw       r0, 0x254(r1)
	  stw       r31, 0x24C(r1)
	  mr        r31, r3
	  lis       r3, 0x804A
	  stw       r30, 0x248(r1)
	  subi      r30, r3, 0x60F0
	  addi      r3, r1, 0x138
	  stw       r29, 0x244(r1)
	  addi      r4, r30, 0x5C
	  lwz       r5, 0xB0(r31)
	  addi      r5, r5, 0x45
	  crclr     6, 0x6
	  bl        -0x365D30
	  lwz       r5, 0xB0(r31)
	  addi      r3, r1, 0x38
	  addi      r4, r30, 0x7C
	  addi      r5, r5, 0x45
	  crclr     6, 0x6
	  bl        -0x365D48
	  lwz       r3, -0x6514(r13)
	  lwz       r4, 0x1B0(r31)
	  bl        -0x9D44
	  li        r3, 0x2C
	  bl        -0x4092F0
	  mr.       r0, r3
	  beq-      .loc_0x78
	  bl        0x36E48
	  mr        r0, r3

	.loc_0x78:
	  stw       r0, 0xAC(r31)
	  li        r3, 0x30
	  bl        -0x40930C
	  mr.       r0, r3
	  beq-      .loc_0x9C
	  mr        r5, r31
	  addi      r4, r30, 0xF0
	  bl        0x3790
	  mr        r0, r3

	.loc_0x9C:
	  stw       r0, 0x1CC(r31)
	  li        r3, 0x78
	  bl        -0x409330
	  mr.       r0, r3
	  beq-      .loc_0xB8
	  bl        0x87BC
	  mr        r0, r3

	.loc_0xB8:
	  stw       r0, 0x1E4(r31)
	  li        r3, 0x10
	  bl        -0x40934C
	  mr.       r29, r3
	  beq-      .loc_0x104
	  lis       r3, 0x804A
	  lwz       r6, 0x1E4(r31)
	  subi      r0, r3, 0x1984
	  lis       r4, 0x804A
	  stw       r0, 0x0(r29)
	  li        r5, 0
	  lis       r3, 0x804A
	  subi      r4, r4, 0x704
	  stw       r5, 0x4(r29)
	  subi      r0, r3, 0x718
	  stw       r5, 0x8(r29)
	  stw       r4, 0x0(r29)
	  stw       r0, 0x0(r29)
	  stw       r6, 0xC(r29)

	.loc_0x104:
	  li        r3, 0x10
	  bl        -0x409394
	  cmplwi    r3, 0
	  beq-      .loc_0x140
	  lis       r4, 0x804A
	  lwz       r6, 0x1CC(r31)
	  subi      r0, r4, 0x1984
	  lis       r4, 0x804A
	  stw       r0, 0x0(r3)
	  li        r5, 0
	  subi      r0, r4, 0x750
	  stw       r5, 0x4(r3)
	  stw       r5, 0x8(r3)
	  stw       r0, 0x0(r3)
	  stw       r6, 0xC(r3)

	.loc_0x140:
	  stw       r3, 0x1D8(r31)
	  li        r3, 0x14
	  bl        -0x4093D4
	  cmplwi    r3, 0
	  beq-      .loc_0x194
	  lis       r4, 0x804A
	  lis       r5, 0x804A
	  subi      r0, r4, 0xAE8
	  lis       r4, 0x804A
	  stw       r0, 0x0(r3)
	  subi      r0, r5, 0x1998
	  li        r6, 0
	  addi      r5, r3, 0x8
	  stw       r0, 0x0(r3)
	  subi      r0, r4, 0x1A48
	  stw       r6, 0x8(r3)
	  stw       r6, 0xC(r3)
	  stw       r6, 0x4(r3)
	  stw       r5, 0x8(r3)
	  stw       r5, 0xC(r3)
	  stw       r0, 0x10(r3)

	.loc_0x194:
	  stw       r3, 0x1D4(r31)
	  lwz       r3, 0x1D4(r31)
	  lwz       r4, 0x1D8(r31)
	  bl        -0x42054C
	  lwz       r3, 0x1D4(r31)
	  mr        r4, r29
	  bl        -0x420558
	  li        r3, 0x14
	  bl        -0x409440
	  cmplwi    r3, 0
	  beq-      .loc_0x1F8
	  lwz       r6, -0x65E8(r13)
	  lis       r5, 0x804A
	  lis       r4, 0x804A
	  lwz       r8, 0x1CC(r31)
	  lwz       r7, 0x98(r6)
	  subi      r6, r5, 0x1984
	  li        r5, 0
	  subi      r0, r4, 0x1D28
	  stw       r6, 0x0(r3)
	  stw       r5, 0x4(r3)
	  stw       r5, 0x8(r3)
	  stw       r0, 0x0(r3)
	  stw       r7, 0xC(r3)
	  stw       r8, 0x10(r3)

	.loc_0x1F8:
	  stw       r3, 0x1DC(r31)
	  lwz       r3, 0x1D4(r31)
	  lwz       r4, 0x1DC(r31)
	  bl        -0x4205B0
	  lwz       r29, -0x67A8(r13)
	  li        r3, 0x14
	  bl        -0x40949C
	  mr.       r0, r3
	  beq-      .loc_0x22C
	  lwz       r5, 0x1CC(r31)
	  mr        r4, r29
	  bl        0x279DC
	  mr        r0, r3

	.loc_0x22C:
	  stw       r0, 0x1E0(r31)
	  lwz       r3, 0x1D4(r31)
	  lwz       r4, 0x1E0(r31)
	  bl        -0x4205E4
	  li        r3, 0xF8
	  bl        -0x4094CC
	  mr.       r0, r3
	  beq-      .loc_0x254
	  bl        -0x4208D8
	  mr        r0, r3

	.loc_0x254:
	  stw       r0, 0x1D0(r31)
	  lwz       r4, 0x1D4(r31)
	  lwz       r3, 0x1D0(r31)
	  cmplwi    r4, 0
	  bne-      .loc_0x270
	  li        r0, 0
	  b         .loc_0x274

	.loc_0x270:
	  addi      r0, r4, 0x10

	.loc_0x274:
	  stw       r4, 0xC(r3)
	  addi      r4, r30, 0x100
	  lfd       f0, 0x22C8(r2)
	  li        r5, 0
	  stw       r0, 0x64(r3)
	  lwz       r3, 0x1D0(r31)
	  stfd      f0, 0x58(r3)
	  lwz       r3, -0x6514(r13)
	  bl        -0xA068
	  lwz       r3, -0x6514(r13)
	  addi      r4, r2, 0x22D0
	  li        r5, 0
	  bl        -0xA078
	  addi      r3, r1, 0x8
	  addi      r4, r1, 0x38
	  bl        0x1F1F8
	  lwz       r0, -0x77D4(r13)
	  addi      r4, r1, 0x8
	  lwz       r3, -0x63D8(r13)
	  stw       r0, 0x20(r1)
	  bl        0x1F320
	  cmplwi    r3, 0
	  beq-      .loc_0x2D8
	  lwz       r0, 0x34(r3)
	  b         .loc_0x2DC

	.loc_0x2D8:
	  li        r0, 0

	.loc_0x2DC:
	  stw       r0, -0x64B0(r13)
	  lwz       r3, 0x1B0(r31)
	  lwz       r4, 0x1B4(r31)
	  bl        -0x340CD0
	  lwz       r3, -0x6514(r13)
	  addi      r4, r2, 0x22D0
	  bl        -0xA0C0
	  lwz       r3, -0x6514(r13)
	  addi      r4, r2, 0x22D4
	  li        r5, 0
	  bl        -0xA0D8
	  lwz       r3, 0x1E4(r31)
	  bl        0xB798
	  lwz       r3, -0x6514(r13)
	  addi      r4, r2, 0x22D4
	  bl        -0xA0E4
	  li        r0, 0
	  stw       r0, 0x1F4(r31)
	  lwz       r3, -0x64B0(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x37C
	  lwz       r12, 0x0(r3)
	  addi      r4, r2, 0x22DC
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr.       r29, r3
	  beq-      .loc_0x37C
	  li        r3, 0x14
	  bl        -0x4095DC
	  mr.       r0, r3
	  beq-      .loc_0x36C
	  lwz       r5, 0x1B0(r31)
	  mr        r4, r29
	  bl        -0x394FC4
	  mr        r0, r3

	.loc_0x36C:
	  stw       r0, 0x1F4(r31)
	  lwz       r3, -0x65E8(r13)
	  lwz       r4, 0x1F4(r31)
	  bl        -0x719D0

	.loc_0x37C:
	  lwz       r3, -0x6514(r13)
	  addi      r4, r2, 0x22E4
	  li        r5, 0
	  bl        -0xA15C
	  lwz       r3, -0x64B0(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x3D4
	  lwz       r12, 0x0(r3)
	  addi      r4, r30, 0x110
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x1EC(r31)
	  lwz       r0, 0x1EC(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x3E8
	  addi      r3, r30, 0x18
	  addi      r5, r30, 0x11C
	  li        r4, 0x3BA
	  crclr     6, 0x6
	  bl        -0x402EBC
	  b         .loc_0x3E8

	.loc_0x3D4:
	  addi      r3, r30, 0x18
	  addi      r5, r30, 0x128
	  li        r4, 0x3BD
	  crclr     6, 0x6
	  bl        -0x402ED4

	.loc_0x3E8:
	  lwz       r0, 0x1EC(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x408
	  addi      r3, r30, 0x18
	  addi      r5, r30, 0x148
	  li        r4, 0x3C0
	  crclr     6, 0x6
	  bl        -0x402EF4

	.loc_0x408:
	  lwz       r3, -0x6514(r13)
	  addi      r4, r2, 0x22E4
	  bl        -0xA1DC
	  lwz       r3, -0x6514(r13)
	  addi      r4, r30, 0x160
	  li        r5, 0
	  bl        -0xA1F4
	  mr        r3, r31
	  li        r4, 0x1
	  bl        .loc_0x478
	  lwz       r3, -0x6514(r13)
	  addi      r4, r30, 0x160
	  bl        -0xA204
	  lwz       r3, -0x6514(r13)
	  addi      r4, r30, 0x100
	  bl        -0xA210
	  lwz       r3, -0x6514(r13)
	  bl        -0xA0C4
	  lwz       r3, -0x6514(r13)
	  li        r4, 0
	  bl        -0xA220
	  lwz       r0, 0x254(r1)
	  lwz       r31, 0x24C(r1)
	  lwz       r30, 0x248(r1)
	  lwz       r29, 0x244(r1)
	  mtlr      r0
	  addi      r1, r1, 0x250
	  blr

	.loc_0x478:
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void __dt__Q27JGadget39TLinkList<JStudio::TCreateObject, -4> Fv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042D5A8
 * Size:	0000C0
 */
void Game::MoviePlayer::parse((bool))
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
	  lwz       r4, 0x1D0(r3)
	  addi      r3, r1, 0xC
	  bl        -0x420744
	  rlwinm.   r0,r31,0,24,31
	  li        r5, 0x30
	  beq-      .loc_0x38
	  li        r5, 0x40

	.loc_0x38:
	  lwz       r0, 0x1EC(r30)
	  addi      r3, r1, 0xC
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  bl        -0x406418
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x84
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x60D8
	  li        r4, 0x3EC
	  subi      r5, r5, 0x5F80
	  crclr     6, 0x6
	  bl        -0x402FD4
	  addi      r3, r1, 0xC
	  li        r4, -0x1
	  bl        -0x420744
	  li        r3, 0
	  b         .loc_0xA8

	.loc_0x84:
	  lwz       r3, 0x1CC(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r1, 0xC
	  li        r4, -0x1
	  bl        -0x42076C
	  li        r3, 0x1

	.loc_0xA8:
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
 * Address:	8042D668
 * Size:	0007C4
 */
void Game::MoviePlayer::update((Controller*, Controller*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r28, r3
	  lis       r3, 0x804A
	  mr        r29, r4
	  mr        r30, r5
	  subi      r31, r3, 0x60F0
	  lwz       r0, 0x18(r28)
	  cmplwi    r0, 0x7
	  bgt-      .loc_0x4FC
	  lis       r3, 0x804F
	  rlwinm    r0,r0,2,0,29
	  subi      r3, r3, 0x4038
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  li        r3, 0
	  b         .loc_0x7B0
	  lfs       f2, 0xA0(r28)
	  lfs       f1, 0x22B0(r2)
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x98
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fsubs     f0, f2, f0
	  stfs      f0, 0xA0(r28)
	  lfs       f0, 0xA0(r28)
	  fcmpo     cr0, f0, f1
	  cror      2, 0, 0x2
	  bne-      .loc_0xC4
	  lwz       r3, -0x6C18(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xC4

	.loc_0x98:
	  lwz       r3, -0x6514(r13)
	  addi      r4, r28, 0x1C
	  lwz       r5, 0x1A4(r28)
	  bl        -0xA7D4
	  li        r0, 0x2
	  stw       r0, 0x18(r28)
	  lwz       r3, -0x6C18(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xC4:
	  li        r3, 0x1
	  b         .loc_0x7B0
	  lfs       f1, 0xA0(r28)
	  lfs       f0, 0x22B0(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xEC
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fsubs     f0, f1, f0
	  stfs      f0, 0xA0(r28)

	.loc_0xEC:
	  lwz       r0, 0x34(r28)
	  cmpwi     r0, 0x2
	  bne-      .loc_0x128
	  lwz       r3, -0x6514(r13)
	  lwz       r4, 0x1B0(r28)
	  bl        -0xA320
	  lwz       r4, 0x1A0(r28)
	  cmplwi    r4, 0
	  beq-      .loc_0x114
	  b         .loc_0x118

	.loc_0x114:
	  lwz       r4, 0x190(r28)

	.loc_0x118:
	  mr        r3, r28
	  bl        0x8E0
	  lwz       r3, -0x6514(r13)
	  bl        -0xA2D4

	.loc_0x128:
	  lwz       r0, 0x34(r28)
	  cmpwi     r0, 0x2
	  bne-      .loc_0x224
	  lfs       f1, 0xA0(r28)
	  lfs       f0, 0x22B0(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x224
	  lwz       r3, -0x6C18(r13)
	  addi      r5, r31, 0x18C
	  li        r4, 0
	  li        r6, 0x3
	  bl        -0x27882C
	  lwz       r3, -0x6C18(r13)
	  bl        -0x278800
	  lwz       r3, 0xBC(r28)
	  cmplwi    r3, 0
	  beq-      .loc_0x18C
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  lwz       r4, 0xB0(r28)
	  lwz       r12, 0x8(r12)
	  lwz       r6, 0xB8(r28)
	  mtctr     r12
	  bctrl

	.loc_0x18C:
	  lwz       r3, 0xB0(r28)
	  lbz       r0, 0x24(r3)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x1AC
	  lfs       f1, 0x98(r28)
	  mr        r3, r28
	  addi      r4, r28, 0x8C
	  bl        0xD0C

	.loc_0x1AC:
	  mr        r3, r28
	  li        r4, 0
	  bl        0x6B4
	  lwz       r4, 0xB0(r28)
	  mr        r3, r28
	  bl        0x96A8
	  li        r0, 0x5
	  stw       r0, 0x18(r28)
	  lwz       r3, 0xB0(r28)
	  lhz       r3, 0xC0(r3)
	  rlwinm.   r0,r3,0,29,29
	  bne-      .loc_0x200
	  rlwinm.   r0,r3,0,30,30
	  beq-      .loc_0x200
	  lwz       r3, -0x6C18(r13)
	  lfs       f1, 0x22C0(r2)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x94(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x214

	.loc_0x200:
	  lwz       r3, -0x6C18(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl

	.loc_0x214:
	  li        r0, 0x3
	  li        r3, 0x1
	  stw       r0, 0x18(r28)
	  b         .loc_0x7B0

	.loc_0x224:
	  li        r3, 0x1
	  b         .loc_0x7B0
	  li        r0, 0x4
	  stw       r0, 0x18(r28)
	  b         .loc_0x4FC
	  li        r0, 0x5
	  stw       r0, 0x18(r28)
	  b         .loc_0x4FC
	  lwz       r3, -0x6C18(r13)
	  bl        -0x2788E8
	  b         .loc_0x4FC
	  lwz       r3, 0x1CC(r28)
	  cmplwi    r3, 0
	  beq-      .loc_0x26C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x74(r12)
	  mtctr     r12
	  bctrl

	.loc_0x26C:
	  lwz       r3, -0x6514(r13)
	  lfs       f2, 0xA0(r28)
	  lfs       f1, 0x54(r3)
	  lfs       f0, 0x22E8(r2)
	  fsubs     f1, f2, f1
	  stfs      f1, 0xA0(r28)
	  lfs       f1, 0xA0(r28)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x4DC
	  lbz       r0, 0xA4(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0x4DC
	  lwz       r0, 0x1F0(r28)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x324
	  mr        r3, r28
	  bl        0xB44
	  li        r27, 0
	  b         .loc_0x31C

	.loc_0x2B8:
	  lwz       r3, 0x1D0(r28)
	  li        r4, 0x1
	  bl        -0x41CE10
	  rlwinm    r0,r3,0,24,31
	  lwz       r3, 0x1CC(r28)
	  cntlzw    r0, r0
	  lwz       r12, 0x0(r3)
	  rlwinm    r0,r0,27,5,31
	  mr        r27, r0
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x1E4(r28)
	  cmplwi    r3, 0
	  beq-      .loc_0x30C
	  lwz       r12, 0x0(r3)
	  mr        r4, r29
	  mr        r5, r30
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x30C:
	  mr        r3, r28
	  li        r4, 0x1
	  li        r5, 0
	  bl        0xA08

	.loc_0x31C:
	  rlwinm.   r0,r27,0,24,31
	  beq+      .loc_0x2B8

	.loc_0x324:
	  li        r0, 0x1
	  mr        r3, r28
	  stb       r0, 0xA4(r28)
	  lwz       r27, 0xB0(r28)
	  bl        0x5A8
	  lwz       r3, -0x6560(r13)
	  li        r0, 0
	  li        r4, 0x2
	  lwz       r3, 0x18(r3)
	  stb       r0, 0x92(r3)
	  lwz       r3, -0x6960(r13)
	  bl        -0x1DB4DC
	  lwz       r3, -0x6C18(r13)
	  addi      r5, r31, 0x1A0
	  li        r4, 0
	  li        r6, 0x3
	  bl        -0x278A38
	  lwz       r3, -0x6560(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x378
	  bl        -0x2F0D4

	.loc_0x378:
	  lwz       r3, 0xB4(r28)
	  cmplwi    r3, 0
	  beq-      .loc_0x3A0
	  lwz       r12, 0x0(r3)
	  mr        r4, r27
	  li        r5, 0
	  lwz       r6, 0xB8(r28)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x3A0:
	  lwz       r3, -0x6C18(r13)
	  lfs       f1, 0x22EC(r2)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x94(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r28, 0xCC
	  lwz       r12, 0xCC(r28)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x4C0
	  bl        0x399FC
	  addi      r3, r28, 0xCC
	  lwz       r12, 0xCC(r28)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr.       r29, r3
	  beq-      .loc_0x410
	  bl        -0x1C48C
	  mr        r4, r29
	  addi      r3, r28, 0x128
	  bl        -0x1C660
	  lwz       r3, 0x184(r28)
	  subi      r0, r3, 0x1
	  stw       r0, 0x184(r28)

	.loc_0x410:
	  cmplwi    r29, 0
	  beq-      .loc_0x4A4
	  lwz       r0, 0x50(r29)
	  mr        r3, r28
	  addi      r5, r29, 0x18
	  li        r6, 0x1
	  stw       r0, 0x18C(r28)
	  lwz       r0, 0x58(r29)
	  stw       r0, 0x190(r28)
	  lwz       r0, 0x54(r29)
	  stw       r0, 0x194(r28)
	  lwz       r4, 0x4C(r29)
	  bl        -0x1078
	  cmpwi     r3, 0x2
	  beq-      .loc_0x47C
	  bge-      .loc_0x460
	  cmpwi     r3, 0
	  beq-      .loc_0x46C
	  bge-      .loc_0x474
	  b         .loc_0x4B8

	.loc_0x460:
	  cmpwi     r3, 0x4
	  bge-      .loc_0x4B8
	  b         .loc_0x484

	.loc_0x46C:
	  li        r3, 0x1
	  b         .loc_0x7B0

	.loc_0x474:
	  li        r3, 0
	  b         .loc_0x7B0

	.loc_0x47C:
	  li        r3, 0x1
	  b         .loc_0x7B0

	.loc_0x484:
	  lwz       r6, 0x18(r29)
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0xBC
	  li        r4, 0x2FF
	  crclr     6, 0x6
	  bl        -0x4034C0
	  li        r3, 0
	  b         .loc_0x7B0

	.loc_0x4A4:
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0xD0
	  li        r4, 0x304
	  crclr     6, 0x6
	  bl        -0x4034DC

	.loc_0x4B8:
	  li        r3, 0
	  b         .loc_0x7B0

	.loc_0x4C0:
	  lwz       r0, 0x18(r28)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x4D4
	  cmpwi     r0, 0x1
	  bne-      .loc_0x4F4

	.loc_0x4D4:
	  bl        0x398FC
	  b         .loc_0x4F4

	.loc_0x4DC:
	  lfs       f0, 0x22B0(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x4F4
	  li        r0, 0
	  stw       r0, 0x18(r28)

	.loc_0x4F4:
	  li        r3, 0x1
	  b         .loc_0x7B0

	.loc_0x4FC:
	  lwz       r0, 0x1F0(r28)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x7A8
	  lwz       r0, 0x18(r29)
	  andi.     r0, r0, 0xF70
	  bne-      .loc_0x538
	  cmplwi    r30, 0
	  beq-      .loc_0x52C
	  beq-      .loc_0x538
	  lwz       r0, 0x18(r30)
	  andi.     r0, r0, 0xF70
	  bne-      .loc_0x538

	.loc_0x52C:
	  lwz       r0, 0x1F0(r28)
	  oris      r0, r0, 0x8000
	  stw       r0, 0x1F0(r28)

	.loc_0x538:
	  lwz       r3, 0x1D0(r28)
	  lwz       r0, 0x54(r3)
	  cmpwi     r0, 0
	  bgt-      .loc_0x554
	  lwz       r3, 0x1E8(r28)
	  addi      r0, r3, 0x1
	  stw       r0, 0x1E8(r28)

	.loc_0x554:
	  lwz       r3, 0xB0(r28)
	  lbz       r0, 0x24(r3)
	  rlwinm.   r0,r0,0,27,27
	  beq-      .loc_0x634
	  lwz       r3, 0xA8(r28)
	  cmplwi    r3, 0
	  beq-      .loc_0x634
	  lfs       f4, 0x4(r3)
	  lfs       f0, 0x90(r28)
	  lfs       f3, 0x0(r3)
	  fsubs     f6, f0, f4
	  lfs       f0, 0x8C(r28)
	  lfs       f5, 0x8(r3)
	  lfs       f1, 0x94(r28)
	  fsubs     f2, f0, f3
	  fmuls     f8, f6, f6
	  fsubs     f7, f1, f5
	  lfs       f0, 0x22B0(r2)
	  fmadds    f1, f2, f2, f8
	  fmuls     f8, f7, f7
	  fadds     f1, f8, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x5C0
	  ble-      .loc_0x5C4
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x5C4

	.loc_0x5C0:
	  fmr       f1, f0

	.loc_0x5C4:
	  lfs       f0, 0x22B0(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x5E8
	  lfs       f0, 0x22EC(r2)
	  fdivs     f0, f0, f1
	  fmuls     f2, f2, f0
	  fmuls     f6, f6, f0
	  fmuls     f7, f7, f0
	  b         .loc_0x5EC

	.loc_0x5E8:
	  fmr       f1, f0

	.loc_0x5EC:
	  lfs       f0, 0x22F0(r2)
	  fmr       f8, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x600
	  fmr       f8, f0

	.loc_0x600:
	  fmuls     f2, f2, f8
	  mr        r3, r28
	  fmuls     f1, f6, f8
	  addi      r4, r28, 0x8C
	  fmuls     f0, f7, f8
	  fadds     f2, f3, f2
	  fadds     f1, f4, f1
	  fadds     f0, f5, f0
	  stfs      f2, 0x8C(r28)
	  stfs      f1, 0x90(r28)
	  stfs      f0, 0x94(r28)
	  lfs       f1, 0x98(r28)
	  bl        0x884

	.loc_0x634:
	  lwz       r3, 0x1D0(r28)
	  li        r4, 0x1
	  bl        -0x41D18C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x6C0
	  lwz       r0, 0x18(r28)
	  cmpwi     r0, 0x6
	  beq-      .loc_0x70C
	  li        r0, 0x6
	  lfs       f0, 0x22F4(r2)
	  stw       r0, 0x18(r28)
	  li        r0, 0
	  li        r4, 0x1
	  li        r5, 0
	  stfs      f0, 0xA0(r28)
	  li        r6, 0x3
	  stb       r0, 0xA4(r28)
	  lwz       r3, -0x6C18(r13)
	  bl        -0x278D50
	  lwz       r3, -0x6C18(r13)
	  lfs       f1, 0x22EC(r2)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x90(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xAC(r28)
	  li        r4, 0x1E
	  bl        0x38D68
	  lwz       r3, 0x1CC(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x74(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x1
	  b         .loc_0x7B0

	.loc_0x6C0:
	  lwz       r3, 0x1CC(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x1CC(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x74(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x1E4(r28)
	  cmplwi    r3, 0
	  beq-      .loc_0x70C
	  lwz       r12, 0x0(r3)
	  mr        r4, r29
	  mr        r5, r30
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x70C:
	  lwz       r0, 0x18(r28)
	  cmpwi     r0, 0x5
	  bne-      .loc_0x7A8
	  lwz       r0, 0x1F0(r28)
	  rlwinm.   r0,r0,0,0,0
	  beq-      .loc_0x7A8
	  lwz       r3, 0x1D0(r28)
	  lwz       r0, 0x54(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x7A8
	  lwz       r0, 0x1C(r29)
	  andi.     r0, r0, 0xF70
	  bne-      .loc_0x754
	  cmplwi    r30, 0
	  beq-      .loc_0x770
	  lwz       r0, 0x18(r30)
	  andi.     r0, r0, 0xF70
	  beq-      .loc_0x770

	.loc_0x754:
	  lwz       r3, 0xB0(r28)
	  bl        0x3AE4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x770
	  mr        r3, r28
	  bl        0x964
	  b         .loc_0x7A8

	.loc_0x770:
	  lwz       r0, 0x1C(r29)
	  rlwinm.   r0,r0,0,19,19
	  bne-      .loc_0x790
	  cmplwi    r30, 0
	  beq-      .loc_0x7A8
	  lwz       r0, 0x1C(r30)
	  rlwinm.   r0,r0,0,19,19
	  beq-      .loc_0x7A8

	.loc_0x790:
	  lwz       r3, 0xB0(r28)
	  bl        0x3AC4
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x7A8
	  mr        r3, r28
	  bl        0x928

	.loc_0x7A8:
	  lwz       r0, 0x1F0(r28)
	  rlwinm    r3,r0,0,31,31

	.loc_0x7B0:
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042DE2C
 * Size:	00002C
 */
void P2JME::TControl::update((Controller*, Controller*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042DE58
 * Size:	000078
 */
void Game::MoviePlayer::draw((Graphics&))
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
	  lwz       r0, 0x1F0(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x60
	  lwz       r0, 0x1E4(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x60
	  addi      r3, r31, 0xBC
	  lwz       r12, 0xBC(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x1E4(r30)
	  mr        r4, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl

	.loc_0x60:
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
 * Address:	8042DED0
 * Size:	000074
 */
void Game::MoviePlayer::start((Camera*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r4, 0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r0, 0x1B8(r3)
	  beq-      .loc_0x28
	  bl        0x170

	.loc_0x28:
	  lwz       r0, 0x1EC(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x58
	  li        r0, 0
	  stw       r0, 0x1E8(r31)
	  lwz       r3, 0x1D0(r31)
	  stw       r0, 0x40(r3)
	  lwz       r3, 0x1CC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x78(r12)
	  mtctr     r12
	  bctrl

	.loc_0x58:
	  lwz       r0, 0x1F0(r31)
	  lwz       r31, 0xC(r1)
	  rlwinm    r3,r0,0,31,31
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042DF44
 * Size:	000120
 */
void Game::MoviePlayer::stop(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0x1F0(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0xE8
	  bl        0x8FDC
	  lwz       r0, 0x1F0(r31)
	  rlwinm    r0,r0,0,0,30
	  stw       r0, 0x1F0(r31)
	  lwz       r0, 0x1F0(r31)
	  rlwinm    r0,r0,0,1,31
	  stw       r0, 0x1F0(r31)
	  lwz       r3, 0x1CC(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x60
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x1CC(r31)
	  bl        0x2AD8

	.loc_0x60:
	  li        r0, 0
	  stw       r0, 0x1CC(r31)
	  stw       r0, 0x1E4(r31)
	  lwz       r0, 0x1F4(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x88
	  lwz       r3, -0x65E8(r13)
	  bl        -0x724C0
	  li        r0, 0
	  stw       r0, 0x1F4(r31)

	.loc_0x88:
	  lwz       r3, 0xAC(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xA0
	  bl        0x38B94
	  li        r0, 0
	  stw       r0, 0xAC(r31)

	.loc_0xA0:
	  lwz       r3, 0x1B0(r31)
	  bl        -0x40A8B8
	  lwz       r3, 0x1B0(r31)
	  bl        -0x40A810
	  lwz       r7, 0x1B4(r31)
	  cmpw      r3, r7
	  beq-      .loc_0xE0
	  lis       r5, 0x804A
	  lis       r4, 0x804A
	  subi      r0, r5, 0x60D8
	  mr        r6, r3
	  subi      r5, r4, 0x5F3C
	  li        r4, 0x53B
	  mr        r3, r0
	  crclr     6, 0x6
	  bl        -0x4039E0

	.loc_0xE0:
	  li        r0, 0
	  stw       r0, 0xB0(r31)

	.loc_0xE8:
	  li        r0, 0
	  stw       r0, 0x18C(r31)
	  stw       r0, 0x194(r31)
	  stw       r0, 0x19C(r31)
	  stw       r0, 0x1A0(r31)
	  lwz       r0, 0x1F0(r31)
	  lwz       r31, 0xC(r1)
	  rlwinm    r0,r0,0,31,31
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00010C
 */
void Game::MoviePlayer::do_stop(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042E064
 * Size:	000324
 */
void Game::MoviePlayer::setCamera((Camera*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  li        r5, 0x3
	  stw       r0, 0x64(r1)
	  stmw      r27, 0x4C(r1)
	  mr        r31, r3
	  lis       r3, 0x804A
	  mr        r27, r4
	  subi      r29, r3, 0x60F0
	  addi      r4, r29, 0x1D4
	  lwz       r3, 0x1CC(r31)
	  bl        0x2EAC
	  mr.       r28, r3
	  bne-      .loc_0x4C
	  lwz       r3, 0x1CC(r31)
	  addi      r4, r2, 0x22F8
	  li        r5, 0x3
	  bl        0x2E94
	  mr        r28, r3

	.loc_0x4C:
	  cmplwi    r28, 0
	  bne-      .loc_0x1A8
	  lwz       r3, 0xB0(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x68
	  lwz       r4, 0xA0(r3)
	  b         .loc_0x6C

	.loc_0x68:
	  li        r4, 0

	.loc_0x6C:
	  lwz       r5, 0x1A0(r31)
	  li        r3, 0
	  lwz       r0, 0xC4(r31)
	  stw       r3, 0x38(r1)
	  cmplwi    r5, 0
	  lwz       r3, 0xC0(r31)
	  stw       r4, 0x3C(r1)
	  stw       r3, 0x38(r1)
	  stw       r0, 0x40(r1)
	  beq-      .loc_0x98
	  b         .loc_0x9C

	.loc_0x98:
	  lwz       r5, 0x190(r31)

	.loc_0x9C:
	  cmplwi    r5, 0
	  beq-      .loc_0x160
	  lwz       r4, 0x38(r1)
	  lwz       r3, 0x3C(r1)
	  lwz       r0, 0x40(r1)
	  stw       r4, 0x20(r1)
	  stw       r3, 0x24(r1)
	  stw       r0, 0x28(r1)
	  lwz       r3, 0x1A0(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xD0
	  mr        r28, r3
	  b         .loc_0xD4

	.loc_0xD0:
	  lwz       r28, 0x190(r31)

	.loc_0xD4:
	  cmplwi    r3, 0
	  beq-      .loc_0xE4
	  mr        r29, r3
	  b         .loc_0xE8

	.loc_0xE4:
	  lwz       r29, 0x190(r31)

	.loc_0xE8:
	  cmplwi    r3, 0
	  beq-      .loc_0xF4
	  b         .loc_0xF8

	.loc_0xF4:
	  lwz       r3, 0x190(r31)

	.loc_0xF8:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  mr        r30, r3
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  mr        r29, r3
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xAC(r31)
	  mr        r5, r29
	  mr        r6, r30
	  lwz       r12, 0x0(r3)
	  addi      r7, r1, 0x20
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x19C

	.loc_0x160:
	  lwz       r6, 0x38(r1)
	  addi      r7, r1, 0x14
	  lwz       r3, 0x3C(r1)
	  li        r4, 0
	  lwz       r0, 0x40(r1)
	  li        r5, 0
	  stw       r6, 0x14(r1)
	  li        r6, 0
	  stw       r3, 0x18(r1)
	  stw       r0, 0x1C(r1)
	  lwz       r3, 0xAC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x19C:
	  lwz       r3, 0xAC(r31)
	  bl        0x380A8
	  b         .loc_0x310

	.loc_0x1A8:
	  bne-      .loc_0x1C0
	  addi      r3, r29, 0x18
	  addi      r5, r29, 0x28
	  li        r4, 0x5AD
	  crclr     6, 0x6
	  bl        -0x403BE0

	.loc_0x1C0:
	  lwz       r0, 0x1A0(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x1D0
	  b         .loc_0x1D4

	.loc_0x1D0:
	  lwz       r0, 0x190(r31)

	.loc_0x1D4:
	  cmplwi    r0, 0
	  beq-      .loc_0x1E0
	  lwz       r27, 0x190(r31)

	.loc_0x1E0:
	  mr        r3, r28
	  mr        r4, r27
	  bl        0x18EC
	  lwz       r3, 0xB0(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x200
	  lwz       r6, 0xA0(r3)
	  b         .loc_0x204

	.loc_0x200:
	  li        r6, 0

	.loc_0x204:
	  lwz       r0, 0xC4(r31)
	  li        r5, 0
	  lwz       r4, 0xC0(r31)
	  mr        r3, r27
	  stw       r5, 0x2C(r1)
	  stw       r4, 0x8(r1)
	  stw       r6, 0xC(r1)
	  stw       r0, 0x10(r1)
	  lwz       r12, 0x0(r27)
	  stw       r6, 0x30(r1)
	  lwz       r12, 0x6C(r12)
	  stw       r4, 0x2C(r1)
	  stw       r0, 0x34(r1)
	  mtctr     r12
	  bctrl
	  mr        r29, r3
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  mr        r30, r3
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xAC(r31)
	  mr        r5, r30
	  mr        r6, r29
	  lwz       r12, 0x0(r3)
	  addi      r7, r1, 0x8
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r27
	  li        r4, 0
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r27
	  li        r4, 0
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  addi      r4, r2, 0x2300
	  bl        -0x6058
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xAC(r31)
	  bl        0x37F3C

	.loc_0x310:
	  lmw       r27, 0x4C(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void Game::MoviePlayer::suspend((long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042E388
 * Size:	0000D0
 */
void Game::MoviePlayer::unsuspend((long, bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm.   r0,r5,0,24,31
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x1D0(r3)
	  lwz       r0, 0x40(r3)
	  sub       r0, r0, r4
	  stw       r0, 0x40(r3)
	  beq-      .loc_0xBC
	  lwz       r3, 0xB0(r31)
	  lwz       r3, 0xC4(r3)
	  cmpwi     r3, 0
	  beq-      .loc_0x48
	  lwz       r0, 0x1B8(r31)
	  cmpw      r0, r3
	  blt-      .loc_0x8C

	.loc_0x48:
	  lis       r4, 0x804A
	  lwz       r3, -0x6C18(r13)
	  subi      r5, r4, 0x5F10
	  li        r6, 0
	  li        r4, 0x1
	  bl        -0x279450
	  li        r0, 0xC
	  li        r3, 0
	  mtctr     r0

	.loc_0x6C:
	  addi      r3, r3, 0x8
	  bdnz+     .loc_0x6C
	  subfic    r0, r3, 0x64
	  mtctr     r0
	  cmpwi     r3, 0x64
	  bge-      .loc_0xA4

	.loc_0x84:
	  bdnz-     .loc_0x84
	  b         .loc_0xA4

	.loc_0x8C:
	  lis       r4, 0x804A
	  lwz       r3, -0x6C18(r13)
	  subi      r5, r4, 0x5EFC
	  li        r6, 0x3
	  li        r4, 0
	  bl        -0x279494

	.loc_0xA4:
	  lwz       r3, 0xAC(r31)
	  lwz       r4, 0x1B8(r31)
	  bl        0x38D9C
	  lwz       r3, 0x1B8(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x1B8(r31)

	.loc_0xBC:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042E458
 * Size:	0000C4
 */
void Game::MoviePlayer::resetFrame(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  li        r3, 0
	  bl        -0x4063AC
	  lwz       r4, 0x1D0(r31)
	  lwz       r0, 0x10(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0xB0
	  addi      r3, r1, 0xC
	  bl        -0x421600
	  lwz       r0, 0x1EC(r31)
	  addi      r3, r1, 0xC
	  addi      r4, r1, 0x8
	  li        r5, 0x30
	  stw       r0, 0x8(r1)
	  bl        -0x4072C8
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x80
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x60D8
	  li        r4, 0x3EC
	  subi      r5, r5, 0x5F80
	  crclr     6, 0x6
	  bl        -0x403E84
	  addi      r3, r1, 0xC
	  li        r4, -0x1
	  bl        -0x4215F4
	  b         .loc_0xA0

	.loc_0x80:
	  lwz       r3, 0x1CC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r1, 0xC
	  li        r4, -0x1
	  bl        -0x421618

	.loc_0xA0:
	  li        r0, 0
	  stw       r0, 0x1E8(r31)
	  lwz       r3, 0x1D0(r31)
	  stw       r0, 0x40(r3)

	.loc_0xB0:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042E51C
 * Size:	00009C
 */
void setTransform__Q24Game11MoviePlayerFR10Vector3<float> f(void)
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
	  mr        r30, r4
	  fmr       f31, f1
	  lfs       f2, 0x0(r4)
	  li        r0, 0x1
	  lfs       f0, 0x230C(r2)
	  stfs      f2, 0x1BC(r3)
	  fmuls     f0, f0, f31
	  lfs       f2, 0x2308(r2)
	  lfs       f3, 0x4(r4)
	  stfs      f3, 0x1C0(r3)
	  fmuls     f0, f2, f0
	  lfs       f2, 0x8(r4)
	  stfs      f2, 0x1C4(r3)
	  stfs      f0, 0x1C8(r3)
	  lwz       r5, 0x1D0(r3)
	  stb       r0, 0x75(r5)
	  stb       r0, 0x74(r5)
	  lwz       r31, 0x1D0(r3)
	  mr        r3, r31
	  bl        -0x421960
	  fmr       f1, f31
	  mr        r3, r31
	  mr        r4, r30
	  bl        -0x4219F0
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
 * Address:	8042E5B8
 * Size:	000034
 */
void Game::MoviePlayer::isPlaying((char*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0xB0(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x20
	  bl        0x32FC
	  b         .loc_0x24

	.loc_0x20:
	  li        r3, 0

	.loc_0x24:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void Game::MoviePlayer::isLoadingBlack(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042E5EC
 * Size:	000148
 */
void Game::MoviePlayer::drawLoading((Graphics&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  li        r0, 0
	  stw       r31, 0x4C(r1)
	  stw       r30, 0x48(r1)
	  mr        r30, r4
	  stw       r29, 0x44(r1)
	  mr        r29, r3
	  lwz       r3, 0x18(r3)
	  cmpwi     r3, 0x2
	  beq-      .loc_0x40
	  cmpwi     r3, 0x3
	  beq-      .loc_0x40
	  cmpwi     r3, 0x4
	  bne-      .loc_0x44

	.loc_0x40:
	  li        r0, 0x1

	.loc_0x44:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x12C
	  addi      r3, r30, 0xBC
	  lwz       r12, 0xBC(r30)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  li        r8, 0
	  li        r0, 0xFF
	  stb       r8, 0x18(r1)
	  addi      r31, r30, 0xBC
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  stb       r8, 0x19(r1)
	  addi      r5, r1, 0xC
	  addi      r6, r1, 0x10
	  addi      r7, r1, 0x14
	  stb       r8, 0x1A(r1)
	  stb       r0, 0x1B(r1)
	  lwz       r0, 0x18(r1)
	  stw       r0, 0x14(r1)
	  stw       r0, 0x10(r1)
	  stw       r0, 0xC(r1)
	  stw       r0, 0x8(r1)
	  bl        -0x3F8004
	  lwz       r3, 0xB0(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0xC0
	  lhz       r0, 0xC0(r3)
	  rlwinm    r0,r0,30,31,31
	  b         .loc_0xC4

	.loc_0xC0:
	  li        r0, 0

	.loc_0xC4:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x12C
	  bl        -0xB494
	  lhz       r30, 0x6(r3)
	  bl        -0xB49C
	  lhz       r4, 0x4(r3)
	  lis       r0, 0x4330
	  lfs       f3, 0x22B0(r2)
	  mr        r3, r31
	  stw       r4, 0x34(r1)
	  addi      r4, r1, 0x1C
	  lfd       f2, 0x2310(r2)
	  stw       r0, 0x30(r1)
	  lfd       f0, 0x30(r1)
	  stw       r30, 0x3C(r1)
	  fsubs     f1, f0, f2
	  stw       r0, 0x38(r1)
	  lfd       f0, 0x38(r1)
	  fadds     f1, f3, f1
	  stfs      f3, 0x1C(r1)
	  fsubs     f0, f0, f2
	  stfs      f3, 0x20(r1)
	  fadds     f0, f3, f0
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  bl        -0x3F7F40

	.loc_0x12C:
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  lwz       r29, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042E734
 * Size:	000108
 */
void Game::MoviePlayer::skip(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lfs       f0, 0x22F4(r2)
	  stw       r0, 0x44(r1)
	  li        r0, 0
	  lfs       f1, 0x22EC(r2)
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  li        r3, 0x6
	  lwz       r4, 0x1F0(r31)
	  ori       r4, r4, 0x2
	  stw       r4, 0x1F0(r31)
	  stw       r3, 0x18(r31)
	  stfs      f0, 0xA0(r31)
	  stb       r0, 0xA4(r31)
	  lwz       r3, -0x6C18(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x90(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xAC(r31)
	  li        r4, 0x1E
	  bl        0x382E4
	  lis       r4, 0x804A
	  lwz       r3, -0x6C18(r13)
	  subi      r5, r4, 0x5EE8
	  li        r6, 0
	  li        r4, 0x1
	  bl        -0x279810
	  lwz       r31, 0x1D0(r31)
	  lwz       r0, 0x14(r31)
	  stw       r0, 0x1C(r1)
	  stw       r0, 0x18(r1)
	  stw       r0, 0x2C(r1)
	  b         .loc_0xC8

	.loc_0x8C:
	  lwz       r3, 0x2C(r1)
	  lwzu      r4, -0xC(r3)
	  lbz       r0, 0x0(r4)
	  cmpwi     r0, 0x23
	  bne-      .loc_0xBC
	  cmplwi    r3, 0
	  beq-      .loc_0xBC
	  lwz       r12, 0x8(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0xBC:
	  lwz       r3, 0x2C(r1)
	  lwz       r0, 0x0(r3)
	  stw       r0, 0x2C(r1)

	.loc_0xC8:
	  lwz       r0, 0x2C(r1)
	  addi      r3, r31, 0x14
	  stw       r3, 0x14(r1)
	  cmplw     r0, r3
	  stw       r3, 0x10(r1)
	  stw       r3, 0x28(r1)
	  stw       r3, 0x24(r1)
	  stw       r0, 0x20(r1)
	  stw       r3, 0xC(r1)
	  stw       r0, 0x8(r1)
	  bne+      .loc_0x8C
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000404
 */
void Game::MoviePlayer::draw2d(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042E83C
 * Size:	000008
 */
void Game::MovieContext::getNext(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042E844
 * Size:	0000C4
 */
void Game::MoviePlayer::__dt(void)
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
	  beq-      .loc_0xA8
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x128
	  subi      r3, r3, 0x3FF4
	  li        r0, 0
	  stw       r3, 0x0(r30)
	  stw       r0, -0x64B0(r13)
	  beq-      .loc_0x54
	  lis       r4, 0x804F
	  addi      r3, r30, 0x128
	  subi      r0, r4, 0x4018
	  li        r4, 0
	  stw       r0, 0x128(r30)
	  bl        -0x1D30C

	.loc_0x54:
	  addic.    r0, r30, 0xCC
	  beq-      .loc_0x74
	  lis       r4, 0x804F
	  addi      r3, r30, 0xCC
	  subi      r0, r4, 0x4018
	  li        r4, 0
	  stw       r0, 0xCC(r30)
	  bl        -0x1D32C

	.loc_0x74:
	  addic.    r0, r30, 0x1C
	  beq-      .loc_0x8C
	  addic.    r3, r30, 0x78
	  beq-      .loc_0x8C
	  li        r4, 0
	  bl        -0x4080FC

	.loc_0x8C:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x4118A4
	  extsh.    r0, r31
	  ble-      .loc_0xA8
	  mr        r3, r30
	  bl        -0x40A834

	.loc_0xA8:
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
 * Address:	8042E908
 * Size:	000030
 */
void Delegate<Game::MoviePlayer>::invoke()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  addi      r12, r4, 0x8
	  lwz       r3, 0x4(r3)
	  bl        -0x36CDFC
	  nop
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042E938
 * Size:	000028
 */
void __sinit_moviePlayer_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804F
	  stw       r0, -0x64B8(r13)
	  stfsu     f0, -0x4050(r3)
	  stfs      f0, -0x64B4(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}



/*
 * --INFO--
 * Address:	801D0DB8
 * Size:	000058
 */
void Game::GameStat::clear()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8051
	  stw       r0, 0x14(r1)
	  addi      r3, r3, 0x22EC
	  bl        0x4D0
	  lis       r3, 0x8051
	  addi      r3, r3, 0x260C
	  bl        0x298
	  lis       r3, 0x8051
	  addi      r3, r3, 0x250C
	  bl        0x4B8
	  lis       r3, 0x8051
	  addi      r3, r3, 0x25EC
	  bl        0x280
	  lis       r3, 0x8051
	  addi      r3, r3, 0x262C
	  bl        0x274
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801D0E10
 * Size:	000050
 */
void Game::GameStat::getMapPikmins_exclude_Me(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r3, -0x1
	  stw       r0, 0x14(r1)
	  bne-      .loc_0x2C
	  lis       r3, 0x8051
	  lwzu      r12, 0x25EC(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x40

	.loc_0x2C:
	  lis       r4, 0x8051
	  rlwinm    r0,r3,2,0,29
	  addi      r3, r4, 0x25EC
	  add       r3, r3, r0
	  lwz       r3, 0x4(r3)

	.loc_0x40:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801D0E60
 * Size:	00008C
 */
void Game::GameStat::getMapPikmins(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r3, -0x1
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  bne-      .loc_0x50
	  lis       r3, 0x8051
	  lwzu      r12, 0x260C(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x8051
	  mr        r31, r3
	  addi      r3, r4, 0x25EC
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  add       r3, r3, r31
	  b         .loc_0x78

	.loc_0x50:
	  lis       r5, 0x8051
	  lis       r4, 0x8051
	  rlwinm    r6,r3,2,0,29
	  addi      r3, r5, 0x25EC
	  addi      r0, r4, 0x260C
	  add       r4, r3, r6
	  add       r3, r0, r6
	  lwz       r4, 0x4(r4)
	  lwz       r0, 0x4(r3)
	  add       r3, r4, r0

	.loc_0x78:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801D0EEC
 * Size:	000050
 */
void Game::GameStat::getZikatuPikmins(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r3, -0x1
	  stw       r0, 0x14(r1)
	  bne-      .loc_0x2C
	  lis       r3, 0x8051
	  lwzu      r12, 0x262C(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x40

	.loc_0x2C:
	  lis       r4, 0x8051
	  rlwinm    r0,r3,2,0,29
	  addi      r3, r4, 0x262C
	  add       r3, r3, r0
	  lwz       r3, 0x4(r3)

	.loc_0x40:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801D0F3C
 * Size:	0000F8
 */
void Game::GameStat::getAllPikmins(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  cmpwi     r30, -0x1
	  bne-      .loc_0x68
	  lis       r3, 0x8051
	  lwzu      r12, 0x260C(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x8051
	  mr        r31, r3
	  addi      r3, r4, 0x25EC
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, -0x6B70(r13)
	  add       r31, r3, r31
	  addi      r3, r4, 0xA8
	  bl        0x206EC
	  add       r3, r31, r3
	  b         .loc_0xE0

	.loc_0x68:
	  bne-      .loc_0xA4
	  lis       r3, 0x8051
	  lwzu      r12, 0x260C(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x8051
	  mr        r31, r3
	  addi      r3, r4, 0x25EC
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  add       r31, r3, r31
	  b         .loc_0xCC

	.loc_0xA4:
	  lis       r4, 0x8051
	  lis       r3, 0x8051
	  rlwinm    r5,r30,2,0,29
	  addi      r4, r4, 0x25EC
	  addi      r0, r3, 0x260C
	  add       r4, r4, r5
	  add       r3, r0, r5
	  lwz       r4, 0x4(r4)
	  lwz       r0, 0x4(r3)
	  add       r31, r4, r0

	.loc_0xCC:
	  lwz       r3, -0x6B70(r13)
	  mr        r4, r30
	  addi      r3, r3, 0xA8
	  bl        0x2059C
	  add       r3, r31, r3

	.loc_0xE0:
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
 * Address:	801D1034
 * Size:	00003C
 */
void Game::GameStat::PikiCounter::PikiCounter()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x14(r1)
	  addi      r0, r4, 0x7960
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r0, 0x0(r3)
	  bl        .loc_0x3C
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x3C:
	*/
}

/*
 * --INFO--
 * Address:	801D1070
 * Size:	000024
 */
void Game::GameStat::PikiCounter::clear()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x4(r3)
	  stw       r0, 0x8(r3)
	  stw       r0, 0xC(r3)
	  stw       r0, 0x10(r3)
	  stw       r0, 0x14(r3)
	  stw       r0, 0x18(r3)
	  stw       r0, 0x1C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801D1094
 * Size:	000084
 */
void Game::GameStat::PikiCounter::inc(Game::Piki*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lbz       r31, 0x2B8(r4)
	  cmpwi     r31, 0
	  blt-      .loc_0x34
	  cmpwi     r31, 0x7
	  bge-      .loc_0x34
	  li        r0, 0x1

	.loc_0x34:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x58
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x500
	  li        r4, 0x93
	  addi      r5, r5, 0x510
	  crclr     6, 0x6
	  bl        -0x1A6AA8

	.loc_0x58:
	  rlwinm    r0,r31,2,0,29
	  add       r4, r30, r0
	  lwz       r3, 0x4(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x4(r4)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801D1118
 * Size:	000084
 */
void Game::GameStat::PikiCounter::dec(Game::Piki*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lbz       r31, 0x2B8(r4)
	  cmpwi     r31, 0
	  blt-      .loc_0x34
	  cmpwi     r31, 0x7
	  bge-      .loc_0x34
	  li        r0, 0x1

	.loc_0x34:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x58
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x500
	  li        r4, 0x9C
	  addi      r5, r5, 0x510
	  crclr     6, 0x6
	  bl        -0x1A6B2C

	.loc_0x58:
	  rlwinm    r0,r31,2,0,29
	  add       r4, r30, r0
	  lwz       r3, 0x4(r4)
	  subi      r0, r3, 0x1
	  stw       r0, 0x4(r4)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801D119C
 * Size:	000080
 */
void Game::GameStat::PikiCounter::inc(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  blt-      .loc_0x30
	  cmpwi     r31, 0x7
	  bge-      .loc_0x30
	  li        r0, 0x1

	.loc_0x30:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x54
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x500
	  li        r4, 0xA4
	  addi      r5, r5, 0x510
	  crclr     6, 0x6
	  bl        -0x1A6BAC

	.loc_0x54:
	  rlwinm    r0,r31,2,0,29
	  add       r4, r30, r0
	  lwz       r3, 0x4(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x4(r4)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801D121C
 * Size:	000080
 */
void Game::GameStat::PikiCounter::dec(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  blt-      .loc_0x30
	  cmpwi     r31, 0x7
	  bge-      .loc_0x30
	  li        r0, 0x1

	.loc_0x30:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x54
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x500
	  li        r4, 0xAA
	  addi      r5, r5, 0x510
	  crclr     6, 0x6
	  bl        -0x1A6C2C

	.loc_0x54:
	  rlwinm    r0,r31,2,0,29
	  add       r4, r30, r0
	  lwz       r3, 0x4(r4)
	  subi      r0, r3, 0x1
	  stw       r0, 0x4(r4)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801D129C
 * Size:	0000CC
 */
void Game::GameStat::PikiNaviCounter::clear()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x4(r3)
	  stw       r0, 0x8(r3)
	  stw       r0, 0xC(r3)
	  stw       r0, 0x10(r3)
	  stw       r0, 0x14(r3)
	  stw       r0, 0x18(r3)
	  stw       r0, 0x1C(r3)
	  stw       r0, 0x24(r3)
	  stw       r0, 0x28(r3)
	  stw       r0, 0x2C(r3)
	  stw       r0, 0x30(r3)
	  stw       r0, 0x34(r3)
	  stw       r0, 0x38(r3)
	  stw       r0, 0x3C(r3)
	  stw       r0, 0x44(r3)
	  stw       r0, 0x48(r3)
	  stw       r0, 0x4C(r3)
	  stw       r0, 0x50(r3)
	  stw       r0, 0x54(r3)
	  stw       r0, 0x58(r3)
	  stw       r0, 0x5C(r3)
	  stw       r0, 0x64(r3)
	  stw       r0, 0x68(r3)
	  stw       r0, 0x6C(r3)
	  stw       r0, 0x70(r3)
	  stw       r0, 0x74(r3)
	  stw       r0, 0x78(r3)
	  stw       r0, 0x7C(r3)
	  stw       r0, 0x84(r3)
	  stw       r0, 0x88(r3)
	  stw       r0, 0x8C(r3)
	  stw       r0, 0x90(r3)
	  stw       r0, 0x94(r3)
	  stw       r0, 0x98(r3)
	  stw       r0, 0x9C(r3)
	  stw       r0, 0xA4(r3)
	  stw       r0, 0xA8(r3)
	  stw       r0, 0xAC(r3)
	  stw       r0, 0xB0(r3)
	  stw       r0, 0xB4(r3)
	  stw       r0, 0xB8(r3)
	  stw       r0, 0xBC(r3)
	  stw       r0, 0xC4(r3)
	  stw       r0, 0xC8(r3)
	  stw       r0, 0xCC(r3)
	  stw       r0, 0xD0(r3)
	  stw       r0, 0xD4(r3)
	  stw       r0, 0xD8(r3)
	  stw       r0, 0xDC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801D1368
 * Size:	0000AC
 */
void Game::GameStat::PikiNaviCounter::inc(Game::Piki*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r5, 0x2C4(r4)
	  cmplwi    r5, 0
	  beq-      .loc_0x30
	  lhz       r31, 0x2DC(r5)
	  b         .loc_0x34

	.loc_0x30:
	  li        r31, 0x2

	.loc_0x34:
	  lbz       r30, 0x2B8(r4)
	  li        r0, 0
	  cmpwi     r30, 0
	  blt-      .loc_0x50
	  cmpwi     r30, 0x7
	  bge-      .loc_0x50
	  li        r0, 0x1

	.loc_0x50:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x74
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x500
	  li        r4, 0x93
	  addi      r5, r5, 0x510
	  crclr     6, 0x6
	  bl        -0x1A6D98

	.loc_0x74:
	  rlwinm    r3,r31,5,0,26
	  rlwinm    r0,r30,2,0,29
	  add       r3, r29, r3
	  add       r4, r3, r0
	  lwz       r3, 0x4(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x4(r4)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801D1414
 * Size:	0000AC
 */
void Game::GameStat::PikiNaviCounter::dec(Game::Piki*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r5, 0x2C4(r4)
	  cmplwi    r5, 0
	  beq-      .loc_0x30
	  lhz       r31, 0x2DC(r5)
	  b         .loc_0x34

	.loc_0x30:
	  li        r31, 0x2

	.loc_0x34:
	  lbz       r30, 0x2B8(r4)
	  li        r0, 0
	  cmpwi     r30, 0
	  blt-      .loc_0x50
	  cmpwi     r30, 0x7
	  bge-      .loc_0x50
	  li        r0, 0x1

	.loc_0x50:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x74
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x500
	  li        r4, 0x9C
	  addi      r5, r5, 0x510
	  crclr     6, 0x6
	  bl        -0x1A6E44

	.loc_0x74:
	  rlwinm    r3,r31,5,0,26
	  rlwinm    r0,r30,2,0,29
	  add       r3, r29, r3
	  add       r4, r3, r0
	  lwz       r3, 0x4(r4)
	  subi      r0, r3, 0x1
	  stw       r0, 0x4(r4)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801D14C0
 * Size:	000278
 */
void __sinit_gameStat_cpp(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8051
	  lis       r4, 0x801D
	  stw       r0, 0x14(r1)
	  addi      r3, r3, 0x22EC
	  li        r5, 0
	  addi      r4, r4, 0x1034
	  li        r6, 0x20
	  li        r7, 0x7
	  bl        -0x10FCAC
	  lis       r4, 0x8051
	  lis       r3, 0x8051
	  addi      r8, r4, 0x22EC
	  li        r0, 0
	  stw       r0, 0x4(r8)
	  lis       r4, 0x801D
	  addi      r3, r3, 0x250C
	  li        r5, 0
	  stw       r0, 0x8(r8)
	  addi      r4, r4, 0x1034
	  li        r6, 0x20
	  li        r7, 0x7
	  stw       r0, 0xC(r8)
	  stw       r0, 0x10(r8)
	  stw       r0, 0x14(r8)
	  stw       r0, 0x18(r8)
	  stw       r0, 0x1C(r8)
	  stw       r0, 0x24(r8)
	  stw       r0, 0x28(r8)
	  stw       r0, 0x2C(r8)
	  stw       r0, 0x30(r8)
	  stw       r0, 0x34(r8)
	  stw       r0, 0x38(r8)
	  stw       r0, 0x3C(r8)
	  stw       r0, 0x44(r8)
	  stw       r0, 0x48(r8)
	  stw       r0, 0x4C(r8)
	  stw       r0, 0x50(r8)
	  stw       r0, 0x54(r8)
	  stw       r0, 0x58(r8)
	  stw       r0, 0x5C(r8)
	  stw       r0, 0x64(r8)
	  stw       r0, 0x68(r8)
	  stw       r0, 0x6C(r8)
	  stw       r0, 0x70(r8)
	  stw       r0, 0x74(r8)
	  stw       r0, 0x78(r8)
	  stw       r0, 0x7C(r8)
	  stw       r0, 0x84(r8)
	  stw       r0, 0x88(r8)
	  stw       r0, 0x8C(r8)
	  stw       r0, 0x90(r8)
	  stw       r0, 0x94(r8)
	  stw       r0, 0x98(r8)
	  stw       r0, 0x9C(r8)
	  stw       r0, 0xA4(r8)
	  stw       r0, 0xA8(r8)
	  stw       r0, 0xAC(r8)
	  stw       r0, 0xB0(r8)
	  stw       r0, 0xB4(r8)
	  stw       r0, 0xB8(r8)
	  stw       r0, 0xBC(r8)
	  stw       r0, 0xC4(r8)
	  stw       r0, 0xC8(r8)
	  stw       r0, 0xCC(r8)
	  stw       r0, 0xD0(r8)
	  stw       r0, 0xD4(r8)
	  stw       r0, 0xD8(r8)
	  stw       r0, 0xDC(r8)
	  bl        -0x10FD9C
	  lis       r3, 0x8051
	  lis       r6, 0x804B
	  addi      r7, r3, 0x250C
	  li        r8, 0
	  stw       r8, 0x4(r7)
	  lis       r3, 0x8051
	  addi      r5, r3, 0x25EC
	  addi      r0, r6, 0x7960
	  stw       r8, 0x8(r7)
	  lis       r3, 0x8051
	  addi      r4, r3, 0x260C
	  stw       r8, 0xC(r7)
	  lis       r3, 0x8051
	  stw       r8, 0x10(r7)
	  stw       r8, 0x14(r7)
	  stw       r8, 0x18(r7)
	  stw       r8, 0x1C(r7)
	  stw       r8, 0x24(r7)
	  stw       r8, 0x28(r7)
	  stw       r8, 0x2C(r7)
	  stw       r8, 0x30(r7)
	  stw       r8, 0x34(r7)
	  stw       r8, 0x38(r7)
	  stw       r8, 0x3C(r7)
	  stw       r8, 0x44(r7)
	  stw       r8, 0x48(r7)
	  stw       r8, 0x4C(r7)
	  stw       r8, 0x50(r7)
	  stw       r8, 0x54(r7)
	  stw       r8, 0x58(r7)
	  stw       r8, 0x5C(r7)
	  stw       r8, 0x64(r7)
	  stw       r8, 0x68(r7)
	  stw       r8, 0x6C(r7)
	  stw       r8, 0x70(r7)
	  stw       r8, 0x74(r7)
	  stw       r8, 0x78(r7)
	  stw       r8, 0x7C(r7)
	  stw       r8, 0x84(r7)
	  stw       r8, 0x88(r7)
	  stw       r8, 0x8C(r7)
	  stw       r8, 0x90(r7)
	  stw       r8, 0x94(r7)
	  stw       r8, 0x98(r7)
	  stw       r8, 0x9C(r7)
	  stw       r8, 0xA4(r7)
	  stw       r8, 0xA8(r7)
	  stw       r8, 0xAC(r7)
	  stw       r8, 0xB0(r7)
	  stw       r8, 0xB4(r7)
	  stw       r8, 0xB8(r7)
	  stw       r8, 0xBC(r7)
	  stw       r8, 0xC4(r7)
	  stw       r8, 0xC8(r7)
	  stw       r8, 0xCC(r7)
	  stw       r8, 0xD0(r7)
	  stw       r8, 0xD4(r7)
	  stwu      r0, 0x262C(r3)
	  stw       r8, 0xD8(r7)
	  stw       r8, 0xDC(r7)
	  stw       r0, 0x0(r5)
	  stw       r8, 0x4(r5)
	  stw       r8, 0x8(r5)
	  stw       r8, 0xC(r5)
	  stw       r8, 0x10(r5)
	  stw       r8, 0x14(r5)
	  stw       r8, 0x18(r5)
	  stw       r8, 0x1C(r5)
	  stw       r0, 0x0(r4)
	  stw       r8, 0x4(r4)
	  stw       r8, 0x8(r4)
	  stw       r8, 0xC(r4)
	  stw       r8, 0x10(r4)
	  stw       r8, 0x14(r4)
	  stw       r8, 0x18(r4)
	  stw       r8, 0x1C(r4)
	  stw       r8, 0x4(r3)
	  stw       r8, 0x8(r3)
	  stw       r8, 0xC(r3)
	  stw       r8, 0x10(r3)
	  stw       r8, 0x14(r3)
	  stw       r8, 0x18(r3)
	  stw       r8, 0x1C(r3)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

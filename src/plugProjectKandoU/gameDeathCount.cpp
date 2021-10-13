

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
 * Address:	........
 * Size:	000030
 */
void Game::BirthCounter::__ct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void Game::BirthCounter::reset(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void Game::BirthCounter::operator()((int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void Game::BirthCounter::read((Stream&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void Game::BirthCounter::write((Stream&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void Game::BirthMgr::__ct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8022F9FC
 * Size:	000068
 */
void Game::BirthMgr::clear(void)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  lis       r5, 0x8051
	  stwu      r0, 0x264C(r5)
	  lis       r4, 0x8051
	  lis       r3, 0x8051
	  stwu      r0, 0x270C(r4)
	  stwu      r0, 0x2728(r3)
	  stw       r0, 0x4(r5)
	  stw       r0, 0x8(r5)
	  stw       r0, 0xC(r5)
	  stw       r0, 0x10(r5)
	  stw       r0, 0x14(r5)
	  stw       r0, 0x18(r5)
	  stw       r0, 0x4(r4)
	  stw       r0, 0x8(r4)
	  stw       r0, 0xC(r4)
	  stw       r0, 0x10(r4)
	  stw       r0, 0x14(r4)
	  stw       r0, 0x18(r4)
	  stw       r0, 0x4(r3)
	  stw       r0, 0x8(r3)
	  stw       r0, 0xC(r3)
	  stw       r0, 0x10(r3)
	  stw       r0, 0x14(r3)
	  stw       r0, 0x18(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022FA64
 * Size:	000048
 */
void Game::BirthMgr::inc((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r3, 0
	  stw       r0, 0x14(r1)
	  blt-      .loc_0x38
	  cmpwi     r3, 0x4
	  bgt-      .loc_0x38
	  lwz       r4, -0x6C18(r13)
	  lbz       r0, 0x48(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x34
	  bl        0x134
	  b         .loc_0x38

	.loc_0x34:
	  bl        0x5C

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022FAAC
 * Size:	000048
 */
void Game::BirthMgr::dec((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r3, 0
	  stw       r0, 0x14(r1)
	  blt-      .loc_0x38
	  cmpwi     r3, 0x4
	  bgt-      .loc_0x38
	  lwz       r4, -0x6C18(r13)
	  lbz       r0, 0x48(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x34
	  bl        0x28C
	  b         .loc_0x38

	.loc_0x34:
	  bl        0x1B4

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022FAF4
 * Size:	0000D0
 */
void Game::BirthMgr::inc_today((int))
{
	/*
	.loc_0x0:
	  cmpwi     r3, 0x5
	  bne-      .loc_0x58
	  lis       r4, 0x8051
	  li        r0, 0
	  addi      r5, r4, 0x264C
	  stw       r0, 0x18(r5)
	  addi      r6, r5, 0x18
	  lwz       r4, 0x0(r5)
	  lwz       r0, 0x4(r5)
	  stw       r4, 0x18(r5)
	  add       r4, r4, r0
	  lwz       r0, 0x8(r5)
	  stw       r4, 0x18(r5)
	  add       r4, r4, r0
	  lwz       r0, 0xC(r5)
	  stw       r4, 0x18(r5)
	  add       r4, r4, r0
	  lwz       r0, 0x10(r5)
	  stw       r4, 0x18(r5)
	  add       r0, r4, r0
	  stw       r0, 0x18(r5)
	  b         .loc_0x68

	.loc_0x58:
	  lis       r4, 0x8051
	  rlwinm    r5,r3,2,0,29
	  addi      r0, r4, 0x264C
	  add       r6, r0, r5

	.loc_0x68:
	  lwz       r4, 0x0(r6)
	  cmpwi     r3, 0x5
	  addi      r0, r4, 0x1
	  stw       r0, 0x0(r6)
	  beqlr-
	  lis       r3, 0x8051
	  li        r0, 0
	  addi      r4, r3, 0x264C
	  stw       r0, 0x18(r4)
	  lwz       r3, 0x0(r4)
	  lwz       r0, 0x4(r4)
	  stw       r3, 0x18(r4)
	  add       r3, r3, r0
	  lwz       r0, 0x8(r4)
	  stw       r3, 0x18(r4)
	  add       r3, r3, r0
	  lwz       r0, 0xC(r4)
	  stw       r3, 0x18(r4)
	  add       r3, r3, r0
	  lwz       r0, 0x10(r4)
	  stw       r3, 0x18(r4)
	  add       r3, r3, r0
	  stw       r3, 0x18(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x18(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022FBC4
 * Size:	0000D0
 */
void Game::BirthMgr::inc_cave((int))
{
	/*
	.loc_0x0:
	  cmpwi     r3, 0x5
	  bne-      .loc_0x58
	  lis       r4, 0x8051
	  li        r0, 0
	  addi      r5, r4, 0x270C
	  stw       r0, 0x18(r5)
	  addi      r6, r5, 0x18
	  lwz       r4, 0x0(r5)
	  lwz       r0, 0x4(r5)
	  stw       r4, 0x18(r5)
	  add       r4, r4, r0
	  lwz       r0, 0x8(r5)
	  stw       r4, 0x18(r5)
	  add       r4, r4, r0
	  lwz       r0, 0xC(r5)
	  stw       r4, 0x18(r5)
	  add       r4, r4, r0
	  lwz       r0, 0x10(r5)
	  stw       r4, 0x18(r5)
	  add       r0, r4, r0
	  stw       r0, 0x18(r5)
	  b         .loc_0x68

	.loc_0x58:
	  lis       r4, 0x8051
	  rlwinm    r5,r3,2,0,29
	  addi      r0, r4, 0x270C
	  add       r6, r0, r5

	.loc_0x68:
	  lwz       r4, 0x0(r6)
	  cmpwi     r3, 0x5
	  addi      r0, r4, 0x1
	  stw       r0, 0x0(r6)
	  beqlr-
	  lis       r3, 0x8051
	  li        r0, 0
	  addi      r4, r3, 0x270C
	  stw       r0, 0x18(r4)
	  lwz       r3, 0x0(r4)
	  lwz       r0, 0x4(r4)
	  stw       r3, 0x18(r4)
	  add       r3, r3, r0
	  lwz       r0, 0x8(r4)
	  stw       r3, 0x18(r4)
	  add       r3, r3, r0
	  lwz       r0, 0xC(r4)
	  stw       r3, 0x18(r4)
	  add       r3, r3, r0
	  lwz       r0, 0x10(r4)
	  stw       r3, 0x18(r4)
	  add       r3, r3, r0
	  stw       r3, 0x18(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x18(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022FC94
 * Size:	0000D0
 */
void Game::BirthMgr::dec_today((int))
{
	/*
	.loc_0x0:
	  cmpwi     r3, 0x5
	  bne-      .loc_0x58
	  lis       r4, 0x8051
	  li        r0, 0
	  addi      r5, r4, 0x264C
	  stw       r0, 0x18(r5)
	  addi      r6, r5, 0x18
	  lwz       r4, 0x0(r5)
	  lwz       r0, 0x4(r5)
	  stw       r4, 0x18(r5)
	  add       r4, r4, r0
	  lwz       r0, 0x8(r5)
	  stw       r4, 0x18(r5)
	  add       r4, r4, r0
	  lwz       r0, 0xC(r5)
	  stw       r4, 0x18(r5)
	  add       r4, r4, r0
	  lwz       r0, 0x10(r5)
	  stw       r4, 0x18(r5)
	  add       r0, r4, r0
	  stw       r0, 0x18(r5)
	  b         .loc_0x68

	.loc_0x58:
	  lis       r4, 0x8051
	  rlwinm    r5,r3,2,0,29
	  addi      r0, r4, 0x264C
	  add       r6, r0, r5

	.loc_0x68:
	  lwz       r4, 0x0(r6)
	  cmpwi     r3, 0x5
	  subi      r0, r4, 0x1
	  stw       r0, 0x0(r6)
	  beqlr-
	  lis       r3, 0x8051
	  li        r0, 0
	  addi      r4, r3, 0x264C
	  stw       r0, 0x18(r4)
	  lwz       r3, 0x0(r4)
	  lwz       r0, 0x4(r4)
	  stw       r3, 0x18(r4)
	  add       r3, r3, r0
	  lwz       r0, 0x8(r4)
	  stw       r3, 0x18(r4)
	  add       r3, r3, r0
	  lwz       r0, 0xC(r4)
	  stw       r3, 0x18(r4)
	  add       r3, r3, r0
	  lwz       r0, 0x10(r4)
	  stw       r3, 0x18(r4)
	  add       r3, r3, r0
	  stw       r3, 0x18(r4)
	  subi      r0, r3, 0x1
	  stw       r0, 0x18(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022FD64
 * Size:	0000D0
 */
void Game::BirthMgr::dec_cave((int))
{
	/*
	.loc_0x0:
	  cmpwi     r3, 0x5
	  bne-      .loc_0x58
	  lis       r4, 0x8051
	  li        r0, 0
	  addi      r5, r4, 0x270C
	  stw       r0, 0x18(r5)
	  addi      r6, r5, 0x18
	  lwz       r4, 0x0(r5)
	  lwz       r0, 0x4(r5)
	  stw       r4, 0x18(r5)
	  add       r4, r4, r0
	  lwz       r0, 0x8(r5)
	  stw       r4, 0x18(r5)
	  add       r4, r4, r0
	  lwz       r0, 0xC(r5)
	  stw       r4, 0x18(r5)
	  add       r4, r4, r0
	  lwz       r0, 0x10(r5)
	  stw       r4, 0x18(r5)
	  add       r0, r4, r0
	  stw       r0, 0x18(r5)
	  b         .loc_0x68

	.loc_0x58:
	  lis       r4, 0x8051
	  rlwinm    r5,r3,2,0,29
	  addi      r0, r4, 0x270C
	  add       r6, r0, r5

	.loc_0x68:
	  lwz       r4, 0x0(r6)
	  cmpwi     r3, 0x5
	  subi      r0, r4, 0x1
	  stw       r0, 0x0(r6)
	  beqlr-
	  lis       r3, 0x8051
	  li        r0, 0
	  addi      r4, r3, 0x270C
	  stw       r0, 0x18(r4)
	  lwz       r3, 0x0(r4)
	  lwz       r0, 0x4(r4)
	  stw       r3, 0x18(r4)
	  add       r3, r3, r0
	  lwz       r0, 0x8(r4)
	  stw       r3, 0x18(r4)
	  add       r3, r3, r0
	  lwz       r0, 0xC(r4)
	  stw       r3, 0x18(r4)
	  add       r3, r3, r0
	  lwz       r0, 0x10(r4)
	  stw       r3, 0x18(r4)
	  add       r3, r3, r0
	  stw       r3, 0x18(r4)
	  subi      r0, r3, 0x1
	  stw       r0, 0x18(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022FE34
 * Size:	000140
 */
void Game::BirthMgr::account_cave(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  lis       r3, 0x8051
	  addi      r3, r3, 0x270C
	  lis       r4, 0x8051
	  addi      r4, r4, 0x264C
	  li        r0, 0x6
	  stw       r31, 0xC(r1)
	  li        r10, 0
	  addi      r9, r3, 0x18
	  mr        r7, r3
	  mr        r6, r4
	  addi      r8, r4, 0x18
	  mtctr     r0

	.loc_0x34:
	  cmpwi     r10, 0x5
	  bne-      .loc_0x8C
	  li        r0, 0
	  lis       r5, 0x8051
	  addi      r12, r5, 0x264C
	  stw       r0, 0x0(r8)
	  lwz       r11, 0x0(r4)
	  mr        r5, r8
	  lwz       r0, 0x4(r12)
	  stw       r11, 0x0(r8)
	  add       r11, r11, r0
	  lwz       r0, 0x8(r12)
	  stw       r11, 0x0(r8)
	  add       r11, r11, r0
	  lwz       r0, 0xC(r12)
	  stw       r11, 0x0(r8)
	  add       r11, r11, r0
	  lwz       r0, 0x10(r12)
	  stw       r11, 0x0(r8)
	  add       r0, r11, r0
	  stw       r0, 0x0(r8)
	  b         .loc_0x90

	.loc_0x8C:
	  mr        r5, r6

	.loc_0x90:
	  cmpwi     r10, 0x5
	  bne-      .loc_0xE8
	  li        r0, 0
	  lis       r11, 0x8051
	  addi      r12, r11, 0x270C
	  stw       r0, 0x0(r9)
	  lwz       r11, 0x0(r3)
	  mr        r31, r9
	  lwz       r0, 0x4(r12)
	  stw       r11, 0x0(r9)
	  add       r11, r11, r0
	  lwz       r0, 0x8(r12)
	  stw       r11, 0x0(r9)
	  add       r11, r11, r0
	  lwz       r0, 0xC(r12)
	  stw       r11, 0x0(r9)
	  add       r11, r11, r0
	  lwz       r0, 0x10(r12)
	  stw       r11, 0x0(r9)
	  add       r0, r11, r0
	  stw       r0, 0x0(r9)
	  b         .loc_0xEC

	.loc_0xE8:
	  mr        r31, r7

	.loc_0xEC:
	  lwz       r11, 0x0(r5)
	  addi      r6, r6, 0x4
	  lwz       r0, 0x0(r31)
	  addi      r7, r7, 0x4
	  addi      r10, r10, 0x1
	  add       r0, r11, r0
	  stw       r0, 0x0(r5)
	  bdnz+     .loc_0x34
	  lis       r4, 0x8051
	  li        r0, 0
	  addi      r4, r4, 0x270C
	  stw       r0, 0x0(r3)
	  stw       r0, 0x4(r4)
	  stw       r0, 0x8(r4)
	  stw       r0, 0xC(r4)
	  stw       r0, 0x10(r4)
	  stw       r0, 0x14(r4)
	  stw       r0, 0x0(r9)
	  lwz       r31, 0xC(r1)
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022FF74
 * Size:	0002B4
 */
void Game::BirthMgr::account_today_adjust(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  lis       r4, 0x8051
	  addi      r8, r4, 0x264C
	  lis       r3, 0x8051
	  addi      r3, r3, 0x2728
	  li        r0, 0x5
	  stw       r31, 0xC(r1)
	  li        r10, 0
	  addi      r9, r8, 0x18
	  mr        r5, r8
	  mr        r6, r3
	  addi      r7, r3, 0x18
	  mtctr     r0

	.loc_0x34:
	  cmpwi     r10, 0x5
	  bne-      .loc_0x8C
	  li        r0, 0
	  lis       r4, 0x8051
	  addi      r11, r4, 0x264C
	  stw       r0, 0x0(r9)
	  lwz       r4, 0x0(r8)
	  mr        r12, r9
	  lwz       r0, 0x4(r11)
	  stw       r4, 0x0(r9)
	  add       r4, r4, r0
	  lwz       r0, 0x8(r11)
	  stw       r4, 0x0(r9)
	  add       r4, r4, r0
	  lwz       r0, 0xC(r11)
	  stw       r4, 0x0(r9)
	  add       r4, r4, r0
	  lwz       r0, 0x10(r11)
	  stw       r4, 0x0(r9)
	  add       r0, r4, r0
	  stw       r0, 0x0(r9)
	  b         .loc_0x90

	.loc_0x8C:
	  mr        r12, r5

	.loc_0x90:
	  lwz       r0, 0x0(r12)
	  cmpwi     r0, 0
	  bge-      .loc_0x1C8
	  cmpwi     r10, 0x5
	  bne-      .loc_0xF4
	  li        r0, 0
	  lis       r4, 0x8051
	  addi      r12, r4, 0x2728
	  stw       r0, 0x0(r7)
	  lwz       r11, 0x0(r3)
	  mr        r4, r7
	  lwz       r0, 0x4(r12)
	  stw       r11, 0x0(r7)
	  add       r11, r11, r0
	  lwz       r0, 0x8(r12)
	  stw       r11, 0x0(r7)
	  add       r11, r11, r0
	  lwz       r0, 0xC(r12)
	  stw       r11, 0x0(r7)
	  add       r11, r11, r0
	  lwz       r0, 0x10(r12)
	  stw       r11, 0x0(r7)
	  add       r0, r11, r0
	  stw       r0, 0x0(r7)
	  b         .loc_0xF8

	.loc_0xF4:
	  mr        r4, r6

	.loc_0xF8:
	  cmpwi     r10, 0x5
	  bne-      .loc_0x150
	  li        r0, 0
	  lis       r11, 0x8051
	  addi      r12, r11, 0x264C
	  stw       r0, 0x0(r9)
	  lwz       r11, 0x0(r8)
	  mr        r31, r9
	  lwz       r0, 0x4(r12)
	  stw       r11, 0x0(r9)
	  add       r11, r11, r0
	  lwz       r0, 0x8(r12)
	  stw       r11, 0x0(r9)
	  add       r11, r11, r0
	  lwz       r0, 0xC(r12)
	  stw       r11, 0x0(r9)
	  add       r11, r11, r0
	  lwz       r0, 0x10(r12)
	  stw       r11, 0x0(r9)
	  add       r0, r11, r0
	  stw       r0, 0x0(r9)
	  b         .loc_0x154

	.loc_0x150:
	  mr        r31, r5

	.loc_0x154:
	  lwz       r11, 0x0(r4)
	  cmpwi     r10, 0x5
	  lwz       r0, 0x0(r31)
	  add       r0, r11, r0
	  stw       r0, 0x0(r4)
	  bne-      .loc_0x1BC
	  li        r0, 0
	  lis       r4, 0x8051
	  addi      r11, r4, 0x264C
	  stw       r0, 0x0(r9)
	  lwz       r4, 0x0(r8)
	  mr        r12, r9
	  lwz       r0, 0x4(r11)
	  stw       r4, 0x0(r9)
	  add       r4, r4, r0
	  lwz       r0, 0x8(r11)
	  stw       r4, 0x0(r9)
	  add       r4, r4, r0
	  lwz       r0, 0xC(r11)
	  stw       r4, 0x0(r9)
	  add       r4, r4, r0
	  lwz       r0, 0x10(r11)
	  stw       r4, 0x0(r9)
	  add       r0, r4, r0
	  stw       r0, 0x0(r9)
	  b         .loc_0x1C0

	.loc_0x1BC:
	  mr        r12, r5

	.loc_0x1C0:
	  li        r0, 0
	  stw       r0, 0x0(r12)

	.loc_0x1C8:
	  addi      r5, r5, 0x4
	  addi      r6, r6, 0x4
	  addi      r10, r10, 0x1
	  bdnz+     .loc_0x34
	  li        r3, 0x5
	  mr        r7, r8
	  li        r0, 0
	  li        r10, 0
	  mtctr     r3

	.loc_0x1EC:
	  cmpwi     r10, 0x5
	  bne-      .loc_0x244
	  li        r4, 0
	  lis       r3, 0x8051
	  addi      r5, r3, 0x264C
	  stw       r4, 0x0(r9)
	  lwz       r4, 0x0(r8)
	  mr        r6, r9
	  lwz       r3, 0x4(r5)
	  stw       r4, 0x0(r9)
	  add       r4, r4, r3
	  lwz       r3, 0x8(r5)
	  stw       r4, 0x0(r9)
	  add       r4, r4, r3
	  lwz       r3, 0xC(r5)
	  stw       r4, 0x0(r9)
	  add       r4, r4, r3
	  lwz       r3, 0x10(r5)
	  stw       r4, 0x0(r9)
	  add       r3, r4, r3
	  stw       r3, 0x0(r9)
	  b         .loc_0x248

	.loc_0x244:
	  mr        r6, r7

	.loc_0x248:
	  lwz       r3, 0x0(r6)
	  addi      r7, r7, 0x4
	  addi      r10, r10, 0x1
	  add       r0, r0, r3
	  bdnz+     .loc_0x1EC
	  li        r4, 0
	  lis       r3, 0x8051
	  addi      r5, r3, 0x264C
	  stw       r4, 0x0(r9)
	  lwz       r4, 0x0(r8)
	  lwz       r3, 0x4(r5)
	  stw       r4, 0x0(r9)
	  add       r4, r4, r3
	  lwz       r3, 0x8(r5)
	  stw       r4, 0x0(r9)
	  add       r4, r4, r3
	  lwz       r3, 0xC(r5)
	  stw       r4, 0x0(r9)
	  add       r4, r4, r3
	  lwz       r3, 0x10(r5)
	  stw       r4, 0x0(r9)
	  add       r3, r4, r3
	  stw       r3, 0x0(r9)
	  stw       r0, 0x0(r9)
	  lwz       r31, 0xC(r1)
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80230228
 * Size:	000204
 */
void Game::BirthMgr::account_today(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  lis       r4, 0x8051
	  addi      r7, r4, 0x2728
	  lis       r3, 0x8051
	  addi      r3, r3, 0x264C
	  li        r0, 0x6
	  stw       r31, 0xC(r1)
	  li        r10, 0
	  addi      r8, r7, 0x18
	  addi      r9, r3, 0x18
	  mr        r5, r7
	  mr        r6, r3
	  mtctr     r0

	.loc_0x34:
	  cmpwi     r10, 0x5
	  bne-      .loc_0x8C
	  li        r0, 0
	  lis       r4, 0x8051
	  addi      r12, r4, 0x2728
	  stw       r0, 0x0(r8)
	  lwz       r11, 0x0(r7)
	  mr        r4, r8
	  lwz       r0, 0x4(r12)
	  stw       r11, 0x0(r8)
	  add       r11, r11, r0
	  lwz       r0, 0x8(r12)
	  stw       r11, 0x0(r8)
	  add       r11, r11, r0
	  lwz       r0, 0xC(r12)
	  stw       r11, 0x0(r8)
	  add       r11, r11, r0
	  lwz       r0, 0x10(r12)
	  stw       r11, 0x0(r8)
	  add       r0, r11, r0
	  stw       r0, 0x0(r8)
	  b         .loc_0x90

	.loc_0x8C:
	  mr        r4, r5

	.loc_0x90:
	  cmpwi     r10, 0x5
	  bne-      .loc_0xE8
	  li        r0, 0
	  lis       r11, 0x8051
	  addi      r12, r11, 0x264C
	  stw       r0, 0x0(r9)
	  lwz       r11, 0x0(r3)
	  mr        r31, r9
	  lwz       r0, 0x4(r12)
	  stw       r11, 0x0(r9)
	  add       r11, r11, r0
	  lwz       r0, 0x8(r12)
	  stw       r11, 0x0(r9)
	  add       r11, r11, r0
	  lwz       r0, 0xC(r12)
	  stw       r11, 0x0(r9)
	  add       r11, r11, r0
	  lwz       r0, 0x10(r12)
	  stw       r11, 0x0(r9)
	  add       r0, r11, r0
	  stw       r0, 0x0(r9)
	  b         .loc_0xEC

	.loc_0xE8:
	  mr        r31, r6

	.loc_0xEC:
	  lwz       r11, 0x0(r4)
	  addi      r5, r5, 0x4
	  lwz       r0, 0x0(r31)
	  addi      r6, r6, 0x4
	  addi      r10, r10, 0x1
	  add       r0, r11, r0
	  stw       r0, 0x0(r4)
	  bdnz+     .loc_0x34
	  li        r4, 0x5
	  mr        r11, r7
	  li        r0, 0
	  li        r12, 0
	  mtctr     r4

	.loc_0x120:
	  cmpwi     r12, 0x5
	  bne-      .loc_0x178
	  li        r5, 0
	  lis       r4, 0x8051
	  addi      r6, r4, 0x2728
	  stw       r5, 0x0(r8)
	  lwz       r5, 0x0(r7)
	  mr        r10, r8
	  lwz       r4, 0x4(r6)
	  stw       r5, 0x0(r8)
	  add       r5, r5, r4
	  lwz       r4, 0x8(r6)
	  stw       r5, 0x0(r8)
	  add       r5, r5, r4
	  lwz       r4, 0xC(r6)
	  stw       r5, 0x0(r8)
	  add       r5, r5, r4
	  lwz       r4, 0x10(r6)
	  stw       r5, 0x0(r8)
	  add       r4, r5, r4
	  stw       r4, 0x0(r8)
	  b         .loc_0x17C

	.loc_0x178:
	  mr        r10, r11

	.loc_0x17C:
	  lwz       r4, 0x0(r10)
	  addi      r11, r11, 0x4
	  addi      r12, r12, 0x1
	  add       r0, r0, r4
	  bdnz+     .loc_0x120
	  li        r10, 0
	  lis       r4, 0x8051
	  addi      r8, r4, 0x264C
	  lwz       r6, 0x0(r3)
	  lwz       r5, 0x4(r8)
	  stw       r10, 0x0(r9)
	  lwz       r4, 0x8(r8)
	  add       r7, r6, r5
	  stw       r6, 0x0(r9)
	  lwz       r5, 0xC(r8)
	  add       r6, r7, r4
	  stw       r7, 0x0(r9)
	  lwz       r4, 0x10(r8)
	  add       r5, r6, r5
	  stw       r6, 0x0(r9)
	  add       r4, r5, r4
	  stw       r5, 0x0(r9)
	  stw       r4, 0x0(r9)
	  stw       r0, 0x0(r9)
	  stw       r10, 0x0(r3)
	  stw       r10, 0x4(r8)
	  stw       r10, 0x8(r8)
	  stw       r10, 0xC(r8)
	  stw       r10, 0x10(r8)
	  stw       r10, 0x14(r8)
	  stw       r10, 0x0(r9)
	  lwz       r31, 0xC(r1)
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void Game::BirthMgr::get_cave((int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void Game::BirthMgr::get_today((int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8023042C
 * Size:	000070
 */
void Game::BirthMgr::get_total((int))
{
	/*
	.loc_0x0:
	  cmpwi     r3, 0x5
	  bne-      .loc_0x58
	  lis       r3, 0x8051
	  li        r0, 0
	  addi      r4, r3, 0x2728
	  stw       r0, 0x18(r4)
	  addi      r5, r4, 0x18
	  lwz       r3, 0x0(r4)
	  lwz       r0, 0x4(r4)
	  stw       r3, 0x18(r4)
	  add       r3, r3, r0
	  lwz       r0, 0x8(r4)
	  stw       r3, 0x18(r4)
	  add       r3, r3, r0
	  lwz       r0, 0xC(r4)
	  stw       r3, 0x18(r4)
	  add       r3, r3, r0
	  lwz       r0, 0x10(r4)
	  stw       r3, 0x18(r4)
	  add       r0, r3, r0
	  stw       r0, 0x18(r4)
	  b         .loc_0x68

	.loc_0x58:
	  lis       r4, 0x8051
	  rlwinm    r3,r3,2,0,29
	  addi      r0, r4, 0x2728
	  add       r5, r0, r3

	.loc_0x68:
	  lwz       r3, 0x0(r5)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8023049C
 * Size:	0000B0
 */
void Game::BirthMgr::read((Stream&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x8051
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  addi      r30, r4, 0x270C
	  stw       r29, 0x14(r1)
	  mr        r29, r3

	.loc_0x28:
	  mr        r3, r29
	  bl        0x1E45C8
	  addi      r31, r31, 0x1
	  stw       r3, 0x0(r30)
	  cmpwi     r31, 0x6
	  addi      r30, r30, 0x4
	  blt+      .loc_0x28
	  lis       r3, 0x8051
	  li        r31, 0
	  addi      r30, r3, 0x264C

	.loc_0x50:
	  mr        r3, r29
	  bl        0x1E45A0
	  addi      r31, r31, 0x1
	  stw       r3, 0x0(r30)
	  cmpwi     r31, 0x6
	  addi      r30, r30, 0x4
	  blt+      .loc_0x50
	  lis       r3, 0x8051
	  li        r31, 0
	  addi      r30, r3, 0x2728

	.loc_0x78:
	  mr        r3, r29
	  bl        0x1E4578
	  addi      r31, r31, 0x1
	  stw       r3, 0x0(r30)
	  cmpwi     r31, 0x6
	  addi      r30, r30, 0x4
	  blt+      .loc_0x78
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
 * Address:	8023054C
 * Size:	000148
 */
void Game::BirthMgr::write((Stream&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  stw       r0, 0x24(r1)
	  addi      r4, r4, 0x38F0
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  bl        0x1E3AAC
	  lis       r3, 0x8051
	  li        r30, 0
	  addi      r29, r3, 0x270C

	.loc_0x34:
	  lwz       r4, 0x414(r31)
	  mr        r3, r31
	  bl        0x1E3EAC
	  lwz       r4, 0x0(r29)
	  mr        r3, r31
	  bl        0x1E522C
	  mr        r3, r31
	  subi      r4, r2, 0x3FF8
	  crclr     6, 0x6
	  bl        0x1E3C38
	  addi      r30, r30, 0x1
	  addi      r29, r29, 0x4
	  cmpwi     r30, 0x6
	  blt+      .loc_0x34
	  mr        r3, r31
	  bl        0x1E3AE4
	  lis       r4, 0x8048
	  mr        r3, r31
	  addi      r4, r4, 0x38F0
	  bl        0x1E3A50
	  lis       r3, 0x8051
	  li        r30, 0
	  addi      r29, r3, 0x264C

	.loc_0x90:
	  lwz       r4, 0x414(r31)
	  mr        r3, r31
	  bl        0x1E3E50
	  lwz       r4, 0x0(r29)
	  mr        r3, r31
	  bl        0x1E51D0
	  mr        r3, r31
	  subi      r4, r2, 0x3FF8
	  crclr     6, 0x6
	  bl        0x1E3BDC
	  addi      r30, r30, 0x1
	  addi      r29, r29, 0x4
	  cmpwi     r30, 0x6
	  blt+      .loc_0x90
	  mr        r3, r31
	  bl        0x1E3A88
	  lis       r4, 0x8048
	  mr        r3, r31
	  addi      r4, r4, 0x38F0
	  bl        0x1E39F4
	  lis       r3, 0x8051
	  li        r30, 0
	  addi      r29, r3, 0x2728

	.loc_0xEC:
	  lwz       r4, 0x414(r31)
	  mr        r3, r31
	  bl        0x1E3DF4
	  lwz       r4, 0x0(r29)
	  mr        r3, r31
	  bl        0x1E5174
	  mr        r3, r31
	  subi      r4, r2, 0x3FF8
	  crclr     6, 0x6
	  bl        0x1E3B80
	  addi      r30, r30, 0x1
	  addi      r29, r29, 0x4
	  cmpwi     r30, 0x6
	  blt+      .loc_0xEC
	  mr        r3, r31
	  bl        0x1E3A2C
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
 * Size:	000030
 */
void Game::DeathCounter::__ct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void Game::DeathCounter::reset(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000100
 */
void Game::DeathCounter::operator()((int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void Game::DeathCounter::read((Stream&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void Game::DeathCounter::write((Stream&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void Game::DeathMgr::__ct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80230694
 * Size:	000084
 */
void Game::DeathMgr::clear(void)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  lis       r5, 0x8051
	  stwu      r0, 0x2744(r5)
	  lis       r4, 0x8051
	  lis       r3, 0x8051
	  stwu      r0, 0x2768(r4)
	  stwu      r0, 0x278C(r3)
	  stw       r0, 0x4(r5)
	  stw       r0, 0x8(r5)
	  stw       r0, 0xC(r5)
	  stw       r0, 0x10(r5)
	  stw       r0, 0x14(r5)
	  stw       r0, 0x18(r5)
	  stw       r0, 0x1C(r5)
	  stw       r0, 0x20(r5)
	  stw       r0, 0x4(r4)
	  stw       r0, 0x8(r4)
	  stw       r0, 0xC(r4)
	  stw       r0, 0x10(r4)
	  stw       r0, 0x14(r4)
	  stw       r0, 0x18(r4)
	  stw       r0, 0x1C(r4)
	  stw       r0, 0x20(r4)
	  stw       r0, 0x4(r3)
	  stw       r0, 0x8(r3)
	  stw       r0, 0xC(r3)
	  stw       r0, 0x10(r3)
	  stw       r0, 0x14(r3)
	  stw       r0, 0x18(r3)
	  stw       r0, 0x1C(r3)
	  stw       r0, 0x20(r3)
	  stw       r0, -0x69E8(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80230718
 * Size:	00005C
 */
void Game::DeathMgr::inc((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r4, -0x6C18(r13)
	  cmplwi    r4, 0
	  beq-      .loc_0x34
	  lbz       r0, 0x3C(r4)
	  rlwinm.   r0,r0,0,27,27
	  beq-      .loc_0x34
	  cmpwi     r3, 0x1
	  beq-      .loc_0x34
	  cmpwi     r3, 0x7
	  bne-      .loc_0x4C

	.loc_0x34:
	  lbz       r0, 0x48(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x48
	  bl        0x118
	  b         .loc_0x4C

	.loc_0x48:
	  bl        .loc_0x5C

	.loc_0x4C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x5C:
	*/
}

/*
 * --INFO--
 * Address:	80230774
 * Size:	0000FC
 */
void Game::DeathMgr::inc_today((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  cmpwi     r31, 0x7
	  bne-      .loc_0x84
	  lis       r3, 0x8051
	  li        r0, 0
	  addi      r4, r3, 0x2744
	  stw       r0, 0x20(r4)
	  addi      r5, r4, 0x20
	  lwz       r3, 0x0(r4)
	  lwz       r0, 0x4(r4)
	  stw       r3, 0x20(r4)
	  add       r3, r3, r0
	  lwz       r0, 0x8(r4)
	  stw       r3, 0x20(r4)
	  add       r3, r3, r0
	  lwz       r0, 0xC(r4)
	  stw       r3, 0x20(r4)
	  add       r3, r3, r0
	  lwz       r0, 0x10(r4)
	  stw       r3, 0x20(r4)
	  add       r3, r3, r0
	  lwz       r0, 0x14(r4)
	  stw       r3, 0x20(r4)
	  add       r3, r3, r0
	  lwz       r0, 0x18(r4)
	  stw       r3, 0x20(r4)
	  add       r0, r3, r0
	  stw       r0, 0x20(r4)
	  b         .loc_0xD0

	.loc_0x84:
	  cmpwi     r31, 0
	  li        r0, 0
	  blt-      .loc_0x9C
	  cmpwi     r31, 0x7
	  bgt-      .loc_0x9C
	  li        r0, 0x1

	.loc_0x9C:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0xC0
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x3900
	  li        r4, 0x152
	  addi      r5, r5, 0x3914
	  crclr     6, 0x6
	  bl        -0x2061F0

	.loc_0xC0:
	  lis       r3, 0x8051
	  rlwinm    r4,r31,2,0,29
	  addi      r0, r3, 0x2744
	  add       r5, r0, r4

	.loc_0xD0:
	  lwz       r4, 0x0(r5)
	  lwz       r3, -0x69E8(r13)
	  addi      r4, r4, 0x1
	  addi      r0, r3, 0x1
	  stw       r4, 0x0(r5)
	  stw       r0, -0x69E8(r13)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80230870
 * Size:	0000FC
 */
void Game::DeathMgr::inc_cave((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  cmpwi     r31, 0x7
	  bne-      .loc_0x84
	  lis       r3, 0x8051
	  li        r0, 0
	  addi      r4, r3, 0x2768
	  stw       r0, 0x20(r4)
	  addi      r5, r4, 0x20
	  lwz       r3, 0x0(r4)
	  lwz       r0, 0x4(r4)
	  stw       r3, 0x20(r4)
	  add       r3, r3, r0
	  lwz       r0, 0x8(r4)
	  stw       r3, 0x20(r4)
	  add       r3, r3, r0
	  lwz       r0, 0xC(r4)
	  stw       r3, 0x20(r4)
	  add       r3, r3, r0
	  lwz       r0, 0x10(r4)
	  stw       r3, 0x20(r4)
	  add       r3, r3, r0
	  lwz       r0, 0x14(r4)
	  stw       r3, 0x20(r4)
	  add       r3, r3, r0
	  lwz       r0, 0x18(r4)
	  stw       r3, 0x20(r4)
	  add       r0, r3, r0
	  stw       r0, 0x20(r4)
	  b         .loc_0xD0

	.loc_0x84:
	  cmpwi     r31, 0
	  li        r0, 0
	  blt-      .loc_0x9C
	  cmpwi     r31, 0x7
	  bgt-      .loc_0x9C
	  li        r0, 0x1

	.loc_0x9C:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0xC0
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x3900
	  li        r4, 0x152
	  addi      r5, r5, 0x3914
	  crclr     6, 0x6
	  bl        -0x2062EC

	.loc_0xC0:
	  lis       r3, 0x8051
	  rlwinm    r4,r31,2,0,29
	  addi      r0, r3, 0x2768
	  add       r5, r0, r4

	.loc_0xD0:
	  lwz       r4, 0x0(r5)
	  lwz       r3, -0x69E8(r13)
	  addi      r4, r4, 0x1
	  addi      r0, r3, 0x1
	  stw       r4, 0x0(r5)
	  stw       r0, -0x69E8(r13)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8023096C
 * Size:	0001FC
 */
void Game::DeathMgr::account_cave(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r3, 0x8051
	  lis       r4, 0x8051
	  stw       r0, 0x34(r1)
	  stmw      r24, 0x10(r1)
	  addi      r31, r3, 0x2768
	  addi      r30, r4, 0x2744
	  li        r24, 0
	  addi      r25, r31, 0x20
	  mr        r27, r31
	  mr        r28, r30
	  addi      r26, r30, 0x20

	.loc_0x34:
	  cmpwi     r24, 0x7
	  bne-      .loc_0xA4
	  li        r0, 0
	  lis       r3, 0x8051
	  addi      r4, r3, 0x2744
	  stw       r0, 0x0(r26)
	  lwz       r3, 0x0(r30)
	  mr        r29, r26
	  lwz       r0, 0x4(r4)
	  stw       r3, 0x0(r26)
	  add       r3, r3, r0
	  lwz       r0, 0x8(r4)
	  stw       r3, 0x0(r26)
	  add       r3, r3, r0
	  lwz       r0, 0xC(r4)
	  stw       r3, 0x0(r26)
	  add       r3, r3, r0
	  lwz       r0, 0x10(r4)
	  stw       r3, 0x0(r26)
	  add       r3, r3, r0
	  lwz       r0, 0x14(r4)
	  stw       r3, 0x0(r26)
	  add       r3, r3, r0
	  lwz       r0, 0x18(r4)
	  stw       r3, 0x0(r26)
	  add       r0, r3, r0
	  stw       r0, 0x0(r26)
	  b         .loc_0xE4

	.loc_0xA4:
	  cmpwi     r24, 0
	  li        r0, 0
	  blt-      .loc_0xBC
	  cmpwi     r24, 0x7
	  bgt-      .loc_0xBC
	  li        r0, 0x1

	.loc_0xBC:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0xE0
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x3900
	  li        r4, 0x152
	  addi      r5, r5, 0x3914
	  crclr     6, 0x6
	  bl        -0x206408

	.loc_0xE0:
	  mr        r29, r28

	.loc_0xE4:
	  cmpwi     r24, 0x7
	  bne-      .loc_0x154
	  li        r0, 0
	  lis       r3, 0x8051
	  addi      r4, r3, 0x2768
	  stw       r0, 0x0(r25)
	  lwz       r3, 0x0(r31)
	  mr        r5, r25
	  lwz       r0, 0x4(r4)
	  stw       r3, 0x0(r25)
	  add       r3, r3, r0
	  lwz       r0, 0x8(r4)
	  stw       r3, 0x0(r25)
	  add       r3, r3, r0
	  lwz       r0, 0xC(r4)
	  stw       r3, 0x0(r25)
	  add       r3, r3, r0
	  lwz       r0, 0x10(r4)
	  stw       r3, 0x0(r25)
	  add       r3, r3, r0
	  lwz       r0, 0x14(r4)
	  stw       r3, 0x0(r25)
	  add       r3, r3, r0
	  lwz       r0, 0x18(r4)
	  stw       r3, 0x0(r25)
	  add       r0, r3, r0
	  stw       r0, 0x0(r25)
	  b         .loc_0x194

	.loc_0x154:
	  cmpwi     r24, 0
	  li        r0, 0
	  blt-      .loc_0x16C
	  cmpwi     r24, 0x7
	  bgt-      .loc_0x16C
	  li        r0, 0x1

	.loc_0x16C:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x190
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x3900
	  li        r4, 0x152
	  addi      r5, r5, 0x3914
	  crclr     6, 0x6
	  bl        -0x2064B8

	.loc_0x190:
	  mr        r5, r27

	.loc_0x194:
	  lwz       r3, 0x0(r29)
	  addi      r24, r24, 0x1
	  lwz       r0, 0x0(r5)
	  cmpwi     r24, 0x8
	  addi      r28, r28, 0x4
	  addi      r27, r27, 0x4
	  add       r0, r3, r0
	  stw       r0, 0x0(r29)
	  blt+      .loc_0x34
	  lis       r3, 0x8051
	  li        r0, 0
	  addi      r3, r3, 0x2768
	  stw       r0, 0x0(r31)
	  stw       r0, 0x4(r3)
	  stw       r0, 0x8(r3)
	  stw       r0, 0xC(r3)
	  stw       r0, 0x10(r3)
	  stw       r0, 0x14(r3)
	  stw       r0, 0x18(r3)
	  stw       r0, 0x1C(r3)
	  stw       r0, 0x0(r25)
	  lmw       r24, 0x10(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80230B68
 * Size:	0001FC
 */
void Game::DeathMgr::account_today(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r3, 0x8051
	  lis       r4, 0x8051
	  stw       r0, 0x34(r1)
	  stmw      r24, 0x10(r1)
	  addi      r31, r3, 0x2744
	  addi      r30, r4, 0x278C
	  li        r24, 0
	  addi      r25, r31, 0x20
	  mr        r27, r31
	  mr        r28, r30
	  addi      r26, r30, 0x20

	.loc_0x34:
	  cmpwi     r24, 0x7
	  bne-      .loc_0xA4
	  li        r0, 0
	  lis       r3, 0x8051
	  addi      r4, r3, 0x278C
	  stw       r0, 0x0(r26)
	  lwz       r3, 0x0(r30)
	  mr        r29, r26
	  lwz       r0, 0x4(r4)
	  stw       r3, 0x0(r26)
	  add       r3, r3, r0
	  lwz       r0, 0x8(r4)
	  stw       r3, 0x0(r26)
	  add       r3, r3, r0
	  lwz       r0, 0xC(r4)
	  stw       r3, 0x0(r26)
	  add       r3, r3, r0
	  lwz       r0, 0x10(r4)
	  stw       r3, 0x0(r26)
	  add       r3, r3, r0
	  lwz       r0, 0x14(r4)
	  stw       r3, 0x0(r26)
	  add       r3, r3, r0
	  lwz       r0, 0x18(r4)
	  stw       r3, 0x0(r26)
	  add       r0, r3, r0
	  stw       r0, 0x0(r26)
	  b         .loc_0xE4

	.loc_0xA4:
	  cmpwi     r24, 0
	  li        r0, 0
	  blt-      .loc_0xBC
	  cmpwi     r24, 0x7
	  bgt-      .loc_0xBC
	  li        r0, 0x1

	.loc_0xBC:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0xE0
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x3900
	  li        r4, 0x152
	  addi      r5, r5, 0x3914
	  crclr     6, 0x6
	  bl        -0x206604

	.loc_0xE0:
	  mr        r29, r28

	.loc_0xE4:
	  cmpwi     r24, 0x7
	  bne-      .loc_0x154
	  li        r0, 0
	  lis       r3, 0x8051
	  addi      r4, r3, 0x2744
	  stw       r0, 0x0(r25)
	  lwz       r3, 0x0(r31)
	  mr        r5, r25
	  lwz       r0, 0x4(r4)
	  stw       r3, 0x0(r25)
	  add       r3, r3, r0
	  lwz       r0, 0x8(r4)
	  stw       r3, 0x0(r25)
	  add       r3, r3, r0
	  lwz       r0, 0xC(r4)
	  stw       r3, 0x0(r25)
	  add       r3, r3, r0
	  lwz       r0, 0x10(r4)
	  stw       r3, 0x0(r25)
	  add       r3, r3, r0
	  lwz       r0, 0x14(r4)
	  stw       r3, 0x0(r25)
	  add       r3, r3, r0
	  lwz       r0, 0x18(r4)
	  stw       r3, 0x0(r25)
	  add       r0, r3, r0
	  stw       r0, 0x0(r25)
	  b         .loc_0x194

	.loc_0x154:
	  cmpwi     r24, 0
	  li        r0, 0
	  blt-      .loc_0x16C
	  cmpwi     r24, 0x7
	  bgt-      .loc_0x16C
	  li        r0, 0x1

	.loc_0x16C:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x190
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x3900
	  li        r4, 0x152
	  addi      r5, r5, 0x3914
	  crclr     6, 0x6
	  bl        -0x2066B4

	.loc_0x190:
	  mr        r5, r27

	.loc_0x194:
	  lwz       r3, 0x0(r29)
	  addi      r24, r24, 0x1
	  lwz       r0, 0x0(r5)
	  cmpwi     r24, 0x8
	  addi      r28, r28, 0x4
	  addi      r27, r27, 0x4
	  add       r0, r3, r0
	  stw       r0, 0x0(r29)
	  blt+      .loc_0x34
	  lis       r3, 0x8051
	  li        r0, 0
	  addi      r3, r3, 0x2744
	  stw       r0, 0x0(r31)
	  stw       r0, 0x4(r3)
	  stw       r0, 0x8(r3)
	  stw       r0, 0xC(r3)
	  stw       r0, 0x10(r3)
	  stw       r0, 0x14(r3)
	  stw       r0, 0x18(r3)
	  stw       r0, 0x1C(r3)
	  stw       r0, 0x0(r25)
	  lmw       r24, 0x10(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80230D64
 * Size:	0000E8
 */
void Game::DeathMgr::get_cave((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  cmpwi     r31, 0x7
	  bne-      .loc_0x84
	  lis       r3, 0x8051
	  li        r0, 0
	  addi      r4, r3, 0x2768
	  stw       r0, 0x20(r4)
	  addi      r5, r4, 0x20
	  lwz       r3, 0x0(r4)
	  lwz       r0, 0x4(r4)
	  stw       r3, 0x20(r4)
	  add       r3, r3, r0
	  lwz       r0, 0x8(r4)
	  stw       r3, 0x20(r4)
	  add       r3, r3, r0
	  lwz       r0, 0xC(r4)
	  stw       r3, 0x20(r4)
	  add       r3, r3, r0
	  lwz       r0, 0x10(r4)
	  stw       r3, 0x20(r4)
	  add       r3, r3, r0
	  lwz       r0, 0x14(r4)
	  stw       r3, 0x20(r4)
	  add       r3, r3, r0
	  lwz       r0, 0x18(r4)
	  stw       r3, 0x20(r4)
	  add       r0, r3, r0
	  stw       r0, 0x20(r4)
	  b         .loc_0xD0

	.loc_0x84:
	  cmpwi     r31, 0
	  li        r0, 0
	  blt-      .loc_0x9C
	  cmpwi     r31, 0x7
	  bgt-      .loc_0x9C
	  li        r0, 0x1

	.loc_0x9C:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0xC0
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x3900
	  li        r4, 0x152
	  addi      r5, r5, 0x3914
	  crclr     6, 0x6
	  bl        -0x2067E0

	.loc_0xC0:
	  lis       r3, 0x8051
	  rlwinm    r4,r31,2,0,29
	  addi      r0, r3, 0x2768
	  add       r5, r0, r4

	.loc_0xD0:
	  lwz       r0, 0x14(r1)
	  lwz       r3, 0x0(r5)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80230E4C
 * Size:	0000E8
 */
void Game::DeathMgr::get_today((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  cmpwi     r31, 0x7
	  bne-      .loc_0x84
	  lis       r3, 0x8051
	  li        r0, 0
	  addi      r4, r3, 0x2744
	  stw       r0, 0x20(r4)
	  addi      r5, r4, 0x20
	  lwz       r3, 0x0(r4)
	  lwz       r0, 0x4(r4)
	  stw       r3, 0x20(r4)
	  add       r3, r3, r0
	  lwz       r0, 0x8(r4)
	  stw       r3, 0x20(r4)
	  add       r3, r3, r0
	  lwz       r0, 0xC(r4)
	  stw       r3, 0x20(r4)
	  add       r3, r3, r0
	  lwz       r0, 0x10(r4)
	  stw       r3, 0x20(r4)
	  add       r3, r3, r0
	  lwz       r0, 0x14(r4)
	  stw       r3, 0x20(r4)
	  add       r3, r3, r0
	  lwz       r0, 0x18(r4)
	  stw       r3, 0x20(r4)
	  add       r0, r3, r0
	  stw       r0, 0x20(r4)
	  b         .loc_0xD0

	.loc_0x84:
	  cmpwi     r31, 0
	  li        r0, 0
	  blt-      .loc_0x9C
	  cmpwi     r31, 0x7
	  bgt-      .loc_0x9C
	  li        r0, 0x1

	.loc_0x9C:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0xC0
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x3900
	  li        r4, 0x152
	  addi      r5, r5, 0x3914
	  crclr     6, 0x6
	  bl        -0x2068C8

	.loc_0xC0:
	  lis       r3, 0x8051
	  rlwinm    r4,r31,2,0,29
	  addi      r0, r3, 0x2744
	  add       r5, r0, r4

	.loc_0xD0:
	  lwz       r0, 0x14(r1)
	  lwz       r3, 0x0(r5)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80230F34
 * Size:	0000E8
 */
void Game::DeathMgr::get_total((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  cmpwi     r31, 0x7
	  bne-      .loc_0x84
	  lis       r3, 0x8051
	  li        r0, 0
	  addi      r4, r3, 0x278C
	  stw       r0, 0x20(r4)
	  addi      r5, r4, 0x20
	  lwz       r3, 0x0(r4)
	  lwz       r0, 0x4(r4)
	  stw       r3, 0x20(r4)
	  add       r3, r3, r0
	  lwz       r0, 0x8(r4)
	  stw       r3, 0x20(r4)
	  add       r3, r3, r0
	  lwz       r0, 0xC(r4)
	  stw       r3, 0x20(r4)
	  add       r3, r3, r0
	  lwz       r0, 0x10(r4)
	  stw       r3, 0x20(r4)
	  add       r3, r3, r0
	  lwz       r0, 0x14(r4)
	  stw       r3, 0x20(r4)
	  add       r3, r3, r0
	  lwz       r0, 0x18(r4)
	  stw       r3, 0x20(r4)
	  add       r0, r3, r0
	  stw       r0, 0x20(r4)
	  b         .loc_0xD0

	.loc_0x84:
	  cmpwi     r31, 0
	  li        r0, 0
	  blt-      .loc_0x9C
	  cmpwi     r31, 0x7
	  bgt-      .loc_0x9C
	  li        r0, 0x1

	.loc_0x9C:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0xC0
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x3900
	  li        r4, 0x152
	  addi      r5, r5, 0x3914
	  crclr     6, 0x6
	  bl        -0x2069B0

	.loc_0xC0:
	  lis       r3, 0x8051
	  rlwinm    r4,r31,2,0,29
	  addi      r0, r3, 0x278C
	  add       r5, r0, r4

	.loc_0xD0:
	  lwz       r0, 0x14(r1)
	  lwz       r3, 0x0(r5)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8023101C
 * Size:	0000B0
 */
void Game::DeathMgr::read((Stream&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x8051
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  addi      r30, r4, 0x2768
	  stw       r29, 0x14(r1)
	  mr        r29, r3

	.loc_0x28:
	  mr        r3, r29
	  bl        0x1E3A48
	  addi      r31, r31, 0x1
	  stw       r3, 0x0(r30)
	  cmpwi     r31, 0x8
	  addi      r30, r30, 0x4
	  blt+      .loc_0x28
	  lis       r3, 0x8051
	  li        r31, 0
	  addi      r30, r3, 0x2744

	.loc_0x50:
	  mr        r3, r29
	  bl        0x1E3A20
	  addi      r31, r31, 0x1
	  stw       r3, 0x0(r30)
	  cmpwi     r31, 0x8
	  addi      r30, r30, 0x4
	  blt+      .loc_0x50
	  lis       r3, 0x8051
	  li        r31, 0
	  addi      r30, r3, 0x278C

	.loc_0x78:
	  mr        r3, r29
	  bl        0x1E39F8
	  addi      r31, r31, 0x1
	  stw       r3, 0x0(r30)
	  cmpwi     r31, 0x8
	  addi      r30, r30, 0x4
	  blt+      .loc_0x78
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
 * Address:	802310CC
 * Size:	000148
 */
void Game::DeathMgr::write((Stream&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  stw       r0, 0x24(r1)
	  addi      r4, r4, 0x3920
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  bl        0x1E2F2C
	  lis       r3, 0x8051
	  li        r30, 0
	  addi      r29, r3, 0x2768

	.loc_0x34:
	  lwz       r4, 0x414(r31)
	  mr        r3, r31
	  bl        0x1E332C
	  lwz       r4, 0x0(r29)
	  mr        r3, r31
	  bl        0x1E46AC
	  mr        r3, r31
	  subi      r4, r2, 0x3FF8
	  crclr     6, 0x6
	  bl        0x1E30B8
	  addi      r30, r30, 0x1
	  addi      r29, r29, 0x4
	  cmpwi     r30, 0x8
	  blt+      .loc_0x34
	  mr        r3, r31
	  bl        0x1E2F64
	  lis       r4, 0x8048
	  mr        r3, r31
	  addi      r4, r4, 0x3920
	  bl        0x1E2ED0
	  lis       r3, 0x8051
	  li        r30, 0
	  addi      r29, r3, 0x2744

	.loc_0x90:
	  lwz       r4, 0x414(r31)
	  mr        r3, r31
	  bl        0x1E32D0
	  lwz       r4, 0x0(r29)
	  mr        r3, r31
	  bl        0x1E4650
	  mr        r3, r31
	  subi      r4, r2, 0x3FF8
	  crclr     6, 0x6
	  bl        0x1E305C
	  addi      r30, r30, 0x1
	  addi      r29, r29, 0x4
	  cmpwi     r30, 0x8
	  blt+      .loc_0x90
	  mr        r3, r31
	  bl        0x1E2F08
	  lis       r4, 0x8048
	  mr        r3, r31
	  addi      r4, r4, 0x3920
	  bl        0x1E2E74
	  lis       r3, 0x8051
	  li        r30, 0
	  addi      r29, r3, 0x278C

	.loc_0xEC:
	  lwz       r4, 0x414(r31)
	  mr        r3, r31
	  bl        0x1E3274
	  lwz       r4, 0x0(r29)
	  mr        r3, r31
	  bl        0x1E45F4
	  mr        r3, r31
	  subi      r4, r2, 0x3FF8
	  crclr     6, 0x6
	  bl        0x1E3000
	  addi      r30, r30, 0x1
	  addi      r29, r29, 0x4
	  cmpwi     r30, 0x8
	  blt+      .loc_0xEC
	  mr        r3, r31
	  bl        0x1E2EAC
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
 * Address:	80231214
 * Size:	0000E0
 */
void __sinit_gameDeathCount_cpp(void)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  lis       r8, 0x8051
	  stwu      r0, 0x264C(r8)
	  lis       r7, 0x8051
	  lis       r6, 0x8051
	  lis       r5, 0x8051
	  stwu      r0, 0x2744(r5)
	  lis       r4, 0x8051
	  lis       r3, 0x8051
	  stwu      r0, 0x2768(r4)
	  stwu      r0, 0x278C(r3)
	  stwu      r0, 0x270C(r7)
	  stwu      r0, 0x2728(r6)
	  stw       r0, 0x4(r8)
	  stw       r0, 0x8(r8)
	  stw       r0, 0xC(r8)
	  stw       r0, 0x10(r8)
	  stw       r0, 0x14(r8)
	  stw       r0, 0x18(r8)
	  stw       r0, 0x4(r7)
	  stw       r0, 0x8(r7)
	  stw       r0, 0xC(r7)
	  stw       r0, 0x10(r7)
	  stw       r0, 0x14(r7)
	  stw       r0, 0x18(r7)
	  stw       r0, 0x4(r6)
	  stw       r0, 0x8(r6)
	  stw       r0, 0xC(r6)
	  stw       r0, 0x10(r6)
	  stw       r0, 0x14(r6)
	  stw       r0, 0x18(r6)
	  stw       r0, 0x4(r5)
	  stw       r0, 0x8(r5)
	  stw       r0, 0xC(r5)
	  stw       r0, 0x10(r5)
	  stw       r0, 0x14(r5)
	  stw       r0, 0x18(r5)
	  stw       r0, 0x1C(r5)
	  stw       r0, 0x20(r5)
	  stw       r0, 0x4(r4)
	  stw       r0, 0x8(r4)
	  stw       r0, 0xC(r4)
	  stw       r0, 0x10(r4)
	  stw       r0, 0x14(r4)
	  stw       r0, 0x18(r4)
	  stw       r0, 0x1C(r4)
	  stw       r0, 0x20(r4)
	  stw       r0, 0x4(r3)
	  stw       r0, 0x8(r3)
	  stw       r0, 0xC(r3)
	  stw       r0, 0x10(r3)
	  stw       r0, 0x14(r3)
	  stw       r0, 0x18(r3)
	  stw       r0, 0x1C(r3)
	  stw       r0, 0x20(r3)
	  blr
	*/
}

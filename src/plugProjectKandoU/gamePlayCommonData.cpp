

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
 * Address:	8023410C
 * Size:	0000FC
 */
void Game::PlayCommonData::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  stb       r0, 0x0(r3)
	  addi      r3, r28, 0xC
	  bl        0xA8C
	  li        r3, 0x40
	  bl        -0x210194
	  stw       r3, 0x4(r28)
	  li        r3, 0x40
	  bl        -0x2101A0
	  stw       r3, 0x8(r28)
	  li        r29, 0
	  li        r30, 0

	.loc_0x50:
	  li        r3, 0xC
	  bl        -0x2102BC
	  mr.       r31, r3
	  beq-      .loc_0x70
	  bl        -0x480
	  lis       r3, 0x804C
	  addi      r0, r3, 0x1450
	  stw       r0, 0x0(r31)

	.loc_0x70:
	  lwz       r4, 0x4(r28)
	  li        r3, 0xC
	  stwx      r31, r4, r30
	  bl        -0x2102E4
	  mr.       r31, r3
	  beq-      .loc_0x98
	  bl        -0x4A8
	  lis       r3, 0x804C
	  addi      r0, r3, 0x1450
	  stw       r0, 0x0(r31)

	.loc_0x98:
	  lwz       r3, 0x8(r28)
	  li        r4, 0x3
	  stwx      r31, r3, r30
	  lwz       r3, 0x4(r28)
	  lwzx      r3, r3, r30
	  bl        -0x4B0
	  lwz       r3, 0x8(r28)
	  li        r4, 0x3
	  lwzx      r3, r3, r30
	  bl        -0x4C0
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x4
	  cmpwi     r29, 0x10
	  blt+      .loc_0x50
	  mr        r3, r28
	  bl        .loc_0xFC
	  lwz       r0, 0x24(r1)
	  mr        r3, r28
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0xFC:
	*/
}

/*
 * --INFO--
 * Address:	80234208
 * Size:	000078
 */
void Game::PlayCommonData::reset(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  stb       r0, 0x0(r3)
	  addi      r3, r29, 0xC
	  bl        .loc_0x78
	  li        r30, 0
	  li        r31, 0

	.loc_0x34:
	  lwz       r3, 0x4(r29)
	  lwzx      r3, r3, r31
	  bl        -0x168
	  lwz       r3, 0x8(r29)
	  lwzx      r3, r3, r31
	  bl        -0x174
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r30, 0x10
	  blt+      .loc_0x34
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x78:
	*/
}

/*
 * --INFO--
 * Address:	80234280
 * Size:	0000C0
 */
void Game::PlayChallengeGameData::reset(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  li        r30, 0
	  mr        r31, r3
	  li        r27, 0
	  mr        r28, r30
	  stb       r30, 0x8(r3)
	  b         .loc_0x50

	.loc_0x28:
	  lwz       r0, 0x4(r31)
	  add       r29, r0, r28
	  addi      r3, r29, 0x4
	  bl        -0x1D8
	  addi      r3, r29, 0x10
	  bl        -0x1E0
	  stb       r30, 0x0(r29)
	  addi      r28, r28, 0x1C
	  addi      r27, r27, 0x1
	  stb       r30, 0x1(r29)

	.loc_0x50:
	  lwz       r0, 0x0(r31)
	  cmpw      r27, r0
	  blt+      .loc_0x28
	  lwz       r3, 0x4(r31)
	  lhz       r0, 0x0(r3)
	  ori       r0, r0, 0x1
	  sth       r0, 0x0(r3)
	  lwz       r3, 0x4(r31)
	  lhz       r0, 0x1C(r3)
	  ori       r0, r0, 0x1
	  sth       r0, 0x1C(r3)
	  lwz       r3, 0x4(r31)
	  lhz       r0, 0x38(r3)
	  ori       r0, r0, 0x1
	  sth       r0, 0x38(r3)
	  lwz       r3, 0x4(r31)
	  lhz       r0, 0x54(r3)
	  ori       r0, r0, 0x1
	  sth       r0, 0x54(r3)
	  lwz       r3, 0x4(r31)
	  lhz       r0, 0x70(r3)
	  ori       r0, r0, 0x1
	  sth       r0, 0x70(r3)
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80234340
 * Size:	0000A0
 */
void Game::PlayCommonData::write((Stream&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  li        r4, 0x2
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  mr        r3, r29
	  bl        0x1E1454
	  mr        r3, r29
	  lbz       r4, 0x0(r28)
	  bl        0x1E12F8
	  li        r30, 0
	  li        r31, 0

	.loc_0x44:
	  lwz       r3, 0x4(r28)
	  mr        r4, r29
	  lwzx      r3, r3, r31
	  bl        -0x328
	  lwz       r3, 0x8(r28)
	  mr        r4, r29
	  lwzx      r3, r3, r31
	  bl        -0x338
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r30, 0x10
	  blt+      .loc_0x44
	  mr        r4, r29
	  addi      r3, r28, 0xC
	  bl        0x9EC
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
 * Address:	802343E0
 * Size:	0000EC
 */
void Game::PlayCommonData::read((Stream&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  mr        r3, r29
	  bl        0x1E0688
	  mr        r31, r3
	  mr        r3, r29
	  bl        0x1E0088
	  cmplwi    r31, 0x2
	  stb       r3, 0x0(r28)
	  blt-      .loc_0x80
	  li        r30, 0
	  li        r31, 0

	.loc_0x4C:
	  lwz       r3, 0x4(r28)
	  mr        r4, r29
	  lwzx      r3, r3, r31
	  bl        -0x488
	  lwz       r3, 0x8(r28)
	  mr        r4, r29
	  lwzx      r3, r3, r31
	  bl        -0x498
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r30, 0x10
	  blt+      .loc_0x4C
	  b         .loc_0xC0

	.loc_0x80:
	  cmplwi    r31, 0x1
	  bgt-      .loc_0xC0
	  li        r30, 0
	  li        r31, 0

	.loc_0x90:
	  lwz       r3, 0x4(r28)
	  mr        r4, r29
	  lwzx      r3, r3, r31
	  bl        -0x4CC
	  lwz       r3, 0x8(r28)
	  mr        r4, r29
	  lwzx      r3, r3, r31
	  bl        -0x4DC
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r30, 0xF
	  blt+      .loc_0x90

	.loc_0xC0:
	  mr        r4, r29
	  addi      r3, r28, 0xC
	  bl        0x99C
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
 * Address:	802344CC
 * Size:	000078
 */
void Game::PlayCommonData::getHighscore_clear((int))
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
	  cmpwi     r31, 0x10
	  bge-      .loc_0x30
	  li        r0, 0x1

	.loc_0x30:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x54
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x3A88
	  li        r4, 0x9B
	  addi      r5, r5, 0x3AA0
	  crclr     6, 0x6
	  bl        -0x209EDC

	.loc_0x54:
	  lwz       r3, 0x4(r30)
	  rlwinm    r0,r31,2,0,29
	  lwzx      r3, r3, r0
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
 * Address:	80234544
 * Size:	000078
 */
void Game::PlayCommonData::getHighscore_complete((int))
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
	  cmpwi     r31, 0x10
	  bge-      .loc_0x30
	  li        r0, 0x1

	.loc_0x30:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x54
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x3A88
	  li        r4, 0xA2
	  addi      r5, r5, 0x3AA0
	  crclr     6, 0x6
	  bl        -0x209F54

	.loc_0x54:
	  lwz       r3, 0x8(r30)
	  rlwinm    r0,r31,2,0,29
	  lwzx      r3, r3, r0
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
 * Address:	802345BC
 * Size:	000038
 */
void Game::PlayCommonData::entryHighscores_clear((int, int*, int*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r8, r4
	  mr        r7, r6
	  stw       r0, 0x14(r1)
	  mr        r0, r5
	  mr        r5, r8
	  lwz       r4, 0x4(r3)
	  mr        r6, r0
	  bl        0x4C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802345F4
 * Size:	000038
 */
void Game::PlayCommonData::entryHighscores_complete((int, int*, int*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r8, r4
	  mr        r7, r6
	  stw       r0, 0x14(r1)
	  mr        r0, r5
	  mr        r5, r8
	  lwz       r4, 0x8(r3)
	  mr        r6, r0
	  bl        .loc_0x38
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x38:
	*/
}

/*
 * --INFO--
 * Address:	8023462C
 * Size:	0000E0
 */
void Game::PlayCommonData::entryHighscores_common((Game::Highscore**, int, int*,
                                                   int*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r26, r4
	  mr        r27, r6
	  mr        r28, r7
	  lwz       r3, 0x0(r4)
	  mr        r4, r5
	  stw       r5, 0x0(r6)
	  bl        -0x880
	  stw       r3, 0x0(r28)
	  li        r30, 0

	.loc_0x34:
	  addi      r0, r30, 0x1
	  mr        r3, r30
	  rlwinm    r31,r0,2,0,29
	  lwzx      r29, r26, r31
	  bl        -0x373C
	  stwx      r3, r27, r31
	  mr        r3, r29
	  lwzx      r4, r27, r31
	  bl        -0x8AC
	  addi      r30, r30, 0x1
	  stwx      r3, r28, r31
	  cmpwi     r30, 0x8
	  blt+      .loc_0x34
	  li        r29, 0

	.loc_0x6C:
	  addi      r0, r29, 0x9
	  mr        r3, r29
	  rlwinm    r31,r0,2,0,29
	  lwzx      r30, r26, r31
	  bl        -0x427C
	  stwx      r3, r27, r31
	  mr        r3, r30
	  lwzx      r4, r27, r31
	  bl        -0x8E4
	  addi      r29, r29, 0x1
	  stwx      r3, r28, r31
	  cmpwi     r29, 0x6
	  blt+      .loc_0x6C
	  lwz       r3, -0x6514(r13)
	  lwz       r29, 0x3C(r26)
	  lwz       r31, 0x60(r3)
	  lwz       r3, -0x6B70(r13)
	  bl        -0x4D784
	  lwz       r0, 0x1C(r31)
	  add       r4, r3, r0
	  mr        r3, r29
	  stw       r4, 0x3C(r27)
	  bl        -0x91C
	  stw       r3, 0x3C(r28)
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8023470C
 * Size:	00000C
 */
void Game::PlayCommonData::isChallengeGamePlayable(void)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x14(r3)
	  rlwinm    r3,r0,0,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80234718
 * Size:	00000C
 */
void Game::PlayCommonData::isLouieRescued(void)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x14(r3)
	  rlwinm    r3,r0,30,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80234724
 * Size:	00008C
 */
void Game::PlayCommonData::isPerfectChallenge(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lbz       r0, 0x0(r3)
	  rlwinm.   r0,r0,0,29,29
	  beq-      .loc_0x2C
	  li        r3, 0x1
	  b         .loc_0x74

	.loc_0x2C:
	  li        r31, 0
	  b         .loc_0x58

	.loc_0x34:
	  mr        r4, r31
	  addi      r3, r30, 0xC
	  bl        0x5A4
	  lhz       r0, 0x0(r3)
	  rlwinm.   r0,r0,0,29,29
	  bne-      .loc_0x54
	  li        r3, 0
	  b         .loc_0x74

	.loc_0x54:
	  addi      r31, r31, 0x1

	.loc_0x58:
	  lwz       r0, 0xC(r30)
	  cmpw      r31, r0
	  blt+      .loc_0x34
	  lbz       r0, 0x0(r30)
	  li        r3, 0x1
	  ori       r0, r0, 0x4
	  stb       r0, 0x0(r30)

	.loc_0x74:
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
 * Address:	802347B0
 * Size:	000030
 */
void Game::PlayCommonData::enableChallengeGame(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x14(r3)
	  ori       r0, r0, 0x1
	  stb       r0, 0x14(r3)
	  lwz       r3, -0x6514(r13)
	  bl        0x1EE754
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802347E0
 * Size:	000030
 */
void Game::PlayCommonData::enableLouieRescue(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x14(r3)
	  ori       r0, r0, 0x4
	  stb       r0, 0x14(r3)
	  lwz       r3, -0x6514(r13)
	  bl        0x1EE724
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80234810
 * Size:	00001C
 */
void Game::PlayCommonData::challenge_is_virgin(void)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x14(r3)
	  rlwinm    r4,r0,0,30,30
	  ori       r0, r0, 0x2
	  cntlzw    r4, r4
	  stb       r0, 0x14(r3)
	  rlwinm    r3,r4,27,5,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8023482C
 * Size:	000014
 */
void Game::PlayCommonData::challenge_is_virgin_check_only(void)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x14(r3)
	  rlwinm    r0,r0,0,30,30
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80234840
 * Size:	000024
 */
void Game::PlayCommonData::challenge_get_CourseState((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r3, 0xC
	  stw       r0, 0x14(r1)
	  bl        0x4B4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void Game::PlayCommonData::challenge_get_coursenum(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80234864
 * Size:	00002C
 */
void Game::PlayCommonData::challenge_checkOpen((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r3, 0xC
	  stw       r0, 0x14(r1)
	  bl        0x490
	  lhz       r0, 0x0(r3)
	  rlwinm    r3,r0,0,31,31
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80234890
 * Size:	00002C
 */
void Game::PlayCommonData::challenge_checkClear((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r3, 0xC
	  stw       r0, 0x14(r1)
	  bl        0x464
	  lhz       r0, 0x0(r3)
	  rlwinm    r3,r0,31,31,31
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802348BC
 * Size:	00002C
 */
void Game::PlayCommonData::challenge_checkKunsho((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r3, 0xC
	  stw       r0, 0x14(r1)
	  bl        0x438
	  lhz       r0, 0x0(r3)
	  rlwinm    r3,r0,30,31,31
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802348E8
 * Size:	00004C
 */
void Game::PlayCommonData::challenge_checkJustOpen((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r3, 0xC
	  stw       r0, 0x14(r1)
	  bl        0x40C
	  lhz       r4, 0x0(r3)
	  rlwinm.   r0,r4,0,31,31
	  beq-      .loc_0x38
	  rlwinm    r0,r4,0,28,28
	  ori       r4, r4, 0x8
	  cntlzw    r0, r0
	  sth       r4, 0x0(r3)
	  rlwinm    r3,r0,27,5,31
	  b         .loc_0x3C

	.loc_0x38:
	  li        r3, 0

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80234934
 * Size:	00004C
 */
void Game::PlayCommonData::challenge_checkJustClear((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r3, 0xC
	  stw       r0, 0x14(r1)
	  bl        0x3C0
	  lhz       r4, 0x0(r3)
	  rlwinm.   r0,r4,0,30,30
	  beq-      .loc_0x38
	  rlwinm    r0,r4,0,27,27
	  ori       r4, r4, 0x10
	  cntlzw    r0, r0
	  sth       r4, 0x0(r3)
	  rlwinm    r3,r0,27,5,31
	  b         .loc_0x3C

	.loc_0x38:
	  li        r3, 0

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80234980
 * Size:	00004C
 */
void Game::PlayCommonData::challenge_checkJustKunsho((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r3, 0xC
	  stw       r0, 0x14(r1)
	  bl        0x374
	  lhz       r4, 0x0(r3)
	  rlwinm.   r0,r4,0,29,29
	  beq-      .loc_0x38
	  rlwinm    r0,r4,0,26,26
	  ori       r4, r4, 0x20
	  cntlzw    r0, r0
	  sth       r4, 0x0(r3)
	  rlwinm    r3,r0,27,5,31
	  b         .loc_0x3C

	.loc_0x38:
	  li        r3, 0

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802349CC
 * Size:	000094
 */
void Game::PlayCommonData::challenge_openNewCourse(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8051
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  addi      r3, r4, 0x41FC
	  lwz       r0, 0x228(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x34
	  li        r3, -0x1
	  b         .loc_0x7C

	.loc_0x34:
	  li        r31, 0
	  b         .loc_0x6C

	.loc_0x3C:
	  mr        r4, r31
	  addi      r3, r30, 0xC
	  bl        0x2F4
	  lhz       r0, 0x0(r3)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x68
	  mr        r3, r30
	  mr        r4, r31
	  bl        0x68
	  mr        r3, r31
	  b         .loc_0x7C

	.loc_0x68:
	  addi      r31, r31, 0x1

	.loc_0x6C:
	  lwz       r0, 0xC(r30)
	  cmpw      r31, r0
	  blt+      .loc_0x3C
	  li        r3, -0x1

	.loc_0x7C:
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
 * Address:	80234A60
 * Size:	000030
 */
void Game::PlayCommonData::challenge_setClear((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r3, 0xC
	  stw       r0, 0x14(r1)
	  bl        0x294
	  lhz       r0, 0x0(r3)
	  ori       r0, r0, 0x2
	  sth       r0, 0x0(r3)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80234A90
 * Size:	000030
 */
void Game::PlayCommonData::challenge_setOpen((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r3, 0xC
	  stw       r0, 0x14(r1)
	  bl        0x264
	  lhz       r0, 0x0(r3)
	  ori       r0, r0, 0x1
	  sth       r0, 0x0(r3)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80234AC0
 * Size:	000080
 */
void Game::PlayCommonData::challenge_setKunsho((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  addi      r3, r30, 0xC
	  bl        0x228
	  lhz       r0, 0x0(r3)
	  li        r31, 0
	  ori       r0, r0, 0x4
	  sth       r0, 0x0(r3)
	  b         .loc_0x50

	.loc_0x34:
	  mr        r4, r31
	  addi      r3, r30, 0xC
	  bl        0x208
	  lhz       r0, 0x0(r3)
	  rlwinm.   r0,r0,0,29,29
	  beq-      .loc_0x68
	  addi      r31, r31, 0x1

	.loc_0x50:
	  lwz       r0, 0xC(r30)
	  cmpw      r31, r0
	  blt+      .loc_0x34
	  lbz       r0, 0x0(r30)
	  ori       r0, r0, 0x4
	  stb       r0, 0x0(r30)

	.loc_0x68:
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
 * Address:	80234B40
 * Size:	000084
 */
void Game::PlayCommonData::challenge_getHighscore((int, int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r3, 0xC
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r5
	  bl        0x1A8
	  cmpwi     r30, 0
	  mr        r31, r3
	  li        r0, 0
	  blt-      .loc_0x3C
	  cmpwi     r30, 0x1
	  bgt-      .loc_0x3C
	  li        r0, 0x1

	.loc_0x3C:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x60
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x3A88
	  li        r4, 0x191
	  addi      r5, r5, 0x3AA0
	  crclr     6, 0x6
	  bl        -0x20A55C

	.loc_0x60:
	  mulli     r3, r30, 0xC
	  addi      r3, r3, 0x4
	  add       r3, r31, r3
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
 * Address:	80234BC4
 * Size:	0000C8
 */
void Game::PlayChallengeGameData::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  stb       r0, 0x8(r3)
	  li        r0, 0x1E
	  stw       r0, 0x0(r3)
	  lwz       r30, 0x0(r3)
	  mulli     r3, r30, 0x1C
	  addi      r3, r3, 0x10
	  bl        -0x210C4C
	  lis       r4, 0x8023
	  mr        r7, r30
	  addi      r4, r4, 0x4C8C
	  li        r5, 0
	  li        r6, 0x1C
	  bl        -0x173220
	  stw       r3, 0x4(r31)
	  li        r0, 0
	  mr        r3, r31
	  lwz       r5, 0x4(r31)
	  lhz       r4, 0x0(r5)
	  ori       r4, r4, 0x1
	  sth       r4, 0x0(r5)
	  lwz       r5, 0x4(r31)
	  lhz       r4, 0x1C(r5)
	  ori       r4, r4, 0x1
	  sth       r4, 0x1C(r5)
	  lwz       r5, 0x4(r31)
	  lhz       r4, 0x38(r5)
	  ori       r4, r4, 0x1
	  sth       r4, 0x38(r5)
	  lwz       r5, 0x4(r31)
	  lhz       r4, 0x54(r5)
	  ori       r4, r4, 0x1
	  sth       r4, 0x54(r5)
	  lwz       r5, 0x4(r31)
	  lhz       r4, 0x70(r5)
	  ori       r4, r4, 0x1
	  sth       r4, 0x70(r5)
	  stb       r0, 0x8(r31)
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
 * Address:	80234C8C
 * Size:	000078
 */
void Game::PlayChallengeGameData::CourseState::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  li        r6, 0xC
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  li        r7, 0x2
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stb       r0, 0x0(r3)
	  lis       r3, 0x8023
	  addi      r4, r3, 0x3CEC
	  stb       r0, 0x1(r31)
	  addi      r3, r31, 0x4
	  bl        -0x173488
	  addi      r3, r31, 0x4
	  li        r4, 0x3
	  bl        -0xFC8
	  addi      r3, r31, 0x10
	  li        r4, 0x3
	  bl        -0xFD4
	  li        r0, 0
	  mr        r3, r31
	  stb       r0, 0x0(r31)
	  stb       r0, 0x1(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80234D04
 * Size:	0000A4
 */
void Game::PlayChallengeGameData::getState((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  li        r3, 0
	  blt-      .loc_0x34
	  lwz       r0, 0x0(r30)
	  cmpw      r31, r0
	  bge-      .loc_0x34
	  li        r3, 0x1

	.loc_0x34:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x58
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x3A88
	  li        r4, 0x1AB
	  addi      r5, r5, 0x3AA0
	  crclr     6, 0x6
	  bl        -0x20A718

	.loc_0x58:
	  lwz       r0, 0x4(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x80
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x3A88
	  li        r4, 0x1AC
	  addi      r5, r5, 0x3AA0
	  crclr     6, 0x6
	  bl        -0x20A740

	.loc_0x80:
	  mulli     r0, r31, 0x1C
	  lwz       r3, 0x4(r30)
	  add       r3, r3, r0
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
 * Address:	80234DA8
 * Size:	00009C
 */
void Game::PlayChallengeGameData::write((Stream&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r26, r4
	  mr        r25, r3
	  lbz       r4, 0x8(r3)
	  mr        r3, r26
	  bl        0x1E08A8
	  li        r27, 0
	  li        r28, 0
	  b         .loc_0x7C

	.loc_0x30:
	  lwz       r0, 0x4(r25)
	  li        r29, 0
	  add       r30, r0, r28
	  mr        r31, r30

	.loc_0x40:
	  lbz       r4, 0x0(r31)
	  mr        r3, r26
	  bl        0x1E0880
	  addi      r29, r29, 0x1
	  addi      r31, r31, 0x1
	  cmplwi    r29, 0x2
	  blt+      .loc_0x40
	  mr        r4, r26
	  addi      r3, r30, 0x4
	  bl        -0xDA4
	  mr        r4, r26
	  addi      r3, r30, 0x10
	  bl        -0xDB0
	  addi      r28, r28, 0x1C
	  addi      r27, r27, 0x1

	.loc_0x7C:
	  lwz       r0, 0x0(r25)
	  cmpw      r27, r0
	  blt+      .loc_0x30
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80234E44
 * Size:	00009C
 */
void Game::PlayChallengeGameData::read((Stream&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r26, r4
	  mr        r25, r3
	  mr        r3, r26
	  bl        0x1DF63C
	  stb       r3, 0x8(r25)
	  li        r27, 0
	  li        r28, 0
	  b         .loc_0x7C

	.loc_0x30:
	  lwz       r0, 0x4(r25)
	  li        r29, 0
	  add       r30, r0, r28
	  mr        r31, r30

	.loc_0x40:
	  mr        r3, r26
	  bl        0x1DF614
	  addi      r29, r29, 0x1
	  stb       r3, 0x0(r31)
	  cmplwi    r29, 0x2
	  addi      r31, r31, 0x1
	  blt+      .loc_0x40
	  mr        r4, r26
	  addi      r3, r30, 0x4
	  bl        -0xEF8
	  mr        r4, r26
	  addi      r3, r30, 0x10
	  bl        -0xF04
	  addi      r28, r28, 0x1C
	  addi      r27, r27, 0x1

	.loc_0x7C:
	  lwz       r0, 0x0(r25)
	  cmpw      r27, r0
	  blt+      .loc_0x30
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80234EE0
 * Size:	000018
 */
void Game::Lowscore::do_higher((int, int))
{
	/*
	.loc_0x0:
	  xor       r0, r5, r4
	  srawi     r3, r0, 0x1
	  and       r0, r0, r5
	  sub       r0, r3, r0
	  rlwinm    r3,r0,1,31,31
	  blr
	*/
}

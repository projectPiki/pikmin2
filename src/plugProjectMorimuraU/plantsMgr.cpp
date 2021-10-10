

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
 * Address:	80353D4C
 * Size:	000064
 */
void Game::Tanpopo::Mgr::__ct((int, unsigned char))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x2250CC
	  lis       r3, 0x804C
	  lis       r4, 0x804E
	  addi      r5, r3, 0x53D4
	  lis       r3, 0x8049
	  stw       r5, 0x0(r31)
	  addi      r6, r5, 0x38
	  addi      r5, r4, 0x288
	  addi      r0, r3, 0xF18
	  stw       r6, 0x4(r31)
	  addi      r4, r5, 0x38
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  stw       r4, 0x4(r31)
	  stw       r0, 0x18(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80353DB0
 * Size:	000048
 */
void Game::Tanpopo::Mgr::doAlloc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x7F8
	  bl        -0x32FF24
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        -0x24A638
	  mr        r4, r3

	.loc_0x2C:
	  mr        r3, r31
	  bl        -0x224544
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80353DF8
 * Size:	000020
 */
void Game::Tanpopo::Mgr::birth((Game::EnemyBirthArg&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x224A3C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80353E18
 * Size:	000064
 */
void Game::Clover::Mgr::__ct((int, unsigned char))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x225198
	  lis       r3, 0x804C
	  lis       r4, 0x804E
	  addi      r5, r3, 0x53D4
	  lis       r3, 0x8049
	  stw       r5, 0x0(r31)
	  addi      r6, r5, 0x38
	  subi      r5, r4, 0x188
	  addi      r0, r3, 0xF2C
	  stw       r6, 0x4(r31)
	  addi      r4, r5, 0x38
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  stw       r4, 0x4(r31)
	  stw       r0, 0x18(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80353E7C
 * Size:	000048
 */
void Game::Clover::Mgr::doAlloc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x7F8
	  bl        -0x32FFF0
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        -0x24A704
	  mr        r4, r3

	.loc_0x2C:
	  mr        r3, r31
	  bl        -0x224610
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80353EC4
 * Size:	000020
 */
void Game::Clover::Mgr::birth((Game::EnemyBirthArg&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x224B08
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80353EE4
 * Size:	000064
 */
void Game::HikariKinoko::Mgr::__ct((int, unsigned char))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x225264
	  lis       r3, 0x804C
	  lis       r4, 0x804E
	  addi      r5, r3, 0x53D4
	  lis       r3, 0x8049
	  stw       r5, 0x0(r31)
	  addi      r6, r5, 0x38
	  subi      r5, r4, 0x268
	  addi      r0, r3, 0xF44
	  stw       r6, 0x4(r31)
	  addi      r4, r5, 0x38
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  stw       r4, 0x4(r31)
	  stw       r0, 0x18(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80353F48
 * Size:	000048
 */
void Game::HikariKinoko::Mgr::doAlloc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x7F8
	  bl        -0x3300BC
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        -0x24A7D0
	  mr        r4, r3

	.loc_0x2C:
	  mr        r3, r31
	  bl        -0x2246DC
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80353F90
 * Size:	000020
 */
void Game::HikariKinoko::Mgr::birth((Game::EnemyBirthArg&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x224BD4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80353FB0
 * Size:	000064
 */
void Game::Ooinu_s::Mgr::__ct((int, unsigned char))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x225330
	  lis       r3, 0x804C
	  lis       r4, 0x804E
	  addi      r5, r3, 0x53D4
	  lis       r3, 0x8049
	  stw       r5, 0x0(r31)
	  addi      r6, r5, 0x38
	  subi      r5, r4, 0x678
	  addi      r0, r3, 0xF5C
	  stw       r6, 0x4(r31)
	  addi      r4, r5, 0x38
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  stw       r4, 0x4(r31)
	  stw       r0, 0x18(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80354014
 * Size:	000048
 */
void Game::Ooinu_s::Mgr::doAlloc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x7F8
	  bl        -0x330188
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        -0x24A89C
	  mr        r4, r3

	.loc_0x2C:
	  mr        r3, r31
	  bl        -0x2247A8
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8035405C
 * Size:	000020
 */
void Game::Ooinu_s::Mgr::birth((Game::EnemyBirthArg&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x224CA0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8035407C
 * Size:	000064
 */
void Game::KareOoinu_s::Mgr::__ct((int, unsigned char))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x2253FC
	  lis       r3, 0x804C
	  lis       r4, 0x804E
	  addi      r5, r3, 0x53D4
	  lis       r3, 0x8049
	  stw       r5, 0x0(r31)
	  addi      r6, r5, 0x38
	  subi      r5, r4, 0xA88
	  addi      r0, r3, 0xF7C
	  stw       r6, 0x4(r31)
	  addi      r4, r5, 0x38
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  stw       r4, 0x4(r31)
	  stw       r0, 0x18(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803540E0
 * Size:	000048
 */
void Game::KareOoinu_s::Mgr::doAlloc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x7F8
	  bl        -0x330254
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        -0x24A968
	  mr        r4, r3

	.loc_0x2C:
	  mr        r3, r31
	  bl        -0x224874
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80354128
 * Size:	000020
 */
void Game::KareOoinu_s::Mgr::birth((Game::EnemyBirthArg&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x224D6C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80354148
 * Size:	000064
 */
void Game::Ooinu_l::Mgr::__ct((int, unsigned char))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x2254C8
	  lis       r3, 0x804C
	  lis       r4, 0x804E
	  addi      r5, r3, 0x53D4
	  lis       r3, 0x8049
	  stw       r5, 0x0(r31)
	  addi      r6, r5, 0x38
	  subi      r5, r4, 0xE98
	  addi      r0, r3, 0xFA0
	  stw       r6, 0x4(r31)
	  addi      r4, r5, 0x38
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  stw       r4, 0x4(r31)
	  stw       r0, 0x18(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803541AC
 * Size:	000048
 */
void Game::Ooinu_l::Mgr::doAlloc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x7F8
	  bl        -0x330320
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        -0x24AA34
	  mr        r4, r3

	.loc_0x2C:
	  mr        r3, r31
	  bl        -0x224940
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803541F4
 * Size:	000020
 */
void Game::Ooinu_l::Mgr::birth((Game::EnemyBirthArg&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x224E38
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80354214
 * Size:	000064
 */
void Game::KareOoinu_l::Mgr::__ct((int, unsigned char))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x225594
	  lis       r3, 0x804C
	  lis       r4, 0x804E
	  addi      r5, r3, 0x53D4
	  lis       r3, 0x8049
	  stw       r5, 0x0(r31)
	  addi      r6, r5, 0x38
	  subi      r5, r4, 0x12A8
	  addi      r0, r3, 0xFC0
	  stw       r6, 0x4(r31)
	  addi      r4, r5, 0x38
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  stw       r4, 0x4(r31)
	  stw       r0, 0x18(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80354278
 * Size:	000048
 */
void Game::KareOoinu_l::Mgr::doAlloc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x7F8
	  bl        -0x3303EC
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        -0x24AB00
	  mr        r4, r3

	.loc_0x2C:
	  mr        r3, r31
	  bl        -0x224A0C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803542C0
 * Size:	000020
 */
void Game::KareOoinu_l::Mgr::birth((Game::EnemyBirthArg&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x224F04
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803542E0
 * Size:	000064
 */
void Game::Wakame_s::Mgr::__ct((int, unsigned char))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x225660
	  lis       r3, 0x804C
	  lis       r4, 0x804E
	  addi      r5, r3, 0x53D4
	  lis       r3, 0x8049
	  stw       r5, 0x0(r31)
	  addi      r6, r5, 0x38
	  subi      r5, r4, 0x16B8
	  addi      r0, r3, 0xFE4
	  stw       r6, 0x4(r31)
	  addi      r4, r5, 0x38
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  stw       r4, 0x4(r31)
	  stw       r0, 0x18(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80354344
 * Size:	000048
 */
void Game::Wakame_s::Mgr::doAlloc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x7F8
	  bl        -0x3304B8
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        -0x24ABCC
	  mr        r4, r3

	.loc_0x2C:
	  mr        r3, r31
	  bl        -0x224AD8
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8035438C
 * Size:	000020
 */
void Game::Wakame_s::Mgr::birth((Game::EnemyBirthArg&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x224FD0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803543AC
 * Size:	000064
 */
void Game::Wakame_l::Mgr::__ct((int, unsigned char))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x22572C
	  lis       r3, 0x804C
	  lis       r4, 0x804E
	  addi      r5, r3, 0x53D4
	  lis       r3, 0x8049
	  stw       r5, 0x0(r31)
	  addi      r6, r5, 0x38
	  subi      r5, r4, 0x1AC8
	  addi      r0, r3, 0xFFC
	  stw       r6, 0x4(r31)
	  addi      r4, r5, 0x38
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  stw       r4, 0x4(r31)
	  stw       r0, 0x18(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80354410
 * Size:	000048
 */
void Game::Wakame_l::Mgr::doAlloc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x7F8
	  bl        -0x330584
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        -0x24AC98
	  mr        r4, r3

	.loc_0x2C:
	  mr        r3, r31
	  bl        -0x224BA4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80354458
 * Size:	000020
 */
void Game::Wakame_l::Mgr::birth((Game::EnemyBirthArg&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x22509C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80354478
 * Size:	000064
 */
void Game::Tukushi::Mgr::__ct((int, unsigned char))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x2257F8
	  lis       r3, 0x804C
	  lis       r4, 0x804E
	  addi      r5, r3, 0x53D4
	  lis       r3, 0x8049
	  stw       r5, 0x0(r31)
	  addi      r6, r5, 0x38
	  subi      r5, r4, 0x1ED8
	  addi      r0, r3, 0x1014
	  stw       r6, 0x4(r31)
	  addi      r4, r5, 0x38
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  stw       r4, 0x4(r31)
	  stw       r0, 0x18(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803544DC
 * Size:	000048
 */
void Game::Tukushi::Mgr::doAlloc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x7F8
	  bl        -0x330650
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        -0x24AD64
	  mr        r4, r3

	.loc_0x2C:
	  mr        r3, r31
	  bl        -0x224C70
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80354524
 * Size:	000020
 */
void Game::Tukushi::Mgr::birth((Game::EnemyBirthArg&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x225168
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80354544
 * Size:	000064
 */
void Game::Watage::Mgr::__ct((int, unsigned char))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x2258C4
	  lis       r3, 0x804C
	  lis       r4, 0x804E
	  addi      r5, r3, 0x53D4
	  lis       r3, 0x8049
	  stw       r5, 0x0(r31)
	  addi      r6, r5, 0x38
	  subi      r5, r4, 0x1FB8
	  addi      r0, r3, 0x1028
	  stw       r6, 0x4(r31)
	  addi      r4, r5, 0x38
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  stw       r4, 0x4(r31)
	  stw       r0, 0x18(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803545A8
 * Size:	000048
 */
void Game::Watage::Mgr::doAlloc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x7F8
	  bl        -0x33071C
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        -0x24AE30
	  mr        r4, r3

	.loc_0x2C:
	  mr        r3, r31
	  bl        -0x224D3C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803545F0
 * Size:	000020
 */
void Game::Watage::Mgr::birth((Game::EnemyBirthArg&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x225234
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80354610
 * Size:	000064
 */
void Game::DiodeRed::Mgr::__ct((int, unsigned char))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x225990
	  lis       r3, 0x804C
	  lis       r4, 0x804E
	  addi      r5, r3, 0x53D4
	  lis       r3, 0x8049
	  stw       r5, 0x0(r31)
	  addi      r6, r5, 0x38
	  subi      r5, r4, 0x2098
	  addi      r0, r3, 0x1038
	  stw       r6, 0x4(r31)
	  addi      r4, r5, 0x38
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  stw       r4, 0x4(r31)
	  stw       r0, 0x18(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80354674
 * Size:	000048
 */
void Game::DiodeRed::Mgr::doAlloc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x7F8
	  bl        -0x3307E8
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        -0x24AEFC
	  mr        r4, r3

	.loc_0x2C:
	  mr        r3, r31
	  bl        -0x224E08
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803546BC
 * Size:	000020
 */
void Game::DiodeRed::Mgr::birth((Game::EnemyBirthArg&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x225300
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803546DC
 * Size:	000064
 */
void Game::DiodeGreen::Mgr::__ct((int, unsigned char))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x225A5C
	  lis       r3, 0x804C
	  lis       r4, 0x804E
	  addi      r5, r3, 0x53D4
	  lis       r3, 0x8049
	  stw       r5, 0x0(r31)
	  addi      r6, r5, 0x38
	  subi      r5, r4, 0x2178
	  addi      r0, r3, 0x1050
	  stw       r6, 0x4(r31)
	  addi      r4, r5, 0x38
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  stw       r4, 0x4(r31)
	  stw       r0, 0x18(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80354740
 * Size:	000048
 */
void Game::DiodeGreen::Mgr::doAlloc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x7F8
	  bl        -0x3308B4
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        -0x24AFC8
	  mr        r4, r3

	.loc_0x2C:
	  mr        r3, r31
	  bl        -0x224ED4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80354788
 * Size:	000020
 */
void Game::DiodeGreen::Mgr::birth((Game::EnemyBirthArg&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x2253CC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803547A8
 * Size:	000064
 */
void Game::Margaret::Mgr::__ct((int, unsigned char))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x225B28
	  lis       r3, 0x804C
	  lis       r4, 0x804E
	  addi      r5, r3, 0x53D4
	  lis       r3, 0x8049
	  stw       r5, 0x0(r31)
	  addi      r6, r5, 0x38
	  subi      r5, r4, 0x2588
	  addi      r0, r3, 0x1068
	  stw       r6, 0x4(r31)
	  addi      r4, r5, 0x38
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  stw       r4, 0x4(r31)
	  stw       r0, 0x18(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8035480C
 * Size:	000048
 */
void Game::Margaret::Mgr::doAlloc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x7F8
	  bl        -0x330980
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        -0x24B094
	  mr        r4, r3

	.loc_0x2C:
	  mr        r3, r31
	  bl        -0x224FA0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80354854
 * Size:	000020
 */
void Game::Margaret::Mgr::birth((Game::EnemyBirthArg&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x225498
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80354874
 * Size:	000064
 */
void Game::Nekojarashi::Mgr::__ct((int, unsigned char))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x225BF4
	  lis       r3, 0x804C
	  lis       r4, 0x804E
	  addi      r5, r3, 0x53D4
	  lis       r3, 0x8049
	  stw       r5, 0x0(r31)
	  addi      r6, r5, 0x38
	  subi      r5, r4, 0x2668
	  addi      r0, r3, 0x1080
	  stw       r6, 0x4(r31)
	  addi      r4, r5, 0x38
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  stw       r4, 0x4(r31)
	  stw       r0, 0x18(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803548D8
 * Size:	000048
 */
void Game::Nekojarashi::Mgr::doAlloc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x7F8
	  bl        -0x330A4C
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        -0x24B160
	  mr        r4, r3

	.loc_0x2C:
	  mr        r3, r31
	  bl        -0x22506C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80354920
 * Size:	000020
 */
void Game::Nekojarashi::Mgr::birth((Game::EnemyBirthArg&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x225564
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80354940
 * Size:	000064
 */
void Game::Chiyogami::Mgr::__ct((int, unsigned char))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x225CC0
	  lis       r3, 0x804C
	  lis       r4, 0x804E
	  addi      r5, r3, 0x53D4
	  lis       r3, 0x8049
	  stw       r5, 0x0(r31)
	  addi      r6, r5, 0x38
	  subi      r5, r4, 0x2A78
	  addi      r0, r3, 0x1098
	  stw       r6, 0x4(r31)
	  addi      r4, r5, 0x38
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  stw       r4, 0x4(r31)
	  stw       r0, 0x18(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803549A4
 * Size:	000048
 */
void Game::Chiyogami::Mgr::doAlloc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x7F8
	  bl        -0x330B18
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        -0x24B22C
	  mr        r4, r3

	.loc_0x2C:
	  mr        r3, r31
	  bl        -0x225138
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803549EC
 * Size:	000020
 */
void Game::Chiyogami::Mgr::birth((Game::EnemyBirthArg&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x225630
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80354A0C
 * Size:	000064
 */
void Game::Zenmai::Mgr::__ct((int, unsigned char))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x225D8C
	  lis       r3, 0x804C
	  lis       r4, 0x804E
	  addi      r5, r3, 0x53D4
	  lis       r3, 0x8049
	  stw       r5, 0x0(r31)
	  addi      r6, r5, 0x38
	  subi      r5, r4, 0x2E88
	  addi      r0, r3, 0x10AC
	  stw       r6, 0x4(r31)
	  addi      r4, r5, 0x38
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  stw       r4, 0x4(r31)
	  stw       r0, 0x18(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80354A70
 * Size:	000048
 */
void Game::Zenmai::Mgr::doAlloc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x7F8
	  bl        -0x330BE4
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        -0x24B2F8
	  mr        r4, r3

	.loc_0x2C:
	  mr        r3, r31
	  bl        -0x225204
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80354AB8
 * Size:	000020
 */
void Game::Zenmai::Mgr::birth((Game::EnemyBirthArg&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x2256FC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80354AD8
 * Size:	0000C8
 */
void Game::Zenmai::Mgr::__dt(void)
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
	  beq-      .loc_0xAC
	  lis       r3, 0x804E
	  subi      r3, r3, 0x2E88
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804C
	  addi      r3, r3, 0x53D4
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  subi      r3, r3, 0x760
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4
	  subi      r3, r3, 0x5304
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4(r30)
	  bl        0xBCA18

	.loc_0x9C:
	  extsh.    r0, r31
	  ble-      .loc_0xAC
	  mr        r3, r30
	  bl        -0x330ACC

	.loc_0xAC:
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
 * Address:	80354BA0
 * Size:	000008
 */
void Game::Zenmai::Mgr::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x5A
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80354BA8
 * Size:	00002C
 */
void Game::Zenmai::Mgr::doLoadBmd((void*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x2024
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  addi      r4, r5, 0x10
	  bl        -0x2E532C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80354BD4
 * Size:	000060
 */
void Game::Zenmai::Mgr::createObj((int))
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
	  mulli     r3, r31, 0x2D0
	  addi      r3, r3, 0x10
	  bl        -0x330C4C
	  lis       r4, 0x8035
	  lis       r5, 0x8035
	  addi      r4, r4, 0x4D20
	  mr        r7, r31
	  addi      r5, r5, 0x4C34
	  li        r6, 0x2D0
	  bl        -0x293224
	  stw       r3, 0x44(r30)
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
 * Address:	80354C34
 * Size:	0000EC
 */
void Game::Zenmai::Obj::__dt(void)
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
	  beq-      .loc_0xD0
	  lis       r3, 0x804E
	  addi      r5, r30, 0x2C0
	  subi      r4, r3, 0x2DA8
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x300
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
	  lis       r3, 0x804E
	  addi      r4, r3, 0x16D0
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x300
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
	  lis       r3, 0x804B
	  addi      r0, r30, 0x2BC
	  subi      r4, r3, 0x5CDC
	  addi      r3, r30, 0x290
	  stw       r4, 0x0(r30)
	  addi      r5, r4, 0x1B0
	  addi      r6, r4, 0x2F8
	  li        r4, -0x1
	  stw       r5, 0x178(r30)
	  lwz       r5, 0x17C(r30)
	  stw       r6, 0x0(r5)
	  lwz       r5, 0x17C(r30)
	  sub       r0, r0, r5
	  stw       r0, 0xC(r5)
	  bl        0xBC898

	.loc_0xC0:
	  extsh.    r0, r31
	  ble-      .loc_0xD0
	  mr        r3, r30
	  bl        -0x330C4C

	.loc_0xD0:
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
 * Address:	80354D20
 * Size:	000090
 */
void Game::Zenmai::Obj::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  beq-      .loc_0x3C
	  addi      r0, r31, 0x2C0
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x2C0(r31)
	  stw       r0, 0x2C4(r31)
	  stw       r0, 0x2C8(r31)

	.loc_0x3C:
	  mr        r3, r31
	  li        r4, 0
	  bl        0x3880
	  lis       r3, 0x804E
	  addi      r0, r31, 0x2C0
	  subi      r5, r3, 0x2DA8
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r4, r5, 0x1B0
	  addi      r5, r5, 0x300
	  stw       r4, 0x178(r31)
	  lwz       r4, 0x17C(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0x17C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0xC(r4)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80354DB0
 * Size:	0000BC
 */
void Game::Plants::Obj::__dt(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  beq-      .loc_0xA0
	  lis       r3, 0x804E
	  addi      r0, r31, 0x2C0
	  addi      r4, r3, 0x16D0
	  stw       r4, 0x0(r31)
	  addi      r3, r4, 0x1B0
	  addi      r4, r4, 0x300
	  stw       r3, 0x178(r31)
	  lwz       r3, 0x17C(r31)
	  stw       r4, 0x0(r3)
	  lwz       r3, 0x17C(r31)
	  sub       r0, r0, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0x90
	  lis       r3, 0x804B
	  addi      r0, r31, 0x2BC
	  subi      r4, r3, 0x5CDC
	  addi      r3, r31, 0x290
	  stw       r4, 0x0(r31)
	  addi      r5, r4, 0x1B0
	  addi      r6, r4, 0x2F8
	  li        r4, -0x1
	  stw       r5, 0x178(r31)
	  lwz       r5, 0x17C(r31)
	  stw       r6, 0x0(r5)
	  lwz       r5, 0x17C(r31)
	  sub       r0, r0, r5
	  stw       r0, 0xC(r5)
	  bl        0xBC74C

	.loc_0x90:
	  extsh.    r0, r30
	  ble-      .loc_0xA0
	  mr        r3, r31
	  bl        -0x330D98

	.loc_0xA0:
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
 * Address:	80354E6C
 * Size:	000010
 */
void Game::Zenmai::Mgr::getEnemy((int))
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x2D0
	  lwz       r3, 0x44(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80354E7C
 * Size:	000034
 */
void Game::Zenmai::Obj::setParameters(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x353C
	  li        r0, 0x1
	  stb       r0, 0x26C(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80354EB0
 * Size:	00006C
 */
void Game::Zenmai::Obj::getLODCylinder((Sys::Cylinder&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  mr        r0, r4
	  addi      r4, r1, 0x14
	  addi      r5, r1, 0x8
	  lfs       f3, 0x18C(r3)
	  stfs      f3, 0x8(r1)
	  lfs       f2, 0x190(r3)
	  stfs      f2, 0xC(r1)
	  frsp      f1, f2
	  lfs       f0, 0x194(r3)
	  stfs      f0, 0x10(r1)
	  stfs      f3, 0x14(r1)
	  stfs      f2, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  lwz       r6, 0xC0(r3)
	  mr        r3, r0
	  lfs       f0, 0x3AC(r6)
	  fadds     f0, f1, f0
	  stfs      f0, 0x18(r1)
	  lfs       f1, 0x384(r6)
	  bl        0xCC75C
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80354F1C
 * Size:	000008
 */
void Game::Zenmai::Obj::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x5A
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80354F24
 * Size:	000004
 */
void Game::Plants::Obj::setInitialSetting((Game::EnemyInitialParamBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80354F28
 * Size:	000004
 */
void Game::Plants::Obj::doUpdate(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80354F2C
 * Size:	000004
 */
void Game::Plants::Obj::doSimulation((float))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80354F30
 * Size:	000004
 */
void Game::Plants::Obj::doUpdateCommon(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80354F34
 * Size:	000008
 */
void Game::Plants::Obj::isLivingThing(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80354F3C
 * Size:	00004C
 */
void Game::Plants::Obj::ignoreAtari((Game::Creature*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r4, 0
	  stw       r0, 0x14(r1)
	  beq-      .loc_0x38
	  mr        r3, r4
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x38
	  li        r3, 0x1
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
 * Address:	80354F88
 * Size:	0000C8
 */
void Game::Chiyogami::Mgr::__dt(void)
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
	  beq-      .loc_0xAC
	  lis       r3, 0x804E
	  subi      r3, r3, 0x2A78
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804C
	  addi      r3, r3, 0x53D4
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  subi      r3, r3, 0x760
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4
	  subi      r3, r3, 0x5304
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4(r30)
	  bl        0xBC568

	.loc_0x9C:
	  extsh.    r0, r31
	  ble-      .loc_0xAC
	  mr        r3, r30
	  bl        -0x330F7C

	.loc_0xAC:
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
 * Address:	80355050
 * Size:	000008
 */
void Game::Chiyogami::Mgr::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x59
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80355058
 * Size:	00002C
 */
void Game::Chiyogami::Mgr::doLoadBmd((void*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x2024
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  addi      r4, r5, 0x10
	  bl        -0x2E57DC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80355084
 * Size:	000060
 */
void Game::Chiyogami::Mgr::createObj((int))
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
	  mulli     r3, r31, 0x2D0
	  addi      r3, r3, 0x10
	  bl        -0x3310FC
	  lis       r4, 0x8035
	  lis       r5, 0x8035
	  addi      r4, r4, 0x51D0
	  mr        r7, r31
	  addi      r5, r5, 0x50E4
	  li        r6, 0x2D0
	  bl        -0x2936D4
	  stw       r3, 0x44(r30)
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
 * Address:	803550E4
 * Size:	0000EC
 */
void Game::Chiyogami::Obj::__dt(void)
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
	  beq-      .loc_0xD0
	  lis       r3, 0x804E
	  addi      r5, r30, 0x2C0
	  subi      r4, r3, 0x2998
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x300
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
	  lis       r3, 0x804E
	  addi      r4, r3, 0x16D0
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x300
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
	  lis       r3, 0x804B
	  addi      r0, r30, 0x2BC
	  subi      r4, r3, 0x5CDC
	  addi      r3, r30, 0x290
	  stw       r4, 0x0(r30)
	  addi      r5, r4, 0x1B0
	  addi      r6, r4, 0x2F8
	  li        r4, -0x1
	  stw       r5, 0x178(r30)
	  lwz       r5, 0x17C(r30)
	  stw       r6, 0x0(r5)
	  lwz       r5, 0x17C(r30)
	  sub       r0, r0, r5
	  stw       r0, 0xC(r5)
	  bl        0xBC3E8

	.loc_0xC0:
	  extsh.    r0, r31
	  ble-      .loc_0xD0
	  mr        r3, r30
	  bl        -0x3310FC

	.loc_0xD0:
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
 * Address:	803551D0
 * Size:	000090
 */
void Game::Chiyogami::Obj::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  beq-      .loc_0x3C
	  addi      r0, r31, 0x2C0
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x2C0(r31)
	  stw       r0, 0x2C4(r31)
	  stw       r0, 0x2C8(r31)

	.loc_0x3C:
	  mr        r3, r31
	  li        r4, 0
	  bl        0x33D0
	  lis       r3, 0x804E
	  addi      r0, r31, 0x2C0
	  subi      r5, r3, 0x2998
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r4, r5, 0x1B0
	  addi      r5, r5, 0x300
	  stw       r4, 0x178(r31)
	  lwz       r4, 0x17C(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0x17C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0xC(r4)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80355260
 * Size:	000010
 */
void Game::Chiyogami::Mgr::getEnemy((int))
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x2D0
	  lwz       r3, 0x44(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80355270
 * Size:	000034
 */
void Game::Chiyogami::Obj::setParameters(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x3148
	  li        r0, 0x1
	  stb       r0, 0x26C(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803552A4
 * Size:	00006C
 */
void Game::Chiyogami::Obj::getLODCylinder((Sys::Cylinder&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  mr        r0, r4
	  addi      r4, r1, 0x14
	  addi      r5, r1, 0x8
	  lfs       f3, 0x18C(r3)
	  stfs      f3, 0x8(r1)
	  lfs       f2, 0x190(r3)
	  stfs      f2, 0xC(r1)
	  frsp      f1, f2
	  lfs       f0, 0x194(r3)
	  stfs      f0, 0x10(r1)
	  stfs      f3, 0x14(r1)
	  stfs      f2, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  lwz       r6, 0xC0(r3)
	  mr        r3, r0
	  lfs       f0, 0x3AC(r6)
	  fadds     f0, f1, f0
	  stfs      f0, 0x18(r1)
	  lfs       f1, 0x384(r6)
	  bl        0xCC368
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80355310
 * Size:	000008
 */
void Game::Chiyogami::Obj::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x59
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80355318
 * Size:	0000C8
 */
void Game::Nekojarashi::Mgr::__dt(void)
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
	  beq-      .loc_0xAC
	  lis       r3, 0x804E
	  subi      r3, r3, 0x2668
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804C
	  addi      r3, r3, 0x53D4
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  subi      r3, r3, 0x760
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4
	  subi      r3, r3, 0x5304
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4(r30)
	  bl        0xBC1D8

	.loc_0x9C:
	  extsh.    r0, r31
	  ble-      .loc_0xAC
	  mr        r3, r30
	  bl        -0x33130C

	.loc_0xAC:
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
 * Address:	803553E0
 * Size:	000008
 */
void Game::Nekojarashi::Mgr::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x58
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803553E8
 * Size:	00002C
 */
void Game::Nekojarashi::Mgr::doLoadBmd((void*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x2024
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  addi      r4, r5, 0x10
	  bl        -0x2E5B6C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80355414
 * Size:	000060
 */
void Game::Nekojarashi::Mgr::createObj((int))
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
	  mulli     r3, r31, 0x2D0
	  addi      r3, r3, 0x10
	  bl        -0x33148C
	  lis       r4, 0x8035
	  lis       r5, 0x8035
	  addi      r4, r4, 0x5560
	  mr        r7, r31
	  addi      r5, r5, 0x5474
	  li        r6, 0x2D0
	  bl        -0x293A64
	  stw       r3, 0x44(r30)
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
 * Address:	80355474
 * Size:	0000EC
 */
void Game::Nekojarashi::Obj::__dt(void)
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
	  beq-      .loc_0xD0
	  lis       r3, 0x804E
	  addi      r5, r30, 0x2C0
	  addi      r4, r3, 0xD2C
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x300
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
	  lis       r3, 0x804E
	  addi      r4, r3, 0x16D0
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x300
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
	  lis       r3, 0x804B
	  addi      r0, r30, 0x2BC
	  subi      r4, r3, 0x5CDC
	  addi      r3, r30, 0x290
	  stw       r4, 0x0(r30)
	  addi      r5, r4, 0x1B0
	  addi      r6, r4, 0x2F8
	  li        r4, -0x1
	  stw       r5, 0x178(r30)
	  lwz       r5, 0x17C(r30)
	  stw       r6, 0x0(r5)
	  lwz       r5, 0x17C(r30)
	  sub       r0, r0, r5
	  stw       r0, 0xC(r5)
	  bl        0xBC058

	.loc_0xC0:
	  extsh.    r0, r31
	  ble-      .loc_0xD0
	  mr        r3, r30
	  bl        -0x33148C

	.loc_0xD0:
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
 * Address:	80355560
 * Size:	000090
 */
void Game::Nekojarashi::Obj::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  beq-      .loc_0x3C
	  addi      r0, r31, 0x2C0
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x2C0(r31)
	  stw       r0, 0x2C4(r31)
	  stw       r0, 0x2C8(r31)

	.loc_0x3C:
	  mr        r3, r31
	  li        r4, 0
	  bl        0x3040
	  lis       r3, 0x804E
	  addi      r0, r31, 0x2C0
	  addi      r5, r3, 0xD2C
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r4, r5, 0x1B0
	  addi      r5, r5, 0x300
	  stw       r4, 0x178(r31)
	  lwz       r4, 0x17C(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0x17C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0xC(r4)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803555F0
 * Size:	000010
 */
void Game::Nekojarashi::Mgr::getEnemy((int))
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x2D0
	  lwz       r3, 0x44(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80355600
 * Size:	0000C8
 */
void Game::Margaret::Mgr::__dt(void)
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
	  beq-      .loc_0xAC
	  lis       r3, 0x804E
	  subi      r3, r3, 0x2588
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804C
	  addi      r3, r3, 0x53D4
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  subi      r3, r3, 0x760
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4
	  subi      r3, r3, 0x5304
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4(r30)
	  bl        0xBBEF0

	.loc_0x9C:
	  extsh.    r0, r31
	  ble-      .loc_0xAC
	  mr        r3, r30
	  bl        -0x3315F4

	.loc_0xAC:
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
 * Address:	803556C8
 * Size:	000008
 */
void Game::Margaret::Mgr::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x57
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803556D0
 * Size:	00002C
 */
void Game::Margaret::Mgr::doLoadBmd((void*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x2024
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  addi      r4, r5, 0x10
	  bl        -0x2E5E54
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803556FC
 * Size:	000060
 */
void Game::Margaret::Mgr::createObj((int))
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
	  mulli     r3, r31, 0x2D0
	  addi      r3, r3, 0x10
	  bl        -0x331774
	  lis       r4, 0x8035
	  lis       r5, 0x8035
	  addi      r4, r4, 0x5848
	  mr        r7, r31
	  addi      r5, r5, 0x575C
	  li        r6, 0x2D0
	  bl        -0x293D4C
	  stw       r3, 0x44(r30)
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
 * Address:	8035575C
 * Size:	0000EC
 */
void Game::Margaret::Obj::__dt(void)
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
	  beq-      .loc_0xD0
	  lis       r3, 0x804E
	  addi      r5, r30, 0x2C0
	  subi      r4, r3, 0x24A8
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x300
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
	  lis       r3, 0x804E
	  addi      r4, r3, 0x16D0
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x300
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
	  lis       r3, 0x804B
	  addi      r0, r30, 0x2BC
	  subi      r4, r3, 0x5CDC
	  addi      r3, r30, 0x290
	  stw       r4, 0x0(r30)
	  addi      r5, r4, 0x1B0
	  addi      r6, r4, 0x2F8
	  li        r4, -0x1
	  stw       r5, 0x178(r30)
	  lwz       r5, 0x17C(r30)
	  stw       r6, 0x0(r5)
	  lwz       r5, 0x17C(r30)
	  sub       r0, r0, r5
	  stw       r0, 0xC(r5)
	  bl        0xBBD70

	.loc_0xC0:
	  extsh.    r0, r31
	  ble-      .loc_0xD0
	  mr        r3, r30
	  bl        -0x331774

	.loc_0xD0:
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
 * Address:	80355848
 * Size:	000090
 */
void Game::Margaret::Obj::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  beq-      .loc_0x3C
	  addi      r0, r31, 0x2C0
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x2C0(r31)
	  stw       r0, 0x2C4(r31)
	  stw       r0, 0x2C8(r31)

	.loc_0x3C:
	  mr        r3, r31
	  li        r4, 0
	  bl        0x2D58
	  lis       r3, 0x804E
	  addi      r0, r31, 0x2C0
	  subi      r5, r3, 0x24A8
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r4, r5, 0x1B0
	  addi      r5, r5, 0x300
	  stw       r4, 0x178(r31)
	  lwz       r4, 0x17C(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0x17C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0xC(r4)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803558D8
 * Size:	000010
 */
void Game::Margaret::Mgr::getEnemy((int))
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x2D0
	  lwz       r3, 0x44(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803558E8
 * Size:	000008
 */
void Game::Margaret::Obj::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x57
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803558F0
 * Size:	0000C8
 */
void Game::DiodeGreen::Mgr::__dt(void)
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
	  beq-      .loc_0xAC
	  lis       r3, 0x804E
	  subi      r3, r3, 0x2178
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804C
	  addi      r3, r3, 0x53D4
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  subi      r3, r3, 0x760
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4
	  subi      r3, r3, 0x5304
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4(r30)
	  bl        0xBBC00

	.loc_0x9C:
	  extsh.    r0, r31
	  ble-      .loc_0xAC
	  mr        r3, r30
	  bl        -0x3318E4

	.loc_0xAC:
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
 * Address:	803559B8
 * Size:	000008
 */
void Game::DiodeGreen::Mgr::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x56
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803559C0
 * Size:	0000BC
 */
void Game::DiodeGreen::Mgr::loadModelData(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r31, r3
	  bl        -0x2258C8
	  lwz       r0, 0x1C(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x40
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x10C0
	  li        r4, 0x242
	  addi      r5, r5, 0x10CC
	  crclr     6, 0x6
	  bl        -0x32B3BC

	.loc_0x40:
	  lis       r4, 0x8049
	  lis       r3, 0x8049
	  addi      r29, r4, 0x10C0
	  li        r27, 0
	  addi      r30, r3, 0x10CC
	  b         .loc_0x94

	.loc_0x58:
	  lwz       r3, 0x80(r4)
	  rlwinm    r0,r27,2,14,29
	  lwzx      r28, r3, r0
	  cmplwi    r28, 0
	  bne-      .loc_0x80
	  mr        r3, r29
	  mr        r5, r30
	  li        r4, 0x246
	  crclr     6, 0x6
	  bl        -0x32B3FC

	.loc_0x80:
	  lwz       r0, 0xC(r28)
	  addi      r27, r27, 0x1
	  rlwinm    r0,r0,0,20,15
	  ori       r0, r0, 0x2000
	  stw       r0, 0xC(r28)

	.loc_0x94:
	  lwz       r4, 0x1C(r31)
	  rlwinm    r0,r27,0,16,31
	  lhz       r3, 0x7C(r4)
	  cmplw     r0, r3
	  blt+      .loc_0x58
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80355A7C
 * Size:	00002C
 */
void Game::DiodeGreen::Mgr::doLoadBmd((void*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x2024
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  addi      r4, r5, 0x30
	  bl        -0x2E6200
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80355AA8
 * Size:	000060
 */
void Game::DiodeGreen::Mgr::createObj((int))
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
	  mulli     r3, r31, 0x2D0
	  addi      r3, r3, 0x10
	  bl        -0x331B20
	  lis       r4, 0x8035
	  lis       r5, 0x8035
	  addi      r4, r4, 0x5BF4
	  mr        r7, r31
	  addi      r5, r5, 0x5B08
	  li        r6, 0x2D0
	  bl        -0x2940F8
	  stw       r3, 0x44(r30)
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
 * Address:	80355B08
 * Size:	0000EC
 */
void Game::DiodeGreen::Obj::__dt(void)
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
	  beq-      .loc_0xD0
	  lis       r3, 0x804E
	  addi      r5, r30, 0x2C0
	  addi      r4, r3, 0x6CC
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x300
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
	  lis       r3, 0x804E
	  addi      r4, r3, 0x16D0
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x300
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
	  lis       r3, 0x804B
	  addi      r0, r30, 0x2BC
	  subi      r4, r3, 0x5CDC
	  addi      r3, r30, 0x290
	  stw       r4, 0x0(r30)
	  addi      r5, r4, 0x1B0
	  addi      r6, r4, 0x2F8
	  li        r4, -0x1
	  stw       r5, 0x178(r30)
	  lwz       r5, 0x17C(r30)
	  stw       r6, 0x0(r5)
	  lwz       r5, 0x17C(r30)
	  sub       r0, r0, r5
	  stw       r0, 0xC(r5)
	  bl        0xBB9C4

	.loc_0xC0:
	  extsh.    r0, r31
	  ble-      .loc_0xD0
	  mr        r3, r30
	  bl        -0x331B20

	.loc_0xD0:
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
 * Address:	80355BF4
 * Size:	000090
 */
void Game::DiodeGreen::Obj::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  beq-      .loc_0x3C
	  addi      r0, r31, 0x2C0
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x2C0(r31)
	  stw       r0, 0x2C4(r31)
	  stw       r0, 0x2C8(r31)

	.loc_0x3C:
	  mr        r3, r31
	  li        r4, 0
	  bl        0x29AC
	  lis       r3, 0x804E
	  addi      r0, r31, 0x2C0
	  addi      r5, r3, 0x6CC
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r4, r5, 0x1B0
	  addi      r5, r5, 0x300
	  stw       r4, 0x178(r31)
	  lwz       r4, 0x17C(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0x17C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0xC(r4)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80355C84
 * Size:	000010
 */
void Game::DiodeGreen::Mgr::getEnemy((int))
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x2D0
	  lwz       r3, 0x44(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80355C94
 * Size:	0000C8
 */
void Game::DiodeRed::Mgr::__dt(void)
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
	  beq-      .loc_0xAC
	  lis       r3, 0x804E
	  subi      r3, r3, 0x2098
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804C
	  addi      r3, r3, 0x53D4
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  subi      r3, r3, 0x760
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4
	  subi      r3, r3, 0x5304
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4(r30)
	  bl        0xBB85C

	.loc_0x9C:
	  extsh.    r0, r31
	  ble-      .loc_0xAC
	  mr        r3, r30
	  bl        -0x331C88

	.loc_0xAC:
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
 * Address:	80355D5C
 * Size:	000008
 */
void Game::DiodeRed::Mgr::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x55
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80355D64
 * Size:	0000BC
 */
void Game::DiodeRed::Mgr::loadModelData(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r31, r3
	  bl        -0x225C6C
	  lwz       r0, 0x1C(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x40
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x10C0
	  li        r4, 0x207
	  addi      r5, r5, 0x10CC
	  crclr     6, 0x6
	  bl        -0x32B760

	.loc_0x40:
	  lis       r4, 0x8049
	  lis       r3, 0x8049
	  addi      r29, r4, 0x10C0
	  li        r27, 0
	  addi      r30, r3, 0x10CC
	  b         .loc_0x94

	.loc_0x58:
	  lwz       r3, 0x80(r4)
	  rlwinm    r0,r27,2,14,29
	  lwzx      r28, r3, r0
	  cmplwi    r28, 0
	  bne-      .loc_0x80
	  mr        r3, r29
	  mr        r5, r30
	  li        r4, 0x20B
	  crclr     6, 0x6
	  bl        -0x32B7A0

	.loc_0x80:
	  lwz       r0, 0xC(r28)
	  addi      r27, r27, 0x1
	  rlwinm    r0,r0,0,20,15
	  ori       r0, r0, 0x2000
	  stw       r0, 0xC(r28)

	.loc_0x94:
	  lwz       r4, 0x1C(r31)
	  rlwinm    r0,r27,0,16,31
	  lhz       r3, 0x7C(r4)
	  cmplw     r0, r3
	  blt+      .loc_0x58
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80355E20
 * Size:	00002C
 */
void Game::DiodeRed::Mgr::doLoadBmd((void*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x2024
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  addi      r4, r5, 0x30
	  bl        -0x2E65A4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80355E4C
 * Size:	000060
 */
void Game::DiodeRed::Mgr::createObj((int))
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
	  mulli     r3, r31, 0x2D0
	  addi      r3, r3, 0x10
	  bl        -0x331EC4
	  lis       r4, 0x8035
	  lis       r5, 0x8035
	  addi      r4, r4, 0x5F98
	  mr        r7, r31
	  addi      r5, r5, 0x5EAC
	  li        r6, 0x2D0
	  bl        -0x29449C
	  stw       r3, 0x44(r30)
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
 * Address:	80355EAC
 * Size:	0000EC
 */
void Game::DiodeRed::Obj::__dt(void)
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
	  beq-      .loc_0xD0
	  lis       r3, 0x804E
	  addi      r5, r30, 0x2C0
	  addi      r4, r3, 0x9FC
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x300
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
	  lis       r3, 0x804E
	  addi      r4, r3, 0x16D0
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x300
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
	  lis       r3, 0x804B
	  addi      r0, r30, 0x2BC
	  subi      r4, r3, 0x5CDC
	  addi      r3, r30, 0x290
	  stw       r4, 0x0(r30)
	  addi      r5, r4, 0x1B0
	  addi      r6, r4, 0x2F8
	  li        r4, -0x1
	  stw       r5, 0x178(r30)
	  lwz       r5, 0x17C(r30)
	  stw       r6, 0x0(r5)
	  lwz       r5, 0x17C(r30)
	  sub       r0, r0, r5
	  stw       r0, 0xC(r5)
	  bl        0xBB620

	.loc_0xC0:
	  extsh.    r0, r31
	  ble-      .loc_0xD0
	  mr        r3, r30
	  bl        -0x331EC4

	.loc_0xD0:
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
 * Address:	80355F98
 * Size:	000090
 */
void Game::DiodeRed::Obj::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  beq-      .loc_0x3C
	  addi      r0, r31, 0x2C0
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x2C0(r31)
	  stw       r0, 0x2C4(r31)
	  stw       r0, 0x2C8(r31)

	.loc_0x3C:
	  mr        r3, r31
	  li        r4, 0
	  bl        0x2608
	  lis       r3, 0x804E
	  addi      r0, r31, 0x2C0
	  addi      r5, r3, 0x9FC
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r4, r5, 0x1B0
	  addi      r5, r5, 0x300
	  stw       r4, 0x178(r31)
	  lwz       r4, 0x17C(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0x17C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0xC(r4)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80356028
 * Size:	000010
 */
void Game::DiodeRed::Mgr::getEnemy((int))
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x2D0
	  lwz       r3, 0x44(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80356038
 * Size:	0000C8
 */
void Game::Watage::Mgr::__dt(void)
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
	  beq-      .loc_0xAC
	  lis       r3, 0x804E
	  subi      r3, r3, 0x1FB8
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804C
	  addi      r3, r3, 0x53D4
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  subi      r3, r3, 0x760
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4
	  subi      r3, r3, 0x5304
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4(r30)
	  bl        0xBB4B8

	.loc_0x9C:
	  extsh.    r0, r31
	  ble-      .loc_0xAC
	  mr        r3, r30
	  bl        -0x33202C

	.loc_0xAC:
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
 * Address:	80356100
 * Size:	000008
 */
void Game::Watage::Mgr::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x51
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80356108
 * Size:	00002C
 */
void Game::Watage::Mgr::doLoadBmd((void*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x2024
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  addi      r4, r5, 0x10
	  bl        -0x2E688C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80356134
 * Size:	000060
 */
void Game::Watage::Mgr::createObj((int))
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
	  mulli     r3, r31, 0x2D0
	  addi      r3, r3, 0x10
	  bl        -0x3321AC
	  lis       r4, 0x8035
	  lis       r5, 0x8035
	  addi      r4, r4, 0x6280
	  mr        r7, r31
	  addi      r5, r5, 0x6194
	  li        r6, 0x2D0
	  bl        -0x294784
	  stw       r3, 0x44(r30)
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
 * Address:	80356194
 * Size:	0000EC
 */
void Game::Watage::Obj::__dt(void)
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
	  beq-      .loc_0xD0
	  lis       r3, 0x804E
	  addi      r5, r30, 0x2C0
	  addi      r4, r3, 0x1070
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x300
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
	  lis       r3, 0x804E
	  addi      r4, r3, 0x16D0
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x300
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
	  lis       r3, 0x804B
	  addi      r0, r30, 0x2BC
	  subi      r4, r3, 0x5CDC
	  addi      r3, r30, 0x290
	  stw       r4, 0x0(r30)
	  addi      r5, r4, 0x1B0
	  addi      r6, r4, 0x2F8
	  li        r4, -0x1
	  stw       r5, 0x178(r30)
	  lwz       r5, 0x17C(r30)
	  stw       r6, 0x0(r5)
	  lwz       r5, 0x17C(r30)
	  sub       r0, r0, r5
	  stw       r0, 0xC(r5)
	  bl        0xBB338

	.loc_0xC0:
	  extsh.    r0, r31
	  ble-      .loc_0xD0
	  mr        r3, r30
	  bl        -0x3321AC

	.loc_0xD0:
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
 * Address:	80356280
 * Size:	000090
 */
void Game::Watage::Obj::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  beq-      .loc_0x3C
	  addi      r0, r31, 0x2C0
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x2C0(r31)
	  stw       r0, 0x2C4(r31)
	  stw       r0, 0x2C8(r31)

	.loc_0x3C:
	  mr        r3, r31
	  li        r4, 0
	  bl        0x2320
	  lis       r3, 0x804E
	  addi      r0, r31, 0x2C0
	  addi      r5, r3, 0x1070
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r4, r5, 0x1B0
	  addi      r5, r5, 0x300
	  stw       r4, 0x178(r31)
	  lwz       r4, 0x17C(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0x17C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0xC(r4)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80356310
 * Size:	000010
 */
void Game::Watage::Mgr::getEnemy((int))
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x2D0
	  lwz       r3, 0x44(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80356320
 * Size:	0000C8
 */
void Game::Tukushi::Mgr::__dt(void)
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
	  beq-      .loc_0xAC
	  lis       r3, 0x804E
	  subi      r3, r3, 0x1ED8
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804C
	  addi      r3, r3, 0x53D4
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  subi      r3, r3, 0x760
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4
	  subi      r3, r3, 0x5304
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4(r30)
	  bl        0xBB1D0

	.loc_0x9C:
	  extsh.    r0, r31
	  ble-      .loc_0xAC
	  mr        r3, r30
	  bl        -0x332314

	.loc_0xAC:
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
 * Address:	803563E8
 * Size:	000008
 */
void Game::Tukushi::Mgr::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803563F0
 * Size:	00002C
 */
void Game::Tukushi::Mgr::doLoadBmd((void*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x2024
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  addi      r4, r5, 0x10
	  bl        -0x2E6B74
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8035641C
 * Size:	000060
 */
void Game::Tukushi::Mgr::createObj((int))
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
	  mulli     r3, r31, 0x2D0
	  addi      r3, r3, 0x10
	  bl        -0x332494
	  lis       r4, 0x8035
	  lis       r5, 0x8035
	  addi      r4, r4, 0x6568
	  mr        r7, r31
	  addi      r5, r5, 0x647C
	  li        r6, 0x2D0
	  bl        -0x294A6C
	  stw       r3, 0x44(r30)
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
 * Address:	8035647C
 * Size:	0000EC
 */
void Game::Tukushi::Obj::__dt(void)
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
	  beq-      .loc_0xD0
	  lis       r3, 0x804E
	  addi      r5, r30, 0x2C0
	  subi      r4, r3, 0x1DF8
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x300
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
	  lis       r3, 0x804E
	  addi      r4, r3, 0x16D0
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x300
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
	  lis       r3, 0x804B
	  addi      r0, r30, 0x2BC
	  subi      r4, r3, 0x5CDC
	  addi      r3, r30, 0x290
	  stw       r4, 0x0(r30)
	  addi      r5, r4, 0x1B0
	  addi      r6, r4, 0x2F8
	  li        r4, -0x1
	  stw       r5, 0x178(r30)
	  lwz       r5, 0x17C(r30)
	  stw       r6, 0x0(r5)
	  lwz       r5, 0x17C(r30)
	  sub       r0, r0, r5
	  stw       r0, 0xC(r5)
	  bl        0xBB050

	.loc_0xC0:
	  extsh.    r0, r31
	  ble-      .loc_0xD0
	  mr        r3, r30
	  bl        -0x332494

	.loc_0xD0:
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
 * Address:	80356568
 * Size:	000090
 */
void Game::Tukushi::Obj::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  beq-      .loc_0x3C
	  addi      r0, r31, 0x2C0
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x2C0(r31)
	  stw       r0, 0x2C4(r31)
	  stw       r0, 0x2C8(r31)

	.loc_0x3C:
	  mr        r3, r31
	  li        r4, 0
	  bl        0x2038
	  lis       r3, 0x804E
	  addi      r0, r31, 0x2C0
	  subi      r5, r3, 0x1DF8
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r4, r5, 0x1B0
	  addi      r5, r5, 0x300
	  stw       r4, 0x178(r31)
	  lwz       r4, 0x17C(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0x17C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0xC(r4)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803565F8
 * Size:	000010
 */
void Game::Tukushi::Mgr::getEnemy((int))
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x2D0
	  lwz       r3, 0x44(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80356608
 * Size:	000034
 */
void Game::Tukushi::Obj::setParameters(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x1DB0
	  li        r0, 0x1
	  stb       r0, 0x26C(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8035663C
 * Size:	00006C
 */
void Game::Tukushi::Obj::getLODCylinder((Sys::Cylinder&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  mr        r0, r4
	  addi      r4, r1, 0x14
	  addi      r5, r1, 0x8
	  lfs       f3, 0x18C(r3)
	  stfs      f3, 0x8(r1)
	  lfs       f2, 0x190(r3)
	  stfs      f2, 0xC(r1)
	  frsp      f1, f2
	  lfs       f0, 0x194(r3)
	  stfs      f0, 0x10(r1)
	  stfs      f3, 0x14(r1)
	  stfs      f2, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  lwz       r6, 0xC0(r3)
	  mr        r3, r0
	  lfs       f0, 0x3AC(r6)
	  fadds     f0, f1, f0
	  stfs      f0, 0x18(r1)
	  lfs       f1, 0x384(r6)
	  bl        0xCAFD0
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803566A8
 * Size:	000008
 */
void Game::Tukushi::Obj::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803566B0
 * Size:	0000C8
 */
void Game::Wakame_l::Mgr::__dt(void)
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
	  beq-      .loc_0xAC
	  lis       r3, 0x804E
	  subi      r3, r3, 0x1AC8
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804C
	  addi      r3, r3, 0x53D4
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  subi      r3, r3, 0x760
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4
	  subi      r3, r3, 0x5304
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4(r30)
	  bl        0xBAE40

	.loc_0x9C:
	  extsh.    r0, r31
	  ble-      .loc_0xAC
	  mr        r3, r30
	  bl        -0x3326A4

	.loc_0xAC:
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
 * Address:	80356778
 * Size:	000008
 */
void Game::Wakame_l::Mgr::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x34
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80356780
 * Size:	00002C
 */
void Game::Wakame_l::Mgr::doLoadBmd((void*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x2024
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  addi      r4, r5, 0x10
	  bl        -0x2E6F04
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803567AC
 * Size:	000060
 */
void Game::Wakame_l::Mgr::createObj((int))
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
	  mulli     r3, r31, 0x2D0
	  addi      r3, r3, 0x10
	  bl        -0x332824
	  lis       r4, 0x8035
	  lis       r5, 0x8035
	  addi      r4, r4, 0x68F8
	  mr        r7, r31
	  addi      r5, r5, 0x680C
	  li        r6, 0x2D0
	  bl        -0x294DFC
	  stw       r3, 0x44(r30)
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
 * Address:	8035680C
 * Size:	0000EC
 */
void Game::Wakame_l::Obj::__dt(void)
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
	  beq-      .loc_0xD0
	  lis       r3, 0x804E
	  addi      r5, r30, 0x2C0
	  subi      r4, r3, 0x19E8
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x300
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
	  lis       r3, 0x804E
	  addi      r4, r3, 0x16D0
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x300
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
	  lis       r3, 0x804B
	  addi      r0, r30, 0x2BC
	  subi      r4, r3, 0x5CDC
	  addi      r3, r30, 0x290
	  stw       r4, 0x0(r30)
	  addi      r5, r4, 0x1B0
	  addi      r6, r4, 0x2F8
	  li        r4, -0x1
	  stw       r5, 0x178(r30)
	  lwz       r5, 0x17C(r30)
	  stw       r6, 0x0(r5)
	  lwz       r5, 0x17C(r30)
	  sub       r0, r0, r5
	  stw       r0, 0xC(r5)
	  bl        0xBACC0

	.loc_0xC0:
	  extsh.    r0, r31
	  ble-      .loc_0xD0
	  mr        r3, r30
	  bl        -0x332824

	.loc_0xD0:
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
 * Address:	803568F8
 * Size:	000090
 */
void Game::Wakame_l::Obj::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  beq-      .loc_0x3C
	  addi      r0, r31, 0x2C0
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x2C0(r31)
	  stw       r0, 0x2C4(r31)
	  stw       r0, 0x2C8(r31)

	.loc_0x3C:
	  mr        r3, r31
	  li        r4, 0
	  bl        0x1CA8
	  lis       r3, 0x804E
	  addi      r0, r31, 0x2C0
	  subi      r5, r3, 0x19E8
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r4, r5, 0x1B0
	  addi      r5, r5, 0x300
	  stw       r4, 0x178(r31)
	  lwz       r4, 0x17C(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0x17C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0xC(r4)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80356988
 * Size:	000010
 */
void Game::Wakame_l::Mgr::getEnemy((int))
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x2D0
	  lwz       r3, 0x44(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80356998
 * Size:	000034
 */
void Game::Wakame_l::Obj::setParameters(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x1A20
	  li        r0, 0x1
	  stb       r0, 0x26C(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803569CC
 * Size:	00006C
 */
void Game::Wakame_l::Obj::getLODCylinder((Sys::Cylinder&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  mr        r0, r4
	  addi      r4, r1, 0x14
	  addi      r5, r1, 0x8
	  lfs       f3, 0x18C(r3)
	  stfs      f3, 0x8(r1)
	  lfs       f2, 0x190(r3)
	  stfs      f2, 0xC(r1)
	  frsp      f1, f2
	  lfs       f0, 0x194(r3)
	  stfs      f0, 0x10(r1)
	  stfs      f3, 0x14(r1)
	  stfs      f2, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  lwz       r6, 0xC0(r3)
	  mr        r3, r0
	  lfs       f0, 0x3AC(r6)
	  fadds     f0, f1, f0
	  stfs      f0, 0x18(r1)
	  lfs       f1, 0x384(r6)
	  bl        0xCAC40
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80356A38
 * Size:	000008
 */
void Game::Wakame_l::Obj::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x34
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80356A40
 * Size:	0000C8
 */
void Game::Wakame_s::Mgr::__dt(void)
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
	  beq-      .loc_0xAC
	  lis       r3, 0x804E
	  subi      r3, r3, 0x16B8
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804C
	  addi      r3, r3, 0x53D4
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  subi      r3, r3, 0x760
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4
	  subi      r3, r3, 0x5304
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4(r30)
	  bl        0xBAAB0

	.loc_0x9C:
	  extsh.    r0, r31
	  ble-      .loc_0xAC
	  mr        r3, r30
	  bl        -0x332A34

	.loc_0xAC:
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
 * Address:	80356B08
 * Size:	000008
 */
void Game::Wakame_s::Mgr::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x33
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80356B10
 * Size:	00002C
 */
void Game::Wakame_s::Mgr::doLoadBmd((void*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x2024
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  addi      r4, r5, 0x10
	  bl        -0x2E7294
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80356B3C
 * Size:	000060
 */
void Game::Wakame_s::Mgr::createObj((int))
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
	  mulli     r3, r31, 0x2D0
	  addi      r3, r3, 0x10
	  bl        -0x332BB4
	  lis       r4, 0x8035
	  lis       r5, 0x8035
	  addi      r4, r4, 0x6C88
	  mr        r7, r31
	  addi      r5, r5, 0x6B9C
	  li        r6, 0x2D0
	  bl        -0x29518C
	  stw       r3, 0x44(r30)
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
 * Address:	80356B9C
 * Size:	0000EC
 */
void Game::Wakame_s::Obj::__dt(void)
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
	  beq-      .loc_0xD0
	  lis       r3, 0x804E
	  addi      r5, r30, 0x2C0
	  subi      r4, r3, 0x15D8
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x300
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
	  lis       r3, 0x804E
	  addi      r4, r3, 0x16D0
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x300
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
	  lis       r3, 0x804B
	  addi      r0, r30, 0x2BC
	  subi      r4, r3, 0x5CDC
	  addi      r3, r30, 0x290
	  stw       r4, 0x0(r30)
	  addi      r5, r4, 0x1B0
	  addi      r6, r4, 0x2F8
	  li        r4, -0x1
	  stw       r5, 0x178(r30)
	  lwz       r5, 0x17C(r30)
	  stw       r6, 0x0(r5)
	  lwz       r5, 0x17C(r30)
	  sub       r0, r0, r5
	  stw       r0, 0xC(r5)
	  bl        0xBA930

	.loc_0xC0:
	  extsh.    r0, r31
	  ble-      .loc_0xD0
	  mr        r3, r30
	  bl        -0x332BB4

	.loc_0xD0:
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
 * Address:	80356C88
 * Size:	000090
 */
void Game::Wakame_s::Obj::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  beq-      .loc_0x3C
	  addi      r0, r31, 0x2C0
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x2C0(r31)
	  stw       r0, 0x2C4(r31)
	  stw       r0, 0x2C8(r31)

	.loc_0x3C:
	  mr        r3, r31
	  li        r4, 0
	  bl        0x1918
	  lis       r3, 0x804E
	  addi      r0, r31, 0x2C0
	  subi      r5, r3, 0x15D8
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r4, r5, 0x1B0
	  addi      r5, r5, 0x300
	  stw       r4, 0x178(r31)
	  lwz       r4, 0x17C(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0x17C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0xC(r4)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80356D18
 * Size:	000010
 */
void Game::Wakame_s::Mgr::getEnemy((int))
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x2D0
	  lwz       r3, 0x44(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80356D28
 * Size:	000034
 */
void Game::Wakame_s::Obj::setParameters(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x1690
	  li        r0, 0x1
	  stb       r0, 0x26C(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80356D5C
 * Size:	00006C
 */
void Game::Wakame_s::Obj::getLODCylinder((Sys::Cylinder&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  mr        r0, r4
	  addi      r4, r1, 0x14
	  addi      r5, r1, 0x8
	  lfs       f3, 0x18C(r3)
	  stfs      f3, 0x8(r1)
	  lfs       f2, 0x190(r3)
	  stfs      f2, 0xC(r1)
	  frsp      f1, f2
	  lfs       f0, 0x194(r3)
	  stfs      f0, 0x10(r1)
	  stfs      f3, 0x14(r1)
	  stfs      f2, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  lwz       r6, 0xC0(r3)
	  mr        r3, r0
	  lfs       f0, 0x3AC(r6)
	  fadds     f0, f1, f0
	  stfs      f0, 0x18(r1)
	  lfs       f1, 0x384(r6)
	  bl        0xCA8B0
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80356DC8
 * Size:	000008
 */
void Game::Wakame_s::Obj::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x33
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80356DD0
 * Size:	0000C8
 */
void Game::KareOoinu_l::Mgr::__dt(void)
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
	  beq-      .loc_0xAC
	  lis       r3, 0x804E
	  subi      r3, r3, 0x12A8
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804C
	  addi      r3, r3, 0x53D4
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  subi      r3, r3, 0x760
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4
	  subi      r3, r3, 0x5304
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4(r30)
	  bl        0xBA720

	.loc_0x9C:
	  extsh.    r0, r31
	  ble-      .loc_0xAC
	  mr        r3, r30
	  bl        -0x332DC4

	.loc_0xAC:
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
 * Address:	80356E98
 * Size:	000008
 */
void Game::KareOoinu_l::Mgr::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x5C
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80356EA0
 * Size:	00002C
 */
void Game::KareOoinu_l::Mgr::doLoadBmd((void*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x2024
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  addi      r4, r5, 0x10
	  bl        -0x2E7624
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80356ECC
 * Size:	000060
 */
void Game::KareOoinu_l::Mgr::createObj((int))
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
	  mulli     r3, r31, 0x2D0
	  addi      r3, r3, 0x10
	  bl        -0x332F44
	  lis       r4, 0x8035
	  lis       r5, 0x8035
	  addi      r4, r4, 0x7018
	  mr        r7, r31
	  addi      r5, r5, 0x6F2C
	  li        r6, 0x2D0
	  bl        -0x29551C
	  stw       r3, 0x44(r30)
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
 * Address:	80356F2C
 * Size:	0000EC
 */
void Game::KareOoinu_l::Obj::__dt(void)
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
	  beq-      .loc_0xD0
	  lis       r3, 0x804E
	  addi      r5, r30, 0x2C0
	  subi      r4, r3, 0x11C8
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x300
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
	  lis       r3, 0x804E
	  addi      r4, r3, 0x16D0
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x300
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
	  lis       r3, 0x804B
	  addi      r0, r30, 0x2BC
	  subi      r4, r3, 0x5CDC
	  addi      r3, r30, 0x290
	  stw       r4, 0x0(r30)
	  addi      r5, r4, 0x1B0
	  addi      r6, r4, 0x2F8
	  li        r4, -0x1
	  stw       r5, 0x178(r30)
	  lwz       r5, 0x17C(r30)
	  stw       r6, 0x0(r5)
	  lwz       r5, 0x17C(r30)
	  sub       r0, r0, r5
	  stw       r0, 0xC(r5)
	  bl        0xBA5A0

	.loc_0xC0:
	  extsh.    r0, r31
	  ble-      .loc_0xD0
	  mr        r3, r30
	  bl        -0x332F44

	.loc_0xD0:
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
 * Address:	80357018
 * Size:	000090
 */
void Game::KareOoinu_l::Obj::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  beq-      .loc_0x3C
	  addi      r0, r31, 0x2C0
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x2C0(r31)
	  stw       r0, 0x2C4(r31)
	  stw       r0, 0x2C8(r31)

	.loc_0x3C:
	  mr        r3, r31
	  li        r4, 0
	  bl        0x1588
	  lis       r3, 0x804E
	  addi      r0, r31, 0x2C0
	  subi      r5, r3, 0x11C8
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r4, r5, 0x1B0
	  addi      r5, r5, 0x300
	  stw       r4, 0x178(r31)
	  lwz       r4, 0x17C(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0x17C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0xC(r4)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803570A8
 * Size:	000010
 */
void Game::KareOoinu_l::Mgr::getEnemy((int))
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x2D0
	  lwz       r3, 0x44(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803570B8
 * Size:	000008
 */
void Game::KareOoinu_l::Obj::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x5C
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803570C0
 * Size:	0000C8
 */
void Game::Ooinu_l::Mgr::__dt(void)
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
	  beq-      .loc_0xAC
	  lis       r3, 0x804E
	  subi      r3, r3, 0xE98
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804C
	  addi      r3, r3, 0x53D4
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  subi      r3, r3, 0x760
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4
	  subi      r3, r3, 0x5304
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4(r30)
	  bl        0xBA430

	.loc_0x9C:
	  extsh.    r0, r31
	  ble-      .loc_0xAC
	  mr        r3, r30
	  bl        -0x3330B4

	.loc_0xAC:
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
 * Address:	80357188
 * Size:	000008
 */
void Game::Ooinu_l::Mgr::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x32
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80357190
 * Size:	00002C
 */
void Game::Ooinu_l::Mgr::doLoadBmd((void*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x2024
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  addi      r4, r5, 0x10
	  bl        -0x2E7914
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803571BC
 * Size:	000060
 */
void Game::Ooinu_l::Mgr::createObj((int))
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
	  mulli     r3, r31, 0x2D0
	  addi      r3, r3, 0x10
	  bl        -0x333234
	  lis       r4, 0x8035
	  lis       r5, 0x8035
	  addi      r4, r4, 0x7308
	  mr        r7, r31
	  addi      r5, r5, 0x721C
	  li        r6, 0x2D0
	  bl        -0x29580C
	  stw       r3, 0x44(r30)
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
 * Address:	8035721C
 * Size:	0000EC
 */
void Game::Ooinu_l::Obj::__dt(void)
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
	  beq-      .loc_0xD0
	  lis       r3, 0x804E
	  addi      r5, r30, 0x2C0
	  subi      r4, r3, 0xDB8
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x300
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
	  lis       r3, 0x804E
	  addi      r4, r3, 0x16D0
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x300
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
	  lis       r3, 0x804B
	  addi      r0, r30, 0x2BC
	  subi      r4, r3, 0x5CDC
	  addi      r3, r30, 0x290
	  stw       r4, 0x0(r30)
	  addi      r5, r4, 0x1B0
	  addi      r6, r4, 0x2F8
	  li        r4, -0x1
	  stw       r5, 0x178(r30)
	  lwz       r5, 0x17C(r30)
	  stw       r6, 0x0(r5)
	  lwz       r5, 0x17C(r30)
	  sub       r0, r0, r5
	  stw       r0, 0xC(r5)
	  bl        0xBA2B0

	.loc_0xC0:
	  extsh.    r0, r31
	  ble-      .loc_0xD0
	  mr        r3, r30
	  bl        -0x333234

	.loc_0xD0:
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
 * Address:	80357308
 * Size:	000090
 */
void Game::Ooinu_l::Obj::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  beq-      .loc_0x3C
	  addi      r0, r31, 0x2C0
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x2C0(r31)
	  stw       r0, 0x2C4(r31)
	  stw       r0, 0x2C8(r31)

	.loc_0x3C:
	  mr        r3, r31
	  li        r4, 0
	  bl        0x1298
	  lis       r3, 0x804E
	  addi      r0, r31, 0x2C0
	  subi      r5, r3, 0xDB8
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r4, r5, 0x1B0
	  addi      r5, r5, 0x300
	  stw       r4, 0x178(r31)
	  lwz       r4, 0x17C(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0x17C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0xC(r4)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80357398
 * Size:	000010
 */
void Game::Ooinu_l::Mgr::getEnemy((int))
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x2D0
	  lwz       r3, 0x44(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803573A8
 * Size:	000008
 */
void Game::Ooinu_l::Obj::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x32
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803573B0
 * Size:	0000C8
 */
void Game::KareOoinu_s::Mgr::__dt(void)
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
	  beq-      .loc_0xAC
	  lis       r3, 0x804E
	  subi      r3, r3, 0xA88
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804C
	  addi      r3, r3, 0x53D4
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  subi      r3, r3, 0x760
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4
	  subi      r3, r3, 0x5304
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4(r30)
	  bl        0xBA140

	.loc_0x9C:
	  extsh.    r0, r31
	  ble-      .loc_0xAC
	  mr        r3, r30
	  bl        -0x3333A4

	.loc_0xAC:
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
 * Address:	80357478
 * Size:	000008
 */
void Game::KareOoinu_s::Mgr::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x5B
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80357480
 * Size:	00002C
 */
void Game::KareOoinu_s::Mgr::doLoadBmd((void*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x2024
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  addi      r4, r5, 0x10
	  bl        -0x2E7C04
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803574AC
 * Size:	000060
 */
void Game::KareOoinu_s::Mgr::createObj((int))
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
	  mulli     r3, r31, 0x2D0
	  addi      r3, r3, 0x10
	  bl        -0x333524
	  lis       r4, 0x8035
	  lis       r5, 0x8035
	  addi      r4, r4, 0x75F8
	  mr        r7, r31
	  addi      r5, r5, 0x750C
	  li        r6, 0x2D0
	  bl        -0x295AFC
	  stw       r3, 0x44(r30)
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
 * Address:	8035750C
 * Size:	0000EC
 */
void Game::KareOoinu_s::Obj::__dt(void)
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
	  beq-      .loc_0xD0
	  lis       r3, 0x804E
	  addi      r5, r30, 0x2C0
	  subi      r4, r3, 0x9A8
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x300
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
	  lis       r3, 0x804E
	  addi      r4, r3, 0x16D0
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x300
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
	  lis       r3, 0x804B
	  addi      r0, r30, 0x2BC
	  subi      r4, r3, 0x5CDC
	  addi      r3, r30, 0x290
	  stw       r4, 0x0(r30)
	  addi      r5, r4, 0x1B0
	  addi      r6, r4, 0x2F8
	  li        r4, -0x1
	  stw       r5, 0x178(r30)
	  lwz       r5, 0x17C(r30)
	  stw       r6, 0x0(r5)
	  lwz       r5, 0x17C(r30)
	  sub       r0, r0, r5
	  stw       r0, 0xC(r5)
	  bl        0xB9FC0

	.loc_0xC0:
	  extsh.    r0, r31
	  ble-      .loc_0xD0
	  mr        r3, r30
	  bl        -0x333524

	.loc_0xD0:
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
 * Address:	803575F8
 * Size:	000090
 */
void Game::KareOoinu_s::Obj::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  beq-      .loc_0x3C
	  addi      r0, r31, 0x2C0
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x2C0(r31)
	  stw       r0, 0x2C4(r31)
	  stw       r0, 0x2C8(r31)

	.loc_0x3C:
	  mr        r3, r31
	  li        r4, 0
	  bl        0xFA8
	  lis       r3, 0x804E
	  addi      r0, r31, 0x2C0
	  subi      r5, r3, 0x9A8
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r4, r5, 0x1B0
	  addi      r5, r5, 0x300
	  stw       r4, 0x178(r31)
	  lwz       r4, 0x17C(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0x17C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0xC(r4)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80357688
 * Size:	000010
 */
void Game::KareOoinu_s::Mgr::getEnemy((int))
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x2D0
	  lwz       r3, 0x44(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80357698
 * Size:	000008
 */
void Game::KareOoinu_s::Obj::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x5B
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803576A0
 * Size:	0000C8
 */
void Game::Ooinu_s::Mgr::__dt(void)
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
	  beq-      .loc_0xAC
	  lis       r3, 0x804E
	  subi      r3, r3, 0x678
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804C
	  addi      r3, r3, 0x53D4
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  subi      r3, r3, 0x760
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4
	  subi      r3, r3, 0x5304
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4(r30)
	  bl        0xB9E50

	.loc_0x9C:
	  extsh.    r0, r31
	  ble-      .loc_0xAC
	  mr        r3, r30
	  bl        -0x333694

	.loc_0xAC:
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
 * Address:	80357768
 * Size:	000008
 */
void Game::Ooinu_s::Mgr::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80357770
 * Size:	00002C
 */
void Game::Ooinu_s::Mgr::doLoadBmd((void*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x2024
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  addi      r4, r5, 0x10
	  bl        -0x2E7EF4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8035779C
 * Size:	000060
 */
void Game::Ooinu_s::Mgr::createObj((int))
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
	  mulli     r3, r31, 0x2D0
	  addi      r3, r3, 0x10
	  bl        -0x333814
	  lis       r4, 0x8035
	  lis       r5, 0x8035
	  addi      r4, r4, 0x78E8
	  mr        r7, r31
	  addi      r5, r5, 0x77FC
	  li        r6, 0x2D0
	  bl        -0x295DEC
	  stw       r3, 0x44(r30)
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
 * Address:	803577FC
 * Size:	0000EC
 */
void Game::Ooinu_s::Obj::__dt(void)
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
	  beq-      .loc_0xD0
	  lis       r3, 0x804E
	  addi      r5, r30, 0x2C0
	  subi      r4, r3, 0x598
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x300
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
	  lis       r3, 0x804E
	  addi      r4, r3, 0x16D0
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x300
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
	  lis       r3, 0x804B
	  addi      r0, r30, 0x2BC
	  subi      r4, r3, 0x5CDC
	  addi      r3, r30, 0x290
	  stw       r4, 0x0(r30)
	  addi      r5, r4, 0x1B0
	  addi      r6, r4, 0x2F8
	  li        r4, -0x1
	  stw       r5, 0x178(r30)
	  lwz       r5, 0x17C(r30)
	  stw       r6, 0x0(r5)
	  lwz       r5, 0x17C(r30)
	  sub       r0, r0, r5
	  stw       r0, 0xC(r5)
	  bl        0xB9CD0

	.loc_0xC0:
	  extsh.    r0, r31
	  ble-      .loc_0xD0
	  mr        r3, r30
	  bl        -0x333814

	.loc_0xD0:
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
 * Address:	803578E8
 * Size:	000090
 */
void Game::Ooinu_s::Obj::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  beq-      .loc_0x3C
	  addi      r0, r31, 0x2C0
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x2C0(r31)
	  stw       r0, 0x2C4(r31)
	  stw       r0, 0x2C8(r31)

	.loc_0x3C:
	  mr        r3, r31
	  li        r4, 0
	  bl        0xCB8
	  lis       r3, 0x804E
	  addi      r0, r31, 0x2C0
	  subi      r5, r3, 0x598
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r4, r5, 0x1B0
	  addi      r5, r5, 0x300
	  stw       r4, 0x178(r31)
	  lwz       r4, 0x17C(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0x17C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0xC(r4)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80357978
 * Size:	000010
 */
void Game::Ooinu_s::Mgr::getEnemy((int))
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x2D0
	  lwz       r3, 0x44(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80357988
 * Size:	000008
 */
void Game::Ooinu_s::Obj::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80357990
 * Size:	0000C8
 */
void Game::HikariKinoko::Mgr::__dt(void)
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
	  beq-      .loc_0xAC
	  lis       r3, 0x804E
	  subi      r3, r3, 0x268
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804C
	  addi      r3, r3, 0x53D4
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  subi      r3, r3, 0x760
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4
	  subi      r3, r3, 0x5304
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4(r30)
	  bl        0xB9B60

	.loc_0x9C:
	  extsh.    r0, r31
	  ble-      .loc_0xAC
	  mr        r3, r30
	  bl        -0x333984

	.loc_0xAC:
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
 * Address:	80357A58
 * Size:	000008
 */
void Game::HikariKinoko::Mgr::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80357A60
 * Size:	00002C
 */
void Game::HikariKinoko::Mgr::doLoadBmd((void*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x2024
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  addi      r4, r5, 0x10
	  bl        -0x2E81E4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80357A8C
 * Size:	000060
 */
void Game::HikariKinoko::Mgr::createObj((int))
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
	  mulli     r3, r31, 0x2D0
	  addi      r3, r3, 0x10
	  bl        -0x333B04
	  lis       r4, 0x8035
	  lis       r5, 0x8035
	  addi      r4, r4, 0x7BD8
	  mr        r7, r31
	  addi      r5, r5, 0x7AEC
	  li        r6, 0x2D0
	  bl        -0x2960DC
	  stw       r3, 0x44(r30)
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
 * Address:	80357AEC
 * Size:	0000EC
 */
void Game::HikariKinoko::Obj::__dt(void)
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
	  beq-      .loc_0xD0
	  lis       r3, 0x804E
	  addi      r5, r30, 0x2C0
	  addi      r4, r3, 0x13A0
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x300
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
	  lis       r3, 0x804E
	  addi      r4, r3, 0x16D0
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x300
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
	  lis       r3, 0x804B
	  addi      r0, r30, 0x2BC
	  subi      r4, r3, 0x5CDC
	  addi      r3, r30, 0x290
	  stw       r4, 0x0(r30)
	  addi      r5, r4, 0x1B0
	  addi      r6, r4, 0x2F8
	  li        r4, -0x1
	  stw       r5, 0x178(r30)
	  lwz       r5, 0x17C(r30)
	  stw       r6, 0x0(r5)
	  lwz       r5, 0x17C(r30)
	  sub       r0, r0, r5
	  stw       r0, 0xC(r5)
	  bl        0xB99E0

	.loc_0xC0:
	  extsh.    r0, r31
	  ble-      .loc_0xD0
	  mr        r3, r30
	  bl        -0x333B04

	.loc_0xD0:
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
 * Address:	80357BD8
 * Size:	000090
 */
void Game::HikariKinoko::Obj::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  beq-      .loc_0x3C
	  addi      r0, r31, 0x2C0
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x2C0(r31)
	  stw       r0, 0x2C4(r31)
	  stw       r0, 0x2C8(r31)

	.loc_0x3C:
	  mr        r3, r31
	  li        r4, 0
	  bl        0x9C8
	  lis       r3, 0x804E
	  addi      r0, r31, 0x2C0
	  addi      r5, r3, 0x13A0
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r4, r5, 0x1B0
	  addi      r5, r5, 0x300
	  stw       r4, 0x178(r31)
	  lwz       r4, 0x17C(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0x17C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0xC(r4)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80357C68
 * Size:	000010
 */
void Game::HikariKinoko::Mgr::getEnemy((int))
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x2D0
	  lwz       r3, 0x44(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80357C78
 * Size:	0000C8
 */
void Game::Clover::Mgr::__dt(void)
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
	  beq-      .loc_0xAC
	  lis       r3, 0x804E
	  subi      r3, r3, 0x188
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804C
	  addi      r3, r3, 0x53D4
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  subi      r3, r3, 0x760
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4
	  subi      r3, r3, 0x5304
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4(r30)
	  bl        0xB9878

	.loc_0x9C:
	  extsh.    r0, r31
	  ble-      .loc_0xAC
	  mr        r3, r30
	  bl        -0x333C6C

	.loc_0xAC:
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
 * Address:	80357D40
 * Size:	000008
 */
void Game::Clover::Mgr::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x2F
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80357D48
 * Size:	00002C
 */
void Game::Clover::Mgr::doLoadBmd((void*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x2024
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  addi      r4, r5, 0x10
	  bl        -0x2E84CC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80357D74
 * Size:	000060
 */
void Game::Clover::Mgr::createObj((int))
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
	  mulli     r3, r31, 0x2D0
	  addi      r3, r3, 0x10
	  bl        -0x333DEC
	  lis       r4, 0x8035
	  lis       r5, 0x8035
	  addi      r4, r4, 0x7EC0
	  mr        r7, r31
	  addi      r5, r5, 0x7DD4
	  li        r6, 0x2D0
	  bl        -0x2963C4
	  stw       r3, 0x44(r30)
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
 * Address:	80357DD4
 * Size:	0000EC
 */
void Game::Clover::Obj::__dt(void)
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
	  beq-      .loc_0xD0
	  lis       r3, 0x804E
	  addi      r5, r30, 0x2C0
	  subi      r4, r3, 0xA8
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x300
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
	  lis       r3, 0x804E
	  addi      r4, r3, 0x16D0
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x300
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
	  lis       r3, 0x804B
	  addi      r0, r30, 0x2BC
	  subi      r4, r3, 0x5CDC
	  addi      r3, r30, 0x290
	  stw       r4, 0x0(r30)
	  addi      r5, r4, 0x1B0
	  addi      r6, r4, 0x2F8
	  li        r4, -0x1
	  stw       r5, 0x178(r30)
	  lwz       r5, 0x17C(r30)
	  stw       r6, 0x0(r5)
	  lwz       r5, 0x17C(r30)
	  sub       r0, r0, r5
	  stw       r0, 0xC(r5)
	  bl        0xB96F8

	.loc_0xC0:
	  extsh.    r0, r31
	  ble-      .loc_0xD0
	  mr        r3, r30
	  bl        -0x333DEC

	.loc_0xD0:
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
 * Address:	80357EC0
 * Size:	000090
 */
void Game::Clover::Obj::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  beq-      .loc_0x3C
	  addi      r0, r31, 0x2C0
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x2C0(r31)
	  stw       r0, 0x2C4(r31)
	  stw       r0, 0x2C8(r31)

	.loc_0x3C:
	  mr        r3, r31
	  li        r4, 0
	  bl        0x6E0
	  lis       r3, 0x804E
	  addi      r0, r31, 0x2C0
	  subi      r5, r3, 0xA8
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r4, r5, 0x1B0
	  addi      r5, r5, 0x300
	  stw       r4, 0x178(r31)
	  lwz       r4, 0x17C(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0x17C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0xC(r4)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80357F50
 * Size:	000010
 */
void Game::Clover::Mgr::getEnemy((int))
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x2D0
	  lwz       r3, 0x44(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80357F60
 * Size:	000008
 */
void Game::Clover::Obj::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x2F
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80357F68
 * Size:	0000C8
 */
void Game::Tanpopo::Mgr::__dt(void)
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
	  beq-      .loc_0xAC
	  lis       r3, 0x804E
	  addi      r3, r3, 0x288
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804C
	  addi      r3, r3, 0x53D4
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  subi      r3, r3, 0x760
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4
	  subi      r3, r3, 0x5304
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4(r30)
	  bl        0xB9588

	.loc_0x9C:
	  extsh.    r0, r31
	  ble-      .loc_0xAC
	  mr        r3, r30
	  bl        -0x333F5C

	.loc_0xAC:
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
 * Address:	80358030
 * Size:	000008
 */
void Game::Tanpopo::Mgr::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x2E
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80358038
 * Size:	00002C
 */
void Game::Tanpopo::Mgr::doLoadBmd((void*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x2024
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  addi      r4, r5, 0x10
	  bl        -0x2E87BC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80358064
 * Size:	000060
 */
void Game::Tanpopo::Mgr::createObj((int))
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
	  mulli     r3, r31, 0x2D0
	  addi      r3, r3, 0x10
	  bl        -0x3340DC
	  lis       r4, 0x8036
	  lis       r5, 0x8036
	  subi      r4, r4, 0x7E50
	  mr        r7, r31
	  subi      r5, r5, 0x7F3C
	  li        r6, 0x2D0
	  bl        -0x2966B4
	  stw       r3, 0x44(r30)
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
 * Address:	803580C4
 * Size:	0000EC
 */
void Game::Tanpopo::Obj::__dt(void)
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
	  beq-      .loc_0xD0
	  lis       r3, 0x804E
	  addi      r5, r30, 0x2C0
	  addi      r4, r3, 0x368
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x300
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
	  lis       r3, 0x804E
	  addi      r4, r3, 0x16D0
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x300
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
	  lis       r3, 0x804B
	  addi      r0, r30, 0x2BC
	  subi      r4, r3, 0x5CDC
	  addi      r3, r30, 0x290
	  stw       r4, 0x0(r30)
	  addi      r5, r4, 0x1B0
	  addi      r6, r4, 0x2F8
	  li        r4, -0x1
	  stw       r5, 0x178(r30)
	  lwz       r5, 0x17C(r30)
	  stw       r6, 0x0(r5)
	  lwz       r5, 0x17C(r30)
	  sub       r0, r0, r5
	  stw       r0, 0xC(r5)
	  bl        0xB9408

	.loc_0xC0:
	  extsh.    r0, r31
	  ble-      .loc_0xD0
	  mr        r3, r30
	  bl        -0x3340DC

	.loc_0xD0:
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
 * Address:	803581B0
 * Size:	000090
 */
void Game::Tanpopo::Obj::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  beq-      .loc_0x3C
	  addi      r0, r31, 0x2C0
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x2C0(r31)
	  stw       r0, 0x2C4(r31)
	  stw       r0, 0x2C8(r31)

	.loc_0x3C:
	  mr        r3, r31
	  li        r4, 0
	  bl        0x3F0
	  lis       r3, 0x804E
	  addi      r0, r31, 0x2C0
	  addi      r5, r3, 0x368
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r4, r5, 0x1B0
	  addi      r5, r5, 0x300
	  stw       r4, 0x178(r31)
	  lwz       r4, 0x17C(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0x17C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0xC(r4)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80358240
 * Size:	000010
 */
void Game::Tanpopo::Mgr::getEnemy((int))
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x2D0
	  lwz       r3, 0x44(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80358250
 * Size:	000008
 */
void Game::Tanpopo::Obj::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x2E
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80358258
 * Size:	000008
 */
void @4 @Game::Tanpopo::Mgr::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x2F4
	*/
}

/*
 * --INFO--
 * Address:	80358260
 * Size:	000008
 */
void @4 @Game::Clover::Mgr::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x5EC
	*/
}

/*
 * --INFO--
 * Address:	80358268
 * Size:	000008
 */
void @4 @Game::HikariKinoko::Mgr::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x8DC
	*/
}

/*
 * --INFO--
 * Address:	80358270
 * Size:	000008
 */
void @4 @Game::Ooinu_s::Mgr::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0xBD4
	*/
}

/*
 * --INFO--
 * Address:	80358278
 * Size:	000008
 */
void @4 @Game::KareOoinu_s::Mgr::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0xECC
	*/
}

/*
 * --INFO--
 * Address:	80358280
 * Size:	000008
 */
void @4 @Game::Ooinu_l::Mgr::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x11C4
	*/
}

/*
 * --INFO--
 * Address:	80358288
 * Size:	000008
 */
void @4 @Game::KareOoinu_l::Mgr::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x14BC
	*/
}

/*
 * --INFO--
 * Address:	80358290
 * Size:	000008
 */
void @4 @Game::Wakame_s::Mgr::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x1854
	*/
}

/*
 * --INFO--
 * Address:	80358298
 * Size:	000008
 */
void @4 @Game::Wakame_l::Mgr::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x1BEC
	*/
}

/*
 * --INFO--
 * Address:	803582A0
 * Size:	000008
 */
void @4 @Game::Tukushi::Mgr::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x1F84
	*/
}

/*
 * --INFO--
 * Address:	803582A8
 * Size:	000008
 */
void @4 @Game::Watage::Mgr::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x2274
	*/
}

/*
 * --INFO--
 * Address:	803582B0
 * Size:	000008
 */
void @4 @Game::DiodeRed::Mgr::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x2620
	*/
}

/*
 * --INFO--
 * Address:	803582B8
 * Size:	000008
 */
void @4 @Game::DiodeGreen::Mgr::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x29CC
	*/
}

/*
 * --INFO--
 * Address:	803582C0
 * Size:	000008
 */
void @4 @Game::Margaret::Mgr::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x2CC4
	*/
}

/*
 * --INFO--
 * Address:	803582C8
 * Size:	000008
 */
void @4 @Game::Nekojarashi::Mgr::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x2FB4
	*/
}

/*
 * --INFO--
 * Address:	803582D0
 * Size:	000008
 */
void @4 @Game::Chiyogami::Mgr::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x334C
	*/
}

/*
 * --INFO--
 * Address:	803582D8
 * Size:	000014
 */
void @704 @12 @Game::EnemyBase::viewOnPelletKilled(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2C0
	  b         -0x2519CC
	*/
}

/*
 * --INFO--
 * Address:	803582EC
 * Size:	000014
 */
void @704 @12 @Game::EnemyBase::viewStartCarryMotion(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2C0
	  b         -0x251C54
	*/
}

/*
 * --INFO--
 * Address:	80358300
 * Size:	000014
 */
void @704 @12 @Game::EnemyBase::viewStartPreCarryMotion(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2C0
	  b         -0x251C48
	*/
}

/*
 * --INFO--
 * Address:	80358314
 * Size:	000014
 */
void @704 @12 @Game::EnemyBase::view_finish_carrymotion(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2C0
	  b         -0x2518AC
	*/
}

/*
 * --INFO--
 * Address:	80358328
 * Size:	000014
 */
void @704 @12 @Game::EnemyBase::view_start_carrymotion(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2C0
	  b         -0x2518EC
	*/
}

/*
 * --INFO--
 * Address:	8035833C
 * Size:	000014
 */
void @704 @12 @Game::EnemyBase::viewGetShape(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2C0
	  b         -0x251CAC
	*/
}

/*
 * --INFO--
 * Address:	80358350
 * Size:	000008
 */
void @4 @Game::Zenmai::Mgr::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x387C
	*/
}

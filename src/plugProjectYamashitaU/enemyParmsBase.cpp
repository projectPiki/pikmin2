

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void Game::_Print(char *, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8012A244
 * Size:	000094
 */
void Game::EnemyParmsBase::loadSettingFile( (JKRArchive *, char *))
{
/*
.loc_0x0:
  stwu      r1, -0x430(r1)
  mflr      r0
  stw       r0, 0x434(r1)
  stw       r31, 0x42C(r1)
  mr        r31, r3
  mr        r3, r4
  lwz       r12, 0x0(r4)
  mr        r4, r5
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  cmplwi    r3, 0
  beq-      .loc_0x7C
  mr        r4, r3
  addi      r3, r1, 0x8
  li        r5, -0x1
  bl        0x2EB674
  li        r0, 0x1
  cmpwi     r0, 0x1
  stw       r0, 0x14(r1)
  bne-      .loc_0x5C
  li        r0, 0
  stw       r0, 0x41C(r1)

.loc_0x5C:
  mr        r3, r31
  addi      r4, r1, 0x8
  lwz       r12, 0xD8(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  li        r3, 0x1
  b         .loc_0x80

.loc_0x7C:
  li        r3, 0

.loc_0x80:
  lwz       r0, 0x434(r1)
  lwz       r31, 0x42C(r1)
  mtlr      r0
  addi      r1, r1, 0x430
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
void Game::EnemyParmsBase::loadSettingFile( (char *))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8012A2D8
 * Size:	000024
 */
void Game::EnemyParmsBase::setDebugParm( (unsigned long))
{
/*
.loc_0x0:
  lhz       r6, 0xDC(r3)
  rlwinm    r5,r4,0,16,31
  rlwinm    r0,r4,16,16,31
  or        r4, r6, r5
  sth       r4, 0xDC(r3)
  lhz       r4, 0xDE(r3)
  or        r0, r4, r0
  sth       r0, 0xDE(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8012A2FC
 * Size:	000024
 */
void Game::EnemyParmsBase::resetDebugParm( (unsigned long))
{
/*
.loc_0x0:
  lhz       r6, 0xDC(r3)
  rlwinm    r5,r4,0,16,31
  rlwinm    r0,r4,16,16,31
  andc      r4, r6, r5
  sth       r4, 0xDC(r3)
  lhz       r4, 0xDE(r3)
  andc      r0, r4, r0
  sth       r0, 0xDE(r3)
  blr
*/
}

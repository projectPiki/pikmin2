

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char *, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8023381C
 * Size:	000034
 */
void Game::TekiStat::Info::incKilled(void)
{
/*
.loc_0x0:
  lwz       r4, -0x6C18(r13)
  cmplwi    r4, 0
  beqlr-    
  lwz       r0, 0x44(r4)
  cmpwi     r0, 0
  bnelr-    
  lwz       r4, 0x0(r3)
  addi      r0, r4, 0x1
  stw       r0, 0x0(r3)
  lbz       r0, 0x8(r3)
  ori       r0, r0, 0x1
  stb       r0, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80233850
 * Size:	000028
 */
void Game::TekiStat::Info::incKillPikmin(void)
{
/*
.loc_0x0:
  lwz       r4, -0x6C18(r13)
  cmplwi    r4, 0
  beqlr-    
  lwz       r0, 0x44(r4)
  cmpwi     r0, 0
  bnelr-    
  lwz       r4, 0x4(r3)
  addi      r0, r4, 0x1
  stw       r0, 0x4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80233878
 * Size:	000010
 */
void Game::TekiStat::Mgr::__ct(void)
{
/*
.loc_0x0:
  li        r0, 0
  stw       r0, 0x0(r3)
  stw       r0, 0x4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80233888
 * Size:	000084
 */
void Game::TekiStat::Mgr::whatsNew(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  li        r31, 0
  stw       r30, 0x8(r1)
  mr        r30, r3
  b         .loc_0x5C

.loc_0x20:
  mr        r3, r30
  mr        r4, r31
  bl        0x214
  lbz       r0, 0x8(r3)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0x58
  mr        r3, r30
  mr        r4, r31
  bl        0x1FC
  lbz       r0, 0x8(r3)
  rlwinm.   r0,r0,0,30,30
  bne-      .loc_0x58
  li        r3, 0x1
  b         .loc_0x6C

.loc_0x58:
  addi      r31, r31, 0x1

.loc_0x5C:
  lwz       r0, 0x4(r30)
  cmpw      r31, r0
  blt+      .loc_0x20
  li        r3, 0

.loc_0x6C:
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
 * Address:	8023390C
 * Size:	000078
 */
void Game::TekiStat::Mgr::setOutOfDateAll(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  li        r31, 0
  stw       r30, 0x8(r1)
  mr        r30, r3
  b         .loc_0x54

.loc_0x20:
  mr        r3, r30
  mr        r4, r31
  bl        0x190
  lbz       r0, 0x8(r3)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0x50
  mr        r3, r30
  mr        r4, r31
  bl        0x178
  lbz       r0, 0x8(r3)
  ori       r0, r0, 0x2
  stb       r0, 0x8(r3)

.loc_0x50:
  addi      r31, r31, 0x1

.loc_0x54:
  lwz       r0, 0x4(r30)
  cmpw      r31, r0
  blt+      .loc_0x20
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
 * Address:	80233984
 * Size:	0000C8
 */
void Game::TekiStat::Mgr::clear(void)
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
  li        r3, 0
  lwz       r0, 0x0(r29)
  cmplwi    r0, 0
  beq-      .loc_0x3C
  lwz       r0, 0x4(r29)
  cmpwi     r0, 0
  beq-      .loc_0x3C
  li        r3, 0x1

.loc_0x3C:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x60
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x3A48
  li        r4, 0x3C
  addi      r5, r5, 0x3A5C
  crclr     6, 0x6
  bl        -0x2093A0

.loc_0x60:
  li        r30, 0
  li        r31, 0
  b         .loc_0xA0

.loc_0x6C:
  mr        r3, r29
  mr        r4, r30
  bl        0xCC
  stw       r31, 0x0(r3)
  mr        r3, r29
  mr        r4, r30
  bl        0xBC
  stw       r31, 0x4(r3)
  mr        r3, r29
  mr        r4, r30
  bl        0xAC
  stb       r31, 0x8(r3)
  addi      r30, r30, 0x1

.loc_0xA0:
  lwz       r0, 0x4(r29)
  cmpw      r30, r0
  blt+      .loc_0x6C
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
 * Address:	80233A4C
 * Size:	000060
 */
void Game::TekiStat::Mgr::allocate( (int))
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
  mulli     r3, r31, 0xC
  addi      r3, r3, 0x10
  bl        -0x20FAC4
  lis       r4, 0x8023
  mr        r7, r31
  addi      r4, r4, 0x3AAC
  li        r5, 0
  li        r6, 0xC
  bl        -0x172098
  stw       r3, 0x0(r30)
  stw       r31, 0x4(r30)
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
 * Address:	80233AAC
 * Size:	000018
 */
void Game::TekiStat::Info::__ct(void)
{
/*
.loc_0x0:
  li        r0, 0
  stb       r0, 0x8(r3)
  stw       r0, 0x4(r3)
  stw       r0, 0x0(r3)
  stb       r0, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80233AC4
 * Size:	00007C
 */
void Game::TekiStat::Mgr::getTekiInfo( (int))
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
  lwz       r0, 0x4(r30)
  cmpw      r31, r0
  bge-      .loc_0x34
  li        r3, 0x1

.loc_0x34:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x58
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x3A48
  li        r4, 0x4C
  addi      r5, r5, 0x3A5C
  crclr     6, 0x6
  bl        -0x2094D8

.loc_0x58:
  mulli     r0, r31, 0xC
  lwz       r3, 0x0(r30)
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
 * Address:	........
 * Size:	000058
 */
void Game::TekiStat::Info::write( (Stream &))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void Game::TekiStat::Info::read( (Stream &))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80233B40
 * Size:	0000C0
 */
void Game::TekiStat::Mgr::write( (Stream &))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r28, r4
  mr        r27, r3
  lwz       r4, 0x4(r3)
  mr        r3, r28
  bl        0x1E1C60
  li        r29, 0
  li        r30, 0
  b         .loc_0xA0

.loc_0x30:
  cmpwi     r29, 0
  li        r0, 0
  blt-      .loc_0x48
  cmpw      r29, r3
  bge-      .loc_0x48
  li        r0, 0x1

.loc_0x48:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x6C
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x3A48
  li        r4, 0x4C
  addi      r5, r5, 0x3A5C
  crclr     6, 0x6
  bl        -0x209568

.loc_0x6C:
  lwz       r0, 0x0(r27)
  mr        r3, r28
  add       r31, r0, r30
  lwz       r4, 0x0(r31)
  bl        0x1E1C04
  lwz       r4, 0x4(r31)
  mr        r3, r28
  bl        0x1E1BF8
  mr        r3, r28
  lbz       r4, 0x8(r31)
  bl        0x1E1A9C
  addi      r30, r30, 0xC
  addi      r29, r29, 0x1

.loc_0xA0:
  lwz       r3, 0x4(r27)
  cmpw      r29, r3
  blt+      .loc_0x30
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80233C00
 * Size:	0000EC
 */
void Game::TekiStat::Mgr::read( (Stream &))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r31, r4
  mr        r30, r3
  mr        r3, r31
  bl        0x1E0E74
  lwz       r0, 0x4(r30)
  mr        r29, r3
  cmpw      r29, r0
  beq-      .loc_0x4C
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x3A48
  li        r4, 0x69
  addi      r5, r5, 0x3A5C
  crclr     6, 0x6
  bl        -0x209608

.loc_0x4C:
  stw       r29, 0x4(r30)
  li        r27, 0
  li        r28, 0
  b         .loc_0xCC

.loc_0x5C:
  cmpwi     r27, 0
  li        r0, 0
  blt-      .loc_0x74
  cmpw      r27, r3
  bge-      .loc_0x74
  li        r0, 0x1

.loc_0x74:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x98
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x3A48
  li        r4, 0x4C
  addi      r5, r5, 0x3A5C
  crclr     6, 0x6
  bl        -0x209654

.loc_0x98:
  lwz       r0, 0x0(r30)
  mr        r3, r31
  add       r29, r0, r28
  bl        0x1E0DEC
  stw       r3, 0x0(r29)
  mr        r3, r31
  bl        0x1E0DE0
  stw       r3, 0x4(r29)
  mr        r3, r31
  bl        0x1E07E0
  stb       r3, 0x8(r29)
  addi      r28, r28, 0xC
  addi      r27, r27, 0x1

.loc_0xCC:
  lwz       r3, 0x4(r30)
  cmpw      r27, r3
  blt+      .loc_0x5C
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

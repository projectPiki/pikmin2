

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
 * Address:	80233CEC
 * Size:	00001C
 */
void Game::Highscore::__ct(void)
{
/*
.loc_0x0:
  lis       r4, 0x804C
  li        r0, 0
  addi      r4, r4, 0x1440
  stw       r4, 0x0(r3)
  stw       r0, 0x8(r3)
  stw       r0, 0x4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80233D08
 * Size:	000044
 */
void Game::Highscore::allocate( (int))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r4, 0x8(r3)
  lwz       r0, 0x8(r3)
  rlwinm    r3,r0,2,0,29
  bl        -0x20FD7C
  stw       r3, 0x4(r31)
  mr        r3, r31
  bl        0x3A8
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80233D4C
 * Size:	000088
 */
void Game::Highscore::getScore( (int))
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
  blt-      .loc_0x40
  lwz       r0, 0x8(r30)
  cmpw      r31, r0
  bge-      .loc_0x40
  lwz       r0, 0x4(r30)
  cmplwi    r0, 0
  beq-      .loc_0x40
  li        r3, 0x1

.loc_0x40:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x64
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x3A68
  li        r4, 0x17
  addi      r5, r5, 0x3A7C
  crclr     6, 0x6
  bl        -0x20976C

.loc_0x64:
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
 * Address:	........
 * Size:	00008C
 */
void Game::Highscore::newRecord( (int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80233DD4
 * Size:	000178
 */
void Game::Highscore::entryScore( (int))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r27, r3
  mr        r28, r4
  li        r30, -0x1
  li        r29, 0
  li        r31, 0
  b         .loc_0x54

.loc_0x28:
  lwz       r5, 0x4(r27)
  mr        r3, r27
  mr        r4, r28
  lwzx      r5, r5, r31
  bl        .loc_0x178
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x4C
  mr        r30, r29
  b         .loc_0x60

.loc_0x4C:
  addi      r31, r31, 0x4
  addi      r29, r29, 0x1

.loc_0x54:
  lwz       r0, 0x8(r27)
  cmpw      r29, r0
  blt+      .loc_0x28

.loc_0x60:
  cmpwi     r30, -0x1
  beq-      .loc_0x160
  lwz       r3, 0x8(r27)
  subi      r0, r3, 0x1
  cmpw      r0, r30
  rlwinm    r4,r0,2,0,29
  sub       r3, r0, r30
  ble-      .loc_0x154
  rlwinm.   r0,r3,29,3,31
  mtctr     r0
  beq-      .loc_0x138

.loc_0x8C:
  lwz       r0, 0x4(r27)
  add       r5, r0, r4
  subi      r4, r4, 0x4
  lwz       r0, -0x4(r5)
  stw       r0, 0x0(r5)
  lwz       r0, 0x4(r27)
  add       r5, r0, r4
  subi      r4, r4, 0x4
  lwz       r0, -0x4(r5)
  stw       r0, 0x0(r5)
  lwz       r0, 0x4(r27)
  add       r5, r0, r4
  subi      r4, r4, 0x4
  lwz       r0, -0x4(r5)
  stw       r0, 0x0(r5)
  lwz       r0, 0x4(r27)
  add       r5, r0, r4
  subi      r4, r4, 0x4
  lwz       r0, -0x4(r5)
  stw       r0, 0x0(r5)
  lwz       r0, 0x4(r27)
  add       r5, r0, r4
  subi      r4, r4, 0x4
  lwz       r0, -0x4(r5)
  stw       r0, 0x0(r5)
  lwz       r0, 0x4(r27)
  add       r5, r0, r4
  subi      r4, r4, 0x4
  lwz       r0, -0x4(r5)
  stw       r0, 0x0(r5)
  lwz       r0, 0x4(r27)
  add       r5, r0, r4
  subi      r4, r4, 0x4
  lwz       r0, -0x4(r5)
  stw       r0, 0x0(r5)
  lwz       r0, 0x4(r27)
  add       r5, r0, r4
  subi      r4, r4, 0x4
  lwz       r0, -0x4(r5)
  stw       r0, 0x0(r5)
  bdnz+     .loc_0x8C
  andi.     r3, r3, 0x7
  beq-      .loc_0x154

.loc_0x138:
  mtctr     r3

.loc_0x13C:
  lwz       r0, 0x4(r27)
  add       r5, r0, r4
  subi      r4, r4, 0x4
  lwz       r0, -0x4(r5)
  stw       r0, 0x0(r5)
  bdnz+     .loc_0x13C

.loc_0x154:
  lwz       r3, 0x4(r27)
  rlwinm    r0,r30,2,0,29
  stwx      r28, r3, r0

.loc_0x160:
  mr        r3, r30
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0x178:
*/
}

/*
 * --INFO--
 * Address:	80233F4C
 * Size:	00004C
 */
void Game::Highscore::higher( (int, int))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmpwi     r5, -0x1
  stw       r0, 0x14(r1)
  bne-      .loc_0x1C
  li        r3, 0x1
  b         .loc_0x3C

.loc_0x1C:
  cmpwi     r4, -0x1
  bne-      .loc_0x2C
  li        r3, 0
  b         .loc_0x3C

.loc_0x2C:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x3C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80233F98
 * Size:	000018
 */
void Game::Highscore::do_higher( (int, int))
{
/*
.loc_0x0:
  xor       r0, r4, r5
  srawi     r3, r0, 0x1
  and       r0, r0, r4
  sub       r0, r3, r0
  rlwinm    r3,r0,1,31,31
  blr
*/
}

/*
 * --INFO--
 * Address:	80233FB0
 * Size:	0000B8
 */
void Game::Highscore::read( (Stream &))
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
  lwz       r0, 0x8(r3)
  li        r3, 0
  cmpwi     r0, 0
  ble-      .loc_0x44
  lwz       r0, 0x4(r28)
  cmplwi    r0, 0
  beq-      .loc_0x44
  li        r3, 0x1

.loc_0x44:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x68
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x3A68
  li        r4, 0x3F
  addi      r5, r5, 0x3A7C
  crclr     6, 0x6
  bl        -0x2099D4

.loc_0x68:
  li        r30, 0
  li        r31, 0
  b         .loc_0x8C

.loc_0x74:
  mr        r3, r29
  bl        0x1E0A68
  lwz       r4, 0x4(r28)
  addi      r30, r30, 0x1
  stwx      r3, r4, r31
  addi      r31, r31, 0x4

.loc_0x8C:
  lwz       r0, 0x8(r28)
  cmpw      r30, r0
  blt+      .loc_0x74
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
 * Address:	80234068
 * Size:	000074
 */
void Game::Highscore::write( (Stream &))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  mr        r29, r4
  stw       r28, 0x10(r1)
  mr        r28, r3
  b         .loc_0x48

.loc_0x30:
  lwz       r4, 0x4(r28)
  mr        r3, r29
  lwzx      r4, r4, r31
  bl        0x1E171C
  addi      r31, r31, 0x4
  addi      r30, r30, 0x1

.loc_0x48:
  lwz       r0, 0x8(r28)
  cmpw      r30, r0
  blt+      .loc_0x30
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
 * Address:	802340DC
 * Size:	000030
 */
void Game::Highscore::clear(void)
{
/*
.loc_0x0:
  li        r7, 0
  li        r6, 0
  li        r5, -0x1
  b         .loc_0x20

.loc_0x10:
  lwz       r4, 0x4(r3)
  addi      r7, r7, 0x1
  stwx      r5, r4, r6
  addi      r6, r6, 0x4

.loc_0x20:
  lwz       r0, 0x8(r3)
  cmpw      r7, r0
  blt+      .loc_0x10
  blr
*/
}
